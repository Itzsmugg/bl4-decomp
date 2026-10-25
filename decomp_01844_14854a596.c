// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14854a596 FUN_14854a596 body=303 status=ok
// SIG undefined FUN_14854a596(void)

undefined4 * FUN_14854a596(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14854a6c6(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_14854a7ac(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14854a8da(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854a6c6 FUN_14854a6c6 body=229 status=ok
// SIG undefined FUN_14854a6c6(void)

int * FUN_14854a6c6(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14854a7ac FUN_14854a7ac body=187 status=ok
// SIG undefined FUN_14854a7ac(void)

undefined8 FUN_14854a7ac(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_14854a868(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14854a868 FUN_14854a868 body=114 status=ok
// SIG undefined FUN_14854a868(void)

void FUN_14854a868(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14854a8da FUN_14854a8da body=422 status=ok
// SIG undefined FUN_14854a8da(void)

void FUN_14854a8da(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854aa82 FUN_14854aa82 body=132 status=ok
// SIG undefined FUN_14854aa82(void)

void FUN_14854aa82(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14854ab06(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14854ab06 FUN_14854ab06 body=87 status=ok
// SIG undefined FUN_14854ab06(void)

void FUN_14854ab06(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14854a348();
  return;
}



// FUNCTION 14854ab5e FUN_14854ab5e body=79 status=ok
// SIG undefined FUN_14854ab5e(void)

void FUN_14854ab5e(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_14854abae();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14854abae FUN_14854abae body=90 status=ok
// SIG undefined FUN_14854abae(void)

void FUN_14854abae(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14854ac08();
  return;
}



// FUNCTION 14854ac08 FUN_14854ac08 body=78 status=ok
// SIG undefined FUN_14854ac08(void)

void FUN_14854ac08(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14854a868(param_1,param_2);
  return;
}



// FUNCTION 14854ac56 FUN_14854ac56 body=322 status=ok
// SIG undefined FUN_14854ac56(void)

void FUN_14854ac56(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
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



// FUNCTION 14854ad9a FUN_14854ad9a body=67 status=ok
// SIG undefined FUN_14854ad9a(void)

void FUN_14854ad9a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14021e33e(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14854af22(param_1);
    return;
  }
  FUN_14854adde(param_1);
  FUN_14021e33e(param_1,0);
  return;
}



// FUNCTION 14854adde FUN_14854adde body=322 status=ok
// SIG undefined FUN_14854adde(void)

void FUN_14854adde(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 14854af22 FUN_14854af22 body=458 status=ok
// SIG undefined FUN_14854af22(void)

void FUN_14854af22(longlong *param_1)

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
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar10);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854b0ed FUN_14854b0ed body=96 status=ok
// SIG undefined FUN_14854b0ed(void)

undefined8 * FUN_14854b0ed(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14af17c10;
  *(undefined1 *)(puVar1 + 2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 3),4000);
  puVar1[8] = 0;
  puVar1[9] = 0;
  return puVar1;
}



// FUNCTION 14854b158 FUN_14854b158 body=29 status=ok
// SIG undefined FUN_14854b158(void)

undefined8 FUN_14854b158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854b176 FUN_14854b176 body=53 status=ok
// SIG undefined FUN_14854b176(void)

void FUN_14854b176(longlong param_1)

{
  FUN_14854b1ab(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014854b1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 14854b1ab FUN_14854b1ab body=52 status=ok
// SIG undefined FUN_14854b1ab(void)

void FUN_14854b1ab(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14854b1e0 FUN_14854b1e0 body=327 status=ok
// SIG undefined FUN_14854b1e0(void)

undefined4 * FUN_14854b1e0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14854b328(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar6 = *(undefined8 *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  lVar8 = puVar1[1];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar6 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar4 = FUN_144a788f7();
  uVar9 = iVar4 + (int)((ulonglong)uVar6 >> 0x20);
  cVar3 = FUN_14854b40e(param_1,uVar9,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14854af22(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854b328 FUN_14854b328 body=229 status=ok
// SIG undefined FUN_14854b328(void)

int * FUN_14854b328(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14854b40e FUN_14854b40e body=191 status=ok
// SIG undefined FUN_14854b40e(void)

undefined8 FUN_14854b40e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14854b4ce(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14854b4ce FUN_14854b4ce body=114 status=ok
// SIG undefined FUN_14854b4ce(void)

void FUN_14854b4ce(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14854b540 FUN_14854b540 body=9 status=ok
// SIG undefined FUN_14854b540(void)

void FUN_14854b540(longlong param_1)

{
  FUN_145ab9fdc(param_1 + 0x10);
  return;
}



// FUNCTION 14854b54a FUN_14854b54a body=29 status=ok
// SIG undefined FUN_14854b54a(void)

undefined8 FUN_14854b54a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854b568 FUN_14854b568 body=29 status=ok
// SIG undefined FUN_14854b568(void)

undefined8 FUN_14854b568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854b598 FUN_14854b598 body=249 status=ok
// SIG undefined FUN_14854b598(void)

void FUN_14854b598(longlong param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1447a8aa0(param_3,0);
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if (0 < *(int *)(lVar4 + 0x10 + (longlong)param_2 * 0x40)) {
    lVar4 = lVar4 + (longlong)param_2 * 0x40;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(lVar4 + 8) + lVar7 * 4);
      lVar5 = *(longlong *)
               (*(longlong *)(**(longlong **)(param_1 + 8) + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      uVar6 = (ulonglong)(uVar2 & 0x1ff);
      local_38 = *(undefined8 *)(lVar5 + 0x10 + uVar6 * 0x18);
      puVar1 = (undefined4 *)(lVar5 + uVar6 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_3,iVar3);
      }
      lVar5 = *param_3;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) = local_38;
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar4 + 0x10));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854b6da FUN_14854b6da body=422 status=ok
// SIG undefined FUN_14854b6da(void)

void FUN_14854b6da(longlong param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_2 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_a0 = param_1;
  uStack_60 = local_b0;
  if (*(int *)(param_2 + 0x28) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar3 = *(int *)(param_2 + 0x28);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_a8 = param_2;
  local_90 = param_2;
  if ((iStack_54 != iVar3) || (uStack_60 != local_b0)) {
    local_b4 = iVar3;
    do {
      lVar5 = (longlong)*(int *)(*(longlong *)(local_a0 + 8) + 0x10);
      if (lVar5 != 0) {
        lVar7 = *(longlong *)(*(longlong *)(local_a0 + 8) + 8);
        local_98 = lVar5 * 0x40 + lVar7;
        do {
          iVar3 = *(int *)(lVar7 + 0x20);
          if ((longlong)iVar3 != 0) {
            lVar5 = *(longlong *)(lVar7 + 0x18);
            lVar6 = 0;
            do {
              local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + lVar6));
              pcVar1 = (code *)*param_3;
              plVar4 = (longlong *)param_3[2];
              if ((longlong *)param_3[2] == (longlong *)0x0) {
                plVar4 = param_3 + 4;
              }
              uVar2 = (**(code **)(*plVar4 + 8))();
              (*pcVar1)(uVar2,&local_68);
              lVar6 = lVar6 + 4;
            } while ((longlong)iVar3 * 4 != lVar6);
          }
          lVar7 = lVar7 + 0x40;
        } while (lVar7 != local_98);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != local_b4) || (CONCAT44(uStack_7c,uStack_80) != local_b0)) ||
            (local_90 != local_a8));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854b882 FUN_14854b882 body=38 status=ok
// SIG undefined FUN_14854b882(void)

undefined8 FUN_14854b882(undefined8 param_1,int param_2)

{
  FUN_145cbfe42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854b8a8 FUN_14854b8a8 body=197 status=ok
// SIG undefined FUN_14854b8a8(void)

void FUN_14854b8a8(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x22] != 0) {
    plVar1 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0xc);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 1);
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014854b962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14854b96e FUN_14854b96e body=498 status=ok
// SIG undefined FUN_14854b96e(void)

void FUN_14854b96e(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_3 + 2;
  local_80 = param_3;
  uStack_50 = plVar1;
  if (param_4 == '\0') {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_3[5] == 0) {
      iVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar2 = (int)param_3[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar2) || (uStack_50 != plVar1)) {
      do {
        FUN_1484ada62(param_1,param_2,*(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc));
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_3 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar2));
    }
  }
  else {
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    iStack_44 = 0;
    uStack_40 = 0;
    if ((int)param_3[5] == 0) {
      iVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar2 = (int)param_3[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    iStack_64 = iStack_44;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    if ((iStack_44 != iVar2) || (uStack_50 != plVar1)) {
      do {
        FUN_1484ad6de(param_1,param_2,*(undefined4 *)(*local_80 + (longlong)iStack_64 * 0xc));
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (local_80 != param_3 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar2));
    }
  }
  *(undefined4 *)(param_3 + 9) = 0;
  if (param_3[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_3);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854bb62 FUN_14854bb62 body=132 status=ok
// SIG undefined FUN_14854bb62(void)

void FUN_14854bb62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854bbe8 FUN_14854bbe8 body=68 status=ok
// SIG undefined FUN_14854bbe8(void)

void FUN_14854bbe8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145cedc08(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14854bc2e(param_1,param_2);
  return;
}



// FUNCTION 14854bc2e FUN_14854bc2e body=95 status=ok
// SIG undefined FUN_14854bc2e(void)

void FUN_14854bc2e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14854bc8e FUN_14854bc8e body=322 status=ok
// SIG undefined FUN_14854bc8e(void)

void FUN_14854bc8e(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 14854bdd2 FUN_14854bdd2 body=311 status=ok
// SIG undefined FUN_14854bdd2(void)

void FUN_14854bdd2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar3 = *(longlong **)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28);
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
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854bf0a FUN_14854bf0a body=160 status=ok
// SIG undefined FUN_14854bf0a(void)

void FUN_14854bf0a(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 == 4) || (iVar3 == 2)) {
    if (*(int *)(param_1 + 8) == 1) goto LAB_14854bf3f;
  }
  else if ((iVar3 == 1) && ((*(int *)(param_1 + 8) == 2 || (*(int *)(param_1 + 8) == 4)))) {
LAB_14854bf3f:
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_148528a66(param_2);
      bVar1 = true;
      goto LAB_14854bf47;
    }
  }
  bVar1 = false;
LAB_14854bf47:
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x10) != iVar3) {
    bVar2 = true;
    if (iVar3 == 0) {
      FUN_148528a66(param_2);
      iVar3 = *(int *)(param_1 + 0x14);
      bVar2 = bVar1;
    }
    bVar1 = bVar2;
    FUN_148527ec8(param_2,iVar3);
  }
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
    FUN_148527b3c(param_2);
  }
  if (bVar1) {
    FUN_1485281a6(param_2);
    return;
  }
  return;
}



// FUNCTION 14854bfaa FUN_14854bfaa body=160 status=ok
// SIG undefined FUN_14854bfaa(void)

void FUN_14854bfaa(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 == 4) || (iVar3 == 2)) {
    if (*(int *)(param_1 + 8) == 1) goto LAB_14854bfdf;
  }
  else if ((iVar3 == 1) && ((*(int *)(param_1 + 8) == 2 || (*(int *)(param_1 + 8) == 4)))) {
LAB_14854bfdf:
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_148528a66(param_2);
      bVar1 = true;
      goto LAB_14854bfe7;
    }
  }
  bVar1 = false;
LAB_14854bfe7:
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != *(int *)(param_1 + 0x14)) {
    bVar2 = true;
    if (iVar3 == 0) {
      FUN_148528a66(param_2);
      iVar3 = *(int *)(param_1 + 0x10);
      bVar2 = bVar1;
    }
    bVar1 = bVar2;
    FUN_148527ec8(param_2,iVar3);
  }
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0xc)) {
    FUN_148527b3c(param_2);
  }
  if (bVar1) {
    FUN_1485281a6(param_2);
    return;
  }
  return;
}



// FUNCTION 14854c04a FUN_14854c04a body=80 status=ok
// SIG undefined FUN_14854c04a(void)

undefined8 FUN_14854c04a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145b11fbc();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014854c093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 14854c09a FUN_14854c09a body=32 status=ok
// SIG undefined FUN_14854c09a(void)

undefined8 FUN_14854c09a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FGeometrySelectionManager_SelectionTypeChange");
  return param_2;
}



// FUNCTION 14854c0ba FUN_14854c0ba body=29 status=ok
// SIG undefined FUN_14854c0ba(void)

undefined8 FUN_14854c0ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854c0d8 FUN_14854c0d8 body=143 status=ok
// SIG undefined FUN_14854c0d8(void)

void FUN_14854c0d8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14af17df0;
  param_1[1] = &PTR_FUN_14af17e40;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = &DAT_100000004;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = &DAT_100000004;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  return;
}



// FUNCTION 14854c168 FUN_14854c168 body=38 status=ok
// SIG undefined FUN_14854c168(void)

undefined8 FUN_14854c168(undefined8 param_1,int param_2)

{
  FUN_14854c1c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854c18e FUN_14854c18e body=45 status=ok
// SIG undefined FUN_14854c18e(void)

longlong FUN_14854c18e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14854c1c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854c1c8 FUN_14854c1c8 body=106 status=ok
// SIG undefined FUN_14854c1c8(void)

void FUN_14854c1c8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14af17df0;
  param_1[1] = &PTR_FUN_14af17e40;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 5);
  return;
}



// FUNCTION 14854c232 FUN_14854c232 body=114 status=ok
// SIG undefined FUN_14854c232(void)

void FUN_14854c232(longlong *param_1,int param_2)

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



// FUNCTION 14854c2a4 FUN_14854c2a4 body=132 status=ok
// SIG undefined FUN_14854c2a4(void)

void FUN_14854c2a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854c32a FUN_14854c32a body=193 status=ok
// SIG undefined FUN_14854c32a(void)

void FUN_14854c32a(longlong *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int *piVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[3];
    uVar3 = param_2[2];
    uVar5 = FUN_144a78877(*param_2,param_2[1]);
    iVar6 = FUN_144a78877(uVar5,uVar2 ^ uVar3);
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      piVar9 = (int *)((longlong)plVar7 + uVar8 * 4);
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 0x28);
        if ((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) {
          cVar4 = FUN_1401246e4(piVar1 + 2,param_2 + 2);
          if (cVar4 != '\0') {
            FUN_14854c3ec(param_1,*piVar9);
            return;
          }
        }
        iVar6 = piVar1[8];
        piVar9 = piVar1 + 8;
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 14854c3ec FUN_14854c3ec body=87 status=ok
// SIG undefined FUN_14854c3ec(void)

void FUN_14854c3ec(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_14854c444();
  return;
}



// FUNCTION 14854c444 FUN_14854c444 body=78 status=ok
// SIG undefined FUN_14854c444(void)

void FUN_14854c444(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x28);
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
  FUN_14854c232(param_1,param_2);
  return;
}



// FUNCTION 14854c492 FUN_14854c492 body=38 status=ok
// SIG undefined FUN_14854c492(void)

undefined8 FUN_14854c492(undefined8 param_1,int param_2)

{
  FUN_14854c4f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854c4b8 FUN_14854c4b8 body=45 status=ok
// SIG undefined FUN_14854c4b8(void)

longlong FUN_14854c4b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14854c4f2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854c4f2 FUN_14854c4f2 body=69 status=ok
// SIG undefined FUN_14854c4f2(void)

void FUN_14854c4f2(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14af17e60;
  param_1[1] = &PTR_FUN_14af17eb0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14854c538 FUN_14854c538 body=132 status=ok
// SIG undefined FUN_14854c538(void)

void FUN_14854c538(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854c5be FUN_14854c5be body=48 status=ok
// SIG undefined FUN_14854c5be(void)

void FUN_14854c5be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14854c5ee FUN_14854c5ee body=48 status=ok
// SIG undefined FUN_14854c5ee(void)

void FUN_14854c5ee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14854c61e FUN_14854c61e body=22 status=ok
// SIG undefined FUN_14854c61e(void)

void FUN_14854c61e(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x30);
    return;
  }
  return;
}



// FUNCTION 14854c634 FUN_14854c634 body=147 status=ok
// SIG undefined FUN_14854c634(void)

void FUN_14854c634(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854c6c8 FUN_14854c6c8 body=101 status=ok
// SIG undefined FUN_14854c6c8(void)

void FUN_14854c6c8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_145cedaf8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14854c72e FUN_14854c72e body=62 status=ok
// SIG undefined FUN_14854c72e(void)

void FUN_14854c72e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14854c76c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14854c76c FUN_14854c76c body=112 status=ok
// SIG undefined FUN_14854c76c(void)

ulonglong FUN_14854c76c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14854c7a6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14854c7a6:
  return param_2 & 0xffffffff;
}



// FUNCTION 14854c7dc FUN_14854c7dc body=146 status=ok
// SIG undefined FUN_14854c7dc(void)

void FUN_14854c7dc(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14854c870 FUN_14854c870 body=147 status=ok
// SIG undefined FUN_14854c870(void)

void FUN_14854c870(longlong param_1,int param_2)

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



// FUNCTION 14854c904 FUN_14854c904 body=29 status=ok
// SIG undefined FUN_14854c904(void)

undefined8 FUN_14854c904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854c9b0 FUN_14854c9b0 body=156 status=ok
// SIG undefined FUN_14854c9b0(void)

void FUN_14854c9b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_68[0] = *param_3;
  local_58[0] = (longlong *)0x0;
  if (local_68[0] != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_58);
  }
  FUN_14854cac2(uVar1,param_2,local_68);
  if (local_68[0] != 0) {
    plVar2 = local_58[0];
    if (local_58[0] == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854ca4e FUN_14854ca4e body=26 status=ok
// SIG undefined FUN_14854ca4e(void)

undefined8 FUN_14854ca4e(longlong param_1,undefined8 param_2)

{
  FUN_1482ad394(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 14854ca68 FUN_14854ca68 body=88 status=ok
// SIG undefined FUN_14854ca68(void)

undefined8 FUN_14854ca68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_4;
  local_18 = param_4[1];
  FUN_1482ae42e(*(undefined8 *)(param_1 + 8),param_2,param_3,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854cac2 FUN_14854cac2 body=741 status=ok
// SIG undefined FUN_14854cac2(void)

void FUN_14854cac2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_148 [44];
  int local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined8 *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [64];
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_78 = 0;
  uStack_70 = 0;
  local_118 = param_2 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_110 = param_1;
  uStack_60 = local_118;
  if (*(int *)(param_2 + 0x28) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = *(int *)(param_2 + 0x28);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = param_2;
  if ((iStack_54 != iVar9) || (uStack_60 != local_118)) {
    local_f8 = param_3 + 4;
    local_11c = iVar9;
    local_108 = param_2;
    do {
      lVar5 = FUN_1482abc36(local_110);
      if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x20) != 0)) {
        puVar8 = *(undefined8 **)(lVar5 + 0x18);
        local_100 = puVar8 + (longlong)*(int *)(lVar5 + 0x20) * 5;
        do {
          if ((longlong)*(int *)(puVar8 + 1) != 0) {
            piVar10 = (int *)*puVar8;
            piVar1 = piVar10 + *(int *)(puVar8 + 1);
            do {
              iVar9 = *piVar10;
              if ((longlong)(int)uStack_70 != 0) {
                lVar5 = 0;
                do {
                  if (*(int *)(local_78 + lVar5) == iVar9) goto LAB_14854cd04;
                  lVar5 = lVar5 + 4;
                } while ((longlong)(int)uStack_70 * 4 != lVar5);
              }
              puVar2 = (undefined8 *)(*(longlong *)(local_110 + 0x70) + (longlong)iVar9 * 0x50);
              local_f0 = *puVar2;
              FUN_146c7f210(local_e8,puVar2 + 1);
              local_a8 = puVar2[9];
              local_68 = CONCAT44(local_68._4_4_,iVar9);
              pcVar3 = (code *)*param_3;
              plVar7 = (longlong *)param_3[2];
              if ((longlong *)param_3[2] == (longlong *)0x0) {
                plVar7 = local_f8;
              }
              uVar6 = (**(code **)(*plVar7 + 8))();
              (*pcVar3)(uVar6);
              FUN_146c7d752(local_e8);
              lVar5 = (longlong)(int)uStack_70;
              uVar4 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
              if (uStack_70._4_4_ < uVar4) {
                FUN_1446f48e2(&local_78);
              }
              *(int *)(local_78 + lVar5 * 4) = iVar9;
LAB_14854cd04:
              piVar10 = piVar10 + 1;
            } while (piVar10 != piVar1);
          }
          puVar8 = puVar8 + 5;
        } while (puVar8 != local_100);
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != local_108 ||
             (CONCAT44(uStack_8c,uStack_90) != local_118 || iStack_84 != local_11c));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854cda8 FUN_14854cda8 body=29 status=ok
// SIG undefined FUN_14854cda8(void)

undefined8 FUN_14854cda8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854cde0 FUN_14854cde0 body=29 status=ok
// SIG undefined FUN_14854cde0(void)

bool FUN_14854cde0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14854cdfe FUN_14854cdfe body=26 status=ok
// SIG undefined FUN_14854cdfe(void)

bool FUN_14854cdfe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14854ce18 FUN_14854ce18 body=24 status=ok
// SIG undefined FUN_14854ce18(void)

bool FUN_14854ce18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14854ce30 FUN_14854ce30 body=101 status=ok
// SIG undefined FUN_14854ce30(void)

void FUN_14854ce30(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af17f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14854ce96 FUN_14854ce96 body=101 status=ok
// SIG undefined FUN_14854ce96(void)

void FUN_14854ce96(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14af17f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14854cefc FUN_14854cefc body=134 status=ok
// SIG undefined FUN_14854cefc(void)

void FUN_14854cefc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af17f60;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014854cf73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14854cf82 FUN_14854cf82 body=39 status=ok
// SIG undefined FUN_14854cf82(void)

void FUN_14854cf82(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014854cfa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14854cfaa FUN_14854cfaa body=146 status=ok
// SIG undefined FUN_14854cfaa(void)

bool FUN_14854cfaa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854d03e FUN_14854d03e body=29 status=ok
// SIG undefined FUN_14854d03e(void)

undefined8 FUN_14854d03e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854d076 FUN_14854d076 body=29 status=ok
// SIG undefined FUN_14854d076(void)

bool FUN_14854d076(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14854d094 FUN_14854d094 body=26 status=ok
// SIG undefined FUN_14854d094(void)

bool FUN_14854d094(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14854d0ae FUN_14854d0ae body=24 status=ok
// SIG undefined FUN_14854d0ae(void)

bool FUN_14854d0ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14854d0c6 FUN_14854d0c6 body=101 status=ok
// SIG undefined FUN_14854d0c6(void)

void FUN_14854d0c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af17fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14854d12c FUN_14854d12c body=101 status=ok
// SIG undefined FUN_14854d12c(void)

void FUN_14854d12c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af17fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14854d192 FUN_14854d192 body=134 status=ok
// SIG undefined FUN_14854d192(void)

void FUN_14854d192(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af17fd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014854d209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14854d218 FUN_14854d218 body=44 status=ok
// SIG undefined FUN_14854d218(void)

void FUN_14854d218(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014854d241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14854d244 FUN_14854d244 body=156 status=ok
// SIG undefined FUN_14854d244(void)

bool FUN_14854d244(longlong param_1,undefined8 param_2)

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



// FUNCTION 14854d2e2 FUN_14854d2e2 body=29 status=ok
// SIG undefined FUN_14854d2e2(void)

undefined8 FUN_14854d2e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854d31a FUN_14854d31a body=29 status=ok
// SIG undefined FUN_14854d31a(void)

bool FUN_14854d31a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14854d338 FUN_14854d338 body=26 status=ok
// SIG undefined FUN_14854d338(void)

bool FUN_14854d338(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14854d352 FUN_14854d352 body=24 status=ok
// SIG undefined FUN_14854d352(void)

bool FUN_14854d352(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14854d36a FUN_14854d36a body=101 status=ok
// SIG undefined FUN_14854d36a(void)

void FUN_14854d36a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af18040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14854d3d0 FUN_14854d3d0 body=101 status=ok
// SIG undefined FUN_14854d3d0(void)

void FUN_14854d3d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af18040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14854d436 FUN_14854d436 body=134 status=ok
// SIG undefined FUN_14854d436(void)

void FUN_14854d436(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14af12ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af18040;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014854d4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14854d4bc FUN_14854d4bc body=52 status=ok
// SIG undefined FUN_14854d4bc(void)

void FUN_14854d4bc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014854d4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14854d4f0 FUN_14854d4f0 body=167 status=ok
// SIG undefined FUN_14854d4f0(void)

bool FUN_14854d4f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854d598 FUN_14854d598 body=64 status=ok
// SIG undefined FUN_14854d598(void)

undefined8 * FUN_14854d598(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14af18190;
  FUN_1456c3cc8(param_1 + 0x1f);
  FUN_1456c3cc8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14854d608 FUN_14854d608 body=13 status=ok
// SIG undefined FUN_14854d608(void)

undefined8 FUN_14854d608(undefined8 *param_1)

{
  (*(code *)*param_1)();
  return 0;
}



// FUNCTION 14854d634 FUN_14854d634 body=293 status=ok
// SIG undefined FUN_14854d634(void)

undefined4 * FUN_14854d634(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409e7252(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_1409e71ba(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cff422(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854d762 FUN_14854d762 body=503 status=ok
// SIG undefined FUN_14854d762(void)

void FUN_14854d762(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8 [12];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 0xb38) = param_5;
  plVar3 = (longlong *)FUN_14494321d(400);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14af1a320;
  FUN_14852d6bc(plVar3 + 2,param_2,param_5);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar6 == (longlong *)0x0) goto LAB_14854d857;
    *(undefined8 *)(param_1 + 0x88) = 0;
LAB_14854d814:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14854d857;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x80) = plVar3 + 2;
    plVar6 = *(longlong **)(param_1 + 0x88);
    if (plVar3 == plVar6) {
      LOCK();
      plVar6 = plVar3 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x88) = plVar3;
      if (plVar6 != (longlong *)0x0) goto LAB_14854d814;
    }
  }
  LOCK();
  plVar6 = plVar3 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14854d857:
  local_88[0] = *param_6;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar3 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_6[2];
    }
    (**(code **)*plVar3)(plVar3,local_78);
  }
  puVar5 = local_e8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_88;
  FUN_148523fdc(param_1,param_2,local_e8,param_4);
  if (*param_6 != 0) {
    plVar3 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854d95a FUN_14854d95a body=276 status=ok
// SIG undefined FUN_14854d95a(void)

void FUN_14854d95a(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8 [12];
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88[0] = *param_4;
  local_78[0] = 0;
  if (local_88[0] != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)*plVar3)(plVar3,local_78);
  }
  lVar1 = param_2[0x16];
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_2);
  }
  plVar3 = param_2 + 0x48;
  plVar5 = local_e8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar5 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar5 = plVar5 + 1;
  }
  uVar2 = (**(code **)(*param_2 + 0xa88))(param_2);
  local_f0 = local_88;
  local_f8 = param_3;
  FUN_14854d762(param_1,uVar2,local_e8,lVar1);
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14854da70 FUN_14854da70 body=1498 status=ok
// SIG undefined FUN_14854da70(void)

void FUN_14854da70(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = local_78;
  if (param_2[1] == 2) {
    iVar12 = *param_2;
    if (iVar12 == 4) {
      plVar1 = (longlong *)(param_1 + 0x390);
      lVar2 = param_1 + 0x3a0;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(param_1 + 0x3b8) == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = *(int *)(param_1 + 0x3b8);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar2)) {
        iVar6 = local_78._4_4_;
        local_78 = uVar5;
        do {
          puVar8 = (undefined4 *)
                   FUN_1482abc36(*(undefined8 *)(param_1 + 0xb38),
                                 *(undefined4 *)(*local_90 + (longlong)iVar6 * 0xc));
          if (puVar8 != (undefined4 *)0x0) {
            local_68 = CONCAT44(*puVar8,**(undefined4 **)(puVar8 + 2));
            FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar6 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar12));
      }
    }
    else if (iVar12 == 2) {
      plVar1 = (longlong *)(param_1 + 0x430);
      lVar2 = param_1 + 0x440;
      local_90 = plVar1;
      uStack_60 = lVar2;
      if (param_3 == (longlong *)0x0) {
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        if (*(int *)(param_1 + 0x458) == 0) {
          iVar12 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar12 = *(int *)(param_1 + 0x458);
        }
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar5 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar2)) {
          iVar6 = local_78._4_4_;
          local_78 = uVar5;
          do {
            uVar3 = *(undefined4 *)(*local_90 + (longlong)iVar6 * 0xc);
            puVar9 = (undefined8 *)FUN_1482abdf2(*(undefined8 *)(param_1 + 0xb38),uVar3);
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb38) + 0x80);
            uVar7 = *(uint *)*puVar9;
            uVar11 = *(uint *)(*(longlong *)
                                (*(longlong *)(lVar4 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8) + 8 +
                              (ulonglong)((uVar7 & 0x1ff) << 4));
            lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x180) + (ulonglong)(uVar11 >> 9) * 8);
            if (*(uint *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 0xc) == uVar7) {
              uVar11 = uVar11 << 2;
            }
            else {
              uVar11 = (uVar11 * 4 -
                       (uint)(*(uint *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 0xc + 4) == uVar7)) +
                       2;
            }
            local_68 = CONCAT44(uVar3,uVar11 << 0x1e | uVar11 >> 2);
            FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar6 = local_78._4_4_;
            uVar5 = local_78;
          } while (local_90 != plVar1 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar12));
        }
      }
      else {
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        if (*(int *)(param_1 + 0x458) == 0) {
          iVar12 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar12 = *(int *)(param_1 + 0x458);
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar5 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar6 = local_78._4_4_;
        if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar2)) {
          do {
            local_78 = uVar5;
            uVar3 = *(undefined4 *)(*local_90 + (longlong)iVar6 * 0xc);
            puVar9 = (undefined8 *)FUN_1482abdda(*(undefined8 *)(param_1 + 0xb38),uVar3);
            if (1 < *(int *)(puVar9 + 1)) {
              uVar10 = FUN_146c061e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb38) + 0x80),
                                     *(undefined4 *)(*param_3 + (longlong)*(int *)*puVar9 * 4),
                                     *(undefined4 *)(*param_3 + (longlong)((int *)*puVar9)[1] * 4));
              uVar7 = (uint)uVar10;
              if (uVar7 != 0xffffffff) {
                lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb38) + 0x80);
                uVar11 = *(uint *)(*(longlong *)
                                    (*(longlong *)(lVar4 + 0x1c0) + (uVar10 >> 9 & 0x7fffff) * 8) +
                                   8 + (ulonglong)((uVar7 & 0x1ff) << 4));
                lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x180) + (ulonglong)(uVar11 >> 9) * 8);
                if (*(uint *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 0xc) == uVar7) {
                  uVar11 = uVar11 << 2;
                }
                else {
                  uVar11 = (uVar11 * 4 -
                           (uint)(*(uint *)(lVar4 + (ulonglong)(uVar11 & 0x1ff) * 0xc + 4) == uVar7)
                           ) + 2;
                }
                local_68 = CONCAT44(uVar3,uVar11 << 0x1e | uVar11 >> 2);
                FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
              }
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar6 = local_78._4_4_;
            uVar5 = local_78;
          } while (local_90 != plVar1 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar12));
        }
      }
    }
    else if (iVar12 == 1) {
      plVar1 = (longlong *)(param_1 + 0x3e0);
      lVar2 = param_1 + 0x3f0;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(param_1 + 0x408) == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar12 = *(int *)(param_1 + 0x408);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar5 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar2)) {
        iVar6 = local_78._4_4_;
        local_78 = uVar5;
        do {
          uVar3 = *(undefined4 *)(*local_90 + (longlong)iVar6 * 0xc);
          iVar6 = FUN_1482abba8(*(undefined8 *)(param_1 + 0xb38),uVar3);
          if (param_3 != (longlong *)0x0) {
            iVar6 = *(int *)(*param_3 + (longlong)iVar6 * 4);
          }
          local_68 = CONCAT44(uVar3,iVar6);
          FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar6 = local_78._4_4_;
          uVar5 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar12));
      }
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854e04c FUN_14854e04c body=1454 status=ok
// SIG undefined FUN_14854e04c(void)

void FUN_14854e04c(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_b8 [36];
  undefined1 local_94 [4];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = local_78;
  if (param_2[1] == 1) {
    iVar10 = *param_2;
    if (iVar10 == 4) {
      plVar1 = (longlong *)(param_1 + 0x390);
      lVar2 = param_1 + 0x3a0;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(param_1 + 0x3b8) == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar10 = *(int *)(param_1 + 0x3b8);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar3 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar10) || (uStack_60 != lVar2)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar3;
        do {
          lVar6 = FUN_1482abc36(*(undefined8 *)(param_1 + 0xb38),
                                *(undefined4 *)(*local_90 + (longlong)iVar4 * 0xc));
          if (lVar6 != 0) {
            local_68 = (ulonglong)**(uint **)(lVar6 + 8);
            FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar10));
      }
    }
    else if (iVar10 == 2) {
      plVar1 = (longlong *)(param_1 + 0x430);
      lVar2 = param_1 + 0x440;
      local_90 = plVar1;
      uStack_60 = lVar2;
      if (param_3 == (longlong *)0x0) {
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        if (*(int *)(param_1 + 0x458) == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar10 = *(int *)(param_1 + 0x458);
        }
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar3 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        if ((local_78._4_4_ != iVar10) || (uStack_60 != lVar2)) {
          iVar4 = local_78._4_4_;
          local_78 = uVar3;
          do {
            puVar7 = (undefined8 *)
                     FUN_1482abdf2(*(undefined8 *)(param_1 + 0xb38),
                                   *(undefined4 *)(*local_90 + (longlong)iVar4 * 0xc));
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb38) + 0x80);
            uVar5 = *(uint *)*puVar7;
            uVar9 = *(uint *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) + 8 +
                             (ulonglong)((uVar5 & 0x1ff) << 4));
            lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x180) + (ulonglong)(uVar9 >> 9) * 8);
            if (*(uint *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc) == uVar5) {
              uVar9 = uVar9 << 2;
            }
            else {
              uVar9 = (uVar9 * 4 -
                      (uint)(*(uint *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc + 4) == uVar5)) + 2;
            }
            local_68 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
            FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar4 = local_78._4_4_;
            uVar3 = local_78;
          } while (local_90 != plVar1 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar10));
        }
      }
      else {
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        if (*(int *)(param_1 + 0x458) == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar10 = *(int *)(param_1 + 0x458);
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar3 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar4 = local_78._4_4_;
        if ((local_78._4_4_ != iVar10) || (uStack_60 != lVar2)) {
          do {
            local_78 = uVar3;
            puVar7 = (undefined8 *)
                     FUN_1482abdda(*(undefined8 *)(param_1 + 0xb38),
                                   *(undefined4 *)(*local_90 + (longlong)iVar4 * 0xc));
            if (1 < *(int *)(puVar7 + 1)) {
              uVar8 = FUN_146c061e0(*(undefined8 *)(*(longlong *)(param_1 + 0xb38) + 0x80),
                                    *(undefined4 *)(*param_3 + (longlong)*(int *)*puVar7 * 4),
                                    *(undefined4 *)(*param_3 + (longlong)((int *)*puVar7)[1] * 4));
              uVar5 = (uint)uVar8;
              if (uVar5 != 0xffffffff) {
                lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb38) + 0x80);
                uVar9 = *(uint *)(*(longlong *)
                                   (*(longlong *)(lVar6 + 0x1c0) + (uVar8 >> 9 & 0x7fffff) * 8) + 8
                                 + (ulonglong)((uVar5 & 0x1ff) << 4));
                lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x180) + (ulonglong)(uVar9 >> 9) * 8);
                if (*(uint *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc) == uVar5) {
                  uVar9 = uVar9 << 2;
                }
                else {
                  uVar9 = (uVar9 * 4 -
                          (uint)(*(uint *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc + 4) == uVar5))
                          + 2;
                }
                local_68 = (ulonglong)(uVar9 << 0x1e | uVar9 >> 2);
                FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
              }
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar4 = local_78._4_4_;
            uVar3 = local_78;
          } while (local_90 != plVar1 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar10));
        }
      }
    }
    else if (iVar10 == 1) {
      plVar1 = (longlong *)(param_1 + 0x3e0);
      lVar2 = param_1 + 0x3f0;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar2;
      if (*(int *)(param_1 + 0x408) == 0) {
        iVar10 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar10 = *(int *)(param_1 + 0x408);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar3 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar10) || (uStack_60 != lVar2)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar3;
        do {
          uVar5 = FUN_1482abba8(*(undefined8 *)(param_1 + 0xb38),
                                *(undefined4 *)(*local_90 + (longlong)iVar4 * 0xc));
          if (param_3 != (longlong *)0x0) {
            uVar5 = *(uint *)(*param_3 + (longlong)(int)uVar5 * 4);
          }
          local_68 = (ulonglong)uVar5;
          FUN_1483b983a(param_2 + 2,local_94,&local_68,0);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar1 ||
                 (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar10));
      }
    }
  }
  local_78 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854e5fc FUN_14854e5fc body=895 status=ok
