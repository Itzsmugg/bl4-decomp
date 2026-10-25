// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145a99696 FUN_145a99696 body=319 status=ok
// SIG undefined FUN_145a99696(void)

void FUN_145a99696(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar2 = FUN_1409d448e(param_2);
    if (lVar2 != 0) {
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(param_1,uVar3);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar5 != 0) {
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
          if (*(int *)(lVar5 + 0x40) < 1) {
            bVar1 = false;
          }
          else {
            fVar8 = (float)FUN_14055830e(*(undefined8 *)(lVar5 + 0x38));
            bVar1 = fVar8 <= 0.0;
          }
          lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
          if ((longlong)*(int *)(lVar5 + 0x40) != 0) {
            lVar7 = *(longlong *)(lVar5 + 0x38);
            lVar5 = (longlong)*(int *)(lVar5 + 0x40) * 0x88;
            do {
              lVar6 = FUN_1409d448e(lVar7 + 0x18);
              if (lVar6 == lVar2) {
                FUN_145be4800(lVar7,param_3,param_4,0);
              }
              lVar7 = lVar7 + 0x88;
              lVar5 = lVar5 + -0x88;
            } while (lVar5 != 0);
          }
          if (bVar1) {
            lVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
            if (lVar2 != 0) {
              uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
              FUN_145a997d6(uVar3);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145a997d6 FUN_145a997d6 body=81 status=ok
// SIG undefined FUN_145a997d6(void)

void FUN_145a997d6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141483e78();
  FUN_145a99848(param_1 + 0x270);
  iVar1 = *(int *)(param_1 + 0x2f8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2f0);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x10))();
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 145a99848 FUN_145a99848 body=356 status=ok
// SIG undefined FUN_145a99848(void)

void FUN_145a99848(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  local_48 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_68 = local_40;
  iStack_64 = iStack_3c;
  local_60 = local_38;
  local_5c = local_34;
  local_78 = local_50;
  local_70 = local_48;
  local_80 = plVar1;
  local_58 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      lVar3 = (longlong)*(int *)(*local_80 + 0x60 + (longlong)iStack_64 * 0x80);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(*local_80 + 0x58 + (longlong)iStack_64 * 0x80);
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(lVar4 + lVar5);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x10))();
          }
          lVar5 = lVar5 + 0x10;
        } while (lVar3 * 0x10 != lVar5);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a999ae FUN_145a999ae body=104 status=ok
// SIG undefined FUN_145a999ae(void)

