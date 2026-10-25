// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14286930a FUN_14286930a body=5 status=ok
// SIG undefined FUN_14286930a(void)

void FUN_14286930a(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 142869310 FUN_142869310 body=190 status=ok
// SIG undefined FUN_142869310(void)

void FUN_142869310(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14696b2ec(param_1,0);
  }
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_14480809c(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14578aec0(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_14480809c(param_1 + 0x40,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_14578aec0(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}



// FUNCTION 1428693e8 FUN_1428693e8 body=98 status=ok
// SIG undefined FUN_1428693e8(void)

void FUN_1428693e8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
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
    if (*param_1 != 0) {
      FUN_146953e54(*(undefined8 *)(*param_1 + 0xf8));
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
                    /* WARNING: Could not recover jumptable at 0x000142869446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14286944a FUN_14286944a body=55 status=ok
// SIG undefined FUN_14286944a(void)

void FUN_14286944a(void)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c968098;
  if (DAT_14c968098 != 0) {
    cVar2 = FUN_140d2ceff();
    if (cVar2 != '\0') {
      FUN_140898514(lVar1 + 0xd8,0);
      return;
    }
  }
  return;
}



// FUNCTION 142869481 FUN_142869481 body=69 status=ok
// SIG undefined FUN_142869481(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142869481(void)

{
  _DAT_14c96b290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428694c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b298,1);
  return;
}



// FUNCTION 1428694c6 FUN_1428694c6 body=286 status=ok
// SIG undefined FUN_1428694c6(void)

void FUN_1428694c6(undefined8 param_1,undefined4 param_2,undefined8 *param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 *param_9)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar1 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar1;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar1;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar1);
  }
  if ((((float)param_9[3] != 0.0) || (NAN((float)param_9[3]))) && (1 < *(uint *)(param_4 + 8))) {
    if ((0.0 < *(float *)((longlong)param_3 + 0x14) * *(float *)(param_3 + 1)) &&
       (0.0 < *(float *)(param_3 + 1) * *(float *)(param_3 + 3))) {
      cVar5 = FUN_14022c706(param_1);
      if (cVar5 == '\0') {
        lVar6 = FUN_146953928(param_1);
        uVar2 = param_9[1];
        uVar3 = param_9[2];
        uVar4 = param_9[3];
        *(undefined4 *)(lVar6 + 0x50) = *param_9;
        *(undefined4 *)(lVar6 + 0x54) = uVar2;
        *(undefined4 *)(lVar6 + 0x58) = uVar3;
        *(undefined4 *)(lVar6 + 0x5c) = uVar4;
        FUN_146954a9e(lVar6,param_4,param_7,param_5,CONCAT44(uVar7,param_6));
        FUN_14023a0a8(lVar6,param_1,2,param_2,param_3,param_8);
      }
    }
  }
  return;
}



// FUNCTION 1428695e4 FUN_1428695e4 body=661 status=ok
// SIG undefined FUN_1428695e4(void)

void FUN_1428695e4(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined1 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar3 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar3;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar3;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar3) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar3);
  }
  if (1 < *(uint *)(param_4 + 1)) {
    if (((float)param_7[3] != 0.0) || (NAN((float)param_7[3]))) {
      if ((0.0 < *(float *)((longlong)param_3 + 0x14) * *(float *)(param_3 + 1)) &&
         (0.0 < *(float *)(param_3 + 1) * *(float *)(param_3 + 3))) {
        cVar12 = FUN_14022c706(param_1);
        if (cVar12 == '\0') {
          if ((((float)param_7[3] != 0.0) || (NAN((float)param_7[3]))) ||
             ((0 < (int)param_5[2] && (0.0 < *(float *)((longlong)param_5 + 0x2c))))) {
            lVar14 = FUN_146953928(param_1);
            uVar7 = param_7[1];
            uVar8 = param_7[2];
            uVar9 = param_7[3];
            *(undefined4 *)(lVar14 + 0x50) = *param_7;
            *(undefined4 *)(lVar14 + 0x54) = uVar7;
            *(undefined4 *)(lVar14 + 0x58) = uVar8;
            *(undefined4 *)(lVar14 + 0x5c) = uVar9;
            lVar15 = *param_5;
            if (DAT_14c950c29 == 1) {
              if (lVar15 == 0) {
                lVar15 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar15 = *param_5;
              }
            }
            bVar13 = DAT_14c950c29;
            *(longlong *)(lVar14 + 0x60) = lVar15;
            lVar15 = param_5[1];
            if ((bVar13 & 1) != 0) {
              if (lVar15 == 0) {
                lVar15 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar15 = param_5[1];
                bVar13 = DAT_14c950c29;
              }
            }
            *(longlong *)(lVar14 + 0x68) = lVar15;
            lVar15 = param_5[2];
            *(undefined4 *)(lVar14 + 0x73) = *(undefined4 *)((longlong)param_5 + 0x13);
            *(int *)(lVar14 + 0x70) = (int)lVar15;
            lVar15 = param_5[3];
            if ((bVar13 & 1) != 0) {
              if (lVar15 == 0) {
                lVar15 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar15 = param_5[3];
              }
            }
            *(longlong *)(lVar14 + 0x78) = lVar15;
            uVar7 = *(undefined4 *)((longlong)param_5 + 0x24);
            lVar15 = param_5[5];
            uVar8 = *(undefined4 *)((longlong)param_5 + 0x2c);
            *(int *)(lVar14 + 0x80) = (int)param_5[4];
            *(undefined4 *)(lVar14 + 0x84) = uVar7;
            *(int *)(lVar14 + 0x88) = (int)lVar15;
            *(undefined4 *)(lVar14 + 0x8c) = uVar8;
            lVar15 = param_5[6];
            lVar5 = param_5[7];
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            plVar6 = *(longlong **)(lVar14 + 0x98);
            *(longlong *)(lVar14 + 0x90) = lVar15;
            *(longlong *)(lVar14 + 0x98) = lVar5;
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
            lVar15 = param_5[8];
            uVar7 = *(undefined4 *)((longlong)param_5 + 0x44);
            lVar5 = param_5[9];
            uVar8 = *(undefined4 *)((longlong)param_5 + 0x4c);
            lVar10 = param_5[10];
            uVar9 = *(undefined4 *)((longlong)param_5 + 0x54);
            lVar11 = param_5[0xb];
            *(undefined4 *)(lVar14 + 0xac) = *(undefined4 *)((longlong)param_5 + 0x4c);
            *(int *)(lVar14 + 0xb0) = (int)lVar10;
            *(undefined4 *)(lVar14 + 0xb4) = uVar9;
            *(int *)(lVar14 + 0xb8) = (int)lVar11;
            *(int *)(lVar14 + 0xa0) = (int)lVar15;
            *(undefined4 *)(lVar14 + 0xa4) = uVar7;
            *(int *)(lVar14 + 0xa8) = (int)lVar5;
            *(undefined4 *)(lVar14 + 0xac) = uVar8;
            puVar16 = (undefined8 *)(lVar14 + 0xc0);
            if (puVar16 != param_4) {
              iVar4 = *(int *)(param_4 + 1);
              _Src = (void *)*param_4;
              *(int *)(lVar14 + 200) = iVar4;
              if (iVar4 == 0 && *(int *)(lVar14 + 0xcc) == 0) {
                *(undefined4 *)(lVar14 + 0xcc) = 0;
              }
              else {
                FUN_1446dd670(puVar16,iVar4);
                if (iVar4 != 0) {
                  memcpy((void *)*puVar16,_Src,(longlong)iVar4 * 2);
                }
              }
            }
            FUN_14023a0a8(lVar14,param_1,2,param_2,param_3,param_6);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14286987a FUN_14286987a body=750 status=ok
// SIG undefined FUN_14286987a(void)

void FUN_14286987a(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4,
                  undefined1 param_5,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  longlong lVar13;
  
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar4 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar4;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar4;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar4) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar4);
  }
  if (*(int *)(*param_4 + 8) == 0) goto LAB_142869aa4;
  if ((*(float *)((longlong)param_3 + 0x14) * *(float *)(param_3 + 1) <= 0.0) ||
     (*(float *)(param_3 + 1) * *(float *)(param_3 + 3) <= 0.0)) goto LAB_142869aa4;
  cVar12 = FUN_14022c706(param_1);
  if (cVar12 != '\0') goto LAB_142869aa4;
  if (((float)param_6[3] == 0.0) && (!NAN((float)param_6[3]))) {
    if (*(int *)(*param_4 + 0x20) == 0) goto LAB_142869aa4;
    if (((float)param_7[3] == 0.0) && (!NAN((float)param_7[3]))) goto LAB_142869aa4;
  }
  if ((*(int *)(param_1 + 0x8f8) < 1) || (*(int *)(param_1 + 0x8a8) == 0)) {
LAB_142869987:
    plVar1 = (longlong *)(param_1 + 0x1b0);
    iVar5 = *(int *)(param_1 + 0x1b8);
    *(uint *)(param_1 + 0x1b8) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1bc) < iVar5 + 1U) {
      FUN_142875e40(plVar1,iVar5);
    }
    FUN_142875e08(*plVar1 + (longlong)iVar5 * 0x98);
    lVar13 = (longlong)iVar5 * 0x98 + *plVar1;
  }
  else {
    lVar13 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar13 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) != '\0')
    goto LAB_142869987;
    lVar13 = FUN_146969a3c(param_1);
  }
  uVar9 = param_6[1];
  uVar10 = param_6[2];
  uVar11 = param_6[3];
  *(undefined4 *)(lVar13 + 0x50) = *param_6;
  *(undefined4 *)(lVar13 + 0x54) = uVar9;
  *(undefined4 *)(lVar13 + 0x58) = uVar10;
  *(undefined4 *)(lVar13 + 0x5c) = uVar11;
  lVar6 = *param_4;
  plVar1 = (longlong *)param_4[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar13 + 0x68);
  *(longlong *)(lVar13 + 0x60) = lVar6;
  *(longlong **)(lVar13 + 0x68) = plVar1;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  uVar9 = param_7[1];
  uVar10 = param_7[2];
  uVar11 = param_7[3];
  *(undefined4 *)(lVar13 + 0x70) = *param_7;
  *(undefined4 *)(lVar13 + 0x74) = uVar9;
  *(undefined4 *)(lVar13 + 0x78) = uVar10;
  *(undefined4 *)(lVar13 + 0x7c) = uVar11;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  uVar8 = *param_8;
  lVar6 = param_8[1];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  plVar1 = *(longlong **)(lVar13 + 0x88);
  *(undefined8 *)(lVar13 + 0x80) = uVar8;
  *(longlong *)(lVar13 + 0x88) = lVar6;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  *(undefined4 *)(lVar13 + 0x90) = *(undefined4 *)(param_8 + 2);
  FUN_14023a0a8(lVar13,param_1,3,param_2,param_3,param_5);
LAB_142869aa4:
  plVar1 = (longlong *)param_8[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142869ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142869b68 FUN_142869b68 body=2075 status=ok
// SIG undefined FUN_142869b68(void)

void FUN_142869b68(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  undefined1 auStack_3b8 [32];
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  longlong local_380;
  longlong local_378 [100];
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar22 = *(uint *)(param_1 + 1);
  if (uVar22 != 0) {
    local_58 = (longlong *)0x0;
    local_4c = 100;
    local_50 = uVar22;
    local_398 = param_1;
    if ((uVar22 < 0x65) || (FUN_14696b35c(local_378), 0 < (int)local_398[1])) {
      lVar5 = 0xd;
      lVar21 = 0;
      do {
        plVar6 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar6 = local_378;
        }
        *(int *)(plVar6 + lVar21) = (int)lVar21;
        plVar6 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar6 = local_378;
        }
        *(undefined4 *)((longlong)plVar6 + lVar21 * 8 + 4) = *(undefined4 *)(*local_398 + lVar5 * 8)
        ;
        lVar21 = lVar21 + 1;
        lVar5 = lVar5 + 0x14;
      } while (lVar21 < (int)local_398[1]);
    }
    uVar20 = (ulonglong)(int)local_50;
    local_388 = local_58;
    if (local_58 == (longlong *)0x0) {
      local_388 = local_378;
    }
    if (0 < (longlong)uVar20) {
      uVar10 = 1;
      do {
        if ((uVar10 < uVar20) &&
           (*(int *)((longlong)local_388 + uVar10 * 8 + 4) <
            *(int *)((longlong)local_388 + uVar10 * 8 + -4))) {
          lVar5 = local_388[uVar10 - 1];
          local_388[uVar10 - 1] = local_388[uVar10];
          local_388[uVar10] = lVar5;
        }
        uVar11 = uVar10 + 1;
        uVar10 = uVar10 + 2;
      } while (uVar11 < uVar20);
      if (2 < (int)local_50) {
        iVar12 = 2;
        do {
          iVar4 = iVar12 * 2;
          local_390 = (longlong *)CONCAT44(local_390._4_4_,iVar4);
          local_380 = (longlong)iVar4;
          lVar5 = 0;
          do {
            iVar17 = local_50 - (int)lVar5;
            if (iVar4 <= iVar17) {
              iVar17 = iVar4;
            }
            if (iVar12 < iVar17 && 0 < iVar12) {
              iVar15 = 0;
              iVar14 = iVar12;
              while( true ) {
                lVar21 = (longlong)iVar14 * 8 + lVar5 * 8;
                iVar25 = 0;
                if (iVar14 - iVar15 != 0 && iVar15 <= iVar14) {
                  iVar25 = 0;
                  uVar22 = iVar14 - iVar15;
                  do {
                    iVar27 = (uVar22 >> 1) + iVar25;
                    if (*(int *)((longlong)local_388 +
                                (longlong)iVar27 * 8 + (longlong)iVar15 * 8 + lVar5 * 8 + 4) <=
                        *(int *)((longlong)local_388 + lVar21 + 4)) {
                      iVar25 = iVar27 + (uVar22 & 1);
                    }
                    bVar2 = 1 < uVar22;
                    uVar22 = uVar22 >> 1;
                  } while (bVar2);
                }
                iVar25 = iVar25 + iVar15;
                iVar15 = iVar14 - iVar25;
                if (iVar15 == 0 || iVar14 < iVar25) break;
                uVar22 = iVar17 - iVar14;
                if (uVar22 == 0 || iVar17 < iVar14) {
                  iVar27 = 0;
                }
                else {
                  plVar6 = local_388 + lVar5 + iVar25;
                  iVar27 = 0;
                  uVar10 = (ulonglong)uVar22;
                  do {
                    uVar10 = uVar10 >> 1;
                    uVar26 = (uint)uVar10 + iVar27;
                    if (*(int *)((longlong)local_388 + (ulonglong)uVar26 * 8 + lVar21 + 4) <
                        *(int *)((longlong)plVar6 + 4)) {
                      iVar27 = uVar26 + (uVar22 & 1);
                    }
                    bVar2 = 1 < uVar22;
                    uVar22 = (uint)uVar10;
                  } while (bVar2);
                  iVar14 = iVar14 + iVar27;
                  if (0 < iVar27) {
                    plVar24 = plVar6 + (iVar14 - iVar25);
                    plVar8 = plVar6 + iVar15;
                    plVar23 = plVar6 + iVar15;
                    do {
                      while( true ) {
                        plVar1 = plVar8 + 1;
                        lVar21 = *plVar6;
                        *plVar6 = *plVar8;
                        plVar6 = plVar6 + 1;
                        *plVar8 = lVar21;
                        if (plVar1 == plVar24) break;
                        plVar8 = plVar1;
                        if (plVar6 == plVar23) {
                          plVar23 = plVar1;
                        }
                      }
                      plVar8 = plVar23;
                    } while (plVar6 != plVar23);
                  }
                }
                if ((iVar17 <= iVar14) || (iVar15 = iVar25 + iVar27 + 1, iVar14 <= iVar15)) break;
              }
            }
            lVar5 = lVar5 + iVar4;
          } while (lVar5 < (longlong)uVar20);
          iVar12 = iVar4;
        } while (iVar4 < (int)local_50);
      }
    }
    *(undefined8 *)((longlong)local_398 + 0x5c) = 0;
    plVar6 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar6 = local_378;
    }
    *(int *)(local_398 + 0xb) = (int)*plVar6;
    plVar6 = local_398;
    if (0 < (int)local_50) {
      local_390 = local_398 + 8;
      local_388 = local_398 + 6;
      lVar21 = 1;
      lVar16 = 0;
      lVar5 = 0;
      uVar22 = local_50;
      do {
        plVar8 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar8 = local_378;
        }
        lVar13 = (longlong)(int)plVar8[lVar16] * 0xa0;
        lVar18 = lVar21;
        if (((*(byte *)(*plVar6 + 0x90 + lVar13) & 2) == 0) &&
           ((((lVar13 = *plVar6 + lVar13, 0 < *(int *)(lVar13 + 0x74) &&
              (0 < *(int *)(lVar13 + 0x78))) || (*(longlong *)(lVar13 + 0x60) != 0)) ||
            (*(char *)(lVar13 + 0x8c) == '\x06')))) {
          if (lVar5 != 0) {
            *(int *)(lVar5 + 0x7c) = (int)plVar8[lVar16];
          }
          *(int *)(plVar6 + 0xc) = (int)plVar6[0xc] + 1;
          uVar22 = *(uint *)(lVar13 + 0x74);
          if ((0 < (longlong)(int)uVar22) && (0 < *(int *)(lVar13 + 0x78))) {
            iVar12 = *(int *)(lVar13 + 0x6c);
            iVar4 = *(int *)(lVar13 + 0x70);
            *(int *)(lVar13 + 0x6c) = (int)plVar6[7];
            *(int *)(lVar13 + 0x70) = (int)plVar6[9];
            lVar5 = **(longlong **)(lVar13 + 0x50);
            iVar17 = (int)plVar6[7];
            *(uint *)(plVar6 + 7) = uVar22 + iVar17;
            if ((uint)(*(int *)((longlong)plVar6 + 0x3c) - iVar17) < uVar22) {
              FUN_146964c32(local_388,iVar17);
              plVar6 = local_398;
            }
            memcpy((void *)((longlong)iVar17 * 0x2c + plVar6[6]),
                   (void *)((longlong)iVar12 * 0x2c + lVar5),(longlong)(int)uVar22 * 0x2c);
            uVar22 = *(uint *)(lVar13 + 0x78);
            lVar5 = **(longlong **)(lVar13 + 0x58);
            iVar12 = (int)local_398[9];
            *(uint *)(local_398 + 9) = uVar22 + iVar12;
            if ((uint)(*(int *)((longlong)local_398 + 0x4c) - iVar12) < uVar22) {
              FUN_1447808da(local_390,iVar12);
            }
            else {
              plVar6 = local_398;
              if (uVar22 == 0) goto LAB_142869f70;
            }
            memcpy((void *)((longlong)iVar12 * 4 + *local_390),(void *)((longlong)iVar4 * 4 + lVar5)
                   ,(longlong)(int)uVar22 << 2);
            plVar6 = local_398;
          }
LAB_142869f70:
          if (*(longlong *)(lVar13 + 0x38) != 0) {
            *(byte *)((longlong)plVar6 + 100) =
                 *(byte *)((longlong)plVar6 + 100) |
                 *(byte *)(*(longlong *)(lVar13 + 0x38) + 0x34) ^ 1;
          }
          lVar5 = lVar13;
          uVar22 = local_50;
          if ((lVar16 + 1 < (longlong)(int)local_50 & *(byte *)(lVar13 + 0x90)) == 1) {
            plVar8 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar8 = local_378;
            }
            lVar7 = (longlong)(int)plVar8[lVar21] * 0xa0;
            if (*(int *)(*plVar6 + 0x68 + lVar7) == *(int *)(lVar13 + 0x68)) {
              lVar7 = *plVar6 + lVar7;
              local_380 = lVar21;
              do {
                if (((((*(byte *)(lVar7 + 0x90) & 2) == 0) &&
                     (*(longlong *)(lVar13 + 0x40) == *(longlong *)(lVar7 + 0x40))) &&
                    ((*(short *)(lVar13 + 0x8a) == *(short *)(lVar7 + 0x8a) &&
                     (((*(char *)(lVar13 + 0x8c) == *(char *)(lVar7 + 0x8c) &&
                       (*(char *)(lVar13 + 0x8d) == *(char *)(lVar7 + 0x8d))) &&
                      (plVar6 = local_398, *(char *)(lVar13 + 0x8e) == *(char *)(lVar7 + 0x8e)))))))
                   && (((cVar3 = FUN_14287529e(lVar13,lVar7), plVar6 = local_398, cVar3 != '\0' &&
                        (*(longlong *)(lVar13 + 0x48) == *(longlong *)(lVar7 + 0x48))) &&
                       ((*(int *)(lVar13 + 0x80) == *(int *)(lVar7 + 0x80) &&
                        (*(int *)(lVar13 + 0x84) == *(int *)(lVar7 + 0x84))))))) {
                  if ((*(float *)(lVar13 + 0x30) == *(float *)(lVar7 + 0x30)) &&
                     (!NAN(*(float *)(lVar13 + 0x30)) && !NAN(*(float *)(lVar7 + 0x30)))) {
                    if (((*(float *)(lVar13 + 0x34) == *(float *)(lVar7 + 0x34)) &&
                        (((!NAN(*(float *)(lVar13 + 0x34)) && !NAN(*(float *)(lVar7 + 0x34)) &&
                          (*(longlong *)(lVar13 + 0x60) == *(longlong *)(lVar7 + 0x60))) &&
                         (*(char *)(lVar13 + 0x88) == *(char *)(lVar7 + 0x88))))) &&
                       (*(longlong *)(lVar13 + 0x38) == *(longlong *)(lVar7 + 0x38))) {
                      iVar12 = *(int *)(lVar13 + 0x74);
                      iVar4 = *(int *)(lVar7 + 0x74);
                      if (*(int *)(lVar13 + 0x78) < 1 || iVar12 < 1) {
                        if ((0 < iVar4) && (bVar2 = true, 0 < *(int *)(lVar7 + 0x78)))
                        goto LAB_14286a135;
                      }
                      else {
                        bVar2 = 0 < *(int *)(lVar7 + 0x78);
LAB_14286a135:
                        if ((0 < iVar4) && (bVar2)) {
                          *(int *)(lVar13 + 0x74) = iVar4 + iVar12;
                          *(int *)(lVar13 + 0x78) = *(int *)(lVar13 + 0x78) + *(int *)(lVar7 + 0x78)
                          ;
                          uVar22 = *(uint *)(lVar7 + 0x74);
                          iVar4 = *(int *)(lVar7 + 0x6c);
                          lVar18 = **(longlong **)(lVar7 + 0x50);
                          iVar17 = (int)local_398[7];
                          *(uint *)(local_398 + 7) = iVar17 + uVar22;
                          if ((uint)(*(int *)((longlong)local_398 + 0x3c) - iVar17) < uVar22) {
                            FUN_146964c32(local_388,iVar17);
LAB_14286a187:
                            memcpy((void *)((longlong)iVar17 * 0x2c + *local_388),
                                   (void *)((longlong)iVar4 * 0x2c + lVar18),
                                   (longlong)(int)uVar22 * 0x2c);
                          }
                          else if (uVar22 != 0) goto LAB_14286a187;
                          iVar4 = *(int *)(lVar7 + 0x78);
                          iVar17 = (int)local_398[9] + iVar4;
                          if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_1456afac4(iVar17);
                          }
                          if (*(int *)((longlong)local_398 + 0x4c) < iVar17) {
                            FUN_14480809c(local_390);
                            iVar4 = *(int *)(lVar7 + 0x78);
                          }
                          plVar6 = local_398;
                          if (0 < iVar4) {
                            lVar18 = 0;
                            do {
                              iVar4 = *(int *)(**(longlong **)(lVar7 + 0x58) +
                                              (*(int *)(lVar7 + 0x70) + lVar18) * 4);
                              iVar17 = (int)plVar6[9];
                              *(uint *)(plVar6 + 9) = iVar17 + 1U;
                              if (*(uint *)((longlong)plVar6 + 0x4c) < iVar17 + 1U) {
                                FUN_1447808da(local_390,iVar17);
                                plVar6 = local_398;
                              }
                              *(int *)(*local_390 + (longlong)iVar17 * 4) = iVar4 + iVar12;
                              lVar18 = lVar18 + 1;
                            } while ((int)lVar18 < *(int *)(lVar7 + 0x78));
                          }
                        }
                      }
                      *(byte *)(lVar7 + 0x90) = *(byte *)(lVar7 + 0x90) | 2;
                      lVar18 = local_380;
                      uVar22 = local_50;
                    }
                  }
                }
                lVar21 = lVar21 + 1;
                if ((int)uVar22 <= (int)lVar21) break;
                plVar8 = local_58;
                if (local_58 == (longlong *)0x0) {
                  plVar8 = local_378;
                }
                lVar9 = (longlong)(int)plVar8[lVar21] * 0xa0;
                lVar7 = *plVar6 + lVar9;
              } while (*(int *)(*plVar6 + 0x68 + lVar9) == *(int *)(lVar13 + 0x68));
            }
          }
        }
        lVar16 = lVar16 + 1;
        lVar21 = lVar18 + 1;
      } while (lVar16 < (int)uVar22);
    }
    iVar12 = (int)plVar6[10];
    if ((int)plVar6[10] < (int)plVar6[7]) {
      iVar12 = (int)plVar6[7];
    }
    *(int *)(plVar6 + 10) = iVar12;
    iVar12 = *(int *)((longlong)plVar6 + 0x54);
    if (*(int *)((longlong)plVar6 + 0x54) < (int)plVar6[9]) {
      iVar12 = (int)plVar6[9];
    }
    *(int *)((longlong)plVar6 + 0x54) = iVar12;
    if (local_58 != (longlong *)0x0) {
      piVar19 = (int *)((longlong)local_58 + (-8 - (ulonglong)*(uint *)(local_58 + -1)));
      LOCK();
      *piVar19 = *piVar19 + -1;
      UNLOCK();
      if (*piVar19 == 0) {
        if (*(longlong *)(piVar19 + 0x10) - (longlong)piVar19 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar19);
        }
        else {
          FUN_144705e74(piVar19);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14286a384 FUN_14286a384 body=35222 status=ok
// SIG undefined FUN_14286a384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14286a384(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 *puVar41;
  undefined8 uVar42;
  char cVar43;
  char cVar44;
  int iVar45;
  uint uVar46;
  longlong lVar47;
  undefined1 *puVar48;
  undefined8 *puVar49;
  uint uVar50;
  float fVar51;
  longlong *plVar52;
  byte bVar53;
  undefined1 uVar54;
  undefined1 auVar55 [4];
  undefined2 uVar56;
  int iVar57;
  int iVar58;
  undefined4 *puVar59;
  float *pfVar60;
  byte bVar61;
  uint uVar62;
  int iVar63;
  uint uVar64;
  float *pfVar65;
  uint uVar66;
  longlong lVar67;
  longlong *plVar68;
  ulonglong uVar69;
  undefined2 uVar70;
  longlong lVar71;
  uint uVar72;
  undefined1 auVar73 [8];
  uint uVar74;
  undefined8 uVar75;
  ulonglong uVar76;
  int iVar77;
  longlong lVar78;
  ushort uVar79;
  uint uVar80;
  undefined8 *puVar81;
  ulonglong unaff_R15;
  bool bVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar106 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  float fVar111;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar112;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar157;
  float fVar158;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar164;
  undefined4 uVar165;
  undefined4 uVar166;
  undefined4 uVar167;
  float fVar168;
  undefined1 auVar169 [16];
  float fVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  float fVar186;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  float fVar206;
  float fVar207;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar212;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auStack_458 [32];
  longlong *local_438;
  uint local_430;
  uint local_428;
  byte local_420;
  ushort local_418;
  float *local_410;
  longlong local_408;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  undefined8 *local_3e8;
  float local_3dc;
  undefined1 local_3d8 [16];
  longlong *local_3c0;
  float local_3b4;
  ulonglong local_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [8];
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  longlong *local_348;
  ulonglong local_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  ulonglong local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  float local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined4 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [4];
  undefined1 auStack_1d4 [8];
  float fStack_1cc;
  float local_1c8;
  float local_1c4;
  undefined1 *local_1b8;
  float *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined1 local_16e;
  ushort local_16c;
  undefined1 local_16a;
  longlong local_168;
  undefined1 local_158 [16];
  float local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined1 local_110 [2];
  byte bStack_10e;
  ushort uStack_10c;
  undefined1 uStack_10a;
  undefined5 uStack_10d;
  longlong local_108;
  ulonglong local_f0;
  undefined1 auVar163 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  iVar63 = (int)param_2[1];
  local_3e8 = param_1;
  local_348 = param_2;
  local_1f8 = param_3;
  if (0 < iVar63) {
    uVar76 = 0;
    do {
      uVar75 = _local_110;
      local_128 = (undefined1 *)0x0;
      uStack_120 = 0;
      local_138 = 0.0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_148 = 0.0;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      lVar47 = *param_2;
      lVar71 = uVar76 * 0xa0;
      lVar67 = *(longlong *)(lVar47 + 0x88 + lVar71);
      if (lVar67 == 0) {
        local_118 = (longlong *)0x0;
      }
      else {
        local_118 = *(longlong **)(lVar67 + 0x10);
      }
      lVar67 = lVar47 + lVar71;
      bVar53 = *(byte *)(lVar47 + 0x45 + lVar71);
      uVar80 = *(uint *)(lVar67 + 0x28);
      uVar79 = (ushort)((*(uint *)(lVar67 + 0x90) & 0xfffffffe) == 2) << 6 |
               *(ushort *)(lVar67 + 0x48) |
               (ushort)((*(uint *)(lVar67 + 0x90) & 0xfffffffd) == 1) << 5;
      local_158._0_4_ = uVar80;
      _local_110 = CONCAT12(bVar53,2);
      _local_110 = CONCAT24(uVar79,_local_110);
      uVar54 = *(undefined1 *)(lVar67 + 0x44);
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),uVar54);
      uStack_10d._4_1_ = SUB81(uVar75,7);
      _local_110 = CONCAT16(uVar54,_local_110);
      lVar71 = *(longlong *)(lVar67 + 0x30);
      if (lVar71 == 0) {
        iVar77 = *(int *)(lVar67 + 0x38);
        if (((longlong)iVar77 < 0) || ((int)((longlong *)local_3e8[3])[1] <= iVar77)) {
          lVar71 = 0;
        }
        else {
          lVar71 = (longlong)iVar77 * 0x40 + *(longlong *)local_3e8[3];
        }
      }
      local_3d8._0_8_ = local_118;
      iVar77 = (int)uVar76 + 1;
      if (iVar77 < iVar63) {
        iVar77 = iVar63;
      }
      local_248._0_8_ = uVar76 * 0xa0;
      puVar59 = (undefined4 *)(lVar47 + uVar76 * 0xa0 + 200);
      local_268._0_8_ = uVar76;
      local_340 = CONCAT44(local_340._4_4_,(int)uVar76);
      local_108 = lVar71;
      do {
        local_300 = local_340 & 0xffffffff;
        iVar45 = (int)(float)local_340 + 1;
        local_340 = CONCAT44(local_340._4_4_,iVar45);
        if (iVar63 <= iVar45) {
          local_340 = CONCAT44(local_340._4_4_,iVar77);
          break;
        }
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0.0;
        fStack_194 = 0.0;
        uStack_190._0_4_ = 0;
        uStack_190._4_4_ = 0;
        local_1a8._0_4_ = 0.0;
        local_1a8._4_4_ = 0.0;
        uStack_1a0._0_4_ = 0.0;
        uStack_1a0._4_4_ = 0;
        if (*(longlong *)(puVar59 + 0x18) == 0) {
          local_178 = 0;
        }
        else {
          local_178 = *(undefined8 *)(*(longlong *)(puVar59 + 0x18) + 0x10);
        }
        local_16e = *(undefined1 *)((longlong)puVar59 + 0x1d);
        local_16c = (ushort)((puVar59[0x1a] & 0xfffffffe) == 2) << 6 | *(ushort *)(puVar59 + 8) |
                    (ushort)((puVar59[0x1a] & 0xfffffffd) == 1) << 5;
        local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,*puVar59);
        local_170 = 2;
        local_16a = *(undefined1 *)(puVar59 + 7);
        local_168 = *(longlong *)(puVar59 + 2);
        if (local_168 == 0) {
          iVar45 = puVar59[4];
          if (((longlong)iVar45 < 0) || ((int)((longlong *)local_3e8[3])[1] <= iVar45)) {
            local_168 = 0;
          }
          else {
            local_168 = (longlong)iVar45 * 0x40 + *(longlong *)local_3e8[3];
          }
        }
        cVar43 = FUN_142876d2e(&local_1b8,local_158);
        puVar59 = puVar59 + 0x28;
      } while (cVar43 != '\0');
      local_410 = (float *)CONCAT71(local_410._1_7_,uVar54);
      local_438 = (longlong *)local_3d8._0_8_;
      local_428 = local_428 & 0xffffff00;
      local_430 = CONCAT31(local_430._1_3_,2);
      param_3 = (undefined4 *)(ulonglong)uVar80;
      local_420 = bVar53;
      local_418 = uVar79;
      local_408 = lVar71;
      lVar47 = FUN_14023c580(local_3e8,*local_3e8,param_3,&local_148);
      param_2 = local_348;
      iVar63 = 0;
      uVar80 = local_268._0_4_;
      uVar75 = local_248._0_8_;
      if (uVar80 < (uint)(float)local_340) {
        iVar63 = 0;
        uVar76 = local_268._0_8_ & 0xffffffff;
        do {
          param_3 = (undefined4 *)((longlong)(int)uVar76 * 0xa0);
          if (*(int *)(*local_348 + 0x98 + (longlong)param_3) == 3) {
LAB_14286a73f:
            iVar77 = 4;
          }
          else {
            param_3 = (undefined4 *)((longlong)param_3 + *local_348);
            iVar77 = 0x10;
            if (((((float)param_3[0x18] == 0.0) && ((float)param_3[0x19] == 0.0)) &&
                ((float)param_3[0x1a] == 0.0)) &&
               (((float)param_3[0x1b] == 0.0 && (!NAN((float)param_3[0x1b]))))) goto LAB_14286a73f;
          }
          iVar63 = iVar63 + iVar77;
          uVar50 = (int)uVar76 + 1;
          uVar76 = (ulonglong)uVar50;
        } while ((float)local_340 != (float)uVar50);
      }
      iVar77 = *(int *)(*(longlong *)(lVar47 + 0x50) + 8) + iVar63;
      if (iVar77 < 0) goto LAB_142872d0d;
      if (*(int *)(*(longlong *)(lVar47 + 0x50) + 0xc) < iVar77) {
        FUN_14578aec0();
      }
      lVar67 = *(longlong *)(lVar47 + 0x58);
      iVar63 = iVar63 + *(int *)(lVar67 + 8);
      if (iVar63 < 0) goto LAB_142872d14;
      if (*(int *)(lVar67 + 0xc) < iVar63) {
        FUN_14480809c(lVar67,iVar63);
      }
      if ((int)uVar80 <= (int)local_300) {
        uVar80 = uVar80 - 1;
        lVar67 = uVar75 + 0x98;
        do {
          auVar99 = local_268;
          local_268._4_4_ = 0;
          local_268._0_4_ = uVar80;
          lVar71 = *param_2;
          auVar185 = *(undefined1 (*) [16])(lVar71 + -0x48 + lVar67);
          fVar207 = auVar185._12_4_;
          if (*(char *)(local_3e8 + 6) == '\x01') {
            auVar185 = maxps(auVar185,_DAT_149e1a200);
            auVar185 = minps(auVar185,_DAT_149e1a210);
            fVar207 = auVar185._0_4_;
            fVar51 = auVar185._4_4_;
            fVar186 = auVar185._8_4_;
            auVar140._4_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar51 + -0x39000000) >> 0x14) * 4);
            auVar140._0_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 + (ulonglong)((int)fVar207 + 0xc7000000U >> 0x14) * 4);
            auVar140._8_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar186 + -0x39000000) >> 0x14) * 4);
            auVar140._12_4_ = 0;
            auVar113._0_4_ = (uint)fVar207 >> 0xc;
            auVar113._4_4_ = (uint)fVar51 >> 0xc;
            auVar113._8_4_ = (uint)fVar186 >> 0xc;
            auVar113._12_4_ = (uint)auVar185._12_4_ >> 0xc;
            auVar134 = pmaddwd(auVar113 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar140);
            auVar85._4_4_ = (int)(fVar51 * 0.0 + 0.5) | auVar134._4_4_ >> 0x10;
            auVar85._12_4_ = (int)(auVar185._12_4_ * 255.0 + 0.5) | auVar134._12_4_ >> 0x10;
            auVar85._0_4_ = (int)(fVar186 * 0.0 + 0.5) | auVar134._8_4_ >> 0x10;
            auVar85._8_4_ = (int)(fVar207 * 0.0 + 0.5) | auVar134._0_4_ >> 0x10;
            auVar185 = packssdw(auVar85,auVar85);
            sVar8 = auVar185._0_2_;
            sVar9 = auVar185._2_2_;
            sVar10 = auVar185._4_2_;
            sVar11 = auVar185._6_2_;
            bVar53 = (0 < sVar11) * (sVar11 < 0x100) * auVar185[6] - (0xff < sVar11);
            uVar66 = CONCAT13(bVar53,CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar185[4] -
                                              (0xff < sVar10),
                                              CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar185[2] -
                                                       (0xff < sVar9),
                                                       (0 < sVar8) * (sVar8 < 0x100) * auVar185[0] -
                                                       (0xff < sVar8))));
            uVar62 = uVar66 >> 8;
            uVar46 = uVar66 >> 0x10;
            uVar50 = (uint)bVar53;
          }
          else {
            fVar51 = auVar185._4_4_;
            auVar134._4_4_ = fVar207;
            auVar134._0_4_ = fVar207;
            auVar134._8_4_ = fVar207;
            auVar134._12_4_ = fVar207;
            if (fVar207 <= 0.0) {
              auVar201._12_4_ = 0;
              auVar201._0_12_ = auVar134._4_12_;
              auVar134 = auVar201 << 0x20;
            }
            if (1.0 <= auVar134._0_4_) {
              auVar134._0_4_ = 0x3f800000;
            }
            uVar50 = (uint)(auVar134._0_4_ * 255.0 + 0.5);
            auVar12._4_8_ = auVar134._8_8_;
            auVar12._0_4_ = fVar51;
            auVar90._0_8_ = auVar12._0_8_ << 0x20;
            auVar90._8_4_ = auVar185._8_4_;
            auVar90._12_4_ = fVar207;
            auVar145._8_8_ = auVar185._8_8_;
            auVar145._0_8_ = auVar90._8_8_;
            if (auVar185._8_4_ <= 0.0) {
              auVar36._12_4_ = 0;
              auVar36._0_12_ = auVar145._4_12_;
              auVar145 = auVar36 << 0x20;
            }
            if (1.0 <= auVar145._0_4_) {
              auVar145._0_4_ = 0x3f800000;
            }
            uVar66 = (uint)(auVar145._0_4_ * 255.0 + 0.5);
            if (fVar51 <= 0.0) {
              fVar51 = 0.0;
            }
            if (1.0 <= fVar51) {
              fVar51 = 1.0;
            }
            uVar62 = (uint)(fVar51 * 255.0 + 0.5);
            if (auVar185._0_4_ <= 0.0) {
              auVar37._12_4_ = 0;
              auVar37._0_12_ = auVar185._4_12_;
              auVar185 = auVar37 << 0x20;
            }
            if (1.0 <= auVar185._0_4_) {
              auVar185._0_4_ = 0x3f800000;
            }
            uVar46 = (uint)(auVar185._0_4_ * 255.0 + 0.5);
          }
          param_3 = (undefined4 *)(ulonglong)uVar62;
          pfVar65 = *(float **)(lVar71 + -0x10 + lVar67);
          if (pfVar65 == (float *)0x0) {
            fVar207 = *(float *)((longlong)local_3e8 + 0x2c);
            uVar72 = 1;
            local_368 = ZEXT816(0);
            fVar51 = 1.0;
            fVar186 = 1.0;
            auVar185 = ZEXT816(0x3f800000);
            local_318 = ZEXT816(0x3f800000);
            local_398 = ZEXT816(0);
            uVar74 = 1;
            fVar158 = fVar207;
          }
          else {
            uVar74 = (int)pfVar65[6] + (uint)(pfVar65[6] == 0.0);
            uVar72 = (int)pfVar65[7] + (uint)(pfVar65[7] == 0.0);
            fVar158 = *(float *)((longlong)local_3e8 + 0x2c) / (float)uVar72;
            fVar207 = *(float *)((longlong)local_3e8 + 0x2c) / (float)uVar74;
            if (*(char *)(lVar71 + -0x18 + lVar67) == '\x01') {
              fVar83 = *(float *)(lVar71 + -0x28 + lVar67);
              fVar206 = *(float *)(lVar71 + -0x24 + lVar67);
              fVar186 = *(float *)(lVar71 + -0x1c + lVar67) - fVar206;
              fVar51 = *(float *)(lVar71 + -0x20 + lVar67) - fVar83;
              fVar206 = fVar206 + fVar158;
              local_398 = ZEXT416((uint)fVar206);
              fVar83 = fVar83 + fVar207;
              local_368 = ZEXT416((uint)fVar83);
              local_318 = ZEXT416((uint)(fVar206 + fVar186));
              auVar185 = ZEXT416((uint)(fVar83 + fVar51));
            }
            else {
              fVar51 = pfVar65[2];
              fVar186 = pfVar65[3];
              local_398 = ZEXT416((uint)(pfVar65[1] + fVar158));
              local_368 = ZEXT416((uint)(*pfVar65 + fVar207));
              local_318 = ZEXT416((uint)(fVar186 + pfVar65[1] + fVar158));
              auVar185 = ZEXT416((uint)(fVar51 + *pfVar65 + fVar207));
            }
          }
          fVar83 = *(float *)(lVar71 + -0x78 + lVar67);
          uVar64 = *(uint *)(lVar71 + -8 + lVar67);
          fVar206 = (float)uVar74;
          if ((uVar64 & 0xfffffffd) == 1) {
            local_3ec = fVar83 / fVar206;
          }
          else {
            local_3ec = 1.0;
          }
          fVar84 = *(float *)(lVar71 + -0x74 + lVar67);
          fVar112 = (float)uVar72;
          if ((uVar64 & 0xfffffffe) == 2) {
            fVar212 = fVar84 / fVar112;
          }
          else {
            fVar212 = 1.0;
          }
          local_3a8._0_4_ = fVar212;
          bVar53 = *(byte *)(lVar71 + -0x53 + lVar67);
          local_3b0 = CONCAT71(local_3b0._1_7_,bVar53);
          local_3f8 = *(float *)(lVar71 + -0x98 + lVar67);
          local_3f0 = *(float *)(lVar71 + -0x94 + lVar67);
          local_3f4 = *(float *)(lVar71 + -0x90 + lVar67);
          local_3b4 = *(float *)(lVar71 + -0x8c + lVar67);
          fVar212 = *(float *)(lVar71 + -0x88 + lVar67);
          auVar134 = ZEXT416((uint)fVar212);
          fVar111 = *(float *)(lVar71 + -0x84 + lVar67);
          local_3d8 = ZEXT416((uint)fVar111);
          fVar157 = *(float *)(lVar71 + -0x58 + lVar67);
          uVar72 = *(uint *)(lVar71 + -4 + lVar67);
          local_3c0 = (longlong *)(ulonglong)*(uint *)(lVar47 + 0x74);
          uVar66 = uVar66 & 0xff;
          local_388._0_4_ = fVar84;
          local_248._0_8_ = lVar67;
          fVar164 = auVar185._0_4_;
          uVar166 = auVar185._8_4_;
          uVar167 = auVar185._12_4_;
          fVar168 = local_318._0_4_;
          auVar227._4_12_ = local_318._4_12_;
          local_338 = auVar134;
          if (*(int *)(lVar71 + lVar67) == 3) {
LAB_14286aba7:
            if (uVar72 - 1 < 3) {
              if ((uVar72 & 0xfffffffd) == 1) {
                fVar207 = fVar164 - (float)local_368._0_4_;
                local_368._0_4_ = fVar164 - ((float)local_368._0_4_ - (float)local_368._0_4_);
                local_368._4_12_ = auVar185._4_12_;
                fVar164 = fVar164 - fVar207;
              }
              if ((uVar72 & 0xfffffffe) == 2) {
                fVar207 = fVar168 - (float)local_398._0_4_;
                local_398._0_4_ = fVar168 - ((float)local_398._0_4_ - (float)local_398._0_4_);
                local_398._4_12_ = auVar227._4_12_;
                auVar227._0_4_ = fVar168 - fVar207;
                local_318 = auVar227;
              }
            }
            fVar206 = local_3b4 * 0.0;
            fVar158 = local_3f0 * 0.0;
            fVar51 = local_3f4 * 0.0;
            fVar186 = local_3f8 * 0.0;
            fVar207 = fVar158 + fVar206 + fVar111;
            fVar212 = fVar186 + fVar51 + fVar212;
            local_268._8_8_ = auVar99._8_8_;
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar212 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar212 = auVar185._0_4_;
              auVar185 = blendps(ZEXT416((uint)(fVar207 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar207 = auVar185._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            uVar165 = 0;
            fVar112 = fVar83;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_2b8._0_4_ = uVar66;
              local_2f8._4_4_ = 0;
              local_2f8._0_4_ = fVar164;
              local_2f8._8_4_ = uVar166;
              local_2f8._12_4_ = uVar167;
              local_3dc = fVar83;
              FUN_146964c32(plVar52,iVar63);
              fVar164 = (float)local_2f8._0_4_;
              uVar165 = local_2f8._4_4_;
              uVar166 = local_2f8._8_4_;
              uVar167 = local_2f8._12_4_;
              uVar66 = local_2b8._0_4_;
              bVar53 = (byte)local_3b0;
              fVar112 = local_3dc;
            }
            uVar66 = (uVar62 & 0xff) << 8 | (uVar46 & 0xff) << 0x10 | uVar50 << 0x18 | uVar66;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_368._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_398._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = local_3a8._0_4_;
            *(float *)(lVar67 + 0x10 + lVar71) = 0.0 / fVar83;
            *(float *)(lVar67 + 0x14 + lVar71) = 0.0 / fVar84;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar212;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar207;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            uVar56 = (undefined2)((uint)(int)ROUND(fVar83 * fVar157 + fVar83 * fVar157 + 0.5) >> 1);
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            uVar70 = (undefined2)((uint)(int)ROUND(fVar157 * fVar84 + fVar157 * fVar84 + 0.5) >> 1);
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar207 = local_3f0 * fVar112;
            fVar212 = local_3f8 * fVar112;
            fVar206 = fVar206 + fVar207 + fVar111;
            fVar51 = fVar51 + fVar212 + (float)local_338._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar51 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar51 = auVar185._0_4_;
              auVar185 = blendps(ZEXT416((uint)(fVar206 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar206 = auVar185._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_2f8._4_4_ = uVar165;
              local_2f8._0_4_ = fVar164;
              local_2f8._8_4_ = uVar166;
              local_2f8._12_4_ = uVar167;
              FUN_146964c32(plVar52,iVar63);
              fVar164 = (float)local_2f8._0_4_;
              uVar165 = local_2f8._4_4_;
              uVar166 = local_2f8._8_4_;
              uVar167 = local_2f8._12_4_;
              bVar53 = (byte)local_3b0;
            }
            auVar185 = local_318;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(float *)(lVar67 + lVar71) = fVar164;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_398._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = local_3a8._0_4_;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar112 / fVar112;
            *(float *)(lVar67 + 0x14 + lVar71) = 0.0 / fVar84;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar51;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar206;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar206 = local_3b4 * (float)local_388._0_4_;
            fVar51 = local_3f4 * (float)local_388._0_4_;
            fVar158 = fVar158 + fVar206 + fVar111;
            fVar186 = fVar186 + fVar51 + (float)local_338._0_4_;
            uVar2 = local_3a8._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
              auVar99 = blendps(ZEXT416((uint)(fVar158 + 0.5)),ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar158 = auVar99._0_4_;
              uVar2 = local_3a8._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_2f8._4_4_ = uVar165;
              local_2f8._0_4_ = fVar164;
              local_2f8._8_4_ = uVar166;
              local_2f8._12_4_ = uVar167;
              local_3f4 = fVar51;
              FUN_146964c32(plVar52,iVar63);
              fVar164 = (float)local_2f8._0_4_;
              bVar53 = (byte)local_3b0;
              uVar2 = local_3a8._0_4_;
              fVar51 = local_3f4;
            }
            fVar84 = (float)local_388._0_4_ / (float)local_388._0_4_;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(int *)(lVar67 + lVar71) = local_368._0_4_;
            *(int *)(lVar67 + 4 + lVar71) = auVar185._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar2;
            *(float *)(lVar67 + 0x10 + lVar71) = 0.0 / fVar83;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar84;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar186;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar111 = fVar111 + fVar207 + fVar206;
            unaff_XMM9._4_12_ = local_338._4_12_;
            unaff_XMM9._0_4_ = local_338._0_4_ + fVar212 + fVar51;
            if ((bVar53 & 0x10) == 0) {
              auVar99._0_4_ = unaff_XMM9._0_4_ + 0.5;
              auVar99._4_12_ = unaff_XMM9._4_12_;
              auVar99 = blendps(auVar99,ZEXT816(0),0xe);
              unaff_XMM9 = roundps(auVar99,auVar99,1);
              auVar99 = blendps(ZEXT416((uint)(fVar111 + 0.5)),ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar111 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              uVar2 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(float *)(lVar67 + lVar71) = fVar164;
            *(int *)(lVar67 + 4 + lVar71) = auVar185._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar2;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar112 / fVar112;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar84;
            *(int *)(lVar67 + 0x18 + lVar71) = unaff_XMM9._0_4_;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar111;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            uVar80 = local_268._0_4_;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 1;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 2;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 2;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 1;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            uVar50 = iVar77 + 3;
          }
          else {
            fVar170 = *(float *)(lVar71 + -0x38 + lVar67);
            local_3dc = *(float *)(lVar71 + -0x34 + lVar67);
            local_2e8._0_4_ = fVar170;
            fVar3 = *(float *)(lVar71 + -0x30 + lVar67);
            fVar4 = *(float *)(lVar71 + -0x2c + lVar67);
            if (((fVar170 == 0.0) && (!NAN(fVar170))) &&
               ((local_3dc == 0.0 && (((fVar3 == 0.0 && (fVar4 == 0.0)) && (!NAN(fVar4)))))))
            goto LAB_14286aba7;
            local_288 = (float)(~-(uint)(0.0 < fVar170) & local_368._0_4_ |
                               (uint)(fVar170 * fVar51 + (float)local_368._0_4_ + fVar207) &
                               -(uint)(0.0 < fVar170));
            uStack_280 = local_368._8_4_;
            uStack_27c = local_368._12_4_;
            local_258._0_4_ =
                 ~-(uint)(0.0 < local_3dc) & local_398._0_4_ |
                 (uint)(local_3dc * fVar186 + (float)local_398._0_4_ + fVar158) &
                 -(uint)(0.0 < local_3dc);
            local_258._4_4_ = 0;
            local_258._8_4_ = local_398._8_4_;
            local_258._12_4_ = local_398._12_4_;
            local_278._0_4_ =
                 ~-(uint)(0.0 < fVar3) & (uint)fVar164 |
                 (uint)((fVar164 - fVar51 * fVar3) + fVar207) & -(uint)(0.0 < fVar3);
            local_278._4_4_ = 0;
            local_278._8_4_ = uVar166;
            local_278._12_4_ = uVar167;
            local_298._0_4_ =
                 ~-(uint)(0.0 < fVar4) & (uint)fVar168 |
                 (uint)((fVar168 - fVar186 * fVar4) + fVar158) & -(uint)(0.0 < fVar4);
            local_298._4_4_ = 0;
            local_298._8_4_ = local_318._8_4_;
            local_298._12_4_ = local_318._12_4_;
            local_2f8 = auVar185;
            if (uVar72 - 1 < 3) {
              if ((uVar72 & 0xfffffffd) == 1) {
                fVar207 = fVar164 - (float)local_368._0_4_;
                local_278._0_4_ = (float)local_278._0_4_ - (float)local_368._0_4_;
                local_288 = fVar164 - (local_288 - (float)local_368._0_4_);
                local_368._4_4_ = 0;
                local_368._0_4_ = fVar164 - ((float)local_368._0_4_ - (float)local_368._0_4_);
                local_368._8_4_ = uVar166;
                local_368._12_4_ = uVar167;
                local_2f8._4_4_ = 0;
                local_2f8._0_4_ = fVar164 - fVar207;
                local_2f8._8_4_ = uVar166;
                local_2f8._12_4_ = uVar167;
                local_278._4_4_ = 0;
                local_278._0_4_ = fVar164 - (float)local_278._0_4_;
                uStack_280 = uVar166;
                uStack_27c = uVar167;
              }
              if ((uVar72 & 0xfffffffe) == 2) {
                fVar207 = fVar168 - (float)local_398._0_4_;
                local_258._0_4_ = (float)local_258._0_4_ - (float)local_398._0_4_;
                local_298._0_4_ = (float)local_298._0_4_ - (float)local_398._0_4_;
                local_398._0_4_ = fVar168 - ((float)local_398._0_4_ - (float)local_398._0_4_);
                local_398._4_12_ = auVar227._4_12_;
                local_258._0_4_ = fVar168 - (float)local_258._0_4_;
                local_258._4_12_ = auVar227._4_12_;
                local_298._0_4_ = fVar168 - (float)local_298._0_4_;
                local_298._4_12_ = auVar227._4_12_;
                local_318._4_4_ = 0;
                local_318._0_4_ = fVar168 - fVar207;
              }
            }
            uStack_284 = 0;
            local_2e8._0_4_ = fVar170 * fVar206;
            fVar51 = fVar83 - fVar3 * fVar206;
            local_2a8 = ZEXT416((uint)fVar51);
            local_228 = ZEXT416((uint)(fVar83 * 0.5));
            fVar207 = fVar83 * 0.5;
            if ((float)local_2e8._0_4_ <= fVar51) {
              fVar207 = (float)local_2e8._0_4_;
            }
            local_3dc = local_3dc * fVar112;
            fVar186 = fVar84 - fVar4 * fVar112;
            local_378 = ZEXT416((uint)fVar186);
            local_358 = ZEXT416((uint)(fVar84 * 0.5));
            fVar51 = fVar84 * 0.5;
            if (local_3dc <= fVar186) {
              fVar51 = local_3dc;
            }
            fVar112 = local_3b4 * 0.0;
            local_2d8 = ZEXT416((uint)(local_3f0 * 0.0));
            fVar206 = local_3f4 * 0.0;
            fVar158 = local_3f8 * 0.0;
            fVar111 = local_3f0 * 0.0 + fVar112 + fVar111;
            fVar186 = fVar158 + fVar206 + fVar212;
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar186 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar186 = auVar185._0_4_;
              auVar185 = blendps(ZEXT416((uint)(fVar111 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar111 = auVar185._0_4_;
            }
            uVar72 = (uint)ROUND(fVar157 * fVar84 + fVar157 * fVar84 + 0.5);
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            local_218._0_4_ = 0.0 / fVar83;
            fVar164 = 0.0 / fVar83;
            local_268 = auVar99;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_2b8._0_4_ = uVar66;
              local_238._0_4_ = uVar72;
              FUN_146964c32(plVar52,iVar63);
              uVar66 = local_2b8._0_4_;
              bVar53 = (byte)local_3b0;
              uVar72 = local_238._0_4_;
              fVar164 = (float)local_218._0_4_;
            }
            local_208 = ZEXT416((uint)fVar158);
            uVar66 = (uVar62 & 0xff) << 8 | (uVar46 & 0xff) << 0x10 | uVar50 << 0x18 | uVar66;
            param_3 = (undefined4 *)(ulonglong)(uVar72 >> 1);
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_368._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_398._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = local_3a8._0_4_;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar164;
            local_328._0_4_ = 0.0 / fVar84;
            *(float *)(lVar67 + 0x14 + lVar71) = 0.0 / fVar84;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar186;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar111;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            uVar56 = (undefined2)((uint)(int)ROUND(fVar83 * fVar157 + fVar83 * fVar157 + 0.5) >> 1);
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            uVar70 = (undefined2)(uVar72 >> 1);
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar111 = local_3b4 * fVar51;
            auVar187._4_12_ = local_2d8._4_12_;
            fVar186 = local_3f4 * fVar51;
            fVar84 = local_2d8._0_4_ + fVar111 + (float)local_3d8._0_4_;
            fVar158 = fVar158 + fVar186 + fVar212;
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar158 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar158 = auVar185._0_4_;
              auVar187._0_4_ = fVar84 + 0.5;
              auVar185 = blendps(auVar187,ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar84 = auVar185._0_4_;
            }
            fVar51 = fVar51 / (float)local_388._0_4_;
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              bVar53 = (byte)local_3b0;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_368._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_258._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = local_3a8._0_4_;
            *(undefined4 *)(lVar67 + 0x10 + lVar71) = local_218._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar51;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar84;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            local_238 = ZEXT416((uint)(fVar207 * local_3f0));
            local_2b8 = ZEXT416((uint)(fVar207 * local_3f8));
            fVar158 = fVar207 * local_3f0 + fVar112 + (float)local_3d8._0_4_;
            fVar84 = fVar207 * local_3f8 + fVar206 + fVar212;
            uVar166 = local_3a8._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar84 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar84 = auVar185._0_4_;
              auVar185 = blendps(ZEXT416((uint)(fVar158 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar158 = auVar185._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            fVar207 = fVar207 / fVar83;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(float *)(lVar67 + lVar71) = local_288;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_398._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar207;
            *(undefined4 *)(lVar67 + 0x14 + lVar71) = local_328._0_4_;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar188._4_12_ = local_238._4_12_;
            auVar202._4_12_ = local_2b8._4_12_;
            fVar158 = local_238._0_4_ + fVar111 + (float)local_3d8._0_4_;
            fVar84 = local_2b8._0_4_ + fVar186 + fVar212;
            local_2c8._0_4_ = fVar51;
            if ((bVar53 & 0x10) == 0) {
              auVar202._0_4_ = fVar84 + 0.5;
              auVar185 = blendps(auVar202,ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar84 = auVar185._0_4_;
              auVar188._0_4_ = fVar158 + 0.5;
              auVar185 = blendps(auVar188,ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar158 = auVar185._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            auVar197._4_4_ = local_228._4_4_ & local_2a8._4_4_;
            auVar197._0_4_ =
                 local_228._0_4_ & -(uint)((float)local_2a8._0_4_ < (float)local_2e8._0_4_);
            auVar197._8_4_ = local_228._8_4_ & local_2a8._8_4_;
            auVar197._12_4_ = local_228._12_4_ & local_2a8._12_4_;
            auVar197 = ZEXT416(~-(uint)((float)local_2a8._0_4_ < (float)local_2e8._0_4_) &
                               local_2a8._0_4_) | auVar197;
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            local_228._0_4_ = fVar207;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
              fVar207 = (float)local_228._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(float *)(lVar67 + lVar71) = local_288;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_258._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar207;
            *(undefined4 *)(lVar67 + 0x14 + lVar71) = local_2c8._0_4_;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar51 = auVar197._0_4_;
            auVar198._4_4_ = auVar197._4_4_;
            auVar198._8_4_ = auVar197._8_4_;
            auVar198._12_4_ = auVar197._12_4_;
            auVar189._4_12_ = auVar197._4_12_;
            auVar189._0_4_ = fVar51 * local_3f0;
            local_2e8._0_4_ = fVar51 * local_3f8;
            local_2e8._4_12_ = auVar189._4_12_;
            fVar207 = auVar189._0_4_ + fVar112 + (float)local_3d8._0_4_;
            fVar158 = (float)local_2e8._0_4_ + fVar206 + fVar212;
            auVar185 = ZEXT816(0);
            if ((bVar53 & 0x10) == 0) {
              auVar203._0_4_ = fVar158 + 0.5;
              auVar203._4_12_ = auVar189._4_12_;
              auVar99 = blendps(auVar203,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar158 = auVar99._0_4_;
              auVar190._0_4_ = fVar207 + 0.5;
              auVar190._4_12_ = auVar189._4_12_;
              auVar99 = blendps(auVar190,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar207 = auVar99._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            local_2a8 = auVar189;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            unaff_XMM9._0_4_ = fVar51 / fVar83;
            unaff_XMM9._4_12_ = auVar189._4_12_;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_278._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_398._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = unaff_XMM9._0_4_;
            *(undefined4 *)(lVar67 + 0x14 + lVar71) = local_328._0_4_;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar207;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar191._4_12_ = local_2a8._4_12_;
            auVar204._4_12_ = local_2e8._4_12_;
            fVar207 = local_2a8._0_4_ + fVar111 + (float)local_3d8._0_4_;
            fVar51 = local_2e8._0_4_ + fVar186 + fVar212;
            if ((bVar53 & 0x10) == 0) {
              auVar204._0_4_ = fVar51 + 0.5;
              auVar99 = blendps(auVar204,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar51 = auVar99._0_4_;
              auVar191._0_4_ = fVar207 + 0.5;
              auVar99 = blendps(auVar191,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar207 = auVar99._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            uVar167 = local_328._0_4_;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
              uVar167 = local_328._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_278._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_258._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = unaff_XMM9._0_4_;
            *(undefined4 *)(lVar67 + 0x14 + lVar71) = local_2c8._0_4_;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar51;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar207;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar51 = local_3f0 * fVar83;
            fVar207 = local_3f8 * fVar83;
            fVar84 = fVar112 + fVar51 + (float)local_3d8._0_4_;
            fVar158 = fVar206 + fVar207 + fVar212;
            if ((bVar53 & 0x10) == 0) {
              auVar99 = blendps(ZEXT416((uint)(fVar158 + 0.5)),auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar158 = auVar99._0_4_;
              auVar99 = blendps(ZEXT416((uint)(fVar84 + 0.5)),auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              auVar198._0_4_ = unaff_XMM9._0_4_;
              FUN_146964c32(plVar52,iVar63);
              unaff_XMM9 = auVar198;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
              uVar167 = local_328._0_4_;
            }
            auVar99 = local_238;
            fVar83 = fVar83 / fVar83;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_2f8._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_398._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar83;
            *(undefined4 *)(lVar67 + 0x14 + lVar71) = uVar167;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar84;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar158 = fVar111 + fVar51 + (float)local_3d8._0_4_;
            fVar186 = fVar186 + fVar207 + fVar212;
            if ((bVar53 & 0x10) == 0) {
              auVar201 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar185,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar186 = auVar201._0_4_;
              auVar201 = blendps(ZEXT416((uint)(fVar158 + 0.5)),auVar185,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar158 = auVar201._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            fVar206 = (float)(~-(uint)((float)local_378._0_4_ < local_3dc) & local_378._0_4_ |
                             local_358._0_4_ & -(uint)((float)local_378._0_4_ < local_3dc));
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_2f8._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_258._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar83;
            *(undefined4 *)(lVar67 + 0x14 + lVar71) = local_2c8._0_4_;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar186;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar186 = local_3b4 * fVar206;
            auVar192._4_12_ = local_2d8._4_12_;
            fVar84 = local_3f4 * fVar206;
            auVar213._4_12_ = local_208._4_12_;
            fVar158 = local_2d8._0_4_ + fVar186 + (float)local_3d8._0_4_;
            fVar212 = local_208._0_4_ + fVar84 + fVar212;
            if ((bVar53 & 0x10) == 0) {
              auVar213._0_4_ = fVar212 + 0.5;
              auVar201 = blendps(auVar213,auVar185,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar212 = auVar201._0_4_;
              auVar192._0_4_ = fVar158 + 0.5;
              auVar185 = blendps(auVar192,auVar185,0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar158 = auVar185._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            auVar185 = local_2a8;
            fVar206 = fVar206 / (float)local_388._0_4_;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_368._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_298._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(undefined4 *)(lVar67 + 0x10 + lVar71) = local_218._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar212;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar193._4_12_ = auVar99._4_12_;
            auVar214._4_12_ = local_2b8._4_12_;
            fVar158 = auVar99._0_4_ + fVar186 + (float)local_3d8._0_4_;
            fVar112 = local_2b8._0_4_ + fVar84 + auVar134._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar214._0_4_ = fVar112 + 0.5;
              auVar99 = blendps(auVar214,ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar112 = auVar99._0_4_;
              auVar193._0_4_ = fVar158 + 0.5;
              auVar99 = blendps(auVar193,ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar158 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(float *)(lVar67 + lVar71) = local_288;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_298._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(undefined4 *)(lVar67 + 0x10 + lVar71) = local_228._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar112;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar194._4_12_ = auVar185._4_12_;
            auVar215._4_12_ = local_2e8._4_12_;
            fVar158 = auVar185._0_4_ + fVar186 + (float)local_3d8._0_4_;
            fVar112 = local_2e8._0_4_ + fVar84 + auVar134._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar215._0_4_ = fVar112 + 0.5;
              auVar185 = blendps(auVar215,ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar112 = auVar185._0_4_;
              auVar194._0_4_ = fVar158 + 0.5;
              auVar185 = blendps(auVar194,ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar158 = auVar185._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            auVar185 = ZEXT816(0);
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_278._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_298._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(int *)(lVar67 + 0x10 + lVar71) = unaff_XMM9._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar112;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar186 = fVar186 + fVar51 + (float)local_3d8._0_4_;
            fVar158 = fVar84 + fVar207 + auVar134._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar99 = blendps(ZEXT416((uint)(fVar158 + 0.5)),auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar158 = auVar99._0_4_;
              auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            fVar84 = (float)local_388._0_4_;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              fVar84 = (float)local_388._0_4_;
              uVar166 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_2f8._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_298._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar83;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar158 = local_3b4 * fVar84;
            auVar141._4_12_ = local_2d8._4_12_;
            fVar206 = local_3f4 * fVar84;
            auVar228._4_12_ = local_208._4_12_;
            fVar186 = local_2d8._0_4_ + fVar158 + (float)local_3d8._0_4_;
            fVar112 = local_208._0_4_ + fVar206 + auVar134._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar228._0_4_ = fVar112 + 0.5;
              auVar99 = blendps(auVar228,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar112 = auVar99._0_4_;
              auVar141._0_4_ = fVar186 + 0.5;
              auVar99 = blendps(auVar141,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              local_3dc = fVar83;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
              fVar83 = local_3dc;
            }
            fVar84 = fVar84 / fVar84;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_368._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_318._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(undefined4 *)(lVar67 + 0x10 + lVar71) = local_218._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar84;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar112;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar229._4_12_ = local_238._4_12_;
            auVar172._4_12_ = local_2b8._4_12_;
            fVar186 = local_238._0_4_ + fVar158 + (float)local_3d8._0_4_;
            auVar172._0_4_ = local_2b8._0_4_ + fVar206 + auVar134._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar171._0_4_ = auVar172._0_4_ + 0.5;
              auVar171._4_12_ = auVar172._4_12_;
              auVar99 = blendps(auVar171,auVar185,0xe);
              auVar172 = roundps(auVar99,auVar99,1);
              auVar229._0_4_ = fVar186 + 0.5;
              auVar99 = blendps(auVar229,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              local_2b8 = auVar172;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar172 = local_2b8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(float *)(lVar67 + lVar71) = local_288;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_318._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(undefined4 *)(lVar67 + 0x10 + lVar71) = local_228._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar84;
            *(int *)(lVar67 + 0x18 + lVar71) = auVar172._0_4_;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar230._4_12_ = local_2a8._4_12_;
            auVar174._4_12_ = local_2e8._4_12_;
            fVar186 = local_2a8._0_4_ + fVar158 + (float)local_3d8._0_4_;
            auVar174._0_4_ = local_2e8._0_4_ + fVar206 + auVar134._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar173._0_4_ = auVar174._0_4_ + 0.5;
              auVar173._4_12_ = auVar174._4_12_;
              auVar99 = blendps(auVar173,auVar185,0xe);
              auVar174 = roundps(auVar99,auVar99,1);
              auVar230._0_4_ = fVar186 + 0.5;
              auVar99 = blendps(auVar230,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_3f8 = fVar207;
              local_2e8 = auVar174;
              FUN_146964c32(plVar52,iVar63);
              fVar207 = local_3f8;
              auVar174 = local_2e8;
              auVar134 = local_338;
              bVar53 = (byte)local_3b0;
              uVar166 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_278._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_318._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(int *)(lVar67 + 0x10 + lVar71) = unaff_XMM9._0_4_;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar84;
            *(int *)(lVar67 + 0x18 + lVar71) = auVar174._0_4_;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            local_3d8._0_4_ = local_3d8._0_4_ + fVar51 + fVar158;
            auVar177._4_12_ = auVar134._4_12_;
            fVar207 = auVar134._0_4_ + fVar207 + fVar206;
            if ((bVar53 & 0x10) == 0) {
              auVar177._0_4_ = fVar207 + 0.5;
              auVar99 = blendps(auVar177,auVar185,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar207 = auVar99._0_4_;
              auVar142._0_4_ = (float)local_3d8._0_4_ + 0.5;
              auVar142._4_12_ = local_3d8._4_12_;
              auVar185 = blendps(auVar142,auVar185,0xe);
              local_3d8 = roundps(auVar185,auVar185,1);
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
              uVar166 = local_3a8._0_4_;
            }
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_2f8._0_4_;
            *(int *)(lVar67 + 4 + lVar71) = local_318._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3ec;
            *(undefined4 *)(lVar67 + 0xc + lVar71) = uVar166;
            *(float *)(lVar67 + 0x10 + lVar71) = fVar83;
            *(float *)(lVar67 + 0x14 + lVar71) = fVar84;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar207;
            *(undefined4 *)(lVar67 + 0x1c + lVar71) = local_3d8._0_4_;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar66;
            *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0xff000000;
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = iVar77 + 1;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = iVar77 + 2;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar58 = iVar77 + 3;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = iVar77 + 4;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)local_3c0 + 5;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            plVar68 = local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)plVar68 + 6;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            plVar68 = local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)plVar68 + 7;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = (int)local_3c0 + 8;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            local_3d8._0_4_ = iVar45;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = (int)local_3c0 + 9;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar58 = (int)local_3c0 + 10;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            plVar68 = local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)plVar68 + 0xb;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = local_3d8._0_4_;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)plVar68 + 0xc;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)local_3c0 + 0xd;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = (int)local_3c0;
            iVar57 = iVar45 + 0xe;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            uVar50 = iVar45 + 0xf;
          }
          param_2 = local_348;
          unaff_R15 = (ulonglong)uVar50;
          plVar52 = *(longlong **)(lVar47 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(uint *)(*plVar52 + (longlong)iVar63 * 4) = uVar50;
          *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
          uVar80 = uVar80 + 1;
          lVar67 = local_248._0_8_ + 0xa0;
        } while ((int)uVar80 < (int)local_300);
      }
      if ((int)local_300 < -1) break;
      iVar63 = (int)param_2[1];
      uVar76 = local_340 & 0xffffffff;
    } while ((int)(float)local_340 < iVar63);
  }
  fVar207 = *(float *)(param_2 + 0x19);
  if (0 < (int)fVar207) {
    uVar76 = 0;
    auVar159._0_12_ = ZEXT812(0x3f800000);
    auVar159._12_4_ = 0;
    do {
      uVar42 = _local_110;
      local_128 = (undefined1 *)0x0;
      uStack_120 = 0;
      local_148 = 0.0;
      lVar47 = param_2[0x18];
      local_3ec = (float)uVar76;
      lVar71 = uVar76 * 0xd0;
      uVar75 = *(undefined8 *)(lVar47 + 0x20 + lVar71);
      uVar54 = *(undefined1 *)(lVar47 + 0x45 + lVar71);
      uStack_144 = *(undefined4 *)(lVar47 + 0xc0 + lVar71);
      uStack_140 = (undefined4)uVar75;
      uStack_13c = (undefined4)((ulonglong)uVar75 >> 0x20);
      puVar81 = (undefined8 *)(lVar47 + 0xb0 + lVar71);
      uVar75 = *puVar81;
      uVar34 = puVar81[1];
      local_138 = (float)uVar75;
      uStack_134 = (undefined4)((ulonglong)uVar75 >> 0x20);
      uStack_130 = (undefined4)uVar34;
      uStack_12c = (undefined4)((ulonglong)uVar34 >> 0x20);
      lVar67 = *(longlong *)(lVar47 + 0x88 + lVar71);
      if (lVar67 == 0) {
        local_3c0 = (longlong *)0x0;
      }
      else {
        local_3c0 = *(longlong **)(lVar67 + 0x10);
      }
      lVar67 = lVar47 + lVar71;
      uVar80 = *(uint *)(lVar67 + 0x28);
      uVar79 = (ushort)((*(uint *)(lVar67 + 0x90) & 0xfffffffe) == 2) << 6 |
               *(ushort *)(lVar67 + 0x48) |
               (ushort)((*(uint *)(lVar67 + 0x90) & 0xfffffffd) == 1) << 5;
      local_158._0_4_ = uVar80;
      _local_110 = CONCAT12(uVar54,0x702);
      _local_110 = CONCAT24(uVar79,_local_110);
      uVar6 = *(undefined1 *)(lVar67 + 0x44);
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),uVar6);
      uStack_10d._4_1_ = SUB81(uVar42,7);
      _local_110 = CONCAT16(uVar6,_local_110);
      lVar78 = *(longlong *)(lVar67 + 0x30);
      if (lVar78 == 0) {
        iVar63 = *(int *)(lVar67 + 0x38);
        if (((longlong)iVar63 < 0) || ((int)((longlong *)local_3e8[3])[1] <= iVar63)) {
          lVar78 = 0;
        }
        else {
          lVar78 = (longlong)iVar63 * 0x40 + *(longlong *)local_3e8[3];
        }
      }
      local_3d8[0] = uVar54;
      fVar51 = (float)((int)local_3ec + 1);
      if ((int)local_3ec + 1 < (int)fVar207) {
        fVar51 = fVar207;
      }
      puVar81 = (undefined8 *)(lVar47 + lVar71 + 0xf0);
      local_300 = uVar76;
      local_118 = local_3c0;
      local_108 = lVar78;
      do {
        local_3b0 = (ulonglong)(uint)local_3ec;
        local_3ec = (float)((int)local_3ec + 1);
        fVar186 = fVar51;
        if ((int)fVar207 <= (int)local_3ec) break;
        local_188 = 0;
        uStack_180 = 0;
        local_1a8._0_4_ = 0.0;
        local_16e = *(undefined1 *)((longlong)puVar81 + 0x25);
        local_1a8._4_4_ = *(float *)(puVar81 + 0x14);
        uStack_1a0._0_4_ = (float)*puVar81;
        uStack_1a0._4_4_ = (undefined4)((ulonglong)*puVar81 >> 0x20);
        local_198 = (float)puVar81[0x12];
        fStack_194 = (float)((ulonglong)puVar81[0x12] >> 0x20);
        uStack_190._0_4_ = (undefined4)puVar81[0x13];
        uStack_190._4_4_ = (undefined4)((ulonglong)puVar81[0x13] >> 0x20);
        if (puVar81[0xd] == 0) {
          local_178 = 0;
        }
        else {
          local_178 = *(undefined8 *)(puVar81[0xd] + 0x10);
        }
        local_16c = (ushort)((*(uint *)(puVar81 + 0xe) & 0xfffffffe) == 2) << 6 |
                    *(ushort *)(puVar81 + 5) |
                    (ushort)((*(uint *)(puVar81 + 0xe) & 0xfffffffd) == 1) << 5;
        local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,*(undefined4 *)(puVar81 + 1));
        local_170 = 0x702;
        local_16a = *(undefined1 *)((longlong)puVar81 + 0x24);
        local_168 = puVar81[2];
        if (local_168 == 0) {
          iVar63 = *(int *)(puVar81 + 3);
          if (((longlong)iVar63 < 0) || ((int)((longlong *)local_3e8[3])[1] <= iVar63)) {
            local_168 = 0;
          }
          else {
            local_168 = (longlong)iVar63 * 0x40 + *(longlong *)local_3e8[3];
          }
        }
        cVar43 = FUN_142876d2e(&local_1b8,local_158);
        puVar81 = puVar81 + 0x1a;
        fVar186 = local_3ec;
      } while (cVar43 != '\0');
      local_3ec = fVar186;
      local_410 = (float *)CONCAT71(local_410._1_7_,uVar6);
      local_420 = local_3d8[0];
      local_438 = local_3c0;
      local_428 = CONCAT31(local_428._1_3_,7);
      local_430 = CONCAT31(local_430._1_3_,2);
      param_3 = (undefined4 *)(ulonglong)uVar80;
      local_418 = uVar79;
      local_408 = lVar78;
      lVar47 = FUN_14023c580(local_3e8,*local_3e8,param_3,&local_148);
      param_2 = local_348;
      iVar63 = 0;
      fVar207 = (float)local_300;
      if ((uint)fVar207 < (uint)local_3ec) {
        iVar63 = 0;
        uVar76 = local_300 & 0xffffffff;
        do {
          param_3 = (undefined4 *)((longlong)(int)uVar76 * 0xd0);
          if (*(int *)(local_348[0x18] + 0x98 + (longlong)param_3) == 3) {
LAB_14286d7b6:
            iVar77 = 4;
          }
          else {
            param_3 = (undefined4 *)((longlong)param_3 + local_348[0x18]);
            iVar77 = 0x10;
            if (((((float)param_3[0x18] == 0.0) && ((float)param_3[0x19] == 0.0)) &&
                ((float)param_3[0x1a] == 0.0)) &&
               (((float)param_3[0x1b] == 0.0 && (!NAN((float)param_3[0x1b]))))) goto LAB_14286d7b6;
          }
          iVar63 = iVar63 + iVar77;
          fVar51 = (float)((int)uVar76 + 1);
          uVar76 = (ulonglong)(uint)fVar51;
        } while (local_3ec != fVar51);
      }
      iVar77 = *(int *)(*(longlong *)(lVar47 + 0x50) + 8) + iVar63;
      if (iVar77 < 0) goto LAB_142872d0d;
      if (*(int *)(*(longlong *)(lVar47 + 0x50) + 0xc) < iVar77) {
        FUN_14578aec0();
      }
      lVar67 = *(longlong *)(lVar47 + 0x58);
      iVar63 = iVar63 + *(int *)(lVar67 + 8);
      if (iVar63 < 0) {
LAB_142872d14:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar63);
      }
      if (*(int *)(lVar67 + 0xc) < iVar63) {
        FUN_14480809c(lVar67,iVar63);
      }
      if ((int)fVar207 <= (int)local_3b0) {
        uVar80 = (int)fVar207 - 1;
        lVar71 = lVar71 + 0xac;
        do {
          fVar51 = 0.0;
          local_300 = (ulonglong)uVar80;
          lVar67 = param_2[0x18];
          auVar87 = *(undefined1 (*) [16])(lVar67 + -0x5c + lVar71);
          fVar207 = auVar87._12_4_;
          local_3f0 = auVar159._0_4_;
          if (*(char *)(local_3e8 + 6) == '\x01') {
            auVar185 = maxps(auVar87,_DAT_149e1a200);
            auVar185 = minps(auVar185,_DAT_149e1a210);
            fVar207 = auVar185._0_4_;
            fVar186 = auVar185._4_4_;
            fVar158 = auVar185._8_4_;
            auVar143._4_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar186 + -0x39000000) >> 0x14) * 4);
            auVar143._0_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 + (ulonglong)((int)fVar207 + 0xc7000000U >> 0x14) * 4);
            auVar143._8_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar158 + -0x39000000) >> 0x14) * 4);
            auVar143._12_4_ = 0;
            auVar114._0_4_ = (uint)fVar207 >> 0xc;
            auVar114._4_4_ = (uint)fVar186 >> 0xc;
            auVar114._8_4_ = (uint)fVar158 >> 0xc;
            auVar114._12_4_ = (uint)auVar185._12_4_ >> 0xc;
            auVar99 = pmaddwd(auVar114 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar143);
            auVar86._4_4_ = (int)(fVar186 * 0.0 + 0.5) | auVar99._4_4_ >> 0x10;
            auVar86._12_4_ = (int)(auVar185._12_4_ * 255.0 + 0.5) | auVar99._12_4_ >> 0x10;
            auVar86._0_4_ = (int)(fVar158 * 0.0 + 0.5) | auVar99._8_4_ >> 0x10;
            auVar86._8_4_ = (int)(fVar207 * 0.0 + 0.5) | auVar99._0_4_ >> 0x10;
            auVar185 = packssdw(auVar86,auVar86);
            sVar8 = auVar185._0_2_;
            sVar9 = auVar185._2_2_;
            sVar10 = auVar185._4_2_;
            sVar11 = auVar185._6_2_;
            bVar53 = (0 < sVar11) * (sVar11 < 0x100) * auVar185[6] - (0xff < sVar11);
            uVar50 = CONCAT13(bVar53,CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar185[4] -
                                              (0xff < sVar10),
                                              CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar185[2] -
                                                       (0xff < sVar9),
                                                       (0 < sVar8) * (sVar8 < 0x100) * auVar185[0] -
                                                       (0xff < sVar8))));
            local_3dc = (float)(uVar50 >> 8);
            local_2f8._0_4_ = uVar50 >> 0x10;
            uVar80 = (uint)bVar53;
          }
          else {
            fVar186 = auVar87._4_4_;
            auVar115._4_4_ = fVar207;
            auVar115._0_4_ = fVar207;
            auVar115._8_4_ = fVar207;
            auVar115._12_4_ = fVar207;
            if (fVar207 <= 0.0) {
              auVar38._12_4_ = 0;
              auVar38._0_12_ = auVar115._4_12_;
              auVar115 = auVar38 << 0x20;
            }
            if (local_3f0 <= auVar115._0_4_) {
              auVar115._0_4_ = local_3f0;
            }
            uVar80 = (uint)(auVar115._0_4_ * 255.0 + 0.5);
            auVar13._4_8_ = auVar115._8_8_;
            auVar13._0_4_ = fVar186;
            auVar116._0_8_ = auVar13._0_8_ << 0x20;
            auVar116._8_4_ = auVar87._8_4_;
            auVar116._12_4_ = fVar207;
            auVar117._8_8_ = auVar87._8_8_;
            auVar117._0_8_ = auVar116._8_8_;
            if (auVar87._8_4_ <= 0.0) {
              auVar39._12_4_ = 0;
              auVar39._0_12_ = auVar117._4_12_;
              auVar117 = auVar39 << 0x20;
            }
            if (local_3f0 <= auVar117._0_4_) {
              auVar117._0_4_ = local_3f0;
            }
            uVar50 = (uint)(auVar117._0_4_ * 255.0 + 0.5);
            if (fVar186 <= 0.0) {
              fVar186 = fVar51;
            }
            if (local_3f0 <= fVar186) {
              fVar186 = local_3f0;
            }
            local_3dc = (float)(int)(fVar186 * 255.0 + 0.5);
            if (auVar87._0_4_ <= 0.0) {
              auVar40._12_4_ = 0;
              auVar40._0_12_ = auVar87._4_12_;
              auVar87 = auVar40 << 0x20;
            }
            if (local_3f0 <= auVar87._0_4_) {
              auVar87._0_4_ = local_3f0;
            }
            local_2f8._0_4_ = (undefined4)(auVar87._0_4_ * 255.0 + 0.5);
          }
          pfVar65 = *(float **)(lVar67 + -0x24 + lVar71);
          if (pfVar65 == (float *)0x0) {
            fVar207 = *(float *)((longlong)local_3e8 + 0x2c);
            uVar66 = 1;
            local_398 = ZEXT816(0);
            local_3a8 = ZEXT816(0);
            uVar62 = 1;
            fVar186 = local_3f0;
            local_248 = auVar159;
            fVar158 = fVar207;
            _local_388 = auVar159;
          }
          else {
            uVar62 = (int)pfVar65[6] + (uint)(pfVar65[6] == 0.0);
            uVar66 = (int)pfVar65[7] + (uint)(pfVar65[7] == 0.0);
            fVar207 = *(float *)((longlong)local_3e8 + 0x2c) / (float)uVar66;
            fVar158 = *(float *)((longlong)local_3e8 + 0x2c) / (float)uVar62;
            if (*(char *)(lVar67 + -0x2c + lVar71) == '\x01') {
              fVar83 = *(float *)(lVar67 + -0x3c + lVar71);
              fVar206 = *(float *)(lVar67 + -0x38 + lVar71);
              fVar84 = *(float *)(lVar67 + -0x30 + lVar71) - fVar206;
              fVar186 = *(float *)(lVar67 + -0x34 + lVar71) - fVar83;
              fVar206 = fVar206 + fVar207;
              fVar83 = fVar83 + fVar158;
              fVar212 = fVar206 + fVar84;
              fVar112 = fVar83 + fVar186;
            }
            else {
              fVar186 = pfVar65[2];
              fVar84 = pfVar65[3];
              fVar206 = pfVar65[1] + fVar207;
              fVar83 = *pfVar65 + fVar158;
              fVar212 = fVar84 + fVar206;
              fVar112 = fVar186 + fVar83;
            }
            local_398 = ZEXT416((uint)fVar83);
            local_3a8 = ZEXT416((uint)fVar206);
            auVar159 = ZEXT416((uint)fVar84);
            local_248 = ZEXT416((uint)fVar212);
            _local_388 = ZEXT416((uint)fVar112);
          }
          if (*(char *)(local_3e8 + 6) == '\0') {
            fVar83 = *(float *)(lVar67 + lVar71);
            if (*(float *)(lVar67 + lVar71) <= 0.0) {
              fVar83 = fVar51;
            }
            if (local_3f0 <= fVar83) {
              fVar83 = local_3f0;
            }
            uVar46 = (uint)(fVar83 * 255.0 + 0.5);
            fVar83 = *(float *)(lVar67 + -4 + lVar71);
            if (fVar83 <= 0.0) {
              fVar83 = fVar51;
            }
            if (local_3f0 <= fVar83) {
              fVar83 = local_3f0;
            }
            uVar72 = (uint)(fVar83 * 255.0 + 0.5);
            fVar83 = *(float *)(lVar67 + -0xc + lVar71);
            fVar206 = *(float *)(lVar67 + -8 + lVar71);
            if (fVar206 <= 0.0) {
              fVar206 = fVar51;
            }
            if (local_3f0 <= fVar206) {
              fVar206 = local_3f0;
            }
            uVar74 = (uint)(fVar206 * 255.0 + 0.5);
            if (fVar83 <= 0.0) {
              fVar83 = fVar51;
            }
            if (local_3f0 <= fVar83) {
              fVar83 = local_3f0;
            }
            uVar64 = (uint)(fVar83 * 255.0 + 0.5);
          }
          else {
            auVar185 = maxps(*(undefined1 (*) [16])(lVar67 + -0xc + lVar71),_DAT_149e1a200);
            auVar185 = minps(auVar185,_DAT_149e1a210);
            fVar51 = auVar185._0_4_;
            fVar83 = auVar185._4_4_;
            fVar206 = auVar185._8_4_;
            auVar175._4_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar83 + -0x39000000) >> 0x14) * 4);
            auVar175._0_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 + (ulonglong)((int)fVar51 + 0xc7000000U >> 0x14) * 4);
            auVar175._8_4_ =
                 *(undefined4 *)
                  (&DAT_149e1bee0 +
                  (ulonglong)(ushort)((uint)((int)fVar206 + -0x39000000) >> 0x14) * 4);
            auVar175._12_4_ = 0;
            auVar169._0_4_ = (uint)fVar51 >> 0xc;
            auVar169._4_4_ = (uint)fVar83 >> 0xc;
            auVar169._8_4_ = (uint)fVar206 >> 0xc;
            auVar169._12_4_ = (uint)auVar185._12_4_ >> 0xc;
            auVar99 = pmaddwd(auVar169 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar175);
            auVar88._4_4_ = (int)(fVar83 * 0.0 + 0.5) | auVar99._4_4_ >> 0x10;
            auVar88._12_4_ = (int)(auVar185._12_4_ * 255.0 + 0.5) | auVar99._12_4_ >> 0x10;
            auVar88._0_4_ = (int)(fVar206 * 0.0 + 0.5) | auVar99._8_4_ >> 0x10;
            auVar88._8_4_ = (int)(fVar51 * 0.0 + 0.5) | auVar99._0_4_ >> 0x10;
            auVar185 = packssdw(auVar88,auVar88);
            sVar8 = auVar185._0_2_;
            sVar9 = auVar185._2_2_;
            sVar10 = auVar185._4_2_;
            sVar11 = auVar185._6_2_;
            bVar53 = (0 < sVar11) * (sVar11 < 0x100) * auVar185[6] - (0xff < sVar11);
            uVar72 = CONCAT13(bVar53,CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar185[4] -
                                              (0xff < sVar10),
                                              CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar185[2] -
                                                       (0xff < sVar9),
                                                       (0 < sVar8) * (sVar8 < 0x100) * auVar185[0] -
                                                       (0xff < sVar8))));
            uVar74 = uVar72 >> 8;
            uVar64 = uVar72 >> 0x10;
            uVar46 = (uint)bVar53;
          }
          fVar51 = *(float *)(lVar67 + -0x8c + lVar71);
          uVar7 = *(uint *)(lVar67 + -0x1c + lVar71);
          fVar83 = (float)uVar62;
          local_318._0_4_ = fVar51;
          local_3f4 = local_3f0;
          if ((uVar7 & 0xfffffffd) == 1) {
            local_3f4 = fVar51 / fVar83;
          }
          fVar206 = *(float *)(lVar67 + -0x88 + lVar71);
          fVar84 = (float)uVar66;
          if ((uVar7 & 0xfffffffe) == 2) {
            local_3f0 = fVar206 / fVar84;
          }
          bVar53 = *(byte *)(lVar67 + -0x67 + lVar71);
          local_3f8 = *(float *)(lVar67 + -0xac + lVar71);
          fVar112 = *(float *)(lVar67 + -0xa8 + lVar71);
          local_368._0_4_ = fVar112;
          local_3b4 = *(float *)(lVar67 + -0xa4 + lVar71);
          fVar212 = *(float *)(lVar67 + -0xa0 + lVar71);
          local_340 = CONCAT44(local_340._4_4_,fVar212);
          fVar111 = *(float *)(lVar67 + -0x9c + lVar71);
          auVar185 = ZEXT416((uint)fVar111);
          fVar157 = *(float *)(lVar67 + -0x98 + lVar71);
          local_3d8 = ZEXT416((uint)fVar157);
          fVar164 = *(float *)(lVar67 + -0x6c + lVar71);
          uVar66 = *(uint *)(lVar67 + -0x18 + lVar71);
          uVar62 = uVar72 & 0xff | (uVar74 & 0xff) << 8 | (uVar64 & 0xff) << 0x10 | uVar46 << 0x18;
          local_3c0 = (longlong *)(ulonglong)*(uint *)(lVar47 + 0x74);
          fVar168 = local_248._0_4_;
          auVar225._4_12_ = local_248._4_12_;
          local_338 = auVar185;
          if (*(int *)(lVar67 + -0x14 + lVar71) == 3) {
LAB_14286dd55:
            auVar160 = _local_388;
            if (uVar66 - 1 < 3) {
              if ((uVar66 & 0xfffffffd) == 1) {
                fVar207 = (float)local_388._0_4_ - (float)local_398._0_4_;
                local_398._0_4_ =
                     (float)local_388._0_4_ - ((float)local_398._0_4_ - (float)local_398._0_4_);
                local_398._4_12_ = stack0xfffffffffffffc7c;
                auVar160._0_4_ = (float)local_388._0_4_ - fVar207;
                auVar160._4_12_ = stack0xfffffffffffffc7c;
              }
              if ((uVar66 & 0xfffffffe) == 2) {
                fVar207 = fVar168 - (float)local_3a8._0_4_;
                local_3a8._0_4_ = fVar168 - ((float)local_3a8._0_4_ - (float)local_3a8._0_4_);
                local_3a8._4_12_ = auVar225._4_12_;
                auVar225._0_4_ = fVar168 - fVar207;
                local_248 = auVar225;
              }
            }
            local_268._0_8_ = lVar71;
            fVar158 = local_3b4 * 0.0;
            fVar186 = local_3f8 * 0.0;
            fVar207 = fVar112 * 0.0 + fVar212 * 0.0 + fVar157;
            fVar111 = fVar186 + fVar158 + fVar111;
            param_3 = (undefined4 *)(CONCAT71((int7)(unaff_R15 >> 8),bVar53) & 0xffffffff);
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar111 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar111 = auVar185._0_4_;
              auVar185 = blendps(ZEXT416((uint)(fVar207 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar207 = auVar185._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            fVar83 = fVar51;
            fVar84 = fVar206;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_328._0_4_ = fVar206;
              local_358._0_4_ = uVar62;
              _local_388 = auVar160;
              FUN_146964c32(plVar52,iVar63);
              auVar160 = _local_388;
              fVar83 = (float)local_318._0_4_;
              fVar84 = (float)local_328._0_4_;
              uVar62 = local_358._0_4_;
            }
            uVar80 = uVar50 & 0xff |
                     ((uint)local_3dc & 0xff) << 8 | (uint)local_2f8[0] << 0x10 | uVar80 << 0x18;
            lVar67 = *plVar52;
            lVar71 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar71) = local_398._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar71) = local_3a8._0_4_;
            *(float *)(lVar67 + 8 + lVar71) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar71) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar71) = 0.0 / fVar51;
            *(float *)(lVar67 + 0x14 + lVar71) = 0.0 / fVar206;
            *(float *)(lVar67 + 0x18 + lVar71) = fVar111;
            *(float *)(lVar67 + 0x1c + lVar71) = fVar207;
            *(uint *)(lVar67 + 0x20 + lVar71) = uVar80;
            *(uint *)(lVar67 + 0x24 + lVar71) = uVar62;
            uVar56 = (undefined2)((uint)(int)ROUND(fVar51 * fVar164 + fVar51 * fVar164 + 0.5) >> 1);
            *(undefined2 *)(lVar67 + 0x28 + lVar71) = uVar56;
            uVar70 = (undefined2)
                     ((uint)(int)ROUND(fVar164 * fVar206 + fVar164 * fVar206 + 0.5) >> 1);
            *(undefined2 *)(lVar67 + 0x2a + lVar71) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar207 = (float)local_368._0_4_ * fVar83;
            fVar111 = local_3f8 * fVar83;
            fVar212 = fVar212 * 0.0 + fVar207 + fVar157;
            fVar158 = fVar158 + fVar111 + (float)local_338._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar185 = blendps(ZEXT416((uint)(fVar158 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar158 = auVar185._0_4_;
              auVar185 = blendps(ZEXT416((uint)(fVar212 + 0.5)),ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar212 = auVar185._0_4_;
            }
            lVar71 = local_268._0_8_;
            fVar83 = fVar83 / fVar83;
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_328._0_4_ = fVar84;
              local_368[0] = (char)param_3;
              _local_388 = auVar160;
              FUN_146964c32(plVar52,iVar63);
              param_3 = (undefined4 *)CONCAT71((int7)((ulonglong)param_3 >> 8),local_368[0]);
              auVar160 = _local_388;
              fVar84 = (float)local_328._0_4_;
            }
            auVar185 = local_248;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(int *)(lVar67 + lVar78) = auVar160._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_3a8._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x14 + lVar78) = 0.0 / fVar206;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar212;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar80;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(undefined2 *)(lVar67 + 0x28 + lVar78) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar158 = (float)local_340 * fVar84;
            fVar206 = local_3b4 * fVar84;
            fVar112 = fVar112 * 0.0 + fVar158 + fVar157;
            fVar186 = fVar186 + fVar206 + (float)local_338._0_4_;
            if (((ulonglong)param_3 & 0x10) == 0) {
              auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
              auVar99 = blendps(ZEXT416((uint)(fVar112 + 0.5)),ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar112 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_318._0_4_ = fVar83;
              local_328._0_4_ = fVar84;
              local_368[0] = (char)param_3;
              _local_388 = auVar160;
              FUN_146964c32(plVar52,iVar63);
              param_3 = (undefined4 *)CONCAT71((int7)((ulonglong)param_3 >> 8),local_368[0]);
              auVar160 = _local_388;
              fVar83 = (float)local_318._0_4_;
              fVar84 = (float)local_328._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_398._0_4_;
            *(int *)(lVar67 + 4 + lVar78) = auVar185._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = 0.0 / fVar51;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar84 / fVar84;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar186;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar112;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar80;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(undefined2 *)(lVar67 + 0x28 + lVar78) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar157 = fVar157 + fVar207 + fVar158;
            unaff_XMM9._4_12_ = local_338._4_12_;
            unaff_XMM9._0_4_ = local_338._0_4_ + fVar111 + fVar206;
            if (((ulonglong)param_3 & 0x10) == 0) {
              auVar199._0_4_ = unaff_XMM9._0_4_ + 0.5;
              auVar199._4_12_ = unaff_XMM9._4_12_;
              auVar99 = blendps(auVar199,ZEXT816(0),0xe);
              unaff_XMM9 = roundps(auVar99,auVar99,1);
              auVar99 = blendps(ZEXT416((uint)(fVar157 + 0.5)),ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar157 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_146964c32(plVar52,iVar63);
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(int *)(lVar67 + lVar78) = auVar160._0_4_;
            *(int *)(lVar67 + 4 + lVar78) = auVar185._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar84 / fVar84;
            *(int *)(lVar67 + 0x18 + lVar78) = unaff_XMM9._0_4_;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar157;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar80;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(undefined2 *)(lVar67 + 0x28 + lVar78) = uVar56;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar70;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 1;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 2;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 2;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77 + 1;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            uVar80 = iVar77 + 3;
          }
          else {
            fVar170 = *(float *)(lVar67 + -0x4c + lVar71);
            fVar3 = *(float *)(lVar67 + -0x48 + lVar71);
            fVar4 = *(float *)(lVar67 + -0x44 + lVar71);
            fVar5 = *(float *)(lVar67 + -0x40 + lVar71);
            if (((fVar170 == 0.0) && (fVar3 == 0.0)) &&
               ((fVar4 == 0.0 && ((fVar5 == 0.0 && (!NAN(fVar5))))))) goto LAB_14286dd55;
            local_298._0_4_ =
                 ~-(uint)(0.0 < fVar170) & local_398._0_4_ |
                 (uint)(fVar170 * fVar186 + (float)local_398._0_4_ + fVar158) &
                 -(uint)(0.0 < fVar170);
            local_288 = (float)(~-(uint)(0.0 < fVar3) & local_3a8._0_4_ |
                               (uint)(fVar3 * auVar159._0_4_ + (float)local_3a8._0_4_ + fVar207) &
                               -(uint)(0.0 < fVar3));
            uStack_280 = local_3a8._8_4_;
            uStack_27c = local_3a8._12_4_;
            local_2e8._0_4_ =
                 ~-(uint)(0.0 < fVar4) & local_388._0_4_ |
                 (uint)(((float)local_388._0_4_ - fVar186 * fVar4) + fVar158) & -(uint)(0.0 < fVar4)
            ;
            local_2e8._4_4_ = 0;
            local_2e8._8_4_ = uStack_380;
            local_2e8._12_4_ = uStack_37c;
            local_278._0_4_ =
                 ~-(uint)(0.0 < fVar5) & (uint)fVar168 |
                 (uint)((fVar168 - auVar159._0_4_ * fVar5) + fVar207) & -(uint)(0.0 < fVar5);
            local_278._4_4_ = 0;
            local_278._8_4_ = local_248._8_4_;
            local_278._12_4_ = local_248._12_4_;
            if (uVar66 - 1 < 3) {
              if ((uVar66 & 0xfffffffd) == 1) {
                fVar207 = (float)local_388._0_4_ - (float)local_398._0_4_;
                local_298._0_4_ =
                     (float)local_388._0_4_ - ((float)local_298._0_4_ - (float)local_398._0_4_);
                local_2e8._0_4_ =
                     (float)local_388._0_4_ - ((float)local_2e8._0_4_ - (float)local_398._0_4_);
                local_398._4_4_ = 0;
                local_398._0_4_ =
                     (float)local_388._0_4_ - ((float)local_398._0_4_ - (float)local_398._0_4_);
                local_398._8_4_ = uStack_380;
                local_398._12_4_ = uStack_37c;
                local_388._4_4_ = 0;
                local_388._0_4_ = (float)local_388._0_4_ - fVar207;
                local_2e8._4_4_ = 0;
                local_298._4_4_ = 0;
                local_298._8_4_ = uStack_380;
                local_298._12_4_ = uStack_37c;
              }
              else {
                local_298._4_4_ = 0;
                local_298._8_4_ = local_398._8_4_;
                local_298._12_4_ = local_398._12_4_;
              }
              if ((uVar66 & 0xfffffffe) == 2) {
                fVar207 = fVar168 - (float)local_3a8._0_4_;
                local_288 = local_288 - (float)local_3a8._0_4_;
                local_278._0_4_ = (float)local_278._0_4_ - (float)local_3a8._0_4_;
                local_3a8._0_4_ = fVar168 - ((float)local_3a8._0_4_ - (float)local_3a8._0_4_);
                local_3a8._4_12_ = auVar225._4_12_;
                local_288 = fVar168 - local_288;
                local_278._0_4_ = fVar168 - (float)local_278._0_4_;
                local_278._4_12_ = auVar225._4_12_;
                local_248._4_4_ = 0;
                local_248._0_4_ = fVar168 - fVar207;
                uStack_280 = local_248._8_4_;
                uStack_27c = local_248._12_4_;
              }
            }
            else {
              local_298._4_4_ = 0;
              local_298._8_4_ = local_398._8_4_;
              local_298._12_4_ = local_398._12_4_;
            }
            uStack_284 = 0;
            local_2c8._0_4_ = fVar170 * fVar83;
            fVar207 = fVar51 - fVar4 * fVar83;
            local_328 = ZEXT416((uint)fVar207);
            local_2d8 = ZEXT416((uint)(fVar51 * 0.5));
            auVar99 = local_2d8;
            if ((float)local_2c8._0_4_ <= fVar207) {
              auVar99 = ZEXT416((uint)local_2c8._0_4_);
            }
            local_2a8._0_4_ = fVar3 * fVar84;
            fVar186 = fVar206 - fVar5 * fVar84;
            local_228 = ZEXT416((uint)fVar186);
            local_208 = ZEXT416((uint)(fVar206 * 0.5));
            fVar207 = fVar206 * 0.5;
            if ((float)local_2a8._0_4_ <= fVar186) {
              fVar207 = (float)local_2a8._0_4_;
            }
            fVar212 = fVar212 * 0.0;
            local_218 = ZEXT416((uint)(fVar112 * 0.0));
            fVar158 = local_3b4 * 0.0;
            local_238 = ZEXT416((uint)(local_3f8 * 0.0));
            fVar157 = fVar112 * 0.0 + fVar212 + fVar157;
            fVar186 = local_3f8 * 0.0 + fVar158 + fVar111;
            auVar134 = ZEXT816(0);
            if ((bVar53 & 0x10) == 0) {
              auVar201 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar134,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar186 = auVar201._0_4_;
              auVar201 = blendps(ZEXT416((uint)(fVar157 + 0.5)),auVar134,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar157 = auVar201._0_4_;
            }
            uVar66 = (uint)ROUND(fVar51 * fVar164 + fVar51 * fVar164 + 0.5);
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            local_258._0_4_ = 0.0 / fVar51;
            local_2b8._0_4_ = 0.0 / fVar206;
            fVar83 = 0.0 / fVar206;
            fVar84 = 0.0 / fVar51;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar62;
              local_268._0_8_ = lVar71;
              FUN_146964c32(plVar52,iVar63);
              lVar71 = local_268._0_8_;
              uVar66 = local_378._0_4_;
              fVar83 = (float)local_2b8._0_4_;
              fVar84 = (float)local_258._0_4_;
              uVar62 = local_358._0_4_;
            }
            uVar50 = uVar50 & 0xff |
                     ((uint)local_3dc & 0xff) << 8 | (uint)local_2f8[0] << 0x10 | uVar80 << 0x18;
            uVar80 = (uint)(int)ROUND(fVar164 * fVar206 + fVar164 * fVar206 + 0.5) >> 1;
            uVar66 = uVar66 >> 1;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_398._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_3a8._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar186;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar157;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar112 = (float)local_340 * fVar207;
            auVar178._4_12_ = local_218._4_12_;
            fVar83 = local_3b4 * fVar207;
            auVar216._4_12_ = local_238._4_12_;
            fVar186 = local_218._0_4_ + fVar112 + (float)local_3d8._0_4_;
            fVar84 = local_238._0_4_ + fVar83 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar216._0_4_ = fVar84 + 0.5;
              auVar201 = blendps(auVar216,auVar134,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar84 = auVar201._0_4_;
              auVar178._0_4_ = fVar186 + 0.5;
              auVar134 = blendps(auVar178,auVar134,0xe);
              auVar134 = roundps(auVar134,auVar134,1);
              fVar186 = auVar134._0_4_;
            }
            fVar207 = fVar207 / fVar206;
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar80;
              FUN_146964c32(plVar52,iVar63);
              uVar66 = local_378._0_4_;
              fVar51 = (float)local_318._0_4_;
              uVar80 = local_358._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_398._0_4_;
            *(float *)(lVar67 + 4 + lVar78) = local_288;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = local_258._0_4_;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar207;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar157 = auVar99._0_4_;
            local_2f8._4_12_ = auVar99._4_12_;
            local_2f8._0_4_ = fVar157 * (float)local_368._0_4_;
            local_268._0_4_ = fVar157 * local_3f8;
            local_268._4_12_ = local_2f8._4_12_;
            fVar186 = (float)local_2f8._0_4_ + fVar212 + (float)local_3d8._0_4_;
            fVar84 = (float)local_268._0_4_ + fVar158 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar217._0_4_ = fVar84 + 0.5;
              auVar217._4_12_ = local_2f8._4_12_;
              auVar99 = blendps(auVar217,ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              auVar179._0_4_ = fVar186 + 0.5;
              auVar179._4_12_ = local_2f8._4_12_;
              auVar99 = blendps(auVar179,ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar80;
              FUN_146964c32(plVar52,iVar63);
              uVar66 = local_378._0_4_;
              fVar51 = (float)local_318._0_4_;
              uVar80 = local_358._0_4_;
            }
            local_3dc = fVar157 / fVar51;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_298._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_3a8._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = local_3dc;
            *(undefined4 *)(lVar67 + 0x14 + lVar78) = local_2b8._0_4_;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar180._4_12_ = local_2f8._4_12_;
            auVar218._4_12_ = local_268._4_12_;
            fVar186 = local_2f8._0_4_ + fVar112 + (float)local_3d8._0_4_;
            fVar84 = local_268._0_4_ + fVar83 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar218._0_4_ = fVar84 + 0.5;
              auVar99 = blendps(auVar218,ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              auVar180._0_4_ = fVar186 + 0.5;
              auVar99 = blendps(auVar180,ZEXT816(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
            }
            auVar231._0_4_ =
                 local_2d8._0_4_ & -(uint)((float)local_328._0_4_ < (float)local_2c8._0_4_);
            auVar231._4_4_ = local_2d8._4_4_ & local_328._4_4_;
            auVar231._8_4_ = local_2d8._8_4_ & local_328._8_4_;
            auVar231._12_4_ = local_2d8._12_4_ & local_328._12_4_;
            auVar231 = ZEXT416(~-(uint)((float)local_328._0_4_ < (float)local_2c8._0_4_) &
                               local_328._0_4_) | auVar231;
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_328._0_4_ = fVar206;
              local_358._0_4_ = uVar80;
              FUN_146964c32(plVar52,iVar63);
              fVar206 = (float)local_328._0_4_;
              uVar66 = local_378._0_4_;
              uVar80 = local_358._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_298._0_4_;
            *(float *)(lVar67 + 4 + lVar78) = local_288;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = local_3dc;
            local_328._0_4_ = fVar207;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar207;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar186;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar157 = auVar231._0_4_;
            uVar166 = auVar231._4_4_;
            uVar167 = auVar231._8_4_;
            uVar165 = auVar231._12_4_;
            unaff_XMM9._4_12_ = auVar231._4_12_;
            fVar186 = fVar157 * (float)local_368._0_4_;
            auVar181._4_4_ = uVar166;
            auVar181._0_4_ = fVar186;
            auVar181._8_4_ = uVar167;
            auVar181._12_4_ = uVar165;
            auVar182._4_12_ = auVar181._4_12_;
            local_2d8._0_4_ = fVar157 * local_3f8;
            local_2d8._4_12_ = unaff_XMM9._4_12_;
            auVar219._4_4_ = uVar166;
            auVar219._0_4_ = local_2d8._0_4_;
            auVar219._8_4_ = uVar167;
            auVar219._12_4_ = uVar165;
            auVar220._4_12_ = auVar219._4_12_;
            fVar207 = fVar186 + fVar212 + (float)local_3d8._0_4_;
            fVar84 = (float)local_2d8._0_4_ + fVar158 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar220._0_4_ = fVar84 + 0.5;
              auVar99 = blendps(auVar220,ZEXT416(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              auVar182._0_4_ = fVar207 + 0.5;
              auVar99 = blendps(auVar182,ZEXT416(0),0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar207 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar80;
              FUN_146964c32(plVar52,iVar63);
              uVar66 = local_378._0_4_;
              fVar51 = (float)local_318._0_4_;
              uVar80 = local_358._0_4_;
            }
            local_2c8._0_4_ = fVar157 / fVar51;
            local_2c8._4_12_ = unaff_XMM9._4_12_;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_2e8._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_3a8._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = local_2c8._0_4_;
            *(undefined4 *)(lVar67 + 0x14 + lVar78) = local_2b8._0_4_;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar207;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar183._4_4_ = uVar166;
            auVar183._0_4_ = fVar186;
            auVar183._8_4_ = uVar167;
            auVar183._12_4_ = uVar165;
            auVar184._4_12_ = auVar183._4_12_;
            auVar221._4_12_ = local_2d8._4_12_;
            fVar207 = fVar186 + fVar112 + (float)local_3d8._0_4_;
            fVar84 = local_2d8._0_4_ + fVar83 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar221._0_4_ = fVar84 + 0.5;
              auVar226._0_12_ = ZEXT812(0);
              auVar226._12_4_ = 0;
              auVar99 = blendps(auVar221,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              auVar184._0_4_ = fVar207 + 0.5;
              auVar99 = blendps(auVar184,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar207 = auVar99._0_4_;
            }
            else {
              auVar226 = ZEXT416(0);
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar80;
              FUN_146964c32(plVar52,iVar63);
              auVar226 = ZEXT816(0);
              uVar66 = local_378._0_4_;
              uVar80 = local_358._0_4_;
            }
            auVar99 = local_2d8;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_2e8._0_4_;
            *(float *)(lVar67 + 4 + lVar78) = local_288;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = local_2c8._0_4_;
            *(undefined4 *)(lVar67 + 0x14 + lVar78) = local_328._0_4_;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar207;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar84 = (float)local_368._0_4_ * fVar51;
            local_368._0_4_ = fVar84;
            fVar207 = local_3f8 * fVar51;
            fVar84 = fVar212 + fVar84 + (float)local_3d8._0_4_;
            fVar158 = fVar158 + fVar207 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar134 = blendps(ZEXT416((uint)(fVar158 + 0.5)),auVar226,0xe);
              auVar134 = roundps(auVar134,auVar134,1);
              fVar158 = auVar134._0_4_;
              auVar134 = blendps(ZEXT416((uint)(fVar84 + 0.5)),auVar226,0xe);
              auVar134 = roundps(auVar134,auVar134,1);
              fVar84 = auVar134._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar80;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              auVar226 = ZEXT816(0);
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar80 = local_358._0_4_;
            }
            fVar51 = fVar51 / fVar51;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_388._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_3a8._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar51;
            *(undefined4 *)(lVar67 + 0x14 + lVar78) = local_2b8._0_4_;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar84;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar84 = fVar112 + (float)local_368._0_4_ + (float)local_3d8._0_4_;
            fVar158 = fVar83 + fVar207 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar134 = blendps(ZEXT416((uint)(fVar158 + 0.5)),auVar226,0xe);
              auVar134 = roundps(auVar134,auVar134,1);
              fVar158 = auVar134._0_4_;
              auVar134 = blendps(ZEXT416((uint)(fVar84 + 0.5)),auVar226,0xe);
              auVar134 = roundps(auVar134,auVar134,1);
              fVar84 = auVar134._0_4_;
            }
            fVar83 = (float)(~-(uint)((float)local_228._0_4_ < (float)local_2a8._0_4_) &
                             local_228._0_4_ |
                            local_208._0_4_ &
                            -(uint)((float)local_228._0_4_ < (float)local_2a8._0_4_));
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar80;
              FUN_146964c32(plVar52,iVar63);
              uVar66 = local_378._0_4_;
              uVar80 = local_358._0_4_;
            }
            auVar134 = local_248;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_388._0_4_;
            *(float *)(lVar67 + 4 + lVar78) = local_288;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar51;
            *(undefined4 *)(lVar67 + 0x14 + lVar78) = local_328._0_4_;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar158;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar84;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            uVar56 = (undefined2)uVar80;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar56;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar158 = (float)local_340 * fVar83;
            auVar208._4_12_ = local_218._4_12_;
            fVar84 = local_3b4 * fVar83;
            auVar222._4_12_ = local_238._4_12_;
            fVar112 = local_218._0_4_ + fVar158 + (float)local_3d8._0_4_;
            fVar212 = local_238._0_4_ + fVar84 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar222._0_4_ = fVar212 + 0.5;
              auVar201 = blendps(auVar222,auVar226,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar212 = auVar201._0_4_;
              auVar208._0_4_ = fVar112 + 0.5;
              auVar201 = blendps(auVar208,auVar226,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar112 = auVar201._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar62;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              auVar226 = ZEXT816(0);
              auVar99 = local_2d8;
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar62 = local_358._0_4_;
            }
            fVar83 = fVar83 / fVar206;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_398._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_278._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = local_258._0_4_;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar212;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar112;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar56;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar209._4_12_ = local_2f8._4_12_;
            auVar223._4_12_ = local_268._4_12_;
            fVar112 = local_2f8._0_4_ + fVar158 + (float)local_3d8._0_4_;
            fVar212 = local_268._0_4_ + fVar84 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar223._0_4_ = fVar212 + 0.5;
              auVar201 = blendps(auVar223,auVar226,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar212 = auVar201._0_4_;
              auVar209._0_4_ = fVar112 + 0.5;
              auVar201 = blendps(auVar209,auVar226,0xe);
              auVar201 = roundps(auVar201,auVar201,1);
              fVar112 = auVar201._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar62;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              auVar226 = ZEXT816(0);
              auVar99 = local_2d8;
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar62 = local_358._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_298._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_278._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = local_3dc;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar212;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar112;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar56;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar210._4_4_ = uVar166;
            auVar210._0_4_ = fVar186;
            auVar210._8_4_ = uVar167;
            auVar210._12_4_ = uVar165;
            auVar211._4_12_ = auVar210._4_12_;
            auVar224._4_12_ = auVar99._4_12_;
            fVar112 = fVar186 + fVar158 + (float)local_3d8._0_4_;
            fVar212 = auVar99._0_4_ + fVar84 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar224._0_4_ = fVar212 + 0.5;
              auVar99 = blendps(auVar224,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar212 = auVar99._0_4_;
              auVar211._0_4_ = fVar112 + 0.5;
              auVar99 = blendps(auVar211,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar112 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar62;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              auVar226 = ZEXT816(0);
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar62 = local_358._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_2e8._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_278._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = local_2c8._0_4_;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar212;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar112;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar56;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar158 = fVar158 + (float)local_368._0_4_ + (float)local_3d8._0_4_;
            fVar111 = fVar84 + fVar207 + fVar111;
            if ((bVar53 & 0x10) == 0) {
              auVar99 = blendps(ZEXT416((uint)(fVar111 + 0.5)),auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar111 = auVar99._0_4_;
              auVar99 = blendps(ZEXT416((uint)(fVar158 + 0.5)),auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar158 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_358._0_4_ = uVar62;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              auVar226 = ZEXT816(0);
              auVar185 = local_338;
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar62 = local_358._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_388._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = local_278._0_4_;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar51;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar83;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar111;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar158;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(undefined2 *)(lVar67 + 0x2a + lVar78) = uVar56;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            fVar158 = (float)local_340 * fVar206;
            auVar232._4_12_ = local_218._4_12_;
            fVar83 = local_3b4 * fVar206;
            auVar195._4_12_ = local_238._4_12_;
            fVar112 = local_218._0_4_ + fVar158 + (float)local_3d8._0_4_;
            fVar84 = local_238._0_4_ + fVar83 + auVar185._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar195._0_4_ = fVar84 + 0.5;
              auVar99 = blendps(auVar195,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              auVar232._0_4_ = fVar112 + 0.5;
              auVar99 = blendps(auVar232,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar112 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_328._0_4_ = fVar206;
              local_358._0_4_ = uVar80;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar206 = (float)local_328._0_4_;
              auVar185 = local_338;
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar80 = local_358._0_4_;
            }
            fVar206 = fVar206 / fVar206;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_398._0_4_;
            uVar166 = auVar134._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = uVar166;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = local_258._0_4_;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar112;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar233._4_12_ = local_2f8._4_12_;
            auVar196._4_12_ = local_268._4_12_;
            fVar112 = local_2f8._0_4_ + fVar158 + (float)local_3d8._0_4_;
            fVar84 = local_268._0_4_ + fVar83 + auVar185._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar196._0_4_ = fVar84 + 0.5;
              auVar99 = blendps(auVar196,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar84 = auVar99._0_4_;
              auVar233._0_4_ = fVar112 + 0.5;
              auVar99 = blendps(auVar233,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar112 = auVar99._0_4_;
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_328._0_4_ = fVar206;
              local_358._0_4_ = uVar80;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar206 = (float)local_328._0_4_;
              auVar185 = local_338;
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar80 = local_358._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_298._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = uVar166;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = local_3dc;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar84;
            *(float *)(lVar67 + 0x1c + lVar78) = fVar112;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            auVar234._4_12_ = local_2d8._4_12_;
            unaff_XMM9._0_4_ = fVar186 + fVar158 + (float)local_3d8._0_4_;
            fVar186 = local_2d8._0_4_ + fVar83 + auVar185._0_4_;
            if ((bVar53 & 0x10) == 0) {
              auVar234._0_4_ = fVar186 + 0.5;
              auVar99 = blendps(auVar234,auVar226,0xe);
              auVar99 = roundps(auVar99,auVar99,1);
              fVar186 = auVar99._0_4_;
              auVar200._0_4_ = unaff_XMM9._0_4_ + 0.5;
              auVar200._4_12_ = unaff_XMM9._4_12_;
              auVar99 = blendps(auVar200,auVar226,0xe);
              unaff_XMM9 = roundps(auVar99,auVar99,1);
            }
            uVar167 = local_2c8._0_4_;
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              local_328._0_4_ = fVar206;
              local_358._0_4_ = uVar80;
              local_3f8 = fVar207;
              FUN_146964c32(plVar52,iVar63);
              fVar206 = (float)local_328._0_4_;
              uVar66 = local_378._0_4_;
              fVar207 = local_3f8;
              uVar80 = local_358._0_4_;
            }
            param_3 = (undefined4 *)(ulonglong)uVar80;
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_2e8._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = uVar166;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(undefined4 *)(lVar67 + 0x10 + lVar78) = uVar167;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar186;
            *(int *)(lVar67 + 0x1c + lVar78) = unaff_XMM9._0_4_;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            local_3d8._0_4_ = local_3d8._0_4_ + (float)local_368._0_4_ + fVar158;
            auVar176._4_12_ = auVar185._4_12_;
            fVar207 = auVar185._0_4_ + fVar207 + fVar83;
            if ((bVar53 & 0x10) == 0) {
              auVar176._0_4_ = fVar207 + 0.5;
              auVar185 = blendps(auVar176,ZEXT816(0),0xe);
              auVar185 = roundps(auVar185,auVar185,1);
              fVar207 = auVar185._0_4_;
              auVar89._0_4_ = (float)local_3d8._0_4_ + 0.5;
              auVar89._4_12_ = local_3d8._4_12_;
              auVar185 = blendps(auVar89,ZEXT816(0),0xe);
              local_3d8 = roundps(auVar185,auVar185,1);
            }
            plVar52 = *(longlong **)(lVar47 + 0x50);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              local_378._0_4_ = uVar66;
              FUN_146964c32(plVar52,iVar63);
              uVar66 = local_378._0_4_;
            }
            lVar67 = *plVar52;
            lVar78 = (longlong)iVar63 * 0x2c;
            *(undefined4 *)(lVar67 + lVar78) = local_388._0_4_;
            *(undefined4 *)(lVar67 + 4 + lVar78) = uVar166;
            *(float *)(lVar67 + 8 + lVar78) = local_3f4;
            *(float *)(lVar67 + 0xc + lVar78) = local_3f0;
            *(float *)(lVar67 + 0x10 + lVar78) = fVar51;
            *(float *)(lVar67 + 0x14 + lVar78) = fVar206;
            *(float *)(lVar67 + 0x18 + lVar78) = fVar207;
            *(undefined4 *)(lVar67 + 0x1c + lVar78) = local_3d8._0_4_;
            *(uint *)(lVar67 + 0x20 + lVar78) = uVar50;
            *(uint *)(lVar67 + 0x24 + lVar78) = uVar62;
            *(short *)(lVar67 + 0x28 + lVar78) = (short)uVar66;
            *(short *)(lVar67 + 0x2a + lVar78) = (short)uVar80;
            *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = iVar77 + 1;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = iVar77 + 2;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = iVar77 + 3;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)local_3c0 + 4;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar58 = (int)local_3c0 + 5;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            plVar68 = local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)plVar68 + 6;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            plVar68 = local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)plVar68 + 7;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = (int)local_3c0 + 8;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            local_3d8._0_4_ = iVar45;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = (int)local_3c0 + 9;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar77 = (int)local_3c0 + 10;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            plVar68 = local_3c0;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar57 = (int)plVar68 + 0xb;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = local_3d8._0_4_;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar58 = (int)plVar68 + 0xc;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar58 = (int)local_3c0 + 0xd;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar45;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            iVar45 = (int)local_3c0;
            iVar58 = iVar45 + 0xe;
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar77;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar57;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            plVar52 = *(longlong **)(lVar47 + 0x58);
            iVar63 = (int)plVar52[1];
            *(uint *)(plVar52 + 1) = iVar63 + 1U;
            if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
              FUN_1447808da(plVar52,iVar63);
            }
            *(int *)(*plVar52 + (longlong)iVar63 * 4) = iVar58;
            *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
            uVar80 = iVar45 + 0xf;
          }
          param_2 = local_348;
          unaff_R15 = (ulonglong)uVar80;
          auVar159._0_12_ = ZEXT812(0x3f800000);
          auVar159._12_4_ = 0;
          plVar52 = *(longlong **)(lVar47 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(uint *)(*plVar52 + (longlong)iVar63 * 4) = uVar80;
          *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
          uVar80 = (int)local_300 + 1;
          lVar71 = lVar71 + 0xd0;
        } while ((int)uVar80 < (int)local_3b0);
      }
      if ((int)local_3b0 < -1) break;
      fVar207 = *(float *)(param_2 + 0x19);
      uVar76 = (ulonglong)(uint)local_3ec;
    } while ((int)local_3ec < (int)fVar207);
  }
  if (0 < (longlong)(int)param_2[0x11]) {
    lVar47 = param_2[0x10];
    lVar67 = (longlong)(int)param_2[0x11] * 0xa0;
    do {
      if ((*(byte *)(lVar47 + 0x45) & 0x10) == 0) {
        FUN_14695531c(local_3e8,lVar47);
      }
      else {
        FUN_146957a36(local_3e8,lVar47);
      }
      lVar47 = lVar47 + 0xa0;
      lVar67 = lVar67 + -0xa0;
    } while (lVar67 != 0);
  }
  if (0 < (longlong)(int)param_2[5]) {
    lVar47 = param_2[4];
    lVar67 = (longlong)(int)param_2[5] * 0xd0;
    do {
      if ((*(byte *)(lVar47 + 0x45) & 0x10) == 0) {
        FUN_146959d68(local_3e8,lVar47);
      }
      else {
        FUN_14695a1ee(local_3e8,lVar47);
      }
      lVar47 = lVar47 + 0xd0;
      lVar67 = lVar67 + -0xd0;
    } while (lVar67 != 0);
  }
  auVar134 = _DAT_149e1a220;
  auVar99 = _DAT_149e1a210;
  auVar185 = _DAT_1499378f0;
  if (0 < (longlong)(int)param_2[7]) {
    pfVar65 = (float *)local_348[6];
    lVar47 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar67 = (longlong)(int)param_2[7] * 0x98;
    auVar201 = pmovzxbd(unaff_XMM9,0xffffffff);
    fVar207 = (float)DAT_149e1a230;
    fVar186 = DAT_149e1a230._4_4_;
    fVar83 = DAT_149e1a230._8_4_;
    fVar84 = DAT_149e1a230._12_4_;
    fVar51 = (float)DAT_149931f00;
    fVar158 = DAT_149931f00._4_4_;
    fVar206 = DAT_149931f00._8_4_;
    fVar112 = DAT_149931f00._12_4_;
    do {
      if ((*(byte *)((longlong)pfVar65 + 0x45) & 0x10) == 0) {
        uVar76 = *(ulonglong *)(pfVar65 + 0x18);
        local_1e8 = *(undefined8 *)(pfVar65 + 0x20);
        auVar93 = *(undefined1 (*) [16])(pfVar65 + 0x14);
        fVar212 = auVar93._12_4_;
        if (*(char *)(local_3e8 + 6) == '\x01') {
          auVar90 = maxps(auVar93,_DAT_149e1a200);
          auVar90 = minps(auVar90,auVar99);
          fVar212 = auVar90._0_4_;
          fVar111 = auVar90._4_4_;
          fVar157 = auVar90._8_4_;
          auVar118._4_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 +
                (ulonglong)(ushort)((uint)((int)fVar111 + auVar134._4_4_) >> 0x14) * 4);
          auVar118._0_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 + (ulonglong)((uint)((int)fVar212 + auVar134._0_4_) >> 0x14) * 4);
          auVar118._8_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 +
                (ulonglong)(ushort)((uint)((int)fVar157 + auVar134._8_4_) >> 0x14) * 4);
          auVar118._12_4_ = 0;
          auVar144._0_4_ = (uint)fVar212 >> 0xc;
          auVar144._4_4_ = (uint)fVar111 >> 0xc;
          auVar144._8_4_ = (uint)fVar157 >> 0xc;
          auVar144._12_4_ = (uint)auVar90._12_4_ >> 0xc;
          auVar145 = pmaddwd(auVar144 & auVar201 | auVar185,auVar118);
          auVar146._0_4_ = auVar145._0_4_ >> 0x10;
          auVar146._4_4_ = auVar145._4_4_ >> 0x10;
          auVar146._8_4_ = auVar145._8_4_ >> 0x10;
          auVar146._12_4_ = auVar145._12_4_ >> 0x10;
          auVar91._0_4_ = (int)(fVar212 * fVar207 + fVar51);
          auVar91._4_4_ = (int)(fVar111 * fVar186 + fVar158);
          auVar91._8_4_ = (int)(fVar157 * fVar83 + fVar206);
          auVar91._12_4_ = (int)(auVar90._12_4_ * fVar84 + fVar112);
          auVar91 = auVar91 | auVar146;
          auVar92._4_4_ = auVar91._4_4_;
          auVar92._12_4_ = auVar91._12_4_;
          auVar92._0_4_ = auVar91._8_4_;
          auVar92._8_4_ = auVar91._0_4_;
          auVar90 = packssdw(auVar92,auVar92);
          sVar8 = auVar90._0_2_;
          sVar9 = auVar90._2_2_;
          sVar10 = auVar90._4_2_;
          sVar11 = auVar90._6_2_;
          local_1ec = CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar90[6] - (0xff < sVar11),
                               CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar90[4] -
                                        (0xff < sVar10),
                                        CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar90[2] -
                                                 (0xff < sVar9),
                                                 (0 < sVar8) * (sVar8 < 0x100) * auVar90[0] -
                                                 (0xff < sVar8))));
        }
        else {
          fVar111 = auVar93._4_4_;
          auVar121._4_4_ = fVar212;
          auVar121._0_4_ = fVar212;
          auVar121._8_4_ = fVar212;
          auVar121._12_4_ = fVar212;
          if (fVar212 <= 0.0) {
            auVar18._12_4_ = 0;
            auVar18._0_12_ = auVar121._4_12_;
            auVar121 = auVar18 << 0x20;
          }
          if (1.0 <= auVar121._0_4_) {
            auVar121._0_4_ = 0x3f800000;
          }
          auVar14._4_8_ = auVar121._8_8_;
          auVar14._0_4_ = fVar111;
          auVar122._0_8_ = auVar14._0_8_ << 0x20;
          auVar122._8_4_ = auVar93._8_4_;
          auVar122._12_4_ = fVar212;
          auVar123._8_8_ = auVar93._8_8_;
          auVar123._0_8_ = auVar122._8_8_;
          if (auVar93._8_4_ <= 0.0) {
            auVar19._12_4_ = 0;
            auVar19._0_12_ = auVar123._4_12_;
            auVar123 = auVar19 << 0x20;
          }
          if (1.0 <= auVar123._0_4_) {
            auVar123._0_4_ = 0x3f800000;
          }
          auVar124._4_4_ = fVar111;
          auVar124._0_4_ = fVar111;
          auVar124._8_4_ = fVar212;
          auVar124._12_4_ = fVar212;
          if (fVar111 <= 0.0) {
            auVar20._12_4_ = 0;
            auVar20._0_12_ = auVar124._4_12_;
            auVar124 = auVar20 << 0x20;
          }
          if (1.0 <= auVar124._0_4_) {
            auVar124._0_4_ = 0x3f800000;
          }
          if (auVar93._0_4_ <= 0.0) {
            auVar21._12_4_ = 0;
            auVar21._0_12_ = auVar93._4_12_;
            auVar93 = auVar21 << 0x20;
          }
          if (1.0 <= auVar93._0_4_) {
            auVar93._0_4_ = 0x3f800000;
          }
          uVar80 = (uint)(auVar93._0_4_ * 255.0 + 0.5);
          param_3 = (undefined4 *)(ulonglong)uVar80;
          local_1ec = CONCAT13((char)(int)(auVar121._0_4_ * 255.0 + 0.5),
                               CONCAT12((char)uVar80,
                                        CONCAT11((char)(int)(auVar124._0_4_ * 255.0 + 0.5),
                                                 (char)(int)(auVar123._0_4_ * 255.0 + 0.5))));
        }
        puVar81 = *(undefined8 **)(local_3e8[4] + 8);
        if (*(int *)(lVar47 + 0xc60) == 0x10) {
          uVar75 = puVar81[2];
          plVar52 = (longlong *)puVar81[3];
        }
        else {
          uVar75 = *puVar81;
          plVar52 = (longlong *)puVar81[1];
        }
        local_1e0 = uVar76;
        if (plVar52 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar52 + 1) = (int)plVar52[1] + 1;
          UNLOCK();
          LOCK();
          plVar68 = plVar52 + 1;
          *(int *)plVar68 = (int)*plVar68 + -1;
          UNLOCK();
          if ((int)*plVar68 == 0) {
            (**(code **)*plVar52)(plVar52);
            LOCK();
            piVar1 = (int *)((longlong)plVar52 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar52 + 0x10))(plVar52);
            }
          }
        }
        _local_110 = 0;
        local_108 = CONCAT44(local_108._4_4_,0xffffffff);
        local_138 = SUB84(pfVar65,0);
        uStack_134 = (undefined4)((ulonglong)pfVar65 >> 0x20);
        uStack_130 = (undefined4)uVar75;
        uStack_12c = (undefined4)((ulonglong)uVar75 >> 0x20);
        local_158._8_8_ = local_1e8;
        local_158._0_8_ = local_1e0;
        uStack_120 = CONCAT44((float)*(ushort *)(local_1e0 + 0x12),
                              (float)(int)*(short *)(local_1e0 + 0x10));
        if (*(ushort *)(local_1e0 + 0x12) != 0) {
          fVar212 = pfVar65[10];
          fVar111 = 1.0 / pfVar65[0x10];
          fVar164 = pfVar65[3] * 0.0;
          fVar157 = pfVar65[1] * 0.0;
          fVar170 = pfVar65[2] * 0.0;
          fVar168 = *pfVar65 * 0.0;
          local_1c4 = fVar157 + fVar164 + pfVar65[5];
          local_1c8 = fVar168 + fVar170 + pfVar65[4];
          auStack_1d4._0_4_ = pfVar65[1] * fVar111 + fVar164;
          local_1d8 = (undefined1  [4])(fVar111 * *pfVar65 + fVar170);
          auStack_1d4._4_4_ = pfVar65[2] * fVar111 + fVar168;
          fStack_1cc = pfVar65[3] * fVar111 + fVar157;
          local_1b8 = local_158;
          local_1a8 = &local_1e0;
          uStack_1a0 = &local_1e8;
          local_198 = SUB84(local_3e8,0);
          fStack_194 = (float)((ulonglong)local_3e8 >> 0x20);
          uVar75 = *(undefined8 *)(local_1e0 + 0x18);
          iVar63 = *(int *)(uVar76 + 0x20);
          local_1b0 = pfVar65;
          local_128 = local_1d8;
          uStack_190 = local_1d8;
          if (iVar63 < 1) {
            local_438 = (longlong *)CONCAT44(local_438._4_4_,fVar212);
            local_428 = 0xffffffff;
            local_430 = 0;
          }
          else {
            auVar125 = *(undefined1 (*) [16])(pfVar65 + 0x1c);
            fVar111 = auVar125._12_4_;
            if (*(char *)(local_3e8 + 6) == '\x01') {
              auVar90 = maxps(auVar125,_DAT_149e1a200);
              auVar90 = minps(auVar90,auVar99);
              fVar111 = auVar90._0_4_;
              fVar157 = auVar90._4_4_;
              fVar164 = auVar90._8_4_;
              auVar147._4_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar157 + auVar134._4_4_) >> 0x14) * 4);
              auVar147._0_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 + (ulonglong)((uint)((int)fVar111 + auVar134._0_4_) >> 0x14) * 4
                    );
              auVar147._8_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar164 + auVar134._8_4_) >> 0x14) * 4);
              auVar147._12_4_ = 0;
              auVar161._0_4_ = (uint)fVar111 >> 0xc;
              auVar161._4_4_ = (uint)fVar157 >> 0xc;
              auVar161._8_4_ = (uint)fVar164 >> 0xc;
              auVar161._12_4_ = (uint)auVar90._12_4_ >> 0xc;
              auVar145 = pmaddwd(auVar161 & auVar201 | auVar185,auVar147);
              auVar162._0_4_ = auVar145._0_4_ >> 0x10;
              auVar162._4_4_ = auVar145._4_4_ >> 0x10;
              auVar162._8_4_ = auVar145._8_4_ >> 0x10;
              auVar162._12_4_ = auVar145._12_4_ >> 0x10;
              auVar119._0_4_ = (int)(fVar111 * fVar207 + fVar51);
              auVar119._4_4_ = (int)(fVar157 * fVar186 + fVar158);
              auVar119._8_4_ = (int)(fVar164 * fVar83 + fVar206);
              auVar119._12_4_ = (int)(auVar90._12_4_ * fVar84 + fVar112);
              auVar119 = auVar119 | auVar162;
              auVar120._4_4_ = auVar119._4_4_;
              auVar120._12_4_ = auVar119._12_4_;
              auVar120._0_4_ = auVar119._8_4_;
              auVar120._8_4_ = auVar119._0_4_;
              auVar90 = packssdw(auVar120,auVar120);
              sVar8 = auVar90._0_2_;
              sVar9 = auVar90._2_2_;
              sVar10 = auVar90._4_2_;
              sVar11 = auVar90._6_2_;
              local_1f0 = CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar90[6] - (0xff < sVar11),
                                   CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar90[4] -
                                            (0xff < sVar10),
                                            CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar90[2] -
                                                     (0xff < sVar9),
                                                     (0 < sVar8) * (sVar8 < 0x100) * auVar90[0] -
                                                     (0xff < sVar8))));
            }
            else {
              fVar157 = auVar125._4_4_;
              auVar148._4_4_ = fVar111;
              auVar148._0_4_ = fVar111;
              auVar148._8_4_ = fVar111;
              auVar148._12_4_ = fVar111;
              if (fVar111 <= 0.0) {
                auVar22._12_4_ = 0;
                auVar22._0_12_ = auVar148._4_12_;
                auVar148 = auVar22 << 0x20;
              }
              if (1.0 <= auVar148._0_4_) {
                auVar148._0_4_ = 0x3f800000;
              }
              auVar15._4_8_ = auVar148._8_8_;
              auVar15._0_4_ = fVar157;
              auVar149._0_8_ = auVar15._0_8_ << 0x20;
              auVar149._8_4_ = auVar125._8_4_;
              auVar149._12_4_ = fVar111;
              auVar150._8_8_ = auVar125._8_8_;
              auVar150._0_8_ = auVar149._8_8_;
              if (auVar125._8_4_ <= 0.0) {
                auVar23._12_4_ = 0;
                auVar23._0_12_ = auVar150._4_12_;
                auVar150 = auVar23 << 0x20;
              }
              if (1.0 <= auVar150._0_4_) {
                auVar150._0_4_ = 0x3f800000;
              }
              auVar151._4_4_ = fVar157;
              auVar151._0_4_ = fVar157;
              auVar151._8_4_ = fVar111;
              auVar151._12_4_ = fVar111;
              if (fVar157 <= 0.0) {
                auVar24._12_4_ = 0;
                auVar24._0_12_ = auVar151._4_12_;
                auVar151 = auVar24 << 0x20;
              }
              if (1.0 <= auVar151._0_4_) {
                auVar151._0_4_ = 0x3f800000;
              }
              if (auVar125._0_4_ <= 0.0) {
                auVar25._12_4_ = 0;
                auVar25._0_12_ = auVar125._4_12_;
                auVar125 = auVar25 << 0x20;
              }
              if (1.0 <= auVar125._0_4_) {
                auVar125._0_4_ = 0x3f800000;
              }
              local_1f0 = CONCAT13((char)(int)(auVar148._0_4_ * 255.0 + 0.5),
                                   CONCAT12((char)(int)(auVar125._0_4_ * 255.0 + 0.5),
                                            CONCAT11((char)(int)(auVar151._0_4_ * 255.0 + 0.5),
                                                     (char)(int)(auVar150._0_4_ * 255.0 + 0.5))));
            }
            auVar90 = blendps(ZEXT416((uint)(pfVar65[0x10] * (float)iVar63 + 0.5)),_DAT_149931140,
                              0xe);
            auVar90 = roundps(ZEXT416((uint)fVar170),auVar90,1);
            local_428 = 0xffffffff;
            local_430 = auVar90._0_4_;
            local_438._0_4_ = fVar212;
            local_428 = FUN_140c7405c(&local_1b8,(int *)(uVar76 + 0x20),&local_1f0,
                                      *(undefined8 *)(uVar76 + 0x28));
            local_438 = (longlong *)CONCAT44(local_438._4_4_,(int)fVar212 + 1);
            local_430 = auVar90._0_4_;
          }
          param_3 = &local_1ec;
          FUN_140c7405c(&local_1b8,&DAT_14c96b1c0,param_3,uVar75);
        }
      }
      else {
        FUN_14695a674(local_3e8,pfVar65);
      }
      pfVar65 = pfVar65 + 0x26;
      lVar67 = lVar67 + -0x98;
    } while (lVar67 != 0);
  }
  uVar80 = *(uint *)(local_348 + 0xb);
  plVar52 = local_348;
  if (0 < (int)uVar80) {
    plVar68 = (longlong *)0x0;
    do {
      uVar75 = _local_110;
      local_128 = (undefined1 *)0x0;
      uStack_120 = 0;
      uStack_12c = 0;
      local_148 = 0.0;
      lVar47 = plVar52[10];
      uVar50 = (uint)plVar68;
      local_368._0_8_ = plVar68;
      lVar67 = (longlong)plVar68 * 0x90;
      uVar54 = *(undefined1 *)(lVar47 + 0x45 + lVar67);
      fVar207 = *(float *)(lVar47 + 0x80 + lVar67);
      if (*(char *)(lVar47 + 0x8c + lVar67) == '\0') {
        cVar43 = '\x02' - (fVar207 == 1.0);
        uVar166 = 0;
      }
      else {
        fVar51 = 0.0;
        if (0.0 <= fVar207) {
          fVar51 = fVar207;
        }
        local_148 = (fVar51 * 0.5 + -1.0) / (fVar51 * 0.5 + 1.0);
        uStack_12c = 0x3f800000;
        uStack_120 = 0x3f80000000000000;
        cVar43 = '\x02';
        uVar166 = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),4);
      }
      uStack_130 = 0;
      uStack_134 = 0;
      local_138 = 0.0;
      uStack_13c = 0;
      uStack_140 = 0;
      uStack_144 = 0;
      lVar71 = lVar47 + lVar67;
      local_3a8._0_4_ = *(undefined4 *)(lVar71 + 0x28);
      local_158._0_4_ = *(undefined4 *)(lVar71 + 0x28);
      local_118 = (longlong *)0x0;
      uStack_10d = SUB85(uVar75,3);
      _local_110 = CONCAT12(uVar54,CONCAT11((char)uVar166,cVar43));
      _local_110 = (uint6)_local_110;
      uVar6 = *(undefined1 *)(lVar71 + 0x44);
      uStack_10d._4_1_ = SUB81(uVar75,7);
      _local_110 = CONCAT16(uVar6,_local_110);
      lVar78 = *(longlong *)(lVar71 + 0x30);
      if (lVar78 == 0) {
        iVar63 = *(int *)(lVar71 + 0x38);
        if (((longlong)iVar63 < 0) || ((int)((longlong *)local_3e8[3])[1] <= iVar63)) {
          lVar78 = 0;
        }
        else {
          lVar78 = (longlong)iVar63 * 0x40 + *(longlong *)local_3e8[3];
        }
      }
      local_398._0_4_ = uVar166;
      local_3d8[0] = uVar54;
      uVar66 = uVar50 + 1;
      if ((int)(uVar50 + 1) < (int)uVar80) {
        uVar66 = uVar80;
      }
      uVar62 = uVar66 - 1;
      puVar59 = (undefined4 *)(lVar47 + lVar67 + 0xb8);
      local_3c0 = plVar68;
      local_108 = lVar78;
      do {
        param_3 = (undefined4 *)((ulonglong)local_3c0 & 0xffffffff);
        uVar46 = (int)local_3c0 + 1;
        local_3c0 = (longlong *)(ulonglong)uVar46;
        plVar52 = (longlong *)(ulonglong)uVar66;
        if ((int)uVar80 <= (int)uVar46) goto LAB_14287100b;
        local_188 = 0;
        uStack_180 = 0;
        uStack_190._4_4_ = 0;
        local_1a8._0_4_ = 0.0;
        local_16e = *(undefined1 *)((longlong)puVar59 + 0x1d);
        fVar207 = (float)puVar59[0x16];
        if (*(char *)(puVar59 + 0x19) == '\0') {
          cVar44 = '\x02' - (fVar207 == 1.0);
          uVar54 = 0;
        }
        else {
          fVar51 = 0.0;
          if (0.0 <= fVar207) {
            fVar51 = fVar207;
          }
          local_1a8._0_4_ = (fVar51 * 0.5 + -1.0) / (fVar51 * 0.5 + 1.0);
          uStack_190._4_4_ = 0x3f800000;
          uStack_180 = 0x3f80000000000000;
          cVar44 = '\x02';
          uVar54 = 4;
        }
        uStack_190._0_4_ = 0;
        fStack_194 = 0.0;
        local_198 = 0.0;
        uStack_1a0._4_4_ = 0;
        uStack_1a0._0_4_ = 0.0;
        local_1a8._4_4_ = 0.0;
        local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,*puVar59);
        local_178 = 0;
        local_170 = CONCAT11(uVar54,cVar44);
        local_16c = 0;
        local_16a = *(undefined1 *)(puVar59 + 7);
        local_168 = *(longlong *)(puVar59 + 2);
        if (local_168 == 0) {
          iVar63 = puVar59[4];
          if (((longlong)iVar63 < 0) || ((int)((longlong *)local_3e8[3])[1] <= iVar63)) {
            local_168 = 0;
          }
          else {
            local_168 = (longlong)iVar63 * 0x40 + *(longlong *)local_3e8[3];
          }
        }
        cVar44 = FUN_142876d2e(&local_1b8,local_158);
        puVar59 = puVar59 + 0x24;
      } while (cVar44 != '\0');
      uVar62 = (int)local_3c0 - 1;
      param_3 = (undefined4 *)(ulonglong)uVar62;
      plVar52 = local_3c0;
LAB_14287100b:
      local_3c0 = plVar52;
      local_410 = (float *)CONCAT71(local_410._1_7_,uVar6);
      local_420 = local_3d8[0];
      local_428 = CONCAT31(local_428._1_3_,local_398[0]);
      local_430 = CONCAT31(local_430._1_3_,cVar43);
      local_418 = 0;
      local_438 = (longlong *)0x0;
      local_408 = lVar78;
      puVar48 = (undefined1 *)FUN_14023c580(local_3e8,*local_3e8,local_3a8._0_4_,&local_148);
      auVar35._12_4_ = 0;
      auVar35._0_12_ = _auStack_1d4;
      _local_1d8 = auVar35 << 0x20;
      local_1e0 = local_1e0 & 0xffffffff00000000;
      local_3a8._0_8_ = param_3;
      auVar55 = (undefined1  [4])0;
      if (uVar50 <= (uint)param_3) {
        lVar47 = local_348[10];
        puVar41 = uStack_190;
        do {
          uStack_190._4_4_ = (undefined4)((ulonglong)puVar41 >> 0x20);
          lVar67 = (longlong)(int)plVar68 * 0x90;
          iVar63 = *(int *)(lVar47 + 0x68 + lVar67);
          if (iVar63 < 2) goto LAB_14287121f;
          pfVar65 = (float *)(lVar47 + lVar67);
          fVar207 = pfVar65[0x20];
          if (*(char *)(pfVar65 + 0x23) == '\x01') {
            fVar51 = 0.0;
            if (0.0 <= fVar207) {
              fVar51 = fVar207;
            }
            fStack_194 = pfVar65[0x22];
            local_198 = pfVar65[0x21];
            local_1a8._0_4_ = (fVar51 * 0.5 + 1.0) / pfVar65[0x10];
            local_1a8._4_4_ = 1.0 / pfVar65[0x10];
            uStack_1a0._0_4_ = local_1a8._4_4_ + local_1a8._4_4_;
            uStack_1a0._4_4_ = 0x3f490fe9;
            uStack_190._0_4_ = 0;
            if (local_198 < 1.0) {
              local_198 = -10.0;
            }
            local_1b8 = puVar48;
            local_1b0 = pfVar65;
            FUN_146970650(&local_1b8,lVar47 + lVar67 + 0x60,local_1d8,&local_1e0);
            param_3 = (undefined4 *)local_3a8._0_8_;
          }
          else {
            uStack_190 = puVar41;
            if ((fVar207 != 1.0) || (NAN(fVar207))) {
              local_1d8 = (undefined1  [4])((int)local_1d8 + iVar63 * 4 + -4);
              local_1e0 = CONCAT44(local_1e0._4_4_,(int)local_1e0 + (iVar63 * 3 + -3) * 2);
            }
            else {
              local_1d8 = (undefined1  [4])((int)local_1d8 + iVar63);
              local_1e0 = CONCAT44(local_1e0._4_4_,(int)local_1e0 + iVar63 * 2 + -2);
            }
          }
          uVar80 = (int)plVar68 + 1;
          plVar68 = (longlong *)(ulonglong)uVar80;
          puVar41 = uStack_190;
        } while (uVar62 + 1 != uVar80);
        auVar55 = local_1d8;
      }
      iVar77 = (int)auVar55 + *(int *)(*(longlong *)(puVar48 + 0x50) + 8);
      if (iVar77 < 0) {
LAB_142872d0d:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar77);
      }
      if (*(int *)(*(longlong *)(puVar48 + 0x50) + 0xc) < iVar77) {
        FUN_14578aec0();
        param_3 = (undefined4 *)local_3a8._0_8_;
      }
      iVar77 = (int)local_1e0 + *(int *)(*(longlong *)(puVar48 + 0x58) + 8);
      if (iVar77 < 0) goto LAB_142872d0d;
      puVar41 = uStack_190;
      if (*(int *)(*(longlong *)(puVar48 + 0x58) + 0xc) < iVar77) {
        FUN_14480809c();
        param_3 = (undefined4 *)local_3a8._0_8_;
        puVar41 = uStack_190;
      }
LAB_14287121f:
      plVar52 = local_348;
      lVar47 = local_368._0_8_;
      uStack_190 = puVar41;
      if ((int)uVar50 <= (int)param_3) {
        do {
          auVar185 = ZEXT816(0);
          auVar73 = (undefined1  [8])plVar52[10];
          lVar71 = lVar47 * 0x90;
          uVar80 = *(uint *)((longlong)auVar73 + 0x68 + lVar71);
          lVar67 = lVar47;
          if (1 < (int)uVar80) {
            pfVar65 = (float *)((longlong)auVar73 + lVar71);
            bVar53 = *(byte *)((longlong)auVar73 + 0x45 + lVar71);
            auVar96 = *(undefined1 (*) [16])(pfVar65 + 0x14);
            fVar207 = auVar96._12_4_;
            if (*(char *)(local_3e8 + 6) == '\x01') {
              auVar99 = maxps(auVar96,_DAT_149e1a200);
              auVar99 = minps(auVar99,_DAT_149e1a210);
              fVar207 = auVar99._0_4_;
              fVar51 = auVar99._4_4_;
              fVar186 = auVar99._8_4_;
              auVar126._4_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar51 + -0x39000000) >> 0x14) * 4);
              auVar126._0_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 + (ulonglong)((int)fVar207 + 0xc7000000U >> 0x14) * 4);
              auVar126._8_4_ =
                   *(undefined4 *)
                    (&DAT_149e1bee0 +
                    (ulonglong)(ushort)((uint)((int)fVar186 + -0x39000000) >> 0x14) * 4);
              auVar126._12_4_ = 0;
              auVar152._0_4_ = (uint)fVar207 >> 0xc;
              auVar152._4_4_ = (uint)fVar51 >> 0xc;
              auVar152._8_4_ = (uint)fVar186 >> 0xc;
              auVar152._12_4_ = (uint)auVar99._12_4_ >> 0xc;
              auVar134 = pmaddwd(auVar152 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar126);
              auVar153._0_4_ = auVar134._0_4_ >> 0x10;
              auVar153._4_4_ = auVar134._4_4_ >> 0x10;
              auVar153._8_4_ = auVar134._8_4_ >> 0x10;
              auVar153._12_4_ = auVar134._12_4_ >> 0x10;
              auVar94._0_4_ = (int)(fVar207 * 0.0 + 0.5);
              auVar94._4_4_ = (int)(fVar51 * 0.0 + 0.5);
              auVar94._8_4_ = (int)(fVar186 * 0.0 + 0.5);
              auVar94._12_4_ = (int)(auVar99._12_4_ * 255.0 + 0.5);
              auVar94 = auVar94 | auVar153;
              auVar95._4_4_ = auVar94._4_4_;
              auVar95._12_4_ = auVar94._12_4_;
              auVar95._0_4_ = auVar94._8_4_;
              auVar95._8_4_ = auVar94._0_4_;
              auVar99 = packssdw(auVar95,auVar95);
              sVar8 = auVar99._0_2_;
              sVar9 = auVar99._2_2_;
              sVar10 = auVar99._4_2_;
              sVar11 = auVar99._6_2_;
              local_1e0._0_4_ =
                   CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar99[6] - (0xff < sVar11),
                            CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar99[4] - (0xff < sVar10),
                                     CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar99[2] -
                                              (0xff < sVar9),
                                              (0 < sVar8) * (sVar8 < 0x100) * auVar99[0] -
                                              (0xff < sVar8))));
            }
            else {
              fVar51 = auVar96._4_4_;
              auVar127._4_4_ = fVar207;
              auVar127._0_4_ = fVar207;
              auVar127._8_4_ = fVar207;
              auVar127._12_4_ = fVar207;
              if (fVar207 <= 0.0) {
                auVar33._12_4_ = 0;
                auVar33._0_12_ = auVar127._4_12_;
                auVar127 = auVar33 << 0x20;
              }
              if (1.0 <= auVar127._0_4_) {
                auVar127._0_4_ = 0x3f800000;
              }
              auVar16._4_8_ = auVar127._8_8_;
              auVar16._0_4_ = fVar51;
              auVar128._0_8_ = auVar16._0_8_ << 0x20;
              auVar128._8_4_ = auVar96._8_4_;
              auVar128._12_4_ = fVar207;
              auVar129._8_8_ = auVar96._8_8_;
              auVar129._0_8_ = auVar128._8_8_;
              if (auVar96._8_4_ <= 0.0) {
                auVar26._12_4_ = 0;
                auVar26._0_12_ = auVar129._4_12_;
                auVar129 = auVar26 << 0x20;
              }
              if (1.0 <= auVar129._0_4_) {
                auVar129._0_4_ = 0x3f800000;
              }
              auVar130._4_4_ = fVar51;
              auVar130._0_4_ = fVar51;
              auVar130._8_4_ = fVar207;
              auVar130._12_4_ = fVar207;
              if (fVar51 <= 0.0) {
                auVar27._12_4_ = 0;
                auVar27._0_12_ = auVar130._4_12_;
                auVar130 = auVar27 << 0x20;
              }
              if (1.0 <= auVar130._0_4_) {
                auVar130._0_4_ = 0x3f800000;
              }
              if (auVar96._0_4_ <= 0.0) {
                auVar28._12_4_ = 0;
                auVar28._0_12_ = auVar96._4_12_;
                auVar96 = auVar28 << 0x20;
              }
              if (1.0 <= auVar96._0_4_) {
                auVar96._0_4_ = 0x3f800000;
              }
              local_1e0._0_4_ =
                   CONCAT13((char)(int)(auVar127._0_4_ * 255.0 + 0.5),
                            CONCAT12((char)(int)(auVar96._0_4_ * 255.0 + 0.5),
                                     CONCAT11((char)(int)(auVar130._0_4_ * 255.0 + 0.5),
                                              (char)(int)(auVar129._0_4_ * 255.0 + 0.5))));
            }
            _local_1d8 = auVar185;
            fVar207 = pfVar65[0x1e];
            local_3d8[0] = bVar53;
            if ((int)fVar207 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(fVar207);
            }
            local_368._0_8_ = lVar47;
            puVar41 = uStack_190;
            if (fVar207 != 0.0) {
              local_388 = auVar73;
              local_338._0_8_ = lVar71;
              FUN_146971392(local_1d8);
              auVar73 = local_388;
              lVar71 = local_338._0_8_;
              puVar41 = uStack_190;
              if ((longlong)(int)pfVar65[0x1e] != 0) {
                local_398._0_8_ = *(undefined8 *)(pfVar65 + 0x1c);
                uVar76 = (longlong)(int)pfVar65[0x1e] << 4;
                uVar69 = 0;
                local_340 = uVar76;
                do {
                  fVar158 = pfVar65[0x17] * *(float *)(local_398._0_8_ + 0xc + uVar69);
                  auVar163 = ZEXT416((uint)fVar158);
                  fVar186 = pfVar65[0x16] * *(float *)(local_398._0_8_ + 8 + uVar69);
                  auVar154 = ZEXT416((uint)fVar186);
                  fVar51 = pfVar65[0x15] * *(float *)(local_398._0_8_ + 4 + uVar69);
                  auVar131 = ZEXT416((uint)fVar51);
                  fVar207 = pfVar65[0x14] * *(float *)(local_398._0_8_ + uVar69);
                  auVar97 = ZEXT416((uint)fVar207);
                  if (*(char *)(local_3e8 + 6) == '\x01') {
                    auVar99 = insertps(auVar97,auVar131,0x10);
                    auVar99 = insertps(auVar99,auVar154,0x20);
                    auVar99 = insertps(auVar99,auVar163,0x30);
                    auVar99 = maxps(auVar99,_DAT_149e1a200);
                    auVar99 = minps(auVar99,_DAT_149e1a210);
                    fVar207 = auVar99._0_4_;
                    fVar51 = auVar99._4_4_;
                    fVar186 = auVar99._8_4_;
                    auVar155._4_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 +
                          (ulonglong)(ushort)((uint)((int)fVar51 + -0x39000000) >> 0x14) * 4);
                    auVar155._0_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 + (ulonglong)((int)fVar207 + 0xc7000000U >> 0x14) * 4);
                    auVar155._8_4_ =
                         *(undefined4 *)
                          (&DAT_149e1bee0 +
                          (ulonglong)(ushort)((uint)((int)fVar186 + -0x39000000) >> 0x14) * 4);
                    auVar155._12_4_ = 0;
                    auVar132._0_4_ = (uint)fVar207 >> 0xc;
                    auVar132._4_4_ = (uint)fVar51 >> 0xc;
                    auVar132._8_4_ = (uint)fVar186 >> 0xc;
                    auVar132._12_4_ = (uint)auVar99._12_4_ >> 0xc;
                    auVar134 = pmaddwd(auVar132 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar155);
                    auVar98._4_4_ = (int)(fVar51 * 0.0 + 0.5) | auVar134._4_4_ >> 0x10;
                    auVar98._12_4_ = (int)(auVar99._12_4_ * 255.0 + 0.5) | auVar134._12_4_ >> 0x10;
                    auVar98._0_4_ = (int)(fVar186 * 0.0 + 0.5) | auVar134._8_4_ >> 0x10;
                    auVar98._8_4_ = (int)(fVar207 * 0.0 + 0.5) | auVar134._0_4_ >> 0x10;
                    auVar99 = packssdw(auVar98,auVar98);
                    sVar8 = auVar99._0_2_;
                    sVar9 = auVar99._2_2_;
                    sVar10 = auVar99._4_2_;
                    sVar11 = auVar99._6_2_;
                    bVar53 = (0 < sVar11) * (sVar11 < 0x100) * auVar99[6] - (0xff < sVar11);
                    uVar50 = CONCAT13(bVar53,CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar99[4] -
                                                      (0xff < sVar10),
                                                      CONCAT11((0 < sVar9) * (sVar9 < 0x100) *
                                                               auVar99[2] - (0xff < sVar9),
                                                               (0 < sVar8) * (sVar8 < 0x100) *
                                                               auVar99[0] - (0xff < sVar8))));
                    uVar66 = uVar50 >> 8;
                    uVar62 = uVar50 >> 0x10;
                    fVar158 = (float)(uint)bVar53;
                  }
                  else {
                    if (fVar158 <= 0.0) {
                      auVar163 = ZEXT816(0) << 0x20;
                    }
                    if (1.0 <= auVar163._0_4_) {
                      auVar163._0_4_ = 0x3f800000;
                    }
                    fVar158 = (float)(int)(auVar163._0_4_ * 255.0 + 0.5);
                    if (fVar186 <= 0.0) {
                      auVar154 = ZEXT816(0) << 0x20;
                    }
                    if (1.0 <= auVar154._0_4_) {
                      auVar154._0_4_ = 0x3f800000;
                    }
                    uVar50 = (uint)(auVar154._0_4_ * 255.0 + 0.5);
                    if (fVar51 <= 0.0) {
                      auVar131 = ZEXT816(0) << 0x20;
                    }
                    if (1.0 <= auVar131._0_4_) {
                      auVar131._0_4_ = 0x3f800000;
                    }
                    uVar66 = (uint)(auVar131._0_4_ * 255.0 + 0.5);
                    if (fVar207 <= 0.0) {
                      auVar97 = ZEXT816(0) << 0x20;
                    }
                    if (1.0 <= auVar97._0_4_) {
                      auVar97._0_4_ = 0x3f800000;
                    }
                    uVar62 = (uint)(auVar97._0_4_ * 255.0 + 0.5);
                  }
                  uVar166 = auStack_1d4._4_4_;
                  lVar47 = (longlong)(int)auStack_1d4._4_4_;
                  uVar46 = auStack_1d4._4_4_ + 1;
                  auStack_1d4._4_4_ = uVar46;
                  if ((uint)fStack_1cc < uVar46) {
                    local_3b4 = fVar158;
                    uStack_190 = puVar41;
                    FUN_14602b1fc(local_1d8,uVar166);
                    uVar76 = local_340;
                    auVar73 = local_388;
                    lVar71 = local_338._0_8_;
                    fVar158 = local_3b4;
                    puVar41 = uStack_190;
                  }
                  *(uint *)((longlong)_local_1d8 + lVar47 * 4) =
                       uVar50 & 0xff |
                       (uVar66 & 0xff) << 8 | (uVar62 & 0xff) << 0x10 | (int)fVar158 << 0x18;
                  uVar69 = uVar69 + 0x10;
                } while (uVar76 != uVar69);
              }
            }
            uVar75 = DAT_14c84635c;
            uStack_190._4_4_ = (undefined4)((ulonglong)puVar41 >> 0x20);
            local_3d8[0] = local_3d8[0] & 0x10;
            fVar207 = pfVar65[0x20];
            if (*(char *)(pfVar65 + 0x23) == '\0') {
              uStack_190 = puVar41;
              if ((fVar207 != 1.0) || (NAN(fVar207))) {
                fVar207 = (fVar207 * 0.5) / pfVar65[0x10];
                uVar76 = (ulonglong)(uVar80 - 1);
                lVar47 = 4;
                do {
                  uVar75 = DAT_14c84635c;
                  lVar67 = *(longlong *)(pfVar65 + 0x18);
                  fVar51 = *(float *)(lVar67 + -8 + lVar47 * 2);
                  fVar186 = *(float *)(lVar67 + -4 + lVar47 * 2);
                  fVar158 = *(float *)(lVar67 + lVar47 * 2);
                  puVar49 = (undefined8 *)((longlong)_local_1d8 + lVar47);
                  puVar81 = (undefined8 *)((longlong)_local_1d8 + -4 + lVar47);
                  if (auStack_1d4._4_4_ == 0) {
                    puVar49 = &local_1e0;
                    puVar81 = &local_1e0;
                  }
                  fVar83 = *(float *)(lVar67 + 4 + lVar47 * 2);
                  fVar84 = fVar83 - fVar186;
                  fVar206 = fVar158 - fVar51;
                  fVar112 = fVar206 * fVar206 + fVar84 * fVar84;
                  if (1e-08 < fVar112) {
                    fVar206 = fVar206 * (1.0 / SQRT(fVar112));
                  }
                  else {
                    fVar206 = 0.0;
                  }
                  fVar206 = fVar206 * fVar207;
                  fVar212 = (float)(~-(uint)(1e-08 < fVar112) & 0x80000000 |
                                   (uint)((1.0 / SQRT(fVar112)) * -fVar84) &
                                   -(uint)(1e-08 < fVar112)) * fVar207;
                  fVar112 = pfVar65[1] * (fVar51 + fVar212) + pfVar65[3] * (fVar186 + fVar206) +
                            pfVar65[5];
                  fVar84 = (fVar51 + fVar212) * *pfVar65 + (fVar186 + fVar206) * pfVar65[2] +
                           pfVar65[4];
                  if (local_3d8[0] == '\0') {
                    auVar185 = blendps(ZEXT416((uint)(fVar84 + 0.5)),ZEXT816(0),0xe);
                    auVar185 = roundps(auVar185,auVar185,1);
                    fVar84 = auVar185._0_4_;
                    auVar185 = blendps(ZEXT416((uint)(fVar112 + 0.5)),ZEXT816(0),0xe);
                    auVar185 = roundps(auVar185,auVar185,1);
                    fVar112 = auVar185._0_4_;
                  }
                  uVar166 = *(undefined4 *)puVar81;
                  uVar167 = *(undefined4 *)puVar49;
                  plVar52 = *(longlong **)(puVar48 + 0x50);
                  iVar63 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar63 + 1U;
                  local_398._0_8_ = lVar47;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
                    FUN_146964c32(plVar52,iVar63);
                    lVar47 = local_398._0_8_;
                  }
                  lVar67 = *plVar52;
                  lVar71 = (longlong)iVar63 * 0x2c;
                  *(int *)(lVar67 + lVar71) = (int)uVar75;
                  *(int *)(lVar67 + 4 + lVar71) = (int)((ulonglong)uVar75 >> 0x20);
                  *(undefined1 **)(lVar67 + 8 + lVar71) = &DAT_3f8000003f800000;
                  *(float *)(lVar67 + 0x18 + lVar71) = fVar84;
                  *(float *)(lVar67 + 0x1c + lVar71) = fVar112;
                  *(undefined4 *)(lVar67 + 0x20 + lVar71) = uVar166;
                  *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
                  *(int *)(puVar48 + 0x74) = *(int *)(puVar48 + 0x74) + 1;
                  uVar75 = DAT_14c84635c;
                  fVar84 = pfVar65[1] * (fVar51 - fVar212) + pfVar65[3] * (fVar186 - fVar206) +
                           pfVar65[5];
                  fVar51 = (fVar51 - fVar212) * *pfVar65 + (fVar186 - fVar206) * pfVar65[2] +
                           pfVar65[4];
                  if (local_3d8[0] == '\0') {
                    auVar185 = blendps(ZEXT416((uint)(fVar51 + 0.5)),ZEXT816(0),0xe);
                    auVar185 = roundps(auVar185,auVar185,1);
                    fVar51 = auVar185._0_4_;
                    auVar185 = blendps(ZEXT416((uint)(fVar84 + 0.5)),ZEXT816(0),0xe);
                    auVar185 = roundps(auVar185,auVar185,1);
                    fVar84 = auVar185._0_4_;
                  }
                  auVar185 = ZEXT816(0);
                  plVar52 = *(longlong **)(puVar48 + 0x50);
                  iVar63 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar63 + 1U;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
                    FUN_146964c32(plVar52,iVar63);
                    lVar47 = local_398._0_8_;
                  }
                  lVar67 = *plVar52;
                  lVar71 = (longlong)iVar63 * 0x2c;
                  *(int *)(lVar67 + lVar71) = (int)uVar75;
                  *(int *)(lVar67 + 4 + lVar71) = (int)((ulonglong)uVar75 >> 0x20);
                  *(undefined1 **)(lVar67 + 8 + lVar71) = &DAT_3f8000003f800000;
                  *(float *)(lVar67 + 0x18 + lVar71) = fVar51;
                  *(float *)(lVar67 + 0x1c + lVar71) = fVar84;
                  *(undefined4 *)(lVar67 + 0x20 + lVar71) = uVar166;
                  *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
                  *(int *)(puVar48 + 0x74) = *(int *)(puVar48 + 0x74) + 1;
                  uVar75 = DAT_14c84635c;
                  fVar186 = pfVar65[1] * (fVar158 + fVar212) + pfVar65[3] * (fVar83 + fVar206) +
                            pfVar65[5];
                  fVar51 = (fVar158 + fVar212) * *pfVar65 + (fVar83 + fVar206) * pfVar65[2] +
                           pfVar65[4];
                  if (local_3d8[0] == '\0') {
                    auVar99 = blendps(ZEXT416((uint)(fVar51 + 0.5)),auVar185,0xe);
                    auVar99 = roundps(auVar99,auVar99,1);
                    fVar51 = auVar99._0_4_;
                    auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar185,0xe);
                    auVar99 = roundps(auVar99,auVar99,1);
                    fVar186 = auVar99._0_4_;
                  }
                  plVar52 = *(longlong **)(puVar48 + 0x50);
                  iVar63 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar63 + 1U;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
                    FUN_146964c32(plVar52,iVar63);
                  }
                  lVar67 = *plVar52;
                  lVar71 = (longlong)iVar63 * 0x2c;
                  *(int *)(lVar67 + lVar71) = (int)uVar75;
                  *(int *)(lVar67 + 4 + lVar71) = (int)((ulonglong)uVar75 >> 0x20);
                  *(undefined1 **)(lVar67 + 8 + lVar71) = &DAT_3f8000003f800000;
                  *(float *)(lVar67 + 0x18 + lVar71) = fVar51;
                  *(float *)(lVar67 + 0x1c + lVar71) = fVar186;
                  *(undefined4 *)(lVar67 + 0x20 + lVar71) = uVar167;
                  *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
                  *(int *)(puVar48 + 0x74) = *(int *)(puVar48 + 0x74) + 1;
                  uVar75 = DAT_14c84635c;
                  fVar51 = pfVar65[1] * (fVar158 - fVar212) + pfVar65[3] * (fVar83 - fVar206) +
                           pfVar65[5];
                  fVar186 = (fVar158 - fVar212) * *pfVar65 + (fVar83 - fVar206) * pfVar65[2] +
                            pfVar65[4];
                  if (local_3d8[0] == '\0') {
                    auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar185,0xe);
                    auVar99 = roundps(auVar99,auVar99,1);
                    fVar186 = auVar99._0_4_;
                    auVar185 = blendps(ZEXT416((uint)(fVar51 + 0.5)),auVar185,0xe);
                    auVar185 = roundps(auVar185,auVar185,1);
                    fVar51 = auVar185._0_4_;
                  }
                  plVar52 = *(longlong **)(puVar48 + 0x50);
                  iVar63 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar63 + 1U;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
                    FUN_146964c32(plVar52,iVar63);
                  }
                  lVar67 = *plVar52;
                  lVar71 = (longlong)iVar63 * 0x2c;
                  *(int *)(lVar67 + lVar71) = (int)uVar75;
                  *(int *)(lVar67 + 4 + lVar71) = (int)((ulonglong)uVar75 >> 0x20);
                  *(undefined1 **)(lVar67 + 8 + lVar71) = &DAT_3f8000003f800000;
                  *(float *)(lVar67 + 0x18 + lVar71) = fVar186;
                  *(float *)(lVar67 + 0x1c + lVar71) = fVar51;
                  *(undefined4 *)(lVar67 + 0x20 + lVar71) = uVar167;
                  *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
                  iVar63 = *(int *)(puVar48 + 0x74);
                  *(int *)(puVar48 + 0x74) = iVar63 + 1;
                  local_438 = (longlong *)CONCAT44(local_438._4_4_,iVar63 + -3);
                  FUN_146971e84(puVar48,iVar63 + -2,iVar63,iVar63 + -1);
                  lVar47 = lVar47 + 4;
                  uVar76 = uVar76 - 1;
                } while (uVar76 != 0);
              }
              else {
                puVar81 = &local_1e0;
                if (auStack_1d4._4_4_ != 0) {
                  puVar81 = _local_1d8;
                }
                fVar207 = **(float **)(pfVar65 + 0x18);
                fVar51 = (*(float **)(pfVar65 + 0x18))[1];
                fVar186 = pfVar65[1] * fVar207 + pfVar65[3] * fVar51 + pfVar65[5];
                fVar207 = fVar207 * *pfVar65 + fVar51 * pfVar65[2] + pfVar65[4];
                if (local_3d8[0] == 0) {
                  auVar99 = blendps(ZEXT416((uint)(fVar207 + 0.5)),auVar185,0xe);
                  auVar99 = roundps(auVar99,auVar99,1);
                  fVar207 = auVar99._0_4_;
                  auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar185,0xe);
                  auVar99 = roundps(auVar99,auVar99,1);
                  fVar186 = auVar99._0_4_;
                }
                uVar166 = *(undefined4 *)puVar81;
                plVar52 = *(longlong **)(puVar48 + 0x50);
                iVar63 = (int)plVar52[1];
                *(uint *)(plVar52 + 1) = iVar63 + 1U;
                if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
                  FUN_146964c32(plVar52,iVar63);
                }
                lVar47 = *plVar52;
                lVar67 = (longlong)iVar63 * 0x2c;
                *(int *)(lVar47 + lVar67) = (int)uVar75;
                *(int *)(lVar47 + 4 + lVar67) = (int)((ulonglong)uVar75 >> 0x20);
                *(undefined1 **)(lVar47 + 8 + lVar67) = &DAT_3f8000003f800000;
                *(float *)(lVar47 + 0x18 + lVar67) = fVar207;
                *(float *)(lVar47 + 0x1c + lVar67) = fVar186;
                *(undefined4 *)(lVar47 + 0x20 + lVar67) = uVar166;
                *(undefined4 *)(lVar47 + 0x24 + lVar67) = 0;
                *(int *)(puVar48 + 0x74) = *(int *)(puVar48 + 0x74) + 1;
                lVar67 = (ulonglong)uVar80 - 1;
                lVar47 = 4;
                do {
                  uVar75 = DAT_14c84635c;
                  puVar81 = (undefined8 *)((longlong)_local_1d8 + lVar47);
                  if (auStack_1d4._4_4_ == 0) {
                    puVar81 = &local_1e0;
                  }
                  uVar166 = *(undefined4 *)puVar81;
                  fVar207 = *(float *)(*(longlong *)(pfVar65 + 0x18) + lVar47 * 2);
                  fVar51 = *(float *)(*(longlong *)(pfVar65 + 0x18) + 4 + lVar47 * 2);
                  fVar186 = pfVar65[1] * fVar207 + pfVar65[3] * fVar51 + pfVar65[5];
                  fVar207 = fVar207 * *pfVar65 + fVar51 * pfVar65[2] + pfVar65[4];
                  if (local_3d8[0] == '\0') {
                    auVar99 = blendps(ZEXT416((uint)(fVar207 + 0.5)),auVar185,0xe);
                    auVar99 = roundps(auVar99,auVar99,1);
                    fVar207 = auVar99._0_4_;
                    auVar99 = blendps(ZEXT416((uint)(fVar186 + 0.5)),auVar185,0xe);
                    auVar99 = roundps(auVar99,auVar99,1);
                    fVar186 = auVar99._0_4_;
                  }
                  plVar52 = *(longlong **)(puVar48 + 0x50);
                  iVar63 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar63 + 1U;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
                    FUN_146964c32(plVar52,iVar63);
                  }
                  lVar71 = *plVar52;
                  lVar78 = (longlong)iVar63 * 0x2c;
                  *(int *)(lVar71 + lVar78) = (int)uVar75;
                  *(int *)(lVar71 + 4 + lVar78) = (int)((ulonglong)uVar75 >> 0x20);
                  *(undefined1 **)(lVar71 + 8 + lVar78) = &DAT_3f8000003f800000;
                  *(float *)(lVar71 + 0x18 + lVar78) = fVar207;
                  *(float *)(lVar71 + 0x1c + lVar78) = fVar186;
                  *(undefined4 *)(lVar71 + 0x20 + lVar78) = uVar166;
                  *(undefined4 *)(lVar71 + 0x24 + lVar78) = 0;
                  iVar63 = *(int *)(puVar48 + 0x74);
                  *(int *)(puVar48 + 0x74) = iVar63 + 1;
                  plVar52 = *(longlong **)(puVar48 + 0x58);
                  iVar77 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar77 + 1U;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar77 + 1U) {
                    FUN_1447808da(plVar52,iVar77);
                  }
                  *(int *)(*plVar52 + (longlong)iVar77 * 4) = iVar63 + -1;
                  *(int *)(puVar48 + 0x78) = *(int *)(puVar48 + 0x78) + 1;
                  plVar52 = *(longlong **)(puVar48 + 0x58);
                  iVar77 = (int)plVar52[1];
                  *(uint *)(plVar52 + 1) = iVar77 + 1U;
                  if (*(uint *)((longlong)plVar52 + 0xc) < iVar77 + 1U) {
                    FUN_1447808da(plVar52,iVar77);
                  }
                  *(int *)(*plVar52 + (longlong)iVar77 * 4) = iVar63;
                  *(int *)(puVar48 + 0x78) = *(int *)(puVar48 + 0x78) + 1;
                  lVar47 = lVar47 + 4;
                  lVar67 = lVar67 + -1;
                } while (lVar67 != 0);
              }
            }
            else {
              fVar51 = 0.0;
              if (0.0 <= fVar207) {
                fVar51 = fVar207;
              }
              fStack_194 = pfVar65[0x22];
              local_198 = pfVar65[0x21];
              local_1a8._0_4_ = (fVar51 * 0.5 + 1.0) / pfVar65[0x10];
              local_1a8._4_4_ = 1.0 / pfVar65[0x10];
              uStack_1a0._0_4_ = local_1a8._4_4_ + local_1a8._4_4_;
              uStack_1a0._4_4_ = 0x3f490fe9;
              uStack_190._0_4_ = 0;
              if (local_198 < 1.0) {
                local_198 = -10.0;
              }
              local_438 = (longlong *)(CONCAT71(local_438._1_7_,local_3d8[0] >> 4) ^ 1);
              local_1b8 = puVar48;
              local_1b0 = pfVar65;
              FUN_146970926(&local_1b8,(longlong)auVar73 + lVar71 + 0x60,local_1d8,&local_1e0);
            }
            if (_local_1d8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            plVar52 = local_348;
            param_3 = (undefined4 *)local_3a8._0_8_;
            lVar67 = local_368._0_8_;
          }
          lVar47 = lVar67 + 1;
        } while ((int)lVar67 < (int)param_3);
      }
      if ((int)param_3 < -1) break;
      uVar80 = *(uint *)(plVar52 + 0xb);
      plVar68 = (longlong *)((ulonglong)local_3c0 & 0xffffffff);
    } while ((int)local_3c0 < (int)uVar80);
  }
  if (0 < (longlong)(int)plVar52[3]) {
    lVar47 = plVar52[2];
    lVar67 = (longlong)(int)plVar52[3] * 0xa0;
    do {
      if ((*(byte *)(lVar47 + 0x45) & 0x10) == 0) {
        FUN_14695ab48(local_3e8,lVar47);
      }
      else {
        FUN_14695b1b6(local_3e8,lVar47);
      }
      lVar47 = lVar47 + 0xa0;
      lVar67 = lVar67 + -0xa0;
    } while (lVar67 != 0);
  }
  if (0 < (longlong)(int)plVar52[9]) {
    lVar47 = plVar52[8];
    lVar67 = (longlong)(int)plVar52[9] * 0x98;
    do {
      FUN_14695b784(local_3e8,lVar47);
      lVar47 = lVar47 + 0x98;
      lVar67 = lVar67 + -0x98;
    } while (lVar67 != 0);
  }
  if (0 < (longlong)(int)plVar52[0xd]) {
    lVar47 = plVar52[0xc];
    lVar67 = (longlong)(int)plVar52[0xd] << 7;
    do {
      if ((*(byte *)(lVar47 + 0x45) & 0x10) == 0) {
        FUN_14695ba86(local_3e8,lVar47);
      }
      else {
        FUN_14695c7c4(local_3e8,lVar47);
      }
      lVar47 = lVar47 + 0x80;
      lVar67 = lVar67 + -0x80;
    } while (lVar67 != 0);
  }
  if (0 < (longlong)(int)plVar52[0xf]) {
    pfVar65 = (float *)plVar52[0xe];
    lVar47 = (longlong)(int)plVar52[0xf] * 0x70;
    auVar185 = ZEXT816(0);
    do {
      bVar53 = *(byte *)((longlong)pfVar65 + 0x45);
      if ((bVar53 & 0x10) == 0) {
        auVar106 = *(undefined1 (*) [16])(pfVar65 + 0x14);
        fVar207 = auVar106._12_4_;
        local_3d8._0_8_ = lVar47;
        if (*(char *)(local_3e8 + 6) == '\x01') {
          auVar99 = maxps(auVar106,_DAT_149e1a200);
          auVar99 = minps(auVar99,_DAT_149e1a210);
          fVar207 = auVar99._0_4_;
          fVar51 = auVar99._4_4_;
          fVar186 = auVar99._8_4_;
          auVar156._4_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar51 + -0x39000000) >> 0x14) * 4
                );
          auVar156._0_4_ =
               *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar207 + 0xc7000000U >> 0x14) * 4)
          ;
          auVar156._8_4_ =
               *(undefined4 *)
                (&DAT_149e1bee0 +
                (ulonglong)(ushort)((uint)((int)fVar186 + -0x39000000) >> 0x14) * 4);
          auVar156._12_4_ = 0;
          auVar133._0_4_ = (uint)fVar207 >> 0xc;
          auVar133._4_4_ = (uint)fVar51 >> 0xc;
          auVar133._8_4_ = (uint)fVar186 >> 0xc;
          auVar133._12_4_ = (uint)auVar99._12_4_ >> 0xc;
          auVar134 = pmaddwd(auVar133 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar156);
          auVar139._0_4_ = (float)(auVar134._0_4_ >> 0x10);
          auVar139._4_4_ = auVar134._4_4_ >> 0x10;
          auVar139._8_4_ = auVar134._8_4_ >> 0x10;
          auVar139._12_4_ = auVar134._12_4_ >> 0x10;
          auVar100._0_4_ = (int)(fVar207 * 0.0 + 0.5);
          auVar100._4_4_ = (int)(fVar51 * 0.0 + 0.5);
          auVar100._8_4_ = (int)(fVar186 * 0.0 + 0.5);
          auVar100._12_4_ = (int)(auVar99._12_4_ * 255.0 + 0.5);
          auVar100 = auVar100 | auVar139;
          auVar101._4_4_ = auVar100._4_4_;
          auVar101._12_4_ = auVar100._12_4_;
          auVar101._0_4_ = auVar100._8_4_;
          auVar101._8_4_ = auVar100._0_4_;
          auVar99 = packssdw(auVar101,auVar101);
          sVar8 = auVar99._0_2_;
          sVar9 = auVar99._2_2_;
          sVar10 = auVar99._4_2_;
          sVar11 = auVar99._6_2_;
          bVar61 = (0 < sVar11) * (sVar11 < 0x100) * auVar99[6] - (0xff < sVar11);
          uVar50 = CONCAT13(bVar61,CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar99[4] -
                                            (0xff < sVar10),
                                            CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar99[2] -
                                                     (0xff < sVar9),
                                                     (0 < sVar8) * (sVar8 < 0x100) * auVar99[0] -
                                                     (0xff < sVar8))));
          uVar66 = uVar50 >> 8;
          uVar62 = uVar50 >> 0x10;
          uVar80 = (uint)bVar61;
        }
        else {
          fVar51 = auVar106._4_4_;
          auVar135._4_4_ = fVar207;
          auVar135._0_4_ = fVar207;
          auVar135._8_4_ = fVar207;
          auVar135._12_4_ = fVar207;
          if (fVar207 <= 0.0) {
            auVar29._12_4_ = 0;
            auVar29._0_12_ = auVar135._4_12_;
            auVar135 = auVar29 << 0x20;
          }
          if (1.0 <= auVar135._0_4_) {
            auVar135._0_4_ = 0x3f800000;
          }
          uVar80 = (uint)(auVar135._0_4_ * 255.0 + 0.5);
          auVar17._4_8_ = auVar135._8_8_;
          auVar17._0_4_ = fVar51;
          auVar136._0_8_ = auVar17._0_8_ << 0x20;
          auVar136._8_4_ = auVar106._8_4_;
          auVar136._12_4_ = fVar207;
          auVar137._8_8_ = auVar106._8_8_;
          auVar137._0_8_ = auVar136._8_8_;
          if (auVar106._8_4_ <= 0.0) {
            auVar30._12_4_ = 0;
            auVar30._0_12_ = auVar137._4_12_;
            auVar137 = auVar30 << 0x20;
          }
          if (1.0 <= auVar137._0_4_) {
            auVar137._0_4_ = 0x3f800000;
          }
          uVar50 = (uint)(auVar137._0_4_ * 255.0 + 0.5);
          auVar138._4_4_ = fVar51;
          auVar138._0_4_ = fVar51;
          auVar138._8_4_ = fVar207;
          auVar138._12_4_ = fVar207;
          if (fVar51 <= 0.0) {
            auVar31._12_4_ = 0;
            auVar31._0_12_ = auVar138._4_12_;
            auVar138 = auVar31 << 0x20;
          }
          if (1.0 <= auVar138._0_4_) {
            auVar138._0_4_ = 0x3f800000;
          }
          auVar139._4_12_ = auVar138._4_12_;
          auVar139._0_4_ = auVar138._0_4_ * 255.0 + 0.5;
          uVar66 = (uint)auVar139._0_4_;
          if (auVar106._0_4_ <= 0.0) {
            auVar32._12_4_ = 0;
            auVar32._0_12_ = auVar106._4_12_;
            auVar106 = auVar32 << 0x20;
          }
          if (1.0 <= auVar106._0_4_) {
            auVar106._0_4_ = 0x3f800000;
          }
          uVar62 = (uint)(auVar106._0_4_ * 255.0 + 0.5);
        }
        auVar99 = ZEXT416((uint)pfVar65[8]);
        fVar207 = pfVar65[9];
        local_418 = *(ushort *)(pfVar65 + 0x12);
        plVar52 = *(longlong **)(pfVar65 + 0x18);
        bVar61 = (byte)(local_418 >> 8) & 1 & *(byte *)((longlong)local_3e8 + 0x32);
        fVar51 = 0.0;
        uVar166 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        local_3c0 = (longlong *)CONCAT71(local_3c0._1_7_,bVar53);
        local_398[0] = *(byte *)(pfVar65 + 0x1a) & 2;
        local_428 = CONCAT31(local_428._1_3_,*(byte *)(pfVar65 + 0x1a)) & 0xffffff02;
        local_430 = CONCAT31(local_430._1_3_,2);
        local_368._0_4_ = pfVar65[10];
        local_438 = plVar52;
        local_420 = bVar53;
        local_410 = pfVar65;
        local_158 = auVar185;
        local_148 = fVar51;
        uStack_144 = uVar166;
        local_138 = fVar51;
        uStack_134 = uVar166;
        lVar47 = FUN_140c7650a(local_3e8,local_3e8[bVar61],pfVar65[10],local_158);
        if (plVar52 != (longlong *)0x0) {
          bVar53 = *(byte *)(pfVar65 + 0x1a);
          if ((bVar53 & 1) == 0) {
            *(byte *)((longlong)local_3e8 + 0x31) =
                 *(byte *)((longlong)local_3e8 + 0x31) | bVar53 >> 2 & 1;
            bVar53 = *(byte *)(pfVar65 + 0x1a);
          }
          if ((bVar53 & 1) == 0) {
            fVar186 = pfVar65[0x10];
            uVar46 = (**(code **)(*plVar52 + 8))(plVar52);
            fVar207 = (float)uVar46 / fVar186;
            uVar46 = (**(code **)*plVar52)(plVar52);
            auVar99 = ZEXT416((uint)((float)uVar46 / fVar186));
          }
        }
        fVar186 = pfVar65[3];
        fVar158 = pfVar65[1];
        fVar83 = pfVar65[2];
        auVar102 = ZEXT416((uint)(fVar83 * 0.0));
        fVar206 = *pfVar65;
        fVar84 = pfVar65[5];
        fVar112 = pfVar65[4];
        lVar67 = *(longlong *)(lVar47 + 0x50);
        iVar63 = *(int *)(lVar67 + 8);
        *(int *)(lVar67 + 8) = iVar63 + 1;
        if (*(int *)(lVar67 + 0xc) == iVar63) {
          auVar102._0_8_ = FUN_146964c32(lVar67,iVar63);
          auVar102._8_8_ = extraout_XMM0_Qb;
        }
        uVar80 = uVar50 & 0xff | (uVar66 & 0xff) << 8 | (uVar62 & 0xff) << 0x10 | uVar80 << 0x18;
        auVar134 = blendps(ZEXT416((uint)(fVar206 * 0.0 + fVar83 * 0.0 + fVar112 + 0.5)),auVar185,
                           0xe);
        auVar134 = roundps(auVar102,auVar134,1);
        auVar201 = blendps(ZEXT416((uint)(fVar158 * 0.0 + fVar186 * 0.0 + fVar84 + 0.5)),auVar185,
                           0xe);
        auVar201 = roundps(auVar139,auVar201,1);
        lVar67 = **(longlong **)(lVar47 + 0x50);
        lVar71 = (longlong)iVar63 * 0x2c;
        *(undefined1 (*) [16])(lVar67 + lVar71) = _DAT_149c0f390;
        *(int *)(lVar67 + 0x18 + lVar71) = auVar134._0_4_;
        *(int *)(lVar67 + 0x1c + lVar71) = auVar201._0_4_;
        *(uint *)(lVar67 + 0x20 + lVar71) = uVar80;
        *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
        *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
        fVar186 = pfVar65[3];
        fVar158 = pfVar65[1];
        fVar212 = auVar99._0_4_;
        fVar83 = pfVar65[2];
        auVar103 = ZEXT416((uint)(fVar83 * 0.0));
        fVar206 = *pfVar65;
        fVar84 = pfVar65[5];
        fVar112 = pfVar65[4];
        lVar67 = *(longlong *)(lVar47 + 0x50);
        iVar63 = *(int *)(lVar67 + 8);
        *(int *)(lVar67 + 8) = iVar63 + 1;
        if (*(int *)(lVar67 + 0xc) == iVar63) {
          auVar103._0_8_ = FUN_146964c32(lVar67,iVar63);
          auVar103._8_8_ = extraout_XMM0_Qb_00;
        }
        plVar52 = local_348;
        auVar134 = blendps(ZEXT416((uint)(fVar206 * fVar212 + fVar83 * 0.0 + fVar112 + 0.5)),
                           auVar185,0xe);
        auVar134 = roundps(auVar103,auVar134,1);
        auVar90 = blendps(ZEXT416((uint)(fVar158 * fVar212 + fVar186 * 0.0 + fVar84 + 0.5)),auVar185
                          ,0xe);
        auVar201 = roundps(auVar201,auVar90,1);
        lVar67 = **(longlong **)(lVar47 + 0x50);
        lVar71 = (longlong)iVar63 * 0x2c;
        *(undefined8 *)(lVar67 + lVar71) = 0x3f800000;
        ((undefined8 *)(lVar67 + lVar71))[1] = &DAT_3f8000003f800000;
        *(int *)(lVar67 + 0x18 + lVar71) = auVar134._0_4_;
        *(int *)(lVar67 + 0x1c + lVar71) = auVar201._0_4_;
        *(uint *)(lVar67 + 0x20 + lVar71) = uVar80;
        *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
        *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
        fVar186 = pfVar65[3];
        fVar158 = pfVar65[1];
        fVar83 = pfVar65[2];
        auVar104 = ZEXT416((uint)(fVar83 * fVar207));
        fVar206 = *pfVar65;
        fVar84 = pfVar65[5];
        fVar112 = pfVar65[4];
        lVar67 = *(longlong *)(lVar47 + 0x50);
        iVar63 = *(int *)(lVar67 + 8);
        *(int *)(lVar67 + 8) = iVar63 + 1;
        if (*(int *)(lVar67 + 0xc) == iVar63) {
          auVar104._0_8_ = FUN_146964c32(lVar67,iVar63);
          auVar104._8_8_ = extraout_XMM0_Qb_01;
        }
        auVar134 = blendps(ZEXT416((uint)(fVar206 * 0.0 + fVar83 * fVar207 + fVar112 + 0.5)),
                           auVar185,0xe);
        auVar134 = roundps(auVar104,auVar134,1);
        auVar90 = blendps(ZEXT416((uint)(fVar158 * 0.0 + fVar186 * fVar207 + fVar84 + 0.5)),auVar185
                          ,0xe);
        auVar201 = roundps(auVar201,auVar90,1);
        lVar67 = **(longlong **)(lVar47 + 0x50);
        lVar71 = (longlong)iVar63 * 0x2c;
        *(undefined8 *)(lVar67 + lVar71) = 0x3f80000000000000;
        ((undefined8 *)(lVar67 + lVar71))[1] = &DAT_3f8000003f800000;
        *(int *)(lVar67 + 0x18 + lVar71) = auVar134._0_4_;
        *(int *)(lVar67 + 0x1c + lVar71) = auVar201._0_4_;
        *(uint *)(lVar67 + 0x20 + lVar71) = uVar80;
        *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
        *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
        fVar186 = pfVar65[3];
        fVar158 = pfVar65[1];
        fVar83 = pfVar65[2];
        auVar105 = ZEXT416((uint)(fVar83 * fVar207));
        fVar206 = *pfVar65;
        fVar84 = pfVar65[5];
        fVar112 = pfVar65[4];
        lVar67 = *(longlong *)(lVar47 + 0x50);
        iVar63 = *(int *)(lVar67 + 8);
        *(int *)(lVar67 + 8) = iVar63 + 1;
        if (*(int *)(lVar67 + 0xc) == iVar63) {
          auVar105._0_8_ = FUN_146964c32(lVar67,iVar63);
          auVar105._8_8_ = extraout_XMM0_Qb_02;
        }
        auVar134 = blendps(ZEXT416((uint)(fVar206 * fVar212 + fVar83 * fVar207 + fVar112 + 0.5)),
                           auVar185,0xe);
        auVar134 = roundps(auVar105,auVar134,1);
        auVar90 = blendps(ZEXT416((uint)(fVar158 * fVar212 + fVar186 * fVar207 + fVar84 + 0.5)),
                          auVar185,0xe);
        auVar201 = roundps(auVar201,auVar90,1);
        lVar67 = **(longlong **)(lVar47 + 0x50);
        lVar71 = (longlong)iVar63 * 0x2c;
        *(undefined8 *)(lVar67 + lVar71) = &DAT_3f8000003f800000;
        ((undefined8 *)(lVar67 + lVar71))[1] = &DAT_3f8000003f800000;
        *(int *)(lVar67 + 0x18 + lVar71) = auVar134._0_4_;
        *(int *)(lVar67 + 0x1c + lVar71) = auVar201._0_4_;
        *(uint *)(lVar67 + 0x20 + lVar71) = uVar80;
        *(undefined4 *)(lVar67 + 0x24 + lVar71) = 0;
        *(int *)(lVar47 + 0x74) = *(int *)(lVar47 + 0x74) + 1;
        plVar68 = *(longlong **)(lVar47 + 0x58);
        iVar63 = (int)plVar68[1];
        *(uint *)(plVar68 + 1) = iVar63 + 1U;
        if (*(uint *)((longlong)plVar68 + 0xc) < iVar63 + 1U) {
          FUN_1447808da(plVar68,iVar63);
        }
        *(undefined4 *)(*plVar68 + (longlong)iVar63 * 4) = 0;
        *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
        plVar68 = *(longlong **)(lVar47 + 0x58);
        iVar63 = (int)plVar68[1];
        *(uint *)(plVar68 + 1) = iVar63 + 1U;
        if (*(uint *)((longlong)plVar68 + 0xc) < iVar63 + 1U) {
          FUN_1447808da(plVar68,iVar63);
        }
        *(undefined4 *)(*plVar68 + (longlong)iVar63 * 4) = 1;
        *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
        plVar68 = *(longlong **)(lVar47 + 0x58);
        iVar63 = (int)plVar68[1];
        *(uint *)(plVar68 + 1) = iVar63 + 1U;
        if (*(uint *)((longlong)plVar68 + 0xc) < iVar63 + 1U) {
          FUN_1447808da(plVar68,iVar63);
        }
        *(undefined4 *)(*plVar68 + (longlong)iVar63 * 4) = 2;
        *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
        plVar68 = *(longlong **)(lVar47 + 0x58);
        iVar63 = (int)plVar68[1];
        *(uint *)(plVar68 + 1) = iVar63 + 1U;
        if (*(uint *)((longlong)plVar68 + 0xc) < iVar63 + 1U) {
          FUN_1447808da(plVar68,iVar63);
        }
        *(undefined4 *)(*plVar68 + (longlong)iVar63 * 4) = 2;
        *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
        plVar68 = *(longlong **)(lVar47 + 0x58);
        iVar63 = (int)plVar68[1];
        *(uint *)(plVar68 + 1) = iVar63 + 1U;
        if (*(uint *)((longlong)plVar68 + 0xc) < iVar63 + 1U) {
          FUN_1447808da(plVar68,iVar63);
        }
        *(undefined4 *)(*plVar68 + (longlong)iVar63 * 4) = 1;
        *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
        plVar68 = *(longlong **)(lVar47 + 0x58);
        iVar63 = (int)plVar68[1];
        *(uint *)(plVar68 + 1) = iVar63 + 1U;
        if (*(uint *)((longlong)plVar68 + 0xc) < iVar63 + 1U) {
          FUN_1447808da(plVar68,iVar63);
        }
        *(undefined4 *)(*plVar68 + (longlong)iVar63 * 4) = 3;
        *(int *)(lVar47 + 0x78) = *(int *)(lVar47 + 0x78) + 1;
        lVar47 = local_3d8._0_8_;
        if (bVar61 != 0) {
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          local_420 = (byte)local_3c0;
          local_428 = CONCAT31(local_428._1_3_,local_398[0]);
          local_418 = 1;
          local_430 = CONCAT31(local_430._1_3_,2);
          local_438 = (longlong *)0x0;
          local_410 = pfVar65;
          local_158 = auVar185;
          local_148 = fVar51;
          uStack_144 = uVar166;
          local_138 = fVar51;
          uStack_134 = uVar166;
          lVar71 = FUN_140c7650a(local_3e8,*local_3e8,local_368._0_4_,local_158);
          fVar51 = pfVar65[3];
          fVar186 = pfVar65[1];
          fVar158 = pfVar65[2];
          auVar107 = ZEXT416((uint)(fVar158 * 0.0));
          fVar83 = *pfVar65;
          fVar206 = pfVar65[5];
          fVar84 = pfVar65[4];
          lVar67 = *(longlong *)(lVar71 + 0x50);
          iVar63 = *(int *)(lVar67 + 8);
          *(int *)(lVar67 + 8) = iVar63 + 1;
          if (*(int *)(lVar67 + 0xc) == iVar63) {
            auVar107._0_8_ = FUN_146964c32(lVar67,iVar63);
            auVar107._8_8_ = extraout_XMM0_Qb_03;
          }
          auVar134 = blendps(ZEXT416((uint)(fVar83 * 0.0 + fVar158 * 0.0 + fVar84 + 0.5)),auVar185,
                             0xe);
          auVar134 = roundps(auVar107,auVar134,1);
          auVar90 = blendps(ZEXT416((uint)(fVar186 * 0.0 + fVar51 * 0.0 + fVar206 + 0.5)),auVar185,
                            0xe);
          auVar201 = roundps(auVar201,auVar90,1);
          lVar67 = **(longlong **)(lVar71 + 0x50);
          lVar78 = (longlong)iVar63 * 0x2c;
          *(undefined1 (*) [16])(lVar67 + lVar78) = _DAT_149c0f390;
          *(int *)(lVar67 + 0x18 + lVar78) = auVar134._0_4_;
          *(int *)(lVar67 + 0x1c + lVar78) = auVar201._0_4_;
          *(undefined8 *)(lVar67 + 0x20 + lVar78) = 0;
          *(int *)(lVar71 + 0x74) = *(int *)(lVar71 + 0x74) + 1;
          fVar51 = pfVar65[3];
          fVar186 = pfVar65[1];
          fVar158 = pfVar65[2];
          auVar108 = ZEXT416((uint)(fVar158 * 0.0));
          fVar83 = *pfVar65;
          fVar206 = pfVar65[5];
          fVar84 = pfVar65[4];
          lVar67 = *(longlong *)(lVar71 + 0x50);
          iVar63 = *(int *)(lVar67 + 8);
          *(int *)(lVar67 + 8) = iVar63 + 1;
          if (*(int *)(lVar67 + 0xc) == iVar63) {
            auVar108._0_8_ = FUN_146964c32(lVar67,iVar63);
            auVar108._8_8_ = extraout_XMM0_Qb_04;
          }
          auVar134 = blendps(ZEXT416((uint)(fVar83 * fVar212 + fVar158 * 0.0 + fVar84 + 0.5)),
                             auVar185,0xe);
          auVar134 = roundps(auVar108,auVar134,1);
          auVar90 = blendps(ZEXT416((uint)(fVar186 * fVar212 + fVar51 * 0.0 + fVar206 + 0.5)),
                            auVar185,0xe);
          auVar201 = roundps(auVar201,auVar90,1);
          lVar67 = **(longlong **)(lVar71 + 0x50);
          lVar78 = (longlong)iVar63 * 0x2c;
          *(undefined8 *)(lVar67 + lVar78) = 0x3f800000;
          ((undefined8 *)(lVar67 + lVar78))[1] = &DAT_3f8000003f800000;
          *(int *)(lVar67 + 0x18 + lVar78) = auVar134._0_4_;
          *(int *)(lVar67 + 0x1c + lVar78) = auVar201._0_4_;
          *(undefined8 *)(lVar67 + 0x20 + lVar78) = 0;
          *(int *)(lVar71 + 0x74) = *(int *)(lVar71 + 0x74) + 1;
          fVar51 = pfVar65[3];
          fVar186 = pfVar65[1];
          fVar158 = pfVar65[2];
          auVar109 = ZEXT416((uint)(fVar158 * fVar207));
          fVar83 = *pfVar65;
          fVar206 = pfVar65[5];
          fVar84 = pfVar65[4];
          lVar67 = *(longlong *)(lVar71 + 0x50);
          iVar63 = *(int *)(lVar67 + 8);
          *(int *)(lVar67 + 8) = iVar63 + 1;
          if (*(int *)(lVar67 + 0xc) == iVar63) {
            auVar109._0_8_ = FUN_146964c32(lVar67,iVar63);
            auVar109._8_8_ = extraout_XMM0_Qb_05;
          }
          auVar134 = blendps(ZEXT416((uint)(fVar83 * 0.0 + fVar158 * fVar207 + fVar84 + 0.5)),
                             auVar185,0xe);
          auVar134 = roundps(auVar109,auVar134,1);
          auVar90 = blendps(ZEXT416((uint)(fVar186 * 0.0 + fVar51 * fVar207 + fVar206 + 0.5)),
                            auVar185,0xe);
          auVar201 = roundps(auVar201,auVar90,1);
          lVar67 = **(longlong **)(lVar71 + 0x50);
          lVar78 = (longlong)iVar63 * 0x2c;
          *(undefined8 *)(lVar67 + lVar78) = 0x3f80000000000000;
          ((undefined8 *)(lVar67 + lVar78))[1] = &DAT_3f8000003f800000;
          *(int *)(lVar67 + 0x18 + lVar78) = auVar134._0_4_;
          *(int *)(lVar67 + 0x1c + lVar78) = auVar201._0_4_;
          *(undefined8 *)(lVar67 + 0x20 + lVar78) = 0;
          *(int *)(lVar71 + 0x74) = *(int *)(lVar71 + 0x74) + 1;
          fVar51 = pfVar65[3];
          auVar110 = ZEXT416((uint)(fVar51 * fVar207));
          fVar186 = pfVar65[1];
          fVar158 = pfVar65[2];
          fVar83 = *pfVar65;
          auVar205._4_12_ = auVar99._4_12_;
          fVar206 = pfVar65[5];
          fVar84 = pfVar65[4];
          lVar67 = *(longlong *)(lVar71 + 0x50);
          iVar63 = *(int *)(lVar67 + 8);
          *(int *)(lVar67 + 8) = iVar63 + 1;
          if (*(int *)(lVar67 + 0xc) == iVar63) {
            auVar110._0_8_ = FUN_146964c32(lVar67,iVar63);
            auVar110._8_8_ = extraout_XMM0_Qb_06;
          }
          auVar205._0_4_ = fVar212 * fVar83 + fVar207 * fVar158 + fVar84 + 0.5;
          auVar99 = blendps(auVar205,auVar185,0xe);
          auVar99 = roundps(auVar110,auVar99,1);
          auVar134 = blendps(ZEXT416((uint)(fVar186 * fVar212 + fVar51 * fVar207 + fVar206 + 0.5)),
                             auVar185,0xe);
          auVar134 = roundps(auVar201,auVar134,1);
          lVar67 = **(longlong **)(lVar71 + 0x50);
          lVar78 = (longlong)iVar63 * 0x2c;
          *(undefined8 *)(lVar67 + lVar78) = &DAT_3f8000003f800000;
          ((undefined8 *)(lVar67 + lVar78))[1] = &DAT_3f8000003f800000;
          *(int *)(lVar67 + 0x18 + lVar78) = auVar99._0_4_;
          *(int *)(lVar67 + 0x1c + lVar78) = auVar134._0_4_;
          *(undefined8 *)(lVar67 + 0x20 + lVar78) = 0;
          *(int *)(lVar71 + 0x74) = *(int *)(lVar71 + 0x74) + 1;
          plVar52 = *(longlong **)(lVar71 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = 0;
          *(int *)(lVar71 + 0x78) = *(int *)(lVar71 + 0x78) + 1;
          plVar52 = *(longlong **)(lVar71 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = 1;
          *(int *)(lVar71 + 0x78) = *(int *)(lVar71 + 0x78) + 1;
          plVar52 = *(longlong **)(lVar71 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = 2;
          *(int *)(lVar71 + 0x78) = *(int *)(lVar71 + 0x78) + 1;
          plVar52 = *(longlong **)(lVar71 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = 2;
          *(int *)(lVar71 + 0x78) = *(int *)(lVar71 + 0x78) + 1;
          plVar52 = *(longlong **)(lVar71 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = 1;
          *(int *)(lVar71 + 0x78) = *(int *)(lVar71 + 0x78) + 1;
          plVar52 = *(longlong **)(lVar71 + 0x58);
          iVar63 = (int)plVar52[1];
          *(uint *)(plVar52 + 1) = iVar63 + 1U;
          if (*(uint *)((longlong)plVar52 + 0xc) < iVar63 + 1U) {
            FUN_1447808da(plVar52,iVar63);
          }
          *(undefined4 *)(*plVar52 + (longlong)iVar63 * 4) = 3;
          *(int *)(lVar71 + 0x78) = *(int *)(lVar71 + 0x78) + 1;
          plVar52 = local_348;
        }
      }
      else {
        FUN_14695d46c(local_3e8,pfVar65);
      }
      pfVar65 = pfVar65 + 0x1c;
      lVar47 = lVar47 + -0x70;
    } while (lVar47 != 0);
  }
  puVar81 = local_3e8;
  if (0 < (longlong)(int)plVar52[0x13]) {
    pfVar65 = (float *)local_348[0x12];
    pfVar60 = pfVar65 + (longlong)(int)plVar52[0x13] * 0x18;
    do {
      plVar52 = *(longlong **)(pfVar65 + 0x16);
      if (plVar52 != (longlong *)0x0) {
        fVar207 = pfVar65[10];
        iVar63 = (int)plVar52[1];
        do {
          if (iVar63 == 0) goto LAB_142872bdd;
          LOCK();
          iVar77 = (int)plVar52[1];
          bVar82 = iVar63 == iVar77;
          if (bVar82) {
            *(int *)(plVar52 + 1) = iVar63 + 1;
            iVar77 = iVar63;
          }
          iVar63 = iVar77;
          UNLOCK();
        } while (!bVar82);
        plVar68 = *(longlong **)(pfVar65 + 0x14);
        if (plVar68 != (longlong *)0x0) {
          local_138 = 0.0;
          uStack_134 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          local_148 = 0.0;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          local_158 = ZEXT816(0);
          local_420 = 0;
          local_428 = local_428 & 0xffffff00;
          local_430 = local_430 & 0xffffff00;
          local_418 = 0;
          local_438 = (longlong *)0x0;
          local_410 = pfVar65;
          lVar47 = FUN_140c7650a(puVar81,*puVar81,fVar207,local_158);
          *(longlong **)(lVar47 + 0x60) = plVar68;
          *(byte *)(lVar47 + 0x90) = *(byte *)(lVar47 + 0x90) & 0xfe;
          (**(code **)(*plVar68 + 8))(plVar68,puVar81);
        }
        LOCK();
        plVar68 = plVar52 + 1;
        *(int *)plVar68 = (int)*plVar68 + -1;
        UNLOCK();
        if ((int)*plVar68 == 0) {
          (**(code **)*plVar52)(plVar52);
          LOCK();
          piVar1 = (int *)((longlong)plVar52 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar52 + 0x10))(plVar52);
          }
        }
      }
LAB_142872bdd:
      pfVar65 = pfVar65 + 0x18;
    } while (pfVar65 != pfVar60);
  }
  plVar52 = local_348;
  if (0 < (longlong)(int)local_348[0x15]) {
    lVar47 = local_348[0x14];
    lVar67 = (longlong)(int)local_348[0x15] * 0x88;
    do {
      FUN_14695ddfe(local_3e8,lVar47);
      lVar47 = lVar47 + 0x88;
      lVar67 = lVar67 + -0x88;
    } while (lVar67 != 0);
  }
  lVar47 = (longlong)(int)plVar52[0x17];
  if (0 < lVar47) {
    lVar67 = plVar52[0x16];
    lVar47 = lVar47 << 7;
    do {
      FUN_14695df0c(local_3e8,lVar67,local_1f8);
      lVar67 = lVar67 + 0x80;
      lVar47 = lVar47 + -0x80;
    } while (lVar47 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142872d1c FUN_142872d1c body=886 status=ok
// SIG undefined FUN_142872d1c(void)

void FUN_142872d1c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  void *_Src;
  
  plVar14 = (longlong *)param_2[0x3b];
  if ((longlong *)param_2[0x3b] == (longlong *)0x0) {
    plVar14 = param_2 + 9;
  }
  lVar16 = param_2[0x3c];
  if ((longlong)(int)lVar16 != 0) {
    lVar18 = 0;
    do {
      lVar1 = *(longlong *)((longlong)plVar14 + lVar18);
      iVar3 = *(int *)(lVar1 + 0x18) + *(int *)(lVar1 + 8) + *(int *)(lVar1 + 0x28) +
              *(int *)(lVar1 + 0x38) + *(int *)(lVar1 + 0x48) + *(int *)(lVar1 + 0x58) +
              *(int *)(lVar1 + 0x68) + *(int *)(lVar1 + 0x78) + *(int *)(lVar1 + 0x88) +
              *(int *)(lVar1 + 0x98) + *(int *)(lVar1 + 0xa8) + *(int *)(lVar1 + 0xb8) +
              *(int *)(lVar1 + 200);
      iVar4 = iVar3 + *(int *)(lVar1 + 0xd8);
      if (iVar4 != 0 && SCARRY4(iVar3,*(int *)(lVar1 + 0xd8)) == iVar4 < 0) {
        param_1[2] = lVar1;
        FUN_14286a384(param_1,lVar1,param_3);
        param_1[2] = 0;
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)(int)lVar16 * 8 != lVar18);
  }
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if (*(int *)((longlong)param_2 + 0x1e4) != 0) {
    FUN_141075230(param_2 + 9,0);
  }
  plVar14 = (longlong *)*param_1;
  iVar4 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  iVar3 = (int)plVar14[1] + iVar4;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  plVar2 = (longlong *)param_1[1];
  if (*(int *)((longlong)plVar14 + 0xc) < iVar3) {
    FUN_14696b2ec(plVar14,iVar3);
    iVar4 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  }
  iVar4 = iVar4 + (int)plVar2[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)plVar2 + 0xc) < iVar4) {
    FUN_14696b2ec(plVar2);
  }
  iVar3 = (int)param_2[5];
  if (iVar3 == 0) {
    uVar15 = 1;
    iVar4 = 0;
    uVar19 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar19 = 0;
      uVar9 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar9 = uVar19;
      }
      iVar4 = 0;
      do {
        if (uVar9 == uVar19) goto LAB_142872ec3;
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar5[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar12 == 0);
    }
    else {
      iVar4 = 0;
      uVar19 = 0;
    }
    uVar15 = (ulonglong)(-uVar12 & uVar12);
    uVar9 = uVar15 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar11 = (iVar4 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar11) {
      iVar11 = iVar3;
    }
  }
  if (iVar11 == iVar3) {
LAB_142872ec3:
    bVar13 = 0;
  }
  else {
    uVar12 = 0xffffffff;
    bVar13 = 0;
    do {
      lVar16 = *param_2;
      if ((*(byte *)(lVar16 + 0x8b + (longlong)iVar11 * 0xa0) & 1) == 0) {
        iVar17 = (int)plVar14[1];
        *(uint *)(plVar14 + 1) = iVar17 + 1U;
        plVar6 = plVar14;
        if (*(uint *)((longlong)plVar14 + 0xc) < iVar17 + 1U) {
          FUN_14023c79e(plVar14,iVar17);
        }
      }
      else {
        iVar17 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar17 + 1U;
        plVar6 = plVar2;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar17 + 1U) {
          FUN_14023c79e(plVar2,iVar17);
        }
      }
      _Src = (void *)(lVar16 + (longlong)iVar11 * 0xa0);
      memcpy((void *)((longlong)iVar17 * 0xa0 + *plVar6),_Src,0xa0);
      bVar13 = bVar13 | *(byte *)((longlong)_Src + 0x8f);
      uVar12 = uVar12 & ~(uint)uVar15;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar17 = (int)param_2[5];
      iVar11 = (int)uVar19;
      lVar16 = (longlong)iVar11;
      uVar10 = puVar5[lVar16] & uVar12;
      if (uVar10 == 0) {
        iVar7 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar7 = iVar17 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar11 < iVar7) {
          lVar18 = 0;
          do {
            uVar10 = puVar5[lVar16 + lVar18 + 1];
            if (uVar10 != 0) {
              uVar19 = (ulonglong)(iVar11 + (int)lVar18 + 1);
              uVar12 = 0xffffffff;
              goto LAB_14287301c;
            }
            iVar4 = iVar4 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar8 - lVar16 != lVar18);
          uVar12 = 0xffffffff;
          iVar11 = iVar8;
        }
        uVar19 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar17;
      }
      else {
LAB_14287301c:
        uVar15 = (ulonglong)(-uVar10 & uVar10);
        uVar9 = uVar15 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar11 = (iVar4 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar11) {
          iVar11 = iVar17;
        }
      }
    } while (iVar11 != iVar3);
  }
  *(byte *)((longlong)param_1 + 0x33) = *(byte *)((longlong)param_1 + 0x33) | bVar13;
  FUN_146953df0(param_2);
  return;
}



// FUNCTION 142873094 FUN_142873094 body=186 status=ok
// SIG undefined FUN_142873094(void)

void FUN_142873094(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x10);
    iVar5 = 0;
    do {
      plVar2 = *(longlong **)(*plVar1 + (longlong)iVar5 * 0x10);
      if ((((*plVar2 != 0) && (plVar2[1] != 0)) && (0 < *(int *)(plVar2[1] + 8))) &&
         ((plVar2[2] != 0 && ((longlong)(int)param_2[1] != 0)))) {
        lVar4 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar4) == plVar2[2]) goto LAB_142873108;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)param_2[1] * 8 != lVar4);
      }
      FUN_1405d3048();
      FUN_1405d2f2e(plVar1,iVar5);
      FUN_1405d2fba(plVar1);
      iVar5 = iVar5 + -1;
      iVar3 = *(int *)(param_1 + 0x18);
LAB_142873108:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00014287311e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 14287314e FUN_14287314e body=45 status=ok
// SIG undefined FUN_14287314e(void)

bool FUN_14287314e(longlong param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = *(char *)(param_1 + 0x58) == '\0';
  if (bVar1) {
    *(char *)(param_1 + 0x58) = '\x01';
  }
  UNLOCK();
  if (bVar1) {
    *(bool *)(param_1 + 0x59) =
         *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xc60) == 4;
  }
  return bVar1;
}



// FUNCTION 14287317c FUN_14287317c body=268 status=ok
// SIG undefined FUN_14287317c(void)

void FUN_14287317c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((*(byte *)(param_1 + 0x58) & 1) != 0) && (*(char *)(param_1 + 0x59) == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x10);
      plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x18) * 2;
      do {
        lVar2 = *plVar6;
        if ((longlong)*(int *)(lVar2 + 0x1a8) != 0) {
          lVar3 = (longlong)*(int *)(lVar2 + 0x1a8) * 0xd0;
          lVar4 = *(longlong *)(lVar2 + 0x1a0) + 0x60;
          do {
            FUN_14693848c(lVar4,param_2);
            lVar4 = lVar4 + 0xd0;
            lVar3 = lVar3 + -0xd0;
          } while (lVar3 != 0);
        }
        iVar1 = *(int *)(lVar2 + 0x1b8);
        if ((longlong)iVar1 != 0) {
          lVar2 = *(longlong *)(lVar2 + 0x1b0);
          lVar4 = 0;
          do {
            lVar3 = *(longlong *)(lVar2 + 0x60 + lVar4);
            if (lVar3 != 0) {
              FUN_142862946(lVar3,param_2);
            }
            lVar3 = *(longlong *)(lVar2 + 0x80 + lVar4);
            if (lVar3 != 0) {
              FUN_142862946(lVar3,param_2);
            }
            lVar4 = lVar4 + 0x98;
          } while ((longlong)iVar1 * 0x98 - lVar4 != 0);
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x000142873206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
  }
  return;
}



// FUNCTION 142873288 FUN_142873288 body=69 status=ok
// SIG undefined FUN_142873288(void)

void FUN_142873288(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    *param_2 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x38);
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1428732cd FUN_1428732cd body=69 status=ok
// SIG undefined FUN_1428732cd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428732cd(void)

{
  _DAT_14c96b2a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014287330f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b2a8,1);
  return;
}



// FUNCTION 142873312 FUN_142873312 body=69 status=ok
// SIG undefined FUN_142873312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142873312(void)

{
  _DAT_14c96b2b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142873354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b2b8,1);
  return;
}



// FUNCTION 142873357 FUN_142873357 body=69 status=ok
// SIG undefined FUN_142873357(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142873357(void)

{
  _DAT_14c96b2c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142873399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b2c8,1);
  return;
}



// FUNCTION 14287339c FUN_14287339c body=69 status=ok
// SIG undefined FUN_14287339c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287339c(void)

{
  _DAT_14c96b2d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428733de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b2d8,1);
  return;
}



// FUNCTION 1428733e2 FUN_1428733e2 body=1202 status=ok
// SIG undefined FUN_1428733e2(void)

void FUN_1428733e2(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  LARGE_INTEGER LVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined4 local_b0;
  LARGE_INTEGER *local_a8;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  LARGE_INTEGER local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = *(int *)(param_1 + 0xb0);
  if (0 < iVar7) {
    QueryPerformanceCounter(&local_58);
    local_60 = &local_70;
    local_58.QuadPart = 0;
    local_50 = 0;
    local_68 = FUN_1428771aa;
    local_b0 = 0;
    local_a8 = &local_58;
    local_70 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0xb0),1);
    if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
      lVar13 = *(longlong *)(param_1 + 0xa8);
      lVar12 = lVar13 + (longlong)*(int *)(param_1 + 0xb0) * 0x28;
      local_78 = param_1 + 0x78;
      plVar15 = (longlong *)(param_1 + 0x28);
      local_80 = (longlong *)(param_1 + 0x88);
LAB_1428734aa:
      if (*(int *)(lVar13 + 0x20) != 0) {
        uVar1 = lVar13 + 0x18;
        piVar2 = (int *)(lVar13 + 8);
        iVar7 = *piVar2;
        iVar3 = *(int *)(lVar13 + 0xc);
        uVar6 = *(undefined8 *)piVar2;
        uVar10 = *(undefined8 *)piVar2;
        if (iVar3 < 0x401 && iVar7 < 0x401) {
          local_98 = param_1;
          local_90 = plVar15;
          local_88 = lVar12;
          if ((longlong)*(int *)(param_1 + 0x80) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x78);
            lVar12 = (longlong)*(int *)(param_1 + 0x80) * 8 + -8;
            lVar14 = 0;
            do {
              lVar8 = FUN_1408fb716(*(undefined8 *)(lVar9 + lVar14),iVar7,iVar3,uVar1);
              if (lVar8 == 0) {
                if (lVar12 == lVar14) break;
              }
              else if (lVar12 == lVar14) goto LAB_1428736ea;
              lVar14 = lVar14 + 8;
            } while( true );
          }
          param_1 = local_98;
          local_b0 = CONCAT31(local_b0._1_3_,1);
          local_b8 = CONCAT44(local_b8._4_4_,1);
          (**(code **)(**(longlong **)(local_98 + 0x98) + 8))
                    (*(longlong **)(local_98 + 0x98),&local_58,0x400,4);
          lVar8 = FUN_1408fb716(local_58.QuadPart,iVar7,iVar3,uVar1);
          LVar11 = local_58;
          iVar7 = *(int *)(param_1 + 0x80);
          *(uint *)(param_1 + 0x80) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x84) < iVar7 + 1U) {
            FUN_14697292a(local_78,iVar7);
          }
          ((LARGE_INTEGER *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar7 * 8))->QuadPart =
               (LONGLONG)local_58;
          local_58.QuadPart = 0;
          local_b8 = local_b8 & 0xffffffff00000000;
          FUN_145c1c9a0(param_1,0,*(undefined4 *)(param_1 + 0x80),0);
          lVar12 = local_88;
          if ((longlong *)local_58.QuadPart != (longlong *)0x0) {
            (*(code *)**(undefined8 **)local_58)(local_58.QuadPart,1);
          }
          plVar15 = local_90;
          if (lVar8 == 0) goto LAB_1428737d6;
          goto LAB_142873700;
        }
        local_b8 = uVar1;
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                  (*(longlong **)(param_1 + 0x98),&local_58,iVar7,iVar3);
        iVar7 = FUN_1469722b0(plVar15,*(undefined4 *)(lVar13 + 0x10),lVar13);
        if (iVar7 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar7 * 0x28 + *plVar15;
        }
        ((LARGE_INTEGER *)(*(longlong *)(lVar9 + 0x18) + 0x10))->QuadPart = (LONGLONG)local_58;
        **(undefined8 **)(lVar9 + 0x18) = 0;
        *(undefined1 **)(*(longlong *)(lVar9 + 0x18) + 8) = &DAT_3f8000003f800000;
        *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x18) = uVar10;
        iVar7 = *(int *)(param_1 + 0x90);
        *(uint *)(param_1 + 0x90) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x94) < iVar7 + 1U) {
          FUN_1469728a4(local_80,iVar7);
        }
        *(LARGE_INTEGER *)(*local_80 + (longlong)iVar7 * 8) = local_58;
        goto LAB_1428737d6;
      }
      goto LAB_1428734b0;
    }
LAB_1428737fa:
    QueryPerformanceCounter(&local_58);
    iVar7 = *(int *)(param_1 + 0xb0);
  }
  FUN_14152ad0f(*(undefined8 *)(param_1 + 0xa8),iVar7);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1469729b0(param_1 + 0xa8);
  }
  iVar7 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar7 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x78);
    lVar13 = 0;
    do {
      (**(code **)(**(longlong **)(lVar12 + lVar13) + 8))();
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar7 * 8 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1428736ea:
  LVar11 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar9 + lVar14))->QuadPart;
  lVar12 = local_88;
  param_1 = local_98;
LAB_142873700:
  plVar15 = local_90;
  iVar7 = FUN_1469722b0(local_90,*(undefined4 *)(lVar13 + 0x10),lVar13);
  if (iVar7 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar7 * 0x28 + *plVar15;
  }
  uVar10 = (**(code **)(*(longlong *)LVar11 + 0x18))(LVar11.QuadPart);
  *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x10) = uVar10;
  iVar7 = *(int *)(lVar8 + 0x14);
  uVar4 = *(uint *)(LVar11.QuadPart + 0x34);
  pfVar5 = *(float **)(lVar9 + 0x18);
  *pfVar5 = (float)(*(int *)(lVar8 + 0x10) + 1) / (float)*(uint *)(LVar11.QuadPart + 0x30);
  pfVar5[1] = (float)(iVar7 + 1) / (float)uVar4;
  iVar7 = *(int *)(lVar8 + 0x1c);
  uVar4 = *(uint *)(LVar11.QuadPart + 0x34);
  lVar14 = *(longlong *)(lVar9 + 0x18);
  *(float *)(lVar14 + 8) =
       (float)(*(int *)(lVar8 + 0x18) - 2) / (float)*(uint *)(LVar11.QuadPart + 0x30);
  *(float *)(lVar14 + 0xc) = (float)(iVar7 - 2) / (float)uVar4;
  *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x18) = uVar6;
  plVar15 = local_90;
LAB_1428737d6:
  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 0x90));
  FUN_145c1c9a0(param_1,0,*(undefined4 *)(param_1 + 0x80),0);
LAB_1428734b0:
  lVar13 = lVar13 + 0x28;
  if (lVar13 == lVar12) goto LAB_1428737fa;
  goto LAB_1428734aa;
}



// FUNCTION 142873896 FUN_142873896 body=102 status=ok
// SIG undefined FUN_142873896(void)

void FUN_142873896(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c968098;
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    cVar2 = FUN_140d2ceff();
    if (cVar2 != '\0') {
      FUN_140898514(lVar1 + 0xd8,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x18))
              (*(longlong **)(param_1 + 0x98),param_1 + 0x78,param_1 + 0x88,1);
    FUN_14695e9d8(param_1);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 142873904 FUN_142873904 body=69 status=ok
// SIG undefined FUN_142873904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142873904(void)

{
  _DAT_14c96b2e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142873946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b2e8,1);
  return;
}



// FUNCTION 142873949 FUN_142873949 body=69 status=ok
// SIG undefined FUN_142873949(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142873949(void)

{
  _DAT_14c96b2f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014287398b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b300,1);
  return;
}



// FUNCTION 14287398e FUN_14287398e body=69 status=ok
// SIG undefined FUN_14287398e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287398e(void)

{
  _DAT_14c96b308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428739d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b310,1);
  return;
}



// FUNCTION 1428739d3 FUN_1428739d3 body=69 status=ok
// SIG undefined FUN_1428739d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428739d3(void)

{
  _DAT_14c96b318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142873a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c96b320,1);
  return;
}



// FUNCTION 142873a18 FUN_142873a18 body=1 status=ok
// SIG undefined FUN_142873a18(void)

void FUN_142873a18(void)

{
  return;
}



// FUNCTION 142873a1a FUN_142873a1a body=53 status=ok
// SIG undefined FUN_142873a1a(void)

void FUN_142873a1a(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149edb640;
  param_1[1] = 0;
  param_1[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  param_1[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 142873a50 FUN_142873a50 body=884 status=ok
// SIG undefined FUN_142873a50(void)

longlong FUN_142873a50(longlong *param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined2 *local_40;
  int local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[1] == 0) {
    lVar5 = *param_1;
    goto LAB_142873af2;
  }
  if (((((*(int *)((longlong)param_1 + 0x14) != 0) &&
        (uVar1 = *(uint *)(param_1 + 2), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x14))))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0))))
  goto LAB_142873af2;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) goto LAB_142873b2d;
    }
    lVar5 = 0;
  }
  else {
LAB_142873b2d:
    FUN_1400021e4(param_1 + 1,&local_40);
    puVar8 = local_40;
    if (local_38 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    if (DAT_14c927740 == 0) {
      local_60 = &local_30;
      local_30 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_146856450;
      local_70 = FUN_1427b121c;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000021;
      local_90 = CONCAT44(local_90._4_4_,8);
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    lVar5 = FUN_140277b32(DAT_14c927740,0,puVar8,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (*param_1 == 0) {
      FUN_1400021e4(param_1 + 1,&local_40);
      puVar8 = local_40;
      if (local_38 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      if (DAT_14c927740 == 0) {
        local_60 = &local_30;
        local_30 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_146856450;
        local_70 = FUN_1427b121c;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000021;
        local_90 = CONCAT44(local_90._4_4_,8);
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      local_80 = 0;
      local_90 = 0;
      local_88 = CONCAT31(local_88._1_3_,1);
      local_98 = 0;
      lVar5 = FUN_1412ecd05(DAT_14c927740,0,puVar8,0);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      iVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar5 + 0xc);
      *(uint *)(param_1 + 2) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar4 = iVar7;
        }
      }
    }
    *(int *)((longlong)param_1 + 0x14) = iVar4;
  }
LAB_142873af2:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 142873dc5 FUN_142873dc5 body=59 status=ok
// SIG undefined FUN_142873dc5(void)

void FUN_142873dc5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c96b358;
  if (DAT_14c96b358 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c96b358 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142873df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142873e00 FUN_142873e00 body=464 status=ok
// SIG undefined FUN_142873e00(void)

undefined8 * FUN_142873e00(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  size_t sVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  int local_48;
  undefined1 local_40 [16];
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  local_68 = param_1;
  plVar2 = (longlong *)FUN_14494321d(0x420);
  FUN_14695ec82(plVar2,local_70);
  local_78 = plVar2;
  local_30 = plVar2;
  local_28 = (undefined8 *)FUN_14494321d(0x18);
  plVar1 = local_30;
  *local_28 = SharedPointerInternals::TReferenceControllerBase<1>::vftable;
  *(undefined4 *)(local_28 + 1) = 1;
  *(undefined4 *)((longlong)local_28 + 0xc) = 1;
  *local_28 = &PTR_LAB_149ee9b50;
  local_28[2] = plVar2;
  FUN_1414927bc(local_50);
  sVar3 = wcslen(L"Slate");
  iVar5 = (int)sVar3 + 1;
  FUN_1412cfe60(local_40,local_50,iVar5 + (uint)(local_48 == 0 && iVar5 != 0));
  FUN_1401aebe8(local_40,L"Slate",sVar3 & 0xffffffff);
  (**(code **)(*plVar1 + 0xb8))(plVar1,local_40);
  FUN_1413a3ffc(local_40);
  FUN_1413a3ffc(local_50);
  (**(code **)(*local_30 + 0xe0))(local_30,local_60,L"Checkerboard",&DAT_149eca162);
  uVar4 = FUN_1415258a0(local_60);
  if ((uVar4 & 1) == 0) {
    *param_1 = local_30;
    param_1[1] = local_28;
    if (local_28 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = local_30;
    param_1[1] = local_28;
    if (local_28 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
      UNLOCK();
    }
  }
  local_7c = 1;
  FUN_1413a3ffc(local_60);
  FUN_14695ec4a(&local_30);
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142873fd1 FUN_142873fd1 body=55 status=ok
// SIG undefined FUN_142873fd1(void)

void FUN_142873fd1(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b388 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b388 = FUN_14171c317(FUN_14627a7b2,uVar1,L"ESlateBrushDrawType");
  }
  return;
}



// FUNCTION 142874008 FUN_142874008 body=55 status=ok
// SIG undefined FUN_142874008(void)

void FUN_142874008(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b3a0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b3a0 = FUN_14171c317(FUN_14627a7e1,uVar1,L"ESlateBrushTileType");
  }
  return;
}



// FUNCTION 14287403f FUN_14287403f body=55 status=ok
// SIG undefined FUN_14287403f(void)

void FUN_14287403f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b3b8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b3b8 = FUN_14171c317(FUN_14627a810,uVar1,L"ESlateBrushMirrorType");
  }
  return;
}



// FUNCTION 142874076 FUN_142874076 body=55 status=ok
// SIG undefined FUN_142874076(void)

void FUN_142874076(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b3d0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b3d0 = FUN_14171c317(FUN_14627a83f,uVar1,L"ESlateBrushImageType");
  }
  return;
}



// FUNCTION 1428740ad FUN_1428740ad body=55 status=ok
// SIG undefined FUN_1428740ad(void)

void FUN_1428740ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b3e8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b3e8 = FUN_14171c317(FUN_14627a86e,uVar1,L"ESlateBrushRoundingType");
  }
  return;
}



// FUNCTION 1428740e4 FUN_1428740e4 body=55 status=ok
// SIG undefined FUN_1428740e4(void)

void FUN_1428740e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b430 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b430 = FUN_14171c317(FUN_14627a99c,uVar1,L"ESlateColorStylingMode");
  }
  return;
}



// FUNCTION 14287411b FUN_14287411b body=41 status=ok
// SIG undefined FUN_14287411b(void)

void FUN_14287411b(void)

{
  DAT_14c96b4a0 = 0;
  if (DAT_14c96b498 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61ff4();
  return;
}



// FUNCTION 142874144 FUN_142874144 body=168 status=ok
// SIG undefined FUN_142874144(void)

void FUN_142874144(undefined8 param_1,char param_2,longlong *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  
  if (3 < (byte)(param_2 - 1U)) {
    plVar2 = (longlong *)*param_3;
    if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
    }
    FUN_1447a1fc0(plVar2);
    param_3 = (longlong *)*param_3;
    pcVar1 = *(code **)(*param_3 + 0x28);
    if (pcVar1 == FUN_14482841c) {
      plVar2 = param_3 + 3;
      if (param_3[5] != 0) {
        plVar2 = (longlong *)(param_3[5] + 8);
      }
    }
    else if (pcVar1 == (code *)&LAB_14010c34c) {
      plVar2 = param_3 + 2;
    }
    else {
      plVar2 = (longlong *)(*pcVar1)(param_3);
    }
    if ((int)plVar2[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*plVar2;
    }
    FUN_140033559(".\\Runtime/SlateCore/Private/Styling/SlateStyleSet.cpp",0x230,&DAT_149e0625e,
                  puVar3);
  }
  return;
}



// FUNCTION 1428741ec FUN_1428741ec body=55 status=ok
// SIG undefined FUN_1428741ec(void)

void FUN_1428741ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b4b0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b4b0 = FUN_14171c317(FUN_14627af41,uVar1,L"EConsumeMouseWheel");
  }
  return;
}



// FUNCTION 142874223 FUN_142874223 body=55 status=ok
// SIG undefined FUN_142874223(void)

void FUN_142874223(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b4c8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b4c8 = FUN_14171c317(FUN_14627af72,uVar1,L"ESlateParentWindowSearchMethod");
  }
  return;
}



// FUNCTION 14287425a FUN_14287425a body=55 status=ok
// SIG undefined FUN_14287425a(void)

void FUN_14287425a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b4e0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b4e0 = FUN_14171c317(FUN_14627afa1,uVar1,L"ESlateCheckBoxType");
  }
  return;
}



// FUNCTION 142874291 FUN_142874291 body=55 status=ok
// SIG undefined FUN_142874291(void)

void FUN_142874291(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b4f8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b4f8 = FUN_14171c317(FUN_14627afd0,uVar1,L"ECheckBoxState");
  }
  return;
}



// FUNCTION 1428742c8 FUN_1428742c8 body=55 status=ok
// SIG undefined FUN_1428742c8(void)

void FUN_1428742c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b510 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b510 = FUN_14171c317(FUN_14627b001,uVar1,L"ETextOverflowPolicy");
  }
  return;
}



// FUNCTION 1428742ff FUN_1428742ff body=55 status=ok
// SIG undefined FUN_1428742ff(void)

void FUN_1428742ff(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b540 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b540 = FUN_14171c317(FUN_14627b09a,uVar1,L"ETextTransformPolicy");
  }
  return;
}



// FUNCTION 142874342 FUN_142874342 body=59 status=ok
// SIG undefined FUN_142874342(void)

void FUN_142874342(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c96c120;
  if (DAT_14c96c120 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c96c120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142874372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428743af FUN_1428743af body=46 status=ok
// SIG undefined FUN_1428743af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428743af(void)

{
  _DAT_14c96cfb0 = &PTR_FUN_149ee3300;
  FUN_140e9e952(&DAT_14c96d330);
  FUN_140ffd6b6(&DAT_14c96cfc0);
  return;
}



// FUNCTION 142874449 FUN_142874449 body=87 status=ok
// SIG undefined FUN_142874449(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142874449(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c970b40;
  _DAT_14c970a90 = &PTR_FUN_149eeb4b0;
  _DAT_14c970aa0 = &PTR_FUN_149ed05f0;
  if (DAT_14c970b40 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c970b40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142874495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428744e8 FUN_1428744e8 body=59 status=ok
// SIG undefined FUN_1428744e8(void)

void FUN_1428744e8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9751d0;
  if (DAT_14c9751d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9751d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142874518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142874523 FUN_142874523 body=44 status=ok
// SIG undefined FUN_142874523(void)

void FUN_142874523(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c9751d8;
  if (DAT_14c9751d8 == 0) {
    return;
  }
  FUN_145a4f216(DAT_14c9751d8);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 142874550 FUN_142874550 body=257 status=ok
// SIG undefined FUN_142874550(void)

void FUN_142874550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x660,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb570;
  FUN_141479436(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142874652 FUN_142874652 body=303 status=ok
// SIG undefined FUN_142874652(void)

void FUN_142874652(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar7 = (longlong *)FUN_14001cc68(0x680,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149eeb650;
  plVar7[2] = (longlong)&PTR_FUN_149ee3300;
  FUN_141478cf2(plVar7 + 4,param_3 + 0x10);
  FUN_140e9ea3a(plVar7 + 0x72,param_3 + 0x380);
  uVar4 = *(undefined4 *)(param_3 + 0x664);
  uVar5 = *(undefined4 *)(param_3 + 0x668);
  uVar6 = *(undefined4 *)(param_3 + 0x66c);
  *(undefined4 *)(plVar7 + 0xce) = *(undefined4 *)(param_3 + 0x660);
  *(undefined4 *)((longlong)plVar7 + 0x674) = uVar4;
  *(undefined4 *)(plVar7 + 0xcf) = uVar5;
  *(undefined4 *)((longlong)plVar7 + 0x67c) = uVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar7 + 2;
  local_50 = plVar7;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142874782 FUN_142874782 body=229 status=ok
// SIG undefined FUN_142874782(void)

void FUN_142874782(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x240,0x10);
  FUN_14627d306(plVar4,param_3);
  local_50 = plVar4 + 2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = &local_40;
  local_30 = &local_50;
  local_48 = plVar4;
  FUN_141030890(param_1 + 0x30,local_24,&local_38,0);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142874868 FUN_142874868 body=208 status=ok
// SIG undefined FUN_142874868(void)

void FUN_142874868(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  plVar4 = (longlong *)FUN_14627d3a5(param_3);
  local_50 = plVar4 + 2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = &local_40;
  local_30 = &local_50;
  local_48 = plVar4;
  FUN_141030890(param_1 + 0x30,local_24,&local_38,0);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287493a FUN_14287493a body=257 status=ok
// SIG undefined FUN_14287493a(void)

void FUN_14287493a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(2000,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb750;
  FUN_145c1e37a(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142874a3c FUN_142874a3c body=647 status=ok
// SIG undefined FUN_142874a3c(void)

void FUN_142874a3c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  plVar13 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_149eeb7b0;
  plVar13[2] = (longlong)&PTR_FUN_149eeb510;
  plVar13[4] = (longlong)&PTR_FUN_149ed05f0;
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 0x20);
  uVar4 = *(undefined4 *)(param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 0x28);
  uVar6 = *(undefined4 *)(param_3 + 0x2c);
  uVar7 = *(undefined4 *)(param_3 + 0x30);
  uVar8 = *(undefined4 *)(param_3 + 0x34);
  uVar9 = *(undefined4 *)(param_3 + 0x38);
  uVar10 = *(undefined4 *)(param_3 + 0x3c);
  uVar11 = *(undefined4 *)(param_3 + 0x40);
  uVar12 = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar2;
  *(undefined4 *)(plVar13 + 6) = uVar3;
  *(undefined4 *)((longlong)plVar13 + 0x34) = uVar4;
  *(undefined4 *)(plVar13 + 7) = uVar5;
  *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar6;
  *(undefined4 *)(plVar13 + 8) = uVar7;
  *(undefined4 *)((longlong)plVar13 + 0x44) = uVar8;
  *(undefined4 *)(plVar13 + 9) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar10;
  *(undefined4 *)(plVar13 + 10) = uVar11;
  *(undefined4 *)((longlong)plVar13 + 0x54) = uVar12;
  lVar14 = *(longlong *)(param_3 + 0x48);
  plVar13[0xb] = lVar14;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar15 = (longlong *)(param_3 + 0x50);
  plVar16 = plVar13 + 0xc;
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar16 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar16 = plVar16 + 1;
  }
  *(undefined1 *)((longlong)plVar13 + 0xb4) = *(undefined1 *)(param_3 + 0xa4);
  *(undefined4 *)(plVar13 + 0x16) = *(undefined4 *)(param_3 + 0xa0);
  plVar13[0x17] = *(longlong *)(param_3 + 0xa8);
  lVar14 = *(longlong *)(param_3 + 0xb0);
  plVar13[0x18] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar13[0x19] = *(longlong *)(param_3 + 0xb8);
  plVar13[0x1a] = (longlong)&PTR_FUN_149ed05f0;
  uVar2 = *(undefined4 *)(param_3 + 0xcc);
  uVar3 = *(undefined4 *)(param_3 + 0xd0);
  uVar4 = *(undefined4 *)(param_3 + 0xd4);
  uVar5 = *(undefined4 *)(param_3 + 0xd8);
  uVar6 = *(undefined4 *)(param_3 + 0xdc);
  uVar7 = *(undefined4 *)(param_3 + 0xe0);
  uVar8 = *(undefined4 *)(param_3 + 0xe4);
  uVar9 = *(undefined4 *)(param_3 + 0xe8);
  uVar10 = *(undefined4 *)(param_3 + 0xec);
  uVar11 = *(undefined4 *)(param_3 + 0xf0);
  uVar12 = *(undefined4 *)(param_3 + 0xf4);
  *(undefined4 *)(plVar13 + 0x1b) = *(undefined4 *)(param_3 + 200);
  *(undefined4 *)((longlong)plVar13 + 0xdc) = uVar2;
  *(undefined4 *)(plVar13 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)plVar13 + 0xe4) = uVar4;
  *(undefined4 *)(plVar13 + 0x1d) = uVar5;
  *(undefined4 *)((longlong)plVar13 + 0xec) = uVar6;
  *(undefined4 *)(plVar13 + 0x1e) = uVar7;
  *(undefined4 *)((longlong)plVar13 + 0xf4) = uVar8;
  *(undefined4 *)(plVar13 + 0x1f) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0xfc) = uVar10;
  *(undefined4 *)(plVar13 + 0x20) = uVar11;
  *(undefined4 *)((longlong)plVar13 + 0x104) = uVar12;
  lVar14 = *(longlong *)(param_3 + 0xf8);
  plVar13[0x21] = lVar14;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_68 = plVar13 + 2;
  plVar15 = (longlong *)(param_3 + 0x100);
  plVar16 = plVar13 + 0x22;
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar16 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar16 = plVar16 + 1;
  }
  *(undefined1 *)((longlong)plVar13 + 0x164) = *(undefined1 *)(param_3 + 0x154);
  *(undefined4 *)(plVar13 + 0x2c) = *(undefined4 *)(param_3 + 0x150);
  plVar13[0x2d] = *(longlong *)(param_3 + 0x158);
  lVar14 = *(longlong *)(param_3 + 0x160);
  plVar13[0x2e] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar13[0x2f] = *(longlong *)(param_3 + 0x168);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_50 = &local_58;
  local_48 = &local_68;
  local_60 = plVar13;
  FUN_141030890(param_1 + 0x30,local_3c,&local_50,0);
  plVar15 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_60 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142874cc4 FUN_142874cc4 body=257 status=ok
// SIG undefined FUN_142874cc4(void)

void FUN_142874cc4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x300,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb8b0;
  FUN_14627d4c8(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142874dc6 FUN_142874dc6 body=647 status=ok
// SIG undefined FUN_142874dc6(void)

void FUN_142874dc6(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_2;
  plVar13 = (longlong *)FUN_14001cc68(0x180,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_149eeb8f0;
  plVar13[2] = (longlong)&PTR_FUN_149eeb910;
  plVar13[4] = (longlong)&PTR_FUN_149ed05f0;
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 0x20);
  uVar4 = *(undefined4 *)(param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 0x28);
  uVar6 = *(undefined4 *)(param_3 + 0x2c);
  uVar7 = *(undefined4 *)(param_3 + 0x30);
  uVar8 = *(undefined4 *)(param_3 + 0x34);
  uVar9 = *(undefined4 *)(param_3 + 0x38);
  uVar10 = *(undefined4 *)(param_3 + 0x3c);
  uVar11 = *(undefined4 *)(param_3 + 0x40);
  uVar12 = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar2;
  *(undefined4 *)(plVar13 + 6) = uVar3;
  *(undefined4 *)((longlong)plVar13 + 0x34) = uVar4;
  *(undefined4 *)(plVar13 + 7) = uVar5;
  *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar6;
  *(undefined4 *)(plVar13 + 8) = uVar7;
  *(undefined4 *)((longlong)plVar13 + 0x44) = uVar8;
  *(undefined4 *)(plVar13 + 9) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar10;
  *(undefined4 *)(plVar13 + 10) = uVar11;
  *(undefined4 *)((longlong)plVar13 + 0x54) = uVar12;
  lVar14 = *(longlong *)(param_3 + 0x48);
  plVar13[0xb] = lVar14;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar15 = (longlong *)(param_3 + 0x50);
  plVar16 = plVar13 + 0xc;
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar16 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar16 = plVar16 + 1;
  }
  *(undefined1 *)((longlong)plVar13 + 0xb4) = *(undefined1 *)(param_3 + 0xa4);
  *(undefined4 *)(plVar13 + 0x16) = *(undefined4 *)(param_3 + 0xa0);
  plVar13[0x17] = *(longlong *)(param_3 + 0xa8);
  lVar14 = *(longlong *)(param_3 + 0xb0);
  plVar13[0x18] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar13[0x19] = *(longlong *)(param_3 + 0xb8);
  plVar13[0x1a] = (longlong)&PTR_FUN_149ed05f0;
  uVar2 = *(undefined4 *)(param_3 + 0xcc);
  uVar3 = *(undefined4 *)(param_3 + 0xd0);
  uVar4 = *(undefined4 *)(param_3 + 0xd4);
  uVar5 = *(undefined4 *)(param_3 + 0xd8);
  uVar6 = *(undefined4 *)(param_3 + 0xdc);
  uVar7 = *(undefined4 *)(param_3 + 0xe0);
  uVar8 = *(undefined4 *)(param_3 + 0xe4);
  uVar9 = *(undefined4 *)(param_3 + 0xe8);
  uVar10 = *(undefined4 *)(param_3 + 0xec);
  uVar11 = *(undefined4 *)(param_3 + 0xf0);
  uVar12 = *(undefined4 *)(param_3 + 0xf4);
  *(undefined4 *)(plVar13 + 0x1b) = *(undefined4 *)(param_3 + 200);
  *(undefined4 *)((longlong)plVar13 + 0xdc) = uVar2;
  *(undefined4 *)(plVar13 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)plVar13 + 0xe4) = uVar4;
  *(undefined4 *)(plVar13 + 0x1d) = uVar5;
  *(undefined4 *)((longlong)plVar13 + 0xec) = uVar6;
  *(undefined4 *)(plVar13 + 0x1e) = uVar7;
  *(undefined4 *)((longlong)plVar13 + 0xf4) = uVar8;
  *(undefined4 *)(plVar13 + 0x1f) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0xfc) = uVar10;
  *(undefined4 *)(plVar13 + 0x20) = uVar11;
  *(undefined4 *)((longlong)plVar13 + 0x104) = uVar12;
  lVar14 = *(longlong *)(param_3 + 0xf8);
  plVar13[0x21] = lVar14;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_68 = plVar13 + 2;
  plVar15 = (longlong *)(param_3 + 0x100);
  plVar16 = plVar13 + 0x22;
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar16 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar16 = plVar16 + 1;
  }
  *(undefined1 *)((longlong)plVar13 + 0x164) = *(undefined1 *)(param_3 + 0x154);
  *(undefined4 *)(plVar13 + 0x2c) = *(undefined4 *)(param_3 + 0x150);
  plVar13[0x2d] = *(longlong *)(param_3 + 0x158);
  lVar14 = *(longlong *)(param_3 + 0x160);
  plVar13[0x2e] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar13[0x2f] = *(longlong *)(param_3 + 0x168);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_50 = &local_58;
  local_48 = &local_68;
  local_60 = plVar13;
  FUN_141030890(param_1 + 0x30,local_3c,&local_50,0);
  plVar15 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_60 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287504e FUN_14287504e body=257 status=ok
// SIG undefined FUN_14287504e(void)

void FUN_14287504e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x1610,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb930;
  FUN_14627c392(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142875150 FUN_142875150 body=66 status=ok
// SIG undefined FUN_142875150(void)

void FUN_142875150(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x68);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142875192 FUN_142875192 body=58 status=ok
// SIG undefined FUN_142875192(void)

void FUN_142875192(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x58);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1428751cc FUN_1428751cc body=49 status=ok
// SIG undefined FUN_1428751cc(void)

void FUN_1428751cc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1428751fd FUN_1428751fd body=66 status=ok
// SIG undefined FUN_1428751fd(void)

void FUN_1428751fd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14287523f FUN_14287523f body=52 status=ok
// SIG undefined FUN_14287523f(void)

void FUN_14287523f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 142875273 FUN_142875273 body=43 status=ok
// SIG undefined FUN_142875273(void)

void FUN_142875273(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146963e72(param_1);
    param_1 = param_1 + 0xd0;
  }
  return;
}



// FUNCTION 14287529e FUN_14287529e body=180 status=ok
// SIG undefined FUN_14287529e(void)

byte FUN_14287529e(float *param_1,float *param_2)

{
  byte bVar1;
  
  if (((((((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) || (param_1[1] != param_2[1])
         ) || (((NAN(param_1[1]) || NAN(param_2[1]) || (param_1[2] != param_2[2])) ||
               ((NAN(param_1[2]) || NAN(param_2[2]) ||
                ((param_1[3] != param_2[3] || (NAN(param_1[3]) || NAN(param_2[3]))))))))) ||
       ((param_1[4] != param_2[4] ||
        (((NAN(param_1[4]) || NAN(param_2[4]) || (param_1[5] != param_2[5])) ||
         (NAN(param_1[5]) || NAN(param_2[5]))))))) ||
      (((param_1[6] != param_2[6] || (NAN(param_1[6]) || NAN(param_2[6]))) ||
       (((param_1[7] != param_2[7] ||
         ((NAN(param_1[7]) || NAN(param_2[7]) || (param_1[8] != param_2[8])))) ||
        (NAN(param_1[8]) || NAN(param_2[8]))))))) ||
     ((((param_1[9] != param_2[9] || (NAN(param_1[9]) || NAN(param_2[9]))) ||
       (param_1[10] != param_2[10])) || (NAN(param_1[10]) || NAN(param_2[10]))))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -(param_2[0xb] == param_1[0xb]) & 1;
  }
  return bVar1;
}



// FUNCTION 142875352 FUN_142875352 body=96 status=ok
// SIG undefined FUN_142875352(void)

void FUN_142875352(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_146964c32(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x2c + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x2c)
    ;
    return;
  }
  return;
}



// FUNCTION 1428753ea FUN_1428753ea body=275 status=ok
// SIG undefined FUN_1428753ea(void)

undefined8 FUN_1428753ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  
  if (param_4 != 0) {
    lVar23 = 0xa8;
    do {
      puVar6 = (undefined4 *)(param_3 + -0xa0 + lVar23);
      uVar9 = *puVar6;
      uVar10 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      puVar6 = (undefined4 *)(param_3 + -0x90 + lVar23);
      uVar13 = *puVar6;
      uVar14 = puVar6[1];
      uVar15 = puVar6[2];
      uVar16 = puVar6[3];
      puVar6 = (undefined4 *)(param_3 + -0x80 + lVar23);
      uVar17 = puVar6[1];
      uVar18 = puVar6[2];
      uVar19 = puVar6[3];
      puVar4 = (undefined4 *)(param_2 + -0x80 + lVar23);
      *puVar4 = *puVar6;
      puVar4[1] = uVar17;
      puVar4[2] = uVar18;
      puVar4[3] = uVar19;
      puVar6 = (undefined4 *)(param_2 + -0x90 + lVar23);
      *puVar6 = uVar13;
      puVar6[1] = uVar14;
      puVar6[2] = uVar15;
      puVar6[3] = uVar16;
      puVar6 = (undefined4 *)(param_2 + -0xa0 + lVar23);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      puVar6[2] = uVar11;
      puVar6[3] = uVar12;
      lVar20 = *(longlong *)(param_3 + -0x70 + lVar23);
      if (DAT_14c950c29 == '\x01') {
        if (lVar20 == 0) {
          lVar20 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar20 = *(longlong *)(param_3 + -0x70 + lVar23);
        }
      }
      lVar3 = param_2 + lVar23;
      *(longlong *)(lVar3 + -0x70) = lVar20;
      puVar5 = (undefined8 *)(param_3 + -0x68 + lVar23);
      puVar21 = puVar5;
      puVar22 = (undefined8 *)(lVar3 + -0x68);
      for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      *(undefined1 *)(lVar3 + -0x14) = *(undefined1 *)((longlong)puVar5 + 0x54);
      *(undefined4 *)(lVar3 + -0x18) = *(undefined4 *)(puVar5 + 10);
      uVar7 = puVar5[0xb];
      lVar20 = puVar5[0xc];
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
      }
      plVar8 = *(longlong **)(param_2 + -8 + lVar23);
      *(undefined8 *)(param_2 + -0x10 + lVar23) = uVar7;
      *(longlong *)(param_2 + -8 + lVar23) = lVar20;
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
      *(undefined8 *)(param_2 + lVar23) = *(undefined8 *)(param_3 + lVar23);
      lVar23 = lVar23 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14287569e FUN_14287569e body=547 status=ok
// SIG undefined FUN_14287569e(void)

longlong * FUN_14287569e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1428758c2 FUN_1428758c2 body=41 status=ok
// SIG undefined FUN_1428758c2(void)

void FUN_1428758c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  FUN_142869b68(lVar1 + 0x48);
  FUN_142869b68(lVar1 + 0xb0);
  return;
}



// FUNCTION 1428758ec FUN_1428758ec body=110 status=ok
// SIG undefined FUN_1428758ec(void)

undefined8 * FUN_1428758ec(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14287595a FUN_14287595a body=63 status=ok
// SIG undefined FUN_14287595a(void)

longlong FUN_14287595a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428759c0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa0 + *param_1;
  FUN_142875999(lVar2);
  return lVar2;
}



// FUNCTION 142875999 FUN_142875999 body=39 status=ok
// SIG undefined FUN_142875999(void)

void FUN_142875999(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1428759c0 FUN_1428759c0 body=265 status=ok
// SIG undefined FUN_1428759c0(void)

void FUN_1428759c0(longlong param_1,int param_2)

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



// FUNCTION 142875aca FUN_142875aca body=58 status=ok
// SIG undefined FUN_142875aca(void)

int FUN_142875aca(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142875b42(param_1,iVar1);
  }
  FUN_146969513((longlong)iVar1 * 0xd0 + *param_1);
  return iVar1;
}



// FUNCTION 142875b04 FUN_142875b04 body=62 status=ok
// SIG undefined FUN_142875b04(void)

longlong FUN_142875b04(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142875b42(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xd0 + *param_1;
  FUN_146969513(lVar2);
  return lVar2;
}



// FUNCTION 142875b42 FUN_142875b42 body=264 status=ok
// SIG undefined FUN_142875b42(void)

void FUN_142875b42(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xd0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142875c4a FUN_142875c4a body=58 status=ok
// SIG undefined FUN_142875c4a(void)

int FUN_142875c4a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142875cc2(param_1,iVar1);
  }
  FUN_1469699ba((longlong)iVar1 * 0xd0 + *param_1);
  return iVar1;
}



// FUNCTION 142875c84 FUN_142875c84 body=62 status=ok
// SIG undefined FUN_142875c84(void)

longlong FUN_142875c84(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142875cc2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xd0 + *param_1;
  FUN_1469699ba(lVar2);
  return lVar2;
}



// FUNCTION 142875cc2 FUN_142875cc2 body=264 status=ok
// SIG undefined FUN_142875cc2(void)

void FUN_142875cc2(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xd0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142875dca FUN_142875dca body=62 status=ok
// SIG undefined FUN_142875dca(void)

longlong FUN_142875dca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142875e40(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x98 + *param_1;
  FUN_142875e08(lVar2);
  return lVar2;
}



// FUNCTION 142875e08 FUN_142875e08 body=56 status=ok
// SIG undefined FUN_142875e08(void)

void FUN_142875e08(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 142875e40 FUN_142875e40 body=362 status=ok
// SIG undefined FUN_142875e40(void)

void FUN_142875e40(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x98;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142875ed5;
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
LAB_142875ed5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}



// FUNCTION 142875faa FUN_142875faa body=59 status=ok
// SIG undefined FUN_142875faa(void)

int FUN_142875faa(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142876026(param_1,iVar1);
  }
  FUN_146969ea0((longlong)iVar1 * 0x90 + *param_1);
  return iVar1;
}



// FUNCTION 142875fe6 FUN_142875fe6 body=63 status=ok
// SIG undefined FUN_142875fe6(void)

longlong FUN_142875fe6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142876026(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  FUN_146969ea0(lVar2);
  return lVar2;
}



// FUNCTION 142876026 FUN_142876026 body=265 status=ok
// SIG undefined FUN_142876026(void)

void FUN_142876026(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x90;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142876130 FUN_142876130 body=58 status=ok
// SIG undefined FUN_142876130(void)

int FUN_142876130(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428761a8(param_1,iVar1);
  }
  FUN_14696a104((longlong)iVar1 * 0x98 + *param_1);
  return iVar1;
}



// FUNCTION 14287616a FUN_14287616a body=62 status=ok
// SIG undefined FUN_14287616a(void)

longlong FUN_14287616a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428761a8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x98 + *param_1;
  FUN_14696a104(lVar2);
  return lVar2;
}



// FUNCTION 1428761a8 FUN_1428761a8 body=362 status=ok
// SIG undefined FUN_1428761a8(void)

void FUN_1428761a8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x98;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14287623d;
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
LAB_14287623d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}



// FUNCTION 142876312 FUN_142876312 body=58 status=ok
// SIG undefined FUN_142876312(void)

int FUN_142876312(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142876388(param_1,iVar1);
  }
  FUN_14696a35e((longlong)iVar1 * 0x80 + *param_1);
  return iVar1;
}



// FUNCTION 14287634c FUN_14287634c body=59 status=ok
// SIG undefined FUN_14287634c(void)

longlong FUN_14287634c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_142876388(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_14696a35e(lVar2);
  return lVar2;
}



// FUNCTION 142876388 FUN_142876388 body=248 status=ok
// SIG undefined FUN_142876388(void)

void FUN_142876388(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142876480 FUN_142876480 body=64 status=ok
// SIG undefined FUN_142876480(void)

longlong FUN_142876480(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428764ec(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  FUN_1428764c0(lVar2,1);
  return lVar2;
}



// FUNCTION 1428764c0 FUN_1428764c0 body=44 status=ok
// SIG undefined FUN_1428764c0(void)

void FUN_1428764c0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x3f800000;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
    param_1 = param_1 + 0xe;
  }
  return;
}



// FUNCTION 1428764ec FUN_1428764ec body=261 status=ok
// SIG undefined FUN_1428764ec(void)

void FUN_1428764ec(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1428765f2 FUN_1428765f2 body=68 status=ok
// SIG undefined FUN_1428765f2(void)

longlong FUN_1428765f2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14287666a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  FUN_142876636(lVar2,1);
  return lVar2;
}



// FUNCTION 142876636 FUN_142876636 body=51 status=ok
// SIG undefined FUN_142876636(void)

void FUN_142876636(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x3f800000;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 14287666a FUN_14287666a body=265 status=ok
// SIG undefined FUN_14287666a(void)

void FUN_14287666a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142876774 FUN_142876774 body=58 status=ok
// SIG undefined FUN_142876774(void)

int FUN_142876774(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428767ea(param_1,iVar1);
  }
  FUN_14696aa35((longlong)iVar1 * 0x80 + *param_1);
  return iVar1;
}



// FUNCTION 1428767ae FUN_1428767ae body=59 status=ok
// SIG undefined FUN_1428767ae(void)

longlong FUN_1428767ae(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428767ea(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_14696aa35(lVar2);
  return lVar2;
}



// FUNCTION 1428767ea FUN_1428767ea body=248 status=ok
// SIG undefined FUN_1428767ea(void)

void FUN_1428767ea(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1428768e2 FUN_1428768e2 body=48 status=ok
// SIG undefined FUN_1428768e2(void)

void FUN_1428768e2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa0,8);
  }
  return;
}



// FUNCTION 142876912 FUN_142876912 body=48 status=ok
// SIG undefined FUN_142876912(void)

void FUN_142876912(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xd0,8);
  }
  return;
}



// FUNCTION 142876942 FUN_142876942 body=48 status=ok
// SIG undefined FUN_142876942(void)

void FUN_142876942(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 142876972 FUN_142876972 body=48 status=ok
// SIG undefined FUN_142876972(void)

void FUN_142876972(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 1428769a2 FUN_1428769a2 body=48 status=ok
// SIG undefined FUN_1428769a2(void)

void FUN_1428769a2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,8);
  }
  return;
}



// FUNCTION 1428769d2 FUN_1428769d2 body=48 status=ok
// SIG undefined FUN_1428769d2(void)

void FUN_1428769d2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,0x10);
  }
  return;
}



// FUNCTION 142876a02 FUN_142876a02 body=48 status=ok
// SIG undefined FUN_142876a02(void)

void FUN_142876a02(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 142876a32 FUN_142876a32 body=48 status=ok
// SIG undefined FUN_142876a32(void)

void FUN_142876a32(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 142876a62 FUN_142876a62 body=48 status=ok
// SIG undefined FUN_142876a62(void)

void FUN_142876a62(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 142876a92 FUN_142876a92 body=48 status=ok
// SIG undefined FUN_142876a92(void)

void FUN_142876a92(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,0x10);
  }
  return;
}



// FUNCTION 142876ac2 FUN_142876ac2 body=48 status=ok
// SIG undefined FUN_142876ac2(void)

void FUN_142876ac2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xd0,0x10);
  }
  return;
}



// FUNCTION 142876af2 FUN_142876af2 body=48 status=ok
// SIG undefined FUN_142876af2(void)

void FUN_142876af2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 142876b22 FUN_142876b22 body=74 status=ok
// SIG undefined FUN_142876b22(void)

void FUN_142876b22(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 142876b6c FUN_142876b6c body=450 status=ok
// SIG undefined FUN_142876b6c(void)

void FUN_142876b6c(undefined8 *param_1,uint param_2)

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
LAB_142876c87:
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
LAB_142876cc4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142876bc2;
LAB_142876bb7:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142876bc2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000142876bee;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142876c44:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142876cc4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_142876c87;
code_r0x000142876bee:
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
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142876c44;
    }
  }
  goto LAB_142876bb7;
}



// FUNCTION 142876d2e FUN_142876d2e body=109 status=ok
// SIG undefined FUN_142876d2e(void)

undefined8 FUN_142876d2e(int *param_1,int *param_2)

{
  char cVar1;
  
  if (((((*param_1 == *param_2) && (cVar1 = FUN_14287529e(param_1 + 4,param_2 + 4), cVar1 != '\0'))
       && (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))) &&
      (((char)param_1[0x12] == (char)param_2[0x12] &&
       (*(char *)((longlong)param_1 + 0x49) == *(char *)((longlong)param_2 + 0x49))))) &&
     ((*(char *)((longlong)param_1 + 0x4a) == *(char *)((longlong)param_2 + 0x4a) &&
      (((short)param_1[0x13] == (short)param_2[0x13] &&
       (*(char *)((longlong)param_1 + 0x4e) == *(char *)((longlong)param_2 + 0x4e))))))) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x14) >> 8),
                    *(longlong *)(param_1 + 0x14) == *(longlong *)(param_2 + 0x14));
  }
  return 0;
}



// FUNCTION 142876ddf FUN_142876ddf body=162 status=ok
// SIG undefined FUN_142876ddf(void)

bool FUN_142876ddf(float *param_1)

{
  float fVar1;
  
  fVar1 = ABS(param_1[3]);
  if ((0.0001 < ABS(*param_1)) || (0.0001 < fVar1)) {
    if ((ABS(param_1[1]) <= 0.0001) &&
       ((ABS(param_1[2]) <= 0.0001 && (ABS(1.0 - ABS(*param_1)) <= 0.0001)))) goto LAB_142876e7d;
  }
  else if (ABS(1.0 - ABS(param_1[1])) <= 0.0001) {
    fVar1 = ABS(param_1[2]);
LAB_142876e7d:
    return ABS(1.0 - fVar1) <= 0.0001;
  }
  return false;
}



// FUNCTION 142876ea4 FUN_142876ea4 body=547 status=ok
// SIG undefined FUN_142876ea4(void)

longlong * FUN_142876ea4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1428770c8 FUN_1428770c8 body=116 status=ok
// SIG undefined FUN_1428770c8(void)

ulonglong FUN_1428770c8(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong extraout_RAX;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x30);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)(lVar3 + 0x18);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    lVar5 = 0;
    do {
      FUN_1405d3048(*(undefined8 *)(lVar4 + lVar5));
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  LOCK();
  bVar1 = *(byte *)(lVar3 + 0x58);
  *(byte *)(lVar3 + 0x58) = 0;
  UNLOCK();
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142877128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return extraout_RAX;
  }
  return (ulonglong)bVar1;
}



// FUNCTION 14287713c FUN_14287713c body=110 status=ok
// SIG undefined FUN_14287713c(void)

undefined8 * FUN_14287713c(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1428771aa FUN_1428771aa body=615 status=ok
// SIG undefined FUN_1428771aa(void)

void FUN_1428771aa(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  float *pfVar7;
  void *pvVar8;
  undefined2 *puVar9;
  wchar_t *_Str;
  int iVar10;
  undefined1 auStack_158 [32];
  float local_138;
  float local_130;
  longlong local_128;
  int local_120;
  int local_118;
  int local_110;
  undefined2 *local_108;
  int local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(*param_1 + 0xa8) + (longlong)*param_2 * 0x28;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  FUN_1400021e4(lVar1,&local_108);
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = (wchar_t *)0x0;
  uStack_e0 = 0;
  puVar9 = local_108;
  if (local_100 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  cVar4 = FUN_140f7cb10(&local_e8,puVar9,0,0);
  if (cVar4 != '\0') {
    _Str = local_e8;
    if ((int)uStack_e0 == 0) {
      _Str = L"";
    }
    local_50 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar6 = wcslen(_Str);
      FUN_1449b853c(local_d0,_Str,sVar6 & 0xffffffff,1);
    }
    pfVar7 = (float *)nsvgParse(local_48,&DAT_149edb008,0x42c00000);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (pfVar7 != (float *)0x0) {
      iVar3 = (int)uVar2;
      iVar10 = (int)((ulonglong)uVar2 >> 0x20);
      iVar5 = iVar3 * 4 * iVar10;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar5);
      if (iVar5 != 0) {
        FUN_1447403be(&local_f8,0);
      }
      pvVar8 = calloc(1,0x80);
      if (pvVar8 != (void *)0x0) {
        *(undefined8 *)((longlong)pvVar8 + 8) = 0x3c23d70a3e800000;
      }
      local_138 = (float)iVar3 / *pfVar7;
      local_130 = (float)iVar10 / pfVar7[1];
      local_128 = local_f8;
      local_120 = iVar3;
      local_118 = iVar10;
      local_110 = iVar3 * 4;
      nsvgRasterizeFull(pvVar8,pfVar7,0,0);
      nsvgDeleteRasterizer(pvVar8);
      nsvgDelete(pfVar7);
    }
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong *)(lVar1 + 0x18) == &local_f8) {
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x18) = local_f8;
    local_f8 = 0;
    *(undefined4 *)(lVar1 + 0x20) = (undefined4)uStack_f0;
    *(undefined4 *)(lVar1 + 0x24) = uStack_f0._4_4_;
    uStack_f0 = 0;
  }
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142877412 FUN_142877412 body=39 status=ok
// SIG undefined FUN_142877412(void)

void FUN_142877412(void)

{
  if (DAT_14c979c40 != 0) {
    FUN_14613b39e();
    DAT_14c979c40 = 0;
  }
  return;
}



// FUNCTION 142877439 FUN_142877439 body=1952 status=ok
// SIG undefined FUN_142877439(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142877439(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  char **local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_54;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c979c58 = 0;
  DAT_14c979c60 = 0;
  atexit((_func_5014 *)&LAB_1428693ce);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e17030;
  *(code **)(local_50 + 0x18) = FUN_14286944a;
  uStack_70 = (undefined **)((ulonglong)uStack_70._4_4_ << 0x20);
  local_78 = &local_50;
  FUN_14171ec12(&DAT_14c96b290,L"Slate.ApplyDisabledEffectOnWidgets",&DAT_14c75ed48,
                L"If true, disabled game-layer widgets will have alpha multiplied by 0.45.");
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_142877552;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142877552:
  atexit(FUN_142869481);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c96b2a0,L"Slate.MaxSVGAtlasPagesBeforeFlush",&DAT_14c75ed4c,
                L"The number of atlas textures created and used before we flush the cache if a texture atlas is full"
               );
  atexit(FUN_1428732cd);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c96b2b0,L"Slate.MaxSVGNonAtlasTexturesBeforeFlush",&DAT_14c75ed50,
                L"The number of large textures initially.");
  atexit(FUN_142873312);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c96b2c0,L"Slate.GrowSVGAtlasFrameWindow",&DAT_14c75ed54,
                L"The number of frames within the atlas will resize rather than flush.");
  atexit(FUN_142873357);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c96b2d0,L"Slate.GrowSVGNonAtlasFrameWindow",&DAT_14c75ed58,
                L"The number of frames within the large pool will resize rather than flush.");
  atexit(FUN_14287339c);
  local_50 = (char *)CONCAT44(local_50._4_4_,0x42000000);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14c96b2e0,L"Slate.GlobalScrollAmount",&local_50,
                L"How much to scroll for each click of the mouse wheel (in Slate Screen Units).");
  atexit(FUN_142873904);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c96b2f8,L"Slate.Contrast",&DAT_14c75ed5c,
                L"The amount of contrast to apply to the UI (default 1).");
  atexit(FUN_142873949);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c96b308,L"Slate.EnableFastWidgetPath",&DAT_14c979c68,
                L"Whether or not we enable fast widget pathing.  This mode relies on parent pointers to work correctly."
               );
  atexit(FUN_14287398e);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c96b318,L"Slate.EnableGlobalInvalidation",&DAT_14c979cd2,&DAT_149dfb77a);
  atexit(FUN_1428739d3);
  local_50 = (char *)0x8000000149edb628;
  local_54 = 9;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_14627a562(&local_50);
  uStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = (char **)0x1;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149edb700);
  local_50 = "CoreStyle";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14c96b348 = (ulonglong)uVar2;
  DAT_14c96b350 = 0;
  DAT_14c96b358 = 0;
  atexit(FUN_142873dc5);
  uStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = (char **)0x1;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149edb9a0);
  FUN_1446f470e(&DAT_14c96b378,L"FSegmentedControlStyle",1);
  uStack_70 = &PTR_FUN_149edc410;
  uStack_68 = 5;
  local_78 = (char **)0x2;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149edc4b0);
  uStack_68 = 1;
  uStack_70 = &PTR_FUN_149edc710;
  local_78 = (char **)0x1;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149edc730);
  DAT_14c96b478 = 0;
  DAT_14c96b480 = 0;
  DAT_14c96b458 = 0;
  _DAT_14c96b460 = 0;
  _DAT_14c96b484 = 0xffffffff00000080;
  DAT_14c96b48c = 0;
  DAT_14c96b498 = 0;
  DAT_14c96b4a0 = 0;
  atexit(FUN_14287411b);
  uStack_70 = &PTR_FUN_149ee2cc0;
  uStack_68 = 6;
  local_78 = (char **)0x1a;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ee3190,1,&PTR_FUN_149ee2d80);
  FUN_1446f470e(&DAT_14c979d00,L"FCheckBoxStyle",1);
  FUN_1446f470e(&DAT_14c979cd8,L"FTextBlockStyle",1);
  FUN_1446f470e(&DAT_14c979ce8,L"FButtonStyle",1);
  FUN_1446f470e(&DAT_14c979cb8,L"FComboButtonStyle",1);
  FUN_1446f470e(&DAT_14c96c9f8,L"FComboBoxStyle",1);
  FUN_1446f470e(&DAT_14c96cfa8,L"FHyperlinkStyle",1);
  FUN_1446f470e(&DAT_14c96d628,L"FEditableTextStyle",1);
  FUN_1446f470e(&DAT_14c96d8c8,L"FEditableTextBoxStyle",1);
  FUN_1446f470e(&DAT_14c979c70,L"FInlineEditableTextBlockStyle",1);
  FUN_1446f470e(&DAT_14c979c90,L"FProgressBarStyle",1);
  FUN_1446f470e(&DAT_14c96e798,L"FScrollBarStyle",1);
  FUN_1446f470e(&DAT_14c979c98,L"FExpandableAreaStyle",1);
  FUN_1446f470e(&DAT_14c979ca0,L"FSearchBoxStyle",1);
  FUN_1446f470e(&DAT_14c96ff78,L"FSliderStyle",1);
  FUN_1446f470e(&DAT_14c979ca8,L"FVolumeControlStyle",1);
  FUN_1446f470e(&DAT_14c9703c8,L"FInlineTextImageStyle",1);
  FUN_1446f470e(&DAT_14c9703d0,L"FSpinBoxStyle",1);
  FUN_1446f470e(&DAT_14c979cf0,L"FSplitterStyle",1);
  FUN_1446f470e(&DAT_14c979c78,L"FTableViewStyle",1);
  FUN_1446f470e(&DAT_14c979c80,L"FTableRowStyle",1);
  FUN_1446f470e(&DAT_14c979c88,L"FTableColumnHeaderStyle",1);
  FUN_1446f470e(&DAT_14c979cb0,L"FHeaderRowStyle",1);
  FUN_1446f470e(&DAT_14c979cf8,L"FDockTabStyle",1);
  FUN_1446f470e(&DAT_14c979cc0,L"FScrollBoxStyle",1);
  FUN_1446f470e(&DAT_14c979cc8,L"FScrollBorderStyle",1);
  FUN_1446f470e(&DAT_14c979ce0,L"FWindowStyle",1);
  uStack_68 = 0;
  local_78 = (char **)0x0;
  uStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ee3a60,1,0);
  uStack_68 = 0;
  local_78 = (char **)0x0;
  uStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149ee3dd0,1,0);
  DAT_14c9751c8 = 0;
  DAT_14c9751d0 = 0;
  atexit(FUN_1428744e8);
  DAT_14c9751d8 = 0;
  atexit(FUN_142874523);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142877bdc FUN_142877bdc body=55 status=ok
// SIG undefined FUN_142877bdc(void)

void FUN_142877bdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c979d10 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c979d10 = FUN_14171c317(FUN_14627d7fd,uVar1,L"EStyleColor");
  }
  return;
}



// FUNCTION 142877c13 FUN_142877c13 body=73 status=ok
// SIG undefined FUN_142877c13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142877c13(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c979e10;
  _DAT_14c979d70 = &PTR_FUN_149ed05f0;
  if (DAT_14c979e10 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c979e10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142877c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142877c68 FUN_142877c68 body=59 status=ok
// SIG undefined FUN_142877c68(void)

void FUN_142877c68(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98de10;
  if (DAT_14c98de10 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98de10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142877c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142877e10 FUN_142877e10 body=90 status=ok
// SIG undefined FUN_142877e10(void)

void FUN_142877e10(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  local_18 = &DAT_14c967fd4;
  local_28 = param_2;
  FUN_14614c2b8(param_1 + 0xd0,local_c);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142877ef0 FUN_142877ef0 body=14 status=ok
// SIG undefined FUN_142877ef0(void)

undefined8 * FUN_142877ef0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142877efe FUN_142877efe body=52 status=ok
// SIG undefined FUN_142877efe(void)

void FUN_142877efe(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  *param_1 = param_3;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_2;
  param_1[4] = param_5;
  *(undefined4 *)(param_1 + 5) = param_6;
  *(byte *)((longlong)param_1 + 0x2c) = (*(byte *)((longlong)param_1 + 0x2c) & 0xfc) + 1;
  return;
}



// FUNCTION 142877f32 FUN_142877f32 body=264 status=ok
// SIG undefined FUN_142877f32(void)

void FUN_142877f32(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  uint local_68;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar6 = (**(code **)*plVar7)(plVar7);
  if (0 < iVar6) {
    iVar8 = 0;
    do {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_58,iVar8);
      lVar5 = local_48;
      if ((((*(byte *)(local_48 + 0x31) & 1) != 0) &&
          (lVar3 = **(longlong **)(local_48 + 0x1b0), lVar3 != 0)) && (*(byte *)(lVar3 + 0x99) != 0)
         ) {
        local_68 = (uint)*(byte *)(lVar3 + 0x99);
        FUN_1401630a0(lVar3,local_48,param_2,0);
      }
      if (param_3 != '\0') {
        FUN_142877f32(lVar5,param_2,1);
      }
      plVar4 = local_50;
      if ((local_58 != 0) && (local_50 != (longlong *)0x0)) {
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
      iVar8 = iVar8 + 1;
    } while (iVar6 != iVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287803c FUN_14287803c body=385 status=ok
// SIG undefined FUN_14287803c(void)

void FUN_14287803c(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 9) == '\x01') {
    iVar1 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
    if (iVar1 == 1) {
      plVar2 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar2 = (longlong *)param_2[2];
      }
      (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (param_3 == '\0') {
      local_78[0] = *param_2;
      local_68[0] = (longlong *)0x0;
      if (local_78[0] != 0) {
        plVar2 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar2 = (longlong *)param_2[2];
        }
        (**(code **)*plVar2)(plVar2,local_68);
      }
      local_38 = (longlong *)0x0;
      FUN_1428781d2(param_1,local_78);
      if (local_78[0] != 0) {
        plVar2 = local_68[0];
        if (local_68[0] == (longlong *)0x0) {
          plVar2 = local_58;
        }
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    else {
      plVar2 = (longlong *)FUN_1405d8a54(0);
      local_78[0] = *param_2;
      local_68[0] = (longlong *)0x0;
      if (local_78[0] != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_68);
      }
      local_38 = plVar2;
      FUN_1428781d2(param_1,local_78);
      if (local_78[0] != 0) {
        plVar3 = local_68[0];
        if (local_68[0] == (longlong *)0x0) {
          plVar3 = local_58;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
      FUN_14018802a(plVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428781d2 FUN_1428781d2 body=158 status=ok
// SIG undefined FUN_1428781d2(void)

void FUN_1428781d2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_14697a2a2((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar4 = (longlong)iVar1 * 0x50;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar4) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  if (lVar3 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)*plVar5)(plVar5,lVar2 + lVar4 + 0x10);
  }
  *(longlong *)(lVar2 + lVar4 + 0x40) = param_2[8];
                    /* WARNING: Could not recover jumptable at 0x00014287825c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return;
}



// FUNCTION 142878270 FUN_142878270 body=484 status=ok
// SIG undefined FUN_142878270(void)

void FUN_142878270(longlong param_1)

{
  double dVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  LARGE_INTEGER local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 9) == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
    local_d8 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x58);
    uStack_d0._0_4_ = (undefined4)uVar4;
    uStack_d0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    *(DWORD *)(param_1 + 0x50) = local_d8.s.LowPart;
    *(LONG *)(param_1 + 0x54) = local_d8.s.HighPart;
    *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_d0;
    *(undefined4 *)(param_1 + 0x5c) = uStack_d0._4_4_;
    uStack_d0 = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
    if (*(int *)(param_1 + 0x58) != 0) {
      QueryPerformanceCounter(&local_d8);
      dVar2 = (double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0;
      do {
        while (0 < *(int *)(param_1 + 0x58)) {
          FUN_1469749f4(param_1 + 0x50,&local_d8,1);
          LVar3 = local_d8;
          plVar5 = local_c8;
          if (local_c8 == (longlong *)0x0) {
            plVar5 = local_b8;
          }
          uVar4 = (**(code **)(*plVar5 + 8))();
          (*(code *)LVar3)(uVar4);
          if (local_98 != (longlong *)0x0) {
            (**(code **)(*local_98 + 0x10))();
          }
          if ((code *)local_d8.QuadPart != (code *)0x0) {
            plVar5 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar5 = local_b8;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        QueryPerformanceCounter(&local_d8);
        dVar1 = (dVar2 - ((double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0)) + 0.0005;
        if (0.0 < dVar1) {
          QueryPerformanceCounter(&local_d8);
          dVar1 = (dVar2 - ((double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0)) + 0.0005;
        }
      } while (0.0 < dVar1);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142878456 FUN_142878456 body=404 status=ok
// SIG undefined FUN_142878456(void)

void FUN_142878456(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [80];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_146974a80();
    plVar3 = local_28;
    if (local_30 != 0) {
      local_98[0] = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_b0[0] = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      if (local_28 == (longlong *)0x0) {
        local_b8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        local_b8 = local_28;
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      local_d8 = local_98;
      local_d0 = 0;
      FUN_146974ba4(local_80,local_c0,4,local_b0);
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar2 = *(longlong **)(param_1 + 0x10), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
      }
      FUN_146974cde(local_80);
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
      plVar3 = *(longlong **)(param_2 + 0x1c8);
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_1428784bb;
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
LAB_1428784bb:
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428785ec FUN_1428785ec body=605 status=ok
// SIG undefined FUN_1428785ec(void)

void FUN_1428785ec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong *plVar6;
  char cVar7;
  size_t sVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_c8 [2];
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 9) == '\x01') {
    cVar7 = FUN_1469131ee(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 9));
    if (cVar7 != '\0') {
      cVar7 = FUN_14697fb6e(*param_2);
      if (cVar7 != '\0') {
        FUN_146974fce(&local_48,param_2);
        if (*(char *)(param_2 + 2) == '\0') {
          FUN_146918d3a(param_2 + 3);
          FUN_146918d3a(param_2 + 6);
          cVar7 = FUN_146918d3a(param_2 + 6);
          plVar6 = local_40;
          if (cVar7 != '\0') {
            uVar4 = *(undefined4 *)(param_2 + 9);
            local_98 = local_48;
            local_90 = local_40;
            if (local_40 == (longlong *)0x0) {
              FUN_146974d36(param_1,&local_98,1,uVar4);
            }
            else {
              LOCK();
              *(int *)(local_40 + 1) = (int)local_40[1] + 1;
              UNLOCK();
              FUN_146974d36(param_1,&local_98,1,uVar4);
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
        }
        local_b0[0] = *(undefined4 *)(param_2 + 6);
        uVar4 = *(undefined4 *)(param_2 + 9);
        local_a8 = (void *)0x0;
        local_a0 = *(int *)(param_2 + 8);
        sVar8 = (size_t)local_a0;
        pvVar5 = (void *)param_2[7];
        if (sVar8 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1447a127e(&local_a8,local_a0,0);
          memcpy(local_a8,pvVar5,sVar8);
        }
        local_c8[0] = *(undefined4 *)(param_2 + 3);
        local_c0 = (void *)0x0;
        local_b8 = *(int *)(param_2 + 5);
        sVar8 = (size_t)local_b8;
        pvVar5 = (void *)param_2[4];
        if (sVar8 == 0) {
          local_b4 = 0;
        }
        else {
          FUN_1447a127e(&local_c0,local_b8,0);
          memcpy(local_c0,pvVar5,sVar8);
        }
        uVar3 = *(undefined1 *)(param_2 + 2);
        local_d8 = local_48;
        local_d0 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        local_e8 = local_b0;
        local_e0 = uVar4;
        FUN_146974ba4(&local_98,&local_d8,uVar3,local_c8);
        if ((*(int *)(param_1 + 0x18) != 0) &&
           (plVar6 = *(longlong **)(param_1 + 0x10), plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x60))(plVar6,&local_98);
        }
        FUN_146974cde(&local_98);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_40 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287884a FUN_14287884a body=69 status=ok
// SIG undefined FUN_14287884a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287884a(void)

{
  _DAT_14c98d820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014287888c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98d828,1);
  return;
}



// FUNCTION 142878890 FUN_142878890 body=1748 status=ok
// SIG undefined FUN_142878890(void)

void FUN_142878890(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  int local_a0;
  longlong local_98 [2];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar10 = iStack_a4;
  if (*(char *)(param_1 + 9) == '\x01') {
    if ((*(char *)(param_1 + 0x88) == '\x01') && (*(int *)(param_1 + 0x38) == 0)) {
      *(undefined1 *)(param_1 + 0x88) = 0;
      (**(code **)(*DAT_14c968098 + 0x40))(DAT_14c968098,&local_68);
      if (0 < (int)local_60) {
        do {
          lVar13 = local_68[((ulonglong)local_60 & 0xffffffff) * 2 + -2];
          plVar11 = (longlong *)local_68[((ulonglong)local_60 & 0xffffffff) * 2 + -1];
          if (plVar11 == (longlong *)0x0) {
            FUN_14697a44e(&local_68,(int)local_60 + -1);
            local_80 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            FUN_14697a44e(&local_68,(int)local_60 + -1);
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            local_80 = plVar11;
          }
          local_88 = lVar13;
          FUN_146974fce(&local_78,&local_88);
          iVar10 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar10 + 1U) {
            FUN_14697a544((longlong *)(param_1 + 0x30),iVar10);
          }
          lVar9 = *(longlong *)(param_1 + 0x30);
          local_c0 = local_78;
          local_b8 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
          }
          local_58 = lVar13;
          local_50 = plVar11;
          FUN_14697a4c4(lVar9 + (longlong)iVar10 * 0x20,&local_58,&local_c0);
          plVar15 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_70 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          plVar15 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_80 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          FUN_14697516a(&local_68,lVar13 + 0x600);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar11 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
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
        } while (0 < (int)local_60);
      }
      FUN_1401b439d(local_68);
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar10 = iStack_a4;
    if ((0 < *(int *)(param_1 + 0x38)) && (0 < DAT_14c75ed60)) {
      plVar11 = (longlong *)(param_1 + 0x30);
      iVar10 = 0;
      do {
        FUN_1469751ca(plVar11,&local_c0);
        if (((local_c0 != (longlong *)0x0) && (local_b8 != (longlong *)0x0)) &&
           (0 < (int)local_b8[1])) {
          iVar6 = (int)local_b8[1];
          do {
            if (iVar6 == 0) {
              plVar15 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar7 = (int)local_b8[1];
            bVar16 = iVar6 == iVar7;
            if (bVar16) {
              *(int *)(local_b8 + 1) = iVar6 + 1;
              iVar7 = iVar6;
            }
            iVar6 = iVar7;
            UNLOCK();
            plVar15 = local_b8;
          } while (!bVar16);
          plVar8 = (longlong *)0x0;
          if (plVar15 != (longlong *)0x0) {
            plVar8 = local_c0;
          }
          if ((*(byte *)((longlong)plVar8 + 0x32) & 4) != 0) {
            plVar8 = (longlong *)(**(code **)(*plVar8 + 0x180))();
            iVar6 = (**(code **)*plVar8)(plVar8);
            if (0 < iVar6) {
              iVar6 = 0;
              local_d8 = plVar8;
              local_d0 = plVar11;
              local_c8 = param_1;
              do {
                (**(code **)(*plVar8 + 0x10))(plVar8,&local_78,iVar6);
                if (*(char *)((longlong)local_78 + 0x33) == '\0') {
                  iVar7 = *(int *)(param_1 + 0x38);
                  *(uint *)(param_1 + 0x38) = iVar7 + 1U;
                  if (*(uint *)(param_1 + 0x3c) < iVar7 + 1U) {
                    FUN_14697a544(plVar11,iVar7);
                  }
                  lVar13 = *plVar11;
                  local_50 = (longlong *)CONCAT44(iStack_a4,local_a8);
                  local_58 = local_b0;
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                    UNLOCK();
                  }
                  local_68 = local_78;
                  local_60 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
                    UNLOCK();
                  }
                  FUN_14697a4c4(lVar13 + (longlong)iVar7 * 0x20,&local_68,&local_58);
                }
                else {
                  FUN_146974fce(&local_88,&local_78);
                  lVar13 = local_b0;
                  *(undefined4 *)(local_88 + 0x60) = *(undefined4 *)(local_b0 + 0x58);
                  local_98[0] = local_b0;
                  if (CONCAT44(iStack_a4,local_a8) != 0) {
                    LOCK();
                    piVar1 = (int *)(CONCAT44(iStack_a4,local_a8) + 8);
                    *piVar1 = *piVar1 + 1;
                    UNLOCK();
                  }
                  FUN_146975274(local_88,local_98);
                  plVar8 = local_80;
                  lVar9 = local_88;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
                    UNLOCK();
                  }
                  iVar7 = *(int *)(lVar13 + 0x58);
                  *(uint *)(lVar13 + 0x58) = iVar7 + 1U;
                  if (*(uint *)(lVar13 + 0x5c) < iVar7 + 1U) {
                    FUN_14697a5ca((longlong *)(lVar13 + 0x50),iVar7);
                  }
                  param_1 = local_c8;
                  plVar11 = local_d0;
                  lVar13 = *(longlong *)(lVar13 + 0x50);
                  *(longlong *)(lVar13 + (longlong)iVar7 * 0x10) = lVar9;
                  *(longlong **)(lVar13 + 8 + (longlong)iVar7 * 0x10) = plVar8;
                  iVar7 = *(int *)(local_c8 + 0x38);
                  *(uint *)(local_c8 + 0x38) = iVar7 + 1U;
                  if (*(uint *)(local_c8 + 0x3c) < iVar7 + 1U) {
                    FUN_14697a544(local_d0,iVar7);
                  }
                  plVar8 = local_d8;
                  lVar13 = *plVar11;
                  local_58 = local_88;
                  local_50 = local_80;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
                    UNLOCK();
                  }
                  local_68 = local_78;
                  local_60 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
                    UNLOCK();
                  }
                  FUN_14697a4c4(lVar13 + (longlong)iVar7 * 0x20,&local_68,&local_58);
                  plVar5 = local_80;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar3 = local_80 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*local_80)(local_80);
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
                plVar5 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_70 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_70)(local_70);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar5 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                iVar6 = iVar6 + 1;
                iVar7 = (**(code **)*plVar8)(plVar8);
              } while (iVar6 < iVar7);
            }
          }
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar15 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
        }
        FUN_1469755c0(&local_c0);
      } while ((0 < *(int *)(param_1 + 0x38)) && (iVar10 = iVar10 + 1, iVar10 < DAT_14c75ed60));
      iVar10 = iStack_a4;
      if ((*(int *)(param_1 + 0x38) == 0) &&
         (FUN_146975614(&local_c0), iVar10 = iStack_a4, iStack_a4 < *(int *)(local_b0 + 0x18))) {
        do {
          lVar13 = *(longlong *)(*local_c0 + 8 + (longlong)iStack_a4 * 0x20);
          plVar11 = *(longlong **)(*local_c0 + 0x10 + (longlong)iStack_a4 * 0x20);
          if (plVar11 == (longlong *)0x0) {
            FUN_1469756be(lVar13 + 0x40,lVar13 + 0x50);
          }
          else {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            FUN_1469756be(lVar13 + 0x40,lVar13 + 0x50);
            LOCK();
            plVar15 = plVar11 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
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
          local_a8 = ~local_b8._4_4_ & local_a8;
          lVar13 = *(longlong *)(local_b0 + 0x10);
          if (*(longlong *)(local_b0 + 0x10) == 0) {
            lVar13 = local_b0;
          }
          iVar6 = *(int *)(local_b0 + 0x18);
          lVar9 = (longlong)(int)local_b8;
          uVar12 = local_a8 & *(uint *)(lVar13 + lVar9 * 4);
          if (uVar12 == 0) {
            iVar7 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar7 = iVar6 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar4 = iVar7;
            if (iVar7 < (int)local_b8) {
              iVar4 = (int)local_b8;
            }
            iVar10 = iStack_a4;
            if (iVar7 <= (int)local_b8) break;
            lVar14 = 0;
            iVar7 = local_a0;
            while( true ) {
              iVar7 = iVar7 + 0x20;
              uVar12 = *(uint *)(lVar13 + lVar9 * 4 + 4 + lVar14 * 4);
              if (uVar12 != 0) break;
              lVar14 = lVar14 + 1;
              if (iVar4 - lVar9 == lVar14) goto LAB_142878df3;
            }
            local_b8 = (longlong *)(ulonglong)((int)local_b8 + (int)lVar14 + 1);
            local_a8 = 0xffffffff;
            local_a0 = iVar7;
          }
          local_b8 = (longlong *)CONCAT44(-uVar12 & uVar12,(int)local_b8);
          uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iStack_a4 = (local_a0 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          iVar10 = iVar6;
        } while (iStack_a4 < iVar6);
      }
    }
  }
LAB_142878df3:
  iStack_a4 = iVar10;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142878f65 FUN_142878f65 body=41 status=ok
// SIG undefined FUN_142878f65(void)

void FUN_142878f65(void)

{
  DAT_14c98d878 = 0;
  if (DAT_14c98d870 != 0) {
    FUN_1400020a8();
  }
  FUN_146199be8();
  return;
}



// FUNCTION 142878f8e FUN_142878f8e body=41 status=ok
// SIG undefined FUN_142878f8e(void)

void FUN_142878f8e(void)

{
  DAT_14c98d8c8 = 0;
  if (DAT_14c98d8c0 != 0) {
    FUN_1400020a8();
  }
  FUN_146199db6();
  return;
}



// FUNCTION 142878fb8 FUN_142878fb8 body=1578 status=ok
// SIG undefined FUN_142878fb8(void)

ulonglong FUN_142878fb8(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_2d8 [32];
  undefined1 *local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  undefined8 local_268;
  longlong local_260;
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [8];
  longlong *local_220;
  longlong local_208;
  longlong local_1f0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  longlong *local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198 [3];
  longlong local_180;
  longlong local_168;
  longlong **local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  cVar5 = FUN_146976238();
  if ((cVar5 == '\0') || (cVar5 = FUN_1469762a2(param_1), cVar5 != '\0')) {
    uVar10 = 0;
    goto LAB_142878feb;
  }
  cVar5 = FUN_146976310(param_1);
  if (cVar5 == '\0') {
    lVar8 = DAT_14c968098[0x19];
    plVar4 = (longlong *)DAT_14c968098[0x1a];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_14171d2aa(local_280,1);
    FUN_14171d2aa(local_298,0);
    local_2a0 = *(longlong *)(param_1 + 0x20);
    if (local_2a0 == 0) {
LAB_142879094:
      local_2a8 = 0;
      local_2a0 = 0;
    }
    else {
      iVar6 = *(int *)(local_2a0 + 8);
      do {
        if (iVar6 == 0) goto LAB_142879094;
        LOCK();
        iVar3 = *(int *)(local_2a0 + 8);
        bVar11 = iVar6 == iVar3;
        if (bVar11) {
          *(int *)(local_2a0 + 8) = iVar6 + 1;
          iVar3 = iVar6;
        }
        iVar6 = iVar3;
        UNLOCK();
      } while (!bVar11);
      local_2a8 = *(undefined8 *)(param_1 + 0x18);
    }
    local_2b8 = local_280;
    local_2b0 = param_2;
    FUN_14171f2ba(local_1a0,&local_2a8,0,local_298);
    FUN_1428785ec(lVar8,local_1a0);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_180 != 0) {
      FUN_1400020a8();
    }
    if (local_198[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_198[0] + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_198[0])(local_198[0]);
        LOCK();
        piVar2 = (int *)((longlong)local_198[0] + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_198[0] + 0x10))(local_198[0]);
        }
      }
    }
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar4 == (longlong *)0x0) goto LAB_142878feb;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_142878feb;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_142878feb;
    lVar8 = *plVar4;
    local_1a8 = plVar4;
  }
  else {
    FUN_146975a04(param_1,&local_1b0);
    plVar4 = local_1a8;
    uVar10 = 0;
    if (local_1b0 != 0) {
      local_1c8 = (longlong *)0x0;
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
        UNLOCK();
      }
      uVar10 = 0;
      uStack_1c0 = 1;
      FUN_1413f6722(&local_1c8,0);
      *local_1c8 = local_1b0;
      local_1c8[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
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
      local_1a0[0] = DAT_14c96b238;
      local_78 = (longlong **)0x0;
      local_70 = 0x400000000;
      local_68 = 0;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      local_50 = 0;
      uStack_48 = 0;
      plVar4 = *(longlong **)(param_1 + 0x20);
      if (plVar4 == (longlong *)0x0) {
LAB_142879343:
        local_1d8 = 0;
        plStack_1d0 = (longlong *)0x0;
        cVar5 = FUN_1407c4db4(&local_1c8,&local_1d8,local_1a0);
        plVar4 = DAT_14c968098;
      }
      else {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_142879343;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar11 = iVar6 == iVar3;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar3 = iVar6;
          }
          iVar6 = iVar3;
          UNLOCK();
        } while (!bVar11);
        local_1d8 = *(undefined8 *)(param_1 + 0x18);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        plStack_1d0 = plVar4;
        uVar7 = FUN_1407c4db4(&local_1c8,&local_1d8,local_1a0);
        uVar10 = (ulonglong)uVar7;
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
        cVar5 = (char)uVar7;
        plVar4 = DAT_14c968098;
      }
      DAT_14c968098 = plVar4;
      if (cVar5 == '\0') {
        FUN_1447fa2ac(local_50,uStack_48 & 0xffffffff);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        plVar4 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_58)(plStack_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        pplVar9 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar9 = local_198;
        }
        FUN_1447157bd(pplVar9,local_70 & 0xffffffff);
        if (local_78 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_1401b439d(local_1c8,uStack_1c0 & 0xffffffff);
        if (local_1c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar4 + 0x150))(plVar4,param_2,local_1a0,2);
        if (cVar5 == '\0') {
          lVar8 = plVar4[0x19];
          plVar4 = (longlong *)plVar4[0x1a];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          FUN_14171d2aa(local_240,1);
          FUN_14171d2aa(local_258,0);
          local_260 = *(longlong *)(param_1 + 0x20);
          if (local_260 == 0) {
LAB_1428793f1:
            local_268 = 0;
            local_260 = 0;
          }
          else {
            iVar6 = *(int *)(local_260 + 8);
            do {
              if (iVar6 == 0) goto LAB_1428793f1;
              LOCK();
              iVar3 = *(int *)(local_260 + 8);
              bVar11 = iVar6 == iVar3;
              if (bVar11) {
                *(int *)(local_260 + 8) = iVar6 + 1;
                iVar3 = iVar6;
              }
              iVar6 = iVar3;
              UNLOCK();
            } while (!bVar11);
            local_268 = *(undefined8 *)(param_1 + 0x18);
          }
          local_2b8 = local_240;
          local_2b0 = param_2;
          FUN_14171f2ba(local_228,&local_268,0,local_258);
          FUN_1428785ec(lVar8,local_228);
          if (local_1f0 != 0) {
            FUN_1400020a8();
          }
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_220 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar2 = (int *)((longlong)local_220 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_220 + 0x10))(local_220);
              }
            }
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
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
        }
        FUN_1447fa2ac(local_50,uStack_48 & 0xffffffff);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        plVar4 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_58 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_58)(plStack_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        pplVar9 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar9 = local_198;
        }
        FUN_1447157bd(pplVar9,local_70 & 0xffffffff);
        if (local_78 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_1401b439d(local_1c8,uStack_1c0 & 0xffffffff);
        if (local_1c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
      }
    }
    if (local_1a8 == (longlong *)0x0) goto LAB_142878feb;
    LOCK();
    plVar4 = local_1a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_142878feb;
    (**(code **)*local_1a8)(local_1a8);
    LOCK();
    piVar2 = (int *)((longlong)local_1a8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 != 0) goto LAB_142878feb;
    lVar8 = *local_1a8;
  }
  (**(code **)(lVar8 + 0x10))(local_1a8);
LAB_142878feb:
  if ((local_40 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428795e4 FUN_1428795e4 body=783 status=ok
// SIG undefined FUN_1428795e4(void)

longlong * FUN_1428795e4(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) && (*(longlong *)(param_1 + -0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + -0x48) + 8))) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_14697b7a6(&local_98,10);
    uVar8 = uStack_90;
    plVar14 = *(longlong **)(param_1 + -0x58);
    bVar6 = true;
    if (plVar14 == (longlong *)0x0) {
LAB_1428796a9:
      uVar13 = 0;
      plVar14 = (longlong *)0x0;
    }
    else {
      iVar11 = (int)plVar14[1];
      do {
        if (iVar11 == 0) goto LAB_1428796a9;
        LOCK();
        iVar12 = (int)plVar14[1];
        bVar16 = iVar11 == iVar12;
        if (bVar16) {
          *(int *)(plVar14 + 1) = iVar11 + 1;
          iVar12 = iVar11;
        }
        iVar11 = iVar12;
        UNLOCK();
      } while (!bVar16);
      uVar13 = *(undefined8 *)(param_1 + -0x60);
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      bVar6 = false;
    }
    lVar15 = (longlong)(int)uStack_90;
    uVar10 = (int)uStack_90 + 1;
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
    if (uStack_90._4_4_ < uVar10) {
      FUN_14697b806(&local_98,uVar8 & 0xffffffff);
    }
    *(undefined8 *)(local_98 + lVar15 * 0x10) = uVar13;
    *(longlong **)(local_98 + 8 + lVar15 * 0x10) = plVar14;
    if (!bVar6) {
      LOCK();
      plVar4 = plVar14 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (0 < (int)uStack_90) {
      do {
        lVar15 = (uStack_90 & 0xffffffff) * 0x10;
        plVar14 = *(longlong **)(local_98 + -0x10 + lVar15);
        plVar4 = *(longlong **)(local_98 + -8 + lVar15);
        puVar3 = (undefined8 *)(local_98 + -0x10 + lVar15);
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_14697b88c(&local_98,(int)uStack_90 + -1);
        if ((((plVar14 != (longlong *)0x0) &&
             (cVar9 = (**(code **)(*plVar14 + 0x90))(plVar14), cVar9 == '\0')) &&
            (((**(code **)(*plVar14 + 0x20))(plVar14,&local_c0), uVar8 = uStack_90,
             local_c0 < (double)param_3 &&
             (((double)param_3 < local_b0 && (local_b8 < (double)param_4)))))) &&
           ((double)param_4 < local_a8)) {
          FUN_14692914e(local_98,uStack_90 & 0xffffffff);
          uVar7 = uStack_90 >> 0x20;
          uStack_90 = uStack_90 & 0xffffffff00000000;
          if (((longlong)uVar8 < 0) && ((int)uVar7 != 0)) {
            FUN_14697b7a6(&local_98,0);
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          plVar5 = (longlong *)param_2[1];
          *param_2 = (longlong)plVar14;
          param_2[1] = (longlong)plVar4;
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
          iVar11 = (**(code **)(*plVar14 + 0x58))(plVar14);
          if (0 < iVar11) {
            iVar12 = 0;
            do {
              (**(code **)(*plVar14 + 0x50))(plVar14,&local_c0,iVar12);
              uVar8 = uStack_90;
              lVar15 = (longlong)(int)uStack_90;
              uVar10 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
              if (uStack_90._4_4_ < uVar10) {
                FUN_14697b806(&local_98,uVar8 & 0xffffffff);
              }
              *(double *)(local_98 + lVar15 * 0x10) = local_c0;
              *(double *)(local_98 + 8 + lVar15 * 0x10) = local_b8;
              iVar12 = iVar12 + 1;
            } while (iVar11 != iVar12);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar4 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
      } while (0 < (int)uStack_90);
    }
    FUN_14692914e(local_98);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1428798f4 FUN_1428798f4 body=69 status=ok
// SIG undefined FUN_1428798f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428798f4(void)

{
  _DAT_14c98d8d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142879936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98d8e0,1);
  return;
}



// FUNCTION 14287997e FUN_14287997e body=509 status=ok
// SIG undefined FUN_14287997e(void)

void FUN_14287997e(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x208) == 0) {
    if ((longlong)*(int *)(param_1 + 0x200) < 1) {
      dVar6 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar5 = 0.0;
      lVar4 = 0;
      dVar6 = 0.0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar4 * 8);
        lVar2 = *(longlong *)(lVar1 + 0x10);
        if (*(char *)(lVar2 + 0x39) != DAT_14c96b1e1) {
          pfVar3 = (float *)(lVar2 + 0x168);
          if ((*(byte *)(lVar2 + 0x31) & 0x20) == 0) {
            pfVar3 = (float *)&DAT_14c84635c;
          }
          fVar7 = *(float *)(lVar1 + 0x4c);
          if (fVar7 <= 0.0 || fVar7 <= *pfVar3) {
            fVar7 = *pfVar3;
          }
          fVar9 = *(float *)(lVar1 + 0x50);
          if (fVar9 <= 0.0 || fVar7 <= fVar9) {
            fVar9 = fVar7;
          }
          dVar8 = (double)(*(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x34) + pfVar3[1]);
          if (dVar5 <= dVar8) {
            dVar5 = dVar8;
          }
          dVar6 = dVar6 + (double)(*(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x30) + fVar9);
        }
        lVar4 = lVar4 + 1;
      } while (*(int *)(param_1 + 0x200) != lVar4);
    }
    param_2[1] = dVar5;
    *param_2 = dVar6;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x200) < 1) {
      dVar6 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar5 = 0.0;
      lVar4 = 0;
      dVar6 = 0.0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar4 * 8);
        lVar2 = *(longlong *)(lVar1 + 0x10);
        if (*(char *)(lVar2 + 0x39) != DAT_14c96b1e1) {
          pfVar3 = (float *)(lVar2 + 0x168);
          if ((*(byte *)(lVar2 + 0x31) & 0x20) == 0) {
            pfVar3 = (float *)&DAT_14c84635c;
          }
          fVar7 = *(float *)(lVar1 + 0x4c);
          if (fVar7 <= 0.0 || fVar7 <= pfVar3[1]) {
            fVar7 = pfVar3[1];
          }
          fVar9 = *(float *)(lVar1 + 0x50);
          if (fVar9 <= 0.0 || fVar7 <= fVar9) {
            fVar9 = fVar7;
          }
          dVar8 = (double)(*(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x30) + *pfVar3);
          if (dVar5 <= dVar8) {
            dVar5 = dVar8;
          }
          dVar6 = dVar6 + (double)(*(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x34) + fVar9);
        }
        lVar4 = lVar4 + 1;
      } while (*(int *)(param_1 + 0x200) != lVar4);
    }
    *param_2 = dVar5;
    param_2[1] = dVar6;
  }
  return;
}



// FUNCTION 142879b84 FUN_142879b84 body=59 status=ok
// SIG undefined FUN_142879b84(void)

void FUN_142879b84(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98d9a0;
  if (DAT_14c98d9a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98d9a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142879bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142879bbf FUN_142879bbf body=59 status=ok
// SIG undefined FUN_142879bbf(void)

void FUN_142879bbf(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98ded0;
  if (DAT_14c98ded0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98ded0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142879bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142879c28 FUN_142879c28 body=68 status=ok
// SIG undefined FUN_142879c28(void)

void FUN_142879c28(void)

{
  if (DAT_14c98d9d0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98d9b0,DAT_14c98d9b8);
  if (DAT_14c98d9b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879c6c FUN_142879c6c body=68 status=ok
// SIG undefined FUN_142879c6c(void)

void FUN_142879c6c(void)

{
  if (DAT_14c98def8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98ded8,DAT_14c98dee0);
  if (DAT_14c98ded8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879cb0 FUN_142879cb0 body=68 status=ok
// SIG undefined FUN_142879cb0(void)

void FUN_142879cb0(void)

{
  if (DAT_14c98df38 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98df18,DAT_14c98df20);
  if (DAT_14c98df18 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879cf4 FUN_142879cf4 body=68 status=ok
// SIG undefined FUN_142879cf4(void)

void FUN_142879cf4(void)

{
  if (DAT_14c98dfb8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98df98,DAT_14c98dfa0);
  if (DAT_14c98df98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879d38 FUN_142879d38 body=68 status=ok
// SIG undefined FUN_142879d38(void)

void FUN_142879d38(void)

{
  if (DAT_14c98dff8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98dfd8,DAT_14c98dfe0);
  if (DAT_14c98dfd8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879d7c FUN_142879d7c body=68 status=ok
// SIG undefined FUN_142879d7c(void)

void FUN_142879d7c(void)

{
  if (DAT_14c98e038 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98e018,DAT_14c98e020);
  if (DAT_14c98e018 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879dc0 FUN_142879dc0 body=68 status=ok
// SIG undefined FUN_142879dc0(void)

void FUN_142879dc0(void)

{
  if (DAT_14c98da10 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98d9f0,DAT_14c98d9f8);
  if (DAT_14c98d9f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879e22 FUN_142879e22 body=59 status=ok
// SIG undefined FUN_142879e22(void)

longlong FUN_142879e22(longlong param_1,int param_2)

{
  FUN_140d33455(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142879e5d FUN_142879e5d body=68 status=ok
// SIG undefined FUN_142879e5d(void)

void FUN_142879e5d(void)

{
  if (DAT_14c98df78 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98df58,DAT_14c98df60);
  if (DAT_14c98df58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879ea2 FUN_142879ea2 body=39 status=ok
// SIG undefined FUN_142879ea2(void)

longlong FUN_142879ea2(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142879eca FUN_142879eca body=39 status=ok
// SIG undefined FUN_142879eca(void)

longlong FUN_142879eca(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142879ef2 FUN_142879ef2 body=39 status=ok
// SIG undefined FUN_142879ef2(void)

longlong FUN_142879ef2(longlong param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x18);
  }
  return param_1 + -0x18;
}



// FUNCTION 142879f25 FUN_142879f25 body=68 status=ok
// SIG undefined FUN_142879f25(void)

void FUN_142879f25(void)

{
  if (DAT_14c98de58 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c98de38,DAT_14c98de40);
  if (DAT_14c98de38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142879f92 FUN_142879f92 body=59 status=ok
// SIG undefined FUN_142879f92(void)

longlong FUN_142879f92(longlong param_1,int param_2)

{
  FUN_140cc7497(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142879fce FUN_142879fce body=318 status=ok
// SIG undefined FUN_142879fce(void)

undefined8 FUN_142879fce(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar6 = (ulonglong)param_2 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0xaaa) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar2) {
            uVar8 = (ulonglong)bVar2;
          }
          uVar10 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14287a033;
            lVar1 = uVar8 + 1 + uVar10;
            uVar10 = uVar10 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0xffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
    }
  }
LAB_14287a033:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  iVar7 = (int)(uVar6 / 0xc);
  iVar9 = 0x7fffffff;
  if ((int)param_2 <= iVar7) {
    iVar9 = iVar7;
  }
  if (iVar9 != *(int *)(param_1 + 0x18c)) {
    *(int *)(param_1 + 0x18c) = iVar9;
    uVar5 = FUN_14287a10c(param_1,*(undefined4 *)(param_1 + 0x188));
    return uVar5;
  }
  return SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
}



// FUNCTION 14287a10c FUN_14287a10c body=149 status=ok
// SIG undefined FUN_14287a10c(void)

void FUN_14287a10c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0xc);
  return;
}



// FUNCTION 14287a1a2 FUN_14287a1a2 body=356 status=ok
// SIG undefined FUN_14287a1a2(void)

void FUN_14287a1a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x188);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  iVar8 = 0x20;
  if (0x20 < uVar3) {
    lVar4 = (longlong)(int)uVar3;
    if (0x20 < *(uint *)(param_1 + 0x18c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14287a23e;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14287a23e:
    iVar6 = (int)(uVar5 / 0xc);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0x18c) = iVar8;
  FUN_14287a10c(param_1,param_2);
  return;
}



// FUNCTION 14287a306 FUN_14287a306 body=177 status=ok
// SIG undefined FUN_14287a306(void)

undefined8 * FUN_14287a306(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149eeff80;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) == 0) {
LAB_14287a34f:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 6) = 0;
      goto LAB_14287a34f;
    }
  }
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14287a392;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14287a392:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14287a3cc FUN_14287a3cc body=135 status=ok
// SIG undefined FUN_14287a3cc(void)

void FUN_14287a3cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eeff80;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_140a599b2(puVar1 + 3,param_1 + 0x18);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_140a599b2(puVar1 + 5,param_1 + 0x28);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}



// FUNCTION 14287a454 FUN_14287a454 body=135 status=ok
// SIG undefined FUN_14287a454(void)

void FUN_14287a454(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ef0aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149eeff80;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_140a599b2(puVar1 + 3,param_1 + 0x18);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_140a599b2(puVar1 + 5,param_1 + 0x28);
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
  return;
}



// FUNCTION 14287a4dc FUN_14287a4dc body=178 status=ok
// SIG undefined FUN_14287a4dc(void)

void FUN_14287a4dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ef0aa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149eeff80;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_140a599b2(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_140a599b2(&p_Var1->Flags,param_1 + 0x28);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014287a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14287a598 FUN_14287a598 body=20 status=ok
// SIG undefined FUN_14287a598(void)

undefined1 FUN_14287a598(longlong param_1)

{
  FUN_14287a5ac(param_1 + 0x18);
  return 1;
}



// FUNCTION 14287a5ac FUN_14287a5ac body=129 status=ok
// SIG undefined FUN_14287a5ac(void)

void FUN_14287a5ac(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (((int)param_1[4] == 2) &&
     (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0 && (int)param_1[1] != 0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0 && (int)param_1[3] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  if (((int)param_1[4] == 1) &&
     (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0 && (int)param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014287a62a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14287a62e FUN_14287a62e body=99 status=ok
// SIG undefined FUN_14287a62e(void)

void FUN_14287a62e(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14287a692 FUN_14287a692 body=450 status=ok
// SIG undefined FUN_14287a692(void)

void FUN_14287a692(undefined8 *param_1,uint param_2)

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
LAB_14287a7ad:
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
LAB_14287a7ea:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14287a6e8;
LAB_14287a6dd:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14287a6e8:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014287a714;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14287a76a:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14287a7ea;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14287a7ad;
code_r0x00014287a714:
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
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14287a76a;
    }
  }
  goto LAB_14287a6dd;
}



// FUNCTION 14287a854 FUN_14287a854 body=207 status=ok
// SIG undefined FUN_14287a854(void)

void FUN_14287a854(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0x10;
  if (0x10 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (iVar4 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = iVar4;
  FUN_14287a924(param_1,*(undefined4 *)(param_1 + 0x208));
  return;
}



// FUNCTION 14287a924 FUN_14287a924 body=141 status=ok
// SIG undefined FUN_14287a924(void)

void FUN_14287a924(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 14287a9b2 FUN_14287a9b2 body=233 status=ok
// SIG undefined FUN_14287a9b2(void)

void FUN_14287a9b2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      uVar3 = (ulonglong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      iVar2 = (int)(uVar4 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_14287a924(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14287aa9c FUN_14287aa9c body=141 status=ok
// SIG undefined FUN_14287aa9c(void)

void FUN_14287aa9c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,0x20);
  return;
}



// FUNCTION 14287ab2a FUN_14287ab2a body=233 status=ok
// SIG undefined FUN_14287ab2a(void)

void FUN_14287ab2a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      uVar3 = (ulonglong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x20c)) {
        uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      iVar2 = (int)(uVar4 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_14287aa9c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14287ac1e FUN_14287ac1e body=66 status=ok
// SIG undefined FUN_14287ac1e(void)

void FUN_14287ac1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ef0850;
  FUN_140d33455(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14287ac60 FUN_14287ac60 body=1403 status=ok
// SIG undefined FUN_14287ac60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287ac60(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 1;
  local_60 = &PTR_FUN_149eec940;
  local_68 = 2;
  FUN_14282b410(L"/Script/SlateCore",&PTR_FUN_149eec9b0,1,&PTR_FUN_149eec960);
  DAT_14c98db34 = 0;
  _DAT_14c98db24 = 0;
  uRam000000014c98db2c = 0;
  _DAT_14c98da98 = 0;
  uRam000000014c98daa0 = 0;
  DAT_14c98daa8._0_2_ = 1;
  _DAT_14c98dc8c = 0;
  uRam000000014c98dc94 = 0;
  _DAT_14c98dc9c = 0x201;
  _DAT_14c98dc64 = 0;
  uRam000000014c98dc6c = 0;
  _DAT_14c98dc74 = 0x301;
  _DAT_14c98dbd8 = 0;
  uRam000000014c98dbe0 = 0;
  _DAT_14c98dbe8 = 0x401;
  _DAT_14c98dc00 = 0;
  uRam000000014c98dc08 = 0;
  _DAT_14c98dc10 = 0x501;
  _DAT_14c98dc28 = 0;
  uRam000000014c98dc30 = 0;
  _DAT_14c98dc38 = 0x601;
  _DAT_14c98dc14 = 0;
  uRam000000014c98dc1c = 0;
  DAT_14c98dc24._0_2_ = 0x701;
  _DAT_14c98dc50 = 0;
  uRam000000014c98dc58 = 0;
  _DAT_14c98dc60 = 0x101;
  _DAT_14c98db9c = 0;
  uRam000000014c98dba4 = 0;
  _DAT_14c98dbac = 0x801;
  _DAT_14c98dc78 = 0;
  uRam000000014c98dc80 = 0;
  _DAT_14c98dc88 = 0x901;
  _DAT_14c98dbc4 = 0;
  uRam000000014c98dbcc = 0;
  _DAT_14c98dbd4 = 0xa01;
  _DAT_14c98dbb0 = 0;
  uRam000000014c98dbb8 = 0;
  _DAT_14c98dbc0 = 0xb01;
  _DAT_14c98dae8 = 0;
  uRam000000014c98daf0 = 0;
  _DAT_14c98daf8 = 0xc01;
  _DAT_14c98dafc = 0;
  uRam000000014c98db04 = 0;
  _DAT_14c98db0c = 0xd01;
  _DAT_14c98db4c = 0;
  uRam000000014c98db54 = 0;
  DAT_14c98db5c._0_2_ = 0xe01;
  _DAT_14c98dca0 = 0;
  uRam000000014c98dca8 = 0;
  DAT_14c98dcb0._0_2_ = 0xf01;
  _DAT_14c98da84 = 0;
  uRam000000014c98da8c = 0;
  DAT_14c98da94._0_2_ = 0x1001;
  _DAT_14c98db10 = 0;
  uRam000000014c98db18 = 0;
  DAT_14c98db20._0_2_ = 0x1101;
  _DAT_14c98dbec = 0;
  uRam000000014c98dbf4 = 0;
  _DAT_14c98dbfc = 0x1201;
  _DAT_14c98dd18 = 0;
  uRam000000014c98dd20 = 0;
  _DAT_14c98dd28 = 0x1301;
  _DAT_14c98dc3c = 0;
  uRam000000014c98dc44 = 0;
  _DAT_14c98dc4c = 0x1401;
  _DAT_14c98dac0 = 0;
  uRam000000014c98dac8 = 0;
  DAT_14c98dad0._0_2_ = 0x1501;
  _DAT_14c98db38 = 0;
  uRam000000014c98db40 = 0;
  DAT_14c98db48._0_2_ = 0x1601;
  _DAT_14c98dad4 = 0;
  uRam000000014c98dadc = 0;
  DAT_14c98dae4._0_2_ = 0x1701;
  _DAT_14c98dcb4 = 0;
  uRam000000014c98dcbc = 0;
  _DAT_14c98dcc4 = 0x1801;
  _DAT_14c98dcc8 = 0;
  uRam000000014c98dcd0 = 0;
  _DAT_14c98dcd8 = 0x1901;
  _DAT_14c98dcdc = 0;
  uRam000000014c98dce4 = 0;
  _DAT_14c98dcec = 0x1a01;
  _DAT_14c98dcf0 = 0;
  uRam000000014c98dcf8 = 0;
  _DAT_14c98dd00 = 0x1b01;
  _DAT_14c98dd04 = 0;
  uRam000000014c98dd0c = 0;
  _DAT_14c98dd14 = 0x1c01;
  _DAT_14c98de98 = 0;
  _DAT_14c98dea0 = 0;
  DAT_14c98dea8._0_2_ = 0x1d01;
  _DAT_14c98dd2c = 0;
  uRam000000014c98dd34 = 0;
  DAT_14c98dd3c._0_2_ = 0x1e01;
  _DAT_14c98dd40 = 0;
  uRam000000014c98dd48 = 0;
  DAT_14c98dd50._0_2_ = 0x1f01;
  _DAT_14c98dd54 = 0;
  uRam000000014c98dd5c = 0;
  DAT_14c98dd64._0_2_ = 0x2001;
  _DAT_14c98dd68 = 0;
  uRam000000014c98dd70 = 0;
  DAT_14c98dd78._0_2_ = 0x2101;
  _DAT_14c98dd7c = 0;
  uRam000000014c98dd84 = 0;
  DAT_14c98dd8c._0_2_ = 0x2201;
  _DAT_14c98dd90 = 0;
  uRam000000014c98dd98 = 0;
  DAT_14c98dda0._0_2_ = 0x2301;
  _DAT_14c98daac = 0;
  uRam000000014c98dab4 = 0;
  DAT_14c98dabc._0_2_ = 0x2401;
  _DAT_14c98dda4 = 0;
  uRam000000014c98ddac = 0;
  DAT_14c98ddb4._0_2_ = 0x2501;
  _DAT_14c98ddb8 = 0;
  uRam000000014c98ddc0 = 0;
  DAT_14c98ddc8._0_2_ = 0x2601;
  _DAT_14c98ddcc = 0;
  uRam000000014c98ddd4 = 0;
  DAT_14c98dddc._0_2_ = 0x2701;
  _DAT_14c98dde0 = 0;
  uRam000000014c98dde8 = 0;
  DAT_14c98ddf0._0_2_ = 0x2801;
  _DAT_14c98ddf4 = 0;
  uRam000000014c98ddfc = 0;
  DAT_14c98de04._0_2_ = 0x2901;
  _DAT_14c98db74 = 0;
  uRam000000014c98db7c = 0;
  DAT_14c98db84._0_2_ = 0x2a01;
  _DAT_14c98db60 = 0;
  uRam000000014c98db68 = 0;
  DAT_14c98db70._0_2_ = 0x2b01;
  _DAT_14c98db88 = 0;
  uRam000000014c98db90 = 0;
  DAT_14c98db98._0_2_ = 0x2c01;
  _DAT_14c98de88 = 0;
  uRam000000014c98de90 = 0;
  _DAT_14c98de28 = 0;
  _DAT_14c98de18 = 0;
  uRam000000014c98de20 = 0;
  _DAT_14c98de74 = 0x3f800000;
  uRam000000014c98de78 = 0;
  uRam000000014c98de7c = 0x3f800000;
  uRam000000014c98de80 = 0x3f800000;
  _DAT_14c98de84 = 2;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/SlateCore",0,0,&PTR_FUN_149eed680);
  FUN_1446f470e(&DAT_14c98de30,L"FToolbarStyle",1);
  DAT_14c98de08 = 0;
  DAT_14c98de10 = 0;
  atexit(FUN_142877c68);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c98d820,L"Slate.AccessibleWidgetsProcessedPerTick",&DAT_14c75ed60,
                L"To reduce performance spikes, generating the accessible widget tree is limited to this many widgets per tick to update."
               );
  atexit(FUN_14287884a);
  DAT_14c98d850 = 0;
  DAT_14c98d858 = 0;
  DAT_14c98d830 = 0;
  _DAT_14c98d838 = 0;
  _DAT_14c98d85c = 0xffffffff00000080;
  DAT_14c98d864 = 0;
  DAT_14c98d870 = 0;
  DAT_14c98d878 = 0;
  atexit(FUN_142878f65);
  DAT_14c98d8a0 = 0;
  DAT_14c98d8a8 = 0;
  DAT_14c98d880 = 0;
  _DAT_14c98d888 = 0;
  _DAT_14c98d8ac = 0xffffffff00000080;
  DAT_14c98d8b4 = 0;
  DAT_14c98d8c0 = 0;
  DAT_14c98d8c8 = 0;
  atexit(FUN_142878f8e);
  local_40 = (char *)((ulonglong)local_40._4_4_ << 0x20);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c98d8d8,L"Slate.EnableSlateWidgetTracker",&local_40,
                L"Whether or not we enable the tracking of widgets via the Slate Widget Tracker.");
  atexit(FUN_1428798f4);
  FUN_140a557b6();
  FUN_145c28382();
  FUN_145c2822c();
  FUN_140fb9788();
  FUN_14627de32();
  FUN_140a56032();
  FUN_145edab58(&DAT_14c98dec8);
  atexit(FUN_142879bbf);
  FUN_145edab58(&local_50);
  _DAT_14c98deb0 = &PTR__purecall_149ef0700;
  _DAT_14c98deb8 = local_50;
  local_40 = "Children";
  local_38 = 8;
  local_34 = 0;
  uVar3 = FUN_14001a6c0(&local_40,1);
  _DAT_14c98dec0 = (ulonglong)uVar3;
  _DAT_14c98deb0 = &PTR_LAB_149eefea0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  FUN_14094e2ba();
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287b1dc FUN_14287b1dc body=47 status=ok
// SIG undefined FUN_14287b1dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287b1dc(void)

{
  _DAT_14c98e0a0 = 0;
  if (DAT_14c98e098 != 0) {
    FUN_1400020a8();
  }
  FUN_145e370f8(&DAT_14c98e058);
  return;
}



// FUNCTION 14287b20b FUN_14287b20b body=47 status=ok
// SIG undefined FUN_14287b20b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287b20b(void)

{
  _DAT_14c98e0f8 = 0;
  if (DAT_14c98e0f0 != 0) {
    FUN_1400020a8();
  }
  FUN_145e370f8(&DAT_14c98e0b0);
  return;
}



// FUNCTION 14287b23a FUN_14287b23a body=69 status=ok
// SIG undefined FUN_14287b23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287b23a(void)

{
  _DAT_14c98e108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014287b27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e110,1);
  return;
}



// FUNCTION 14287b282 FUN_14287b282 body=69 status=ok
// SIG undefined FUN_14287b282(void)

undefined1 * FUN_14287b282(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14287b2c8 FUN_14287b2c8 body=69 status=ok
// SIG undefined FUN_14287b2c8(void)

undefined1 * FUN_14287b2c8(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14287b30e FUN_14287b30e body=69 status=ok
// SIG undefined FUN_14287b30e(void)

undefined1 * FUN_14287b30e(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14287b372 FUN_14287b372 body=1 status=ok
// SIG undefined FUN_14287b372(void)

void FUN_14287b372(void)

{
  return;
}



// FUNCTION 14287b374 FUN_14287b374 body=52 status=ok
// SIG undefined FUN_14287b374(void)

void FUN_14287b374(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_2 + 0x20));
  if (lVar1 != 0) {
    FUN_14287b3a8(param_2,*(undefined8 *)(lVar1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 14287b3a8 FUN_14287b3a8 body=303 status=ok
// SIG undefined FUN_14287b3a8(void)

void FUN_14287b3a8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = FUN_14007026e(&DAT_14c967f20,(int)param_1[4]);
  if (lVar6 != 0) {
    param_2 = *(longlong *)(param_1[3] + 0x58);
    FUN_14693080e(lVar6,param_1);
  }
  uVar3 = DAT_14c967f78;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (param_2 != 0) {
    FUN_146948928(param_2,param_1);
  }
  FUN_1428693e8(param_1 + 0x29);
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
  iVar5 = (**(code **)*plVar7)(plVar7);
  if (0 < iVar5) {
    iVar8 = 0;
    do {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_50,iVar8);
      FUN_14287b3a8(local_40,param_2);
      plVar4 = local_48;
      if ((local_50 != 0) && (local_48 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287b4d8 FUN_14287b4d8 body=354 status=ok
// SIG undefined FUN_14287b4d8(void)

void FUN_14287b4d8(longlong *param_1,byte *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  byte bVar8;
  undefined1 auStack_88 [39];
  byte local_61;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar8 = (DAT_14c96b1e1 == *(byte *)((longlong)param_1 + 0x39)) << 3 |
          ((*param_2 & 0xc) != 0) << 2 |
          ((*(byte *)((longlong)param_1 + 0x39) & 0x19) != 0) * '\x02' | (~*param_2 & 3) == 0;
  cVar4 = FUN_1400d1184(param_1 + 3,param_1);
  if (cVar4 != '\0') {
    param_3 = *(longlong *)(param_1[3] + 0x58);
    *(byte *)(*(longlong *)
               (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
               (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)) + 0x15 +
             (ulonglong)(*(uint *)(param_1 + 5) >> 0x10) * 0x18) = bVar8;
  }
  if (param_3 != 0) {
    FUN_146948928(param_3,param_1);
  }
  FUN_146953710(param_1 + 0x29);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
  iVar5 = (**(code **)*plVar6)(plVar6);
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_60,iVar7);
      local_61 = bVar8;
      FUN_14287b4d8(local_50,&local_61,param_3);
      plVar3 = local_58;
      if ((local_60 != 0) && (local_58 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar5 != iVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287b63c FUN_14287b63c body=374 status=ok
// SIG undefined FUN_14287b63c(void)

void FUN_14287b63c(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  byte bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined7 uVar10;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar11 = *(byte *)(param_1 + 6);
  bVar3 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 6) = bVar11 & 0xbf | param_2 << 6;
  if ((bVar11 & 0x20) == 0 || param_2 != '\0') {
    bVar11 = bVar3 & 0xbf | 0x10;
    *(byte *)(param_1 + 7) = bVar11;
    if (((bVar3 | 0x10) == bVar11) || (((bVar3 & 0xcc) != 0) == ((bVar3 & 0x8c) != 0)))
    goto LAB_14287b6be;
  }
  else {
    *(byte *)(param_1 + 7) = bVar3 | 0x40;
    if ((bVar3 == (bVar3 | 0x40)) || ((bVar3 & 0xcc) != 0)) goto LAB_14287b6be;
  }
  cVar5 = FUN_1400d1184(param_1 + 3,param_1);
  if (cVar5 != '\0') {
    FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                  (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                   (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
  }
LAB_14287b6be:
  uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar9 = CONCAT71(uVar10,1);
  if (param_2 == '\0') {
    uVar9 = CONCAT71(uVar10,(char)param_1[6]) & 0xffffffffffffff20;
    uVar9 = CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 5);
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x188))(param_1);
  iVar6 = (**(code **)*plVar7)(plVar7);
  if (0 < iVar6) {
    iVar8 = 0;
    do {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_50,iVar8);
      FUN_14287b63c(local_40,uVar9 & 0xffffffff);
      plVar4 = local_48;
      if ((local_50 != 0) && (local_48 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar6 != iVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14287b7b4 FUN_14287b7b4 body=225 status=ok
// SIG undefined FUN_14287b7b4(void)

undefined8 FUN_14287b7b4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  plVar2 = DAT_14c968098;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14287b847:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    (**(code **)(*plVar2 + 400))(plVar2,param_2);
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14287b847;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    uVar5 = *(undefined8 *)(param_1 + 8);
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
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = uVar5;
    plStack_30 = plVar4;
    (**(code **)(*plVar2 + 400))(plVar2,param_2);
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14287b896 FUN_14287b896 body=8 status=ok
// SIG undefined FUN_14287b896(void)

longlong FUN_14287b896(longlong param_1)

{
  return param_1 + 0xd0;
}



// FUNCTION 14287b89e FUN_14287b89e body=679 status=ok
// SIG undefined FUN_14287b89e(void)

void FUN_14287b89e(longlong *param_1,float param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStack_d8 [32];
  uint local_b8;
  double local_a8;
  double local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = (**(code **)*param_3)(param_3);
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      (**(code **)(*param_3 + 0x38))(param_3,&local_98,iVar9);
      plVar5 = local_88;
      if (((~*(byte *)((longlong)local_88 + 0x31) & 3) == 0) && ((DAT_14c979cd1 & 1) == 0)) {
        lVar3 = *(longlong *)local_88[0x36];
        if ((lVar3 != 0) && (*(byte *)(lVar3 + 0x99) != 0)) {
          local_b8 = (uint)*(byte *)(lVar3 + 0x99);
          FUN_1401630a0(lVar3,local_88,0,0);
        }
        if (*(char *)((longlong)plVar5 + 0x39) == DAT_14c96b1e1) goto LAB_14287b970;
        FUN_14016305e(plVar5,0);
LAB_14287b9a6:
        fVar10 = param_2;
        if ((*(byte *)((longlong)param_1 + 0x32) & 1) != 0) {
          fVar10 = (float)(**(code **)(*param_1 + 0x178))(param_1,iVar9,param_2);
          fVar10 = fVar10 * param_2;
        }
        *(float *)((longlong)plVar5 + 0x3c) = fVar10;
        bVar6 = *(byte *)((longlong)plVar5 + 0x31);
        *(byte *)((longlong)plVar5 + 0x31) = bVar6 | 0x40;
        if ((char)bVar6 < '\0') {
          bVar6 = (**(code **)(*plVar5 + 0x160))(plVar5,fVar10);
          bVar6 = bVar6 ^ 1;
        }
        else {
          bVar6 = 0;
        }
        if ((bVar6 == 0) && ((*(byte *)(plVar5 + 6) & 2) != 0)) {
          puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x180))(plVar5);
          (**(code **)*puVar8)(puVar8);
          FUN_14287b89e(plVar5,fVar10,puVar8);
          (**(code **)*puVar8)(puVar8);
        }
        uVar11 = 0x3f800000;
        if ((*(byte *)((longlong)plVar5 + 0x31) & 0x40) != 0) {
          uVar11 = *(undefined4 *)((longlong)plVar5 + 0x3c);
        }
        pcVar4 = *(code **)(*plVar5 + 0x168);
        if (pcVar4 == FUN_14697dd72) {
          (**(code **)(*plVar5 + 0x170))(plVar5,&local_a8);
          *(float *)(plVar5 + 0x2d) = (float)local_a8;
          *(float *)((longlong)plVar5 + 0x16c) = (float)local_a0;
          *(byte *)((longlong)plVar5 + 0x31) = *(byte *)((longlong)plVar5 + 0x31) | 0x20;
        }
        else {
          (*pcVar4)(plVar5,uVar11);
        }
        *(byte *)(plVar5 + 6) = *(byte *)(plVar5 + 6) & 0x7f;
      }
      else {
        if (*(char *)((longlong)local_88 + 0x39) != DAT_14c96b1e1) goto LAB_14287b9a6;
LAB_14287b970:
        *(byte *)(plVar5 + 6) = *(byte *)(plVar5 + 6) | 0x80;
        fVar10 = param_2;
        if ((*(byte *)((longlong)param_1 + 0x32) & 1) != 0) {
          fVar10 = (float)(**(code **)(*param_1 + 0x178))(param_1,iVar9,param_2);
          fVar10 = fVar10 * param_2;
        }
        *(float *)((longlong)plVar5 + 0x3c) = fVar10;
        *(byte *)((longlong)plVar5 + 0x31) = *(byte *)((longlong)plVar5 + 0x31) | 0x40;
      }
      plVar5 = local_90;
      if ((local_98 != 0) && (local_90 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar7 != iVar9);
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14287bb46 FUN_14287bb46 body=141 status=ok
// SIG undefined FUN_14287bb46(void)

void FUN_14287bb46(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x1b0),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
                    /* WARNING: Could not recover jumptable at 0x00014287bbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14287bbd4 FUN_14287bbd4 body=91 status=ok
// SIG undefined FUN_14287bbd4(void)

void FUN_14287bbd4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar1 + 1U) {
    FUN_140eeec1c((longlong *)(param_1 + 0x1b0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14287bc30 FUN_14287bc30 body=30 status=ok
// SIG undefined FUN_14287bc30(void)

undefined4 FUN_14287bc30(longlong param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x368) & 2) == 0) {
    uVar1 = *(int *)(param_1 + 0x304) - 2;
    return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xfffffffd) != 0);
  }
  return 0;
}



// FUNCTION 14287bc5c FUN_14287bc5c body=8 status=ok
// SIG undefined FUN_14287bc5c(void)

undefined8 FUN_14287bc5c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x520);
}



// FUNCTION 14287bc64 FUN_14287bc64 body=1304 status=ok
// SIG undefined FUN_14287bc64(void)

void FUN_14287bc64(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((*(byte *)(param_1 + 0x450) & 1) == 0) {
    return;
  }
  cVar1 = FUN_1459b8360(param_1 + 0x3e0);
  if (cVar1 == '\0') {
    if ((*(byte *)(param_1 + 0x450) & 2) == 0) {
      fVar4 = *(float *)(param_1 + 0x3d4);
      fVar10 = *(float *)(param_1 + 0x3d0);
      if ((fVar10 == *(float *)(param_1 + 0x380)) &&
         (!NAN(fVar10) && !NAN(*(float *)(param_1 + 0x380)))) {
        if ((fVar4 == *(float *)(param_1 + 900)) && (!NAN(fVar4) && !NAN(*(float *)(param_1 + 900)))
           ) goto LAB_14287bfee;
      }
      if (*(longlong *)(param_1 + 0x510) == 0) {
        *(float *)(param_1 + 0x370) = fVar10;
        *(float *)(param_1 + 0x374) = fVar4;
      }
      else {
        auVar8 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),3);
        auVar6 = roundps(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),3);
        uVar3 = extractps(auVar6,0);
        lVar2 = extractps(auVar8,0);
        FUN_145a1ce82(param_1,uVar3 | lVar2 << 0x20);
        (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
                  (*(longlong **)(param_1 + 0x510),(int)fVar10,(int)fVar4);
      }
    }
    else {
      if ((*(byte *)(param_1 + 0x369) & 2) == 0) {
        fVar4 = *(float *)(param_1 + 0x380);
        fVar10 = *(float *)(param_1 + 900);
        fVar14 = *(float *)(param_1 + 0x394) + fVar10;
        fVar11 = *(float *)(param_1 + 0x390) + fVar4;
      }
      else {
        fVar11 = *(float *)(param_1 + 0x390);
        fVar14 = *(float *)(param_1 + 0x394);
        fVar10 = 0.0;
        fVar4 = 0.0;
      }
      fVar13 = *(float *)(param_1 + 0x3d0);
      fVar12 = *(float *)(param_1 + 0x3d4);
      fVar5 = *(float *)(param_1 + 0x3d8);
      if (((((fVar13 != fVar4) || (NAN(fVar13) || NAN(fVar4))) || (fVar12 != fVar10)) ||
          ((NAN(fVar12) || NAN(fVar10) || (fVar5 != fVar11)))) ||
         ((NAN(fVar5) || NAN(fVar11) ||
          ((*(float *)(param_1 + 0x3dc) != fVar14 ||
           (NAN(*(float *)(param_1 + 0x3dc)) || NAN(fVar14))))))) {
        FUN_146980ab8(param_1,*(undefined8 *)(param_1 + 0x3d0),
                      CONCAT44(*(float *)(param_1 + 0x3dc) - fVar12,fVar5 - fVar13));
      }
    }
LAB_14287bfee:
    fVar4 = *(float *)(param_1 + 0x3bc);
    if ((*(float *)(param_1 + 0x35c) != fVar4) || (NAN(*(float *)(param_1 + 0x35c)) || NAN(fVar4)))
    {
      *(float *)(param_1 + 0x35c) = fVar4;
      (**(code **)(**(longlong **)(param_1 + 0x510) + 0x98))();
    }
    *(byte *)(param_1 + 0x450) = *(byte *)(param_1 + 0x450) & 0xfe;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
    FUN_144a88240(param_1 + 0x18,param_1);
    return;
  }
  fVar4 = (float)FUN_14692f614(param_1 + 0x3e0);
  if ((*(byte *)(param_1 + 0x450) & 2) == 0) {
    fVar10 = (*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x3c4)) * fVar4 +
             *(float *)(param_1 + 0x3c4);
    fVar11 = (*(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x3c0)) * fVar4 +
             *(float *)(param_1 + 0x3c0);
    if ((fVar11 == *(float *)(param_1 + 0x380)) &&
       (!NAN(fVar11) && !NAN(*(float *)(param_1 + 0x380)))) {
      if ((fVar10 == *(float *)(param_1 + 900)) && (!NAN(fVar10) && !NAN(*(float *)(param_1 + 900)))
         ) goto LAB_14287bf0b;
    }
    if (*(longlong *)(param_1 + 0x510) == 0) {
      *(float *)(param_1 + 0x370) = fVar11;
      *(float *)(param_1 + 0x374) = fVar10;
    }
    else {
      auVar8 = roundps(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10),3);
      auVar6 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),3);
      uVar3 = extractps(auVar6,0);
      lVar2 = extractps(auVar8,0);
      FUN_145a1ce82(param_1,uVar3 | lVar2 << 0x20);
      (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
                (*(longlong **)(param_1 + 0x510),(int)fVar11,(int)fVar10);
    }
  }
  else {
    fVar10 = (*(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x3c0)) * fVar4 +
             *(float *)(param_1 + 0x3c0);
    if ((*(byte *)(param_1 + 0x369) & 2) == 0) {
      fVar11 = *(float *)(param_1 + 0x380);
      fVar14 = *(float *)(param_1 + 900);
      fVar12 = *(float *)(param_1 + 0x394) + fVar14;
      fVar13 = *(float *)(param_1 + 0x390) + fVar11;
    }
    else {
      fVar13 = *(float *)(param_1 + 0x390);
      fVar12 = *(float *)(param_1 + 0x394);
      fVar11 = 0.0;
      fVar14 = 0.0;
    }
    fVar5 = *(float *)(param_1 + 0x3cc) +
            (*(float *)(param_1 + 0x3dc) - *(float *)(param_1 + 0x3cc)) * fVar4;
    fVar7 = *(float *)(param_1 + 0x3c8) +
            (*(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x3c8)) * fVar4;
    fVar9 = *(float *)(param_1 + 0x3c4) +
            (*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x3c4)) * fVar4;
    if ((((fVar10 != fVar11) || (NAN(fVar10) || NAN(fVar11))) || (fVar9 != fVar14)) ||
       (((NAN(fVar9) || NAN(fVar14) || (fVar7 != fVar13)) ||
        ((NAN(fVar7) || NAN(fVar13) || ((fVar5 != fVar12 || (NAN(fVar5) || NAN(fVar12))))))))) {
      FUN_146980ab8(param_1,CONCAT44(fVar9,fVar10),CONCAT44(fVar5 - fVar9,fVar7 - fVar10));
    }
  }
LAB_14287bf0b:
  fVar4 = fVar4 * (*(float *)(param_1 + 0x3bc) - *(float *)(param_1 + 0x3b8)) +
          *(float *)(param_1 + 0x3b8);
  if ((*(float *)(param_1 + 0x35c) == fVar4) && (!NAN(*(float *)(param_1 + 0x35c)) && !NAN(fVar4)))
  {
    return;
  }
  *(float *)(param_1 + 0x35c) = fVar4;
                    /* WARNING: Could not recover jumptable at 0x00014287bf81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x98))();
  return;
}



// FUNCTION 14287c17c FUN_14287c17c body=14 status=ok
// SIG undefined FUN_14287c17c(void)

undefined8 * FUN_14287c17c(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x390);
  return param_2;
}



// FUNCTION 14287c18a FUN_14287c18a body=59 status=ok
// SIG undefined FUN_14287c18a(void)

void FUN_14287c18a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x470);
  if (lVar1 == 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x208);
    lVar1 = *(longlong *)(param_1 + 0x210);
  }
  else {
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0x18);
  }
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14287c1c6 FUN_14287c1c6 body=25 status=ok
// SIG undefined FUN_14287c1c6(void)

undefined8 FUN_14287c1c6(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014287c1d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x80))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14287c1e0 FUN_14287c1e0 body=22 status=ok
// SIG undefined FUN_14287c1e0(void)

undefined8 FUN_14287c1e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014287c1ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x78))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14287c254 FUN_14287c254 body=356 status=ok
// SIG undefined FUN_14287c254(void)

undefined1 * FUN_14287c254(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x358) == '\x01') {
    cVar2 = FUN_140591fd6();
    if (cVar2 != '\0') {
      local_58 = DAT_14c966e98;
      uStack_50 = DAT_14c966ea0;
      local_48 = DAT_14c966ea8;
      if (DAT_14c966ea8 != 0) {
        LOCK();
        *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
        UNLOCK();
      }
      cVar2 = FUN_1407c9dec(param_4);
      if ((cVar2 != '\0') && (*(int *)(param_1 + 0x2e8) != 10)) {
        fVar8 = *(float *)(param_1 + 900) + *(float *)(param_4 + 0x34);
        fVar7 = *(float *)(param_1 + 0x380) + *(float *)(param_4 + 0x30);
        if (*(longlong *)(param_1 + 0x510) == 0) {
          *(float *)(param_1 + 0x370) = fVar7;
          *(float *)(param_1 + 0x374) = fVar8;
        }
        else {
          auVar6 = roundps(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),3);
          auVar5 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),3);
          uVar4 = extractps(auVar5,0);
          lVar3 = extractps(auVar6,0);
          FUN_145a1ce82(param_1,uVar4 | lVar3 << 0x20);
          (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
                    (*(longlong **)(param_1 + 0x510),(int)fVar7,(int)fVar8);
        }
        uVar1 = 1;
        goto LAB_14287c282;
      }
    }
  }
  uVar1 = 0;
LAB_14287c282:
  *param_2 = uVar1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287c400 FUN_14287c400 body=48 status=ok
// SIG undefined FUN_14287c400(void)

longlong FUN_14287c400(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_1402bbc34(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14287c456 FUN_14287c456 body=132 status=ok
// SIG undefined FUN_14287c456(void)

void FUN_14287c456(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x38) == param_2) {
          FUN_146983a82(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x38 + *param_1 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14287c4da FUN_14287c4da body=138 status=ok
// SIG undefined FUN_14287c4da(void)

undefined2 * FUN_14287c4da(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_21);
      if (**(char **)(param_1 + 0x18) != local_21) {
        **(char **)(param_1 + 0x18) = local_21;
        *param_2 = 0x100;
        goto LAB_14287c536;
      }
    }
  }
  *param_2 = 0;
LAB_14287c536:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287c584 FUN_14287c584 body=2515 status=ok
// SIG undefined FUN_14287c584(void)

void FUN_14287c584(longlong param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  char cVar15;
  undefined1 uVar16;
  int iVar17;
  double *pdVar18;
  float *pfVar19;
  longlong *plVar20;
  float *pfVar21;
  longlong lVar22;
  byte unaff_R12B;
  bool bVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  float local_188;
  undefined8 uStack_184;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(int *)(param_1 + 0x200) != 0) {
    fVar31 = 1.0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    if ((*(longlong *)(param_1 + 0x208) == 0) ||
       (plVar20 = *(longlong **)(param_1 + 0x210), plVar20 == (longlong *)0x0)) {
      fVar32 = 0.0;
    }
    else {
      fVar32 = 0.0;
      if (0 < (int)plVar20[1]) {
        iVar17 = (int)plVar20[1];
        lVar22 = 0;
        do {
          if (iVar17 == 0) {
            plVar20 = (longlong *)0x0;
            goto LAB_14287ceba;
          }
          LOCK();
          iVar14 = (int)plVar20[1];
          bVar23 = iVar17 == iVar14;
          if (bVar23) {
            *(int *)(plVar20 + 1) = iVar17 + 1;
            iVar14 = iVar17;
          }
          iVar17 = iVar14;
          UNLOCK();
        } while (!bVar23);
        lVar22 = *(longlong *)(param_1 + 0x208);
LAB_14287ceba:
        fVar32 = *(float *)(lVar22 + 0x380);
        fVar29 = *(float *)(lVar22 + 900);
        fVar31 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
        fVar25 = 1.0;
        if (*(longlong **)(lVar22 + 0x510) != (longlong *)0x0) {
          fVar25 = (float)(**(code **)(**(longlong **)(lVar22 + 0x510) + 0xf8))();
        }
        fVar31 = 1.0 / (fVar31 * fVar25);
        local_1d8 = CONCAT44(0x80000000,-fVar29 * fVar31);
        uStack_1d0 = 0x8000000080000000;
        fVar32 = -fVar32 * fVar31;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar2 = (int *)((longlong)plVar20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
      }
    }
    iVar17 = *(int *)(param_1 + 0x200);
    if (0 < iVar17) {
      local_1e0 = param_2 + 0x1c;
      lVar22 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar22 * 8);
        if ((*(byte *)(*(longlong *)(lVar8 + 0x10) + 0x39) & *param_3) != 0) {
          if (((*(int *)(lVar8 + 0x88) != 0) && (*(longlong **)(lVar8 + 0x80) != (longlong *)0x0))
             && (cVar15 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))(), cVar15 != '\0')) {
            if (*(int *)(lVar8 + 0x88) == 0) {
              plVar20 = (longlong *)0x0;
            }
            else {
              plVar20 = *(longlong **)(lVar8 + 0x80);
            }
            uVar24 = (**(code **)(*plVar20 + 0x58))();
            *(undefined4 *)(lVar8 + 0x78) = uVar24;
          }
          fVar29 = *(float *)(lVar8 + 0x78);
          pdVar18 = (double *)FUN_140133f12(lVar8 + 0x20);
          dVar6 = *pdVar18;
          lVar9 = *(longlong *)(lVar8 + 0x10);
          pfVar21 = (float *)(lVar9 + 0x168);
          pfVar19 = (float *)(lVar9 + 0x16c);
          if ((*(byte *)(lVar9 + 0x31) & 0x20) == 0) {
            pfVar19 = (float *)((longlong)&DAT_14c84635c + 4);
            pfVar21 = (float *)&DAT_14c84635c;
          }
          fVar25 = *pfVar21;
          dVar7 = pdVar18[1];
          if (*(char *)(lVar8 + 100) == '\x01') {
            if (((*(int *)(lVar8 + 0x70) != 0) && (*(longlong **)(lVar8 + 0x68) != (longlong *)0x0))
               && (cVar15 = (**(code **)(**(longlong **)(lVar8 + 0x68) + 0x30))(), cVar15 != '\0'))
            {
              if (*(int *)(lVar8 + 0x70) == 0) {
                plVar20 = (longlong *)0x0;
              }
              else {
                plVar20 = *(longlong **)(lVar8 + 0x68);
              }
              uVar24 = (**(code **)(*plVar20 + 0x58))();
              *(undefined4 *)(lVar8 + 0x60) = uVar24;
            }
            dVar11 = (double)*(float *)(lVar8 + 0x60);
          }
          else {
            dVar11 = (double)*pfVar19 * (double)fVar29;
          }
          if (*(char *)(lVar8 + 0x4c) == '\x01') {
            if (((*(int *)(lVar8 + 0x58) != 0) && (*(longlong **)(lVar8 + 0x50) != (longlong *)0x0))
               && (cVar15 = (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x30))(), cVar15 != '\0'))
            {
              if (*(int *)(lVar8 + 0x58) == 0) {
                plVar20 = (longlong *)0x0;
              }
              else {
                plVar20 = *(longlong **)(lVar8 + 0x50);
              }
              uVar24 = (**(code **)(*plVar20 + 0x58))();
              *(undefined4 *)(lVar8 + 0x48) = uVar24;
            }
            dVar12 = (double)*(float *)(lVar8 + 0x48);
          }
          else {
            dVar12 = (double)fVar29 * (double)fVar25;
          }
          if (((*(int *)(lVar8 + 0xa0) != 0) && (*(longlong **)(lVar8 + 0x98) != (longlong *)0x0))
             && (cVar15 = (**(code **)(**(longlong **)(lVar8 + 0x98) + 0x30))(), cVar15 != '\0')) {
            if (*(int *)(lVar8 + 0xa0) == 0) {
              plVar20 = (longlong *)0x0;
            }
            else {
              plVar20 = *(longlong **)(lVar8 + 0x98);
            }
            uVar16 = (**(code **)(*plVar20 + 0x58))();
            *(undefined1 *)(lVar8 + 0x90) = uVar16;
          }
          dVar10 = dVar7;
          if (*(char *)(lVar8 + 0x90) == '\x01') {
            if (((*(longlong *)(param_1 + 0x208) == 0) ||
                (plVar20 = *(longlong **)(param_1 + 0x210), plVar20 == (longlong *)0x0)) ||
               ((int)plVar20[1] < 1)) {
              local_198 = 0xbf800000bf800000;
              fStack_190 = -1.0;
              fStack_18c = -1.0;
            }
            else {
              iVar17 = (int)plVar20[1];
              do {
                if (iVar17 == 0) {
                  FUN_140c2d2b0(0,&local_198);
                  goto LAB_14287c930;
                }
                LOCK();
                iVar14 = (int)plVar20[1];
                bVar23 = iVar17 == iVar14;
                if (bVar23) {
                  *(int *)(plVar20 + 1) = iVar17 + 1;
                  iVar14 = iVar17;
                }
                iVar17 = iVar14;
                UNLOCK();
              } while (!bVar23);
              FUN_140c2d2b0(*(undefined8 *)(param_1 + 0x208),&local_198);
              LOCK();
              plVar1 = plVar20 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar2 = (int *)((longlong)plVar20 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
            }
LAB_14287c930:
            pdVar18 = (double *)FUN_140133f12(lVar8 + 0xa8);
            dVar10 = (dVar6 + dVar12) - (double)(fStack_190 - (float)*pdVar18);
            dVar13 = 0.0;
            if (0.0 <= dVar10) {
              dVar13 = dVar10;
            }
            dVar13 = dVar6 - dVar13;
            dVar6 = (double)(float)local_198;
            if ((double)(float)local_198 <= dVar13) {
              dVar6 = dVar13;
            }
            dVar10 = (dVar7 + dVar11) - (double)(fStack_18c - (float)pdVar18[1]);
            dVar13 = 0.0;
            if (0.0 <= dVar10) {
              dVar13 = dVar10;
            }
            dVar10 = (double)local_198._4_4_;
            if ((double)local_198._4_4_ <= dVar7 - dVar13) {
              dVar10 = dVar7 - dVar13;
            }
          }
          fVar25 = (float)dVar10 * fVar31 + (float)local_1d8;
          fVar26 = (float)dVar6 * fVar31 + fVar32;
          local_1bc = fVar31 * fVar29;
          local_1b8 = CONCAT44(fVar25,fVar26);
          fStack_1c4 = (float)dVar11 * (1.0 / fVar29);
          local_1c8 = (1.0 / fVar29) * (float)dVar12;
          lVar9 = *(longlong *)(lVar8 + 0x10);
          local_100 = *(char *)(lVar9 + 0x198);
          if (DAT_14c96b1e0 == '\0') {
            if (local_100 != '\0') {
              local_108 = *(ulonglong *)(lVar9 + 400);
              local_118 = *(undefined8 *)(lVar9 + 0x180);
              uStack_110 = *(undefined8 *)(lVar9 + 0x188);
              goto LAB_14287cd64;
            }
LAB_14287ca69:
            local_198 = CONCAT44(fStack_1c4,local_1c8);
            fVar29 = *(float *)(param_2 + 0x20);
            fVar3 = *(float *)(param_2 + 0x28);
            fStack_190 = *(float *)(param_2 + 8);
            fVar4 = *(float *)(param_2 + 0x1c);
            fVar5 = *(float *)(param_2 + 0x24);
            fVar27 = fVar26 * fVar29 + fVar25 * fVar3 + *(float *)(param_2 + 0x30);
            fVar30 = fVar26 * fVar4 + fVar25 * fVar5 + *(float *)(param_2 + 0x2c);
            fVar28 = fVar29 * 0.0 + local_1bc * fVar3;
            fVar33 = fVar4 * 0.0 + local_1bc * fVar5;
            fVar29 = fVar3 * 0.0 + local_1bc * fVar29;
            fStack_17c = fVar5 * 0.0 + local_1bc * fVar4;
            unaff_R12B = unaff_R12B & 0xfe | *(byte *)(param_2 + 0x34) & 1;
            local_188 = fVar25 * fStack_190 + *(float *)(param_2 + 0x10);
            fStack_18c = fVar26 * fStack_190 + *(float *)(param_2 + 0xc);
            fStack_190 = local_1bc * fStack_190;
            local_160 = *(undefined8 *)(lVar8 + 0x10);
            plVar20 = *(longlong **)(lVar8 + 0x18);
            uStack_184 = local_1b8;
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
              local_178 = CONCAT44(fVar33,fVar29);
              uStack_170 = CONCAT44(fVar30,fVar28);
              local_168._0_5_ = CONCAT14(unaff_R12B,fVar27);
              local_168 = CONCAT17(local_150._2_1_,
                                   CONCAT25((undefined2)local_150,(undefined5)local_168));
              goto LAB_14287cbd0;
            }
            local_178 = CONCAT44(fVar33,fVar29);
            uStack_170 = CONCAT44(fVar30,fVar28);
            local_168._0_5_ = CONCAT14(unaff_R12B,fVar27);
LAB_14287cca9:
            local_158 = (longlong *)0x0;
          }
          else {
            if (local_100 == '\0') goto LAB_14287ca69;
            local_118 = *(undefined8 *)(lVar9 + 0x180);
            uStack_110 = *(undefined8 *)(lVar9 + 0x188);
            local_108 = *(ulonglong *)(lVar9 + 400) ^ 0x80000000;
LAB_14287cd64:
            fVar29 = (float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x170);
            if (DAT_14c96b1e0 != '\0') {
              fVar29 = (0.5 - fVar29) + 0.5;
            }
            local_1b0 = CONCAT44((float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x178),fVar29);
            local_1a0 = *(undefined8 *)(param_2 + 0xc);
            local_1a4 = *(undefined4 *)(param_2 + 8);
            local_1e8 = local_1e0;
            local_1f0 = &local_1a4;
            local_1f8 = &local_1b0;
            FUN_146978c22(&local_150,&local_1c8,&local_1bc,&local_118);
            local_160 = *(undefined8 *)(lVar8 + 0x10);
            plVar20 = *(longlong **)(lVar8 + 0x18);
            if (plVar20 == (longlong *)0x0) {
              local_168 = local_120;
              local_178 = CONCAT44(uStack_12c,local_130);
              uStack_170 = CONCAT44(uStack_124,uStack_128);
              local_188 = local_140;
              uStack_184 = CONCAT44(uStack_138,uStack_13c);
              fStack_17c = fStack_134;
              local_198 = CONCAT44(uStack_14c,local_150);
              fStack_190 = fStack_148;
              fStack_18c = fStack_144;
              goto LAB_14287cca9;
            }
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            local_168 = local_120;
            local_178 = CONCAT44(uStack_12c,local_130);
            uStack_170 = CONCAT44(uStack_124,uStack_128);
            local_188 = local_140;
            uStack_184 = CONCAT44(uStack_138,uStack_13c);
            fStack_17c = fStack_134;
            local_198 = CONCAT44(uStack_14c,local_150);
            fStack_190 = fStack_148;
            fStack_18c = fStack_144;
LAB_14287cbd0:
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar20 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            local_158 = plVar20;
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
          FUN_1402018be(param_3,&local_198);
          plVar20 = local_158;
          if (local_158 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_158 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_158)(local_158);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
          iVar17 = *(int *)(param_1 + 0x200);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar17);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287cf58 FUN_14287cf58 body=59 status=ok
// SIG undefined FUN_14287cf58(void)

longlong FUN_14287cf58(longlong param_1,int param_2)

{
  FUN_140f8f815(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14287cf94 FUN_14287cf94 body=90 status=ok
// SIG undefined FUN_14287cf94(void)

void FUN_14287cf94(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149ef1770;
  plVar2 = (longlong *)param_1[0x42];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140f8f815(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14287cfee FUN_14287cfee body=234 status=ok
// SIG undefined FUN_14287cfee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287cfee(void)

{
  _DAT_14c98e078 = 0;
  _DAT_14c98e080 = 0;
  _DAT_14c98e058 = 0;
  uRam000000014c98e060 = 0;
  _DAT_14c98e084 = 0xffffffff00000080;
  _DAT_14c98e08c = 0;
  DAT_14c98e098 = 0;
  _DAT_14c98e0a0 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c98e0a8);
  atexit(FUN_14287b1dc);
  _DAT_14c98e0d0 = 0;
  _DAT_14c98e0d8 = 0;
  _DAT_14c98e0b0 = 0;
  uRam000000014c98e0b8 = 0;
  _DAT_14c98e0dc = 0xffffffff00000080;
  _DAT_14c98e0e4 = 0;
  DAT_14c98e0f0 = 0;
  _DAT_14c98e0f8 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14c98e100);
  atexit(FUN_14287b20b);
  FUN_1415c789c(&DAT_14c98e108,L"Slate.CullingSlackFillPercent",&DAT_14c75ed74,
                L"Scales the culling rect by the amount to provide extra slack/wiggle room for widgets that have a true bounds larger than the root child widget in a container."
                ,0);
  atexit(FUN_14287b23a);
  FUN_140a580e4();
  return;
}



// FUNCTION 14287d0d8 FUN_14287d0d8 body=394 status=ok
// SIG undefined FUN_14287d0d8(void)

undefined8 FUN_14287d0d8(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  
  if (param_1[6] != 0) {
    lVar9 = 0;
    do {
      if (*(int *)((longlong)&DAT_149ef45c0 + lVar9) == param_1[6]) {
        if (lVar9 == -0x149ef45c0) {
          return 4;
        }
        iVar1 = *param_1;
        if (iVar1 == 3) {
          iVar2 = param_1[5];
        }
        else {
          if (iVar1 != 2) {
            if (iVar1 != 1) {
              return 3;
            }
            if (param_1[2] != 1) {
              return 5;
            }
          }
          iVar2 = param_1[3];
        }
        if (iVar2 != 1) {
          return 5;
        }
        uVar3 = param_1[1];
        if (uVar3 == 0) {
          return 5;
        }
        uVar4 = param_1[2];
        if (uVar4 == 0) {
          return 5;
        }
        uVar5 = param_1[3];
        if (uVar5 == 0) {
          return 5;
        }
        uVar6 = param_1[4];
        if (uVar6 == 0) {
          return 5;
        }
        uVar7 = param_1[5];
        if (uVar7 == 0) {
          return 5;
        }
        if (0xfffff < (uVar4 | uVar3 | uVar5)) {
          return 5;
        }
        if (0x14 < uVar6) {
          return 6;
        }
        if (0xfffff < uVar7) {
          return 5;
        }
        if (1.0995116e+12 <
            (float)(int)uVar7 * (float)(int)uVar5 * (float)(int)uVar4 * (float)(int)uVar3) {
          return 5;
        }
        bVar8 = (char)uVar6 - 1;
        if (uVar5 >> (bVar8 & 0x1f) == 0 &&
            (uVar4 >> (bVar8 & 0x1f) == 0 && uVar3 >> (bVar8 & 0x1f) == 0)) {
          return 6;
        }
        if ((*(byte *)(param_1 + 7) & 1) != 0) {
          if (uVar5 != 1 || (uVar3 != uVar4 || iVar1 != 2)) {
            return 7;
          }
          if (uVar7 < 6) {
            return 7;
          }
          if (uVar7 % 6 != 0) {
            return 7;
          }
        }
        return 0;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x650);
  }
  return 4;
}



// FUNCTION 14287d262 FUN_14287d262 body=375 status=ok
// SIG undefined FUN_14287d262(void)

void FUN_14287d262(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_14698834a(param_1 + 0x20);
  }
  FUN_1469882ce(param_1 + 0x20);
  if ((param_3 & 2) == 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar10 = *(uint *)(param_1 + 0x10);
      do {
        if (uVar10 == 0) {
          uVar10 = 0;
        }
        else {
          uVar4 = 0;
          do {
            lVar8 = (longlong)(int)(uVar10 * uVar7 + uVar4) * 0x30;
            bVar3 = (byte)uVar4;
            uVar10 = *(uint *)(param_1 + 4) >> (bVar3 & 0x1f);
            iVar11 = uVar10 + (uVar10 == 0);
            uVar10 = *(uint *)(param_1 + 8) >> (bVar3 & 0x1f);
            iVar9 = uVar10 + (uVar10 == 0);
            uVar6 = *(uint *)(param_1 + 0xc) >> (bVar3 & 0x1f);
            uVar6 = uVar6 + (uVar6 == 0);
            lVar2 = *(longlong *)(param_1 + 0x20);
            uVar10 = *(uint *)(param_2 + 4);
            uVar1 = *(uint *)(param_2 + 8);
            *(int *)(lVar2 + lVar8) = iVar11;
            *(int *)(lVar2 + 4 + lVar8) = iVar9;
            *(uint *)(lVar2 + 8 + lVar8) = uVar6;
            lVar5 = (ulonglong)*(uint *)(param_2 + 0xc) *
                    ((ulonglong)((iVar11 + uVar10) - 1) / (ulonglong)uVar10);
            *(longlong *)(lVar2 + 0x10 + lVar8) = lVar5;
            lVar5 = ((ulonglong)((iVar9 + uVar1) - 1) / (ulonglong)uVar1) * lVar5;
            *(longlong *)(lVar2 + 0x18 + lVar8) = lVar5;
            *(ulonglong *)(lVar2 + 0x20 + lVar8) = (ulonglong)uVar6 * lVar5;
            *(undefined8 *)(lVar2 + 0x28 + lVar8) = 0;
            uVar4 = uVar4 + 1;
            uVar10 = *(uint *)(param_1 + 0x10);
          } while (uVar4 < uVar10);
          uVar4 = *(uint *)(param_1 + 0x14);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
    FUN_1415d7a80((longlong *)(param_1 + 0x30));
    iVar9 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar9 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar5 = 0;
      lVar8 = 0;
      do {
        *(longlong *)(lVar2 + 0x28 + lVar5) = *(longlong *)(param_1 + 0x30) + lVar8;
        lVar8 = lVar8 + *(longlong *)(lVar2 + 0x20 + lVar5);
        lVar5 = lVar5 + 0x30;
      } while ((longlong)iVar9 * 0x30 != lVar5);
    }
  }
  return;
}



// FUNCTION 14287d3da FUN_14287d3da body=1174 status=ok
// SIG undefined FUN_14287d3da(void)

int * FUN_14287d3da(int *param_1,ulonglong param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  size_t _Size;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  int *_Src;
  longlong *local_70;
  longlong *local_50;
  int *local_48;
  
  if (param_2 < 0x80) {
LAB_14287d3f6:
    if (param_3 == (int *)0x0) {
      return (int *)0x0;
    }
    *param_3 = 8;
    return (int *)0x0;
  }
  if (*param_1 != 0x20534444) {
    if (param_3 == (int *)0x0) {
      return (int *)0x0;
    }
    *param_3 = 2;
    return (int *)0x0;
  }
  iVar9 = param_1[3];
  iVar1 = param_1[4];
  iVar15 = param_1[6];
  iVar2 = param_1[7];
  uVar16 = param_1[0x14];
  iVar13 = param_1[0x15];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  bVar17 = iVar13 == 0x30315844 & (byte)uVar16 >> 2;
  if (bVar17 == 1) {
    if (param_2 - 0x80 < 0x14) goto LAB_14287d3f6;
    iVar13 = param_1[0x20];
    iVar14 = param_1[0x21];
    uVar16 = param_1[0x22];
    iVar18 = param_1[0x23];
    _Src = param_1 + 0x25;
    piVar10 = (int *)FUN_14001cc68(0x48,0x10);
    local_70 = (longlong *)(piVar10 + 8);
    local_48 = piVar10 + 10;
    local_50 = (longlong *)(piVar10 + 0xc);
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10[2] = 0;
    piVar10[3] = 0;
    piVar10[4] = 0;
    piVar10[5] = 0;
    piVar10[6] = 0;
    piVar10[7] = 0;
    piVar10[8] = 0;
    piVar10[9] = 0;
    piVar10[10] = 0;
    piVar10[0xb] = 0;
    piVar10[0xc] = 0;
    piVar10[0xd] = 0;
    piVar10[0xe] = 0;
    piVar10[0xf] = 0;
    piVar10[0x10] = 0;
    piVar10[0x11] = 0;
    if (2 < iVar14 - 2U) {
      iVar9 = 3;
      uVar16 = 0;
      iVar13 = 0;
      goto LAB_14287d74b;
    }
    iVar14 = iVar14 + -1;
    *piVar10 = iVar14;
    uVar16 = uVar16 & 4;
  }
  else {
    iVar18 = param_1[0x16];
    iVar5 = param_1[0x17];
    iVar6 = param_1[0x18];
    iVar7 = param_1[0x19];
    iVar8 = param_1[0x1a];
    _Src = param_1 + 0x20;
    piVar10 = (int *)FUN_14001cc68(0x48,0x10);
    local_70 = (longlong *)(piVar10 + 8);
    local_48 = piVar10 + 10;
    local_50 = (longlong *)(piVar10 + 0xc);
    iVar14 = ((uVar4 >> 0x15 & 1) != 0) + 2;
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10[2] = 0;
    piVar10[3] = 0;
    piVar10[4] = 0;
    piVar10[5] = 0;
    piVar10[6] = 0;
    piVar10[7] = 0;
    piVar10[8] = 0;
    piVar10[9] = 0;
    piVar10[10] = 0;
    piVar10[0xb] = 0;
    piVar10[0xc] = 0;
    piVar10[0xd] = 0;
    piVar10[0xe] = 0;
    piVar10[0xf] = 0;
    piVar10[0x10] = 0;
    piVar10[0x11] = 0;
    *piVar10 = iVar14;
    if ((uVar16 & 4) == 0) {
      lVar11 = 0x18;
      do {
        if (((((uVar16 & 0xa0042) == *(uint *)(&UNK_149ef3f18 + lVar11)) &&
             (iVar18 == *(int *)(&UNK_149ef3f1c + lVar11))) &&
            (iVar5 == *(int *)(&UNK_149ef3f20 + lVar11))) &&
           (((iVar6 == *(int *)(&UNK_149ef3f24 + lVar11) &&
             (iVar7 == *(int *)(&UNK_149ef3f28 + lVar11))) &&
            (iVar8 == *(int *)(&UNK_149ef3f2c + lVar11))))) {
          iVar13 = *(int *)((longlong)&DAT_149ef3f30 + lVar11);
          goto LAB_14287d6bd;
        }
        lVar11 = lVar11 + 0x20;
      } while (lVar11 != 0x298);
      iVar13 = 0;
    }
    else {
      lVar11 = 4;
      do {
        if (iVar13 == *(int *)(&UNK_149ef41ac + lVar11)) {
          iVar13 = *(int *)((longlong)&DAT_149ef41b0 + lVar11);
          goto LAB_14287d6bd;
        }
        lVar11 = lVar11 + 0xc;
      } while (lVar11 != 0x10c);
      iVar13 = 0;
    }
LAB_14287d6bd:
    uVar16 = 0;
    iVar18 = 1;
  }
  uVar4 = uVar4 & 0x200;
  if (bVar17 != 0) {
    uVar4 = uVar16;
  }
  if (iVar14 != 3) {
    iVar15 = 1;
  }
  if ((uVar3 >> 0x16 & 1) == 0) {
    iVar2 = 1;
  }
  piVar10[6] = iVar13;
  piVar10[1] = iVar1;
  piVar10[2] = iVar9;
  piVar10[3] = iVar15;
  piVar10[4] = iVar2;
  piVar10[5] = iVar18;
  piVar10[7] = 0;
  if (uVar4 != 0) {
    piVar10[7] = 1;
    piVar10[5] = iVar18 * 6;
  }
  uVar16 = (uint)(uVar4 != 0);
  if (bVar17 == 0) {
    uVar16 = uVar16 | 4;
    piVar10[7] = uVar16;
  }
  iVar9 = FUN_14287d0d8(piVar10);
LAB_14287d74b:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar9;
  }
  if (iVar9 == 0 && param_4 == '\0') {
    iVar9 = 0;
    lVar11 = 0;
    if (iVar13 != 0) {
      lVar12 = 0;
      do {
        if (*(int *)((longlong)&DAT_149ef45c0 + lVar12) == iVar13) {
          lVar11 = (longlong)&DAT_149ef45c0 + lVar12;
          break;
        }
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0x650);
    }
    FUN_14287d262(piVar10,lVar11,uVar16);
    iVar1 = *local_48;
    if ((longlong)iVar1 != 0) {
      lVar11 = *local_70;
      lVar12 = 0;
      do {
        _Size = *(size_t *)(lVar11 + 0x20 + lVar12);
        if ((longlong)((longlong)param_1 + (param_2 - (longlong)_Src)) < (longlong)_Size) {
          iVar9 = 8;
          goto LAB_14287d807;
        }
        memcpy(*(void **)(lVar11 + 0x28 + lVar12),_Src,_Size);
        _Src = (int *)((longlong)_Src + *(longlong *)(lVar11 + 0x20 + lVar12));
        lVar12 = lVar12 + 0x30;
      } while ((longlong)iVar1 * 0x30 != lVar12);
      iVar9 = 0;
    }
LAB_14287d807:
    if (param_3 != (int *)0x0) {
      *param_3 = iVar9;
    }
  }
  if (iVar9 != 0) {
    if (piVar10 != (int *)0x0) {
      if (*local_50 != 0) {
        FUN_1400020a8();
      }
      if (*local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar10);
    }
    return (int *)0x0;
  }
  return piVar10;
}



// FUNCTION 14287d870 FUN_14287d870 body=1068 status=ok
// SIG undefined FUN_14287d870(void)

int FUN_14287d870(int *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong _Size;
  void *_Src;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  
  iVar10 = FUN_14287d0d8();
  if (iVar10 != 0) {
    return iVar10;
  }
  if ((longlong)param_1[10] == 0) {
    lVar20 = 0x94;
  }
  else {
    lVar20 = 0x94;
    lVar12 = 0;
    do {
      lVar20 = lVar20 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x20 + lVar12);
      lVar12 = lVar12 + 0x30;
    } while ((longlong)param_1[10] * 0x30 != lVar12);
  }
  param_2[1] = 0;
  if (param_2[2] != 0) {
    FUN_140d2d4a8(param_2,0);
  }
  if (lVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(lVar20);
  }
  if (param_2[2] < lVar20) {
    FUN_140d2d4a8(param_2,lVar20);
  }
  iVar10 = *param_1;
  uVar2 = param_1[5];
  iVar18 = param_1[6];
  uVar3 = param_1[7];
  iVar11 = (uint)(iVar10 == 3) * 0x200000;
  iVar8 = iVar11 + 0xfe00;
  uVar9 = uVar2 / 6;
  if ((uVar3 & 1) == 0) {
    iVar8 = iVar11;
    uVar9 = uVar2;
  }
  iVar11 = 1;
  if (param_3 == 1) {
    piVar14 = &DAT_149ef3ef0;
    lVar20 = 0;
    do {
      if (*piVar14 == iVar18) {
        iVar18 = (&DAT_149ef3ef0)[(uint)lVar20 & 0xe];
        break;
      }
      lVar20 = lVar20 + 1;
      piVar14 = piVar14 + 1;
    } while (lVar20 != 0xe);
    iVar11 = 0;
  }
  puVar16 = (undefined4 *)0x0;
  lVar20 = 0;
  do {
    if ((*(int *)((longlong)&DAT_149ef3f48 + lVar20) == iVar18) &&
       (iVar11 <= *(int *)((longlong)&DAT_149ef3f4c + lVar20))) {
      puVar16 = (undefined4 *)((longlong)&DAT_149ef3f30 + lVar20);
      break;
    }
    lVar20 = lVar20 + 0x20;
  } while (lVar20 != 0x280);
  lVar20 = 8;
  do {
    if ((*(int *)(&UNK_149ef41ac + lVar20) == iVar18) &&
       (iVar11 <= *(int *)((longlong)&DAT_149ef41b0 + lVar20))) {
      iVar11 = *(int *)(&UNK_149ef41a8 + lVar20);
      goto LAB_14287d9df;
    }
    lVar20 = lVar20 + 0xc;
  } while (lVar20 != 0x110);
  iVar11 = 0;
LAB_14287d9df:
  iVar17 = iVar10;
  if (param_3 == 1) {
    if ((puVar16 == (undefined4 *)0x0) && (iVar11 == 0)) {
      return 4;
    }
    if (uVar2 != 1) {
      return 5;
    }
    iVar17 = 2;
    if (iVar10 != 1) {
      iVar17 = iVar10;
    }
  }
  uVar15 = 0;
  uVar19 = 4;
  if (uVar2 == 1 && (1 < iVar17 && param_3 != 2)) {
    if (puVar16 != (undefined4 *)0x0) {
      uVar19 = *puVar16;
      uVar15 = puVar16[1];
      uVar13 = puVar16[2];
      local_6c = puVar16[3];
      local_70 = puVar16[4];
      local_74 = puVar16[5];
      local_68 = 0;
      goto LAB_14287dab6;
    }
    local_68 = 0x30315844;
    if (iVar11 != 0) {
      local_68 = iVar11;
    }
  }
  else {
    local_68 = 0x30315844;
  }
  uVar13 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
LAB_14287dab6:
  iVar11 = param_1[1];
  iVar4 = param_1[2];
  iVar5 = param_1[3];
  iVar6 = param_1[4];
  lVar20 = param_2[1];
  param_2[1] = lVar20 + 0x80;
  if ((ulonglong)(param_2[2] - lVar20) < 0x80) {
    FUN_14112c458(param_2,lVar20);
  }
  lVar12 = *param_2;
  *(undefined8 *)(lVar12 + lVar20) = 0x7c20534444;
  *(uint *)(lVar12 + 8 + lVar20) = (uint)(iVar10 == 3) << 0x17 | 0x21007;
  *(int *)(lVar12 + 0xc + lVar20) = iVar4;
  *(int *)(lVar12 + 0x10 + lVar20) = iVar11;
  *(undefined4 *)(lVar12 + 0x14 + lVar20) = 0;
  *(int *)(lVar12 + 0x18 + lVar20) = iVar5;
  *(int *)(lVar12 + 0x1c + lVar20) = iVar6;
  puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar20);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar12 + 0x3c + lVar20);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar12 + 0x4c + lVar20) = 0x20;
  *(undefined4 *)(lVar12 + 0x50 + lVar20) = uVar19;
  *(int *)(lVar12 + 0x54 + lVar20) = local_68;
  *(undefined4 *)(lVar12 + 0x58 + lVar20) = uVar15;
  *(undefined4 *)(lVar12 + 0x5c + lVar20) = uVar13;
  *(undefined4 *)(lVar12 + 0x60 + lVar20) = local_6c;
  *(undefined4 *)(lVar12 + 100 + lVar20) = local_70;
  *(undefined4 *)(lVar12 + 0x68 + lVar20) = local_74;
  *(undefined4 *)(lVar12 + 0x6c + lVar20) = 0x401008;
  *(int *)(lVar12 + 0x70 + lVar20) = iVar8;
  *(undefined8 *)(lVar12 + 0x74 + lVar20) = 0;
  *(undefined4 *)(lVar12 + 0x7c + lVar20) = 0;
  if (local_68 == 0x30315844) {
    lVar20 = param_2[1];
    param_2[1] = lVar20 + 0x14;
    if ((ulonglong)(param_2[2] - lVar20) < 0x14) {
      FUN_14112c458(param_2,lVar20);
    }
    lVar12 = *param_2;
    *(int *)(lVar12 + lVar20) = iVar18;
    *(int *)(lVar12 + 4 + lVar20) = iVar17 + 1;
    *(uint *)(lVar12 + 8 + lVar20) = (uVar3 & 1) << 2;
    *(uint *)(lVar12 + 0xc + lVar20) = uVar9;
    *(undefined4 *)(lVar12 + 0x10 + lVar20) = 0;
  }
  iVar10 = param_1[10];
  if ((longlong)iVar10 != 0) {
    lVar20 = *(longlong *)(param_1 + 8);
    lVar12 = 0;
    do {
      _Size = *(ulonglong *)(lVar20 + 0x20 + lVar12);
      _Src = *(void **)(lVar20 + 0x28 + lVar12);
      lVar7 = param_2[1];
      param_2[1] = lVar7 + _Size;
      if ((ulonglong)(param_2[2] - lVar7) < _Size) {
        FUN_14112c458(param_2,lVar7);
LAB_14287dc73:
        memcpy((void *)(lVar7 + *param_2),_Src,_Size);
      }
      else if (_Size != 0) goto LAB_14287dc73;
      lVar12 = lVar12 + 0x30;
    } while ((longlong)iVar10 * 0x30 != lVar12);
  }
  return 0;
}



// FUNCTION 14287dc9e FUN_14287dc9e body=471 status=ok
// SIG undefined FUN_14287dc9e(void)

bool FUN_14287dc9e(longlong param_1,int *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t _Size;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar7 = (longlong)param_3 * 0x30 + *(longlong *)(param_1 + 0x20);
  if ((char)param_2[3] == '\x01') {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0x3ea) {
      lVar4 = (longlong)param_2[2] * (longlong)param_2[1] * (longlong)*param_2;
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(param_2 + 4);
        puVar6 = (undefined1 *)(*(longlong *)(lVar7 + 0x28) + 2);
        lVar7 = 0;
        do {
          *(undefined1 *)(lVar1 + lVar7 * 4) = *puVar6;
          *(undefined1 *)(lVar1 + 1 + lVar7 * 4) = puVar6[-1];
          *(undefined1 *)(lVar1 + 2 + lVar7 * 4) = puVar6[-2];
          *(undefined1 *)(lVar1 + 3 + lVar7 * 4) = 0xff;
          lVar7 = lVar7 + 1;
          puVar6 = puVar6 + 3;
        } while (lVar4 - lVar7 != 0);
        return true;
      }
      return true;
    }
    if (iVar3 == 0x3e9) {
      lVar4 = (longlong)param_2[2] * (longlong)param_2[1] * (longlong)*param_2;
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(param_2 + 4);
        puVar6 = *(undefined1 **)(lVar7 + 0x28);
        lVar7 = 0;
        do {
          *(undefined1 *)(lVar1 + lVar7 * 4) = *puVar6;
          *(undefined1 *)(lVar1 + 1 + lVar7 * 4) = puVar6[1];
          *(undefined1 *)(lVar1 + 2 + lVar7 * 4) = puVar6[2];
          *(undefined1 *)(lVar1 + 3 + lVar7 * 4) = 0xff;
          lVar7 = lVar7 + 1;
          puVar6 = puVar6 + 3;
        } while (lVar4 - lVar7 != 0);
        return true;
      }
      return true;
    }
    iVar2 = *param_2;
    if (iVar3 - 0x30U < 5) {
      lVar4 = (longlong)param_2[2] * (longlong)param_2[1] * (longlong)iVar2;
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(param_2 + 4);
        lVar7 = *(longlong *)(lVar7 + 0x28);
        lVar8 = 0;
        do {
          *(undefined1 *)(lVar1 + lVar8 * 4) = 0;
          *(undefined1 *)(lVar1 + 1 + lVar8 * 4) = *(undefined1 *)(lVar7 + 1 + lVar8 * 2);
          *(undefined1 *)(lVar1 + 2 + lVar8 * 4) = *(undefined1 *)(lVar7 + lVar8 * 2);
          *(undefined1 *)(lVar1 + 3 + lVar8 * 4) = 0xff;
          lVar8 = lVar8 + 1;
        } while (lVar4 - lVar8 != 0);
        return true;
      }
      return true;
    }
    iVar3 = param_2[1];
    iVar5 = param_2[2];
switchD_14287dd58_caseD_2:
    lVar4 = 4;
  }
  else {
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar5 = param_2[2];
    lVar4 = 0;
    switch((char)param_2[3]) {
    case '\0':
      lVar4 = 1;
      break;
    case '\x02':
    case '\b':
      goto switchD_14287dd58_caseD_2;
    case '\x03':
    case '\x04':
      lVar4 = 8;
      break;
    case '\x05':
      lVar4 = 0x10;
      break;
    case '\x06':
    case '\a':
      lVar4 = 2;
    }
  }
  _Size = (longlong)iVar5 * (longlong)iVar3 * iVar2 * lVar4;
  bVar9 = _Size - *(longlong *)(lVar7 + 0x20) == 0;
  if (bVar9) {
    memcpy(*(void **)(param_2 + 4),*(void **)(lVar7 + 0x28),_Size);
  }
  return bVar9;
}



// FUNCTION 14287de75 FUN_14287de75 body=131 status=ok
// SIG undefined FUN_14287de75(void)

int FUN_14287de75(ulonglong *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 1;
  if (0x4840 < (longlong)param_2) {
    iVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    iVar1 = iVar3 * 3;
    iVar2 = (int)(param_2 >> 0xe);
    if ((iVar2 < iVar1) && (iVar1 = iVar3 * 2, iVar2 < iVar1)) {
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      iVar1 = 1;
      if (1 < iVar3) {
        iVar1 = iVar3;
      }
    }
    else {
      iVar1 = iVar1 + -1;
    }
    iVar1 = iVar1 - (uint)(0x10 < iVar1);
    param_2 = (longlong)(param_2 + (longlong)iVar1 + -1) / (longlong)iVar1;
  }
  *param_1 = param_2;
  return iVar1;
}



// FUNCTION 14287def8 FUN_14287def8 body=5470 status=ok
// SIG undefined FUN_14287def8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287def8(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined1 (*pauVar16) [16];
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  uint uVar20;
  float fVar21;
  int iVar22;
  ulonglong uVar23;
  byte bVar24;
  undefined4 *puVar25;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 in_XMM2 [16];
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 in_XMM5 [16];
  undefined1 auVar39 [16];
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar49;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar53;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auStack_188 [40];
  undefined4 local_160;
  undefined1 (**local_158) [16];
  undefined1 (*local_148) [16];
  undefined8 uStack_140;
  undefined1 (*local_138) [16];
  undefined1 (*local_128) [16];
  undefined8 uStack_120;
  undefined1 (*local_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*local_108) [16];
  undefined1 (*local_100) [16];
  code *local_f0;
  undefined1 (**local_e8) [16];
  ulonglong local_e0;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined2 uVar45;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((byte)(*param_1)[0xc] < 2 || (*param_1)[0xd] == '\0') {
    cVar2 = (*param_2)[0xd];
    if ((byte)(*param_2)[0xc] < 2 || cVar2 == '\0') {
      if ((*param_1)[0xd] == cVar2 && (*param_2)[0xc] == (*param_1)[0xc]) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_188);
      }
      pauVar16 = (undefined1 (*) [16])
                 ((longlong)*(int *)(*param_1 + 4) * (longlong)*(int *)*param_1 *
                 (longlong)*(int *)(*param_1 + 8));
      uVar23 = 1;
      pauVar12 = pauVar16;
      if (0x4840 < (longlong)pauVar16) {
        iVar10 = (**(code **)(*DAT_14c82b500 + 0x20))();
        in_XMM0._8_8_ = extraout_XMM0_Qb;
        in_XMM0._0_8_ = extraout_XMM0_Qa;
        iVar22 = 1;
        if (1 < iVar10) {
          iVar22 = iVar10;
        }
        iVar10 = iVar22 * 3;
        iVar11 = (int)((ulonglong)pauVar16 >> 0xe);
        if ((iVar11 < iVar10) && (iVar10 = iVar22 * 2, iVar11 < iVar10)) {
          if (iVar11 < iVar22) {
            iVar22 = iVar11;
          }
          iVar10 = 1;
          if (1 < iVar22) {
            iVar10 = iVar22;
          }
        }
        else {
          iVar10 = iVar10 + -1;
        }
        uVar20 = iVar10 - (uint)(0x10 < iVar10);
        uVar23 = (ulonglong)uVar20;
        pauVar12 = (undefined1 (*) [16])
                   ((longlong)(pauVar16[-1] + (longlong)(int)uVar20 + 0xf) / (longlong)(int)uVar20);
        if (1 < (int)uVar20) {
          pauVar12 = (undefined1 (*) [16])((ulonglong)(pauVar12[3] + 0xf) & 0xffffffffffffffc0);
          uVar23 = (longlong)(pauVar16[-1] + 0xf + (longlong)pauVar12) / (longlong)pauVar12;
        }
      }
      auVar55 = _DAT_149e1a210;
      auVar51 = _DAT_149e1a200;
      auVar39 = _DAT_1499378f0;
      auVar37 = _DAT_1499356b0;
      auVar34 = _DAT_1499319e0;
      bVar3 = (*param_1)[0xc];
      iVar22 = (int)uVar23;
      if (bVar3 == 5) {
        if (8 < (byte)(*param_2)[0xc]) goto switchD_14287e213_caseD_5;
        pauVar19 = *(undefined1 (**) [16])param_1[1];
        switch((*param_2)[0xc]) {
        case 0:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (cVar2 == '\0') {
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                lVar13 = 0;
                do {
                  auVar36._4_8_ = 0;
                  auVar36._0_4_ = *(float *)*pauVar19;
                  if (*(float *)*pauVar19 <= 0.0) {
                    auVar36 = ZEXT812(0) << 0x20;
                  }
                  if (1.0 <= auVar36._0_4_) {
                    auVar36._4_8_ = auVar36._4_8_;
                    auVar36._0_4_ = 0x3f800000;
                  }
                  (*pauVar18)[lVar13] = (char)(int)(auVar36._0_4_ * 255.0 + 0.5);
                  lVar13 = lVar13 + 1;
                  pauVar19 = pauVar19 + 1;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = (code *)&LAB_14287fbbc;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar18;
            pauStack_110 = pauVar19;
          }
          else {
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                lVar13 = 0;
                auVar34 = pmovzxbd(in_XMM3,0xffffffff);
                do {
                  auVar37 = maxps(*pauVar19,auVar51);
                  auVar37 = minps(auVar37,auVar55);
                  fVar21 = auVar37._0_4_;
                  fVar46 = auVar37._4_4_;
                  fVar49 = auVar37._8_4_;
                  auVar50._4_4_ =
                       *(undefined4 *)
                        (&DAT_149e1bee0 +
                        (ulonglong)(ushort)((uint)((int)fVar46 + -0x39000000) >> 0x14) * 4);
                  auVar50._0_4_ =
                       *(undefined4 *)
                        (&DAT_149e1bee0 + (ulonglong)((int)fVar21 + 0xc7000000U >> 0x14) * 4);
                  auVar50._8_4_ =
                       *(undefined4 *)
                        (&DAT_149e1bee0 +
                        (ulonglong)(ushort)((uint)((int)fVar49 + -0x39000000) >> 0x14) * 4);
                  auVar50._12_4_ = 0;
                  auVar47._0_4_ = (uint)fVar21 >> 0xc;
                  auVar47._4_4_ = (uint)fVar46 >> 0xc;
                  auVar47._8_4_ = (uint)fVar49 >> 0xc;
                  auVar47._12_4_ = (uint)auVar37._12_4_ >> 0xc;
                  auVar28 = pmaddwd(auVar47 & auVar34 | auVar39,auVar50);
                  auVar40._4_4_ = (int)(fVar46 * 0.0 + 0.5) | auVar28._4_4_ >> 0x10;
                  auVar40._12_4_ = (int)(auVar37._12_4_ * 255.0 + 0.5) | auVar28._12_4_ >> 0x10;
                  auVar40._0_4_ = (int)(fVar49 * 0.0 + 0.5) | auVar28._8_4_ >> 0x10;
                  auVar40._8_4_ = (int)(fVar21 * 0.0 + 0.5) | auVar28._0_4_ >> 0x10;
                  auVar37 = packssdw(auVar40,auVar40);
                  sVar8 = auVar37._4_2_;
                  (*pauVar18)[lVar13] = (0 < sVar8) * (sVar8 < 0x100) * auVar37[4] - (0xff < sVar8);
                  lVar13 = lVar13 + 1;
                  pauVar19 = pauVar19 + 1;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = FUN_14287fa6a;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar18;
            pauStack_110 = pauVar19;
          }
          break;
        case 1:
          local_118 = *(undefined1 (**) [16])param_2[1];
          if (cVar2 == '\0') {
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = FUN_14287fce2;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            pauStack_110 = pauVar19;
            local_108 = local_118;
            local_100 = pauVar19;
          }
          else {
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = (code *)&LAB_14287fcae;
            local_128 = local_118;
            uStack_120 = pauVar19;
            local_118 = pauVar12;
            pauStack_110 = pauVar16;
          }
          break;
        case 2:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                FUN_142767bc2(pauVar19,&local_128);
                *(undefined4 *)(*pauVar18 + lVar13 * 4) = local_128._0_4_;
                lVar13 = lVar13 + 1;
                pauVar19 = pauVar19 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          local_f0 = FUN_14287feb0;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
LAB_14287f01c:
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140 & 0xffffffff00000000);
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          break;
        case 3:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              pfVar17 = (float *)(*pauVar19 + 0xc);
              lVar13 = 0;
              do {
                auVar38._4_8_ = 0;
                auVar38._0_4_ = pfVar17[-3];
                fVar21 = pfVar17[-2];
                fVar46 = pfVar17[-1];
                fVar49 = *pfVar17;
                if (pfVar17[-3] <= 0.0) {
                  auVar38 = ZEXT812(0) << 0x20;
                }
                if (1.0 <= auVar38._0_4_) {
                  auVar38._4_8_ = auVar38._4_8_;
                  auVar38._0_4_ = 0x3f800000;
                }
                *(short *)(*pauVar18 + lVar13 * 8) = (short)(int)(auVar38._0_4_ * 65535.0 + 0.5);
                if (fVar21 <= 0.0) {
                  fVar21 = 0.0;
                }
                if (1.0 <= fVar21) {
                  fVar21 = 1.0;
                }
                if (fVar46 <= 0.0) {
                  fVar46 = 0.0;
                }
                if (1.0 <= fVar46) {
                  fVar46 = 1.0;
                }
                *(short *)(*pauVar18 + lVar13 * 8 + 2) = (short)(int)(fVar21 * 65535.0 + 0.5);
                *(short *)(*pauVar18 + lVar13 * 8 + 4) = (short)(int)(fVar46 * 65535.0 + 0.5);
                if (fVar49 <= 0.0) {
                  fVar49 = 0.0;
                }
                if (1.0 <= fVar49) {
                  fVar49 = 1.0;
                }
                *(short *)(*pauVar18 + lVar13 * 8 + 6) = (short)(int)(fVar49 * 65535.0 + 0.5);
                lVar13 = lVar13 + 1;
                pfVar17 = pfVar17 + 4;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = FUN_14287ff46;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
          break;
        case 4:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              auVar34 = pmovsxwd(in_XMM3,0x1ff01ff01ff01ff);
              auVar37 = pmovsxwd(in_XMM4,0x200020002000200);
              auVar39 = pmovsxwd(in_XMM5,0x7c007c007c007c00);
              auVar51 = pmovsxbd(unaff_XMM9,0x1010101);
              auVar55 = pmovsxwd(unaff_XMM12,0x8000800080008000);
              do {
                fVar21 = *(float *)*pauVar19;
                fVar46 = *(float *)(*pauVar19 + 4);
                fVar49 = *(float *)(*pauVar19 + 8);
                fVar9 = *(float *)(*pauVar19 + 0xc);
                fVar29 = ABS(fVar21);
                fVar31 = ABS(fVar46);
                fVar32 = ABS(fVar49);
                fVar33 = ABS(fVar9);
                auVar57._0_4_ = (uint)fVar29 >> 0xd;
                auVar57._4_4_ = (uint)fVar31 >> 0xd;
                auVar57._8_4_ = (uint)fVar32 >> 0xd;
                auVar57._12_4_ = (uint)fVar33 >> 0xd;
                auVar28._0_4_ =
                     -(uint)((float)((uint)((uint)fVar29 < 0x38800000) * 0x38800000 |
                                    (uint)((uint)fVar29 >= 0x38800000) * (int)fVar29) == fVar29);
                auVar28._4_4_ =
                     -(uint)((float)((uint)((uint)fVar31 < 0x38800000) * 0x38800000 |
                                    (uint)((uint)fVar31 >= 0x38800000) * (int)fVar31) == fVar31);
                auVar28._8_4_ =
                     -(uint)((float)((uint)((uint)fVar32 < 0x38800000) * 0x38800000 |
                                    (uint)((uint)fVar32 >= 0x38800000) * (int)fVar32) == fVar32);
                auVar28._12_4_ =
                     -(uint)((float)((uint)((uint)fVar33 < 0x38800000) * 0x38800000 |
                                    (uint)((uint)fVar33 >= 0x38800000) * (int)fVar33) == fVar33);
                auVar58 = auVar57 & auVar51;
                auVar27._0_4_ = (int)(fVar29 + 0.5) + -0x3f000000;
                auVar27._4_4_ = (int)(fVar31 + 0.5) + -0x3f000000;
                auVar27._8_4_ = (int)(fVar32 + 0.5) + -0x3f000000;
                auVar27._12_4_ = (int)(fVar33 + 0.5) + -0x3f000000;
                auVar59._0_4_ = auVar58._0_4_ + (int)fVar29 + 0xc8000fffU >> 0xd;
                auVar59._4_4_ = auVar58._4_4_ + (int)fVar31 + 0xc8000fffU >> 0xd;
                auVar59._8_4_ = auVar58._8_4_ + (int)fVar32 + 0xc8000fffU >> 0xd;
                auVar59._12_4_ = auVar58._12_4_ + (int)fVar33 + 0xc8000fffU >> 0xd;
                auVar28 = blendvps(auVar27,auVar59,auVar28);
                auVar26._0_4_ =
                     -(uint)((float)((uint)((uint)fVar29 < 0x47800000) * 0x47800000 |
                                    (uint)((uint)fVar29 >= 0x47800000) * (int)fVar29) == fVar29);
                auVar26._4_4_ =
                     -(uint)((float)((uint)((uint)fVar31 < 0x47800000) * 0x47800000 |
                                    (uint)((uint)fVar31 >= 0x47800000) * (int)fVar31) == fVar31);
                auVar26._8_4_ =
                     -(uint)((float)((uint)((uint)fVar32 < 0x47800000) * 0x47800000 |
                                    (uint)((uint)fVar32 >= 0x47800000) * (int)fVar32) == fVar32);
                auVar26._12_4_ =
                     -(uint)((float)((uint)((uint)fVar33 < 0x47800000) * 0x47800000 |
                                    (uint)((uint)fVar33 >= 0x47800000) * (int)fVar33) == fVar33);
                auVar30._4_4_ = -(uint)NAN(fVar46);
                auVar30._0_4_ = -(uint)NAN(fVar21);
                auVar30._8_4_ = -(uint)NAN(fVar49);
                auVar30._12_4_ = -(uint)NAN(fVar9);
                auVar56._0_4_ = (int)fVar21 >> 0x10;
                auVar56._4_4_ = (int)fVar46 >> 0x10;
                auVar56._8_4_ = (int)fVar49 >> 0x10;
                auVar56._12_4_ = (int)fVar9 >> 0x10;
                auVar28 = auVar56 & auVar55 |
                          ((auVar57 & auVar34 | auVar37) & auVar30 | auVar39) & auVar26 |
                          ~auVar26 & auVar28;
                auVar28 = packssdw(auVar28,auVar28);
                *(longlong *)(*pauVar18 + lVar13 * 8) = auVar28._0_8_;
                lVar13 = lVar13 + 1;
                pauVar19 = pauVar19 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = FUN_142880048;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
          break;
        case 5:
          goto switchD_14287e213_caseD_5;
        case 6:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                auVar35._4_8_ = 0;
                auVar35._0_4_ = *(float *)*pauVar19;
                if (*(float *)*pauVar19 <= 0.0) {
                  auVar35 = ZEXT812(0) << 0x20;
                }
                if (1.0 <= auVar35._0_4_) {
                  auVar35._4_8_ = auVar35._4_8_;
                  auVar35._0_4_ = 0x3f800000;
                }
                *(short *)(*pauVar18 + lVar13 * 2) = (short)(int)(auVar35._0_4_ * 65535.0 + 0.5);
                lVar13 = lVar13 + 1;
                pauVar19 = pauVar19 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = (code *)&LAB_14287fc34;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
          break;
        case 7:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                fVar21 = ABS(*(float *)*pauVar19);
                if ((uint)fVar21 < 0x47800000) {
                  if ((uint)fVar21 < 0x38800000) {
                    fVar46 = fVar21 + 0.5;
                  }
                  else {
                    fVar21 = (float)((int)fVar21 + 0x8000fff +
                                     (uint)(((uint)fVar21 >> 0xd & 1) != 0) >> 0xd);
                    fVar46 = fVar21;
                  }
                }
                else {
                  fVar46 = (float)((0x7f800000 < (uint)fVar21 | 0x3e) << 9);
                }
                iVar22 = movmskps(fVar21,ZEXT416((uint)*(float *)*pauVar19));
                *(ushort *)(*pauVar18 + lVar13 * 2) = (ushort)(iVar22 << 0xf) | SUB42(fVar46,0);
                lVar13 = lVar13 + 1;
                pauVar19 = pauVar19 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = (code *)&LAB_14288022a;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
          break;
        case 8:
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                *(undefined4 *)(*pauVar18 + lVar13 * 4) = *(undefined4 *)*pauVar19;
                lVar13 = lVar13 + 1;
                pauVar19 = pauVar19 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = (code *)&LAB_1428802e8;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
        }
LAB_14287f41a:
        pwVar15 = L"Texture.CopyImage.PF";
      }
      else {
        bVar4 = (*param_2)[0xc];
        if (bVar4 == 5) {
          if (8 < bVar3) goto switchD_14287e213_caseD_5;
          pauVar19 = *(undefined1 (**) [16])param_2[1];
          switch(bVar3) {
          case 0:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            cVar2 = (*param_1)[0xd];
            if (cVar2 == '\x02') {
              if (iVar22 < 2) {
                if (0 < (longlong)pauVar16) {
                  puVar25 = (undefined4 *)(*pauVar19 + 0xc);
                  lVar13 = 0;
                  do {
                    uVar1 = (&DAT_14c758c60)[(byte)(*pauVar18)[lVar13]];
                    puVar25[-3] = uVar1;
                    puVar25[-2] = uVar1;
                    puVar25[-1] = uVar1;
                    *puVar25 = 0x3f800000;
                    lVar13 = lVar13 + 1;
                    puVar25 = puVar25 + 4;
                  } while ((longlong)pauVar16 - lVar13 != 0);
                }
                goto switchD_14287e213_caseD_5;
              }
              uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
              local_f0 = (code *)&LAB_1428803aa;
              local_128 = pauVar12;
              uStack_120 = pauVar16;
              local_118 = pauVar19;
              pauStack_110 = pauVar18;
            }
            else if (cVar2 == '\x01') {
              if (iVar22 < 2) {
                if (0 < (longlong)pauVar16) {
                  puVar25 = (undefined4 *)(*pauVar19 + 0xc);
                  lVar13 = 0;
                  do {
                    uVar1 = *(undefined4 *)
                             (&DAT_14c758770 + (ulonglong)(byte)(*pauVar18)[lVar13] * 4);
                    puVar25[-3] = uVar1;
                    puVar25[-2] = uVar1;
                    puVar25[-1] = uVar1;
                    *puVar25 = 0x3f800000;
                    lVar13 = lVar13 + 1;
                    puVar25 = puVar25 + 4;
                  } while ((longlong)pauVar16 - lVar13 != 0);
                }
                goto switchD_14287e213_caseD_5;
              }
              uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
              local_f0 = (code *)&LAB_14288041c;
              local_128 = pauVar12;
              uStack_120 = pauVar16;
              local_118 = pauVar19;
              pauStack_110 = pauVar18;
            }
            else {
              if (cVar2 != '\0') goto switchD_14287e213_caseD_5;
              if (iVar22 < 2) {
                if (0 < (longlong)pauVar16) {
                  puVar25 = (undefined4 *)(*pauVar19 + 0xc);
                  lVar13 = 0;
                  do {
                    fVar21 = (float)(byte)(*pauVar18)[lVar13] * 0.003921569;
                    puVar25[-3] = fVar21;
                    puVar25[-2] = fVar21;
                    puVar25[-1] = fVar21;
                    *puVar25 = 0x3f800000;
                    lVar13 = lVar13 + 1;
                    puVar25 = puVar25 + 4;
                  } while ((longlong)pauVar16 - lVar13 != 0);
                }
                goto switchD_14287e213_caseD_5;
              }
              uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
              local_f0 = (code *)&LAB_142880332;
              local_128 = pauVar12;
              uStack_120 = pauVar16;
              local_118 = pauVar19;
              pauStack_110 = pauVar18;
            }
            break;
          case 1:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            cVar2 = (*param_1)[0xd];
            if (cVar2 == '\x02') {
              if (iVar22 < 2) {
                if (0 < (longlong)pauVar16) {
                  pfVar17 = (float *)(*pauVar19 + 0xc);
                  lVar13 = 0;
                  do {
                    fVar21 = (float)(&DAT_14c758c60)[(byte)(*pauVar18)[lVar13 * 4 + 1]];
                    fVar46 = (float)(&DAT_14c758c60)[(byte)(*pauVar18)[lVar13 * 4]];
                    bVar3 = (*pauVar18)[lVar13 * 4 + 3];
                    *(undefined4 *)*(undefined1 (*) [16])(pfVar17 + -3) =
                         (&DAT_14c758c60)[(byte)(*pauVar18)[lVar13 * 4 + 2]];
                    pfVar17[-2] = fVar21;
                    pfVar17[-1] = fVar46;
                    *pfVar17 = (float)bVar3 * 0.003921569;
                    lVar13 = lVar13 + 1;
                    pfVar17 = pfVar17 + 4;
                  } while ((longlong)pauVar16 - lVar13 != 0);
                }
                goto switchD_14287e213_caseD_5;
              }
              uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
              local_f0 = FUN_14288065a;
              local_128 = pauVar12;
              uStack_120 = pauVar16;
              local_118 = pauVar19;
              pauStack_110 = pauVar18;
            }
            else if (cVar2 == '\x01') {
              if (iVar22 < 2) {
                if (0 < (longlong)pauVar16) {
                  pfVar17 = (float *)(*pauVar19 + 0xc);
                  lVar13 = 0;
                  do {
                    fVar21 = *(float *)(&DAT_14c758770 +
                                       (ulonglong)(byte)(*pauVar18)[lVar13 * 4 + 1] * 4);
                    fVar46 = *(float *)(&DAT_14c758770 +
                                       (ulonglong)(byte)(*pauVar18)[lVar13 * 4] * 4);
                    bVar3 = (*pauVar18)[lVar13 * 4 + 3];
                    *(undefined4 *)*(undefined1 (*) [16])(pfVar17 + -3) =
                         *(undefined4 *)
                          (&DAT_14c758770 + (ulonglong)(byte)(*pauVar18)[lVar13 * 4 + 2] * 4);
                    pfVar17[-2] = fVar21;
                    pfVar17[-1] = fVar46;
                    *pfVar17 = (float)bVar3 * 0.003921569;
                    lVar13 = lVar13 + 1;
                    pfVar17 = pfVar17 + 4;
                  } while ((longlong)pauVar16 - lVar13 != 0);
                }
                goto switchD_14287e213_caseD_5;
              }
              uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
              local_f0 = FUN_1428806fa;
              local_128 = pauVar12;
              uStack_120 = pauVar16;
              local_118 = pauVar19;
              pauStack_110 = pauVar18;
            }
            else {
              if (cVar2 != '\0') goto switchD_14287e213_caseD_5;
              uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
              local_f0 = (code *)&LAB_142880502;
              local_128 = pauVar12;
              uStack_120 = pauVar16;
              local_118 = pauVar19;
              pauStack_110 = pauVar18;
              local_108 = pauVar19;
              local_100 = pauVar18;
            }
            break;
          case 2:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                do {
                  FUN_1467ed870(pauVar18,&local_128);
                  *(undefined1 (**) [16])*pauVar19 = local_128;
                  *(undefined1 (**) [16])(*pauVar19 + 8) = uStack_120;
                  pauVar19 = pauVar19 + 1;
                  pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
                  pauVar16 = (undefined1 (*) [16])(pauVar16[-1] + 0xf);
                } while (pauVar16 != (undefined1 (*) [16])0x0);
              }
              goto switchD_14287e213_caseD_5;
            }
            local_f0 = FUN_14288079a;
            local_118 = pauVar19;
            pauStack_110 = pauVar18;
            goto LAB_14287f01c;
          case 3:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                pfVar17 = (float *)(*pauVar19 + 0xc);
                lVar13 = 0;
                do {
                  uVar5 = *(ushort *)(*pauVar18 + lVar13 * 8 + 6);
                  uVar6 = *(ushort *)(*pauVar18 + lVar13 * 8 + 4);
                  uVar7 = *(ushort *)(*pauVar18 + lVar13 * 8 + 2);
                  *(float *)*(undefined1 (*) [16])(pfVar17 + -3) =
                       (float)*(ushort *)(*pauVar18 + lVar13 * 8) * 1.5259022e-05;
                  pfVar17[-2] = (float)uVar7 * 1.5259022e-05;
                  pfVar17[-1] = (float)uVar6 * 1.5259022e-05;
                  *pfVar17 = (float)uVar5 * 1.5259022e-05;
                  lVar13 = lVar13 + 1;
                  pfVar17 = pfVar17 + 4;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = (code *)&LAB_142880830;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar19;
            pauStack_110 = pauVar18;
            break;
          case 4:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                lVar13 = 0;
                auVar39 = pmovsxwd(in_XMM0,0x7fff7fff7fff7fff);
                auVar51 = pmovsxwd(in_XMM2,0x7bff7bff7bff7bff);
                auVar55 = pmovsxwd(in_XMM4,0x7c007c007c007c00);
                auVar28 = pmovsxbw(in_XMM5,0x4000400040004000);
                do {
                  uVar23 = *(ulonglong *)(*pauVar18 + lVar13 * 8);
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = uVar23;
                  auVar58 = pmovzxwd(unaff_XMM8,auVar58);
                  auVar58 = auVar58 & auVar39;
                  iVar22 = auVar58._0_4_;
                  iVar10 = auVar58._4_4_;
                  iVar11 = auVar58._8_4_;
                  iVar53 = auVar58._12_4_;
                  auVar52._0_4_ = (float)(iVar22 << 0xd) * 5.192297e+33;
                  auVar52._4_4_ = (float)(iVar10 << 0xd) * 5.192297e+33;
                  auVar52._8_4_ = (float)(iVar11 << 0xd) * 5.192297e+33;
                  auVar52._12_4_ = (float)(iVar53 << 0xd) * 5.192297e+33;
                  auVar54._0_4_ = -(uint)(auVar51._0_4_ < iVar22);
                  auVar54._4_4_ = -(uint)(auVar51._4_4_ < iVar10);
                  auVar54._8_4_ = -(uint)(auVar51._8_4_ < iVar11);
                  auVar54._12_4_ = -(uint)(auVar51._12_4_ < iVar53);
                  uVar45 = (undefined2)(uVar23 >> 0x30);
                  auVar44._8_4_ = 0;
                  auVar44._0_8_ = uVar23;
                  auVar44._12_2_ = uVar45;
                  auVar44._14_2_ = uVar45;
                  uVar45 = (undefined2)(uVar23 >> 0x20);
                  auVar43._12_4_ = auVar44._12_4_;
                  auVar43._8_2_ = 0;
                  auVar43._0_8_ = uVar23;
                  auVar43._10_2_ = uVar45;
                  auVar42._10_6_ = auVar43._10_6_;
                  auVar42._8_2_ = uVar45;
                  auVar42._0_8_ = uVar23;
                  uVar45 = (undefined2)(uVar23 >> 0x10);
                  auVar41._8_8_ = auVar42._8_8_;
                  auVar41._6_2_ = uVar45;
                  auVar41._4_2_ = uVar45;
                  auVar41._0_2_ = (undefined2)uVar23;
                  auVar41._2_2_ = auVar41._0_2_;
                  auVar48._0_4_ = -(uint)(auVar55._0_4_ < iVar22);
                  auVar48._4_4_ = -(uint)(auVar55._4_4_ < iVar10);
                  auVar48._8_4_ = -(uint)(auVar55._8_4_ < iVar11);
                  auVar48._12_4_ = -(uint)(auVar55._12_4_ < iVar53);
                  unaff_XMM8 = auVar48 & auVar28 | auVar41 & auVar34 | auVar54 & auVar37 | auVar52;
                  *pauVar19 = unaff_XMM8;
                  lVar13 = lVar13 + 1;
                  pauVar19 = pauVar19 + 1;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = FUN_1428808dc;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar19;
            pauStack_110 = pauVar18;
            break;
          case 5:
            goto switchD_14287e213_caseD_5;
          case 6:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                puVar25 = (undefined4 *)(*pauVar19 + 0xc);
                lVar13 = 0;
                do {
                  fVar21 = (float)*(ushort *)(*pauVar18 + lVar13 * 2) * 1.5259022e-05;
                  puVar25[-3] = fVar21;
                  puVar25[-2] = fVar21;
                  puVar25[-1] = fVar21;
                  *puVar25 = 0x3f800000;
                  lVar13 = lVar13 + 1;
                  puVar25 = puVar25 + 4;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = (code *)&LAB_14288048e;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar19;
            pauStack_110 = pauVar18;
            break;
          case 7:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                puVar25 = (undefined4 *)(*pauVar19 + 0xc);
                lVar13 = 0;
                do {
                  uVar5 = *(ushort *)(*pauVar18 + lVar13 * 2);
                  uVar20 = (uint)uVar5 << 0xd;
                  if ((uVar20 & 0xf800000) == 0xf800000) {
                    fVar21 = (float)(uVar20 | 0x70000000);
                  }
                  else if ((uVar20 & 0xf800000) == 0) {
                    fVar21 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar21 = (float)((uVar20 & 0xfffe000) + 0x38000000);
                  }
                  puVar25[-3] = (int)(short)uVar5 & 0x80000000U | (uint)fVar21;
                  *(undefined8 *)(puVar25 + -2) = 0;
                  *puVar25 = 0x3f800000;
                  lVar13 = lVar13 + 1;
                  puVar25 = puVar25 + 4;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = FUN_1428809f2;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar19;
            pauStack_110 = pauVar18;
            break;
          case 8:
            pauVar18 = *(undefined1 (**) [16])param_1[1];
            if (iVar22 < 2) {
              if (0 < (longlong)pauVar16) {
                puVar25 = (undefined4 *)(*pauVar19 + 0xc);
                lVar13 = 0;
                do {
                  puVar25[-3] = *(undefined4 *)(*pauVar18 + lVar13 * 4);
                  *(undefined8 *)(puVar25 + -2) = 0;
                  *puVar25 = 0x3f800000;
                  lVar13 = lVar13 + 1;
                  puVar25 = puVar25 + 4;
                } while ((longlong)pauVar16 - lVar13 != 0);
              }
              goto switchD_14287e213_caseD_5;
            }
            uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
            local_f0 = (code *)&LAB_142880ab6;
            local_128 = pauVar12;
            uStack_120 = pauVar16;
            local_118 = pauVar19;
            pauStack_110 = pauVar18;
          }
          goto LAB_14287f41a;
        }
        if ((bVar4 == 3 && bVar3 == 1) && (*param_1)[0xd] == 0) {
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = FUN_142880b12;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = *(undefined1 (**) [16])param_2[1];
          pauStack_110 = *(undefined1 (**) [16])param_1[1];
          local_108 = *(undefined1 (**) [16])param_2[1];
          local_100 = *(undefined1 (**) [16])param_1[1];
          goto LAB_14287f41a;
        }
        if ((bVar3 == 3 && (bVar4 ^ 1) == 0) && (*param_2)[0xd] == 0) {
          pauVar19 = *(undefined1 (**) [16])param_1[1];
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                *(uint *)(*pauVar18 + lVar13 * 4) =
                     ((uint)*(ushort *)(*pauVar19 + lVar13 * 8 + 2) * 0x100 -
                     (uint)*(ushort *)(*pauVar19 + lVar13 * 8 + 2)) + 0x807f >> 8 & 0xff00 |
                     ((uint)*(ushort *)(*pauVar19 + lVar13 * 8) * 0x100 -
                     (uint)*(ushort *)(*pauVar19 + lVar13 * 8)) + 0x807f & 0xff0000 |
                     (uint)*(ushort *)(*pauVar19 + lVar13 * 8 + 6) * 0xff00 + 0x807f00 & 0xff000000
                     | ((uint)*(ushort *)(*pauVar19 + lVar13 * 8 + 4) * 0x100 -
                       (uint)*(ushort *)(*pauVar19 + lVar13 * 8 + 4)) + 0x807f >> 0x10;
                lVar13 = lVar13 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = FUN_142880bec;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
          goto LAB_14287f41a;
        }
        bVar24 = (*param_1)[0xd] ^ (*param_2)[0xd];
        if ((bVar3 == 1 && bVar4 == 0) && bVar24 == 0) {
          pauVar19 = *(undefined1 (**) [16])param_1[1];
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                (*pauVar18)[lVar13] = (*pauVar19)[lVar13 * 4 + 2];
                lVar13 = lVar13 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = (code *)&LAB_142880c9a;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar18;
          pauStack_110 = pauVar19;
          goto LAB_14287f41a;
        }
        if ((bVar3 == 0 && (bVar4 ^ 1) == 0) && bVar24 == 0) {
          pauVar19 = *(undefined1 (**) [16])param_1[1];
          pauVar18 = *(undefined1 (**) [16])param_2[1];
          if (iVar22 < 2) {
            if (0 < (longlong)pauVar16) {
              lVar13 = 0;
              do {
                *(uint *)(*pauVar18 + lVar13 * 4) =
                     (uint)(byte)(*pauVar19)[lVar13] * 0x10101 | 0xff000000;
                lVar13 = lVar13 + 1;
              } while ((longlong)pauVar16 - lVar13 != 0);
            }
            goto switchD_14287e213_caseD_5;
          }
          uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140._4_4_ << 0x20);
          local_f0 = (code *)&LAB_142880cce;
          local_128 = pauVar12;
          uStack_120 = pauVar16;
          local_118 = pauVar19;
          pauStack_110 = pauVar18;
          goto LAB_14287f41a;
        }
        local_128 = *(undefined1 (**) [16])*param_1;
        lVar13 = (longlong)*(int *)(*param_1 + 8) * (longlong)*(int *)(*param_1 + 4);
        uVar23 = lVar13 * *(int *)*param_1;
        if ((longlong)uVar23 < 0x1000) {
          uStack_120._0_6_ = CONCAT24(5,*(int *)(*param_1 + 8));
          local_118 = (undefined1 (*) [16])0x0;
          pauStack_110 = (undefined1 (*) [16])0x0;
          local_108 = (undefined1 (*) [16])0x0;
          FUN_14287f4cc(&local_128);
          local_148 = local_128;
          uStack_140 = uStack_120;
          local_138 = local_118;
          FUN_14287def8(param_1,&local_148);
          local_148 = local_128;
          uStack_140 = uStack_120;
          local_138 = local_118;
          FUN_14287def8(&local_148,param_2);
          if (local_118 != (undefined1 (*) [16])0x0) {
            FUN_1400020a8();
          }
          goto switchD_14287e213_caseD_5;
        }
        lVar14 = 1;
        if (0x4840 < uVar23) {
          iVar10 = (**(code **)(*DAT_14c82b500 + 0x20))();
          iVar22 = 1;
          if (1 < iVar10) {
            iVar22 = iVar10;
          }
          iVar10 = iVar22 * 3;
          iVar11 = (int)(uVar23 >> 0xe);
          if ((iVar11 < iVar10) && (iVar10 = iVar22 * 2, iVar11 < iVar10)) {
            if (iVar11 < iVar22) {
              iVar22 = iVar11;
            }
            iVar10 = 1;
            if (1 < iVar22) {
              iVar10 = iVar22;
            }
          }
          else {
            iVar10 = iVar10 + -1;
          }
          lVar14 = (longlong)(int)(iVar10 - (uint)(0x10 < iVar10));
        }
        lVar14 = (lVar14 + lVar13 + -1) / lVar14;
        uVar23 = (lVar14 + lVar13 + -1) / lVar14;
        pauStack_110 = (undefined1 (*) [16])(longlong)(int)lVar14;
        local_118 = *(undefined1 (**) [16])param_1[1];
        local_128 = *(undefined1 (**) [16])*param_1;
        uStack_120 = *(undefined1 (**) [16])(*param_1 + 8);
        uStack_140 = (undefined1 (*) [16])((ulonglong)uStack_140 & 0xffffffff00000000);
        local_f0 = FUN_142880d10;
        pwVar15 = L"PF.CopyImage.TempLinear";
        local_108 = param_1;
        local_100 = param_2;
      }
      local_e8 = &local_128;
      local_158 = &local_148;
      local_148 = (undefined1 (*) [16])0x0;
      local_160 = 2;
      FUN_1411ca36e(pwVar15,uVar23 & 0xffffffff,1);
      goto switchD_14287e213_caseD_5;
    }
    local_128 = *(undefined1 (**) [16])*param_2;
    local_118 = *(undefined1 (**) [16])param_2[1];
    uStack_120._6_2_ = (undefined2)((ulonglong)*(undefined8 *)(*param_2 + 8) >> 0x30);
    uStack_120._0_5_ = (uint5)*(undefined8 *)(*param_2 + 8);
    uStack_120._0_6_ = (uint6)(uint5)uStack_120;
    pauVar12 = param_1;
    param_2 = (undefined1 (*) [16])&local_128;
  }
  else {
    local_128 = *(undefined1 (**) [16])*param_1;
    pauVar12 = (undefined1 (*) [16])&local_128;
    local_118 = *(undefined1 (**) [16])param_1[1];
    uStack_120._6_2_ = (undefined2)((ulonglong)*(undefined8 *)(*param_1 + 8) >> 0x30);
    uStack_120._0_5_ = (uint5)*(undefined8 *)(*param_1 + 8);
    uStack_120._0_6_ = (uint6)(uint5)uStack_120;
  }
  FUN_14287def8(pauVar12,param_2);
switchD_14287e213_caseD_5:
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287f4cc FUN_14287f4cc body=155 status=ok
// SIG undefined FUN_14287f4cc(void)

void FUN_14287f4cc(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((ulonglong)*(byte *)(param_1 + 3) < 9) {
    lVar2 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(param_1 + 3) * 8);
  }
  else {
    lVar2 = 0;
  }
  uVar3 = (longlong)param_1[1] * (longlong)*param_1 * param_1[2] * lVar2;
  if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(ulonglong *)(param_1 + 8) == uVar3) {
    lVar2 = 0;
    uVar1 = uVar3;
  }
  else {
    FUN_140d2d4a8(param_1 + 4,uVar3);
    lVar2 = *(longlong *)(param_1 + 6);
    uVar1 = *(ulonglong *)(param_1 + 8);
  }
  *(ulonglong *)(param_1 + 6) = lVar2 + uVar3;
  if (uVar1 - lVar2 < uVar3) {
    FUN_14112c458(param_1 + 4);
    return;
  }
  return;
}



// FUNCTION 14287f568 FUN_14287f568 body=146 status=ok
// SIG undefined FUN_14287f568(void)

void FUN_14287f568(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == '\x01') {
    param_4 = '\x02' - (*(char *)((longlong)param_1 + 0xd) == '\x01');
  }
  uVar1 = *(undefined4 *)(param_1 + 1);
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined1 *)((longlong)param_2 + 0xc) = param_3;
  *(char *)((longlong)param_2 + 0xd) = param_4;
  FUN_14287f4cc(param_2);
  local_28 = param_2[2];
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_48 = param_1[2];
  local_58 = *(undefined4 *)param_1;
  uStack_54 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_50 = *(undefined4 *)(param_1 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_14287def8();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287f5fc FUN_14287f5fc body=202 status=ok
// SIG undefined FUN_14287f5fc(void)

void FUN_14287f5fc(longlong param_1,undefined8 param_2,undefined1 param_3,char param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 == '\x01') {
    param_4 = '\x02' - (*(char *)(param_1 + 0x29) == '\x01');
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    local_60 = CONCAT31(local_60._1_3_,param_4);
    local_68 = param_3;
    FUN_146987992(param_2,**(undefined4 **)(param_1 + 0x18),(*(undefined4 **)(param_1 + 0x18))[1],
                  *(int *)(param_1 + 0x20));
    local_30 = &local_48;
    local_58 = &local_28;
    local_28 = 0;
    local_20 = 0;
    local_38 = FUN_142880ee2;
    local_60 = 0;
    local_48 = param_1;
    local_40 = param_2;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x20),1);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287f6c7 FUN_14287f6c7 body=786 status=ok
// SIG undefined FUN_14287f6c7(void)

ulonglong FUN_14287f6c7(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *****pppppuVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined8 *local_98;
  undefined8 ****local_90;
  undefined4 *local_88;
  undefined8 ****local_80;
  undefined4 local_74;
  undefined8 ****local_70;
  undefined8 ****local_68;
  undefined8 ****local_60;
  undefined1 *local_58;
  undefined1 local_49;
  undefined8 ****local_48;
  undefined8 ****local_40;
  code *local_38;
  undefined8 ****local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = 0;
  if ((*(byte *)(param_1 + 3) < 6) && ((0x3aU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
    local_74 = 0x3f7f7f7f;
    pppppuVar7 = (undefined8 *****)
                 ((longlong)param_1[2] * (longlong)param_1[1] * (longlong)*param_1);
    uVar9 = 1;
    pppppuVar3 = pppppuVar7;
    if (0x4840 < (longlong)pppppuVar7) {
      iVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
      iVar6 = 1;
      if (1 < iVar1) {
        iVar6 = iVar1;
      }
      iVar1 = iVar6 * 3;
      iVar2 = (int)((ulonglong)pppppuVar7 >> 0xe);
      if ((iVar2 < iVar1) && (iVar1 = iVar6 * 2, iVar2 < iVar1)) {
        if (iVar2 < iVar6) {
          iVar6 = iVar2;
        }
        iVar1 = 1;
        if (1 < iVar6) {
          iVar1 = iVar6;
        }
      }
      else {
        iVar1 = iVar1 + -1;
      }
      uVar8 = iVar1 - (uint)(0x10 < iVar1);
      uVar9 = (ulonglong)uVar8;
      pppppuVar3 = (undefined8 *****)
                   (((longlong)pppppuVar7 + (longlong)(int)uVar8 + -1) / (longlong)(int)uVar8);
      if (1 < (int)uVar8) {
        pppppuVar3 = (undefined8 *****)((longlong)pppppuVar3 + 0x3fU & 0xffffffffffffffc0);
        uVar9 = ((longlong)pppppuVar7 + -1 + (longlong)pppppuVar3) / (longlong)pppppuVar3;
      }
    }
    uVar4 = 0;
    switch((char)param_1[3]) {
    case '\x01':
      local_48 = *(undefined8 *****)(param_1 + 4);
      local_80 = &local_48;
      local_60 = &local_80;
      local_68 = &local_90;
      local_70 = &local_40;
      local_38 = (code *)&LAB_142880f88;
      local_90 = pppppuVar7;
      local_40 = pppppuVar3;
      break;
    default:
      goto switchD_14287f7d5_caseD_2;
    case '\x03':
      local_48 = *(undefined8 *****)(param_1 + 4);
      local_80 = &local_48;
      local_60 = &local_80;
      local_68 = &local_90;
      local_70 = &local_40;
      local_38 = (code *)&LAB_142881032;
      local_90 = pppppuVar7;
      local_40 = pppppuVar3;
      break;
    case '\x04':
      local_80 = *(undefined8 *****)(param_1 + 4);
      local_60 = &local_90;
      local_88 = &local_74;
      local_68 = &local_40;
      local_70 = &local_48;
      local_38 = FUN_14288107a;
      local_90 = &local_80;
      local_48 = pppppuVar3;
      local_40 = pppppuVar7;
      break;
    case '\x05':
      local_80 = *(undefined8 *****)(param_1 + 4);
      local_60 = &local_90;
      local_88 = &local_74;
      local_68 = &local_40;
      local_70 = &local_48;
      local_38 = (code *)&LAB_142880fce;
      local_90 = &local_80;
      local_48 = pppppuVar3;
      local_40 = pppppuVar7;
    }
    local_58 = &local_49;
    local_20 = 0;
    local_28 = 0;
    local_49 = 0;
    local_30 = &local_70;
    local_98 = &local_28;
    local_a0 = 2;
    uVar5 = FUN_1411ca36e(L"Texture.DetectAlphaChannel.PF",uVar9 & 0xffffffff,1);
    uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_49);
  }
switchD_14287f7d5_caseD_2:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287f9da FUN_14287f9da body=69 status=ok
// SIG undefined FUN_14287f9da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287f9da(void)

{
  _DAT_14c98e1f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014287fa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e1f8,1);
  return;
}



// FUNCTION 14287fa1f FUN_14287fa1f body=39 status=ok
// SIG undefined FUN_14287fa1f(void)

bool FUN_14287fa1f(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (((0 < (longlong)param_1) && (0 < (longlong)param_2)) && ((param_2 | param_1) < 0x80000000)) {
    bVar1 = param_2 * param_1 >> 0x20 == 0;
  }
  return bVar1;
}



// FUNCTION 14287fa46 FUN_14287fa46 body=22 status=ok
// SIG undefined FUN_14287fa46(void)

undefined1 FUN_14287fa46(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0xff;
  if (param_1 - 1U < 0xb) {
    uVar1 = (&DAT_149ef4c40)[param_1 - 1U];
  }
  return uVar1;
}



// FUNCTION 14287fa6a FUN_14287fa6a body=338 status=ok
// SIG undefined FUN_14287fa6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287fa6a(longlong *param_1,int *param_2)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar4 = _DAT_149e1a210;
  auVar3 = _DAT_149e1a200;
  auVar2 = _DAT_1499378f0;
  lVar5 = *param_1;
  lVar7 = lVar5 * *param_2;
  lVar6 = param_1[1];
  if (lVar7 + lVar5 < param_1[1]) {
    lVar6 = lVar7 + lVar5;
  }
  if (lVar7 < lVar6) {
    lVar5 = lVar5 * *param_2 * 0x10;
    auVar8 = pmovzxbd(in_XMM3,0xffffffff);
    do {
      auVar10 = maxps(*(undefined1 (*) [16])(param_1[3] + lVar5),auVar3);
      auVar10 = minps(auVar10,auVar4);
      fVar9 = auVar10._0_4_;
      fVar12 = auVar10._4_4_;
      fVar13 = auVar10._8_4_;
      auVar15._4_4_ =
           *(undefined4 *)
            (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar12 + -0x39000000) >> 0x14) * 4);
      auVar15._0_4_ =
           *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar9 + 0xc7000000U >> 0x14) * 4);
      auVar14._0_4_ = (uint)fVar9 >> 0xc;
      auVar14._4_4_ = (uint)fVar12 >> 0xc;
      auVar14._8_4_ = (uint)fVar13 >> 0xc;
      auVar14._12_4_ = (uint)auVar10._12_4_ >> 0xc;
      auVar15._8_4_ =
           *(undefined4 *)
            (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar13 + -0x39000000) >> 0x14) * 4);
      auVar15._12_4_ = 0;
      auVar15 = pmaddwd(auVar14 & auVar8 | auVar2,auVar15);
      auVar11._4_4_ = (int)(fVar12 * 0.0 + 0.5) | auVar15._4_4_ >> 0x10;
      auVar11._12_4_ = (int)(auVar10._12_4_ * 255.0 + 0.5) | auVar15._12_4_ >> 0x10;
      auVar11._0_4_ = (int)(fVar13 * 0.0 + 0.5) | auVar15._8_4_ >> 0x10;
      auVar11._8_4_ = (int)(fVar9 * 0.0 + 0.5) | auVar15._0_4_ >> 0x10;
      auVar10 = packssdw(auVar11,auVar11);
      sVar1 = auVar10._4_2_;
      *(char *)(param_1[2] + lVar7) = (0 < sVar1) * (sVar1 < 0x100) * auVar10[4] - (0xff < sVar1);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < lVar6);
  }
  return;
}



// FUNCTION 14287fce2 FUN_14287fce2 body=461 status=ok
// SIG undefined FUN_14287fce2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287fce2(longlong *param_1,int *param_2)

{
  float *pfVar1;
  char *pcVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  undefined1 auVar23 [16];
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  auVar23 = _DAT_149983fc0;
  lVar26 = *param_1;
  lVar25 = lVar26 * *param_2;
  lVar24 = param_1[1];
  if (lVar25 + lVar26 < param_1[1]) {
    lVar24 = lVar25 + lVar26;
  }
  uVar27 = lVar24 - lVar25 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar27) {
    lVar28 = uVar27 + lVar25;
    lVar26 = lVar26 * *param_2 * 0x10;
    fVar31 = (float)DAT_149983fc0;
    fVar32 = DAT_149983fc0._4_4_;
    fVar33 = DAT_149983fc0._8_4_;
    fVar36 = DAT_149983fc0._12_4_;
    do {
      lVar6 = param_1[3];
      pfVar1 = (float *)(lVar6 + lVar26);
      pfVar3 = (float *)(lVar6 + 0x10 + lVar26);
      pfVar4 = (float *)(lVar6 + 0x20 + lVar26);
      pfVar5 = (float *)(lVar6 + 0x30 + lVar26);
      auVar29._0_4_ = pfVar1[2] * fVar33 + 0.5;
      auVar29._4_4_ = pfVar1[1] * fVar32 + 0.5;
      auVar29._8_4_ = *pfVar1 * fVar31 + 0.5;
      auVar29._12_4_ = pfVar1[3] * fVar36 + 0.5;
      auVar34._0_4_ = pfVar3[2] * fVar33 + 0.5;
      auVar34._4_4_ = pfVar3[1] * fVar32 + 0.5;
      auVar34._8_4_ = *pfVar3 * fVar31 + 0.5;
      auVar34._12_4_ = pfVar3[3] * fVar36 + 0.5;
      auVar37._0_4_ = pfVar4[2] * fVar33 + 0.5;
      auVar37._4_4_ = pfVar4[1] * fVar32 + 0.5;
      auVar37._8_4_ = *pfVar4 * fVar31 + 0.5;
      auVar37._12_4_ = pfVar4[3] * fVar36 + 0.5;
      auVar38._0_4_ = pfVar5[2] * fVar33 + 0.5;
      auVar38._4_4_ = pfVar5[1] * fVar32 + 0.5;
      auVar38._8_4_ = *pfVar5 * fVar31 + 0.5;
      auVar38._12_4_ = pfVar5[3] * fVar36 + 0.5;
      auVar40 = minps(auVar23,auVar29);
      auVar29 = minps(auVar23,auVar34);
      auVar34 = minps(auVar23,auVar37);
      auVar37 = minps(auVar23,auVar38);
      auVar39._0_4_ = (int)auVar40._0_4_;
      auVar39._4_4_ = (int)auVar40._4_4_;
      auVar39._8_4_ = (int)auVar40._8_4_;
      auVar39._12_4_ = (int)auVar40._12_4_;
      auVar40._0_4_ = (int)auVar29._0_4_;
      auVar40._4_4_ = (int)auVar29._4_4_;
      auVar40._8_4_ = (int)auVar29._8_4_;
      auVar40._12_4_ = (int)auVar29._12_4_;
      auVar40 = packssdw(auVar39,auVar40);
      auVar30._0_4_ = (int)auVar34._0_4_;
      auVar30._4_4_ = (int)auVar34._4_4_;
      auVar30._8_4_ = (int)auVar34._8_4_;
      auVar30._12_4_ = (int)auVar34._12_4_;
      auVar35._0_4_ = (int)auVar37._0_4_;
      auVar35._4_4_ = (int)auVar37._4_4_;
      auVar35._8_4_ = (int)auVar37._8_4_;
      auVar35._12_4_ = (int)auVar37._12_4_;
      auVar29 = packssdw(auVar30,auVar35);
      sVar7 = auVar40._0_2_;
      sVar8 = auVar40._2_2_;
      sVar9 = auVar40._4_2_;
      sVar10 = auVar40._6_2_;
      sVar11 = auVar40._8_2_;
      sVar12 = auVar40._10_2_;
      sVar13 = auVar40._12_2_;
      sVar14 = auVar40._14_2_;
      sVar15 = auVar29._0_2_;
      sVar16 = auVar29._2_2_;
      sVar17 = auVar29._4_2_;
      sVar18 = auVar29._6_2_;
      sVar19 = auVar29._8_2_;
      sVar20 = auVar29._10_2_;
      sVar21 = auVar29._12_2_;
      sVar22 = auVar29._14_2_;
      pcVar2 = (char *)(param_1[2] + lVar25 * 4);
      *pcVar2 = (0 < sVar7) * (sVar7 < 0x100) * auVar40[0] - (0xff < sVar7);
      pcVar2[1] = (0 < sVar8) * (sVar8 < 0x100) * auVar40[2] - (0xff < sVar8);
      pcVar2[2] = (0 < sVar9) * (sVar9 < 0x100) * auVar40[4] - (0xff < sVar9);
      pcVar2[3] = (0 < sVar10) * (sVar10 < 0x100) * auVar40[6] - (0xff < sVar10);
      pcVar2[4] = (0 < sVar11) * (sVar11 < 0x100) * auVar40[8] - (0xff < sVar11);
      pcVar2[5] = (0 < sVar12) * (sVar12 < 0x100) * auVar40[10] - (0xff < sVar12);
      pcVar2[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar40[0xc] - (0xff < sVar13);
      pcVar2[7] = (0 < sVar14) * (sVar14 < 0x100) * auVar40[0xe] - (0xff < sVar14);
      pcVar2[8] = (0 < sVar15) * (sVar15 < 0x100) * auVar29[0] - (0xff < sVar15);
      pcVar2[9] = (0 < sVar16) * (sVar16 < 0x100) * auVar29[2] - (0xff < sVar16);
      pcVar2[10] = (0 < sVar17) * (sVar17 < 0x100) * auVar29[4] - (0xff < sVar17);
      pcVar2[0xb] = (0 < sVar18) * (sVar18 < 0x100) * auVar29[6] - (0xff < sVar18);
      pcVar2[0xc] = (0 < sVar19) * (sVar19 < 0x100) * auVar29[8] - (0xff < sVar19);
      pcVar2[0xd] = (0 < sVar20) * (sVar20 < 0x100) * auVar29[10] - (0xff < sVar20);
      pcVar2[0xe] = (0 < sVar21) * (sVar21 < 0x100) * auVar29[0xc] - (0xff < sVar21);
      pcVar2[0xf] = (0 < sVar22) * (sVar22 < 0x100) * auVar29[0xe] - (0xff < sVar22);
      lVar25 = lVar25 + 4;
      lVar26 = lVar26 + 0x40;
    } while (lVar25 < lVar28);
  }
  lVar26 = lVar24 - lVar25;
  if (lVar26 != 0 && lVar25 <= lVar24) {
    lVar25 = lVar25 << 2;
    do {
      lVar24 = param_1[5];
      fVar31 = *(float *)(lVar24 + 0xc + lVar25 * 4);
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if (1.0 <= fVar31) {
        fVar31 = 1.0;
      }
      fVar32 = *(float *)(lVar24 + 8 + lVar25 * 4);
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      if (1.0 <= fVar32) {
        fVar32 = 1.0;
      }
      fVar33 = *(float *)(lVar24 + lVar25 * 4);
      fVar36 = *(float *)(lVar24 + 4 + lVar25 * 4);
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      if (1.0 <= fVar36) {
        fVar36 = 1.0;
      }
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      if (1.0 <= fVar33) {
        fVar33 = 1.0;
      }
      *(uint *)(param_1[4] + lVar25) =
           (int)(fVar32 * 255.0 + 0.5) & 0xffU |
           ((int)(fVar36 * 255.0 + 0.5) & 0xffU) << 8 |
           ((int)(fVar33 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(fVar31 * 255.0 + 0.5) << 0x18;
      lVar25 = lVar25 + 4;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  return;
}



// FUNCTION 14287feb0 FUN_14287feb0 body=148 status=ok
// SIG undefined FUN_14287feb0(void)

void FUN_14287feb0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  lVar3 = lVar1 * *param_2;
  lVar2 = param_1[1];
  if (lVar3 + lVar1 < param_1[1]) {
    lVar2 = lVar3 + lVar1;
  }
  if (lVar3 < lVar2) {
    lVar1 = lVar1 * *param_2 * 0x10;
    do {
      FUN_142767bc2(param_1[3] + lVar1,&local_34);
      *(undefined4 *)(param_1[2] + lVar3 * 4) = local_34;
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar3 < lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14287ff46 FUN_14287ff46 body=257 status=ok
// SIG undefined FUN_14287ff46(void)

void FUN_14287ff46(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *param_1;
  lVar5 = lVar3 * *param_2;
  lVar4 = param_1[1];
  if (lVar5 + lVar3 < param_1[1]) {
    lVar4 = lVar5 + lVar3;
  }
  if (lVar5 < lVar4) {
    lVar3 = lVar3 * *param_2 * 0x10;
    do {
      lVar1 = param_1[2];
      lVar2 = param_1[3];
      fVar7 = *(float *)(lVar2 + lVar3);
      fVar8 = *(float *)(lVar2 + 4 + lVar3);
      fVar9 = *(float *)(lVar2 + 8 + lVar3);
      fVar6 = *(float *)(lVar2 + 0xc + lVar3);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      *(short *)(lVar1 + lVar5 * 8) = (short)(int)(fVar7 * 65535.0 + 0.5);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      *(short *)(lVar1 + 2 + lVar5 * 8) = (short)(int)(fVar8 * 65535.0 + 0.5);
      *(short *)(lVar1 + 4 + lVar5 * 8) = (short)(int)(fVar9 * 65535.0 + 0.5);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      *(short *)(lVar1 + 6 + lVar5 * 8) = (short)(int)(fVar6 * 65535.0 + 0.5);
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar5 < lVar4);
  }
  return;
}



// FUNCTION 142880048 FUN_142880048 body=482 status=ok
// SIG undefined FUN_142880048(void)

void FUN_142880048(longlong *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar6 = *param_1;
  lVar8 = lVar6 * *param_2;
  lVar7 = param_1[1];
  if (lVar8 + lVar6 < param_1[1]) {
    lVar7 = lVar8 + lVar6;
  }
  if (lVar8 < lVar7) {
    lVar6 = lVar6 * *param_2 * 0x10;
    auVar16 = pmovsxwd(in_XMM3,0x1ff01ff01ff01ff);
    auVar17 = pmovsxwd(in_XMM4,0x200020002000200);
    auVar18 = pmovsxwd(in_XMM5,0x7c007c007c007c00);
    auVar19 = pmovsxbd(unaff_XMM9,0x1010101);
    auVar20 = pmovsxwd(unaff_XMM12,0x8000800080008000);
    do {
      pfVar1 = (float *)(param_1[3] + lVar6);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar11 = ABS(fVar2);
      fVar13 = ABS(fVar3);
      fVar14 = ABS(fVar4);
      fVar15 = ABS(fVar5);
      auVar22._0_4_ = (uint)fVar11 >> 0xd;
      auVar22._4_4_ = (uint)fVar13 >> 0xd;
      auVar22._8_4_ = (uint)fVar14 >> 0xd;
      auVar22._12_4_ = (uint)fVar15 >> 0xd;
      auVar10._0_4_ =
           -(uint)((float)((uint)((uint)fVar11 < 0x38800000) * 0x38800000 |
                          (uint)((uint)fVar11 >= 0x38800000) * (int)fVar11) == fVar11);
      auVar10._4_4_ =
           -(uint)((float)((uint)((uint)fVar13 < 0x38800000) * 0x38800000 |
                          (uint)((uint)fVar13 >= 0x38800000) * (int)fVar13) == fVar13);
      auVar10._8_4_ =
           -(uint)((float)((uint)((uint)fVar14 < 0x38800000) * 0x38800000 |
                          (uint)((uint)fVar14 >= 0x38800000) * (int)fVar14) == fVar14);
      auVar10._12_4_ =
           -(uint)((float)((uint)((uint)fVar15 < 0x38800000) * 0x38800000 |
                          (uint)((uint)fVar15 >= 0x38800000) * (int)fVar15) == fVar15);
      auVar23 = auVar22 & auVar19;
      auVar9._0_4_ = (int)(fVar11 + 0.5) + -0x3f000000;
      auVar9._4_4_ = (int)(fVar13 + 0.5) + -0x3f000000;
      auVar9._8_4_ = (int)(fVar14 + 0.5) + -0x3f000000;
      auVar9._12_4_ = (int)(fVar15 + 0.5) + -0x3f000000;
      auVar24._0_4_ = auVar23._0_4_ + (int)fVar11 + 0xc8000fffU >> 0xd;
      auVar24._4_4_ = auVar23._4_4_ + (int)fVar13 + 0xc8000fffU >> 0xd;
      auVar24._8_4_ = auVar23._8_4_ + (int)fVar14 + 0xc8000fffU >> 0xd;
      auVar24._12_4_ = auVar23._12_4_ + (int)fVar15 + 0xc8000fffU >> 0xd;
      auVar10 = blendvps(auVar9,auVar24,auVar10);
      auVar23._0_4_ =
           -(uint)((float)((uint)((uint)fVar11 < 0x47800000) * 0x47800000 |
                          (uint)((uint)fVar11 >= 0x47800000) * (int)fVar11) == fVar11);
      auVar23._4_4_ =
           -(uint)((float)((uint)((uint)fVar13 < 0x47800000) * 0x47800000 |
                          (uint)((uint)fVar13 >= 0x47800000) * (int)fVar13) == fVar13);
      auVar23._8_4_ =
           -(uint)((float)((uint)((uint)fVar14 < 0x47800000) * 0x47800000 |
                          (uint)((uint)fVar14 >= 0x47800000) * (int)fVar14) == fVar14);
      auVar23._12_4_ =
           -(uint)((float)((uint)((uint)fVar15 < 0x47800000) * 0x47800000 |
                          (uint)((uint)fVar15 >= 0x47800000) * (int)fVar15) == fVar15);
      auVar12._4_4_ = -(uint)NAN(fVar3);
      auVar12._0_4_ = -(uint)NAN(fVar2);
      auVar12._8_4_ = -(uint)NAN(fVar4);
      auVar12._12_4_ = -(uint)NAN(fVar5);
      auVar21._0_4_ = (int)fVar2 >> 0x10;
      auVar21._4_4_ = (int)fVar3 >> 0x10;
      auVar21._8_4_ = (int)fVar4 >> 0x10;
      auVar21._12_4_ = (int)fVar5 >> 0x10;
      auVar10 = auVar21 & auVar20 | ((auVar22 & auVar16 | auVar17) & auVar12 | auVar18) & auVar23 |
                ~auVar23 & auVar10;
      auVar10 = packssdw(auVar10,auVar10);
      *(longlong *)(param_1[2] + lVar8 * 8) = auVar10._0_8_;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar8 < lVar7);
  }
  return;
}



// FUNCTION 14288065a FUN_14288065a body=159 status=ok
// SIG undefined FUN_14288065a(void)

void FUN_14288065a(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *param_1;
  lVar8 = lVar6 * *param_2;
  lVar7 = param_1[1];
  if (lVar8 + lVar6 < param_1[1]) {
    lVar7 = lVar8 + lVar6;
  }
  if (lVar8 < lVar7) {
    lVar6 = lVar6 * *param_2 * 0x10;
    do {
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      uVar1 = (&DAT_14c758c60)[*(byte *)(lVar5 + 1 + lVar8 * 4)];
      uVar2 = (&DAT_14c758c60)[*(byte *)(lVar5 + lVar8 * 4)];
      bVar3 = *(byte *)(lVar5 + 3 + lVar8 * 4);
      *(undefined4 *)(lVar4 + lVar6) = (&DAT_14c758c60)[*(byte *)(lVar5 + 2 + lVar8 * 4)];
      *(undefined4 *)(lVar4 + 4 + lVar6) = uVar1;
      *(undefined4 *)(lVar4 + 8 + lVar6) = uVar2;
      *(float *)(lVar4 + 0xc + lVar6) = (float)bVar3 * 0.003921569;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar8 < lVar7);
  }
  return;
}



// FUNCTION 1428806fa FUN_1428806fa body=159 status=ok
// SIG undefined FUN_1428806fa(void)

void FUN_1428806fa(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *param_1;
  lVar8 = lVar6 * *param_2;
  lVar7 = param_1[1];
  if (lVar8 + lVar6 < param_1[1]) {
    lVar7 = lVar8 + lVar6;
  }
  if (lVar8 < lVar7) {
    lVar6 = lVar6 * *param_2 * 0x10;
    do {
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      uVar1 = *(undefined4 *)(&DAT_14c758770 + (ulonglong)*(byte *)(lVar5 + 1 + lVar8 * 4) * 4);
      uVar2 = *(undefined4 *)(&DAT_14c758770 + (ulonglong)*(byte *)(lVar5 + lVar8 * 4) * 4);
      bVar3 = *(byte *)(lVar5 + 3 + lVar8 * 4);
      *(undefined4 *)(lVar4 + lVar6) =
           *(undefined4 *)(&DAT_14c758770 + (ulonglong)*(byte *)(lVar5 + 2 + lVar8 * 4) * 4);
      *(undefined4 *)(lVar4 + 4 + lVar6) = uVar1;
      *(undefined4 *)(lVar4 + 8 + lVar6) = uVar2;
      *(float *)(lVar4 + 0xc + lVar6) = (float)bVar3 * 0.003921569;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar8 < lVar7);
  }
  return;
}



// FUNCTION 14288079a FUN_14288079a body=149 status=ok
// SIG undefined FUN_14288079a(void)

void FUN_14288079a(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  lVar4 = lVar2 * *param_2;
  lVar3 = param_1[1];
  if (lVar4 + lVar2 < param_1[1]) {
    lVar3 = lVar4 + lVar2;
  }
  if (lVar4 < lVar3) {
    lVar2 = lVar2 * *param_2 * 4;
    do {
      FUN_1467ed870(param_1[3] + lVar2,&local_40);
      puVar1 = (undefined4 *)(param_1[2] + lVar2 * 4);
      *puVar1 = local_40;
      puVar1[1] = uStack_3c;
      puVar1[2] = uStack_38;
      puVar1[3] = uStack_34;
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 4;
    } while (lVar4 < lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428808dc FUN_1428808dc body=277 status=ok
// SIG undefined FUN_1428808dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428808dc(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined2 uVar16;
  
  auVar3 = _DAT_1499356b0;
  auVar2 = _DAT_1499319e0;
  lVar4 = *param_1;
  lVar6 = lVar4 * *param_2;
  lVar5 = param_1[1];
  if (lVar6 + lVar4 < param_1[1]) {
    lVar5 = lVar6 + lVar4;
  }
  if (lVar6 < lVar5) {
    lVar4 = lVar4 * *param_2 * 0x10;
    auVar7 = pmovsxwd(in_XMM0,0x7fff7fff7fff7fff);
    auVar8 = pmovsxwd(in_XMM2,0x7bff7bff7bff7bff);
    auVar9 = pmovsxwd(in_XMM4,0x7c007c007c007c00);
    auVar10 = pmovsxbw(in_XMM5,0x4000400040004000);
    do {
      uVar1 = *(ulonglong *)(param_1[3] + lVar6 * 8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar1;
      auVar11 = pmovzxwd(unaff_XMM8,auVar11);
      auVar11 = auVar11 & auVar7;
      iVar18 = auVar11._0_4_;
      iVar20 = auVar11._4_4_;
      iVar21 = auVar11._8_4_;
      iVar22 = auVar11._12_4_;
      auVar19._0_4_ = (float)(iVar18 << 0xd) * 5.192297e+33;
      auVar19._4_4_ = (float)(iVar20 << 0xd) * 5.192297e+33;
      auVar19._8_4_ = (float)(iVar21 << 0xd) * 5.192297e+33;
      auVar19._12_4_ = (float)(iVar22 << 0xd) * 5.192297e+33;
      auVar23._0_4_ = -(uint)(auVar8._0_4_ < iVar18);
      auVar23._4_4_ = -(uint)(auVar8._4_4_ < iVar20);
      auVar23._8_4_ = -(uint)(auVar8._8_4_ < iVar21);
      auVar23._12_4_ = -(uint)(auVar8._12_4_ < iVar22);
      uVar16 = (undefined2)(uVar1 >> 0x30);
      auVar15._8_4_ = 0;
      auVar15._0_8_ = uVar1;
      auVar15._12_2_ = uVar16;
      auVar15._14_2_ = uVar16;
      uVar16 = (undefined2)(uVar1 >> 0x20);
      auVar14._12_4_ = auVar15._12_4_;
      auVar14._8_2_ = 0;
      auVar14._0_8_ = uVar1;
      auVar14._10_2_ = uVar16;
      auVar13._10_6_ = auVar14._10_6_;
      auVar13._8_2_ = uVar16;
      auVar13._0_8_ = uVar1;
      uVar16 = (undefined2)(uVar1 >> 0x10);
      auVar12._8_8_ = auVar13._8_8_;
      auVar12._6_2_ = uVar16;
      auVar12._4_2_ = uVar16;
      auVar12._0_2_ = (undefined2)uVar1;
      auVar12._2_2_ = auVar12._0_2_;
      auVar17._0_4_ = -(uint)(auVar9._0_4_ < iVar18);
      auVar17._4_4_ = -(uint)(auVar9._4_4_ < iVar20);
      auVar17._8_4_ = -(uint)(auVar9._8_4_ < iVar21);
      auVar17._12_4_ = -(uint)(auVar9._12_4_ < iVar22);
      unaff_XMM8 = auVar17 & auVar10 | auVar12 & auVar2 | auVar23 & auVar3 | auVar19;
      *(undefined1 (*) [16])(param_1[2] + lVar4) = unaff_XMM8;
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar6 < lVar5);
  }
  return;
}



// FUNCTION 1428809f2 FUN_1428809f2 body=195 status=ok
// SIG undefined FUN_1428809f2(void)

void FUN_1428809f2(longlong *param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  
  lVar3 = *param_1;
  lVar5 = lVar3 * *param_2;
  lVar4 = param_1[1];
  if (lVar5 + lVar3 < param_1[1]) {
    lVar4 = lVar5 + lVar3;
  }
  if (lVar5 < lVar4) {
    lVar3 = lVar3 * *param_2 * 0x10;
    do {
      uVar1 = *(ushort *)(param_1[3] + lVar5 * 2);
      uVar6 = (uint)uVar1 << 0xd;
      if ((uVar6 & 0xf800000) == 0xf800000) {
        fVar7 = (float)(uVar6 | 0x70000000);
      }
      else if ((uVar6 & 0xf800000) == 0) {
        fVar7 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar7 = (float)((uVar6 & 0xfffe000) + 0x38000000);
      }
      lVar2 = param_1[2];
      *(uint *)(lVar2 + lVar3) = (int)(short)uVar1 & 0x80000000U | (uint)fVar7;
      *(undefined8 *)(lVar2 + 4 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = 0x3f800000;
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar5 < lVar4);
  }
  return;
}



// FUNCTION 142880b12 FUN_142880b12 body=217 status=ok
// SIG undefined FUN_142880b12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142880b12(longlong *param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar7 = _DAT_149ef2000;
  auVar6 = _DAT_149ef1ff0;
  lVar8 = (longlong)*param_2 * *param_1;
  lVar9 = *param_1 + lVar8;
  if (param_1[1] <= lVar9) {
    lVar9 = param_1[1];
  }
  uVar10 = lVar9 - lVar8 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar10) {
    lVar11 = uVar10 + lVar8;
    do {
      auVar12 = *(undefined1 (*) [16])(param_1[3] + lVar8 * 4);
      auVar13 = pshufb(auVar12,auVar6);
      auVar12 = pshufb(auVar12,auVar7);
      *(undefined1 (*) [16])(param_1[2] + lVar8 * 8) = auVar13;
      *(undefined1 (*) [16])(param_1[2] + 0x10 + lVar8 * 8) = auVar12;
      lVar8 = lVar8 + 4;
    } while (lVar8 < lVar11);
  }
  if (lVar8 < lVar9) {
    do {
      lVar11 = param_1[4];
      lVar5 = param_1[5];
      uVar1 = *(undefined1 *)(lVar5 + lVar8 * 4);
      uVar2 = *(undefined1 *)(lVar5 + 1 + lVar8 * 4);
      uVar3 = *(undefined1 *)(lVar5 + 2 + lVar8 * 4);
      uVar4 = *(undefined1 *)(lVar5 + 3 + lVar8 * 4);
      *(ushort *)(lVar11 + lVar8 * 8) = CONCAT11(uVar3,uVar3);
      *(ushort *)(lVar11 + 2 + lVar8 * 8) = CONCAT11(uVar2,uVar2);
      *(ushort *)(lVar11 + 4 + lVar8 * 8) = CONCAT11(uVar1,uVar1);
      *(ushort *)(lVar11 + 6 + lVar8 * 8) = CONCAT11(uVar4,uVar4);
      lVar8 = lVar8 + 1;
    } while (lVar9 != lVar8);
  }
  return;
}



// FUNCTION 142880bec FUN_142880bec body=173 status=ok
// SIG undefined FUN_142880bec(void)

void FUN_142880bec(longlong *param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)*param_2 * *param_1;
  lVar6 = *param_1 + lVar5;
  if (param_1[1] <= lVar6) {
    lVar6 = param_1[1];
  }
  for (; lVar5 < lVar6; lVar5 = lVar5 + 1) {
    lVar4 = param_1[3];
    uVar1 = *(ushort *)(lVar4 + 4 + lVar5 * 8);
    uVar2 = *(ushort *)(lVar4 + 2 + lVar5 * 8);
    uVar3 = *(ushort *)(lVar4 + lVar5 * 8);
    *(uint *)(param_1[2] + lVar5 * 4) =
         ((uint)uVar2 * 0x100 - (uint)uVar2) + 0x807f >> 8 & 0xff00 |
         ((uint)uVar3 * 0x100 - (uint)uVar3) + 0x807f & 0xff0000 |
         (uint)*(ushort *)(lVar4 + 6 + lVar5 * 8) * 0xff00 + 0x807f00 & 0xff000000 |
         ((uint)uVar1 * 0x100 - (uint)uVar1) + 0x807f >> 0x10;
  }
  return;
}



// FUNCTION 142880d10 FUN_142880d10 body=464 status=ok
// SIG undefined FUN_142880d10(void)

void FUN_142880d10(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  int local_dc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_dc = 0;
  lVar2 = FUN_1469880d4(local_e0,param_1,(longlong)*param_2,*(undefined8 *)(param_1 + 0x18));
  local_70 = **(undefined4 **)(param_1 + 0x20);
  uStack_6c = &DAT_100000001;
  uStack_64 = CONCAT22(uStack_64._2_2_,5);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_14287f4cc();
  if (0 < (longlong)local_dc) {
    lVar4 = local_dc + lVar2;
    do {
      piVar1 = *(int **)(param_1 + 0x20);
      local_88 = (undefined4)*(undefined8 *)piVar1;
      uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(piVar1 + 2) >> 0x20);
      uStack_84 = 1;
      uStack_80 = 1;
      if ((ulonglong)*(byte *)(piVar1 + 3) < 9) {
        lVar3 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(piVar1 + 3) * 8);
      }
      else {
        lVar3 = 0;
      }
      local_78 = (longlong)*piVar1 * lVar3 * lVar2 + *(longlong *)(piVar1 + 4);
      piVar1 = *(int **)(param_1 + 0x28);
      local_a8 = (undefined4)*(undefined8 *)piVar1;
      uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(piVar1 + 2) >> 0x20);
      uStack_a4 = 1;
      uStack_a0 = 1;
      if ((ulonglong)*(byte *)(piVar1 + 3) < 9) {
        lVar3 = *(longlong *)(&DAT_149ef4cf0 + (ulonglong)*(byte *)(piVar1 + 3) * 8);
      }
      else {
        lVar3 = 0;
      }
      local_98 = *(longlong *)(piVar1 + 4) + (longlong)*piVar1 * lVar3 * lVar2;
      local_c8 = local_70;
      uStack_c4 = (undefined4)uStack_6c;
      uStack_c0 = uStack_6c._4_4_;
      uStack_bc = uStack_64;
      local_b8 = local_60;
      FUN_14287def8(&local_88,&local_c8);
      local_c8 = local_70;
      uStack_c4 = (undefined4)uStack_6c;
      uStack_c0 = uStack_6c._4_4_;
      uStack_bc = uStack_64;
      local_b8 = local_60;
      FUN_14287def8(&local_c8,&local_a8);
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar4);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142880ee2 FUN_142880ee2 body=164 status=ok
// SIG undefined FUN_142880ee2(void)

void FUN_142880ee2(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  local_1c = (undefined2)plVar1[5];
  lVar2 = (longlong)*param_2 * 0x18;
  local_28 = *(undefined8 *)(plVar1[3] + lVar2);
  local_18 = *plVar1 + *(longlong *)(plVar1[3] + 8 + lVar2);
  local_20 = 1;
  plVar1 = (longlong *)param_1[1];
  local_34 = (undefined2)plVar1[5];
  local_40 = *(undefined8 *)(plVar1[3] + lVar2);
  local_30 = *plVar1 + *(longlong *)(plVar1[3] + 8 + lVar2);
  local_38 = 1;
  FUN_14287def8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14288107a FUN_14288107a body=189 status=ok
// SIG undefined FUN_14288107a(void)

void FUN_14288107a(undefined8 *param_1,int *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  
  lVar2 = (longlong)*param_2 * *(longlong *)*param_1;
  lVar3 = *(longlong *)*param_1 + lVar2;
  if (*(longlong *)param_1[1] <= lVar3) {
    lVar3 = *(longlong *)param_1[1];
  }
  if (lVar2 < lVar3) {
    do {
      uVar1 = *(ushort *)(**(longlong **)param_1[2] + 6 + lVar2 * 8);
      uVar4 = (uint)uVar1 << 0xd;
      if ((uVar4 & 0xf800000) == 0xf800000) {
        fVar5 = (float)(uVar4 | 0x70000000);
      }
      else if ((uVar4 & 0xf800000) == 0) {
        fVar5 = (float)(uVar4 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar5 = (float)((uVar4 & 0xfffe000) + 0x38000000);
      }
      if ((float)((int)(short)uVar1 & 0x80000000U | (uint)fVar5) <= 0.9980392) {
        *(undefined1 *)param_1[3] = 1;
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar3);
  }
  return;
}



// FUNCTION 142881138 FUN_142881138 body=2604 status=ok
// SIG undefined FUN_142881138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142881138(longlong param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong lVar27;
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_b0;
  undefined1 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 1;
  local_a8 = 0;
  FUN_1469880d4(&local_b8,param_1,(longlong)*param_2,*(undefined8 *)(param_1 + 0x18));
  auVar17 = _DAT_149931e80;
  switch(local_ac) {
  case 1:
    lVar19 = (longlong)local_b0 * (longlong)local_b8._4_4_ * (longlong)(int)local_b8;
    if (0 < lVar19) {
      uVar20 = local_a8 + lVar19 * 4;
      uVar21 = local_a8 + 4;
      if (local_a8 + 4 < uVar20) {
        uVar21 = uVar20;
      }
      uVar21 = ~local_a8 + uVar21;
      auVar22._8_4_ = (int)uVar21;
      auVar22._0_8_ = uVar21;
      auVar22._12_4_ = (int)(uVar21 >> 0x20);
      auVar23._0_8_ = uVar21 >> 2;
      auVar23._8_8_ = auVar22._8_8_ >> 2;
      uVar20 = 0;
      auVar28 = pmovsxbq(in_XMM1,0xf0e);
      auVar26 = pmovsxbq(in_XMM2,0xd0c);
      auVar29 = pmovsxbq(in_XMM3,0xb0a);
      auVar30 = pmovsxbq(in_XMM4,0x908);
      auVar24 = pmovsxbq(in_XMM5,0x706);
      auVar39 = pmovsxbq(unaff_XMM6,0x504);
      auVar32 = pmovsxbq(unaff_XMM7,0x302);
      auVar36 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar42._8_4_ = (int)uVar20;
        auVar42._0_8_ = uVar20;
        auVar42._12_4_ = (int)(uVar20 >> 0x20);
        auVar37 = auVar23 | auVar17;
        auVar44 = (auVar42 | auVar36) ^ auVar17;
        lVar19 = auVar37._0_8_;
        auVar45._0_8_ = -(ulonglong)(lVar19 < auVar44._0_8_);
        lVar27 = auVar37._8_8_;
        auVar45._8_8_ = -(ulonglong)(lVar27 < auVar44._8_8_);
        auVar44 = pshuflw(unaff_XMM14,auVar45,0xe8);
        auVar1._8_4_ = 0xffffffff;
        auVar1._0_8_ = 0xffffffffffffffff;
        auVar1._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar1,auVar44 ^ auVar1);
        if ((auVar44._0_4_ & 1) != 0) {
          *(undefined1 *)(local_a8 + 3 + uVar20 * 4) = 0xff;
        }
        auVar46 = packssdw(auVar45,auVar45);
        auVar2._8_4_ = 0xffffffff;
        auVar2._0_8_ = 0xffffffffffffffff;
        auVar2._12_4_ = 0xffffffff;
        auVar46 = packssdw(auVar46 ^ auVar2,auVar46 ^ auVar2);
        auVar46 = packsswb(auVar46,auVar46);
        if ((auVar46[1] & 1) != 0) {
          *(undefined1 *)(local_a8 + 7 + uVar20 * 4) = 0xff;
        }
        auVar46 = (auVar42 | auVar32) ^ auVar17;
        auVar47._0_8_ = -(ulonglong)(lVar19 < auVar46._0_8_);
        auVar47._8_8_ = -(ulonglong)(lVar27 < auVar46._8_8_);
        auVar44 = packssdw(auVar44,auVar47);
        auVar3._8_4_ = 0xffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar3._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar3,auVar44 ^ auVar3);
        auVar44 = packsswb(auVar44,auVar44);
        if ((auVar44[2] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0xb + uVar20 * 4) = 0xff;
        }
        auVar46 = pshufhw(auVar47,auVar47,0x84);
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar46 = packssdw(auVar46 ^ auVar4,auVar46 ^ auVar4);
        auVar46 = packsswb(auVar46,auVar46);
        if ((auVar46[3] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0xf + uVar20 * 4) = 0xff;
        }
        auVar46 = (auVar42 | auVar39) ^ auVar17;
        auVar48._0_8_ = -(ulonglong)(lVar19 < auVar46._0_8_);
        auVar48._8_8_ = -(ulonglong)(lVar27 < auVar46._8_8_);
        auVar44 = pshuflw(auVar44,auVar48,0xe8);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar5,auVar44 ^ auVar5);
        auVar44 = packsswb(auVar44,auVar44);
        if ((auVar44[4] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x13 + uVar20 * 4) = 0xff;
        }
        auVar46 = packssdw(auVar48,auVar48);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar46 = packssdw(auVar46 ^ auVar6,auVar46 ^ auVar6);
        auVar46 = packsswb(auVar46,auVar46);
        if ((auVar46[5] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x17 + uVar20 * 4) = 0xff;
        }
        auVar46 = (auVar42 | auVar24) ^ auVar17;
        auVar49._0_8_ = -(ulonglong)(lVar19 < auVar46._0_8_);
        auVar49._8_8_ = -(ulonglong)(lVar27 < auVar46._8_8_);
        auVar44 = packssdw(auVar44,auVar49);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar7,auVar44 ^ auVar7);
        auVar44 = packsswb(auVar44,auVar44);
        if ((auVar44[6] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x1b + uVar20 * 4) = 0xff;
        }
        auVar46 = pshufhw(auVar49,auVar49,0x84);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar46 = packssdw(auVar46 ^ auVar8,auVar46 ^ auVar8);
        auVar46 = packsswb(auVar46,auVar46);
        if ((auVar46[7] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x1f + uVar20 * 4) = 0xff;
        }
        auVar46 = (auVar42 | auVar30) ^ auVar17;
        auVar50._0_8_ = -(ulonglong)(lVar19 < auVar46._0_8_);
        auVar50._8_8_ = -(ulonglong)(lVar27 < auVar46._8_8_);
        auVar44 = pshuflw(auVar44,auVar50,0xe8);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar9,auVar44 ^ auVar9);
        auVar44 = packsswb(auVar44,auVar44);
        if ((auVar44[8] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x23 + uVar20 * 4) = 0xff;
        }
        auVar46 = packssdw(auVar50,auVar50);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar46 = packssdw(auVar46 ^ auVar10,auVar46 ^ auVar10);
        auVar46 = packsswb(auVar46,auVar46);
        if ((auVar46[9] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x27 + uVar20 * 4) = 0xff;
        }
        auVar46 = (auVar42 | auVar29) ^ auVar17;
        auVar51._0_8_ = -(ulonglong)(lVar19 < auVar46._0_8_);
        auVar51._8_8_ = -(ulonglong)(lVar27 < auVar46._8_8_);
        auVar44 = packssdw(auVar44,auVar51);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar11,auVar44 ^ auVar11);
        auVar44 = packsswb(auVar44,auVar44);
        if ((auVar44[10] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x2b + uVar20 * 4) = 0xff;
        }
        auVar46 = pshufhw(auVar51,auVar51,0x84);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar46 = packssdw(auVar46 ^ auVar12,auVar46 ^ auVar12);
        auVar46 = packsswb(auVar46,auVar46);
        if ((auVar46[0xb] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x2f + uVar20 * 4) = 0xff;
        }
        auVar46 = (auVar42 | auVar26) ^ auVar17;
        auVar52._0_8_ = -(ulonglong)(lVar19 < auVar46._0_8_);
        auVar52._8_8_ = -(ulonglong)(lVar27 < auVar46._8_8_);
        auVar44 = pshuflw(auVar44,auVar52,0xe8);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar13,auVar44 ^ auVar13);
        unaff_XMM14 = packsswb(auVar44,auVar44);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x33 + uVar20 * 4) = 0xff;
        }
        auVar44 = packssdw(auVar52,auVar52);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar44 = packssdw(auVar44 ^ auVar14,auVar44 ^ auVar14);
        auVar44 = packsswb(auVar44,auVar44);
        if ((auVar44[0xd] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x37 + uVar20 * 4) = 0xff;
        }
        auVar44 = (auVar42 | auVar28) ^ auVar17;
        auVar43._0_8_ = -(ulonglong)(lVar19 < auVar44._0_8_);
        auVar43._8_8_ = -(ulonglong)(lVar27 < auVar44._8_8_);
        auVar37 = packssdw(auVar37,auVar43);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar37 = packssdw(auVar37 ^ auVar15,auVar37 ^ auVar15);
        auVar37 = packsswb(auVar37,auVar37);
        if ((auVar37[0xe] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x3b + uVar20 * 4) = 0xff;
        }
        auVar37 = pshufhw(auVar43,auVar43,0x84);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        auVar37 = packssdw(auVar37 ^ auVar16,auVar37 ^ auVar16);
        auVar37 = packsswb(auVar37,auVar37);
        if ((auVar37[0xf] & 1) != 0) {
          *(undefined1 *)(local_a8 + 0x3f + uVar20 * 4) = 0xff;
        }
        uVar20 = uVar20 + 0x10;
      } while (((uVar21 >> 2) + 0x10 & 0xfffffffffffffff0) != uVar20);
    }
    break;
  case 3:
    lVar19 = (longlong)local_b0 * (longlong)local_b8._4_4_ * (longlong)(int)local_b8 * 8;
    if (0 < lVar19) {
      uVar20 = lVar19 + local_a8;
      if (uVar20 <= local_a8 + 8) {
        uVar20 = local_a8 + 8;
      }
      uVar20 = ~local_a8 + uVar20;
      auVar36._8_4_ = (int)uVar20;
      auVar36._0_8_ = uVar20;
      auVar36._12_4_ = (int)(uVar20 >> 0x20);
      auVar25._0_8_ = uVar20 >> 3;
      auVar25._8_8_ = auVar36._8_8_ >> 3;
      uVar21 = 0;
      auVar28 = pmovsxbq(in_XMM1,0x706);
      auVar26 = pmovsxbq(in_XMM2,0x504);
      auVar29 = pmovsxbq(in_XMM3,0x302);
      auVar30 = pmovsxbq(in_XMM4,0x100);
      auVar25 = auVar25 | _DAT_149931e80;
      lVar19 = auVar25._0_8_;
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      do {
        auVar34._8_4_ = (int)uVar21;
        auVar34._0_8_ = uVar21;
        auVar34._12_4_ = (int)(uVar21 >> 0x20);
        auVar24 = (auVar34 | auVar30) ^ auVar17;
        auVar38._0_8_ = -(ulonglong)(lVar19 < auVar24._0_8_);
        lVar27 = auVar25._8_8_;
        auVar38._8_8_ = -(ulonglong)(lVar27 < auVar24._8_8_);
        auVar24 = pshuflw(unaff_XMM9,auVar38,0xe8);
        auVar24 = packssdw(auVar24 ^ auVar31,auVar24 ^ auVar31);
        if ((auVar24._0_4_ & 1) != 0) {
          *(undefined2 *)(local_a8 + 6 + uVar21 * 8) = 0xffff;
        }
        auVar39 = packssdw(auVar38,auVar38);
        auVar39 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
        if ((auVar39[2] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0xe + uVar21 * 8) = 0xffff;
        }
        auVar39 = (auVar34 | auVar29) ^ auVar17;
        auVar40._0_8_ = -(ulonglong)(lVar19 < auVar39._0_8_);
        auVar40._8_8_ = -(ulonglong)(lVar27 < auVar39._8_8_);
        auVar24 = packssdw(auVar24,auVar40);
        auVar24 = packssdw(auVar24 ^ auVar31,auVar24 ^ auVar31);
        if ((auVar24[4] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x16 + uVar21 * 8) = 0xffff;
        }
        auVar39 = pshufhw(auVar40,auVar40,0x84);
        auVar39 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
        if ((auVar39[6] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x1e + uVar21 * 8) = 0xffff;
        }
        auVar39 = (auVar34 | auVar26) ^ auVar17;
        auVar41._0_8_ = -(ulonglong)(lVar19 < auVar39._0_8_);
        auVar41._8_8_ = -(ulonglong)(lVar27 < auVar39._8_8_);
        auVar24 = pshuflw(auVar24,auVar41,0xe8);
        unaff_XMM9 = packssdw(auVar24 ^ auVar31,auVar24 ^ auVar31);
        if ((unaff_XMM9[8] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x26 + uVar21 * 8) = 0xffff;
        }
        auVar24 = packssdw(auVar41,auVar41);
        auVar24 = packssdw(auVar24 ^ auVar31,auVar24 ^ auVar31);
        if ((auVar24[10] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x2e + uVar21 * 8) = 0xffff;
        }
        auVar39 = (auVar34 | auVar28) ^ auVar17;
        auVar35._0_8_ = -(ulonglong)(lVar19 < auVar39._0_8_);
        auVar35._8_8_ = -(ulonglong)(lVar27 < auVar39._8_8_);
        auVar24 = packssdw(auVar24,auVar35);
        auVar24 = packssdw(auVar24 ^ auVar31,auVar24 ^ auVar31);
        if ((auVar24[0xc] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x36 + uVar21 * 8) = 0xffff;
        }
        auVar24 = pshufhw(auVar35,auVar35,0x84);
        auVar24 = packssdw(auVar24 ^ auVar31,auVar24 ^ auVar31);
        if ((auVar24[0xe] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x3e + uVar21 * 8) = 0xffff;
        }
        uVar21 = uVar21 + 8;
      } while (((uVar20 >> 3) + 8 & 0xfffffffffffffff8) != uVar21);
    }
    break;
  case 4:
    lVar19 = (longlong)local_b0 * (longlong)local_b8._4_4_ * (longlong)(int)local_b8;
    if (0 < lVar19) {
      uVar20 = local_a8 + lVar19 * 8;
      uVar21 = local_a8 + 8;
      if (local_a8 + 8 < uVar20) {
        uVar21 = uVar20;
      }
      uVar21 = ~local_a8 + uVar21;
      auVar29._8_4_ = (int)uVar21;
      auVar29._0_8_ = uVar21;
      auVar29._12_4_ = (int)(uVar21 >> 0x20);
      auVar24._0_8_ = uVar21 >> 3;
      auVar24._8_8_ = auVar29._8_8_ >> 3;
      uVar20 = 0;
      auVar28 = pmovsxbq(in_XMM1,0x706);
      auVar26 = pmovsxbq(in_XMM2,0x504);
      auVar29 = pmovsxbq(in_XMM3,0x302);
      auVar30 = pmovsxbq(in_XMM4,0x100);
      auVar24 = auVar24 | _DAT_149931e80;
      lVar19 = auVar24._0_8_;
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      do {
        auVar32._8_4_ = (int)uVar20;
        auVar32._0_8_ = uVar20;
        auVar32._12_4_ = (int)(uVar20 >> 0x20);
        auVar36 = (auVar32 | auVar30) ^ auVar17;
        auVar37._0_8_ = -(ulonglong)(lVar19 < auVar36._0_8_);
        lVar27 = auVar24._8_8_;
        auVar37._8_8_ = -(ulonglong)(lVar27 < auVar36._8_8_);
        auVar36 = pshuflw(unaff_XMM9,auVar37,0xe8);
        auVar36 = packssdw(auVar36 ^ auVar39,auVar36 ^ auVar39);
        if ((auVar36._0_4_ & 1) != 0) {
          *(undefined2 *)(local_a8 + 6 + uVar20 * 8) = 0x3c00;
        }
        auVar37 = packssdw(auVar37,auVar37);
        auVar37 = packssdw(auVar37 ^ auVar39,auVar37 ^ auVar39);
        if ((auVar37[2] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0xe + uVar20 * 8) = 0x3c00;
        }
        auVar37 = (auVar32 | auVar29) ^ auVar17;
        auVar44._0_8_ = -(ulonglong)(lVar19 < auVar37._0_8_);
        auVar44._8_8_ = -(ulonglong)(lVar27 < auVar37._8_8_);
        auVar36 = packssdw(auVar36,auVar44);
        auVar36 = packssdw(auVar36 ^ auVar39,auVar36 ^ auVar39);
        if ((auVar36[4] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x16 + uVar20 * 8) = 0x3c00;
        }
        auVar37 = pshufhw(auVar44,auVar44,0x84);
        auVar37 = packssdw(auVar37 ^ auVar39,auVar37 ^ auVar39);
        if ((auVar37[6] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x1e + uVar20 * 8) = 0x3c00;
        }
        auVar37 = (auVar32 | auVar26) ^ auVar17;
        auVar46._0_8_ = -(ulonglong)(lVar19 < auVar37._0_8_);
        auVar46._8_8_ = -(ulonglong)(lVar27 < auVar37._8_8_);
        auVar36 = pshuflw(auVar36,auVar46,0xe8);
        unaff_XMM9 = packssdw(auVar36 ^ auVar39,auVar36 ^ auVar39);
        if ((unaff_XMM9[8] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x26 + uVar20 * 8) = 0x3c00;
        }
        auVar36 = packssdw(auVar46,auVar46);
        auVar36 = packssdw(auVar36 ^ auVar39,auVar36 ^ auVar39);
        if ((auVar36[10] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x2e + uVar20 * 8) = 0x3c00;
        }
        auVar32 = (auVar32 | auVar28) ^ auVar17;
        auVar33._0_8_ = -(ulonglong)(lVar19 < auVar32._0_8_);
        auVar33._8_8_ = -(ulonglong)(lVar27 < auVar32._8_8_);
        auVar32 = packssdw(auVar36,auVar33);
        auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
        if ((auVar32[0xc] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x36 + uVar20 * 8) = 0x3c00;
        }
        auVar32 = pshufhw(auVar33,auVar33,0x84);
        auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
        if ((auVar32[0xe] & 1) != 0) {
          *(undefined2 *)(local_a8 + 0x3e + uVar20 * 8) = 0x3c00;
        }
        uVar20 = uVar20 + 8;
      } while (((uVar21 >> 3) + 8 & 0xfffffffffffffff8) != uVar20);
    }
    break;
  case 5:
    lVar19 = (longlong)local_b0 * (longlong)local_b8._4_4_ * (longlong)(int)local_b8;
    if (0 < lVar19) {
      uVar20 = lVar19 * 0x10 + local_a8;
      if (uVar20 <= local_a8 + 0x10) {
        uVar20 = local_a8 + 0x10;
      }
      uVar20 = ~local_a8 + uVar20;
      auVar28._8_4_ = (int)uVar20;
      auVar28._0_8_ = uVar20;
      auVar28._12_4_ = (int)(uVar20 >> 0x20);
      auVar26._0_8_ = uVar20 >> 4;
      auVar26._8_8_ = auVar28._8_8_ >> 4;
      puVar18 = (undefined4 *)(local_a8 + 0x3c);
      uVar21 = 0;
      auVar28 = pmovsxbq(in_XMM1,0x302);
      auVar29 = pmovsxbq(in_XMM2,0x100);
      auVar26 = auVar26 | _DAT_149931e80;
      lVar19 = auVar26._0_8_;
      do {
        lVar27 = auVar26._8_8_;
        if ((bool)(~(lVar19 < (longlong)(uVar21 ^ auVar17._0_8_)) & 1)) {
          puVar18[-0xc] = 0x3f800000;
        }
        auVar30._8_4_ = (int)uVar21;
        auVar30._0_8_ = uVar21;
        auVar30._12_4_ = (int)(uVar21 >> 0x20);
        if ((longlong)((auVar30._8_8_ | auVar29._8_8_) ^ auVar17._8_8_) <= lVar27) {
          puVar18[-8] = 0x3f800000;
        }
        auVar30 = (auVar30 | auVar28) ^ auVar17;
        if (auVar30._0_8_ <= lVar19) {
          puVar18[-4] = 0x3f800000;
        }
        if (auVar30._8_8_ <= lVar27) {
          *puVar18 = 0x3f800000;
        }
        uVar21 = uVar21 + 4;
        puVar18 = puVar18 + 0x10;
      } while (((uVar20 >> 4) + 4 & 0xfffffffffffffffc) != uVar21);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142881b65 FUN_142881b65 body=230 status=ok
// SIG undefined FUN_142881b65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142881b65(void)

{
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/ImageCore",&PTR_FUN_149ef2c70,1,&PTR_FUN_149ef2c40);
  local_28 = 0x8000000149ef42e0;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c98e1e8,&local_28);
  local_28 = local_28 & 0xffffffff00000000;
  local_48 = local_48 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c98e1f0,L"r.TextureUEDeltaDebugColor",&local_28,L"UE Delta Tile Debug Color")
  ;
  atexit(FUN_14287f9da);
  _DAT_14c98e210 = 0x80808080;
  uRam000000014c98e214 = 0x80808080;
  uRam000000014c98e218 = 0x80808080;
  uRam000000014c98e21c = 0x80808080;
  _DAT_14c98e220 = 0x80808080;
  uRam000000014c98e224 = 0x80808080;
  uRam000000014c98e228 = 0x80808080;
  uRam000000014c98e22c = 0x80808080;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142881c4c FUN_142881c4c body=1878 status=ok
// SIG undefined FUN_142881c4c(void)

undefined8 FUN_142881c4c(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  uint *puVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  ushort uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  char *pcVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  char *pcVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float local_88 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar3 = *(uint **)(param_1 + 0x28);
  bVar25 = *(char *)(param_1 + 0x68) == '\0';
  puVar12 = (uint *)((longlong)puVar3 + 10);
  if (bVar25) {
    puVar12 = puVar3;
  }
  lVar18 = 0xe;
  if (bVar25) {
    lVar18 = 0;
  }
  lVar21 = *(longlong *)(param_1 + 0x30);
  uVar23 = (ulonglong)*puVar12;
  uVar17 = *(uint *)((longlong)puVar3 + lVar18);
  uVar10 = (ulonglong)uVar17;
  if ((uVar10 < 0x39) && ((0x110010000000000U >> (uVar10 & 0x3f) & 1) != 0)) {
    bVar5 = 0;
  }
  else {
    if ((uVar17 != 0x7c) && (uVar17 != 0x6c)) {
      return 0;
    }
    bVar5 = 1;
  }
  uVar17 = *(uint *)((longlong)puVar3 + lVar18 + 0x10);
  if (6 < uVar17) {
    return 0;
  }
  if ((0x49U >> (uVar17 & 0x1f) & 1) == 0) {
    return 0;
  }
  if ((((*(short *)((longlong)puVar3 + lVar18 + 0xc) == 1) &&
       (sVar2 = *(short *)((longlong)puVar3 + lVar18 + 0xe),
       (ushort)(sVar2 << 0xd | (ushort)(sVar2 - 8U) >> 3) < 4)) &&
      (local_68 = lVar21 - uVar23, (longlong)uVar23 <= lVar21)) &&
     ((longlong)uVar10 <= lVar21 - lVar18)) {
    uVar17 = *(uint *)((longlong)puVar3 + lVar18 + 4);
    *(ulonglong *)(param_1 + 0x48) = (ulonglong)uVar17;
    uVar22 = *(uint *)((longlong)puVar3 + lVar18 + 8);
    uVar19 = -uVar22;
    if ((int)-uVar22 < 0) {
      uVar19 = uVar22;
    }
    uVar14 = (ulonglong)uVar19;
    *(ulonglong *)(param_1 + 0x50) = uVar14;
    if (*(char *)(param_1 + 0x69) == '\x01') {
      uVar14 = (ulonglong)(uVar19 >> 1);
      *(ulonglong *)(param_1 + 0x50) = uVar14;
    }
    if (0x1ffffffc < uVar17 - 1) {
      return 0;
    }
    if (0x1ffffffc < (int)uVar14 - 1U) {
      return 0;
    }
    uVar14 = uVar14 * uVar17;
    if (0x1fffffff < uVar14) {
      return 0;
    }
    uVar14 = uVar14 * 4;
    plVar1 = (longlong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(ulonglong *)(param_1 + 0x20) == uVar14) {
      lVar11 = 0;
      uVar8 = uVar14;
    }
    else {
      FUN_140d2d4a8(plVar1,uVar14);
      lVar11 = *(longlong *)(param_1 + 0x18);
      uVar8 = *(ulonglong *)(param_1 + 0x20);
    }
    *(ulonglong *)(param_1 + 0x18) = lVar11 + uVar14;
    if (uVar8 - lVar11 < uVar14) {
      FUN_14112c458(plVar1);
    }
    lVar11 = *(longlong *)(param_1 + 0x48);
    uVar16 = *(ushort *)((longlong)puVar3 + lVar18 + 0xe);
    uVar17 = (uint)(uVar16 >> 3) * (int)lVar11 + 3;
    uVar19 = uVar17 & 0xfffffffc;
    if ((int)uVar19 < 1) {
      return 0;
    }
    uVar14 = (ulonglong)(uVar17 & 0x7ffffffc);
    lVar13 = *(longlong *)(param_1 + 0x50);
    lVar9 = lVar13 * uVar14;
    if (lVar9 - local_68 != 0 && local_68 <= lVar9) {
      return 0;
    }
    uVar17 = -uVar19;
    if ((int)uVar22 < 0) {
      uVar17 = uVar19;
    }
    local_68 = CONCAT44(local_68._4_4_,uVar17);
    lVar9 = 0;
    if ((int)uVar22 >= 0) {
      lVar9 = lVar13 + -1;
    }
    uVar16 = uVar16 * 0x2000 | (ushort)(uVar16 - 8) >> 3;
    if (3 < uVar16) {
      return 0;
    }
    pcVar24 = *(char **)(param_1 + 0x10);
    pcVar15 = (char *)((longlong)puVar3 + lVar9 * uVar14 + uVar23);
    switch(uVar16) {
    case 0:
      uVar17 = *(uint *)((longlong)puVar3 + lVar18 + 0x20);
      uVar22 = 0x100;
      if (uVar17 != 0) {
        uVar22 = uVar17;
      }
      if (0x100 < uVar22) {
        return 0;
      }
      lVar18 = (longlong)puVar3 + uVar10 + lVar18;
      if ((longlong)puVar3 + (lVar21 - lVar18) < (longlong)(ulonglong)(uVar22 * 4)) {
        return 0;
      }
      local_78 = 0;
      uStack_70 = 0;
      FUN_1469886f0(&local_78,0x100,&DAT_149ef8201);
      uVar10 = 0;
      do {
        *(uint *)(local_78 + uVar10 * 4) =
             CONCAT12(*(undefined1 *)(lVar18 + 2 + uVar10 * 4),*(undefined2 *)(lVar18 + uVar10 * 4))
             | 0xff000000;
        uVar10 = uVar10 + 1;
      } while (uVar22 + (uVar22 == 0) != uVar10);
      if (uVar22 != 0x100) {
        uVar10 = (ulonglong)uVar22;
        do {
          uVar10 = uVar10 + 1;
          *(undefined4 *)(local_78 + -4 + uVar10 * 4) = 0xff000000;
        } while ((int)uVar10 != 0x100);
      }
      lVar18 = *(longlong *)(param_1 + 0x50);
      if (0 < lVar18) {
        lVar21 = *(longlong *)(param_1 + 0x48);
        lVar11 = 0;
        do {
          if (0 < lVar21) {
            lVar13 = 0;
            lVar18 = 0;
            do {
              *(undefined4 *)(pcVar24 + lVar18 * 4) =
                   *(undefined4 *)(local_78 + (ulonglong)(byte)pcVar15[lVar18] * 4);
              lVar18 = lVar18 + 1;
              lVar21 = *(longlong *)(param_1 + 0x48);
              lVar13 = lVar13 + 4;
            } while (lVar18 < lVar21);
            lVar18 = *(longlong *)(param_1 + 0x50);
            pcVar24 = pcVar24 + lVar13;
          }
          pcVar15 = pcVar15 + (int)local_68;
          lVar11 = lVar11 + 1;
        } while (lVar11 < lVar18);
      }
      if (local_78 == 0) {
        return 1;
      }
      FUN_1400020a8();
      return 1;
    case 1:
      iVar7 = *(int *)((longlong)puVar3 + lVar18 + 0x10);
      if (iVar7 == 0) {
        if (0 < lVar13) {
          lVar18 = 0;
          do {
            if (0 < lVar11) {
              lVar21 = 0;
              do {
                uVar16 = *(ushort *)(pcVar15 + lVar21 * 2);
                bVar5 = (byte)(uVar16 >> 2);
                *pcVar24 = (bVar5 & 7) + (char)uVar16 * '\b';
                bVar6 = (byte)(uVar16 >> 7);
                pcVar24[1] = bVar6 & 7 | bVar5 & 0xf8;
                pcVar24[2] = (byte)(uVar16 >> 0xc) & 7 | bVar6 & 0xf8;
                pcVar24[3] = -1;
                pcVar24 = pcVar24 + 4;
                lVar21 = lVar21 + 1;
                lVar11 = *(longlong *)(param_1 + 0x48);
              } while (lVar21 < lVar11);
              lVar13 = *(longlong *)(param_1 + 0x50);
            }
            pcVar15 = pcVar15 + (int)uVar17;
            lVar18 = lVar18 + 1;
          } while (lVar18 < lVar13);
          return 1;
        }
        return 1;
      }
      break;
    case 2:
      if (0 < lVar13) {
        lVar18 = 0;
        do {
          if (0 < lVar11) {
            lVar21 = 0;
            pcVar20 = pcVar15;
            do {
              *pcVar24 = *pcVar20;
              pcVar24[1] = pcVar20[1];
              pcVar24[2] = pcVar20[2];
              pcVar24[3] = -1;
              pcVar24 = pcVar24 + 4;
              lVar21 = lVar21 + 1;
              lVar11 = *(longlong *)(param_1 + 0x48);
              pcVar20 = pcVar20 + 3;
            } while (lVar21 < lVar11);
            lVar13 = *(longlong *)(param_1 + 0x50);
          }
          pcVar15 = pcVar15 + (int)uVar17;
          lVar18 = lVar18 + 1;
        } while (lVar18 < lVar13);
        return 1;
      }
      return 1;
    case 3:
      iVar7 = *(int *)((longlong)puVar3 + lVar18 + 0x10);
      if (iVar7 == 0) {
        if (lVar13 < 1) {
          return 1;
        }
        lVar18 = 0;
        lVar21 = 0;
        do {
          if (0 < lVar11) {
            lVar13 = 0;
            do {
              *pcVar24 = pcVar15[lVar13 * 4];
              pcVar24[1] = pcVar15[lVar13 * 4 + 1];
              pcVar24[2] = pcVar15[lVar13 * 4 + 2];
              lVar21 = lVar21 + (ulonglong)(byte)pcVar15[lVar13 * 4 + 3];
              pcVar24[3] = pcVar15[lVar13 * 4 + 3];
              pcVar24 = pcVar24 + 4;
              lVar13 = lVar13 + 1;
              lVar11 = *(longlong *)(param_1 + 0x48);
            } while (lVar13 < lVar11);
            lVar13 = *(longlong *)(param_1 + 0x50);
          }
          pcVar15 = pcVar15 + (int)uVar17;
          lVar18 = lVar18 + 1;
        } while (lVar18 < lVar13);
        if (0 < lVar13) {
          if (lVar21 == 0) {
            lVar18 = *plVar1;
            lVar21 = 0;
            do {
              if (0 < lVar11) {
                lVar13 = 0;
                do {
                  *(undefined1 *)(lVar18 + 3) = 0xff;
                  lVar18 = lVar18 + 4;
                  lVar13 = lVar13 + 1;
                  lVar11 = *(longlong *)(param_1 + 0x48);
                } while (lVar13 < lVar11);
                lVar13 = *(longlong *)(param_1 + 0x50);
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 < lVar13);
            return 1;
          }
          return 1;
        }
        return 1;
      }
    }
    if ((iVar7 == 6) || (iVar7 == 3)) {
      lVar11 = (longlong)puVar3 + lVar18 + 0x28;
      if ((ulonglong)((longlong)puVar3 + (lVar21 - lVar11)) < 0x10) {
        return 0;
      }
      if (!(bool)((ulonglong)(lVar21 - lVar18) < 0x6c & bVar5)) {
        lVar21 = 0;
        fVar27 = 255.0;
        do {
          uVar17 = *(uint *)(lVar11 + lVar21 * 4);
          *(uint *)((longlong)&local_78 + lVar21 * 4) = uVar17;
          if ((ulonglong)uVar17 == 0) {
            fVar26 = 0.0;
          }
          else {
            iVar7 = 0;
            if (uVar17 != 0) {
              for (; (uVar17 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
              }
            }
            uVar10 = (ulonglong)uVar17 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            dVar4 = ldexp((double)(255.0 / (float)~(-1L << ((char)lVar13 - (char)iVar7 & 0x3fU))),
                          -iVar7);
            fVar26 = (float)dVar4;
          }
          local_88[lVar21] = fVar26;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 4);
        if ((bool)(bVar5 & uStack_70._4_4_ != 0)) {
          fVar27 = 0.5;
        }
        else {
          uStack_70 = uStack_70 & 0xffffffff;
          local_88[3] = 0.0;
        }
        lVar21 = *(longlong *)(param_1 + 0x50);
        if (*(short *)((longlong)puVar3 + lVar18 + 0xe) == 0x20) {
          if (0 < lVar21) {
            lVar18 = *(longlong *)(param_1 + 0x48);
            lVar11 = 0;
            do {
              if (0 < lVar18) {
                lVar21 = 0;
                do {
                  uVar17 = *(uint *)(pcVar15 + lVar21 * 4);
                  *pcVar24 = (char)(int)((float)((uint)uStack_70 & uVar17) * local_88[2] + 0.5);
                  pcVar24[1] = (char)(int)((float)(local_78._4_4_ & uVar17) * local_88[1] + 0.5);
                  pcVar24[2] = (char)(int)((float)((uint)local_78 & uVar17) * local_88[0] + 0.5);
                  pcVar24[3] = (char)(int)((float)(uVar17 & uStack_70._4_4_) * local_88[3] + fVar27)
                  ;
                  pcVar24 = pcVar24 + 4;
                  lVar21 = lVar21 + 1;
                  lVar18 = *(longlong *)(param_1 + 0x48);
                } while (lVar21 < lVar18);
                lVar21 = *(longlong *)(param_1 + 0x50);
              }
              pcVar15 = pcVar15 + (int)local_68;
              lVar11 = lVar11 + 1;
            } while (lVar11 < lVar21);
          }
        }
        else if (0 < lVar21) {
          lVar18 = *(longlong *)(param_1 + 0x48);
          lVar11 = 0;
          do {
            if (0 < lVar18) {
              lVar21 = 0;
              do {
                uVar16 = *(ushort *)(pcVar15 + lVar21 * 2);
                *pcVar24 = (char)(int)((float)((uint)uStack_70 & uVar16) * local_88[2] + 0.5);
                pcVar24[1] = (char)(int)((float)(local_78._4_4_ & uVar16) * local_88[1] + 0.5);
                pcVar24[2] = (char)(int)((float)((uint)local_78 & uVar16) * local_88[0] + 0.5);
                pcVar24[3] = (char)(int)((float)(uVar16 & uStack_70._4_4_) * local_88[3] + fVar27);
                pcVar24 = pcVar24 + 4;
                lVar21 = lVar21 + 1;
                lVar18 = *(longlong *)(param_1 + 0x48);
              } while (lVar21 < lVar18);
              lVar21 = *(longlong *)(param_1 + 0x50);
            }
            pcVar15 = pcVar15 + (int)local_68;
            lVar11 = lVar11 + 1;
          } while (lVar11 < lVar21);
        }
        return 1;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1428823a2 Unwind@1428823a2 body=69 status=ok
// SIG undefined Unwind@1428823a2(void)

void Unwind_1428823a2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1428823e8 FUN_1428823e8 body=189 status=ok
// SIG undefined FUN_1428823e8(void)

ulonglong FUN_1428823e8(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  cVar3 = FUN_140d48816();
  if (cVar3 == '\0') {
LAB_142882471:
    if (*(longlong *)(param_1 + 0x38) < 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar5 = 0;
      FUN_140d2d4a8(param_1 + 0x28,0);
      goto LAB_14288249c;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x68) == '\x01') {
      if (((*(ulonglong *)(param_1 + 0x30) < 0x36) || (**(char **)(param_1 + 0x28) != 'B')) ||
         ((*(char **)(param_1 + 0x28))[1] != 'M')) goto LAB_142882471;
      uVar4 = 0xe;
    }
    else {
      uVar4 = 0;
    }
    cVar3 = FUN_1428824a6(param_1,uVar4);
    if (cVar3 == '\0') goto LAB_142882471;
    uVar1 = *(ulonglong *)(param_1 + 0x50);
    if (((0 < (longlong)uVar1) && (uVar2 = *(ulonglong *)(param_1 + 0x48), 0 < (longlong)uVar2)) &&
       (((uVar2 | uVar1) < 0x80000000 &&
        (uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1), uVar2 * uVar1 >> 0x20 == 0))))
    goto LAB_14288249c;
    FUN_14020fad6(param_1 + 0x58,L"Image dimensions are not possible to import");
  }
  uVar5 = 0;
LAB_14288249c:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1428824a6 FUN_1428824a6 body=145 status=ok
// SIG undefined FUN_1428824a6(void)

undefined4 FUN_1428824a6(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 + 0x28 <= *(longlong *)(param_1 + 0x30)) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar2 = *(uint *)(lVar4 + 0x10 + param_2);
    if ((6 < uVar2) || ((0x49U >> (uVar2 & 0x1f) & 1) == 0)) {
      return 0;
    }
    if ((*(short *)(lVar4 + 0xc + param_2) == 1) &&
       (sVar1 = *(short *)(lVar4 + 0xe + param_2),
       (ushort)(sVar1 << 0xd | (ushort)(sVar1 - 8U) >> 3) < 4)) {
      uVar2 = *(uint *)(lVar4 + 4 + param_2);
      *(ulonglong *)(param_1 + 0x48) = (ulonglong)uVar2;
      uVar3 = *(uint *)(lVar4 + 8 + param_2);
      uVar5 = -uVar3;
      if ((int)uVar5 < 0) {
        uVar5 = uVar3;
      }
      *(ulonglong *)(param_1 + 0x50) = (ulonglong)uVar5;
      if (*(char *)(param_1 + 0x69) == '\x01') {
        uVar5 = uVar5 >> 1;
        *(ulonglong *)(param_1 + 0x50) = (ulonglong)uVar5;
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined4 *)(param_1 + 0x44) = 8;
      if (uVar2 - 1 < 0x1ffffffd) {
        return CONCAT31((int3)(uVar5 - 1 >> 8),uVar5 - 1 < 0x1ffffffd);
      }
    }
  }
  return 0;
}



// FUNCTION 142882538 FUN_142882538 body=159 status=ok
// SIG undefined FUN_142882538(void)

undefined8 FUN_142882538(undefined1 param_1,int param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  switch(param_1) {
  case 0:
    if (param_2 == 0x10) {
      uVar1 = 3;
      goto LAB_1428825ce;
    }
    if (param_2 == 8) {
      uVar1 = 1;
      goto LAB_1428825ab;
    }
    break;
  case 1:
    if (param_2 != 0x10) {
      if (param_2 == 8) {
        uVar1 = 1;
        goto LAB_1428825ce;
      }
      break;
    }
    uVar1 = 3;
    goto LAB_1428825ab;
  case 2:
    if (param_2 == 0x10) {
      uVar1 = 6;
    }
    else {
      if (param_2 != 8) break;
      uVar1 = 0;
    }
    goto LAB_1428825ce;
  case 3:
    if (param_2 == 0x20) {
      uVar1 = 5;
    }
    else {
      if (param_2 != 0x10) break;
      uVar1 = 4;
    }
    goto LAB_1428825ce;
  case 4:
    if (param_2 == 8) {
      uVar1 = 2;
      goto LAB_1428825ce;
    }
    break;
  case 5:
    if (param_2 == 0x20) {
      uVar1 = 8;
    }
    else {
      if (param_2 != 0x10) break;
      uVar1 = 7;
    }
LAB_1428825ce:
    uVar2 = 1;
    if (param_3 == (undefined1 *)0x0) {
      return uVar1;
    }
    goto LAB_1428825d3;
  }
  uVar1 = 0xff;
LAB_1428825ab:
  if (param_3 != (undefined1 *)0x0) {
    uVar2 = 0;
LAB_1428825d3:
    *param_3 = uVar2;
  }
  return uVar1;
}



// FUNCTION 1428825d8 FUN_1428825d8 body=813 status=ok
// SIG undefined FUN_1428825d8(void)

ulonglong FUN_1428825d8(longlong param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int *piVar10;
  size_t sVar11;
  void *_Dst;
  longlong *plVar12;
  int iVar13;
  char *_Str;
  bool bVar14;
  bool bVar15;
  undefined1 local_1e8 [280];
  undefined1 local_d0 [64];
  undefined1 local_90 [16];
  longlong *local_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong local_60;
  void *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x68);
  FUN_14698d349(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_14698d378(plVar1);
  }
  if (((3 < param_3) && (*param_2 == 0x1312f76)) &&
     (cVar7 = FUN_140d48816(param_1,param_2,param_3), cVar7 != '\0')) {
    local_60 = param_1;
    FUN_1469891cc(local_d0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    uVar8 = FUN_144b73940();
    FUN_144b6ba40(local_90,local_d0,uVar8);
    uVar9 = FUN_144b6bd10(local_90);
    FUN_144b670b0(local_1e8,uVar9);
    uVar9 = FUN_144b67b60(local_1e8);
    FUN_14698ce3e(local_78,uVar9);
    piVar10 = (int *)FUN_144b67b00(local_1e8);
    iVar13 = piVar10[3];
    iVar2 = piVar10[1];
    *(longlong *)(local_60 + 0x48) = (longlong)((piVar10[2] - *piVar10) + 1);
    *(longlong *)(local_60 + 0x50) = (longlong)((iVar13 - iVar2) + 1);
    FUN_144b65f10(local_78,&local_68);
    bVar14 = true;
    iVar13 = 0;
    while (FUN_144b65f30(local_78,&local_80), lVar5 = local_60, local_68 != local_80) {
      if (bVar14) {
        bVar14 = *(int *)((longlong)local_68 + 0x11c) == 1;
      }
      else {
        bVar14 = false;
      }
      _Str = (char *)((longlong)local_68 + 0x1c);
      sVar11 = strlen(_Str);
      _Size = sVar11 + 1;
      _Dst = (void *)FUN_14001cc68(sVar11 + 1 + (ulonglong)(_Size == 0));
      memset(_Dst,0,_Size);
      local_58 = _Dst;
      memcpy(_Dst,_Str,_Size);
      iVar2 = *(int *)(local_60 + 0x70);
      *(uint *)(local_60 + 0x70) = iVar2 + 1U;
      if (*(uint *)(local_60 + 0x74) < iVar2 + 1U) {
        FUN_14698d3a8(plVar1,iVar2);
      }
      *(void **)(*plVar1 + (longlong)iVar2 * 8) = local_58;
      plVar12 = local_68;
      plVar6 = (longlong *)local_68[2];
      if (*(char *)(local_68[2] + 0x19) == '\0') {
        do {
          local_68 = plVar6;
          plVar6 = (longlong *)*local_68;
        } while (*(char *)(*local_68 + 0x19) == '\0');
      }
      else {
        do {
          local_68 = (longlong *)plVar12[1];
          if (*(char *)((longlong)local_68 + 0x19) != '\0') break;
          bVar15 = plVar12 == (longlong *)local_68[2];
          plVar12 = local_68;
        } while (bVar15);
      }
      iVar13 = iVar13 + 1;
    }
    if (iVar13 == 0) {
      FUN_14020fad6(local_60 + 0x58,L"EXR has no channels");
    }
    else {
      *(uint *)(local_60 + 0x44) = ((byte)~bVar14 & 1) * 0x10 + 0x10;
      *(char *)(local_60 + 0x40) = (iVar13 == 1) * '\x02' + '\x03';
    }
    FUN_14698d0c2(local_78,local_78,*(undefined8 *)(local_78[0] + 8));
    FUN_1400020a8(local_78[0]);
    FUN_144b67220(local_1e8);
    FUN_144b6bc50(local_90);
    FUN_144b6b720(local_d0);
    if (iVar13 != 0) {
      uVar3 = *(ulonglong *)(lVar5 + 0x50);
      if (((0 < (longlong)uVar3) && (uVar4 = *(ulonglong *)(lVar5 + 0x48), 0 < (longlong)uVar4)) &&
         ((uVar4 | uVar3) < 0x80000000)) {
        local_58 = (void *)CONCAT44(local_58._4_4_,(int)CONCAT71((int7)(uVar3 >> 8),1));
        if (uVar4 * uVar3 >> 0x20 == 0) goto LAB_142882650;
      }
      FUN_14020fad6(lVar5 + 0x58,L"Image dimensions are not possible to import");
    }
  }
  local_58 = (void *)0x0;
LAB_142882650:
  return (ulonglong)local_58 & 0xffffffff;
}



// FUNCTION 142882906 Unwind@142882906 body=68 status=ok
// SIG undefined Unwind@142882906(void)

void Unwind_142882906(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x1b0) != 0) {
    FUN_1400020a8(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}



// FUNCTION 14288294a Unwind@14288294a body=79 status=ok
// SIG undefined Unwind@14288294a(void)

void Unwind_14288294a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_2 + 400);
  FUN_14698d0c2(plVar1,plVar1,*(undefined8 *)(*plVar1 + 8));
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14288299a Unwind@14288299a body=55 status=ok
// SIG undefined Unwind@14288299a(void)

void Unwind_14288299a(undefined8 param_1,longlong param_2)

{
  FUN_144b67220(param_2 + 0x20);
  return;
}



// FUNCTION 1428829d2 Unwind@1428829d2 body=58 status=ok
// SIG undefined Unwind@1428829d2(void)

void Unwind_1428829d2(undefined8 param_1,longlong param_2)

{
  FUN_144b6bc50(param_2 + 0x178);
  return;
}



// FUNCTION 142882a0c Unwind@142882a0c body=58 status=ok
// SIG undefined Unwind@142882a0c(void)

void Unwind_142882a0c(undefined8 param_1,longlong param_2)

{
  FUN_144b6b720(param_2 + 0x138);
  return;
}



// FUNCTION 142882a46 Catch@142882a46 body=130 status=ok
// SIG undefined Catch@142882a46(void)

undefined8 Catch_142882a46(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x1c0) + 8))();
  FUN_144a81018(param_2 + 0x20,uVar1);
  FUN_14020fad6(*(longlong *)(param_2 + 0x1a8) + 0x58,*(undefined8 *)(param_2 + 0x128));
  if (*(longlong *)(param_2 + 0x120) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x1b0) = 0;
  return 0x142882650;
}