// SIG undefined FUN_14854e5fc(void)

void FUN_14854e5fc(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[1] == 2) {
    FUN_1402226aa(param_1 + 0x390);
    FUN_1402226aa(param_1 + 0x3e0);
    FUN_1402226aa(param_1 + 0x430);
    iVar8 = *param_2;
    if (iVar8 == 4) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = param_2[0xc];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb38) + 0x18))
                            (*(longlong **)(param_1 + 0xb38),
                             *(undefined4 *)(*local_88 + (longlong)iVar5 * 0x10));
          local_60 = CONCAT44(local_60._4_4_,uVar6);
          lVar7 = FUN_1482abc36(*(undefined8 *)(param_1 + 0xb38),uVar6);
          if (lVar7 != 0) {
            FUN_1447cbafe(param_1 + 0x390,local_8c,&local_60,0);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 ||
                 ((int *)CONCAT44(uStack_74,uStack_78) != piVar2 || local_70._4_4_ != iVar8));
      }
    }
    else if (iVar8 == 2) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = param_2[0xc];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          uVar3 = *(uint *)(*local_88 + (longlong)iVar5 * 0x10);
          iVar5 = FUN_1482abd94(*(undefined8 *)(param_1 + 0xb38),
                                (uVar3 & 0xfffffff) << 2 | uVar3 >> 0x1e);
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (iVar5 != -1) {
            FUN_1447cbafe(param_1 + 0x430,local_8c,&local_60,0);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 ||
                 ((int *)CONCAT44(uStack_74,uStack_78) != piVar2 || local_70._4_4_ != iVar8));
      }
    }
    else if (iVar8 == 1) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = param_2[0xc];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          iVar5 = FUN_1482abbb8(*(undefined8 *)(param_1 + 0xb38),
                                *(undefined4 *)(*local_88 + (longlong)iVar5 * 0x10));
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (iVar5 != -1) {
            FUN_1447cbafe(param_1 + 0x3e0,local_8c,&local_60,0);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 ||
                 ((int *)CONCAT44(uStack_74,uStack_78) != piVar2 || local_70._4_4_ != iVar8));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854e97c FUN_14854e97c body=895 status=ok
// SIG undefined FUN_14854e97c(void)

void FUN_14854e97c(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2[1] == 1) {
    FUN_1402226aa(param_1 + 0x390);
    FUN_1402226aa(param_1 + 0x3e0);
    FUN_1402226aa(param_1 + 0x430);
    iVar8 = *param_2;
    if (iVar8 == 4) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = param_2[0xc];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb38) + 0x18))
                            (*(longlong **)(param_1 + 0xb38),
                             *(undefined4 *)(*local_88 + (longlong)iVar5 * 0x10));
          local_60 = CONCAT44(local_60._4_4_,uVar6);
          lVar7 = FUN_1482abc36(*(undefined8 *)(param_1 + 0xb38),uVar6);
          if (lVar7 != 0) {
            FUN_1447cbafe(param_1 + 0x390,local_8c,&local_60,0);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 ||
                 ((int *)CONCAT44(uStack_74,uStack_78) != piVar2 || local_70._4_4_ != iVar8));
      }
    }
    else if (iVar8 == 2) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = param_2[0xc];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          uVar3 = *(uint *)(*local_88 + (longlong)iVar5 * 0x10);
          iVar5 = FUN_1482abd94(*(undefined8 *)(param_1 + 0xb38),
                                (uVar3 & 0xfffffff) << 2 | uVar3 >> 0x1e);
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (iVar5 != -1) {
            FUN_1447cbafe(param_1 + 0x430,local_8c,&local_60,0);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 ||
                 ((int *)CONCAT44(uStack_74,uStack_78) != piVar2 || local_70._4_4_ != iVar8));
      }
    }
    else if (iVar8 == 1) {
      plVar1 = (longlong *)(param_2 + 2);
      piVar2 = param_2 + 6;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = piVar2;
      if (param_2[0xc] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = param_2[0xc];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar4 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != piVar2)) {
        do {
          local_70 = uVar4;
          iVar5 = FUN_1482abbb8(*(undefined8 *)(param_1 + 0xb38),
                                *(undefined4 *)(*local_88 + (longlong)iVar5 * 0x10));
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          if (iVar5 != -1) {
            FUN_1447cbafe(param_1 + 0x3e0,local_8c,&local_60,0);
          }
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_88 != plVar1 ||
                 ((int *)CONCAT44(uStack_74,uStack_78) != piVar2 || local_70._4_4_ != iVar8));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14854ecfc FUN_14854ecfc body=3370 status=ok
// SIG undefined FUN_14854ecfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14854ecfc(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  undefined8 uVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong *plVar30;
  ulonglong uVar31;
  float *pfVar32;
  ulonglong uVar33;
  int iVar34;
  longlong *plVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar42;
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStack_478 [32];
  undefined1 *local_458;
  undefined1 *local_450;
  undefined8 local_448;
  undefined1 local_435;
  int local_434;
  longlong local_430;
  ulonglong local_428;
  longlong *local_420;
  longlong local_418;
  longlong *local_410;
  longlong *local_408;
  longlong local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3ec [16];
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  longlong local_3b8;
  longlong lStack_3b0;
  ulonglong local_3a8;
  undefined8 local_398;
  undefined4 local_390;
  undefined1 local_38c [16];
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_338;
  undefined4 local_330;
  undefined1 local_32c [16];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  ulonglong uStack_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  double local_228;
  double local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  uint local_1dc;
  longlong *local_1d8;
  undefined4 local_1d0;
  uint uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  ulonglong uStack_1b8;
  undefined1 local_1af [7];
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  dVar18 = param_2[3];
  dVar19 = param_2[4];
  dVar20 = *(double *)(param_1 + 0x200);
  auVar9 = *(undefined1 (*) [16])(param_1 + 0x240);
  dVar36 = *(double *)(param_1 + 0x210) * -1.0;
  dVar38 = *(double *)(param_1 + 0x218) * 1.0;
  dVar15 = -dVar20;
  dVar16 = -*(double *)(param_1 + 0x208);
  dVar39 = dVar19 * dVar15 - dVar18 * dVar16;
  dVar42 = param_2[5] * dVar16 - dVar19 * dVar36;
  dVar43 = dVar18 * dVar36 - param_2[5] * dVar15;
  dVar42 = dVar42 + dVar42;
  dVar43 = dVar43 + dVar43;
  dVar39 = dVar39 + dVar39;
  auVar41 = divpd(_DAT_149934d80,auVar9);
  local_178 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar9._0_8_)) & auVar41._0_8_);
  dStack_170 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar9._8_8_)) & auVar41._8_8_);
  dVar45 = *param_2 - *(double *)(param_1 + 0x220);
  dVar46 = param_2[1] - *(double *)(param_1 + 0x228);
  dVar37 = param_2[2] - *(double *)(param_1 + 0x230);
  local_168 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x250))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x250)));
  dVar40 = dVar46 * dVar15 - dVar16 * dVar45;
  dVar17 = dVar37 * dVar16 - dVar36 * dVar46;
  dVar44 = dVar45 * dVar36 - dVar37 * dVar15;
  dVar17 = dVar17 + dVar17;
  dVar44 = dVar44 + dVar44;
  dVar40 = dVar40 + dVar40;
  local_160 = ((dVar39 * dVar16 - dVar43 * dVar36) + dVar38 * dVar42 + dVar18) * local_178;
  local_158 = (dVar20 * dVar39 + dVar36 * dVar42 + dVar38 * dVar43 + dVar19) * dStack_170;
  local_178 = ((dVar40 * dVar16 - dVar44 * dVar36) + dVar38 * dVar17 + dVar45) * local_178;
  dStack_170 = (dVar20 * dVar40 + dVar36 * dVar17 + dVar38 * dVar44 + dVar46) * dStack_170;
  dVar39 = (dVar39 * dVar38 + param_2[5] + (dVar43 * dVar15 - dVar42 * dVar16)) * local_168;
  local_168 = (dVar40 * dVar38 + dVar37 + (dVar44 * dVar15 - dVar17 * dVar16)) * local_168;
  dVar36 = dVar39 * dVar39 + local_160 * local_160 + local_158 * local_158;
  if (9.99999993922529e-09 < dVar36) {
    dVar36 = 1.0 / SQRT(dVar36);
    local_160 = local_160 * dVar36;
    local_158 = local_158 * dVar36;
    dVar39 = dVar39 * dVar36;
    dVar36 = dVar39 * dVar39 + local_160 * local_160 + local_158 * local_158;
  }
  dVar36 = SQRT(dVar36);
  dVar38 = 1.0 / dVar36;
  if (0.0 < dVar36) {
    local_160 = local_160 * dVar38;
    local_158 = local_158 * dVar38;
  }
  else {
    local_160 = 0.0;
    local_158 = 0.0;
  }
  local_150 = -(ulonglong)(0.0 < dVar36) & (ulonglong)(dVar39 * dVar38);
  plVar28 = (longlong *)(param_1 + 0x2a0);
  FUN_1402226aa(plVar28);
  FUN_1402226aa(param_1 + 0x2f0);
  FUN_1402226aa(param_1 + 0x340);
  FUN_1485247b8(param_1,local_1af,*(undefined1 *)(param_1 + 0x7bc));
  local_450 = local_1a8;
  local_458 = local_190;
  local_448 = 0;
  uVar25 = FUN_148524926(*(undefined8 *)(param_1 + 0x80),local_1af,&local_178,plVar28);
  uVar33 = (ulonglong)uVar25;
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  plVar35 = *(longlong **)(param_1 + 0x88);
  if (plVar35 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
    UNLOCK();
  }
  if ((*(int *)(param_1 + 0x374) < *(int *)(param_1 + 0x348)) &&
     (*(char *)(*(longlong *)(param_1 + 0x78) + 0xac) == '\x01')) {
    pcVar13 = *(code **)(param_1 + 0x140);
    plVar30 = (longlong *)(param_1 + 0x160);
    if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
      plVar30 = *(longlong **)(param_1 + 0x150);
    }
    uVar27 = (**(code **)(*plVar30 + 8))();
    cVar24 = (*pcVar13)(uVar27);
    if (cVar24 != '\0') {
      FUN_14852d482(uVar12,plVar28);
    }
  }
  if ((*(int *)(param_1 + 0x374) < *(int *)(param_1 + 0x348)) &&
     (*(char *)(*(longlong *)(param_1 + 0x78) + 0xab) == '\x01')) {
    pcVar13 = *(code **)(param_1 + 0x100);
    plVar30 = (longlong *)(param_1 + 0x120);
    if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
      plVar30 = *(longlong **)(param_1 + 0x110);
    }
    uVar27 = (**(code **)(*plVar30 + 8))();
    cVar24 = (*pcVar13)(uVar27);
    if (cVar24 != '\0') {
      FUN_14852cff8(uVar12,plVar28);
      FUN_14852d232(uVar12,plVar28);
    }
  }
  cVar24 = FUN_14852525a(param_1 + 0x390,plVar28);
  if (cVar24 != '\0') {
    FUN_1402226aa(plVar28);
    FUN_1402226aa(param_1 + 0x2f0);
    FUN_1402226aa(param_1 + 0x340);
  }
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  FUN_1468b3f6e(&local_148,plVar28);
  plVar30 = (longlong *)(param_1 + 0x710);
  cVar24 = FUN_1484e701c(&local_148,plVar30);
  if (cVar24 == '\0') {
    FUN_1484e2c2a(*(undefined8 *)(param_1 + 0x708));
    FUN_14068ded2(plVar30,0);
  }
  cVar24 = FUN_1484e701c(plVar30,&local_148);
  if (cVar24 == '\0') {
    local_430 = param_1 + 0x2b0;
    local_2d8 = 0x100000000;
    local_2c8 = 0xffffffff;
    uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
    local_435 = (undefined1)uVar25;
    local_420 = plVar35;
    uStack_2d0 = local_430;
    if (*(int *)(param_1 + 0x2c8) == 0) {
      iVar34 = 0;
    }
    else {
      FUN_1449c0562(&local_2d8);
      iVar34 = *(int *)(param_1 + 0x2c8);
    }
    local_1c0 = local_2c8;
    lVar29 = local_1c0;
    uStack_1b8 = uStack_2c0;
    local_1d0 = (undefined4)local_2d8;
    uStack_1cc = local_2d8._4_4_;
    uStack_1c8 = (undefined4)uStack_2d0;
    uStack_1c4 = uStack_2d0._4_4_;
    local_1c0._4_4_ = (int)((ulonglong)local_2c8 >> 0x20);
    local_1d8 = plVar28;
    if ((local_1c0._4_4_ != iVar34) || (uStack_2d0 != local_430)) {
      local_418 = param_1 + 0x748;
      iVar26 = local_1c0._4_4_;
      local_434 = iVar34;
      local_410 = plVar30;
      local_408 = plVar28;
      local_1c0 = lVar29;
      do {
        local_1dc = *(uint *)(*local_1d8 + (longlong)iVar26 * 0xc);
        if (*(int *)(param_1 + 0x718) != *(int *)(param_1 + 0x744)) {
          lVar29 = *(longlong *)(param_1 + 0x750);
          if (*(longlong *)(param_1 + 0x750) == 0) {
            lVar29 = local_418;
          }
          iVar26 = *(int *)(lVar29 + (ulonglong)(*(int *)(param_1 + 0x758) - 1U & local_1dc) * 4);
          if (iVar26 != -1) {
            do {
              if (*(uint *)(*plVar30 + (longlong)iVar26 * 0xc) == local_1dc) goto LAB_14854f97d;
              iVar26 = *(int *)(*plVar30 + (longlong)iVar26 * 0xc + 4);
            } while (iVar26 != -1);
          }
        }
        plVar28 = (longlong *)FUN_1482abc62(*(undefined8 *)(param_1 + 0xb38));
        local_428 = (ulonglong)(int)plVar28[1];
        if (local_428 != 0) {
          local_400 = *plVar28;
          local_428 = local_428 << 2;
          uVar33 = 0;
          do {
            uVar25 = *(uint *)(local_400 + uVar33);
            FUN_146c13dec(*(undefined8 *)(param_1 + 0x98),&local_1f8,uVar25);
            lVar29 = *(longlong *)(param_1 + 0x98);
            lVar14 = *(longlong *)(*(longlong *)(lVar29 + 0x130) + (ulonglong)(uVar25 >> 9) * 8);
            uVar31 = (ulonglong)(uVar25 & 0x1ff);
            uVar25 = *(uint *)(lVar14 + uVar31 * 0xc);
            uVar10 = *(uint *)(lVar14 + 4 + uVar31 * 0xc);
            uVar11 = *(uint *)(lVar14 + 8 + uVar31 * 0xc);
            if (*(char *)(lVar29 + 0x90) == '\0') {
              local_330 = DAT_14c846358;
              local_338 = DAT_14c846350;
            }
            else {
              lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0x80) + (ulonglong)(uVar11 >> 9) * 8);
              local_330 = *(undefined4 *)(lVar29 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
              local_338 = *(undefined8 *)(lVar29 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            }
            uVar12 = *(undefined8 *)(param_1 + 0x708);
            FUN_1467ed646(local_32c,&local_338);
            FUN_1411ab38a(local_32c,&local_31c);
            uVar23 = local_31c;
            lVar29 = *(longlong *)(param_1 + 0x98);
            if (*(char *)(lVar29 + 0xb0) == '\0') {
              uVar31 = (ulonglong)(uVar11 >> 9);
              pfVar32 = (float *)&DAT_14c84635c;
            }
            else {
              uVar31 = (ulonglong)(uVar11 >> 9);
              pfVar32 = (float *)((ulonglong)((uVar11 & 0x1ff) << 3) +
                                 *(longlong *)(*(longlong *)(lVar29 + 0xa0) + uVar31 * 8));
            }
            fVar3 = pfVar32[1];
            fVar4 = *pfVar32;
            lVar14 = *(longlong *)(*(longlong *)(lVar29 + 0x10) + uVar31 * 8);
            local_2e8 = *(undefined8 *)(lVar14 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
            puVar1 = (undefined8 *)(lVar14 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
            local_2f8 = *puVar1;
            uStack_2f0 = puVar1[1];
            local_318 = local_1f8;
            uStack_314 = uStack_1f4;
            uStack_310 = uStack_1f0;
            uStack_30c = uStack_1ec;
            local_308 = local_1e8;
            if (*(char *)(lVar29 + 0x90) == '\0') {
              local_390 = DAT_14c846358;
              local_398 = DAT_14c846350;
            }
            else {
              lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0x80) + (ulonglong)(uVar10 >> 9) * 8);
              local_390 = *(undefined4 *)(lVar29 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
              local_398 = *(undefined8 *)(lVar29 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
            }
            FUN_1467ed646(local_38c,&local_398);
            FUN_1411ab38a(local_38c,&local_37c);
            uVar22 = local_37c;
            lVar29 = *(longlong *)(param_1 + 0x98);
            if (*(char *)(lVar29 + 0xb0) == '\0') {
              uVar31 = (ulonglong)(uVar10 >> 9);
              pfVar32 = (float *)&DAT_14c84635c;
            }
            else {
              uVar31 = (ulonglong)(uVar10 >> 9);
              pfVar32 = (float *)((ulonglong)((uVar10 & 0x1ff) << 3) +
                                 *(longlong *)(*(longlong *)(lVar29 + 0xa0) + uVar31 * 8));
            }
            fVar5 = pfVar32[1];
            fVar6 = *pfVar32;
            lVar14 = *(longlong *)(*(longlong *)(lVar29 + 0x10) + uVar31 * 8);
            local_348 = *(undefined8 *)(lVar14 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
            puVar1 = (undefined8 *)(lVar14 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
            local_358 = *puVar1;
            uStack_350 = puVar1[1];
            local_378 = local_1f8;
            uStack_374 = uStack_1f4;
            uStack_370 = uStack_1f0;
            uStack_36c = uStack_1ec;
            local_368 = local_1e8;
            if (*(char *)(lVar29 + 0x90) == '\0') {
              local_3f0 = DAT_14c846358;
              local_3f8 = DAT_14c846350;
            }
            else {
              lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0x80) + (ulonglong)(uVar25 >> 9) * 8);
              local_3f0 = *(undefined4 *)(lVar29 + 8 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
              local_3f8 = *(undefined8 *)(lVar29 + (ulonglong)(uVar25 & 0x1ff) * 0xc);
            }
            FUN_1467ed646(local_3ec,&local_3f8);
            FUN_1411ab38a(local_3ec,&local_3dc);
            uVar21 = local_3dc;
            lVar29 = *(longlong *)(param_1 + 0x98);
            if (*(char *)(lVar29 + 0xb0) == '\0') {
              uVar31 = (ulonglong)(uVar25 >> 9);
              pfVar32 = (float *)&DAT_14c84635c;
            }
            else {
              uVar31 = (ulonglong)(uVar25 >> 9);
              pfVar32 = (float *)((ulonglong)((uVar25 & 0x1ff) << 3) +
                                 *(longlong *)(*(longlong *)(lVar29 + 0xa0) + uVar31 * 8));
            }
            fVar7 = pfVar32[1];
            fVar8 = *pfVar32;
            lVar29 = *(longlong *)(*(longlong *)(lVar29 + 0x10) + uVar31 * 8);
            local_3a8 = *(ulonglong *)(lVar29 + 0x10 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
            plVar28 = (longlong *)(lVar29 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
            local_3b8 = *plVar28;
            lStack_3b0 = plVar28[1];
            local_3d8 = local_1f8;
            uStack_3d4 = uStack_1f4;
            uStack_3d0 = uStack_1f0;
            uStack_3cc = uStack_1ec;
            local_3c8 = local_1e8;
            local_2d8 = *(longlong *)(param_1 + 0x760);
            if ((local_2d8 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_14689c22e();
            }
            uStack_2c0 = local_3a8;
            uStack_2d0 = local_3b8;
            local_2c8 = lStack_3b0;
            local_298 = local_3c8;
            local_2a8 = CONCAT44(uStack_3d4,local_3d8);
            uStack_2a0 = CONCAT44(uStack_3cc,uStack_3d0);
            local_290 = uVar21;
            local_278 = local_348;
            local_288 = local_358;
            uStack_280 = uStack_350;
            local_250 = local_368;
            local_260 = CONCAT44(uStack_374,local_378);
            uStack_258 = CONCAT44(uStack_36c,uStack_370);
            local_248 = uVar22;
            local_230 = local_2e8;
            local_240 = local_2f8;
            uStack_238 = uStack_2f0;
            local_208 = local_308;
            local_218 = local_318;
            uStack_214 = uStack_314;
            uStack_210 = uStack_310;
            uStack_20c = uStack_30c;
            local_200 = uVar23;
            local_2b8 = (double)fVar8;
            local_2b0 = (double)fVar7;
            local_270 = (double)fVar6;
            local_268 = (double)fVar5;
            local_228 = (double)fVar4;
            local_220 = (double)fVar3;
            FUN_1484e34ea(uVar12,&local_2d8);
            uVar33 = uVar33 + 4;
          } while (local_428 != uVar33);
        }
        plVar30 = local_410;
        FUN_1447cbafe(local_410,&local_2d8,&local_1dc,0);
        plVar28 = local_408;
        iVar34 = local_434;
LAB_14854f97d:
        local_1c0 = CONCAT44(local_1c0._4_4_,(uint)local_1c0 & ~uStack_1cc);
        FUN_1449c0562(&local_1d0);
        iVar26 = local_1c0._4_4_;
        lVar29 = local_1c0;
      } while (local_1d8 != plVar28 ||
               (CONCAT44(uStack_1c4,uStack_1c8) != local_430 || local_1c0._4_4_ != iVar34));
    }
    local_1c0 = lVar29;
    uVar33 = CONCAT71((int7)(uVar33 >> 8),local_435);
    plVar35 = local_420;
  }
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_148);
  if (plVar35 != (longlong *)0x0) {
    LOCK();
    plVar28 = plVar35 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plVar35)(plVar35);
      LOCK();
      piVar2 = (int *)((longlong)plVar35 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar33 & 0xffffffff;
}



// FUNCTION 14854fa28 FUN_14854fa28 body=1730 status=ok
// SIG undefined FUN_14854fa28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14854fa28(longlong param_1,double *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined4 *local_340;
  undefined8 local_338;
  undefined1 local_32f [7];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  ulonglong local_2d0;
  undefined1 local_2c0 [80];
  undefined1 local_270 [80];
  undefined1 local_220 [8];
  int local_218;
  int local_1ec;
  undefined1 local_1d0 [240];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  dVar8 = param_2[3];
  dVar9 = param_2[4];
  dVar10 = *(double *)(param_1 + 0x200);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x240);
  dVar18 = *(double *)(param_1 + 0x210) * -1.0;
  dVar20 = *(double *)(param_1 + 0x218) * 1.0;
  dVar5 = -dVar10;
  dVar6 = -*(double *)(param_1 + 0x208);
  dVar21 = dVar9 * dVar5 - dVar8 * dVar6;
  dVar24 = param_2[5] * dVar6 - dVar9 * dVar18;
  dVar25 = dVar8 * dVar18 - param_2[5] * dVar5;
  dVar24 = dVar24 + dVar24;
  dVar25 = dVar25 + dVar25;
  dVar21 = dVar21 + dVar21;
  auVar23 = divpd(_DAT_149934d80,auVar3);
  local_2f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar23._0_8_);
  dStack_2f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar23._8_8_);
  dVar27 = *param_2 - *(double *)(param_1 + 0x220);
  dVar28 = param_2[1] - *(double *)(param_1 + 0x228);
  dVar19 = param_2[2] - *(double *)(param_1 + 0x230);
  local_2e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x250))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x250)));
  dVar22 = dVar28 * dVar5 - dVar6 * dVar27;
  dVar7 = dVar19 * dVar6 - dVar18 * dVar28;
  dVar26 = dVar27 * dVar18 - dVar19 * dVar5;
  dVar7 = dVar7 + dVar7;
  dVar26 = dVar26 + dVar26;
  dVar22 = dVar22 + dVar22;
  local_2e0 = ((dVar21 * dVar6 - dVar25 * dVar18) + dVar20 * dVar24 + dVar8) * local_2f8;
  local_2d8 = (dVar10 * dVar21 + dVar18 * dVar24 + dVar20 * dVar25 + dVar9) * dStack_2f0;
  local_2f8 = ((dVar22 * dVar6 - dVar26 * dVar18) + dVar20 * dVar7 + dVar27) * local_2f8;
  dStack_2f0 = (dVar10 * dVar22 + dVar18 * dVar7 + dVar20 * dVar26 + dVar28) * dStack_2f0;
  dVar21 = (dVar21 * dVar20 + param_2[5] + (dVar25 * dVar5 - dVar24 * dVar6)) * local_2e8;
  local_2e8 = (dVar22 * dVar20 + dVar19 + (dVar26 * dVar5 - dVar7 * dVar6)) * local_2e8;
  dVar18 = dVar21 * dVar21 + local_2e0 * local_2e0 + local_2d8 * local_2d8;
  if (9.99999993922529e-09 < dVar18) {
    dVar18 = 1.0 / SQRT(dVar18);
    local_2e0 = local_2e0 * dVar18;
    local_2d8 = local_2d8 * dVar18;
    dVar21 = dVar21 * dVar18;
    dVar18 = dVar21 * dVar21 + local_2e0 * local_2e0 + local_2d8 * local_2d8;
  }
  dVar18 = SQRT(dVar18);
  dVar20 = 1.0 / dVar18;
  if (0.0 < dVar18) {
    local_2e0 = local_2e0 * dVar20;
    local_2d8 = local_2d8 * dVar20;
  }
  else {
    local_2e0 = 0.0;
    local_2d8 = 0.0;
  }
  local_2d0 = -(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar21 * dVar20);
  lVar2 = param_1 + 0x390;
  FUN_14852586c(local_1d0,lVar2);
  FUN_1458d302c(local_2c0);
  FUN_1485247b8(param_1,local_32f,*(undefined1 *)(param_1 + 0x7bc));
  local_340 = &local_328;
  local_348 = &local_310;
  local_338 = 0;
  cVar11 = FUN_148524926(*(undefined8 *)(param_1 + 0x80),local_32f,&local_2f8,local_2c0);
  if (cVar11 != '\0') {
    param_3[2] = local_300;
    *param_3 = local_310;
    param_3[1] = uStack_308;
    *(undefined8 *)(param_4 + 4) = local_318;
    *param_4 = local_328;
    param_4[1] = uStack_324;
    param_4[2] = uStack_320;
    param_4[3] = uStack_31c;
    uVar15 = *(undefined8 *)(param_1 + 0x80);
    plVar17 = *(longlong **)(param_1 + 0x88);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    if ((local_1ec < local_218) && (*(char *)(*(longlong *)(param_1 + 0x78) + 0xac) == '\x01')) {
      pcVar4 = *(code **)(param_1 + 0x140);
      plVar16 = (longlong *)(param_1 + 0x160);
      if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
        plVar16 = *(longlong **)(param_1 + 0x150);
      }
      uVar14 = (**(code **)(*plVar16 + 8))();
      cVar11 = (*pcVar4)(uVar14);
      if (cVar11 != '\0') {
        FUN_14852d482(uVar15,local_2c0);
      }
    }
    if ((local_1ec < local_218) && (*(char *)(*(longlong *)(param_1 + 0x78) + 0xab) == '\x01')) {
      pcVar4 = *(code **)(param_1 + 0x100);
      plVar16 = (longlong *)(param_1 + 0x120);
      if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
        plVar16 = *(longlong **)(param_1 + 0x110);
      }
      uVar14 = (**(code **)(*plVar16 + 8))();
      cVar11 = (*pcVar4)(uVar14);
      if (cVar11 != '\0') {
        FUN_14852cff8(uVar15,local_2c0);
        FUN_14852d232(uVar15,local_2c0);
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar17 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  pcVar4 = *(code **)(param_1 + 0x180);
  plVar17 = (longlong *)(param_1 + 0x1a0);
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
    plVar17 = *(longlong **)(param_1 + 400);
  }
  uVar15 = (**(code **)(*plVar17 + 8))();
  cVar11 = (*pcVar4)(uVar15);
  pcVar4 = *(code **)(param_1 + 0x1c0);
  plVar17 = (longlong *)(param_1 + 0x1e0);
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    plVar17 = *(longlong **)(param_1 + 0x1d0);
  }
  uVar15 = (**(code **)(*plVar17 + 8))();
  cVar12 = (*pcVar4)(uVar15);
  if (cVar11 == '\0') {
    if (cVar12 == '\0') {
      FUN_145c3f772(lVar2,local_2c0);
      FUN_145c3f772(param_1 + 0x3e0,local_270);
      FUN_145c3f772(param_1 + 0x430,local_220);
    }
    else {
      FUN_148525c42();
    }
  }
  else if (cVar12 == '\0') {
    FUN_1468b3f6e(param_1 + 0x3e0,local_270);
    FUN_1468b3f6e(param_1 + 0x430,local_220);
    FUN_1468b3f6e(lVar2,local_2c0);
  }
  else {
    FUN_14852592c(lVar2,local_2c0);
  }
  uVar13 = FUN_148544206(lVar2,local_1d0);
  if ((char)uVar13 == '\0') {
    *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
    FUN_1447f69b6(param_1 + 0x48);
  }
  FUN_1456c3cc8(local_2c0);
  FUN_1456c3cc8(local_1d0);
  if ((local_e0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar13 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485500ec FUN_1485500ec body=501 status=ok
// SIG undefined FUN_1485500ec(void)

undefined1 * FUN_1485500ec(longlong param_1,undefined1 *param_2,double *param_3,byte param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  float local_150;
  undefined4 local_b4;
  undefined4 local_88;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  lVar5 = param_1 + 0xa0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    lVar5 = 0;
  }
  local_168 = param_1 + 0xb0;
  if (*(int *)(param_1 + 0xb8) == 0) {
    local_168 = 0;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    local_48 = param_3[5] * 4398046511104.0 + param_3[2];
    local_50 = param_3[4] * 4398046511104.0 + param_3[1];
    local_58 = param_3[3] * 4398046511104.0 + *param_3;
    local_160 = local_168;
    local_168 = lVar5;
    bVar2 = FUN_14855754a(*(undefined8 *)(param_1 + 0x10),local_158,param_3,&local_58);
  }
  else {
    bVar2 = FUN_1485502e2(*(longlong *)(param_1 + 8),local_158,param_3);
  }
  if (((param_4 & bVar2) == 1) && (pcVar1 = *(code **)(param_1 + 0x20), pcVar1 != (code *)0x0)) {
    plVar4 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x30);
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    (*pcVar1)(uVar3,local_158);
  }
  if (bVar2 == 0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
  }
  else {
    *param_2 = 1;
    *(double *)(param_2 + 8) = (double)local_150;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
    param_2[0x28] = 0;
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_58 = 0.0;
  FUN_14485c47a(&local_58,0);
  *(double *)(param_2 + 0x38) = local_58;
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485502e2 FUN_1485502e2 body=293 status=ok
// SIG undefined FUN_1485502e2(void)

undefined4
FUN_1485502e2(longlong *param_1,void *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    local_218 = *param_3;
    uStack_210 = param_3[1];
    local_208 = param_3[2];
    uStack_200 = param_3[3];
    local_1f8 = param_3[4];
    uStack_1f0 = param_3[5];
    local_1e8 = 0;
    local_1d8 = param_5;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = DAT_14c8464e0;
    uStack_1b0 = DAT_14c8464e8;
    local_1a8 = DAT_14c8464f0;
    local_1a0 = DAT_14c8463b8;
    uStack_198 = DAT_14c8463c0;
    local_190 = DAT_14c8463c8;
    local_188 = 0xffffffff;
    local_1e0 = param_4;
    memset(local_138,0,0x100);
    local_68 = 0xffffffff;
    local_134 = 0x3f800000;
    local_94 = 0xffffffff;
    uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,&local_218,&local_1c8);
    if ((char)uVar1 != '\0') {
      memcpy(param_2,local_138,0x100);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148550408 FUN_148550408 body=50 status=ok
// SIG undefined FUN_148550408(void)

undefined8 FUN_148550408(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_148451390(*(undefined8 *)(param_1 + 8));
  plVar2 = (longlong *)FUN_14855043a(uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014855042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x370))(plVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14855043a FUN_14855043a body=142 status=ok
// SIG undefined FUN_14855043a(void)

longlong FUN_14855043a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (lVar2 != 0) {
          lVar3 = FUN_145b11fbc();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            return lVar2;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = FUN_1459d7446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1485504c8 FUN_1485504c8 body=9 status=ok
// SIG undefined FUN_1485504c8(void)

void FUN_1485504c8(longlong param_1)

{
  FUN_1485504d1(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1485504d1 FUN_1485504d1 body=114 status=ok
// SIG undefined FUN_1485504d1(void)

undefined8 FUN_1485504d1(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = FUN_148451390();
  plVar2 = (longlong *)FUN_14855043a(uVar1);
  if (param_2 != 0 && plVar2 != (longlong *)0x0) {
    uVar1 = FUN_145a7b1c0();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x000148550540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x3a0))(plVar2,uVar1,param_3,*(code **)(*plVar2 + 0x3a0));
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148550543 FUN_148550543 body=1016 status=ok
// SIG undefined FUN_148550543(void)

undefined8 FUN_148550543(longlong param_1,double *param_2,double *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
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
  double dVar19;
  double dVar20;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 uVar21;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 uVar22;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 uVar23;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 uVar24;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 uVar25;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 uVar26;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  char local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar5 = FUN_148451390(*(undefined8 *)(param_1 + 8));
  plVar6 = (longlong *)FUN_14855043a(uVar5);
  if ((plVar6 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar6 + 0x370))(plVar6), cVar4 == '\0')
     ) {
    *param_4 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 == 0) {
      cVar4 = '\0';
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x20);
      cVar4 = '\0';
      lVar8 = 0;
      do {
        plVar6 = *(longlong **)(lVar2 + lVar8);
        (**(code **)(*plVar6 + 0x520))(plVar6,&local_118,1,0);
        uVar26 = (undefined4)((ulonglong)local_118 >> 0x20);
        uVar25 = (undefined4)((ulonglong)dStack_110 >> 0x20);
        uVar24 = (undefined4)((ulonglong)local_108 >> 0x20);
        uVar23 = (undefined4)((ulonglong)dStack_100 >> 0x20);
        uVar22 = (undefined4)((ulonglong)local_f8 >> 0x20);
        uVar21 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
        if (local_e8 == '\0' || cVar4 == '\0') {
          if (local_e8 != '\0') {
            unaff_XMM6_Da = SUB84(dStack_f0,0);
            unaff_XMM6_Db = uVar21;
            unaff_XMM7_Da = SUB84(local_f8,0);
            unaff_XMM7_Db = uVar22;
            unaff_XMM8_Da = SUB84(dStack_100,0);
            unaff_XMM8_Db = uVar23;
            unaff_XMM9_Da = SUB84(local_108,0);
            unaff_XMM9_Db = uVar24;
            unaff_XMM10_Da = SUB84(dStack_110,0);
            unaff_XMM10_Db = uVar25;
            unaff_XMM11_Da = SUB84(local_118,0);
            unaff_XMM11_Db = uVar26;
            cVar4 = local_e8;
          }
        }
        else {
          if (local_118 <= (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da)) {
            unaff_XMM11_Da = SUB84(local_118,0);
            unaff_XMM11_Db = uVar26;
          }
          if (dStack_110 <= (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da)) {
            unaff_XMM10_Da = SUB84(dStack_110,0);
            unaff_XMM10_Db = uVar25;
          }
          if (local_108 <= (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da)) {
            unaff_XMM9_Da = SUB84(local_108,0);
            unaff_XMM9_Db = uVar24;
          }
          if ((double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) <= dStack_100) {
            unaff_XMM8_Da = SUB84(dStack_100,0);
            unaff_XMM8_Db = uVar23;
          }
          if ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) <= local_f8) {
            unaff_XMM7_Da = SUB84(local_f8,0);
            unaff_XMM7_Db = uVar22;
          }
          if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dStack_f0) {
            unaff_XMM6_Da = SUB84(dStack_f0,0);
            unaff_XMM6_Db = uVar21;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 == 0) {
      dVar9 = (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
      dVar13 = (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
      dVar11 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
      dVar15 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
      dVar17 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      dVar19 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar8 = 0;
      do {
        dVar19 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
        dVar17 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
        dVar15 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
        dVar11 = (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
        dVar13 = (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
        dVar9 = (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
        lVar3 = *(longlong *)(lVar2 + lVar8);
        if (lVar3 != 0) {
          lVar7 = FUN_144a3a302();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            dVar20 = *(double *)(lVar3 + 0x170) + *(double *)(lVar3 + 0x188);
            dVar18 = *(double *)(lVar3 + 0x168) + *(double *)(lVar3 + 0x180);
            dVar16 = *(double *)(lVar3 + 0x160) + *(double *)(lVar3 + 0x178);
            dVar12 = *(double *)(lVar3 + 0x170) - *(double *)(lVar3 + 0x188);
            dVar14 = *(double *)(lVar3 + 0x168) - *(double *)(lVar3 + 0x180);
            dVar10 = *(double *)(lVar3 + 0x160) - *(double *)(lVar3 + 0x178);
            if (cVar4 == '\0') {
              cVar4 = '\x01';
              dVar9 = dVar10;
              dVar11 = dVar12;
              dVar13 = dVar14;
              dVar15 = dVar16;
              dVar17 = dVar18;
              dVar19 = dVar20;
            }
            else {
              if (dVar10 <= (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da)) {
                dVar9 = dVar10;
              }
              if (dVar14 <= (double)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da)) {
                dVar13 = dVar14;
              }
              if (dVar12 <= (double)CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da)) {
                dVar11 = dVar12;
              }
              if ((double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da) <= dVar16) {
                dVar15 = dVar16;
              }
              if ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) <= dVar18) {
                dVar17 = dVar18;
              }
              if ((double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) <= dVar20) {
                dVar19 = dVar20;
              }
            }
          }
        }
        lVar8 = lVar8 + 8;
        unaff_XMM6_Da = SUB84(dVar19,0);
        unaff_XMM6_Db = (undefined4)((ulonglong)dVar19 >> 0x20);
        unaff_XMM7_Da = SUB84(dVar17,0);
        unaff_XMM7_Db = (undefined4)((ulonglong)dVar17 >> 0x20);
        unaff_XMM8_Da = SUB84(dVar15,0);
        unaff_XMM8_Db = (undefined4)((ulonglong)dVar15 >> 0x20);
        unaff_XMM9_Da = SUB84(dVar11,0);
        unaff_XMM9_Db = (undefined4)((ulonglong)dVar11 >> 0x20);
        unaff_XMM10_Da = SUB84(dVar13,0);
        unaff_XMM10_Db = (undefined4)((ulonglong)dVar13 >> 0x20);
        unaff_XMM11_Da = SUB84(dVar9,0);
        unaff_XMM11_Db = (undefined4)((ulonglong)dVar9 >> 0x20);
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if (cVar4 == '\0') {
      uVar5 = 0;
      goto LAB_1485508c4;
    }
    *param_3 = dVar9;
    param_3[1] = dVar13;
    param_3[2] = dVar11;
    param_3[3] = dVar15;
    param_3[4] = dVar17;
    param_3[5] = dVar19;
    *param_2 = (dVar9 + dVar15) * 0.5;
    param_2[1] = (dVar13 + dVar17) * 0.5;
    param_2[2] = (dVar11 + dVar19) * 0.5;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 1.0;
  }
  else {
    *param_4 = 1;
    local_118 = 1.79769313486232e+308;
    dStack_110 = 1.79769313486232e+308;
    local_108 = 1.79769313486232e+308;
    dStack_100 = -1.79769313486232e+308;
    local_f8 = -1.79769313486232e+308;
    dStack_f0 = -1.79769313486232e+308;
    (**(code **)(*plVar6 + 0x380))(plVar6,&local_118);
    *param_3 = local_118;
    param_3[1] = dStack_110;
    param_3[2] = local_108;
    param_3[3] = dStack_100;
    param_3[4] = local_f8;
    param_3[5] = dStack_f0;
    (**(code **)(*plVar6 + 0x388))(plVar6,param_2);
  }
  uVar5 = 1;
LAB_1485508c4:
  if ((local_e0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14855093c FUN_14855093c body=120 status=ok
// SIG undefined FUN_14855093c(void)

undefined8 FUN_14855093c(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  uVar1 = FUN_148451390(uVar1);
  plVar2 = (longlong *)FUN_14855043a(uVar1);
  if ((param_2 != 0) && (plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_145a7b1c0();
    plVar3 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x0001485509a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x358))(plVar2,uVar1,param_3,*(code **)(*plVar2 + 0x358));
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1485509b4 FUN_1485509b4 body=152 status=ok
// SIG undefined FUN_1485509b4(void)

void FUN_1485509b4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_40 = (undefined8 *)0x0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_38 = 1;
  FUN_1447d05f2(&local_40,0);
  *local_40 = param_2;
  (**(code **)(*param_1 + 0x350))(param_1,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148550a4d FUN_148550a4d body=215 status=ok
// SIG undefined FUN_148550a4d(void)

void FUN_148550a4d(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      uVar4 = uStack_58;
      uVar2 = *(undefined8 *)(lVar1 + lVar7);
      lVar6 = (longlong)(int)uStack_58;
      uVar5 = (int)uStack_58 + 1;
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar5);
      if (uStack_58._4_4_ < uVar5) {
        FUN_1447d05f2(&local_60,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_60 + lVar6 * 8) = uVar2;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
  (**(code **)(*param_1 + 0x350))(param_1,local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148550b26 FUN_148550b26 body=282 status=ok
// SIG undefined FUN_148550b26(void)

void FUN_148550b26(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined6 uStack_46;
  undefined2 local_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = DAT_14c8464f0;
  local_40 = (undefined2)DAT_14c8464e0;
  uStack_3e = (undefined6)((ulonglong)DAT_14c8464e0 >> 0x10);
  uStack_38 = (undefined2)DAT_14c8464e8;
  uStack_36 = (undefined2)((ulonglong)DAT_14c8464e8 >> 0x10);
  uStack_34 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  local_78 = DAT_14c8463b0;
  local_88 = DAT_14c8463a0;
  uStack_80 = DAT_14c8463a8;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  iVar3 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
    FUN_14855bfdc((longlong *)(param_1 + 0x68),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = (longlong)iVar3 * 0x90;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = local_58;
  *(undefined8 *)(lVar4 + lVar5) = CONCAT44(uStack_64,local_68);
  ((undefined8 *)(lVar4 + lVar5))[1] = CONCAT44(uStack_5c,uStack_60);
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = param_3;
  *(undefined4 *)(lVar4 + 0x1c + lVar5) = param_4;
  *(undefined2 *)(lVar4 + 0x30 + lVar5) = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x32 + lVar5);
  *puVar1 = CONCAT26(local_40,uStack_46);
  puVar1[1] = CONCAT26(uStack_38,uStack_3e);
  puVar2 = (undefined4 *)(lVar4 + 0x40 + lVar5);
  *puVar2 = CONCAT22(uStack_36,uStack_38);
  puVar2[1] = uStack_34;
  puVar2[2] = (undefined4)local_30;
  puVar2[3] = local_30._4_4_;
  puVar2 = (undefined4 *)(lVar4 + 0x50 + lVar5);
  *puVar2 = (undefined4)local_88;
  puVar2[1] = local_88._4_4_;
  puVar2[2] = (undefined4)uStack_80;
  puVar2[3] = uStack_80._4_4_;
  *(undefined8 *)(lVar4 + 0x60 + lVar5) = local_78;
  *(undefined1 *)(lVar4 + 0x68 + lVar5) = 0;
  *(undefined4 *)(lVar4 + 0x6c + lVar5) = 0xffffffff;
  *(undefined1 *)(lVar4 + 0x70 + lVar5) = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148550c42 FUN_148550c42 body=307 status=ok
// SIG undefined FUN_148550c42(void)

void FUN_148550c42(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined6 uStack_46;
  undefined2 local_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = DAT_14c8464f0;
  local_40 = (undefined2)DAT_14c8464e0;
  uStack_3e = (undefined6)((ulonglong)DAT_14c8464e0 >> 0x10);
  uStack_38 = (undefined2)DAT_14c8464e8;
  uStack_36 = (undefined2)((ulonglong)DAT_14c8464e8 >> 0x10);
  uStack_34 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  local_98 = DAT_14c8463a0;
  uStack_90 = DAT_14c8463a8;
  local_88 = DAT_14c8463b0;
  local_58 = param_2[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  iVar3 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
    FUN_14855bfdc((longlong *)(param_1 + 0x68),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = (longlong)iVar3 * 0x90;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = local_58;
  *(undefined8 *)(lVar4 + lVar5) = local_68;
  ((undefined8 *)(lVar4 + lVar5))[1] = uStack_60;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = param_3;
  *(undefined4 *)(lVar4 + 0x1c + lVar5) = param_5;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5);
  *puVar1 = CONCAT44(uStack_74,local_78);
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  *(undefined2 *)(lVar4 + 0x30 + lVar5) = 1;
  puVar1 = (undefined8 *)(lVar4 + 0x32 + lVar5);
  *puVar1 = CONCAT26(local_40,uStack_46);
  puVar1[1] = CONCAT26(uStack_38,uStack_3e);
  puVar2 = (undefined4 *)(lVar4 + 0x40 + lVar5);
  *puVar2 = CONCAT22(uStack_36,uStack_38);
  puVar2[1] = uStack_34;
  puVar2[2] = (undefined4)local_30;
  puVar2[3] = local_30._4_4_;
  puVar2 = (undefined4 *)(lVar4 + 0x50 + lVar5);
  *puVar2 = (undefined4)local_98;
  puVar2[1] = local_98._4_4_;
  puVar2[2] = (undefined4)uStack_90;
  puVar2[3] = uStack_90._4_4_;
  *(undefined8 *)(lVar4 + 0x60 + lVar5) = local_88;
  *(undefined1 *)(lVar4 + 0x68 + lVar5) = 0;
  *(undefined4 *)(lVar4 + 0x6c + lVar5) = 0xffffffff;
  *(undefined1 *)(lVar4 + 0x70 + lVar5) = 0;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148550d76 FUN_148550d76 body=172 status=ok
// SIG undefined FUN_148550d76(void)

undefined8 FUN_148550d76(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 0x70);
  uVar6 = 0;
  if (iVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x68);
      if (*(int *)(lVar1 + 0x18 + (longlong)(int)uVar6 * 0x90) == param_2) {
        iVar2 = *(int *)(param_1 + 0x70);
        iVar5 = ~uVar6 + iVar2;
        if (iVar5 != 0) {
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)((longlong)(int)uVar6 * 0x90 + lVar1),
                  (void *)((longlong)(iVar2 - iVar5) * 0x90 + lVar1),(longlong)iVar5 * 0x90);
          iVar2 = *(int *)(param_1 + 0x70);
        }
        *(int *)(param_1 + 0x70) = iVar2 + -1;
        FUN_14855c070((longlong *)(param_1 + 0x68));
        uVar6 = uVar6 - 1;
        iVar4 = iVar4 + -1;
        uVar3 = 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  return uVar3;
}



// FUNCTION 148550e22 FUN_148550e22 body=174 status=ok
// SIG undefined FUN_148550e22(void)

void FUN_148550e22(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_38 = param_2[8];
  uStack_34 = param_2[9];
  uStack_30 = param_2[10];
  uStack_2c = param_2[0xb];
  iVar2 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar2 + 1U) {
    FUN_14855c11e((longlong *)(param_1 + 0x78),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar4 = (longlong)iVar2 * 0x38;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined4 *)(lVar3 + 0x30 + lVar4) = param_3;
  *(undefined4 *)(lVar3 + 0x34 + lVar4) = param_4;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148550ed2 FUN_148550ed2 body=168 status=ok
// SIG undefined FUN_148550ed2(void)

undefined8 FUN_148550ed2(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 0x80);
  uVar6 = 0;
  if (iVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x78);
      if (*(int *)(lVar1 + 0x30 + (longlong)(int)uVar6 * 0x38) == param_2) {
        iVar2 = *(int *)(param_1 + 0x80);
        iVar5 = ~uVar6 + iVar2;
        if (iVar5 != 0) {
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)((longlong)(int)uVar6 * 0x38 + lVar1),
                  (void *)((longlong)(iVar2 - iVar5) * 0x38 + lVar1),(longlong)iVar5 * 0x38);
          iVar2 = *(int *)(param_1 + 0x80);
        }
        *(int *)(param_1 + 0x80) = iVar2 + -1;
        FUN_14855c1ae((longlong *)(param_1 + 0x78));
        uVar6 = uVar6 - 1;
        iVar4 = iVar4 + -1;
        uVar3 = 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  return uVar3;
}



// FUNCTION 148550f7a FUN_148550f7a body=158 status=ok
// SIG undefined FUN_148550f7a(void)

void FUN_148550f7a(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70 [9];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = local_70;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_14855c254((longlong *)(param_1 + 0x88),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  lVar4 = (longlong)iVar1 * 0x50;
  puVar5 = local_70;
  puVar6 = (undefined8 *)(lVar2 + lVar4);
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(lVar2 + 0x48 + lVar4) = param_3;
  *(undefined4 *)(lVar2 + 0x4c + lVar4) = param_4;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855101a FUN_14855101a body=187 status=ok
// SIG undefined FUN_14855101a(void)

undefined8 FUN_14855101a(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = *(int *)(param_1 + 0x90);
  uVar6 = 0;
  if (iVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x88);
      if (*(int *)(lVar1 + 0x48 + (longlong)(int)uVar6 * 0x50) == param_2) {
        iVar2 = *(int *)(param_1 + 0x90);
        iVar5 = ~uVar6 + iVar2;
        if (iVar5 != 0) {
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)((longlong)(int)uVar6 * 0x50 + lVar1),
                  (void *)((longlong)(iVar2 - iVar5) * 0x50 + lVar1),(longlong)iVar5 * 0x50);
          iVar2 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x90) = iVar2 + -1;
        FUN_14855c2e8((longlong *)(param_1 + 0x88));
        uVar6 = uVar6 - 1;
        iVar4 = iVar4 + -1;
        uVar3 = 1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  return uVar3;
}



// FUNCTION 1485510d6 FUN_1485510d6 body=74 status=ok
// SIG undefined FUN_1485510d6(void)

void FUN_1485510d6(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cbafe(param_1 + 0x98,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148551122 FUN_148551122 body=12 status=ok
// SIG undefined FUN_148551122(void)

void FUN_148551122(longlong param_1)

{
  FUN_144a7cc9e(param_1 + 0x98);
  return;
}



// FUNCTION 148551192 FUN_148551192 body=564 status=ok
// SIG undefined FUN_148551192(void)

undefined4
FUN_148551192(longlong param_1,longlong *param_2,double *param_3,int *param_4,undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  double *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = (longlong)(int)param_2[1];
  local_a0 = param_3;
  if (lVar7 < 1) {
    local_a4 = 0xffffffff;
  }
  else {
    local_90 = param_1 + 0xd0;
    local_80 = param_5 + 4;
    local_88 = (longlong *)(param_1 + 0x30);
    local_a4 = 0xffffffff;
    lVar9 = 0;
    local_98 = lVar7;
    do {
      lVar6 = lVar9 * 0x90;
      if (*(int *)(*param_2 + 0x1c + lVar6) <= *param_4) {
        lVar8 = *param_2 + lVar6;
        if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
          lVar3 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar3 = local_90;
          }
          iVar5 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(param_1 + 0xe0) - 1U & *(uint *)(lVar8 + 0x18)) * 4);
          if (iVar5 != -1) {
            do {
              if (*(uint *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 0xc) ==
                  *(uint *)(lVar8 + 0x18)) goto LAB_14855121f;
              iVar5 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 0xc + 4);
            } while (iVar5 != -1);
          }
        }
        dVar12 = *(double *)(param_1 + 0x50);
        if (*(char *)(lVar8 + 0x30) == '\x01') {
          iVar5 = *(int *)(lVar8 + 0x20);
          if (iVar5 == 0) {
            dVar12 = *(double *)(lVar8 + 0x28);
          }
          else if (iVar5 == 1) {
            dVar12 = dVar12 * *(double *)(lVar8 + 0x28);
          }
          else if (iVar5 == 2) {
            uVar10 = -(ulonglong)(dVar12 <= *(double *)(lVar8 + 0x28));
            dVar12 = (double)((ulonglong)dVar12 & uVar10 |
                             ~uVar10 & (ulonglong)*(double *)(lVar8 + 0x28));
          }
        }
        pcVar1 = (code *)*param_5;
        plVar4 = (longlong *)param_5[2];
        if ((longlong *)param_5[2] == (longlong *)0x0) {
          plVar4 = local_80;
        }
        uVar2 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(local_78,uVar2,lVar8);
        lVar7 = *param_2;
        pcVar1 = *(code **)(param_1 + 0x10);
        plVar4 = *(longlong **)(param_1 + 0x20);
        if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
          plVar4 = local_88;
        }
        uVar2 = (**(code **)(*plVar4 + 8))();
        dVar11 = (double)(*pcVar1)(uVar2,local_78,lVar7 + lVar6);
        lVar7 = local_98;
        if ((dVar11 < dVar12) &&
           ((dVar11 < *local_a0 || (*(int *)(*param_2 + 0x1c + lVar6) < *param_4)))) {
          *local_a0 = dVar11;
          *param_4 = *(int *)(*param_2 + 0x1c + lVar6);
          local_a4 = (undefined4)lVar9;
        }
      }
LAB_14855121f:
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a4;
}



// FUNCTION 1485513c8 FUN_1485513c8 body=207 status=ok
// SIG undefined FUN_1485513c8(void)

undefined8
FUN_1485513c8(longlong param_1,longlong param_2,double param_3,int param_4,undefined8 *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double extraout_XMM0_Qa;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 0x1c) <= param_4) {
    pcVar1 = (code *)*param_5;
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(local_58,uVar2,param_2);
    pcVar1 = *(code **)(param_1 + 0x10);
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,local_58,param_2);
    if ((extraout_XMM0_Qa < param_3) && (uVar2 = 1, extraout_XMM0_Qa < *(double *)(param_1 + 0x50)))
    goto LAB_1485513ee;
  }
  uVar2 = 0;
LAB_1485513ee:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148551498 FUN_148551498 body=115 status=ok
// SIG undefined FUN_148551498(void)

void FUN_148551498(longlong param_1,void *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xe8) = 1;
  memcpy((void *)(param_1 + 0xf0),param_2,0x90);
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x180) = *param_3;
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  *(undefined8 *)(param_1 + 400) = param_3[2];
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x198) = *param_4;
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  *(undefined8 *)(param_1 + 0x1a8) = param_4[2];
  *(undefined8 *)(param_1 + 0x1b0) = param_5;
  return;
}



// FUNCTION 148551510 FUN_148551510 body=312 status=ok
// SIG undefined FUN_148551510(void)

void FUN_148551510(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (DAT_14c950c29 == '\x01') {
    if (*param_2 != 0) {
      FUN_14689c22e();
      goto LAB_148551533;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_14855155b:
    uVar4 = 0;
  }
  else {
LAB_148551533:
    lVar3 = *param_2;
    *(longlong *)(param_1 + 0x28) = lVar3;
    if ((lVar3 == 0) || (*(longlong **)(lVar3 + 0x68) == (longlong *)0x0)) goto LAB_14855155b;
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x68) + 0x378))();
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  plVar5 = (longlong *)FUN_14494321d(0x290);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af1a360;
  FUN_148522126(plVar5 + 2);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x90);
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x88) = plVar5 + 2;
    plVar6 = *(longlong **)(param_1 + 0x90);
    if (plVar5 == plVar6) {
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
      goto LAB_1485515dc;
    }
    *(longlong **)(param_1 + 0x90) = plVar5;
    if (plVar6 == (longlong *)0x0) goto LAB_1485515dc;
  }
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
  if (plVar5 == (longlong *)0x0) {
    return;
  }
LAB_1485515dc:
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
      return;
    }
  }
  return;
}