undefined8 FUN_145a999ae(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145a99a18(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a99a18 FUN_145a99a18 body=42 status=ok
// SIG undefined FUN_145a99a18(void)

undefined8 FUN_145a99a18(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb89be8;
  if ((((DAT_14cb89be8 == (longlong *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) ||
     (*param_1 == DAT_14c948000)) {
    return 0;
  }
  if (*(code **)(*DAT_14cb89be8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb89be8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb89be8[0x3a] <= *(int *)((longlong)DAT_14cb89be8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb89be8 + 0x300))(DAT_14cb89be8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 145a99a42 FUN_145a99a42 body=559 status=ok
// SIG undefined FUN_145a99a42(void)

longlong * FUN_145a99a42(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  plVar5 = (longlong *)FUN_1400014c6(param_2);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar6 = FUN_144a87be8();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      plVar5 = (longlong *)FUN_140565f07(plVar5[8]);
    }
  }
  plVar8 = (longlong *)*param_2;
  plVar4 = (longlong *)param_2[1];
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
  if ((plVar5 == (longlong *)0x0) || (plVar8 == (longlong *)0x0)) goto LAB_145a99b75;
  lVar6 = FUN_14001cc68((longlong)
                        (int)(-*(int *)((longlong)plVar5 + 0x5c) &
                             ((int)plVar5[0xb] + *(int *)((longlong)plVar5 + 0x5c)) - 1U),0);
  (**(code **)(*plVar5 + 0x2e8))(plVar5,lVar6,1);
  uVar7 = (**(code **)(*plVar8 + 8))(plVar8);
  FUN_144a54316(uVar7,plVar8,plVar5,lVar6);
  local_38 = 0;
  FUN_14485c47a(&local_38,plVar5);
  plVar8 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar8[2] = local_38;
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b3f2530;
  plVar8[3] = lVar6;
  *param_1 = lVar6;
  plVar5 = (longlong *)param_1[1];
  if (plVar8 == plVar5) {
    if (plVar8 == (longlong *)0x0) goto LAB_145a99b75;
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_145a99b75;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar5 = plVar8;
  }
  else {
    param_1[1] = (longlong)plVar8;
    if (plVar5 == (longlong *)0x0) goto LAB_145a99b75;
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_145a99b75;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_145a99b75:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a99c78 FUN_145a99c78 body=26 status=ok
// SIG undefined FUN_145a99c78(void)

undefined8 FUN_145a99c78(longlong param_1,undefined8 param_2)

{
  FUN_145a99c92(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145a99c92 FUN_145a99c92 body=422 status=ok
// SIG undefined FUN_145a99c92(void)

longlong * FUN_145a99c92(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb75f50 != (longlong *)0x0 && DAT_14cb75f58 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb75f50 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb75f50;
    if (DAT_14cb75f58 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145a99d63;
  }
  lVar3 = FUN_14001cc68(0x148,0x10);
  FUN_145a99e3a(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3f2860;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145a99d63;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145a99d63;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145a99dde:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145a99d59;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145a99dde;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145a99d59:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_145a99d63:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145a99e3a FUN_145a99e3a body=642 status=ok
// SIG undefined FUN_145a99e3a(void)

undefined8 * FUN_145a99e3a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3fa870;
  param_1[4] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 5) = 0;
  FUN_1405bceb4(param_1 + 4);
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b3f9b40;
  param_1[4] = &PTR_FUN_14b3f9b60;
  param_1[6] = &PTR_LAB_14b3f9b80;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 1;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar2 = FUN_145a9a11e();
  FUN_145a3e5da(3,uVar2);
  uVar2 = FUN_145a9a156();
  FUN_145a3e5da(4,uVar2);
  if (-1 < DAT_14c7638e8) {
    if (*(int *)((longlong)param_1 + 0x5c) < DAT_14c7638e8) {
      FUN_145a9a0be(param_1 + 10);
      if (DAT_14c7638e8 < 0) goto LAB_145a9a064;
    }
    if (*(int *)((longlong)param_1 + 0x6c) < DAT_14c7638e8) {
      FUN_145a9a0be(param_1 + 0xc);
    }
    lVar1 = DAT_14cb78ff0;
    if (DAT_14cb78ff0 != 0) {
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(DAT_14cb78ff0 + 0x390);
      local_48 = FUN_1488318e8;
      local_40 = 0;
      FUN_145a9a366(lVar1 + 0x28,local_38,param_1);
    }
    local_48 = FUN_1458c4db8;
    local_40 = 0;
    FUN_145a9a18e(&DAT_14cb78c88,local_38,param_1,&local_48);
    local_48 = FUN_1458c4fd0;
    local_40 = 0;
    FUN_145a9a18e(&DAT_14cb78ca0,local_38,param_1,&local_48);
    if (*(char *)(param_1 + 0x1b) == '\0') {
      local_48 = (code *)&LAB_148831ad4;
      local_40 = 0;
      FUN_1488319e6(&DAT_14c997c20,local_38,param_1,&local_48);
      local_48 = (code *)&LAB_148831ada;
      local_40 = 0;
      FUN_1488319e6(&DAT_14c997c38,local_38,param_1,&local_48);
    }
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_145a9a064:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14c7638e8);
}



// FUNCTION 145a9a0be FUN_145a9a0be body=95 status=ok
// SIG undefined FUN_145a9a0be(void)

void FUN_145a9a0be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145a9a11e FUN_145a9a11e body=55 status=ok
// SIG undefined FUN_145a9a11e(void)

void FUN_145a9a11e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5db50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5db50 = FUN_140002ddd(FUN_1464ddada,uVar1,L"ReplicatedImpactEffectRequest");
  }
  return;
}



// FUNCTION 145a9a156 FUN_145a9a156 body=55 status=ok
// SIG undefined FUN_145a9a156(void)

void FUN_145a9a156(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5db68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5db68 = FUN_140002ddd(FUN_1464ddb3a,uVar1,L"ReplicatedStopImpactEffectRequest");
  }
  return;
}



// FUNCTION 145a9a18e FUN_145a9a18e body=237 status=ok
// SIG undefined FUN_145a9a18e(void)

undefined8
FUN_145a9a18e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3fb810;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b3fb7a0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145a9a27c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9a27c FUN_145a9a27c body=216 status=ok
// SIG undefined FUN_145a9a27c(void)

undefined8 * FUN_145a9a27c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9a366 FUN_145a9a366 body=237 status=ok
// SIG undefined FUN_145a9a366(void)

undefined8
FUN_145a9a366(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3fc1e0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b3fb730;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145a9a454(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9a454 FUN_145a9a454 body=216 status=ok
// SIG undefined FUN_145a9a454(void)

undefined8 * FUN_145a9a454(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9a53d FUN_145a9a53d body=46 status=ok
// SIG undefined FUN_145a9a53d(void)

void FUN_145a9a53d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a9a56c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b563df0;
  puVar1[5] = &PTR_FUN_14b564120;
  return;
}



// FUNCTION 145a9a56c FUN_145a9a56c body=204 status=ok
// SIG undefined FUN_145a9a56c(void)

undefined8 * FUN_145a9a56c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14ae40500;
  param_1[5] = &PTR_FUN_14ae40830;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN_140ca8f8e(param_1 + 0x32);
  param_1[0x48] = 0;
  FUN_140ca8f8e(param_1 + 0x4a);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  FUN_140ca8f8e(param_1 + 0x6e);
  *(undefined1 *)(param_1 + 0x84) = 0;
  uVar1 = FUN_141319416();
  FUN_140f13d9e(param_1 + 0x4a,uVar1);
  return param_1;
}



// FUNCTION 145a9a638 FUN_145a9a638 body=71 status=ok
// SIG undefined FUN_145a9a638(void)

void FUN_145a9a638(longlong param_1)

{
  longlong lVar1;
  
  FUN_1448c4a0e();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_1402ad1e0(lVar1);
      if (lVar1 != 0) {
        FUN_145a9a680(lVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145a9a680 FUN_145a9a680 body=105 status=ok
// SIG undefined FUN_145a9a680(void)

void FUN_145a9a680(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_145a9a6ea(param_1 + 0x48);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9a6ea FUN_145a9a6ea body=382 status=ok
// SIG undefined FUN_145a9a6ea(void)

void FUN_145a9a6ea(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (lVar9 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar5);
    }
    iVar7 = 0;
    bVar8 = *plVar2 == lVar5;
    iVar10 = 0;
    do {
      lVar6 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar5 = lVar6;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar12 = iVar4;
        if (lVar9 <= lVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar3);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar11;
      } while (bVar8 == (plVar2[lVar5] == lVar3));
      if (bVar8 == false) {
        if (iVar7 != iVar10) {
          memmove(plVar2 + iVar7,plVar2 + lVar6,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar7 = iVar7 + (iVar12 - iVar10);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar10 = iVar12;
    } while (lVar5 < lVar9);
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 145a9a868 FUN_145a9a868 body=40 status=ok
// SIG undefined FUN_145a9a868(void)

undefined8 FUN_145a9a868(undefined8 param_1,int param_2)

{
  FUN_145a9a890();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a9a890 FUN_145a9a890 body=177 status=ok
// SIG undefined FUN_145a9a890(void)

void FUN_145a9a890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7dc250;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9a96a(param_1 + 0x6b);
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9a9a0(param_1 + 0x5e);
  FUN_145a9a941(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9aca2(param_1);
  return;
}



// FUNCTION 145a9a941 FUN_145a9a941 body=40 status=ok
// SIG undefined FUN_145a9a941(void)

void FUN_145a9a941(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c402b6(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 145a9a96a FUN_145a9a96a body=53 status=ok
// SIG undefined FUN_145a9a96a(void)

void FUN_145a9a96a(longlong *param_1)

{
  FUN_145a9ab2e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9a9a0 FUN_145a9a9a0 body=53 status=ok
// SIG undefined FUN_145a9a9a0(void)

void FUN_145a9a9a0(longlong *param_1)

{
  FUN_145a9a9d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9a9d6 FUN_145a9a9d6 body=343 status=ok
// SIG undefined FUN_145a9a9d6(void)

void FUN_145a9a9d6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x20 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a9ab2e FUN_145a9ab2e body=370 status=ok
// SIG undefined FUN_145a9ab2e(void)

void FUN_145a9ab2e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_14117dadb(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 145a9aca2 FUN_145a9aca2 body=794 status=ok
// SIG undefined FUN_145a9aca2(void)

void FUN_145a9aca2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b1e8c40;
  FUN_144760e21(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x50],*(undefined4 *)(param_1 + 0x51));
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_140f1008f(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_140f1008f(param_1[0x4c],*(undefined4 *)(param_1 + 0x4d));
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4032f(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_140b4032f(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x46];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x44];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_141485bc9(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9affc(param_1[0x3e],*(undefined4 *)(param_1 + 0x3f));
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9b02e(param_1 + 0x2c);
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(param_1 + 0x1c);
  FUN_145a9afbc(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(param_1 + 0xe);
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a9afbc FUN_145a9afbc body=64 status=ok
// SIG undefined FUN_145a9afbc(void)

void FUN_145a9afbc(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_145a9b0e2(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145a9affc FUN_145a9affc body=49 status=ok
// SIG undefined FUN_145a9affc(void)

void FUN_145a9affc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145a9b02e FUN_145a9b02e body=55 status=ok
// SIG undefined FUN_145a9b02e(void)

void FUN_145a9b02e(longlong *param_1)

{
  FUN_145a9b066(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9b066 FUN_145a9b066 body=123 status=ok
// SIG undefined FUN_145a9b066(void)

void FUN_145a9b066(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 145a9b0e2 FUN_145a9b0e2 body=230 status=ok
// SIG undefined FUN_145a9b0e2(void)

void FUN_145a9b0e2(longlong param_1)

{
  FUN_145a9b1c8();
  FUN_145a9b25f(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  FUN_145a9b29a(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_140bd50c4(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9b1c8 FUN_145a9b1c8 body=151 status=ok
// SIG undefined FUN_145a9b1c8(void)

void FUN_145a9b1c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141485bfa(param_1 + 0xf8);
  if ((longlong)*(int *)(param_1 + 0x150) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x148);
    lVar2 = (longlong)*(int *)(param_1 + 0x150) * 0x50;
    do {
      FUN_141485bfa(lVar1);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  FUN_145a9b34c(param_1 + 0xf8);
  FUN_145a9b25f(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) == 0) {
    return;
  }
  FUN_145a9b390(param_1 + 0x148);
  return;
}



// FUNCTION 145a9b25f FUN_145a9b25f body=59 status=ok
// SIG undefined FUN_145a9b25f(void)

void FUN_145a9b25f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145a9b29a(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 145a9b29a FUN_145a9b29a body=55 status=ok
// SIG undefined FUN_145a9b29a(void)

void FUN_145a9b29a(longlong *param_1)

{
  FUN_145a9b2d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9b2d2 FUN_145a9b2d2 body=121 status=ok
// SIG undefined FUN_145a9b2d2(void)

void FUN_145a9b2d2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 145a9b34c FUN_145a9b34c body=67 status=ok
// SIG undefined FUN_145a9b34c(void)

void FUN_145a9b34c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145a9b3c0(param_1);
    FUN_145a9b2d2(param_1,0);
    return;
  }
  FUN_145a9b2d2(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1414e81d0(param_1);
  return;
}



// FUNCTION 145a9b390 FUN_145a9b390 body=48 status=ok
// SIG undefined FUN_145a9b390(void)

void FUN_145a9b390(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 145a9b3c0 FUN_145a9b3c0 body=335 status=ok
// SIG undefined FUN_145a9b3c0(void)

void FUN_145a9b3c0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145a9b51c FUN_145a9b51c body=195 status=ok
// SIG undefined FUN_145a9b51c(void)

undefined8 * FUN_145a9b51c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b68c2d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x42c8000044160000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 145a9b5e0 FUN_145a9b5e0 body=38 status=ok
// SIG undefined FUN_145a9b5e0(void)

undefined8 FUN_145a9b5e0(undefined8 param_1,int param_2)

{
  FUN_145a9b606();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a9b606 FUN_145a9b606 body=65 status=ok
// SIG undefined FUN_145a9b606(void)

void FUN_145a9b606(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4edf00;
  FUN_14154e5cc(param_1 + 3);
  FUN_140cb1696(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145a9b650 FUN_145a9b650 body=176 status=ok
// SIG undefined FUN_145a9b650(void)

undefined8 * FUN_145a9b650(undefined8 *param_1)

{
  FUN_145a9b700();
  *param_1 = &PTR_FUN_14bc76850;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  FUN_14020fad6(param_1 + 0x7e,L"AddressX");
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  FUN_14020fad6(param_1 + 0x80,L"AddressY");
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  return param_1;
}



// FUNCTION 145a9b700 FUN_145a9b700 body=1273 status=ok
// SIG undefined FUN_145a9b700(void)

undefined8 * FUN_145a9b700(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc9aaa0;
  puVar3 = (undefined8 *)FUN_145a9bbfa();
  param_1[0x2a] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  pvVar2 = (void *)*puVar3;
  *(int *)(param_1 + 0x2b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2a,iVar1,0);
    memcpy((void *)param_1[0x2a],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3 = (undefined8 *)FUN_145a9bc78();
  param_1[0x2c] = 0;
  iVar1 = *(int *)(puVar3 + 1);
  pvVar2 = (void *)*puVar3;
  *(int *)(param_1 + 0x2d) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2c,iVar1,0);
    memcpy((void *)param_1[0x2c],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"TranslatedTextureNodeUid");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"AdjustBrightness");
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_14020fad6(param_1 + 0x32,L"AdjustBrightnessCurve");
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_14020fad6(param_1 + 0x34,L"AdjustVibrance");
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_14020fad6(param_1 + 0x36,L"AdjustSaturation");
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  FUN_14020fad6(param_1 + 0x38,L"AdjustRGBCurve");
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"AdjustHue");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"AdjustMinAlpha");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"AdjustMaxAlpha");
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_14020fad6(param_1 + 0x40,L"bChromaKeyTexture");
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  FUN_14020fad6(param_1 + 0x42,L"ChromaKeyThreshold");
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  FUN_14020fad6(param_1 + 0x44,L"ChromaKeyColor");
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  FUN_14020fad6(param_1 + 0x46,L"CompressionNoAlpha");
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  FUN_14020fad6(param_1 + 0x48,L"DeferCompression");
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_14020fad6(param_1 + 0x4a,L"LossyCompressionAmount");
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  FUN_14020fad6(param_1 + 0x4c,L"MaxTextureSize");
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_14020fad6(param_1 + 0x4e,L"CompressionQuality");
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  FUN_14020fad6(param_1 + 0x50,L"CompressionSettings");
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_14020fad6(param_1 + 0x52,L"bDoScaleMipsForAlphaCoverage");
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_14020fad6(param_1 + 0x54,L"AlphaCoverageThresholds");
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_14020fad6(param_1 + 0x56,L"bFlipGreenChannel");
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_14020fad6(param_1 + 0x58,L"bForcePVRTC4");
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_14020fad6(param_1 + 0x5a,L"PowerOfTwoMode");
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_14020fad6(param_1 + 0x5c,L"PaddingColor");
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_14020fad6(param_1 + 0x5e,L"Filter");
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_14020fad6(param_1 + 0x60,L"MipLoadOptions");
  param_1[0x62] = 0;
  param_1[99] = 0;
  FUN_14020fad6(param_1 + 0x62,L"SRGB");
  param_1[100] = 0;
  param_1[0x65] = 0;
  FUN_14020fad6(param_1 + 100,L"bUseLegacyGamma");
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  FUN_14020fad6(param_1 + 0x66,L"VirtualTextureStreaming");
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  FUN_14020fad6(param_1 + 0x68,L"ColorSpace");
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_14020fad6(param_1 + 0x6a,L"bPreserveBorder");
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_14020fad6(param_1 + 0x6c,L"MipGenSettings");
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  FUN_14020fad6(param_1 + 0x6e,L"LODBias");
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_14020fad6(param_1 + 0x70,L"LODGroup");
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_14020fad6(param_1 + 0x72,L"Downscale");
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  FUN_14020fad6(param_1 + 0x74,L"DownscaleOptions");
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_14020fad6(param_1 + 0x76,L"CompositeTextureMode");
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  FUN_14020fad6(param_1 + 0x78,L"CompositePower");
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  FUN_14020fad6(param_1 + 0x7a,L"AllowNonPowerOfTwo");
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  FUN_14020fad6(param_1 + 0x7c,L"PreferCompressedSourceData");
  return param_1;
}



// FUNCTION 145a9bbfa FUN_145a9bbfa body=125 status=ok
// SIG undefined FUN_145a9bbfa(void)

undefined8 * FUN_145a9bbfa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0bff8) {
    FUN_144b3d300(&DAT_14cc0bff8);
    if (DAT_14cc0bff8 == -1) {
      DAT_14cc0bfe8 = 0;
      uRam000000014cc0bff0 = 0;
      FUN_14020fad6(&DAT_14cc0bfe8,L"__ClassTypeAttribute__");
      atexit((_func_5014 *)&LAB_1444ba921);
      _Init_thread_footer(&DAT_14cc0bff8);
    }
  }
  return &DAT_14cc0bfe8;
}



// FUNCTION 145a9bc78 FUN_145a9bc78 body=125 status=ok
// SIG undefined FUN_145a9bc78(void)

undefined8 * FUN_145a9bc78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c010) {
    FUN_144b3d300(&DAT_14cc0c010);
    if (DAT_14cc0c010 == -1) {
      DAT_14cc0c000 = 0;
      uRam000000014cc0c008 = 0;
      FUN_14020fad6(&DAT_14cc0c000,L"__Asset_Name_Key__");
      atexit((_func_5014 *)&LAB_1444ba932);
      _Init_thread_footer(&DAT_14cc0c010);
    }
  }
  return &DAT_14cc0c000;
}



// FUNCTION 145a9bcf6 FUN_145a9bcf6 body=57 status=ok
// SIG undefined FUN_145a9bcf6(void)

undefined8 * FUN_145a9bcf6(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  param_1[3] = DAT_14c8464f0;
  FUN_144928b90(param_1 + 4,0);
  return param_1;
}



// FUNCTION 145a9bd30 FUN_145a9bd30 body=143 status=ok
// SIG undefined FUN_145a9bd30(void)

void FUN_145a9bd30(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145a9bdc0 FUN_145a9bdc0 body=769 status=ok
// SIG undefined FUN_145a9bdc0(void)

undefined4 * FUN_145a9bdc0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_f8 [40];
  undefined4 *local_d0;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  uint local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_2;
  FUN_145a9c272(param_1,local_c0);
  puVar2 = (undefined8 *)*param_3;
  lVar9 = param_3[1];
  pcVar3 = local_b8;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  puVar1 = (uint *)(local_b8 + 0x10);
  pcVar3[0x10] = '\0';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  pcVar3[0x18] = '\0';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x20] = '\0';
  pcVar3[0x21] = '\0';
  pcVar3[0x22] = '\0';
  pcVar3[0x23] = '\0';
  pcVar3[0x28] = '\0';
  pcVar3[0x29] = '\0';
  pcVar3[0x2a] = '\0';
  pcVar3[0x2b] = '\0';
  pcVar3[0x2c] = '\0';
  pcVar3[0x2d] = '\0';
  pcVar3[0x2e] = '\0';
  pcVar3[0x2f] = '\0';
  pcVar3[0x30] = '\0';
  pcVar3[0x31] = '\0';
  pcVar3[0x32] = '\0';
  pcVar3[0x33] = '\0';
  pcVar3[0x34] = '\0';
  pcVar3[0x35] = '\0';
  pcVar3[0x36] = '\0';
  pcVar3[0x37] = '\0';
  *(undefined4 *)(local_b8 + 8) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)local_b8 = *puVar2;
  FUN_1447715ec(puVar1,puVar2 + 2);
  FUN_145a9c0c2(local_b8 + 0x38,lVar9);
  pcVar3[0x48] = -1;
  pcVar3[0x49] = -1;
  pcVar3[0x4a] = -1;
  pcVar3[0x4b] = -1;
  local_c4 = local_c0[0];
  if (*local_b8 == '\x01') {
    FUN_1447a97f4(&local_70,puVar1);
    if (0 < local_6c) {
      iVar10 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_7c,iVar10,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_70,local_88,iVar10,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_70,local_94,iVar10,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_70,local_a0,iVar10,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_70,local_ac,iVar10,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_70,iVar10,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_6c);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *puVar1;
  }
  puVar4 = local_d0;
  cVar6 = FUN_145a9c110(param_1,local_70,local_b8,&local_c4);
  uVar5 = local_c4;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      local_70 = *(int *)(param_1 + 0x48) - 1U & local_70;
      *(uint *)(local_b8 + 0x4c) = local_70;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_b8 + 0x48) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4) = local_c4;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_145a9c362(param_1);
    }
  }
  *puVar4 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 145a9c0c2 FUN_145a9c0c2 body=77 status=ok
// SIG undefined FUN_145a9c0c2(void)

undefined8 * FUN_145a9c0c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_145a9c17e(param_1,iVar1,0);
    FUN_145a9c1ed(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 145a9c110 FUN_145a9c110 body=109 status=ok
// SIG undefined FUN_145a9c110(void)

undefined8 FUN_145a9c110(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1411ac576(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x50 + *param_1);
    FUN_14582d750(_Dst);
    memmove(_Dst,param_3,0x48);
    FUN_14582d78c(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145a9c17e FUN_145a9c17e body=111 status=ok
// SIG undefined FUN_145a9c17e(void)

void FUN_145a9c17e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145a9c1ed FUN_145a9c1ed body=133 status=ok
// SIG undefined FUN_145a9c1ed(void)

void FUN_145a9c1ed(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar10);
      *(undefined4 *)(puVar2 + -4) = puVar1[4];
      *(undefined4 *)((longlong)puVar2 + -0x1c) = uVar7;
      *(undefined4 *)(puVar2 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar2 + -0x14) = uVar9;
      *(undefined4 *)(puVar2 + -6) = uVar3;
      *(undefined4 *)((longlong)puVar2 + -0x2c) = uVar4;
      *(undefined4 *)(puVar2 + -5) = uVar5;
      *(undefined4 *)((longlong)puVar2 + -0x24) = uVar6;
      *(undefined2 *)(puVar2 + -2) = 0;
      *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[-2] = *(undefined8 *)(puVar1 + 8);
      *(undefined4 *)(puVar2 + -1) = puVar1[10];
      FUN_1447715ec();
      lVar10 = lVar10 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145a9c272 FUN_145a9c272 body=239 status=ok
// SIG undefined FUN_145a9c272(void)

int * FUN_145a9c272(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406fba42(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 145a9c362 FUN_145a9c362 body=889 status=ok
// SIG undefined FUN_145a9c362(void)

void FUN_145a9c362(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_c0;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_d0 = local_70;
    local_c8 = local_68;
    local_c0 = local_60;
    uVar4 = local_c0;
    local_b8 = local_58;
    local_b4 = uStack_54;
    local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_d8 = param_1;
    if (local_c0._4_4_ < (int)local_68[3]) {
      iVar8 = local_c0._4_4_;
      local_c0 = uVar4;
      do {
        lVar2 = *local_d8 + (longlong)iVar8 * 0x50;
        if (*(char *)(*local_d8 + (longlong)iVar8 * 0x50) == '\x01') {
          FUN_1447a97f4(&local_70,lVar2 + 0x10);
          if (0 < local_70._4_4_) {
            iVar9 = 0;
            do {
              FUN_144a7c8fe(&local_70,local_7c,iVar9,1);
              if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                    ((FUN_144a7c8fe(&local_70,local_88,iVar9,1), local_88[0] == DAT_14cb7bec8 &&
                     (local_80 == DAT_14cb7bed0)))) ||
                   ((FUN_144a7c8fe(&local_70,local_94,iVar9,1), local_94[0] == DAT_14cb7bee0 &&
                    (local_8c == DAT_14cb7bee8)))) ||
                  ((FUN_144a7c8fe(&local_70,local_a0,iVar9,1), local_a0[0] == DAT_14cb7bef8 &&
                   (local_98 == DAT_14cb7bf00)))) ||
                 ((FUN_144a7c8fe(&local_70,local_ac,iVar9,1), local_ac[0] == DAT_14cb7bf10 &&
                  (local_a4 == DAT_14cb7bf18)))) {
                FUN_1402b5374(&local_70,iVar9,0);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_70._4_4_);
          }
          iVar9 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar9 = *(int *)(lVar2 + 0x10);
        }
        uVar6 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar6;
        *(int *)(lVar2 + 0x4c) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x48) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        iVar8 = local_c0._4_4_;
        uVar4 = local_c0;
      } while (local_c0._4_4_ < (int)local_c8[3]);
    }
  }
  local_c0 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a9c6dc FUN_145a9c6dc body=462 status=ok
// SIG undefined FUN_145a9c6dc(void)

void FUN_145a9c6dc(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  local_30 = 0x7013;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  local_68 = local_48;
  local_88 = local_5c;
  (**(code **)(*param_1 + 0xf40))(param_1,&local_38,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9c8ac FUN_145a9c8ac body=135 status=ok
// SIG undefined FUN_145a9c8ac(void)

void FUN_145a9c8ac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x960) + 0xd0))(param_1 + 0x960);
  if (lVar1 != 0) {
    local_28 = *(undefined8 *)(param_4 + 4);
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    local_48 = param_5;
    FUN_145a9c934(lVar1,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9c934 FUN_145a9c934 body=678 status=ok
// SIG undefined FUN_145a9c934(void)

void FUN_145a9c934(longlong *param_1,longlong *param_2,undefined1 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_108 [44];
  uint local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b4 [4];
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = (longlong *)*param_2;
  FUN_1446dcdd4(&local_b0);
  if (DAT_14cb7d5f8 == 0) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar4 = FUN_144815d88(DAT_14cb7d5f8,&local_b0);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 != 0) {
      local_68 = *(undefined8 *)(param_4 + 4);
      local_78 = *param_4;
      uStack_74 = param_4[1];
      uStack_70 = param_4[2];
      uStack_6c = param_4[3];
      plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar1 = plVar5 + 2;
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      uStack_d0 = plVar1;
      if ((int)plVar5[5] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar8 = (int)plVar5[5];
      }
      uStack_90 = CONCAT44(uStack_bc,uStack_c0);
      local_98 = local_c8;
      lVar7 = local_98;
      local_a8 = (uint)local_d8;
      uStack_a4 = local_d8._4_4_;
      uStack_a0 = (undefined4)uStack_d0;
      uStack_9c = uStack_d0._4_4_;
      local_98._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      if ((local_98._4_4_ != iVar8) || (uStack_d0 != plVar1)) {
        local_dc = 0;
        iVar3 = local_98._4_4_;
        local_b0 = plVar5;
        local_98 = lVar7;
        do {
          lVar7 = *local_b0;
          lVar6 = (longlong)iVar3 * 0x50;
          if (((*(longlong *)(lVar7 + lVar6) == *param_2) &&
              (*(int *)(lVar7 + 8 + lVar6) == (int)param_2[1])) &&
             ((lVar7 = lVar7 + lVar6, *(float *)(lVar7 + 0x1c) <= 0.0 ||
              (local_dc = (uint)CONCAT71((int7)((ulonglong)lVar6 >> 8),1),
              *(float *)(lVar7 + 0x24) <= *(float *)(lVar4 + 0x1c) &&
              *(float *)(lVar4 + 0x1c) != *(float *)(lVar7 + 0x24))))) {
            uVar2 = *(undefined4 *)(lVar4 + 0x18);
            *(undefined4 *)(lVar7 + 0x18) = uVar2;
            *(undefined4 *)(lVar7 + 0x1c) = uVar2;
            uVar2 = *(undefined4 *)(lVar4 + 0x1c);
            *(undefined4 *)(lVar7 + 0x20) = uVar2;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(undefined1 *)(lVar7 + 0x28) = param_3;
            *(undefined4 *)(lVar7 + 0x30) = local_78;
            *(undefined4 *)(lVar7 + 0x34) = uStack_74;
            *(undefined4 *)(lVar7 + 0x38) = uStack_70;
            *(undefined4 *)(lVar7 + 0x3c) = uStack_6c;
            *(undefined8 *)(lVar7 + 0x40) = local_68;
            local_dc = (uint)CONCAT71((int7)((ulonglong)local_68 >> 8),1);
          }
          local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
          FUN_1449c0562(&local_a8);
          iVar3 = local_98._4_4_;
        } while (((local_98._4_4_ != iVar8) || ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1)
                 ) || (local_b0 != plVar5));
        if ((local_dc & 1) != 0) goto LAB_145a9cab0;
      }
      local_b0 = (longlong *)CONCAT44(*(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x18));
      local_a8 = *(uint *)(lVar4 + 0x1c);
      uStack_a0 = CONCAT31(uStack_a0._1_3_,param_3);
      local_98 = CONCAT44(uStack_74,local_78);
      uStack_90 = CONCAT44(uStack_6c,uStack_70);
      local_88 = local_68;
      local_d8 = param_2;
      uStack_d0 = &local_b0;
      uStack_a4 = local_a8;
      FUN_145a9cbdc(plVar5,local_b4);
    }
  }
LAB_145a9cab0:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a9cbdc FUN_145a9cbdc body=372 status=ok
// SIG undefined FUN_145a9cbdc(void)

undefined4 * FUN_145a9cbdc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145a9cdf0(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *puVar1;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  local_40[2] = 0;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar7 = puVar2[4];
  uVar8 = puVar2[5];
  uVar9 = puVar2[6];
  uVar10 = puVar2[7];
  uVar11 = puVar2[8];
  uVar12 = puVar2[9];
  uVar13 = puVar2[10];
  uVar14 = puVar2[0xb];
  *(undefined4 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar6;
  *(undefined4 *)(local_40 + 5) = uVar7;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar8;
  *(undefined4 *)(local_40 + 6) = uVar9;
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar10;
  *(undefined4 *)(local_40 + 7) = uVar11;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar12;
  *(undefined4 *)(local_40 + 8) = uVar13;
  *(undefined4 *)((longlong)local_40 + 0x44) = uVar14;
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar16 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar17 = (uint)uVar3 & 0xffff;
  uVar16 = FUN_144a78877(((uint)uVar3 << 0x10 | uVar17) + (int)((ulonglong)uVar3 >> 0x20) +
                         (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar17 >> 4));
  cVar15 = FUN_145a9cd52(param_1,uVar16,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar15 == '\0') {
    uVar17 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar19 = 1;
    if (3 < uVar17) {
      uVar18 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar19 <= *(int *)(param_1 + 0x48))) {
      uVar16 = *(int *)(param_1 + 0x48) - 1U & uVar16;
      *(uint *)((longlong)local_40 + 0x4c) = uVar16;
      lVar20 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar20 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar20 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar16) * 4);
      lVar20 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar20 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar20 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar16) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar19;
      FUN_145a9cee8(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9cd52 FUN_145a9cd52 body=158 status=ok
// SIG undefined FUN_145a9cd52(void)

undefined8 FUN_145a9cd52(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      while( true ) {
        lVar3 = (longlong)iVar4 * 0x50;
        if ((*(longlong *)(lVar1 + lVar3) == *param_3) &&
           (*(int *)(lVar1 + 8 + lVar3) == (int)param_3[1])) break;
        iVar4 = *(int *)(lVar1 + lVar3 + 0x48);
        if (iVar4 == -1) {
          return 0;
        }
      }
      memmove((void *)(lVar1 + lVar3),param_3,0x48);
      FUN_1456d2c00(param_1,*param_4);
      *param_4 = iVar4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145a9cdf0 FUN_145a9cdf0 body=247 status=ok
// SIG undefined FUN_145a9cdf0(void)

int * FUN_145a9cdf0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406fba42(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 145a9cee8 FUN_145a9cee8 body=505 status=ok
// SIG undefined FUN_145a9cee8(void)

void FUN_145a9cee8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x50;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),
                              *(undefined4 *)(lVar3 + 8 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x4c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145a9d0f4 FUN_145a9d0f4 body=100 status=ok
// SIG undefined FUN_145a9d0f4(void)

void FUN_145a9d0f4(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_2 + 0x10))(param_2,local_28);
  FUN_1416a5e5a(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9d174 FUN_145a9d174 body=34 status=ok
// SIG undefined FUN_145a9d174(void)

undefined8 FUN_145a9d174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145a9d1b0 FUN_145a9d1b0 body=34 status=ok
// SIG undefined FUN_145a9d1b0(void)

undefined8 FUN_145a9d1b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145a9d1ec FUN_145a9d1ec body=34 status=ok
// SIG undefined FUN_145a9d1ec(void)

undefined8 FUN_145a9d1ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145a9d216 FUN_145a9d216 body=97 status=ok
// SIG undefined FUN_145a9d216(void)

undefined8 * FUN_145a9d216(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad714f0;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x3c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  param_1[8] = 0;
  FUN_145a9d278(param_1 + 6,0);
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 145a9d278 FUN_145a9d278 body=13 status=ok
// SIG undefined FUN_145a9d278(void)

void FUN_145a9d278(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 1;
  param_1[4] = param_2;
  param_1[5] = param_2;
  return;
}



// FUNCTION 145a9d286 FUN_145a9d286 body=40 status=ok
// SIG undefined FUN_145a9d286(void)

undefined8 FUN_145a9d286(undefined8 param_1,int param_2)

{
  FUN_145a9d2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a9d2ae FUN_145a9d2ae body=78 status=ok
// SIG undefined FUN_145a9d2ae(void)

void FUN_145a9d2ae(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae5f270;
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a9d306 FUN_145a9d306 body=345 status=ok
// SIG undefined FUN_145a9d306(void)

undefined8 * FUN_145a9d306(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b14adb0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42c8000040a00000;
  puVar1 = param_1 + 6;
  FUN_14109baa4(puVar1);
  *(undefined4 *)(param_1 + 0x17) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_1446ddc76((longlong)param_1 + 0xd4,"R_Hand_Object",1);
  FUN_14045d416(&local_30);
  local_40 = local_30;
  local_48 = 0;
  FUN_1406507bc(puVar1,&local_2c,0,0);
  FUN_140650770(puVar1,local_2c,0,1);
  thunk_FUN_14045d156(puVar1,local_2c,2);
  FUN_14045d416(&local_38);
  local_40 = local_38;
  local_48 = 0;
  FUN_1406507bc(puVar1,&local_34,0x3f800000,0x3f800000);
  FUN_140650770(puVar1,local_34,0,1);
  thunk_FUN_14045d156(puVar1,local_34,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9d468 FUN_145a9d468 body=110 status=ok
// SIG undefined FUN_145a9d468(void)

undefined8 * FUN_145a9d468(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b35f570;
  FUN_1447715ec(param_1 + 5,&DAT_14cb859c0);
  FUN_1447715ec(param_1 + 10,&DAT_14cb859e8);
  param_1[0x10] = DAT_14cb85a10;
  param_1[0x11] = DAT_14cb85a18;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 145a9d4de FUN_145a9d4de body=110 status=ok
// SIG undefined FUN_145a9d4de(void)

undefined8 * FUN_145a9d4de(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1412fe974(param_1,uVar1);
  *param_1 = &PTR_FUN_14b367020;
  FUN_1447715ec(param_1 + 5,&DAT_14cb85c78);
  FUN_1447715ec(param_1 + 10,&DAT_14cb85ca0);
  param_1[0x10] = DAT_14cb85cc8;
  param_1[0x11] = DAT_14cb85cd0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 1;
  return param_1;
}



// FUNCTION 145a9d54c FUN_145a9d54c body=220 status=ok
// SIG undefined FUN_145a9d54c(void)

int FUN_145a9d54c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar6 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar9 = iVar8;
      lVar7 = (longlong)iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar5 <= lVar7) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar6 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar6 == false) {
        if (iVar3 != iVar8) {
          memmove(plVar1 + iVar3,plVar1 + iVar8,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar3 = iVar3 + (iVar10 - iVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 145a9d652 FUN_145a9d652 body=110 status=ok
// SIG undefined FUN_145a9d652(void)

undefined8 FUN_145a9d652(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  pcVar2 = *(code **)(param_1 + 0x28);
  local_38 = 0;
  local_30 = 0;
  FUN_14114e6dc(&local_38,param_1 + 8);
  (*pcVar2)(uVar1,param_2,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9d6c2 FUN_145a9d6c2 body=42 status=ok
// SIG undefined FUN_145a9d6c2(void)

void FUN_145a9d6c2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 145a9d6ec FUN_145a9d6ec body=42 status=ok
// SIG undefined FUN_145a9d6ec(void)

void FUN_145a9d6ec(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 145a9d720 FUN_145a9d720 body=50 status=ok
// SIG undefined FUN_145a9d720(void)

longlong FUN_145a9d720(longlong param_1,int param_2)

{
  FUN_1410c966c(param_1 + 8);
  FUN_140af926c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a9d760 FUN_145a9d760 body=40 status=ok
// SIG undefined FUN_145a9d760(void)

undefined8 FUN_145a9d760(undefined8 param_1,int param_2)

{
  FUN_145a9d788();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a9d788 FUN_145a9d788 body=123 status=ok
// SIG undefined FUN_145a9d788(void)

void FUN_145a9d788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5c5fd0;
  FUN_140c1e521(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d7ab2(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a9d804 FUN_145a9d804 body=55 status=ok
// SIG undefined FUN_145a9d804(void)

void FUN_145a9d804(longlong *param_1)

{
  FUN_145a9d83c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9d83c FUN_145a9d83c body=121 status=ok
// SIG undefined FUN_145a9d83c(void)

void FUN_145a9d83c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 145a9d8e8 FUN_145a9d8e8 body=102 status=ok
// SIG undefined FUN_145a9d8e8(void)

void FUN_145a9d8e8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  fVar2 = *(float *)((longlong)param_1 + 0x1a94);
  if (360.0 <= fVar2) {
    fVar2 = 360.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = cosf(fVar2 * 0.5 * 0.017453292);
  *(float *)(param_1 + 0x353) = -fVar2;
  return;
}



// FUNCTION 145a9d94e FUN_145a9d94e body=152 status=ok
// SIG undefined FUN_145a9d94e(void)

void FUN_145a9d94e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1447210f0();
  plVar2 = (longlong *)FUN_1411e4b4a(uVar1,0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
    if (lVar3 != 0) {
      FUN_1414875dc(lVar3);
      local_30 = &DAT_148d3390a;
      local_28 = 0;
      FUN_145a9da7e(lVar3 + 8,local_20,param_1);
    }
  }
  FUN_145a9d9e8(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9d9e8 FUN_145a9d9e8 body=149 status=ok
// SIG undefined FUN_145a9d9e8(void)

void FUN_145a9d9e8(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_145bd0ae0();
    plVar1 = (longlong *)FUN_14093f908(param_1);
    (**(code **)(*plVar1 + 0x680))(plVar1);
    FUN_145bd0ade();
  }
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_18,local_28);
  FUN_1411f311e(&DAT_14c86a960,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9da7e FUN_145a9da7e body=254 status=ok
// SIG undefined FUN_145a9da7e(void)

undefined8
FUN_145a9da7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9721a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140c6314c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9db8a FUN_145a9db8a body=48 status=ok
// SIG undefined FUN_145a9db8a(void)

void FUN_145a9db8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14bb76a80;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a9dbc6 FUN_145a9dbc6 body=48 status=ok
// SIG undefined FUN_145a9dbc6(void)

void FUN_145a9dbc6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  *puVar1 = &PTR_FUN_14be87730;
  puVar1[1] = &PTR_FUN_14be87770;
  puVar1[2] = 0;
  return;
}



// FUNCTION 145a9dbf6 FUN_145a9dbf6 body=272 status=ok
// SIG undefined FUN_145a9dbf6(void)

void FUN_145a9dbf6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  code *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14113258e();
  if (*(longlong *)(param_1 + 0x2970) == 0) {
    local_30 = FUN_14605baaa;
    local_28 = 0;
    FUN_145a9dd08(&DAT_14cb7df98,&local_20,param_1);
    *(undefined8 *)(param_1 + 0x2970) = local_20;
  }
  if (*(longlong *)(param_1 + 0x2978) == 0) {
    local_30 = FUN_1414875fc;
    local_28 = 0;
    FUN_145a9dd08(&DAT_14cb7df50,&local_20,param_1);
    *(undefined8 *)(param_1 + 0x2978) = local_20;
  }
  plVar2 = (longlong *)FUN_14497e828(param_1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1403ca142();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
      if (cVar1 == '\x05') {
        FUN_14605baaa(param_1,plVar2);
      }
      else {
        FUN_1414875fc();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9dd08 FUN_145a9dd08 body=254 status=ok
// SIG undefined FUN_145a9dd08(void)

undefined8
FUN_145a9dd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3ecf50;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a3320;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1412a3750(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9de08 FUN_145a9de08 body=135 status=ok
// SIG undefined FUN_145a9de08(void)

void FUN_145a9de08(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_148e1246e(param_2);
  }
  local_20 = FUN_140c8105a();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_145a9de90(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9de90 FUN_145a9de90 body=206 status=ok
// SIG undefined FUN_145a9de90(void)

void FUN_145a9de90(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145a9dede;
    }
  }
  lVar2 = 0;
LAB_145a9dede:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1414876f8(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9df74 FUN_145a9df74 body=158 status=ok
// SIG undefined FUN_145a9df74(void)

bool FUN_145a9df74(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9e014 FUN_145a9e014 body=33 status=ok
// SIG undefined FUN_145a9e014(void)

void FUN_145a9e014(longlong param_1)

{
  FUN_14104c91a(param_1 + 0x30);
  FUN_14104cabe(param_1 + 0x30);
  return;
}



// FUNCTION 145a9e036 FUN_145a9e036 body=39 status=ok
// SIG undefined FUN_145a9e036(void)

void FUN_145a9e036(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145a9e059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 145a9e05e FUN_145a9e05e body=651 status=ok
// SIG undefined FUN_145a9e05e(void)

void FUN_145a9e05e(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = (int)param_1[0x6f];
  if (iVar3 != 0) {
    if ((int)param_1[0xb8] != *(int *)((longlong)param_1 + 0x5ec)) {
      uVar1 = *(ulonglong *)((undefined4 *)param_1[0x6e] + 2);
      uVar8 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      plVar10 = param_1 + 0xbe;
      if ((longlong *)param_1[0xbf] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[0xbf];
      }
      iVar5 = *(int *)((longlong)plVar10 +
                      (ulonglong)((int)param_1[0xc0] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulonglong *)(param_1[0xb7] + (longlong)iVar5 * 0x20) == uVar1) {
            FUN_1440e5d1e(param_1,*(undefined4 *)param_1[0x6e]);
            iVar3 = (int)param_1[0x6f];
            break;
          }
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + param_1[0xb7] + 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = 0;
    iVar9 = iVar3 + -1;
    if (iVar9 != 0) {
      iVar5 = 1;
      if (iVar9 < 1) {
        iVar5 = iVar9;
      }
      memmove((void *)param_1[0x6e],(void *)((longlong)(iVar3 - iVar5) * 0x10 + param_1[0x6e]),
              (longlong)iVar5 << 4);
      iVar5 = (int)param_1[0x6f] + -1;
    }
    *(int *)(param_1 + 0x6f) = iVar5;
    FUN_145a9e2ea(param_1 + 0x6e);
    if (0 < (int)param_1[0x6f]) {
      lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar6 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar6 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar2 = *puVar6;
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,3,0x10);
        puVar6 = local_88;
        local_80 = 3;
        *local_88 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_88[2] = lVar7;
        *local_88 = &PTR_FUN_14b964550;
        local_88[3] = 0;
        FUN_14485c47a(local_88 + 3,param_1);
        *(undefined4 *)(puVar6 + 5) = 0;
        puVar6[4] = FUN_145a9e05e;
        local_78 = 0;
        local_70 = 0;
        FUN_14487d8d8(&local_78,&local_88);
        local_38 = 1;
        FUN_14016fdb0(uVar2,local_90,&local_78);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
        FUN_1449db362(&local_88);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9e2ea FUN_145a9e2ea body=62 status=ok
// SIG undefined FUN_145a9e2ea(void)

void FUN_145a9e2ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a9e328(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145a9e328 FUN_145a9e328 body=89 status=ok
// SIG undefined FUN_145a9e328(void)

ulonglong FUN_145a9e328(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145a9e382 FUN_145a9e382 body=40 status=ok
// SIG undefined FUN_145a9e382(void)

undefined8 FUN_145a9e382(undefined8 param_1,int param_2)

{
  FUN_145a9e3aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145a9e3aa FUN_145a9e3aa body=174 status=ok
// SIG undefined FUN_145a9e3aa(void)

void FUN_145a9e3aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fbfc40;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9e458(param_1 + 0x12);
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145a9e458 FUN_145a9e458 body=53 status=ok
// SIG undefined FUN_145a9e458(void)

void FUN_145a9e458(longlong *param_1)

{
  FUN_145a9e48e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9e48e FUN_145a9e48e body=88 status=ok
// SIG undefined FUN_145a9e48e(void)

void FUN_145a9e48e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145a9e4e6 FUN_145a9e4e6 body=179 status=ok
// SIG undefined FUN_145a9e4e6(void)

bool FUN_145a9e4e6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9e59a FUN_145a9e59a body=470 status=ok
// SIG undefined FUN_145a9e59a(void)

void FUN_145a9e59a(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = FUN_140ae5f1a(param_3);
  if (cVar5 != '\0') {
    lVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar6 != 0) {
      lVar7 = FUN_144a2f878();
      if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
          (param_2 != (longlong *)0x0)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        lVar6 = (**(code **)(*param_2 + 8))(param_2);
        if (lVar6 != 0) {
          lVar7 = FUN_144a7a5f4();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            FUN_1449027d0(param_1,&local_58);
            lVar7 = *(longlong *)(local_58 + 0x220);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x1b8));
            plVar1 = local_50;
            *(int *)(lVar7 + 0x1b0) = *(int *)(lVar7 + 0x1b0) + 1;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_50 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
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
            FUN_1449027d0(param_1,&local_58);
            lVar4 = *(longlong *)(local_58 + 0x230);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
            *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
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
            local_68 = lVar4;
            FUN_14129967c(param_1,lVar6,param_3,lVar7);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x1b8));
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9e771 FUN_145a9e771 body=42 status=ok
// SIG undefined FUN_145a9e771(void)

void FUN_145a9e771(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141488184(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b239700;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 145a9e7a6 FUN_145a9e7a6 body=65 status=ok
// SIG undefined FUN_145a9e7a6(void)

void FUN_145a9e7a6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9e7e8 FUN_145a9e7e8 body=230 status=ok
// SIG undefined FUN_145a9e7e8(void)

void FUN_145a9e7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1414881a4();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca43e58,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_1414881a4();
  FUN_145a9e8d0(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9e8d0 FUN_145a9e8d0 body=365 status=ok
// SIG undefined FUN_145a9e8d0(void)

void FUN_145a9e8d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca43ea0;
  if (DAT_14ca43ea0 != 0) {
    LOCK();
    *(int *)(DAT_14ca43ea0 + 8) = *(int *)(DAT_14ca43ea0 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca43e58;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2e65d0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9ea3e FUN_145a9ea3e body=226 status=ok
// SIG undefined FUN_145a9ea3e(void)

longlong * FUN_145a9ea3e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146304420;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9eb26 FUN_145a9eb26 body=138 status=ok
// SIG undefined FUN_145a9eb26(void)

code * FUN_145a9eb26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cda10;
}



// FUNCTION 145a9ebb0 FUN_145a9ebb0 body=138 status=ok
// SIG undefined FUN_145a9ebb0(void)

code * FUN_145a9ebb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cd7e8;
}



// FUNCTION 145a9ec3a FUN_145a9ec3a body=129 status=ok
// SIG undefined FUN_145a9ec3a(void)

undefined4 FUN_145a9ec3a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar3 = 0;
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar1 = FUN_144a5dd5e();
    uVar4 = uVar3;
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      lVar1 = FUN_144a5dd5e();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        lVar2 = (**(code **)(*(longlong *)(lVar2 + 0xe18) + 0x20))(lVar2 + 0xe18,param_2);
        if (lVar2 != 0) {
          uVar4 = *(undefined4 *)(lVar2 + 0x94);
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 145a9ecbc FUN_145a9ecbc body=258 status=ok
// SIG undefined FUN_145a9ecbc(void)

void FUN_145a9ecbc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b466590;
  FUN_141488962(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9ee04(param_1 + 0x13);
  FUN_145a9edbe(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9edbe(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14b4665c8;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145a9edbe FUN_145a9edbe body=70 status=ok
// SIG undefined FUN_145a9edbe(void)

void FUN_145a9edbe(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b4665c8;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 145a9ee04 FUN_145a9ee04 body=99 status=ok
// SIG undefined FUN_145a9ee04(void)

void FUN_145a9ee04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4665c0;
  FUN_1447a1747(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9ee68 FUN_145a9ee68 body=253 status=ok
// SIG undefined FUN_145a9ee68(void)

void FUN_145a9ee68(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  uint local_4c [2];
  int local_44;
  uint local_40;
  int local_38;
  uint local_34;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_1401144ce(param_2);
  if (cVar1 != '\0') {
    FUN_140ac173c(local_4c,param_2);
    uVar3 = local_4c[0];
    if (local_44 != 0) {
      uVar3 = FUN_144a78877(local_4c[0]);
    }
    if (local_38 != 0) {
      local_40 = FUN_144a78877(local_40);
    }
    if (local_2c != 0) {
      local_34 = FUN_144a78877(local_34);
    }
    iVar2 = FUN_140ac163e((longlong *)(param_1 + 0x528),local_40 ^ uVar3 ^ local_34,local_4c);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x528);
      if ((lVar4 + (longlong)iVar2 * 0xb0 != 0) &&
         (lVar4 = lVar4 + (longlong)iVar2 * 0xb0 + 0x28, lVar4 != 0)) {
        FUN_140725f10(lVar4);
        FUN_145a9ef66(param_1,lVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9ef66 FUN_145a9ef66 body=316 status=ok
// SIG undefined FUN_145a9ef66(void)

void FUN_145a9ef66(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  
  cVar4 = FUN_144729dda(param_1 + 0x1c);
  if (((cVar4 == '\0') || (iVar5 = FUN_140ac16d8(param_1), iVar5 != 3)) &&
     ((longlong)*(int *)(param_2 + 0x20) != 0)) {
    puVar8 = *(uint **)(param_2 + 0x18);
    puVar1 = puVar8 + *(int *)(param_2 + 0x20);
    do {
      if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
        lVar6 = *(longlong *)(param_1 + 0x428);
        if (*(longlong *)(param_1 + 0x428) == 0) {
          lVar6 = param_1 + 0x420;
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & *puVar8) * 4);
        if (iVar5 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 1000) + (longlong)iVar5 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar5 * 0x10) == *puVar8) {
              if ((lVar6 != 0) && (puVar9 = (uint *)(lVar6 + 4), puVar9 != (uint *)0x0)) {
                uVar3 = *puVar9;
                if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x60))) {
                  lVar6 = *(longlong *)(param_1 + 0x58);
                  if (*(longlong *)(param_1 + 0x58) == 0) {
                    lVar6 = param_1 + 0x48;
                  }
                  if ((*(uint *)(lVar6 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
                    lVar6 = *(longlong *)(param_1 + 0x38);
                    lVar7 = (ulonglong)uVar3 * 0x300;
                    pbVar2 = (byte *)(lVar6 + 0x2b0 + lVar7);
                    *pbVar2 = *pbVar2 & 0x7f;
                    FUN_141488992(lVar6 + lVar7);
                    if ((*(byte *)(lVar6 + 0x2b1 + lVar7) & 1) != 0) {
                      FUN_140d82418(param_1,*puVar9,1,0);
                    }
                  }
                }
              }
              break;
            }
            iVar5 = *(int *)(lVar6 + 8);
          } while (iVar5 != -1);
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 145a9f0a2 FUN_145a9f0a2 body=163 status=ok
// SIG undefined FUN_145a9f0a2(void)

void FUN_145a9f0a2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_141488a88(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9f146 FUN_145a9f146 body=63 status=ok
// SIG undefined FUN_145a9f146(void)

void FUN_145a9f146(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145a9f186(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 145a9f186 FUN_145a9f186 body=115 status=ok
// SIG undefined FUN_145a9f186(void)

ulonglong FUN_145a9f186(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x14) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
      uVar1 = uVar1 / 0x14;
    }
  }
  return uVar1;
}



// FUNCTION 145a9f1fa FUN_145a9f1fa body=69 status=ok
// SIG undefined FUN_145a9f1fa(void)

double * FUN_145a9f1fa(longlong param_1,double *param_2)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x208) == DAT_14c98dec8) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x268) + 0x24);
    *param_2 = (double)*(float *)(*(longlong *)(param_1 + 0x268) + 0x20);
    param_2[1] = (double)fVar1;
  }
  else {
    FUN_141488f0e(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 145a9f240 FUN_145a9f240 body=55 status=ok
// SIG undefined FUN_145a9f240(void)

void FUN_145a9f240(longlong *param_1)

{
  FUN_145a9f278(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9f278 FUN_145a9f278 body=123 status=ok
// SIG undefined FUN_145a9f278(void)

void FUN_145a9f278(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 145a9f2f4 FUN_145a9f2f4 body=55 status=ok
// SIG undefined FUN_145a9f2f4(void)

void FUN_145a9f2f4(longlong *param_1)

{
  FUN_145a9f32c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145a9f32c FUN_145a9f32c body=123 status=ok
// SIG undefined FUN_145a9f32c(void)

void FUN_145a9f32c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 145a9f3a8 FUN_145a9f3a8 body=158 status=ok
// SIG undefined FUN_145a9f3a8(void)

bool FUN_145a9f3a8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9f44e FUN_145a9f44e body=424 status=ok
// SIG undefined FUN_145a9f44e(void)

void FUN_145a9f44e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if (lVar7 == 0) {
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x390);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x28));
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
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
  bVar5 = 1;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
      if (*(longlong *)(lVar4 + 0x360) == lVar7) {
        if (lVar4 != 0) {
          bVar5 = *(byte *)(lVar4 + 0x88) ^ 1;
        }
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
  }
  if (bVar5 == *(byte *)(lVar3 + 0x10)) {
    if (*(int *)(lVar3 + 0x14) == 0) {
      iVar8 = 1;
      goto LAB_145a9f5a1;
    }
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x14) + 1;
LAB_145a9f5a1:
    *(byte *)(lVar3 + 0x10) = bVar5;
    *(int *)(lVar3 + 0x14) = iVar8;
  }
  if (*(longlong *)(lVar7 + 0x1f0) == 0) {
LAB_145a9f5c5:
    cVar6 = '\0';
  }
  else {
    lVar9 = FUN_1403ca142();
    if (*(longlong *)(lVar7 + 0x1f0) == 0) goto LAB_145a9f5c5;
    cVar6 = '\0';
    if ((lVar9 != 0) && (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0x10), lVar7 != 0)) {
      if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)) goto LAB_145a9f5c5;
      cVar6 = FUN_145a9f60a();
    }
  }
  if (cVar6 == *(char *)(lVar3 + 0x18)) {
    if (*(int *)(lVar3 + 0x1c) != 0) goto LAB_145a9f57c;
    iVar8 = 1;
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x1c) + 1;
  }
  *(char *)(lVar3 + 0x18) = cVar6;
  *(int *)(lVar3 + 0x1c) = iVar8;
LAB_145a9f57c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 145a9f60a FUN_145a9f60a body=70 status=ok
// SIG undefined FUN_145a9f60a(void)

ulonglong FUN_145a9f60a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (lVar2 = FUN_1405e677a(DAT_14cb0d2b0,lVar1), *(char *)(lVar2 + 0x88) == '\0')) {
    uVar3 = FUN_145a9f650(lVar1);
    return uVar3 ^ 1;
  }
  return 0;
}



// FUNCTION 145a9f650 FUN_145a9f650 body=34 status=ok
// SIG undefined FUN_145a9f650(void)

bool FUN_145a9f650(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
  return 0 < *(int *)(lVar1 + 0x250);
}



// FUNCTION 145a9f672 FUN_145a9f672 body=402 status=ok
// SIG undefined FUN_145a9f672(void)

void FUN_145a9f672(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined **local_28;
  undefined1 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)((longlong)param_1 + 0x1c9) = param_2;
  FUN_145a9f8c0(param_1[0x1b],param_1 + 0x28);
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 != '\x02') {
      cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
      if (cVar1 != '\x01') {
        cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
        if (cVar1 != '\x02') goto LAB_145a9f705;
      }
    }
  }
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_145a9f970(param_1 + 0x34,param_1 + 0x36);
LAB_145a9f705:
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((cVar1 != '\0') && ((char)param_1[0x1c] != '\x03')) {
    *(undefined1 *)(param_1 + 0x1c) = 3;
    local_28 = &PTR_FUN_14b525ad0;
    local_20 = 3;
    local_18 = param_1;
    FUN_145a9f81e(param_1 + 1);
  }
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0xe1) != '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0xe1) = 3;
    local_28 = &PTR_FUN_14b525ad0;
    local_20 = 3;
    local_18 = param_1;
    FUN_145a9f81e(param_1 + 4);
  }
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0xe2) != '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0xe2) = 3;
    local_28 = &PTR_FUN_14b525ad0;
    local_20 = 3;
    local_18 = param_1;
    FUN_145a9f81e(param_1 + 7);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9f81e FUN_145a9f81e body=162 status=ok
// SIG undefined FUN_145a9f81e(void)

void FUN_145a9f81e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145a9f8ab;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145a9f8ab:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145a9f8c0 FUN_145a9f8c0 body=175 status=ok
// SIG undefined FUN_145a9f8c0(void)

void FUN_145a9f8c0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_145cefc2c(param_1 + 0x308);
  if (cVar1 != '\0') {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_40 = 0x5a00000a8c;
    local_38 = 0x3ff0000000000000;
    local_30 = 0;
    local_48 = 0;
    FUN_145d51c20(param_1 + 0x308,&local_88);
    FUN_141478002(&local_88);
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9f970 FUN_145a9f970 body=440 status=ok
// SIG undefined FUN_145a9f970(void)

void FUN_145a9f970(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  vx_req_sessiongroup_remove_session_create(&local_c8);
  if (*(int *)(param_1 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*param_1;
  }
  local_40 = 0;
  if (pwVar3 == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(pwVar3);
    FUN_1446fe5a4(local_c0,pwVar3,sVar1 & 0xffffffff,1);
  }
  uVar2 = vx_strdup(local_38);
  *(undefined8 *)(local_c8 + 0x38) = uVar2;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_2 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*param_2;
  }
  local_40 = 0;
  if (pwVar3 == (wchar_t *)0x0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(pwVar3);
    FUN_1446fe5a4(local_c0,pwVar3,sVar1 & 0xffffffff,1);
  }
  uVar2 = vx_strdup(local_38);
  *(undefined8 *)(local_c8 + 0x30) = uVar2;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_d8 = 0;
  local_d0 = 0;
  FUN_1412f566c(&local_d8,param_3);
  FUN_1412f579e(local_c8,&local_d8);
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9fb2a FUN_145a9fb2a body=179 status=ok
// SIG undefined FUN_145a9fb2a(void)

bool FUN_145a9fb2a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_40 = *param_2;
    local_38 = (undefined4)param_2[1];
    local_30 = 0;
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9fbde FUN_145a9fbde body=192 status=ok
// SIG undefined FUN_145a9fbde(void)

void FUN_145a9fbde(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xb68))(param_1,local_1c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"BroadcastSpecializationLevelUp_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xb70))(param_1,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9fcb0 FUN_145a9fcb0 body=154 status=ok
// SIG undefined FUN_145a9fcb0(void)

void FUN_145a9fcb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a9fd4c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145a9fd4c FUN_145a9fd4c body=710 status=ok
// SIG undefined FUN_145a9fd4c(void)

void FUN_145a9fd4c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1449027d0(param_1,&local_48);
  pcVar3 = *(char **)(local_48 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  plVar6 = plStack_40;
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (*(int *)(pcVar3 + 0x40) == param_2) {
    if (*(int *)(pcVar3 + 0x44) == 0) {
      iVar5 = 1;
      goto LAB_145a9fdbd;
    }
  }
  else {
    iVar5 = *(int *)(pcVar3 + 0x44) + 1;
LAB_145a9fdbd:
    *(int *)(pcVar3 + 0x40) = param_2;
    *(int *)(pcVar3 + 0x44) = iVar5;
  }
  if ((bool)pcVar3[0x10] == 0 < param_2) {
    if (*(int *)(pcVar3 + 0x14) == 0) {
      iVar5 = 1;
      goto LAB_145a9fdde;
    }
  }
  else {
    iVar5 = *(int *)(pcVar3 + 0x14) + 1;
LAB_145a9fdde:
    pcVar3[0x10] = 0 < param_2;
    *(int *)(pcVar3 + 0x14) = iVar5;
  }
  cVar4 = '\x01';
  if (param_2 < 1) {
    cVar4 = pcVar3[8];
  }
  if (cVar4 == *pcVar3) {
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_145a9fe0a;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(pcVar3 + 4) + 1;
  }
  *pcVar3 = cVar4;
  *(int *)(pcVar3 + 4) = iVar5;
LAB_145a9fe0a:
  if ((0 < param_2) &&
     (plVar6 = (longlong *)FUN_14026506e(param_1 + 0x30), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_144a2f878();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
       (((*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30 && (cVar4 = (**(code **)(*plVar6 + 0x700))(plVar6), cVar4 != '\0')) &&
        ((longlong)(int)plVar6[0xe95] != 0)))) {
      lVar7 = plVar6[0xe94];
      lVar11 = (longlong)(int)plVar6[0xe95] << 4;
      do {
        if (((*(longlong *)(lVar7 + 8) != 0) && (cVar4 = FUN_144729dda(lVar7), cVar4 != '\0')) &&
           ((*(longlong **)(lVar7 + 8) != (longlong *)0x0 &&
            (lVar8 = (**(code **)(**(longlong **)(lVar7 + 8) + 8))(), lVar8 != 0)))) {
          lVar9 = FUN_144a2f878();
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            *(int *)(pcVar3 + 0x38) = *(int *)(pcVar3 + 0x38) + 1;
            (**(code **)(*(longlong *)(lVar8 + 0x3b20) + 0x10))(lVar8 + 0x3b20,pcVar3 + 0x28);
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            *(int *)(pcVar3 + 0x38) = *(int *)(pcVar3 + 0x38) + 1;
            uVar10 = FUN_140cf8aa6(lVar8);
            FUN_145aa0014(uVar10,pcVar3 + 0x28,&local_48,&local_58);
            plVar6 = plStack_50;
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_50)(plStack_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            break;
          }
        }
        lVar7 = lVar7 + 0x10;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa0014 FUN_145aa0014 body=188 status=ok
// SIG undefined FUN_145aa0014(void)

undefined8 FUN_145aa0014(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  short local_3c [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      lVar2 = FUN_1400f6f32(lVar2);
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
        FUN_140d27df6(lVar2,local_3c,param_1);
        if (-1 < local_3c[0]) {
          uVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
          local_58 = param_3;
          local_50 = param_4;
          uVar3 = FUN_140b673b8(lVar2,local_3c,uVar1,param_2);
          goto LAB_145aa0037;
        }
      }
    }
  }
  uVar3 = 0;
LAB_145aa0037:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa00d2 FUN_145aa00d2 body=768 status=ok
// SIG undefined FUN_145aa00d2(void)

void FUN_145aa00d2(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  
  thunk_FUN_14148905a();
  iVar1 = (int)param_3[1];
  if (iVar1 == DAT_14cbcf490) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*param_3 + lVar4);
        uVar5 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(DAT_14cbcf488 + lVar4);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_145aa026c;
LAB_145aa023d:
        lVar4 = lVar4 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145aa023d;
      }
      if (uVar6 != uVar8) goto LAB_145aa010a;
    }
LAB_145aa026c:
    if ((*(int *)(param_1 + 0x688) != 0) &&
       (plVar2 = *(longlong **)(param_1 + 0x680), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145aa0298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_4);
      return;
    }
    return;
  }
  if (DAT_14cbcf490 + iVar1 == 1) goto LAB_145aa026c;
LAB_145aa010a:
  if (iVar1 == DAT_14cbcf4a0) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*param_3 + lVar4);
        uVar5 = (ulonglong)uVar6;
        uVar8 = *(ushort *)(DAT_14cbcf498 + lVar4);
        if (uVar6 != uVar8) break;
        if (uVar6 == 0) goto LAB_145aa01fd;
LAB_145aa01ce:
        lVar4 = lVar4 + 2;
      }
      if ((uVar8 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145aa01ce;
      }
      if (uVar6 != uVar8) goto LAB_145aa0123;
    }
  }
  else if (DAT_14cbcf4a0 + iVar1 != 1) {
LAB_145aa0123:
    if (iVar1 == DAT_14cbcf4b0) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_3 + lVar4);
          uVar5 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(DAT_14cbcf4a8 + lVar4);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) goto LAB_145aa018e;
LAB_145aa015f:
          lVar4 = lVar4 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145aa015f;
        }
        if (uVar6 != uVar8) goto LAB_145aa032d;
      }
LAB_145aa018e:
      if (*(int *)(param_4 + 1) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)*param_4;
      }
      iVar1 = _wtoi(pwVar3);
      if (*(int *)(param_1 + 0x6b8) == 0) {
        return;
      }
      plVar2 = *(longlong **)(param_1 + 0x6b0);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000145aa031f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,iVar1 == 1);
      return;
    }
    if (DAT_14cbcf4b0 + iVar1 == 1) goto LAB_145aa018e;
LAB_145aa032d:
    if (iVar1 == DAT_14cbce9f8) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_3 + lVar4);
          uVar5 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(DAT_14cbce9f0 + lVar4);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) goto LAB_145aa03a1;
LAB_145aa0364:
          lVar4 = lVar4 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_145aa0364;
        }
        if (uVar6 != uVar8) {
          return;
        }
      }
    }
    else if (DAT_14cbce9f8 + iVar1 != 1) {
      return;
    }
LAB_145aa03a1:
    if (*(int *)(param_4 + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_4;
    }
    iVar1 = _wtoi(pwVar3);
    if (*(int *)(param_1 + 0x6c8) == 0) {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x6c0);
    goto LAB_145aa02b8;
  }
LAB_145aa01fd:
  if (*(int *)(param_4 + 1) == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)*param_4;
  }
  iVar1 = _wtoi(pwVar3);
  if (*(int *)(param_1 + 0x6a8) == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x6a0);
LAB_145aa02b8:
  if (plVar2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145aa02d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,param_2,iVar1,*(code **)(*plVar2 + 0x60));
  return;
}



// FUNCTION 145aa03d2 thunk_FUN_14148905a body=5 status=ok
// SIG undefined thunk_FUN_14148905a(void)

void thunk_FUN_14148905a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_3[1];
  if (iVar1 == DAT_14cb97688) {
    if (1 < iVar1) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*param_3 + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(DAT_14cb97680 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_1414890c2;
LAB_141489097:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_141489097;
      }
      if (uVar3 != uVar5) {
        return;
      }
    }
  }
  else if (DAT_14cb97688 + iVar1 != 1) {
    return;
  }
LAB_1414890c2:
  FUN_145c7d76c();
  return;
}



// FUNCTION 145aa03d8 FUN_145aa03d8 body=40 status=ok
// SIG undefined FUN_145aa03d8(void)

undefined8 FUN_145aa03d8(undefined8 param_1,int param_2)

{
  FUN_145aa0400();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa0400 FUN_145aa0400 body=417 status=ok
// SIG undefined FUN_145aa0400(void)

void FUN_145aa0400(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b804640;
  param_1[6] = &PTR_FUN_14b804900;
  FUN_144a7b030(param_1 + 0x54);
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa05a2(param_1 + 0x44);
  plVar2 = (longlong *)param_1[0x41];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x35);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa05da(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa0612(param_1 + 0x20);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa064a(param_1 + 0x14);
  FUN_145aa0682(param_1 + 7);
  FUN_140af926c(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa05a2 FUN_145aa05a2 body=55 status=ok
// SIG undefined FUN_145aa05a2(void)

void FUN_145aa05a2(longlong *param_1)

{
  FUN_1414892c0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa05da FUN_145aa05da body=55 status=ok
// SIG undefined FUN_145aa05da(void)

void FUN_145aa05da(longlong *param_1)

{
  FUN_140fb9046(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa0612 FUN_145aa0612 body=55 status=ok
// SIG undefined FUN_145aa0612(void)

void FUN_145aa0612(longlong *param_1)

{
  FUN_140fb90c0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa064a FUN_145aa064a body=55 status=ok
// SIG undefined FUN_145aa064a(void)

void FUN_145aa064a(longlong *param_1)

{
  FUN_145aa0702(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa0682 FUN_145aa0682 body=127 status=ok
// SIG undefined FUN_145aa0682(void)

void FUN_145aa0682(longlong *param_1)

{
  FUN_144760e21(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa0702 FUN_145aa0702 body=388 status=ok
// SIG undefined FUN_145aa0702(void)

void FUN_145aa0702(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_145aa0888(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145aa0888 FUN_145aa0888 body=55 status=ok
// SIG undefined FUN_145aa0888(void)

void FUN_145aa0888(longlong *param_1)

{
  FUN_1414890d2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa08c0 FUN_145aa08c0 body=112 status=ok
// SIG undefined FUN_145aa08c0(void)

void FUN_145aa08c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar2 = FUN_1400dbadc();
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
    lVar4 = FUN_145aa0930(uVar2,uVar3);
    if (lVar4 != 0) {
      uVar2 = FUN_1400dbadc();
      FUN_145aa09b0(uVar2,*(undefined8 *)(param_1 + 8));
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145aa0925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 145aa0930 FUN_145aa0930 body=127 status=ok
// SIG undefined FUN_145aa0930(void)

longlong * FUN_145aa0930(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  plVar2 = (longlong *)*param_1;
joined_r0x000145aa093d:
  if (plVar2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar1 = (**(code **)(*plVar2 + 0x70))(plVar2);
  lVar5 = 0;
  do {
    uVar3 = *(ushort *)(lVar1 + lVar5);
    uVar4 = (ulonglong)uVar3;
    uVar6 = *(ushort *)(param_2 + lVar5);
    if (uVar3 == uVar6) {
      if (uVar3 == 0) {
        return plVar2;
      }
    }
    else {
      if (0x7f < (uVar6 | uVar3)) break;
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar7]) break;
    }
    lVar5 = lVar5 + 2;
  } while( true );
  if (uVar3 == uVar6) {
    return plVar2;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x60))(plVar2);
  goto joined_r0x000145aa093d;
}



// FUNCTION 145aa09b0 FUN_145aa09b0 body=118 status=ok
// SIG undefined FUN_145aa09b0(void)

void FUN_145aa09b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == param_2 || plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x60))(param_2);
    *param_1 = (longlong)plVar1;
                    /* WARNING: Could not recover jumptable at 0x000145aa09e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1);
    return;
  }
  do {
    plVar2 = plVar1;
    plVar1 = (longlong *)(**(code **)(*plVar2 + 0x60))(plVar2);
  } while (plVar1 != (longlong *)0x0 && plVar1 != param_2);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000145aa0a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2,uVar3,*(code **)(*plVar2 + 0x68));
  return;
}



// FUNCTION 145aa0a26 FUN_145aa0a26 body=59 status=ok
// SIG undefined FUN_145aa0a26(void)

void FUN_145aa0a26(void)

{
  longlong lVar1;
  
  lVar1 = 0x20;
  do {
    FUN_144a87ccd(*(undefined8 *)(&DAT_14ca9a438 + lVar1),*(undefined4 *)(&DAT_14ca9a440 + lVar1));
    if (*(longlong *)(&DAT_14ca9a438 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 145aa0a62 FUN_145aa0a62 body=40 status=ok
// SIG undefined FUN_145aa0a62(void)

undefined8 FUN_145aa0a62(undefined8 param_1,int param_2)

{
  FUN_145aa0a8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa0a8a FUN_145aa0a8a body=79 status=ok
// SIG undefined FUN_145aa0a8a(void)

void FUN_145aa0a8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae5ee30;
  param_1[5] = &PTR_FUN_14ae5f160;
  FUN_144760e21(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140f981ea(param_1);
  return;
}



// FUNCTION 145aa0ada FUN_145aa0ada body=40 status=ok
// SIG undefined FUN_145aa0ada(void)

undefined8 FUN_145aa0ada(undefined8 param_1,int param_2)

{
  FUN_145aa0b02();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa0b02 FUN_145aa0b02 body=79 status=ok
// SIG undefined FUN_145aa0b02(void)

void FUN_145aa0b02(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b44ada0;
  plVar1 = (longlong *)param_1[0xc];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa0b5c FUN_145aa0b5c body=388 status=ok
// SIG undefined FUN_145aa0b5c(void)

undefined8 * FUN_145aa0b5c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145aa0ce2();
  *param_1 = &PTR_FUN_14b4c5870;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0x101;
  lVar1 = FUN_1458f2cea();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x74] = lVar1;
    if (lVar1 != 0) goto LAB_145aa0c09;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x74] = lVar1;
LAB_145aa0c09:
    lVar2 = FUN_1411bcc5e();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar1 = param_1[0x74];
      goto LAB_145aa0c3d;
    }
  }
  lVar1 = 0;
LAB_145aa0c3d:
  local_20 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  if (param_1 + 0x72 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x72] != 0) {
      FUN_1400020a8();
    }
    param_1[0x72] = local_30;
    *(undefined4 *)(param_1 + 0x73) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x39c) = local_24;
  }
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 0xe;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa0ce2 FUN_145aa0ce2 body=76 status=ok
// SIG undefined FUN_145aa0ce2(void)

undefined8 * FUN_145aa0ce2(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14b4bee10;
  FUN_140056680(param_1 + 0x72,L"UNDEFINED");
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  return param_1;
}



// FUNCTION 145aa0d36 FUN_145aa0d36 body=111 status=ok
// SIG undefined FUN_145aa0d36(void)

undefined8 * FUN_145aa0d36(undefined8 *param_1)

{
  FUN_140e3421a();
  FUN_1412cbb62(param_1 + 6);
  *param_1 = &PTR_FUN_14b581820;
  param_1[6] = &PTR_FUN_14b581af0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x14));
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 145aa0da6 FUN_145aa0da6 body=40 status=ok
// SIG undefined FUN_145aa0da6(void)

undefined8 FUN_145aa0da6(undefined8 param_1,int param_2)

{
  FUN_145aa0dce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa0dce FUN_145aa0dce body=79 status=ok
// SIG undefined FUN_145aa0dce(void)

void FUN_145aa0dce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b839e00;
  param_1[6] = &PTR_FUN_14b83a0c0;
  param_1[7] = &PTR_LAB_14b83a150;
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145aa0e1e FUN_145aa0e1e body=73 status=ok
// SIG undefined FUN_145aa0e1e(void)

void FUN_145aa0e1e(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        FUN_145aa0e68(lVar2,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145aa0e68 FUN_145aa0e68 body=256 status=ok
// SIG undefined FUN_145aa0e68(void)

undefined8 * FUN_145aa0e68(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_145aa0ffc(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar3 = FUN_14479d2ce(lVar4 + lVar5);
      if (lVar3 == param_2) {
        iVar2 = (int)(lVar5 >> 3) * -0x33333333;
        if (iVar2 != -1) {
          return (undefined8 *)((longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x38));
        }
        break;
      }
      lVar5 = lVar5 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar5);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_145aa0f68((longlong *)(param_1 + 0x38),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1,param_2);
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x28;
    do {
      FUN_14148aa64(lVar4);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return puVar1;
}



// FUNCTION 145aa0f68 FUN_145aa0f68 body=147 status=ok
// SIG undefined FUN_145aa0f68(void)

void FUN_145aa0f68(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145aa0ffc FUN_145aa0ffc body=1632 status=ok
// SIG undefined FUN_145aa0ffc(void)

void FUN_145aa0ffc(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined7 uVar11;
  void *pvVar10;
  uint uVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  undefined1 auStack_148 [40];
  void *local_120;
  longlong *local_118;
  void *local_110;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  void *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((DAT_14cb0d2b0 != (longlong *)0x0) &&
      (cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))(), cVar3 != '\0')) &&
     (lVar6 = FUN_140e3e8a6(DAT_14cb0d2b0), lVar6 != 0)) {
    if ((longlong)*(int *)(lVar6 + 0x40) != 0) {
      lVar15 = *(longlong *)(lVar6 + 0x38);
      lVar1 = lVar15 + (longlong)*(int *)(lVar6 + 0x40) * 0x28;
      do {
        lVar7 = FUN_14479d2ce(lVar15);
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        uVar19 = *(uint *)(lVar15 + 0x10);
        iVar4 = 0;
        if ((longlong)(int)uVar19 != 0) {
          if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar19);
          }
          FUN_14759fc40(&local_b8,uVar19);
          iVar4 = 1;
          if (3 < uVar19) {
            uVar19 = (uVar19 | 1) + 0xe;
            iVar4 = 0x1f;
            if (uVar19 != 0) {
              for (; uVar19 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            iVar4 = 1 << ((byte)iVar4 & 0x1f);
          }
          if ((local_70 == 0) || (local_70 < iVar4)) {
            local_70 = iVar4;
            FUN_1402ebebe(&local_b8);
          }
          local_110 = (void *)(longlong)*(int *)(lVar15 + 0x10);
          iVar4 = 0;
          if (local_110 != (void *)0x0) {
            local_f0 = *(longlong *)(lVar15 + 8);
            uVar8 = FUN_144729dda();
            if ((char)uVar8 == '\0') {
              uVar11 = (undefined7)((ulonglong)uVar8 >> 8);
              local_100 = CONCAT44(local_100._4_4_,(int)CONCAT71(uVar11,lVar7 == 0));
              local_118 = (longlong *)CONCAT44(local_118._4_4_,(int)CONCAT71(uVar11,1));
            }
            else {
              lVar9 = local_f0;
              uVar5 = FUN_144a76f74(local_f0,1,0);
              local_118 = (longlong *)CONCAT44(local_118._4_4_,uVar5);
              local_100 = CONCAT44(local_100._4_4_,
                                   (int)CONCAT71((int7)((ulonglong)lVar9 >> 8),lVar7 == 0));
              if ((char)uVar5 == '\0' && lVar7 != 0) {
                lVar9 = FUN_14479d2ce(local_f0);
                local_c0 = 0;
                FUN_14485c47a(&local_c0,*(undefined8 *)(lVar7 + 0x30));
                local_c0 = FUN_14759e65e(lVar9 + 0x40,
                                         (uint)((ulonglong)local_c0 >> 0x20) ^ (uint)local_c0,
                                         &local_c0);
                FUN_14759fdd6(&local_b8,local_c4);
                local_100 = local_100 & 0xffffffff00000000;
                local_118 = (longlong *)((ulonglong)local_118 & 0xffffffff00000000);
              }
            }
            local_d0 = local_f0 + 8;
            iVar4 = 0;
            local_120 = (void *)0x0;
            do {
              local_e8 = local_120;
              while( true ) {
                uVar19 = (int)local_e8 + 1;
                local_120 = (void *)(ulonglong)uVar19;
                local_e0 = (longlong)(int)local_e8;
                if ((int)(uint)local_110 <= (int)uVar19) break;
                local_120 = (void *)(local_e0 + 1);
                plVar17 = (longlong *)(local_d0 + local_e0 * 8);
                local_108 = CONCAT44(local_108._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)local_d0 >> 8),1));
                do {
                  plVar14 = plVar17;
                  cVar3 = FUN_144729dda(plVar17);
                  if (cVar3 == '\0') {
                    if (((ulonglong)local_118 & 1) == 0) goto LAB_145aa160c;
                  }
                  else {
                    uVar19 = FUN_144a76f74(plVar17,1,0);
                    plVar14 = (longlong *)(ulonglong)uVar19;
                    local_f8 = CONCAT71(local_f8._1_7_,(char)uVar19);
                    if ((char)local_100 == '\0' && (char)uVar19 == '\0') {
                      local_d8 = FUN_14479d2ce(plVar17);
                      local_d8 = local_d8 + 0x40;
                      local_c0 = 0;
                      FUN_14485c47a(&local_c0,*(undefined8 *)(lVar7 + 0x30));
                      local_c0 = FUN_14759e65e(local_d8,(uint)((ulonglong)local_c0 >> 0x20) ^
                                                        (uint)local_c0,&local_c0);
                      plVar14 = &local_b8;
                      FUN_14759fdd6(plVar14,local_c4);
                    }
                    if ((((byte)local_f8 ^ (byte)local_118) & 1) != 0) goto LAB_145aa15d7;
                  }
                  local_120 = (void *)((longlong)local_120 + 1);
                  local_108 = CONCAT44(local_108._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)plVar14 >> 8),
                                                     (longlong)local_120 < (longlong)local_110));
                  plVar17 = plVar17 + 1;
                } while (local_110 != local_120);
                local_120 = local_110;
LAB_145aa15d7:
                if (((ulonglong)local_118 & 1) == 0) goto LAB_145aa160c;
                local_118 = (longlong *)((ulonglong)local_118 & 0xffffffff00000000);
                local_e8 = local_120;
                if ((local_108 & 1) == 0) goto LAB_145aa1654;
              }
              if (((ulonglong)local_118 & 1) != 0) break;
              local_108 = (ulonglong)local_108._4_4_ << 0x20;
LAB_145aa160c:
              iVar18 = (int)local_120 - (int)local_e8;
              pvVar10 = local_e8;
              if (iVar4 != (int)local_e8) {
                pvVar10 = memmove((void *)(local_f0 + (longlong)iVar4 * 8),
                                  (void *)(local_f0 + local_e0 * 8),(longlong)iVar18 << 3);
              }
              iVar4 = iVar4 + iVar18;
              local_118 = (longlong *)
                          CONCAT44(local_118._4_4_,(int)CONCAT71((int7)((ulonglong)pvVar10 >> 8),1))
              ;
            } while ((local_108 & 1) != 0);
LAB_145aa1654:
            *(int *)(lVar15 + 0x10) = iVar4;
          }
        }
        if ((lVar7 != 0) && (iVar4 != 0)) {
          local_f8 = *(ulonglong *)(lVar15 + 8);
          local_100 = local_f8 + (longlong)iVar4 * 8;
          do {
            lVar9 = FUN_14479d2ce(local_f8);
            local_c0 = 0;
            FUN_14485c47a(&local_c0,*(undefined8 *)(lVar7 + 0x30));
            local_120 = (void *)FUN_14759e65e(lVar9 + 0x40,
                                              (uint)((ulonglong)local_c0 >> 0x20) ^ (uint)local_c0);
            if (0 < *(int *)((longlong)local_120 + 0x18)) {
              local_118 = (longlong *)((longlong)local_120 + 0x10);
              uVar19 = 0;
              do {
                local_108 = (longlong)(int)uVar19 * 0x10;
                lVar16 = *local_118 + local_108;
                lVar9 = FUN_144a34e94(lVar16,1);
                pvVar10 = local_120;
                if (lVar9 == 0) {
LAB_145aa133e:
                  local_110 = (void *)CONCAT44(local_110._4_4_,uVar19 - 1);
                  iVar4 = *(int *)((longlong)local_120 + 0x18);
                  iVar18 = ~uVar19 + iVar4;
                  if (iVar18 != 0) {
                    if (0 < iVar18) {
                      iVar18 = 1;
                    }
                    memmove((void *)(local_108 + *(longlong *)((longlong)local_120 + 0x10)),
                            (void *)((longlong)(iVar4 - iVar18) * 0x10 +
                                    *(longlong *)((longlong)local_120 + 0x10)),(longlong)iVar18 << 4
                           );
                    iVar4 = *(int *)((longlong)pvVar10 + 0x18);
                  }
                  *(int *)((longlong)local_120 + 0x18) = iVar4 + -1;
                  FUN_1401c4f1a(local_118);
                  uVar19 = (uint)local_110;
                }
                else if (lVar9 == lVar6) {
                  if ((int)uStack_b0 != local_84) {
                    uVar2 = *(ulonglong *)(lVar16 + 8);
                    uVar12 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
                    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
                    puVar13 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar13 = local_80;
                    }
                    for (iVar4 = *(int *)(puVar13 +
                                         (ulonglong)(local_70 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4)
                        ; iVar4 != -1; iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_b8 + 8)) {
                      if (*(ulonglong *)(local_b8 + (longlong)iVar4 * 0x10) == uVar2)
                      goto LAB_145aa13aa;
                    }
                  }
                  goto LAB_145aa133e;
                }
LAB_145aa13aa:
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < *(int *)((longlong)local_120 + 0x18));
            }
            local_f8 = local_f8 + 8;
          } while (local_f8 != local_100);
        }
        FUN_14148aa64(lVar15);
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140c23a50(&local_b8);
        lVar15 = lVar15 + 0x28;
      } while (lVar15 != lVar1);
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa165e FUN_145aa165e body=9 status=ok
// SIG undefined FUN_145aa165e(void)

void FUN_145aa165e(longlong param_1,char param_2)

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



// FUNCTION 145aa1668 FUN_145aa1668 body=81 status=ok
// SIG undefined FUN_145aa1668(void)

void FUN_145aa1668(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(longlong **)(lVar2 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x28));
    *(undefined8 *)(lVar2 + 0x60) = 0;
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 145aa16e4 FUN_145aa16e4 body=348 status=ok
// SIG undefined FUN_145aa16e4(void)

longlong * FUN_145aa16e4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar3 = DAT_14cbe8328;
  DAT_14cbe8330 = DAT_14cbe8330 + 1;
  plVar4 = (longlong *)*param_1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 == plVar3) {
    *plVar3 = (longlong)param_2;
    plVar3[1] = (longlong)param_2;
    plVar3[2] = (longlong)param_2;
    plVar4 = param_2;
    goto LAB_145aa17c7;
  }
  plVar1 = param_2 + 1;
  if ((int)param_1[1] == 0) {
    plVar4[2] = (longlong)param_2;
    if (*param_1 == plVar3[2]) {
      plVar4 = plVar3 + 2;
LAB_145aa1838:
      *plVar4 = (longlong)param_2;
    }
  }
  else {
    *plVar4 = (longlong)param_2;
    plVar4 = plVar3;
    if (*param_1 == *plVar3) goto LAB_145aa1838;
  }
  plVar4 = (longlong *)*plVar1;
  cVar2 = (char)plVar4[3];
  plVar6 = param_2;
  while (cVar2 == '\0') {
    plVar5 = *(longlong **)plVar4[1];
    if (plVar4 == plVar5) {
      plVar5 = (longlong *)((longlong *)plVar4[1])[2];
      if ((char)plVar5[3] == '\0') goto LAB_145aa1757;
      if (plVar6 == (longlong *)plVar4[2]) {
        FUN_145aa1840(plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_145aa188c(*(undefined8 *)(plVar6[1] + 8));
    }
    else if ((char)plVar5[3] == '\0') {
LAB_145aa1757:
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar1 + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(*plVar1 + 8);
    }
    else {
      if (plVar6 == (longlong *)*plVar4) {
        FUN_145aa188c(plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_145aa1840(*(undefined8 *)(plVar6[1] + 8));
    }
    plVar1 = plVar6 + 1;
    plVar4 = (longlong *)plVar6[1];
    cVar2 = (char)plVar4[3];
  }
  plVar4 = (longlong *)plVar3[1];
LAB_145aa17c7:
  *(undefined1 *)(plVar4 + 3) = 1;
  return param_2;
}



// FUNCTION 145aa1840 FUN_145aa1840 body=75 status=ok
// SIG undefined FUN_145aa1840(void)

void FUN_145aa1840(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_1;
  }
  plVar3 = *(longlong **)(param_1 + 8);
  plVar1[1] = (longlong)plVar3;
  if (*(longlong *)(DAT_14cbe8328 + 8) == param_1) {
    plVar3 = (longlong *)(DAT_14cbe8328 + 8);
  }
  else {
    plVar3 = plVar3 + (ulonglong)(*plVar3 != param_1) * 2;
  }
  *plVar3 = (longlong)plVar1;
  *plVar1 = param_1;
  *(longlong **)(param_1 + 8) = plVar1;
  return;
}



// FUNCTION 145aa188c FUN_145aa188c body=71 status=ok
// SIG undefined FUN_145aa188c(void)

void FUN_145aa188c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_1 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_1;
  }
  plVar3 = (longlong *)param_1[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (*(longlong **)(DAT_14cbe8328 + 8) == param_1) {
    plVar4 = (longlong *)(DAT_14cbe8328 + 8);
  }
  else {
    plVar4 = plVar3 + 2;
    if ((longlong *)plVar3[2] != param_1) {
      plVar4 = plVar3;
    }
  }
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_1;
  param_1[1] = lVar1;
  return;
}



// FUNCTION 145aa18d4 FUN_145aa18d4 body=63 status=ok
// SIG undefined FUN_145aa18d4(void)

void FUN_145aa18d4(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145aa1914(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14070ee74(param_1);
    return;
  }
  FUN_145aa196c(param_1);
  FUN_145aa1914(param_1);
  return;
}



// FUNCTION 145aa1914 FUN_145aa1914 body=88 status=ok
// SIG undefined FUN_145aa1914(void)

void FUN_145aa1914(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145aa196c FUN_145aa196c body=325 status=ok
// SIG undefined FUN_145aa196c(void)

void FUN_145aa196c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145aa1ab2 FUN_145aa1ab2 body=381 status=ok
// SIG undefined FUN_145aa1ab2(void)

longlong FUN_145aa1ab2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != DAT_14c965848) {
    if (lVar1 == DAT_14c965890) {
      return param_1 + 0xd8;
    }
    if (lVar1 == DAT_14c965908) {
      return param_1 + 0x30;
    }
    if (lVar1 == DAT_14c965920) {
      return param_1 + 0x108;
    }
    if (lVar1 == DAT_14c965938) {
      return param_1 + 0x18;
    }
    if (lVar1 == DAT_14c965950) {
      return param_1 + 0xf0;
    }
    if (((lVar1 == DAT_14c965770) || (lVar1 == DAT_14c965788)) || (lVar1 == DAT_14c965758)) {
      return param_1 + 0x48;
    }
    if (lVar1 == DAT_14c965818) {
      return param_1 + 0x60;
    }
    if (((lVar1 == DAT_14c9657b8) || (lVar1 == DAT_14c9657d0)) || (lVar1 == DAT_14c9657a0)) {
      return param_1 + 0x180;
    }
    if (lVar1 == DAT_14c965830) {
      return param_1 + 0x198;
    }
    if (lVar1 == DAT_14c9658f0) {
      return param_1 + 0x168;
    }
    if (lVar1 == DAT_14c9658a8) {
      return param_1 + 0x120;
    }
    if (lVar1 == DAT_14c9658d8) {
      return param_1 + 0x150;
    }
    if (lVar1 == DAT_14c9658c0) {
      return param_1 + 0x138;
    }
    if (lVar1 == DAT_14c965968) {
      return param_1 + 0x78;
    }
    if (lVar1 == DAT_14c965980) {
      return param_1 + 0x90;
    }
    if (lVar1 == DAT_14c9659b0) {
      return param_1 + 0xc0;
    }
    param_1 = param_1 + 0xa8;
    if (lVar1 != DAT_14c965998) {
      param_1 = 0;
    }
  }
  return param_1;
}



// FUNCTION 145aa1c30 FUN_145aa1c30 body=269 status=ok
// SIG undefined FUN_145aa1c30(void)

ulonglong FUN_145aa1c30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  bool bVar8;
  undefined7 uVar7;
  
  lVar1 = *param_2;
  bVar8 = *(longlong *)(param_1 + 0x48) != lVar1;
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (bVar8) {
    *(longlong *)(param_1 + 0x48) = lVar1;
  }
  bVar2 = 1e-08 < ABS(*(float *)(param_1 + 0x3c) - (float)(double)param_2[0x10]);
  if (bVar2) {
    *(float *)(param_1 + 0x3c) = (float)(double)param_2[0x10];
  }
  bVar3 = 1e-08 < ABS(*(float *)(param_1 + 0x40) - (float)(double)param_2[0xc]);
  if (bVar3) {
    *(float *)(param_1 + 0x40) = (float)(double)param_2[0xc];
  }
  bVar4 = 1e-08 < ABS(*(float *)(param_1 + 0x60) - (float)(double)param_2[0x14]);
  if (bVar4) {
    *(float *)(param_1 + 0x60) = (float)(double)param_2[0x14];
  }
  uVar6 = CONCAT71(uVar7,bVar4 || (bVar3 || (bVar2 || bVar8)));
  if (1e-08 < ABS(*(float *)(param_1 + 100) - (float)(double)param_2[0x16])) {
    *(float *)(param_1 + 100) = (float)(double)param_2[0x16];
    uVar6 = CONCAT71(uVar7,1);
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x68) - (float)(double)param_2[0x12])) {
    *(float *)(param_1 + 0x68) = (float)(double)param_2[0x12];
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  if (*(char *)(param_1 + 0x38) != (char)param_2[0x1d]) {
    *(char *)(param_1 + 0x38) = (char)param_2[0x1d];
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    bVar5 = FUN_140ae1244(param_1 + 0x70,param_2 + 6);
    uVar6 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 | bVar5);
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 145aa1d3e FUN_145aa1d3e body=150 status=ok
// SIG undefined FUN_145aa1d3e(void)

void FUN_145aa1d3e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1e8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1e8)) {
      uVar5 = uVar4 / 0x1e8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1e8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145aa1dd6 FUN_145aa1dd6 body=787 status=ok
// SIG undefined FUN_145aa1dd6(void)

undefined8 FUN_145aa1dd6(longlong param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  wchar_t *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [120];
  byte local_50;
  byte local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = (longlong *)(param_1 + 0xd0);
  lVar8 = *param_2;
  bVar9 = *(longlong *)(param_1 + 0xd0) != lVar8;
  if (bVar9) {
    *local_e0 = lVar8;
  }
  iVar1 = (int)param_2[0x19];
  bVar10 = *(int *)(param_1 + 0xd8) != iVar1;
  if (bVar10) {
    *(int *)(param_1 + 0xd8) = iVar1;
  }
  bVar10 = bVar10 || bVar9;
  local_f0 = (longlong *)(param_1 + 0x128);
  if (*(int *)(param_1 + 0x130) == (int)param_2[0x24]) {
    if (0 < *(int *)(param_1 + 0x130)) {
      lVar8 = 0x10;
      local_e8 = 0;
      lVar5 = 0;
      do {
        puVar3 = (undefined8 *)FUN_1447a1f4a(param_2[0x23] + local_e8);
        local_d8 = (wchar_t *)0x0;
        local_d0 = *(int *)(puVar3 + 1);
        lVar6 = (longlong)local_d0;
        _Src = (void *)*puVar3;
        if (lVar6 == 0) {
          local_cc = 0;
          iVar1 = *(int *)(*local_f0 + 8 + lVar8);
          if (iVar1 != 0) {
            puVar3 = (undefined8 *)(*local_f0 + lVar8);
            iVar4 = 0;
            goto LAB_145aa2066;
          }
        }
        else {
          FUN_1446dd670(&local_d8,local_d0,0);
          memcpy(local_d8,_Src,lVar6 * 2);
          pwVar7 = local_d8;
          lVar6 = *local_f0;
          iVar1 = *(int *)(lVar6 + 8 + lVar8);
          if (iVar1 == local_d0) {
            if (1 < local_d0) {
              puVar3 = (undefined8 *)(lVar6 + lVar8);
              iVar1 = wcscmp((wchar_t *)*puVar3,local_d8);
              if (iVar1 != 0) goto LAB_145aa206d;
            }
          }
          else {
            puVar3 = (undefined8 *)(lVar6 + lVar5 * 0x90 + 0x10);
            iVar4 = local_d0;
LAB_145aa2066:
            pwVar7 = local_d8;
            if (iVar1 + iVar4 != 1) {
LAB_145aa206d:
              FUN_1402980a2(puVar3,pwVar7);
              bVar10 = true;
              pwVar7 = local_d8;
            }
          }
          if (pwVar7 != (wchar_t *)0x0) {
            FUN_1400020a8(pwVar7);
          }
        }
        lVar5 = lVar5 + 1;
        lVar8 = lVar8 + 0x90;
        local_e8 = local_e8 + 0x18;
      } while (lVar5 < *(int *)(param_1 + 0x130));
    }
    if (!bVar10) {
      uVar2 = 0;
      goto LAB_145aa1f6a;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x134);
    FUN_140d47191(*(undefined8 *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x130) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x134) != 0)) {
      FUN_148e6b6d0(local_f0,0);
    }
    if ((longlong)(int)param_2[0x24] != 0) {
      lVar8 = param_2[0x23];
      lVar5 = (longlong)(int)param_2[0x24] * 0x18;
      do {
        FUN_1410d1d82(&local_d8);
        uVar2 = FUN_1447a1f4a(lVar8);
        FUN_144a787a6(local_c8,uVar2);
        local_4f = local_4f & 0xfe;
        local_50 = local_50 | 0x20;
        iVar1 = *(int *)(param_1 + 0x130);
        *(uint *)(param_1 + 0x130) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x134) < iVar1 + 1U) {
          FUN_1410d2002(local_f0,iVar1);
        }
        FUN_1410d0c56((longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x128),&local_d8);
        if ((int)param_2[0x18] == *(int *)(param_1 + 0x130) + -1) {
          uVar2 = FUN_1447a1f4a(lVar8);
          FUN_144a787a6(param_1 + 0xe8,uVar2);
          *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0x130) + -1;
        }
        FUN_140d471ba(&local_d8);
        lVar8 = lVar8 + 0x18;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
  }
  FUN_14148d276(local_e0,(int)param_2[0x18]);
  uVar2 = 1;
LAB_145aa1f6a:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa20ea FUN_145aa20ea body=998 status=ok
// SIG undefined FUN_145aa20ea(void)

void FUN_145aa20ea(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_140e82300();
  local_68 = (longlong *)*plVar3;
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  local_60 = (undefined4)plVar3[1];
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,"EmptyBindingText",0);
  FUN_140ac6c96(&local_58,&local_68);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar1 = local_68;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != local_68) {
    *(longlong **)(param_1 + 0x18) = local_68;
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 8))(local_68);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  uVar2 = local_60;
  *(undefined4 *)(param_1 + 0x20) = local_60;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x48) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x78) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x90);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x90) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0xa8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0xc0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 200) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0xf0);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0xf0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x108);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x108) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x120);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x120) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x128) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x138);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x138) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x150);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x150) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x168);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x168) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x180);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x180) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  plVar3 = *(longlong **)(param_1 + 0x198);
  if (plVar3 != plVar1) {
    *(longlong **)(param_1 + 0x198) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa24d2 FUN_145aa24d2 body=1283 status=ok
// SIG undefined FUN_145aa24d2(void)

longlong * FUN_145aa24d2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(char *)(param_1 + 5) = (char)param_2[5];
  plVar1 = (longlong *)param_2[6];
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(char *)(param_1 + 8) = (char)param_2[8];
  plVar1 = (longlong *)param_2[9];
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != plVar1) {
    param_1[9] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  plVar1 = (longlong *)param_2[0xc];
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != plVar1) {
    param_1[0xc] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0xd) = (int)param_2[0xd];
  *(char *)(param_1 + 0xe) = (char)param_2[0xe];
  plVar1 = (longlong *)param_2[0xf];
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != plVar1) {
    param_1[0xf] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  plVar1 = (longlong *)param_2[0x12];
  plVar2 = (longlong *)param_1[0x12];
  if (plVar2 != plVar1) {
    param_1[0x12] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  plVar1 = (longlong *)param_2[0x15];
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != plVar1) {
    param_1[0x15] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x16) = (int)param_2[0x16];
  *(char *)(param_1 + 0x17) = (char)param_2[0x17];
  plVar1 = (longlong *)param_2[0x18];
  plVar2 = (longlong *)param_1[0x18];
  if (plVar2 != plVar1) {
    param_1[0x18] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x19) = (int)param_2[0x19];
  *(char *)(param_1 + 0x1a) = (char)param_2[0x1a];
  plVar1 = (longlong *)param_2[0x1b];
  plVar2 = (longlong *)param_1[0x1b];
  if (plVar2 != plVar1) {
    param_1[0x1b] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x1c) = (int)param_2[0x1c];
  *(char *)(param_1 + 0x1d) = (char)param_2[0x1d];
  plVar1 = (longlong *)param_2[0x1e];
  plVar2 = (longlong *)param_1[0x1e];
  if (plVar2 != plVar1) {
    param_1[0x1e] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x1f) = (int)param_2[0x1f];
  *(char *)(param_1 + 0x20) = (char)param_2[0x20];
  plVar1 = (longlong *)param_2[0x21];
  plVar2 = (longlong *)param_1[0x21];
  if (plVar2 != plVar1) {
    param_1[0x21] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x22) = (int)param_2[0x22];
  *(char *)(param_1 + 0x23) = (char)param_2[0x23];
  plVar1 = (longlong *)param_2[0x24];
  plVar2 = (longlong *)param_1[0x24];
  if (plVar2 != plVar1) {
    param_1[0x24] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  *(char *)(param_1 + 0x26) = (char)param_2[0x26];
  plVar1 = (longlong *)param_2[0x27];
  plVar2 = (longlong *)param_1[0x27];
  if (plVar2 != plVar1) {
    param_1[0x27] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x28) = (int)param_2[0x28];
  *(char *)(param_1 + 0x29) = (char)param_2[0x29];
  plVar1 = (longlong *)param_2[0x2a];
  plVar2 = (longlong *)param_1[0x2a];
  if (plVar2 != plVar1) {
    param_1[0x2a] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x2b) = (int)param_2[0x2b];
  *(char *)(param_1 + 0x2c) = (char)param_2[0x2c];
  plVar1 = (longlong *)param_2[0x2d];
  plVar2 = (longlong *)param_1[0x2d];
  if (plVar2 != plVar1) {
    param_1[0x2d] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x2e) = (int)param_2[0x2e];
  *(char *)(param_1 + 0x2f) = (char)param_2[0x2f];
  plVar1 = (longlong *)param_2[0x30];
  plVar2 = (longlong *)param_1[0x30];
  if (plVar2 != plVar1) {
    param_1[0x30] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x31) = (int)param_2[0x31];
  *(char *)(param_1 + 0x32) = (char)param_2[0x32];
  plVar1 = (longlong *)param_2[0x33];
  plVar2 = (longlong *)param_1[0x33];
  if (plVar2 != plVar1) {
    param_1[0x33] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x34) = (int)param_2[0x34];
  *(char *)(param_1 + 0x35) = (char)param_2[0x35];
  return param_1;
}



// FUNCTION 145aa29d6 FUN_145aa29d6 body=298 status=ok
// SIG undefined FUN_145aa29d6(void)

void FUN_145aa29d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14123bd7e();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ebda00;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14148d2bc(param_1,param_2,&DAT_14cb92bb0,param_1);
      local_38 = FUN_14122385c;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14148d2bc(param_1,param_2,&DAT_14cb92bb8,param_1);
      local_38 = (code *)&LAB_145c27b84;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14148d2bc(param_1,param_2,&DAT_14cb92b90,param_1);
      local_38 = FUN_1442f4e92;
      local_30 = 0;
      local_48 = &local_38;
      FUN_14148d2bc(param_1,param_2,&DAT_14cb92d60,param_1);
    }
  }
  if (*(char *)(param_1 + 0x29c) == '\x01') {
    *(undefined4 *)(param_1 + 0x148) = 0xb;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa2b02 FUN_145aa2b02 body=40 status=ok
// SIG undefined FUN_145aa2b02(void)

undefined8 FUN_145aa2b02(undefined8 param_1,int param_2)

{
  FUN_145aa2b2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa2b2a FUN_145aa2b2a body=139 status=ok
// SIG undefined FUN_145aa2b2a(void)

void FUN_145aa2b2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abda400;
  param_1[0x72] = &PTR_FUN_14abdac50;
  param_1[0x85] = &PTR_FUN_14abdacb0;
  param_1[0x86] = &PTR_FUN_14abdacd0;
  param_1[0x87] = &PTR_FUN_14abdad20;
  param_1[0x88] = &PTR_FUN_14abdad50;
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1413f439e(param_1);
  return;
}



// FUNCTION 145aa2bb6 FUN_145aa2bb6 body=40 status=ok
// SIG undefined FUN_145aa2bb6(void)

undefined8 FUN_145aa2bb6(undefined8 param_1,int param_2)

{
  FUN_145aa2bde();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa2bde FUN_145aa2bde body=139 status=ok
// SIG undefined FUN_145aa2bde(void)

void FUN_145aa2bde(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2570c0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145aa2c6a FUN_145aa2c6a body=471 status=ok
// SIG undefined FUN_145aa2c6a(void)

void FUN_145aa2c6a(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140170020();
  uVar4 = FUN_140495e96(param_1);
  lVar5 = FUN_1404960a8(uVar4);
  if (lVar5 != 0) {
    local_48 = (code *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    pcVar1 = local_48;
    local_40 = 3;
    *(undefined ***)local_48 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    *(longlong *)(local_48 + 0x10) = lVar6;
    *(undefined ***)local_48 = &PTR_FUN_14b9ab270;
    *(undefined8 *)(local_48 + 0x18) = 0;
    FUN_14485c47a(local_48 + 0x18,param_1 + -0x30);
    *(code **)(pcVar1 + 0x20) = FUN_1410f2d3c;
    *(undefined4 *)(pcVar1 + 0x28) = 0;
    FUN_1446ddc76(&local_50,"FGbxUIEvent_AnalogCursor",1);
    FUN_140391af6(lVar5,&local_38,local_50,&local_48);
    *(undefined8 *)(param_1 + 0x88) = local_38;
    FUN_1449db362(&local_48);
  }
  lVar5 = FUN_1412bdaf0(param_1);
  if (lVar5 != 0) {
    lVar5 = FUN_145aa2e42(lVar5);
    if (lVar5 != 0) {
      uVar4 = FUN_140495e96(param_1);
      FUN_145aa30f6(lVar5,&local_48,uVar4);
      *(code **)(param_1 + 0xa0) = local_48;
      cVar3 = FUN_144729dda(param_1 + 0xa0);
      if (cVar3 != '\0') {
        lVar5 = FUN_14479d2ce(param_1 + 0xa0);
        local_48 = FUN_140dc7290;
        local_40 = 0;
        FUN_145aa2ef8(lVar5 + 0x110,&local_38,param_1 + -0x30);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa2e42 FUN_145aa2e42 body=105 status=ok
// SIG undefined FUN_145aa2e42(void)

void FUN_145aa2e42(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14148d6ee();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145aa2eac(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa2eac FUN_145aa2eac body=76 status=ok
// SIG undefined FUN_145aa2eac(void)

void FUN_145aa2eac(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14148d6ee();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145aa2ee9;
    }
  }
  lVar2 = 0;
LAB_145aa2ee9:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145aa2ef8 FUN_145aa2ef8 body=254 status=ok
// SIG undefined FUN_145aa2ef8(void)

undefined8
FUN_145aa2ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b47b1f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9ab2e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145aa2ff8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa2ff8 FUN_145aa2ff8 body=216 status=ok
// SIG undefined FUN_145aa2ff8(void)

undefined8 * FUN_145aa2ff8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa30de FUN_145aa30de body=24 status=ok
// SIG undefined FUN_145aa30de(void)

bool FUN_145aa30de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145aa30f6 FUN_145aa30f6 body=516 status=ok
// SIG undefined FUN_145aa30f6(void)

undefined8 * FUN_145aa30f6(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  local_38 = param_3;
  if ((~DAT_14c950c29 & 1) == 0 && param_3 != 0) {
    FUN_1456cec3c(param_3);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  iVar3 = FUN_145aa32fc(plVar1,uVar2,&local_38);
  if (iVar3 == -1) {
    FUN_145aa33cc(param_1,param_2,param_3);
  }
  else {
    if (DAT_14c950c29 == 1 && param_3 != 0) {
      FUN_1456cec3c(param_3);
    }
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != 0) {
      FUN_1456cec3c(param_3);
    }
    local_38 = param_3;
    if ((~DAT_14c950c29 & 1) == 0 && param_3 != 0) {
      FUN_1456cec3c(param_3);
    }
    if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_3);
    }
    iVar3 = FUN_145aa32fc(plVar1,uVar2,&local_38);
    if ((iVar3 == -1) || (lVar4 = (longlong)iVar3 * 0x18 + *plVar1, lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 8);
      if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
    }
    *param_2 = 0;
    FUN_14485c47a(param_2,lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa32fc FUN_145aa32fc body=208 status=ok
// SIG undefined FUN_145aa32fc(void)

int FUN_145aa32fc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 145aa33cc FUN_145aa33cc body=284 status=ok
// SIG undefined FUN_145aa33cc(void)

undefined8 * FUN_145aa33cc(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x2b8))();
  lVar3 = FUN_145aa358b(param_1,uVar2);
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_1447f71cc(lVar4,0x40000000);
  local_48 = lVar3;
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_50 = param_3;
  if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  local_40 = &local_50;
  local_38 = &local_48;
  FUN_145aa3834(param_1 + 6,local_2c);
  FUN_145aa34ea(lVar3);
  *param_2 = 0;
  FUN_14485c47a(param_2,lVar3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa34ea FUN_145aa34ea body=65 status=ok
// SIG undefined FUN_145aa34ea(void)

void FUN_145aa34ea(longlong param_1)

{
  longlong lVar1;
  
  FUN_145aa363e();
  if (*(int *)(param_1 + 0x34) < 0x20) {
    FUN_145aa352c(param_1 + 0x28,0x20);
  }
  lVar1 = FUN_1402735c8();
  FUN_1403de7ba(param_1 + 0xf0,lVar1 + 0xe0);
  return;
}



// FUNCTION 145aa352c FUN_145aa352c body=95 status=ok
// SIG undefined FUN_145aa352c(void)

void FUN_145aa352c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145aa358b FUN_145aa358b body=177 status=ok
// SIG undefined FUN_145aa358b(void)

undefined8 FUN_145aa358b(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa363e FUN_145aa363e body=354 status=ok
// SIG undefined FUN_145aa363e(void)

void FUN_145aa363e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) < 0) {
    FUN_1403de8ba(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_1403de8ba(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1403de8ba(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_1403de8ba(param_1 + 0x70,0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) < 0) {
    FUN_1403de8ba(param_1 + 0x88,0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) < 0) {
    FUN_1403de8ba(param_1 + 0x98,0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) < 0) {
    FUN_1403de8ba(param_1 + 0xa8,0);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) < 0) {
    FUN_1403de8ba(param_1 + 0xb8,0);
  }
  FUN_145aa37a0(param_1);
  FUN_1405b0f7a(param_1,param_1 + 0x40,&DAT_14caa8558,&DAT_14caa8558,1);
  return;
}



// FUNCTION 145aa37a0 FUN_145aa37a0 body=117 status=ok
// SIG undefined FUN_145aa37a0(void)

void FUN_145aa37a0(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    uVar2 = (longlong)*(int *)(param_1 + 0x30) + 1;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x28) + -0x10 + uVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_145aa352c((longlong *)(param_1 + 0x28),0);
  }
                    /* WARNING: Could not recover jumptable at 0x000145aa3802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  return;
}



// FUNCTION 145aa3816 FUN_145aa3816 body=29 status=ok
// SIG undefined FUN_145aa3816(void)

undefined8 FUN_145aa3816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa3834 FUN_145aa3834 body=357 status=ok
// SIG undefined FUN_145aa3834(void)

undefined4 * FUN_145aa3834(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145aa3a96(param_1,local_48);
  FUN_145aa399a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145aa39f2(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145aa3b7e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa399a FUN_145aa399a body=87 status=ok
// SIG undefined FUN_145aa399a(void)

longlong * FUN_145aa399a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145aa39f2 FUN_145aa39f2 body=162 status=ok
// SIG undefined FUN_145aa39f2(void)

undefined8 FUN_145aa39f2(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_145aa32fc(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_14611c404(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_145aa3a16;
    }
  }
  uVar6 = 0;
LAB_145aa3a16:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa3a96 FUN_145aa3a96 body=231 status=ok
// SIG undefined FUN_145aa3a96(void)

int * FUN_145aa3a96(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145aa3b7e FUN_145aa3b7e body=517 status=ok
// SIG undefined FUN_145aa3b7e(void)

void FUN_145aa3b7e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa3d84 FUN_145aa3d84 body=512 status=ok
// SIG undefined FUN_145aa3d84(void)

void FUN_145aa3d84(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a4 = param_4;
  lVar3 = FUN_1447210f0();
  if (((param_2 != 0) && (lVar3 != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x2500), plVar2 != (longlong *)0x0)) {
    lVar6 = plVar2[0x746];
    uVar4 = FUN_1412d33a2(param_2);
    (**(code **)(*plVar2 + 0x890))(plVar2,&local_98,uVar4);
    if (lVar6 != local_98) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x2500) + 0x2ef4);
      *pbVar1 = *pbVar1 | 0x40;
      FUN_1458ae6da(param_2,param_3,&local_a4);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar5;
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,3,0x10);
      puVar5 = local_b8;
      local_b0 = 3;
      *local_b8 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_b8[2] = lVar6;
      *local_b8 = &PTR_FUN_14b9954a0;
      local_b8[3] = 0;
      FUN_14485c47a(local_b8 + 3,param_1);
      puVar5[4] = param_1;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b8);
      local_58 = 1;
      local_c8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar4,param_1 + 0x3b30,&local_98,0x3f800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa3f86 FUN_145aa3f86 body=181 status=ok
// SIG undefined FUN_145aa3f86(void)

undefined8 * FUN_145aa3f86(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"SHIFT",1);
  FUN_145aa403c(param_1,local_28,param_2);
  *param_1 = &PTR_FUN_14ba3cf50;
  param_1[0xe] = &PTR_FUN_14ba3d178;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa403c FUN_145aa403c body=54 status=ok
// SIG undefined FUN_145aa403c(void)

undefined8 FUN_145aa403c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401cb356();
  FUN_145aa4072(param_1,param_2,param_3,uVar1);
  FUN_1414a827a();
  return param_1;
}



// FUNCTION 145aa4072 FUN_145aa4072 body=342 status=ok
// SIG undefined FUN_145aa4072(void)

undefined8 * FUN_145aa4072(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_LAB_14b438010;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 2;
  FUN_145aa41ca(param_1 + 0xe,L"FOnlineSubsystemImpl",0);
  *param_1 = &PTR_LAB_14b436c70;
  param_1[0xe] = &PTR_LAB_14b436e98;
  param_1[0x11] = param_2;
  param_1[0x12] = param_3;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  param_1[0x17] = puVar1;
  param_1[0x16] = puVar1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  uVar2 = FUN_145857cde();
  local_88 = &LAB_1489b8eb8;
  local_80 = 0;
  FUN_145aa448c(local_78,param_1);
  FUN_145aa4344(uVar2,&local_88,local_78);
  FUN_1401cb1ee(local_78);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa41ca FUN_145aa41ca body=232 status=ok
// SIG undefined FUN_145aa41ca(void)

undefined8 *
FUN_145aa41ca(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_149e00cc0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_145aa42b4(local_50,param_1,&LAB_14003a87c);
  local_68 = param_3;
  FUN_1405f67fc(param_4,&local_60,local_50,param_2);
  param_1[1] = local_60;
  local_60 = 0;
  plVar2 = (longlong *)param_1[2];
  param_1[2] = local_58;
  local_58 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  FUN_1449db362(local_50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa42b4 FUN_145aa42b4 body=143 status=ok
// SIG undefined FUN_145aa42b4(void)

longlong * FUN_145aa42b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_149e01730;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  return param_1;
}



// FUNCTION 145aa4344 FUN_145aa4344 body=315 status=ok
// SIG undefined FUN_145aa4344(void)

undefined8 *
FUN_145aa4344(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  cVar3 = '\0';
  if ((param_3[1].LockCount != 0) && (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    if ((param_3[1].LockCount == 0) ||
       (p_Var2 = param_3[1].DebugInfo, p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa448c FUN_145aa448c body=211 status=ok
// SIG undefined FUN_145aa448c(void)

LPCRITICAL_SECTION
FUN_145aa448c(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 *param_3)

{
  DWORD DVar1;
  undefined8 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  _LIST_ENTRY *p_Var5;
  
  DVar1 = *(DWORD *)(param_3 + 1);
  uVar2 = *param_3;
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var3 = param_1[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_149e1dc70;
  LOCK();
  UNLOCK();
  p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar4 = DAT_14c758608 + 1;
  if (p_Var5 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var5 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  (p_Var3->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var3 = &PTR_FUN_14b438380;
  (p_Var3->ProcessLocksList).Blink = param_2;
  p_Var3->EntryCount = (int)uVar2;
  p_Var3->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var3->Flags = DVar1;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 145aa4560 FUN_145aa4560 body=215 status=ok
// SIG undefined FUN_145aa4560(void)

undefined8
FUN_145aa4560(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_4 + 4) = DAT_14c846508;
  uVar3 = DAT_14c846500._4_4_;
  uVar2 = (undefined4)DAT_14c846500;
  uVar1 = DAT_14c8464f8._4_4_;
  *param_4 = (undefined4)DAT_14c8464f8;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  local_58 = DAT_14cbd40a8;
  local_60 = DAT_14cbd40a0;
  FUN_1448075d0(local_50);
  cVar4 = FUN_145aa4638(param_1,local_50,param_2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
LAB_145aa4634:
    uVar6 = 0;
  }
  else {
    lVar5 = param_2[2];
    if (lVar5 == 0) {
      local_50[0] = *param_2;
      lVar5 = FUN_14050aea0();
      param_2[2] = lVar5;
      if (lVar5 == 0) goto LAB_145aa4634;
    }
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar5 + 0x78);
    uVar1 = *(undefined4 *)(lVar5 + 0x6c);
    uVar2 = *(undefined4 *)(lVar5 + 0x70);
    uVar3 = *(undefined4 *)(lVar5 + 0x74);
    *param_3 = *(undefined4 *)(lVar5 + 0x68);
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
    uVar6 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa4638 FUN_145aa4638 body=231 status=ok
// SIG undefined FUN_145aa4638(void)

ulonglong FUN_145aa4638(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_14479d2ce(param_1 + 8);
  FUN_140fda471(&local_48,uVar3);
  FUN_140e3418c(&local_48,&local_30,1);
  local_48 = 0;
  uStack_40 = 0;
  FUN_141450c9a(param_2,local_30,&local_48);
  if (((int)uStack_40 == 0) ||
     (lVar1 = *(longlong *)(local_48 + (longlong)((int)uStack_40 + -1) * 8), lVar1 == 0)) {
    uVar5 = 0;
  }
  else {
    puVar2 = *(undefined4 **)(lVar1 + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = puVar2;
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    FUN_1447325ac(puVar4,&local_50,1);
    if (*param_3 != local_50) {
      param_3[2] = 0;
    }
    *param_3 = local_50;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa4720 FUN_145aa4720 body=165 status=ok
// SIG undefined FUN_145aa4720(void)

void FUN_145aa4720(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14148dcba();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14148dc69(param_1,param_2);
  return;
}



// FUNCTION 145aa47d4 FUN_145aa47d4 body=40 status=ok
// SIG undefined FUN_145aa47d4(void)

undefined8 FUN_145aa47d4(undefined8 param_1,int param_2)

{
  FUN_14148dda2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa4808 FUN_145aa4808 body=257 status=ok
// SIG undefined FUN_145aa4808(void)

longlong * FUN_145aa4808(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406ed334();
  *param_1 = (longlong)&PTR_FUN_14a4b2ec0;
  param_1[0x1f] = (longlong)&PTR_FUN_14a4b3230;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = DAT_14cab4a28;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  local_28 = 0x7b5ae74c;
  uStack_24 = 0xd2704c10;
  uStack_20 = 0xa9585798;
  uStack_1c = 0xb212a5a;
  iVar1 = FUN_1448a256a(param_1);
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = '\x02' - (iVar1 < 6);
  (**(code **)(*param_1 + 0x2c0))(param_1,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa490a FUN_145aa490a body=432 status=ok
// SIG undefined FUN_145aa490a(void)

void FUN_145aa490a(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  byte local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = FUN_14479d2ce(param_1 + 8);
  if (((param_2 != (longlong *)0x0) && (lVar6 != 0)) && ((longlong)*(int *)(param_1 + 0x238) != 0))
  {
    lVar8 = *(longlong *)(param_1 + 0x230);
    lVar10 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      plVar7 = (longlong *)FUN_14479d2ce(lVar8 + 0x10);
      if (plVar7 == param_2) {
        if (lVar8 != 0) {
          FUN_145aa4abc(param_1,param_2);
          bVar9 = *(byte *)(lVar8 + 0x90);
          if (bVar9 == 0) {
            bVar5 = (**(code **)(*param_2 + 0x6c8))(param_2);
            bVar5 = bVar5 ^ 1;
            bVar9 = *(byte *)(lVar8 + 0x90);
          }
          else {
            bVar5 = 0;
          }
          *(byte *)(lVar8 + 0x8b) = bVar5;
          *(undefined1 *)(lVar8 + 0x8c) = 0;
          *(float *)(lVar8 + 0x80) = (float)*(double *)(lVar6 + 0x6d0);
          uVar1 = *(undefined1 *)(lVar8 + 0x8e);
          uVar2 = *(undefined1 *)(lVar8 + 0x91);
          uVar3 = *(undefined1 *)(lVar8 + 0x88);
          cVar4 = *(char *)(lVar8 + 0x8d);
          local_58 = *(undefined8 *)(lVar8 + 0x58);
          local_68 = *(undefined4 *)(lVar8 + 0x48);
          uStack_64 = *(undefined4 *)(lVar8 + 0x4c);
          uStack_60 = *(undefined4 *)(lVar8 + 0x50);
          uStack_5c = *(undefined4 *)(lVar8 + 0x54);
          if ((bVar9 & 1) == 0) {
            FUN_145a12700(param_1,lVar8);
          }
          if (cVar4 != '\0') {
            FUN_14148e104(param_1,param_2,param_1 + 0xd0);
          }
          local_80 = 0;
          local_78 = 0x6000;
          local_70 = 0;
          local_88 = 0;
          local_98 = bVar9 & 1;
          local_a8 = 0;
          local_a0 = uVar1;
          local_90 = uVar2;
          FUN_14148df3c(param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff,
                        &local_80,&local_68);
        }
        break;
      }
      lVar8 = lVar8 + 0x98;
      lVar10 = lVar10 + -0x98;
    } while (lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145aa4abc FUN_145aa4abc body=170 status=ok
// SIG undefined FUN_145aa4abc(void)

void FUN_145aa4abc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1447210f0(param_2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 != 0)) {
      lVar3 = FUN_1403ca142();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        cVar1 = FUN_144a87d0a(lVar2);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x290);
          if (plVar4 != (longlong *)0x0) {
            cVar1 = (**(code **)(*plVar4 + 0x668))(plVar4,param_2);
            if (cVar1 != '\0') {
              (**(code **)(*plVar4 + 0x688))(plVar4,param_2);
            }
          }
          FUN_145aa4b66(param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145aa4b66 FUN_145aa4b66 body=105 status=ok
// SIG undefined FUN_145aa4b66(void)

void FUN_145aa4b66(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  FUN_1410ef130(param_1 + 0xe50);
  plVar1 = (longlong *)FUN_14148de5c(param_1);
  if (*plVar1 != 0) {
    lVar4 = *plVar1 + 8;
    cVar3 = FUN_144729dda(lVar4);
    if (cVar3 != '\0') {
      uVar2 = FUN_14479d2ce(lVar4);
      FUN_148cf2030(uVar2,param_1);
    }
  }
  if (*(longlong *)(param_1 + 0xf40) != 0) {
    FUN_145aa4bd0();
    return;
  }
  return;
}



// FUNCTION 145aa4bd0 FUN_145aa4bd0 body=154 status=ok
// SIG undefined FUN_145aa4bd0(void)

void FUN_145aa4bd0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14148dedc(param_1 + 0x71a8);
  lVar3 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar3 == 0) goto LAB_145aa4c0a;
  if (*(longlong *)(lVar3 + 0x3170) == 0) {
    if (*(char *)(lVar3 + 0x34b0) == '\x01') {
      lVar3 = lVar3 + 0x3210;
      goto LAB_145aa4c39;
    }
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
LAB_145aa4c39:
    lVar2 = FUN_140153468(lVar3);
    lVar3 = *(longlong *)(&DAT_00006850 + param_1);
    if (lVar2 != 0) {
      thunk_FUN_141105774(lVar3,lVar2,3);
      lVar3 = *(longlong *)(&DAT_00006850 + param_1);
    }
  }
  FUN_14148deac(lVar3);
LAB_145aa4c0a:
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x10e0) + 0x50))(param_1 + 0x10e0);
  FUN_14067171c(uVar1);
  FUN_145746018(param_1);
  return;
}



// FUNCTION 145aa4c6a FUN_145aa4c6a body=120 status=ok
// SIG undefined FUN_145aa4c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aa4c6a(void)

{
  int *piVar1;
  longlong *plVar2;
  
  _DAT_14cb90ef0 = 0;
  if (DAT_14cb90ee8 != 0) {
    FUN_1400020a8();
  }
  FUN_145aa4ce2(&DAT_14cb90ea8);
  _DAT_14cb90ea0 = 0;
  if (DAT_14cb90e98 != 0) {
    FUN_1400020a8();
  }
  FUN_145aa4ce2(&DAT_14cb90e58);
  plVar2 = DAT_14cb90e50;
  if (DAT_14cb90e50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cb90e50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145aa4cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145aa4ce2 FUN_145aa4ce2 body=55 status=ok
// SIG undefined FUN_145aa4ce2(void)

void FUN_145aa4ce2(longlong *param_1)

{
  FUN_145aa4d1a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa4d1a FUN_145aa4d1a body=123 status=ok
// SIG undefined FUN_145aa4d1a(void)

void FUN_145aa4d1a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14095c99c(param_1,param_2);
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



// FUNCTION 145aa4da2 FUN_145aa4da2 body=631 status=ok
// SIG undefined FUN_145aa4da2(void)

undefined8 * FUN_145aa4da2(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b7f07b0;
  param_1[0x72] = &PTR_FUN_14b7f0de8;
  param_1[0x73] = &PTR_FUN_14b7f0e00;
  param_1[0x74] = &PTR_FUN_14b7f0e50;
  param_1[0x75] = &PTR_FUN_14b7f0e70;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x7109;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x3002;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0x200000000;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  FUN_1405c5fa2();
  param_1[0x8f] = &DAT_14cb769e8;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x8e] = &PTR_FUN_14b0394b0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  FUN_140c4ac3c(param_1 + 0x97);
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_1446ddc76(&local_38,&DAT_149e3cc95,1);
  uVar1 = FUN_144a799b0();
  local_50 = 1;
  local_58 = 1;
  lVar2 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x39] = lVar2;
    if (lVar2 == 0) goto LAB_145aa4fce;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x39] = lVar2;
  }
  FUN_1446ddc76(&local_40,&DAT_14b351f20,1);
  uVar1 = FUN_140f974a4();
  local_50 = 1;
  local_58 = 1;
  lVar2 = FUN_14048696c(param_1,local_40,uVar1,uVar1);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x78] = lVar2;
    if (lVar2 == 0) goto LAB_145aa4fce;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x78] = lVar2;
  }
  FUN_140486fc4(lVar2,param_1[0x39],0);
LAB_145aa4fce:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa501a FUN_145aa501a body=129 status=ok
// SIG undefined FUN_145aa501a(void)

void FUN_145aa501a(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a787a6(local_38);
  local_28 = *param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadac8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145aa509c FUN_145aa509c body=40 status=ok
// SIG undefined FUN_145aa509c(void)

undefined8 FUN_145aa509c(undefined8 param_1,int param_2)

{
  FUN_145aa50c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa50c4 FUN_145aa50c4 body=964 status=ok
// SIG undefined FUN_145aa50c4(void)

void FUN_145aa50c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a826a60;
  param_1[5] = &PTR_FUN_14a827070;
  param_1[6] = &PTR_LAB_14a8270b0;
  param_1[0x55] = &PTR_FUN_14a827100;
  param_1[0x56] = &PTR_FUN_14a8271c0;
  param_1[0x57] = &PTR_FUN_14a8271e8;
  param_1[0x58] = &PTR_FUN_14a8271f8;
  param_1[0x59] = &PTR_FUN_14a827208;
  FUN_145aa5580(param_1[400],*(undefined4 *)(param_1 + 0x191));
  if (param_1[400] != 0) {
    FUN_1400020a8();
  }
  FUN_1458793b1(param_1[0x18e],*(undefined4 *)(param_1 + 399));
  if (param_1[0x18e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x18c];
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
  *(undefined4 *)(param_1 + 0x18a) = 0;
  if (param_1[0x189] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa54b4(param_1 + 0x181);
  FUN_145aa54e9(param_1[0x171],*(undefined4 *)(param_1 + 0x172));
  if (param_1[0x171] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16c],*(undefined4 *)(param_1 + 0x16d));
  if (param_1[0x16c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x167],*(undefined4 *)(param_1 + 0x168));
  if (param_1[0x167] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x165] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x162],*(undefined4 *)(param_1 + 0x163));
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x160] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x15d],*(undefined4 *)(param_1 + 0x15e));
  if (param_1[0x15d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x158],*(undefined4 *)(param_1 + 0x159));
  if (param_1[0x158] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x156] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x153],*(undefined4 *)(param_1 + 0x154));
  if (param_1[0x153] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x151] != 0) {
    FUN_1400020a8();
  }
  FUN_145821914(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x121) = 0;
  if (param_1[0x120] != 0) {
    FUN_1400020a8();
  }
  FUN_14587937a(param_1 + 0x118);
  FUN_1458219bc(param_1 + 0x9d);
  FUN_145aa5488(param_1[0x8f],*(undefined4 *)(param_1 + 0x90));
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_145aa5488(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_14148ef68(param_1 + 0x56);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145aa5488 FUN_145aa5488 body=43 status=ok
// SIG undefined FUN_145aa5488(void)

void FUN_145aa5488(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147046490(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 145aa54b4 FUN_145aa54b4 body=53 status=ok
// SIG undefined FUN_145aa54b4(void)

void FUN_145aa54b4(longlong *param_1)

{
  FUN_145aa5526();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145aa54e9 FUN_145aa54e9 body=60 status=ok
// SIG undefined FUN_145aa54e9(void)

void FUN_145aa54e9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_1477c9821(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aa5526 FUN_145aa5526 body=90 status=ok
// SIG undefined FUN_145aa5526(void)

void FUN_145aa5526(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145aa5580 FUN_145aa5580 body=92 status=ok
// SIG undefined FUN_145aa5580(void)

void FUN_145aa5580(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aa55dc FUN_145aa55dc body=45 status=ok
// SIG undefined FUN_145aa55dc(void)

void FUN_145aa55dc(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145aa5609 FUN_145aa5609 body=60 status=ok
// SIG undefined FUN_145aa5609(void)

void FUN_145aa5609(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145aa5646 FUN_145aa5646 body=159 status=ok
// SIG undefined FUN_145aa5646(void)

void FUN_145aa5646(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar5 = (longlong *)param_1[2];
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    iVar4 = (int)plVar5[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_145aa5699;
      }
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar6 = iVar3 == iVar4;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar6);
    if (param_1[1] != 0) {
      FUN_1477e6d14(param_1[1],*param_1);
    }
LAB_145aa5699:
    plVar2 = (longlong *)param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (iVar3 != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000145aa56e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145aa56e6 FUN_145aa56e6 body=64 status=ok
// SIG undefined FUN_145aa56e6(void)

void FUN_145aa56e6(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  LOCK();
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  UNLOCK();
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    puVar3 = (undefined8 *)puVar1[1];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    FUN_1400020a8(puVar1);
    puVar1 = puVar2;
  }
  return;
}



// FUNCTION 145aa5736 FUN_145aa5736 body=44 status=ok
// SIG undefined FUN_145aa5736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aa5736(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a204c = _DAT_14c9a204c + -1;
  *param_1 = DAT_14c9a2040;
  DAT_14c9a2040 = param_1;
  return;
}



// FUNCTION 145aa5772 FUN_145aa5772 body=44 status=ok
// SIG undefined FUN_145aa5772(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145aa5772(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a7bc4 = _DAT_14c9a7bc4 + -1;
  *param_1 = DAT_14c9a7bb8;
  DAT_14c9a7bb8 = param_1;
  return;
}



// FUNCTION 145aa57aa FUN_145aa57aa body=49 status=ok
// SIG undefined FUN_145aa57aa(void)

void FUN_145aa57aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_14a3cb490;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



// FUNCTION 145aa57e6 FUN_145aa57e6 body=49 status=ok
// SIG undefined FUN_145aa57e6(void)

undefined8 * FUN_145aa57e6(undefined8 *param_1)

{
  FUN_1406078d6();
  *param_1 = &PTR_FUN_14a46dc60;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 145aa5822 FUN_145aa5822 body=109 status=ok
// SIG undefined FUN_145aa5822(void)

undefined8 * FUN_145aa5822(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a51ba90;
  param_1[5] = &PTR_FUN_14a51bdb0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x1010103;
  return param_1;
}



// FUNCTION 145aa589a FUN_145aa589a body=49 status=ok
// SIG undefined FUN_145aa589a(void)

undefined8 * FUN_145aa589a(undefined8 *param_1)

{
  FUN_140fd1f48();
  *param_1 = &PTR_FUN_14acc0800;
  memset(param_1 + 5,0,0xf8);
  return param_1;
}



// FUNCTION 145aa58cc FUN_145aa58cc body=40 status=ok
// SIG undefined FUN_145aa58cc(void)

undefined8 FUN_145aa58cc(undefined8 param_1,int param_2)

{
  FUN_145aa58f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145aa58f4 FUN_145aa58f4 body=100 status=ok
// SIG undefined FUN_145aa58f4(void)

void FUN_145aa58f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad6bcc0;
  FUN_145aa5958(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145964bf6(param_1);
  return;
}



// FUNCTION 145aa5958 FUN_145aa5958 body=40 status=ok
// SIG undefined FUN_145aa5958(void)

void FUN_145aa5958(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148118fa0(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 145aa5980 FUN_145aa5980 body=40 status=ok
// SIG undefined FUN_145aa5980(void)

undefined8 FUN_145aa5980(undefined8 param_1,int param_2)

{
  FUN_145aa59a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