// FUNCTION 14855164a FUN_14855164a body=121 status=ok
// SIG undefined FUN_14855164a(void)

undefined8 FUN_14855164a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_1485516b7:
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_144a7a726();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
LAB_148551677:
      lVar1 = FUN_1405babea();
      if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
        lVar2 = lVar1 + 0x30;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar2) goto LAB_1485516bf;
      }
      lVar1 = FUN_1411674f6();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (lVar2 = lVar1 + 0x30,
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar2)) goto LAB_1485516b7;
    }
    else {
      lVar2 = lVar1 + 0x30;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar2) goto LAB_148551677;
    }
LAB_1485516bf:
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1485516c4 FUN_1485516c4 body=552 status=ok
// SIG undefined FUN_1485516c4(void)

void FUN_1485516c4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    lVar7 = FUN_14120ac06();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) goto LAB_1485518bf;
  }
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_140c5bf3a(param_2,&local_78,1);
  uVar2 = uStack_70;
  lVar7 = (longlong)(int)uStack_70;
  uVar5 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
  if (uStack_70._4_4_ < uVar5) {
    FUN_1447d05f2(&local_78,uVar2 & 0xffffffff);
  }
  local_78[lVar7] = param_2;
  if ((longlong)(int)uStack_70 != 0) {
    local_a8 = local_78 + (int)uStack_70;
    plVar9 = local_78;
    do {
      lVar1 = *plVar9;
      lVar7 = lVar1 + 0x250;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar7;
      if (*(int *)(lVar1 + 0x268) == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar11 = *(int *)(lVar1 + 0x268);
      }
      plVar10 = (longlong *)(lVar1 + 0x240);
      uStack_80 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_58;
      uVar3 = local_88;
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = (undefined4)uStack_60;
      uStack_8c = uStack_60._4_4_;
      local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar6 = local_88._4_4_;
      local_a0 = plVar10;
      if ((local_88._4_4_ != iVar11) || (local_88 = uVar3, uStack_60 != lVar7)) {
        do {
          local_88 = uVar3;
          lVar1 = *(longlong *)(*local_a0 + (longlong)iVar6 * 0x10);
          if (lVar1 != 0) {
            lVar8 = FUN_144a3a302();
            if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
               (local_68 = lVar1, cVar4 = (*(code *)*param_3)(param_3[1],&local_68), cVar4 != '\0'))
            {
              (**(code **)(*param_1 + 0x2d8))(param_1,lVar1);
            }
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
          FUN_1449c0562(&local_98);
          iVar6 = local_88._4_4_;
          uVar3 = local_88;
        } while (local_a0 != plVar10 ||
                 (CONCAT44(uStack_8c,uStack_90) != lVar7 || local_88._4_4_ != iVar11));
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_a8);
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8(local_78);
  }
LAB_1485518bf:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485518ee FUN_1485518ee body=411 status=ok
// SIG undefined FUN_1485518ee(void)

void FUN_1485518ee(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 7;
  local_78 = 0;
  uStack_70 = 0;
  plVar2 = param_1 + 9;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if ((int)param_1[0xc] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_1[0xc];
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != plVar2)) {
    do {
      uVar4 = uStack_70;
      if (*(longlong *)(*local_a0 + 8 + (longlong)iStack_84 * 0x18) == param_2) {
        uVar3 = *(undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x18);
        lVar8 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_140c43e06(&local_78,uVar4 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar8 * 8) = uVar3;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      lVar8 = local_78;
    } while (local_a0 != plVar1 ||
             ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar2 || iStack_84 != iVar7));
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        (**(code **)(*param_1 + 0x2e0))(param_1,*(undefined8 *)(lVar8 + lVar9));
        lVar9 = lVar9 + 8;
      } while (lVar6 * 8 != lVar9);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148551a8a FUN_148551a8a body=311 status=ok
// SIG undefined FUN_148551a8a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148551a8a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_2;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    cVar3 = (**(code **)(*param_1 + 0x2c0))();
    if (cVar3 != '\0') {
      local_4c = 0;
      (**(code **)(*(longlong *)param_1[0x11] + 8))((longlong *)param_1[0x11],param_2);
      local_68[2] = *(longlong *)(param_2 + 0xa8);
      local_38 = local_68 + 2;
      local_40 = &local_48;
      plVar1 = local_68 + 1;
      FUN_14855c3be(param_1 + 7,plVar1);
      lVar2 = local_48;
      if (local_48 != 0) {
        lVar4 = FUN_1411674f6();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_68[2] = lVar2;
          FUN_148551bc2(lVar2 + 0x6c8,&local_40,param_1);
          local_68[1] = 0;
          FUN_14485c47a(plVar1,lVar2);
          local_40 = local_68;
          local_68[0] = lVar2;
          local_38 = plVar1;
          FUN_14855cb42(param_1 + 0x15,local_2c,&local_40);
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



// FUNCTION 148551bc2 FUN_148551bc2 body=258 status=ok
// SIG undefined FUN_148551bc2(void)

undefined8
FUN_148551bc2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14af1a3f0;
  local_40[1] = *param_4;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14af1a380;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_148551cc6;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148551cc6 FUN_148551cc6 body=117 status=ok
// SIG undefined FUN_148551cc6(void)

void FUN_148551cc6(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    FUN_14855d1f6(param_1 + 0x100,local_14,&local_10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x88) + 0x30);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148551d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_1 + 0x88),param_2,0,UNRECOVERED_JUMPTABLE);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 148551d42 FUN_148551d42 body=256 status=ok
// SIG undefined FUN_148551d42(void)

void FUN_148551d42(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  FUN_14855d03e(param_1 + 0x38,param_2);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          puVar6 = puVar1 + 1;
          if (puVar6 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return;
          }
          cVar2 = FUN_144729dda(puVar6);
          if (cVar2 != '\0') {
            lVar4 = FUN_14479d2ce(puVar6);
            FUN_140457ffc(lVar4 + 0x6c8,param_1);
          }
          FUN_14855d11a((longlong *)(param_1 + 0xa8),param_2);
          return;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 148551e42 FUN_148551e42 body=85 status=ok
// SIG undefined FUN_148551e42(void)

void FUN_148551e42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a3a302();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148551e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                (*(longlong **)(param_1 + 0x88),param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 148551ea0 FUN_148551ea0 body=336 status=ok
// SIG undefined FUN_148551ea0(void)

void FUN_148551ea0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x100);
    lVar2 = param_1 + 0x110;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    iVar5 = 0;
    local_50 = lVar2;
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_1449c0562(&local_58);
      iVar5 = *(int *)(param_1 + 0x128);
    }
    local_68 = local_48;
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar5) || (local_50 != lVar2)) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                  (*(longlong **)(param_1 + 0x88),
                   *(undefined8 *)(*local_80 + (longlong)iVar4 * 0x10),param_2 ^ 1);
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_80 != plVar1 || (local_70 != lVar2 || local_68._4_4_ != iVar5));
    }
    local_68 = uVar3;
    FUN_148551ff2(plVar1);
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148551ff2 FUN_148551ff2 body=68 status=ok
// SIG undefined FUN_148551ff2(void)

void FUN_148551ff2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14855d6e2();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148552036 FUN_148552036 body=264 status=ok
// SIG undefined FUN_148552036(void)

void FUN_148552036(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [28];
  char local_74;
  undefined8 local_68;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = FUN_144a6c4d8();
  if ((local_a8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_a8);
  }
  FUN_14146ff3c(local_98,param_2,&local_a8,5);
  if (local_74 == '\0') {
    do {
      local_a0 = local_68;
      cVar1 = (*(code *)*param_3)(param_3[1],&local_a0);
      if (cVar1 != '\0') {
        local_b8 = *param_4;
        local_b0 = param_4[1];
        (**(code **)(*param_1 + 0x2c8))(param_1,local_68,&local_b8);
      }
      FUN_14146ffc0(local_98);
    } while (local_74 == '\0');
  }
  if (local_40 == '\x01') {
    FUN_14024445c(local_90);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148552166 FUN_148552166 body=464 status=ok
// SIG undefined FUN_148552166(void)

undefined8 FUN_148552166(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8 [32];
  char local_b8;
  double local_b0 [5];
  undefined1 local_87 [63];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar4 = *(longlong **)(param_1 + 0x30);
  if ((plVar4 != (longlong *)0x0) && ((param_2[1] & 4) != 0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,local_d8);
    if (local_b8 == '\x01') {
      FUN_141706cfc(&local_f0,param_2 + 0x70);
      puVar8 = local_d8;
      pdVar5 = local_b0;
      if (param_2[0x40] != '\0') {
        puVar8 = param_2;
        pdVar5 = (double *)(param_2 + 0x28);
      }
      dVar1 = *(double *)(puVar8 + 0x30);
      dVar2 = *(double *)(puVar8 + 0x38);
      if ((dVar2 != 0.0) || (NAN(dVar2))) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (dVar2 * 0.5 + local_e0) / dVar2;
        auVar9 = roundpd(auVar9,auVar9,1);
        local_e0 = auVar9._0_8_ * dVar2;
      }
      dVar2 = *pdVar5;
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (dVar1 * 0.5 + local_e8) / dVar1;
        auVar9 = roundpd(auVar10,auVar10,1);
        local_e8 = auVar9._0_8_ * dVar1;
      }
      if ((dVar2 != 0.0) || (NAN(dVar2))) {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (dVar2 * 0.5 + local_f0) / dVar2;
        auVar9 = roundpd(auVar11,auVar11,1);
        local_f0 = auVar9._0_8_ * dVar2;
      }
      FUN_144a7484c(&local_f0,&local_118);
      local_38 = local_108;
      uStack_30 = uStack_100;
      local_48 = local_118;
      uStack_40 = uStack_110;
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_14855d826(param_3,iVar3);
      }
      puVar7 = (undefined8 *)((longlong)iVar3 * 0xc0 + *param_3);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar7 + 2) = 4;
      memcpy((void *)((longlong)puVar7 + 0x11),local_87,0x5f);
      uVar6 = 1;
      goto LAB_148552304;
    }
  }
  uVar6 = 0;
LAB_148552304:
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148552338 FUN_148552338 body=959 status=ok
// SIG undefined FUN_148552338(void)

ulonglong FUN_148552338(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_428 [32];
  undefined4 *local_408;
  undefined4 *local_400;
  undefined8 *local_3f8;
  undefined4 *local_3f0;
  undefined1 local_3e8 [184];
  undefined1 local_330 [32];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_244;
  undefined1 local_230 [24];
  undefined4 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [88];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_428;
  plVar1 = *(longlong **)(param_1 + 0x30);
  puVar7 = (undefined8 *)0x0;
  if (plVar1 != (longlong *)0x0) {
    local_f8 = *param_2;
    uStack_f4 = param_2[1];
    uStack_f0 = param_2[2];
    uStack_ec = param_2[3];
    local_e8 = param_2[4];
    uStack_e4 = param_2[5];
    uStack_e0 = param_2[6];
    uStack_dc = param_2[7];
    local_d8 = param_2[8];
    uStack_d4 = param_2[9];
    uStack_d0 = param_2[10];
    uStack_cc = param_2[0xb];
    (**(code **)(*plVar1 + 0x18))(plVar1,local_c8);
    local_188 = DAT_14c8464f0;
    local_198 = (undefined4)DAT_14c8464e0;
    uStack_194 = DAT_14c8464e0._4_4_;
    uStack_190 = (undefined4)DAT_14c8464e8;
    uStack_18c = DAT_14c8464e8._4_4_;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0x3ff0000000000000;
    local_168 = 0x47efffffe0000000;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0xffffffffffffffff;
    local_148 = 0;
    local_140 = (undefined4)DAT_14c8464e0;
    uStack_13c = DAT_14c8464e0._4_4_;
    uStack_138 = (undefined4)DAT_14c8464e8;
    uStack_134 = DAT_14c8464e8._4_4_;
    local_130 = DAT_14c8464f0;
    local_128 = (undefined4)DAT_14c8464e0;
    uStack_124 = DAT_14c8464e0._4_4_;
    uStack_120 = (undefined4)DAT_14c8464e8;
    uStack_11c = DAT_14c8464e8._4_4_;
    local_118 = DAT_14c8464f0;
    local_100 = DAT_14c8464f0;
    local_110 = (undefined4)DAT_14c8464e0;
    uStack_10c = DAT_14c8464e0._4_4_;
    uStack_108 = (undefined4)DAT_14c8464e8;
    uStack_104 = DAT_14c8464e8._4_4_;
    local_19c = 0;
    local_400 = (undefined4 *)0x7fefffffffffffff;
    local_408 = param_2 + 0xe;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))();
    if (cVar4 == '\0') {
      uVar8 = 0xffffffff;
      uVar9 = 0x7fefffff;
    }
    else {
      local_408 = (undefined4 *)CONCAT71(local_408._1_7_,1);
      local_400 = &local_2e8;
      local_3f8 = &local_1b8;
      local_3f0 = &local_1d0;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x40))
                (*(longlong **)(param_1 + 0x88),local_19c,local_148,local_150._4_4_);
      uVar8 = (undefined4)local_168;
      uVar9 = (undefined4)((ulonglong)local_168 >> 0x20);
      *param_3 = local_160;
      param_3[1] = uStack_158;
      *(undefined4 *)(param_3 + 8) = local_150._4_4_;
      param_3[4] = local_100;
      *(undefined4 *)(param_3 + 2) = local_110;
      *(undefined4 *)((longlong)param_3 + 0x14) = uStack_10c;
      *(undefined4 *)(param_3 + 3) = uStack_108;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_104;
      puVar7 = &local_1e8;
      FUN_146baf581(puVar7,&local_2e8,&local_1b8,&local_1d0);
      param_3[7] = local_1d8;
      param_3[5] = local_1e8;
      param_3[6] = uStack_1e0;
      param_3[0xb] = local_2d8;
      param_3[9] = CONCAT44(uStack_2e4,local_2e8);
      param_3[10] = CONCAT44(uStack_2dc,fStack_2e0);
      param_3[0xe] = local_1a8;
      param_3[0xc] = local_1b8;
      param_3[0xd] = uStack_1b0;
      *(undefined4 *)(param_3 + 0xf) = local_1d0;
      *(undefined4 *)((longlong)param_3 + 0x7c) = uStack_1cc;
      *(undefined4 *)(param_3 + 0x10) = uStack_1c8;
      *(undefined4 *)((longlong)param_3 + 0x84) = uStack_1c4;
      param_3[0x11] = local_1c0;
      FUN_14845206e(param_3);
    }
    memset(&local_2e8,0,0x100);
    local_218 = 0xffffffff;
    uStack_2e4 = 0x3f800000;
    local_244 = 0xffffffff;
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
    local_408 = (undefined4 *)uVar6;
    cVar4 = FUN_143ba7710(uVar5,&local_2e8,&local_f8,param_2 + 0xe);
    dVar3 = (double)CONCAT44(uVar9,uVar8);
    if ((cVar4 != '\0') &&
       (dVar2 = (double)fStack_2e0, dVar3 = (double)CONCAT44(uVar9,uVar8),
       dVar2 <= (double)CONCAT44(uVar9,uVar8) && (double)CONCAT44(uVar9,uVar8) != dVar2)) {
      uVar6 = FUN_14485cccc(local_230);
      *param_3 = uVar6;
      uVar6 = FUN_14479d2ce(&local_210);
      param_3[1] = uVar6;
      *(undefined4 *)(param_3 + 8) = local_2e8;
      param_3[4] = local_2c8;
      param_3[2] = local_2d8;
      param_3[3] = uStack_2d0;
      param_3[5] = local_2a8;
      param_3[6] = uStack_2a0;
      param_3[7] = local_298;
      memcpy(param_3 + 0x12,&local_2e8,0x100);
      dVar3 = dVar2;
      if (*(char *)(param_2 + 0xc) == '\x01') {
        memcpy(local_3e8,&local_2e8,0xb8);
        FUN_144b23946(local_330,local_230);
        local_310 = local_210;
        uStack_30c = uStack_20c;
        uStack_308 = uStack_208;
        uStack_304 = uStack_204;
        local_300 = local_200;
        uStack_2fc = uStack_1fc;
        uStack_2f8 = uStack_1f8;
        uStack_2f4 = uStack_1f4;
        local_2f0 = local_1f0;
        FUN_1485526f8(local_3e8,param_3 + 9);
      }
    }
    puVar7 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar7 >> 8),dVar3 < 1.79769313486232e+308);
  }
  if ((local_70 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar7 & 0xffffffff;
}



// FUNCTION 1485526f8 FUN_1485526f8 body=1374 status=ok
// SIG undefined FUN_1485526f8(void)

undefined8 FUN_1485526f8(int *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  uint uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  undefined8 uVar32;
  ulonglong uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_138 [32];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 uStack_100;
  longlong local_f0;
  int local_e8;
  char local_e4;
  ulonglong local_e0;
  double dVar7;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar22 = FUN_144729dda(param_1 + 0x36);
  if ((cVar22 != '\0') && (-1 < *param_1)) {
    lVar26 = FUN_14479d2ce(param_1 + 0x36);
    if (lVar26 != 0) {
      lVar27 = FUN_144a7a726();
      if ((*(int *)(lVar27 + 0x38) <= *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar27 + 0x38) * 8) == lVar27 + 0x30)) {
        lVar27 = *(longlong *)(lVar26 + 0x660);
        if ((lVar27 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar27);
        }
        uVar23 = FUN_144b2ac06(lVar27,0);
        plVar28 = (longlong *)FUN_144b2abfe(lVar27);
        uVar24 = (uint)*(byte *)((longlong)plVar28 + 0x8f);
        if ((int)(uint)*(byte *)((longlong)plVar28 + 0x8f) < (int)uVar23) {
          uVar24 = uVar23;
        }
        uVar24 = FUN_144b2aba8(plVar28,uVar24);
        uVar32 = 0;
        if ((int)uVar24 < 0) goto LAB_1485527c2;
        if (((int)uVar24 < (int)plVar28[1]) &&
           (lVar27 = *(longlong *)(*plVar28 + (ulonglong)uVar24 * 8), lVar27 != 0)) {
          FUN_1461c3a4c(lVar27 + 0x198,&local_f0);
          lVar29 = (longlong)*param_1;
          iVar31 = *param_1 * 3 + 2;
          if (iVar31 < local_e8) {
            if (local_e4 == '\x01') {
              uVar24 = *(uint *)(local_f0 + lVar29 * 0xc);
              uVar23 = *(uint *)(local_f0 + 4 + lVar29 * 0xc);
              uVar25 = *(uint *)(local_f0 + (longlong)iVar31 * 4);
            }
            else {
              uVar24 = (uint)*(ushort *)(local_f0 + lVar29 * 6);
              uVar23 = (uint)*(ushort *)(local_f0 + 2 + lVar29 * 6);
              uVar25 = (uint)*(ushort *)(local_f0 + (longlong)iVar31 * 2);
            }
            uVar8 = *(uint *)(lVar27 + 0x14c);
            uVar32 = 0;
            if (((uVar25 < uVar8) && (uVar24 < uVar8)) && (uVar32 = 0, uVar23 < uVar8)) {
              lVar29 = *(longlong *)(lVar27 + 0x140);
              iVar31 = *(int *)(lVar27 + 0x148);
              uVar33 = (ulonglong)(uVar24 * iVar31);
              uVar30 = (ulonglong)(uVar23 * iVar31);
              fVar1 = *(float *)(lVar29 + 8 + uVar30);
              fVar2 = *(float *)(lVar29 + 4 + uVar30);
              fVar3 = *(float *)(lVar29 + uVar30);
              uVar30 = (ulonglong)(uVar25 * iVar31);
              fVar4 = *(float *)(lVar29 + 4 + uVar30);
              fVar5 = *(float *)(lVar29 + uVar30);
              dVar18 = *(double *)(lVar26 + 0x240);
              dVar19 = *(double *)(lVar26 + 0x248);
              dVar20 = *(double *)(lVar26 + 0x250);
              dVar34 = *(double *)(lVar26 + 0x280);
              dVar35 = *(double *)(lVar26 + 0x288);
              local_118 = *(double *)(lVar26 + 0x290);
              uStack_110 = *(undefined8 *)(lVar26 + 0x298);
              dVar10 = (double)*(float *)(lVar29 + uVar33) * dVar34;
              dVar11 = (double)*(float *)(lVar29 + 4 + uVar33) * dVar35;
              dVar37 = (double)*(float *)(lVar29 + 8 + uVar33) * local_118;
              dVar6 = *(double *)(lVar26 + 600);
              dVar7 = *(double *)(lVar26 + 600);
              dVar36 = dVar11 * dVar18 - dVar19 * dVar10;
              dVar14 = dVar37 * dVar19 - dVar20 * dVar11;
              dVar15 = dVar10 * dVar20 - dVar18 * dVar37;
              dVar14 = dVar14 + dVar14;
              dVar15 = dVar15 + dVar15;
              dVar36 = dVar36 + dVar36;
              local_108 = (double)*(float *)(lVar29 + 8 + uVar30);
              uStack_100 = 0;
              dVar21 = *(double *)(lVar26 + 0x260);
              dVar13 = *(double *)(lVar26 + 0x268);
              dVar17 = (dVar20 * dVar14 - dVar18 * dVar36) + dVar7 * dVar15 + dVar11 + dVar13;
              dVar11 = *(double *)(lVar26 + 0x270);
              auVar16._8_4_ = SUB84(dVar17,0);
              auVar16._0_8_ = (dVar36 * dVar19 - dVar15 * dVar20) + dVar6 * dVar14 + dVar10 + dVar21
              ;
              auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
              *param_2 = auVar16;
              *(double *)param_2[1] =
                   dVar36 * dVar6 + dVar37 + (dVar15 * dVar18 - dVar14 * dVar19) + dVar11;
              dVar14 = (double)fVar3 * dVar34;
              dVar36 = (double)fVar2 * dVar35;
              dVar37 = (double)fVar1 * local_118;
              dVar15 = dVar36 * dVar18 - dVar19 * dVar14;
              dVar17 = dVar37 * dVar19 - dVar20 * dVar36;
              dVar10 = dVar14 * dVar20 - dVar18 * dVar37;
              dVar17 = dVar17 + dVar17;
              dVar10 = dVar10 + dVar10;
              dVar15 = dVar15 + dVar15;
              dVar36 = (dVar20 * dVar17 - dVar18 * dVar15) + dVar7 * dVar10 + dVar36 + dVar13;
              auVar9._8_4_ = SUB84(dVar36,0);
              auVar9._0_8_ = (dVar15 * dVar19 - dVar10 * dVar20) + dVar6 * dVar17 + dVar14 + dVar21;
              auVar9._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
              *(undefined1 (*) [16])(param_2[1] + 8) = auVar9;
              *(double *)(param_2[2] + 8) =
                   dVar15 * dVar6 + dVar37 + (dVar10 * dVar18 - dVar17 * dVar19) + dVar11;
              dVar34 = (double)fVar5 * dVar34;
              dVar35 = (double)fVar4 * dVar35;
              dVar15 = local_108 * local_118;
              dVar36 = dVar35 * dVar18 - dVar19 * dVar34;
              dVar14 = dVar15 * dVar19 - dVar20 * dVar35;
              dVar10 = dVar34 * dVar20 - dVar18 * dVar15;
              dVar14 = dVar14 + dVar14;
              dVar10 = dVar10 + dVar10;
              dVar36 = dVar36 + dVar36;
              dVar13 = (dVar20 * dVar14 - dVar18 * dVar36) + dVar7 * dVar10 + dVar35 + dVar13;
              auVar12._8_4_ = SUB84(dVar13,0);
              auVar12._0_8_ = (dVar36 * dVar19 - dVar10 * dVar20) + dVar6 * dVar14 + dVar34 + dVar21
              ;
              auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
              param_2[3] = auVar12;
              *(double *)param_2[4] =
                   dVar36 * dVar6 + dVar15 + (dVar10 * dVar18 - dVar14 * dVar19) + dVar11;
              uVar32 = 1;
            }
            goto LAB_1485527c2;
          }
        }
      }
    }
  }
  uVar32 = 0;
LAB_1485527c2:
  if ((local_e0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar32;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148552c58 FUN_148552c58 body=1965 status=ok
// SIG undefined FUN_148552c58(void)

bool FUN_148552c58(longlong param_1,char *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  float *pfVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_5b8 [32];
  double *local_598;
  double *local_590;
  undefined8 *local_588;
  undefined8 *local_580;
  longlong *local_578;
  char *local_570;
  undefined1 local_568 [184];
  undefined1 local_4b0 [32];
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  double local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  double local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  char local_3a0 [4];
  undefined4 local_39c;
  float local_398 [8];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_2fc;
  undefined1 local_2e8 [24];
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  double local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  plVar11 = *(longlong **)(param_1 + 0x30);
  iVar13 = 0;
  bVar15 = false;
  if (plVar11 == (longlong *)0x0) goto LAB_148552f81;
  if ((param_2[1] & 4U) != 0) {
    (**(code **)(*plVar11 + 0x30))(plVar11,local_3a0);
    iVar13 = 0;
    if (local_3a0[0] == '\x01') {
      pcVar14 = local_3a0;
      pfVar7 = local_398;
      if (param_2[0x20] != '\0') {
        pcVar14 = param_2;
        pfVar7 = (float *)(param_2 + 8);
      }
      uVar10 = *(undefined8 *)(pcVar14 + 0x10);
      uVar1 = *(undefined8 *)(pcVar14 + 0x18);
      uVar5 = FUN_14841a253((int)*(undefined8 *)(param_2 + 0x48),(int)*(undefined8 *)pfVar7,0);
      uVar10 = FUN_14841a253((int)*(undefined8 *)(param_2 + 0x50),(int)uVar10,0);
      uVar1 = FUN_14841a253((int)*(undefined8 *)(param_2 + 0x58),(int)uVar1,0);
      iVar13 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar13 + 1U) {
        FUN_14855d826(param_3,iVar13);
      }
      lVar4 = *param_3;
      lVar12 = (longlong)iVar13 * 0xc0;
      *(undefined8 *)(lVar4 + lVar12) = 0;
      ((undefined8 *)(lVar4 + lVar12))[1] = 0;
      *(undefined1 *)(lVar4 + 0x10 + lVar12) = 4;
      *(undefined8 *)(lVar4 + 0x18 + lVar12) = uVar5;
      *(undefined8 *)(lVar4 + 0x20 + lVar12) = uVar10;
      *(undefined8 *)(lVar4 + 0x28 + lVar12) = uVar1;
      iVar13 = 1;
    }
    plVar11 = *(longlong **)(param_1 + 0x30);
  }
  (**(code **)(*plVar11 + 0x18))(plVar11,&local_d8);
  local_1a8 = local_c8;
  local_1b8 = local_d8;
  dStack_1b0 = dStack_d0;
  local_1c0 = *(double *)(param_2 + 0x58) - local_c8;
  local_1c8 = *(double *)(param_2 + 0x50) - dStack_d0;
  dVar17 = *(double *)(param_2 + 0x48) - local_d8;
  dVar16 = SQRT(local_1c0 * local_1c0 + dVar17 * dVar17 + local_1c8 * local_1c8);
  dVar6 = 1.0 / dVar16;
  if (0.0 < dVar16) {
    local_1c0 = local_1c0 * dVar6;
    local_1c8 = local_1c8 * dVar6;
  }
  else {
    local_1c0 = 0.0;
    local_1c8 = 0.0;
  }
  local_1d0 = (double)(-(ulonglong)(0.0 < dVar16) & (ulonglong)(dVar17 * dVar6));
  local_1d8 = local_c8;
  local_1e8 = local_d8;
  dStack_1e0 = dStack_d0;
  dVar16 = local_1c0 * local_1c0 + local_1d0 * local_1d0 + local_1c8 * local_1c8;
  if (9.99999993922529e-09 < dVar16) {
    dVar16 = 1.0 / SQRT(dVar16);
    local_1d0 = local_1d0 * dVar16;
    local_1c8 = local_1c8 * dVar16;
    local_1c0 = local_1c0 * dVar16;
  }
  local_570 = param_2 + 0x48;
  local_1f8 = *(undefined8 *)(param_2 + 0x90);
  local_1f0 = *(undefined8 *)(param_2 + 0x98);
  local_288 = DAT_14c8464f0;
  local_298 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_290 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0x3ff0000000000000;
  local_268 = 3.4028234663852886e+38;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0xffffffffffffffff;
  local_248 = 0;
  local_230 = DAT_14c8464f0;
  local_228 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_220 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_218 = DAT_14c8464f0;
  local_210 = (undefined4)DAT_14c8464e0;
  uStack_20c = DAT_14c8464e0._4_4_;
  uStack_208 = (undefined4)DAT_14c8464e8;
  uStack_204 = DAT_14c8464e8._4_4_;
  local_200 = DAT_14c8464f0;
  local_29c = 0;
  local_590 = (double *)0x7fefffffffffffff;
  local_598 = (double *)&local_1f8;
  local_578 = param_3;
  local_240 = local_298;
  uStack_238 = uStack_290;
  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x38))();
  memset(local_3a0,0,0x100);
  local_2d0 = 0xffffffff;
  local_39c = 0x3f800000;
  local_2fc = 0xffffffff;
  pdVar3 = *(double **)(param_1 + 0x88);
  uVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
  local_598 = pdVar3;
  cVar9 = FUN_143ba7710(uVar10,local_3a0,&local_1e8,&local_1f8);
  if ((cVar8 == '\0') || (cVar9 == '\0')) {
    if (cVar8 != '\0') goto LAB_14855318d;
LAB_148552f77:
    if (cVar9 != '\0') goto LAB_148552fe5;
  }
  else {
    if (local_268 < (double)local_398[0]) {
      cVar9 = '\0';
LAB_14855318d:
      local_3a8 = local_200;
      local_3b8 = CONCAT44(uStack_20c,local_210);
      uStack_3b0 = CONCAT44(uStack_204,uStack_208);
      local_3d8 = *(undefined4 *)local_570;
      uStack_3d4 = *(undefined4 *)(local_570 + 4);
      uStack_3d0 = *(undefined4 *)(local_570 + 8);
      uStack_3cc = *(undefined4 *)(local_570 + 0xc);
      local_3c8 = *(undefined8 *)(local_570 + 0x10);
      dVar16 = (double)FUN_148553406(&local_3d8,&local_3b8,&local_1b8);
      if (dVar16 < (double)*(float *)(param_2 + 0x60)) {
        local_580 = &local_420;
        local_588 = &local_408;
        local_590 = &local_3f0;
        local_598 = (double *)CONCAT71(local_598._1_7_,1);
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x40))
                  (*(longlong **)(param_1 + 0x88),local_29c,local_248,local_250._4_4_);
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        local_128 = local_3f0;
        uStack_120 = uStack_3e8;
        local_118 = local_3e0;
        local_110 = local_408;
        uStack_108 = uStack_400;
        local_100 = local_3f8;
        local_f8 = local_420;
        uStack_f0 = uStack_418;
        local_e8 = local_410;
        local_428 = (double)*(float *)(param_2 + 0x60);
        FUN_143ba7c60(param_2,&local_1e8,&local_198,&local_428);
        local_598 = &local_428;
        FUN_143ba7d42(param_2,&local_210,&local_1e8,&local_198);
        plVar11 = local_578;
        if (local_428 < (double)*(float *)(param_2 + 0x60)) {
          local_198 = local_260;
          uStack_190 = uStack_258;
          iVar2 = (int)local_578[1];
          *(uint *)(local_578 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)local_578 + 0xc) < iVar2 + 1U) {
            FUN_14855d826(local_578,iVar2);
          }
          memcpy((void *)((longlong)iVar2 * 0xc0 + *plVar11),&local_198,0xc0);
          iVar13 = iVar13 + 1;
        }
      }
      goto LAB_148552f77;
    }
LAB_148552fe5:
    local_438 = local_368;
    local_448 = local_378;
    uStack_440 = uStack_370;
    local_468 = *(undefined4 *)local_570;
    uStack_464 = *(undefined4 *)(local_570 + 4);
    uStack_460 = *(undefined4 *)(local_570 + 8);
    uStack_45c = *(undefined4 *)(local_570 + 0xc);
    local_458 = *(undefined8 *)(local_570 + 0x10);
    dVar16 = (double)FUN_148553406(&local_468,&local_448,&local_1b8);
    if (dVar16 < (double)*(float *)(param_2 + 0x60)) {
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      memcpy(local_568,local_3a0,0xb8);
      FUN_144b23946(local_4b0,local_2e8);
      local_490 = local_2c8;
      uStack_48c = uStack_2c4;
      uStack_488 = uStack_2c0;
      uStack_484 = uStack_2bc;
      local_480 = local_2b8;
      uStack_47c = uStack_2b4;
      uStack_478 = uStack_2b0;
      uStack_474 = uStack_2ac;
      local_470 = local_2a8;
      cVar8 = FUN_1485526f8(local_568,&local_128);
      if (cVar8 != '\0') {
        local_3f0 = (double)*(float *)(param_2 + 0x60);
        FUN_143ba7c60(param_2,&local_1e8,&local_198,&local_3f0);
        local_598 = &local_3f0;
        FUN_143ba7d42(param_2,&local_378,&local_1e8,&local_198);
        if (local_3f0 < (double)*(float *)(param_2 + 0x60)) {
          local_198 = FUN_14485cccc(local_2e8);
          uStack_190 = FUN_14479d2ce(&local_2c8);
          plVar11 = local_578;
          iVar2 = (int)local_578[1];
          *(uint *)(local_578 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)local_578 + 0xc) < iVar2 + 1U) {
            FUN_14855d826(local_578,iVar2);
          }
          memcpy((void *)((longlong)iVar2 * 0xc0 + *plVar11),&local_198,0xc0);
          iVar13 = iVar13 + 1;
        }
      }
    }
  }
  bVar15 = iVar13 != 0;
LAB_148552f81:
  if ((local_80 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar15;
}



// FUNCTION 148553406 FUN_148553406 body=377 status=ok
// SIG undefined FUN_148553406(void)

double FUN_148553406(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *param_1 - *param_3;
  *param_1 = dVar1;
  dVar3 = param_1[1] - param_3[1];
  param_1[1] = dVar3;
  dVar4 = param_1[2] - param_3[2];
  dVar5 = SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar3 * dVar3);
  dVar2 = 1.0 / dVar5;
  if (0.0 < dVar5) {
    dVar1 = dVar1 * dVar2;
    dVar3 = dVar3 * dVar2;
  }
  else {
    dVar1 = 0.0;
    dVar3 = 0.0;
  }
  *param_1 = dVar1;
  param_1[1] = dVar3;
  param_1[2] = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar4 * dVar2));
  dVar3 = *param_2 - *param_3;
  *param_2 = dVar3;
  dVar1 = param_2[1] - param_3[1];
  param_2[1] = dVar1;
  dVar4 = param_2[2] - param_3[2];
  dVar5 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar1 * dVar1);
  dVar2 = 1.0 / dVar5;
  if (0.0 < dVar5) {
    dVar3 = dVar3 * dVar2;
    dVar1 = dVar1 * dVar2;
  }
  else {
    dVar3 = 0.0;
    dVar1 = 0.0;
  }
  dVar2 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(dVar4 * dVar2));
  *param_2 = dVar3;
  param_2[1] = dVar1;
  param_2[2] = dVar2;
  dVar1 = param_1[2] * dVar2 + dVar3 * *param_1 + dVar1 * param_1[1];
  dVar2 = 1.0;
  if (dVar1 <= 1.0) {
    dVar2 = dVar1;
  }
  dVar2 = acos((double)(-(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar2));
  return dVar2 * 57.29577951308232;
}



// FUNCTION 148553580 FUN_148553580 body=71 status=ok
// SIG undefined FUN_148553580(void)

void FUN_148553580(longlong param_1)

{
  FUN_145b25a94();
  if (*(int *)(param_1 + 0x2cc) < 0) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    FUN_1447a8aa0(param_1 + 0x2c0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
  }
  FUN_1485535c8(param_1);
  return;
}



// FUNCTION 1485535c8 FUN_1485535c8 body=192 status=ok
// SIG undefined FUN_1485535c8(void)

void FUN_1485535c8(longlong param_1)

{
  if (*(int *)(param_1 + 0x214) < 0) {
    *(undefined4 *)(param_1 + 0x210) = 0;
    FUN_14855bf7c(param_1 + 0x208);
  }
  else {
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  if (*(int *)(param_1 + 0x224) < 0) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_14855bf4c(param_1 + 0x218);
  }
  else {
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  if (*(int *)(param_1 + 0x234) < 0) {
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_14855d8ba(param_1 + 0x228);
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2dc)) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  FUN_14855bf4c(param_1 + 0x2d0);
  return;
}



// FUNCTION 148553688 FUN_148553688 body=33 status=ok
// SIG undefined FUN_148553688(void)

void FUN_148553688(longlong param_1)

{
  FUN_1405b70a4(param_1 + 0x2c0);
  FUN_1485535c8(param_1);
  return;
}



// FUNCTION 1485536aa FUN_1485536aa body=146 status=ok
// SIG undefined FUN_1485536aa(void)

void FUN_1485536aa(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x2c8);
  *(uint *)(param_1 + 0x2c8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_1403e3958(param_1 + 0x2c0,iVar2);
  }
  lVar4 = (longlong)param_3 * 0x18;
  memmove((void *)(*(longlong *)(param_1 + 0x2c0) + lVar4 + 0x18),
          (void *)(*(longlong *)(param_1 + 0x2c0) + lVar4),(ulonglong)(uint)(iVar2 - param_3) * 0x18
         );
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = *(undefined8 *)(param_2 + 4);
  FUN_1485535c8(param_1);
  return;
}



// FUNCTION 14855373c FUN_14855373c body=111 status=ok
// SIG undefined FUN_14855373c(void)

void FUN_14855373c(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c8);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x2c0) + (longlong)(int)param_2 * 0x18),
            (void *)(*(longlong *)(param_1 + 0x2c0) + (longlong)(int)param_2 * 0x18 + 0x18),
            (longlong)(int)(~param_2 + iVar1) * 0x18);
    iVar1 = *(int *)(param_1 + 0x2c8);
  }
  *(int *)(param_1 + 0x2c8) = iVar1 + -1;
  FUN_140704026(param_1 + 0x2c0);
  FUN_1485535c8(param_1);
  return;
}



// FUNCTION 1485537ac FUN_1485537ac body=1322 status=ok
// SIG undefined FUN_1485537ac(void)

void FUN_1485537ac(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_148 [40];
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1485535c8();
  iVar11 = *(int *)(param_1 + 0x2c8);
  lVar16 = (longlong)iVar11;
  if (lVar16 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x2c0);
    dVar5 = *(double *)(lVar15 + -0x18 + lVar16 * 0x18);
    dVar6 = *(double *)(lVar15 + -0x10 + lVar16 * 0x18);
    dVar7 = *(double *)(lVar15 + -8 + lVar16 * 0x18);
    if (param_2 != '\0') {
      uVar17 = *(undefined4 *)(param_1 + 500);
      dVar8 = *(double *)(param_1 + 0x1d0);
      dVar9 = *(double *)(param_1 + 0x1d8);
      dVar13 = dVar9 + dVar9;
      dVar10 = *(double *)(param_1 + 0x1e0);
      dVar18 = dVar10 + dVar10;
      dVar19 = *(double *)(param_1 + 0x1e8);
      plVar1 = (longlong *)(param_1 + 0x208);
      iVar12 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar12 + 1U) {
        FUN_14855c11e(plVar1,iVar12);
      }
      lVar15 = *(longlong *)(param_1 + 0x208);
      lVar14 = (longlong)iVar12 * 0x38;
      *(double *)(lVar15 + lVar14) = dVar5;
      *(double *)(lVar15 + 8 + lVar14) = dVar6;
      *(double *)(lVar15 + 0x10 + lVar14) = dVar7;
      *(double *)(lVar15 + 0x18 + lVar14) = 1.0 - (dVar18 * dVar10 + dVar9 * dVar13);
      *(double *)(lVar15 + 0x20 + lVar14) = dVar13 * dVar8 + dVar19 * dVar18;
      *(double *)(lVar15 + 0x28 + lVar14) = dVar8 * dVar18 - dVar13 * dVar19;
      *(undefined4 *)(lVar15 + 0x30 + lVar14) = 10;
      *(undefined4 *)(lVar15 + 0x34 + lVar14) = uVar17;
      dVar8 = *(double *)(param_1 + 0x1d0);
      dVar9 = *(double *)(param_1 + 0x1d8);
      dVar10 = *(double *)(param_1 + 0x1e0);
      dVar18 = dVar10 + dVar10;
      dVar19 = *(double *)(param_1 + 0x1e8);
      iVar12 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar12 + 1U) {
        FUN_14855c11e(plVar1,iVar12);
      }
      lVar15 = *plVar1;
      lVar14 = (longlong)iVar12 * 0x38;
      *(double *)(lVar15 + lVar14) = dVar5;
      *(double *)(lVar15 + 8 + lVar14) = dVar6;
      *(double *)(lVar15 + 0x10 + lVar14) = dVar7;
      *(double *)(lVar15 + 0x18 + lVar14) = (dVar9 + dVar9) * dVar8 - dVar19 * dVar18;
      *(double *)(lVar15 + 0x20 + lVar14) = 1.0 - (dVar18 * dVar10 + dVar8 * (dVar8 + dVar8));
      *(double *)(lVar15 + 0x28 + lVar14) = dVar9 * dVar18 + (dVar8 + dVar8) * dVar19;
      *(undefined4 *)(lVar15 + 0x30 + lVar14) = 10;
      *(undefined4 *)(lVar15 + 0x34 + lVar14) = uVar17;
    }
    if (param_3 == '\x01' && 1 < iVar11) {
      local_b8 = 0xb;
      uStack_b4 = *(undefined4 *)(param_1 + 0x1f8);
      lVar15 = *(longlong *)(param_1 + 0x2c0);
      dStack_c0 = *(double *)(lVar15 + -0x20 + lVar16 * 0x18) - dVar7;
      dVar8 = *(double *)(lVar15 + -0x28 + lVar16 * 0x18) - dVar6;
      dVar18 = *(double *)(lVar15 + -0x30 + lVar16 * 0x18) - dVar5;
      dVar10 = SQRT(dStack_c0 * dStack_c0 + dVar18 * dVar18 + dVar8 * dVar8);
      uVar17 = 0;
      dVar9 = 0.0;
      dVar19 = 1.0 / dVar10;
      uStack_d0 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar18 * dVar19));
      if (0.0 < dVar10) {
        dStack_c0 = dStack_c0 * dVar19;
        dVar9 = dVar8 * dVar19;
        uVar17 = SUB84(dVar9,0);
      }
      else {
        dStack_c0 = 0.0;
      }
      local_c8 = CONCAT44((int)((ulonglong)dVar9 >> 0x20),uVar17);
      plVar1 = (longlong *)(param_1 + 0x208);
      iVar11 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar11 + 1U;
      local_e8 = dVar5;
      uStack_e0 = dVar6;
      local_d8 = dVar7;
      if (*(uint *)(param_1 + 0x214) < iVar11 + 1U) {
        FUN_14855c11e(plVar1,iVar11);
      }
      lVar16 = *(longlong *)(param_1 + 0x208);
      lVar15 = (longlong)iVar11 * 0x38;
      *(ulonglong *)(lVar16 + 0x30 + lVar15) = CONCAT44(uStack_b4,local_b8);
      puVar3 = (undefined8 *)(lVar16 + 0x20 + lVar15);
      *puVar3 = local_c8;
      puVar3[1] = dStack_c0;
      pdVar4 = (double *)(lVar16 + 0x10 + lVar15);
      *pdVar4 = local_d8;
      pdVar4[1] = uStack_d0;
      *(double *)(lVar16 + lVar15) = local_e8;
      ((double *)(lVar16 + lVar15))[1] = uStack_e0;
      dVar5 = *(double *)(param_1 + 0x1d0);
      dVar6 = *(double *)(param_1 + 0x1d8);
      dVar7 = *(double *)(param_1 + 0x1e0) + *(double *)(param_1 + 0x1e0);
      local_108 = 0x3fe6a09e667f3bcd;
      local_120 = (dVar5 * dVar7 + *(double *)(param_1 + 0x1e8) * (dVar6 + dVar6)) *
                  0.7071067811865476;
      local_118 = (dVar7 * dVar6 - (dVar5 + dVar5) * *(double *)(param_1 + 0x1e8)) *
                  0.7071067811865476;
      local_110 = (1.0 - ((dVar6 + dVar6) * dVar6 + dVar5 * (dVar5 + dVar5))) * 0.7071067811865476;
      FUN_146bed047(&local_100,&local_120,&uStack_d0);
      dStack_c0 = (double)local_f0;
      uStack_d0 = (double)CONCAT44(uStack_fc,local_100);
      local_c8 = CONCAT44(uStack_f4,uStack_f8);
      iVar11 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar11 + 1U) {
        FUN_14855c11e(plVar1,iVar11);
      }
      lVar16 = *plVar1;
      lVar15 = (longlong)iVar11 * 0x38;
      *(ulonglong *)(lVar16 + 0x30 + lVar15) = CONCAT44(uStack_b4,local_b8);
      puVar3 = (undefined8 *)(lVar16 + 0x20 + lVar15);
      *puVar3 = local_c8;
      puVar3[1] = dStack_c0;
      pdVar4 = (double *)(lVar16 + 0x10 + lVar15);
      *pdVar4 = local_d8;
      pdVar4[1] = uStack_d0;
      puVar2 = (undefined4 *)(lVar16 + lVar15);
      *puVar2 = (undefined4)local_e8;
      puVar2[1] = local_e8._4_4_;
      puVar2[2] = (undefined4)uStack_e0;
      puVar2[3] = uStack_e0._4_4_;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148553cd8 FUN_148553cd8 body=1241 status=ok
// SIG undefined FUN_148553cd8(void)

void FUN_148553cd8(longlong param_1,int param_2,byte param_3,char param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1485535c8();
  iVar8 = *(int *)(param_1 + 0x2c8);
  if (((param_2 <= iVar8) && (-2 < param_2)) && (iVar8 != 0)) {
    uVar7 = *(undefined4 *)(param_1 + 500);
    if ((param_2 < 1 & (param_2 != 0 | param_3 ^ 1)) == 0) {
      dVar3 = *(double *)(param_1 + 0x1d0);
      dVar4 = *(double *)(param_1 + 0x1d8);
      dVar14 = dVar4 + dVar4;
      dVar5 = *(double *)(param_1 + 0x1e0);
      dVar13 = dVar5 + dVar5;
      dVar6 = *(double *)(param_1 + 0x1e8);
      lVar9 = (longlong)((param_2 + iVar8 + -1) % iVar8);
      local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x10 + lVar9 * 0x18);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x2c0) + lVar9 * 0x18);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      iVar8 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar8 + 1U) {
        FUN_14855c11e(param_1 + 0x208,iVar8);
      }
      lVar11 = *(longlong *)(param_1 + 0x208);
      lVar10 = (longlong)iVar8 * 0x38;
      *(undefined8 *)(lVar11 + 0x10 + lVar10) = local_98;
      *(undefined8 *)(lVar11 + lVar10) = CONCAT44(uStack_a4,local_a8);
      ((undefined8 *)(lVar11 + lVar10))[1] = CONCAT44(uStack_9c,uStack_a0);
      *(double *)(lVar11 + 0x18 + lVar10) = 1.0 - (dVar13 * dVar5 + dVar4 * dVar14);
      *(double *)(lVar11 + 0x20 + lVar10) = dVar14 * dVar3 + dVar6 * dVar13;
      *(double *)(lVar11 + 0x28 + lVar10) = dVar3 * dVar13 - dVar14 * dVar6;
      *(undefined4 *)(lVar11 + 0x30 + lVar10) = 10;
      *(undefined4 *)(lVar11 + 0x34 + lVar10) = uVar7;
      dVar3 = *(double *)(param_1 + 0x1d0);
      dVar4 = *(double *)(param_1 + 0x1d8);
      dVar5 = *(double *)(param_1 + 0x1e0);
      dVar14 = dVar5 + dVar5;
      dVar6 = *(double *)(param_1 + 0x1e8);
      local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x10 + lVar9 * 0x18);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x2c0) + lVar9 * 0x18);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      iVar8 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar8 + 1U) {
        FUN_14855c11e(param_1 + 0x208,iVar8);
      }
      lVar9 = *(longlong *)(param_1 + 0x208);
      lVar11 = (longlong)iVar8 * 0x38;
      *(undefined8 *)(lVar9 + 0x10 + lVar11) = local_98;
      puVar2 = (undefined4 *)(lVar9 + lVar11);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      *(double *)(lVar9 + 0x18 + lVar11) = (dVar4 + dVar4) * dVar3 - dVar6 * dVar14;
      *(double *)(lVar9 + 0x20 + lVar11) = 1.0 - (dVar14 * dVar5 + dVar3 * (dVar3 + dVar3));
      *(double *)(lVar9 + 0x28 + lVar11) = dVar4 * dVar14 + (dVar3 + dVar3) * dVar6;
      *(undefined4 *)(lVar9 + 0x30 + lVar11) = 10;
      *(undefined4 *)(lVar9 + 0x34 + lVar11) = uVar7;
      iVar8 = *(int *)(param_1 + 0x2c8);
    }
    if ((iVar8 + -1 <= param_2 & (iVar8 + -1 != param_2 | param_3 ^ 1)) == 0) {
      uVar12 = (longlong)(param_2 + 1) % (longlong)iVar8 & 0xffffffff;
      dVar3 = *(double *)(param_1 + 0x1d0);
      dVar4 = *(double *)(param_1 + 0x1d8);
      dVar14 = dVar4 + dVar4;
      dVar5 = *(double *)(param_1 + 0x1e0);
      dVar13 = dVar5 + dVar5;
      dVar6 = *(double *)(param_1 + 0x1e8);
      local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x10 + uVar12 * 0x18);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x2c0) + uVar12 * 0x18);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      plVar1 = (longlong *)(param_1 + 0x208);
      iVar8 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar8 + 1U) {
        FUN_14855c11e(plVar1,iVar8);
      }
      lVar9 = *(longlong *)(param_1 + 0x208);
      lVar11 = (longlong)iVar8 * 0x38;
      *(undefined8 *)(lVar9 + 0x10 + lVar11) = local_98;
      *(undefined8 *)(lVar9 + lVar11) = CONCAT44(uStack_a4,local_a8);
      ((undefined8 *)(lVar9 + lVar11))[1] = CONCAT44(uStack_9c,uStack_a0);
      *(double *)(lVar9 + 0x18 + lVar11) = 1.0 - (dVar13 * dVar5 + dVar4 * dVar14);
      *(double *)(lVar9 + 0x20 + lVar11) = dVar14 * dVar3 + dVar6 * dVar13;
      *(double *)(lVar9 + 0x28 + lVar11) = dVar3 * dVar13 - dVar14 * dVar6;
      *(undefined4 *)(lVar9 + 0x30 + lVar11) = 10;
      *(undefined4 *)(lVar9 + 0x34 + lVar11) = uVar7;
      dVar3 = *(double *)(param_1 + 0x1d0);
      dVar4 = *(double *)(param_1 + 0x1d8);
      dVar5 = *(double *)(param_1 + 0x1e0);
      dVar14 = dVar5 + dVar5;
      dVar6 = *(double *)(param_1 + 0x1e8);
      local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + 0x10 + uVar12 * 0x18);
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x2c0) + uVar12 * 0x18);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      iVar8 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x210) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x214) < iVar8 + 1U) {
        FUN_14855c11e(plVar1,iVar8);
      }
      lVar9 = *plVar1;
      lVar11 = (longlong)iVar8 * 0x38;
      *(undefined8 *)(lVar9 + 0x10 + lVar11) = local_98;
      puVar2 = (undefined4 *)(lVar9 + lVar11);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      *(double *)(lVar9 + 0x18 + lVar11) = (dVar4 + dVar4) * dVar3 - dVar6 * dVar14;
      *(double *)(lVar9 + 0x20 + lVar11) = 1.0 - (dVar14 * dVar5 + dVar3 * (dVar3 + dVar3));
      *(double *)(lVar9 + 0x28 + lVar11) = dVar4 * dVar14 + (dVar3 + dVar3) * dVar6;
      *(undefined4 *)(lVar9 + 0x30 + lVar11) = 10;
      *(undefined4 *)(lVar9 + 0x34 + lVar11) = uVar7;
    }
    if (param_4 != '\0') {
      FUN_1485541b2(param_1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485541b2 FUN_1485541b2 body=1753 status=ok
// SIG undefined FUN_1485541b2(void)

void FUN_1485541b2(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined7 local_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined6 uStack_d6;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = (longlong *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) < 0) {
    FUN_14855bf4c(local_190);
  }
  local_188 = param_1 + 0x228;
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(int *)(param_1 + 0x234) < 0) {
    FUN_14855d8ba(local_188);
  }
  local_d0 = (undefined2)DAT_14c8464e0;
  uStack_ce = (undefined2)((ulonglong)DAT_14c8464e0 >> 0x10);
  uStack_cc = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
  uStack_c8 = (undefined2)DAT_14c8464e8;
  uStack_c6 = (undefined2)((ulonglong)DAT_14c8464e8 >> 0x10);
  uStack_c4 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  local_c0 = (undefined2)DAT_14c8464f0;
  uStack_be = (undefined2)((ulonglong)DAT_14c8464f0 >> 0x10);
  uStack_bc = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  uStack_b8 = (undefined2)DAT_14c8463a0;
  uStack_b6 = (undefined2)((ulonglong)DAT_14c8463a0 >> 0x10);
  uStack_b4 = (undefined4)((ulonglong)DAT_14c8463a0 >> 0x20);
  uStack_b0 = (undefined2)DAT_14c8463a8;
  uStack_ae = (undefined2)((ulonglong)DAT_14c8463a8 >> 0x10);
  uStack_ac = (undefined4)((ulonglong)DAT_14c8463a8 >> 0x20);
  uStack_a8 = (undefined2)DAT_14c8463b0;
  uStack_a6 = (undefined2)((ulonglong)DAT_14c8463b0 >> 0x10);
  uStack_a4 = (undefined4)((ulonglong)DAT_14c8463b0 >> 0x20);
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    pdVar18 = *(double **)(param_1 + 0x208);
    lVar16 = (longlong)*(int *)(param_1 + 0x210) * 0x38;
    do {
      dVar6 = pdVar18[2] - *(double *)(param_1 + 0x1c8);
      uStack_f0 = pdVar18[1] - *(double *)(param_1 + 0x1c0);
      local_f8 = *pdVar18 - *(double *)(param_1 + 0x1b8);
      local_e8 = SUB87(dVar6,0);
      uStack_e1 = (undefined1)((ulonglong)dVar6 >> 0x38);
      FUN_146bf2028(param_1 + 0x1d0,&local_118,&local_f8);
      if (local_108 < 0.0009999999310821295) {
        FUN_146bf2028(param_1 + 0x1d0,&local_f8,pdVar18 + 3);
        dVar9 = uStack_f0;
        dVar8 = local_f8;
        dVar7 = local_110;
        dVar6 = local_118;
        uVar10 = uStack_140;
        if ((double)CONCAT17(uStack_e1,local_e8) <= 0.0009999999310821295 &&
            (double)CONCAT17(uStack_e1,local_e8) != 0.0009999999310821295) {
          lVar21 = (longlong)(int)uStack_140;
          uVar12 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar12);
          if (uStack_140._4_4_ < uVar12) {
            FUN_14855d8ea(&local_148,uVar10 & 0xffffffff);
          }
          uVar10 = uStack_130;
          lVar21 = lVar21 * 0x20;
          *(double *)(local_148 + lVar21) = dVar6;
          *(double *)(local_148 + 8 + lVar21) = dVar7;
          *(double *)(local_148 + 0x10 + lVar21) = dVar8;
          *(double *)(local_148 + 0x18 + lVar21) = dVar9;
          lVar21 = (longlong)(int)uStack_130;
          uVar12 = (int)uStack_130 + 1;
          uStack_130 = CONCAT44(uStack_130._4_4_,uVar12);
          if (uStack_130._4_4_ < uVar12) {
            FUN_14855d970(&local_138,uVar10 & 0xffffffff);
          }
          *(double **)(local_138 + lVar21 * 8) = pdVar18;
        }
      }
      pdVar18 = pdVar18 + 7;
      lVar16 = lVar16 + -0x38;
    } while (lVar16 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    pdVar18 = *(double **)(param_1 + 0x78);
    lVar16 = (longlong)*(int *)(param_1 + 0x80) * 0x38;
    do {
      dVar6 = pdVar18[2] - *(double *)(param_1 + 0x1c8);
      uStack_f0 = pdVar18[1] - *(double *)(param_1 + 0x1c0);
      local_f8 = *pdVar18 - *(double *)(param_1 + 0x1b8);
      local_e8 = SUB87(dVar6,0);
      uStack_e1 = (undefined1)((ulonglong)dVar6 >> 0x38);
      FUN_146bf2028(param_1 + 0x1d0,&local_118,&local_f8);
      if (local_108 < 0.0009999999310821295) {
        FUN_146bf2028(param_1 + 0x1d0,&local_f8,pdVar18 + 3);
        dVar9 = uStack_f0;
        dVar8 = local_f8;
        dVar7 = local_110;
        dVar6 = local_118;
        uVar10 = uStack_140;
        if ((double)CONCAT17(uStack_e1,local_e8) <= 0.0009999999310821295 &&
            (double)CONCAT17(uStack_e1,local_e8) != 0.0009999999310821295) {
          lVar21 = (longlong)(int)uStack_140;
          uVar12 = (int)uStack_140 + 1;
          uStack_140 = CONCAT44(uStack_140._4_4_,uVar12);
          if (uStack_140._4_4_ < uVar12) {
            FUN_14855d8ea(&local_148,uVar10 & 0xffffffff);
          }
          uVar10 = uStack_130;
          lVar21 = lVar21 * 0x20;
          *(double *)(local_148 + lVar21) = dVar6;
          *(double *)(local_148 + 8 + lVar21) = dVar7;
          *(double *)(local_148 + 0x10 + lVar21) = dVar8;
          *(double *)(local_148 + 0x18 + lVar21) = dVar9;
          lVar21 = (longlong)(int)uStack_130;
          uVar12 = (int)uStack_130 + 1;
          uStack_130 = CONCAT44(uStack_130._4_4_,uVar12);
          if (uStack_130._4_4_ < uVar12) {
            FUN_14855d970(&local_138,uVar10 & 0xffffffff);
          }
          *(double **)(local_138 + lVar21 * 8) = pdVar18;
        }
      }
      pdVar18 = pdVar18 + 7;
      lVar16 = lVar16 + -0x38;
    } while (lVar16 != 0);
  }
  if (0 < (int)uStack_140) {
    local_178 = param_1 + 0x1d0;
    lVar16 = 0;
    lVar21 = 0;
    iVar17 = (int)uStack_140;
    do {
      lVar13 = (longlong)iVar17;
      lVar19 = lVar21;
      lVar20 = lVar16;
      if (lVar21 < lVar13) {
        do {
          cVar11 = FUN_14855488c(lVar21 * 0x20 + local_148,local_148 + lVar20,&local_158);
          if (cVar11 != '\0') {
            local_170 = local_158;
            uStack_16c = uStack_154;
            uStack_168 = uStack_150;
            uStack_164 = uStack_14c;
            local_160 = 0;
            FUN_146bed047(&local_118,local_178,&local_170);
            dVar6 = local_108 + *(double *)(param_1 + 0x1c8);
            dVar7 = local_110 + *(double *)(param_1 + 0x1c0);
            dVar8 = local_118 + *(double *)(param_1 + 0x1b8);
            puVar4 = *(undefined4 **)(local_138 + lVar21 * 8);
            puVar5 = *(undefined4 **)(local_138 + lVar19 * 8);
            lVar13 = lVar19;
            if ((int)puVar5[0xd] < (int)puVar4[0xd]) {
              lVar13 = lVar21;
              puVar4 = puVar5;
            }
            iVar17 = puVar4[0xd];
            iVar2 = *(int *)(param_1 + 0x200);
            uVar15 = *(undefined8 *)(local_138 + lVar13 * 8);
            uStack_cc = puVar4[1];
            uStack_c4 = puVar4[3];
            uStack_bc = puVar4[5];
            uStack_b4 = puVar4[7];
            uStack_ac = puVar4[9];
            uStack_a4 = puVar4[0xb];
            uStack_b0 = (undefined2)puVar4[8];
            uStack_ae = (undefined2)((uint)puVar4[8] >> 0x10);
            uStack_a8 = (undefined2)puVar4[10];
            uStack_a6 = (undefined2)((uint)puVar4[10] >> 0x10);
            local_c0 = (undefined2)puVar4[4];
            uStack_be = (undefined2)((uint)puVar4[4] >> 0x10);
            uStack_b8 = (undefined2)puVar4[6];
            uStack_b6 = (undefined2)((uint)puVar4[6] >> 0x10);
            local_d0 = (undefined2)*puVar4;
            uStack_ce = (undefined2)((uint)*puVar4 >> 0x10);
            uStack_c8 = (undefined2)puVar4[2];
            uStack_c6 = (undefined2)((uint)puVar4[2] >> 0x10);
            iVar3 = *(int *)(param_1 + 0x230);
            *(uint *)(param_1 + 0x230) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x234) < iVar3 + 1U) {
              local_180 = uVar15;
              FUN_14855d970(local_188,iVar3);
              uVar15 = local_180;
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar3 * 8) = uVar15;
            iVar3 = *(int *)(param_1 + 0x220);
            *(uint *)(param_1 + 0x220) = iVar3 + 1U;
            dVar9 = uStack_f0;
            if (*(uint *)(param_1 + 0x224) < iVar3 + 1U) {
              FUN_14855bfdc(local_190,iVar3);
              dVar9 = uStack_f0;
            }
            lVar13 = *local_190;
            lVar14 = (longlong)iVar3 * 0x90;
            *(double *)(lVar13 + lVar14) = dVar8;
            *(double *)(lVar13 + 8 + lVar14) = dVar7;
            *(double *)(lVar13 + 0x10 + lVar14) = dVar6;
            *(undefined4 *)(lVar13 + 0x18 + lVar14) = 0xc;
            *(int *)(lVar13 + 0x1c + lVar14) = iVar17 - iVar2;
            puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar14);
            *puVar1 = local_128;
            puVar1[1] = uStack_120;
            *(undefined2 *)(lVar13 + 0x30 + lVar14) = 0;
            puVar1 = (undefined8 *)(lVar13 + 0x32 + lVar14);
            *puVar1 = CONCAT26(local_d0,uStack_d6);
            puVar1[1] = CONCAT26(uStack_c8,CONCAT42(uStack_cc,uStack_ce));
            puVar1 = (undefined8 *)(lVar13 + 0x42 + lVar14);
            *puVar1 = CONCAT26(local_c0,CONCAT42(uStack_c4,uStack_c6));
            puVar1[1] = CONCAT26(uStack_b8,CONCAT42(uStack_bc,uStack_be));
            puVar1 = (undefined8 *)(lVar13 + 0x52 + lVar14);
            *puVar1 = CONCAT26(uStack_b0,CONCAT42(uStack_b4,uStack_b6));
            puVar1[1] = CONCAT26(uStack_a8,CONCAT42(uStack_ac,uStack_ae));
            *(ulonglong *)(lVar13 + 0x60 + lVar14) =
                 CONCAT44(uStack_a4,CONCAT22(uStack_a6,uStack_a8));
            *(undefined1 *)(lVar13 + 0x68 + lVar14) = 0;
            *(undefined2 *)(lVar13 + 0x69 + lVar14) = local_fb;
            *(undefined1 *)(lVar13 + 0x6b + lVar14) = local_f9;
            *(undefined4 *)(lVar13 + 0x6c + lVar14) = 0xffffffff;
            *(undefined1 *)(lVar13 + 0x70 + lVar14) = 0;
            uStack_f0._7_1_ = (undefined1)((ulonglong)dVar9 >> 0x38);
            puVar1 = (undefined8 *)(lVar13 + 0x80 + lVar14);
            *puVar1 = CONCAT71(local_e8,uStack_f0._7_1_);
            puVar1[1] = CONCAT71(uStack_e0,uStack_e1);
            puVar4 = (undefined4 *)(lVar13 + 0x71 + lVar14);
            *puVar4 = (undefined4)local_f8;
            puVar4[1] = local_f8._4_4_;
            *(double *)(puVar4 + 2) = dVar9;
            iVar17 = (int)uStack_140;
            uStack_f0 = dVar9;
          }
          lVar19 = lVar19 + 1;
          lVar20 = lVar20 + 0x20;
        } while ((int)lVar19 < iVar17);
        lVar13 = (longlong)iVar17;
      }
      lVar21 = lVar21 + 1;
      lVar16 = lVar16 + 0x20;
    } while (lVar21 < lVar13);
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855488c FUN_14855488c body=254 status=ok
// SIG undefined FUN_14855488c(void)

bool FUN_14855488c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_1[3];
  dVar5 = param_1[2] * param_2[3] - param_2[2] * dVar1;
  uVar3 = -(ulonglong)(-dVar5 <= dVar5);
  dVar4 = (double)(~uVar3 & (ulonglong)-dVar5 | uVar3 & (ulonglong)dVar5);
  if (1e-08 < dVar4) {
    dVar2 = param_1[1];
    dVar5 = ((*param_2 - *param_1) * param_2[3] - param_2[2] * (param_2[1] - dVar2)) * (1.0 / dVar5)
    ;
    *param_3 = param_1[2] * dVar5 + *param_1;
    param_3[1] = dVar1 * dVar5 + dVar2;
  }
  return 1e-08 < dVar4;
}



// FUNCTION 14855498a FUN_14855498a body=1752 status=ok
// SIG undefined FUN_14855498a(void)

void FUN_14855498a(longlong param_1,double *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  undefined1 auStack_158 [40];
  longlong *local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined4 uStack_116;
  undefined2 uStack_112;
  undefined2 local_110;
  undefined2 uStack_10e;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined2 uStack_104;
  undefined2 uStack_102;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined2 uStack_fc;
  undefined2 uStack_fa;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = (longlong *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (*(int *)(param_1 + 0x2dc) < 0) {
    FUN_14855bf4c();
  }
  local_120 = (ulonglong)*(uint *)(param_1 + 0x210);
  plVar22 = local_130;
  if (0 < (int)*(uint *)(param_1 + 0x210)) {
    lVar27 = local_120 * 0x38;
    lVar25 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x208);
      dVar5 = param_2[2];
      dVar6 = *(double *)(lVar18 + 0x10 + lVar25);
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar9 = *(double *)(lVar18 + lVar25);
      dVar10 = *(double *)(lVar18 + 8 + lVar25);
      dVar11 = *(double *)(lVar18 + 0x18 + lVar25);
      dVar12 = *(double *)(lVar18 + 0x20 + lVar25);
      dVar13 = *(double *)(lVar18 + 0x28 + lVar25);
      uVar14 = *(undefined4 *)(lVar18 + 0x30 + lVar25);
      uVar15 = *(undefined4 *)(lVar18 + 0x34 + lVar25);
      puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar25);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      local_f0 = (undefined2)uVar20;
      uStack_ee = (undefined2)((ulonglong)uVar20 >> 0x10);
      uStack_ec = (undefined2)((ulonglong)uVar20 >> 0x20);
      uStack_ea = (undefined2)((ulonglong)uVar20 >> 0x30);
      uStack_e8 = (undefined2)uVar21;
      uStack_e6 = (undefined2)((ulonglong)uVar21 >> 0x10);
      uStack_e4 = (undefined4)((ulonglong)uVar21 >> 0x20);
      puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar25);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      local_100 = (undefined2)uVar20;
      uStack_fe = (undefined2)((ulonglong)uVar20 >> 0x10);
      uStack_fc = (undefined2)((ulonglong)uVar20 >> 0x20);
      uStack_fa = (undefined2)((ulonglong)uVar20 >> 0x30);
      uStack_f8 = (undefined2)uVar21;
      uStack_f6 = (undefined2)((ulonglong)uVar21 >> 0x10);
      uStack_f4 = (undefined2)((ulonglong)uVar21 >> 0x20);
      uStack_f2 = (undefined2)((ulonglong)uVar21 >> 0x30);
      puVar1 = (undefined4 *)(lVar18 + lVar25);
      uVar19 = *puVar1;
      local_110 = (undefined2)uVar19;
      uStack_10e = (undefined2)((uint)uVar19 >> 0x10);
      uStack_10c = (undefined2)puVar1[1];
      uStack_10a = (undefined2)((uint)puVar1[1] >> 0x10);
      uStack_108 = (undefined2)puVar1[2];
      uStack_106 = (undefined2)((uint)puVar1[2] >> 0x10);
      uStack_104 = (undefined2)puVar1[3];
      uStack_102 = (undefined2)((uint)puVar1[3] >> 0x10);
      iVar16 = *(int *)(param_1 + 0x2d8);
      *(uint *)(param_1 + 0x2d8) = iVar16 + 1U;
      if (*(uint *)(param_1 + 0x2dc) < iVar16 + 1U) {
        FUN_14855bfdc(uVar19,iVar16);
        plVar22 = local_130;
      }
      dVar5 = (dVar5 - dVar6) * dVar13 + (dVar7 - dVar9) * dVar11 + (dVar8 - dVar10) * dVar12;
      lVar18 = *plVar22;
      lVar24 = (longlong)iVar16 * 0x90;
      *(double *)(lVar18 + lVar24) = dVar5 * dVar11 + dVar9;
      *(double *)(lVar18 + 8 + lVar24) = dVar12 * dVar5 + dVar10;
      *(double *)(lVar18 + 0x10 + lVar24) = dVar13 * dVar5 + dVar6;
      *(undefined4 *)(lVar18 + 0x18 + lVar24) = uVar14;
      *(undefined4 *)(lVar18 + 0x1c + lVar24) = uVar15;
      *(undefined2 *)(lVar18 + 0x30 + lVar24) = 0x100;
      puVar1 = (undefined4 *)(lVar18 + 0x32 + lVar24);
      *puVar1 = uStack_116;
      puVar1[1] = CONCAT22(local_110,uStack_112);
      puVar1[2] = CONCAT22(uStack_10c,uStack_10e);
      puVar1[3] = CONCAT22(uStack_108,uStack_10a);
      puVar2 = (undefined8 *)(lVar18 + 0x42 + lVar24);
      *puVar2 = CONCAT26(local_100,CONCAT24(uStack_102,CONCAT22(uStack_104,uStack_106)));
      puVar2[1] = CONCAT26(uStack_f8,CONCAT24(uStack_fa,CONCAT22(uStack_fc,uStack_fe)));
      puVar2 = (undefined8 *)(lVar18 + 0x52 + lVar24);
      *puVar2 = CONCAT26(local_f0,CONCAT24(uStack_f2,CONCAT22(uStack_f4,uStack_f6)));
      puVar2[1] = CONCAT26(uStack_e8,CONCAT24(uStack_ea,CONCAT22(uStack_ec,uStack_ee)));
      *(ulonglong *)(lVar18 + 0x60 + lVar24) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
      *(undefined1 *)(lVar18 + 0x68 + lVar24) = 0;
      *(undefined4 *)(lVar18 + 0x6c + lVar24) = 0xffffffff;
      *(undefined1 *)(lVar18 + 0x70 + lVar24) = 0;
      lVar25 = lVar25 + 0x38;
    } while (lVar27 - lVar25 != 0);
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar25 = 0;
    lVar27 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x78);
      dVar5 = param_2[2];
      dVar6 = *(double *)(lVar18 + 0x10 + lVar25);
      dVar7 = *param_2;
      dVar8 = param_2[1];
      dVar9 = *(double *)(lVar18 + lVar25);
      dVar10 = *(double *)(lVar18 + 8 + lVar25);
      dVar11 = *(double *)(lVar18 + 0x18 + lVar25);
      dVar12 = *(double *)(lVar18 + 0x20 + lVar25);
      dVar13 = *(double *)(lVar18 + 0x28 + lVar25);
      uVar14 = *(undefined4 *)(lVar18 + 0x30 + lVar25);
      uVar15 = *(undefined4 *)(lVar18 + 0x34 + lVar25);
      puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar25);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      local_f0 = (undefined2)uVar20;
      uStack_ee = (undefined2)((ulonglong)uVar20 >> 0x10);
      uStack_ec = (undefined2)((ulonglong)uVar20 >> 0x20);
      uStack_ea = (undefined2)((ulonglong)uVar20 >> 0x30);
      uStack_e8 = (undefined2)uVar21;
      uStack_e6 = (undefined2)((ulonglong)uVar21 >> 0x10);
      uStack_e4 = (undefined4)((ulonglong)uVar21 >> 0x20);
      puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar25);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      local_100 = (undefined2)uVar20;
      uStack_fe = (undefined2)((ulonglong)uVar20 >> 0x10);
      uStack_fc = (undefined2)((ulonglong)uVar20 >> 0x20);
      uStack_fa = (undefined2)((ulonglong)uVar20 >> 0x30);
      uStack_f8 = (undefined2)uVar21;
      uStack_f6 = (undefined2)((ulonglong)uVar21 >> 0x10);
      uStack_f4 = (undefined2)((ulonglong)uVar21 >> 0x20);
      uStack_f2 = (undefined2)((ulonglong)uVar21 >> 0x30);
      puVar1 = (undefined4 *)(lVar18 + lVar25);
      uVar19 = *puVar1;
      local_110 = (undefined2)uVar19;
      uStack_10e = (undefined2)((uint)uVar19 >> 0x10);
      uStack_10c = (undefined2)puVar1[1];
      uStack_10a = (undefined2)((uint)puVar1[1] >> 0x10);
      uStack_108 = (undefined2)puVar1[2];
      uStack_106 = (undefined2)((uint)puVar1[2] >> 0x10);
      uStack_104 = (undefined2)puVar1[3];
      uStack_102 = (undefined2)((uint)puVar1[3] >> 0x10);
      iVar16 = *(int *)(param_1 + 0x2d8);
      *(uint *)(param_1 + 0x2d8) = iVar16 + 1U;
      if (*(uint *)(param_1 + 0x2dc) < iVar16 + 1U) {
        FUN_14855bfdc(uVar19,iVar16);
        plVar22 = local_130;
      }
      dVar5 = (dVar5 - dVar6) * dVar13 + (dVar7 - dVar9) * dVar11 + (dVar8 - dVar10) * dVar12;
      lVar18 = *(longlong *)(param_1 + 0x2d0);
      lVar24 = (longlong)iVar16 * 0x90;
      *(double *)(lVar18 + lVar24) = dVar5 * dVar11 + dVar9;
      *(double *)(lVar18 + 8 + lVar24) = dVar12 * dVar5 + dVar10;
      *(double *)(lVar18 + 0x10 + lVar24) = dVar13 * dVar5 + dVar6;
      *(undefined4 *)(lVar18 + 0x18 + lVar24) = uVar14;
      *(undefined4 *)(lVar18 + 0x1c + lVar24) = uVar15;
      *(undefined2 *)(lVar18 + 0x30 + lVar24) = 0x100;
      puVar1 = (undefined4 *)(lVar18 + 0x32 + lVar24);
      *puVar1 = uStack_116;
      puVar1[1] = CONCAT22(local_110,uStack_112);
      puVar1[2] = CONCAT22(uStack_10c,uStack_10e);
      puVar1[3] = CONCAT22(uStack_108,uStack_10a);
      puVar2 = (undefined8 *)(lVar18 + 0x42 + lVar24);
      *puVar2 = CONCAT26(local_100,CONCAT24(uStack_102,CONCAT22(uStack_104,uStack_106)));
      puVar2[1] = CONCAT26(uStack_f8,CONCAT24(uStack_fa,CONCAT22(uStack_fc,uStack_fe)));
      puVar2 = (undefined8 *)(lVar18 + 0x52 + lVar24);
      *puVar2 = CONCAT26(local_f0,CONCAT24(uStack_f2,CONCAT22(uStack_f4,uStack_f6)));
      puVar2[1] = CONCAT26(uStack_e8,CONCAT24(uStack_ea,CONCAT22(uStack_ec,uStack_ee)));
      *(ulonglong *)(lVar18 + 0x60 + lVar24) = CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
      *(undefined1 *)(lVar18 + 0x68 + lVar24) = 0;
      *(undefined4 *)(lVar18 + 0x6c + lVar24) = 0xffffffff;
      *(undefined1 *)(lVar18 + 0x70 + lVar24) = 0;
      lVar27 = lVar27 + 1;
      lVar25 = lVar25 + 0x38;
    } while (lVar27 < *(int *)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    uVar17 = *(uint *)(param_1 + 0x2c8);
    local_128 = (ulonglong)uVar17;
    if (1 < (int)uVar17) {
      local_128 = (ulonglong)(uVar17 - 1);
      lVar25 = local_120 * 0x38;
      uVar23 = 0;
      do {
        if (0 < (int)local_120) {
          lVar27 = *(longlong *)(param_1 + 0x2c0);
          dVar5 = *(double *)(lVar27 + 0x18 + uVar23 * 0x18) - *(double *)(lVar27 + uVar23 * 0x18);
          dVar6 = *(double *)(lVar27 + 0x20 + uVar23 * 0x18) -
                  *(double *)(lVar27 + 8 + uVar23 * 0x18);
          dVar7 = *(double *)(lVar27 + 0x28 + uVar23 * 0x18) -
                  *(double *)(lVar27 + 0x10 + uVar23 * 0x18);
          dVar5 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
          lVar27 = 0;
          do {
            lVar18 = *(longlong *)(param_1 + 0x208);
            iVar26 = *(int *)(lVar18 + 0x34 + lVar27) - *(int *)(param_1 + 0x1fc);
            uVar14 = *(undefined4 *)(lVar18 + 0x30 + lVar27);
            puVar1 = (undefined4 *)(lVar18 + lVar27);
            uVar15 = *puVar1;
            puVar3 = (undefined4 *)(lVar18 + 0x10 + lVar27);
            puVar4 = (undefined4 *)(lVar18 + 0x20 + lVar27);
            uStack_e4 = puVar4[3];
            local_f0 = (undefined2)*puVar4;
            uStack_ee = (undefined2)((uint)*puVar4 >> 0x10);
            uStack_ec = (undefined2)puVar4[1];
            uStack_ea = (undefined2)((uint)puVar4[1] >> 0x10);
            uStack_e8 = (undefined2)puVar4[2];
            uStack_e6 = (undefined2)((uint)puVar4[2] >> 0x10);
            local_100 = (undefined2)*puVar3;
            uStack_fe = (undefined2)((uint)*puVar3 >> 0x10);
            uStack_fc = (undefined2)puVar3[1];
            uStack_fa = (undefined2)((uint)puVar3[1] >> 0x10);
            uStack_f8 = (undefined2)puVar3[2];
            uStack_f6 = (undefined2)((uint)puVar3[2] >> 0x10);
            uStack_f4 = (undefined2)puVar3[3];
            uStack_f2 = (undefined2)((uint)puVar3[3] >> 0x10);
            local_110 = (undefined2)uVar15;
            uStack_10e = (undefined2)((uint)uVar15 >> 0x10);
            uStack_10c = (undefined2)puVar1[1];
            uStack_10a = (undefined2)((uint)puVar1[1] >> 0x10);
            uStack_108 = (undefined2)puVar1[2];
            uStack_106 = (undefined2)((uint)puVar1[2] >> 0x10);
            uStack_104 = (undefined2)puVar1[3];
            uStack_102 = (undefined2)((uint)puVar1[3] >> 0x10);
            dVar6 = *(double *)(lVar18 + 0x28 + lVar27);
            dVar7 = *(double *)(lVar18 + 0x20 + lVar27);
            dVar8 = *(double *)(lVar18 + 0x18 + lVar27);
            dVar9 = *(double *)(lVar18 + 0x10 + lVar27);
            dVar10 = *(double *)(lVar18 + 8 + lVar27);
            dVar11 = *(double *)(lVar18 + lVar27);
            iVar16 = *(int *)(param_1 + 0x2d8);
            *(uint *)(param_1 + 0x2d8) = iVar16 + 1U;
            if (*(uint *)(param_1 + 0x2dc) < iVar16 + 1U) {
              FUN_14855bfdc(uVar15,iVar16);
              plVar22 = local_130;
            }
            lVar18 = *(longlong *)(param_1 + 0x2d0);
            lVar24 = (longlong)iVar16 * 0x90;
            *(double *)(lVar18 + lVar24) = dVar8 * dVar5 + dVar11;
            *(double *)(lVar18 + 8 + lVar24) = dVar7 * dVar5 + dVar10;
            *(double *)(lVar18 + 0x10 + lVar24) = dVar6 * dVar5 + dVar9;
            *(undefined4 *)(lVar18 + 0x18 + lVar24) = uVar14;
            *(int *)(lVar18 + 0x1c + lVar24) = iVar26;
            *(undefined2 *)(lVar18 + 0x30 + lVar24) = 0x100;
            puVar1 = (undefined4 *)(lVar18 + 0x32 + lVar24);
            *puVar1 = uStack_116;
            puVar1[1] = CONCAT22(local_110,uStack_112);
            puVar1[2] = CONCAT22(uStack_10c,uStack_10e);
            puVar1[3] = CONCAT22(uStack_108,uStack_10a);
            puVar1 = (undefined4 *)(lVar18 + 0x42 + lVar24);
            *puVar1 = CONCAT22(uStack_104,uStack_106);
            puVar1[1] = CONCAT22(local_100,uStack_102);
            puVar1[2] = CONCAT22(uStack_fc,uStack_fe);
            puVar1[3] = CONCAT22(uStack_f8,uStack_fa);
            puVar1 = (undefined4 *)(lVar18 + 0x52 + lVar24);
            *puVar1 = CONCAT22(uStack_f4,uStack_f6);
            puVar1[1] = CONCAT22(local_f0,uStack_f2);
            puVar1[2] = CONCAT22(uStack_ec,uStack_ee);
            puVar1[3] = CONCAT22(uStack_e8,uStack_ea);
            *(ulonglong *)(lVar18 + 0x60 + lVar24) =
                 CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
            *(undefined1 *)(lVar18 + 0x68 + lVar24) = 1;
            *(int *)(lVar18 + 0x6c + lVar24) = (int)uVar23;
            *(undefined1 *)(lVar18 + 0x70 + lVar24) = 0;
            lVar18 = *(longlong *)(param_1 + 0x208);
            dVar6 = *(double *)(lVar18 + 0x10 + lVar27);
            dVar7 = *(double *)(lVar18 + 0x28 + lVar27);
            dVar8 = *(double *)(lVar18 + lVar27);
            dVar9 = *(double *)(lVar18 + 8 + lVar27);
            dVar10 = *(double *)(lVar18 + 0x20 + lVar27);
            dVar11 = *(double *)(lVar18 + 0x18 + lVar27);
            iVar16 = *(int *)(param_1 + 0x2d8);
            *(uint *)(param_1 + 0x2d8) = iVar16 + 1U;
            if (*(uint *)(param_1 + 0x2dc) < iVar16 + 1U) {
              FUN_14855bfdc(uStack_116,iVar16);
              plVar22 = local_130;
            }
            lVar18 = *plVar22;
            lVar24 = (longlong)iVar16 * 0x90;
            *(double *)(lVar18 + lVar24) = dVar8 - dVar11 * dVar5;
            *(double *)(lVar18 + 8 + lVar24) = dVar9 - dVar10 * dVar5;
            *(double *)(lVar18 + 0x10 + lVar24) = dVar6 - dVar7 * dVar5;
            *(undefined4 *)(lVar18 + 0x18 + lVar24) = uVar14;
            *(int *)(lVar18 + 0x1c + lVar24) = iVar26;
            *(undefined2 *)(lVar18 + 0x30 + lVar24) = 0x100;
            puVar1 = (undefined4 *)(lVar18 + 0x32 + lVar24);
            *puVar1 = uStack_116;
            puVar1[1] = CONCAT22(local_110,uStack_112);
            puVar1[2] = CONCAT22(uStack_10c,uStack_10e);
            puVar1[3] = CONCAT22(uStack_108,uStack_10a);
            puVar2 = (undefined8 *)(lVar18 + 0x42 + lVar24);
            *puVar2 = CONCAT26(local_100,CONCAT24(uStack_102,CONCAT22(uStack_104,uStack_106)));
            puVar2[1] = CONCAT26(uStack_f8,CONCAT24(uStack_fa,CONCAT22(uStack_fc,uStack_fe)));
            puVar2 = (undefined8 *)(lVar18 + 0x52 + lVar24);
            *puVar2 = CONCAT26(local_f0,CONCAT24(uStack_f2,CONCAT22(uStack_f4,uStack_f6)));
            puVar2[1] = CONCAT26(uStack_e8,CONCAT24(uStack_ea,CONCAT22(uStack_ec,uStack_ee)));
            *(ulonglong *)(lVar18 + 0x60 + lVar24) =
                 CONCAT44(uStack_e4,CONCAT22(uStack_e6,uStack_e8));
            *(undefined1 *)(lVar18 + 0x68 + lVar24) = 1;
            *(int *)(lVar18 + 0x6c + lVar24) = (int)uVar23;
            *(undefined1 *)(lVar18 + 0x70 + lVar24) = 0;
            lVar27 = lVar27 + 0x38;
          } while (lVar25 - lVar27 != 0);
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != local_128);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148555064 FUN_148555064 body=818 status=ok
// SIG undefined FUN_148555064(void)

void FUN_148555064(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  undefined ***pppuVar11;
  double *pdVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d4;
  undefined1 **local_d0;
  undefined1 *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = (undefined1 **)0x7fefffffffffffff;
  local_d4 = 0x7fffffff;
  *(undefined1 *)(param_1 + 0x47) = 0;
  FUN_14855498a();
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14af1a460;
  local_c8[0] = &LAB_143ba7f0a;
  local_f8 = local_c8;
  local_a0 = param_2;
  uVar10 = FUN_148551192(param_1,param_1 + 0xd,&local_d0,&local_d4);
  pdVar13 = (double *)((ulonglong)uVar10 * 0x90 + param_1[0xd]);
  if ((int)uVar10 < 0) {
    pdVar13 = (double *)0x0;
  }
  local_f8 = local_c8;
  uVar10 = FUN_148551192(param_1,param_1 + 0x5a,&local_d0,&local_d4);
  pdVar12 = (double *)((ulonglong)uVar10 * 0x90 + param_1[0x5a]);
  if ((int)uVar10 < 0) {
    pdVar12 = (double *)0x0;
  }
  if (pdVar12 == (double *)0x0) {
    pdVar12 = pdVar13;
  }
  local_f8 = local_c8;
  uVar10 = FUN_148551192(param_1,param_1 + 0x43,&local_d0,&local_d4);
  if (-1 < (int)uVar10) {
    pdVar12 = (double *)((ulonglong)uVar10 * 0x90 + param_1[0x43]);
    *(undefined1 *)(param_1 + 0x47) = 1;
    puVar1 = *(undefined4 **)(param_1[0x45] + (ulonglong)uVar10 * 8);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    lVar6 = *(longlong *)(puVar1 + 4);
    lVar7 = *(longlong *)(puVar1 + 6);
    lVar8 = *(longlong *)(puVar1 + 10);
    param_1[0x4c] = *(longlong *)(puVar1 + 8);
    param_1[0x4d] = lVar8;
    param_1[0x4a] = lVar6;
    param_1[0x4b] = lVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x244) = uVar3;
    *(undefined4 *)(param_1 + 0x49) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x24c) = uVar5;
  }
  if (((((char)param_1[0x1d] != '\x01') || ((char)param_1[0xb] != '\x01')) ||
      (*(char *)((longlong)param_1 + 0x121) != '\0')) ||
     (local_f8 = local_c8,
     cVar9 = FUN_1485513c8(param_1,param_1 + 0x1e,(double)local_d0 * (double)param_1[0xc],local_d4),
     cVar9 == '\0')) {
    if (pdVar12 == (double *)0x0) {
      (**(code **)(*param_1 + 0x70))(param_1);
    }
    else {
      dVar16 = (double)param_1[0x3a];
      dVar17 = (double)param_1[0x3b];
      dVar15 = (double)param_1[0x3c] + (double)param_1[0x3c];
      dVar14 = dVar16 * dVar15 + (double)param_1[0x3d] * (dVar17 + dVar17);
      dVar15 = dVar15 * dVar17 - (dVar16 + dVar16) * (double)param_1[0x3d];
      dVar16 = 1.0 - ((dVar17 + dVar17) * dVar17 + dVar16 * (dVar16 + dVar16));
      dVar17 = (pdVar12[2] - (double)param_1[0x39]) * dVar16 +
               (*pdVar12 - (double)param_1[0x37]) * dVar14 +
               (pdVar12[1] - (double)param_1[0x38]) * dVar15;
      local_e0 = pdVar12[2] - dVar16 * dVar17;
      local_e8 = pdVar12[1] - dVar15 * dVar17;
      local_f0 = *pdVar12 - dVar17 * dVar14;
      local_f8 = local_d0;
      (**(code **)(*param_1 + 0x68))(param_1,pdVar12,pdVar12);
    }
  }
  if (local_c8[0] != (undefined1 *)0x0) {
    pppuVar11 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar11 = &local_a8;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148555398 FUN_148555398 body=729 status=ok
// SIG undefined FUN_148555398(void)

void FUN_148555398(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = *(undefined1 *)((longlong)param_1 + 0x3c);
  dVar4 = *param_3 * (double)param_1[0x20];
  dVar5 = param_3[1] * (double)param_1[0x21];
  dVar3 = param_3[2] * (double)param_1[0x22];
  dVar1 = (double)param_1[0x1b];
  dVar2 = (double)param_1[0x1b];
  dVar9 = (double)param_1[0x18];
  dVar10 = (double)param_1[0x19];
  dVar11 = (double)param_1[0x1a];
  dVar6 = dVar5 * dVar9 - dVar4 * dVar10;
  dVar7 = dVar3 * dVar10 - dVar5 * dVar11;
  dVar8 = dVar4 * dVar11 - dVar3 * dVar9;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dVar5 = (dVar11 * dVar7 - dVar9 * dVar6) + dVar2 * dVar8 + dVar5 + (double)param_1[0x1d];
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (dVar6 * dVar10 - dVar8 * dVar11) + dVar1 * dVar7 + dVar4 + (double)param_1[0x1c]
  ;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = dVar6 * dVar1 + dVar3 + (dVar8 * dVar9 - dVar7 * dVar10) + (double)param_1[0x1e];
  dVar7 = *param_2 * (double)param_1[0x20];
  dVar8 = param_2[1] * (double)param_1[0x21];
  dVar5 = param_2[2] * (double)param_1[0x22];
  dVar3 = dVar8 * dVar9 - dVar10 * dVar7;
  dVar6 = dVar5 * dVar10 - dVar11 * dVar8;
  dVar4 = dVar7 * dVar11 - dVar9 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  dVar2 = (dVar11 * dVar6 - dVar9 * dVar3) + dVar2 * dVar4 + dVar8 + (double)param_1[0x1d];
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ = (dVar3 * dVar10 - dVar4 * dVar11) + dVar1 * dVar6 + dVar7 + (double)param_1[0x1c]
  ;
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8 = dVar3 * dVar1 + dVar5 + (dVar4 * dVar9 - dVar6 * dVar10) + (double)param_1[0x1e];
  local_e8 = param_5;
  (**(code **)(*param_1 + 8))();
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148555672 FUN_148555672 body=1696 status=ok
// SIG undefined FUN_148555672(void)

void FUN_148555672(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  double *pdVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  double dStack_240;
  undefined2 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined4 local_1fc;
  undefined1 local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  double dStack_1b0;
  double local_1a8 [4];
  double dStack_188;
  double dStack_180;
  undefined8 local_178;
  double local_170;
  double dStack_168;
  double local_160;
  int local_158;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  char local_f0;
  undefined6 local_e0;
  undefined2 uStack_da;
  undefined6 uStack_d8;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2b8 = (longlong *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(int *)(param_1 + 0x20c) < 0) {
    FUN_14855bf4c(local_2b8);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x80)) {
    local_2b0 = (longlong)*(int *)(param_1 + 0x80) * 0x38;
    lVar19 = 0;
    do {
      local_238 = 0;
      local_220 = DAT_14c8464f0;
      local_230 = DAT_14c8464e0;
      uStack_228 = DAT_14c8464e8;
      local_208 = DAT_14c8463b0;
      uStack_218 = DAT_14c8463a0;
      uStack_210 = DAT_14c8463a8;
      local_200 = 0;
      local_1fc = 0xffffffff;
      local_1f8 = 0;
      lVar16 = *(longlong *)(param_1 + 0x78);
      local_178 = 0xbff0000000000000;
      local_1d8 = *(double *)(lVar16 + lVar19);
      dStack_1d0 = ((double *)(lVar16 + lVar19))[1];
      pdVar14 = (double *)(lVar16 + 0x10 + lVar19);
      local_1c8 = *pdVar14;
      uStack_1c0 = pdVar14[1];
      puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar19);
      uStack_1b8 = *puVar1;
      dStack_1b0 = (double)puVar1[1];
      local_1a8[0] = *param_2;
      local_1a8[1] = param_2[1];
      local_1a8[2] = param_2[2];
      local_1a8[3] = param_2[3];
      dStack_188 = param_2[4];
      dStack_180 = param_2[5];
      FUN_1484fd030(&local_1d8);
      local_268 = local_170;
      dStack_260 = dStack_168;
      local_258 = local_160;
      lVar16 = *(longlong *)(param_1 + 0x78);
      uStack_250 = *(undefined4 *)(lVar16 + 0x30 + lVar19);
      uStack_24c = *(undefined4 *)(lVar16 + 0x34 + lVar19);
      local_238 = CONCAT11(1,(undefined1)local_238);
      local_230 = *(undefined8 *)(lVar16 + lVar19);
      uStack_228 = ((undefined8 *)(lVar16 + lVar19))[1];
      puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar19);
      local_220 = *puVar1;
      uStack_218 = puVar1[1];
      puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar19);
      uStack_210 = *puVar1;
      local_208 = puVar1[1];
      pcVar11 = *(code **)(param_1 + 0x1c0);
      if (pcVar11 != (code *)0x0) {
        plVar15 = *(longlong **)(param_1 + 0x1d0);
        if (*(longlong **)(param_1 + 0x1d0) == (longlong *)0x0) {
          plVar15 = (longlong *)(param_1 + 0x1e0);
        }
        uVar13 = (**(code **)(*plVar15 + 8))();
        (*pcVar11)(&local_e0,uVar13,&local_268);
        lVar16 = *(longlong *)(param_1 + 0x78);
        local_1e0 = *(double *)(lVar16 + 0x10 + lVar19);
        dStack_1e8 = *(double *)(lVar16 + 8 + lVar19);
        dVar3 = *(double *)(lVar16 + 0x18 + lVar19);
        dVar4 = *(double *)(lVar16 + 0x20 + lVar19);
        dVar5 = *(double *)(lVar16 + 0x28 + lVar19);
        dVar12 = ((double)CONCAT26(uStack_ca,uStack_d0) - local_1e0) * dVar5 +
                 ((double)CONCAT26(uStack_da,local_e0) - *(double *)(lVar16 + lVar19)) * dVar3 +
                 ((double)CONCAT26(uStack_d2,uStack_d8) - dStack_1e8) * dVar4;
        local_1e0 = dVar5 * dVar12 + local_1e0;
        dStack_1e8 = dVar4 * dVar12 + dStack_1e8;
        local_1f0 = dVar12 * dVar3 + *(double *)(lVar16 + lVar19);
        dVar3 = *(double *)(lVar16 + 0x10 + lVar19);
        dVar4 = *(double *)(lVar16 + 8 + lVar19);
        dVar5 = *(double *)(lVar16 + 0x18 + lVar19);
        dVar12 = *(double *)(lVar16 + 0x20 + lVar19);
        dVar6 = *(double *)(lVar16 + 0x28 + lVar19);
        if (((local_1e0 - dVar3) * dVar6 +
            (local_1f0 - *(double *)(lVar16 + lVar19)) * dVar5 + (dStack_1e8 - dVar4) * dVar12) *
            ((local_258 - dVar3) * dVar6 +
            (local_268 - *(double *)(lVar16 + lVar19)) * dVar5 + (dStack_260 - dVar4) * dVar12) <
            0.0) {
          pdVar14 = (double *)(lVar16 + lVar19);
          local_1e0 = pdVar14[2];
          local_1f0 = *pdVar14;
          dStack_1e8 = pdVar14[1];
        }
        local_1f8 = 1;
      }
      iVar7 = *(int *)(param_1 + 0x208);
      *(uint *)(param_1 + 0x208) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x20c) < iVar7 + 1U) {
        FUN_14855bfdc(local_2b8,iVar7);
      }
      memcpy((void *)((longlong)iVar7 * 0x90 + *local_2b8),&local_268,0x90);
      lVar19 = lVar19 + 0x38;
    } while (local_2b0 != lVar19);
  }
  iVar7 = *(int *)(param_1 + 0x90);
  local_258 = param_2[2];
  local_268 = *param_2;
  dStack_260 = param_2[1];
  uStack_250 = *(undefined4 *)(param_2 + 3);
  uStack_24c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_248 = *(undefined4 *)(param_2 + 4);
  uStack_244 = *(undefined4 *)((longlong)param_2 + 0x24);
  dStack_240 = param_2[5];
  if (0 < (longlong)iVar7) {
    lVar19 = 0;
    do {
      uStack_ca = (undefined2)DAT_14c8464f0;
      uStack_c8 = (undefined6)((ulonglong)DAT_14c8464f0 >> 0x10);
      uStack_da = (undefined2)DAT_14c8464e0;
      uStack_d8 = (undefined6)((ulonglong)DAT_14c8464e0 >> 0x10);
      uStack_d2 = (undefined2)DAT_14c8464e8;
      uStack_d0 = (undefined6)((ulonglong)DAT_14c8464e8 >> 0x10);
      local_2a8 = DAT_14c8463a0;
      uStack_2a0 = DAT_14c8463a8;
      local_298 = DAT_14c8463b0;
      uStack_1b8 = CONCAT44(uStack_244,uStack_248);
      dStack_1b0 = dStack_240;
      local_1c8 = local_258;
      uStack_1c0 = (double)CONCAT44(uStack_24c,uStack_250);
      local_1d8 = local_268;
      dStack_1d0 = dStack_260;
      pdVar14 = (double *)(*(longlong *)(param_1 + 0x88) + lVar19);
      pdVar18 = local_1a8;
      for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
        *pdVar18 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        pdVar18 = pdVar18 + 1;
      }
      local_160 = -1.0;
      local_158 = 0;
      FUN_148269126(&local_1d8);
      if ((local_f0 == '\0') && (local_158 == 1)) {
        local_278 = local_110;
        local_288 = local_120;
        uStack_284 = uStack_11c;
        uStack_280 = uStack_118;
        uStack_27c = uStack_114;
        uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x48 + lVar19);
        uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x4c + lVar19);
        iVar10 = *(int *)(param_1 + 0x208);
        *(uint *)(param_1 + 0x208) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x20c) < iVar10 + 1U) {
          FUN_14855bfdc(local_2b8,iVar10);
        }
        lVar16 = *local_2b8;
        lVar17 = (longlong)iVar10 * 0x90;
        *(undefined8 *)(lVar16 + 0x10 + lVar17) = local_278;
        *(undefined8 *)(lVar16 + lVar17) = CONCAT44(uStack_284,local_288);
        ((undefined8 *)(lVar16 + lVar17))[1] = CONCAT44(uStack_27c,uStack_280);
        *(undefined4 *)(lVar16 + 0x18 + lVar17) = uVar8;
        *(undefined4 *)(lVar16 + 0x1c + lVar17) = uVar9;
        *(undefined2 *)(lVar16 + 0x30 + lVar17) = 0;
        puVar1 = (undefined8 *)(lVar16 + 0x32 + lVar17);
        *puVar1 = CONCAT26(uStack_da,local_e0);
        puVar1[1] = CONCAT26(uStack_d2,uStack_d8);
        puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar17);
        *puVar1 = CONCAT62(uStack_d0,uStack_d2);
        puVar1[1] = CONCAT62(uStack_c8,uStack_ca);
        puVar2 = (undefined4 *)(lVar16 + 0x50 + lVar17);
        *puVar2 = (undefined4)local_2a8;
        puVar2[1] = local_2a8._4_4_;
        puVar2[2] = (undefined4)uStack_2a0;
        puVar2[3] = uStack_2a0._4_4_;
        *(undefined8 *)(lVar16 + 0x60 + lVar17) = local_298;
        *(undefined1 *)(lVar16 + 0x68 + lVar17) = 0;
        *(undefined4 *)(lVar16 + 0x6c + lVar17) = 0xffffffff;
        *(undefined1 *)(lVar16 + 0x70 + lVar17) = 0;
      }
      lVar19 = lVar19 + 0x50;
    } while ((longlong)iVar7 * 0x50 != lVar19);
  }
  if ((local_c0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148555d14 FUN_148555d14 body=483 status=ok
// SIG undefined FUN_148555d14(void)

void FUN_148555d14(longlong *param_1,undefined8 param_2)

{
  code **ppcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined ***pppuVar5;
  undefined4 *puVar6;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined1 local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a4;
  code **local_a0;
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  undefined8 local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = (code **)0x7fefffffffffffff;
  local_a4 = 0x7fffffff;
  FUN_148555672();
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_14af1a480;
  local_98[0] = FUN_143ba7f68;
  local_e8 = local_98;
  local_70 = param_2;
  uVar3 = FUN_148551192(param_1,param_1 + 0xd,&local_a0,&local_a4);
  puVar4 = (undefined4 *)((ulonglong)uVar3 * 0x90 + param_1[0xd]);
  if ((int)uVar3 < 0) {
    puVar4 = (undefined4 *)0x0;
  }
  local_e8 = local_98;
  uVar3 = FUN_148551192(param_1,param_1 + 0x40,&local_a0,&local_a4);
  puVar6 = (undefined4 *)((ulonglong)uVar3 * 0x90 + param_1[0x40]);
  if ((int)uVar3 < 0) {
    puVar6 = (undefined4 *)0x0;
  }
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = puVar4;
  }
  if (((((char)param_1[0x1d] != '\x01') || ((char)param_1[0xb] != '\x01')) ||
      (*(char *)((longlong)param_1 + 0x121) != '\0')) ||
     (local_e8 = local_98,
     cVar2 = FUN_1485513c8(param_1,param_1 + 0x1e,(double)local_a0 * (double)param_1[0xc],local_a4),
     cVar2 == '\0')) {
    ppcVar1 = local_a0;
    if (puVar6 == (undefined4 *)0x0) {
      (**(code **)(*param_1 + 0x70))(param_1);
    }
    else {
      puVar4 = puVar6 + 0x1e;
      if (*(char *)(puVar6 + 0x1c) == '\0') {
        puVar4 = puVar6;
      }
      local_b8 = *(undefined8 *)(puVar4 + 4);
      local_c8 = *puVar4;
      uStack_c4 = puVar4[1];
      uStack_c0 = puVar4[2];
      uStack_bc = puVar4[3];
      FUN_146c91310(param_2,local_e0,puVar6);
      local_e8 = ppcVar1;
      (**(code **)(*param_1 + 0x68))(param_1,puVar6,local_e0,&local_c8);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar5 = &local_78;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148555ef8 FUN_148555ef8 body=1476 status=ok
// SIG undefined FUN_148555ef8(void)

void FUN_148555ef8(longlong *param_1,longlong *param_2,float param_3,longlong *param_4)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  double *pdVar12;
  undefined1 auStack_158 [32];
  float local_138;
  longlong *local_130;
  float local_128;
  undefined1 local_120;
  longlong *local_110;
  longlong local_108;
  longlong lStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar10 = 0xffffd8f1;
  if ((char)param_1[0x1d] == '\x01') {
    uVar10 = *(uint *)(param_1 + 0x21);
  }
  if ((longlong)(int)param_1[0x10] != 0) {
    pdVar11 = (double *)param_1[0xf];
    pdVar12 = pdVar11 + (longlong)(int)param_1[0x10] * 7;
    dVar2 = (double)param_3;
    dVar3 = (double)-param_3;
    do {
      cVar5 = (**(code **)(*param_1 + 0x50))();
      if (cVar5 == '\0') {
        uVar1 = *(uint *)(pdVar11 + 6);
        if (param_4 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
            plVar6 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar6 = param_4 + 7;
            }
            iVar9 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_4[9] - 1U & uVar1) * 4);
            if (iVar9 != -1) {
              do {
                lVar7 = *param_4 + (longlong)iVar9 * 0x1c;
                if (*(uint *)(*param_4 + (longlong)iVar9 * 0x1c) == uVar1) goto LAB_148556010;
                iVar9 = *(int *)(lVar7 + 0x14);
              } while (iVar9 != -1);
            }
          }
          lVar7 = 0;
LAB_148556010:
          plVar6 = (longlong *)(lVar7 + 4);
          if (lVar7 == 0) {
            plVar6 = (longlong *)0x0;
          }
        }
        if (plVar6 == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        local_108 = *plVar6;
        lStack_100 = plVar6[1];
        local_138 = *(float *)(param_2 + 4);
        if (uVar1 != uVar10) {
          local_138 = *(float *)(param_2 + 4) * 0.5;
        }
        local_c8 = pdVar11[5] * dVar2 + pdVar11[2];
        dStack_d0 = pdVar11[4] * dVar2 + pdVar11[1];
        local_d8 = pdVar11[3] * dVar2 + *pdVar11;
        local_e8 = pdVar11[5] * dVar3 + pdVar11[2];
        dStack_f0 = pdVar11[4] * dVar3 + pdVar11[1];
        local_f8 = pdVar11[3] * dVar3 + *pdVar11;
        FUN_148555398(param_2,&local_f8,&local_d8,&local_108);
      }
      pdVar11 = pdVar11 + 7;
    } while (pdVar11 != pdVar12);
  }
  if ((longlong)(int)param_1[0x12] != 0) {
    pdVar11 = (double *)param_1[0x11];
    pdVar12 = pdVar11 + (longlong)(int)param_1[0x12] * 10;
    local_110 = param_4 + 7;
    do {
      cVar5 = (**(code **)(*param_1 + 0x50))();
      if (cVar5 == '\0') {
        uVar1 = *(uint *)(pdVar11 + 9);
        if (param_4 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
            plVar6 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar6 = local_110;
            }
            iVar9 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_4[9] - 1U & uVar1) * 4);
            if (iVar9 != -1) {
              do {
                lVar7 = *param_4 + (longlong)iVar9 * 0x1c;
                if (*(uint *)(*param_4 + (longlong)iVar9 * 0x1c) == uVar1) goto LAB_14855619e;
                iVar9 = *(int *)(lVar7 + 0x14);
              } while (iVar9 != -1);
            }
          }
          lVar7 = 0;
LAB_14855619e:
          plVar6 = (longlong *)(lVar7 + 4);
          if (lVar7 == 0) {
            plVar6 = (longlong *)0x0;
          }
        }
        if (plVar6 == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        local_108 = *plVar6;
        lStack_100 = plVar6[1];
        local_128 = *(float *)(param_2 + 4);
        if (uVar1 != uVar10) {
          local_128 = *(float *)(param_2 + 4) * 0.5;
        }
        local_120 = *(undefined1 *)((longlong)param_2 + 0x3c);
        dVar2 = pdVar11[3];
        dVar3 = pdVar11[4];
        dVar4 = pdVar11[5] + pdVar11[5];
        local_d8 = dVar2 * dVar4 + pdVar11[6] * (dVar3 + dVar3);
        local_c8 = 1.0 - ((dVar3 + dVar3) * dVar3 + dVar2 * (dVar2 + dVar2));
        dStack_d0 = dVar4 * dVar3 - (dVar2 + dVar2) * pdVar11[6];
        local_e8 = pdVar11[2];
        local_f8 = *pdVar11;
        dStack_f0 = pdVar11[1];
        local_130 = &local_108;
        local_138 = 8.96831e-44;
        (**(code **)(*param_2 + 0x18))(param_2,&local_f8,&local_d8,(float)pdVar11[7]);
      }
      pdVar11 = pdVar11 + 10;
    } while (pdVar11 != pdVar12);
  }
  if ((char)param_1[0x1d] != '\0') {
    if (*(char *)((longlong)param_1 + 0x121) == '\x01') {
      if (param_4 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
          plVar6 = param_4 + 7;
          if ((longlong *)param_4[8] != (longlong *)0x0) {
            plVar6 = (longlong *)param_4[8];
          }
          iVar9 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_4[9] - 1U & uVar10) * 4);
          if (iVar9 != -1) {
            do {
              lVar7 = *param_4 + (longlong)iVar9 * 0x1c;
              if (*(uint *)(*param_4 + (longlong)iVar9 * 0x1c) == uVar10) goto LAB_1485563bd;
              iVar9 = *(int *)(lVar7 + 0x14);
            } while (iVar9 != -1);
          }
        }
        lVar7 = 0;
LAB_1485563bd:
        plVar6 = (longlong *)(lVar7 + 4);
        if (lVar7 == 0) {
          plVar6 = (longlong *)0x0;
        }
      }
      plVar8 = param_2 + 2;
      if (plVar6 != (longlong *)0x0) {
        plVar8 = plVar6;
      }
      local_108 = *plVar8;
      lStack_100 = plVar8[1];
      local_138 = *(float *)(param_2 + 4) * 0.5;
      local_c8 = (double)param_1[0x35];
      local_d8 = (double)param_1[0x33];
      dStack_d0 = (double)param_1[0x34];
      local_e8 = (double)param_1[0x2a] * 0.0 + (double)param_1[0x27];
      dStack_f0 = (double)param_1[0x29] * 0.0 + (double)param_1[0x26];
      local_f8 = (double)param_1[0x28] * 0.0 + (double)param_1[0x25];
      FUN_148555398(param_2);
    }
    local_c8 = (double)param_1[0x35];
    local_d8 = (double)param_1[0x33];
    dStack_d0 = (double)param_1[0x34];
    FUN_148526e7a(param_2);
  }
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485564be FUN_1485564be body=124 status=ok
// SIG undefined FUN_1485564be(void)

longlong * FUN_1485564be(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (lVar1 = FUN_148451390(param_2), lVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  uVar2 = FUN_145b74fac();
  lVar1 = FUN_148442e1e(lVar1,uVar2);
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_148556518;
    }
  }
  else {
    FUN_14689c22e(lVar1);
    *param_1 = lVar1;
  }
  uVar2 = FUN_145b74fac();
  lVar1 = FUN_144718840(lVar1,uVar2);
LAB_148556518:
  param_1[1] = lVar1;
  return param_1;
}



// FUNCTION 14855653a FUN_14855653a body=9 status=ok
// SIG undefined FUN_14855653a(void)

undefined8 FUN_14855653a(void)

{
  return 0x3ff0000000000000;
}



// FUNCTION 148556543 FUN_148556543 body=139 status=ok
// SIG undefined FUN_148556543(void)

void FUN_148556543(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_88);
  FUN_1485565cf(local_88,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485565cf FUN_1485565cf body=660 status=ok
// SIG undefined FUN_1485565cf(void)

bool FUN_1485565cf(undefined8 *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar11 = (double)(~-(ulonglong)(0.0 < param_4) & 0x3ff0000000000000 |
                   (ulonglong)param_4 & -(ulonglong)(0.0 < param_4));
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    dVar11 = dVar11 * (double)(*(float *)(param_1 + 8) / 90.0);
    local_78 = param_1[2];
    local_88 = *param_1;
    uStack_80 = param_1[1];
    local_a8 = *param_3;
    dStack_a0 = param_3[1];
    local_98 = param_3[2];
    local_c8 = *(undefined4 *)param_2;
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_c0 = *(undefined4 *)(param_2 + 1);
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0xc);
    local_b8 = param_2[2];
    FUN_148553406(&local_c8,&local_a8,&local_88);
    uVar4 = -(ulonglong)
             (-(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) <=
             (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da));
    dVar8 = (double)(~uVar4 & (ulonglong)-(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) |
                    CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) & uVar4);
  }
  else {
    dVar11 = (dVar11 * (double)*(float *)((longlong)param_1 + 0x44)) / 90.0;
    dVar8 = (double)param_1[6];
    dVar5 = (double)param_1[4];
    dVar6 = (double)param_1[5];
    dVar9 = dVar8 - dVar5 * 0.0;
    dVar2 = dVar5 * 0.0 - dVar6;
    dVar3 = dVar6 * 0.0 + dVar8 * -0.0;
    dVar2 = dVar2 + dVar2;
    dVar9 = dVar9 + dVar9;
    dVar3 = dVar3 + dVar3;
    dVar10 = (double)param_1[7];
    dVar1 = (dVar5 * dVar9 - dVar3 * dVar6) + dVar10 * dVar2 + 0.0;
    dVar7 = (dVar8 * dVar3 - dVar2 * dVar5) + dVar10 * dVar9 + 0.0;
    dVar5 = (dVar6 * dVar2 - dVar9 * dVar8) + dVar3 * dVar10 + 1.0;
    dVar8 = (param_2[2] - param_3[2]) * dVar1 +
            (*param_2 - *param_3) * dVar5 + (param_2[1] - param_3[1]) * dVar7;
    dVar6 = (param_2[2] - param_3[2]) - dVar1 * dVar8;
    dVar10 = (param_2[1] - param_3[1]) - dVar7 * dVar8;
    dVar8 = (*param_2 - *param_3) - dVar8 * dVar5;
    dVar8 = dVar6 * dVar6 + dVar8 * dVar8 + dVar10 * dVar10;
    dVar11 = dVar11 * dVar11;
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return dVar8 < dVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148556864 FUN_148556864 body=585 status=ok
// SIG undefined FUN_148556864(void)

double FUN_148556864(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    local_58 = param_1[2];
    local_68 = *param_1;
    uStack_60 = param_1[1];
    local_88 = *param_3;
    dStack_80 = param_3[1];
    local_78 = param_3[2];
    local_a8 = *param_2;
    dStack_a0 = param_2[1];
    local_98 = param_2[2];
    dVar8 = (double)FUN_148553406(&local_a8,&local_88,&local_68);
    dVar8 = dVar8 / (double)(*(float *)(param_1 + 8) / 90.0);
    uVar3 = -(ulonglong)(-dVar8 <= dVar8);
    dVar8 = (double)(~uVar3 & (ulonglong)-dVar8 | (ulonglong)dVar8 & uVar3);
  }
  else {
    dVar8 = (double)param_1[6];
    dVar1 = (double)param_1[4];
    dVar5 = (double)param_1[5];
    dVar7 = dVar8 - dVar1 * 0.0;
    dVar9 = dVar1 * 0.0 - dVar5;
    dVar2 = dVar5 * 0.0 + dVar8 * -0.0;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    dVar2 = dVar2 + dVar2;
    dVar10 = (double)param_1[7];
    dVar4 = (dVar1 * dVar7 - dVar2 * dVar5) + dVar10 * dVar9 + 0.0;
    dVar6 = (dVar8 * dVar2 - dVar9 * dVar1) + dVar10 * dVar7 + 0.0;
    dVar8 = (dVar5 * dVar9 - dVar7 * dVar8) + dVar2 * dVar10 + 1.0;
    dVar1 = (param_2[2] - param_3[2]) * dVar4 +
            (*param_2 - *param_3) * dVar8 + (param_2[1] - param_3[1]) * dVar6;
    dVar5 = (param_2[2] - param_3[2]) - dVar4 * dVar1;
    dVar10 = (param_2[1] - param_3[1]) - dVar6 * dVar1;
    dVar8 = (*param_2 - *param_3) - dVar1 * dVar8;
    dVar8 = (SQRT(dVar5 * dVar5 + dVar8 * dVar8 + dVar10 * dVar10) * 90.0) /
            (double)*(float *)((longlong)param_1 + 0x44);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return dVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148556aae FUN_148556aae body=187 status=ok
// SIG undefined FUN_148556aae(void)

double FUN_148556aae(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = param_1[2];
  local_28 = *param_1;
  uStack_20 = param_1[1];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  dVar2 = (double)FUN_148553406(&local_68,&local_48,&local_28);
  uVar1 = -(ulonglong)(-dVar2 <= dVar2);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (double)(~uVar1 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar1) /
           (double)(*(float *)(param_1 + 8) / 90.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148556b6a FUN_148556b6a body=805 status=ok
// SIG undefined FUN_148556b6a(void)

double FUN_148556b6a(double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double _X;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  local_100 = param_2[2] - dVar3;
  local_108 = param_2[1] - dVar2;
  local_110 = *param_2 - dVar1;
  param_3 = (double)(*(float *)(param_1 + 8) / 90.0) * param_3;
  dVar9 = param_1[6];
  dVar4 = param_1[4];
  dVar5 = param_1[5];
  dVar11 = dVar4 * 0.0 + dVar5 * -0.0;
  dVar12 = dVar5 - dVar9 * 0.0;
  dVar10 = dVar9 * 0.0 - dVar4;
  dVar11 = dVar11 + dVar11;
  dVar10 = dVar10 + dVar10;
  dVar12 = dVar12 + dVar12;
  dVar6 = param_1[7];
  _X = param_3 * 0.017453292519943295 * 0.5;
  dVar7 = sin(_X);
  local_120 = cos(_X);
  local_138 = ((dVar5 * dVar11 - dVar10 * dVar9) + dVar12 * dVar6 + 0.0) * dVar7;
  dStack_130 = ((dVar9 * dVar12 - dVar11 * dVar4) + dVar6 * dVar10 + 0.0) * dVar7;
  local_128 = ((dVar4 * dVar10 - dVar12 * dVar5) + dVar6 * dVar11 + 1.0) * dVar7;
  FUN_146bed047(&local_d8,&local_138,&local_110);
  dVar3 = dVar3 + local_c8;
  dVar2 = dVar2 + local_d0;
  dVar1 = dVar1 + local_d8;
  local_128 = param_1[2];
  local_138 = *param_1;
  dStack_130 = param_1[1];
  local_f8 = *(undefined4 *)param_2;
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_f0 = *(undefined4 *)(param_2 + 1);
  uStack_ec = *(undefined4 *)((longlong)param_2 + 0xc);
  local_e8 = param_2[2];
  local_d8 = dVar1;
  local_d0 = dVar2;
  local_c8 = dVar3;
  dVar9 = (double)FUN_148553406(&local_f8,&local_d8,&local_138);
  uVar8 = -(ulonglong)(-dVar9 <= dVar9);
  dVar1 = dVar1 - *param_2;
  dVar2 = dVar2 - param_2[1];
  dVar3 = dVar3 - param_2[2];
  if ((local_c0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return (param_3 / (double)(~uVar8 & (ulonglong)-dVar9 | (ulonglong)dVar9 & uVar8)) *
           SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148556e90 FUN_148556e90 body=364 status=ok
// SIG undefined FUN_148556e90(void)

bool FUN_148556e90(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  
  bVar8 = true;
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    dVar1 = param_1[6];
    dVar2 = param_1[4];
    dVar3 = param_1[5];
    dVar5 = dVar1 - dVar2 * 0.0;
    dVar6 = dVar2 * 0.0 - dVar3;
    dVar7 = dVar3 * 0.0 + dVar1 * -0.0;
    dVar6 = dVar6 + dVar6;
    dVar5 = dVar5 + dVar5;
    dVar7 = dVar7 + dVar7;
    dVar4 = param_1[7];
    bVar8 = 0.25 <= ((dVar3 * dVar6 - dVar5 * dVar1) + dVar7 * dVar4 + 1.0) * (*param_2 - *param_1)
                    + ((dVar1 * dVar7 - dVar6 * dVar2) + dVar4 * dVar5 + 0.0) *
                      (param_2[1] - param_1[1]) +
                    ((dVar2 * dVar5 - dVar7 * dVar3) + dVar4 * dVar6 + 0.0) *
                    (param_2[2] - param_1[2]);
  }
  return bVar8;
}



// FUNCTION 148556ffc FUN_148556ffc body=282 status=ok
// SIG undefined FUN_148556ffc(void)

void FUN_148556ffc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108 [2];
  undefined1 local_f8 [80];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 1;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  local_108[0] = FUN_148452156(uVar1);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,local_f8);
  local_98 = CONCAT11(param_5,param_4);
  local_90 = param_6;
  uStack_78 = param_7;
  local_70 = param_8;
  local_a8 = param_2;
  uStack_a0 = param_3;
  FUN_148557117(local_108);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557117 FUN_148557117 body=554 status=ok
// SIG undefined FUN_148557117(void)

undefined4 FUN_148557117(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined1 local_c8;
  byte local_c7;
  undefined1 local_a8;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar14 = -(ulonglong)(0.0 < (double)param_1[0xf]);
    local_a8 = 0;
    local_88 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_c8 = 1;
    local_c7 = *(byte *)(param_1 + 0xe);
    if (*(char *)((longlong)param_1 + 0x71) == '\x01') {
      local_c7 = local_c7 | 2;
    }
    puVar4 = (undefined8 *)param_1[0xc];
    local_80 = *puVar4;
    uStack_78 = puVar4[1];
    local_70 = puVar4[2];
    local_68 = (float)((double)(*(float *)(param_1 + 10) / 90.0) *
                      (double)(~uVar14 & 0x3ff0000000000000 | param_1[0xf] & uVar14));
    local_38 = param_1[0x10];
    local_30 = param_1[0x11];
    local_d8[0] = 0;
    local_d8[1] = 0;
    uVar12 = (**(code **)(*plVar3 + 0x2a8))(plVar3,&local_c8,local_d8);
    if ((char)uVar12 != '\0') {
      puVar5 = (undefined4 *)param_1[0xd];
      uVar7 = *(undefined4 *)(local_d8[0] + 0x18);
      uVar8 = *(undefined4 *)(local_d8[0] + 0x1c);
      uVar9 = *(undefined4 *)(local_d8[0] + 0x20);
      uVar10 = *(undefined4 *)(local_d8[0] + 0x24);
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(local_d8[0] + 0x28);
      *puVar5 = uVar7;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      puVar5 = (undefined4 *)param_1[0x12];
      if (puVar5 != (undefined4 *)0x0) {
        iVar2 = *(int *)(local_d8[0] + 0xb8);
        puVar1 = (undefined4 *)(local_d8[0] + 0x70 + (longlong)iVar2 * 0x18);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(local_d8[0] + 0x80 + (longlong)iVar2 * 0x18);
        *puVar5 = uVar7;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        *(undefined4 *)(param_1[0x12] + 0x48) = 1;
        if (*(char *)(local_d8[0] + 0x10) == '\x02') {
          lVar13 = (longlong)((iVar2 + 1) % 3);
          lVar6 = param_1[0x12];
          puVar5 = (undefined4 *)(local_d8[0] + 0x70 + lVar13 * 0x18);
          uVar7 = *puVar5;
          uVar8 = puVar5[1];
          uVar9 = puVar5[2];
          uVar10 = puVar5[3];
          *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(local_d8[0] + 0x80 + lVar13 * 0x18);
          *(undefined4 *)(lVar6 + 0x18) = uVar7;
          *(undefined4 *)(lVar6 + 0x1c) = uVar8;
          *(undefined4 *)(lVar6 + 0x20) = uVar9;
          *(undefined4 *)(lVar6 + 0x24) = uVar10;
          *(undefined4 *)(param_1[0x12] + 0x48) = 2;
        }
      }
      puVar4 = (undefined8 *)param_1[0x13];
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[2] = *(undefined8 *)(local_d8[0] + 0x80);
        uVar11 = *(undefined8 *)(local_d8[0] + 0x78);
        *puVar4 = *(undefined8 *)(local_d8[0] + 0x70);
        puVar4[1] = uVar11;
        lVar6 = param_1[0x13];
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(local_d8[0] + 0x98);
        uVar11 = *(undefined8 *)(local_d8[0] + 0x90);
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(local_d8[0] + 0x88);
        *(undefined8 *)(lVar6 + 0x20) = uVar11;
        lVar6 = param_1[0x13];
        *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(local_d8[0] + 0xb0);
        uVar7 = *(undefined4 *)(local_d8[0] + 0xa4);
        uVar8 = *(undefined4 *)(local_d8[0] + 0xa8);
        uVar9 = *(undefined4 *)(local_d8[0] + 0xac);
        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(local_d8[0] + 0xa0);
        *(undefined4 *)(lVar6 + 0x34) = uVar7;
        *(undefined4 *)(lVar6 + 0x38) = uVar8;
        *(undefined4 *)(lVar6 + 0x3c) = uVar9;
      }
    }
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557342 FUN_148557342 body=221 status=ok
// SIG undefined FUN_148557342(void)

undefined4 FUN_148557342(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  undefined2 local_c8 [16];
  undefined1 local_a8;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  (**(code **)(*param_1 + 0x2c8))();
  plVar6 = (longlong *)FUN_148452156();
  if (plVar6 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    local_a8 = 0;
    local_88 = 0;
    local_68 = 0x41700000;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_c8[0] = 0x401;
    local_80 = *param_2;
    uStack_7c = param_2[1];
    uStack_78 = param_2[2];
    uStack_74 = param_2[3];
    local_70 = *(undefined8 *)(param_2 + 4);
    local_d8[0] = 0;
    local_d8[1] = 0;
    uVar5 = (**(code **)(*plVar6 + 0x2a8))(plVar6,local_c8,local_d8);
    if ((char)uVar5 != '\0') {
      uVar1 = *(undefined4 *)(local_d8[0] + 0x18);
      uVar2 = *(undefined4 *)(local_d8[0] + 0x1c);
      uVar3 = *(undefined4 *)(local_d8[0] + 0x20);
      uVar4 = *(undefined4 *)(local_d8[0] + 0x24);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(local_d8[0] + 0x28);
      *param_3 = uVar1;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
    }
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557420 FUN_148557420 body=218 status=ok
// SIG undefined FUN_148557420(void)

double FUN_148557420(longlong *param_1,double param_2)

{
  longlong *plVar1;
  undefined1 auStack_f8 [40];
  char local_d0 [80];
  undefined1 local_80 [8];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x378))(plVar1);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_80);
  (**(code **)(*plVar1 + 0x30))(plVar1,local_d0);
  if (local_d0[0] == '\x01') {
    if (local_78 <= local_70) {
      local_78 = local_70;
    }
    if (local_78 <= local_68) {
      local_78 = local_68;
    }
    if (0.0 < local_78) {
      param_2 = (double)(int)((ulonglong)
                              (longlong)ROUND(param_2 / local_78 + param_2 / local_78 + 0.5) >> 1) *
                local_78;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485574fb FUN_1485574fb body=79 status=ok
// SIG undefined FUN_1485574fb(void)

undefined8 FUN_1485574fb(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_14485cccc(param_1 + 0xb8);
  if ((lVar2 == 0) || (-1 < *(char *)(lVar2 + 0x60))) {
    plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0xd8);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x4e8))(plVar3);
      if (cVar1 == '\0') goto LAB_148557546;
    }
    uVar4 = 1;
  }
  else {
LAB_148557546:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14855754a FUN_14855754a body=496 status=ok
// SIG undefined FUN_14855754a(void)

ulonglong FUN_14855754a(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5,longlong *param_6)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  void *_Src;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined1 *local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0;
  longlong local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar2 = (undefined4 *)FUN_140bfa850();
  local_d8 = *puVar2;
  local_d4 = 0;
  FUN_144ae1dc6(local_d0,&DAT_14cad0f68);
  local_c0 = 1;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_f8 = &local_d8;
  local_f0 = local_d0;
  cVar1 = FUN_1417bb826(param_1,&local_e8,param_3,param_4);
  if (cVar1 != '\0') {
    if ((longlong)(int)uStack_e0 != 0) {
      pvVar4 = (void *)((longlong)(int)uStack_e0 * 0x100 + (longlong)local_e8);
      fVar7 = 3.4028235e+38;
      _Src = local_e8;
      do {
        if (*(float *)((longlong)_Src + 8) <= fVar7 && fVar7 != *(float *)((longlong)_Src + 8)) {
          cVar1 = FUN_1485574fb(_Src);
          if (cVar1 == '\0') {
            if (param_6 != (longlong *)0x0) {
              lVar3 = FUN_14479d2ce((longlong)_Src + 0xd8);
              if ((longlong)(int)param_6[1] != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*param_6 + lVar6) == lVar3) goto LAB_148557634;
                  lVar6 = lVar6 + 8;
                } while ((longlong)(int)param_6[1] * 8 != lVar6);
              }
            }
          }
          else {
LAB_148557634:
            if (param_5 != (longlong *)0x0) {
              lVar3 = FUN_14479d2ce((longlong)_Src + 0xd8);
              if ((longlong)(int)param_5[1] != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*param_5 + lVar6) == lVar3) goto LAB_148557617;
                  lVar6 = lVar6 + 8;
                } while ((longlong)(int)param_5[1] * 8 != lVar6);
              }
            }
            memcpy(param_2,_Src,0x100);
            fVar7 = *(float *)((longlong)_Src + 8);
          }
        }
LAB_148557617:
        _Src = (void *)((longlong)_Src + 0x100);
      } while (_Src != pvVar4);
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),fVar7 < 3.4028235e+38);
      goto LAB_1485576bd;
    }
  }
  uVar5 = 0;
LAB_1485576bd:
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8(local_e8);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14855773b FUN_14855773b body=270 status=ok
// SIG undefined FUN_14855773b(void)

void FUN_14855773b(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_4[2] - param_3[2];
  local_38 = param_4[1] - param_3[1];
  local_40 = *param_4 - *param_3;
  local_48 = param_3[2];
  local_58 = *param_3;
  dStack_50 = param_3[1];
  dVar2 = local_30 * local_30 + local_40 * local_40 + local_38 * local_38;
  if (9.99999993922529e-09 < dVar2) {
    dVar2 = 1.0 / SQRT(dVar2);
    local_40 = local_40 * dVar2;
    local_38 = local_38 * dVar2;
    local_30 = local_30 * dVar2;
  }
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  uVar1 = FUN_148452156(uVar1);
  local_68 = param_6;
  FUN_1485502e2(uVar1,param_2,&local_58,param_5);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855784a FUN_14855784a body=57 status=ok
// SIG undefined FUN_14855784a(void)

void FUN_14855784a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  uVar1 = FUN_148452156(uVar1);
  FUN_1485502e2(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148557883 FUN_148557883 body=7 status=ok
// SIG undefined FUN_148557883(void)

void FUN_148557883(void)

{
  FUN_1447277f0(0);
  return;
}



// FUNCTION 14855788a FUN_14855788a body=108 status=ok
// SIG undefined FUN_14855788a(void)

undefined8 FUN_14855788a(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  uVar1 = FUN_140a1dfd8();
  pwVar3 = L"/MeshModelingToolsetExp/Materials/MeshVertexColorMaterial";
  if (param_2 != '\0') {
    pwVar3 = L"/MeshModelingToolsetExp/Materials/MeshVertexColorMaterialTwoSided";
  }
  lVar2 = FUN_1412ecd05(uVar1,0,pwVar3,0,0,0,1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_14090ceee(lVar2,param_1,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1485578f6 FUN_1485578f6 body=116 status=ok
// SIG undefined FUN_1485578f6(void)

void FUN_1485578f6(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/InProgressMaterial",0,0,0,1,0);
  if (param_1 != (longlong *)0x0 && lVar2 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148557960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return;
  }
  return;
}



// FUNCTION 14855796a FUN_14855796a body=45 status=ok
// SIG undefined FUN_14855796a(void)

undefined8 FUN_14855796a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1485578f6();
  if (lVar1 != 0) {
    uVar2 = FUN_14090ceee(lVar1,param_1,0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148557997 FUN_148557997 body=248 status=ok
// SIG undefined FUN_148557997(void)

undefined8 FUN_148557997(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1485578f6();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14090ceee(lVar1,param_1,0);
    local_38 = 0x3f4ccccd;
    uStack_34 = 0x3c7e4799;
    uStack_30 = 0x3c7e4799;
    uStack_2c = 0x3f800000;
    FUN_1446f470e(&local_40,L"BrightColor",1);
    FUN_144a9d3f0(uVar2,local_40,&local_38);
    local_58 = 0x3ead5ede;
    uStack_54 = 0x3c673cbb;
    uStack_50 = 0x3c673cbb;
    uStack_4c = 0x3f800000;
    FUN_1446f470e(&local_60,L"DarkColor",1);
    FUN_144a9d3f0(uVar2,local_60,&local_58);
    FUN_1446f470e(&local_68,L"TimeFactor",1);
    FUN_14472da24(uVar2,local_68,0x40000000);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557a90 FUN_148557a90 body=90 status=ok
// SIG undefined FUN_148557a90(void)

undefined8 FUN_148557a90(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/BrushIndicatorMaterial",0,0,0,1,
                        0);
  if (lVar2 != 0) {
    uVar1 = FUN_14090ceee(lVar2,param_1,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148557aea FUN_148557aea body=90 status=ok
// SIG undefined FUN_148557aea(void)

undefined8 FUN_148557aea(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/BrushAlphaIndicatorMaterial",0,0
                        ,0,1,0);
  if (lVar2 != 0) {
    uVar1 = FUN_14090ceee(lVar2,param_1,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148557b44 FUN_148557b44 body=116 status=ok
// SIG undefined FUN_148557b44(void)

void FUN_148557b44(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/SculptMaterial",0,0,0,1,0);
  if (param_1 != (longlong *)0x0 && lVar2 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148557bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return;
  }
  return;
}



// FUNCTION 148557bb8 FUN_148557bb8 body=264 status=ok
// SIG undefined FUN_148557bb8(void)

undefined8 FUN_148557bb8(undefined8 param_1,undefined4 *param_2,double param_3,char param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140a1dfd8();
  pwVar4 = L"/MeshModelingToolsetExp/Materials/SculptMaterial_Transparent";
  if (param_4 != '\0') {
    pwVar4 = L"/MeshModelingToolsetExp/Materials/SculptMaterial_TransparentTwoSided";
  }
  uVar3 = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 1;
  local_78 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,pwVar4,0);
  if (lVar2 != 0) {
    uVar3 = FUN_14090ceee(lVar2,param_1,0);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_1446f470e(&local_50,L"Color",1);
    FUN_144a9d3f0(uVar3,local_50,&local_48);
    FUN_1446f470e(&local_58,L"Opacity",1);
    FUN_14472da24(uVar3,local_58,(float)param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557cc1 FUN_148557cc1 body=193 status=ok
// SIG undefined FUN_148557cc1(void)

void FUN_148557cc1(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  if (param_2 == 2) {
    uVar1 = FUN_140a1dfd8();
    pwVar3 = L"/MeshModelingToolsetExp/Materials/SculptMaterial_TangentNormalFromView";
  }
  else if (param_2 == 1) {
    uVar1 = FUN_1411eefea();
    pwVar3 = L"/MeshModelingToolsetExp/Materials/SculptMaterial_Soft";
  }
  else {
    if (param_2 != 0) {
      lVar2 = 0;
      goto LAB_148557d5b;
    }
    uVar1 = FUN_1411eefea();
    pwVar3 = L"/MeshModelingToolsetExp/Materials/SculptMaterial_Basic";
  }
  lVar2 = FUN_1412ecd05(uVar1,0,pwVar3,0,0,0,1,0);
LAB_148557d5b:
  if (param_1 == 0 || lVar2 != 0) {
    return;
  }
  FUN_148557b44(param_1);
  return;
}



// FUNCTION 148557d82 FUN_148557d82 body=178 status=ok
// SIG undefined FUN_148557d82(void)

undefined8 FUN_148557d82(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140a1dfd8();
  uVar3 = 0;
  local_30 = 0;
  local_40 = 0;
  local_38 = 1;
  local_48 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/ImageBasedMaterial_Master",0);
  if (lVar2 != 0) {
    uVar3 = FUN_14090ceee(lVar2,param_1,0);
    if (param_2 != 0) {
      FUN_1446f470e(&local_28,L"ImageTexture",1);
      FUN_14016d8b0(uVar3,local_28,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557e35 FUN_148557e35 body=116 status=ok
// SIG undefined FUN_148557e35(void)

void FUN_148557e35(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_140a1dfd8();
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/SelectionMaterial",0,0,0,1,0);
  if (param_1 != (longlong *)0x0 && lVar2 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148557e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return;
  }
  return;
}



// FUNCTION 148557ea9 FUN_148557ea9 body=312 status=ok
// SIG undefined FUN_148557ea9(void)

undefined8 FUN_148557ea9(undefined4 *param_1,longlong *param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140a1dfd8();
  local_60 = 0;
  local_70 = 0;
  local_68 = 1;
  local_78 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/SelectionMaterial",0);
  if (param_2 != (longlong *)0x0 && lVar2 == 0) {
    (**(code **)(*param_2 + 0x378))(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14090ceee(lVar2,param_2,0);
    local_48 = *param_1;
    uStack_44 = param_1[1];
    uStack_40 = param_1[2];
    uStack_3c = param_1[3];
    FUN_1446f470e(&local_50,L"ConstantColor",1);
    FUN_144a9d3f0(uVar1,local_50,&local_48);
    if ((param_3 != 0.0) || (NAN(param_3))) {
      FUN_1446f470e(&local_58,L"DepthBias",1);
      FUN_14472da24(uVar1,local_58,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148557fff FUN_148557fff body=243 status=ok
// SIG undefined FUN_148557fff(void)

undefined8 FUN_148557fff(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140a1dfd8();
  uVar3 = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 1;
  local_78 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Materials/SimpleBaseMaterial_Transparent",
                        0);
  if (lVar2 != 0) {
    uVar3 = FUN_14090ceee(lVar2,param_1,0);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_1446f470e(&local_50,L"Color",1);
    FUN_144a9d3f0(uVar3,local_50,&local_48);
    FUN_1446f470e(&local_58,L"Opacity",1);
    FUN_14472da24(uVar3,local_58,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485580f3 FUN_1485580f3 body=312 status=ok
// SIG undefined FUN_1485580f3(void)

undefined8
FUN_1485580f3(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_140a1dfd8();
  uVar3 = 0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 1;
  local_98 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,
                        L"/MeshModelingToolsetExp/Materials/SimpleTwoSidedOffsetMaterial_Transparent"
                        ,0);
  if (lVar2 != 0) {
    uVar3 = FUN_14090ceee(lVar2,param_1,0);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_1446f470e(&local_60,L"Color",1);
    FUN_144a9d3f0(uVar3,local_60,&local_58);
    FUN_1446f470e(&local_68,L"DepthBias",1);
    FUN_14472da24(uVar3,local_68,param_3);
    FUN_1446f470e(&local_70,L"Opacity",1);
    FUN_14472da24(uVar3,local_70,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855822c FUN_14855822c body=312 status=ok
// SIG undefined FUN_14855822c(void)

undefined8
FUN_14855822c(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_140a1dfd8();
  uVar3 = 0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 1;
  local_98 = 0;
  lVar2 = FUN_1412ecd05(uVar1,0,
                        L"/MeshModelingToolsetExp/Materials/SimpleOffsetMaterial_Transparent",0);
  if (lVar2 != 0) {
    uVar3 = FUN_14090ceee(lVar2,param_1,0);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_1446f470e(&local_60,L"Color",1);
    FUN_144a9d3f0(uVar3,local_60,&local_58);
    FUN_1446f470e(&local_68,L"DepthBias",1);
    FUN_14472da24(uVar3,local_68,param_3);
    FUN_1446f470e(&local_70,L"Opacity",1);
    FUN_14472da24(uVar3,local_70,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148558365 FUN_148558365 body=134 status=ok
// SIG undefined FUN_148558365(void)

void FUN_148558365(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  
  uVar1 = FUN_140a1dfd8();
  pwVar4 = L"/MeshModelingToolsetExp/Materials/PointSetOverlaidComponentMaterial";
  if (param_2 != '\0') {
    pwVar4 = L"/MeshModelingToolsetExp/Materials/PointSetComponentMaterial";
  }
  lVar2 = FUN_1412ecd05(uVar1,0,pwVar4,0,0,0,1,0);
  if (param_1 != (longlong *)0x0 && lVar2 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001485583e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return;
  }
  return;
}



// FUNCTION 1485583eb FUN_1485583eb body=134 status=ok
// SIG undefined FUN_1485583eb(void)

void FUN_1485583eb(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  
  uVar1 = FUN_140a1dfd8();
  pwVar4 = L"/MeshModelingToolsetExp/Materials/LineSetOverlaidComponentMaterial";
  if (param_2 != '\0') {
    pwVar4 = L"/MeshModelingToolsetExp/Materials/LineSetComponentMaterial";
  }
  lVar2 = FUN_1412ecd05(uVar1,0,pwVar4,0,0,0,1,0);
  if (param_1 != (longlong *)0x0 && lVar2 == 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x378))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148558466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x38))(plVar3,1,*(code **)(*plVar3 + 0x38));
    return;
  }
  return;
}



// FUNCTION 148558471 FUN_148558471 body=95 status=ok
// SIG undefined FUN_148558471(void)

void FUN_148558471(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1400d1e14();
  uVar1 = FUN_1412ecd05(uVar1,0,L"/MeshModelingToolsetExp/Curves/ContrastAdjustmentCurve",0,0,0,1,0)
  ;
  uVar2 = FUN_1409ffe1d();
  uVar3 = FUN_1400d1e14();
  FUN_14092e757(uVar3,uVar1,uVar2,0);
  return;
}



// FUNCTION 1485584d0 FUN_1485584d0 body=86 status=ok
// SIG undefined FUN_1485584d0(void)

void FUN_1485584d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145b7526a();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(char *)(lVar2 + 0x38) != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148558508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb80))(param_1,1);
  return;
}



// FUNCTION 148558526 FUN_148558526 body=65 status=ok
// SIG undefined FUN_148558526(void)

void FUN_148558526(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar2 = FUN_145995a44();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1485584d0(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148558567 FUN_148558567 body=1236 status=ok
// SIG undefined FUN_148558567(void)

double * FUN_148558567(double *param_1,longlong *param_2,undefined8 *param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined1 local_2b8 [4];
  undefined4 local_2b4;
  double local_290;
  double local_288;
  double local_280;
  undefined4 local_214;
  undefined4 local_1e8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  char local_169;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_128 = DAT_14c8464f0;
  local_138 = DAT_14c8464e0;
  uStack_130 = DAT_14c8464e8;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  dStack_108 = 1.0;
  local_168 = 0x7fefffffffffffff;
  local_160 = 0x7fefffffffffffff;
  local_158 = 0x7fefffffffffffff;
  local_150 = 0xffefffffffffffff;
  local_148 = 0xffefffffffffffff;
  local_140 = 0xffefffffffffffff;
  local_178 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 0x378))(param_2);
  (**(code **)(*plVar8 + 0x10))(plVar8,&local_1b8);
  cVar7 = FUN_148550543(&local_1b8,&local_138,&local_168,&local_169);
  if (cVar7 == '\0') {
    plVar8 = (longlong *)(**(code **)(*param_2 + 0x378))(param_2);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    memset(local_2b8,0,0x100);
    local_1e8 = 0xffffffff;
    local_2b4 = 0x3f800000;
    local_214 = 0xffffffff;
    dVar13 = local_c8 - local_d8 * 0.0;
    dVar14 = local_d8 * 0.0 - local_d0;
    dVar15 = local_d0 * 0.0 + local_c8 * -0.0;
    dVar14 = dVar14 + dVar14;
    dVar13 = dVar13 + dVar13;
    dVar15 = dVar15 + dVar15;
    local_2c0 = (local_d8 * dVar13 - dVar15 * local_d0) + local_c0 * dVar14 + 0.0;
    local_2c8 = (local_c8 * dVar15 - dVar14 * local_d8) + local_c0 * dVar13 + 0.0;
    local_2d0 = (local_d0 * dVar14 - dVar13 * local_c8) + dVar15 * local_c0 + 1.0;
    local_2e8 = local_f8;
    uStack_2e4 = uStack_f4;
    uStack_2e0 = uStack_f0;
    uStack_2dc = uStack_ec;
    local_2d8 = local_e8;
    uVar9 = FUN_148452156(param_2);
    local_2f8 = 0;
    cVar7 = FUN_1485502e2(uVar9,local_2b8,&local_2e8,0);
    if (cVar7 != '\0') {
      param_4 = (local_280 - local_2d8) * local_2c0 +
                (local_290 - (double)CONCAT44(uStack_2e4,local_2e8)) * local_2d0 +
                (local_288 - (double)CONCAT44(uStack_2dc,uStack_2e0)) * local_2c8;
    }
    dVar14 = local_c8 - local_d8 * 0.0;
    dVar15 = local_d8 * 0.0 - local_d0;
    dVar13 = local_d0 * 0.0 + local_c8 * -0.0;
    dVar15 = dVar15 + dVar15;
    dVar14 = dVar14 + dVar14;
    dVar13 = dVar13 + dVar13;
    *param_1 = ((local_d0 * dVar15 - dVar14 * local_c8) + dVar13 * local_c0 + 1.0) * param_4 +
               (double)CONCAT44(uStack_f4,local_f8);
    param_1[1] = ((local_c8 * dVar13 - dVar15 * local_d8) + local_c0 * dVar14 + 0.0) * param_4 +
                 (double)CONCAT44(uStack_ec,uStack_f0);
    param_1[2] = ((local_d8 * dVar14 - dVar13 * local_d0) + local_c0 * dVar15 + 0.0) * param_4 +
                 local_e8;
    uVar10 = *(undefined4 *)((longlong)param_3 + 4);
    uVar11 = *(undefined4 *)(param_3 + 1);
    uVar12 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar1 = *(undefined4 *)(param_3 + 2);
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar3 = *(undefined4 *)(param_3 + 3);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
    *(undefined4 *)(param_1 + 4) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar12;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 6) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  }
  else {
    if (local_169 == '\x01') {
      param_1[6] = dStack_108;
      uVar10 = uStack_120._4_4_;
      uVar11 = uStack_118._4_4_;
      uVar12 = uStack_110._4_4_;
      uVar9 = uStack_120;
      uVar5 = uStack_118;
      uVar6 = uStack_110;
    }
    else {
      uVar9 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      dStack_108 = (double)param_3[3];
      param_1[6] = dStack_108;
      uStack_120._0_4_ = (undefined4)uVar9;
      uStack_120._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_118._0_4_ = (undefined4)uVar5;
      uStack_118._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_110._0_4_ = (undefined4)uVar6;
      uStack_110._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar10 = uStack_120._4_4_;
      uVar11 = uStack_118._4_4_;
      uVar12 = uStack_110._4_4_;
    }
    uStack_110 = uVar6;
    uStack_118 = uVar5;
    uStack_120 = uVar9;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar11;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar12;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_128;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_128._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
    *(undefined4 *)param_1 = (undefined4)local_138;
    *(undefined4 *)((longlong)param_1 + 4) = local_138._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_130._4_4_;
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148558a3c FUN_148558a3c body=70 status=ok
// SIG undefined FUN_148558a3c(void)

void FUN_148558a3c(int *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    (**(code **)(*(longlong *)(param_3 + 0x28) + 0x10))(param_3 + 0x28,param_2);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  if ((longlong *)*param_2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148558a76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148558a82 FUN_148558a82 body=20 status=ok
// SIG undefined FUN_148558a82(void)

void FUN_148558a82(int *param_1,longlong param_2)

{
  *param_1 = *param_1 + -1;
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148558a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
  return;
}



// FUNCTION 148558a96 FUN_148558a96 body=39 status=ok
// SIG undefined FUN_148558a96(void)

void FUN_148558a96(int *param_1,longlong param_2)

{
  if (0 < *param_1) {
    (**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 148558ac2 FUN_148558ac2 body=811 status=ok
// SIG undefined FUN_148558ac2(void)

void FUN_148558ac2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xa8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3ff0000000000000;
  uVar5 = DAT_14c846518._4_4_;
  uVar4 = (undefined4)DAT_14c846518;
  uVar3 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c846510;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c846520;
  *(undefined4 *)(param_1 + 0x98) = 1;
  plVar8 = (longlong *)FUN_1484c6256(param_1);
  if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar8);
  }
  *(longlong **)(param_1 + 0x108) = plVar8;
  local_98 = *(undefined8 **)(param_1 + 0xc0);
  uStack_90 = *(ulonglong *)(param_1 + 200);
  local_88 = *(undefined4 *)(param_1 + 0xd0);
  uStack_84 = *(undefined4 *)(param_1 + 0xd4);
  uStack_80 = *(undefined4 *)(param_1 + 0xd8);
  uStack_7c = *(undefined4 *)(param_1 + 0xdc);
  local_78 = *(undefined4 *)(param_1 + 0xa8);
  uStack_74 = *(undefined4 *)(param_1 + 0xac);
  uStack_70 = *(undefined4 *)(param_1 + 0xb0);
  uStack_6c = *(undefined4 *)(param_1 + 0xb4);
  local_68 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  (**(code **)(*plVar8 + 0x2b8))(plVar8);
  FUN_148558dee(param_1);
  FUN_148559016(*(longlong *)(param_1 + 0x108) + 0x28,&local_98,param_1);
  FUN_148559170(*(longlong *)(param_1 + 0x108) + 0x58,&local_98,param_1,&LAB_148559266);
  FUN_148559170(*(longlong *)(param_1 + 0x108) + 0x70,&local_98,param_1,&LAB_148559276);
  lVar1 = *(longlong *)(param_1 + 0x108);
  local_98 = (undefined8 *)0x0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  FUN_1446efa72(&local_98,0,3,0x10);
  puVar6 = local_98;
  uStack_90._0_4_ = 3;
  *local_98 = &PTR_LAB_14aeff220;
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
  local_98[2] = lVar9;
  *local_98 = &PTR_FUN_14af1a580;
  local_98[3] = 0;
  FUN_14485c47a(local_98 + 3,param_1);
  puVar6[4] = param_1;
  FUN_1484d65de(lVar1 + 0x88,local_a0,&local_98);
  FUN_1449db362(&local_98);
  lVar1 = *(longlong *)(param_1 + 0x108);
  local_98 = (undefined8 *)0x0;
  uStack_90._0_4_ = 0;
  FUN_1446efa72(&local_98,0,3,0x10);
  puVar6 = local_98;
  uStack_90 = CONCAT44(uStack_90._4_4_,3);
  *local_98 = &PTR_LAB_14af12c50;
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
  local_98[2] = lVar9;
  *local_98 = &PTR_FUN_14af1a5f0;
  local_98[3] = 0;
  FUN_14485c47a(local_98 + 3,param_1);
  puVar6[4] = param_1;
  FUN_148515308(lVar1 + 0xb8,local_a0,&local_98);
  FUN_1449db362(&local_98);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148558dee FUN_148558dee body=550 status=ok
// SIG undefined FUN_148558dee(void)

void FUN_148558dee(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar1 = *(char *)(param_1 + 0xf8);
  if (cVar1 == '\x01') {
    local_98 = 0;
    uStack_90 = 0;
    lVar2 = FUN_14843d1a1(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    lVar2 = FUN_14843d06b(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x9c),param_1);
  }
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  *(longlong *)(param_1 + 0x100) = lVar2;
  lVar2 = local_a8;
  if (cVar1 != '\0') {
    lVar2 = local_98;
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 0x100);
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    *(undefined1 *)((longlong)plVar4 + 0x82) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x100) + 0x83) = *(undefined1 *)(param_1 + 0xa0);
    plVar4 = *(longlong **)(param_1 + 0x100);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    local_78 = (longlong *)0x0;
    puVar3 = (undefined8 *)(param_1 + 0x180);
    if (*(undefined8 **)(param_1 + 0x170) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x170);
    }
    local_88 = *(longlong *)(param_1 + 0x160);
    (**(code **)*puVar3)();
    (**(code **)(*plVar4 + 0x308))(plVar4,&local_88);
    if (local_88 != 0) {
      plVar4 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar4 = (longlong *)&local_68;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = *(longlong **)(param_1 + 0x100);
  }
  (**(code **)(*plVar4 + 0x318))(plVar4,*(undefined1 *)(param_1 + 0xf9));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1484f6c9e(*(longlong *)(param_1 + 0x110) + 0x30,*(undefined8 *)(param_1 + 0x100),0,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x100) + 800))
            (*(longlong **)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
             *(undefined8 *)(param_1 + 0x90));
  local_88 = *(longlong *)(param_1 + 0xc0);
  uStack_80 = *(undefined8 *)(param_1 + 200);
  local_78 = *(longlong **)(param_1 + 0xd0);
  uStack_70 = *(undefined4 *)(param_1 + 0xd8);
  uStack_6c = *(undefined4 *)(param_1 + 0xdc);
  local_68 = *(undefined4 *)(param_1 + 0xa8);
  uStack_64 = *(undefined4 *)(param_1 + 0xac);
  uStack_60 = *(undefined4 *)(param_1 + 0xb0);
  uStack_5c = *(undefined4 *)(param_1 + 0xb4);
  local_58 = *(undefined8 *)(param_1 + 0xb8);
  uStack_50 = 0;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_148415b4c(*(undefined8 *)(param_1 + 0x100),&local_88,1);
  (**(code **)(**(longlong **)(param_1 + 0x100) + 0x350))
            (*(longlong **)(param_1 + 0x100),*(undefined1 *)(param_1 + 0xa2));
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148559016 FUN_148559016 body=244 status=ok
// SIG undefined FUN_148559016(void)

undefined8 FUN_148559016(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14aeff220;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14af1a4a0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_14855910c;
  FUN_1484d65de(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148559170 FUN_148559170 body=244 status=ok
// SIG undefined FUN_148559170(void)

undefined8
FUN_148559170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14af12c50;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14af1a510;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_148515308(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855929e FUN_14855929e body=97 status=ok
// SIG undefined FUN_14855929e(void)

void FUN_14855929e(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0xa0) != param_2) || (*(char *)(param_1 + 0xa1) == '\0')) {
    *(undefined1 *)(param_1 + 0xa1) = 1;
    *(char *)(param_1 + 0xa0) = param_2;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2d8))(*(longlong **)(param_1 + 0x88),param_1)
      ;
      *(undefined8 *)(param_1 + 0x100) = 0;
      FUN_148558dee(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148559300 FUN_148559300 body=81 status=ok
// SIG undefined FUN_148559300(void)

void FUN_148559300(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x9c) != param_2) &&
     (*(int *)(param_1 + 0x9c) = param_2, *(longlong *)(param_1 + 0x100) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2d8))(*(longlong **)(param_1 + 0x88),param_1);
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_148558dee(param_1);
    return;
  }
  return;
}



// FUNCTION 148559352 FUN_148559352 body=77 status=ok
// SIG undefined FUN_148559352(void)

void FUN_148559352(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x98) != param_2) {
    if (param_2 == 1) {
      FUN_148558dee(param_1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2d8))(*(longlong **)(param_1 + 0x88),param_1)
      ;
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    *(int *)(param_1 + 0x98) = param_2;
  }
  return;
}



// FUNCTION 1485593c8 FUN_1485593c8 body=81 status=ok
// SIG undefined FUN_1485593c8(void)

void FUN_1485593c8(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0xf8) != param_2) &&
     (*(char *)(param_1 + 0xf8) = param_2, *(longlong *)(param_1 + 0x100) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x2d8))(*(longlong **)(param_1 + 0x88),param_1);
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_148558dee(param_1);
    return;
  }
  return;
}



// FUNCTION 14855943a FUN_14855943a body=86 status=ok
// SIG undefined FUN_14855943a(void)

void FUN_14855943a(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x100);
  if (lVar5 != 0) {
    pcVar1 = *(code **)(param_1 + 0x120);
    if (pcVar1 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      plVar4 = (longlong *)(param_1 + 0x140);
      if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_1 + 0x130);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      uVar2 = (*pcVar1)(uVar3);
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    *(undefined1 *)(lVar5 + 0x40) = uVar2;
  }
  return;
}



// FUNCTION 148559490 FUN_148559490 body=229 status=ok
// SIG undefined FUN_148559490(void)

void FUN_148559490(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined8 *)(param_2 + 4);
  uVar6 = *(undefined8 *)(param_2 + 6);
  uVar7 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xd0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = uVar5;
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0xf0) = DAT_14c846520;
    uVar3 = DAT_14c846518._4_4_;
    uVar2 = (undefined4)DAT_14c846518;
    uVar1 = DAT_14c846510._4_4_;
    *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c846510;
    *(undefined4 *)(param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0xe8) = uVar2;
    *(undefined4 *)(param_1 + 0xec) = uVar3;
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    local_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    local_58 = *(undefined4 *)(param_1 + 0xd0);
    uStack_54 = *(undefined4 *)(param_1 + 0xd4);
    uStack_50 = *(undefined4 *)(param_1 + 0xd8);
    uStack_4c = *(undefined4 *)(param_1 + 0xdc);
    local_48 = *(undefined4 *)(param_1 + 0xa8);
    uStack_44 = *(undefined4 *)(param_1 + 0xac);
    uStack_40 = *(undefined4 *)(param_1 + 0xb0);
    uStack_3c = *(undefined4 *)(param_1 + 0xb4);
    local_38 = *(undefined8 *)(param_1 + 0xb8);
    uStack_30 = 0;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0x3ff0000000000000;
    local_18 = 0x3ff0000000000000;
    uStack_10 = 0;
    FUN_148415b4c(*(longlong *)(param_1 + 0x100),&local_68,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148559576 FUN_148559576 body=234 status=ok
// SIG undefined FUN_148559576(void)

void FUN_148559576(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = *(undefined8 *)(param_2 + 4);
  uVar7 = *(undefined8 *)(param_2 + 6);
  uVar8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xd0) = uVar8;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  *(undefined4 *)(param_1 + 0xb4) = uVar5;
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0xf0) = DAT_14c846520;
    uVar4 = DAT_14c846518._4_4_;
    uVar3 = (undefined4)DAT_14c846518;
    uVar2 = DAT_14c846510._4_4_;
    *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c846510;
    *(undefined4 *)(param_1 + 0xe4) = uVar2;
    *(undefined4 *)(param_1 + 0xe8) = uVar3;
    *(undefined4 *)(param_1 + 0xec) = uVar4;
  }
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    local_68 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    local_58 = *(undefined4 *)(param_1 + 0xd0);
    uStack_54 = *(undefined4 *)(param_1 + 0xd4);
    uStack_50 = *(undefined4 *)(param_1 + 0xd8);
    uStack_4c = *(undefined4 *)(param_1 + 0xdc);
    local_48 = *(undefined4 *)(param_1 + 0xa8);
    uStack_44 = *(undefined4 *)(param_1 + 0xac);
    uStack_40 = *(undefined4 *)(param_1 + 0xb0);
    uStack_3c = *(undefined4 *)(param_1 + 0xb4);
    local_38 = *(undefined8 *)(param_1 + 0xb8);
    uStack_30 = 0;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0x3ff0000000000000;
    local_18 = 0x3ff0000000000000;
    uStack_10 = 0;
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_68,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485596a0 FUN_1485596a0 body=628 status=ok
// SIG undefined FUN_1485596a0(void)

void FUN_1485596a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_1 + 0x100) = 0x3ff0000000000000;
  local_c8 = *(undefined **)(param_1 + 0xc0);
  uStack_80 = *(undefined **)(param_1 + 200);
  local_b8 = *(longlong **)(param_1 + 0xd0);
  uStack_70 = *(undefined8 *)(param_1 + 0xd8);
  local_68 = *(longlong *)(param_1 + 0xe0);
  uStack_60 = *(undefined8 *)(param_1 + 0xe8);
  local_58 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xf8);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 0xe0) = &PTR_LAB_14af1a660;
  *(longlong *)(param_1 + 0xe8) = param_1;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(param_1 + 0xc0) = FUN_143ba8858;
  *(ulonglong *)(param_1 + 200) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != (undefined *)0x0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = (undefined *)uVar2;
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x2d0) = 0x4370000043700000;
  *(undefined8 *)(param_1 + 0x2d8) = 0x3f80000041800000;
  *(undefined4 *)(param_1 + 0x2e0) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x2e4) = 0x43700000;
  *(undefined4 *)(param_1 + 0x2e8) = 0x43700000;
  *(undefined4 *)(param_1 + 0x2ec) = 0x43700000;
  *(undefined8 *)(param_1 + 0x2f0) = 0x410000003f800000;
  *(undefined1 *)(param_1 + 0x2fc) = 0;
  lVar1 = param_1 + 0x3e0;
  local_88 = &DAT_14af1a288;
  uStack_80 = &DAT_149e1dd34;
  FUN_14855df6c(lVar1,&local_c8,&local_88);
  local_88 = &DAT_14af1a28c;
  uStack_80 = &DAT_149e1dd14;
  FUN_14855df6c(lVar1,&local_c8,&local_88);
  local_88 = &DAT_14af1a290;
  uStack_80 = &DAT_149e1dd04;
  FUN_14855df6c(lVar1,&local_c8,&local_88);
  *(undefined8 *)(param_1 + 0x440) = 0x4370000043700000;
  *(undefined8 *)(param_1 + 0x448) = 0x3f80000041800000;
  *(undefined8 *)(param_1 + 0x450) = 0x437000003f800000;
  *(undefined8 *)(param_1 + 0x458) = 0x4370000043700000;
  *(undefined1 **)(param_1 + 0x460) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x46c) = 0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3ff0000000000000;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148559954 FUN_148559954 body=1397 status=ok
// SIG undefined FUN_148559954(void)

void FUN_148559954(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_145b25a94(param_1 + 0xb0);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  dVar4 = *(double *)(param_1 + 0x90);
  dVar13 = dVar4 + dVar4;
  dVar5 = *(double *)(param_1 + 0x98);
  dVar14 = dVar5 + dVar5;
  uStack_180 = dVar13 * *(double *)(param_1 + 0x88) + *(double *)(param_1 + 0xa0) * dVar14;
  local_178 = *(double *)(param_1 + 0x88) * dVar14 - dVar13 * *(double *)(param_1 + 0xa0);
  local_188 = 1.0 - (dVar14 * dVar5 + dVar4 * dVar13);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  local_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  local_f8 = *(undefined8 *)(param_1 + 0x80);
  local_138 = DAT_14c8463c8;
  local_148 = CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_140 = CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(&local_f0,&local_148);
  uVar11 = local_d8;
  uVar10 = local_e0;
  uVar9 = uStack_e8;
  uVar8 = local_f0;
  local_138 = local_f8;
  local_148 = local_108;
  uStack_140 = uStack_100;
  plVar2 = (longlong *)(param_1 + 0x138);
  iVar6 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar6 + 1U) {
    FUN_14855c254(plVar2,iVar6);
  }
  lVar7 = *(longlong *)(param_1 + 0x138);
  lVar12 = (longlong)iVar6 * 0x50;
  *(undefined8 *)(lVar7 + 0x10 + lVar12) = local_138;
  *(undefined8 *)(lVar7 + lVar12) = local_148;
  ((undefined8 *)(lVar7 + lVar12))[1] = uStack_140;
  *(undefined8 *)(lVar7 + 0x18 + lVar12) = uVar8;
  *(undefined8 *)(lVar7 + 0x20 + lVar12) = uVar9;
  *(undefined8 *)(lVar7 + 0x28 + lVar12) = uVar10;
  *(undefined8 *)(lVar7 + 0x30 + lVar12) = uVar11;
  *(undefined8 *)(lVar7 + 0x38 + lVar12) = 0x4049000000000000;
  *(undefined1 *)(lVar7 + 0x40 + lVar12) = 0;
  *(undefined8 *)(lVar7 + 0x48 + lVar12) = 0x6400002711;
  dVar4 = *(double *)(param_1 + 0x88);
  dVar5 = *(double *)(param_1 + 0x90);
  dVar13 = *(double *)(param_1 + 0x98);
  dVar14 = dVar13 + dVar13;
  local_c8 = (dVar5 + dVar5) * dVar4 - *(double *)(param_1 + 0xa0) * dVar14;
  local_b8 = dVar5 * dVar14 + (dVar4 + dVar4) * *(double *)(param_1 + 0xa0);
  uStack_c0 = 1.0 - (dVar14 * dVar13 + dVar4 * (dVar4 + dVar4));
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_118 = 0x3ff0000000000000;
  local_148 = *puVar1;
  uStack_140 = *(undefined8 *)(param_1 + 0x78);
  local_138 = *(undefined8 *)(param_1 + 0x80);
  local_178 = (double)DAT_14c8463c8;
  local_188 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_180 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(&local_130,&local_188);
  uVar11 = local_118;
  uVar10 = local_120;
  uVar9 = uStack_128;
  uVar8 = local_130;
  local_178 = (double)local_138;
  local_188 = (double)local_148;
  uStack_180 = (double)uStack_140;
  iVar6 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar6 + 1U) {
    FUN_14855c254(plVar2,iVar6);
  }
  lVar7 = *(longlong *)(param_1 + 0x138);
  lVar12 = (longlong)iVar6 * 0x50;
  *(double *)(lVar7 + 0x10 + lVar12) = local_178;
  *(undefined8 *)(lVar7 + lVar12) = local_188;
  ((undefined8 *)(lVar7 + lVar12))[1] = uStack_180;
  *(undefined8 *)(lVar7 + 0x18 + lVar12) = uVar8;
  *(undefined8 *)(lVar7 + 0x20 + lVar12) = uVar9;
  *(undefined8 *)(lVar7 + 0x28 + lVar12) = uVar10;
  *(undefined8 *)(lVar7 + 0x30 + lVar12) = uVar11;
  *(undefined8 *)(lVar7 + 0x38 + lVar12) = 0x4049000000000000;
  *(undefined1 *)(lVar7 + 0x40 + lVar12) = 0;
  *(undefined8 *)(lVar7 + 0x48 + lVar12) = 0x6400002712;
  dVar4 = *(double *)(param_1 + 0x88);
  dVar5 = *(double *)(param_1 + 0x90);
  dVar13 = *(double *)(param_1 + 0x98) + *(double *)(param_1 + 0x98);
  local_1a0 = dVar4 * dVar13 + *(double *)(param_1 + 0xa0) * (dVar5 + dVar5);
  local_198 = dVar13 * dVar5 - (dVar4 + dVar4) * *(double *)(param_1 + 0xa0);
  local_190 = 1.0 - ((dVar5 + dVar5) * dVar5 + dVar4 * (dVar4 + dVar4));
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_158 = 0x3ff0000000000000;
  local_188 = (double)*puVar1;
  uStack_180 = *(double *)(param_1 + 0x78);
  local_178 = *(double *)(param_1 + 0x80);
  local_b8 = (double)DAT_14c8463c8;
  local_c8 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_c0 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2(&local_170,&local_c8);
  uVar11 = local_158;
  uVar10 = local_160;
  uVar9 = uStack_168;
  uVar8 = local_170;
  local_b8 = local_178;
  local_c8._0_4_ = SUB84(local_188,0);
  local_c8._4_4_ = local_188._4_4_;
  uStack_c0._0_4_ = SUB84(uStack_180,0);
  uStack_c0._4_4_ = uStack_180._4_4_;
  iVar6 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar6 + 1U) {
    FUN_14855c254(plVar2,iVar6);
  }
  lVar7 = *plVar2;
  lVar12 = (longlong)iVar6 * 0x50;
  *(double *)(lVar7 + 0x10 + lVar12) = local_b8;
  puVar3 = (undefined4 *)(lVar7 + lVar12);
  *puVar3 = (undefined4)local_c8;
  puVar3[1] = local_c8._4_4_;
  puVar3[2] = (undefined4)uStack_c0;
  puVar3[3] = uStack_c0._4_4_;
  *(undefined8 *)(lVar7 + 0x18 + lVar12) = uVar8;
  *(undefined8 *)(lVar7 + 0x20 + lVar12) = uVar9;
  *(undefined8 *)(lVar7 + 0x28 + lVar12) = uVar10;
  *(undefined8 *)(lVar7 + 0x30 + lVar12) = uVar11;
  *(undefined8 *)(lVar7 + 0x38 + lVar12) = 0x4049000000000000;
  *(undefined1 *)(lVar7 + 0x40 + lVar12) = 0;
  *(undefined8 *)(lVar7 + 0x48 + lVar12) = 0x6400002713;
  local_c8 = (double)((ulonglong)local_c8._4_4_ << 0x20);
  uStack_c0 = 0.5;
  local_1a8 = 0x32;
  FUN_148550c42(param_1 + 0xb0,puVar1,0x3e9);
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148559ef8 FUN_148559ef8 body=605 status=ok
// SIG undefined FUN_148559ef8(void)

void FUN_148559ef8(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3ff0000000000000;
  FUN_1482ae234(param_1 + 0x70,2);
  if (param_4 != '\0') {
    dVar1 = *(double *)(param_1 + 0x88);
    dVar2 = *(double *)(param_1 + 0x90);
    dVar10 = *(double *)(param_1 + 0x98);
    dVar4 = dVar10 + dVar10;
    dVar10 = dVar10 * dVar4;
    dVar12 = dVar2 + dVar2;
    dVar3 = *(double *)(param_1 + 0xa0);
    dVar11 = (dVar4 * dVar1 - dVar12 * dVar3) * DAT_14c8463b0 +
             (1.0 - (dVar2 * dVar12 + dVar10)) *
             (double)CONCAT44(DAT_14c8463a0._4_4_,(undefined4)DAT_14c8463a0) +
             (dVar4 * dVar3 + dVar12 * dVar1) *
             (double)CONCAT44(DAT_14c8463a8._4_4_,(undefined4)DAT_14c8463a8);
    uVar8 = -(ulonglong)(-dVar11 <= dVar11);
    dVar1 = (dVar4 * dVar2 + dVar3 * (dVar1 + dVar1)) * DAT_14c846398 +
            (dVar12 * dVar1 - dVar4 * dVar3) *
            (double)CONCAT44(DAT_14c846388._4_4_,(undefined4)DAT_14c846388) +
            (1.0 - ((dVar1 + dVar1) * dVar1 + dVar10)) *
            (double)CONCAT44(DAT_14c846390._4_4_,(undefined4)DAT_14c846390);
    uVar9 = -(ulonglong)(-dVar1 <= dVar1);
    bVar5 = (double)(~uVar8 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar8) <=
            (double)(~uVar9 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar9);
    if (bVar5) {
      local_88 = DAT_14c846398;
      local_98 = (undefined4)DAT_14c846388;
      uStack_94 = DAT_14c846388._4_4_;
      uStack_90 = (undefined4)DAT_14c846390;
      uStack_8c = DAT_14c846390._4_4_;
    }
    else {
      local_88 = DAT_14c8463b0;
      local_98 = (undefined4)DAT_14c8463a0;
      uStack_94 = DAT_14c8463a0._4_4_;
      uStack_90 = (undefined4)DAT_14c8463a8;
      uStack_8c = DAT_14c8463a8._4_4_;
    }
    FUN_1482ae2be(param_1 + 0x70,bVar5,dVar10,param_3);
  }
  FUN_148559954(param_1);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855a16e FUN_14855a16e body=180 status=ok
// SIG undefined FUN_14855a16e(void)

void FUN_14855a16e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = -1;
  if (*(char *)(param_1 + 0x198) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x1b8);
  }
  *(undefined8 *)(param_1 + 100) = 0x271200002711;
  *(undefined4 *)(param_1 + 0x6c) = 0x2713;
  lVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + 100 + lVar3 * 4);
    if (iVar1 == iVar2) {
      *(undefined4 *)(param_1 + 100 + lVar3 * 4) = 0xffffffff;
    }
    else {
      local_3c = iVar1;
      FUN_1447cbafe(param_1 + 0x148,local_40,&local_3c,0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  *(undefined1 *)(param_1 + 0x60) = 1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855a224 FUN_14855a224 body=60 status=ok
// SIG undefined FUN_14855a224(void)

void FUN_14855a224(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_144a7cc9e(param_1 + 0x148,*(undefined4 *)(param_1 + 100 + lVar1 * 4));
    *(undefined4 *)(param_1 + 100 + lVar1 * 4) = 0xffffffff;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 14855a260 FUN_14855a260 body=62 status=ok
// SIG undefined FUN_14855a260(void)

void FUN_14855a260(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_148555d14(param_1 + 0xb0);
  if (*(char *)(param_1 + 0x198) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x248);
    uVar2 = *(undefined8 *)(param_1 + 0x250);
    param_3[2] = *(undefined8 *)(param_1 + 600);
    *param_3 = uVar1;
    param_3[1] = uVar2;
  }
  return;
}



// FUNCTION 14855a2a6 FUN_14855a2a6 body=30 status=ok
// SIG undefined FUN_14855a2a6(void)

undefined4 FUN_14855a2a6(longlong param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x198) == '\x01') {
    uVar1 = *(int *)(param_1 + 0x1b8) - 0x2711;
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < 3);
  }
  return 0;
}



// FUNCTION 14855a2c4 FUN_14855a2c4 body=253 status=ok
// SIG undefined FUN_14855a2c4(void)

longlong * FUN_14855a2c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x60))();
  if (cVar2 == '\0') {
    param_2[2] = param_1[0x10];
    lVar1 = param_1[0xf];
    *param_2 = param_1[0xe];
    param_2[1] = lVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0x3ff0000000000000;
  }
  else {
    iVar3 = -0x2712;
    if ((char)param_1[0x33] == '\x01') {
      iVar3 = (int)param_1[0x37] + -0x2711;
    }
    FUN_146bfcd44(param_1 + 0xe,local_50,iVar3);
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0x3ff0000000000000;
    param_2[2] = param_1[0x10];
    lVar1 = param_1[0xf];
    *param_2 = param_1[0xe];
    param_2[1] = lVar1;
    local_28 = DAT_14c8463c8;
    local_38 = (undefined4)DAT_14c8463b8;
    uStack_34 = DAT_14c8463b8._4_4_;
    uStack_30 = (undefined4)DAT_14c8463c0;
    uStack_2c = DAT_14c8463c0._4_4_;
    FUN_146bfb7f2(param_2 + 3,&local_38,local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855a3c2 FUN_14855a3c2 body=20 status=ok
// SIG undefined FUN_14855a3c2(void)

void FUN_14855a3c2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14855a3d6 FUN_14855a3d6 body=121 status=ok
// SIG undefined FUN_14855a3d6(void)

void FUN_14855a3d6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)FUN_148556b6a(param_1 + 0x10,param_1 + 0x70,0x3ff0000000000000);
  lVar1 = param_1 + 0x2c0;
  FUN_14845339e(lVar1,param_2);
  FUN_148555ef8(param_1 + 0xb0,lVar1,(float)(dVar2 * 3.0),param_1 + 0x3e0);
  FUN_14845342a(lVar1);
  return;
}



// FUNCTION 14855a450 FUN_14855a450 body=113 status=ok
// SIG undefined FUN_14855a450(void)

void FUN_14855a450(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)FUN_148556b6a(param_1 + 0x10,param_1 + 0x70,0x3ff0000000000000);
  lVar1 = param_1 + 0x430;
  FUN_14845339e(lVar1,param_2);
  FUN_148555ef8(param_1 + 0xb0,lVar1,(float)(dVar2 + dVar2),0);
  FUN_14845342a(lVar1);
  return;
}



// FUNCTION 14855a4c2 FUN_14855a4c2 body=72 status=ok
// SIG undefined FUN_14855a4c2(void)

void FUN_14855a4c2(longlong param_1)

{
  longlong lVar1;
  
  FUN_145b25a94(param_1 + 0xb0);
  lVar1 = 0;
  do {
    FUN_144a7cc9e(param_1 + 0x148,*(undefined4 *)(param_1 + 100 + lVar1 * 4));
    *(undefined4 *)(param_1 + 100 + lVar1 * 4) = 0xffffffff;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 14855a50a FUN_14855a50a body=628 status=ok
// SIG undefined FUN_14855a50a(void)

void FUN_14855a50a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_1 + 0xf0) = 0x40c3878000000000;
  local_c8 = *(undefined **)(param_1 + 0xb0);
  uStack_80 = *(undefined **)(param_1 + 0xb8);
  local_b8 = *(longlong **)(param_1 + 0xc0);
  uStack_70 = *(undefined8 *)(param_1 + 200);
  local_68 = *(longlong *)(param_1 + 0xd0);
  uStack_60 = *(undefined8 *)(param_1 + 0xd8);
  local_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(param_1 + 0xe0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(param_1 + 0xd0) = &PTR_LAB_14af1a680;
  *(longlong *)(param_1 + 0xd8) = param_1;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(ulonglong *)(param_1 + 200) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(param_1 + 0xb0) = FUN_143ba895e;
  *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != (undefined *)0x0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = (undefined *)uVar2;
    (**(code **)(*plVar6 + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0x4370000043700000;
  *(undefined8 *)(param_1 + 0x2c8) = 0x3f80000041800000;
  *(undefined4 *)(param_1 + 0x2d0) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x43700000;
  *(undefined4 *)(param_1 + 0x2d8) = 0x43700000;
  *(undefined4 *)(param_1 + 0x2dc) = 0x43700000;
  *(undefined8 *)(param_1 + 0x2e0) = 0x410000003f800000;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  lVar1 = param_1 + 0x3d0;
  local_88 = &DAT_14af1a294;
  uStack_80 = &DAT_149e1dd34;
  FUN_14855df6c(lVar1,&local_c8,&local_88);
  local_88 = &DAT_14af1a298;
  uStack_80 = &DAT_149e1dd14;
  FUN_14855df6c(lVar1,&local_c8,&local_88);
  local_88 = &DAT_14af1a29c;
  uStack_80 = &DAT_149e1dd04;
  FUN_14855df6c(lVar1,&local_c8,&local_88);
  *(undefined8 *)(param_1 + 0x430) = 0x4370000043700000;
  *(undefined8 *)(param_1 + 0x438) = 0x3f80000041800000;
  *(undefined8 *)(param_1 + 0x440) = 0x437000003f800000;
  *(undefined8 *)(param_1 + 0x448) = 0x4370000043700000;
  *(undefined1 **)(param_1 + 0x450) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x45c) = 0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855a7b8 FUN_14855a7b8 body=3257 status=ok
// SIG undefined FUN_14855a7b8(void)

void FUN_14855a7b8(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
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
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  undefined2 local_f4;
  undefined1 local_f2 [2];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb4d968) && (FUN_144b3d300(&DAT_14cb4d968), DAT_14cb4d968 == -1)) {
    DAT_14cb4d960 = 0.9659258262890683;
    _Init_thread_footer(&DAT_14cb4d968);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb4d978) && (FUN_144b3d300(&DAT_14cb4d978), DAT_14cb4d978 == -1)) {
    DAT_14cb4d970 = 0.9659258262890683;
    _Init_thread_footer(&DAT_14cb4d978);
  }
  FUN_145b25a94(param_1 + 0xa0);
  dVar24 = *(double *)(param_1 + 0x20);
  dVar18 = *(double *)(param_1 + 0x10);
  dVar14 = *(double *)(param_1 + 0x18);
  dVar22 = *(double *)(param_1 + 0x40);
  dVar13 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar15 = 0.0;
  dVar17 = dVar22 - dVar13 * 0.0;
  dVar20 = dVar13 * 0.0 - dVar4;
  dVar23 = dVar4 * 0.0 + dVar22 * -0.0;
  dVar20 = dVar20 + dVar20;
  dVar17 = dVar17 + dVar17;
  dVar23 = dVar23 + dVar23;
  dVar19 = *(double *)(param_1 + 0x48);
  local_140 = (dVar13 * dVar17 - dVar23 * dVar4) + dVar19 * dVar20 + 0.0;
  local_148 = (dVar22 * dVar23 - dVar20 * dVar13) + dVar19 * dVar17 + 0.0;
  local_150 = (dVar4 * dVar20 - dVar17 * dVar22) + dVar23 * dVar19 + 1.0;
  local_178 = local_140 * 0.1 + dVar24;
  local_180 = local_148 * 0.1 + dVar14;
  local_188 = local_150 * 0.1 + dVar18;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  local_158 = 0x3ff0000000000000;
  local_108 = DAT_14c8463c8;
  local_118 = DAT_14c8463b8;
  dStack_110 = DAT_14c8463c0;
  local_138 = dVar18;
  dStack_130 = dVar14;
  local_128 = dVar24;
  FUN_146bfb7f2();
  dVar9 = DAT_14cb4d960;
  dVar22 = *(double *)(param_1 + 0x78);
  dVar13 = *(double *)(param_1 + 0x80);
  dVar4 = *(double *)(param_1 + 0x88);
  dVar8 = dVar4 + dVar4;
  dVar20 = dVar13 + dVar13;
  dVar19 = *(double *)(param_1 + 0x90);
  local_278 = dVar8 * dVar22 - dVar20 * dVar19;
  dVar17 = 1.0 - (dVar13 * dVar20 + dVar4 * dVar8);
  dVar21 = dVar19 * (dVar22 + dVar22);
  dVar23 = (dVar22 + dVar22) * dVar22;
  local_268 = 1.0 - (dVar4 * dVar8 + dVar23);
  dVar4 = dVar8 * dVar19 + dVar20 * dVar22;
  dVar16 = dVar20 * dVar22 - dVar8 * dVar19;
  local_258 = dVar8 * dVar13 + dVar21;
  local_260 = 1.0 - (dVar23 + dVar13 * dVar20);
  dVar21 = dVar8 * dVar13 - dVar21;
  dVar22 = dVar8 * dVar22 + dVar20 * dVar19;
  dVar24 = *(double *)(param_1 + 0x70) - dVar24;
  dVar14 = *(double *)(param_1 + 0x68) - dVar14;
  dVar18 = *(double *)(param_1 + 0x60) - dVar18;
  dVar19 = SQRT(dVar24 * dVar24 + dVar18 * dVar18 + dVar14 * dVar14);
  local_270 = 1.0;
  dVar23 = 1.0 / dVar19;
  dVar13 = (double)(-(ulonglong)(0.0 < dVar19) & (ulonglong)(dVar18 * dVar23));
  if (0.0 < dVar19) {
    dVar24 = dVar24 * dVar23;
    dVar15 = dVar14 * dVar23;
  }
  else {
    dVar24 = 0.0;
  }
  local_248 = local_278 * dVar24 + dVar17 * dVar13 + dVar4 * dVar15;
  local_238 = local_258 * dVar24 + dVar16 * dVar13 + local_268 * dVar15;
  uVar12 = -(ulonglong)(-local_248 <= local_248);
  uStack_240 = 0;
  dVar23 = (double)(~uVar12 & (ulonglong)-local_248 | uVar12 & (ulonglong)local_248);
  local_f4 = (ushort)(DAT_14cb4d960 < dVar23);
  dVar13 = dVar24 * local_260 + dVar13 * dVar22 + dVar15 * dVar21;
  uVar12 = -(ulonglong)(-local_238 <= local_238);
  dVar19 = (double)(~uVar12 & (ulonglong)-local_238 | uVar12 & (ulonglong)local_238);
  if (DAT_14cb4d960 < dVar19) {
    local_f4 = CONCAT11(1,DAT_14cb4d960 < dVar23);
  }
  uStack_230 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x60);
  uVar12 = -(ulonglong)(-dVar13 <= dVar13);
  dVar24 = (double)(~uVar12 & (ulonglong)-dVar13 | uVar12 & (ulonglong)dVar13);
  local_f2[0] = DAT_14cb4d960 < dVar24;
  local_250 = dVar17;
  cVar10 = FUN_14855b706(puVar1,&local_188,&local_138,&local_198);
  if (cVar10 == '\0') goto LAB_14855acde;
  local_108 = local_278 * 10.0 + *(double *)(param_1 + 0x70);
  dStack_110 = dVar4 * 10.0 + *(double *)(param_1 + 0x68);
  local_118 = dVar17 * 10.0 + *(double *)(param_1 + 0x60);
  cVar10 = FUN_14855b706(&local_118,&local_188,&local_138,&local_1a8);
  if (cVar10 == '\0') goto LAB_14855acde;
  local_1d0 = local_258 * 10.0 + *(double *)(param_1 + 0x70);
  local_1d8 = local_268 * 10.0 + *(double *)(param_1 + 0x68);
  local_1e0 = dVar16 * 10.0 + *(double *)(param_1 + 0x60);
  cVar10 = FUN_14855b706(&local_1e0,&local_188,&local_138,&local_1b8);
  if (cVar10 == '\0') goto LAB_14855acde;
  local_1e8 = local_260 * 10.0 + *(double *)(param_1 + 0x70);
  local_1f0 = dVar21 * 10.0 + *(double *)(param_1 + 0x68);
  local_1f8 = dVar22 * 10.0 + *(double *)(param_1 + 0x60);
  cVar10 = FUN_14855b706(&local_1f8,&local_188,&local_138,&local_1c8);
  if (cVar10 == '\0') goto LAB_14855acde;
  local_1a0 = local_1a0 - local_190;
  local_1a8 = local_1a8 - local_198;
  local_268 = SQRT(local_1a8 * local_1a8 + local_1a0 * local_1a0);
  dVar22 = 0.0;
  local_278 = 1.0 / local_268;
  if (0.0 < local_268) {
    local_1a0 = local_1a0 * local_278;
  }
  else {
    local_1a0 = 0.0;
  }
  local_1b0 = local_1b0 - local_190;
  local_1b8 = local_1b8 - local_198;
  dVar4 = SQRT(local_1b8 * local_1b8 + local_1b0 * local_1b0);
  if (0.0 < dVar4) {
    local_1b0 = local_1b0 * (1.0 / dVar4);
  }
  else {
    local_1b0 = 0.0;
  }
  local_1c0 = local_1c0 - local_190;
  local_1c8 = local_1c8 - local_198;
  dVar17 = SQRT(local_1c8 * local_1c8 + local_1c0 * local_1c0);
  local_270 = local_270 / dVar17;
  if (0.0 < dVar17) {
    local_1c0 = local_1c0 * local_270;
  }
  else {
    local_1c0 = 0.0;
  }
  dVar20 = (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(local_1b8 * (1.0 / dVar4)));
  dVar4 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(local_1c8 * local_270));
  if (dVar23 <= dVar9) {
    dVar22 = (double)(-(ulonglong)(0.0 < local_268) & (ulonglong)(local_1a8 * local_278));
    if (dVar19 <= dVar9) {
      dVar19 = dVar22 * dVar20 + local_1a0 * local_1b0;
      uVar12 = -(ulonglong)(-dVar19 <= dVar19);
      dVar23 = (double)(~uVar12 & (ulonglong)-dVar19 | (ulonglong)dVar19 & uVar12);
      dVar17 = 0.0;
      dVar19 = dVar23;
      if (dVar24 <= dVar9) {
        dVar22 = dVar22 * dVar4 + local_1a0 * local_1c0;
        uVar12 = -(ulonglong)(-dVar22 <= dVar22);
        dVar16 = (double)(~uVar12 & (ulonglong)-dVar22 | (ulonglong)dVar22 & uVar12);
        goto LAB_14855b0d0;
      }
    }
    else {
      dVar19 = 0.0;
      if (dVar24 <= dVar9) {
        dVar22 = dVar22 * dVar4 + local_1a0 * local_1c0;
        uVar12 = -(ulonglong)(-dVar22 <= dVar22);
        dVar17 = (double)(~uVar12 & (ulonglong)-dVar22 | (ulonglong)dVar22 & uVar12);
      }
      else {
        dVar17 = 0.0;
      }
    }
    dVar22 = 0.0;
  }
  else {
    dVar23 = 0.0;
    dVar17 = dVar23;
    if (dVar9 < dVar19) {
      dVar19 = 0.0;
    }
    else {
      dVar16 = 0.0;
      dVar19 = 0.0;
      if (dVar24 <= dVar9) {
LAB_14855b0d0:
        dVar22 = dVar20 * dVar4 + local_1b0 * local_1c0;
        uVar12 = -(ulonglong)(-dVar22 <= dVar22);
        dVar22 = (double)(~uVar12 & (ulonglong)-dVar22 | (ulonglong)dVar22 & uVar12);
        dVar17 = dVar16;
        dVar19 = dVar23;
      }
    }
  }
  if (DAT_14cb4d970 < dVar19) {
    local_f2[(ulonglong)
             ((double)(-(ulonglong)(0.0 < local_238) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < local_238) &
                      (ulonglong)((uint)(-(ulonglong)(local_238 < 0.0) >> 0x20) & 0xbff00000) <<
                      0x20) <=
             (double)(-(ulonglong)(0.0 < local_248) & 0x3ff0000000000000 |
                     (ulonglong)
                     (~(uint)(-(ulonglong)(0.0 < local_248) >> 0x20) &
                     (uint)(-(ulonglong)(local_248 < 0.0) >> 0x20) & 0xbff00000) << 0x20)) - 2] = 1;
  }
  if (DAT_14cb4d970 < dVar17) {
    local_f2[(ulonglong)
             ((double)(-(ulonglong)(0.0 < dVar13) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar13) & -(ulonglong)(dVar13 < 0.0) & 0xbff0000000000000)
             <= (double)(-(ulonglong)(0.0 < local_248) & 0x3ff0000000000000 |
                        ~-(ulonglong)(0.0 < local_248) &
                        -(ulonglong)(local_248 < 0.0) & 0xbff0000000000000)) * 2 + -2] = 1;
  }
  if (DAT_14cb4d970 < dVar22) {
    local_f2[-(ulonglong)
              ((double)(-(ulonglong)(0.0 < local_238) & 0x3ff0000000000000 |
                       ~-(ulonglong)(0.0 < local_238) &
                       -(ulonglong)(local_238 < 0.0) & 0xbff0000000000000) <
              (double)(-(ulonglong)(0.0 < dVar13) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar13) & -(ulonglong)(dVar13 < 0.0) & 0xbff0000000000000)
              )] = 1;
  }
  local_1e0 = 2.12242019061758e-310;
  local_1d8 = (double)CONCAT44(local_1d8._4_4_,0x2713);
  uVar12 = 0;
  do {
    if (local_f2[uVar12 - 2] == '\0') {
      FUN_146bfcd44(puVar1,&local_118,uVar12 & 0xffffffff);
      uVar5 = *(undefined4 *)((longlong)&local_1e0 + uVar12 * 4);
      local_228 = *puVar1;
      uStack_220 = *(undefined8 *)(param_1 + 0x68);
      local_218 = *(undefined8 *)(param_1 + 0x70);
      dStack_200 = local_108;
      dStack_210 = local_118;
      dStack_208 = dStack_110;
      iVar6 = *(int *)(param_1 + 0x120);
      *(uint *)(param_1 + 0x120) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x124) < iVar6 + 1U) {
        FUN_14855c11e((longlong *)(param_1 + 0x118),iVar6);
      }
      lVar7 = *(longlong *)(param_1 + 0x118);
      lVar11 = (longlong)iVar6 * 0x38;
      pdVar2 = (double *)(lVar7 + 0x20 + lVar11);
      *pdVar2 = dStack_208;
      pdVar2[1] = dStack_200;
      puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar11);
      *puVar3 = local_218;
      puVar3[1] = dStack_210;
      *(undefined8 *)(lVar7 + lVar11) = local_228;
      ((undefined8 *)(lVar7 + lVar11))[1] = uStack_220;
      *(undefined4 *)(lVar7 + 0x30 + lVar11) = uVar5;
      *(undefined4 *)(lVar7 + 0x34 + lVar11) = 100;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != 3);
  local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000);
  dStack_110 = 0.5;
  local_288 = 0x32;
  FUN_148550c42(param_1 + 0xa0,puVar1,0x3e9);
LAB_14855acde:
  if ((local_f0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855b49c FUN_14855b49c body=596 status=ok
// SIG undefined FUN_14855b49c(void)

void FUN_14855b49c(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
  FUN_1482ae234(param_1 + 0x60,2);
  if (param_4 != '\0') {
    dVar1 = *(double *)(param_1 + 0x78);
    dVar2 = *(double *)(param_1 + 0x80);
    dVar10 = *(double *)(param_1 + 0x88);
    dVar4 = dVar10 + dVar10;
    dVar10 = dVar10 * dVar4;
    dVar12 = dVar2 + dVar2;
    dVar3 = *(double *)(param_1 + 0x90);
    dVar11 = (dVar4 * dVar1 - dVar12 * dVar3) * DAT_14c8463b0 +
             (1.0 - (dVar2 * dVar12 + dVar10)) *
             (double)CONCAT44(DAT_14c8463a0._4_4_,(undefined4)DAT_14c8463a0) +
             (dVar4 * dVar3 + dVar12 * dVar1) *
             (double)CONCAT44(DAT_14c8463a8._4_4_,(undefined4)DAT_14c8463a8);
    uVar8 = -(ulonglong)(-dVar11 <= dVar11);
    dVar1 = (dVar4 * dVar2 + dVar3 * (dVar1 + dVar1)) * DAT_14c846398 +
            (dVar12 * dVar1 - dVar4 * dVar3) *
            (double)CONCAT44(DAT_14c846388._4_4_,(undefined4)DAT_14c846388) +
            (1.0 - ((dVar1 + dVar1) * dVar1 + dVar10)) *
            (double)CONCAT44(DAT_14c846390._4_4_,(undefined4)DAT_14c846390);
    uVar9 = -(ulonglong)(-dVar1 <= dVar1);
    bVar5 = (double)(~uVar8 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar8) <=
            (double)(~uVar9 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar9);
    if (bVar5) {
      local_88 = DAT_14c846398;
      local_98 = (undefined4)DAT_14c846388;
      uStack_94 = DAT_14c846388._4_4_;
      uStack_90 = (undefined4)DAT_14c846390;
      uStack_8c = DAT_14c846390._4_4_;
    }
    else {
      local_88 = DAT_14c8463b0;
      local_98 = (undefined4)DAT_14c8463a0;
      uStack_94 = DAT_14c8463a0._4_4_;
      uStack_90 = (undefined4)DAT_14c8463a8;
      uStack_8c = DAT_14c8463a8._4_4_;
    }
    FUN_1482ae2be(param_1 + 0x60,bVar5,dVar10,param_3);
  }
  FUN_14855a7b8(param_1);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855b706 FUN_14855b706 body=297 status=ok
// SIG undefined FUN_14855b706(void)

undefined4 FUN_14855b706(double *param_1,undefined8 param_2,double *param_3,ulonglong *param_4)

{
  double dVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  ulonglong local_70;
  double dStack_68;
  double local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1[2] - param_3[2];
  dVar3 = param_1[1] - param_3[1];
  dVar5 = *param_1 - *param_3;
  dVar1 = SQRT(local_60 * local_60 + dVar5 * dVar5 + dVar3 * dVar3);
  dStack_68 = 0.0;
  dVar4 = 1.0 / dVar1;
  local_70 = -(ulonglong)(0.0 < dVar1) & (ulonglong)(dVar5 * dVar4);
  if (0.0 < dVar1) {
    local_60 = local_60 * dVar4;
    dStack_68 = dVar3 * dVar4;
  }
  else {
    local_60 = 0.0;
  }
  local_78 = local_58;
  uVar2 = FUN_14848488c(param_2,param_3,&local_70,2);
  if ((char)uVar2 != '\0') {
    FUN_146bca7ae(param_2,&local_70,local_58,2);
    *param_4 = local_70;
    param_4[1] = (ulonglong)dStack_68;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855b830 FUN_14855b830 body=413 status=ok
// SIG undefined FUN_14855b830(void)

ulonglong FUN_14855b830(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 unaff_RBP;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
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
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    FUN_148555d14(param_1 + 0xa0,param_2);
  }
  else {
    FUN_14855b9ce(param_1 + 0x260,param_4);
    FUN_148555d14(param_1 + 0xa0,param_2);
    local_b8 = *(longlong *)(param_1 + 0x260);
    uStack_70 = *(undefined8 *)(param_1 + 0x268);
    local_a8 = *(longlong **)(param_1 + 0x270);
    uStack_60 = *(undefined8 *)(param_1 + 0x278);
    local_58 = *(undefined8 *)(param_1 + 0x280);
    uStack_50 = *(undefined8 *)(param_1 + 0x288);
    local_48 = *(undefined8 *)(param_1 + 0x290);
    uStack_40 = *(undefined8 *)(param_1 + 0x298);
    uVar10 = local_48;
    uVar11 = uStack_40;
    uVar8 = local_58;
    uVar9 = uStack_50;
    local_68 = local_a8;
    uVar7 = uStack_60;
    local_78 = local_b8;
    uVar6 = uStack_70;
    *(ulonglong *)(param_1 + 0x290) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(param_1 + 0x298) = CONCAT44(uStack_7c,uStack_80);
    *(ulonglong *)(param_1 + 0x280) = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(param_1 + 0x288) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(ulonglong *)(param_1 + 0x278) = CONCAT44(uStack_9c,uStack_a0);
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_ac,uStack_b0);
    uStack_b0 = (undefined4)uStack_70;
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_ac = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_9c = uStack_60._4_4_;
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_70 = uVar6;
    uStack_60 = uVar7;
    local_58 = uVar8;
    uStack_50 = uVar9;
    local_48 = uVar10;
    uStack_40 = uVar11;
    if (local_b8 != 0) {
      plVar12 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar12 = (longlong *)&local_98;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  cVar1 = *(char *)(param_1 + 0x188);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)(param_1 + 0x238);
    uVar3 = *(undefined4 *)(param_1 + 0x23c);
    uVar4 = *(undefined4 *)(param_1 + 0x240);
    uVar5 = *(undefined4 *)(param_1 + 0x244);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 0x248);
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    param_3[3] = uVar5;
  }
  if (*param_4 != 0) {
    plVar12 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar12 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855b9ce FUN_14855b9ce body=290 status=ok
// SIG undefined FUN_14855b9ce(void)

longlong * FUN_14855b9ce(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855bafa FUN_14855bafa body=20 status=ok
// SIG undefined FUN_14855bafa(void)

void FUN_14855bafa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14855bb0e FUN_14855bb0e body=121 status=ok
// SIG undefined FUN_14855bb0e(void)

void FUN_14855bb0e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)FUN_148556b6a(param_1 + 0x10,param_1 + 0x60,0x3ff0000000000000);
  lVar1 = param_1 + 0x2b0;
  FUN_14845339e(lVar1,param_2);
  FUN_148555ef8(param_1 + 0xa0,lVar1,(float)(dVar2 * 3.0),param_1 + 0x3d0);
  FUN_14845342a(lVar1);
  return;
}



// FUNCTION 14855bb88 FUN_14855bb88 body=113 status=ok
// SIG undefined FUN_14855bb88(void)

void FUN_14855bb88(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)FUN_148556b6a(param_1 + 0x10,param_1 + 0x60,0x3ff0000000000000);
  lVar1 = param_1 + 0x420;
  FUN_14845339e(lVar1,param_2);
  FUN_148555ef8(param_1 + 0xa0,lVar1,(float)(dVar2 + dVar2),0);
  FUN_14845342a(lVar1);
  return;
}



// FUNCTION 14855bbfa FUN_14855bbfa body=12 status=ok
// SIG undefined FUN_14855bbfa(void)

void FUN_14855bbfa(longlong param_1)

{
  FUN_145b25a94(param_1 + 0xa0);
  return;
}



// FUNCTION 14855bc06 FUN_14855bc06 body=317 status=ok
// SIG undefined FUN_14855bc06(void)

void FUN_14855bc06(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x50);
  }
  plVar1 = (longlong *)(lVar4 + 0x20);
  lVar2 = lVar4 + 0x30;
  local_60 = (longlong *)&DAT_100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(lVar4 + 0x48) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar3 = *(int *)(lVar4 + 0x48);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar3) || (uStack_58 != lVar2)) {
    do {
      local_60 = plVar1;
      uStack_58 = param_2;
      (*(code *)(&PTR_FUN_14af1a6a0)
                [*(uint *)(*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18) + 8)])
                (*(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x18),&local_60);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar3));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14855bd44 FUN_14855bd44 body=274 status=ok
// SIG undefined FUN_14855bd44(void)

bool FUN_14855bd44(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_3 = param_4;
  plVar1 = (longlong *)(param_3 + 2);
  lVar3 = *(longlong *)(param_1 + 0x50);
  lVar2 = *(longlong *)(lVar3 + 0x80);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar4 = lVar3;
  }
  uVar6 = *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x78);
  if ((int)param_3[4] < (int)uVar6) {
    FUN_144a84024(plVar1,uVar6,1);
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar2 = *(longlong *)(lVar3 + 0x80);
  }
  if (lVar2 != 0) {
    lVar3 = lVar2;
  }
  FUN_146fb17e6(lVar3 + 0x20,&local_48,param_2);
  if (local_48 == 0) {
    if (0 < (int)uVar6) {
      uVar5 = 0;
      do {
        *(undefined4 *)(*plVar1 + uVar5 * 4) = param_4;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
  }
  else if (0 < (int)uVar6) {
    uVar5 = 0;
    do {
      plVar7 = (longlong *)(local_48 + 0x18);
      if (*(longlong **)(local_48 + 0x30) != (longlong *)0x0) {
        plVar7 = *(longlong **)(local_48 + 0x30);
      }
      *(undefined4 *)(*plVar1 + uVar5 * 4) =
           *(undefined4 *)(*plVar7 + (longlong)((int)plVar7[2] * (int)uVar5) * 4);
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_48 != 0;
}



// FUNCTION 14855be58 FUN_14855be58 body=45 status=ok
// SIG undefined FUN_14855be58(void)

longlong FUN_14855be58(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1456c3a46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855be86 FUN_14855be86 body=45 status=ok
// SIG undefined FUN_14855be86(void)

longlong FUN_14855be86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_1456c3a46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855beb4 FUN_14855beb4 body=38 status=ok
// SIG undefined FUN_14855beb4(void)

undefined8 FUN_14855beb4(undefined8 param_1,int param_2)

{
  FUN_145ab9ec0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855befa FUN_14855befa body=9 status=ok
// SIG undefined FUN_14855befa(void)

void FUN_14855befa(longlong param_1)

{
  FUN_145ab9fdc(param_1 + 0x10);
  return;
}



// FUNCTION 14855bf04 FUN_14855bf04 body=29 status=ok
// SIG undefined FUN_14855bf04(void)

undefined8 FUN_14855bf04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14855bf4c FUN_14855bf4c body=48 status=ok
// SIG undefined FUN_14855bf4c(void)

void FUN_14855bf4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x90,8);
  }
  return;
}



// FUNCTION 14855bf7c FUN_14855bf7c body=48 status=ok
// SIG undefined FUN_14855bf7c(void)

void FUN_14855bf7c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14855bfac FUN_14855bfac body=48 status=ok
// SIG undefined FUN_14855bfac(void)

void FUN_14855bfac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 14855bfdc FUN_14855bfdc body=147 status=ok
// SIG undefined FUN_14855bfdc(void)

void FUN_14855bfdc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
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



// FUNCTION 14855c070 FUN_14855c070 body=62 status=ok
// SIG undefined FUN_14855c070(void)

void FUN_14855c070(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14855c0ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x90,8);
  }
  return;
}



// FUNCTION 14855c0ae FUN_14855c0ae body=112 status=ok
// SIG undefined FUN_14855c0ae(void)

ulonglong FUN_14855c0ae(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x90) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14855c0e8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x90,8);
      param_2 = param_2 / 0x90;
    }
  }
LAB_14855c0e8:
  return param_2 & 0xffffffff;
}



// FUNCTION 14855c11e FUN_14855c11e body=143 status=ok
// SIG undefined FUN_14855c11e(void)

void FUN_14855c11e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14855c1ae FUN_14855c1ae body=62 status=ok
// SIG undefined FUN_14855c1ae(void)

void FUN_14855c1ae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14855c1ec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14855c1ec FUN_14855c1ec body=104 status=ok
// SIG undefined FUN_14855c1ec(void)

ulonglong FUN_14855c1ec(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14855c222;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_14855c222:
  return param_2 & 0xffffffff;
}



// FUNCTION 14855c254 FUN_14855c254 body=147 status=ok
// SIG undefined FUN_14855c254(void)

void FUN_14855c254(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


