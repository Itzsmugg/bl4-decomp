// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14960738a FUN_14960738a body=246 status=ok
// SIG undefined FUN_14960738a(void)

undefined8 * FUN_14960738a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3fe0000000000000;
  *(undefined4 *)(param_1 + 10) = 5;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af12730;
  *(undefined4 *)(plVar5 + 2) = 0;
  if (plVar5 == (longlong *)0x0) {
    param_1[7] = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_1[8];
  param_1[7] = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149607461;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    param_1[8] = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_149607461;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_149607461;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_149607461:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 149607480 FUN_149607480 body=230 status=ok
// SIG undefined FUN_149607480(void)

undefined8 * FUN_149607480(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 149607576 FUN_149607576 body=63 status=ok
// SIG undefined FUN_149607576(void)

void FUN_149607576(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145810b7a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1496076fa(param_1);
    return;
  }
  FUN_1496075b6(param_1);
  FUN_145810b7a(param_1);
  return;
}



// FUNCTION 1496075b6 FUN_1496075b6 body=322 status=ok
// SIG undefined FUN_1496075b6(void)

void FUN_1496075b6(longlong *param_1)

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



// FUNCTION 1496076fa FUN_1496076fa body=419 status=ok
// SIG undefined FUN_1496076fa(void)

void FUN_1496076fa(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14960789e FUN_14960789e body=307 status=ok
// SIG undefined FUN_14960789e(void)

undefined4 * FUN_14960789e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
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
  FUN_1496079d2(param_1,local_40);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  lVar8 = *plVar1;
  *(longlong *)(local_38 + 2) = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar5 = *local_38;
  }
  local_38[4] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_149607ab8(param_1,uVar5,local_38,&local_44);
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
      local_38[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1496076fa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496079d2 FUN_1496079d2 body=230 status=ok
// SIG undefined FUN_1496079d2(void)

int * FUN_1496079d2(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 149607ab8 FUN_149607ab8 body=128 status=ok
// SIG undefined FUN_149607ab8(void)

undefined8 FUN_149607ab8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_149607b38(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149607b38 FUN_149607b38 body=114 status=ok
// SIG undefined FUN_149607b38(void)

void FUN_149607b38(longlong *param_1,int param_2)

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



// FUNCTION 149607baa FUN_149607baa body=48 status=ok
// SIG undefined FUN_149607baa(void)

void FUN_149607baa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 149607bda FUN_149607bda body=107 status=ok
// SIG undefined FUN_149607bda(void)

void FUN_149607bda(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148182430(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_1481824b6(param_1);
  return;
}



// FUNCTION 149607c46 FUN_149607c46 body=98 status=ok
// SIG undefined FUN_149607c46(void)

void FUN_149607c46(longlong *param_1)

{
  undefined8 *puVar1;
  
  FUN_149607ca8(param_1[8]);
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149607ca8 FUN_149607ca8 body=74 status=ok
// SIG undefined FUN_149607ca8(void)

void FUN_149607ca8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 149607cf2 FUN_149607cf2 body=199 status=ok
// SIG undefined FUN_149607cf2(void)

undefined8 * FUN_149607cf2(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd796b0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd796d0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149607ee6;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd796f0;
  param_1[0x17] = &LAB_149607f34;
  param_1[0x12] = &LAB_149607f3c;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149607dba FUN_149607dba body=38 status=ok
// SIG undefined FUN_149607dba(void)

undefined8 FUN_149607dba(undefined8 param_1,int param_2)

{
  FUN_149607f90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149607de0 FUN_149607de0 body=207 status=ok
// SIG undefined FUN_149607de0(void)

void FUN_149607de0(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149607e91;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149607e91:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149607eb0 FUN_149607eb0 body=53 status=ok
// SIG undefined FUN_149607eb0(void)

void FUN_149607eb0(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149607f16 FUN_149607f16 body=29 status=ok
// SIG undefined FUN_149607f16(void)

undefined8 FUN_149607f16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149607f72 FUN_149607f72 body=29 status=ok
// SIG undefined FUN_149607f72(void)

undefined8 FUN_149607f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149607f90 FUN_149607f90 body=127 status=ok
// SIG undefined FUN_149607f90(void)

void FUN_149607f90(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd796b0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149608010 FUN_149608010 body=199 status=ok
// SIG undefined FUN_149608010(void)

undefined8 * FUN_149608010(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd797d0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd797f0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149608204;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd79810;
  param_1[0x17] = &LAB_149608252;
  param_1[0x12] = &LAB_14960825a;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496080d8 FUN_1496080d8 body=38 status=ok
// SIG undefined FUN_1496080d8(void)

undefined8 FUN_1496080d8(undefined8 param_1,int param_2)

{
  FUN_1496082ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496080fe FUN_1496080fe body=207 status=ok
// SIG undefined FUN_1496080fe(void)

void FUN_1496080fe(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_1496081af;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496081af:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496081ce FUN_1496081ce body=53 status=ok
// SIG undefined FUN_1496081ce(void)

void FUN_1496081ce(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149608234 FUN_149608234 body=29 status=ok
// SIG undefined FUN_149608234(void)

undefined8 FUN_149608234(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149608290 FUN_149608290 body=29 status=ok
// SIG undefined FUN_149608290(void)

undefined8 FUN_149608290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496082ae FUN_1496082ae body=127 status=ok
// SIG undefined FUN_1496082ae(void)

void FUN_1496082ae(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd797d0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14960832e FUN_14960832e body=246 status=ok
// SIG undefined FUN_14960832e(void)

undefined8 * FUN_14960832e(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3fe0000000000000;
  *(undefined4 *)(param_1 + 10) = 5;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14af12730;
  *(undefined4 *)(plVar5 + 2) = 0;
  if (plVar5 == (longlong *)0x0) {
    param_1[7] = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_1[8];
  param_1[7] = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_149608405;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    param_1[8] = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_149608405;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_149608405;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_149608405:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}



// FUNCTION 149608424 FUN_149608424 body=230 status=ok
// SIG undefined FUN_149608424(void)

undefined8 * FUN_149608424(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 149608526 FUN_149608526 body=68 status=ok
// SIG undefined FUN_149608526(void)

undefined8 * FUN_149608526(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960856a FUN_14960856a body=194 status=ok
// SIG undefined FUN_14960856a(void)

void FUN_14960856a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_144553e4e(*(longlong *)(param_1 + 0x40),&local_30);
    if (local_30 == 0) {
      FUN_1496088aa(*(undefined8 *)(param_1 + 0x40),&local_30);
      puVar3 = (undefined8 *)CONCAT44(uStack_2c,local_30);
      FUN_14960890c(param_1,puVar3);
      uVar1 = puVar3[1];
      puVar3[1] = 0;
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      FUN_1496089b0(param_1 + 0x18,param_1 + 0x38);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960862e FUN_14960862e body=403 status=ok
// SIG undefined FUN_14960862e(void)

void FUN_14960862e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  LOCK();
  *(int *)param_1[7] = *(int *)param_1[7] + 1;
  UNLOCK();
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_48);
  puVar7 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  puVar6 = local_48;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_149e06640;
  *(undefined4 *)(puVar7 + 2) = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  *(undefined2 *)(puVar7 + 5) = 3;
  puVar7[6] = 0xffffffffffffffff;
  puVar7[7] = 0;
  *puVar7 = &PTR_FUN_14bd79c00;
  local_48 = (undefined8 *)0x0;
  FUN_14851a5de(puVar7 + 10);
  puVar7[0x24] = puVar6;
  *puVar7 = &PTR_FUN_14bd79bc0;
  *(undefined1 *)(puVar7 + 0x26) = 0;
  puVar7[0x27] = 0;
  puVar7[0x28] = 0;
  puVar7[10] = puVar7 + 0x26;
  param_1[1] = puVar7;
  uVar3 = param_1[7];
  lVar4 = param_1[8];
  if (lVar4 == 0) {
    puVar7[0x27] = uVar3;
    puVar7[0x28] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)puVar7[0x28];
    puVar7[0x27] = uVar3;
    puVar7[0x28] = lVar4;
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
  local_58 = 0;
  local_60 = 0xffffffffffffffff;
  local_68 = 0;
  FUN_1402a8900(param_1[1],0,DAT_14c8442c0,3);
  param_1[4] = param_1[3];
  *(undefined4 *)(param_1 + 2) = 1;
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496087c2 FUN_1496087c2 body=38 status=ok
// SIG undefined FUN_1496087c2(void)

undefined8 FUN_1496087c2(undefined8 param_1,int param_2)

{
  FUN_149608850();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496087ec FUN_1496087ec body=38 status=ok
// SIG undefined FUN_1496087ec(void)

undefined8 FUN_1496087ec(undefined8 param_1,int param_2)

{
  FUN_149608812();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149608812 FUN_149608812 body=62 status=ok
// SIG undefined FUN_149608812(void)

void FUN_149608812(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bd79c00;
  puVar1 = (undefined8 *)param_1[0x24];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1484c0408(param_1 + 0xc);
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 149608850 FUN_149608850 body=89 status=ok
// SIG undefined FUN_149608850(void)

void FUN_149608850(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd79bc0;
  piVar2 = (int *)param_1[0x27];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x28];
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
  FUN_149608812(param_1);
  return;
}



// FUNCTION 1496088aa FUN_1496088aa body=98 status=ok
// SIG undefined FUN_1496088aa(void)

undefined8 * FUN_1496088aa(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = *(undefined8 *)(lVar1 + 0x120);
  *(undefined8 *)(lVar1 + 0x120) = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_14960862e(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_2;
}



// FUNCTION 14960890c FUN_14960890c body=164 status=ok
// SIG undefined FUN_14960890c(void)

void FUN_14960890c(longlong *param_1,undefined8 param_2)

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
        goto LAB_14960898c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14960898c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1496089b0 FUN_1496089b0 body=164 status=ok
// SIG undefined FUN_1496089b0(void)

void FUN_1496089b0(longlong *param_1,undefined8 param_2)

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
        goto LAB_149608a30;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_149608a30:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 149608a54 FUN_149608a54 body=156 status=ok
// SIG undefined FUN_149608a54(void)

undefined8 * FUN_149608a54(undefined8 *param_1)

{
  FUN_149608af0();
  *param_1 = &PTR_FUN_14bd79c40;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x100000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x4040000000000004;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x76) = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  return param_1;
}



// FUNCTION 149608af0 FUN_149608af0 body=102 status=ok
// SIG undefined FUN_149608af0(void)

undefined8 * FUN_149608af0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  *param_1 = &PTR_LAB_14bd79c50;
  param_1[1] = 0;
  _Dst = (void *)FUN_14001cc68(0x140);
  memset(_Dst,0,0x140);
  FUN_148582ed8(_Dst);
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 149608b56 FUN_149608b56 body=38 status=ok
// SIG undefined FUN_149608b56(void)

undefined8 FUN_149608b56(undefined8 param_1,int param_2)

{
  FUN_149609b1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149608b7c FUN_149608b7c body=3999 status=ok
// SIG undefined FUN_149608b7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149608b7c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Dst;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined1 auStack_168 [32];
  undefined **local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  ulonglong uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined **local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  _Dst = (void *)FUN_14001cc68(0x140);
  memset(_Dst,0,0x140);
  FUN_148582ed8(_Dst);
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  *(void **)(param_1 + 0x48) = _Dst;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    _Dst = *(void **)(param_1 + 0x48);
  }
  local_148 = *(undefined ***)((longlong)_Dst + 0xa0);
  uStack_100 = *(undefined8 *)((longlong)_Dst + 0xa8);
  local_138 = *(longlong **)((longlong)_Dst + 0xb0);
  uStack_f0 = *(undefined8 *)((longlong)_Dst + 0xb8);
  local_e8 = *(longlong *)((longlong)_Dst + 0xc0);
  uStack_e0 = *(ulonglong *)((longlong)_Dst + 200);
  local_d8 = *(undefined8 *)((longlong)_Dst + 0xd0);
  uStack_d0 = *(undefined8 *)((longlong)_Dst + 0xd8);
  uVar7 = local_d8;
  uVar8 = uStack_d0;
  local_f8 = local_138;
  uVar6 = uStack_f0;
  local_108 = local_148;
  *(ulonglong *)((longlong)_Dst + 0xd0) = CONCAT44(uStack_114,local_118);
  *(ulonglong *)((longlong)_Dst + 0xd8) = CONCAT44(uStack_10c,uStack_110);
  *(undefined ***)((longlong)_Dst + 0xc0) = &PTR_LAB_14bd79c60;
  *(undefined8 *)((longlong)_Dst + 200) = param_2;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(ulonglong *)((longlong)_Dst + 0xb8) = CONCAT44(uStack_12c,uStack_130);
  *(code **)((longlong)_Dst + 0xa0) = FUN_149609c32;
  *(undefined8 *)((longlong)_Dst + 0xa8) = uStack_140;
  uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
  local_d8._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
  uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
  local_118 = (undefined4)local_d8;
  uStack_114 = local_d8._4_4_;
  uStack_110 = (undefined4)uStack_d0;
  uStack_10c = uStack_d0._4_4_;
  local_128 = local_e8;
  uStack_120 = uStack_e0;
  uStack_130 = (undefined4)uStack_f0;
  uStack_12c = uStack_f0._4_4_;
  uStack_140 = uStack_100;
  uStack_f0 = uVar6;
  local_d8 = uVar7;
  uStack_d0 = uVar8;
  if (local_148 != (undefined **)0x0) {
    plVar9 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar9 = &local_128;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = *(undefined8 *)(param_1 + 0x30);
  FUN_1484c328a(*(undefined8 *)(param_1 + 0x48),param_1 + 0x38);
  *(double *)(*(longlong *)(param_1 + 0x48) + 0x28) = (double)*(float *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x30) = 3;
  }
  *(uint *)(*(longlong *)(param_1 + 0x48) + 0x40) = (uint)(*(int *)(param_1 + 0x54) != 0);
  uStack_100 = *(undefined8 *)(param_1 + 0x10);
  local_f8 = *(longlong **)(param_1 + 0x20);
  local_108 = &PTR_FUN_14af3d520;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  local_d8 = 0;
  uStack_d0 = 0;
  *(undefined ****)(*(longlong *)(param_1 + 0x48) + 0x38) = &local_108;
  if (*(int *)(param_1 + 0x54) == 1) {
    lVar11 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x5c + lVar11);
      if (iVar3 < 0x1000) {
        if (iVar3 == 0x20) {
          plVar9 = (longlong *)FUN_14001cc68(0xa8);
          plVar9[1] = (longlong)&DAT_100000001;
          *plVar9 = (longlong)&PTR_FUN_14af3e030;
          memset(plVar9 + 4,0,0x88);
          plVar9[2] = (longlong)&PTR_FUN_14af3e050;
          *(undefined4 *)(plVar9 + 3) = 0;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = 1;
          plVar9[5] = 0x3ff0000000000000;
          plVar9[8] = 0x3fb999999999999a;
          plVar9[9] = 0;
          plVar9[10] = 0;
          plVar9[0xb] = 0;
          plVar9[0xc] = -0x10000000000001;
          plVar9[0xd] = 0x7fefffffffffffff;
          plVar9[0xe] = 0x7fefffffffffffff;
          plVar9[0xf] = -0x10000000000001;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar9 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          dVar12 = (double)*(float *)(param_1 + 0xa0);
          dVar13 = 1000.0;
          if (dVar12 <= 1000.0) {
            dVar13 = dVar12;
          }
          plVar9[5] = -(ulonglong)(dVar12 < 0.0001) & 0x3f1a36e2eb1c432d |
                      ~-(ulonglong)(dVar12 < 0.0001) & (ulonglong)dVar13;
          dVar13 = 0.0;
          if (0.0 <= *(float *)(param_1 + 0xa4)) {
            dVar12 = (double)*(float *)(param_1 + 0xa4);
            dVar13 = 1.0;
            if (dVar12 <= 1.0) {
              dVar13 = dVar12;
            }
          }
          plVar9[6] = (longlong)dVar13;
          *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(param_1 + 0x9c);
          *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)(param_1 + 0xa8);
          *(undefined4 *)(plVar9 + 4) = *(undefined4 *)(param_1 + 0xac);
        }
        else {
          if (iVar3 != 0x40) goto LAB_149608fb3;
          plVar9 = (longlong *)FUN_14001cc68(0x70,0x10);
          plVar9[1] = (longlong)&DAT_100000001;
          *plVar9 = (longlong)&PTR_FUN_14af3dff0;
          plVar9[3] = 0;
          plVar9[4] = 0;
          plVar9[5] = 0;
          plVar9[6] = 0;
          plVar9[7] = 0;
          plVar9[8] = 0;
          plVar9[2] = (longlong)&PTR_FUN_14af3e010;
          *(undefined1 *)(plVar9 + 3) = 3;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = 0x20;
          plVar9[4] = 0x7fefffffffffffff;
          plVar9[5] = 0x4066800000000000;
          *(undefined4 *)(plVar9 + 6) = 1;
          plVar9[7] = 0x402e000000000000;
          plVar9[9] = 0;
          plVar9[10] = 0;
          plVar9[0xb] = 0x3fd0000000000000;
          plVar9[0xc] = 0;
          plVar9[0xd] = 0;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar9 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          *(undefined1 *)(plVar9 + 3) = 1;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x80);
          plVar9[4] = (longlong)(double)*(float *)(param_1 + 0x84);
          plVar9[5] = (longlong)(double)*(float *)(param_1 + 0x88);
          plVar9[7] = (longlong)(double)*(float *)(param_1 + 0x8c);
          if (*(uint *)(param_1 + 0x90) < 2) {
            *(uint *)(plVar9 + 8) = *(uint *)(param_1 + 0x90);
          }
        }
        if (plVar9 == (longlong *)0x0) {
          lVar5 = *(longlong *)(param_1 + 0x48);
          *(undefined8 *)(lVar5 + 0x58 + lVar11 * 4) = 0x10;
          plVar10 = *(longlong **)(lVar5 + 0x60 + lVar11 * 4);
          if (plVar10 != (longlong *)0x0) {
            *(undefined8 *)(lVar5 + 0x60 + lVar11 * 4) = 0;
LAB_149609121:
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
            if (plVar9 != (longlong *)0x0) goto LAB_149609143;
          }
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          lVar5 = *(longlong *)(param_1 + 0x48);
          *(longlong **)(lVar5 + 0x58 + lVar11 * 4) = plVar9 + 2;
          plVar10 = *(longlong **)(lVar5 + 0x60 + lVar11 * 4);
          if (plVar9 == plVar10) {
LAB_149609173:
            LOCK();
            plVar10 = plVar9 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          else {
            *(longlong **)(lVar5 + 0x60 + lVar11 * 4) = plVar9;
LAB_14960911c:
            if (plVar10 != (longlong *)0x0) goto LAB_149609121;
          }
LAB_149609143:
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else if ((iVar3 == 0x1000) || (iVar3 == 0x2000)) {
        uVar14 = 0x3f800000;
        if (iVar3 != 0x1000) {
          uVar14 = 0;
        }
        plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14af3e130;
        FUN_14837f4f6(plVar9 + 2,uVar14);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          lVar5 = *(longlong *)(param_1 + 0x48);
          *(longlong **)(lVar5 + 0x58 + lVar11 * 4) = plVar9 + 2;
          plVar10 = *(longlong **)(lVar5 + 0x60 + lVar11 * 4);
          if (plVar9 == plVar10) goto LAB_149609173;
          *(longlong **)(lVar5 + 0x60 + lVar11 * 4) = plVar9;
          goto LAB_14960911c;
        }
        lVar5 = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(lVar5 + 0x58 + lVar11 * 4) = 0x10;
        plVar10 = *(longlong **)(lVar5 + 0x60 + lVar11 * 4);
        if (plVar10 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 0x60 + lVar11 * 4) = 0;
          goto LAB_149609121;
        }
      }
      else {
LAB_149608fb3:
        lVar5 = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(lVar5 + 0x58 + lVar11 * 4) = 0;
        plVar9 = *(longlong **)(lVar5 + 0x60 + lVar11 * 4);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(lVar5 + 0x60 + lVar11 * 4) = 0;
          goto LAB_149609143;
        }
      }
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x10);
    goto switchD_1496091fa_caseD_3;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 < 0x40) {
    switch(iVar3) {
    case 1:
      plVar9 = (longlong *)FUN_14001cc68(0x90,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14af3df70;
      plVar10 = plVar9 + 2;
      plVar9[8] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xe] = 0;
      plVar9[0xf] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      plVar9[0x10] = 0;
      plVar9[0x11] = 0;
      plVar9[2] = (longlong)&PTR_FUN_14af3df90;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      *(undefined4 *)((longlong)plVar9 + 0x4c) = 0x80;
      *(undefined4 *)(plVar9 + 10) = 0xffffffff;
      *(undefined1 *)(plVar9 + 0xe) = 0;
      *(undefined4 *)(plVar9 + 0x11) = DAT_14c84636c;
      plVar9[0x10] = DAT_14c846364;
      break;
    case 2:
      plVar9 = (longlong *)FUN_148582953();
      plVar10 = plVar9 + 2;
      if (plVar9 == (longlong *)0x0) {
        _DAT_00000018 = 2;
        goto LAB_14960984c;
      }
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      *(undefined4 *)(plVar9 + 3) = 2;
LAB_149609344:
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      lVar11 = *(longlong *)(param_1 + 0x48);
      *(longlong **)(lVar11 + 0x48) = plVar10;
LAB_149609350:
      plVar10 = *(longlong **)(lVar11 + 0x50);
      if (plVar9 == plVar10) goto LAB_1496097bb;
      *(longlong **)(lVar11 + 0x50) = plVar9;
      goto LAB_1496096be;
    case 3:
    case 5:
    case 6:
    case 7:
      goto switchD_1496091fa_caseD_3;
    case 4:
      plVar9 = (longlong *)FUN_148582953();
      plVar10 = plVar9 + 2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        *(undefined4 *)(plVar9 + 3) = 3;
        goto LAB_149609344;
      }
      _DAT_00000018 = 3;
LAB_14960984c:
      lVar11 = *(longlong *)(param_1 + 0x48);
      *(undefined8 *)(lVar11 + 0x48) = 0x10;
      goto LAB_149609854;
    case 8:
      plVar9 = (longlong *)FUN_14001cc68(0x70,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14af3dff0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[2] = (longlong)&PTR_FUN_14af3e010;
      *(undefined1 *)(plVar9 + 3) = 3;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = 0x20;
      plVar9[4] = 0x7fefffffffffffff;
      plVar9[5] = 0x4066800000000000;
      *(undefined4 *)(plVar9 + 6) = 1;
      plVar9[7] = 0x402e000000000000;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0x3fd0000000000000;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      *(undefined1 *)(plVar9 + 3) = 2;
LAB_14960964d:
      *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)(param_1 + 0x80);
      plVar9[4] = (longlong)(double)*(float *)(param_1 + 0x84);
      plVar9[5] = (longlong)(double)*(float *)(param_1 + 0x88);
      plVar9[7] = (longlong)(double)*(float *)(param_1 + 0x8c);
      if (*(uint *)(param_1 + 0x90) < 2) {
        *(uint *)(plVar9 + 8) = *(uint *)(param_1 + 0x90);
      }
      plVar10 = plVar9 + 2;
      break;
    default:
      if (iVar3 != 0x20) {
        if (iVar3 != 0x10) goto switchD_1496091fa_caseD_3;
        plVar9 = (longlong *)FUN_148582953();
        plVar10 = plVar9 + 2;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          *(undefined4 *)(plVar9 + 3) = 1;
          goto LAB_149609344;
        }
        _DAT_00000018 = 1;
        goto LAB_14960984c;
      }
      plVar9 = (longlong *)FUN_14001cc68(0xa8);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14af3e030;
      memset(plVar9 + 4,0,0x88);
      plVar9[2] = (longlong)&PTR_FUN_14af3e050;
      *(undefined4 *)(plVar9 + 3) = 0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = 1;
      plVar9[5] = 0x3ff0000000000000;
      plVar9[8] = 0x3fb999999999999a;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = -0x10000000000001;
      plVar9[0xd] = 0x7fefffffffffffff;
      plVar9[0xe] = 0x7fefffffffffffff;
      plVar9[0xf] = -0x10000000000001;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      dVar12 = (double)*(float *)(param_1 + 0xa0);
      dVar13 = 1000.0;
      if (dVar12 <= 1000.0) {
        dVar13 = dVar12;
      }
      plVar9[5] = -(ulonglong)(dVar12 < 0.0001) & 0x3f1a36e2eb1c432d |
                  ~-(ulonglong)(dVar12 < 0.0001) & (ulonglong)dVar13;
      dVar13 = 0.0;
      if (0.0 <= *(float *)(param_1 + 0xa4)) {
        dVar12 = (double)*(float *)(param_1 + 0xa4);
        dVar13 = 1.0;
        if (dVar12 <= 1.0) {
          dVar13 = dVar12;
        }
      }
      plVar10 = plVar9 + 2;
      plVar9[6] = (longlong)dVar13;
      *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)((longlong)plVar9 + 0x1c) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(plVar9 + 4) = *(undefined4 *)(param_1 + 0xac);
    }
    if (plVar9 == (longlong *)0x0) {
      lVar11 = *(longlong *)(param_1 + 0x48);
      *(longlong **)(lVar11 + 0x48) = plVar10;
      plVar10 = *(longlong **)(lVar11 + 0x50);
      if (plVar10 == (longlong *)0x0) goto switchD_1496091fa_caseD_3;
      *(undefined8 *)(lVar11 + 0x50) = 0;
      goto LAB_1496096c3;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    lVar11 = *(longlong *)(param_1 + 0x48);
    *(longlong **)(lVar11 + 0x48) = plVar10;
    plVar10 = *(longlong **)(lVar11 + 0x50);
    if (plVar9 == plVar10) {
LAB_1496097bb:
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    else {
      *(longlong **)(lVar11 + 0x50) = plVar9;
LAB_1496096be:
      if (plVar10 != (longlong *)0x0) goto LAB_1496096c3;
    }
  }
  else {
    if (iVar3 < 0x80) {
      if (iVar3 != 0x40) goto switchD_1496091fa_caseD_3;
      plVar9 = (longlong *)FUN_14001cc68(0x70,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14af3dff0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[8] = 0;
      plVar9[2] = (longlong)&PTR_FUN_14af3e010;
      *(undefined1 *)(plVar9 + 3) = 3;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = 0x20;
      plVar9[4] = 0x7fefffffffffffff;
      plVar9[5] = 0x4066800000000000;
      *(undefined4 *)(plVar9 + 6) = 1;
      plVar9[7] = 0x402e000000000000;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0x3fd0000000000000;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      *(undefined1 *)(plVar9 + 3) = 1;
      goto LAB_14960964d;
    }
    if (iVar3 < 0x100) {
      if (iVar3 != 0x80) goto switchD_1496091fa_caseD_3;
      plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14af3e070;
      plVar10 = plVar9 + 2;
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      plVar9[2] = (longlong)&PTR_FUN_14af3e090;
      *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        local_e8 = *(undefined8 *)(param_1 + 200);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(param_1 + 0xb8));
        goto LAB_149609344;
      }
      local_e8 = *(undefined8 *)(param_1 + 200);
      uStack_e0 = CONCAT44(uStack_e0._4_4_,*(undefined4 *)(param_1 + 0xb8));
      goto LAB_14960984c;
    }
    if (0x3ff < iVar3) {
      if (iVar3 == 0x400) {
        plVar9 = (longlong *)FUN_148582953();
        plVar10 = plVar9 + 2;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          *(undefined4 *)(plVar9 + 3) = 5;
          goto LAB_149609344;
        }
        _DAT_00000018 = 5;
      }
      else {
        if (iVar3 != 0x800) goto switchD_1496091fa_caseD_3;
        plVar9 = (longlong *)FUN_148582953();
        plVar10 = plVar9 + 2;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          *(undefined4 *)(plVar9 + 3) = 7;
          goto LAB_149609344;
        }
        _DAT_00000018 = 7;
      }
      goto LAB_14960984c;
    }
    if (iVar3 != 0x100) {
      if (iVar3 != 0x200) goto switchD_1496091fa_caseD_3;
      plVar9 = (longlong *)FUN_148582953();
      plVar10 = plVar9 + 2;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        *(undefined4 *)(plVar9 + 3) = 6;
        goto LAB_149609344;
      }
      _DAT_00000018 = 6;
      goto LAB_14960984c;
    }
    plVar9 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14af3e0b0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    *(undefined8 *)((longlong)plVar9 + 0x1c) = 0;
    *(undefined8 *)((longlong)plVar9 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar9 + 0x2c) = 0x3f800000;
    plVar9[6] = 0;
    plVar9[2] = (longlong)&PTR_FUN_14af3e0d0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      *(undefined4 *)(plVar9 + 9) = *(undefined4 *)(param_1 + 0xc4);
      FUN_1495f8878(plVar9 + 7,param_1 + 0xd8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      lVar11 = *(longlong *)(param_1 + 0x48);
      *(longlong **)(lVar11 + 0x48) = plVar9 + 2;
      goto LAB_149609350;
    }
    _DAT_00000048 = *(undefined4 *)(param_1 + 0xc4);
    FUN_1495f8878(0x38,param_1 + 0xd8);
    lVar11 = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(lVar11 + 0x48) = 0x10;
LAB_149609854:
    plVar10 = *(longlong **)(lVar11 + 0x50);
    if (plVar10 == (longlong *)0x0) goto switchD_1496091fa_caseD_3;
    *(undefined8 *)(lVar11 + 0x50) = 0;
LAB_1496096c3:
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
    if (plVar9 == (longlong *)0x0) goto switchD_1496091fa_caseD_3;
  }
  LOCK();
  plVar10 = plVar9 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
switchD_1496091fa_caseD_3:
  FUN_148382e16(*(undefined8 *)(param_1 + 0x48));
  puVar4 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149609b1e FUN_149609b1e body=275 status=ok
// SIG undefined FUN_149609b1e(void)

void FUN_149609b1e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bd79c40;
  FUN_145810cd0(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1a];
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
  puVar4 = (undefined8 *)param_1[9];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar3 = (longlong *)param_1[8];
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
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_14bd79c50;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149609c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 149609c32 FUN_149609c32 body=70 status=ok
// SIG undefined FUN_149609c32(void)

char FUN_149609c32(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 149609ca2 FUN_149609ca2 body=29 status=ok
// SIG undefined FUN_149609ca2(void)

undefined8 FUN_149609ca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149609cc0 FUN_149609cc0 body=163 status=ok
// SIG undefined FUN_149609cc0(void)

void FUN_149609cc0(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bd79c80;
  param_1[2] = &PTR_FUN_14bd79ca0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000;
  param_1[0xb] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x7fefffffffffffff;
  param_1[0x15] = 0x7fefffffffffffff;
  param_1[0x16] = 0x7fefffffffffffff;
  param_1[0x17] = 0xffefffffffffffff;
  param_1[0x18] = 0xffefffffffffffff;
  param_1[0x19] = 0xffefffffffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}



// FUNCTION 149609d6e FUN_149609d6e body=29 status=ok
// SIG undefined FUN_149609d6e(void)

undefined8 FUN_149609d6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149609d8c FUN_149609d8c body=38 status=ok
// SIG undefined FUN_149609d8c(void)

undefined8 FUN_149609d8c(undefined8 param_1,int param_2)

{
  FUN_149609db2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149609db2 FUN_149609db2 body=147 status=ok
// SIG undefined FUN_149609db2(void)

void FUN_149609db2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd79ca0;
  plVar3 = (longlong *)param_1[0x11];
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
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_149609e46(param_1 + 3);
  FUN_149609fd2(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149609e46 FUN_149609e46 body=52 status=ok
// SIG undefined FUN_149609e46(void)

void FUN_149609e46(longlong *param_1)

{
  FUN_149609e7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149609e7a FUN_149609e7a body=343 status=ok
// SIG undefined FUN_149609e7a(void)

void FUN_149609e7a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149609fd2 FUN_149609fd2 body=41 status=ok
// SIG undefined FUN_149609fd2(void)

void FUN_149609fd2(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148544542(param_1,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 149609ffc FUN_149609ffc body=94 status=ok
// SIG undefined FUN_149609ffc(void)

longlong * FUN_149609ffc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 14960a05a FUN_14960a05a body=147 status=ok
// SIG undefined FUN_14960a05a(void)

void FUN_14960a05a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14960a0ee FUN_14960a0ee body=239 status=ok
// SIG undefined FUN_14960a0ee(void)

undefined8 * FUN_14960a0ee(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_149605b8c();
  *param_1 = &PTR_FUN_14bd79e40;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x140400000;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x18] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x16] = DAT_14c8464e0;
  param_1[0x17] = uVar1;
  uVar1 = DAT_14c846518;
  param_1[0x19] = DAT_14c846510;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c846520;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 14960a1de FUN_14960a1de body=38 status=ok
// SIG undefined FUN_14960a1de(void)

undefined8 FUN_14960a1de(undefined8 param_1,int param_2)

{
  FUN_14960a9ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960a204 FUN_14960a204 body=1958 status=ok
// SIG undefined FUN_14960a204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14960a204(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  void *_Dst;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  undefined **ppuVar12;
  longlong lVar13;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined1 *local_210;
  undefined ****local_208;
  undefined ***local_200;
  undefined **local_1f8;
  longlong *aplStack_1f0 [2];
  undefined8 uStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  _Dst = (void *)FUN_14001cc68(0x570);
  memset(_Dst,0,0x570);
  FUN_1484d448a(_Dst);
  puVar10 = *(undefined8 **)(param_1 + 0x40);
  *(void **)(param_1 + 0x40) = _Dst;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
    _Dst = *(void **)(param_1 + 0x40);
  }
  local_1f8 = *(undefined ***)((longlong)_Dst + 0x40);
  aplStack_1f0[0] = *(longlong **)((longlong)_Dst + 0x48);
  aplStack_1f0[1] = *(longlong **)((longlong)_Dst + 0x50);
  uVar9 = *(undefined8 *)((longlong)_Dst + 0x58);
  local_1d8 = *(longlong *)((longlong)_Dst + 0x60);
  uStack_1d0 = *(undefined8 *)((longlong)_Dst + 0x68);
  uVar4 = *(undefined8 *)((longlong)_Dst + 0x70);
  uVar5 = *(undefined8 *)((longlong)_Dst + 0x78);
  *(ulonglong *)((longlong)_Dst + 0x70) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)((longlong)_Dst + 0x78) = CONCAT44(uStack_6c,uStack_70);
  *(undefined ***)((longlong)_Dst + 0x60) = &PTR_LAB_14bd79e50;
  *(undefined8 *)((longlong)_Dst + 0x68) = param_2;
  *(undefined8 *)((longlong)_Dst + 0x50) = 0;
  *(ulonglong *)((longlong)_Dst + 0x58) = CONCAT44(uStack_8c,uStack_90);
  *(code **)((longlong)_Dst + 0x40) = FUN_14960aba4;
  *(longlong **)((longlong)_Dst + 0x48) = plStack_a0;
  uStack_1e0._0_4_ = (undefined4)uVar9;
  uStack_1e0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_1c8._0_4_ = (undefined4)uVar4;
  local_1c8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1c0._0_4_ = (undefined4)uVar5;
  uStack_1c0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_78 = (undefined4)local_1c8;
  uStack_74 = local_1c8._4_4_;
  uStack_70 = (undefined4)uStack_1c0;
  uStack_6c = uStack_1c0._4_4_;
  local_88 = local_1d8;
  uStack_80 = uStack_1d0;
  uStack_90 = (undefined4)uStack_1e0;
  uStack_8c = uStack_1e0._4_4_;
  uStack_1e0 = uVar9;
  local_1c8 = uVar4;
  uStack_1c0 = uVar5;
  local_a8 = local_1f8;
  plStack_a0 = aplStack_1f0[0];
  local_98 = aplStack_1f0[1];
  if (local_1f8 != (undefined **)0x0) {
    plVar7 = aplStack_1f0[1];
    if (aplStack_1f0[1] == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x20) = *(undefined4 *)(param_1 + 0x5c);
  FUN_14838049e(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50));
  *(double *)(*(longlong *)(param_1 + 0x40) + 0x28) = (double)*(float *)(param_1 + 100);
  FUN_1483804a6(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x68));
  FUN_1484c328a(*(undefined8 *)(param_1 + 0x40),param_1 + 0x30);
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x550) = *(undefined8 *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x40);
    local_1f8 = *(undefined ***)(lVar8 + 0x100);
    aplStack_1f0[0] = *(longlong **)(lVar8 + 0x108);
    aplStack_1f0[1] = *(longlong **)(lVar8 + 0x110);
    uVar9 = *(undefined8 *)(lVar8 + 0x118);
    local_1d8 = *(longlong *)(lVar8 + 0x120);
    uStack_1d0 = *(undefined8 *)(lVar8 + 0x128);
    uVar4 = *(undefined8 *)(lVar8 + 0x130);
    uVar5 = *(undefined8 *)(lVar8 + 0x138);
    *(ulonglong *)(lVar8 + 0x130) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar8 + 0x138) = CONCAT44(uStack_6c,uStack_70);
    *(undefined ***)(lVar8 + 0x120) = &PTR_LAB_14bd79e70;
    *(longlong *)(lVar8 + 0x128) = param_1;
    *(undefined8 *)(lVar8 + 0x110) = 0;
    *(ulonglong *)(lVar8 + 0x118) = CONCAT44(uStack_8c,uStack_90);
    *(undefined1 **)(lVar8 + 0x100) = &LAB_14960ac32;
    *(longlong **)(lVar8 + 0x108) = plStack_a0;
    uStack_1e0._0_4_ = (undefined4)uVar9;
    uStack_1e0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_1c8._0_4_ = (undefined4)uVar4;
    local_1c8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_1c0._0_4_ = (undefined4)uVar5;
    uStack_1c0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_78 = (undefined4)local_1c8;
    uStack_74 = local_1c8._4_4_;
    uStack_70 = (undefined4)uStack_1c0;
    uStack_6c = uStack_1c0._4_4_;
    local_88 = local_1d8;
    uStack_80 = uStack_1d0;
    uStack_90 = (undefined4)uStack_1e0;
    uStack_8c = uStack_1e0._4_4_;
    local_a8 = local_1f8;
    plStack_a0 = aplStack_1f0[0];
    local_98 = aplStack_1f0[1];
    if (local_1f8 != (undefined **)0x0) {
      plVar7 = &local_88;
      if (aplStack_1f0[1] != (longlong *)0x0) {
        plVar7 = aplStack_1f0[1];
      }
      uStack_1e0 = uVar9;
      local_1c8 = uVar4;
      uStack_1c0 = uVar5;
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  local_150 = *(longlong **)(param_1 + 0x10);
  local_1f8 = &PTR_FUN_14bd79e90;
  aplStack_1f0[0] = (longlong *)0x0;
  aplStack_1f0[1] = (longlong *)0x0;
  lVar13 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = DAT_14c8464e0;
  local_1c8 = DAT_14c8464e8;
  uStack_1c0 = DAT_14c8464f0;
  local_1b8 = (undefined4)DAT_14c846510;
  uStack_1b4 = DAT_14c846510._4_4_;
  uStack_1b0 = (undefined4)DAT_14c846518;
  uStack_1ac = DAT_14c846518._4_4_;
  local_1a8 = DAT_14c846520;
  local_180 = 0;
  local_178 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_174 = 0xffffffff00000080;
  local_16c = 0;
  local_160 = 0;
  local_158 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_208 = &local_200;
  local_210 = &LAB_14960b6a8;
  local_200 = &local_1f8;
  (**(code **)(*local_150 + 0x58))();
  puVar10 = (undefined8 *)(param_1 + 0x90);
  pplVar11 = aplStack_1f0;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pplVar11 = (longlong *)*puVar10;
    puVar10 = puVar10 + 1;
    pplVar11 = pplVar11 + 1;
  }
  *(undefined ****)(*(longlong *)(param_1 + 0x40) + 0x38) = &local_1f8;
  local_218 = param_1 + 0xf0;
  do {
    uVar6 = *(uint *)(param_1 + 0x4c) & *(uint *)((longlong)&DAT_14bd72980 + lVar13);
    if ((int)uVar6 < 2) {
      if (uVar6 == 1) {
        plVar7 = (longlong *)FUN_14001cc68(0x90,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14af3df70;
        ppuVar12 = (undefined **)(plVar7 + 2);
        plVar7[8] = 0;
        plVar7[9] = 0;
        plVar7[10] = 0;
        plVar7[0xb] = 0;
        plVar7[0xe] = 0;
        plVar7[0xf] = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[0xc] = 0;
        plVar7[0xd] = 0;
        plVar7[0x10] = 0;
        plVar7[0x11] = 0;
        plVar7[2] = (longlong)&PTR_FUN_14af3df90;
        plVar7[3] = 0;
        plVar7[4] = 0;
        plVar7[5] = 0;
        *(undefined4 *)((longlong)plVar7 + 0x4c) = 0x80;
        *(undefined4 *)(plVar7 + 10) = 0xffffffff;
        *(undefined1 *)(plVar7 + 0xe) = 0;
        *(undefined4 *)(plVar7 + 0x11) = DAT_14c84636c;
        plVar7[0x10] = DAT_14c846364;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
LAB_14960a6b5:
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          local_a8 = ppuVar12;
          goto LAB_14960a6c9;
        }
LAB_14960a922:
        uVar9 = *(undefined8 *)(param_1 + 0x40);
        plStack_a0 = (longlong *)0x0;
        local_a8 = ppuVar12;
        goto LAB_14960a6ce;
      }
    }
    else {
      if (uVar6 == 2) {
        plVar7 = (longlong *)FUN_148582953();
        if (plVar7 == (longlong *)0x0) {
          _DAT_00000018 = 2;
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          plStack_a0 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
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
          *(undefined4 *)(plVar7 + 3) = 2;
          uVar9 = *(undefined8 *)(param_1 + 0x40);
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          plStack_a0 = plVar7;
        }
        local_a8 = (undefined **)(plVar7 + 2);
        FUN_1483803f4(uVar9,&local_a8);
        plVar1 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_a0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
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
      else {
        if (uVar6 == 0x10) {
          plVar7 = (longlong *)FUN_148582953();
          ppuVar12 = (undefined **)(plVar7 + 2);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
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
            *(undefined4 *)(plVar7 + 3) = 1;
            goto LAB_14960a6b5;
          }
          _DAT_00000018 = 1;
          goto LAB_14960a922;
        }
        if (uVar6 != 0x80) goto LAB_14960a741;
      }
      plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14af3e070;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar7[2] = (longlong)&PTR_FUN_14af3e090;
      *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x3f800000;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
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
      FUN_149603812(&local_148,local_218);
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      local_a8 = (undefined **)(plVar7 + 2);
      plStack_a0 = plVar7;
      if (plVar7 != (longlong *)0x0) {
LAB_14960a6c9:
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plStack_a0 = plVar7;
      }
LAB_14960a6ce:
      FUN_1483803f4(uVar9,&local_a8);
      plVar1 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
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
LAB_14960a741:
    lVar13 = lVar13 + 4;
    if (lVar13 == 0x34) {
      FUN_143b13eb0(*(undefined8 *)(param_1 + 0x40));
      puVar10 = *(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      FUN_14960ab10(&local_1f8);
      if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 14960a9ac FUN_14960a9ac body=355 status=ok
// SIG undefined FUN_14960a9ac(void)

void FUN_14960a9ac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bd79e40;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_145d723dc(param_1 + 0x1e);
  FUN_145810cd0(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x11];
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
  plVar3 = (longlong *)param_1[0xf];
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
  puVar4 = (undefined8 *)param_1[8];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
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
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_LAB_14bd794b0;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014960ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 14960ab10 FUN_14960ab10 body=148 status=ok
// SIG undefined FUN_14960ab10(void)

void FUN_14960ab10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd79e90;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14960bcb2(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_145d723dc(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14960bd40(param_1 + 0xb);
  return;
}



// FUNCTION 14960aba4 FUN_14960aba4 body=70 status=ok
// SIG undefined FUN_14960aba4(void)

char FUN_14960aba4(undefined8 *param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
    if (*pcVar1 == '\0') {
      pcVar2 = *(code **)(pcVar1 + 0x70);
      plVar5 = (longlong *)(pcVar1 + 0x90);
      if (*(longlong **)(pcVar1 + 0x80) != (longlong *)0x0) {
        plVar5 = *(longlong **)(pcVar1 + 0x80);
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      cVar3 = (*pcVar2)(uVar4);
      *pcVar1 = cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 14960ac14 FUN_14960ac14 body=29 status=ok
// SIG undefined FUN_14960ac14(void)

undefined8 FUN_14960ac14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960ac64 FUN_14960ac64 body=29 status=ok
// SIG undefined FUN_14960ac64(void)

undefined8 FUN_14960ac64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960ac82 FUN_14960ac82 body=199 status=ok
// SIG undefined FUN_14960ac82(void)

void FUN_14960ac82(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *puStack_40;
  float local_38;
  float local_34;
  float local_30;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar3 = *(int **)(*param_1 + 0x80);
  local_48 = &DAT_3f8000003f800000;
  puStack_40 = &DAT_3f8000003f800000;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar5 = 1.0;
  if (dVar1 <= 1.0) {
    dVar5 = dVar1;
  }
  dVar4 = 1.0;
  if (dVar2 <= 1.0) {
    dVar4 = dVar2;
  }
  local_18 = (double)piVar3[1] * (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar4);
  local_20 = (double)*piVar3 * (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar5);
  FUN_1483b7358(piVar3,&local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((local_38 + local_34 + local_30) / 3.0);
}



// FUNCTION 14960ad4a FUN_14960ad4a body=38 status=ok
// SIG undefined FUN_14960ad4a(void)

undefined8 FUN_14960ad4a(undefined8 param_1,int param_2)

{
  FUN_14960ab10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14960ad70 FUN_14960ad70 body=97 status=ok
// SIG undefined FUN_14960ad70(void)

void FUN_14960ad70(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  code *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  local_20 = &local_18;
  local_10 = param_2[1];
  local_28 = FUN_14960b660;
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x58))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b070 FUN_14960b070 body=556 status=ok
// SIG undefined FUN_14960b070(void)

ulonglong FUN_14960b070(longlong param_1,undefined8 param_2,double *param_3,undefined4 *param_4,
                       undefined4 *param_5,double *param_6)

{
  ulonglong *puVar1;
  double dVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [48];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1485e400a(param_1 + 8,local_188,param_2);
  local_148 = DAT_14c8464f0;
  local_158 = (undefined4)DAT_14c8464e0;
  uStack_154 = DAT_14c8464e0._4_4_;
  uStack_150 = (undefined4)DAT_14c8464e8;
  uStack_14c = DAT_14c8464e8._4_4_;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0x3ff0000000000000;
  local_128 = -1.0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0xffffffffffffffff;
  local_108 = (undefined4)DAT_14c8464e0;
  uStack_104 = DAT_14c8464e0._4_4_;
  uStack_100 = (undefined4)DAT_14c8464e8;
  uStack_fc = DAT_14c8464e8._4_4_;
  local_f8 = DAT_14c8464f0;
  uVar8 = 0;
  local_f0 = 0;
  local_48 = 0;
  local_40 = 0x200000000;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                    (*(longlong **)(param_1 + 0xa8),local_188);
  dVar2 = *param_6;
  uVar9 = SUB84(dVar2,0);
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar9 = 0xe0000000;
    uVar10 = 0x47efffff;
  }
  *param_3 = (double)CONCAT44(uVar10,uVar9);
  if (cVar4 != '\0') {
    if (local_128 < *param_6) {
      *param_4 = local_110._4_4_;
      *param_3 = local_128;
      *(undefined8 *)(param_5 + 4) = local_f8;
      *param_5 = local_108;
      param_5[1] = uStack_104;
      param_5[2] = uStack_100;
      param_5[3] = uStack_fc;
      if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
        uVar5 = ((uint)(uStack_118 >> 0x14) & 0xffff ^ (uint)(uStack_118 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar6 = param_1 + 0x90;
        if (*(longlong *)(param_1 + 0x98) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x98);
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(param_1 + 0xa0) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar7 != -1) {
          uVar8 = 0;
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x18);
            if (*puVar1 == uStack_118) {
              if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) goto LAB_14960b19d;
              uVar3 = puVar1[1];
              uVar8 = 0;
              if ((int)local_110 < *(int *)(uVar3 + 0x10)) {
                if (0 < (int)local_110) {
                  uVar8 = local_110 & 0xffffffff;
                }
                uVar8 = *(ulonglong *)(*(longlong *)(uVar3 + 8) + uVar8 * 8);
              }
              break;
            }
            iVar7 = (int)puVar1[2];
          } while (iVar7 != -1);
          goto LAB_14960b19f;
        }
      }
    }
LAB_14960b19d:
    uVar8 = 0;
  }
LAB_14960b19f:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14960b29e FUN_14960b29e body=107 status=ok
// SIG undefined FUN_14960b29e(void)

bool FUN_14960b29e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_30 [28];
  undefined4 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_10 = 0x7fefffffffffffff;
  local_14 = 0xffffffff;
  local_48 = local_30;
  local_40 = param_3;
  lVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b30a FUN_14960b30a body=30 status=ok
// SIG undefined FUN_14960b30a(void)

undefined8 FUN_14960b30a(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  return param_2;
}



// FUNCTION 14960b33c FUN_14960b33c body=33 status=ok
// SIG undefined FUN_14960b33c(void)

undefined8 FUN_14960b33c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x50))
            (*(longlong **)(param_3 + 0xd8),param_2,param_4);
  return param_2;
}



// FUNCTION 14960b3b0 FUN_14960b3b0 body=274 status=ok
// SIG undefined FUN_14960b3b0(void)

double * FUN_14960b3b0(undefined8 param_1,double *param_2,longlong param_3,undefined4 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(**(longlong **)(param_3 + 0xd8) + 0x68))
            (*(longlong **)(param_3 + 0xd8),&local_78,param_4,param_5);
  lVar1 = param_3 + 0x20;
  if (*(longlong *)(param_3 + 0xc0) != 0) {
    lVar1 = *(longlong *)(param_3 + 0xc0);
  }
  if ((longlong)*(int *)(param_3 + 200) != 0) {
    lVar2 = (longlong)*(int *)(param_3 + 200) * 0x50;
    do {
      local_50 = local_68 * *(double *)(lVar1 + 0x48);
      local_58 = local_70 * *(double *)(lVar1 + 0x40);
      local_60 = local_78 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      local_68 = local_38 + *(double *)(lVar1 + 0x30);
      local_70 = local_40 + *(double *)(lVar1 + 0x28);
      local_78 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_2 = local_78;
  param_2[1] = local_70;
  param_2[2] = local_68;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b4c4 FUN_14960b4c4 body=353 status=ok
// SIG undefined FUN_14960b4c4(void)

undefined4
FUN_14960b4c4(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,float *param_5
             )

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x70))
                    (*(longlong **)(param_2 + 0xd8),param_3,param_4,param_5);
  local_60 = (double)param_5[2];
  local_68 = (double)param_5[1];
  local_70 = (double)*param_5;
  lVar3 = param_2 + 0x20;
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    lVar3 = *(longlong *)(param_2 + 0xc0);
  }
  local_88 = local_70;
  uStack_80 = local_68;
  local_78 = local_60;
  if ((longlong)*(int *)(param_2 + 200) != 0) {
    lVar2 = (longlong)*(int *)(param_2 + 200) * 0x50;
    do {
      FUN_146c5cfa8(lVar3,&local_58,&local_88);
      local_78 = local_48;
      local_88 = (double)CONCAT44(uStack_54,local_58);
      uStack_80 = (double)CONCAT44(uStack_4c,uStack_50);
      lVar3 = lVar3 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
    local_60 = (double)(float)local_48;
    local_68 = (double)(float)uStack_80;
    local_70 = (double)(float)local_88;
  }
  FUN_146c5d0c4(param_1 + 8,&local_58);
  *param_5 = (float)(double)CONCAT44(uStack_54,local_58);
  param_5[1] = (float)(double)CONCAT44(uStack_4c,uStack_50);
  param_5[2] = (float)local_48;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b626 FUN_14960b626 body=48 status=ok
// SIG undefined FUN_14960b626(void)

void FUN_14960b626(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x78))
            (*(longlong **)(param_2 + 0xd8),param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 14960b660 FUN_14960b660 body=71 status=ok
// SIG undefined FUN_14960b660(void)

void FUN_14960b660(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_3 != 0) {
    local_10 = *param_3;
    (*(code *)*param_1)(param_1[1]);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b6b4 FUN_14960b6b4 body=257 status=ok
// SIG undefined FUN_14960b6b4(void)

void FUN_14960b6b4(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong *local_20;
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (param_3 != (ulonglong *)0x0 && param_2 != 0) {
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x60) != *(int *)(lVar2 + 0x8c)) {
      uVar3 = *param_3;
      uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar6 = lVar2 + 0x90;
      if (*(longlong *)(lVar2 + 0x98) != 0) {
        lVar6 = *(longlong *)(lVar2 + 0x98);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                               4);
      if (iVar5 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar5 * 0x18);
          if (*puVar1 == uVar3) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 != (ulonglong *)&DAT_fffffffffffffff8))
            goto LAB_14960b79a;
            break;
          }
          iVar5 = (int)puVar1[2];
        } while (iVar5 != -1);
      }
    }
    local_18 = &local_28;
    local_20 = param_3;
    FUN_14960b7b6((longlong *)(lVar2 + 0x58),local_c,&local_20);
  }
LAB_14960b79a:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b7b6 FUN_14960b7b6 body=326 status=ok
// SIG undefined FUN_14960b7b6(void)

undefined4 * FUN_14960b7b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14960b8fe(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14960b9e4(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14960bad6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960b8fe FUN_14960b8fe body=230 status=ok
// SIG undefined FUN_14960b8fe(void)

int * FUN_14960b8fe(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14960b9e4 FUN_14960b9e4 body=128 status=ok
// SIG undefined FUN_14960b9e4(void)

undefined8 FUN_14960b9e4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14960ba64((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14960ba64 FUN_14960ba64 body=114 status=ok
// SIG undefined FUN_14960ba64(void)

void FUN_14960ba64(longlong *param_1,int param_2)

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



// FUNCTION 14960bad6 FUN_14960bad6 body=474 status=ok
// SIG undefined FUN_14960bad6(void)

void FUN_14960bad6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14960bcb2 FUN_14960bcb2 body=52 status=ok
// SIG undefined FUN_14960bcb2(void)

void FUN_14960bcb2(longlong *param_1)

{
  FUN_14960bce6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14960bce6 FUN_14960bce6 body=89 status=ok
// SIG undefined FUN_14960bce6(void)

void FUN_14960bce6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14960bd40 FUN_14960bd40 body=52 status=ok
// SIG undefined FUN_14960bd40(void)

void FUN_14960bd40(longlong *param_1)

{
  FUN_14960bd74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14960bd74 FUN_14960bd74 body=89 status=ok
// SIG undefined FUN_14960bd74(void)

void FUN_14960bd74(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14960bdce FUN_14960bdce body=332 status=ok
// SIG undefined FUN_14960bdce(void)

undefined4 * FUN_14960bdce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14103a70c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_14103a3cc(param_1,uVar3,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
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
      FUN_14103a464(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960bf1c FUN_14960bf1c body=67 status=ok
// SIG undefined FUN_14960bf1c(void)

void FUN_14960bf1c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145d72414(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14960c0a4(param_1);
    return;
  }
  FUN_14960bf60(param_1);
  FUN_145d72414(param_1,0);
  return;
}



// FUNCTION 14960bf60 FUN_14960bf60 body=322 status=ok
// SIG undefined FUN_14960bf60(void)

void FUN_14960bf60(longlong *param_1)

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



// FUNCTION 14960c0a4 FUN_14960c0a4 body=477 status=ok
// SIG undefined FUN_14960c0a4(void)

void FUN_14960c0a4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14960c282 FUN_14960c282 body=332 status=ok
// SIG undefined FUN_14960c282(void)

undefined4 * FUN_14960c282(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14960c3d0(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(int *)(local_40 + 2) = (int)puVar1[1];
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14960c4b6(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14960c0a4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960c3d0 FUN_14960c3d0 body=229 status=ok
// SIG undefined FUN_14960c3d0(void)

int * FUN_14960c3d0(longlong *param_1,int *param_2)

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



// FUNCTION 14960c4b6 FUN_14960c4b6 body=137 status=ok
// SIG undefined FUN_14960c4b6(void)

undefined8 FUN_14960c4b6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14960c540((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14960c540 FUN_14960c540 body=114 status=ok
// SIG undefined FUN_14960c540(void)

void FUN_14960c540(longlong *param_1,int param_2)

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



// FUNCTION 14960c5b2 FUN_14960c5b2 body=458 status=ok
// SIG undefined FUN_14960c5b2(void)

/* WARNING: Removing unreachable block (ram,0x00014960c693) */

void FUN_14960c5b2(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  iVar2 = (**(code **)(**(longlong **)(param_3 + 0x208) + 0xa0))();
  if (0 < iVar2) {
    iVar2 = -1;
    iVar7 = 0;
    do {
      FUN_140002266(&local_58,L"UV %d",iVar7);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar4 = *param_2;
      lVar10 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar4 + lVar10) = 0;
      *(undefined8 *)(lVar4 + lVar10) = local_58;
      *(undefined4 *)(lVar4 + 8 + lVar10) = (undefined4)local_50;
      *(undefined4 *)(lVar4 + 0xc + lVar10) = local_50._4_4_;
      local_50 = 0;
      local_58 = 0;
      lVar4 = (longlong)((int)param_2[1] + -1) * 0x10;
      iVar3 = (int)param_1[1];
      iVar1 = *(int *)(*param_2 + 8 + lVar4);
      if (iVar3 == iVar1) {
        if (1 < iVar3) {
          lVar10 = 0;
          while( true ) {
            uVar5 = *(ushort *)(*param_1 + lVar10);
            uVar6 = (ulonglong)uVar5;
            uVar8 = *(ushort *)(*(longlong *)(*param_2 + lVar4) + lVar10);
            if (uVar5 != uVar8) break;
            if (uVar5 == 0) goto LAB_14960c716;
LAB_14960c6d9:
            lVar10 = lVar10 + 2;
          }
          if ((uVar8 | uVar5) < 0x80) {
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_14960c6d9;
          }
          if (uVar5 != uVar8) goto LAB_14960c719;
        }
LAB_14960c716:
        iVar2 = iVar7;
      }
      else if (iVar1 + iVar3 == 1) goto LAB_14960c716;
LAB_14960c719:
      iVar7 = iVar7 + 1;
      iVar3 = (**(code **)(**(longlong **)(param_3 + 0x208) + 0xa0))();
    } while (iVar7 < iVar3);
    if (iVar2 != -1) goto LAB_14960c755;
  }
  iVar2 = *(int *)((undefined8 *)*param_2 + 1);
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  FUN_1402980a2(param_1,*(undefined8 *)*param_2,iVar7);
LAB_14960c755:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960c77d FUN_14960c77d body=437 status=ok
// SIG undefined FUN_14960c77d(void)

undefined8 FUN_14960c77d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_358 [32];
  longlong local_338 [2];
  undefined1 local_328 [56];
  undefined8 uStack_2f0;
  undefined8 uStack_2d0;
  undefined1 local_2c0 [544];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  DAT_14c7677a8 = 1;
  FUN_148506727(local_2c0,param_2,&DAT_14c7677a0);
  FUN_1485063a5(local_328,param_2);
  FUN_148506417(local_338,param_2,0);
  uVar1 = FUN_1484e47e5(param_1);
  FUN_14851b11a(uVar1,param_3,&DAT_14c846480);
  FUN_148558526(uVar1,0);
  uStack_2f0 = 0;
  uStack_2d0 = 0;
  FUN_14851b91a(uVar1,local_328);
  FUN_14851b65c(uVar1,2);
  FUN_14851c290(uVar1,local_2c0);
  FUN_14851b480(uVar1,local_338);
  FUN_14851bab8(uVar1,1);
  if (local_338[0] != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(local_2c0);
  if ((local_a0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960c933 FUN_14960c933 body=65 status=ok
// SIG undefined FUN_14960c933(void)

undefined8 FUN_14960c933(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    uVar1 = FUN_145b74dd8();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x28))(plVar2), lVar3 != 0))
    {
      return *(undefined8 *)(lVar3 + 0xa8);
    }
  }
  return 0;
}



// FUNCTION 14960c9a9 FUN_14960c9a9 body=148 status=ok
// SIG undefined FUN_14960c9a9(void)

undefined8 FUN_14960c9a9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145bab7b0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960ca3e FUN_14960ca3e body=349 status=ok
// SIG undefined FUN_14960ca3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14960ca3e(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc20180) {
    FUN_144b3d300(&DAT_14cc20180);
    if (DAT_14cc20180 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc20170 = (undefined *)0x0;
      _DAT_14cc2017c = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc20178 = local_48;
      FUN_1484d23fc(&DAT_14cc20148,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc20148;
        if (DAT_14cc20170 != (undefined *)0x0) {
          _Dst = DAT_14cc20170;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144555197);
      _Init_thread_footer(&DAT_14cc20180);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc20148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960cb9c FUN_14960cb9c body=2364 status=ok
// SIG undefined FUN_14960cb9c(void)

void FUN_14960cb9c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStack_218 [40];
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  longlong *local_1d0 [2];
  longlong local_1c0 [2];
  undefined8 local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  longlong *local_188 [2];
  longlong *local_178 [2];
  longlong *local_168;
  undefined4 local_160;
  undefined8 local_158;
  longlong *local_150;
  wchar_t **local_148;
  double *local_140;
  longlong local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined4 auStack_120 [2];
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1484416be();
  lVar10 = FUN_14960d4d9(param_1);
  if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar10);
  }
  param_1[0x18] = lVar10;
  (**(code **)(*param_1 + 0x308))(param_1,lVar10);
  plVar11 = (longlong *)param_1[0x18];
  FUN_140056680(&local_128,&DAT_149dfb77a);
  (**(code **)(*plVar11 + 0x2a8))(plVar11,param_1,&local_128);
  if (local_128 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_128 = L"BakeTransformWarning";
  auStack_120[0] = 0x14;
  plVar11 = &local_138;
  FUN_1446e940c(plVar11,&local_128);
  local_128 = L"UBakeTransformTool";
  auStack_120[0] = 0x12;
  FUN_1446e940c(&local_148,&local_128);
  FUN_140208bae(&local_168,&local_148,plVar11,
                L"WARNING: This Tool will Modify the selected StaticMesh Assets! If you do not wish to modify the original Assets, please make copies in the Content Browser first!"
               );
  cVar9 = FUN_1484ca7f2(param_1,param_1 + 0x19);
  if (cVar9 != '\0') {
    local_128 = L"BakeTransformSharedAssetsWarning";
    auStack_120[0] = 0x20;
    FUN_1446e940c(local_18c,&local_128);
    local_128 = L"UBakeTransformTool";
    auStack_120[0] = 0x12;
    FUN_1446e940c(local_190,&local_128);
    FUN_140208bae(local_188,local_190,local_18c,
                  L"WARNING: Multiple meshes in your selection use the same source asset!  This is not supported -- each asset can only have one baked transform."
                 );
    local_1a0 = local_168;
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 8))();
    }
    local_198 = local_160;
    FUN_1400b22c2(local_1c0,"{0}\n\n{1}");
    FUN_1411696b6(&local_1b0,local_1c0,1);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,4);
    FUN_14023423e(&local_118,&local_1a0);
    local_108 = 4;
    FUN_14023423e(local_f8,local_188);
    local_140 = &local_e8;
    local_148 = &local_128;
    FUN_14010d304(&local_138);
    local_158 = local_1b0;
    local_150 = local_1a8;
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
      UNLOCK();
    }
    plVar11 = &local_138;
    FUN_14010c016(local_178,&local_158);
    FUN_14007f2db(local_138,local_130);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    lVar10 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_128 + lVar10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_128 + lVar10) + 0x10))();
        *(undefined8 *)((longlong)&local_128 + lVar10) = 0;
        *(undefined4 *)((longlong)auStack_120 + lVar10) = 0;
      }
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != -0x10);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar2 = (int *)((longlong)local_1a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1a8 + 0x10))(local_1a8);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      (**(code **)(*local_1a0 + 0x10))();
    }
    if (local_188[0] != (longlong *)0x0) {
      (**(code **)(*local_188[0] + 0x10))();
    }
    FUN_140008f88(&local_168,local_178);
    if (local_178[0] != (longlong *)0x0) {
      (**(code **)(*local_178[0] + 0x10))();
    }
    if (local_1c0[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1[0x18] + 0xac) = 1;
  if (0 < (int)param_1[0x15]) {
    lVar10 = 0;
    bVar8 = 0;
    do {
      bVar7 = bVar8;
      uVar13 = (undefined4)*(undefined8 *)(param_1[0x14] + lVar10 * 8);
      FUN_1485063a5();
      if (*(char *)(param_1[0x18] + 0xac) == '\x01') {
        lVar17 = -(ulonglong)
                  (9.99999993922529e-09 <
                  ABS((double)CONCAT44(auStack_120[1],auStack_120[0]) - DAT_14c8463d8));
        auVar6._8_4_ = (int)lVar17;
        auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)local_128 - DAT_14c8463d0));
        auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
        uVar14 = movmskpd(uVar13,auVar6);
        lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110 - DAT_14c8463e8));
        auVar5._8_4_ = (int)lVar17;
        auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118 - DAT_14c8463e0));
        auVar5._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
        iVar15 = movmskpd((int)plVar11,auVar5);
        bVar12 = true;
        uVar16 = iVar15 << 2 | uVar14;
        plVar11 = (longlong *)(ulonglong)uVar16;
        if (uVar16 != 0) {
          auVar4._8_8_ = -(ulonglong)
                          (9.99999993922529e-09 <
                          ABS((double)CONCAT44(auStack_120[1],auStack_120[0]) + DAT_14c8463d8));
          auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS((double)local_128 + DAT_14c8463d0))
          ;
          uVar14 = movmskpd(uVar14,auVar4);
          auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_110 + DAT_14c8463e8));
          auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_118 + DAT_14c8463e0));
          iVar15 = movmskpd(uVar16,auVar3);
          uVar14 = iVar15 << 2 | uVar14;
          plVar11 = (longlong *)(ulonglong)uVar14;
          if (((uVar14 != 0) && (bVar12 = false, ABS(local_e8 - dStack_e0) <= 9.999999747378752e-05)
              ) && (ABS(local_e8 - local_d8) <= 9.999999747378752e-05)) {
            bVar12 = ABS(dStack_e0 - local_d8) <= 9.999999747378752e-05;
          }
        }
      }
      else {
        bVar12 = false;
      }
      *(bool *)(param_1[0x18] + 0xac) = bVar12;
      dVar18 = ABS(local_e8);
      if (ABS(dStack_e0) <= ABS(local_e8)) {
        dVar18 = ABS(dStack_e0);
      }
      if (ABS(local_d8) <= dVar18) {
        dVar18 = ABS(local_d8);
      }
      lVar10 = lVar10 + 1;
      bVar8 = bVar7 | dVar18 < 9.999999747378752e-05;
    } while (lVar10 < (int)param_1[0x15]);
    if ((bool)(bVar7 | dVar18 < 9.999999747378752e-05)) {
      local_128 = L"BakeTransformWithZeroScale";
      auStack_120[0] = 0x1a;
      FUN_1446e940c(local_18c,&local_128);
      local_128 = L"UBakeTransformTool";
      auStack_120[0] = 0x12;
      FUN_1446e940c(local_190,&local_128);
      FUN_140208bae(local_1d0,local_190,local_18c,
                    L"WARNING: Baking a zero scale in any dimension will permanently flatten the asset."
                   );
      local_1e0 = local_168;
      if (local_168 != (longlong *)0x0) {
        (**(code **)(*local_168 + 8))();
      }
      local_1d8 = local_160;
      FUN_1400b22c2(local_1c0,"{0}\n\n{1}");
      FUN_1411696b6(&local_1f0,local_1c0,1);
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,4);
      FUN_14023423e(&local_118,&local_1e0);
      local_108 = 4;
      FUN_14023423e(local_f8,local_1d0);
      local_140 = &local_e8;
      local_148 = &local_128;
      FUN_14010d304(&local_138);
      local_158 = local_1f0;
      local_150 = local_1e8;
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_178,&local_158,&local_138);
      FUN_14007f2db(local_138,local_130);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      lVar10 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_128 + lVar10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_128 + lVar10) + 0x10))();
          *(undefined8 *)((longlong)&local_128 + lVar10) = 0;
          *(undefined4 *)((longlong)auStack_120 + lVar10) = 0;
        }
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != -0x10);
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1e8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1e8 + 0x10))(local_1e8);
          }
        }
      }
      if (local_1e0 != (longlong *)0x0) {
        (**(code **)(*local_1e0 + 0x10))();
      }
      if (local_1d0[0] != (longlong *)0x0) {
        (**(code **)(*local_1d0[0] + 0x10))();
      }
      FUN_140008f88(&local_168,local_178);
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_1c0[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar11 + 0x340))(plVar11,&local_168,3);
  local_128 = L"ToolName";
  auStack_120[0] = 8;
  FUN_1446e940c(&local_138,&local_128);
  local_128 = L"UBakeTransformTool";
  auStack_120[0] = 0x12;
  FUN_1446e940c(&local_148,&local_128);
  FUN_140208bae(&local_128,&local_148,&local_138,L"Bake Transform");
  (**(code **)(*param_1 + 0x370))(param_1,&local_128);
  if (local_128 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_128 + 0x10))();
  }
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_128 = L"OnStartTool";
  auStack_120[0] = 0xb;
  FUN_1446e940c(&local_138,&local_128);
  local_128 = L"UBakeTransformTool";
  auStack_120[0] = 0x12;
  FUN_1446e940c(&local_148,&local_128);
  FUN_140208bae(&local_128,&local_148,&local_138,
                L"This Tool applies the current Rotation and/or Scaling of the object\'s Transform to the underlying mesh Asset."
               );
  (**(code **)(*plVar11 + 0x340))(plVar11,&local_128,2);
  if (local_128 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_128 + 0x10))();
  }
  if (local_168 != (longlong *)0x0) {
    (**(code **)(*local_168 + 0x10))();
  }
  if ((local_c0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960d4d9 FUN_14960d4d9 body=148 status=ok
// SIG undefined FUN_14960d4d9(void)

undefined8 FUN_14960d4d9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f959e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960d56e FUN_14960d56e body=128 status=ok
// SIG undefined FUN_14960d56e(void)

void FUN_14960d56e(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x01') {
    FUN_14960d5f0(param_1);
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  FUN_140056680(local_30,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960d5f0 FUN_14960d5f0 body=5779 status=ok
// SIG undefined FUN_14960d5f0(void)

void FUN_14960d5f0(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  double *pdVar2;
  undefined4 *puVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  wchar_t **ppwVar16;
  undefined8 *puVar17;
  double dVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar31;
  double dVar30;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_4e8 [32];
  undefined1 local_4c8;
  double local_4c0;
  double local_4b8;
  undefined4 *local_4b0;
  double local_4a8;
  undefined8 uStack_4a0;
  double local_490;
  undefined1 local_481;
  undefined4 *local_480;
  int local_478;
  undefined4 uStack_474;
  double local_470;
  ulonglong local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  double local_440;
  undefined8 uStack_438;
  undefined4 local_430;
  undefined4 local_42c;
  wchar_t *local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  double dStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  double local_368;
  longlong lStack_360;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  local_3d8 = 0;
  uStack_3d0 = 0;
  if ((int)param_1[0x15] < 1) {
    local_458 = 0;
    uStack_450 = 0;
    local_468 = 0;
    uStack_460 = 0;
  }
  else {
    lVar11 = 0;
    do {
      local_468 = local_468 & 0xffffffffffffff00;
      param_4 = CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(param_1[0x18] + 0xa8)) ^ 1;
      local_4c8 = 1;
      FUN_1485064b0(&local_480,*(undefined8 *)(param_1[0x14] + lVar11 * 8),&local_468,param_4);
      if (1 < local_478) {
        lVar14 = 1;
        do {
          local_3b8 = (wchar_t *)CONCAT71(local_3b8._1_7_,(undefined1)local_468);
          local_3b8 = (wchar_t *)CONCAT44(local_480[lVar14],(undefined4)local_3b8);
          dStack_3b0 = (double)((ulonglong)dStack_3b0 & 0xffffffffffffff00);
          FUN_14850658d(*(undefined8 *)(param_1[0x14] + lVar11 * 8),&local_3b8);
          lVar14 = lVar14 + 1;
        } while (lVar14 < local_478);
      }
      local_3b8 = (wchar_t *)CONCAT71(local_3b8._1_7_,(undefined1)local_468);
      local_3b8 = (wchar_t *)CONCAT44(*local_480,(undefined4)local_3b8);
      dStack_3b0 = (double)((ulonglong)dStack_3b0 & 0xffffffffffffff00);
      lVar14 = FUN_14850658d(*(undefined8 *)(param_1[0x14] + lVar11 * 8),&local_3b8);
      uVar22 = uStack_3d0;
      lVar9 = (longlong)*(int *)(param_1[0x19] + lVar11 * 4);
      if (lVar9 < lVar11) {
        lVar9 = lVar9 * 0x38;
        local_3b8 = *(wchar_t **)(local_3d8 + lVar9);
        dStack_3b0 = ((double *)(local_3d8 + lVar9))[1];
        pdVar2 = (double *)(local_3d8 + 0x10 + lVar9);
        local_3a8 = *pdVar2;
        uStack_3a0 = pdVar2[1];
        pdVar2 = (double *)(local_3d8 + 0x20 + lVar9);
        local_398 = *pdVar2;
        dStack_390 = pdVar2[1];
        local_388 = *(double *)(local_3d8 + 0x30 + lVar9);
        lVar14 = (longlong)(int)uStack_3d0;
        uVar8 = (int)uStack_3d0 + 1;
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar8);
        if (uStack_3d0._4_4_ < uVar8) {
          FUN_140555802(&local_3d8,uVar22 & 0xffffffff);
        }
        lVar14 = lVar14 * 0x38;
        *(double *)(local_3d8 + 0x30 + lVar14) = local_388;
        pdVar2 = (double *)(local_3d8 + 0x20 + lVar14);
        *pdVar2 = local_398;
        pdVar2[1] = dStack_390;
        pdVar2 = (double *)(local_3d8 + 0x10 + lVar14);
        *pdVar2 = local_3a8;
        pdVar2[1] = uStack_3a0;
        *(double *)(local_3d8 + lVar14) = (double)local_3b8;
        ((double *)(local_3d8 + lVar14))[1] = dStack_3b0;
      }
      else {
        FUN_1485063a5(&local_3b8,*(undefined8 *)(param_1[0x14] + lVar11 * 8));
        local_428 = local_3b8;
        dStack_420 = dStack_3b0;
        local_418 = local_3a8;
        dStack_410 = uStack_3a0;
        local_3f0 = dStack_378;
        dStack_3e8 = dStack_370;
        local_3e0 = local_368;
        local_3f8 = DAT_14c8464f0;
        local_408 = DAT_14c8464e0;
        dStack_400 = DAT_14c8464e8;
        dVar18 = *(double *)((longlong)*(double *)(lVar14 + 0x50) + 0x80);
        if (dVar18 == 0.0) {
          dVar18 = *(double *)(lVar14 + 0x50);
        }
        local_3b8 = (wchar_t *)&DAT_100000000;
        local_3a8 = 2.12199579047121e-314;
        uStack_3a0 = (double)((ulonglong)uStack_3a0 & 0xffffffff00000000);
        dStack_3b0 = dVar18;
        if (*(int *)((longlong)dVar18 + 0x18) != 0) {
          FUN_1449c0562(&local_3b8);
        }
        uStack_438 = local_3a8;
        local_430 = (undefined4)uStack_3a0;
        local_42c = uStack_3a0._4_4_;
        local_448 = (undefined8 *)local_3b8;
        local_440 = dStack_3b0;
        iVar21 = *(int *)((longlong)dVar18 + 0x18);
        local_3b8 = (wchar_t *)CONCAT44(1 << ((byte)iVar21 & 0x1f),iVar21 >> 5);
        local_3a8 = (double)CONCAT44(iVar21,-1 << ((byte)iVar21 & 0x1f));
        uStack_3a0 = (double)(CONCAT44(uStack_3a0._4_4_,iVar21) & 0xffffffffffffffe0);
        dStack_3b0 = dVar18;
        if (*(int *)((longlong)dVar18 + 0x18) != iVar21) {
          FUN_1449c0562(&local_3b8);
          iVar21 = local_3a8._4_4_;
        }
        dVar18 = dStack_3b0;
        if (local_440 == dStack_3b0 && uStack_438._4_4_ == iVar21) {
          dVar37 = 0.0;
          uVar13 = 0;
          dVar27 = 0.0;
          dVar28 = 0.0;
          dVar40 = 0.0;
          dVar38 = 0.0;
          dVar26 = 0.0;
        }
        else {
          bVar12 = true;
          dVar37 = 0.0;
          dVar32 = 0.0;
          dVar33 = 0.0;
          dVar30 = 0.0;
          dVar39 = 0.0;
          dVar34 = 0.0;
          do {
            iVar6 = uStack_438._4_4_;
            if (*(int *)((longlong)local_440 + 0x18) <= uStack_438._4_4_) {
              iVar6 = -1;
            }
            plVar7 = *(longlong **)(*(longlong *)(lVar14 + 0xf8) + 0x30);
            plVar10 = (longlong *)(*(longlong *)(lVar14 + 0xf8) + 0x18);
            if (plVar7 != (longlong *)0x0) {
              plVar10 = plVar7;
            }
            lVar9 = (longlong)(iVar6 * (int)plVar10[2]);
            dStack_3b0 = (double)CONCAT44(dStack_3b0._4_4_,
                                          *(undefined4 *)(*plVar10 + 8 + lVar9 * 0xc));
            local_3b8 = *(wchar_t **)(*plVar10 + lVar9 * 0xc);
            FUN_14960ec84(&local_428,&local_458,&local_3b8);
            dVar25 = (double)(float)uStack_450;
            dVar38 = (double)local_458._4_4_;
            dVar40 = (double)(float)local_458;
            dVar26 = dVar25;
            dVar28 = dVar25;
            dVar27 = dVar38;
            dVar4 = dVar40;
            if (!bVar12) {
              if (dVar40 <= dVar32) {
                dVar32 = dVar40;
              }
              if (dVar38 <= dVar30) {
                dVar30 = dVar38;
              }
              if (dVar25 <= dVar33) {
                dVar33 = dVar25;
              }
              if (dVar37 <= dVar40) {
                dVar37 = dVar40;
              }
              if (dVar34 <= dVar38) {
                dVar34 = dVar38;
              }
              dVar40 = dVar32;
              dVar38 = dVar30;
              dVar26 = dVar33;
              dVar28 = dVar39;
              dVar27 = dVar34;
              dVar4 = dVar37;
              if (dVar39 <= dVar25) {
                dVar28 = dVar25;
              }
            }
            dVar37 = dVar4;
            uStack_438 = (double)CONCAT44(uStack_438._4_4_,(uint)uStack_438 & ~local_448._4_4_);
            FUN_1449c0562(&local_448);
            bVar12 = false;
            dVar32 = dVar40;
            dVar33 = dVar26;
            dVar30 = dVar38;
            dVar39 = dVar28;
            dVar34 = dVar27;
          } while (local_440 != dVar18 || uStack_438._4_4_ != iVar21);
          uVar13 = 1;
        }
        uVar22 = uStack_3d0;
        lVar14 = (longlong)(int)uStack_3d0;
        uVar8 = (int)uStack_3d0 + 1;
        uStack_3d0 = CONCAT44(uStack_3d0._4_4_,uVar8);
        if (uStack_3d0._4_4_ < uVar8) {
          FUN_140555802(&local_3d8,uVar22 & 0xffffffff);
        }
        lVar14 = lVar14 * 0x38;
        *(double *)(local_3d8 + lVar14) = dVar40;
        *(double *)(local_3d8 + 8 + lVar14) = dVar38;
        *(double *)(local_3d8 + 0x10 + lVar14) = dVar26;
        *(double *)(local_3d8 + 0x18 + lVar14) = dVar37;
        *(double *)(local_3d8 + 0x20 + lVar14) = dVar27;
        *(double *)(local_3d8 + 0x28 + lVar14) = dVar28;
        *(undefined1 *)(local_3d8 + 0x30 + lVar14) = uVar13;
      }
      if (local_480 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x15]);
    local_458 = 0;
    uStack_450 = 0;
    local_468 = 0;
    uStack_460 = 0;
    if (0 < (int)param_1[0x15]) {
      lVar11 = 0;
      do {
        FUN_1485063a5(&local_3b8,*(undefined8 *)(param_1[0x14] + lVar11 * 8));
        dVar27 = dStack_370;
        dVar18 = dStack_378;
        dVar28 = uStack_3a0;
        dVar26 = local_3a8;
        dVar38 = dStack_3b0;
        dVar40 = (double)local_3b8;
        uVar22 = uStack_450;
        dStack_380 = dStack_378;
        dStack_378 = dStack_370;
        dStack_370 = local_368;
        lVar14 = (longlong)*(int *)(param_1[0x19] + lVar11 * 4);
        if (lVar14 < lVar11) {
          lVar14 = lVar14 * 0x50;
          local_4a8 = *(double *)(local_458 + lVar14);
          dVar18 = *(double *)(local_458 + 8 + lVar14);
          dVar40 = *(double *)(local_458 + 0x10 + lVar14);
          dVar38 = *(double *)(local_458 + 0x18 + lVar14);
          puVar3 = *(undefined4 **)(local_458 + 0x20 + lVar14);
          dVar26 = *(double *)(local_458 + 0x28 + lVar14);
          dVar28 = *(double *)(local_458 + 0x30 + lVar14);
          dVar27 = *(double *)(local_458 + 0x38 + lVar14);
          dVar37 = *(double *)(local_458 + 0x40 + lVar14);
          dVar32 = *(double *)(local_458 + 0x48 + lVar14);
          lVar14 = (longlong)(int)(float)uStack_450;
          uVar8 = (int)(float)uStack_450 + 1;
          uStack_450 = CONCAT44(uStack_450._4_4_,uVar8);
          if (uStack_450._4_4_ < uVar8) {
            uStack_4a0 = 0;
            FUN_1485c29b8(&local_458,uVar22 & 0xffffffff);
          }
          lVar14 = lVar14 * 0x50;
          *(double *)(local_458 + lVar14) = local_4a8;
          *(double *)(local_458 + 8 + lVar14) = dVar18;
          *(double *)(local_458 + 0x10 + lVar14) = dVar40;
          *(double *)(local_458 + 0x18 + lVar14) = dVar38;
          *(undefined4 **)(local_458 + 0x20 + lVar14) = puVar3;
          *(double *)(local_458 + 0x28 + lVar14) = dVar26;
          *(double *)(local_458 + 0x30 + lVar14) = dVar28;
          *(double *)(local_458 + 0x38 + lVar14) = dVar27;
          *(double *)(local_458 + 0x40 + lVar14) = dVar37;
          *(double *)(local_458 + 0x48 + lVar14) = dVar32;
          uVar22 = -(ulonglong)(-dVar27 <= dVar27);
          uVar23 = -(ulonglong)(-dVar37 <= dVar37);
          uVar24 = -(ulonglong)(-dVar32 <= dVar32);
          dStack_370 = (double)(-(ulonglong)
                                 (1e-08 < (double)(uVar24 & (ulonglong)dVar32 |
                                                  ~uVar24 & (ulonglong)-dVar32)) &
                               (ulonglong)(1.0 / dVar32)) * dStack_370;
          dStack_378 = (double)(-(ulonglong)
                                 (1e-08 < (double)(uVar23 & (ulonglong)dVar37 |
                                                  ~uVar23 & (ulonglong)-dVar37)) &
                               (ulonglong)(1.0 / dVar37)) * dStack_378;
          dStack_380 = (double)(-(ulonglong)
                                 (1e-08 < (double)(uVar22 & (ulonglong)dVar27 |
                                                  ~uVar22 & (ulonglong)-dVar27)) &
                               (ulonglong)(1.0 / dVar27)) * dStack_380;
          dVar33 = dVar38 * dVar38 + dVar40 * dVar40 + local_4a8 * local_4a8 + dVar18 * dVar18;
          dVar30 = 0.0;
          dVar32 = 0.0;
          dVar37 = 0.0;
          dVar27 = 0.0;
          if (0.0 < dVar33) {
            dVar33 = 1.0 / dVar33;
            dVar27 = dVar38 * dVar33;
            dVar37 = -dVar40 * dVar33;
            dVar32 = -dVar18 * dVar33;
            dVar30 = -local_4a8 * dVar33;
          }
          dVar38 = dVar30 * (double)local_3b8;
          dVar33 = dStack_3b0 * dVar32;
          dVar34 = local_3a8 * dVar37;
          dVar40 = local_3a8 * dVar32;
          dVar39 = local_3a8 * dVar30;
          dVar18 = (double)local_3b8 * dVar37;
          local_3a8 = ((double)local_3b8 * dVar32 + uStack_3a0 * dVar37 + dVar27 * local_3a8) -
                      dStack_3b0 * dVar30;
          local_418 = dVar28 * dStack_370;
          dStack_420 = dVar26 * dStack_378;
          local_428 = (wchar_t *)((double)puVar3 * dStack_380);
          local_4b8 = dVar26;
          local_4b0 = puVar3;
          local_4a8 = dVar28;
          local_3b8 = (wchar_t *)
                      ((dStack_3b0 * dVar37 + uStack_3a0 * dVar30 + dVar27 * (double)local_3b8) -
                      dVar40);
          dStack_3b0 = (dVar39 + uStack_3a0 * dVar32 + dVar27 * dStack_3b0) - dVar18;
          uStack_3a0 = ((uStack_3a0 * dVar27 - dVar38) - dVar33) - dVar34;
          FUN_146bed047(&local_448,&local_3b8,&local_428);
          local_398 = local_398 - (double)local_448;
          dStack_390 = dStack_390 - local_440;
          local_388 = local_388 - uStack_438;
        }
        else {
          local_490 = DAT_14c846520;
          local_4c0 = DAT_14c846518;
          lVar14 = param_1[0x18];
          uVar35 = 0;
          uVar36 = 0;
          uVar29 = 0;
          uVar31 = 0x3ff00000;
          dVar37 = 0.0;
          local_4a8 = 0.0;
          if (*(char *)(lVar14 + 0xa9) == '\x01') {
            local_3b8 = (wchar_t *)0x0;
            dStack_3b0 = 0.0;
            local_3a8 = 0.0;
            uStack_3a0 = 1.0;
            uVar35 = SUB84(dVar38,0);
            uVar36 = (undefined4)((ulonglong)dVar38 >> 0x20);
            uVar29 = SUB84(dVar28,0);
            uVar31 = (undefined4)((ulonglong)dVar28 >> 0x20);
            dVar37 = dVar26;
            local_4a8 = dVar40;
          }
          local_4b0 = (undefined4 *)CONCAT44(uVar31,uVar29);
          local_4b8 = (double)CONCAT44(uVar36,uVar35);
          uVar22 = -(ulonglong)(-local_368 <= local_368);
          uStack_438 = (double)(uVar22 & (ulonglong)local_368 | ~uVar22 & (ulonglong)-local_368);
          uVar22 = -(ulonglong)(-dVar27 <= dVar27);
          local_440 = (double)(uVar22 & (ulonglong)dVar27 | ~uVar22 & (ulonglong)-dVar27);
          uVar22 = -(ulonglong)(-dVar18 <= dVar18);
          local_448 = (undefined8 *)(uVar22 & (ulonglong)dVar18 | ~uVar22 & (ulonglong)-dVar18);
          lVar9 = 0;
          do {
            lVar1 = lVar9 + 1;
            lVar19 = 0;
            if (lVar9 != 2) {
              lVar19 = lVar1;
            }
            uVar22 = (ulonglong)((int)lVar9 - 1);
            dVar40 = (double)(&local_448)[lVar9] - (double)(&local_448)[lVar19];
            uVar23 = -(ulonglong)(-dVar40 <= dVar40);
            if (lVar9 == 0) {
              uVar22 = 2;
            }
            dVar38 = (double)(&local_448)[lVar9] - (double)(&local_448)[uVar22];
            uVar22 = -(ulonglong)(-dVar38 <= dVar38);
            (&local_428)[lVar9] =
                 (wchar_t *)
                 ((double)(~uVar22 & (ulonglong)-dVar38 | (ulonglong)dVar38 & uVar22) +
                 (double)(~uVar23 & (ulonglong)-dVar40 | (ulonglong)dVar40 & uVar23));
            lVar9 = lVar1;
          } while (lVar1 != 3);
          iVar21 = 0;
          lVar9 = 1;
          do {
            iVar6 = (int)lVar9;
            if ((double)(&local_428)[iVar21] < (double)(&local_428)[lVar9] ||
                (double)(&local_428)[iVar21] == (double)(&local_428)[lVar9]) {
              iVar6 = iVar21;
            }
            iVar21 = iVar6;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
          dVar40 = (double)(&local_448)[iVar21];
          if (dVar40 <= 1.1754943508222875e-38) {
            uVar22 = -(ulonglong)(-uStack_438 <= uStack_438);
            dVar40 = (double)(uVar22 & (ulonglong)uStack_438 | ~uVar22 & (ulonglong)-uStack_438);
            uVar22 = -(ulonglong)(-local_440 <= local_440);
            dVar26 = (double)(uVar22 & (ulonglong)local_440 | ~uVar22 & (ulonglong)-local_440);
            uVar22 = -(ulonglong)(-(double)local_448 <= (double)local_448);
            dVar38 = (double)(uVar22 & (ulonglong)local_448 |
                             ~uVar22 & (ulonglong)-(double)local_448);
            uVar22 = -(ulonglong)(dVar26 <= dVar38);
            dVar38 = (double)(~uVar22 & (ulonglong)dVar26 | uVar22 & (ulonglong)dVar38);
            uVar22 = -(ulonglong)(dVar40 <= dVar38);
            dVar40 = (double)(~uVar22 & (ulonglong)dVar40 | uVar22 & (ulonglong)dVar38);
          }
          if (*(char *)(lVar14 + 0xaa) == '\x01') {
            dVar38 = 1.0 / dVar40;
            dVar26 = local_368 * dVar38;
            dVar28 = dVar27 * dVar38;
            dVar18 = dVar38 * dVar18;
            dStack_380 = dVar40;
            dStack_378 = dVar40;
            dStack_370 = dVar40;
LAB_14960dff1:
            uVar29 = SUB84(dVar26,0);
            uVar31 = (undefined4)((ulonglong)dVar26 >> 0x20);
            dVar40 = dVar18;
          }
          else {
            uVar29 = SUB84(DAT_14c846520,0);
            uVar31 = (undefined4)((ulonglong)DAT_14c846520 >> 0x20);
            dVar40 = DAT_14c846510;
            dVar28 = DAT_14c846518;
            if (*(char *)(lVar14 + 0xaa) == '\0') {
              dStack_370 = DAT_14c846520;
              dStack_380 = DAT_14c846510;
              dStack_378 = DAT_14c846518;
              dVar26 = local_368;
              dVar28 = dVar27;
              goto LAB_14960dff1;
            }
          }
          dVar38 = DAT_14c8464f0;
          dVar26 = DAT_14c8464e8;
          dVar18 = DAT_14c8464e0;
          if (*(char *)(lVar14 + 0xab) == '\x01') {
            lVar14 = lVar11 * 0x38;
            local_418 = (*(double *)(local_3d8 + 0x10 + lVar14) +
                        *(double *)(local_3d8 + 0x28 + lVar14)) * 0.5;
            dStack_420 = (*(double *)(local_3d8 + 8 + lVar14) +
                         *(double *)(local_3d8 + 0x20 + lVar14)) * 0.5;
            dVar27 = (*(double *)(local_3d8 + lVar14) + *(double *)(local_3d8 + 0x18 + lVar14)) *
                     0.5;
            dVar38 = DAT_14c8464f0 - local_418;
            dVar26 = DAT_14c8464e8 - dStack_420;
            dVar18 = DAT_14c8464e0 - dVar27;
            local_418 = local_418 * dStack_370;
            dStack_420 = dStack_420 * dStack_378;
            local_428 = (wchar_t *)(dVar27 * dStack_380);
            FUN_146bed047(&local_480,&local_3b8,&local_428);
            local_398 = local_398 + (double)local_480;
            dStack_390 = dStack_390 + (double)CONCAT44(uStack_474,local_478);
            local_388 = local_388 + local_470;
          }
          uVar22 = uStack_450;
          lVar14 = (longlong)(int)(float)uStack_450;
          uVar8 = (int)(float)uStack_450 + 1;
          uStack_450 = CONCAT44(uStack_450._4_4_,uVar8);
          if (uStack_450._4_4_ < uVar8) {
            FUN_1485c29b8(&local_458,uVar22 & 0xffffffff);
          }
          lVar14 = lVar14 * 0x50;
          *(double *)(local_458 + lVar14) = local_4a8;
          *(double *)(local_458 + 8 + lVar14) = local_4b8;
          *(double *)(local_458 + 0x10 + lVar14) = dVar37;
          *(undefined4 **)(local_458 + 0x18 + lVar14) = local_4b0;
          *(double *)(local_458 + 0x20 + lVar14) = dVar18;
          *(double *)(local_458 + 0x28 + lVar14) = dVar26;
          *(double *)(local_458 + 0x30 + lVar14) = dVar38;
          *(double *)(local_458 + 0x38 + lVar14) = dVar40;
          *(double *)(local_458 + 0x40 + lVar14) = dVar28;
          *(ulonglong *)(local_458 + 0x48 + lVar14) = CONCAT44(uVar31,uVar29);
        }
        uVar22 = uStack_460;
        lVar14 = (longlong)(int)uStack_460;
        uVar8 = (int)uStack_460 + 1;
        uStack_460 = CONCAT44(uStack_460._4_4_,uVar8);
        if (uStack_460._4_4_ < uVar8) {
          FUN_1485c29b8(&local_468,uVar22 & 0xffffffff);
        }
        puVar15 = &local_3b8;
        puVar17 = (undefined8 *)(lVar14 * 0x50 + local_468);
        for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar17 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar17 = puVar17 + 1;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[0x15]);
    }
  }
  lVar11 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_3b8 = L"BakeTransformToolTransactionName";
  dStack_3b0._0_4_ = 0x20;
  FUN_1446e940c(&local_428,&local_3b8);
  local_3b8 = L"UBakeTransformTool";
  dStack_3b0 = (double)CONCAT44(dStack_3b0._4_4_,0x12);
  FUN_1446e940c(&local_448,&local_3b8);
  pwVar20 = L"Bake Transforms";
  FUN_140208bae(&local_3b8,&local_448,&local_428,L"Bake Transforms");
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x10))(lVar11 + 0x28,&local_3b8);
  if (local_3b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_3b8 + 0x10))();
  }
  if ((int)param_1[0x15] < 1) {
    if (*(char *)(param_1[0x18] + 0xab) != '\x01') goto LAB_14960eb61;
    local_3b8 = (wchar_t *)((ulonglong)local_3b8 & 0xffffffff00000000);
    dStack_3b0 = 0.0;
    local_3a8 = 0.0;
    uStack_3a0 = 0.0;
    local_398 = 0.0;
  }
  else {
    uVar22 = 0;
    do {
      dVar18 = *(double *)(param_1[0x14] + uVar22 * 8);
      dVar40 = (double)FUN_1485062e8(dVar18);
      lVar14 = uVar22 * 0x50;
      puVar15 = (undefined8 *)(local_458 + lVar14);
      ppwVar16 = &local_428;
      for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
        *ppwVar16 = (wchar_t *)*puVar15;
        puVar15 = puVar15 + 1;
        ppwVar16 = ppwVar16 + 1;
      }
      if (uVar22 == *(uint *)(param_1[0x19] + uVar22 * 4)) {
        local_481 = 0;
        local_4c8 = 1;
        local_4c0 = dVar40;
        local_4a8 = dVar18;
        FUN_1485064b0(&local_480,*(undefined8 *)(param_1[0x14] + uVar22 * 8),&local_481,
                      CONCAT71((int7)((ulonglong)pwVar20 >> 8),*(undefined1 *)(param_1[0x18] + 0xa8)
                              ) ^ 1);
        local_4b8 = (double)(longlong)local_478;
        if (local_4b8 != 0.0) {
          local_4b0 = local_480;
          local_4b8 = (double)((longlong)local_4b8 << 2);
          dVar18 = 0.0;
          do {
            uVar29 = *(undefined4 *)((longlong)local_4b0 + (longlong)dVar18);
            local_448 = (undefined8 *)CONCAT71(local_448._1_7_,local_481);
            local_448 = (undefined8 *)CONCAT44(uVar29,(undefined4)local_448);
            local_440 = (double)((ulonglong)local_440 & 0xffffffffffffff00);
            FUN_1485066d8(&local_3b8,*(undefined8 *)(param_1[0x14] + uVar22 * 8),&local_448);
            local_440 = 0.0;
            uStack_438 = 0.0;
            dVar40 = *(double *)((longlong)local_368 + 0x80);
            if (*(double *)((longlong)local_368 + 0x80) == 0.0) {
              dVar40 = local_368;
            }
            local_448 = &local_3b8;
            FUN_146fa1f1e((longlong)dVar40 + 0x20,&local_3c0,DAT_14c99c0d0);
            local_440 = (double)CONCAT44(uStack_3bc,local_3c0);
            lVar11 = *(longlong *)(lStack_360 + 0x80);
            if (*(longlong *)(lStack_360 + 0x80) == 0) {
              lVar11 = lStack_360;
            }
            FUN_146fa06aa(lVar11 + 0x20,&local_3c0,DAT_14c99c628);
            uStack_438 = (double)CONCAT44(uStack_3bc,local_3c0);
            FUN_14960ed3f(&local_448,&local_428);
            if (local_3f0 * dStack_3e8 * local_3e0 < 0.0) {
              FUN_146f73132(&local_3b8);
            }
            local_3c0 = CONCAT31(local_3c0._1_3_,local_481);
            uStack_3bc = uVar29;
            FUN_148506a2a(local_4a8,&local_3b8,0,&local_3c0);
            FUN_145838e00(&local_3b8);
            dVar18 = (double)((longlong)dVar18 + 4);
          } while (local_4b8 != dVar18);
        }
        cVar5 = FUN_1485075e2(local_4c0,1);
        if (cVar5 != '\0') {
          local_3b8 = local_428;
          dStack_3b0 = dStack_420;
          local_3a8 = local_418;
          uStack_3a0 = dStack_410;
          local_398 = local_408;
          dStack_390 = dStack_400;
          local_388 = local_3f8;
          dStack_380 = 0.0;
          dStack_378 = local_3f0;
          dStack_370 = dStack_3e8;
          local_368 = local_3e0;
          lStack_360 = 0;
          FUN_148508a5e(local_4c0,&local_3b8);
        }
        uVar23 = uStack_450;
        dVar18 = local_4a8;
        lVar11 = (longlong)(int)(float)uStack_450;
        uVar8 = (int)(float)uStack_450 + 1;
        uStack_450 = CONCAT44(uStack_450._4_4_,uVar8);
        if (uStack_450._4_4_ < uVar8) {
          FUN_1485c29b8(&local_458,uVar23 & 0xffffffff);
        }
        ppwVar16 = &local_428;
        puVar15 = (undefined8 *)(lVar11 * 0x50 + local_458);
        for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar15 = *ppwVar16;
          ppwVar16 = ppwVar16 + 1;
          puVar15 = puVar15 + 1;
        }
        dVar40 = local_4c0;
        if (local_480 != (undefined4 *)0x0) {
          FUN_1400020a8();
          dVar40 = local_4c0;
        }
      }
      local_3b8 = *(wchar_t **)(local_468 + lVar14);
      dStack_3b0 = (double)((undefined8 *)(local_468 + lVar14))[1];
      pdVar2 = (double *)(local_468 + 0x10 + lVar14);
      local_3a8 = *pdVar2;
      uStack_3a0 = pdVar2[1];
      pdVar2 = (double *)(local_468 + 0x20 + lVar14);
      local_398 = *pdVar2;
      dStack_390 = pdVar2[1];
      local_388 = *(double *)(local_468 + 0x30 + lVar14);
      pdVar2 = (double *)(local_468 + 0x38 + lVar14);
      dStack_378 = *pdVar2;
      dStack_370 = pdVar2[1];
      local_368 = *(double *)(local_468 + 0x48 + lVar14);
      dStack_380 = 0.0;
      lStack_360 = 0;
      local_4c8 = 0;
      pwVar20 = (wchar_t *)0x0;
      FUN_140613f88(dVar40,&local_3b8,0,0);
      lVar11 = FUN_1485062af(dVar18);
      if (lVar11 != 0) {
        FUN_1405d0f74(lVar11);
      }
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < (longlong)(int)param_1[0x15]);
    if (*(char *)(param_1[0x18] + 0xab) == '\0') goto LAB_14960eb61;
    local_3b8 = (wchar_t *)((ulonglong)local_3b8 & 0xffffffff00000000);
    dStack_3b0 = 0.0;
    local_3a8 = 0.0;
    uStack_3a0 = 0.0;
    local_398 = 0.0;
    if (0 < (int)param_1[0x15]) {
      lVar11 = 0;
      do {
        lVar14 = FUN_1485062af(*(undefined8 *)(param_1[0x14] + lVar11 * 8));
        dVar18 = local_3a8;
        if (lVar14 != 0) {
          lVar9 = (longlong)(int)local_3a8;
          uVar8 = (int)local_3a8 + 1;
          local_3a8 = (double)CONCAT44(local_3a8._4_4_,uVar8);
          if (local_3a8._4_4_ < uVar8) {
            FUN_1447d05f2(&dStack_3b0,(ulonglong)dVar18 & 0xffffffff);
          }
          *(longlong *)((longlong)dStack_3b0 + lVar9 * 8) = lVar14;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[0x15]);
    }
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar7 + 0x350))(plVar7,&local_3b8);
  if (uStack_3a0 != 0.0) {
    FUN_1400020a8();
  }
  if (dStack_3b0 != 0.0) {
    FUN_1400020a8();
  }
LAB_14960eb61:
  lVar11 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
  if (local_468 != 0) {
    FUN_1400020a8();
  }
  if (local_458 != 0) {
    FUN_1400020a8();
  }
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14960ec84 FUN_14960ec84 body=186 status=ok
// SIG undefined FUN_14960ec84(void)

float * FUN_14960ec84(longlong param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (double)param_3[2] * *(double *)(param_1 + 0x48);
  local_48 = (double)param_3[1] * *(double *)(param_1 + 0x40);
  local_50 = (double)*param_3 * *(double *)(param_1 + 0x38);
  FUN_146bed047(&local_38,param_1);
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x28);
  *param_2 = (float)(local_38 + *(double *)(param_1 + 0x20));
  param_2[1] = (float)(local_30 + dVar2);
  param_2[2] = (float)(local_28 + dVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960ed3f FUN_14960ed3f body=250 status=ok
// SIG undefined FUN_14960ed3f(void)

void FUN_14960ed3f(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x50) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*param_1 + 0x50);
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = &LAB_14963f39c;
  local_70 = 0;
  local_68 = &local_40;
  local_60 = param_1;
  local_58 = param_2;
  local_48 = &local_60;
  FUN_1401f8d10(L"ParallelFor Task",*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x78),1);
  if (param_1[2] != 0) {
    local_40 = 0;
    local_38 = 0;
    local_50 = &LAB_14963f4dc;
    local_70 = 0;
    local_68 = &local_40;
    local_60 = param_1;
    local_58 = param_2;
    local_48 = &local_60;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1[2] + 0x10),1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960ee5e FUN_14960ee5e body=538 status=ok
// SIG undefined FUN_14960ee5e(void)

longlong FUN_14960ee5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = FUN_14960f079(*(undefined8 *)(param_2 + 8));
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  iVar5 = *(int *)(param_2 + 0x38);
  if ((longlong)iVar5 < 1) {
    if ((longlong)*(int *)(param_2 + 0x28) != 0) {
      plVar6 = *(longlong **)(param_2 + 0x20);
      plVar1 = plVar6 + *(int *)(param_2 + 0x28);
      do {
        lVar7 = *plVar6;
        lVar2 = lVar7 + 0x250;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar2;
        if (*(int *)(lVar7 + 0x268) == 0) {
          iVar5 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar5 = *(int *)(lVar7 + 0x268);
        }
        plVar8 = (longlong *)(lVar7 + 0x240);
        uStack_88 = CONCAT44(uStack_4c,uStack_50);
        local_90 = local_58;
        uVar3 = local_90;
        local_a0 = (undefined4)local_68;
        uStack_9c = local_68._4_4_;
        uStack_98 = (undefined4)uStack_60;
        uStack_94 = uStack_60._4_4_;
        local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        iVar4 = local_90._4_4_;
        local_a8 = plVar8;
        if ((local_90._4_4_ != iVar5) || (local_90 = uVar3, uStack_60 != lVar2)) {
          do {
            local_90 = uVar3;
            FUN_1445551a8(&local_80,*(undefined8 *)(*local_a8 + (longlong)iVar4 * 0x10));
            local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
            FUN_1449c0562(&local_a0);
            iVar4 = local_90._4_4_;
            uVar3 = local_90;
          } while (local_a8 != plVar8 ||
                   (CONCAT44(uStack_94,uStack_98) != lVar2 || local_90._4_4_ != iVar5));
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x30);
    lVar7 = 0;
    do {
      FUN_1445551a8(&local_80,*(undefined8 *)(lVar2 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar5 * 8 != lVar7);
  }
  lVar2 = local_b0;
  if ((longlong *)(local_b0 + 0xb0) == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(local_b0 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar2 + 0xb0) = local_78;
    *(undefined4 *)(lVar2 + 0xb8) = (undefined4)uStack_70;
    *(undefined4 *)(lVar2 + 0xbc) = uStack_70._4_4_;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14960f079 FUN_14960f079 body=148 status=ok
// SIG undefined FUN_14960f079(void)

undefined8 FUN_14960f079(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145bab984();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960f10e FUN_14960f10e body=505 status=ok
// SIG undefined FUN_14960f10e(void)

undefined8 FUN_14960f10e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar9 = *(int *)(param_2 + 0x38);
  if ((longlong)iVar9 < 1) {
    if ((longlong)*(int *)(param_2 + 0x28) == 0) {
      iVar10 = 0;
      uVar5 = 0;
    }
    else {
      plVar12 = *(longlong **)(param_2 + 0x20);
      local_98 = plVar12 + *(int *)(param_2 + 0x28);
      iVar10 = 0;
      do {
        lVar11 = *plVar12;
        lVar1 = lVar11 + 0x250;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        uVar7 = 0;
        local_60 = lVar1;
        if (*(int *)(lVar11 + 0x268) != 0) {
          FUN_1449c0562(&local_68);
          uVar7 = *(uint *)(lVar11 + 0x268);
        }
        plVar8 = (longlong *)(lVar11 + 0x240);
        local_78 = local_58;
        uVar2 = local_78;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
        uVar5 = (ulonglong)local_78._4_4_;
        local_90 = plVar8;
        local_78 = uVar2;
        if ((local_78._4_4_ != uVar7) || (iVar9 = 0, local_60 != lVar1)) {
          iVar9 = 0;
          do {
            lVar11 = *(longlong *)(*local_90 + (longlong)(int)uVar5 * 0x10);
            if (lVar11 == 0) {
LAB_14960f2a2:
              lVar11 = 0;
            }
            else {
              lVar6 = FUN_144a799b0();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_14960f2a2;
            }
            bVar3 = FUN_1484ce1c5(lVar11);
            iVar9 = iVar9 + (uint)bVar3;
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            uVar5 = (ulonglong)local_78._4_4_;
          } while (local_90 != plVar8 || (local_80 != lVar1 || local_78._4_4_ != uVar7));
        }
        iVar10 = iVar10 + iVar9;
        plVar12 = plVar12 + 1;
      } while (plVar12 != local_98);
    }
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x30);
    lVar11 = 0;
    iVar10 = 0;
    do {
      lVar6 = *(longlong *)(lVar1 + lVar11);
      if (lVar6 == 0) {
LAB_14960f16d:
        lVar6 = 0;
      }
      else {
        lVar4 = FUN_144a799b0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_14960f16d;
      }
      bVar3 = FUN_1484ce1c5(lVar6);
      uVar5 = 0;
      iVar10 = iVar10 + (uint)bVar3;
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar9 * 8 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < iVar10);
}



// FUNCTION 14960f308 FUN_14960f308 body=672 status=ok
// SIG undefined FUN_14960f308(void)

void FUN_14960f308(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  wchar_t *local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1484416be();
  plVar1 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x15] = (longlong)plVar1;
  FUN_140056680(&local_88,L"ConvertMeshesTool");
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cac4(param_1[0x15]);
  plVar1 = (longlong *)FUN_14960f5a9(param_1);
  if ((plVar1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar1);
  }
  param_1[0x14] = (longlong)plVar1;
  FUN_140056680(&local_88,&DAT_149dfb77a);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1[0x14] + 0xa9) = *(byte *)(param_1[0x15] + 0xd0) ^ 1;
  local_68 = 0;
  local_58 = &PTR_LAB_14bd8cdb0;
  local_78 = FUN_14455aa84;
  local_50 = param_1;
  FUN_1484c5b30(param_1[0x15] + 0x28,param_1[0x15] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x15]);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x14]);
  local_88 = L"ToolName";
  local_80 = 8;
  FUN_1446e940c(local_8c,&local_88);
  local_88 = L"UConvertMeshesTool";
  local_80 = 0x12;
  FUN_1446e940c(local_90,&local_88);
  FUN_140208bae(&local_88,local_90,local_8c,L"Convert");
  (**(code **)(*param_1 + 0x370))(param_1,&local_88);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_88 = L"OnStartTool";
  local_80 = 0xb;
  FUN_1446e940c(local_8c,&local_88);
  local_88 = L"UConvertMeshesTool";
  local_80 = 0x12;
  FUN_1446e940c(local_90,&local_88);
  FUN_140208bae(&local_88,local_90,local_8c,L"Convert Meshes to a different Mesh Object type");
  (**(code **)(*plVar1 + 0x340))(plVar1,&local_88,2);
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960f5a9 FUN_14960f5a9 body=148 status=ok
// SIG undefined FUN_14960f5a9(void)

undefined8 FUN_14960f5a9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f968a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960f63e FUN_14960f63e body=72 status=ok
// SIG undefined FUN_14960f63e(void)

undefined8 FUN_14960f63e(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 == 0) {
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar4 = (longlong)iVar1 * 8;
    do {
      lVar4 = lVar4 + -8;
      uVar2 = FUN_144729dda(lVar3);
      if ((char)uVar2 == '\0') {
        return uVar2;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 != 0);
  }
  return uVar2;
}



// FUNCTION 14960f68a FUN_14960f68a body=117 status=ok
// SIG undefined FUN_14960f68a(void)

void FUN_14960f68a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14960f700(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960f700 FUN_14960f700 body=84 status=ok
// SIG undefined FUN_14960f700(void)

undefined8 * FUN_14960f700(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xe8);
  uVar2 = *(undefined8 *)(param_1 + 0xe0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14960f7a9 FUN_14960f7a9 body=148 status=ok
// SIG undefined FUN_14960f7a9(void)

undefined8 FUN_14960f7a9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f9776();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960f83e FUN_14960f83e body=142 status=ok
// SIG undefined FUN_14960f83e(void)

bool FUN_14960f83e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1484cb2dc();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = FUN_14455ab8e;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960f8ce FUN_14960f8ce body=81 status=ok
// SIG undefined FUN_14960f8ce(void)

undefined8 * FUN_14960f8ce(longlong param_1,undefined8 *param_2)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x140);
  memset(_Dst,0,0x140);
  FUN_14963f9da(_Dst);
  FUN_14960f920(*(undefined8 *)(param_1 + 8),_Dst);
  *param_2 = _Dst;
  return param_2;
}



// FUNCTION 14960f920 FUN_14960f920 body=671 status=ok
// SIG undefined FUN_14960f920(void)

void FUN_14960f920(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
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
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_2 + 0xe4) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xd5);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xa8);
  *(double *)(param_2 + 0x90) = (double)*(float *)(*(longlong *)(param_1 + 0x120) + 0xac);
  *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xb0);
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xb4);
  *(undefined1 *)(param_2 + 0xa0) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xb8);
  *(uint *)(param_2 + 0xa4) = (uint)*(byte *)(*(longlong *)(param_1 + 0x120) + 0xb9);
  *(double *)(param_2 + 0xa8) = (double)*(float *)(*(longlong *)(param_1 + 0x120) + 0xbc);
  *(undefined8 *)(param_2 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xb8) = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 0xd0);
  *(double *)(param_2 + 200) = (double)*(float *)(*(longlong *)(param_1 + 0x120) + 0xc4);
  *(double *)(param_2 + 0xd0) = (double)*(float *)(*(longlong *)(param_1 + 0x120) + 0xc0);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 200);
  *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xcc);
  *(undefined1 *)(param_2 + 0xc1) = *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0xcd);
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  lVar4 = *(longlong *)(param_1 + 0x188);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_2 + 0xf0);
  *(undefined8 *)(param_2 + 0xe8) = uVar3;
  *(longlong *)(param_2 + 0xf0) = lVar4;
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
  if (*(char *)(param_1 + 0x158) == '\x01') {
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x1b0);
  }
  lVar4 = *(longlong *)(param_1 + 0x1a0);
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1a8);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_2 + 0x100);
    *(longlong *)(param_2 + 0xf8) = lVar4;
    *(longlong *)(param_2 + 0x100) = lVar6;
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
    if (*(char *)(param_1 + 0x158) == '\x01') {
      *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x14);
    }
  }
  FUN_1485063a5(&local_88,*(undefined8 *)(param_1 + 0xa0));
  *(undefined4 *)(param_2 + 0x10) = local_88;
  *(undefined4 *)(param_2 + 0x14) = uStack_84;
  *(undefined4 *)(param_2 + 0x18) = uStack_80;
  *(undefined4 *)(param_2 + 0x1c) = uStack_7c;
  *(undefined4 *)(param_2 + 0x20) = local_78;
  *(undefined4 *)(param_2 + 0x24) = uStack_74;
  *(undefined4 *)(param_2 + 0x28) = uStack_70;
  *(undefined4 *)(param_2 + 0x2c) = uStack_6c;
  *(undefined4 *)(param_2 + 0x30) = local_68;
  *(undefined4 *)(param_2 + 0x34) = uStack_64;
  *(undefined4 *)(param_2 + 0x38) = uStack_60;
  *(undefined4 *)(param_2 + 0x3c) = uStack_5c;
  *(undefined8 *)(param_2 + 0x40) = local_58;
  *(undefined8 *)(param_2 + 0x48) = local_48;
  *(undefined8 *)(param_2 + 0x50) = uStack_40;
  *(undefined8 *)(param_2 + 0x58) = local_38;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14960fbc0 FUN_14960fbc0 body=53 status=ok
// SIG undefined FUN_14960fbc0(void)

undefined8 FUN_14960fbc0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x388))();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar1 = param_1[0x26];
    if (lVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x91));
    }
  }
  return uVar3;
}



// FUNCTION 14960fbf6 FUN_14960fbf6 body=4577 status=ok
// SIG undefined FUN_14960fbf6(void)

/* WARNING: Removing unreachable block (ram,0x000149610a8b) */
/* WARNING: Removing unreachable block (ram,0x00014961099b) */
/* WARNING: Removing unreachable block (ram,0x000149610b48) */

void FUN_14960fbf6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_758 [32];
  undefined8 local_738;
  undefined8 uStack_730;
  longlong **local_728;
  undefined8 local_720;
  longlong *local_718;
  undefined1 local_70c [4];
  void *local_708;
  int local_700;
  undefined4 local_6fc;
  code *local_6f8;
  longlong **local_6f0;
  longlong *local_6e8;
  undefined8 uStack_6e0;
  void *local_6d0;
  int local_6c8;
  longlong *local_6c0;
  code *local_6b8;
  undefined8 local_6b0;
  code *local_6a8;
  undefined8 local_698;
  undefined **local_688;
  longlong *local_680;
  code *local_668;
  undefined8 local_658;
  undefined **local_648;
  longlong *local_640;
  code *local_628;
  undefined8 local_618;
  undefined **local_608;
  longlong *local_600;
  code *local_5e8;
  undefined8 local_5d8;
  undefined **local_5c8;
  longlong *local_5c0;
  code *local_5a8;
  undefined8 local_598;
  undefined **local_588;
  longlong *local_580;
  code *local_568;
  undefined8 local_558;
  undefined **local_548;
  longlong *local_540;
  code *local_528;
  undefined8 local_518;
  undefined **local_508;
  longlong *local_500;
  code *local_4e8;
  undefined8 local_4d8;
  undefined **local_4c8;
  longlong *local_4c0;
  code *local_4a8;
  undefined8 local_498;
  undefined **local_488;
  longlong *local_480;
  code *local_468;
  undefined8 local_458;
  undefined **local_448;
  longlong *local_440;
  code *local_428;
  undefined8 local_418;
  undefined **local_408;
  longlong *local_400;
  code *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  longlong *local_3c0;
  code *local_3a8;
  undefined8 local_398;
  undefined **local_388;
  longlong *local_380;
  code *local_368;
  undefined8 local_358;
  undefined **local_348;
  longlong *local_340;
  undefined1 *local_328;
  undefined8 local_318;
  undefined **local_308;
  longlong *local_300;
  code *local_2e8;
  undefined8 local_2d8;
  undefined **local_2c8;
  longlong *local_2c0;
  undefined1 *local_2a8;
  undefined8 local_298;
  undefined **local_288;
  longlong *local_280;
  longlong *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_758;
  FUN_1484416be();
  FUN_148506417(&local_6d0,param_1[0x14],0);
  local_6b0 = (longlong **)((ulonglong)local_6b0._4_4_ << 0x20);
  local_6b8 = (code *)0x3e800000000;
  FUN_148506727(&local_268,param_1[0x14]);
  plVar6 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149fab260;
  FUN_146bffece(plVar6 + 2,&local_268);
  if (plVar6 == (longlong *)0x0) {
    local_718 = param_1 + 0x29;
    param_1[0x29] = 0x10;
    plVar10 = (longlong *)param_1[0x2a];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x2a] = 0;
LAB_14960fcdc:
      local_718 = param_1 + 0x29;
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_14960fd4e;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_718 = param_1 + 0x29;
    param_1[0x29] = (longlong)(plVar6 + 2);
    plVar10 = (longlong *)param_1[0x2a];
    if (plVar6 == plVar10) {
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x2a] = (longlong)plVar6;
      if (plVar10 != (longlong *)0x0) goto LAB_14960fcdc;
    }
LAB_14960fd4e:
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_141082778(&local_268);
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14aee5520;
  plVar6[6] = 0;
  *(undefined4 *)(plVar6 + 7) = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x44) = 0;
  plVar6[10] = 0;
  *(undefined4 *)(plVar6 + 0xb) = 0;
  if (plVar6 == (longlong *)0x0) {
    param_1[0x2c] = 0x10;
    plVar10 = (longlong *)param_1[0x2d];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x2d] = 0;
LAB_14960fdee:
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_14960fe56;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x2c] = (longlong)(plVar6 + 2);
    plVar10 = (longlong *)param_1[0x2d];
    if (plVar6 == plVar10) {
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x2d] = (longlong)plVar6;
      if (plVar10 != (longlong *)0x0) goto LAB_14960fdee;
    }
LAB_14960fe56:
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  local_6e8 = (longlong *)0x0;
  uStack_6e0 = 0;
  cVar4 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if (cVar4 == '\0') {
    if ((*(byte *)(param_1 + 0x2b) & 1) != 0) goto LAB_149610003;
    local_268 = (longlong *)*local_718;
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x3c0))(param_1);
    local_6f8 = FUN_14455aba2;
    local_6f0 = &local_268;
    local_268 = param_1;
    FUN_148385b4a(uVar7,param_1[0x29],&local_6f8,0);
    FUN_140619b9c(param_1[0x2c],&local_268);
    if (local_6e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_6e8 = local_268;
    uStack_6e0 = CONCAT44(uStack_25c,uStack_260);
    lVar8 = *local_718;
    plVar6 = (longlong *)FUN_14001cc68(0x5f0,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14bd8cdf0;
    local_738 = CONCAT71(local_738._1_7_,1);
    FUN_1482e14f4(plVar6 + 2,lVar8,&local_6e8,0xf);
    if (plVar6 == (longlong *)0x0) {
      param_1[0x2e] = 0x10;
      plVar10 = (longlong *)param_1[0x2f];
      if (plVar10 != (longlong *)0x0) {
        param_1[0x2f] = 0;
LAB_14960ff66:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar6 != (longlong *)0x0) goto LAB_14960ffdf;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      param_1[0x2e] = (longlong)(plVar6 + 2);
      plVar10 = (longlong *)param_1[0x2f];
      if (plVar6 == plVar10) {
        LOCK();
        plVar10 = plVar6 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      else {
        param_1[0x2f] = (longlong)plVar6;
        if (plVar10 != (longlong *)0x0) goto LAB_14960ff66;
      }
LAB_14960ffdf:
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    *(undefined1 *)(param_1 + 0x2b) = 1;
LAB_149610003:
    local_268 = (longlong *)(param_1[0x2e] + 8);
  }
  plVar6 = (longlong *)FUN_14001cc68(0x270,0x10);
  FUN_14964020e(plVar6,&local_268);
  if (plVar6 == (longlong *)0x0) {
    param_1[0x30] = 0x10;
    plVar10 = (longlong *)param_1[0x31];
    if (plVar10 == (longlong *)0x0) goto LAB_1496100e4;
    param_1[0x31] = 0;
LAB_149610061:
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1496100e4;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    param_1[0x30] = (longlong)(plVar6 + 2);
    plVar10 = (longlong *)param_1[0x31];
    if (plVar6 == plVar10) {
      LOCK();
      plVar10 = plVar6 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[0x31] = (longlong)plVar6;
      if (plVar10 != (longlong *)0x0) goto LAB_149610061;
    }
  }
  LOCK();
  plVar10 = plVar6 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1496100e4:
  plVar6 = (longlong *)FUN_149610dd8(param_1);
  if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar6);
  }
  param_1[0x24] = (longlong)plVar6;
  FUN_140056680(&local_268,&DAT_149dfb77a);
  (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_268);
  if (local_268 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x24]);
  FUN_1485063a5(&local_268,param_1[0x14]);
  FUN_148506321(param_1[0x14]);
  lVar8 = FUN_149610e6d(param_1);
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar8 + 0x30) = param_1;
  lVar9 = FUN_1484c5d32(lVar8);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  param_1[0x26] = lVar9;
  lVar11 = lVar8 + 0x28;
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  uVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_148504f74(lVar9,uVar7,lVar11);
  FUN_148558526(*(undefined8 *)(param_1[0x26] + 0x58),param_1[0x14]);
  FUN_1485054da(param_1[0x26],1,5);
  FUN_14851b91a(*(undefined8 *)(param_1[0x26] + 0x58),&local_268);
  FUN_14851b65c(*(undefined8 *)(param_1[0x26] + 0x58),1);
  FUN_14851bbe8(*(undefined8 *)(param_1[0x26] + 0x58),param_1[0x29],1,0xf);
  lVar8 = param_1[0x26];
  uVar7 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar7 = FUN_1485578f6(uVar7);
  _Src = local_6d0;
  local_708 = (void *)0x0;
  local_700 = local_6c8;
  if ((longlong)local_6c8 == 0) {
    local_6fc = 0;
  }
  else {
    FUN_1411312f2(&local_708,local_6c8,0);
    memcpy(local_708,_Src,(longlong)local_6c8 << 3);
  }
  FUN_1485053d2(lVar8,&local_708,uVar7,0);
  FUN_1485054ca(param_1[0x26],1);
  lVar8 = param_1[0x26];
  local_6b8 = (code *)0x0;
  local_6b0 = (longlong **)((ulonglong)local_6b0 & 0xffffffff00000000);
  FUN_1446efa72(&local_6b8,0,2,0x10);
  pcVar3 = local_6b8;
  local_6b0 = (longlong **)CONCAT44(local_6b0._4_4_,2);
  *(undefined ***)local_6b8 = &PTR_LAB_14ba263d0;
  uVar7 = FUN_144a3f946();
  *(undefined8 *)(pcVar3 + 0x10) = uVar7;
  *(undefined ***)pcVar3 = &PTR_FUN_14bd8ce10;
  *(longlong **)(pcVar3 + 0x18) = param_1;
  FUN_148f76e8e(lVar8 + 0x40,&local_6c0,&local_6b8);
  FUN_1449db362(&local_6b8);
  if ((char)param_1[0x2b] == '\x01') {
    uVar7 = FUN_1409ffe1d();
    lVar8 = FUN_1484e47e5(uVar7);
    if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar8);
    }
    param_1[0x28] = lVar8;
    uVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
    FUN_14851b11a(lVar8,uVar7,&local_268);
    FUN_148558526(param_1[0x28],param_1[0x14]);
    FUN_14851b480(param_1[0x28],&local_6d0);
    local_298 = 0;
    local_288 = &PTR_LAB_14bd8ce80;
    local_2a8 = &LAB_14455adb4;
    local_280 = param_1;
    FUN_14851b5ae(param_1[0x28]);
    FUN_14851b64a(param_1[0x28],0);
    FUN_14851b65c(param_1[0x28],1);
    FUN_14851bbe8(param_1[0x28],param_1[0x29],1,0xf);
  }
  lVar8 = FUN_1484ec096(param_1);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x27] = lVar8;
  uVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
  FUN_1484e0ce2(lVar8,uVar7,&local_268);
  local_2d8 = 0;
  local_2c8 = &PTR_LAB_14bd8cf00;
  local_2e8 = FUN_14455ae46;
  local_2c0 = param_1;
  FUN_149610f02(param_1[0x24] + 0x28,param_1[0x24] + 0xa8);
  local_318 = 0;
  local_308 = &PTR_LAB_14bd8cf20;
  local_328 = &LAB_14455aecc;
  local_300 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xd4);
  local_358 = 0;
  local_348 = &PTR_LAB_14bd8cf40;
  local_368 = FUN_14455af1c;
  local_340 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xac);
  local_398 = 0;
  local_388 = &PTR_LAB_14bd8cf60;
  local_3a8 = FUN_14455afa2;
  local_380 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xb0);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bd8cf80;
  local_3e8 = FUN_14455b028;
  local_3c0 = param_1;
  FUN_148f741f0(param_1[0x24] + 0x28,param_1[0x24] + 0xb4);
  local_418 = 0;
  local_408 = &PTR_LAB_14bd8cfa0;
  local_428 = FUN_14455b0ae;
  local_400 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xb8);
  local_458 = 0;
  local_448 = &PTR_LAB_14bd8cfc0;
  local_468 = FUN_14455b134;
  local_440 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xb9);
  local_498 = 0;
  local_488 = &PTR_LAB_14bd8cfe0;
  local_4a8 = FUN_14455b1ba;
  local_480 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xbc);
  local_4d8 = 0;
  local_4c8 = &PTR_LAB_14bd8d000;
  local_4e8 = FUN_14455b240;
  local_4c0 = param_1;
  FUN_148f741f0(param_1[0x24] + 0x28,param_1[0x24] + 0xd0);
  local_518 = 0;
  local_508 = &PTR_LAB_14bd8d020;
  local_528 = FUN_14455b2c6;
  local_500 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xc0);
  local_558 = 0;
  local_548 = &PTR_LAB_14bd8d040;
  local_568 = FUN_14455b34c;
  local_540 = param_1;
  FUN_1484de26e(param_1[0x24] + 0x28,param_1[0x24] + 0xc4);
  local_598 = 0;
  local_588 = &PTR_LAB_14bd8d060;
  local_5a8 = FUN_14455b3d2;
  local_580 = param_1;
  FUN_148f741f0(param_1[0x24] + 0x28,param_1[0x24] + 200);
  local_5d8 = 0;
  local_5c8 = &PTR_LAB_14bd8d080;
  local_5e8 = FUN_14455b458;
  local_5c0 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xcc);
  local_618 = 0;
  local_608 = &PTR_LAB_14bd8d0a0;
  local_628 = FUN_14455b4de;
  local_600 = param_1;
  FUN_1484c9b00(param_1[0x24] + 0x28,param_1[0x24] + 0xcd);
  lVar8 = FUN_148f7334e(param_1);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x25] = lVar8;
  FUN_14851d694(lVar8,param_1[0x29]);
  local_658 = 0;
  local_648 = &PTR_LAB_14bd8d0c0;
  local_668 = FUN_14455b564;
  local_640 = param_1;
  FUN_1484c9a28(param_1[0x25] + 0x28,param_1[0x25] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x25]);
  local_6b8 = FUN_14455b690;
  local_6c0 = param_1;
  local_6b0 = &local_6c0;
  FUN_14846e534(param_1[0x30]);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x25],*(int *)(param_1[0x24] + 0xa8) == 6);
  lVar8 = param_1[0x24];
  iVar5 = *(int *)(lVar8 + 0xec);
  FUN_1447a1747(*(undefined8 *)(lVar8 + 0xe0),*(undefined4 *)(lVar8 + 0xe8));
  *(undefined4 *)(lVar8 + 0xe8) = 0;
  if ((iVar5 < 0) && (*(int *)(lVar8 + 0xec) != 0)) {
    FUN_1408be2c4(lVar8 + 0xe0,0);
  }
  lVar8 = param_1[0x24];
  FUN_140056680(&local_6b8,L"Default");
  iVar5 = *(int *)(lVar8 + 0xe8);
  *(uint *)(lVar8 + 0xe8) = iVar5 + 1U;
  if (*(uint *)(lVar8 + 0xec) < iVar5 + 1U) {
    FUN_1447a1bd6((longlong *)(lVar8 + 0xe0),iVar5);
  }
  lVar8 = *(longlong *)(lVar8 + 0xe0);
  lVar9 = (longlong)iVar5 * 0x10;
  *(undefined8 *)(lVar8 + lVar9) = 0;
  *(code **)(lVar8 + lVar9) = local_6b8;
  *(undefined4 *)(lVar8 + 8 + lVar9) = (undefined4)local_6b0;
  *(uint *)(lVar8 + 0xc + lVar9) = local_6b0._4_4_;
  local_6b0 = (longlong **)0x0;
  local_6b8 = (code *)0x0;
  if ((*(longlong **)(*local_718 + 0x208) != (longlong *)0x0) &&
     (iVar5 = (**(code **)(**(longlong **)(*local_718 + 0x208) + 0xc0))(), 0 < iVar5)) {
    lVar8 = 0;
    do {
      local_6c0 = *(longlong **)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[0x29] + 0x208) + 0x60) + lVar8 * 8) + 8);
      lVar9 = param_1[0x24];
      FUN_1400021e4(&local_6c0,&local_6b8);
      iVar5 = *(int *)(lVar9 + 0xe8);
      *(uint *)(lVar9 + 0xe8) = iVar5 + 1U;
      if (*(uint *)(lVar9 + 0xec) < iVar5 + 1U) {
        FUN_1447a1bd6((longlong *)(lVar9 + 0xe0),iVar5);
      }
      lVar9 = *(longlong *)(lVar9 + 0xe0);
      lVar11 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar9 + lVar11) = 0;
      *(code **)(lVar9 + lVar11) = local_6b8;
      *(undefined4 *)(lVar9 + 8 + lVar11) = (undefined4)local_6b0;
      *(uint *)(lVar9 + 0xc + lVar11) = local_6b0._4_4_;
      local_6b0 = (longlong **)0x0;
      local_6b8 = (code *)0x0;
      lVar8 = lVar8 + 1;
      iVar5 = (**(code **)(**(longlong **)(*local_718 + 0x208) + 0xc0))();
    } while (lVar8 < iVar5);
  }
  lVar8 = param_1[0x24];
  FUN_140056680(&local_6b8,L"Create New...");
  iVar5 = *(int *)(lVar8 + 0xe8);
  *(uint *)(lVar8 + 0xe8) = iVar5 + 1U;
  if (*(uint *)(lVar8 + 0xec) < iVar5 + 1U) {
    FUN_1447a1bd6((longlong *)(lVar8 + 0xe0),iVar5);
  }
  lVar8 = *(longlong *)(lVar8 + 0xe0);
  lVar9 = (longlong)iVar5 * 0x10;
  *(undefined8 *)(lVar8 + lVar9) = 0;
  *(code **)(lVar8 + lVar9) = local_6b8;
  *(undefined4 *)(lVar8 + 8 + lVar9) = (undefined4)local_6b0;
  *(uint *)(lVar8 + 0xc + lVar9) = local_6b0._4_4_;
  local_6b0 = (longlong **)0x0;
  local_6b8 = (code *)0x0;
  local_698 = 0;
  local_688 = &PTR_LAB_14bd8d0e0;
  local_6a8 = FUN_14455b614;
  local_680 = param_1;
  FUN_1484c9a28(param_1[0x24] + 0x28,param_1[0x24] + 0xd8);
  if ((char)param_1[0x2b] == '\x01') {
    plVar6 = (longlong *)FUN_148f8e599(param_1);
    if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar6);
    }
    param_1[0x22] = (longlong)plVar6;
    FUN_140056680(&local_6b8,&DAT_149dfb77a);
    (**(code **)(*plVar6 + 0x2a8))(plVar6,param_1,&local_6b8);
    if (local_6b8 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x22]);
    FUN_14851cfa4(param_1[0x22],param_1);
    *(undefined1 *)(param_1[0x22] + 0xa8) = 1;
    *(char *)(param_1[0x22] + 0xaa) = (char)param_1[0x16];
    *(undefined1 *)(param_1[0x22] + 0xab) = *(undefined1 *)((longlong)param_1 + 0xb4);
    lVar8 = FUN_1484ec096(param_1);
    if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar8);
    }
    param_1[0x23] = lVar8;
    uVar7 = (**(code **)(*param_1 + 0x3a0))(param_1);
    FUN_1484e0ce2(lVar8,uVar7,&local_268);
    local_728 = &local_6e8;
    local_738 = 0;
    uStack_730 = 0;
    local_720 = 0;
    FUN_14852be87(param_1[0x23],param_1[0x22],param_1[0x29],param_1 + 0x16);
  }
  FUN_1485051e4(param_1[0x26]);
  FUN_149610fd8(param_1);
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_6b8 = (code *)0x14ba13d20;
  local_6b0._0_4_ = 0xb;
  FUN_1446e940c(&local_6c0,&local_6b8);
  local_6b8 = (code *)0x14bd7d740;
  local_6b0 = (longlong **)CONCAT44(local_6b0._4_4_,0x16);
  FUN_1446e940c(local_70c,&local_6b8);
  FUN_140208bae(&local_6b8,local_70c,&local_6c0,
                L"Cluster triangles of the Mesh into PolyGroups using various strategies");
  (**(code **)(*plVar6 + 0x340))(plVar6,&local_6b8,2);
  if (local_6b8 != (code *)0x0) {
    (**(code **)(*(longlong *)local_6b8 + 0x10))();
  }
  if (local_6e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_6d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_758) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149610dd8 FUN_149610dd8 body=148 status=ok
// SIG undefined FUN_149610dd8(void)

undefined8 FUN_149610dd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599c8b6();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149610e6d FUN_149610e6d body=148 status=ok
// SIG undefined FUN_149610e6d(void)

undefined8 FUN_149610e6d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b14b60();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149610f02 FUN_149610f02 body=212 status=ok
// SIG undefined FUN_149610f02(void)

void FUN_149610f02(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_149640300(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149610fd8 FUN_149610fd8 body=550 status=ok
// SIG undefined FUN_149610fd8(void)

void FUN_149610fd8(longlong *param_1)

{
  void *_Src;
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  code *local_b0;
  longlong **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 uStack_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1[0x26] != 0) {
    lVar6 = param_1[0x14];
    if (lVar6 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      uVar4 = FUN_145b7126e();
      plVar3 = (longlong *)FUN_144718840(lVar6,uVar4);
    }
    local_88 = (void *)0x0;
    uStack_80 = 0;
    if (*(char *)(param_1[0x24] + 0xd4) == '\x01') {
      iVar1 = (**(code **)(*plVar3 + 0x10))();
      if (0 < iVar1) {
        do {
          uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
          uVar4 = FUN_14855788a(uVar4,0);
          lVar6 = (longlong)(int)uStack_80;
          uVar2 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
          if (uStack_80._4_4_ < uVar2) {
            FUN_144769b64(&local_88);
          }
          *(undefined8 *)((longlong)local_88 + lVar6 * 8) = uVar4;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_68 = 0;
      local_58 = &PTR_LAB_14bd8d100;
      local_78[0] = FUN_14455b812;
      local_50 = param_1;
      FUN_14851c734(*(undefined8 *)(param_1[0x26] + 0x58),local_78,2);
    }
    else {
      (**(code **)(*plVar3 + 0x20))(0,&local_88,0);
      FUN_14851c7d4(*(undefined8 *)(param_1[0x26] + 0x58),2);
    }
    lVar6 = param_1[0x26];
    uVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    uVar4 = FUN_1485578f6(uVar4);
    _Src = local_88;
    local_98 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_80;
    local_90 = (int)uStack_80;
    if (lVar5 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1411312f2(&local_98,uStack_80 & 0xffffffff,0);
      memcpy(local_98,_Src,lVar5 << 3);
    }
    FUN_1485053d2(lVar6,&local_98,uVar4,0);
    local_c0 = &local_9c;
    local_9c = 0xffff0000;
    local_b8 = &local_a0;
    local_a0 = 0x40000000;
    local_a8 = &local_c8;
    local_b0 = FUN_14455b880;
    local_c8 = param_1;
    FUN_14846e534(param_1[0x30]);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149611200 FUN_149611200 body=95 status=ok
// SIG undefined FUN_149611200(void)

void FUN_149611200(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000149611258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  return;
}



// FUNCTION 149611260 FUN_149611260 body=46 status=ok
// SIG undefined FUN_149611260(void)

void FUN_149611260(longlong param_1,undefined4 param_2)

{
  FUN_1484cb470();
  FUN_148505016(*(undefined8 *)(param_1 + 0x130),param_2);
  return;
}



// FUNCTION 1496112e6 FUN_1496112e6 body=84 status=ok
// SIG undefined FUN_1496112e6(void)

void FUN_1496112e6(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149611330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,10,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 14961133a FUN_14961133a body=84 status=ok
// SIG undefined FUN_14961133a(void)

void FUN_14961133a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149611384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,8,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 14961138e FUN_14961138e body=84 status=ok
// SIG undefined FUN_14961138e(void)

void FUN_14961138e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496113d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,3,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 1496113e2 FUN_1496113e2 body=84 status=ok
// SIG undefined FUN_1496113e2(void)

void FUN_1496113e2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014961142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,2,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 149611436 FUN_149611436 body=84 status=ok
// SIG undefined FUN_149611436(void)

void FUN_149611436(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149611480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,1,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 14961148a FUN_14961148a body=84 status=ok
// SIG undefined FUN_14961148a(void)

void FUN_14961148a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496114d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,9,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 1496114de FUN_1496114de body=84 status=ok
// SIG undefined FUN_1496114de(void)

void FUN_1496114de(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149611528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,5,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 149611532 FUN_149611532 body=84 status=ok
// SIG undefined FUN_149611532(void)

void FUN_149611532(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014961157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x388))(plVar2,4,*(code **)(*plVar2 + 0x388));
    return;
  }
  return;
}



// FUNCTION 14961158e FUN_14961158e body=821 status=ok
// SIG undefined FUN_14961158e(void)

double * FUN_14961158e(double *param_1,double *param_2,byte param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148 [4];
  double local_128;
  double local_120;
  undefined8 local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  cVar7 = '\x01';
  if ((char)param_3 < '\x01') {
    cVar7 = -(param_3 != 0);
  }
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_148[0] = DAT_14c8464e0;
  local_148[1] = DAT_14c8464e8;
  local_148[2] = DAT_14c8464f0;
  cVar6 = (param_3 ^ (char)param_3 >> 7) - ((char)param_3 >> 7);
  local_148[(char)(cVar6 + -1)] = (double)(int)cVar7;
  local_158 = param_2[2];
  dVar1 = param_2[4];
  local_150 = *param_2;
  dVar2 = param_2[1];
  dVar3 = (param_2[5] - local_158) * 0.5;
  dVar4 = (dVar1 - dVar2) * 0.5;
  local_160 = (param_2[3] - local_150) * 0.5;
  if (cVar6 == '\x01') {
    uVar8 = (undefined4)DAT_14c846398;
    uVar9 = (undefined4)((ulonglong)DAT_14c846398 >> 0x20);
    uVar10 = (undefined4)DAT_14c846390;
    uVar11 = (undefined4)((ulonglong)DAT_14c846390 >> 0x20);
    uVar12 = (undefined4)DAT_14c846388;
    uVar13 = (undefined4)((ulonglong)DAT_14c846388 >> 0x20);
    dVar5 = local_160;
    local_168 = dVar3;
    local_160 = dVar4;
  }
  else {
    uVar8 = (undefined4)DAT_14c8463b0;
    uVar9 = (undefined4)((ulonglong)DAT_14c8463b0 >> 0x20);
    uVar10 = (undefined4)DAT_14c8463a8;
    uVar11 = (undefined4)((ulonglong)DAT_14c8463a8 >> 0x20);
    uVar12 = (undefined4)DAT_14c8463a0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8463a0 >> 0x20);
    dVar5 = dVar3;
    local_168 = dVar4;
    if (cVar6 == '\x02') {
      dVar5 = dVar4;
      local_168 = dVar3;
    }
  }
  local_128 = local_148[1] * (double)CONCAT44(uVar9,uVar8) -
              (double)CONCAT44(uVar11,uVar10) * local_148[2];
  local_110 = local_148[2] * (double)CONCAT44(uVar13,uVar12) -
              (double)CONCAT44(uVar9,uVar8) * local_148[0];
  local_f8 = local_148[0] * (double)CONCAT44(uVar11,uVar10) -
             (double)CONCAT44(uVar13,uVar12) * local_148[1];
  dVar4 = param_2[5] + local_158;
  dVar3 = param_2[3] + local_150;
  local_148[3] = (double)CONCAT44(uVar13,uVar12);
  local_120 = local_148[0];
  local_118 = CONCAT44(uVar11,uVar10);
  local_108 = local_148[1];
  local_100 = CONCAT44(uVar9,uVar8);
  local_f0 = local_148[2];
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_d8 = 0;
  uStack_d0 = 0x3ff0000000000000;
  FUN_146bfbbda(&local_e8);
  *param_1 = dVar3 * 0.5;
  param_1[1] = (dVar1 + dVar2) * 0.5;
  param_1[2] = dVar4 * 0.5;
  param_1[3] = local_e8;
  param_1[4] = dStack_e0;
  *(undefined4 *)(param_1 + 5) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_d0._4_4_;
  param_1[7] = local_160;
  param_1[8] = local_168;
  param_1[9] = dVar5;
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1496118c4 FUN_1496118c4 body=184 status=ok
// SIG undefined FUN_1496118c4(void)

undefined8 * FUN_1496118c4(undefined8 *param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 3) = 6;
  FUN_14847479c(param_1,6,0);
  if (param_2 < 0xfd) {
    if (param_2 != 1) {
      if (param_2 != 2) {
LAB_14961196c:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        return param_1;
      }
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_149611932;
    }
    uVar2 = 3;
    uVar3 = 1;
  }
  else {
    if (param_2 == 0xff) {
      uVar2 = 3;
      uVar3 = 1;
LAB_149611932:
      *(undefined4 *)param_1 = 2;
      *(undefined4 *)((longlong)param_1 + 4) = 2;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
      puVar1 = (undefined1 *)0x300000001;
      goto LAB_14961195e;
    }
    if (param_2 != 0xfe) {
      if (param_2 != 0xfd) goto LAB_14961196c;
      *param_1 = &DAT_200000002;
      param_1[1] = &DAT_200000002;
      puVar1 = &DAT_200000002;
      goto LAB_14961195e;
    }
    uVar2 = 2;
    uVar3 = 2;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  puVar1 = &DAT_100000003;
LAB_14961195e:
  param_1[2] = puVar1;
  return param_1;
}



// FUNCTION 14961197c FUN_14961197c body=919 status=ok
// SIG undefined FUN_14961197c(void)

void FUN_14961197c(undefined8 param_1,double *param_2,double *param_3,undefined4 *param_4,
                  double param_5,double param_6,double *param_7)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_108 [32];
  double local_e8 [4];
  double local_c8 [4];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined4 local_78;
  float local_74;
  float local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8[2] = param_2[2];
  local_c8[0] = *param_2;
  local_c8[1] = param_2[1];
  uVar1 = (ulonglong)((-(uint)(*param_3 == *param_2) & 1) << 3);
  *(undefined8 *)((longlong)local_c8 + uVar1) = *(undefined8 *)((longlong)param_3 + uVar1);
  local_e8[2] = param_3[2];
  local_e8[0] = *param_3;
  local_e8[1] = param_3[1];
  *(undefined8 *)((longlong)local_e8 + uVar1) = *(undefined8 *)((longlong)param_2 + uVar1);
  fVar2 = (float)param_6;
  fVar3 = (float)param_5;
  local_98 = param_2[2];
  local_a8 = *param_2;
  dStack_a0 = param_2[1];
  local_90 = local_c8[0];
  dStack_88 = local_c8[1];
  local_80 = local_c8[2];
  local_78 = *param_4;
  local_74 = fVar3;
  local_70 = fVar2;
  FUN_1484d0812(param_1,&local_a8);
  local_98 = param_2[2];
  local_a8 = *param_2;
  dStack_a0 = param_2[1];
  local_90 = local_e8[0];
  dStack_88 = local_e8[1];
  local_80 = local_e8[2];
  local_78 = *param_4;
  local_74 = fVar3;
  local_70 = fVar2;
  FUN_1484d0812(param_1,&local_a8);
  local_98 = param_3[2];
  local_a8 = *param_3;
  dStack_a0 = param_3[1];
  local_90 = local_c8[0];
  dStack_88 = local_c8[1];
  local_80 = local_c8[2];
  local_78 = *param_4;
  local_74 = fVar3;
  local_70 = fVar2;
  FUN_1484d0812(param_1,&local_a8);
  local_98 = param_3[2];
  local_a8 = *param_3;
  dStack_a0 = param_3[1];
  local_90 = local_e8[0];
  dStack_88 = local_e8[1];
  local_80 = local_e8[2];
  local_78 = *param_4;
  local_74 = fVar3;
  local_70 = fVar2;
  FUN_1484d0812(param_1,&local_a8);
  if (param_7 != (double *)0x0) {
    local_80 = param_2[2] + param_7[2];
    dStack_88 = param_2[1] + param_7[1];
    local_90 = *param_2 + *param_7;
    local_98 = param_2[2];
    local_a8 = *param_2;
    dStack_a0 = param_2[1];
    local_78 = *param_4;
    local_74 = fVar3;
    local_70 = fVar2;
    FUN_1484d0812(param_1,&local_a8);
    local_80 = param_3[2] + param_7[2];
    dStack_88 = param_3[1] + param_7[1];
    local_90 = *param_3 + *param_7;
    local_98 = param_3[2];
    local_a8 = *param_3;
    dStack_a0 = param_3[1];
    local_78 = *param_4;
    local_74 = fVar3;
    local_70 = fVar2;
    FUN_1484d0812(param_1,&local_a8);
    local_80 = local_c8[2] + param_7[2];
    dStack_88 = local_c8[1] + param_7[1];
    local_90 = local_c8[0] + *param_7;
    local_98 = local_c8[2];
    local_a8 = local_c8[0];
    dStack_a0 = local_c8[1];
    local_78 = *param_4;
    local_74 = fVar3;
    local_70 = fVar2;
    FUN_1484d0812(param_1,&local_a8);
    local_80 = local_e8[2] + param_7[2];
    dStack_88 = local_e8[1] + param_7[1];
    local_90 = local_e8[0] + *param_7;
    local_98 = local_e8[2];
    local_a8 = local_e8[0];
    dStack_a0 = local_e8[1];
    local_78 = *param_4;
    local_74 = fVar3;
    local_70 = fVar2;
    FUN_1484d0812(param_1,&local_a8);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149611d14 FUN_149611d14 body=413 status=ok
// SIG undefined FUN_149611d14(void)

void FUN_149611d14(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  double *local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_7;
  local_d0 = param_6;
  local_d8 = param_5;
  FUN_14961197c(param_1,param_3,param_3 + 3);
  local_78[0] = param_3[3] - *param_3;
  local_78[1] = param_3[4] - param_3[1];
  local_78[2] = param_3[5] - param_3[2];
  dVar1 = *(double *)(param_2 + 0x50);
  if (0.0 < dVar1) {
    uVar2 = (-(uint)(param_3[3] - *param_3 == 0.0) & 1) * 2;
    uVar3 = 2 - (param_3[4] - param_3[1] != 0.0);
    if (local_78[uVar3] / dVar1 + local_78[uVar2] / dVar1 <= 1000.0) {
      local_98 = local_78;
      local_88 = param_5;
      local_80 = param_6;
      local_b8 = param_3;
      local_b0 = param_1;
      local_a8 = param_2;
      local_a0 = param_4;
      local_90 = dVar1;
      FUN_144556c14(&local_b8,uVar2,uVar3);
      FUN_144556c14(&local_b8,uVar3,uVar2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149611eb2 FUN_149611eb2 body=1409 status=ok
// SIG undefined FUN_149611eb2(void)

void FUN_149611eb2(double *param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  size_t sVar14;
  uint uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  bool bVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined4 *local_1b8;
  ulonglong local_1a8;
  uint local_19c;
  wchar_t *local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined4 local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  wchar_t *local_138;
  double dStack_130;
  double local_128;
  double local_120 [6];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar1 = *param_1;
  dVar22 = param_1[3];
  local_180 = param_4;
  if (dVar1 <= dVar22) {
    dVar2 = param_1[1];
    dVar3 = param_1[4];
    if (dVar2 <= dVar3) {
      dVar4 = param_1[2];
      dVar25 = param_1[5];
      if (dVar4 <= dVar25) {
        dVar5 = dVar25 - dVar4;
        dVar6 = dVar3 - dVar2;
        local_120[3] = dVar22 - dVar1;
        local_120[4] = dVar6;
        local_120[5] = dVar5;
        if ((((local_120[3] != 0.0) || (NAN(local_120[3]))) || (dVar6 != 0.0)) ||
           (((NAN(dVar6) || (dVar5 != 0.0)) || (NAN(dVar5))))) {
          local_120[2] = (dVar25 + dVar4) * 0.5;
          local_120[1] = (dVar3 + dVar2) * 0.5;
          local_120[0] = (dVar22 + dVar1) * 0.5;
          if (*(char *)(param_3 + 0xa0) == '\0') {
            dVar1 = (double)*(float *)(param_3 + 0xb0);
          }
          else {
            dVar1 = 1.0;
          }
          lVar19 = 0;
          uVar13 = FUN_14375bb6e();
          do {
            dVar22 = local_120[lVar19 + 3];
            if ((dVar22 != 0.0) || (NAN(dVar22))) {
              local_138 = (wchar_t *)param_2[8];
              dStack_130 = param_2[9];
              local_128 = param_2[10];
              dVar22 = ABS(dVar22 * (double)(&local_138)[lVar19]);
              auVar21._0_8_ = dVar22 + 0.5;
              auVar21._8_8_ = 0;
              auVar21 = roundpd(auVar21,auVar21,1);
              if (9.999999747378752e-05 <= ABS(dVar22 - auVar21._0_8_)) {
                pwVar17 = L"%.2f";
              }
              else {
                pwVar17 = L"%.0f";
              }
              FUN_140002266(&local_138,pwVar17,dVar22);
              dVar22 = dVar6;
              if (lVar19 != 2) {
                dVar22 = dVar5;
              }
              local_1a8 = (ulonglong)(lVar19 == 0);
              uVar16 = (ulonglong)(lVar19 != 2);
              local_190 = uVar16 * 8 + 8;
              local_188 = uVar16 + 1;
              local_198 = local_138;
              pwVar17 = local_138;
              if (dStack_130._0_4_ == 0) {
                pwVar17 = L"";
              }
              uVar15 = 1;
              bVar10 = false;
              do {
                if (((bVar10) && (local_120[local_1a8 + 3] == 0.0)) &&
                   (!NAN(local_120[local_1a8 + 3]))) break;
                bVar11 = false;
                bVar12 = true;
                local_19c = uVar15;
                do {
                  bVar18 = bVar12;
                  if (((bVar11) && (dVar22 == 0.0)) && (!NAN(dVar22))) break;
                  local_128 = param_1[2];
                  local_138 = (wchar_t *)*param_1;
                  dStack_130 = param_1[1];
                  (&local_138)[lVar19] = (wchar_t *)local_120[lVar19];
                  if (bVar10) {
                    uVar16 = (ulonglong)(uint)((int)local_1a8 * 8);
                    *(undefined8 *)((longlong)&local_138 + uVar16) =
                         *(undefined8 *)((longlong)param_1 + uVar16 + 0x18);
                  }
                  if (bVar11) {
                    *(double *)((longlong)&local_138 + local_190) = param_1[local_188 + 3];
                  }
                  dVar3 = (double)local_138 * param_2[8];
                  dVar4 = dStack_130 * param_2[9];
                  dVar20 = local_128 * param_2[10];
                  dVar7 = *param_2;
                  dVar8 = param_2[1];
                  dVar9 = param_2[2];
                  dVar2 = param_2[3];
                  dVar23 = dVar4 * dVar7 - dVar3 * dVar8;
                  dVar24 = dVar20 * dVar8 - dVar4 * dVar9;
                  dVar25 = dVar3 * dVar9 - dVar7 * dVar20;
                  dVar24 = dVar24 + dVar24;
                  dVar25 = dVar25 + dVar25;
                  dVar23 = dVar23 + dVar23;
                  dVar4 = (dVar9 * dVar24 - dVar7 * dVar23) + param_2[3] * dVar25 + dVar4 +
                          param_2[5];
                  local_148 = dVar23 * dVar2 + dVar20 + (dVar25 * dVar7 - dVar24 * dVar8) +
                              param_2[6];
                  local_158._8_4_ = SUB84(dVar4,0);
                  local_158._0_8_ =
                       (dVar23 * dVar8 - dVar25 * dVar9) + dVar2 * dVar24 + dVar3 + param_2[4];
                  local_158._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                  FUN_147cf049a(local_180,local_158,&local_168);
                  local_178 = pwVar17;
                  if (pwVar17 == (wchar_t *)0x0) {
                    local_170 = 0;
                  }
                  else {
                    sVar14 = wcslen(pwVar17);
                    local_170 = (int)sVar14;
                  }
                  local_1b8 = &DAT_149e1e308;
                  local_1c0 = &DAT_149e1e2f8;
                  local_1c8 = uVar13;
                  FUN_147d8e230(param_3,local_168 / dVar1,local_160 / dVar1,&local_178);
                  bVar11 = true;
                  bVar12 = false;
                } while (bVar18);
                bVar10 = true;
                uVar15 = 0;
              } while ((local_19c & 1) != 0);
              if (local_198 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 != 3);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149612434 FUN_149612434 body=281 status=ok
// SIG undefined FUN_149612434(void)

void FUN_149612434(longlong *param_1,undefined4 param_2,double *param_3,double param_4,
                  double *param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar4 = param_3[5];
  dVar1 = param_3[3];
  dVar2 = param_3[4];
  local_10 = dVar4 * param_4 + param_3[2];
  local_18 = dVar2 * param_4 + param_3[1];
  local_20 = param_4 * dVar1 + *param_3;
  switch(param_2) {
  case 2:
    dVar4 = -dVar4;
    local_38 = -dVar1;
    dStack_30 = -dVar2;
    param_5 = &local_38;
    local_28 = dVar4;
  case 0:
    lVar3 = *param_1;
    local_48 = 0;
    break;
  case 3:
    dVar4 = -dVar4;
    local_38 = -dVar1;
    dStack_30 = -dVar2;
    param_5 = &local_38;
    local_28 = dVar4;
  case 1:
    lVar3 = *param_1;
    local_48 = 1;
    break;
  default:
    goto switchD_1496124c2_default;
  }
  local_40 = param_7;
  (**(code **)(lVar3 + 8))(dVar4,&local_20,param_5,param_6);
switchD_1496124c2_default:
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14961254e FUN_14961254e body=824 status=ok
// SIG undefined FUN_14961254e(void)

ulonglong FUN_14961254e(longlong param_1,longlong param_2,double *param_3,char param_4,
                       double *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auStack_138 [32];
  char *local_118;
  double *local_110;
  char local_f9;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8 [4];
  double local_a8;
  double local_a0;
  char local_91;
  double local_90 [4];
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_90[0] = param_3[3] - *param_3;
  local_90[1] = param_3[4] - param_3[1];
  local_90[2] = param_3[5] - param_3[2];
  uVar2 = 0;
  do {
    if ((local_90[uVar2] == 0.0) && (!NAN(local_90[uVar2]))) goto LAB_1496125ea;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 3);
  uVar2 = 0;
LAB_1496125ea:
  local_91 = '\0';
  local_f9 = param_4;
  FUN_146bfcd44(param_1 + 8,local_90 + 3,uVar2 & 0xffffffff);
  FUN_146bed047(&local_f8,param_1 + 0x20,param_3);
  local_c8[2] = local_e8 + *(double *)(param_1 + 0x18);
  local_c8[1] = dStack_f0 + *(double *)(param_1 + 0x10);
  local_c8[0] = local_f8 + *(double *)(param_1 + 8);
  local_110 = local_c8 + 3;
  local_118 = &local_91;
  FUN_14842069a(local_c8,local_90 + 3,param_2,param_2 + 0x18);
  uVar1 = CONCAT71((int7)((ulonglong)&local_91 >> 8),local_91);
  if (local_91 == '\x01') {
    local_e8 = local_a0 - *(double *)(param_1 + 0x18);
    dStack_f0 = local_a8 - *(double *)(param_1 + 0x10);
    local_f8 = local_c8[3] - *(double *)(param_1 + 8);
    FUN_146bf2028(param_1 + 0x20,local_90 + 3,&local_f8);
    local_c8[0] = *(double *)(param_1 + 0x50);
    dVar3 = 1.0 / local_c8[0];
    auVar5._0_8_ = local_68 * dVar3;
    auVar6._0_8_ = dStack_70 * dVar3;
    auVar4._0_8_ = dVar3 * local_90[3];
    auVar5._8_8_ = 0;
    auVar7 = roundpd(in_XMM4,auVar5,1);
    local_68 = auVar7._0_8_ * local_c8[0];
    auVar6._8_8_ = 0;
    auVar7 = roundpd(in_XMM5,auVar6,1);
    dStack_70 = auVar7._0_8_ * local_c8[0];
    auVar4._8_8_ = 0;
    auVar7 = roundpd(unaff_XMM6,auVar4,1);
    local_90[3] = auVar7._0_8_ * local_c8[0];
    auVar5 = roundpd(auVar5,auVar5,2);
    local_c8[2] = auVar5._0_8_ * local_c8[0];
    auVar5 = roundpd(auVar6,auVar6,2);
    local_c8[1] = auVar5._0_8_ * local_c8[0];
    auVar4 = roundpd(auVar4,auVar4,2);
    local_c8[0] = auVar4._0_8_ * local_c8[0];
    uVar2 = uVar2 & 0xffffffff;
    dVar3 = param_3[uVar2];
    local_90[uVar2 + 3] = dVar3;
    local_c8[uVar2] = dVar3;
    local_e8 = local_68;
    local_f8 = local_90[3];
    dStack_f0 = dStack_70;
    local_d0 = local_c8[2];
    local_e0 = local_c8[0];
    dStack_d8 = local_c8[1];
    *param_5 = local_90[3];
    param_5[1] = dStack_70;
    param_5[2] = local_68;
    param_5[3] = local_c8[0];
    param_5[4] = local_c8[1];
    param_5[5] = local_c8[2];
    if (local_f9 != '\0') {
      dVar3 = *param_5;
      if (*param_3 <= *param_5) {
        dVar3 = *param_3;
      }
      *param_5 = dVar3;
      dVar3 = param_5[1];
      if (param_3[1] <= param_5[1]) {
        dVar3 = param_3[1];
      }
      param_5[1] = dVar3;
      dVar3 = param_5[2];
      if (param_3[2] <= param_5[2]) {
        dVar3 = param_3[2];
      }
      param_5[2] = dVar3;
      dVar3 = param_5[3];
      if (param_5[3] <= param_3[3]) {
        dVar3 = param_3[3];
      }
      param_5[3] = dVar3;
      dVar3 = param_5[4];
      if (param_5[4] <= param_3[4]) {
        dVar3 = param_3[4];
      }
      param_5[4] = dVar3;
      dVar3 = param_5[5];
      if (param_5[5] <= param_3[5]) {
        dVar3 = param_3[5];
      }
      param_5[5] = dVar3;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149612888 FUN_149612888 body=349 status=ok
// SIG undefined FUN_149612888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_149612888(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc20438) {
    FUN_144b3d300(&DAT_14cc20438);
    if (DAT_14cc20438 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b74c04();
      uVar3 = FUN_145b74cee();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc20428 = (undefined *)0x0;
      _DAT_14cc20434 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc20430 = local_48;
      FUN_1484d23fc(&DAT_14cc20400,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc20400;
        if (DAT_14cc20428 != (undefined *)0x0) {
          _Dst = DAT_14cc20428;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144556de1);
      _Init_thread_footer(&DAT_14cc20438);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc20400;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496129e6 FUN_1496129e6 body=54 status=ok
// SIG undefined FUN_1496129e6(void)

bool FUN_1496129e6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x2c0))();
  iVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,uVar3);
  return iVar2 < 2;
}



// FUNCTION 149612a1c FUN_149612a1c body=427 status=ok
// SIG undefined FUN_149612a1c(void)

longlong * FUN_149612a1c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [47];
  char local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_149612bc8(param_2[1]);
  plVar1 = (longlong *)param_2[2];
  uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  lVar5 = (**(code **)(*plVar1 + 0x2d8))(plVar1,param_2,uVar4);
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  local_30 = lVar5;
  if ((lVar5 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    (**(code **)(*plVar3 + 0x378))(plVar3,&local_30);
    if (lVar5 == 0) goto LAB_149612b5b;
  }
  else {
    FUN_1456cec3c(lVar5);
    (**(code **)(*plVar3 + 0x378))(plVar3,&local_30);
  }
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0x3ff0000000000000;
  local_98 = 0x7fefffffffffffff;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0xffefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  cVar2 = FUN_148550543(param_2,&local_68,&local_98,&local_99);
  if ((cVar2 != '\0') && (local_99 == '\x01')) {
    plVar3[0xc5] = local_58;
    *(undefined4 *)(plVar3 + 0xc3) = (undefined4)local_68;
    *(undefined4 *)((longlong)plVar3 + 0x61c) = local_68._4_4_;
    *(undefined4 *)(plVar3 + 0xc4) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)plVar3 + 0x624) = uStack_60._4_4_;
    *(undefined1 *)((longlong)plVar3 + 0x611) = 1;
  }
LAB_149612b5b:
  (**(code **)(*plVar3 + 0x380))(plVar3,*param_2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149612bc8 FUN_149612bc8 body=148 status=ok
// SIG undefined FUN_149612bc8(void)

undefined8 FUN_149612bc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145babc42();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149612c5e FUN_149612c5e body=362 status=ok
// SIG undefined FUN_149612c5e(void)

void FUN_149612c5e(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != '\0') && (*(int *)(param_1 + 0x140) == 1)) {
    FUN_149612dca(param_1);
  }
  if ((*(int *)(param_1 + 0x2b0) == 0) ||
     ((*(int *)(param_1 + 0x2b0) < 0 && (*(int *)(*(longlong *)(param_1 + 0x2b8) + 0x170) == 0)))) {
    FUN_143b844a2(*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x328) = 0;
    plVar3 = *(longlong **)(param_1 + 0x330);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x330) = 0;
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
    if (*(char *)(param_1 + 0x2b4) == '\x01') {
      FUN_14851bbe8(*(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 0x58),
                    *(undefined8 *)(param_1 + 0x2b8),1,0xf);
      local_78 = *(undefined4 *)(param_1 + 0x2d8);
      uStack_74 = *(undefined4 *)(param_1 + 0x2dc);
      uStack_70 = *(undefined4 *)(param_1 + 0x2e0);
      uStack_6c = *(undefined4 *)(param_1 + 0x2e4);
      local_68 = *(undefined4 *)(param_1 + 0x2e8);
      uStack_64 = *(undefined4 *)(param_1 + 0x2ec);
      uStack_60 = *(undefined4 *)(param_1 + 0x2f0);
      uStack_5c = *(undefined4 *)(param_1 + 0x2f4);
      local_58 = *(undefined4 *)(param_1 + 0x2f8);
      uStack_54 = *(undefined4 *)(param_1 + 0x2fc);
      uStack_50 = *(undefined4 *)(param_1 + 0x300);
      uStack_4c = *(undefined4 *)(param_1 + 0x304);
      local_48 = *(undefined8 *)(param_1 + 0x308);
      local_38 = *(undefined8 *)(param_1 + 0x310);
      uStack_30 = *(undefined8 *)(param_1 + 0x318);
      local_28 = *(undefined8 *)(param_1 + 800);
      uStack_40 = 0;
      uStack_20 = 0;
      FUN_14851b91a(*(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 0x58));
      *(undefined1 *)(param_1 + 0x2b4) = 0;
    }
  }
  else {
    FUN_1485051e4(*(undefined8 *)(param_1 + 0x2a8));
    *(undefined1 *)(param_1 + 0x2b4) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149612dca FUN_149612dca body=1327 status=ok
// SIG undefined FUN_149612dca(void)

void FUN_149612dca(longlong param_1)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_1b8 [47];
  char local_189;
  ulonglong local_188;
  ulonglong local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  undefined1 local_148 [80];
  double local_f8 [4];
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  char acStack_b5 [5];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar10 = FUN_1484e0f44(*(undefined8 *)(param_1 + 0xd8),DAT_14cc203e8);
  FUN_1484d04e2(uVar10);
  if ((*(int *)(param_1 + 0x140) == 1) && (*(int *)(param_1 + 0x2b0) < 0)) {
    FUN_14961158e(local_148,param_1 + 0x150,-*(char *)(param_1 + 0x1b0));
    uVar14 = *(uint *)(param_1 + 0x3d0) ^ 0x1010101;
    acStack_b5[4] = (char)(uVar14 >> 0x18);
    cVar9 = acStack_b5[4];
    acStack_b5[2] = (char)(uVar14 >> 8);
    cVar11 = acStack_b5[2];
    acStack_b5[3] = (char)(uVar14 >> 0x10);
    cVar8 = acStack_b5[3];
    acStack_b5[2] = acStack_b5[3];
    acStack_b5[1] = acStack_b5[4];
    acStack_b5[3] = cVar11;
    acStack_b5[4] = (char)uVar14;
    if ((cVar8 != (char)uVar14) ||
       (((uVar12 = 0, (uVar14 & 1) == 0 && (uVar12 = 0, cVar9 != '\0')) &&
        (uVar12 = 0, cVar11 != '\0')))) {
      uVar12 = 1;
    }
    uVar12 = *(byte *)(*(longlong *)(param_1 + 0x100) + 0x108) ^ uVar12;
    local_188 = (ulonglong)uVar12;
    local_189 = acStack_b5[local_188 + 1];
    uVar14 = 0xffffffff;
    if ((local_189 == '\x01') && (acStack_b5[local_188 + 3] == '\x01')) {
      if (acStack_b5[local_188 + 2] == '\0') {
        uVar12 = uVar12 - 1 & 3;
        uVar14 = 0xffffffff;
        if (acStack_b5[(ulonglong)uVar12 + 1] != '\0') {
          uVar14 = uVar12;
        }
      }
      else {
        uVar14 = uVar12 + 1;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x1b0);
    local_f8[2] = DAT_14c8464f0;
    local_f8[0] = DAT_14c8464e0;
    local_f8[1] = DAT_14c8464e8;
    cVar11 = '\x01';
    if ((char)bVar1 < '\x01') {
      cVar11 = -(bVar1 != 0);
    }
    local_f8[(char)(~((char)bVar1 >> 7) + (bVar1 ^ (char)bVar1 >> 7))] = (double)(int)cVar11;
    dVar2 = (double)*(int *)(param_1 + 0x2b0) * *(double *)(*(longlong *)(param_1 + 0x128) + 0x50);
    dVar3 = local_f8[2] * dVar2;
    dVar4 = local_f8[1] * dVar2;
    dVar2 = dVar2 * local_f8[0];
    lVar13 = 1;
    local_180 = local_188;
    do {
      uVar12 = (uint)lVar13;
      FUN_1483ad9de(local_148,&local_160,uVar12 - 1);
      if (acStack_b5[lVar13] == '\0') {
        dVar5 = local_150 + dVar3;
        dVar6 = dStack_158 + dVar4;
        dVar7 = local_160 + dVar2;
        local_f8[2] = local_150;
        local_f8[0] = local_160;
        local_f8[1] = dStack_158;
        local_c8 = DAT_14cc20440;
        local_c4 = 0x3dcccccd3f800000;
        local_f8[3] = dVar7;
        dStack_d8 = dVar6;
        local_d0 = dVar5;
        FUN_1484d0812(uVar10,local_f8);
        local_160 = dVar7;
        dStack_158 = dVar6;
        local_150 = dVar5;
      }
      if ((uVar12 & 3) != uVar14 && lVar13 - (ulonglong)uVar14 != 1) {
        if (acStack_b5[(ulonglong)(uVar12 & 3) + 1] == '\x01') {
          FUN_1483ad9de(local_148,&local_178);
        }
        else {
          FUN_1483ad9de(local_148,local_f8);
          local_168 = local_f8[2] + dVar3;
          dStack_170 = local_f8[1] + dVar4;
          local_178 = local_f8[0] + dVar2;
        }
        local_f8[2] = local_150;
        local_f8[0] = local_160;
        local_f8[1] = dStack_158;
        local_d0 = local_168;
        local_f8[3] = local_178;
        dStack_d8 = dStack_170;
        local_c8 = DAT_14cc20440;
        local_c4 = 0x3dcccccd3f800000;
        FUN_1484d0812(uVar10,local_f8);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 5);
    if (local_189 == '\0') {
      FUN_1483ad9de(local_148,local_f8,local_188);
      local_150 = local_f8[2] + dVar3;
      dStack_158 = local_f8[1] + dVar4;
      local_160 = local_f8[0] + dVar2;
    }
    else {
      FUN_1483ad9de(local_148,&local_160,local_188);
    }
    if (acStack_b5[local_180 + 3] == '\x01') {
      FUN_1483ad9de(local_148,&local_178,local_180 + 2);
    }
    else {
      FUN_1483ad9de(local_148,local_f8,local_180 + 2);
      local_168 = dVar3 + local_f8[2];
      dStack_170 = dVar4 + local_f8[1];
      local_178 = dVar2 + local_f8[0];
    }
    local_f8[2] = local_150;
    local_f8[0] = local_160;
    local_f8[1] = dStack_158;
    local_f8[3] = local_178;
    dStack_d8 = dStack_170;
    local_d0 = local_168;
    local_c8 = DAT_14cc20440;
    local_c4 = 0x3dcccccd3f800000;
    FUN_1484d0812(uVar10);
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496132fa FUN_1496132fa body=1585 status=ok
// SIG undefined FUN_1496132fa(void)

undefined8 * FUN_1496132fa(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  double dVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  byte bVar9;
  void *_Dst_00;
  longlong *plVar10;
  longlong lVar11;
  char cVar12;
  undefined8 *puVar13;
  double *pdVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  double *pdVar17;
  void *_Src;
  longlong *plVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  undefined1 auStack_178 [32];
  double local_158 [7];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  bVar4 = *(byte *)(param_1 + 0x108);
  iVar6 = *(int *)(param_1 + 0x208);
  dVar20 = (double)iVar6;
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x80) + 0x50);
  dVar21 = *(double *)
            (param_1 + 0xa8 + (longlong)(char)(~((char)bVar4 >> 7) + (bVar4 ^ (char)bVar4 >> 7)) * 8
            ) / dVar3;
  auVar22._0_8_ = dVar21 + 0.5;
  auVar22._8_8_ = 0;
  auVar22 = roundpd(auVar22,auVar22,1);
  if (9.999999747378752e-05 < ABS(dVar21 - auVar22._0_8_)) {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = dVar21;
    if (iVar6 < 1) {
      auVar22 = roundpd(auVar23,auVar23,1);
      dVar19 = auVar22._0_8_;
      uVar24 = 0x3ff00000;
    }
    else {
      auVar22 = roundpd(auVar23,auVar23,2);
      dVar19 = auVar22._0_8_;
      uVar24 = 0xbff00000;
    }
    dVar20 = (dVar19 - dVar21) + dVar20 + (double)((ulonglong)uVar24 << 0x20);
  }
  bVar9 = -bVar4;
  if (-1 < iVar6) {
    bVar9 = bVar4;
  }
  FUN_14961158e(&local_100,param_1 + 0xa8,bVar9);
  bVar4 = *(byte *)(param_1 + 0x108);
  dVar3 = dVar3 * dVar20;
  local_158[2] = DAT_14c8464f0;
  local_158[0] = DAT_14c8464e0;
  local_158[1] = DAT_14c8464e8;
  cVar12 = '\x01';
  if ((char)bVar4 < '\x01') {
    cVar12 = -(bVar4 != 0);
  }
  local_158[(char)(~((char)bVar4 >> 7) + (bVar4 ^ (char)bVar4 >> 7))] = (double)(int)cVar12;
  dVar21 = dVar3 * 0.5;
  local_100 = dVar21 * local_158[0] + local_100;
  local_f8 = local_158[1] * dVar21 + local_f8;
  local_f0 = local_158[2] * dVar21 + local_f0;
  local_b8 = ABS(dVar3) * 0.5;
  FUN_148503a16(*(longlong *)(param_1 + 0x80) + 8,local_158,&local_100);
  local_110 = local_b8;
  local_120 = local_c8;
  uStack_11c = uStack_c4;
  uStack_118 = uStack_c0;
  uStack_114 = uStack_bc;
  _Dst_00 = (void *)FUN_14001cc68(0x1b0);
  memset(_Dst_00,0,0x1b0);
  FUN_14964061e(_Dst_00);
  uVar7 = *(undefined8 *)(param_1 + 0x2e0);
  lVar11 = *(longlong *)(param_1 + 0x2e8);
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)((longlong)_Dst_00 + 0x90);
  *(undefined8 *)((longlong)_Dst_00 + 0x88) = uVar7;
  *(longlong *)((longlong)_Dst_00 + 0x90) = lVar11;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar10 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  puVar13 = (undefined8 *)(param_1 + 0x230);
  puVar16 = (undefined8 *)((longlong)_Dst_00 + 0x98);
  for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar16 = puVar16 + 1;
  }
  if ((((*(longlong *)(param_1 + 0x78) == 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x2e0) + 0x170) == 0)) && (0 < *(int *)(param_1 + 0x208)))
     && (*(char *)(param_1 + 0xa0) == '\x01')) {
    lVar11 = *(longlong *)(param_1 + 0x80);
    local_68 = *(undefined8 *)(lVar11 + 0x38);
    local_98 = *(double *)(lVar11 + 8);
    dStack_90 = *(double *)(lVar11 + 0x10);
    local_88 = *(double *)(lVar11 + 0x18);
    uStack_80 = *(undefined8 *)(lVar11 + 0x20);
    local_78 = *(undefined4 *)(lVar11 + 0x28);
    uStack_74 = *(undefined4 *)(lVar11 + 0x2c);
    uStack_70 = *(undefined4 *)(lVar11 + 0x30);
    uStack_6c = *(undefined4 *)(lVar11 + 0x34);
    FUN_146bed047(&local_b0,&uStack_80,param_1 + 0xa8);
    local_88 = local_a0 + local_88;
    dStack_90 = local_a8 + dStack_90;
    local_98 = local_b0 + local_98;
    *(undefined8 *)((longlong)_Dst_00 + 0x98) = uStack_80;
    *(ulonglong *)((longlong)_Dst_00 + 0xa0) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)((longlong)_Dst_00 + 0xa8) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)((longlong)_Dst_00 + 0xb0) = local_68;
    *(double *)((longlong)_Dst_00 + 0xb8) = local_98;
    *(double *)((longlong)_Dst_00 + 0xc0) = dStack_90;
    *(double *)((longlong)_Dst_00 + 200) = local_88;
    uVar7 = DAT_14c846518;
    *(undefined8 *)((longlong)_Dst_00 + 0xd0) = DAT_14c846510;
    *(undefined8 *)((longlong)_Dst_00 + 0xd8) = uVar7;
    *(undefined8 *)((longlong)_Dst_00 + 0xe0) = DAT_14c846520;
  }
  *(undefined1 *)((longlong)_Dst_00 + 0x149) = 1;
  pdVar14 = local_158;
  pdVar17 = (double *)((longlong)_Dst_00 + 0xe8);
  for (lVar11 = 10; lVar11 != 0; lVar11 = lVar11 + -1) {
    *pdVar17 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar17 = pdVar17 + 1;
  }
  iVar6 = *(int *)(param_1 + 0x208);
  *(byte *)((longlong)_Dst_00 + 0x148) = (byte)((uint)iVar6 >> 0x1f);
  *(undefined1 *)((longlong)_Dst_00 + 0x1a8) = 1;
  *(undefined4 *)((longlong)_Dst_00 + 0x14c) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined8 *)((longlong)_Dst_00 + 0x170) = *(undefined8 *)(param_1 + 0x2a8);
  if (*(char *)(*(longlong *)(param_1 + 0x58) + 0x109) == '\x01') {
    if (iVar6 < 0) {
      uVar15 = (ulonglong)*(int *)(param_1 + 0x2d8);
      if (uVar15 != 0) {
        _Src = (void *)(param_1 + 0x2c8);
LAB_1496136e9:
        _Dst = (void *)((longlong)_Dst_00 + 0x180);
        if (_Dst != _Src) {
          *(int *)((longlong)_Dst_00 + 400) = (int)uVar15;
          FUN_147daf818(_Dst,uVar15 & 0xffffffff,*(undefined4 *)((longlong)_Dst_00 + 0x194));
          memcpy(_Dst,_Src,uVar15 << 2);
        }
      }
    }
    else {
      uVar15 = (ulonglong)*(int *)(param_1 + 0x2c0);
      if (uVar15 != 0) {
        _Src = (void *)(param_1 + 0x2b0);
        goto LAB_1496136e9;
      }
    }
  }
  FUN_1496118c4(&local_98,bVar9);
  *(double *)((longlong)_Dst_00 + 0x160) = local_88;
  *(double *)((longlong)_Dst_00 + 0x150) = local_98;
  *(double *)((longlong)_Dst_00 + 0x158) = dStack_90;
  *(undefined4 *)((longlong)_Dst_00 + 0x168) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)_Dst_00 + 0x16c) = uStack_80._4_4_;
  lVar11 = *(longlong *)(param_1 + 0x68);
  *(undefined1 *)((longlong)_Dst_00 + 0x17c) = *(undefined1 *)(lVar11 + 0xb4);
  *(undefined4 *)((longlong)_Dst_00 + 0x178) = *(undefined4 *)(lVar11 + 0xb0);
  if (*(int *)(param_1 + 0x98) != 1) goto LAB_14961388f;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14bd8d160;
  *(undefined4 *)(plVar10 + 2) = 0;
  if (plVar10 == (longlong *)0x0) {
    *(undefined8 *)((longlong)_Dst_00 + 0x138) = 0x10;
    plVar18 = *(longlong **)((longlong)_Dst_00 + 0x140);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)((longlong)_Dst_00 + 0x140) = 0;
LAB_1496137fa:
      LOCK();
      plVar2 = plVar18 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      if (plVar10 != (longlong *)0x0) goto LAB_14961381c;
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(longlong **)((longlong)_Dst_00 + 0x138) = plVar10 + 2;
    plVar18 = *(longlong **)((longlong)_Dst_00 + 0x140);
    if (plVar10 == plVar18) {
      LOCK();
      plVar18 = plVar10 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
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
    else {
      *(longlong **)((longlong)_Dst_00 + 0x140) = plVar10;
      if (plVar18 != (longlong *)0x0) goto LAB_1496137fa;
    }
LAB_14961381c:
    LOCK();
    plVar18 = plVar10 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  plVar10 = (longlong *)((longlong)_Dst_00 + 0x138);
  lVar11 = 0;
  do {
    *(byte *)(*plVar10 + lVar11) = *(byte *)(param_1 + 0x328 + lVar11) ^ 1;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  if (*(char *)((longlong)_Dst_00 + 0x148) != '\0') {
    puVar8 = (undefined1 *)*plVar10;
    uVar5 = *puVar8;
    *puVar8 = puVar8[3];
    puVar8[3] = uVar5;
    lVar11 = *plVar10;
    uVar5 = *(undefined1 *)(lVar11 + 1);
    *(undefined1 *)(lVar11 + 1) = *(undefined1 *)(lVar11 + 2);
    *(undefined1 *)(lVar11 + 2) = uVar5;
  }
  *(undefined1 *)((longlong)_Dst_00 + 0x14a) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x108);
LAB_14961388f:
  *param_2 = _Dst_00;
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961392c FUN_14961392c body=606 status=ok
// SIG undefined FUN_14961392c(void)

void FUN_14961392c(longlong *param_1,int param_2)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auStack_d8 [32];
  double local_b8 [4];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar2 = *(byte *)(param_1 + 0x36);
  local_b8[2] = DAT_14c8464f0;
  local_b8[0] = DAT_14c8464e0;
  local_b8[1] = DAT_14c8464e8;
  cVar7 = '\x01';
  if ((char)bVar2 < '\x01') {
    cVar7 = -(bVar2 != 0);
  }
  lVar4 = (longlong)(char)(~((char)bVar2 >> 7) + (bVar2 ^ (char)bVar2 >> 7));
  local_b8[lVar4] = (double)(int)cVar7;
  dVar8 = (double)param_2;
  lVar3 = param_1[0x25];
  dVar1 = *(double *)(lVar3 + 0x50);
  dVar9 = (double)param_1[lVar4 + 0x30] / dVar1;
  auVar11._0_8_ = dVar9 + 0.5;
  auVar11._8_8_ = 0;
  auVar11 = roundpd(auVar11,auVar11,1);
  if (9.999999747378752e-05 < ABS(dVar9 - auVar11._0_8_)) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar9;
    if (param_2 < 1) {
      auVar11 = roundpd(auVar12,auVar12,1);
      dVar10 = auVar11._0_8_;
      dVar13 = 1.0;
    }
    else {
      auVar11 = roundpd(auVar12,auVar12,2);
      dVar10 = auVar11._0_8_;
      dVar13 = -1.0;
    }
    dVar8 = (dVar10 - dVar9) + dVar8 + dVar13;
  }
  dVar1 = dVar1 * dVar8;
  dVar8 = local_b8[2] * dVar1;
  dVar9 = local_b8[1] * dVar1;
  dVar1 = dVar1 * local_b8[0];
  pdVar5 = (double *)(param_1 + 0x2a);
  pdVar6 = local_b8;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + 1;
    pdVar6 = pdVar6 + 1;
  }
  local_60 = (double)param_1[0x35] + dVar8;
  local_68 = (double)param_1[0x34] + dVar9;
  local_70 = (double)param_1[0x33] + dVar1;
  local_78 = (double)param_1[0x32] + dVar8;
  local_80 = (double)param_1[0x31] + dVar9;
  local_88 = (double)param_1[0x30] + dVar1;
  local_90 = (double)param_1[0x2f] + dVar8;
  local_98 = (double)param_1[0x2e] + dVar9;
  local_b8[3] = (double)param_1[0x2d] + dVar1;
  local_b8[2] = dVar8 + (double)param_1[0x2c];
  local_b8[1] = dVar9 + (double)param_1[0x2b];
  local_b8[0] = dVar1 + (double)param_1[0x2a];
  (**(code **)(*param_1 + 0x390))(param_1,local_b8,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149613b8c FUN_149613b8c body=344 status=ok
// SIG undefined FUN_149613b8c(void)

void FUN_149613b8c(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[0x28] != 1) {
    *(undefined4 *)(param_1 + 0x56) = 0;
    FUN_149612c5e(param_1,1);
  }
  if (param_3 != '\0') {
    if ((char)param_1[0x29] == '\x01') {
      cVar1 = FUN_149639e1e(param_1 + 0x2a,param_2);
      if (cVar1 != '\0') {
        cVar1 = FUN_149639e1e(param_1 + 0x30,param_2 + 6);
        if ((cVar1 != '\0') && ((char)param_1[0x36] == (char)param_2[0xc])) goto LAB_149613c8a;
      }
    }
    lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_40 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    lVar3 = param_1[0x29];
    *local_40 = &PTR_LAB_14bd8d180;
    *(char *)(local_40 + 1) = (char)lVar3;
    *(undefined1 *)((longlong)local_40 + 9) = 1;
    plVar4 = param_1 + 0x2a;
    plVar5 = local_40 + 2;
    for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar5 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    }
    plVar4 = param_2;
    plVar5 = local_40 + 0xf;
    for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar5 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    }
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,param_1,&local_40,&DAT_14cc20360)
    ;
  }
LAB_149613c8a:
  plVar4 = param_1 + 0x2a;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = *param_2;
    param_2 = param_2 + 1;
    plVar4 = plVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x29) = 1;
  FUN_149613ce6(param_1);
  if ((int)param_1[0x28] == 1) {
    FUN_149612c5e(param_1,1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149613ce6 FUN_149613ce6 body=578 status=ok
// SIG undefined FUN_149613ce6(void)

void FUN_149613ce6(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  double *local_88;
  double local_78 [4];
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_1484e0f44(*(undefined8 *)(param_1 + 0xd8),DAT_14cc203d0);
  FUN_1484d04e2(uVar3);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x1b0);
    cVar5 = '\x01';
    if ((char)bVar1 < '\x01') {
      cVar5 = -(bVar1 != 0);
    }
    local_78[0] = DAT_14c8464e0;
    local_78[1] = DAT_14c8464e8;
    local_78[2] = DAT_14c8464f0;
    lVar4 = (longlong)(char)(~((char)bVar1 >> 7) + (bVar1 ^ (char)bVar1 >> 7));
    local_78[lVar4] = (double)(int)cVar5;
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x100) + 0xf8);
    dVar6 = (double)-iVar2;
    local_78[3] = *(double *)(*(longlong *)(param_1 + 0x128) + 0x50);
    dVar7 = *(double *)(param_1 + 0x150 + lVar4 * 8) / local_78[3];
    auVar9._0_8_ = dVar7 + 0.5;
    auVar9._8_8_ = 0;
    auVar9 = roundpd(auVar9,auVar9,1);
    if (9.999999747378752e-05 < ABS(dVar7 - auVar9._0_8_)) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar7;
      if (iVar2 < 0) {
        auVar9 = roundpd(auVar10,auVar10,2);
        dVar8 = auVar9._0_8_;
        dVar11 = -1.0;
      }
      else {
        auVar9 = roundpd(auVar10,auVar10,1);
        dVar8 = auVar9._0_8_;
        dVar11 = 1.0;
      }
      dVar6 = (dVar8 - dVar7) + dVar6 + dVar11;
    }
    local_78[3] = local_78[3] * dVar6;
    local_50 = local_78[2] * local_78[3];
    local_58 = local_78[1] * local_78[3];
    local_78[3] = local_78[3] * local_78[0];
    local_88 = (double *)0x0;
    local_90 = 0x3fb999999999999a;
    local_98 = 0x4008000000000000;
    FUN_14961197c(uVar3,param_1 + 0x180,param_1 + 0x198,&DAT_14bd8c05c);
    local_88 = (double *)0x0;
    local_90 = 0x3fb999999999999a;
    local_98 = 0x4008000000000000;
    FUN_14961197c(uVar3,param_1 + 0x150,param_1 + 0x168,&DAT_14bd8c05c);
    local_90 = 0x3fb999999999999a;
    local_98 = 0x3ff0000000000000;
    local_88 = local_78 + 3;
    FUN_149611d14(uVar3,*(undefined8 *)(param_1 + 0x128),param_1 + 0x150,&DAT_14bd8c05c);
    if (*(int *)(param_1 + 0x140) == 1) {
      FUN_149619fda(param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149613f2a FUN_149613f2a body=221 status=ok
// SIG undefined FUN_149613f2a(void)

void FUN_149613f2a(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != '\0') && ((char)param_1[0x29] == '\x01')) {
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_40 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    lVar2 = param_1[0x29];
    *local_40 = &PTR_LAB_14bd8d180;
    *(char *)(local_40 + 1) = (char)lVar2;
    *(undefined1 *)((longlong)local_40 + 9) = 0;
    plVar3 = param_1 + 0x2a;
    plVar4 = local_40 + 2;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
      *plVar4 = *plVar3;
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
    }
    plVar3 = param_1 + 0x2a;
    plVar4 = local_40 + 0xf;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
      *plVar4 = *plVar3;
      plVar3 = plVar3 + 1;
      plVar4 = plVar4 + 1;
    }
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,param_1,&local_40,&DAT_14cc20360)
    ;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_149613ce6(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149614008 FUN_149614008 body=7797 status=ok
// SIG undefined FUN_149614008(void)

void FUN_149614008(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  double dVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_798 [32];
  undefined1 local_778;
  code *local_768;
  undefined8 local_758;
  undefined **local_748;
  longlong *local_740;
  code *local_728;
  undefined8 local_718;
  undefined **local_708;
  longlong *local_700;
  undefined1 *local_6e8;
  undefined8 local_6d8;
  undefined **local_6c8;
  longlong *local_6c0;
  undefined1 *local_6a8;
  undefined8 local_698;
  undefined **local_688;
  longlong *local_680;
  undefined1 *local_668;
  undefined8 local_658;
  undefined **local_648;
  longlong *local_640;
  code *local_628;
  undefined8 local_618;
  undefined **local_608;
  longlong *local_600;
  undefined1 *local_5e8;
  undefined8 local_5d8;
  undefined **local_5c8;
  longlong *local_5c0;
  undefined1 *local_5a8;
  undefined8 local_598;
  undefined **local_588;
  longlong *local_580;
  undefined1 *local_568;
  undefined8 local_558;
  undefined **local_548;
  longlong *local_540;
  code *local_528;
  undefined8 local_518;
  undefined **local_508;
  longlong *local_500;
  undefined1 *local_4e8;
  undefined8 local_4d8;
  undefined **local_4c8;
  longlong *local_4c0;
  code *local_4a8;
  undefined8 local_498;
  undefined **local_488;
  longlong *local_480;
  undefined1 *local_468;
  undefined8 local_458;
  undefined **local_448;
  longlong *local_440;
  code *local_428;
  undefined8 local_418;
  undefined **local_408;
  longlong *local_400;
  longlong *local_3f8;
  undefined1 *local_3e8;
  undefined8 local_3d8;
  undefined **local_3c8;
  longlong *local_3c0;
  undefined8 *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined ***local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined **local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 *local_368 [2];
  undefined8 local_358;
  undefined **local_348;
  longlong *local_340;
  undefined8 *local_328;
  undefined8 uStack_320;
  undefined ***local_318;
  undefined8 uStack_310;
  undefined **local_308;
  undefined1 *puStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  undefined8 uStack_290;
  longlong local_288;
  longlong lStack_280;
  longlong local_278;
  undefined8 uStack_270;
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_798;
  FUN_1484416be();
  plVar12 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar12 + 0x340))(plVar12,&DAT_14cc20320,2);
  lVar13 = FUN_149615e7e(param_1);
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  param_1[0x21] = lVar13;
  FUN_14485c47a(lVar13 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x21]);
  plVar12 = (longlong *)FUN_149615f13(param_1);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x20] = (longlong)plVar12;
  FUN_140056680(&local_2c8,&DAT_149dfb77a);
  (**(code **)(*plVar12 + 0x2a8))(plVar12,param_1,&local_2c8);
  if (local_2c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x20]);
  plVar12 = (longlong *)FUN_1484c5a9a(param_1);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x23] = (longlong)plVar12;
  FUN_140056680(&local_2c8,&DAT_149dfb77a);
  (**(code **)(*plVar12 + 0x2a8))(plVar12,param_1,&local_2c8);
  if (local_2c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14851cac4(param_1[0x23]);
  local_98 = 0;
  local_88 = &PTR_LAB_14bd8d230;
  local_a8 = FUN_14455ba62;
  local_80 = param_1;
  FUN_1484c5b30(param_1[0x23] + 0x28,param_1[0x23] + 0xa8);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x23]);
  lVar13 = FUN_148f491c5(param_1);
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  param_1[0x22] = lVar13;
  *(undefined1 *)(lVar13 + 0xb4) = 1;
  (**(code **)(*(longlong *)param_1[0x22] + 0x2a8))
            ((longlong *)param_1[0x22],param_1,&DAT_14cc20390);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x22]);
  plVar12 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_149fab260;
  local_778 = 0;
  FUN_1411b354a(plVar12 + 2,0,0,0);
  if (plVar12 == (longlong *)0x0) {
    param_1[0x57] = 0x10;
    plVar17 = (longlong *)param_1[0x58];
    if (plVar17 != (longlong *)0x0) {
      param_1[0x58] = 0;
LAB_1496142ab:
      LOCK();
      plVar1 = plVar17 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      if (plVar12 != (longlong *)0x0) goto LAB_149614311;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    param_1[0x57] = (longlong)(plVar12 + 2);
    plVar17 = (longlong *)param_1[0x58];
    if (plVar12 == plVar17) {
      LOCK();
      plVar17 = plVar12 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    else {
      param_1[0x58] = (longlong)plVar12;
      if (plVar17 != (longlong *)0x0) goto LAB_1496142ab;
    }
LAB_149614311:
    LOCK();
    plVar17 = plVar12 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  FUN_14582ed12(param_1[0x57]);
  plVar12 = param_1 + 0x67;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)((longlong)param_1 + 0x344) != 0) {
    FUN_1448831cc(plVar12,0);
  }
  if (param_1[0x24] != 0) {
    uStack_320 = uStack_320 & 0xffffffff00000000;
    local_328 = (undefined8 *)0x3e800000000;
    FUN_148506727(&local_2c8);
    FUN_146c00942(param_1[0x57],&local_2c8);
    FUN_141082778(&local_2c8);
    FUN_148506398(param_1[0x24],0);
    FUN_1485063a5(&local_2c8,param_1[0x24]);
    *(undefined4 *)(param_1 + 0x5b) = (undefined4)local_2c8;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = local_2c8._4_4_;
    *(undefined4 *)(param_1 + 0x5c) = (undefined4)uStack_2c0;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_2c0._4_4_;
    *(undefined4 *)(param_1 + 0x5d) = local_2b8;
    *(undefined4 *)((longlong)param_1 + 0x2ec) = uStack_2b4;
    *(undefined4 *)(param_1 + 0x5e) = uStack_2b0;
    *(undefined4 *)((longlong)param_1 + 0x2f4) = uStack_2ac;
    *(undefined4 *)(param_1 + 0x5f) = local_2a8;
    *(undefined4 *)((longlong)param_1 + 0x2fc) = uStack_2a4;
    *(undefined4 *)(param_1 + 0x60) = uStack_2a0;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_29c;
    param_1[0x61] = local_298;
    param_1[0x62] = local_288;
    param_1[99] = lStack_280;
    param_1[100] = local_278;
    FUN_148506417(&local_2c8,param_1[0x24],0);
    if (plVar12 == &local_2c8) {
      if (local_2c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar12 != 0) {
        FUN_1400020a8();
      }
      param_1[0x67] = (longlong)local_2c8;
      local_2c8 = (undefined8 *)0x0;
      *(undefined4 *)(param_1 + 0x68) = (undefined4)uStack_2c0;
      *(undefined4 *)((longlong)param_1 + 0x344) = uStack_2c0._4_4_;
    }
    lVar14 = FUN_1485062af(param_1[0x24]);
    lVar13 = param_1[0x21];
    if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar14);
    }
    *(longlong *)(lVar13 + 0xb0) = lVar14;
  }
  plVar12 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14af7cde0;
  FUN_1457e37e0(plVar12 + 2);
  if (plVar12 == (longlong *)0x0) {
    param_1[0x59] = 0x10;
    plVar17 = (longlong *)param_1[0x5a];
    if (plVar17 != (longlong *)0x0) {
      param_1[0x5a] = 0;
LAB_149614511:
      LOCK();
      plVar1 = plVar17 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      if (plVar12 != (longlong *)0x0) goto LAB_149614577;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    param_1[0x59] = (longlong)(plVar12 + 2);
    plVar17 = (longlong *)param_1[0x5a];
    if (plVar12 == plVar17) {
      LOCK();
      plVar17 = plVar12 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    else {
      param_1[0x5a] = (longlong)plVar12;
      if (plVar17 != (longlong *)0x0) goto LAB_149614511;
    }
LAB_149614577:
    LOCK();
    plVar17 = plVar12 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  lVar13 = param_1[0x59];
  *(longlong *)(lVar13 + 8) = param_1[0x57];
  *(undefined8 *)(lVar13 + 0x10) = 0;
  FUN_146bee918(lVar13,0);
  *(ulonglong *)(lVar13 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar13 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar13 + 8) + 0x218));
  lVar13 = FUN_1484c5d32(param_1);
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  param_1[0x55] = lVar13;
  FUN_148504f74(lVar13,param_1[0x27],param_1 + 0x15);
  FUN_148558526(*(undefined8 *)(param_1[0x55] + 0x58),param_1[0x24]);
  FUN_14851b65c(*(undefined8 *)(param_1[0x55] + 0x58),1);
  if (param_1[0x24] != 0) {
    FUN_14851bbe8(*(undefined8 *)(param_1[0x55] + 0x58),param_1[0x57],1,0xf);
  }
  local_2c8 = (undefined8 *)param_1[0x5b];
  uStack_2c0._0_4_ = (undefined4)param_1[0x5c];
  uStack_2c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x2e4);
  local_2b8 = (undefined4)param_1[0x5d];
  uStack_2b4 = *(undefined4 *)((longlong)param_1 + 0x2ec);
  uStack_2b0 = (undefined4)param_1[0x5e];
  uStack_2ac = *(undefined4 *)((longlong)param_1 + 0x2f4);
  local_2a8 = (undefined4)param_1[0x5f];
  uStack_2a4 = *(undefined4 *)((longlong)param_1 + 0x2fc);
  uStack_2a0 = (undefined4)param_1[0x60];
  uStack_29c = *(undefined4 *)((longlong)param_1 + 0x304);
  local_298 = param_1[0x61];
  local_288 = param_1[0x62];
  lStack_280 = param_1[99];
  local_278 = param_1[100];
  uStack_290 = 0;
  uStack_270 = 0;
  FUN_14851b91a(*(undefined8 *)(param_1[0x55] + 0x58),&local_2c8);
  lVar13 = param_1[0x55];
  local_2c8 = (undefined8 *)0x0;
  uStack_2c0._0_4_ = 0;
  FUN_1446efa72(&local_2c8,0,3,0x10);
  puVar18 = local_2c8;
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,3);
  *local_2c8 = &PTR_LAB_14ba263d0;
  uVar15 = FUN_144a3f946();
  puVar18[2] = uVar15;
  *puVar18 = &PTR_FUN_14bd8d250;
  puVar18[3] = 0;
  FUN_14485c47a(puVar18 + 3,param_1);
  puVar18[4] = param_1;
  FUN_148f76e8e(lVar13 + 0x40,&local_328,&local_2c8);
  FUN_1449db362(&local_2c8);
  FUN_149615fa8(param_1);
  plVar12 = (longlong *)FUN_149640999();
  if (plVar12 == (longlong *)0x0) {
    param_1[0x25] = 0x10;
    plVar17 = (longlong *)param_1[0x26];
    if (plVar17 == (longlong *)0x0) goto LAB_149614805;
    param_1[0x26] = 0;
LAB_149614782:
    LOCK();
    plVar1 = plVar17 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    if (plVar12 == (longlong *)0x0) goto LAB_149614805;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    param_1[0x25] = (longlong)(plVar12 + 2);
    plVar17 = (longlong *)param_1[0x26];
    if (plVar12 == plVar17) {
      LOCK();
      plVar17 = plVar12 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    else {
      param_1[0x26] = (longlong)plVar12;
      if (plVar17 != (longlong *)0x0) goto LAB_149614782;
    }
  }
  LOCK();
  plVar17 = plVar12 + 1;
  *(int *)plVar17 = (int)*plVar17 + -1;
  UNLOCK();
  if ((int)*plVar17 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_149614805:
  if (*(char *)((longlong)param_1 + 0x611) == '\x01') {
    lVar13 = param_1[0x20];
    *(longlong *)(lVar13 + 0xb8) = param_1[0xc5];
    uVar11 = *(undefined4 *)((longlong)param_1 + 0x61c);
    lVar14 = param_1[0xc4];
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x624);
    *(int *)(lVar13 + 0xa8) = (int)param_1[0xc3];
    *(undefined4 *)(lVar13 + 0xac) = uVar11;
    *(int *)(lVar13 + 0xb0) = (int)lVar14;
    *(undefined4 *)(lVar13 + 0xb4) = uVar7;
  }
  lVar13 = param_1[0x25];
  FUN_144a7484c(param_1[0x20] + 0xc0,&local_2c8);
  lVar14 = param_1[0x20];
  uVar15 = *(undefined8 *)(lVar14 + 0xa8);
  uVar8 = *(undefined8 *)(lVar14 + 0xb0);
  *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar14 + 0xb8);
  *(undefined8 *)(lVar13 + 8) = uVar15;
  *(undefined8 *)(lVar13 + 0x10) = uVar8;
  *(undefined8 **)(lVar13 + 0x20) = local_2c8;
  *(undefined8 *)(lVar13 + 0x28) = uStack_2c0;
  *(ulonglong *)(lVar13 + 0x30) = CONCAT44(uStack_2b4,local_2b8);
  *(ulonglong *)(lVar13 + 0x38) = CONCAT44(uStack_2ac,uStack_2b0);
  lVar13 = param_1[0x25];
  bVar4 = *(byte *)(param_1[0x20] + 0xfc);
  *(byte *)(lVar13 + 0x49) = bVar4 ^ 1;
  bVar5 = *(byte *)(lVar13 + 0x48);
  dVar3 = *(double *)(lVar13 + 0x40);
  if (bVar4 == 0) {
    dVar6 = pow(5.0,(double)(bVar5 >> 1));
    dVar6 = dVar6 * (double)(uint)(1 << (bVar5 - (bVar5 >> 1) & 0x1f));
  }
  else {
    dVar6 = (double)(uint)(1 << (bVar5 & 0x1f));
  }
  *(double *)(lVar13 + 0x50) = dVar3 * dVar6;
  lVar13 = param_1[0x25];
  bVar4 = *(byte *)(param_1[0x20] + 0xe8);
  *(byte *)(lVar13 + 0x48) = bVar4;
  dVar3 = *(double *)(lVar13 + 0x40);
  if (*(char *)(lVar13 + 0x49) == '\0') {
    dVar6 = (double)(uint)(1 << (bVar4 & 0x1f));
  }
  else {
    dVar6 = pow(5.0,(double)(bVar4 >> 1));
    dVar6 = dVar6 * (double)(uint)(1 << (bVar4 - (bVar4 >> 1) & 0x1f));
  }
  *(double *)(lVar13 + 0x50) = dVar3 * dVar6;
  FUN_1484f206a(param_1[0x25],(int)*(undefined8 *)(param_1[0x20] + 0xf0));
  *(undefined8 *)(param_1[0x20] + 0x100) = *(undefined8 *)(param_1[0x25] + 0x40);
  lVar13 = param_1[0x25];
  local_2c8 = *(undefined8 **)(lVar13 + 0x20);
  uStack_2c0 = *(undefined8 *)(lVar13 + 0x28);
  local_2b8 = *(undefined4 *)(lVar13 + 0x30);
  uStack_2b4 = *(undefined4 *)(lVar13 + 0x34);
  uStack_2b0 = *(undefined4 *)(lVar13 + 0x38);
  uStack_2ac = *(undefined4 *)(lVar13 + 0x3c);
  local_2a8 = *(undefined4 *)(lVar13 + 8);
  uStack_2a4 = *(undefined4 *)(lVar13 + 0xc);
  uStack_2a0 = *(undefined4 *)(lVar13 + 0x10);
  uStack_29c = *(undefined4 *)(lVar13 + 0x14);
  local_298 = *(undefined8 *)(lVar13 + 0x18);
  uStack_290 = 0;
  local_288 = 0x3ff0000000000000;
  lStack_280 = 0x3ff0000000000000;
  local_278 = 0x3ff0000000000000;
  uStack_270 = 0;
  plVar12 = (longlong *)FUN_1484c6256(param_1);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x1a] = (longlong)plVar12;
  (**(code **)(*plVar12 + 0x2b8))(plVar12,&local_2c8);
  lVar13 = param_1[0x1a];
  local_328 = (undefined8 *)0x0;
  uStack_320 = uStack_320 & 0xffffffff00000000;
  FUN_1446efa72(&local_328,0,3,0x10);
  puVar18 = local_328;
  uStack_320._0_4_ = 3;
  *local_328 = &PTR_LAB_14af12c50;
  uVar15 = FUN_144a3f946();
  puVar18[2] = uVar15;
  *puVar18 = &PTR_FUN_14bd8d2f0;
  puVar18[3] = 0;
  FUN_14485c47a(puVar18 + 3,param_1);
  puVar18[4] = param_1;
  FUN_148515308(lVar13 + 0x58,&local_3a8,&local_328);
  FUN_1449db362(&local_328);
  local_328 = (undefined8 *)&LAB_14961624a;
  uStack_320._0_4_ = 0;
  FUN_14961616e(param_1[0x1a] + 0x28,&local_3a8,param_1,&local_328);
  lVar13 = param_1[0x1a];
  local_328 = (undefined8 *)0x0;
  uStack_320._0_4_ = 0;
  FUN_1446efa72(&local_328,0,3,0x10);
  puVar18 = local_328;
  uStack_320 = CONCAT44(uStack_320._4_4_,3);
  *local_328 = &PTR_LAB_14af12c50;
  uVar15 = FUN_144a3f946();
  puVar18[2] = uVar15;
  *puVar18 = &PTR_FUN_14bd8d3d0;
  puVar18[3] = 0;
  FUN_14485c47a(puVar18 + 3,param_1);
  puVar18[4] = param_1;
  FUN_148515308(lVar13 + 0x70,&local_3a8,&local_328);
  FUN_1449db362(&local_328);
  local_328 = (undefined8 *)0x0;
  uStack_320 = 0;
  uVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar12 = (longlong *)FUN_14843d0eb(uVar15,0x3fe,param_1,&local_328);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x18] = (longlong)plVar12;
  if (local_328 != (undefined8 *)0x0) {
    FUN_1400020a8();
    plVar12 = (longlong *)param_1[0x18];
  }
  lVar14 = (**(code **)(*param_1 + 0x2c8))(param_1);
  lVar13 = lVar14 + 0x28;
  if (lVar14 == 0) {
    lVar13 = 0;
  }
  (**(code **)(*plVar12 + 800))(plVar12,param_1[0x1a],lVar13);
  plVar12 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x19] = (longlong)plVar12;
  (**(code **)(*plVar12 + 0x2a0))(plVar12,param_1);
  local_328 = (undefined8 *)param_1[0x5b];
  uStack_320 = param_1[0x5c];
  local_318 = (undefined ***)param_1[0x5d];
  uStack_310 = param_1[0x5e];
  local_308 = (undefined **)param_1[0x5f];
  puStack_300 = (undefined1 *)param_1[0x60];
  local_2f8 = param_1[0x61];
  local_2e8 = param_1[0x62];
  lStack_2e0 = param_1[99];
  local_2d8 = param_1[100];
  uStack_2f0 = 0;
  uStack_2d0 = 0;
  local_358 = 0;
  local_348 = &PTR_LAB_14bd8d440;
  local_368[0] = &LAB_14455c8c8;
  local_340 = param_1;
  FUN_1484f7652(param_1[0x19] + 0x30,local_368,&local_328,0);
  FUN_1484f6c9e(param_1[0x19] + 0x30,param_1[0x18],0,0);
  (**(code **)(*(longlong *)param_1[0x18] + 0x350))((longlong *)param_1[0x18],0);
  uVar15 = FUN_1409ffe1d();
  lVar13 = FUN_1484ec096(uVar15);
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  param_1[0x1b] = lVar13;
  FUN_1484e0ce2(lVar13,param_1[0x27],&local_2c8);
  FUN_1484e0748(param_1[0x1b],DAT_14cc203a0);
  FUN_1484e0748(param_1[0x1b],DAT_14cc203d0);
  FUN_1484e0748(param_1[0x1b],DAT_14cc203e8);
  lVar13 = param_1[0x1b];
  uVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar15 = FUN_1485583eb(uVar15,0);
  FUN_1484e1dc8(lVar13,uVar15);
  FUN_1484e0748(param_1[0x1b],DAT_14cc203b8);
  lVar13 = param_1[0x1b];
  uVar15 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar15 = FUN_1485583eb(uVar15,1);
  FUN_1484e21f8(lVar13,DAT_14cc203b8,uVar15);
  FUN_149616260(param_1);
  *(undefined4 *)(param_1 + 0x8a) = 0x40400000;
  uVar15 = FUN_1409ffe1d();
  plVar12 = (longlong *)FUN_14841014b(uVar15);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x1c] = (longlong)plVar12;
  (**(code **)(*plVar12 + 0x358))(plVar12,param_1 + 0x13);
  (**(code **)(*param_1 + 0x2e8))(param_1,param_1[0x1c],param_1);
  uVar15 = FUN_1409ffe1d();
  lVar13 = FUN_1484101e0(uVar15);
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  param_1[0x1d] = lVar13;
  local_318 = (undefined ***)0x0;
  local_308 = &PTR_LAB_14aedb970;
  puStack_300 = &LAB_148441f14;
  local_328 = (undefined8 *)&LAB_14844e6fa;
  FUN_14840df3c(lVar13 + 0x30,1,&local_328);
  if (local_328 != (undefined8 *)0x0) {
    pppuVar16 = local_318;
    if (local_318 == (undefined ***)0x0) {
      pppuVar16 = &local_308;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  local_318 = (undefined ***)0x0;
  local_308 = &PTR_LAB_14aedb970;
  puStack_300 = &LAB_148441f18;
  local_328 = (undefined8 *)&LAB_14844e6fa;
  FUN_14840df3c(param_1[0x1d] + 0x30,2,&local_328);
  if (local_328 != (undefined8 *)0x0) {
    pppuVar16 = &local_308;
    if (local_318 != (undefined ***)0x0) {
      pppuVar16 = local_318;
    }
    (*(code *)(*pppuVar16)[2])(pppuVar16);
  }
  (**(code **)(*(longlong *)param_1[0x1d] + 0x300))((longlong *)param_1[0x1d],param_1 + 0x14);
  (**(code **)(*param_1 + 0x2e8))(param_1,param_1[0x1d],param_1);
  uVar15 = FUN_1409ffe1d();
  plVar12 = (longlong *)FUN_1484f1732(uVar15);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x1e] = (longlong)plVar12;
  (**(code **)(*plVar12 + 0x368))(plVar12);
  (**(code **)(*(longlong *)param_1[0x1e] + 0x340))();
  lVar13 = param_1[0x1e];
  local_3a8 = *(undefined8 **)(lVar13 + 0x80);
  uStack_320 = *(undefined8 *)(lVar13 + 0x88);
  local_398 = *(undefined ****)(lVar13 + 0x90);
  uStack_310 = *(undefined8 *)(lVar13 + 0x98);
  local_308 = *(undefined ***)(lVar13 + 0xa0);
  puStack_300 = *(undefined1 **)(lVar13 + 0xa8);
  local_2f8 = *(undefined8 *)(lVar13 + 0xb0);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0xb8);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0xb0) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0xb8) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0xa0) = &PTR_LAB_14bd8d460;
  *(longlong **)(lVar13 + 0xa8) = param_1;
  *(undefined8 *)(lVar13 + 0x90) = 0;
  *(ulonglong *)(lVar13 + 0x98) = CONCAT44(uStack_38c,uStack_390);
  *(undefined1 **)(lVar13 + 0x80) = &LAB_14455c91c;
  *(ulonglong *)(lVar13 + 0x88) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1e];
  local_3a8 = *(undefined8 **)(lVar13 + 0x140);
  uStack_320 = *(undefined8 *)(lVar13 + 0x148);
  local_398 = *(undefined ****)(lVar13 + 0x150);
  uStack_310 = *(undefined8 *)(lVar13 + 0x158);
  local_308 = *(undefined ***)(lVar13 + 0x160);
  puStack_300 = *(undefined1 **)(lVar13 + 0x168);
  local_2f8 = *(undefined8 *)(lVar13 + 0x170);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x178);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x170) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x178) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x160) = &PTR_LAB_14bd8d480;
  *(longlong **)(lVar13 + 0x168) = param_1;
  *(undefined8 *)(lVar13 + 0x150) = 0;
  *(ulonglong *)(lVar13 + 0x158) = CONCAT44(uStack_38c,uStack_390);
  *(code **)(lVar13 + 0x140) = FUN_14455c968;
  *(ulonglong *)(lVar13 + 0x148) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1e];
  local_3a8 = *(undefined8 **)(lVar13 + 0x180);
  uStack_320 = *(undefined8 *)(lVar13 + 0x188);
  local_398 = *(undefined ****)(lVar13 + 400);
  uStack_310 = *(undefined8 *)(lVar13 + 0x198);
  local_308 = *(undefined ***)(lVar13 + 0x1a0);
  puStack_300 = *(undefined1 **)(lVar13 + 0x1a8);
  local_2f8 = *(undefined8 *)(lVar13 + 0x1b0);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x1b8);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x1b0) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x1b8) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x1a0) = &PTR_LAB_14bd8d4a0;
  *(longlong **)(lVar13 + 0x1a8) = param_1;
  *(undefined8 *)(lVar13 + 400) = 0;
  *(ulonglong *)(lVar13 + 0x198) = CONCAT44(uStack_38c,uStack_390);
  *(undefined1 **)(lVar13 + 0x180) = &LAB_14455ca78;
  *(ulonglong *)(lVar13 + 0x188) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  uStack_320 = uVar15;
  uStack_310 = uVar8;
  local_2f8 = uVar9;
  uStack_2f0 = uVar10;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,param_1[0x1e],0);
  uVar15 = FUN_1409ffe1d();
  plVar12 = (longlong *)FUN_1484401fd(uVar15);
  if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar12);
  }
  param_1[0x1f] = (longlong)plVar12;
  (**(code **)(*plVar12 + 0x378))(plVar12);
  (**(code **)(*(longlong *)param_1[0x1f] + 0x340))();
  lVar13 = param_1[0x1f];
  local_3a8 = *(undefined8 **)(lVar13 + 0xe0);
  uStack_320 = *(undefined8 *)(lVar13 + 0xe8);
  local_398 = *(undefined ****)(lVar13 + 0xf0);
  uStack_310 = *(undefined8 *)(lVar13 + 0xf8);
  local_308 = *(undefined ***)(lVar13 + 0x100);
  puStack_300 = *(undefined1 **)(lVar13 + 0x108);
  local_2f8 = *(undefined8 *)(lVar13 + 0x110);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x118);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x110) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x118) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x100) = &PTR_LAB_14bd8d4c0;
  *(longlong **)(lVar13 + 0x108) = param_1;
  *(undefined8 *)(lVar13 + 0xf0) = 0;
  *(ulonglong *)(lVar13 + 0xf8) = CONCAT44(uStack_38c,uStack_390);
  *(undefined1 **)(lVar13 + 0xe0) = &LAB_14455cab4;
  *(ulonglong *)(lVar13 + 0xe8) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1f];
  local_3a8 = *(undefined8 **)(lVar13 + 0x140);
  uStack_320 = *(undefined8 *)(lVar13 + 0x148);
  local_398 = *(undefined ****)(lVar13 + 0x150);
  uStack_310 = *(undefined8 *)(lVar13 + 0x158);
  local_308 = *(undefined ***)(lVar13 + 0x160);
  puStack_300 = *(undefined1 **)(lVar13 + 0x168);
  local_2f8 = *(undefined8 *)(lVar13 + 0x170);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x178);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x170) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x178) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x160) = &PTR_LAB_14bd8d4e0;
  *(longlong **)(lVar13 + 0x168) = param_1;
  *(undefined8 *)(lVar13 + 0x150) = 0;
  *(ulonglong *)(lVar13 + 0x158) = CONCAT44(uStack_38c,uStack_390);
  *(code **)(lVar13 + 0x140) = FUN_14455cb02;
  *(ulonglong *)(lVar13 + 0x148) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1f];
  local_3a8 = *(undefined8 **)(lVar13 + 0x180);
  uStack_320 = *(undefined8 *)(lVar13 + 0x188);
  local_398 = *(undefined ****)(lVar13 + 400);
  uStack_310 = *(undefined8 *)(lVar13 + 0x198);
  local_308 = *(undefined ***)(lVar13 + 0x1a0);
  puStack_300 = *(undefined1 **)(lVar13 + 0x1a8);
  local_2f8 = *(undefined8 *)(lVar13 + 0x1b0);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x1b8);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x1b0) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x1b8) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x1a0) = &PTR_LAB_14bd8d500;
  *(longlong **)(lVar13 + 0x1a8) = param_1;
  *(undefined8 *)(lVar13 + 400) = 0;
  *(ulonglong *)(lVar13 + 0x198) = CONCAT44(uStack_38c,uStack_390);
  *(code **)(lVar13 + 0x180) = FUN_14455cb52;
  *(ulonglong *)(lVar13 + 0x188) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1f];
  local_3a8 = *(undefined8 **)(lVar13 + 0x1c0);
  uStack_320 = *(undefined8 *)(lVar13 + 0x1c8);
  local_398 = *(undefined ****)(lVar13 + 0x1d0);
  uStack_310 = *(undefined8 *)(lVar13 + 0x1d8);
  local_308 = *(undefined ***)(lVar13 + 0x1e0);
  puStack_300 = *(undefined1 **)(lVar13 + 0x1e8);
  local_2f8 = *(undefined8 *)(lVar13 + 0x1f0);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x1f8);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x1f0) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x1f8) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x1e0) = &PTR_LAB_14bd8d520;
  *(longlong **)(lVar13 + 0x1e8) = param_1;
  *(undefined8 *)(lVar13 + 0x1d0) = 0;
  *(ulonglong *)(lVar13 + 0x1d8) = CONCAT44(uStack_38c,uStack_390);
  *(undefined1 **)(lVar13 + 0x1c0) = &LAB_14455cc1c;
  *(ulonglong *)(lVar13 + 0x1c8) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1f];
  local_3a8 = *(undefined8 **)(lVar13 + 0x200);
  uStack_320 = *(undefined8 *)(lVar13 + 0x208);
  local_398 = *(undefined ****)(lVar13 + 0x210);
  uStack_310 = *(undefined8 *)(lVar13 + 0x218);
  local_308 = *(undefined ***)(lVar13 + 0x220);
  puStack_300 = *(undefined1 **)(lVar13 + 0x228);
  local_2f8 = *(undefined8 *)(lVar13 + 0x230);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x238);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x230) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x238) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x220) = &PTR_LAB_14bd8d540;
  *(longlong **)(lVar13 + 0x228) = param_1;
  *(undefined8 *)(lVar13 + 0x210) = 0;
  *(ulonglong *)(lVar13 + 0x218) = CONCAT44(uStack_38c,uStack_390);
  *(undefined1 **)(lVar13 + 0x200) = &LAB_14455cc58;
  *(ulonglong *)(lVar13 + 0x208) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = local_398;
    if (local_398 == (undefined ***)0x0) {
      pppuVar16 = &local_388;
    }
    uStack_320 = uVar15;
    uStack_310 = uVar8;
    local_2f8 = uVar9;
    uStack_2f0 = uVar10;
    (*(code *)(*pppuVar16)[2])();
  }
  lVar13 = param_1[0x1f];
  local_3a8 = *(undefined8 **)(lVar13 + 0x240);
  uStack_320 = *(undefined8 *)(lVar13 + 0x248);
  local_398 = *(undefined ****)(lVar13 + 0x250);
  uStack_310 = *(undefined8 *)(lVar13 + 600);
  local_308 = *(undefined ***)(lVar13 + 0x260);
  puStack_300 = *(undefined1 **)(lVar13 + 0x268);
  local_2f8 = *(undefined8 *)(lVar13 + 0x270);
  uStack_2f0 = *(undefined8 *)(lVar13 + 0x278);
  uVar9 = local_2f8;
  uVar10 = uStack_2f0;
  local_318 = local_398;
  uVar8 = uStack_310;
  local_328 = local_3a8;
  uVar15 = uStack_320;
  *(ulonglong *)(lVar13 + 0x270) = CONCAT44(uStack_374,local_378);
  *(ulonglong *)(lVar13 + 0x278) = CONCAT44(uStack_36c,uStack_370);
  *(undefined ***)(lVar13 + 0x260) = &PTR_LAB_14bd8d560;
  *(longlong **)(lVar13 + 0x268) = param_1;
  *(undefined8 *)(lVar13 + 0x250) = 0;
  *(ulonglong *)(lVar13 + 600) = CONCAT44(uStack_38c,uStack_390);
  *(undefined1 **)(lVar13 + 0x240) = &LAB_14455cc94;
  *(ulonglong *)(lVar13 + 0x248) = CONCAT44(uStack_39c,uStack_3a0);
  uStack_320._4_4_ = (undefined4)(uStack_320 >> 0x20);
  uStack_310._4_4_ = (undefined4)((ulonglong)uStack_310 >> 0x20);
  local_2f8._4_4_ = (undefined4)((ulonglong)local_2f8 >> 0x20);
  uStack_2f0._4_4_ = (undefined4)((ulonglong)uStack_2f0 >> 0x20);
  local_378 = (undefined4)local_2f8;
  uStack_374 = local_2f8._4_4_;
  uStack_370 = (undefined4)uStack_2f0;
  uStack_36c = uStack_2f0._4_4_;
  local_388 = local_308;
  uStack_380 = puStack_300;
  uStack_390 = (undefined4)uStack_310;
  uStack_38c = uStack_310._4_4_;
  uStack_3a0 = (undefined4)uStack_320;
  uStack_39c = uStack_320._4_4_;
  uStack_320 = uVar15;
  uStack_310 = uVar8;
  local_2f8 = uVar9;
  uStack_2f0 = uVar10;
  if (local_3a8 != (undefined8 *)0x0) {
    pppuVar16 = &local_388;
    if (local_398 != (undefined ***)0x0) {
      pppuVar16 = local_398;
    }
    (*(code *)(*pppuVar16)[2])(pppuVar16);
  }
  (**(code **)(*param_1 + 0x2e8))(param_1,param_1[0x1f],0);
  local_3d8 = 0;
  local_3c8 = &PTR_LAB_14bd8d5e0;
  local_3e8 = &LAB_14455ccd0;
  local_3c0 = param_1;
  uVar11 = FUN_149616460(param_1[0x20] + 0x28,param_1[0x20] + 0xe8);
  *(undefined4 *)((longlong)param_1 + 0x39c) = uVar11;
  local_418 = 0;
  local_408 = &PTR_LAB_14bd8d600;
  local_428 = FUN_14455cd2e;
  local_400 = param_1;
  local_3f8 = param_1;
  FUN_1484c9b00(param_1[0x20] + 0x28,param_1[0x20] + 0xfc);
  local_458 = 0;
  local_448 = &PTR_LAB_14bd8d620;
  local_468 = &LAB_14455cf22;
  local_440 = param_1;
  uVar11 = FUN_14588c620(param_1[0x20] + 0x28,param_1[0x20] + 0xf0);
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar11;
  local_498 = 0;
  local_488 = &PTR_LAB_14bd8d640;
  local_4a8 = FUN_14455cf74;
  local_480 = param_1;
  uVar11 = FUN_14588c620(param_1[0x20] + 0x28,param_1[0x20] + 0x100);
  *(undefined4 *)(param_1 + 0x74) = uVar11;
  local_4d8 = 0;
  local_4c8 = &PTR_LAB_14bd8d660;
  local_4e8 = &LAB_14455d0e6;
  local_4c0 = param_1;
  FUN_1484c9b00(param_1[0x20] + 0x28,param_1[0x20] + 0xd9);
  local_518 = 0;
  local_508 = &PTR_LAB_14bd8d680;
  local_528 = FUN_14455d138;
  local_500 = param_1;
  FUN_1484c9b00(param_1[0x20] + 0x28,param_1[0x20] + 0xd8);
  local_558 = 0;
  local_548 = &PTR_LAB_14bd8d6a0;
  local_568 = &LAB_14455d1bc;
  local_540 = param_1;
  FUN_1484c9b00(param_1[0x20] + 0x28,param_1[0x20] + 0x108);
  local_598 = 0;
  local_588 = &PTR_LAB_14bd8d6c0;
  local_5a8 = &LAB_14455d20e;
  local_580 = param_1;
  FUN_1484c9b00(param_1[0x20] + 0x28,param_1[0x20] + 0x109);
  local_5d8 = 0;
  local_5c8 = &PTR_LAB_14bd8d6e0;
  local_5e8 = &LAB_14455d260;
  local_5c0 = param_1;
  FUN_14588c620(param_1[0x20] + 0x28,param_1[0x20] + 0x110);
  local_618 = 0;
  local_608 = &PTR_LAB_14bd8d700;
  local_628 = FUN_14455d2b2;
  local_600 = param_1;
  FUN_149616538(param_1[0x22] + 0x28,param_1[0x22] + 0xa8);
  local_658 = 0;
  local_648 = &PTR_LAB_14bd8d720;
  local_668 = &LAB_14455d31a;
  local_640 = param_1;
  FUN_1484de26e(param_1[0x22] + 0x28,param_1[0x22] + 0xb0);
  local_698 = 0;
  local_688 = &PTR_LAB_14bd8d740;
  local_6a8 = &LAB_14455d36c;
  local_680 = param_1;
  FUN_1484c9b00(param_1[0x22] + 0x28,param_1[0x22] + 0xb5);
  local_6d8 = 0;
  local_6c8 = &PTR_LAB_14bd8d760;
  local_6e8 = &LAB_14455d3da;
  local_6c0 = param_1;
  FUN_1484c9b00(param_1[0x22] + 0x28,param_1[0x22] + 0xb4);
  local_718 = 0;
  local_708 = &PTR_LAB_14bd8d780;
  local_728 = FUN_14455d42c;
  local_700 = param_1;
  uVar11 = FUN_148f8e3ec(param_1[0x20] + 0x28,param_1[0x20] + 0xa8);
  *(undefined4 *)(param_1 + 0x75) = uVar11;
  local_758 = 0;
  local_748 = &PTR_LAB_14bd8d800;
  local_768 = FUN_14455d700;
  local_740 = param_1;
  uVar11 = FUN_149616610(param_1[0x20] + 0x28,param_1[0x20] + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar11;
  lVar13 = (longlong)*(int *)(param_1[0x22] + 0x30);
  if (lVar13 != 0) {
    lVar14 = *(longlong *)(param_1[0x22] + 0x28);
    lVar19 = 0;
    do {
      (**(code **)(**(longlong **)(lVar14 + lVar19) + 0x10))();
      lVar19 = lVar19 + 8;
    } while (lVar13 * 8 != lVar19);
  }
  lVar13 = (longlong)*(int *)(param_1[0x20] + 0x30);
  if (lVar13 != 0) {
    lVar14 = *(longlong *)(param_1[0x20] + 0x28);
    lVar19 = 0;
    do {
      (**(code **)(**(longlong **)(lVar14 + lVar19) + 0x10))();
      lVar19 = lVar19 + 8;
    } while (lVar13 * 8 != lVar19);
  }
  FUN_1496166e8(param_1);
  puVar18 = &DAT_14cc20350;
  if (param_1[0x24] == 0) {
    puVar18 = &DAT_14cc20340;
  }
  plVar12 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar12 + 0x340))(plVar12,puVar18,3);
  if ((local_60 ^ (ulonglong)auStack_798) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149615e7e FUN_149615e7e body=148 status=ok
// SIG undefined FUN_149615e7e(void)

undefined8 FUN_149615e7e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14599c9a2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149615f13 FUN_149615f13 body=148 status=ok
// SIG undefined FUN_149615f13(void)

undefined8 FUN_149615f13(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f9862();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149615fa8 FUN_149615fa8 body=452 status=ok
// SIG undefined FUN_149615fa8(void)

void FUN_149615fa8(longlong *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  undefined4 local_44;
  void *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  local_38 = *(uint *)(param_1 + 0x68);
  lVar6 = (longlong)(int)local_38;
  pvVar1 = (void *)param_1[0x67];
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1411312f2(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar6 << 3);
  }
  lVar6 = FUN_14479d2ce(param_1[0x22] + 0xa8);
  if ((longlong)(int)local_38 != 0) {
    lVar4 = (longlong)(int)local_38 << 3;
    lVar5 = 0;
    do {
      if (*(longlong *)((longlong)local_40 + lVar5 * 8) == lVar6) {
        *(int *)(param_1 + 0x69) = (int)lVar5;
        if ((int)lVar5 == -1) goto LAB_149616057;
        goto LAB_149616098;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x69) = 0xffffffff;
LAB_149616057:
  uVar3 = FUN_14479d2ce(param_1[0x22] + 0xa8);
  uVar2 = local_38;
  lVar6 = (longlong)(int)local_38;
  local_38 = local_38 + 1;
  if (local_34 < local_38) {
    FUN_144769b64(&local_40,uVar2);
  }
  *(undefined8 *)((longlong)local_40 + lVar6 * 8) = uVar3;
  *(uint *)(param_1 + 0x69) = uVar2;
LAB_149616098:
  lVar6 = param_1[0x55];
  uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar3 = FUN_1485578f6(uVar3);
  pvVar1 = local_40;
  local_50 = (void *)0x0;
  lVar4 = (longlong)(int)local_38;
  local_48 = local_38;
  if (lVar4 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1411312f2(&local_50,local_38,0);
    memcpy(local_50,pvVar1,lVar4 << 3);
  }
  FUN_1485053d2(lVar6,&local_50,uVar3,0);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14961616e FUN_14961616e body=218 status=ok
// SIG undefined FUN_14961616e(void)

undefined8
FUN_14961616e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14aeff220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bd8d360;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1484d65de(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149616260 FUN_149616260 body=511 status=ok
// SIG undefined FUN_149616260(void)

void FUN_149616260(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x50);
  local_70 = 1.79769313486232e+308;
  local_68 = 1.79769313486232e+308;
  local_60 = 1.79769313486232e+308;
  local_58 = -1.79769313486232e+308;
  local_50 = -1.79769313486232e+308;
  local_48 = -1.79769313486232e+308;
  dVar1 = dVar3 * -50.0;
  if (dVar1 < 1.79769313486232e+308) {
    local_70 = dVar1;
  }
  if (-1.79769313486232e+308 < dVar1) {
    local_58 = dVar1;
  }
  if (dVar1 < 1.79769313486232e+308) {
    local_68 = dVar1;
  }
  dVar4 = dVar3 * 0.0;
  if (-1.79769313486232e+308 < dVar1) {
    local_50 = dVar1;
  }
  if (dVar4 < 1.79769313486232e+308) {
    local_60 = dVar4;
  }
  if (-1.79769313486232e+308 < dVar4) {
    local_48 = dVar4;
  }
  dVar3 = dVar3 * 50.0;
  if (dVar3 < local_70) {
    local_70 = dVar3;
  }
  if (local_58 < dVar3) {
    local_58 = dVar3;
  }
  if (dVar3 < local_68) {
    local_68 = dVar3;
  }
  if (local_50 < dVar3) {
    local_50 = dVar3;
  }
  if (dVar4 < local_60) {
    local_60 = dVar4;
  }
  if (local_48 < dVar4) {
    local_48 = dVar4;
  }
  uVar2 = FUN_1484e0f44(*(undefined8 *)(param_1 + 0xd8),DAT_14cc203b8);
  FUN_1484d04e2(uVar2);
  local_80 = 0x3fa999999999999a;
  local_88 = 0x3fe0000000000000;
  local_78 = 0;
  FUN_149611d14(uVar2,*(undefined8 *)(param_1 + 0x128),&local_70,&DAT_14bd8c064);
  FUN_14045627c(uVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x100) + 0xd8),1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149616460 FUN_149616460 body=215 status=ok
// SIG undefined FUN_149616460(void)

int FUN_149616460(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_149640d82(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149616538 FUN_149616538 body=215 status=ok
// SIG undefined FUN_149616538(void)

int FUN_149616538(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xe0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1496410a0(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149616610 FUN_149616610 body=215 status=ok
// SIG undefined FUN_149616610(void)

int FUN_149616610(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xf0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14964144c(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496166e8 FUN_1496166e8 body=262 status=ok
// SIG undefined FUN_1496166e8(void)

void FUN_1496166e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x2b8);
  plVar4 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149fab260;
  FUN_146bff712(plVar4 + 2,uVar3);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x388) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x390);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x390) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x388) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x390);
    if (plVar4 == plVar5) {
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
      goto LAB_14961677e;
    }
    *(longlong **)(param_1 + 0x390) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_14961677e;
  }
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
  if (plVar4 == (longlong *)0x0) {
    return;
  }
LAB_14961677e:
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
      return;
    }
  }
  return;
}



// FUNCTION 1496167ee FUN_1496167ee body=770 status=ok
// SIG undefined FUN_1496167ee(void)

void FUN_1496167ee(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8 [11];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)param_1[0x20];
  FUN_140056680(&local_50,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[0x22] + 0x2a0))
            ((longlong *)param_1[0x22],param_1,&DAT_14cc20390);
  plVar3 = (longlong *)param_1[0x23];
  FUN_140056680(&local_50,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1,&local_50);
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((int)param_1[0x28] == 1) {
    FUN_149616af2(param_1,1);
  }
  if (param_1[0x24] != 0) {
    FUN_148506398(param_1[0x24],1);
  }
  if (param_2 != '\x01') {
    if (((param_2 != '\x02') || ((char)param_1[0xc2] != '\x01')) ||
       ((param_1[0x24] == 0 && (*(int *)(param_1[0x57] + 0x170) < 1)))) goto LAB_149616a34;
    local_50 = L"AcceptChangesTitle";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"UCubeGridTool";
    local_48 = 0xd;
    FUN_1446e940c(local_68,&local_50);
    FUN_140208bae(local_60,local_68,local_64,L"Accept changes instead?");
    local_50 = L"AcceptChangesQuestion";
    local_48 = 0x15;
    FUN_1446e940c(local_6c,&local_50);
    local_50 = L"UCubeGridTool";
    local_48 = 0xd;
    FUN_1446e940c(local_70,&local_50);
    FUN_140208bae(&local_50,local_70,local_6c,
                  L"The tool is being cancelled, which normally discards all changes. Would you like to apply the changes instead?\n\n Selecting \"No\" or closing this window will discard the tool\'s current work."
                 );
    iVar1 = FUN_146815484(1,&local_50,local_60);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
    if (iVar1 != 1) goto LAB_149616a34;
  }
  if ((char)param_1[0xc2] == '\x01') {
    FUN_149616bd4(param_1,1);
  }
LAB_149616a34:
  FUN_140457ffc(param_1[0x55] + 0x40,param_1);
  FUN_143b84538(param_1[0x55],local_c8);
  if (local_c8[0] != (undefined8 *)0x0) {
    (**(code **)*local_c8[0])(local_c8[0],1);
  }
  if (param_1[0x1b] != 0) {
    FUN_1484e0e5e();
    param_1[0x1b] = 0;
  }
  (**(code **)(*(longlong *)param_1[0x19] + 0x2a8))();
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  plVar3 = (longlong *)FUN_148451354(uVar2);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1);
  FUN_149617240(param_1);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149616af2 FUN_149616af2 body=226 status=ok
// SIG undefined FUN_149616af2(void)

void FUN_149616af2(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((int)param_1[0x56] != 0) {
    lVar2 = 0x3d0;
    do {
      if (*(char *)((longlong)param_1 + lVar2) == '\x01') {
        *(undefined2 *)((longlong)param_1 + 0x2b5) = 0x101;
        *(undefined1 *)((longlong)param_1 + 0x2b7) = 0;
        if (param_2 != '\0') {
          FUN_1496179e4(param_1);
        }
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x3d4);
  }
  FUN_146c83e96(param_1 + 0xaa,1,1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar1 + 0x340))(plVar1,&DAT_14cc20320,2);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],1);
  FUN_149617240(param_1);
  *(undefined1 *)(param_1[0x20] + 0x1a0) = 0;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  FUN_149612dca(param_1);
  return;
}



// FUNCTION 149616bd4 FUN_149616bd4 body=1643 status=ok
// SIG undefined FUN_149616bd4(void)

void FUN_149616bd4(longlong *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_718 [32];
  wchar_t **local_6f8;
  longlong *local_6e8;
  longlong local_6e0;
  undefined1 local_6c8 [4];
  undefined1 local_6c4 [4];
  undefined1 local_6c0 [4];
  undefined1 local_6bc [4];
  wchar_t *local_6b8;
  undefined8 uStack_6b0;
  longlong local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  longlong local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong lStack_640;
  longlong local_638;
  undefined8 uStack_630;
  undefined1 local_628 [16];
  undefined1 local_618 [1488];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_718;
  plVar5 = (longlong *)param_1[0x24];
  if (*(int *)(param_1[0x57] + 0x170) < 1) {
    if (plVar5 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x2a0))();
      if (cVar1 != '\0') {
        local_6b8 = L"DestroyComponentTitle";
        uStack_6b0._0_4_ = 0x15;
        FUN_1446e940c(local_6bc,&local_6b8);
        local_6b8 = L"UCubeGridTool";
        uStack_6b0._0_4_ = 0xd;
        FUN_1446e940c(local_6c0,&local_6b8);
        FUN_140208bae(&local_6e8,local_6c0,local_6bc,L"Delete mesh components?");
        local_6b8 = L"DestroyComponentQuestion";
        uStack_6b0._0_4_ = 0x18;
        FUN_1446e940c(local_6c4,&local_6b8);
        local_6b8 = L"UCubeGridTool";
        uStack_6b0 = CONCAT44(uStack_6b0._4_4_,0xd);
        FUN_1446e940c(local_6c8,&local_6b8);
        FUN_140208bae(&local_6b8,local_6c8,local_6c4,
                      L"The tool has entirely cut away the source mesh, which is not permitted. Do you actually want to delete the mesh component? Note that the actor will remain. Choosing No will leave the component unchanged instead."
                     );
        uVar2 = FUN_146815484(1,&local_6b8,&local_6e8);
        if (local_6b8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_6b8 + 0x10))();
        }
        if (local_6e8 != (longlong *)0x0) {
          (**(code **)(*local_6e8 + 0x10))();
        }
        if ((uVar2 & 0xfffffffb) != 0) {
          lVar4 = FUN_1485062e8(param_1[0x24]);
          if (lVar4 != 0) {
            lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
            local_6b8 = L"DestroyComponentTransaction";
            uStack_6b0._0_4_ = 0x1b;
            FUN_1446e940c(&local_6e8,&local_6b8);
            local_6b8 = L"UCubeGridTool";
            uStack_6b0 = CONCAT44(uStack_6b0._4_4_,0xd);
            FUN_1446e940c(local_6bc,&local_6b8);
            FUN_140208bae(&local_6b8,local_6bc,&local_6e8,L"Delete Mesh Component");
            (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_6b8);
            if (local_6b8 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_6b8 + 0x10))();
            }
            plVar5 = (longlong *)FUN_1485062e8(param_1[0x24]);
            (**(code **)(*plVar5 + 0x420))(plVar5,0);
            lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
            (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
          }
        }
      }
    }
    goto LAB_149616d2e;
  }
  if (plVar5 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar5 + 0x2a0))();
    if (cVar1 != '\0') {
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_6b8 = L"CubeGridToolEditTransactionName";
      uStack_6b0._0_4_ = 0x1f;
      FUN_1446e940c(&local_6e8,&local_6b8);
      local_6b8 = L"UCubeGridTool";
      uStack_6b0 = CONCAT44(uStack_6b0._4_4_,0xd);
      FUN_1446e940c(local_6bc,&local_6b8);
      FUN_140208bae(&local_6b8,local_6bc,&local_6e8,L"Cube Grid Edit");
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_6b8);
      if (local_6b8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_6b8 + 0x10))();
      }
      local_6b8 = (wchar_t *)0x0;
      uStack_6b0 = 0;
      FUN_14113129a(&local_6b8,param_1 + 0x67);
      local_6e8 = (longlong *)0x1000000010101;
      local_6f8 = &local_6b8;
      FUN_148506f34(param_1[0x24],param_1[0x57],1);
      lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
      if (local_6b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_149616d2e;
    }
    cVar1 = (**(code **)(*(longlong *)param_1[0x24] + 0x2a0))();
    if ((cVar1 != '\0') || (*(int *)(param_1[0x57] + 0x170) < 1)) goto LAB_149616d2e;
    local_6b8 = L"RecreateAssetTitle";
    uStack_6b0._0_4_ = 0x12;
    FUN_1446e940c(local_6bc,&local_6b8);
    local_6b8 = L"UCubeGridTool";
    uStack_6b0._0_4_ = 0xd;
    FUN_1446e940c(local_6c0,&local_6b8);
    FUN_140208bae(&local_6e8,local_6c0,local_6bc,L"Recreate Mesh Asset?");
    local_6b8 = L"RecreateAssetQuestion";
    uStack_6b0._0_4_ = 0x15;
    FUN_1446e940c(local_6c4,&local_6b8);
    local_6b8 = L"UCubeGridTool";
    uStack_6b0 = CONCAT44(uStack_6b0._4_4_,0xd);
    FUN_1446e940c(local_6c8,&local_6b8);
    FUN_140208bae(&local_6b8,local_6c8,local_6c4,
                  L"The underlying asset that this tool was operating on seems to no longer be valid (it was likely forcibly removed). Would you like to recreate a new asset from the tool\'s current working mesh? Selecting \"No\" or closing this window will discard the tool\'s current work."
                 );
    iVar3 = FUN_146815484(1,&local_6b8,&local_6e8);
    if (local_6b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_6b8 + 0x10))();
    }
    if (local_6e8 != (longlong *)0x0) {
      (**(code **)(*local_6e8 + 0x10))();
    }
    if (iVar3 != 1) goto LAB_149616d2e;
  }
  lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_6b8 = L"CubeGridToolCreateTransactionName";
  uStack_6b0._0_4_ = 0x21;
  FUN_1446e940c(&local_6e8,&local_6b8);
  local_6b8 = L"UCubeGridTool";
  uStack_6b0 = CONCAT44(uStack_6b0._4_4_,0xd);
  FUN_1446e940c(local_6bc,&local_6b8);
  FUN_140208bae(&local_6b8,local_6bc,&local_6e8,L"Cube Grid Create New");
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,&local_6b8);
  if (local_6b8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_6b8 + 0x10))();
  }
  FUN_14850577a(&local_6b8,1);
  local_698 = param_1[0x27];
  if (DAT_14c950c29 == '\x01') {
    if (local_698 == 0) {
      local_698 = 0;
    }
    else {
      FUN_1456cec3c();
      local_698 = param_1[0x27];
    }
  }
  local_688 = (undefined4)param_1[0x5b];
  uStack_684 = *(undefined4 *)((longlong)param_1 + 0x2dc);
  uStack_680 = (undefined4)param_1[0x5c];
  uStack_67c = *(undefined4 *)((longlong)param_1 + 0x2e4);
  local_678 = (undefined4)param_1[0x5d];
  uStack_674 = *(undefined4 *)((longlong)param_1 + 0x2ec);
  uStack_670 = (undefined4)param_1[0x5e];
  uStack_66c = *(undefined4 *)((longlong)param_1 + 0x2f4);
  local_668 = (undefined4)param_1[0x5f];
  uStack_664 = *(undefined4 *)((longlong)param_1 + 0x2fc);
  uStack_660 = (undefined4)param_1[0x60];
  uStack_65c = *(undefined4 *)((longlong)param_1 + 0x304);
  local_658 = param_1[0x61];
  local_648 = param_1[0x62];
  lStack_640 = param_1[99];
  local_638 = param_1[100];
  uStack_650 = 0;
  uStack_630 = 0;
  FUN_14020fad6(local_628,L"CubeGridToolOutput");
  FUN_1457c8d02(local_618,param_1 + 0x67);
  FUN_148505bae(&local_6b8,param_1[0x57]);
  (**(code **)(*(longlong *)param_1[0x23] + 0x2c0))((longlong *)param_1[0x23],&local_6b8);
  uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_148505c7a(&local_6e8,uVar6,&local_6b8);
  if (((char)local_6e8 == '\0') && (param_2 == '\x01' && local_6e0 != 0)) {
    uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485509b4(uVar6,local_6e0);
  }
  lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  FUN_1484c7624(&local_6b8);
LAB_149616d2e:
  if ((local_48 ^ (ulonglong)auStack_718) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149617240 FUN_149617240 body=100 status=ok
// SIG undefined FUN_149617240(void)

void FUN_149617240(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  FUN_1485564be(&local_20,uVar1);
  if (local_18 != (longlong *)0x0 && local_20 != 0) {
    (**(code **)(*local_18 + 0x30))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496172a6 FUN_1496172a6 body=1228 status=ok
// SIG undefined FUN_1496172a6(void)

void FUN_1496172a6(longlong *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined8 *local_138;
  longlong local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  undefined8 uStack_110;
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong *local_f0 [2];
  wchar_t *local_e0;
  undefined4 local_d8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((int)param_1[0x28] == 1) {
    FUN_149616af2(param_1,1);
  }
  if ((char)param_1[0xc2] == '\x01') {
    local_e0 = L"AcceptAndStartNewTransaction";
    local_d8 = 0x1c;
    FUN_1446e940c(&local_118,&local_e0);
    local_e0 = L"UCubeGridTool";
    local_d8 = 0xd;
    FUN_1446e940c(&local_130,&local_e0);
    FUN_140208bae(local_f0,&local_130,&local_118,L"Cube Grid Accept and Start New");
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,local_f0);
    FUN_149616bd4(param_1,0);
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_f8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_f8 = &PTR_LAB_14bd8d820;
    *(undefined1 *)(local_f8 + 1) = 0;
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28,param_1,&local_f8,local_f0);
    if (param_1[0x24] != 0) {
      FUN_148506398(param_1[0x24],1);
      lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
      puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      lVar4 = param_1[0x24];
      *puVar6 = &PTR_LAB_14bd8d8d0;
      puVar6[1] = 0;
      FUN_14485c47a(puVar6 + 1,lVar4);
      local_100 = puVar6;
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,param_1,&local_100,local_f0);
    }
    lVar4 = param_1[0x57];
    if (0 < *(int *)(lVar4 + 0x170)) {
      local_118 = (void *)0x0;
      uStack_110 = 0;
      uVar9 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
      uVar11 = 0;
      if ((uVar9 != 0) &&
         (uVar11 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
        uVar3 = 1;
        uVar7 = 1;
        if (1 < (int)uVar9) {
          uVar3 = uVar9;
        }
        do {
          uVar11 = uVar3;
          if (uVar3 == uVar7) break;
          uVar8 = uVar7 >> 9;
          uVar10 = uVar7 & 0x1ff;
          uVar11 = uVar7;
          uVar7 = uVar7 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar8] +
                                             (ulonglong)uVar10 * 2) - 1U));
      }
      if (uVar11 != uVar9) {
        do {
          uVar2 = uStack_110;
          lVar5 = (longlong)(int)uStack_110;
          uVar3 = (int)uStack_110 + 1;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
          if (uStack_110._4_4_ < uVar3) {
            FUN_1446f48e2(&local_118,uVar2 & 0xffffffff);
          }
          *(uint *)((longlong)local_118 + lVar5 * 4) = uVar11;
          uVar3 = uVar11 + 1;
          if ((int)(uVar11 + 1) < (int)uVar9) {
            uVar3 = uVar9;
          }
          do {
            uVar7 = uVar3;
            if (uVar3 - 1 == uVar11) break;
            uVar11 = uVar11 + 1;
            uVar7 = uVar11;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar4 + 0x148) +
                                                 (ulonglong)(uVar11 >> 9) * 8) +
                                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
          uVar11 = uVar7;
        } while (uVar11 != uVar9);
        lVar4 = param_1[0x57];
      }
      FUN_146c2c368(&local_e0,lVar4);
      FUN_146c2c4e8(&local_e0);
      pvVar1 = local_118;
      local_128 = (void *)0x0;
      lVar4 = (longlong)(int)uStack_110;
      local_120 = (int)uStack_110;
      if (lVar4 == 0) {
        local_11c = 0;
      }
      else {
        FUN_144a06ca8(&local_128,uStack_110 & 0xffffffff,0);
        memcpy(local_128,pvVar1,lVar4 << 2);
        pvVar1 = local_128;
        lVar4 = (longlong)local_120;
        if (lVar4 != 0) {
          lVar5 = 0;
          do {
            FUN_146c2c9fe(&local_e0,*(undefined4 *)((longlong)pvVar1 + lVar5),1);
            lVar5 = lVar5 + 4;
          } while (lVar4 * 4 != lVar5);
        }
        if (local_128 != (void *)0x0) {
          FUN_1400020a8(local_128);
        }
      }
      local_130 = param_1[0x57];
      FUN_146bc603c(&local_130,&local_118,1);
      lVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_146c2caf6(&local_e0,&local_140);
      local_138 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      lVar4 = local_140;
      local_140 = 0;
      *local_138 = &PTR_LAB_14bd8d990;
      local_138[1] = lVar4;
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,param_1,&local_138,local_f0);
      lVar4 = local_140;
      if (local_140 != 0) {
        FUN_146c2a142(local_140);
        FUN_1400020a8(lVar4);
      }
      FUN_146c2c40e(&local_e0);
      if (local_118 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar4 = param_1[0x59];
    FUN_146bee918(lVar4,0);
    *(ulonglong *)(lVar4 + 0x10) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar4 + 8) + 0x214) +
               *(int *)(*(longlong *)(lVar4 + 8) + 0x218));
    FUN_1496166e8(param_1);
    *(undefined1 *)((longlong)param_1 + 0x2b5) = 0;
    *(undefined4 *)(param_1 + 0x56) = 0;
    FUN_143b844a2(param_1[0x55]);
    FUN_14851bbe8(*(undefined8 *)(param_1[0x55] + 0x58),param_1[0x57],1,0xf);
    lVar4 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149617774 FUN_149617774 body=108 status=ok
// SIG undefined FUN_149617774(void)

void FUN_149617774(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_148505016();
  }
  if (*(int *)(param_1 + 0x398) != 0) {
    FUN_1496177e0(param_1);
    *(undefined4 *)(param_1 + 0x398) = 0;
  }
  if ((*(char *)(param_1 + 0x2b5) == '\x01') &&
     ((*(char *)(param_1 + 0x2b4) != '\x01' ||
      (*(char *)(*(longlong *)(param_1 + 0x2a8) + 0x91) == '\x01')))) {
    FUN_1496179e4(param_1);
    return;
  }
  return;
}



// FUNCTION 1496177e0 FUN_1496177e0 body=406 status=ok
// SIG undefined FUN_1496177e0(void)

void FUN_1496177e0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switch(param_2) {
  case 1:
    break;
  case 2:
    break;
  case 3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 4:
    goto LAB_1496178f8;
  case 5:
LAB_1496178f8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 6:
    goto LAB_14961799f;
  case 7:
LAB_14961799f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  case 9:
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0xb0);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x1c8);
      puVar2 = &DAT_14c846480;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)(lVar1 + 0x240);
      }
      local_78 = *puVar2;
      uStack_70 = puVar2[1];
      local_68 = puVar2[2];
      uStack_60 = puVar2[3];
      local_58 = *(undefined4 *)(puVar2 + 4);
      uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x24);
      uStack_50 = *(undefined4 *)(puVar2 + 5);
      uStack_4c = *(undefined4 *)((longlong)puVar2 + 0x2c);
      local_48 = *(undefined4 *)(puVar2 + 6);
      uStack_44 = *(undefined4 *)((longlong)puVar2 + 0x34);
      uStack_40 = *(undefined4 *)(puVar2 + 7);
      uStack_3c = *(undefined4 *)((longlong)puVar2 + 0x3c);
      local_38 = (undefined4)DAT_14c846510;
      uStack_34 = DAT_14c846510._4_4_;
      uStack_30 = (undefined4)DAT_14c846518;
      uStack_2c = DAT_14c846518._4_4_;
      local_28 = DAT_14c846520;
      uStack_20 = 0;
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x330))
                (*(longlong **)(param_1 + 0xc0),&local_78,1);
    }
  default:
    if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1496179e4 FUN_1496179e4 body=2323 status=ok
// SIG undefined FUN_1496179e4(void)

void FUN_1496179e4(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  char cVar19;
  int iVar20;
  longlong lVar21;
  double *pdVar22;
  undefined8 *puVar23;
  uint uVar24;
  uint uVar25;
  double *pdVar26;
  byte bVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 *local_240;
  longlong *local_238;
  longlong lStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  code *local_1d0;
  longlong **local_1c8;
  void *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined1 local_1ac [4];
  longlong *local_1a8 [2];
  undefined1 *local_198 [2];
  undefined8 local_188;
  undefined **local_178;
  longlong *local_170;
  wchar_t *local_158;
  undefined4 local_150;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  *(undefined2 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2b6) = 0;
  local_158 = L"CubeGridToolTransactionName";
  local_150 = 0x1b;
  FUN_1446e940c(&local_238,&local_158);
  local_158 = L"UCubeGridTool";
  local_150 = 0xd;
  FUN_1446e940c(local_1ac,&local_158);
  FUN_140208bae(local_1a8,local_1ac,&local_238,L"Block Tool Change");
  lVar21 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar21 + 0x28) + 0x10))(lVar21 + 0x28,local_1a8);
  if ((0 < (int)param_1[0x56]) ||
     ((((int)param_1[0x56] < 0 && (param_1[0x65] != 0)) && (0 < *(int *)(param_1[0x65] + 8))))) {
    FUN_146c2c368(&local_158,param_1[0x57]);
    FUN_146c2c4e8(&local_158);
    local_1c0 = (void *)0x0;
    local_1b8 = *(int *)((undefined8 *)param_1[0x65] + 1);
    lVar21 = (longlong)local_1b8;
    pvVar2 = *(void **)param_1[0x65];
    if (lVar21 == 0) {
      local_1b4 = 0;
    }
    else {
      FUN_144a06ca8(&local_1c0,local_1b8,0);
      memcpy(local_1c0,pvVar2,lVar21 << 2);
      pvVar2 = local_1c0;
      lVar21 = (longlong)local_1b8;
      if (lVar21 != 0) {
        lVar28 = 0;
        do {
          FUN_146c2c9fe(&local_158,*(undefined4 *)((longlong)pvVar2 + lVar28),1);
          lVar28 = lVar28 + 4;
        } while (lVar21 * 4 != lVar28);
      }
      if (local_1c0 != (void *)0x0) {
        FUN_1400020a8(local_1c0);
      }
    }
    pdVar26 = (double *)param_1[0x55];
    local_1d0 = FUN_14455d9d4;
    local_238 = param_1;
    local_1c8 = &local_238;
    cVar19 = FUN_148505296(pdVar26,&local_1d0,0);
    if (cVar19 == '\0') {
      *(undefined4 *)(param_1 + 0x56) = 0;
      FUN_146c2c40e(&local_158);
      goto LAB_149617bf6;
    }
    lVar21 = *(longlong *)(*(longlong *)(param_1[0x55] + 0x58) + 0x48);
    if (lVar21 == 0) {
      dVar42 = 0.0;
      dVar43 = 0.0;
      dVar35 = 0.0;
      dVar36 = 1.0;
      dVar33 = 1.0;
      dVar34 = 1.0;
      uVar29 = 0;
      uVar30 = 0x3ff00000;
      uVar31 = 0;
      uVar32 = 0;
      dVar44 = 0.0;
      dVar45 = 0.0;
      dVar37 = 0.0;
      dVar41 = 0.0;
      pdVar22 = (double *)0x0;
    }
    else {
      lVar21 = *(longlong *)(lVar21 + 0x1c8);
      pdVar26 = (double *)(lVar21 + 0x240);
      pdVar22 = (double *)&DAT_14c846480;
      if (lVar21 != 0) {
        pdVar22 = pdVar26;
      }
      dVar37 = *pdVar22;
      dVar41 = pdVar22[1];
      dVar35 = pdVar22[2];
      dVar36 = pdVar22[3];
      dVar44 = pdVar22[4];
      dVar45 = pdVar22[5];
      dVar42 = pdVar22[6];
      dVar43 = pdVar22[7];
      dVar33 = pdVar22[8];
      dVar34 = pdVar22[9];
      uVar29 = *(undefined4 *)(pdVar22 + 10);
      uVar30 = *(undefined4 *)((longlong)pdVar22 + 0x54);
      uVar31 = *(undefined4 *)(pdVar22 + 0xb);
      uVar32 = *(undefined4 *)((longlong)pdVar22 + 0x5c);
    }
    lVar21 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x60] - dVar45));
    auVar7._8_4_ = (int)lVar21;
    auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5f] - dVar44));
    auVar7._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    iVar20 = movmskpd((int)pdVar22,auVar7);
    lVar21 = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - dVar43));
    auVar39._8_4_ = (int)lVar21;
    auVar39._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x61] - dVar42));
    auVar39._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    uVar24 = movmskpd((int)pdVar26,auVar39);
    if ((uVar24 & 0x3fffffff) == 0 && iVar20 == 0) {
      lVar21 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5c] - dVar41));
      auVar9._8_4_ = (int)lVar21;
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5b] - dVar37));
      auVar9._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      uVar24 = movmskpd(iVar20,auVar9);
      lVar21 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5e] - dVar36));
      auVar8._8_4_ = (int)lVar21;
      auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5d] - dVar35));
      auVar8._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar20 = movmskpd(0,auVar8);
      uVar25 = iVar20 << 2 | uVar24;
      if (uVar25 != 0) {
        auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5c] + dVar41));
        auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5b] + dVar37));
        uVar24 = movmskpd(uVar24,auVar4);
        auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5e] + dVar36));
        auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x5d] + dVar35));
        uVar25 = movmskpd(uVar25,auVar5);
        if ((uVar25 & 0x3fffffff) != 0 || uVar24 != 0) goto LAB_149617e77;
      }
      lVar21 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[99] - dVar34));
      auVar3._8_4_ = (int)lVar21;
      auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0x62] - dVar33));
      auVar3._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar20 = movmskpd(uVar24,auVar3);
      auVar6._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(0.0 - (double)CONCAT44(uVar32,uVar31)));
      auVar6._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS((double)param_1[100] - (double)CONCAT44(uVar30,uVar29)));
      uVar24 = movmskpd(0,auVar6);
      if ((uVar24 & 0x3fffffff) != 0 || iVar20 != 0) goto LAB_149617e77;
    }
    else {
LAB_149617e77:
      lVar28 = (**(code **)(*param_1 + 0x2c8))(param_1);
      lVar21 = *(longlong *)(*(longlong *)(param_1[0x55] + 0x58) + 0x48);
      if (lVar21 == 0) {
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = (longlong *)0x0;
        lStack_230 = 0;
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        uVar49 = 0x3ff00000;
        uVar50 = 0;
        uVar51 = 0x3ff00000;
        uVar52 = 0;
        uVar53 = 0x3ff00000;
        uVar54 = 0;
        uVar55 = 0x3ff00000;
        uVar56 = 0;
        uVar57 = 0;
      }
      else {
        lVar21 = *(longlong *)(lVar21 + 0x1c8);
        puVar23 = &DAT_14c846480;
        if (lVar21 != 0) {
          puVar23 = (undefined8 *)(lVar21 + 0x240);
        }
        uVar29 = *(undefined4 *)puVar23;
        uVar30 = *(undefined4 *)((longlong)puVar23 + 4);
        uVar31 = *(undefined4 *)(puVar23 + 1);
        uVar32 = *(undefined4 *)((longlong)puVar23 + 0xc);
        uVar46 = *(undefined4 *)(puVar23 + 2);
        uVar47 = *(undefined4 *)((longlong)puVar23 + 0x14);
        uVar48 = *(undefined4 *)(puVar23 + 3);
        uVar49 = *(undefined4 *)((longlong)puVar23 + 0x1c);
        local_228 = puVar23[6];
        uStack_220 = puVar23[7];
        local_238 = (longlong *)puVar23[4];
        lStack_230 = puVar23[5];
        uVar50 = *(undefined4 *)(puVar23 + 8);
        uVar51 = *(undefined4 *)((longlong)puVar23 + 0x44);
        uVar52 = *(undefined4 *)(puVar23 + 9);
        uVar53 = *(undefined4 *)((longlong)puVar23 + 0x4c);
        uVar54 = *(undefined4 *)(puVar23 + 10);
        uVar55 = *(undefined4 *)((longlong)puVar23 + 0x54);
        uVar56 = *(undefined4 *)(puVar23 + 0xb);
        uVar57 = *(undefined4 *)((longlong)puVar23 + 0x5c);
      }
      local_1d8 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
      lVar14 = param_1[0x5b];
      lVar15 = param_1[0x5c];
      lVar10 = param_1[0x5d];
      lVar11 = param_1[0x5e];
      lVar12 = param_1[0x5f];
      lVar13 = param_1[0x60];
      lVar21 = param_1[0x61];
      lVar16 = param_1[0x62];
      lVar17 = param_1[99];
      lVar1 = param_1[100];
      *local_1d8 = &PTR_LAB_14bd8da30;
      local_1d8[2] = lVar14;
      local_1d8[3] = lVar15;
      local_1d8[4] = lVar10;
      local_1d8[5] = lVar11;
      local_1d8[6] = lVar12;
      local_1d8[7] = lVar13;
      local_1d8[8] = lVar21;
      local_1d8[9] = 0;
      local_1d8[10] = lVar16;
      local_1d8[0xb] = lVar17;
      local_1d8[0xc] = lVar1;
      local_1d8[0xd] = 0;
      *(undefined4 *)(local_1d8 + 0xe) = uVar29;
      *(undefined4 *)((longlong)local_1d8 + 0x74) = uVar30;
      *(undefined4 *)(local_1d8 + 0xf) = uVar31;
      *(undefined4 *)((longlong)local_1d8 + 0x7c) = uVar32;
      *(undefined4 *)(local_1d8 + 0x10) = uVar46;
      *(undefined4 *)((longlong)local_1d8 + 0x84) = uVar47;
      *(undefined4 *)(local_1d8 + 0x11) = uVar48;
      *(undefined4 *)((longlong)local_1d8 + 0x8c) = uVar49;
      local_1d8[0x12] = local_238;
      local_1d8[0x13] = lStack_230;
      *(undefined4 *)(local_1d8 + 0x14) = (undefined4)local_228;
      *(undefined4 *)((longlong)local_1d8 + 0xa4) = local_228._4_4_;
      *(undefined4 *)(local_1d8 + 0x15) = (undefined4)uStack_220;
      *(undefined4 *)((longlong)local_1d8 + 0xac) = uStack_220._4_4_;
      *(undefined4 *)(local_1d8 + 0x16) = uVar50;
      *(undefined4 *)((longlong)local_1d8 + 0xb4) = uVar51;
      *(undefined4 *)(local_1d8 + 0x17) = uVar52;
      *(undefined4 *)((longlong)local_1d8 + 0xbc) = uVar53;
      *(undefined4 *)(local_1d8 + 0x18) = uVar54;
      *(undefined4 *)((longlong)local_1d8 + 0xc4) = uVar55;
      *(undefined4 *)(local_1d8 + 0x19) = uVar56;
      *(undefined4 *)((longlong)local_1d8 + 0xcc) = uVar57;
      (**(code **)(*(longlong *)(lVar28 + 0x28) + 0x20))
                ((longlong *)(lVar28 + 0x28),param_1,&local_1d8,local_1a8);
      lVar21 = *(longlong *)(*(longlong *)(param_1[0x55] + 0x58) + 0x48);
      if (lVar21 == 0) {
        local_208 = 0;
        local_228 = 0;
        uStack_220 = 0x3ff0000000000000;
        local_1f8 = 0;
        uStack_1f4 = 0x3ff00000;
        uStack_1f0 = 0;
        uStack_1ec = 0x3ff00000;
        local_1e8 = 0x3ff0000000000000;
        local_218 = 0;
        lStack_210 = 0;
        local_238 = (longlong *)0x0;
        lStack_230 = 0;
      }
      else {
        lVar21 = *(longlong *)(lVar21 + 0x1c8);
        puVar23 = &DAT_14c846480;
        if (lVar21 != 0) {
          puVar23 = (undefined8 *)(lVar21 + 0x240);
        }
        local_238 = (longlong *)*puVar23;
        lStack_230 = puVar23[1];
        local_228 = puVar23[2];
        uStack_220 = puVar23[3];
        local_218 = puVar23[4];
        lStack_210 = puVar23[5];
        local_208 = puVar23[6];
        local_1f8 = *(undefined4 *)(puVar23 + 8);
        uStack_1f4 = *(undefined4 *)((longlong)puVar23 + 0x44);
        uStack_1f0 = *(undefined4 *)(puVar23 + 9);
        uStack_1ec = *(undefined4 *)((longlong)puVar23 + 0x4c);
        local_1e8 = puVar23[10];
      }
      param_1[0x5b] = (longlong)local_238;
      param_1[0x5c] = lStack_230;
      param_1[0x5d] = local_228;
      param_1[0x5e] = uStack_220;
      param_1[0x5f] = local_218;
      param_1[0x60] = lStack_210;
      param_1[0x61] = local_208;
      *(undefined4 *)(param_1 + 0x62) = local_1f8;
      *(undefined4 *)((longlong)param_1 + 0x314) = uStack_1f4;
      *(undefined4 *)(param_1 + 99) = uStack_1f0;
      *(undefined4 *)((longlong)param_1 + 0x31c) = uStack_1ec;
      param_1[100] = local_1e8;
      uStack_200 = 0;
      uStack_1e0 = 0;
      local_188 = 0;
      local_178 = &PTR_LAB_14bd8dae0;
      local_198[0] = &LAB_14455d9fe;
      local_170 = param_1;
      FUN_1484f7652(param_1[0x19] + 0x30,local_198,&local_238,0);
    }
    if ((char)param_1[0xc2] == '\0') {
      *(undefined1 *)(param_1 + 0xc2) = 1;
      lVar21 = (**(code **)(*param_1 + 0x2c8))(param_1);
      local_240 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *local_240 = &PTR_LAB_14bd8d820;
      *(undefined1 *)(local_240 + 1) = 1;
      (**(code **)(*(longlong *)(lVar21 + 0x28) + 0x20))(lVar21 + 0x28,param_1,&local_240,local_1a8)
      ;
    }
    lVar21 = param_1[0x59];
    FUN_146bee918(lVar21,0);
    *(ulonglong *)(lVar21 + 0x10) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar21 + 8) + 0x214) +
               *(int *)(*(longlong *)(lVar21 + 8) + 0x218));
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)((longlong)param_1 + 0x344) < 0) {
      FUN_1448831cc(param_1 + 0x67,0);
    }
    FUN_14851b4f6(*(undefined8 *)(param_1[0x55] + 0x58),param_1 + 0x67);
    FUN_1496166e8(param_1);
    lVar21 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_146c2caf6(&local_158,&local_238);
    local_248 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    plVar18 = local_238;
    local_238 = (longlong *)0x0;
    *local_248 = &PTR_LAB_14bd8d990;
    local_248[1] = plVar18;
    (**(code **)(*(longlong *)(lVar21 + 0x28) + 0x20))(lVar21 + 0x28,param_1,&local_248,local_1a8);
    plVar18 = local_238;
    if (local_238 != (longlong *)0x0) {
      FUN_146c2a142(local_238);
      FUN_1400020a8(plVar18);
    }
    FUN_146c2c40e(&local_158);
  }
  if ((*(char *)((longlong)param_1 + 0x2b7) == '\x01') && (iVar20 = (int)param_1[0x56], iVar20 != 0)
     ) {
    dVar35 = (double)iVar20;
    bVar27 = (char)*(byte *)(param_1 + 0x36) >> 7;
    dVar36 = (double)param_1[(longlong)(char)(~bVar27 + (*(byte *)(param_1 + 0x36) ^ bVar27)) + 0x2a
                            ] / *(double *)(param_1[0x25] + 0x50);
    auVar38._0_8_ = dVar36 + 0.5;
    auVar38._8_8_ = 0;
    auVar39 = roundpd(auVar38,auVar38,1);
    if (9.999999747378752e-05 < ABS(dVar36 - auVar39._0_8_)) {
      auVar40._8_8_ = 0;
      auVar40._0_8_ = dVar36;
      if (iVar20 < 1) {
        auVar39 = roundpd(auVar40,auVar40,1);
        dVar44 = auVar39._0_8_;
        dVar45 = 1.0;
      }
      else {
        auVar39 = roundpd(auVar40,auVar40,2);
        dVar44 = auVar39._0_8_;
        dVar45 = -1.0;
      }
      dVar35 = (dVar44 - dVar36) + dVar35 + dVar45;
    }
    param_1[0x6a] = (longlong)(*(double *)(param_1[0x25] + 0x50) * dVar35 + (double)param_1[0x6a]);
    FUN_14961392c(param_1);
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  lVar21 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar21 + 0x28) + 0x18))(lVar21 + 0x28);
LAB_149617bf6:
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  if ((local_b0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496182f8 FUN_1496182f8 body=776 status=ok
// SIG undefined FUN_1496182f8(void)

void FUN_1496182f8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 local_150;
  undefined1 local_148;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  undefined1 local_118 [80];
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x378))(plVar5);
  plVar5 = param_1 + 0x7c;
  (**(code **)(*plVar6 + 0x18))(plVar6,plVar5);
  if ((int)param_1[0x28] == 1) {
    FUN_14961158e(local_118,param_1 + 0x2a,(char)param_1[0x36]);
    local_138 = param_1 + 0x86;
    FUN_148453350(local_138,param_2,plVar5);
    uVar8 = 0;
    do {
      lVar1 = param_1[0x25];
      FUN_1483ad9de(local_118,&local_130,uVar8 & 0xffffffff);
      FUN_146bed047(&local_c8,lVar1 + 0x20,&local_130);
      dVar2 = local_b8 + *(double *)(lVar1 + 0x18);
      dVar3 = local_c0 + *(double *)(lVar1 + 0x10);
      dVar4 = local_c8 + *(double *)(lVar1 + 8);
      if (*(char *)((longlong)param_1 + 0x42c) == '\x01') {
        fVar10 = (*(float *)((longlong)param_1 + 0x424) * 0.5) / 90.0;
      }
      else {
        local_c8 = dVar4;
        local_c0 = dVar3;
        local_b8 = dVar2;
        dVar11 = (double)FUN_148556b6a(plVar5,&local_c8,0x3fe0000000000000);
        fVar10 = (float)dVar11;
      }
      bVar9 = *(char *)((longlong)param_1 + uVar8 + 0x3d0) == '\0';
      uVar7 = (ulonglong)DAT_14cc2043e;
      if (bVar9) {
        uVar7 = 0x40;
      }
      local_130 = (&DAT_14c758c60)[uVar7];
      uVar7 = (ulonglong)DAT_14cc2043d;
      if (bVar9) {
        uVar7 = 0;
      }
      local_12c = (&DAT_14c758c60)[uVar7];
      uVar7 = (ulonglong)DAT_14cc2043c;
      if (bVar9) {
        uVar7 = 0x80;
      }
      local_128 = (&DAT_14c758c60)[uVar7];
      local_124 = (float)DAT_14cc2043f * 0.003921569;
      if (bVar9) {
        local_124 = 1.0;
      }
      local_148 = 0;
      local_150 = 0x40400000;
      local_158 = &local_130;
      local_c8 = dVar4;
      local_c0 = dVar3;
      local_b8 = dVar2;
      (**(code **)(param_1[0x86] + 0x20))(local_138,&local_c8,fVar10,0xc);
      uVar8 = uVar8 + 1;
    } while (uVar8 != 4);
    FUN_14845342a(local_138);
  }
  (**(code **)(*(longlong *)param_1[0x19] + 0x2b0))((longlong *)param_1[0x19],param_2);
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149618602 FUN_149618602 body=217 status=ok
// SIG undefined FUN_149618602(void)

void FUN_149618602(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_2 != 0) && (*(char *)(param_1 + 0x148) != '\0')) &&
      (*(longlong *)(param_1 + 0x128) != 0)) &&
     ((*(longlong *)(param_1 + 0x100) != 0 &&
      (*(char *)(*(longlong *)(param_1 + 0x100) + 0x10a) == '\x01')))) {
    lVar2 = (**(code **)(*param_3 + 0x10))(param_3);
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x128);
      local_78 = *(undefined8 *)(lVar1 + 0x20);
      uStack_70 = *(undefined8 *)(lVar1 + 0x28);
      local_68 = *(undefined4 *)(lVar1 + 0x30);
      uStack_64 = *(undefined4 *)(lVar1 + 0x34);
      uStack_60 = *(undefined4 *)(lVar1 + 0x38);
      uStack_5c = *(undefined4 *)(lVar1 + 0x3c);
      local_58 = *(undefined4 *)(lVar1 + 8);
      uStack_54 = *(undefined4 *)(lVar1 + 0xc);
      uStack_50 = *(undefined4 *)(lVar1 + 0x10);
      uStack_4c = *(undefined4 *)(lVar1 + 0x14);
      local_48 = *(undefined8 *)(lVar1 + 0x18);
      uStack_40 = 0;
      local_38 = 0x3ff0000000000000;
      uStack_30 = 0x3ff0000000000000;
      local_28 = 0x3ff0000000000000;
      uStack_20 = 0;
      FUN_149611eb2(param_1 + 0x150,&local_78,param_2,lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496186de FUN_1496186de body=237 status=ok
// SIG undefined FUN_1496186de(void)

void FUN_1496186de(longlong param_1,char param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  char cVar12;
  undefined8 uVar13;
  
  uVar13 = FUN_1484e0f44(*(undefined8 *)(param_1 + 0xd8),DAT_14cc203a0);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x228) != '\0') {
      FUN_1484d04e2(uVar13);
      return;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x228) != '\0') &&
       (cVar12 = FUN_149619df6(param_3,param_1 + 0x230), cVar12 == '\0')) {
      return;
    }
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    uVar9 = param_3[9];
    uVar10 = param_3[10];
    uVar11 = param_3[0xb];
    *(undefined4 *)(param_1 + 0x250) = param_3[8];
    *(undefined4 *)(param_1 + 0x254) = uVar9;
    *(undefined4 *)(param_1 + 600) = uVar10;
    *(undefined4 *)(param_1 + 0x25c) = uVar11;
    *(undefined4 *)(param_1 + 0x240) = uVar5;
    *(undefined4 *)(param_1 + 0x244) = uVar6;
    *(undefined4 *)(param_1 + 0x248) = uVar7;
    *(undefined4 *)(param_1 + 0x24c) = uVar8;
    *(undefined4 *)(param_1 + 0x230) = uVar1;
    *(undefined4 *)(param_1 + 0x234) = uVar2;
    *(undefined4 *)(param_1 + 0x238) = uVar3;
    *(undefined4 *)(param_1 + 0x23c) = uVar4;
    *(undefined1 *)(param_1 + 0x228) = 1;
    FUN_1484d04e2(uVar13);
    FUN_14961197c(uVar13,param_1 + 0x230,param_1 + 0x248,&DAT_14bd8c060,0x4000000000000000,
                  0x3fb999999999999a,0);
  }
  return;
}



// FUNCTION 1496187cc FUN_1496187cc body=352 status=ok
// SIG undefined FUN_1496187cc(void)

void FUN_1496187cc(longlong *param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != '\0') {
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar5 = *(undefined4 *)(param_2 + 5);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar1 = param_2[6];
    lVar3 = param_1[0x20];
    *(undefined4 *)(lVar3 + 0xa8) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(lVar3 + 0xac) = uVar4;
    *(undefined4 *)(lVar3 + 0xb0) = uVar5;
    *(undefined4 *)(lVar3 + 0xb4) = uVar6;
    *(undefined8 *)(lVar3 + 0xb8) = uVar1;
    (**(code **)(**(longlong **)
                   (*(longlong *)(param_1[0x20] + 0x28) + (longlong)(int)param_1[0x75] * 8) + 0x10))
              ();
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_58 = *(undefined4 *)(param_2 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_50 = *(undefined4 *)(param_2 + 3);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    FUN_1448052ee(&local_68,&local_40);
    lVar3 = param_1[0x20];
    *(undefined8 *)(lVar3 + 0xd0) = local_30;
    *(undefined4 *)(lVar3 + 0xc0) = local_40;
    *(undefined4 *)(lVar3 + 0xc4) = uStack_3c;
    *(undefined4 *)(lVar3 + 200) = uStack_38;
    *(undefined4 *)(lVar3 + 0xcc) = uStack_34;
    (**(code **)(**(longlong **)
                   (*(longlong *)(param_1[0x20] + 0x28) +
                   (longlong)*(int *)((longlong)param_1 + 0x3ac) * 8) + 0x10))();
    if (param_4 != '\0') {
      (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
    }
  }
  lVar3 = param_1[0x25];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar7 = param_2[6];
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar1 = param_2[3];
  uVar2 = param_2[2];
  *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar3 + 0xc) = uVar4;
  *(undefined4 *)(lVar3 + 0x10) = uVar5;
  *(undefined4 *)(lVar3 + 0x14) = uVar6;
  *(undefined8 *)(lVar3 + 0x18) = uVar7;
  *(undefined8 *)(lVar3 + 0x20) = uVar8;
  *(undefined8 *)(lVar3 + 0x28) = uVar9;
  *(undefined8 *)(lVar3 + 0x30) = uVar2;
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  FUN_1484e27dc(param_1[0x1b],param_2);
  if ((int)param_1[0x28] == 1) {
    FUN_149612c5e(param_1,0);
    if ((char)param_1[0x76] == '\0') {
      FUN_149619fda(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961892e FUN_14961892e body=1747 status=ok
// SIG undefined FUN_14961892e(void)

void FUN_14961892e(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  double *pdVar8;
  wchar_t **ppwVar9;
  longlong lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_19c [4];
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150 [7];
  double local_118;
  double local_110;
  undefined2 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8 [7];
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_a0 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_108 = 3;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = DAT_14c8464f0;
  auVar14 = roundpd(auVar14,auVar14,1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = DAT_14c8464e8;
  auVar15 = roundpd(auVar15,auVar15,1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = DAT_14c8464e0;
  auVar17 = roundpd(auVar17,auVar17,1);
  local_150[6] = auVar17._0_8_ + 0.5;
  local_118 = auVar15._0_8_ + 0.5;
  local_110 = auVar14._0_8_ + 0.0;
  cVar3 = FUN_149619002();
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*(longlong *)param_1[0x18] + 0x358))();
    if (cVar3 == '\0') {
      FUN_14961969e(param_1,1);
    }
    FUN_1484f2006(local_150 + 6,local_150 + 3);
    FUN_1484f2038(local_150 + 6,local_150);
    local_e8[2] = local_150[5];
    local_e8[0] = local_150[3];
    local_e8[1] = local_150[4];
    local_e8[3] = local_150[3];
    local_e8[4] = local_150[4];
    local_e8[5] = local_150[5];
    local_e8[6] = local_150[0];
    uStack_b0 = local_150[1];
    local_a8 = local_150[2];
    local_a0[0] = local_150[0];
    local_a0[1] = local_150[1];
    local_a0[2] = local_150[2];
    uVar4 = (ulonglong)((-(uint)(local_150[0] == local_150[3]) & 1) << 3);
    *(undefined8 *)((longlong)local_e8 + uVar4 + 0x18) =
         *(undefined8 *)((longlong)local_150 + uVar4);
    *(undefined8 *)((longlong)local_a0 + uVar4) =
         *(undefined8 *)((longlong)local_150 + uVar4 + 0x18);
    lVar10 = param_1[0x25];
    local_1f8 = param_2[2] - *(double *)(lVar10 + 0x18);
    dStack_200 = param_2[1] - *(double *)(lVar10 + 0x10);
    local_208 = (wchar_t *)(*param_2 - *(double *)(lVar10 + 8));
    FUN_146bf2028(lVar10 + 0x20,&local_198,&local_208);
    dVar12 = 1.0 / *(double *)(lVar10 + 0x50);
    local_1f8 = param_2[5];
    local_208 = (wchar_t *)param_2[3];
    dStack_200 = param_2[4];
    FUN_146bf2028(param_1[0x25] + 0x20,&local_168,&local_208);
    dVar18 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
    if (9.99999993922529e-09 < dVar18) {
      dVar18 = 1.0 / SQRT(dVar18);
      local_168 = local_168 * dVar18;
      dStack_160 = dStack_160 * dVar18;
      local_158 = local_158 * dVar18;
    }
    local_180 = local_168;
    dStack_178 = dStack_160;
    local_170 = local_158;
    dVar18 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
    if (9.99999993922529e-09 < dVar18) {
      local_170 = 1.0 / SQRT(dVar18);
      local_180 = local_168 * local_170;
      dStack_178 = dStack_160 * local_170;
      local_170 = local_158 * local_170;
    }
    local_198 = dVar12 * local_198;
    local_190 = local_190 * dVar12;
    local_188 = local_188 * dVar12;
    uVar11 = FUN_14844d5cc(&local_198,local_e8);
    uVar19 = (undefined4)uVar11;
    uVar20 = (undefined4)((ulonglong)uVar11 >> 0x20);
    iVar6 = 0;
    lVar10 = -3;
    pdVar8 = local_e8;
    do {
      pdVar8 = pdVar8 + 3;
      dVar12 = (double)FUN_14844d5cc(&local_198,pdVar8);
      if (dVar12 <= (double)CONCAT44(uVar20,uVar19) && (double)CONCAT44(uVar20,uVar19) != dVar12) {
        iVar6 = (int)lVar10 + 4;
      }
      if ((double)CONCAT44(uVar20,uVar19) <= dVar12) {
        dVar12 = (double)CONCAT44(uVar20,uVar19);
      }
      uVar19 = SUB84(dVar12,0);
      uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0);
    lVar10 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_208 = L"QuickAdjustGizmo";
    dStack_200._0_4_ = 0x10;
    FUN_1446e940c(&local_100,&local_208);
    local_208 = L"UCubeGridTool";
    dStack_200 = (double)CONCAT44(dStack_200._4_4_,0xd);
    FUN_1446e940c(local_19c,&local_208);
    FUN_140208bae(&local_208,local_19c,&local_100,L"Transform Gizmo");
    (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))(lVar10 + 0x28,&local_208);
    if (local_208 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_208 + 0x10))();
    }
    lVar10 = (longlong)iVar6;
    if ((char)param_1[0x29] != '\0') {
      dVar12 = *(double *)(param_1[0x25] + 0x50);
      dVar16 = local_e8[lVar10 * 3 + 2] * dVar12;
      dVar18 = local_e8[lVar10 * 3 + 1] * dVar12;
      dVar12 = dVar12 * local_e8[lVar10 * 3];
      plVar7 = param_1 + 0x2a;
      ppwVar9 = &local_208;
      for (lVar5 = 0xd; lVar5 != 0; lVar5 = lVar5 + -1) {
        *ppwVar9 = (wchar_t *)*plVar7;
        plVar7 = plVar7 + 1;
        ppwVar9 = ppwVar9 + 1;
      }
      dStack_1b0 = (double)param_1[0x35] - dVar16;
      local_1b8 = (double)param_1[0x34] - dVar18;
      dStack_1c0 = (double)param_1[0x33] - dVar12;
      local_1c8 = (double)param_1[0x32] - dVar16;
      dStack_1d0 = (double)param_1[0x31] - dVar18;
      local_1d8 = (double)param_1[0x30] - dVar12;
      dStack_1f0 = (double)param_1[0x2d] - dVar12;
      local_1f8 = (double)param_1[0x2c] - dVar16;
      dStack_200 = (double)param_1[0x2b] - dVar18;
      local_208 = (wchar_t *)((double)param_1[0x2a] - dVar12);
      local_1e8._8_8_ = (double)param_1[0x2f] - dVar16;
      local_1e8._0_8_ = (double)param_1[0x2e] - dVar18;
      (**(code **)(*param_1 + 0x390))(param_1,&local_208,1);
    }
    dVar2 = DAT_14c846520;
    dVar1 = DAT_14c846518;
    dVar16 = DAT_14c846510;
    lVar5 = param_1[0x25];
    local_100 = *(double *)(lVar5 + 0x50);
    local_f0 = local_e8[lVar10 * 3 + 2] * local_100;
    local_f8 = local_e8[lVar10 * 3 + 1] * local_100;
    local_100 = local_100 * local_e8[lVar10 * 3];
    FUN_146bed047(&local_208,lVar5 + 0x20);
    dVar12 = local_1f8 + *(double *)(lVar5 + 0x18);
    dVar13 = dStack_200 + *(double *)(lVar5 + 0x10);
    dVar18 = (double)local_208 + *(double *)(lVar5 + 8);
    FUN_144a7484c(param_1[0x20] + 0xc0,&local_208);
    local_1e8._8_4_ = SUB84(dVar13,0);
    local_1e8._0_8_ = dVar18;
    local_1e8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dStack_1d0 = 0.0;
    local_1c8 = dVar16;
    dStack_1c0 = dVar1;
    local_1b8 = dVar2;
    dStack_1b0 = 0.0;
    local_1d8 = dVar12;
    (**(code **)(*(longlong *)param_1[0x18] + 0x330))((longlong *)param_1[0x18],&local_208,1);
    lVar10 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
  }
  if ((local_80 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149619002 FUN_149619002 body=1691 status=ok
// SIG undefined FUN_149619002(void)

byte FUN_149619002(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 unaff_RBP;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_268 [32];
  byte *local_248;
  double *local_240;
  undefined8 local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  byte local_1a9;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  longlong *local_168;
  longlong local_158 [4];
  undefined1 local_138;
  byte local_130 [76];
  undefined4 local_e4;
  undefined4 local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar3 = *(longlong *)(param_1 + 0x128);
  dVar1 = *(double *)(lVar3 + 0x20);
  dVar7 = *(double *)(lVar3 + 0x28);
  dVar8 = *(double *)(lVar3 + 0x30) + *(double *)(lVar3 + 0x30);
  local_188 = dVar1 * dVar8 + *(double *)(lVar3 + 0x38) * (dVar7 + dVar7);
  dStack_180 = dVar8 * dVar7 - (dVar1 + dVar1) * *(double *)(lVar3 + 0x38);
  local_178 = 1.0 - ((dVar7 + dVar7) * dVar7 + dVar1 * (dVar1 + dVar1));
  local_240 = &local_1c8;
  local_248 = &local_1a9;
  FUN_14842069a(lVar3 + 8,&local_188,param_2,param_2 + 3);
  dVar1 = 1.79769313486232e+308;
  if (local_1a9 == 1) {
    lVar3 = *(longlong *)(param_1 + 0x128);
    local_178 = local_1b8 - *(double *)(lVar3 + 0x18);
    dStack_180 = local_1c0 - *(double *)(lVar3 + 0x10);
    local_188 = local_1c8 - *(double *)(lVar3 + 8);
    FUN_146bf2028(lVar3 + 0x20,&local_1f8,&local_188);
    local_1a8 = 1.0 / *(double *)(lVar3 + 0x50);
    dStack_1a0 = dStack_1f0 * local_1a8;
    local_1a8 = local_1a8 * local_1f8;
    local_198 = 0.0;
    lVar3 = *(longlong *)(param_1 + 0x128);
    uVar2 = *(undefined1 *)(lVar3 + 0x48);
    local_178 = param_2[2] - *(double *)(lVar3 + 0x18);
    dStack_180 = param_2[1] - *(double *)(lVar3 + 0x10);
    local_188 = *param_2 - *(double *)(lVar3 + 8);
    FUN_146bf2028(lVar3 + 0x20,&local_1f8,&local_188);
    uVar6 = 0xfd;
    if (0.0 <= (1.0 / *(double *)(lVar3 + 0x50)) * local_1e8) {
      uVar6 = 3;
    }
    FUN_1484f1f8e(&local_188,&local_1a8,uVar6,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff);
    param_3[2] = local_178;
    param_3[3] = dStack_170;
    *param_3 = local_188;
    param_3[1] = dStack_180;
    dVar1 = (local_1b8 - param_2[2]) * param_2[5] +
            (local_1c8 - *param_2) * param_2[3] + (local_1c0 - param_2[1]) * param_2[4];
  }
  if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x119) == '\0') {
    dVar1 = 1.79769313486232e+308;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x118) == '\x01') {
    memset(&local_188,0,0x100);
    local_b8 = 0xffffffff;
    local_188 = (double)CONCAT44(0x3f800000,(undefined4)local_188);
    local_e4 = 0xffffffff;
    local_248 = (byte *)0x0;
    cVar4 = FUN_14855784a(param_1,&local_188,param_2,0);
    if ((cVar4 != '\0') && (dVar7 = (double)dStack_180._0_4_, dVar7 < dVar1)) {
      local_238 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x110);
      local_248 = local_130;
      local_240 = param_3;
      FUN_149612434(*(undefined8 *)(param_1 + 0x128),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x11c),param_2,dVar7);
      dVar1 = dVar7;
    }
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    lVar3 = param_1 + 0x2d8;
    local_198 = param_2[5];
    local_1a8 = param_2[3];
    dStack_1a0 = param_2[4];
    FUN_146c5d1a4(lVar3,&local_188);
    local_218 = param_2[2];
    local_228 = *(undefined4 *)param_2;
    uStack_224 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_220 = *(undefined4 *)(param_2 + 1);
    uStack_21c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_146ba22f0(lVar3,&local_210);
    local_1e8 = local_200;
    local_1f8 = local_210;
    dStack_1f0 = dStack_208;
    local_1e0 = local_188;
    dStack_1d8 = dStack_180;
    local_1d0 = local_178;
    dVar7 = local_178 * local_178 + local_188 * local_188 + dStack_180 * dStack_180;
    if (9.99999993922529e-09 < dVar7) {
      local_1d0 = 1.0 / SQRT(dVar7);
      local_1e0 = local_188 * local_1d0;
      dStack_1d8 = dStack_180 * local_1d0;
      local_1d0 = local_178 * local_1d0;
    }
    local_210 = 1.79769313486232e+308;
    local_188 = 1.79769313486232e+308;
    local_178 = 0.0;
    local_168 = (longlong *)0x0;
    local_138 = 0;
    local_248 = (byte *)&local_188;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x38))
                      (*(longlong **)(param_1 + 0x2c8),&local_1f8,&local_210,&local_228);
    if (local_178 != 0.0) {
      plVar5 = local_168;
      if (local_168 == (longlong *)0x0) {
        plVar5 = local_158;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (cVar4 != '\0') {
      local_198 = (local_1d0 * local_210 + local_1e8) * *(double *)(param_1 + 800);
      dStack_1a0 = (dStack_1d8 * local_210 + dStack_1f0) * *(double *)(param_1 + 0x318);
      local_1a8 = (local_210 * local_1e0 + local_1f8) * *(double *)(param_1 + 0x310);
      FUN_146bed047(&local_188,lVar3);
      dVar7 = ((local_178 + *(double *)(param_1 + 0x308)) - param_2[2]) * param_2[5] +
              ((local_188 + *(double *)(param_1 + 0x2f8)) - *param_2) * param_2[3] +
              ((dStack_180 + *(double *)(param_1 + 0x300)) - param_2[1]) * param_2[4];
      if (dVar7 < dVar1) {
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x110);
        FUN_146c13dec(*(undefined8 *)(param_1 + 0x2b8),&local_1a8,local_228);
        FUN_146c5cfa8(lVar3,&local_188,&local_1a8);
        local_248 = (byte *)&local_188;
        local_240 = param_3;
        local_238 = uVar6;
        FUN_149612434(*(undefined8 *)(param_1 + 0x128),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0x11c),param_2,dVar7);
        dVar1 = dVar7;
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return dVar1 != 1.79769313486232e+308 | local_1a9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961969e FUN_14961969e body=149 status=ok
// SIG undefined FUN_14961969e(void)

void FUN_14961969e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*(longlong *)param_1[0x18] + 0x350))();
  lVar4 = param_1[0x1b];
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  uVar2 = FUN_1485583eb(uVar2,param_2 ^ 1);
  FUN_1484e21f8(lVar4,DAT_14cc203b8,uVar2);
  *(char *)(param_1[0x20] + 0xd9) = (char)param_2;
  lVar4 = (longlong)*(int *)(param_1[0x20] + 0x30);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(param_1[0x20] + 0x28);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x10))();
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  return;
}



// FUNCTION 149619734 FUN_149619734 body=504 status=ok
// SIG undefined FUN_149619734(void)

char * FUN_149619734(longlong param_1,char *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  longlong lVar11;
  char cVar12;
  undefined1 auStack_d8 [32];
  char *local_b8;
  double *local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90 [24];
  double local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = *(longlong *)(param_1 + 0x128);
  bVar10 = *(byte *)(param_1 + 0x1b0);
  local_78[0] = DAT_14c8464e0;
  local_78[1] = DAT_14c8464e8;
  local_78[2] = DAT_14c8464f0;
  cVar12 = '\x01';
  if ((char)bVar10 < '\x01') {
    cVar12 = -(bVar10 != 0);
  }
  local_78[(char)(~((char)bVar10 >> 7) + (bVar10 ^ (char)bVar10 >> 7))] = (double)(int)cVar12;
  FUN_146bed047(local_90,lVar11 + 0x20);
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = -0x20;
  param_2[0xc] = -1;
  param_2[0xd] = -1;
  param_2[0xe] = -0x11;
  param_2[0xf] = 'G';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  lVar11 = *(longlong *)(param_1 + 0x128);
  FUN_146bed047(local_78,lVar11 + 0x20,param_1 + 0x150);
  local_98 = local_78[2] + *(double *)(lVar11 + 0x18);
  local_a0 = local_78[1] + *(double *)(lVar11 + 0x10);
  local_a8 = local_78[0] + *(double *)(lVar11 + 8);
  local_b8 = param_2;
  local_b0 = local_78;
  FUN_14842069a(&local_a8,local_90,param_3,param_3 + 3);
  if (*param_2 == '\x01') {
    param_4[2] = local_78[2];
    *param_4 = local_78[0];
    param_4[1] = local_78[1];
    dVar1 = param_4[2];
    dVar2 = param_3[2];
    dVar3 = *param_4;
    dVar4 = param_4[1];
    dVar5 = param_3[1];
    dVar6 = *param_3;
    dVar7 = param_3[4];
    dVar8 = param_3[3];
    dVar9 = param_3[5];
    *param_2 = '\x01';
    *(double *)(param_2 + 8) =
         (dVar1 - dVar2) * dVar9 + (dVar3 - dVar6) * dVar8 + (dVar4 - dVar5) * dVar7;
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = -0x10;
    param_2[0x27] = '?';
    param_2[0x28] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961992e FUN_14961992e body=411 status=ok
// SIG undefined FUN_14961992e(void)

undefined1 * FUN_14961992e(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_b8 [40];
  double local_90 [4];
  double dStack_70;
  double local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if (*(char *)(param_1 + 0x148) == '\x01') {
    local_90[3] = (double)*param_3;
    dStack_70 = (double)param_3[1];
    local_68 = (double)param_3[2];
    uStack_60 = *(undefined4 *)(param_3 + 3);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_58 = *(undefined4 *)(param_3 + 4);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_50 = *(undefined4 *)(param_3 + 5);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0x2c);
    FUN_149619734(param_1,param_2,local_90 + 3,&local_48);
    bVar1 = *(byte *)(param_1 + 0x1b0);
    bVar4 = (char)bVar1 >> 7;
    lVar3 = *(longlong *)(param_1 + 0x128);
    local_68 = local_38 - *(double *)(lVar3 + 0x18);
    dStack_70 = local_40 - *(double *)(lVar3 + 0x10);
    local_90[3] = local_48 - *(double *)(lVar3 + 8);
    FUN_146bf2028(lVar3 + 0x20,local_90,local_90 + 3);
    lVar3 = (longlong)(char)(~bVar4 + (bVar1 ^ bVar4));
    local_90[lVar3] = *(double *)(param_1 + 0x150 + lVar3 * 8);
    if ((((local_90[0] < *(double *)(param_1 + 0x150)) ||
         (local_90[1] < *(double *)(param_1 + 0x158))) ||
        (local_90[2] < *(double *)(param_1 + 0x160))) ||
       ((*(double *)(param_1 + 0x168) < local_90[0] || (*(double *)(param_1 + 0x170) < local_90[1]))
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = local_90[2] <= *(double *)(param_1 + 0x178);
    }
    *param_2 = bVar2;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149619aca FUN_149619aca body=810 status=ok
// SIG undefined FUN_149619aca(void)

void FUN_149619aca(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auStack_128 [32];
  double local_108 [8];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x148) == '\x01') {
    local_c8 = *param_2;
    dStack_c0 = param_2[1];
    local_b8 = param_2[2];
    dStack_b0 = param_2[3];
    local_a8 = *(undefined4 *)(param_2 + 4);
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_a0 = *(undefined4 *)(param_2 + 5);
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0x2c);
    FUN_149619734(param_1,local_108,&local_c8,&local_98);
    local_b8 = local_88 - *(double *)(param_1 + 0x3c8);
    dStack_c0 = local_90 - *(double *)(param_1 + 0x3c0);
    local_c8 = local_98 - *(double *)(param_1 + 0x3b8);
    FUN_146bf2028(*(longlong *)(param_1 + 0x128) + 0x20,local_108,&local_c8);
    bVar4 = (char)*(byte *)(param_1 + 0x1b0) >> 7;
    local_108[(char)(~bVar4 + (*(byte *)(param_1 + 0x1b0) ^ bVar4))] = 0.0;
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x50);
    dVar5 = 1.0 / dVar1;
    auVar6._0_8_ = dVar5 * local_108[2] + 0.5;
    auVar6._8_8_ = 0;
    auVar6 = roundpd(auVar6,auVar6,1);
    auVar7._0_8_ = local_108[1] * dVar5 + 0.5;
    auVar7._8_8_ = 0;
    auVar7 = roundpd(auVar7,auVar7,1);
    auVar8._0_8_ = local_108[0] * dVar5 + 0.5;
    auVar8._8_8_ = 0;
    auVar8 = roundpd(auVar8,auVar8,1);
    local_108[0] = auVar8._0_8_ * dVar1;
    local_108[1] = auVar7._0_8_ * dVar1;
    local_108[2] = auVar6._0_8_ * dVar1;
    dVar1 = *(double *)(param_1 + 0x1e8) + local_108[2];
    dVar9 = *(double *)(param_1 + 0x1d8) + local_108[0];
    dVar10 = *(double *)(param_1 + 0x1d0) + local_108[2];
    dVar5 = *(double *)(param_1 + 0x1c8) + local_108[1];
    dVar3 = *(double *)(param_1 + 0x1c0) + local_108[0];
    dVar2 = *(double *)(param_1 + 0x1e0) + local_108[1];
    if ((((((dVar9 == *(double *)(param_1 + 0x168)) &&
           (!NAN(dVar9) && !NAN(*(double *)(param_1 + 0x168)))) &&
          (dVar2 == *(double *)(param_1 + 0x170))) &&
         ((!NAN(dVar2) && !NAN(*(double *)(param_1 + 0x170)) &&
          (dVar1 == *(double *)(param_1 + 0x178))))) &&
        ((!NAN(dVar1) && !NAN(*(double *)(param_1 + 0x178)) &&
         ((dVar3 == *(double *)(param_1 + 0x150) &&
          (!NAN(dVar3) && !NAN(*(double *)(param_1 + 0x150)))))))) &&
       ((dVar5 == *(double *)(param_1 + 0x158) &&
        (!NAN(dVar5) && !NAN(*(double *)(param_1 + 0x158)))))) {
      if ((dVar10 == *(double *)(param_1 + 0x160)) &&
         (!NAN(dVar10) && !NAN(*(double *)(param_1 + 0x160)))) goto LAB_149619b29;
    }
    *(double *)(param_1 + 0x180) = local_108[0] + *(double *)(param_1 + 0x1f0);
    *(double *)(param_1 + 0x188) = local_108[1] + *(double *)(param_1 + 0x1f8);
    *(double *)(param_1 + 400) = local_108[2] + *(double *)(param_1 + 0x200);
    *(double *)(param_1 + 0x198) = *(double *)(param_1 + 0x208) + local_108[0];
    *(double *)(param_1 + 0x1a0) = *(double *)(param_1 + 0x210) + local_108[1];
    *(double *)(param_1 + 0x1a8) = *(double *)(param_1 + 0x218) + local_108[2];
    *(double *)(param_1 + 0x150) = dVar3;
    *(double *)(param_1 + 0x158) = dVar5;
    *(double *)(param_1 + 0x160) = dVar10;
    *(double *)(param_1 + 0x168) = dVar9;
    *(double *)(param_1 + 0x170) = dVar2;
    *(double *)(param_1 + 0x178) = dVar1;
    FUN_149613ce6(param_1);
    FUN_149612c5e(param_1,1);
  }
LAB_149619b29:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149619df6 FUN_149619df6 body=92 status=ok
// SIG undefined FUN_149619df6(void)

byte FUN_149619df6(double *param_1,double *param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((((((param_1[3] == param_2[3]) && (!NAN(param_1[3]) && !NAN(param_2[3]))) &&
        (param_1[4] == param_2[4])) &&
       ((!NAN(param_1[4]) && !NAN(param_2[4]) && (param_1[5] == param_2[5])))) &&
      ((!NAN(param_1[5]) && !NAN(param_2[5]) &&
       ((*param_1 == *param_2 && (!NAN(*param_1) && !NAN(*param_2))))))) &&
     ((param_1[1] == param_2[1] && (!NAN(param_1[1]) && !NAN(param_2[1]))))) {
    bVar1 = -(param_2[2] != param_1[2]) & 1;
  }
  return bVar1;
}



// FUNCTION 149619e52 FUN_149619e52 body=289 status=ok
// SIG undefined FUN_149619e52(void)

void FUN_149619e52(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x37] == (char)param_1[0x29]) {
    if ((char)param_1[0x37] == '\0') goto LAB_149619e83;
    cVar2 = FUN_149639e1e(param_1 + 0x38,param_1 + 0x2a);
    if (cVar2 != '\0') {
      cVar2 = FUN_149639e1e(param_1 + 0x3e,param_1 + 0x30);
      if ((cVar2 != '\0') && ((char)param_1[0x44] == (char)param_1[0x36])) goto LAB_149619e83;
    }
  }
  FUN_149619f74(param_1);
  lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
  local_40 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  lVar4 = param_1[0x29];
  lVar1 = param_1[0x37];
  *local_40 = &PTR_LAB_14bd8d180;
  *(char *)(local_40 + 1) = (char)lVar1;
  *(char *)((longlong)local_40 + 9) = (char)lVar4;
  plVar5 = param_1 + 0x38;
  plVar6 = local_40 + 2;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  plVar5 = param_1 + 0x2a;
  plVar6 = local_40 + 0xf;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar6 = *plVar5;
    plVar5 = plVar5 + 1;
    plVar6 = plVar6 + 1;
  }
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28,param_1,&local_40,&DAT_14cc20360);
LAB_149619e83:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149619f74 FUN_149619f74 body=101 status=ok
// SIG undefined FUN_149619f74(void)

void FUN_149619f74(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (*(int *)(param_1 + 0x36c) != 0) {
    FUN_147daf82e(param_1 + 0x358,0);
  }
  *(undefined4 *)(param_1 + 0x380) = 0;
  if (*(int *)(param_1 + 900) == 0) {
    return;
  }
  FUN_147daf82e(param_1 + 0x370,0);
  return;
}



// FUNCTION 149619fda FUN_149619fda body=285 status=ok
// SIG undefined FUN_149619fda(void)

void FUN_149619fda(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [24];
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 local_b0 [80];
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_146c83e96(param_1 + 0x550,1,1);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    FUN_14961158e(local_b0,param_1 + 0x150,*(undefined1 *)(param_1 + 0x1b0));
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x128);
      FUN_1483ad9de(local_b0,local_e0,iVar2);
      FUN_146bed047(&local_60,lVar1 + 0x20,local_e0);
      local_b8 = local_50 + *(double *)(lVar1 + 0x18);
      local_c0 = local_58 + *(double *)(lVar1 + 0x10);
      local_c8 = local_60 + *(double *)(lVar1 + 8);
      FUN_146c83f12(param_1 + 0x550,iVar2,&local_c8);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14961a152 FUN_14961a152 body=1386 status=ok
// SIG undefined FUN_14961a152(void)

void FUN_14961a152(longlong param_1,double *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 local_d8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar7 = FUN_1484e0f44(*(undefined8 *)(param_1 + 0x40),DAT_14cc203a0);
  if (*(char *)(param_1 + 400) == '\x01') {
    FUN_1484d04e2(uVar7);
  }
  if (*(char *)(param_1 + 0x1cb) == '\x01') {
    *(undefined4 *)(param_1 + 0xac) = 1;
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x90);
      bVar8 = *(byte *)(param_1 + 0x118);
      local_98[2] = DAT_14c8464f0;
      cVar6 = '\x01';
      if ((char)bVar8 < '\x01') {
        cVar6 = -(bVar8 != 0);
      }
      local_98[0] = DAT_14c8464e0;
      local_98[1] = DAT_14c8464e8;
      local_98[(char)(~((char)bVar8 >> 7) + (bVar8 ^ (char)bVar8 >> 7))] = (double)(int)cVar6;
      FUN_146bed047(&local_188,lVar3 + 0x20);
      lVar3 = *(longlong *)(param_1 + 0x90);
      local_a0 = (*(double *)(param_1 + 200) + *(double *)(param_1 + 0xe0)) * 0.5;
      local_a8 = (*(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xd8)) * 0.5;
      local_b0 = (*(double *)(param_1 + 0xb8) + *(double *)(param_1 + 0xd0)) * 0.5;
      FUN_146bed047(&local_158,lVar3 + 0x20);
      dVar2 = *(double *)(lVar3 + 0x18);
      dVar12 = *(double *)(lVar3 + 0x10);
      *(double *)(param_1 + 0x1d0) = local_158 + *(double *)(lVar3 + 8);
      *(double *)(param_1 + 0x1d8) = dStack_150 + dVar12;
      *(double *)(param_1 + 0x1e0) = local_148 + dVar2;
      *(double *)(param_1 + 0x1e8) = local_188;
      *(double *)(param_1 + 0x1f0) = dStack_180;
      *(double *)(param_1 + 0x1f8) = local_178;
      local_178 = *(double *)(param_1 + 0x1e0);
      local_188 = *(double *)(param_1 + 0x1d0);
      dStack_180 = *(double *)(param_1 + 0x1d8);
      local_170 = *(double *)(param_1 + 0x1e8);
      dStack_168 = *(double *)(param_1 + 0x1f0);
      local_160 = *(double *)(param_1 + 0x1f8);
      local_f8 = 0xbff0000000000000;
      local_128 = *param_2;
      dStack_120 = param_2[1];
      local_118 = param_2[2];
      dStack_110 = param_2[3];
      local_108 = param_2[4];
      dStack_100 = param_2[5];
      local_158 = local_188;
      dStack_150 = dStack_180;
      local_148 = local_178;
      uStack_140 = local_170;
      local_138 = dStack_168;
      dStack_130 = local_160;
      FUN_1484fd030(&local_158);
      *(undefined8 *)(param_1 + 0x200) = local_d8;
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x218);
    }
  }
  else {
    lVar3 = param_1 + -0x98;
    if (*(int *)(param_1 + 0xa8) == 1) {
      *(undefined4 *)(param_1 + 0xac) = 2;
      *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x338);
      local_158 = *param_2;
      dStack_150 = param_2[1];
      local_148 = param_2[2];
      uStack_140 = param_2[3];
      local_138 = param_2[4];
      dStack_130 = param_2[5];
      FUN_14961a6be(lVar3);
    }
    else {
      cVar6 = *(char *)(param_1 + 0xb0);
      *(char *)(param_1 + 0x120) = cVar6;
      puVar1 = (undefined8 *)(param_1 + 0xb8);
      puVar10 = puVar1;
      puVar11 = (undefined8 *)(param_1 + 0x128);
      for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined4 *)(param_1 + 0xac) = 3;
      uStack_140 = (double)CONCAT62(uStack_140._2_6_,3);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = DAT_14c8464f0;
      auVar13 = roundpd(auVar13,auVar13,1);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = DAT_14c8464e8;
      auVar14 = roundpd(auVar14,auVar14,1);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = DAT_14c8464e0;
      auVar15 = roundpd(auVar15,auVar15,1);
      local_158 = auVar15._0_8_ + 0.5;
      dStack_150 = auVar14._0_8_ + 0.5;
      local_148 = auVar13._0_8_ + 0.0;
      if ((cVar6 == '\x01') && (*(char *)(param_1 + 0x1c9) == '\x01')) {
        local_198 = puVar1;
        cVar6 = FUN_14961254e(*(undefined8 *)(param_1 + 0x90),param_2,param_1 + 0xe8,1);
        if (cVar6 == '\0') goto LAB_14961a1d9;
      }
      else {
        cVar6 = FUN_149619002(lVar3,param_2,&local_158);
        if (cVar6 == '\0') {
          *(undefined1 *)(param_1 + 0xb0) = 0;
          *(undefined8 *)(param_1 + 0xb8) = 0x7fefffffffffffff;
          *(undefined8 *)(param_1 + 0xc0) = 0x7fefffffffffffff;
          *(undefined8 *)(param_1 + 200) = 0x7fefffffffffffff;
          *(undefined8 *)(param_1 + 0xd0) = 0xffefffffffffffff;
          *(undefined8 *)(param_1 + 0xd8) = 0xffefffffffffffff;
          *(undefined8 *)(param_1 + 0xe0) = 0xffefffffffffffff;
        }
        else {
          *(undefined1 *)(param_1 + 0xb0) = 1;
          dVar2 = *(double *)(*(longlong *)(param_1 + 0x90) + 0x40);
          if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x49) == '\0') {
            dVar12 = (double)(uint)(1 << (uStack_140._1_1_ & 0x1f));
          }
          else {
            bVar8 = uStack_140._1_1_ - (uStack_140._1_1_ >> 1);
            dVar12 = pow(5.0,(double)(uStack_140._1_1_ >> 1));
            dVar12 = dVar12 * (double)(uint)(1 << (bVar8 & 0x1f));
          }
          dVar2 = dVar2 * dVar12;
          FUN_1484f2038(&local_158,&local_188);
          dVar12 = local_178 * dVar2;
          dVar4 = dStack_180 * dVar2;
          dVar5 = local_188 * dVar2;
          FUN_1484f2006(&local_158,local_98);
          *(double *)(param_1 + 0xb8) = dVar2 * local_98[0];
          *(double *)(param_1 + 0xc0) = local_98[1] * dVar2;
          *(double *)(param_1 + 200) = local_98[2] * dVar2;
          *(double *)(param_1 + 0xd0) = dVar5;
          *(double *)(param_1 + 0xd8) = dVar4;
          *(double *)(param_1 + 0xe0) = dVar12;
          *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xd8);
          *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0xe0);
          *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 200);
          *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xd0);
          *(undefined8 *)(param_1 + 0xe8) = *puVar1;
          *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xc0);
          *(undefined1 *)(param_1 + 0x118) = (undefined1)uStack_140;
        }
      }
      FUN_149613ce6(lVar3);
    }
  }
LAB_14961a1d9:
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14961a6be FUN_14961a6be body=207 status=ok
// SIG undefined FUN_14961a6be(void)

void FUN_14961a6be(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_38 = &PTR_LAB_14bd8dc60;
  local_58 = &LAB_14455da52;
  local_30 = param_1;
  FUN_146c849d6(param_1 + 0x550);
  if ((longlong)(int)uStack_60 != 0) {
    lVar1 = (longlong)(int)uStack_60 * 0x50;
    lVar2 = 0;
    do {
      *(byte *)(param_1 + 0x3d0 + (longlong)*(int *)(local_68 + lVar2)) =
           *(byte *)(param_1 + 0x3d4 + (longlong)*(int *)(local_68 + lVar2)) ^ 1;
      lVar2 = lVar2 + 0x50;
    } while (lVar1 != lVar2);
    if (0 < (int)uStack_60) {
      FUN_149612c5e(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961a78e FUN_14961a78e body=475 status=ok
// SIG undefined FUN_14961a78e(void)

void FUN_14961a78e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  double local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    if (*(int *)(param_1 + 0xac) == 1) {
      if (*(int *)(param_1 + 0xa8) == 1) {
        lVar4 = 0;
        do {
          if (*(char *)(param_1 + 0x338 + lVar4) == '\x01') goto LAB_14961a83d;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 4);
      }
      else {
LAB_14961a83d:
        local_e8 = *(undefined8 *)(param_1 + 0x1e0);
        local_f8 = *(undefined8 *)(param_1 + 0x1d0);
        uStack_f0 = *(undefined8 *)(param_1 + 0x1d8);
        local_e0 = *(undefined8 *)(param_1 + 0x1e8);
        uStack_d8 = *(undefined8 *)(param_1 + 0x1f0);
        local_d0 = *(undefined8 *)(param_1 + 0x1f8);
        local_68 = 0xbff0000000000000;
        local_98 = *(undefined4 *)param_2;
        uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_90 = *(undefined4 *)(param_2 + 1);
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_88 = *(undefined4 *)(param_2 + 2);
        uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_80 = *(undefined4 *)(param_2 + 3);
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_78 = *(undefined4 *)(param_2 + 4);
        uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
        uStack_70 = *(undefined4 *)(param_2 + 5);
        uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
        local_c8 = local_f8;
        uStack_c0 = uStack_f0;
        local_b8 = local_e8;
        uStack_b0 = local_e0;
        local_a8 = uStack_d8;
        uStack_a0 = local_d0;
        FUN_1484fd030(&local_c8);
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 0xf8);
        dVar2 = (local_48 - *(double *)(param_1 + 0x200)) /
                ((double)iVar1 * *(double *)(*(longlong *)(param_1 + 0x90) + 0x50));
        iVar3 = (int)((ulonglong)(longlong)ROUND(dVar2 + dVar2 + 0.5) >> 1) * iVar1 +
                *(int *)(param_1 + 0x208);
        if (iVar3 != *(int *)(param_1 + 0x218)) {
          *(int *)(param_1 + 0x218) = iVar3;
          FUN_149612c5e(param_1 + -0x98,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0xac) != 2) {
        local_108 = param_1 + 0xb8;
        FUN_14961254e(*(undefined8 *)(param_1 + 0x90),param_2,param_1 + 0xe8,1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_128);
      }
      local_c8 = *param_2;
      uStack_c0 = param_2[1];
      local_b8 = param_2[2];
      uStack_b0 = param_2[3];
      local_a8 = param_2[4];
      uStack_a0 = param_2[5];
      FUN_14961a6be(param_1 + -0x98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961a97c FUN_14961a97c body=520 status=ok
// SIG undefined FUN_14961a97c(void)

void FUN_14961a97c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + -0x98;
  iVar2 = *(int *)(param_1 + 0xac);
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0xa8) == 1) {
      if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x208)) {
        lVar5 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
        local_60 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar3 = *(undefined4 *)(param_1 + 0x208);
        uVar4 = *(undefined4 *)(param_1 + 0x218);
        *local_60 = &PTR_LAB_14bd8dbb0;
        *(undefined4 *)(local_60 + 1) = uVar3;
        *(undefined4 *)((longlong)local_60 + 0xc) = uVar4;
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))
                  (lVar5 + 0x28,lVar1,&local_60,&DAT_14cc20380);
      }
    }
    else if (*(int *)(param_1 + 0x218) != 0) {
      *(undefined2 *)(param_1 + 0x21d) = 1;
      *(undefined1 *)(param_1 + 0x21f) = 1;
    }
  }
  else if (iVar2 == 2) {
    lVar5 = -4;
    do {
      if (*(char *)(param_1 + 0x340 + lVar5) != *(char *)(param_1 + 0x33c + lVar5)) {
        lVar5 = (**(code **)(*(longlong *)(param_1 + -0x98) + 0x2c8))(lVar1);
        local_48 = L"CornerSelectionTransaction";
        local_40 = 0x1a;
        FUN_1446e940c(local_4c,&local_48);
        local_48 = L"UCubeGridTool";
        local_40 = 0xd;
        FUN_1446e940c(local_50,&local_48);
        FUN_140208bae(&local_48,local_50,local_4c,L"Corner Selection");
        local_58 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *local_58 = &PTR_LAB_14bd8db00;
        *(undefined4 *)(local_58 + 1) = *(undefined4 *)(param_1 + 0x33c);
        *(undefined4 *)((longlong)local_58 + 0xc) = *(undefined4 *)(param_1 + 0x338);
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,lVar1,&local_58,&local_48);
        if (local_48 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_48 + 0x10))();
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
  }
  else if (iVar2 == 3) {
    FUN_149619e52(lVar1);
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961abbc FUN_14961abbc body=84 status=ok
// SIG undefined FUN_14961abbc(void)

undefined1 * FUN_14961abbc(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  uVar1 = FUN_14961ac10(param_1 + -0xa0,param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14961ac10 FUN_14961ac10 body=614 status=ok
// SIG undefined FUN_14961ac10(void)

undefined4 FUN_14961ac10(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_118 [32];
  double *local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined2 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x140) == 0) {
    local_a0 = 1.79769313486232e+308;
    local_98 = 1.79769313486232e+308;
    local_90 = 1.79769313486232e+308;
    local_88 = -1.79769313486232e+308;
    local_80 = -1.79769313486232e+308;
    local_78 = -1.79769313486232e+308;
    if ((*(char *)(param_1 + 0x148) == '\x01') && (*(char *)(param_1 + 0x261) == '\x01')) {
      local_f8 = &local_a0;
      uVar2 = FUN_14961254e(*(undefined8 *)(param_1 + 0x128),param_2,param_1 + 0x180,0);
    }
    else {
      local_a8 = 3;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = DAT_14c8464f0;
      auVar4 = roundpd(auVar4,auVar4,1);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = DAT_14c8464e8;
      auVar5 = roundpd(auVar5,auVar5,1);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = DAT_14c8464e0;
      auVar6 = roundpd(auVar6,auVar6,1);
      local_c0 = auVar6._0_8_ + 0.5;
      local_b8 = auVar5._0_8_ + 0.5;
      local_b0 = auVar4._0_8_ + 0.0;
      uVar2 = FUN_149619002(param_1);
      if ((char)uVar2 != '\0') {
        dVar1 = *(double *)(*(longlong *)(param_1 + 0x128) + 0x50);
        FUN_1484f2038(&local_c0,&local_d8);
        FUN_1484f2006(&local_c0,&local_f0);
        local_90 = local_e0 * dVar1;
        local_98 = local_e8 * dVar1;
        local_a0 = dVar1 * local_f0;
        local_88 = local_d8 * dVar1;
        local_80 = local_d0 * dVar1;
        local_78 = local_c8 * dVar1;
      }
    }
    FUN_1496186de(param_1,uVar2,&local_a0);
  }
  else {
    uVar3 = FUN_1484e0f44(*(undefined8 *)(param_1 + 0xd8),DAT_14cc203a0);
    if (*(char *)(param_1 + 0x228) == '\x01') {
      FUN_1484d04e2(uVar3);
    }
    uVar2 = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961aec0 FUN_14961aec0 body=324 status=ok
// SIG undefined FUN_14961aec0(void)

void FUN_14961aec0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  wchar_t **ppwVar3;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined4 local_a0;
  char local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((char)param_1[0x29] == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x2c8))();
    local_a8 = L"FlipTransactionName";
    local_a0 = 0x13;
    FUN_1446e940c(local_3c,&local_a8);
    local_a8 = L"UCubeGridTool";
    local_a0 = 0xd;
    FUN_1446e940c(local_40,&local_a8);
    FUN_140208bae(&local_a8,local_40,local_3c,L"Flip Selection");
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_a8);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    plVar2 = param_1 + 0x2a;
    ppwVar3 = &local_a8;
    for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
      *ppwVar3 = (wchar_t *)*plVar2;
      plVar2 = plVar2 + 1;
      ppwVar3 = ppwVar3 + 1;
    }
    local_48 = -(char)param_1[0x36];
    (**(code **)(*param_1 + 0x390))(param_1,&local_a8,1);
    FUN_149619f74(param_1);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961b006 FUN_14961b006 body=273 status=ok
// SIG undefined FUN_14961b006(void)

void FUN_14961b006(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x29] == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x2c8))();
    local_50 = L"SlideTransactionName";
    local_48 = 0x14;
    FUN_1446e940c(local_54,&local_50);
    local_50 = L"UCubeGridTool";
    local_48 = 0xd;
    FUN_1446e940c(local_58,&local_50);
    FUN_140208bae(&local_50,local_58,local_54,L"Slide Selection");
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    FUN_14961392c(param_1,param_2);
    FUN_149619f74(param_1);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961b118 FUN_14961b118 body=242 status=ok
// SIG undefined FUN_14961b118(void)

void FUN_14961b118(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0x29] == '\x01') {
    if ((int)param_1[0x28] == 1) {
      lVar2 = 0;
      do {
        if (*(char *)((longlong)param_1 + lVar2 + 0x3d0) == '\x01') goto LAB_14961b179;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 4);
    }
    else {
LAB_14961b179:
      lVar2 = param_1[0x56];
      param_2 = param_2 + (int)lVar2;
      *(int *)(param_1 + 0x56) = param_2;
      FUN_149612c5e(param_1,CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1));
      if ((int)param_1[0x28] == 1) {
        lVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
        local_30 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        lVar1 = param_1[0x56];
        *local_30 = &PTR_LAB_14bd8dbb0;
        *(int *)(local_30 + 1) = (int)lVar2;
        *(int *)((longlong)local_30 + 0xc) = (int)lVar1;
        (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))
                  (lVar3 + 0x28,param_1,&local_30,&DAT_14cc20380);
      }
      else if ((int)param_1[0x28] == 0) {
        *(undefined2 *)((longlong)param_1 + 0x2b5) = 1;
        *(undefined1 *)((longlong)param_1 + 0x2b7) = 1;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961b20c FUN_14961b20c body=361 status=ok
// SIG undefined FUN_14961b20c(void)

void FUN_14961b20c(longlong *param_1,uint param_2)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 uVar6;
  double dVar7;
  
  bVar2 = *(byte *)(param_1[0x20] + 0xfd);
  uVar5 = (uint)bVar2;
  if ((int)param_2 < (int)(uint)bVar2) {
    uVar5 = param_2;
  }
  uVar6 = 0;
  if (0 < (int)uVar5) {
    uVar6 = (undefined1)uVar5;
  }
  *(undefined1 *)(param_1[0x20] + 0xe8) = uVar6;
  lVar3 = param_1[0x25];
  bVar2 = *(byte *)(param_1[0x20] + 0xe8);
  *(byte *)(lVar3 + 0x48) = bVar2;
  dVar1 = *(double *)(lVar3 + 0x40);
  if (*(char *)(lVar3 + 0x49) == '\0') {
    dVar7 = (double)(uint)(1 << (bVar2 & 0x1f));
  }
  else {
    dVar7 = pow(5.0,(double)(bVar2 >> 1));
    dVar7 = dVar7 * (double)(uint)(1 << (bVar2 - (bVar2 >> 1) & 0x1f));
  }
  *(double *)(lVar3 + 0x50) = dVar1 * dVar7;
  (**(code **)(**(longlong **)
                 (*(longlong *)(param_1[0x20] + 0x28) +
                 (longlong)*(int *)((longlong)param_1 + 0x39c) * 8) + 0x10))();
  *(undefined8 *)(param_1[0x20] + 0xf0) = *(undefined8 *)(param_1[0x25] + 0x50);
  (**(code **)(**(longlong **)
                 (*(longlong *)(param_1[0x20] + 0x28) +
                 (longlong)*(int *)((longlong)param_1 + 0x3a4) * 8) + 0x10))();
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  if ((int)param_1[0x28] == 1) {
    FUN_149612c5e(param_1,1);
    FUN_149612dca(param_1);
  }
  if ((char)param_1[0x45] == '\x01') {
    uVar4 = FUN_1484e0f44(param_1[0x1b],DAT_14cc203a0);
    if ((char)param_1[0x45] == '\x01') {
      FUN_1484d04e2(uVar4);
    }
  }
  FUN_149613ce6(param_1);
  FUN_149616260(param_1);
  return;
}



// FUNCTION 14961b388 FUN_14961b388 body=1738 status=ok
// SIG undefined FUN_14961b388(void)

void FUN_14961b388(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined ***pppuVar15;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined1 local_1ac [4];
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined ***local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined **local_188;
  undefined1 *puStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  code *local_168;
  undefined8 uStack_160;
  undefined ***local_158;
  undefined8 uStack_150;
  undefined **local_148;
  longlong *plStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  code *local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  undefined8 uStack_110;
  undefined **local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((char)param_1[0x29] == '\x01') && ((int)param_1[0x28] != 1)) {
    *(undefined4 *)(param_1 + 0x56) = 0;
    FUN_149612c5e(param_1,1);
    param_1[0x7a] = 0;
    FUN_149619fda(param_1);
    *(undefined4 *)(param_1 + 0x28) = 1;
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],0);
    uVar12 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_1485564be(&local_168,uVar12);
    plVar14 = uStack_160;
    if (uStack_160 != (longlong *)0x0 && local_168 != (code *)0x0) {
      local_168 = (code *)0x0;
      local_158 = (undefined ***)0x0;
      local_118 = (undefined ***)0x0;
      local_108 = &PTR_LAB_149f36510;
      plStack_100 = (longlong *)&LAB_148f75ee6;
      local_128 = FUN_146bd3274;
      FUN_144a5dc74(local_e8);
      local_d8 = 0xffffffff;
      local_c0 = (longlong *)0x0;
      local_b8 = 0;
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      local_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      local_88 = (code *)0x14bd818fc;
      uStack_80._0_4_ = 0x17;
      FUN_1446e940c(&local_1a8,&local_88);
      local_88 = (code *)0x14bd7fb38;
      uStack_80 = CONCAT44(uStack_80._4_4_,0xd);
      FUN_1446e940c(local_1ac,&local_88);
      FUN_140208bae(&local_88,local_1ac,&local_1a8,L"Corner Mode");
      FUN_140008f88(local_e8,&local_88);
      if (local_88 != (code *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      local_88 = (code *)0x14bd8192c;
      uStack_80._0_4_ = 10;
      FUN_1446e940c(&local_1a8,&local_88);
      local_88 = (code *)0x14bd7fb38;
      uStack_80 = CONCAT44(uStack_80._4_4_,0xd);
      FUN_1446e940c(local_1ac,&local_88);
      FUN_140208bae(&local_88,local_1ac,&local_1a8,L"Done");
      if ((longlong *)CONCAT44(uStack_cc,uStack_d0) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_cc,uStack_d0) + 0x10))();
      }
      FUN_14023423e(&uStack_d0,&local_88);
      if (local_88 != (code *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      local_88 = (code *)0x14bd819a0;
      uStack_80._0_4_ = 0x11;
      FUN_1446e940c(&local_1a8,&local_88);
      local_88 = (code *)0x14bd7fb38;
      uStack_80 = CONCAT44(uStack_80._4_4_,0xd);
      FUN_1446e940c(local_1ac,&local_88);
      FUN_140208bae(&local_88,local_1ac,&local_1a8,L"Apply the current change and exit corner mode."
                   );
      if (local_c0 != (longlong *)0x0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      FUN_14023423e(&local_c0,&local_88);
      if (local_88 != (code *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      local_88 = (code *)0x149f06792;
      uStack_80._0_4_ = 0xc;
      FUN_1446e940c(&local_1a8,&local_88);
      local_88 = (code *)0x14bd7fb38;
      uStack_80 = CONCAT44(uStack_80._4_4_,0xd);
      FUN_1446e940c(local_1ac,&local_88);
      FUN_140208bae(&local_88,local_1ac,&local_1a8,L"Cancel");
      if (local_b0 != (longlong *)0x0) {
        (**(code **)(*local_b0 + 0x10))();
      }
      FUN_14023423e(&local_b0,&local_88);
      if (local_88 != (code *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      local_88 = (code *)0x149f212f8;
      uStack_80._0_4_ = 0x13;
      FUN_1446e940c(&local_1a8,&local_88);
      local_88 = (code *)0x14bd7fb38;
      uStack_80 = CONCAT44(uStack_80._4_4_,0xd);
      FUN_1446e940c(local_1ac,&local_88);
      FUN_140208bae(&local_88,local_1ac,&local_1a8,
                    L"Cancel the current change and exit corner mode.");
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x10))();
      }
      FUN_14023423e(&local_a0,&local_88);
      if (local_88 != (code *)0x0) {
        (**(code **)(*(longlong *)local_88 + 0x10))();
      }
      puStack_180 = (undefined1 *)plStack_100;
      local_188 = local_108;
      local_198 = local_118;
      local_1a8 = local_128;
      local_58 = local_f8;
      uVar10 = local_58;
      uStack_50 = uStack_f0;
      uVar11 = uStack_50;
      local_68 = local_108;
      puStack_60 = (undefined1 *)plStack_100;
      local_78 = local_118;
      uStack_70 = uStack_110;
      uVar9 = uStack_70;
      local_88 = local_128;
      uStack_80 = uStack_120;
      uVar12 = uStack_80;
      local_108 = &PTR_LAB_14bd8ddc0;
      plStack_100 = param_1;
      local_118 = (undefined ***)0x0;
      local_128 = (code *)&LAB_14455dede;
      uStack_80._0_4_ = (undefined4)uStack_120;
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
      uStack_70._0_4_ = (undefined4)uStack_110;
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
      local_58._0_4_ = (undefined4)local_f8;
      local_58._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
      uStack_50._0_4_ = (undefined4)uStack_f0;
      uStack_50._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
      local_178 = (undefined4)local_58;
      uStack_174 = local_58._4_4_;
      uStack_170 = (undefined4)uStack_50;
      uStack_16c = uStack_50._4_4_;
      uStack_190 = (undefined4)uStack_70;
      uStack_18c = uStack_70._4_4_;
      uStack_1a0 = (undefined4)uStack_80;
      uStack_19c = uStack_80._4_4_;
      if (local_1a8 != (code *)0x0) {
        pppuVar15 = local_198;
        if (local_198 == (undefined ***)0x0) {
          pppuVar15 = &local_188;
        }
        uStack_80 = uVar12;
        uStack_70 = uVar9;
        local_58 = uVar10;
        uStack_50 = uVar11;
        (*(code *)(*pppuVar15)[2])();
      }
      local_198 = local_158;
      local_1a8 = local_168;
      uVar1 = (undefined4)uStack_160;
      uVar2 = uStack_160._4_4_;
      uVar3 = (undefined4)uStack_150;
      uVar4 = uStack_150._4_4_;
      uVar5 = (undefined4)local_138;
      uVar6 = local_138._4_4_;
      uVar7 = (undefined4)uStack_130;
      uVar8 = uStack_130._4_4_;
      local_78 = local_158;
      local_88 = local_168;
      local_138 = CONCAT44(uStack_174,local_178);
      uStack_130 = CONCAT44(uStack_16c,uStack_170);
      local_168 = FUN_14455df2a;
      uStack_160 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
      local_158 = (undefined ***)0x0;
      uStack_150 = CONCAT44(uStack_18c,uStack_190);
      local_148 = &PTR_LAB_14bd8dde0;
      plStack_140 = param_1;
      uStack_1a0 = uVar1;
      uStack_19c = uVar2;
      local_178 = uVar5;
      uStack_174 = uVar6;
      uStack_170 = uVar7;
      uStack_16c = uVar8;
      uStack_190 = uVar3;
      uStack_18c = uVar4;
      if (local_1a8 != (code *)0x0) {
        pppuVar15 = &local_188;
        if (local_198 != (undefined ***)0x0) {
          pppuVar15 = local_198;
        }
        (*(code *)(*pppuVar15)[2])(pppuVar15);
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_168);
      FUN_148f6bbc0(&local_168);
    }
    *(undefined1 *)(param_1[0x20] + 0x1a0) = 1;
    (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
    lVar13 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x10))(lVar13 + 0x28,&DAT_14cc20370);
    lVar13 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_1b8 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_1b8 = &PTR_LAB_14bd8de00;
    (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x20))
              (lVar13 + 0x28,param_1,&local_1b8,&DAT_14cc20370);
    lVar13 = (**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x18))(lVar13 + 0x28);
    plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar14 + 0x340))(plVar14,&DAT_14cc20330,2);
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961ba54 FUN_14961ba54 body=2739 status=ok
// SIG undefined FUN_14961ba54(void)

void FUN_14961ba54(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_348 [32];
  wchar_t **local_328;
  longlong **local_320;
  undefined1 local_318;
  undefined8 *local_310;
  code **local_308;
  longlong local_300 [2];
  undefined1 local_2f0 [4];
  undefined1 local_2ec [4];
  longlong *local_2e8 [2];
  wchar_t *local_2d8;
  undefined4 local_2d0;
  undefined1 *local_2c8 [2];
  undefined8 local_2b8;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined1 *local_288 [2];
  undefined8 local_278;
  undefined **local_268;
  undefined8 local_260;
  undefined1 *local_248 [2];
  undefined8 local_238;
  undefined **local_228;
  undefined8 local_220;
  code *local_208 [2];
  undefined8 local_1f8;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined1 *local_1c8 [2];
  undefined8 local_1b8;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined1 *local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  undefined8 local_160;
  undefined1 *local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  undefined8 local_120;
  undefined1 *local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_78 = 0;
  local_68 = &PTR_LAB_14bd8dc80;
  local_88[0] = &LAB_14455db16;
  local_60 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"PullAction";
  local_2d0 = 10;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Pull Out Blocks");
  FUN_140056680(local_300,L"PullBlock");
  local_310 = &DAT_14c964fe0;
  local_318 = 0;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_88;
  FUN_148450124(param_2,param_1,0x2711,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_b8 = 0;
  local_a8 = &PTR_LAB_14bd8dca0;
  local_c8[0] = &LAB_14455db74;
  local_a0 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"PushAction";
  local_2d0 = 10;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Push In Holes");
  FUN_140056680(local_300,L"PushBlock");
  local_310 = &DAT_14c965100;
  local_318 = 0;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_c8;
  FUN_148450124(param_2,param_1,0x2712,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_f8 = 0;
  local_e8 = &PTR_LAB_14bd8dcc0;
  local_108[0] = &LAB_14455dbd2;
  local_e0 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"SlideBackAction";
  local_2d0 = 0xf;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Slide Selection Back");
  FUN_140056680(local_300,L"SlideBack");
  local_310 = &DAT_14c964fe0;
  local_318 = 4;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_108;
  FUN_148450124(param_2,param_1,0x2713,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_138 = 0;
  local_128 = &PTR_LAB_14bd8dce0;
  local_148[0] = &LAB_14455dc30;
  local_120 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"SlideForwardAction";
  local_2d0 = 0x12;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Slide Selection Forward");
  FUN_140056680(local_300,L"SlideForward");
  local_310 = &DAT_14c965100;
  local_318 = 4;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_148;
  FUN_148450124(param_2,param_1,0x2714,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_178 = 0;
  local_168 = &PTR_LAB_14bd8dd00;
  local_188[0] = &LAB_14455dc8e;
  local_160 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"DecreaseGridPowerAction";
  local_2d0 = 0x17;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Decrease Grid Power");
  FUN_140056680(local_300,L"DecreaseGridPower");
  local_310 = &DAT_14c965100;
  local_318 = 1;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_188;
  FUN_148450124(param_2,param_1,0x2715,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_1b8 = 0;
  local_1a8 = &PTR_LAB_14bd8dd20;
  local_1c8[0] = &LAB_14455dcec;
  local_1a0 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"IncreaseGridPowerAction";
  local_2d0 = 0x17;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Increase Grid Power");
  FUN_140056680(local_300,L"IncreaseGridPower");
  local_310 = &DAT_14c964fe0;
  local_318 = 1;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_1c8;
  FUN_148450124(param_2,param_1,0x2716,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_1f8 = 0;
  local_1e8 = &PTR_LAB_14bd8dd40;
  local_208[0] = FUN_14455dd4a;
  local_1e0 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"ToggleGizmoVisibilityAction";
  local_2d0 = 0x1b;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Toggle Gizmo Visibility");
  FUN_140056680(local_300,L"ToggleGizmoVisibility");
  local_310 = &DAT_14c965118;
  local_318 = 0;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = local_208;
  FUN_148450124(param_2,param_1,0x2717,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_238 = 0;
  local_228 = &PTR_LAB_14bd8dd60;
  local_248[0] = &LAB_14455ddca;
  local_220 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"ToggleCornerModeAction";
  local_2d0 = 0x16;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Toggle Corner Mode");
  FUN_140056680(local_300,L"ToggleCornerMode");
  local_310 = &DAT_14c966f10;
  local_318 = 0;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_248;
  FUN_148450124(param_2,param_1,0x2718,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_278 = 0;
  local_268 = &PTR_LAB_14bd8dd80;
  local_288[0] = &LAB_14455de2a;
  local_260 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"ToggleDiagonalModeAction";
  local_2d0 = 0x18;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Toggle Diagonal Mode");
  FUN_140056680(local_300,L"ToggleDiagonalMode");
  local_310 = &DAT_14c966eb0;
  local_318 = 0;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_288;
  FUN_148450124(param_2,param_1,0x2719,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  local_2b8 = 0;
  local_2a8 = &PTR_LAB_14bd8dda0;
  local_2c8[0] = &LAB_14455de8e;
  local_2a0 = param_1;
  FUN_144a5dc74(local_2e8);
  local_2d8 = L"FlipSelectionAction";
  local_2d0 = 0x13;
  FUN_1446e940c(local_2ec,&local_2d8);
  local_2d8 = L"UCubeGridTool";
  local_2d0 = 0xd;
  FUN_1446e940c(local_2f0,&local_2d8);
  FUN_140208bae(&local_2d8,local_2f0,local_2ec,L"Flip Selection");
  FUN_140056680(local_300,L"FlipSelection");
  local_310 = &DAT_14c965148;
  local_318 = 0;
  local_328 = &local_2d8;
  local_320 = local_2e8;
  local_308 = (code **)local_2c8;
  FUN_148450124(param_2,param_1,0x271a,local_300);
  if (local_300[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_2e8[0] != (longlong *)0x0) {
    (**(code **)(*local_2e8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961c508 FUN_14961c508 body=561 status=ok
// SIG undefined FUN_14961c508(void)

double * FUN_14961c508(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_158 [40];
  undefined1 local_130 [24];
  undefined1 local_118 [80];
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_14961158e(local_118,param_1 + 0x98,*(undefined1 *)(param_1 + 0xf8));
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar2 = 0;
    dVar4 = -1.79769313486232e+308;
    dVar6 = -1.79769313486232e+308;
    dVar8 = 1.79769313486232e+308;
    dVar10 = -1.79769313486232e+308;
    dVar12 = 1.79769313486232e+308;
    dVar14 = 1.79769313486232e+308;
    do {
      FUN_1483ad9de(local_118,local_130,*(undefined4 *)((longlong)&DAT_149f3c570 + lVar2));
      FUN_146bed047(&local_c8,lVar1 + 0x20,local_130);
      dVar3 = local_b8 + *(double *)(lVar1 + 0x18);
      dVar9 = local_c0 + *(double *)(lVar1 + 0x10);
      dVar5 = local_c8 + *(double *)(lVar1 + 8);
      dVar7 = dVar5;
      if (dVar8 <= dVar5) {
        dVar7 = dVar8;
      }
      if (dVar5 <= dVar6) {
        dVar5 = dVar6;
      }
      dVar13 = dVar9;
      if (dVar14 <= dVar9) {
        dVar13 = dVar14;
      }
      if (dVar9 <= dVar10) {
        dVar9 = dVar10;
      }
      dVar11 = dVar3;
      if (dVar12 <= dVar3) {
        dVar11 = dVar12;
      }
      if (dVar3 <= dVar4) {
        dVar3 = dVar4;
      }
      lVar2 = lVar2 + 4;
      dVar4 = dVar3;
      dVar6 = dVar5;
      dVar8 = dVar7;
      dVar10 = dVar9;
      dVar12 = dVar11;
      dVar14 = dVar13;
    } while (lVar2 != 0x10);
  }
  else {
    dVar5 = -1.79769313486232e+308;
    dVar11 = 1.79769313486232e+308;
    dVar13 = 1.79769313486232e+308;
    dVar7 = 1.79769313486232e+308;
    dVar9 = -1.79769313486232e+308;
    dVar3 = -1.79769313486232e+308;
  }
  *param_2 = dVar7;
  param_2[1] = dVar13;
  param_2[2] = dVar11;
  param_2[3] = dVar5;
  param_2[4] = dVar9;
  param_2[5] = dVar3;
  *(char *)(param_2 + 6) = dVar11 <= dVar3 & -(dVar7 <= dVar5 && dVar13 <= dVar9);
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14961c73a FUN_14961c73a body=165 status=ok
// SIG undefined FUN_14961c73a(void)

void FUN_14961c73a(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_146c83e96(param_1 + 0xaa,1,1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar1 + 0x340))(plVar1,&DAT_14cc20320,2);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x21],1);
  FUN_149617240(param_1);
  *(undefined4 *)(param_1 + 0x56) = 0;
  FUN_149612c5e(param_1,1);
  *(undefined1 *)(param_1[0x20] + 0x1a0) = 0;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  FUN_149612dca(param_1);
  return;
}



// FUNCTION 14961c7e0 FUN_14961c7e0 body=105 status=ok
// SIG undefined FUN_14961c7e0(void)

void FUN_14961c7e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_146c2a5c4(param_2,*(undefined8 *)(param_1 + 0x2b8));
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  FUN_146bee918(lVar1,0);
  *(ulonglong *)(lVar1 + 0x10) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar1 + 8) + 0x214) +
             *(int *)(*(longlong *)(lVar1 + 8) + 0x218));
  FUN_1496166e8(param_1);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined1 *)(param_1 + 0x2b4) = 1;
  FUN_149612c5e(param_1,1);
  return;
}



// FUNCTION 14961c902 FUN_14961c902 body=92 status=ok
// SIG undefined FUN_14961c902(void)

ulonglong FUN_14961c902(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + -0xb0);
  cVar2 = (**(code **)(*(longlong *)(param_1 + -0xb0) + 0x3a8))(plVar1);
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (cVar2 == '\0') {
    (**(code **)(*plVar1 + 0x3b8))(plVar1);
    uVar3 = CONCAT71(uVar4,1);
  }
  else if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar3 = CONCAT71(uVar4,1);
    (**(code **)(*plVar1 + 0x398))(plVar1,1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14961c96a FUN_14961c96a body=44 status=ok
// SIG undefined FUN_14961c96a(void)

bool FUN_14961c96a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 1) {
    FUN_149616af2(param_1 + -0xb0,0);
  }
  return iVar1 == 1;
}



// FUNCTION 14961c9ca FUN_14961c9ca body=42 status=ok
// SIG undefined FUN_14961c9ca(void)

undefined8 FUN_14961c9ca(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14961c9f4(param_2[1]);
  FUN_148441f08(uVar1,*param_2);
  return uVar1;
}



// FUNCTION 14961c9f4 FUN_14961c9f4 body=148 status=ok
// SIG undefined FUN_14961c9f4(void)

undefined8 FUN_14961c9f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145babe16();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961ca8a FUN_14961ca8a body=291 status=ok
// SIG undefined FUN_14961ca8a(void)

void FUN_14961ca8a(longlong param_1,undefined4 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,char param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  *(char *)(param_1 + 0xb0) = param_6;
  *(int *)(param_1 + 0xc0) = *(int *)(param_3 + 0x20) * 0x200 + *(int *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  if (param_6 != '\0') {
    FUN_14961cbae(param_1,param_3,param_5);
  }
  uVar3 = *(uint *)(param_1 + 0x2f0);
  if (-1 < (int)uVar3) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar10 = 0;
    uVar7 = uVar3;
    if (*(uint *)(param_1 + 0x2c) != uVar3) {
      FUN_149641fe4(param_1 + 0x20,uVar3);
      iVar10 = *(int *)(param_1 + 0x28);
      uVar7 = *(uint *)(param_1 + 0x2c);
    }
    *(uint *)(param_1 + 0x28) = iVar10 + uVar3;
    if (uVar7 - iVar10 < uVar3) {
      FUN_149642054();
    }
    if (0 < *(int *)(param_1 + 0x2f0)) {
      lVar8 = 8;
      lVar9 = 0;
      do {
        lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2e8) + lVar9 * 4);
        lVar4 = *param_4;
        lVar5 = *(longlong *)(param_1 + 0x20);
        *(undefined8 *)(lVar5 + -0x10 + lVar8 * 4) = *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x28);
        puVar1 = (undefined8 *)(lVar4 + lVar11 * 0x28);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar5 + -0x20 + lVar8 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar5 + -8 + lVar8 * 4) = *(undefined8 *)(lVar4 + 0x18 + lVar11 * 0x28);
        *(undefined1 *)(lVar5 + lVar8 * 4) = *(undefined1 *)(lVar4 + 0x20 + lVar11 * 0x28);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 10;
      } while (lVar9 < *(int *)(param_1 + 0x2f0));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 14961cbae FUN_14961cbae body=598 status=ok
// SIG undefined FUN_14961cbae(void)

void FUN_14961cbae(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int local_a4 [3];
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = param_1 + 200;
  FUN_14582f278(lVar6);
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1447a8aa0(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xffffffff;
  local_d8 = param_1;
  FUN_1448156a8(&local_98,&local_88,*(undefined4 *)(param_1 + 0xc0));
  if (0 < (int)param_3[1]) {
    lVar8 = 0;
    lVar5 = 0;
    do {
      local_a4[0] = -1;
      local_a4[1] = -1;
      local_a4[2] = 0xffffffff;
      lVar9 = 0;
      local_d0 = lVar5;
      do {
        lVar5 = local_98;
        uVar7 = *(uint *)(*param_3 + lVar8 + lVar9 * 4);
        iVar4 = *(int *)(local_98 + (longlong)(int)uVar7 * 4);
        if (iVar4 == -1) {
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          local_b8 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          puVar2 = (undefined4 *)(lVar3 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          local_c8 = *puVar2;
          uStack_c4 = puVar2[1];
          uStack_c0 = puVar2[2];
          uStack_bc = puVar2[3];
          local_68 = DAT_14c846338;
          local_70 = DAT_14c846330;
          local_5c = DAT_14c846338;
          local_64 = DAT_14c846330;
          local_58 = DAT_14c84635c;
          local_50 = 0;
          local_4e = 0;
          local_88 = local_c8;
          uStack_84 = uStack_c4;
          uStack_80 = uStack_c0;
          uStack_7c = uStack_bc;
          local_78 = local_b8;
          iVar4 = FUN_146c02208(lVar6,&local_88);
          *(int *)(lVar5 + (longlong)(int)uVar7 * 4) = iVar4;
        }
        local_a4[lVar9] = iVar4;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      FUN_146c01152(lVar6,local_a4,0);
      lVar5 = local_d0 + 3;
      lVar8 = lVar8 + 0xc;
    } while ((int)lVar5 < (int)param_3[1]);
  }
  lVar6 = local_d8;
  uVar7 = *(int *)(local_d8 + 0xe8) * 0x200 + *(int *)(local_d8 + 0xec);
  plVar1 = (longlong *)(local_d8 + 0x2e8);
  FUN_144a9ff88(plVar1,uVar7);
  iVar4 = *(int *)(lVar6 + 0x2f0);
  *(uint *)(lVar6 + 0x2f0) = iVar4 + uVar7;
  if ((uint)(*(int *)(lVar6 + 0x2f4) - iVar4) < uVar7) {
    FUN_1446f48e2();
  }
  if (0 < (int)uStack_90) {
    lVar6 = 0;
    do {
      lVar5 = (longlong)*(int *)(local_98 + lVar6 * 4);
      if (lVar5 != -1) {
        *(int *)(*plVar1 + lVar5 * 4) = (int)lVar6;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_90);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961ce06 FUN_14961ce06 body=366 status=ok
// SIG undefined FUN_14961ce06(void)

void FUN_14961ce06(longlong param_1)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (**(char **)(param_1 + 0xb8) != '\0') goto LAB_14961ce28;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x10))
                  (*(longlong **)(param_1 + 0x2f8),uVar5 & 0xffffffff,
                   *(longlong *)(param_1 + 0x20) + lVar4,
                   *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x20 + lVar4));
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x28));
    }
  }
  else {
    FUN_148397f1b(&local_28,*(undefined4 *)(param_1 + 8),param_1 + 200);
    ppuVar1 = (undefined8 **)(param_1 + 0x2f8);
    if (ppuVar1 == &local_28) {
LAB_14961ce9b:
      if (local_28 != (undefined8 *)0x0) {
        (**(code **)*local_28)(local_28,1);
      }
    }
    else {
      puVar2 = *ppuVar1;
      *ppuVar1 = local_28;
      local_28 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        goto LAB_14961ce9b;
      }
    }
    if (*(char *)(param_1 + 0xb1) == '\x01') {
      FUN_14961cf76(param_1);
    }
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x20);
        local_38 = *(undefined1 *)(lVar3 + 0x20 + lVar4);
        (**(code **)(**(longlong **)(param_1 + 0x2f8) + 8))
                  (*(longlong **)(param_1 + 0x2f8),uVar5 & 0xffffffff,
                   *(undefined8 *)(lVar3 + 0x18 + lVar4),lVar3 + lVar4);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x28;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x28));
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (**(char **)(param_1 + 0xb8) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x40))
              (*(longlong **)(param_1 + 0x2f8),param_1 + 0x10);
  }
LAB_14961ce28:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14961cf76 FUN_14961cf76 body=1185 status=ok
// SIG undefined FUN_14961cf76(void)

void FUN_14961cf76(longlong param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  int local_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_190;
  double local_188 [4];
  double local_168 [4];
  double local_148 [4];
  double local_128 [4];
  double local_108 [6];
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_108[3] = 1.79769313486232e+308;
  local_108[4] = 1.79769313486232e+308;
  local_108[5] = 1.79769313486232e+308;
  local_108[0] = 2.2250738585072014e-308;
  local_108[1] = 2.2250738585072014e-308;
  local_108[2] = 2.2250738585072014e-308;
  local_128[2] = 1.79769313486232e+308;
  local_128[0] = 1.79769313486232e+308;
  local_128[1] = 1.79769313486232e+308;
  local_148[2] = 2.2250738585072014e-308;
  local_148[0] = 2.2250738585072014e-308;
  local_148[1] = 2.2250738585072014e-308;
  local_1a0 = 0;
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 < 1) {
    uVar17 = 0xffffffff;
    uVar18 = 0x7fefffff;
    dVar15 = -1.79769313486232e+308;
    dVar13 = -1.79769313486232e+308;
    dVar12 = dVar15;
  }
  else {
    uVar17 = 0xffffffff;
    uVar18 = 0x7fefffff;
    do {
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x20) + (longlong)local_1a0 * 0x28);
      local_168[2] = pdVar1[2];
      local_168[0] = *pdVar1;
      local_168[1] = pdVar1[1];
      lVar8 = 0;
      do {
        dVar15 = local_168[lVar8];
        uVar9 = SUB84(dVar15,0);
        uVar11 = (undefined4)((ulonglong)dVar15 >> 0x20);
        dVar13 = dVar15;
        if (local_108[lVar8 + 3] <= dVar15) {
          dVar13 = local_108[lVar8 + 3];
        }
        dVar12 = local_108[lVar8];
        if (dVar15 <= dVar12) {
          uVar9 = SUB84(dVar12,0);
          uVar11 = (undefined4)((ulonglong)dVar12 >> 0x20);
        }
        local_108[lVar8 + 3] = dVar13;
        local_108[lVar8] = (double)CONCAT44(uVar11,uVar9);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      dVar15 = pdVar1[3];
      if (0.0 < dVar15) {
        local_188[2] = pdVar1[2];
        local_188[0] = *pdVar1;
        local_188[1] = pdVar1[1];
        lVar8 = 0;
        do {
          dVar13 = local_188[lVar8];
          uVar9 = SUB84(dVar13,0);
          uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
          dVar12 = dVar13;
          if (local_128[lVar8] <= dVar13) {
            dVar12 = local_128[lVar8];
          }
          dVar3 = local_148[lVar8];
          if (dVar13 <= dVar3) {
            uVar9 = SUB84(dVar3,0);
            uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
          }
          local_128[lVar8] = dVar12;
          local_148[lVar8] = (double)CONCAT44(uVar11,uVar9);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        uVar9 = SUB84(dVar15,0);
        uVar11 = (int)((ulonglong)dVar15 >> 0x20);
        if ((double)CONCAT44(uVar18,uVar17) <= dVar15) {
          uVar9 = uVar17;
          uVar11 = uVar18;
        }
        uVar18 = uVar11;
        uVar17 = uVar9;
        FUN_1447cbafe(&local_d8,&local_1b8,&local_1a0,0);
        iVar5 = *(int *)(param_1 + 0x28);
      }
      local_1a0 = local_1a0 + 1;
    } while (local_1a0 < iVar5);
    dVar15 = local_108[1] - local_108[4];
    dVar13 = local_108[2] - local_108[5];
    dVar12 = local_108[0] - local_108[3];
  }
  if (0 < iVar5) {
    uVar7 = 0;
    do {
      if ((int)uStack_d0 != local_a4) {
        puVar6 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar6 = local_a0;
        }
        for (iVar4 = *(int *)(puVar6 + (ulonglong)((uint)uVar7 & local_90 + 0x7fffffffU) * 4);
            iVar4 != -1; iVar4 = *(int *)(local_d8 + (longlong)iVar4 * 0xc + 4)) {
          if (uVar7 == *(uint *)(local_d8 + (longlong)iVar4 * 0xc)) goto LAB_14961d316;
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x20);
      local_1a8 = local_148[2];
      local_1b8 = local_148[0];
      uStack_1b0 = local_148[1];
      local_1c8 = local_128[2];
      local_1d8 = local_128[0];
      uStack_1d0 = local_128[1];
      local_1e8 = *(undefined8 *)(lVar8 + 0x10 + uVar7 * 0x28);
      puVar2 = (undefined4 *)(lVar8 + uVar7 * 0x28);
      local_1f8 = *puVar2;
      uStack_1f4 = puVar2[1];
      uStack_1f0 = puVar2[2];
      uStack_1ec = puVar2[3];
      FUN_144afdf0e(&local_1a0,&local_1f8,&local_1d8,&local_1b8);
      dVar3 = (double)CONCAT44(uStack_19c,local_1a0) - *(double *)(lVar8 + uVar7 * 0x28);
      dVar14 = local_198 - *(double *)(lVar8 + 8 + uVar7 * 0x28);
      dVar16 = local_190 - *(double *)(lVar8 + 0x10 + uVar7 * 0x28);
      fVar10 = (float)FUN_1448c9f94(param_1 + 0x30,
                                    (float)(SQRT(dVar16 * dVar16 + dVar3 * dVar3 + dVar14 * dVar14)
                                           / SQRT(dVar13 * dVar13 +
                                                  dVar12 * dVar12 + dVar15 * dVar15)),0);
      *(double *)(lVar8 + 0x18 + uVar7 * 0x28) = (double)fVar10 * (double)CONCAT44(uVar18,uVar17);
      iVar5 = *(int *)(param_1 + 0x28);
LAB_14961d316:
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar5);
  }
  local_90 = 0;
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_d8);
  if ((local_80 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961d418 FUN_14961d418 body=236 status=ok
// SIG undefined FUN_14961d418(void)

void FUN_14961d418(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x2f0)) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2e8) + lVar7 * 4);
      local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10 + lVar6);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + lVar6);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      cVar4 = FUN_146bfed03(&local_58);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
        uVar5 = (ulonglong)(uVar2 & 0x1ff);
        *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = local_48;
        puVar1 = (undefined4 *)(lVar3 + uVar5 * 0x18);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_1 + 0x2f0));
  }
  FUN_146c3906a(param_2,0,1,1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961d506 FUN_14961d506 body=177 status=ok
// SIG undefined FUN_14961d506(void)

void FUN_14961d506(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 800) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x360,0x10);
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_149e06640;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 5) = 3;
    puVar1[6] = 0xffffffffffffffff;
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_14bd8dee0;
    FUN_14964211c(puVar1 + 9,param_2);
    *puVar1 = &PTR_FUN_14bd8dea0;
    *(undefined1 *)(puVar1 + 0x69) = 0;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x20] = puVar1 + 0x69;
    *(undefined8 **)(param_1 + 800) = puVar1;
  }
  return;
}



// FUNCTION 14961d5b8 FUN_14961d5b8 body=317 status=ok
// SIG undefined FUN_14961d5b8(void)

void FUN_14961d5b8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  FUN_14961d6f6(param_1 + 0x2f8);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar7 = *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24);
  uVar10 = 0;
  if ((uVar7 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x28) - 1U))) {
    uVar8 = 1;
    uVar9 = 1;
    if (1 < (int)uVar7) {
      uVar8 = uVar7;
    }
    do {
      uVar10 = uVar8;
      if (uVar8 == uVar9) break;
      uVar12 = uVar9 >> 9;
      uVar13 = uVar9 & 0x1ff;
      uVar10 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x28))[uVar12] +
                                         (ulonglong)uVar13 * 2) - 1U));
  }
  do {
    if (uVar10 == uVar7) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x2f8);
    lVar11 = (longlong)(int)uVar10;
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
    puVar1 = (undefined8 *)(lVar4 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    *(undefined8 *)(lVar3 + 0x10 + lVar11 * 0x28) =
         *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
    puVar1 = (undefined8 *)(lVar3 + lVar11 * 0x28);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar3 + 0x18 + lVar11 * 0x28) = 0;
    *(undefined1 *)(lVar3 + 0x20 + lVar11 * 0x28) = 0;
    uVar8 = uVar10 + 1;
    if ((int)(uVar10 + 1) < (int)uVar7) {
      uVar8 = uVar7;
    }
    uVar9 = uVar10;
    do {
      uVar10 = uVar8;
      if (uVar8 - 1 == uVar9) break;
      uVar10 = uVar9 + 1;
      uVar9 = uVar10;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar2 + 0x28) +
                                           (ulonglong)(uVar10 >> 9) * 8) +
                                         (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14961d6f6 FUN_14961d6f6 body=110 status=ok
// SIG undefined FUN_14961d6f6(void)

void FUN_14961d6f6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149642054(param_1,iVar1);
    }
    FUN_14964234e((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14964236a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14961d766 FUN_14961d766 body=557 status=ok
// SIG undefined FUN_14961d766(void)

void FUN_14961d766(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x38))();
  uVar3 = *(undefined4 *)*param_2;
  FUN_1482ac96c(param_1[2],uVar3,param_1 + 0x11);
  plVar1 = param_1 + 0x1b;
  FUN_1482aca8c(param_1[2],uVar3,plVar1);
  FUN_145c3f772(param_1 + 7,param_1 + 0x11);
  local_78 = 0;
  uStack_70 = 0;
  plVar2 = param_1 + 0x1d;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar5 = 0;
  local_60 = plVar2;
  if ((int)param_1[0x20] != 0) {
    FUN_1449c0562(&local_68);
    iVar5 = (int)param_1[0x20];
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  uStack_a0 = local_68;
  local_98 = local_60;
  local_a8 = plVar1;
  if ((iStack_54 != iVar5) || (local_60 != plVar2)) {
    do {
      FUN_1482abe0a(param_1[2],*(undefined4 *)(*local_a8 + (longlong)iStack_8c * 0xc),&local_78);
      local_90 = local_90 & ~uStack_a0._4_4_;
      FUN_1449c0562(&uStack_a0);
    } while (local_a8 != plVar1 || (local_98 != plVar2 || iStack_8c != iVar5));
  }
  local_a8 = (longlong *)0x0;
  uStack_a0 = 1;
  FUN_1446f48e2(&local_a8,0);
  lVar4 = local_78;
  *(undefined4 *)local_a8 = uVar3;
  lVar7 = (longlong)(int)uStack_70;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar4 + lVar6));
      FUN_1449e3bb0(&local_a8,&local_68);
      lVar6 = lVar6 + 4;
    } while (lVar7 * 4 != lVar6);
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_a8);
  FUN_14961d994(param_1,param_1[1],&local_a8,*(undefined1 *)((longlong)param_1 + 0x333));
  (**(code **)(*param_1 + 0x48))(param_1);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961d994 FUN_14961d994 body=1265 status=ok
// SIG undefined FUN_14961d994(void)

void FUN_14961d994(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 == '\0') {
    local_f8 = (longlong *)(param_1 + 0x308);
    FUN_144a9ff88(local_f8,*(int *)(param_2 + 0x170) * 3);
    uVar11 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar18 = 0;
    if ((uVar11 != 0) &&
       (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar16 = 1;
      uVar17 = 1;
      if (1 < (int)uVar11) {
        uVar16 = uVar11;
      }
      do {
        uVar18 = uVar16;
        if (uVar16 == uVar17) break;
        uVar10 = uVar17 >> 9;
        uVar13 = uVar17 & 0x1ff;
        uVar18 = uVar17;
        uVar17 = uVar17 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar10] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_14961ddf5:
    if (uVar18 != uVar11) {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
      uVar9 = (ulonglong)(uVar18 & 0x1ff);
      uVar2 = *(undefined4 *)(lVar5 + uVar9 * 0xc);
      uVar3 = *(undefined4 *)(lVar5 + 4 + uVar9 * 0xc);
      uVar4 = *(undefined4 *)(lVar5 + 8 + uVar9 * 0xc);
      iVar14 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar14 + 1U) {
        FUN_1446f48e2(local_f8,iVar14);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar14 * 4) = uVar2;
      iVar14 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar14 + 1U) {
        FUN_1446f48e2(local_f8,iVar14);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar14 * 4) = uVar3;
      iVar14 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar14 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar14 + 1U) {
        FUN_1446f48e2(local_f8,iVar14);
      }
      *(undefined4 *)(*local_f8 + (longlong)iVar14 * 4) = uVar4;
      uVar16 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar11) {
        uVar16 = uVar11;
      }
      uVar17 = uVar18;
      do {
        uVar18 = uVar16;
        if (uVar16 - 1 == uVar17) break;
        uVar18 = uVar17 + 1;
        uVar17 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      goto LAB_14961ddf5;
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar5 = param_3[1];
    iVar14 = 0;
    if ((longlong)(int)lVar5 != 0) {
      lVar15 = *param_3;
      lVar12 = 0;
      do {
        puVar8 = (undefined8 *)
                 FUN_1482abc62(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar15 + lVar12));
        local_c8 = *puVar8;
        local_c0 = *(undefined4 *)(puVar8 + 1);
        FUN_146bc855c(&local_98,&local_c8);
        lVar12 = lVar12 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar12);
      iVar14 = ((int)uStack_90 - local_64) * 3;
    }
    plVar1 = (longlong *)(param_1 + 0x308);
    FUN_144a9ff88(plVar1,iVar14);
    local_b0 = local_88;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar14 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar14 = local_70;
    }
    local_d8 = local_a8;
    uVar6 = local_d8;
    local_d0 = local_a0;
    local_cc = local_9c;
    local_e8 = local_b8;
    local_e0 = local_b0;
    local_f0 = &local_98;
    local_d8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    iVar7 = local_d8._4_4_;
    if ((local_d8._4_4_ != iVar14) || (local_d8 = uVar6, local_b0 != local_88)) {
      do {
        local_d8 = uVar6;
        uVar18 = *(uint *)(*local_f0 + (longlong)iVar7 * 0xc);
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
        uVar9 = (ulonglong)(uVar18 & 0x1ff);
        uVar2 = *(undefined4 *)(lVar5 + uVar9 * 0xc);
        uVar3 = *(undefined4 *)(lVar5 + 4 + uVar9 * 0xc);
        uVar4 = *(undefined4 *)(lVar5 + 8 + uVar9 * 0xc);
        iVar7 = *(int *)(param_1 + 0x310);
        *(uint *)(param_1 + 0x310) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x314) < iVar7 + 1U) {
          FUN_1446f48e2(plVar1,iVar7);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar7 * 4) = uVar2;
        iVar7 = *(int *)(param_1 + 0x310);
        *(uint *)(param_1 + 0x310) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x314) < iVar7 + 1U) {
          FUN_1446f48e2(plVar1,iVar7);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar7 * 4) = uVar3;
        iVar7 = *(int *)(param_1 + 0x310);
        *(uint *)(param_1 + 0x310) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x314) < iVar7 + 1U) {
          FUN_1446f48e2(plVar1,iVar7);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar7 * 4) = uVar4;
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
        FUN_1449c0562(&local_e8);
        iVar7 = local_d8._4_4_;
        uVar6 = local_d8;
      } while (local_f0 != &local_98 || (local_e0 != local_88 || local_d8._4_4_ != iVar14));
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  FUN_14068ded2(param_1 + 0x38,0);
  iVar14 = *(int *)(param_1 + 0x310);
  if ((longlong)iVar14 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x308);
    lVar15 = 0;
    do {
      local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar5 + lVar15));
      FUN_1447cbafe(param_1 + 0x38,&local_f0,&local_98,0);
      lVar15 = lVar15 + 4;
    } while ((longlong)iVar14 * 4 != lVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14961de86 FUN_14961de86 body=360 status=ok
// SIG undefined FUN_14961de86(void)

void FUN_14961de86(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 *local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_1;
  (**(code **)(*param_1 + 0x38))();
  local_70 = param_2;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar7 = (undefined4 *)*param_2;
    puVar2 = puVar7 + *(int *)(param_2 + 1);
    plVar1 = local_78 + 0x11;
    do {
      plVar5 = (longlong *)FUN_1482abdda(local_78[2],*puVar7);
      lVar4 = plVar5[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar3 = *plVar5;
        lVar6 = 0;
        do {
          local_58[0] = CONCAT44(local_58[0]._4_4_,*(undefined4 *)(lVar3 + lVar6));
          FUN_1447cbafe(plVar1,local_68,local_58,0);
          lVar6 = lVar6 + 4;
        } while ((longlong)(int)lVar4 * 4 != lVar6);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar2);
  }
  plVar5 = local_78;
  plVar1 = local_78 + 0x11;
  FUN_145c3f772(local_78 + 0x1b,plVar1);
  FUN_145c3f772(plVar5 + 7,plVar1);
  local_58[0] = 0;
  local_58[1] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1482ac060(plVar5[2],local_70,local_68);
  (**(code **)(*plVar5 + 0x40))(plVar5,local_58,local_68);
  FUN_14961d994(plVar5,plVar5[1],local_68,*(undefined1 *)((longlong)plVar5 + 0x333));
  (**(code **)(*plVar5 + 0x48))(plVar5);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961dff0 FUN_14961dff0 body=308 status=ok
// SIG undefined FUN_14961dff0(void)

void FUN_14961dff0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x38))();
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      iVar3 = FUN_1482abba8(param_1[2],*(undefined4 *)(lVar1 + lVar4));
      local_58[0] = CONCAT44(local_58[0]._4_4_,iVar3);
      if (-1 < iVar3) {
        FUN_1447cbafe(param_1 + 0x11,local_68,local_58,0);
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar4);
  }
  FUN_145c3f772(param_1 + 0x1b,param_1 + 0x11);
  FUN_145c3f772(param_1 + 7,param_1 + 0x11);
  local_58[0] = 0;
  local_58[1] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1482ac6e8(param_1[2],param_2,local_68);
  (**(code **)(*param_1 + 0x40))(param_1,local_58,local_68);
  FUN_14961d994(param_1,param_1[1],local_68,*(undefined1 *)((longlong)param_1 + 0x333));
  (**(code **)(*param_1 + 0x48))(param_1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961e126 FUN_14961e126 body=955 status=ok
// SIG undefined FUN_14961e126(void)

void FUN_14961e126(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  iVar17 = *(int *)(param_1 + 0x20);
  local_c8 = param_3;
  if ((longlong)iVar17 != 0) {
    lVar20 = *(longlong *)(param_1 + 0x18);
    lVar18 = 0;
    do {
      FUN_1482ddc96(&local_98,param_2,*(undefined4 *)(lVar20 + lVar18));
      lVar18 = lVar18 + 4;
    } while ((longlong)iVar17 * 4 != lVar18);
  }
  FUN_1482df238(param_1 + 0x18,param_2);
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar20 = param_1 + 0x48;
  local_78 = 0x100000000;
  local_68._0_4_ = 0xffffffff;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  uStack_70 = lVar20;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar17 = 0;
  }
  else {
    FUN_1449c0562(&local_78);
    iVar17 = *(int *)(param_1 + 0x60);
  }
  uStack_a0 = CONCAT44(uStack_5c,uStack_60);
  local_a8._0_4_ = (uint)local_68;
  local_a8._4_4_ = local_68._4_4_;
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c0 = plVar1;
  if ((local_68._4_4_ != iVar17) || (uStack_70 != lVar20)) {
    do {
      uVar5 = *(uint *)(*local_c0 + (longlong)local_a8._4_4_ * 0xc);
      lVar13 = (longlong)(int)uVar5;
      lVar18 = *(longlong *)(param_1 + 0x2f8);
      lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
      puVar16 = (undefined4 *)(lVar21 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
      uVar7 = *puVar16;
      uVar8 = puVar16[1];
      uVar9 = puVar16[2];
      uVar10 = puVar16[3];
      *(undefined8 *)(lVar18 + 0x10 + lVar13 * 0x28) =
           *(undefined8 *)(lVar21 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
      puVar16 = (undefined4 *)(lVar18 + lVar13 * 0x28);
      *puVar16 = uVar7;
      puVar16[1] = uVar8;
      puVar16[2] = uVar9;
      puVar16[3] = uVar10;
      *(undefined8 *)(lVar18 + 0x18 + lVar13 * 0x28) = 0;
      *(undefined1 *)(lVar18 + 0x20 + lVar13 * 0x28) = 0;
      local_a8._0_4_ = (uint)local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
    } while (local_c0 != plVar1 ||
             (CONCAT44(uStack_ac,uStack_b0) != lVar20 || local_a8._4_4_ != iVar17));
  }
  plVar1 = (longlong *)(param_1 + 0x88);
  lVar20 = param_1 + 0x98;
  local_78 = 0x100000000;
  local_68 = 0xffffffff;
  uStack_60 = 0;
  uStack_70 = lVar20;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar17 = 0;
  }
  else {
    FUN_1449c0562(&local_78);
    iVar17 = *(int *)(param_1 + 0xb0);
  }
  uStack_a0 = CONCAT44(uStack_5c,uStack_60);
  local_a8 = local_68;
  uVar14 = local_a8;
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_a8._4_4_ = (int)((ulonglong)local_68 >> 0x20);
  local_c0 = plVar1;
  if ((local_a8._4_4_ != iVar17) || (uStack_70 != lVar20)) {
    plVar2 = local_c8 + 4;
    iVar12 = local_a8._4_4_;
    local_a8 = uVar14;
    do {
      local_4c = *(int *)(*local_c0 + (longlong)iVar12 * 0xc);
      lVar18 = (longlong)local_4c;
      pcVar6 = (code *)*local_c8;
      plVar15 = (longlong *)local_c8[2];
      if ((longlong *)local_c8[2] == (longlong *)0x0) {
        plVar15 = plVar2;
      }
      local_58 = param_2;
      uVar14 = (**(code **)(*plVar15 + 8))();
      (*pcVar6)(&local_78,uVar14,&local_58,&local_4c);
      lVar21 = *(longlong *)(param_1 + 0x2f8);
      *(undefined8 *)(lVar21 + 0x10 + lVar18 * 0x28) = local_68;
      puVar3 = (undefined8 *)(lVar21 + lVar18 * 0x28);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar21 + 0x18 + lVar18 * 0x28) = *(undefined8 *)(param_1 + 0x328);
      *(undefined1 *)(lVar21 + 0x20 + lVar18 * 0x28) = *(undefined1 *)(param_1 + 0x331);
      local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
      FUN_1449c0562(&local_b8);
      iVar12 = local_a8._4_4_;
      uVar14 = local_a8;
    } while (local_c0 != plVar1 ||
             (CONCAT44(uStack_ac,uStack_b0) != lVar20 || local_a8._4_4_ != iVar17));
  }
  local_a8 = uVar14;
  lVar20 = (longlong)(int)uStack_90;
  if (0 < lVar20) {
    lVar21 = 0;
    lVar18 = 0;
    do {
      puVar16 = (undefined4 *)(local_88 + lVar21);
      uVar5 = *(uint *)(local_98 + lVar18 * 4);
      cVar11 = FUN_146bfed03(puVar16);
      if (cVar11 != '\0') {
        lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        uVar19 = (ulonglong)(uVar5 & 0x1ff);
        *(undefined8 *)(lVar13 + 0x10 + uVar19 * 0x18) = *(undefined8 *)(puVar16 + 4);
        uVar7 = puVar16[1];
        uVar8 = puVar16[2];
        uVar9 = puVar16[3];
        puVar4 = (undefined4 *)(lVar13 + uVar19 * 0x18);
        *puVar4 = *puVar16;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
      lVar18 = lVar18 + 1;
      lVar21 = lVar21 + 0x18;
    } while (lVar20 != lVar18);
  }
  *(undefined1 *)(param_1 + 0x330) = 1;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961e4e2 FUN_14961e4e2 body=1852 status=ok
// SIG undefined FUN_14961e4e2(void)

void FUN_14961e4e2(longlong *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  wchar_t **ppwVar11;
  ulonglong uVar12;
  undefined1 auStack_398 [32];
  undefined1 *local_378;
  undefined1 local_36c [4];
  longlong local_368;
  int local_360;
  wchar_t *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  code *local_318 [2];
  undefined ***local_308;
  undefined **local_2f8;
  longlong *local_2f0;
  wchar_t *local_2d8;
  undefined8 uStack_2d0;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  longlong lStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_b8 [64];
  longlong local_78;
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_14843fdec();
  puVar4 = (undefined8 *)FUN_14001cc68(0x350);
  *puVar4 = FUN_149642468;
  memset(puVar4 + 1,0,0x340);
  FUN_1461b7b04(puVar4 + 2);
  puVar4[2] = &PTR_FUN_14bd8df60;
  puVar4[0x61] = 0;
  puVar4[0x62] = 0;
  puVar4[99] = 0;
  puVar4[100] = 0;
  *(undefined1 *)(puVar4 + 0x65) = 1;
  puVar4[0x66] = 0;
  puVar4[0x67] = 0x3ff0000000000000;
  *(undefined4 *)(puVar4 + 0x68) = 0x1000000;
  lVar7 = param_1[0x2fd];
  param_1[0x2fd] = (longlong)(puVar4 + 2);
  if (lVar7 != 0) {
    (**(code **)(lVar7 + -0x10))(lVar7 + -0x10);
  }
  FUN_1411371f6(local_b8);
  uVar5 = FUN_14479d2ce(param_1 + 0x1f);
  uVar6 = FUN_14120ac06();
  local_378 = local_b8;
  lVar7 = FUN_141137228(uVar5,uVar6,&DAT_14c8464e0,&DAT_14c8464f8);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x22] = lVar7;
  lVar7 = FUN_14851b239(lVar7);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x23] = lVar7;
  FUN_140486fc4(lVar7,*(undefined8 *)(param_1[0x22] + 0x1c8),0);
  FUN_140b506a4(param_1[0x23]);
  FUN_1485063a5(&local_2d8,param_1[0x14]);
  ppwVar11 = &local_2d8;
  plVar8 = param_1 + 0x30;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar8 = (longlong)*ppwVar11;
    ppwVar11 = ppwVar11 + 1;
    plVar8 = plVar8 + 1;
  }
  lVar7 = param_1[0x23];
  plVar8 = param_1 + 0x30;
  ppwVar11 = &local_2d8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *ppwVar11 = (wchar_t *)*plVar8;
    plVar8 = plVar8 + 1;
    ppwVar11 = ppwVar11 + 1;
  }
  local_378 = (undefined1 *)((ulonglong)local_378 & 0xffffffffffffff00);
  FUN_140613f88(lVar7,&local_2d8,0,0);
  FUN_1485584d0(param_1[0x23],param_1[0x14]);
  FUN_148506417(&local_368,param_1[0x14],0);
  if (0 < local_360) {
    uVar12 = 0;
    do {
      (**(code **)(*(longlong *)param_1[0x23] + 0x638))
                ((longlong *)param_1[0x23],uVar12 & 0xffffffff,
                 *(undefined8 *)(local_368 + uVar12 * 8));
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)local_360);
  }
  FUN_1484b18f0(param_1[0x23],1);
  plVar8 = (longlong *)param_1[0x23];
  uStack_350 = 0;
  local_358 = (wchar_t *)0x3e800000000;
  FUN_148506727(&local_2d8,param_1[0x14]);
  (**(code **)(*plVar8 + 0xa78))(plVar8,&local_2d8);
  FUN_141082778(&local_2d8);
  lVar7 = param_1[0x23];
  local_2d8 = (wchar_t *)0x0;
  uStack_2d0._0_4_ = 0;
  FUN_1446efa72(&local_2d8,0,3,0x10);
  pwVar1 = local_2d8;
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,3);
  *(undefined ***)local_2d8 = &PTR_LAB_149e020b0;
  uVar5 = FUN_144a3f946();
  *(undefined8 *)(pwVar1 + 8) = uVar5;
  *(undefined ***)pwVar1 = &PTR_FUN_14bd8dfc0;
  pwVar1[0xc] = L'\0';
  pwVar1[0xd] = L'\0';
  pwVar1[0xe] = L'\0';
  pwVar1[0xf] = L'\0';
  FUN_14485c47a(pwVar1 + 0xc,param_1);
  pwVar1[0x14] = L'\0';
  pwVar1[0x15] = L'\0';
  *(code **)(pwVar1 + 0x10) = FUN_14961ec20;
  FUN_1448b6402(lVar7 + 0x6c8,&local_358,&local_2d8);
  param_1[0x25] = (longlong)local_358;
  FUN_1449db362(&local_2d8);
  lVar7 = FUN_14961ed8c(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x24] = lVar7;
  (**(code **)(*param_1 + 0x308))(param_1,lVar7);
  lVar7 = (**(code **)(*(longlong *)param_1[0x23] + 0xa88))();
  param_1[0x283] = lVar7;
  param_1[0x284] = 0;
  FUN_146bee918(param_1 + 0x282,0);
  param_1[0x284] =
       (ulonglong)(uint)(*(int *)(param_1[0x283] + 0x214) + *(int *)(param_1[0x283] + 0x218));
  FUN_14961ee22(param_1);
  uVar5 = (**(code **)(*(longlong *)param_1[0x23] + 0xa88))();
  FUN_14852d72e(param_1 + 0x210,uVar5,param_1 + 0x1e2);
  local_308 = (undefined ***)0x0;
  local_2f8 = &PTR_LAB_14bd8e030;
  local_318[0] = FUN_14455e0d2;
  local_2f0 = param_1;
  FUN_1485327aa(param_1 + 0x21e,local_318);
  if (local_318[0] != (code *)0x0) {
    pppuVar10 = local_308;
    if (local_308 == (undefined ***)0x0) {
      pppuVar10 = &local_2f8;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_358 = (wchar_t *)param_1[0x212];
  uStack_2d0 = param_1[0x213];
  local_348 = (longlong *)param_1[0x214];
  uStack_2c0 = param_1[0x215];
  local_2b8 = param_1[0x216];
  lStack_2b0 = param_1[0x217];
  local_2a8 = param_1[0x218];
  uStack_2a0 = param_1[0x219];
  lVar2 = local_2a8;
  lVar3 = uStack_2a0;
  local_2c8 = local_348;
  lVar9 = uStack_2c0;
  local_2d8 = local_358;
  lVar7 = uStack_2d0;
  param_1[0x218] = CONCAT44(uStack_324,local_328);
  param_1[0x219] = CONCAT44(uStack_31c,uStack_320);
  param_1[0x216] = (longlong)&PTR_LAB_14bd8e050;
  param_1[0x217] = (longlong)param_1;
  param_1[0x214] = 0;
  param_1[0x215] = CONCAT44(uStack_33c,uStack_340);
  param_1[0x212] = (longlong)FUN_14455e16c;
  param_1[0x213] = CONCAT44(uStack_34c,uStack_350);
  uStack_2d0._4_4_ = (undefined4)((ulonglong)uStack_2d0 >> 0x20);
  uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
  local_2a8._4_4_ = (undefined4)((ulonglong)local_2a8 >> 0x20);
  uStack_2a0._4_4_ = (undefined4)((ulonglong)uStack_2a0 >> 0x20);
  local_328 = (undefined4)local_2a8;
  uStack_324 = local_2a8._4_4_;
  uStack_320 = (undefined4)uStack_2a0;
  uStack_31c = uStack_2a0._4_4_;
  local_338 = local_2b8;
  lStack_330 = lStack_2b0;
  uStack_340 = (undefined4)uStack_2c0;
  uStack_33c = uStack_2c0._4_4_;
  uStack_350 = (undefined4)uStack_2d0;
  uStack_34c = uStack_2d0._4_4_;
  uStack_2d0 = lVar7;
  uStack_2c0 = lVar9;
  local_2a8 = lVar2;
  uStack_2a0 = lVar3;
  if (local_358 != (wchar_t *)0x0) {
    plVar8 = local_348;
    if (local_348 == (longlong *)0x0) {
      plVar8 = &local_338;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FUN_148506321(param_1[0x14]);
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_14855a50a(param_1 + 0x86);
  FUN_1485596a0(param_1 + 0x12e);
  param_1[0x3e] = 0x3f800000;
  param_1[0x3f] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x40) = 0x40000000;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1304) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x261) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x262) = 0x40800000;
  FUN_14961d506(param_1[0x2fd],*(undefined4 *)(param_1[0x24] + 0xb0));
  if ((int)param_1[0x1ef] < 2) {
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    local_2d8 = L"NoGroupsWarning";
    uStack_2d0._0_4_ = 0xf;
    FUN_1446e940c(&local_358,&local_2d8);
    local_2d8 = L"UDeformMeshPolygonsTool";
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,0x17);
    FUN_1446e940c(local_36c,&local_2d8);
    FUN_140208bae(&local_2d8,local_36c,&local_358,
                  L"This object has only a single PolyGroup. Use the GrpGen, GrpPnt or TriSel (Create PolyGroup) tools to modify PolyGroups."
                 );
    (**(code **)(*plVar8 + 0x340))(plVar8,&local_2d8,3);
    if (local_2d8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_2d8 + 0x10))();
    }
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_2d8 = L"DeformMeshPolygonsToolDescription";
  uStack_2d0._0_4_ = 0x21;
  FUN_1446e940c(&local_358,&local_2d8);
  local_2d8 = L"UDeformMeshPolygonsTool";
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,0x17);
  FUN_1446e940c(local_36c,&local_2d8);
  FUN_140208bae(&local_2d8,local_36c,&local_358,
                L"Deform the mesh by directly manipulating (i.e. click-and-drag) the PolyGroup edges, faces, and vertices."
               );
  (**(code **)(*plVar8 + 0x340))(plVar8,&local_2d8,2);
  if (local_2d8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_2d8 + 0x10))();
  }
  if (local_368 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961ec20 FUN_14961ec20 body=364 status=ok
// SIG undefined FUN_14961ec20(void)

void FUN_14961ec20(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  *(undefined1 *)(param_1 + 0x17f0) = 1;
  *(undefined1 *)(param_1 + 0x1131) = 0;
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xa88))();
  uVar9 = *(int *)(lVar8 + 0x20) * 0x200 + *(int *)(lVar8 + 0x24);
  uVar12 = 0;
  if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x28) - 1U))) {
    uVar12 = 1;
    uVar11 = 1;
    if (1 < (int)uVar9) {
      uVar12 = (ulonglong)uVar9;
    }
    do {
      uVar13 = uVar11;
      if ((uint)uVar12 == uVar13) goto LAB_14961ed45;
      uVar11 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x28))[uVar13 >> 9] +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    uVar12 = (ulonglong)uVar13;
  }
LAB_14961ed45:
  do {
    uVar11 = (uint)uVar12;
    if (uVar11 == uVar9) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x17e8) + 800) != 0) {
        FUN_144556e98();
        *(undefined8 *)(*(longlong *)(param_1 + 0x17e8) + 800) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x17e8) + 0x318) = 1;
      }
      return;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (uVar12 >> 9) * 8);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x17e8) + 0x2f8);
    puVar1 = (undefined4 *)(lVar2 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar11 * 0x28) =
         *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
    puVar1 = (undefined4 *)(lVar3 + (longlong)(int)uVar11 * 0x28);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    uVar13 = uVar11 + 1;
    if ((int)(uVar11 + 1) < (int)uVar9) {
      uVar13 = uVar9;
    }
    do {
      iVar10 = (int)uVar12;
      uVar12 = (ulonglong)uVar13;
      if (uVar13 - 1 == iVar10) break;
      uVar11 = iVar10 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar8 + 0x28) +
                                           (ulonglong)(uVar11 >> 9) * 8) +
                                         (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 14961ed8c FUN_14961ed8c body=148 status=ok
// SIG undefined FUN_14961ed8c(void)

undefined8 FUN_14961ed8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f994e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961ee22 FUN_14961ee22 body=183 status=ok
// SIG undefined FUN_14961ee22(void)

void FUN_14961ee22(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [368];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xa88))();
  FUN_1482aa55c(local_198,uVar2,1);
  lVar1 = param_1 + 0xf10;
  FUN_148466536(lVar1,local_198);
  FUN_145aba0b4(local_198);
  FUN_1482dd128(param_1 + 0x14f0,uVar2,lVar1);
  FUN_1482dd128(*(undefined8 *)(param_1 + 0x17e8),uVar2,lVar1);
  FUN_14961d5b8(*(undefined8 *)(param_1 + 0x17e8));
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961eeda FUN_14961eeda body=487 status=ok
// SIG undefined FUN_14961eeda(void)

void FUN_14961eeda(wchar_t *param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  code *local_60;
  wchar_t **local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  if (0 < *(int *)(param_1 + 0xbfa)) {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  }
  param_1[0xbfa] = L'\0';
  param_1[0xbfb] = L'\0';
  lVar1 = *(longlong *)(param_1 + 0xbf4);
  if (lVar1 != 0) {
    param_1[0xbf4] = L'\0';
    param_1[0xbf5] = L'\0';
    param_1[0xbf6] = L'\0';
    param_1[0xbf7] = L'\0';
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(longlong *)(param_1 + 0x8c) != 0) {
    if (*(longlong *)(param_1 + 0x94) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x8c) + 0x6c8);
    }
    FUN_14850635b(*(longlong *)(param_1 + 0x50));
    if (param_2 == '\x01') {
      lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
      local_48 = L"DeformMeshPolygonsToolTransactionName";
      local_40 = 0x25;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"UDeformMeshPolygonsTool";
      local_40 = 0x17;
      FUN_1446e940c(local_50,&local_48);
      FUN_140208bae(&local_48,local_50,local_4c,L"PolyGroup Deform");
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_48 + 0x10))();
      }
      local_60 = FUN_14455e480;
      local_58 = &local_48;
      local_48 = param_1;
      (**(code **)(**(longlong **)(param_1 + 0x8c) + 0xa90))();
      lVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
      (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
    }
    FUN_1401bf202(*(longlong *)(param_1 + 0x8c));
    (**(code **)(**(longlong **)(param_1 + 0x8c) + 0x420))(*(longlong **)(param_1 + 0x8c),0);
    param_1[0x8c] = L'\0';
    param_1[0x8d] = L'\0';
    param_1[0x8e] = L'\0';
    param_1[0x8f] = L'\0';
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x88),0,1);
    param_1[0x88] = L'\0';
    param_1[0x89] = L'\0';
    param_1[0x8a] = L'\0';
    param_1[0x8b] = L'\0';
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961f0e6 FUN_14961f0e6 body=183 status=ok
// SIG undefined FUN_14961f0e6(void)

void FUN_14961f0e6(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x378))(plVar2);
  cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
  plVar2 = param_1 + 0x86;
  if (*(char *)(param_1[0x24] + 0xa9) == '\x01') {
    plVar2 = param_1 + 0x12e;
  }
  if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_28 = param_1[0x68];
  local_38 = (undefined4)param_1[0x66];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x334);
  uStack_30 = (undefined4)param_1[0x67];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x33c);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961f1b2 FUN_14961f1b2 body=453 status=ok
// SIG undefined FUN_14961f1b2(void)

void FUN_14961f1b2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_118 [32];
  wchar_t **local_f8;
  longlong **local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  undefined1 **local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  wchar_t *local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_68 = &PTR_LAB_14bd8e070;
  local_88[0] = &LAB_14455e4e4;
  local_98 = L"DeformNextTransformTypeTooltip";
  local_90 = 0x1e;
  local_d0 = param_2;
  local_60 = param_1;
  FUN_1446e940c(local_ac,&local_98);
  local_98 = L"UDeformMeshPolygonsTool";
  local_90 = 0x17;
  FUN_1446e940c(local_b0,&local_98);
  FUN_140208bae(local_a8,local_b0,local_ac,L"Cycle to next transform type");
  local_98 = L"DeformNextTransformType";
  local_90 = 0x17;
  FUN_1446e940c(local_b4,&local_98);
  local_98 = L"UDeformMeshPolygonsTool";
  local_90 = 0x17;
  FUN_1446e940c(local_b8,&local_98);
  FUN_140208bae(&local_98,local_b8,local_b4,L"Next Transform Type");
  FUN_140056680(local_c8,L"DeformNextTransformType");
  local_e0 = &DAT_14c965100;
  local_e8 = 0;
  local_f8 = &local_98;
  local_f0 = local_a8;
  local_d8 = local_88;
  FUN_148450124(local_d0,param_1,0x2712,local_c8);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961f378 FUN_14961f378 body=2547 status=ok
// SIG undefined FUN_14961f378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14961f378(longlong param_1,double *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_378 [32];
  double *local_358;
  undefined1 *local_350;
  undefined8 local_348;
  double local_338;
  double dStack_330;
  double local_328;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined1 local_31d;
  undefined4 local_31c;
  undefined1 local_318 [24];
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong *local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double dStack_2a0;
  longlong *local_298;
  double dStack_290;
  longlong local_288 [4];
  undefined1 local_268;
  double local_240;
  longlong local_218 [4];
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [88];
  int local_178;
  int local_14c;
  int local_128;
  int local_fc;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  dVar15 = param_2[3];
  dVar20 = param_2[4];
  dVar14 = *(double *)(param_1 + 0x180);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x1c0);
  dVar17 = *(double *)(param_1 + 400) * -1.0;
  dVar21 = *(double *)(param_1 + 0x198) * 1.0;
  dVar26 = -dVar14;
  dVar27 = -*(double *)(param_1 + 0x188);
  dVar28 = dVar20 * dVar26 - dVar15 * dVar27;
  dVar31 = param_2[5] * dVar27 - dVar20 * dVar17;
  dVar32 = dVar15 * dVar17 - param_2[5] * dVar26;
  dVar31 = dVar31 + dVar31;
  dVar32 = dVar32 + dVar32;
  dVar28 = dVar28 + dVar28;
  auVar30 = divpd(_DAT_149934d80,auVar2);
  local_2e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar30._0_8_);
  uStack_2e0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar30._8_8_);
  dVar34 = *param_2 - *(double *)(param_1 + 0x1a0);
  dVar35 = param_2[1] - *(double *)(param_1 + 0x1a8);
  dVar19 = param_2[2] - *(double *)(param_1 + 0x1b0);
  local_2d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x1d0))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x1d0)));
  dVar29 = dVar35 * dVar26 - dVar27 * dVar34;
  dVar18 = dVar19 * dVar27 - dVar17 * dVar35;
  dVar33 = dVar34 * dVar17 - dVar19 * dVar26;
  dVar18 = dVar18 + dVar18;
  dVar33 = dVar33 + dVar33;
  dVar29 = dVar29 + dVar29;
  dStack_2d0 = ((dVar28 * dVar27 - dVar32 * dVar17) + dVar21 * dVar31 + dVar15) * local_2e8;
  dVar15 = (dVar14 * dVar28 + dVar17 * dVar31 + dVar21 * dVar32 + dVar20) * uStack_2e0;
  local_2e8 = ((dVar29 * dVar27 - dVar33 * dVar17) + dVar21 * dVar18 + dVar34) * local_2e8;
  uStack_2e0 = (dVar14 * dVar29 + dVar17 * dVar18 + dVar21 * dVar33 + dVar35) * uStack_2e0;
  dVar28 = (dVar28 * dVar21 + param_2[5] + (dVar32 * dVar26 - dVar31 * dVar27)) * local_2d8;
  local_2d8 = (dVar29 * dVar21 + dVar19 + (dVar33 * dVar26 - dVar18 * dVar27)) * local_2d8;
  dVar17 = dVar28 * dVar28 + dStack_2d0 * dStack_2d0 + dVar15 * dVar15;
  if (9.99999993922529e-09 < dVar17) {
    dVar17 = 1.0 / SQRT(dVar17);
    dStack_2d0 = dStack_2d0 * dVar17;
    dVar15 = dVar15 * dVar17;
    dVar28 = dVar28 * dVar17;
    dVar17 = dVar28 * dVar28 + dStack_2d0 * dStack_2d0 + dVar15 * dVar15;
  }
  dVar17 = SQRT(dVar17);
  dVar21 = 1.0 / dVar17;
  if (0.0 < dVar17) {
    dStack_2d0 = dStack_2d0 * dVar21;
    local_2c8 = (longlong *)(dVar15 * dVar21);
  }
  else {
    dStack_2d0 = 0.0;
    local_2c8 = (longlong *)0x0;
  }
  dStack_2c0 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar28 * dVar21));
  FUN_1458d302c(local_1d0);
  local_31c = 1;
  lVar4 = *(longlong *)(param_1 + 0x120);
  local_31f = *(undefined1 *)(lVar4 + 0xaa);
  local_31e = *(undefined1 *)(lVar4 + 0xab);
  local_31d = *(undefined1 *)(lVar4 + 0xac);
  local_350 = local_318;
  local_358 = &local_300;
  local_348 = 0;
  uVar7 = FUN_148524926(param_1 + 0x1080,&local_31f,&local_2e8,local_1d0);
  if ((char)uVar7 == '\0') goto LAB_14961f911;
  if (local_14c < local_178) {
    uVar8 = FUN_1482ae398(local_1d0);
LAB_14961f789:
    *param_3 = uVar8;
    fVar16 = (float)((local_2f0 - local_2d8) * dStack_2c0 +
                    (local_300 - local_2e8) * dStack_2d0 +
                    (local_2f8 - uStack_2e0) * (double)local_2c8);
    param_3[2] = (uint)fVar16;
    dVar28 = (double)fVar16;
    dVar33 = (dStack_2d0 * dVar28 + local_2e8) * *(double *)(param_1 + 0x1c0);
    dVar15 = ((double)local_2c8 * dVar28 + uStack_2e0) * *(double *)(param_1 + 0x1c8);
    dVar14 = (dStack_2c0 * dVar28 + local_2d8) * *(double *)(param_1 + 0x1d0);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x180);
    dVar21 = auVar2._0_8_;
    dVar18 = auVar2._8_8_;
    auVar30 = *(undefined1 (*) [16])(param_1 + 400);
    dVar29 = auVar30._0_8_;
    dVar28 = *(double *)(param_1 + 0x198);
    dVar17 = *(double *)(param_1 + 0x198);
    uVar22 = auVar2._8_4_;
    uVar23 = auVar2._12_4_;
    uVar24 = auVar30._0_4_;
    uVar25 = auVar30._4_4_;
    dVar19 = dVar15 * dVar21;
    dVar26 = dVar14 * dVar18;
    dVar20 = dVar33 * dVar29;
    dVar27 = dVar18 * dVar33;
    dVar31 = dVar29 * dVar15;
  }
  else {
    if (local_fc < local_128) {
      uVar8 = FUN_1482ae192(local_1d0);
      goto LAB_14961f789;
    }
    if (*(char *)(param_1 + 0x17f0) == '\x01') {
      FUN_146bee918(param_1 + 0x1410,0);
      *(ulonglong *)(param_1 + 0x1420) =
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 0x1418) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 0x1418) + 0x218));
      *(undefined1 *)(param_1 + 0x17f0) = 0;
    }
    lVar4 = param_1 + 0x1410;
    local_2b8 = 1.79769313486232e+308;
    local_2a8 = 0.0;
    local_298 = (longlong *)0x0;
    local_268 = 0;
    uVar8 = (**(code **)(*(longlong *)(param_1 + 0x1410) + 0x40))(lVar4,&local_2e8,&local_2b8);
    if (local_2a8 != 0.0) {
      plVar9 = local_298;
      if (local_298 == (longlong *)0x0) {
        plVar9 = local_288;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (uVar8 == 0xffffffff) goto LAB_14961f911;
    if (*(char *)(param_1 + 0x17f0) == '\x01') {
      FUN_146bee918(lVar4,0);
      *(ulonglong *)(param_1 + 0x1420) =
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 0x1418) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 0x1418) + 0x218));
      *(undefined1 *)(param_1 + 0x17f0) = 0;
    }
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1418) + 0x10);
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x1418) + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
    uVar10 = (ulonglong)(uVar8 & 0x1ff);
    uVar3 = *(uint *)(lVar5 + uVar10 * 0xc);
    lVar6 = *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8);
    uVar13 = (ulonglong)uVar3 & 0x1ff;
    local_218[2] = *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18);
    plVar9 = (longlong *)(lVar6 + uVar13 * 0x18);
    local_218[0] = *plVar9;
    local_218[1] = plVar9[1];
    uVar3 = *(uint *)(lVar5 + 4 + uVar10 * 0xc);
    lVar6 = *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8);
    uVar13 = (ulonglong)uVar3 & 0x1ff;
    local_1f0 = *(undefined8 *)(lVar6 + 0x10 + uVar13 * 0x18);
    puVar1 = (undefined8 *)(lVar6 + uVar13 * 0x18);
    local_218[3] = *puVar1;
    uStack_1f8 = puVar1[1];
    uVar3 = *(uint *)(lVar5 + 8 + uVar10 * 0xc);
    lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)uVar3 & 0x1ff;
    local_1d8 = *(undefined8 *)(lVar11 + 0x10 + uVar10 * 0x18);
    puVar1 = (undefined8 *)(lVar11 + uVar10 * 0x18);
    local_1e8 = *puVar1;
    uStack_1e0 = puVar1[1];
    local_298 = local_2c8;
    dStack_290 = dStack_2c0;
    local_2a8 = local_2d8;
    dStack_2a0 = dStack_2d0;
    local_2b8 = local_2e8;
    uStack_2b0 = (undefined4)uStack_2e0;
    uStack_2ac = uStack_2e0._4_4_;
    plVar9 = local_218;
    plVar12 = local_288;
    for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
      *plVar12 = *plVar9;
      plVar9 = plVar9 + 1;
      plVar12 = plVar12 + 1;
    }
    FUN_146bd80f0(&local_2b8);
    *param_3 = uVar8;
    param_3[2] = (uint)(float)local_240;
    if (*(char *)(param_1 + 0x17f0) == '\x01') {
      FUN_146bee918(lVar4,0);
      *(ulonglong *)(param_1 + 0x1420) =
           (ulonglong)
           (uint)(*(int *)(*(longlong *)(param_1 + 0x1418) + 0x214) +
                 *(int *)(*(longlong *)(param_1 + 0x1418) + 0x218));
      *(undefined1 *)(param_1 + 0x17f0) = 0;
    }
    FUN_146c13dec(*(undefined8 *)(param_1 + 0x1418),&local_338,uVar8);
    dVar29 = *(double *)(param_1 + 0x180);
    dVar18 = *(double *)(param_1 + 0x188);
    dVar33 = *(double *)(param_1 + 400);
    dVar28 = *(double *)(param_1 + 0x198);
    dVar17 = *(double *)(param_1 + 0x198);
    dVar21 = dStack_330 * dVar29 - local_338 * dVar18;
    dVar15 = local_328 * dVar18 - dStack_330 * dVar33;
    dVar20 = local_338 * dVar33 - dVar29 * local_328;
    dVar15 = dVar15 + dVar15;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    *(double *)(param_3 + 0x10) = (dVar21 * dVar18 - dVar20 * dVar33) + dVar28 * dVar15 + local_338;
    *(double *)(param_3 + 0x12) = (dVar33 * dVar15 - dVar29 * dVar21) + dVar17 * dVar20 + dStack_330
    ;
    *(double *)(param_3 + 0x14) = dVar21 * dVar28 + local_328 + (dVar20 * dVar29 - dVar15 * dVar18);
    dVar33 = (local_240 * dStack_2d0 + local_2e8) * *(double *)(param_1 + 0x1c0);
    dVar15 = ((double)local_2c8 * local_240 + uStack_2e0) * *(double *)(param_1 + 0x1c8);
    dVar14 = (dStack_2c0 * local_240 + local_2d8) * *(double *)(param_1 + 0x1d0);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x180);
    dVar21 = auVar2._0_8_;
    dVar18 = auVar2._8_8_;
    auVar30 = *(undefined1 (*) [16])(param_1 + 400);
    dVar29 = auVar30._0_8_;
    dVar28 = *(double *)(param_1 + 0x198);
    dVar17 = *(double *)(param_1 + 0x198);
    uVar22 = auVar2._8_4_;
    uVar23 = auVar2._12_4_;
    uVar24 = auVar30._0_4_;
    uVar25 = auVar30._4_4_;
    dVar19 = dVar15 * dVar21;
    dVar26 = dVar14 * dVar18;
    dVar20 = dVar33 * dVar29;
    dVar27 = dVar33 * dVar18;
    dVar31 = dVar15 * dVar29;
  }
  dVar20 = dVar20 - dVar21 * dVar14;
  dVar26 = (dVar26 - dVar31) + (dVar26 - dVar31);
  dVar20 = dVar20 + dVar20;
  dVar19 = (dVar19 - dVar27) + (dVar19 - dVar27);
  dVar29 = (dVar29 * dVar26 - dVar21 * dVar19) + dVar17 * dVar20 + dVar15 +
           *(double *)(param_1 + 0x1a8);
  dVar17 = *(double *)(param_1 + 0x1b0);
  auVar2._8_4_ = SUB84(dVar29,0);
  auVar2._0_8_ = (dVar19 * dVar18 - dVar20 * (double)CONCAT44(uVar25,uVar24)) +
                 dVar28 * dVar26 + dVar33 + *(double *)(param_1 + 0x1a0);
  auVar2._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 10) = auVar2;
  *(double *)(param_3 + 0xe) =
       dVar19 * dVar28 + dVar14 + (dVar20 * dVar21 - dVar26 * (double)CONCAT44(uVar23,uVar22)) +
       dVar17;
LAB_14961f911:
  FUN_1456c3cc8(local_1d0);
  if ((local_e0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14961fd6c FUN_14961fd6c body=2696 status=ok
// SIG undefined FUN_14961fd6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14961fd6c(longlong param_1,double *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auStack_298 [32];
  double *local_278;
  double *local_270;
  undefined8 local_268;
  longlong local_260 [2];
  undefined1 local_24f;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined4 local_24c;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d0 [8];
  int local_1c8;
  int local_19c;
  undefined1 local_180 [8];
  int local_178;
  int local_14c;
  undefined1 local_130 [8];
  int local_128;
  int local_fc;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar19 = param_2[3];
  dVar22 = param_2[4];
  dVar11 = *(double *)(param_1 + 0x180);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x1c0);
  dVar5 = -dVar11;
  dVar23 = -*(double *)(param_1 + 0x188);
  dVar16 = *(double *)(param_1 + 400) * -1.0;
  dVar20 = *(double *)(param_1 + 0x198) * 1.0;
  dVar21 = dVar22 * dVar5 - dVar19 * dVar23;
  dVar25 = param_2[5] * dVar23 - dVar22 * dVar16;
  dVar12 = dVar19 * dVar16 - param_2[5] * dVar5;
  dVar25 = dVar25 + dVar25;
  dVar12 = dVar12 + dVar12;
  dVar21 = dVar21 + dVar21;
  auVar14 = divpd(_DAT_149934d80,auVar2);
  local_208 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar14._0_8_);
  dStack_200 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar14._8_8_);
  dVar10 = *param_2 - *(double *)(param_1 + 0x1a0);
  dVar17 = param_2[1] - *(double *)(param_1 + 0x1a8);
  dVar18 = param_2[2] - *(double *)(param_1 + 0x1b0);
  local_1f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x1d0))) &
                      (ulonglong)(1.0 / *(double *)(param_1 + 0x1d0)));
  dVar13 = dVar17 * dVar5 - dVar23 * dVar10;
  dVar15 = dVar18 * dVar23 - dVar16 * dVar17;
  dVar26 = dVar10 * dVar16 - dVar18 * dVar5;
  dVar15 = dVar15 + dVar15;
  dVar26 = dVar26 + dVar26;
  dVar13 = dVar13 + dVar13;
  local_1f0 = ((dVar21 * dVar23 - dVar12 * dVar16) + dVar20 * dVar25 + dVar19) * local_208;
  local_1e8 = (dVar11 * dVar21 + dVar16 * dVar25 + dVar20 * dVar12 + dVar22) * dStack_200;
  local_208 = ((dVar13 * dVar23 - dVar26 * dVar16) + dVar20 * dVar15 + dVar10) * local_208;
  dStack_200 = (dVar11 * dVar13 + dVar16 * dVar15 + dVar20 * dVar26 + dVar17) * dStack_200;
  dVar21 = (dVar21 * dVar20 + param_2[5] + (dVar12 * dVar5 - dVar25 * dVar23)) * local_1f8;
  local_1f8 = (dVar13 * dVar20 + dVar18 + (dVar26 * dVar5 - dVar15 * dVar23)) * local_1f8;
  dVar10 = dVar21 * dVar21 + local_1f0 * local_1f0 + local_1e8 * local_1e8;
  if (9.99999993922529e-09 < dVar10) {
    dVar10 = 1.0 / SQRT(dVar10);
    local_1f0 = local_1f0 * dVar10;
    local_1e8 = local_1e8 * dVar10;
    dVar21 = dVar21 * dVar10;
    dVar10 = dVar21 * dVar21 + local_1f0 * local_1f0 + local_1e8 * local_1e8;
  }
  dVar10 = SQRT(dVar10);
  dVar17 = 1.0 / dVar10;
  if (0.0 < dVar10) {
    local_1f0 = local_1f0 * dVar17;
    local_1e8 = local_1e8 * dVar17;
  }
  else {
    local_1f0 = 0.0;
    local_1e8 = 0.0;
  }
  local_1e0 = -(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar21 * dVar17);
  FUN_1402226aa(param_1 + 0x1200);
  FUN_1402226aa(param_1 + 0x1250);
  FUN_1402226aa(param_1 + 0x12a0);
  FUN_1458d302c(local_1d0);
  local_24c = 1;
  lVar3 = *(longlong *)(param_1 + 0x120);
  local_24f = *(undefined1 *)(lVar3 + 0xaa);
  local_24e = *(undefined1 *)(lVar3 + 0xab);
  local_24d = *(undefined1 *)(lVar3 + 0xac);
  local_270 = &local_248;
  local_278 = &local_228;
  local_268 = 0;
  cVar6 = FUN_148524926(param_1 + 0x1080,&local_24f,&local_208,local_1d0);
  if (cVar6 == '\0') {
    *(undefined1 *)(param_1 + 0x300) = 0;
    goto LAB_1496206aa;
  }
  FUN_145c3f772(param_1 + 0x1200,local_1d0);
  FUN_145c3f772(param_1 + 0x1250,local_180);
  FUN_145c3f772(param_1 + 0x12a0,local_130);
  dVar12 = *(double *)(param_1 + 0x180);
  dVar13 = *(double *)(param_1 + 0x188);
  dVar15 = *(double *)(param_1 + 400);
  local_228 = local_228 * *(double *)(param_1 + 0x1c0);
  dStack_220 = dStack_220 * *(double *)(param_1 + 0x1c8);
  local_218 = local_218 * *(double *)(param_1 + 0x1d0);
  dVar21 = *(double *)(param_1 + 0x198);
  dVar10 = *(double *)(param_1 + 0x198);
  dVar18 = dStack_220 * dVar12 - local_228 * dVar13;
  dVar19 = local_218 * dVar13 - dStack_220 * dVar15;
  dVar22 = local_228 * dVar15 - local_218 * dVar12;
  dVar19 = dVar19 + dVar19;
  dVar22 = dVar22 + dVar22;
  dVar18 = dVar18 + dVar18;
  dVar11 = (dVar15 * dVar19 - dVar12 * dVar18) + dVar10 * dVar22 + dStack_220 +
           *(double *)(param_1 + 0x1a8);
  local_248 = *(double *)(param_1 + 0x1c0) * local_248;
  dStack_240 = *(double *)(param_1 + 0x1c8) * dStack_240;
  local_238 = local_238 * *(double *)(param_1 + 0x1d0);
  dVar17 = dStack_240 * dVar12 - dVar13 * local_248;
  dVar5 = local_238 * dVar13 - dVar15 * dStack_240;
  dVar23 = local_248 * dVar15 - dVar12 * local_238;
  dVar5 = dVar5 + dVar5;
  dVar23 = dVar23 + dVar23;
  dVar17 = dVar17 + dVar17;
  *(undefined1 *)(param_1 + 0x300) = 1;
  auVar2._8_4_ = SUB84(dVar11,0);
  auVar2._0_8_ = (dVar18 * dVar13 - dVar22 * dVar15) + dVar21 * dVar19 + local_228 +
                 *(double *)(param_1 + 0x1a0);
  auVar2._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x330) = auVar2;
  *(double *)(param_1 + 0x340) =
       dVar18 * dVar21 + local_218 + (dVar22 * dVar12 - dVar19 * dVar13) +
       *(double *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x33c);
  *(double *)(param_1 + 0x348) = (dVar17 * dVar13 - dVar23 * dVar15) + dVar21 * dVar5 + local_248;
  *(double *)(param_1 + 0x350) = (dVar15 * dVar5 - dVar12 * dVar17) + dVar10 * dVar23 + dStack_240;
  *(double *)(param_1 + 0x358) = dVar17 * dVar21 + local_238 + (dVar23 * dVar12 - dVar5 * dVar13);
  FUN_14855a224(param_1 + 0x970);
  FUN_1496207f6(param_1);
  FUN_14961f0e6(param_1);
  dVar12 = *(double *)(param_1 + 0x360) - *(double *)(param_1 + 0x1a0);
  dVar10 = *(double *)(param_1 + 0x368) - *(double *)(param_1 + 0x1a8);
  dVar21 = *(double *)(param_1 + 0x370) - *(double *)(param_1 + 0x1b0);
  dVar5 = -*(double *)(param_1 + 0x180);
  dVar23 = -*(double *)(param_1 + 0x188);
  dVar22 = *(double *)(param_1 + 400) * -1.0;
  dVar11 = *(double *)(param_1 + 0x198) * 1.0;
  dVar19 = dVar12 * dVar22 - dVar5 * dVar21;
  dVar17 = dVar10 * dVar5 - dVar12 * dVar23;
  dVar18 = dVar21 * dVar23 - dVar10 * dVar22;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar17 = dVar17 + dVar17;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x1c0);
  auVar24 = divpd(_DAT_149934d80,auVar2);
  dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar24._8_8_) *
           (*(double *)(param_1 + 0x180) * dVar17 + dVar22 * dVar18 + dVar11 * dVar19 + dVar10);
  auVar14._8_4_ = SUB84(dVar10,0);
  auVar14._0_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar24._0_8_) *
       ((dVar17 * dVar23 - dVar19 * dVar22) + dVar11 * dVar18 + dVar12);
  auVar14._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x378) = auVar14;
  *(double *)(param_1 + 0x388) =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x1d0))) &
               (ulonglong)(1.0 / *(double *)(param_1 + 0x1d0))) *
       (dVar11 * dVar17 + dVar21 + (dVar19 * dVar5 - dVar18 * dVar23));
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x37c);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x380);
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 900);
  *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x388);
  cVar6 = *(char *)(*(longlong *)(param_1 + 0x120) + 0xa8);
  *(char *)(param_1 + 0x14e8) = cVar6;
  if (cVar6 == '\x01') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x17e8) + 0x333) = 1;
    if (local_14c < local_178) {
      plVar4 = *(longlong **)(param_1 + 0x17e8);
      FUN_140619b9c(local_180,local_260);
      (**(code **)(*plVar4 + 0x10))(plVar4,local_260);
LAB_14962059b:
      if (local_260[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (local_fc < local_128) {
        plVar4 = *(longlong **)(param_1 + 0x17e8);
        FUN_140619b9c(local_130,local_260);
        (**(code **)(*plVar4 + 0x18))(plVar4,local_260);
        goto LAB_14962059b;
      }
      if (local_19c < local_1c8) {
        plVar4 = *(longlong **)(param_1 + 0x17e8);
        FUN_140619b9c(local_1d0,local_260);
        (**(code **)(*plVar4 + 8))(plVar4,local_260);
        goto LAB_14962059b;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x17e8);
    if ((longlong)*(int *)(lVar3 + 0x2d0) != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x2c8);
      lVar7 = (longlong)*(int *)(lVar3 + 0x2d0) * 0x20 + lVar8;
      bVar9 = false;
      do {
        while (!bVar9) {
          piVar1 = (int *)(lVar8 + 0x18);
          bVar9 = *piVar1 != 0;
          lVar8 = lVar8 + 0x20;
          if (lVar8 == lVar7) {
            if (*piVar1 == 0) goto LAB_1496205bb;
            goto LAB_14962064e;
          }
        }
        lVar8 = lVar8 + 0x20;
        bVar9 = true;
      } while (lVar8 != lVar7);
LAB_14962064e:
      *(undefined1 *)(lVar3 + 0x318) = 1;
      cVar6 = *(char *)(param_1 + 0x14e8);
      goto LAB_14962065b;
    }
LAB_1496205bb:
    *(undefined1 *)(param_1 + 0x14e8) = 0;
LAB_14962065f:
    if (local_14c < local_178) {
      FUN_140619b9c(local_180,local_260);
      FUN_1482dd62e(param_1 + 0x14f0,local_260);
    }
    else if (local_fc < local_128) {
      FUN_140619b9c(local_130,local_260);
      FUN_1482dd4c8(param_1 + 0x14f0,local_260);
    }
    else {
      if (local_1c8 <= local_19c) goto LAB_1496206a2;
      FUN_140619b9c(local_1d0,local_260);
      FUN_1482dd2be(param_1 + 0x14f0,local_260);
    }
    if (local_260[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_14962065b:
    if (cVar6 == '\0') goto LAB_14962065f;
  }
LAB_1496206a2:
  FUN_144556efe(param_1);
LAB_1496206aa:
  FUN_1456c3cc8(local_1d0);
  if ((local_e0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496207f6 FUN_1496207f6 body=649 status=ok
// SIG undefined FUN_1496207f6(void)

void FUN_1496207f6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  undefined1 local_78 [16];
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x338);
  if (*(int *)(param_1 + 0x1258) - *(int *)(param_1 + 0x1284) != 1) {
    local_68 = *(double *)(param_1 + 0x358);
    local_78 = *(undefined1 (*) [16])(param_1 + 0x348);
    FUN_1482ae234(param_1 + 0x3a8,2);
    if (*(int *)(param_1 + 0x12a8) - *(int *)(param_1 + 0x12d4) == 1) {
      uVar6 = FUN_1482ae192(param_1 + 0x1200);
      cVar5 = FUN_1482acfc4(param_1 + 0xf10,uVar6,local_78);
      if (cVar5 != '\0') {
        dVar7 = (double)local_78._0_8_ * *(double *)(param_1 + 0x1c0);
        dVar8 = (double)local_78._8_8_ * *(double *)(param_1 + 0x1c8);
        local_68 = local_68 * *(double *)(param_1 + 0x1d0);
        dVar2 = *(double *)(param_1 + 0x180);
        dVar3 = *(double *)(param_1 + 0x188);
        dVar4 = *(double *)(param_1 + 400);
        dVar1 = *(double *)(param_1 + 0x198);
        dVar9 = dVar8 * dVar2 - dVar7 * dVar3;
        dVar10 = local_68 * dVar3 - dVar8 * dVar4;
        dVar11 = dVar7 * dVar4 - dVar2 * local_68;
        dVar10 = dVar10 + dVar10;
        dVar11 = dVar11 + dVar11;
        dVar9 = dVar9 + dVar9;
        local_68 = dVar9 * dVar1 + local_68 + (dVar11 * dVar2 - dVar10 * dVar3);
        dVar2 = (dVar4 * dVar10 - dVar2 * dVar9) + *(double *)(param_1 + 0x198) * dVar11 + dVar8;
        local_78._8_4_ = SUB84(dVar2,0);
        local_78._0_8_ = (dVar9 * dVar3 - dVar11 * dVar4) + dVar1 * dVar10 + dVar7;
        local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        dVar1 = *(double *)(param_1 + 0x3c0);
        dVar9 = *(double *)(param_1 + 0x3c8);
        dVar11 = *(double *)(param_1 + 0x3d0) + *(double *)(param_1 + 0x3d0);
        local_90 = dVar1 * dVar11 + *(double *)(param_1 + 0x3d8) * (dVar9 + dVar9);
        local_88 = dVar11 * dVar9 - (dVar1 + dVar1) * *(double *)(param_1 + 0x3d8);
        local_80 = 1.0 - ((dVar9 + dVar9) * dVar9 + dVar1 * (dVar1 + dVar1));
        FUN_1482ae2be(param_1 + 0x3a8,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149620a80 FUN_149620a80 body=263 status=ok
// SIG undefined FUN_149620a80(void)

void FUN_149620a80(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x14e0) != 0) {
    cVar1 = *(char *)(param_1 + 0x14e8);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xa88))();
    if (cVar1 == '\x01') {
      lVar4 = *(longlong *)(param_1 + 0x17e8) + 0x38;
    }
    else {
      lVar4 = param_1 + 0x1528;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x14e0);
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_145c3f772(&local_88,lVar4);
    FUN_14854b96e(uVar2,uVar3,&local_88,param_2 ^ 1);
    if (cVar1 == '\x01') {
      lVar4 = *(longlong *)(param_1 + 0x17e8) + 0x268;
    }
    else {
      lVar4 = param_1 + 0x1758;
    }
    FUN_1484ade10(*(undefined8 *)(param_1 + 0x14e0),uVar3,lVar4,param_2 ^ 1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149620bba FUN_149620bba body=129 status=ok
// SIG undefined FUN_149620bba(void)

void FUN_149620bba(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x17f0) = 1;
  FUN_1402226aa(param_1 + 0x1200);
  FUN_1402226aa(param_1 + 0x1250);
  FUN_1402226aa(param_1 + 0x12a0);
  *(undefined1 *)(param_1 + 0x1131) = 0;
  FUN_14855a4c2(param_1 + 0x970);
  FUN_14855bbfa(param_1 + 0x430);
  if (*(char *)(param_1 + 0x14e8) != '\0') {
    return;
  }
  FUN_149620c3c(param_1);
  return;
}



// FUNCTION 149620c3c FUN_149620c3c body=345 status=ok
// SIG undefined FUN_149620c3c(void)

void FUN_149620c3c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x29c] != 0) {
    FUN_149620a80(param_1,1);
    lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    local_48 = L"PolyMeshDeformationChange";
    local_40 = 0x19;
    FUN_1446e940c(local_4c,&local_48);
    local_48 = L"UDeformMeshPolygonsTool";
    local_40 = 0x17;
    FUN_1446e940c(local_50,&local_48);
    FUN_140208bae(&local_48,local_50,local_4c,L"PolyMesh Edit");
    local_58 = *(undefined8 *)param_1[0x29c];
    *(undefined8 *)param_1[0x29c] = 0;
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))
              (lVar1 + 0x28,param_1[0x23],&local_58,&local_48);
    if (local_48 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_48 + 0x10))();
    }
    uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148558a82((longlong)param_1 + 0x17f4,uVar2);
    lVar1 = param_1[0x29c];
    if (lVar1 != 0) {
      FUN_14854b8a8(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  param_1[0x29c] = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149620d96 FUN_149620d96 body=180 status=ok
// SIG undefined FUN_149620d96(void)

void FUN_149620d96(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  FUN_1402226aa(param_1 + 0x240);
  FUN_1402226aa(param_1 + 0x24a);
  FUN_1402226aa(param_1 + 0x254);
  *(undefined1 *)((longlong)param_1 + 0x1131) = 0;
  FUN_14855a4c2(param_1 + 0x12e);
  FUN_14855bbfa(param_1 + 0x86);
  if (param_1[0x29c] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    FUN_148558a82((longlong)param_1 + 0x17f4,uVar2);
    lVar1 = param_1[0x29c];
    if (lVar1 != 0) {
      FUN_14854b8a8(lVar1);
      FUN_1400020a8(lVar1);
    }
    param_1[0x29c] = 0;
  }
  return;
}



// FUNCTION 149620e4a FUN_149620e4a body=1661 status=ok
// SIG undefined FUN_149620e4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_149620e4a(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_178 [32];
  double *local_158;
  double *local_150;
  undefined8 local_148;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x1430) == 0) {
    dVar4 = param_2[3];
    dVar5 = param_2[4];
    dVar6 = *(double *)(param_1 + 0xd0);
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x110);
    dVar8 = *(double *)(param_1 + 0xe0) * -1.0;
    dVar9 = *(double *)(param_1 + 0xe8) * 1.0;
    dVar11 = -dVar6;
    dVar16 = -*(double *)(param_1 + 0xd8);
    dVar12 = dVar5 * dVar11 - dVar4 * dVar16;
    dVar15 = param_2[5] * dVar16 - dVar5 * dVar8;
    dVar17 = dVar4 * dVar8 - param_2[5] * dVar11;
    dVar15 = dVar15 + dVar15;
    dVar17 = dVar17 + dVar17;
    dVar12 = dVar12 + dVar12;
    auVar14 = divpd(_DAT_149934d80,auVar1);
    local_f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar14._0_8_);
    dStack_f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar14._8_8_);
    dVar19 = *param_2 - *(double *)(param_1 + 0xf0);
    dVar20 = param_2[1] - *(double *)(param_1 + 0xf8);
    dVar10 = param_2[2] - *(double *)(param_1 + 0x100);
    local_e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x120))) &
                       (ulonglong)(1.0 / *(double *)(param_1 + 0x120)));
    dVar13 = dVar20 * dVar11 - dVar16 * dVar19;
    dVar3 = dVar10 * dVar16 - dVar8 * dVar20;
    dVar18 = dVar19 * dVar8 - dVar10 * dVar11;
    dVar3 = dVar3 + dVar3;
    dVar18 = dVar18 + dVar18;
    dVar13 = dVar13 + dVar13;
    local_e0 = ((dVar12 * dVar16 - dVar17 * dVar8) + dVar9 * dVar15 + dVar4) * local_f8;
    local_d8 = (dVar6 * dVar12 + dVar8 * dVar15 + dVar9 * dVar17 + dVar5) * dStack_f0;
    local_f8 = ((dVar13 * dVar16 - dVar18 * dVar8) + dVar9 * dVar3 + dVar19) * local_f8;
    dStack_f0 = (dVar6 * dVar13 + dVar8 * dVar3 + dVar9 * dVar18 + dVar20) * dStack_f0;
    dVar8 = (dVar12 * dVar9 + param_2[5] + (dVar17 * dVar11 - dVar15 * dVar16)) * local_e8;
    local_e8 = (dVar13 * dVar9 + dVar10 + (dVar18 * dVar11 - dVar3 * dVar16)) * local_e8;
    dVar9 = dVar8 * dVar8 + local_e0 * local_e0 + local_d8 * local_d8;
    if (9.99999993922529e-09 < dVar9) {
      dVar9 = 1.0 / SQRT(dVar9);
      local_e0 = local_e0 * dVar9;
      local_d8 = local_d8 * dVar9;
      dVar8 = dVar8 * dVar9;
      dVar9 = dVar8 * dVar8 + local_e0 * local_e0 + local_d8 * local_d8;
    }
    dVar9 = SQRT(dVar9);
    dVar11 = 1.0 / dVar9;
    if (0.0 < dVar9) {
      local_e0 = local_e0 * dVar11;
      local_d8 = local_d8 * dVar11;
    }
    else {
      local_e0 = 0.0;
      local_d8 = 0.0;
    }
    local_d0 = -(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar8 * dVar11);
    FUN_1402226aa(param_1 + 0x1150);
    FUN_1402226aa(param_1 + 0x11a0);
    FUN_1402226aa(param_1 + 0x11f0);
    local_13c = 1;
    lVar2 = *(longlong *)(param_1 + 0x70);
    local_13f = *(undefined1 *)(lVar2 + 0xaa);
    local_13e = *(undefined1 *)(lVar2 + 0xab);
    local_13d = *(undefined1 *)(lVar2 + 0xac);
    local_150 = &local_138;
    local_158 = &local_118;
    local_148 = 0;
    cVar7 = FUN_148524926(param_1 + 0xfd0,&local_13f,&local_f8,param_1 + 0x1150);
    if (cVar7 != '\0') {
      dVar3 = *(double *)(param_1 + 0xd0);
      dVar18 = *(double *)(param_1 + 0xd8);
      dVar4 = *(double *)(param_1 + 0xe0);
      local_118 = local_118 * *(double *)(param_1 + 0x110);
      dStack_110 = dStack_110 * *(double *)(param_1 + 0x118);
      local_108 = local_108 * *(double *)(param_1 + 0x120);
      dVar9 = *(double *)(param_1 + 0xe8);
      dVar8 = *(double *)(param_1 + 0xe8);
      dVar11 = dStack_110 * dVar3 - local_118 * dVar18;
      dVar16 = local_108 * dVar18 - dStack_110 * dVar4;
      dVar13 = local_118 * dVar4 - local_108 * dVar3;
      dVar16 = dVar16 + dVar16;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      *(double *)(param_1 + 0x280) =
           (dVar11 * dVar18 - dVar13 * dVar4) + dVar9 * dVar16 + local_118 +
           *(double *)(param_1 + 0xf0);
      *(double *)(param_1 + 0x288) =
           (dVar4 * dVar16 - dVar3 * dVar11) + dVar8 * dVar13 + dStack_110 +
           *(double *)(param_1 + 0xf8);
      *(double *)(param_1 + 0x290) =
           dVar11 * dVar9 + local_108 + (dVar13 * dVar3 - dVar16 * dVar18) +
           *(double *)(param_1 + 0x100);
      local_138 = *(double *)(param_1 + 0x110) * local_138;
      dStack_130 = *(double *)(param_1 + 0x118) * dStack_130;
      local_128 = local_128 * *(double *)(param_1 + 0x120);
      dVar11 = dStack_130 * dVar3 - dVar18 * local_138;
      dVar16 = local_128 * dVar18 - dVar4 * dStack_130;
      dVar13 = local_138 * dVar4 - dVar3 * local_128;
      dVar16 = dVar16 + dVar16;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dVar8 = (dVar4 * dVar16 - dVar3 * dVar11) + dVar8 * dVar13 + dStack_130;
      auVar1._8_4_ = SUB84(dVar8,0);
      auVar1._0_8_ = (dVar11 * dVar18 - dVar13 * dVar4) + dVar9 * dVar16 + local_138;
      auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x298) = auVar1;
      *(double *)(param_1 + 0x2a8) = dVar11 * dVar9 + local_128 + (dVar13 * dVar3 - dVar16 * dVar18)
      ;
      FUN_1496207f6(param_1 + -0xb0);
      FUN_14961f0e6(param_1 + -0xb0);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496214c8 FUN_1496214c8 body=1946 status=ok
// SIG undefined FUN_1496214c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1496214c8(longlong *param_1)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  code *local_160;
  double dStack_158;
  double local_150;
  code *local_148;
  double dStack_140;
  double local_138;
  code *local_128;
  double dStack_120;
  longlong *local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar9 = param_1[0x29d];
  if ((char)lVar9 == '\x01') {
    plVar12 = (longlong *)param_1[0x2fd];
  }
  else {
    plVar12 = param_1 + 0x29e;
  }
  uVar11 = (**(code **)(*(longlong *)param_1[0x23] + 0xa88))();
  plVar1 = param_1 + 0x12e;
  local_128 = (code *)param_1[0x7c];
  dStack_120 = (double)param_1[0x7d];
  local_118 = (longlong *)param_1[0x7e];
  lStack_110 = param_1[0x7f];
  local_108 = param_1[0x80];
  lStack_100 = param_1[0x81];
  cVar10 = FUN_14855a260(plVar1,&local_128,&local_160);
  if (cVar10 == '\0') goto LAB_1496216cf;
  local_138 = local_150;
  local_148 = local_160;
  dStack_140 = dStack_158;
  dVar22 = (double)param_1[0x13c];
  dVar2 = (double)param_1[0x13d];
  dVar13 = (double)param_1[0x13e];
  cVar10 = FUN_14855a2a6(plVar1);
  if (((cVar10 != '\0') && ((char)param_1[0x13a] == '\0')) &&
     (0.0 < ((double)local_160 - (double)param_1[0x26]) * ((double)local_160 - dVar22) +
            (dStack_158 - (double)param_1[0x27]) * (dStack_158 - dVar2) +
            (local_150 - (double)param_1[0x28]) * (local_150 - dVar13))) goto LAB_1496216cf;
  cVar10 = FUN_14855a2a6(plVar1);
  if (cVar10 == '\0') {
    FUN_14855a224(plVar1);
    (**(code **)(*plVar12 + 0x30))(plVar12,uVar11);
    if ((char)param_1[0x29d] == '\0') {
LAB_14962169c:
      FUN_1484b290c(param_1[0x23],1,0,0);
      plVar12 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar12 + 0x348))(plVar12);
    }
  }
  else {
    if ((char)param_1[0x13a] == '\0') {
      FUN_14855a16e(plVar1);
      param_1[0x1da] = (longlong)local_150;
      param_1[0x1d8] = (longlong)local_160;
      param_1[0x1d9] = (longlong)dStack_158;
      FUN_14855a2c4(plVar1,&local_128);
      param_1[0x1e1] = local_f8;
      param_1[0x1df] = local_108;
      param_1[0x1e0] = lStack_100;
      param_1[0x1dd] = (longlong)local_118;
      param_1[0x1de] = lStack_110;
      param_1[0x1db] = (longlong)local_128;
      param_1[0x1dc] = (longlong)dStack_120;
    }
    FUN_146bca7ae(param_1 + 0x1db,&local_170,param_1 + 0x1d8,2);
    dVar22 = SQRT(local_170 * local_170 + local_168 * local_168);
    if (0.0 < dVar22) {
      local_170 = local_170 * (1.0 / dVar22);
    }
    else {
      local_170 = 0.0;
    }
    local_168 = (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(local_168 * (1.0 / dVar22)));
    local_118 = (longlong *)local_138;
    local_128 = local_148;
    dStack_120 = dStack_140;
    FUN_146bca7ae(param_1 + 0x1db,&local_180,&local_128,2);
    dVar22 = SQRT(local_180 * local_180 + local_178 * local_178);
    if (0.0 < dVar22) {
      local_180 = local_180 * (1.0 / dVar22);
    }
    else {
      local_180 = 0.0;
    }
    local_178 = (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(local_178 * (1.0 / dVar22)));
    dVar13 = (double)FUN_149622210(&local_170,&local_180);
    dVar22 = (double)param_1[0x1de];
    dVar2 = (double)param_1[0x1df];
    dVar14 = (double)param_1[0x1e0] + (double)param_1[0x1e0];
    dVar23 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar22 * (dVar22 + dVar22));
    dVar15 = dVar14 * dVar2 - (dVar22 + dVar22) * (double)param_1[0x1e1];
    dVar21 = dVar22 * dVar14 + (double)param_1[0x1e1] * (dVar2 + dVar2);
    dVar7 = (double)param_1[0x30];
    dVar29 = -dVar7;
    dVar31 = -(double)param_1[0x31];
    dVar26 = (double)param_1[0x32] * -1.0;
    dVar28 = (double)param_1[0x33] * 1.0;
    dVar32 = dVar21 * dVar26 - dVar29 * dVar23;
    dVar14 = dVar15 * dVar29 - dVar31 * dVar21;
    dVar20 = dVar23 * dVar31 - dVar26 * dVar15;
    dVar20 = dVar20 + dVar20;
    dVar32 = dVar32 + dVar32;
    dVar14 = dVar14 + dVar14;
    dVar16 = sin(dVar13 * 0.5);
    dVar17 = cos(dVar13 * 0.5);
    dVar24 = (double)param_1[0x1db] - (double)param_1[0x34];
    dVar25 = (double)param_1[0x1dc] - (double)param_1[0x35];
    dVar18 = (double)param_1[0x1dd] - (double)param_1[0x36];
    dVar8 = (double)param_1[0x30];
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x38);
    dVar4 = -dVar8;
    dVar5 = -(double)param_1[0x31];
    dVar2 = (double)param_1[0x32] * -1.0;
    dVar13 = (double)param_1[0x33] * 1.0;
    dVar30 = dVar24 * dVar2 - dVar4 * dVar18;
    dVar27 = dVar25 * dVar4 - dVar24 * dVar5;
    dVar6 = dVar18 * dVar5 - dVar25 * dVar2;
    dVar6 = dVar6 + dVar6;
    dVar30 = dVar30 + dVar30;
    dVar27 = dVar27 + dVar27;
    auVar19 = divpd(_DAT_149934d80,auVar3);
    dVar22 = (double)param_1[0x3a];
    local_128 = (code *)0x0;
    local_118 = (longlong *)FUN_14001cc68(0x48,8);
    *local_118 = (longlong)&PTR_FUN_14bd8e090;
    local_118[1] = (longlong)param_1;
    local_118[2] = (longlong)
                   ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar19._0_8_)
                   * ((dVar27 * dVar5 - dVar30 * dVar2) + dVar13 * dVar6 + dVar24));
    local_118[3] = (longlong)
                   ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar19._8_8_)
                   * (dVar8 * dVar27 + dVar2 * dVar6 + dVar13 * dVar30 + dVar25));
    local_118[4] = (longlong)
                   ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar22)) &
                            (ulonglong)(1.0 / dVar22)) *
                   (dVar13 * dVar27 + dVar18 + (dVar30 * dVar4 - dVar6 * dVar5)));
    local_118[5] = (longlong)
                   (dVar16 * ((dVar14 * dVar31 - dVar32 * dVar26) + dVar28 * dVar20 + dVar21));
    local_118[6] = (longlong)
                   ((dVar7 * dVar14 + dVar26 * dVar20 + dVar28 * dVar32 + dVar15) * dVar16);
    local_118[7] = (longlong)
                   ((dVar28 * dVar14 + dVar23 + (dVar32 * dVar29 - dVar20 * dVar31)) * dVar16);
    local_118[8] = (longlong)dVar17;
    if (local_118 + 1 != (longlong *)0x0) {
      local_128 = FUN_14455e53a;
    }
    (**(code **)(*plVar12 + 0x28))(plVar12,uVar11,&local_128);
    if (local_128 != (code *)0x0) {
      plVar12 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar12 = &local_108;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((char)lVar9 != '\x01') goto LAB_14962169c;
  }
  *(undefined1 *)(param_1 + 0x82) = 0;
LAB_1496216cf:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149621c64 FUN_149621c64 body=1451 status=ok
// SIG undefined FUN_149621c64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149621c64(undefined **param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined **ppuVar7;
  double dVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined8 uVar12;
  char cVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  undefined **ppuVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined *puVar24;
  undefined1 auStack_1a8 [32];
  code *local_188 [2];
  undefined8 local_178 [6];
  code *local_148;
  double dStack_140;
  undefined ***local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined **local_128;
  undefined **ppuStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  double dStack_100;
  undefined ***local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined **ppuStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined *puStack_c0;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  cVar2 = *(char *)(param_1 + 0x29d);
  if (cVar2 == '\x01') {
    ppuVar17 = (undefined **)param_1[0x2fd];
  }
  else {
    ppuVar17 = param_1 + 0x29e;
  }
  local_108 = (code *)0x0;
  local_f8 = (undefined ***)0x0;
  plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar14 = (longlong *)(**(code **)(*plVar14 + 0x378))(plVar14);
  cVar13 = (**(code **)(*plVar14 + 0x20))(plVar14);
  uVar12 = uStack_d0;
  uVar15 = local_d8;
  ppuVar9 = ppuStack_e0;
  ppuVar7 = local_e8;
  pppuVar16 = local_f8;
  dVar3 = dStack_100;
  pcVar11 = local_108;
  if (cVar13 == '\0') {
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    local_a8 = local_e8;
    ppuStack_a0 = ppuStack_e0;
    local_b8 = local_f8;
    uStack_b0 = uStack_f0;
    uStack_ac = uStack_ec;
    local_c8 = local_108;
    puStack_c0 = (undefined *)dStack_100;
    local_d8 = local_118;
    uStack_d0 = uStack_110;
    local_108 = FUN_14455e6b4;
    dStack_100 = dStack_140;
    local_f8 = (undefined ***)0x0;
    local_e8 = &PTR_LAB_14bd8e0b0;
    ppuStack_e0 = param_1;
    local_148 = pcVar11;
    dStack_140 = dVar3;
    local_128 = ppuVar7;
    ppuStack_120 = ppuVar9;
    local_118 = uVar15;
    uStack_110 = uVar12;
    local_138 = pppuVar16;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    if (pcVar11 != (code *)0x0) {
      if (pppuVar16 == (undefined ***)0x0) {
        pppuVar16 = &local_128;
      }
      (*(code *)(*pppuVar16)[2])();
    }
    local_188[0] = local_108;
    local_178[0] = 0;
    if (local_108 != (code *)0x0) {
      pppuVar16 = local_f8;
      if (local_f8 == (undefined ***)0x0) {
        pppuVar16 = &local_e8;
      }
      (*(code *)**pppuVar16)(pppuVar16,local_178);
    }
  }
  else {
    local_188[0] = (code *)0x0;
    local_178[0] = 0;
  }
  local_c8 = (code *)param_1[0x7c];
  puStack_c0 = param_1[0x7d];
  local_b8 = (undefined ***)param_1[0x7e];
  uStack_b0 = *(undefined4 *)(param_1 + 0x7f);
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x3fc);
  local_a8 = (undefined **)param_1[0x80];
  ppuStack_a0 = (undefined **)param_1[0x81];
  cVar13 = FUN_14855b830(param_1 + 0x86,&local_c8,&local_148,local_188);
  if (cVar13 != '\0') {
    dVar3 = (double)local_148 - (double)param_1[0x34];
    dVar4 = dStack_140 - (double)param_1[0x35];
    dVar18 = (double)local_138 - (double)param_1[0x36];
    dVar20 = (double)param_1[0x32] * -1.0;
    dVar21 = (double)param_1[0x33] * 1.0;
    dVar5 = -(double)param_1[0x30];
    dVar6 = -(double)param_1[0x31];
    dVar23 = dVar3 * dVar20 - dVar5 * dVar18;
    dVar22 = dVar4 * dVar5 - dVar3 * dVar6;
    dVar8 = dVar18 * dVar6 - dVar4 * dVar20;
    dVar8 = dVar8 + dVar8;
    dVar23 = dVar23 + dVar23;
    dVar22 = dVar22 + dVar22;
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x38);
    auVar19 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar19._0_8_) *
            ((dVar22 * dVar6 - dVar23 * dVar20) + dVar21 * dVar8 + dVar3);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar19._8_8_) *
            ((double)param_1[0x30] * dVar22 + dVar20 * dVar8 + dVar21 * dVar23 + dVar4);
    puVar24 = (undefined *)
              ((double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x3a])) &
                       (ulonglong)(1.0 / (double)param_1[0x3a])) *
              (dVar21 * dVar22 + dVar18 + (dVar23 * dVar5 - dVar8 * dVar6)));
    ppuVar7 = (undefined **)((double)puVar24 - (double)param_1[0x74]);
    ppuVar9 = (undefined **)(dVar4 - (double)param_1[0x73]);
    ppuVar10 = (undefined **)(dVar3 - (double)param_1[0x72]);
    uVar15 = (**(code **)(*(longlong *)param_1[0x23] + 0xa88))();
    if (0.0 < (double)param_1[0x85] * (double)param_1[0x85] +
              (double)param_1[0x83] * (double)param_1[0x83] +
              (double)param_1[0x84] * (double)param_1[0x84]) {
      if ((double)ppuVar7 * (double)ppuVar7 +
          (double)ppuVar10 * (double)ppuVar10 + (double)ppuVar9 * (double)ppuVar9 <= 0.0) {
        (**(code **)(*ppuVar17 + 0x30))(ppuVar17,uVar15);
      }
      else {
        local_c8 = (code *)0x0;
        local_b8 = (undefined ***)FUN_14001cc68(0x28,8);
        *local_b8 = &PTR_FUN_14bd8e0d0;
        local_b8[1] = param_1;
        local_b8[2] = ppuVar10;
        local_b8[3] = ppuVar9;
        local_b8[4] = ppuVar7;
        if (local_b8 + 1 != (undefined ***)0x0) {
          local_c8 = (code *)&LAB_14455e762;
        }
        (**(code **)(*ppuVar17 + 0x28))(ppuVar17,uVar15,&local_c8);
        if (local_c8 != (code *)0x0) {
          pppuVar16 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar16 = &local_a8;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      if (cVar2 != '\x01') {
        FUN_1484b290c(param_1[0x23],1,0,0);
        plVar14 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
        (**(code **)(*plVar14 + 0x348))(plVar14);
      }
    }
    param_1[0x83] = (undefined *)ppuVar10;
    param_1[0x84] = (undefined *)ppuVar9;
    param_1[0x85] = (undefined *)ppuVar7;
    auVar1._8_4_ = SUB84(dVar4,0);
    auVar1._0_8_ = dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x6f) = auVar1;
    param_1[0x71] = puVar24;
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  if (local_108 != (code *)0x0) {
    pppuVar16 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar16 = &local_e8;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149622210 FUN_149622210 body=197 status=ok
// SIG undefined FUN_149622210(void)

ulonglong FUN_149622210(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  
  dVar1 = *param_1 * *param_2 + param_1[1] * param_2[1];
  dVar3 = *param_1 * param_2[1] - *param_2 * param_1[1];
  if (1e-08 <= dVar3 * dVar3) {
    dVar2 = 1.0;
    if (dVar1 <= 1.0) {
      dVar2 = dVar1;
    }
    dVar1 = acos((double)(-(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar2));
    uVar4 = -(ulonglong)(dVar3 < 0.0) & (ulonglong)-dVar1 |
            ~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar1;
  }
  else {
    uVar4 = -(ulonglong)(dVar1 < 0.0) & 0x400921fb54442d18;
  }
  return uVar4;
}



// FUNCTION 149622310 FUN_149622310 body=730 status=ok
// SIG undefined FUN_149622310(void)

void FUN_149622310(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14455705c();
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x378))(plVar7);
  plVar7 = param_1 + 0x26;
  (**(code **)(*plVar8 + 0x18))(plVar8,plVar7);
  local_d8 = param_1 + 0x86;
  local_e0 = param_1 + 0x12e;
  plVar8 = local_d8;
  if (*(char *)(param_1[0x24] + 0xa9) == '\x01') {
    plVar8 = local_e0;
  }
  (**(code **)(*plVar8 + 0x30))(plVar8,plVar7);
  *(undefined1 *)(param_1[0x23] + 0x670) = *(undefined1 *)(param_1[0x24] + 0xad);
  lVar9 = (**(code **)(*(longlong *)param_1[0x23] + 0xa88))();
  plVar8 = param_1 + 0x3c;
  local_e8 = plVar7;
  local_d0 = param_2;
  FUN_148453350(plVar8,param_2,plVar7);
  local_f0 = param_1 + 0x30;
  plVar7 = local_f0;
  plVar13 = local_a8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar13 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar13 = plVar13 + 1;
  }
  FUN_148453434(plVar8);
  local_f8 = param_1;
  if ((longlong)(int)param_1[0x1f1] != 0) {
    lVar10 = param_1[0x1f0];
    lVar16 = (longlong)(int)param_1[0x1f1] * 0x50 + lVar10;
    do {
      iVar2 = *(int *)(lVar10 + 0x28);
      if ((longlong)iVar2 != 0) {
        lVar4 = *(longlong *)(lVar10 + 0x20);
        lVar14 = 0;
        do {
          uVar3 = *(uint *)(lVar4 + lVar14);
          uVar11 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(lVar9 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)((uVar3 & 0x1ff) << 4));
          lVar5 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (uVar11 >> 9 & 0x7fffff) * 8);
          local_a8[2] = *(undefined8 *)(lVar5 + 0x10 + (uVar11 & 0x1ff) * 0x18);
          plVar7 = (longlong *)(lVar5 + (uVar11 & 0x1ff) * 0x18);
          local_a8[0] = *plVar7;
          local_a8[1] = plVar7[1];
          lVar5 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + (uVar11 >> 0x29) * 8);
          uVar11 = uVar11 >> 0x20 & 0x1ff;
          puVar1 = (undefined4 *)(lVar5 + uVar11 * 0x18);
          local_c8 = *puVar1;
          uStack_c4 = puVar1[1];
          uStack_c0 = puVar1[2];
          uStack_bc = puVar1[3];
          local_b8 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
          FUN_148527000(plVar8,local_a8,&local_c8);
          lVar14 = lVar14 + 4;
        } while ((longlong)iVar2 * 4 != lVar14);
      }
      lVar10 = lVar10 + 0x50;
    } while (lVar10 != lVar16);
  }
  FUN_14845342a(plVar8);
  uVar6 = local_d0;
  plVar13 = local_e8;
  plVar8 = local_f8;
  plVar7 = local_f8 + 0x25e;
  FUN_148453350(plVar7,local_d0,local_e8);
  plVar12 = local_f0;
  plVar15 = local_a8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar15 = *plVar12;
    plVar12 = plVar12 + 1;
    plVar15 = plVar15 + 1;
  }
  FUN_148453434(plVar7);
  *(int *)(plVar8 + 0x21a) = (int)plVar8[0x21];
  local_108 = 1;
  FUN_14852d78a(plVar8 + 0x210,plVar8 + 0x240,plVar7,plVar13);
  FUN_14845342a(plVar7);
  plVar7 = local_d8;
  if (*(char *)(plVar8[0x24] + 0xa9) == '\x01') {
    plVar7 = local_e0;
  }
  (**(code **)(*plVar7 + 0x38 + (ulonglong)(*(byte *)(plVar8 + 0x60) ^ 1) * 8))(plVar7,uVar6);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496225ed FUN_1496225ed body=536 status=ok
// SIG undefined FUN_1496225ed(void)

void FUN_1496225ed(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = param_6;
  if (param_6 == 0) {
    local_90 = param_5;
    local_88 = &local_60;
    iVar9 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
    local_58 = FUN_14455e94c;
    local_98 = param_1;
    local_80 = param_2;
    local_78 = param_3;
  }
  else {
    uVar11 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
    uVar14 = 0;
    if ((uVar11 != 0) && (uVar14 = 0, 0xfffd < (ushort)(**(short **)param_1[5] - 1U))) {
      uVar12 = 1;
      uVar13 = 1;
      if (1 < (int)uVar11) {
        uVar12 = uVar11;
      }
      do {
        uVar14 = uVar12;
        if (uVar12 == uVar13) break;
        uVar10 = uVar13 >> 9;
        uVar15 = uVar13 & 0x1ff;
        uVar14 = uVar13;
        uVar13 = uVar13 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[5])[uVar10] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_149622708:
    if (uVar14 != uVar11) {
      lVar3 = *param_2;
      lVar5 = (longlong)(int)uVar14 * 0x18;
      lVar4 = *param_5;
      *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar3 + 0x10 + lVar5);
      puVar1 = (undefined4 *)(lVar3 + lVar5);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar12 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar13 = uVar14;
      do {
        uVar14 = uVar12;
        if (uVar12 - 1 == uVar13) break;
        uVar14 = uVar13 + 1;
        uVar13 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(uVar14 >> 9) * 8)
                                           + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_149622708;
    }
    local_98 = &local_68;
    local_88 = param_5;
    local_80 = &local_60;
    iVar9 = *(int *)(param_6 + 8);
    local_58 = FUN_14455e83e;
    local_90 = param_1;
    local_78 = param_2;
    local_70 = param_3;
  }
  local_50 = &local_98;
  local_a8 = &local_48;
  local_40 = 0;
  local_48 = 0;
  local_b0 = 0;
  local_60 = param_4;
  FUN_1401f8d10(L"ParallelFor Task",iVar9,1);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149622806 FUN_149622806 body=567 status=ok
// SIG undefined FUN_149622806(void)

void FUN_149622806(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140ce3ff6();
  local_68 = param_7;
  if (param_7 == 0) {
    local_90 = param_6;
    local_88 = &local_60;
    iVar13 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
    local_58 = FUN_14455ebb4;
    local_98 = param_1;
    local_80 = param_2;
    local_78 = param_3;
  }
  else {
    uVar9 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24);
    uVar12 = 0;
    if ((uVar9 != 0) && (uVar12 = 0, 0xfffd < (ushort)(**(short **)param_1[5] - 1U))) {
      uVar10 = 1;
      uVar11 = 1;
      if (1 < (int)uVar9) {
        uVar10 = uVar9;
      }
      do {
        uVar12 = uVar10;
        if (uVar10 == uVar11) break;
        uVar14 = uVar11 >> 9;
        uVar15 = uVar11 & 0x1ff;
        uVar12 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[5])[uVar14] +
                                           (ulonglong)uVar15 * 2) - 1U));
    }
LAB_14962293e:
    if (uVar12 != uVar9) {
      lVar3 = *param_2;
      lVar5 = (longlong)(int)uVar12 * 0x18;
      lVar4 = *param_6;
      *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar3 + 0x10 + lVar5);
      puVar1 = (undefined4 *)(lVar3 + lVar5);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar10 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar9) {
        uVar10 = uVar9;
      }
      uVar11 = uVar12;
      do {
        uVar12 = uVar10;
        if (uVar10 - 1 == uVar11) break;
        uVar12 = uVar11 + 1;
        uVar11 = uVar12;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(uVar12 >> 9) * 8)
                                           + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
      goto LAB_14962293e;
    }
    local_98 = &local_68;
    local_88 = param_6;
    local_80 = &local_60;
    iVar13 = *(int *)(param_7 + 8);
    local_58 = FUN_14455ea4c;
    local_90 = param_1;
    local_78 = param_2;
    local_70 = param_3;
  }
  local_50 = &local_98;
  local_a8 = &local_48;
  local_40 = 0;
  local_48 = 0;
  local_b0 = 1;
  local_60 = param_4;
  FUN_1401f8d10(L"ParallelFor Task",iVar13,1);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149622a3e FUN_149622a3e body=654 status=ok
// SIG undefined FUN_149622a3e(void)

void FUN_149622a3e(float **param_1,float **param_2,float **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float **param_7,float *param_8)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  float *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_9c;
  float **local_98;
  float **local_90;
  float **local_88;
  float **local_80;
  float **local_78;
  float **local_70;
  float *local_68;
  code *local_60;
  float ***local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140ce3ff6();
  DAT_14c83e67c = DAT_14c83e67c * 0xbb38435 + 0x3619636b;
  fVar5 = (float)(DAT_14c83e67c & 0x7fffff | 0x3f800000);
  auVar12 = roundss(in_XMM1,ZEXT416((uint)fVar5),0xb);
  local_9c = (fVar5 - auVar12._0_4_) * 10000.0;
  local_b8 = &local_9c;
  local_b0 = param_5;
  local_68 = param_8;
  if (param_8 == (float *)0x0) {
    local_90 = param_7;
    local_88 = &local_b8;
    fVar5 = (float)(*(int *)(param_1 + 4) * 0x200 + *(int *)((longlong)param_1 + 0x24));
    local_60 = FUN_14455ef24;
    local_98 = param_1;
    local_80 = param_2;
    local_78 = param_3;
  }
  else {
    uVar6 = *(int *)(param_1 + 4) * 0x200 + *(int *)((longlong)param_1 + 0x24);
    uVar8 = 0;
    if ((uVar6 != 0) && (uVar8 = 0, 0xfffd < (ushort)(**(short **)param_1[5] - 1U))) {
      uVar11 = 1;
      uVar7 = 1;
      if (1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      do {
        uVar10 = (uint)uVar11;
        uVar8 = uVar7;
        if (uVar7 == uVar10) break;
        uVar3 = uVar11 >> 9;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar8 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[5] + uVar3 * 2) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
    }
LAB_149622bcb:
    if (uVar8 != uVar6) {
      pfVar1 = *param_2;
      lVar9 = (longlong)(int)uVar8;
      pfVar2 = *param_7;
      *(undefined8 *)(pfVar2 + lVar9 * 6 + 4) = *(undefined8 *)(pfVar1 + lVar9 * 6 + 4);
      pfVar1 = pfVar1 + lVar9 * 6;
      uVar4 = *(undefined8 *)(pfVar1 + 2);
      pfVar2 = pfVar2 + lVar9 * 6;
      *(undefined8 *)pfVar2 = *(undefined8 *)pfVar1;
      *(undefined8 *)(pfVar2 + 2) = uVar4;
      uVar7 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar6) {
        uVar7 = uVar6;
      }
      uVar10 = uVar8;
      do {
        uVar8 = uVar7;
        if (uVar7 - 1 == uVar10) break;
        uVar8 = uVar10 + 1;
        uVar10 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(uVar8 >> 9) * 2)
                                           + (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      goto LAB_149622bcb;
    }
    local_98 = &local_68;
    local_88 = param_7;
    local_80 = &local_b8;
    fVar5 = param_8[2];
    local_60 = FUN_14455ed0e;
    local_90 = param_1;
    local_78 = param_2;
    local_70 = param_3;
  }
  local_58 = &local_98;
  local_c8 = &local_50;
  local_48 = 0;
  local_50 = 0;
  local_d0 = 0;
  local_a8 = param_4;
  FUN_1401f8d10(L"ParallelFor Task",fVar5,1);
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149622ccd FUN_149622ccd body=702 status=ok
// SIG undefined FUN_149622ccd(void)

void FUN_149622ccd(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar13;
  uint uVar14;
  ulonglong uVar16;
  longlong in_stack_00000050;
  undefined1 auStack_158 [40];
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined8 **local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  float *local_a8;
  longlong local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  longlong local_88 [2];
  float local_74;
  undefined8 local_70;
  code *local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong uVar12;
  ulonglong uVar15;
  
  lVar9 = in_stack_00000050;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)(param_1 + 0x208) + 0x28) < 1) {
    local_70 = 0;
  }
  else {
    local_70 = **(undefined8 **)(*(longlong *)(param_1 + 0x208) + 0x20);
  }
  local_74 = (float)*(int *)(param_5 + 0x20) * *(float *)(param_5 + 0x34);
  local_88[0] = 0;
  local_88[1] = 0;
  local_118 = param_4;
  local_110 = param_3;
  FUN_146be4e92(local_88,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  local_b8 = &stack0x00000040;
  local_b0 = &stack0x00000048;
  local_a0 = param_5;
  local_98 = &stack0x00000058;
  local_90 = &stack0x00000038;
  uVar14 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar15 = (ulonglong)uVar14;
  if (lVar9 != 0) {
    uVar12 = 0;
    if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar11 = 1;
      uVar16 = 1;
      if (1 < (int)uVar14) {
        uVar11 = uVar15;
      }
      do {
        uVar10 = (uint)uVar16;
        uVar12 = uVar11;
        if ((uint)uVar11 == uVar10) break;
        uVar15 = uVar16 >> 9;
        uVar12 = uVar16;
        uVar16 = (ulonglong)(uVar10 + 1);
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar15] +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
    }
LAB_149622eb9:
    uVar10 = (uint)uVar12;
    if (uVar10 != uVar14) {
      lVar3 = *param_2;
      lVar5 = (longlong)(int)uVar10 * 0x18;
      lVar4 = *param_6;
      *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar3 + 0x10 + lVar5);
      puVar1 = (undefined4 *)(lVar3 + lVar5);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar13 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar14) {
        uVar13 = uVar14;
      }
      do {
        if (uVar13 - 1 == (int)uVar12) {
          uVar12 = (ulonglong)uVar13;
          break;
        }
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      goto LAB_149622eb9;
    }
    uVar15 = (ulonglong)*(uint *)(lVar9 + 8);
  }
  local_108 = &stack0x00000050;
  local_60 = &local_108;
  local_f0 = &local_c0;
  local_e0 = local_118;
  local_d0 = local_110;
  local_c8 = param_6;
  local_128 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_14455f12c;
  local_130 = 0;
  local_100 = param_1;
  local_f8 = &local_70;
  local_e8 = local_88;
  local_d8 = param_2;
  local_c0 = &local_70;
  local_a8 = &local_74;
  FUN_1401f8d10(L"ParallelFor Task",uVar15,1);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149622f8c FUN_149622f8c body=683 status=ok
// SIG undefined FUN_149622f8c(void)

void FUN_149622f8c(undefined8 **param_1,undefined8 **param_2,undefined8 **param_3,undefined8 param_4
                  ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 **param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_128 [40];
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 **ppuStack_a0;
  undefined8 **local_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined8 **local_80;
  undefined8 *local_70;
  code *local_68;
  undefined8 ***local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  ppuVar7 = param_8;
  uVar6 = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = (undefined8 **)0x0;
  ppuStack_a0 = (undefined8 **)0x0;
  local_98 = (undefined8 **)0x3ff0000000000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0x3ff0000000000000;
  FUN_146bfb7f2(&local_c8,param_7,&local_a8);
  local_e0 = (undefined1 *)&param_5;
  local_d8 = (undefined1 *)&param_6;
  local_d0 = uVar6;
  local_70 = param_9;
  if (param_9 == (undefined8 *)0x0) {
    ppuStack_a0 = ppuVar7;
    local_98 = &local_f0;
    iVar12 = *(int *)(param_1 + 4) * 0x200 + *(int *)((longlong)param_1 + 0x24);
    local_68 = FUN_14455f63c;
    local_a8 = param_1;
    local_90 = param_2;
    local_88 = param_3;
  }
  else {
    uVar8 = *(int *)(param_1 + 4) * 0x200 + *(int *)((longlong)param_1 + 0x24);
    uVar11 = 0;
    if ((uVar8 != 0) && (uVar11 = 0, 0xfffd < (ushort)(*(short *)*param_1[5] - 1U))) {
      uVar9 = 1;
      uVar10 = 1;
      if (1 < (int)uVar8) {
        uVar9 = uVar8;
      }
      do {
        uVar11 = uVar9;
        if (uVar9 == uVar10) break;
        uVar14 = uVar10 >> 9;
        uVar15 = uVar10 & 0x1ff;
        uVar11 = uVar10;
        uVar10 = uVar10 + 1;
      } while (0xfffd < (ushort)(*(short *)(param_1[5][uVar14] + (ulonglong)uVar15 * 2) - 1U));
    }
LAB_14962312a:
    if (uVar11 != uVar8) {
      puVar1 = *param_2;
      lVar13 = (longlong)(int)uVar11;
      puVar2 = *ppuVar7;
      puVar2[lVar13 * 3 + 2] = puVar1[lVar13 * 3 + 2];
      puVar1 = puVar1 + lVar13 * 3;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar4 = *(undefined4 *)(puVar1 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
      puVar2 = puVar2 + lVar13 * 3;
      *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
      *(undefined4 *)((longlong)puVar2 + 4) = uVar3;
      *(undefined4 *)(puVar2 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
      uVar9 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar10 = uVar11;
      do {
        uVar11 = uVar9;
        if (uVar9 - 1 == uVar10) break;
        uVar11 = uVar10 + 1;
        uVar10 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(param_1[5][uVar11 >> 9] +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      goto LAB_14962312a;
    }
    local_a8 = &local_70;
    local_98 = ppuVar7;
    local_90 = &local_f0;
    iVar12 = *(int *)(param_9 + 1);
    local_68 = FUN_14455f4b6;
    ppuStack_a0 = param_1;
    local_88 = param_2;
    local_80 = param_3;
  }
  local_50 = 0;
  local_58 = 0;
  local_f8 = &local_58;
  local_100 = 0;
  local_f0 = &local_c8;
  local_e8 = param_4;
  local_60 = &local_a8;
  FUN_1401f8d10(L"ParallelFor Task",iVar12,1);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149623238 FUN_149623238 body=709 status=ok
// SIG undefined FUN_149623238(void)

undefined8 *
FUN_149623238(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14bd83110;
  param_1[0x11] = 0;
  FUN_1496234fe(param_1 + 0x12,param_3);
  *(undefined1 *)(param_1 + 0x19) = param_4;
  local_40 = 1;
  local_48 = 1;
  FUN_146c005f0(param_1[1],param_2,1,1);
  local_30 = DAT_14c84635c;
  FUN_146c02040(param_1[1]);
  lVar1 = param_1[1];
  uVar3 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  if (param_1[0x13] == 0) {
    uVar6 = 0;
    if ((uVar3 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
      uVar6 = 1;
      uVar5 = 1;
      if (1 < (int)uVar3) {
        uVar6 = (ulonglong)uVar3;
      }
      do {
        uVar7 = uVar5;
        if ((uint)uVar6 == uVar7) goto LAB_1496234f5;
        uVar5 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar7 >> 9] +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      uVar6 = (ulonglong)uVar7;
    }
LAB_1496234f5:
    uVar5 = (uint)uVar6;
    if (uVar5 != uVar3) {
      if (*(char *)(param_1[1] + 0xb0) == '\x01') {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1[1] + 0xa0) + (uVar6 >> 9) * 8) +
         (ulonglong)(uVar5 & 0x1ff) * 8) = DAT_14c8461b4;
      }
      uVar7 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar3) {
        uVar7 = uVar3;
      }
      do {
        iVar4 = (int)uVar6;
        uVar6 = (ulonglong)uVar7;
        if (uVar7 - 1 == iVar4) break;
        uVar5 = iVar4 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      goto LAB_1496234f5;
    }
  }
  else {
    uVar6 = 0;
    if ((uVar3 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
      uVar6 = 1;
      uVar5 = 1;
      if (1 < (int)uVar3) {
        uVar6 = (ulonglong)uVar3;
      }
      do {
        uVar7 = uVar5;
        if ((uint)uVar6 == uVar7) goto LAB_1496233e5;
        uVar5 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar7 >> 9] +
                                           (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
      uVar6 = (ulonglong)uVar7;
    }
LAB_1496233e5:
    uVar5 = (uint)uVar6;
    if (uVar5 != uVar3) {
      puVar8 = (undefined4 *)param_1[0x13];
      if ((-1 < (int)uVar5) && ((int)uVar5 < (int)puVar8[4])) {
        puVar8 = (undefined4 *)(uVar6 * 4 + *(longlong *)(puVar8 + 2));
      }
      if (*(char *)(param_1[1] + 0xb0) == '\x01') {
        lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0xa0) + (uVar6 >> 9) * 8);
        *(undefined4 *)(lVar2 + (ulonglong)(uVar5 & 0x1ff) * 8) = *puVar8;
        *(undefined4 *)(lVar2 + 4 + (ulonglong)(uVar5 & 0x1ff) * 8) = 0;
      }
      uVar7 = uVar5 + 1;
      if ((int)(uVar5 + 1) < (int)uVar3) {
        uVar7 = uVar3;
      }
      do {
        iVar4 = (int)uVar6;
        uVar6 = (ulonglong)uVar7;
        if (uVar7 - 1 == iVar4) break;
        uVar5 = iVar4 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x28) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      goto LAB_1496233e5;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1496234fe FUN_1496234fe body=161 status=ok
// SIG undefined FUN_1496234fe(void)

undefined4 * FUN_1496234fe(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  lVar3 = *(longlong *)(param_2 + 4);
  *(longlong *)(param_1 + 4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar2 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 6,iVar2,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar2 << 2);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x29);
  *(char *)((longlong)param_1 + 0x29) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  }
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0xb] = param_2[0xb];
  }
  return param_1;
}



// FUNCTION 1496235a0 FUN_1496235a0 body=1019 status=ok
// SIG undefined FUN_1496235a0(void)

void FUN_1496235a0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_2c8 [32];
  ulonglong local_2a8;
  undefined **local_2a0;
  undefined **local_298;
  ulonglong local_290;
  undefined1 local_288;
  undefined **local_280;
  undefined ***local_278;
  undefined8 *local_270;
  longlong local_268;
  undefined1 local_260;
  undefined **local_258;
  ulonglong local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined1 local_180;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  iVar1 = *(int *)(param_1 + 0x90);
  uVar3 = *(ulonglong *)(param_1 + 8);
  if (*(char *)(param_1 + 200) == '\x01') {
    local_258 = &PTR_FUN_14afa4400;
    local_240 = CONCAT44((int)(local_240 >> 0x20),iVar1) & 0xffffff00ffffffff;
    local_250 = uVar3;
    local_248 = param_2;
    if (uVar3 != 0 && -1 < iVar1) {
      FUN_148324b68(&local_258);
    }
    goto LAB_149623784;
  }
  if (*(char *)(param_1 + 200) != '\0') goto LAB_149623784;
  if (*(char *)(param_1 + 0xb9) == '\x01') {
    if (((*(char *)(param_1 + 0xb8) == '\x01') && (*(char *)(param_1 + 0xc0) == '\x01')) &&
       (iVar2 = *(int *)(param_1 + 0xbc), iVar2 != -1)) {
      if (*(int *)(param_1 + 0xb0) == *(int *)(uVar3 + 0x170)) {
        FUN_14832dd36(&local_258,uVar3,iVar1,iVar2);
      }
      else {
        local_2a8 = param_1 + 0xa8;
        FUN_14832defc(&local_258,uVar3,iVar1,iVar2);
      }
      ppuVar6 = local_258;
      local_2a8 = local_2a8 & 0xffffffffffffff00;
      FUN_1411b354a(&local_258,0,0,0);
      lVar4 = *(longlong *)(param_1 + 8);
      local_298 = &PTR_FUN_14afa46a0;
      local_288 = 1;
      local_260 = 0;
      local_280 = ppuVar6;
      local_290 = param_2;
      local_278 = &local_258;
      local_268 = lVar4;
      local_270 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *local_270 = 0;
      local_270[1] = 0;
      plVar5 = *(longlong **)(param_1 + 0x88);
      *(undefined8 **)(param_1 + 0x88) = local_270;
      if (plVar5 != (longlong *)0x0) {
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar5);
        local_270 = *(undefined8 **)(param_1 + 0x88);
      }
      if (lVar4 == 0) {
        FUN_141082778(&local_258);
        if (ppuVar6 == (undefined **)0x0) goto LAB_149623784;
      }
      else {
        if (ppuVar6 == (undefined **)0x0) {
          FUN_141082778(&local_258);
          goto LAB_149623784;
        }
        cVar7 = FUN_14832e82c(&local_298);
        if (cVar7 != '\0') {
          FUN_146c00942(*(undefined8 *)(param_1 + 8),&local_258);
        }
        FUN_141082778(&local_258);
      }
      puVar8 = (undefined8 *)*ppuVar6;
      local_2a0 = ppuVar6;
    }
    else {
      if (*(int *)(param_1 + 0xb0) == *(int *)(uVar3 + 0x170)) goto LAB_1496237ae;
      FUN_14832db8a(&local_2a0);
      local_2a8 = local_2a8 & 0xffffffffffffff00;
      FUN_1411b354a(&local_258,0,0,0);
      ppuVar6 = local_2a0;
      lVar4 = *(longlong *)(param_1 + 8);
      local_298 = &PTR_FUN_14afa46a0;
      local_288 = 1;
      local_260 = 0;
      local_280 = local_2a0;
      local_290 = param_2;
      local_278 = &local_258;
      local_268 = lVar4;
      local_270 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *local_270 = 0;
      local_270[1] = 0;
      plVar5 = *(longlong **)(param_1 + 0x88);
      *(undefined8 **)(param_1 + 0x88) = local_270;
      if (plVar5 != (longlong *)0x0) {
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar5);
        local_270 = *(undefined8 **)(param_1 + 0x88);
      }
      if ((ppuVar6 != (undefined **)0x0 && lVar4 != 0) &&
         (cVar7 = FUN_14832e82c(&local_298), cVar7 != '\0')) {
        FUN_146c00942(*(undefined8 *)(param_1 + 8),&local_258);
      }
      FUN_141082778(&local_258);
      if (local_2a0 == (undefined **)0x0) goto LAB_149623784;
      puVar8 = (undefined8 *)*local_2a0;
    }
    (*(code *)*puVar8)(local_2a0,1);
  }
  else {
LAB_1496237ae:
    local_258 = &PTR_FUN_14ae72d40;
    local_248 = CONCAT26(local_248._6_2_,0x100000000);
    local_208 = 0;
    local_200 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1fc = 0xffffffff00000080;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 1;
    local_248 = CONCAT44(local_248._4_4_,iVar1);
    local_250 = param_2;
    local_240 = uVar3;
    if (-1 < iVar1 && uVar3 != 0) {
      FUN_148324074(&local_258);
    }
    FUN_1482f16dc(&local_258);
  }
LAB_149623784:
  if ((local_38 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14962399c FUN_14962399c body=178 status=ok
// SIG undefined FUN_14962399c(void)

undefined8 *
FUN_14962399c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14bd83130;
  param_1[0x11] = *param_2;
  param_1[0x12] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  FUN_149623a4e(param_1 + 0x14,param_3);
  *(undefined1 *)(param_1 + 0x3a) = param_4;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 149623a4e FUN_149623a4e body=448 status=ok
// SIG undefined FUN_149623a4e(void)

undefined8 * FUN_149623a4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = param_2;
  puVar10 = param_1;
  for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  pvVar2 = (void *)param_2[0xb];
  lVar8 = param_2[0xc];
  param_1[0xc] = lVar8;
  if (lVar8 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_149639ec6(param_1 + 0xb,lVar8);
    memcpy((void *)param_1[0xb],pvVar2,lVar8 << 2);
  }
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_145c61f58(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 << 3);
  }
  uVar7 = *(undefined8 *)((longlong)param_2 + 0xb4);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar5 = *(undefined4 *)(param_2 + 0x15);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar6;
  param_1[0x18] = param_2[0x18];
  lVar8 = param_2[0x19];
  param_1[0x19] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1a] = param_2[0x1a];
  lVar8 = param_2[0x1b];
  param_1[0x1b] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  lVar8 = param_2[0x1c];
  param_1[0x1c] = lVar8;
  param_1[0x1e] = 0;
  if (lVar8 != 0) {
    puVar9 = param_2 + 0x20;
    if ((undefined8 *)param_2[0x1e] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_2[0x1e];
    }
    (**(code **)*puVar9)(uVar3,param_1 + 0x1e);
  }
  param_1[0x24] = param_2[0x24];
  lVar8 = param_2[0x25];
  param_1[0x25] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 149623c0e FUN_149623c0e body=2400 status=ok
// SIG undefined FUN_149623c0e(void)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_149623c0e(longlong param_1,char *param_2)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined4 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_1e8 [32];
  undefined1 **local_1c8;
  undefined1 **local_1c0;
  undefined1 **local_1b8;
  undefined1 **local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  code *local_190;
  double **local_188;
  code *local_180;
  double **local_178;
  code *local_170;
  double **local_168;
  code *local_160;
  double **local_158;
  code *local_150;
  double **local_148;
  double local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  undefined1 *local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  longlong lStack_c0;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double *local_88;
  undefined1 *puStack_80;
  undefined1 **local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (param_2 == (char *)0x0) {
    local_1c0 = (undefined1 **)CONCAT71(local_1c0._1_7_,1);
    local_1c8 = (undefined1 **)CONCAT71(local_1c8._1_7_,1);
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
  }
  else {
    if (*param_2 != '\0') goto LAB_149623f57;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar24 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar24 = (longlong *)(param_2 + 0x90);
    }
    uVar13 = (**(code **)(*plVar24 + 8))();
    cVar12 = (*pcVar4)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_149623f57;
    local_1c0 = (undefined1 **)CONCAT71(local_1c0._1_7_,1);
    local_1c8 = (undefined1 **)CONCAT71(local_1c8._1_7_,1);
    FUN_146c005f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),1,1);
    if (*param_2 != '\0') goto LAB_149623f57;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar24 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar24 = *(longlong **)(param_2 + 0x80);
    }
    uVar13 = (**(code **)(*plVar24 + 8))(plVar24);
    cVar12 = (*pcVar4)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_149623f57;
  }
  plVar24 = (longlong *)(param_1 + 8);
  if ((*(char *)(param_1 + 0x1d0) == '\x01') && (*(longlong *)(param_1 + 0xa8) == 0))
  goto LAB_149623f57;
  lVar1 = param_1 + 0x1e8;
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  FUN_146c37e28(lVar1,1,1);
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_149623f57;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar15 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar15 = *(longlong **)(param_2 + 0x80);
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    cVar12 = (*pcVar4)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_149623f57;
  }
  plVar15 = (longlong *)(param_1 + 0x1d8);
  FUN_14051b394(plVar15,*(int *)(*(longlong *)(param_1 + 0x88) + 0x20) * 0x200 +
                        *(int *)(*(longlong *)(param_1 + 0x88) + 0x24),1);
  lVar5 = *(longlong *)(param_1 + 0x88);
  uVar14 = *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24);
  puVar20 = (undefined1 *)0x0;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x28) - 1U))) {
    puVar20 = &DAT_00000001;
    uVar21 = 1;
    if (1 < (int)uVar14) {
      puVar20 = (undefined1 *)(ulonglong)uVar14;
    }
    do {
      uVar25 = uVar21;
      if ((uint)puVar20 == uVar25) goto LAB_149623ebd;
      uVar21 = uVar25 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x28))[uVar25 >> 9] +
                                         (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
    puVar20 = (undefined1 *)(ulonglong)uVar25;
  }
LAB_149623ebd:
  uVar21 = (uint)puVar20;
  if (uVar21 != uVar14) {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + ((ulonglong)puVar20 >> 9) * 8);
    lVar6 = *plVar15;
    puVar22 = (undefined4 *)(lVar7 + (ulonglong)(uVar21 & 0x1ff) * 0x18);
    uVar8 = *puVar22;
    uVar9 = puVar22[1];
    uVar10 = puVar22[2];
    uVar11 = puVar22[3];
    *(undefined8 *)(lVar6 + 0x10 + (longlong)(int)uVar21 * 0x18) =
         *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar21 & 0x1ff) * 0x18);
    puVar22 = (undefined4 *)(lVar6 + (longlong)(int)uVar21 * 0x18);
    *puVar22 = uVar8;
    puVar22[1] = uVar9;
    puVar22[2] = uVar10;
    puVar22[3] = uVar11;
    uVar25 = uVar21 + 1;
    if ((int)(uVar21 + 1) < (int)uVar14) {
      uVar25 = uVar14;
    }
    do {
      iVar18 = (int)puVar20;
      puVar20 = (undefined1 *)(ulonglong)uVar25;
      if (uVar25 - 1 == iVar18) break;
      uVar21 = iVar18 + 1;
      puVar20 = (undefined1 *)(ulonglong)uVar21;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar5 + 0x28) +
                                           (ulonglong)(uVar21 >> 9) * 8) +
                                         (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
    goto LAB_149623ebd;
  }
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_149623f57;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar16 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar16 = *(longlong **)(param_2 + 0x80);
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar12 = (*pcVar4)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_149623f57;
  }
  ppuVar2 = (undefined1 **)(param_1 + 0x200);
  FUN_14051b394(ppuVar2,*(int *)(*(longlong *)(param_1 + 0x88) + 0x20) * 0x200 +
                        *(int *)(*(longlong *)(param_1 + 0x88) + 0x24),1);
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_149623f57;
    pcVar4 = *(code **)(param_2 + 0x70);
    plVar16 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar16 = *(longlong **)(param_2 + 0x80);
    }
    uVar13 = (**(code **)(*plVar16 + 8))();
    cVar12 = (*pcVar4)(uVar13);
    *param_2 = cVar12;
    if (cVar12 != '\0') goto LAB_149623f57;
  }
  lVar5 = lStack_c0;
  local_138[0] = *(undefined1 *)(param_1 + 0xd0);
  local_130 = *(undefined8 *)(param_1 + 0xd8);
  uStack_128 = *(undefined8 *)(param_1 + 0xe0);
  local_120 = *(undefined8 *)(param_1 + 0xe8);
  local_118 = (double)*(float *)(param_1 + 0xf0);
  local_110 = 0x4014000000000000;
  local_140 = (double)*(float *)(param_1 + 0xa0);
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_14bd8e0f0;
  local_c8 = &LAB_14455f7b4;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x88);
    if ((*(int *)(lVar7 + 0x38) * 0x200 + *(int *)(lVar7 + 0x3c) == 0) &&
       (*(int *)(lVar7 + 0x50) == *(int *)(*(longlong *)(param_1 + 0x170) + 0x10))) {
      local_e8 = &PTR_LAB_14bd8e110;
      local_c8 = &LAB_14455f7f2;
    }
    else {
      local_e8 = &PTR_LAB_14bd8e130;
      local_c8 = &LAB_14455f84e;
    }
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    local_68 = 0x4bd8e0f0;
    uStack_64 = 1;
    uStack_60 = (undefined4)uStack_a0;
    uStack_5c = uStack_a0._4_4_;
    local_78 = (undefined1 **)0x0;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    local_88 = (double *)&LAB_14455f7b4;
    lStack_c0 = lStack_100;
    local_b8 = (undefined ***)0x0;
    local_a8 = local_e8;
    local_108 = &LAB_14455f7b4;
    lStack_100 = lVar5;
    local_e8 = &PTR_LAB_14bd8e0f0;
    local_d8 = local_98;
    uStack_d4 = uStack_94;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    local_f8 = 0;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    uStack_a0 = param_1;
    FUN_14455f7c8();
  }
  local_88 = &local_140;
  puStack_80 = local_138;
  local_78 = &local_c8;
  switch(*(undefined1 *)(param_1 + 0x1d0)) {
  case 1:
    local_198 = *(undefined8 *)(param_1 + 0x160);
    local_1a0 = *(undefined8 *)(param_1 + 0x1c0);
    local_1b0 = *(undefined1 ***)(param_1 + 0x14c);
    uStack_1a8 = *(undefined8 *)(param_1 + 0x154);
    local_1c8 = (undefined1 **)(param_1 + 0xf8);
    local_178 = &local_88;
    local_180 = FUN_14455f8be;
    local_1b8 = (undefined1 **)CONCAT44(local_1b8._4_4_,*(undefined4 *)(param_1 + 0x148));
    local_1c0 = ppuVar2;
    FUN_149622ccd(*(undefined8 *)(param_1 + 0x88),plVar15,lVar1);
    break;
  case 2:
    local_1b8 = *(undefined1 ***)(param_1 + 0x1c0);
    local_158 = &local_88;
    local_160 = FUN_14455f8be;
    local_1c8 = (undefined1 **)CONCAT44(local_1c8._4_4_,*(undefined4 *)(param_1 + 0xa4));
    local_1c0 = ppuVar2;
    FUN_149622806(*(undefined8 *)(param_1 + 0x88),plVar15,lVar1);
    break;
  case 3:
    local_1b0 = *(undefined1 ***)(param_1 + 0x1c0);
    local_1c8 = (undefined1 **)(param_1 + 0x130);
    local_168 = &local_88;
    local_170 = FUN_14455f8be;
    local_1c0 = (undefined1 **)CONCAT44(local_1c0._4_4_,*(undefined4 *)(param_1 + 0xa4));
    local_1b8 = ppuVar2;
    FUN_149622a3e(*(undefined8 *)(param_1 + 0x88),plVar15,lVar1);
    break;
  case 4:
    uStack_1a8 = *(undefined8 *)(param_1 + 0x1c0);
    local_f8 = *(undefined8 *)(param_1 + 200);
    local_1b8 = &local_108;
    local_108 = *(undefined1 **)(param_1 + 0xb8);
    lStack_100 = *(longlong *)(param_1 + 0xc0);
    local_1c0 = (undefined1 **)(double)*(float *)(param_1 + 0xb4);
    local_1c8 = (undefined1 **)(double)*(float *)(param_1 + 0xb0);
    local_188 = &local_88;
    local_190 = FUN_14455f8be;
    local_1b0 = ppuVar2;
    FUN_149622f8c(*(undefined8 *)(param_1 + 0x88),plVar15,lVar1);
    break;
  default:
    local_1c0 = *(undefined1 ***)(param_1 + 0x1c0);
    local_148 = &local_88;
    local_150 = FUN_14455f8be;
    local_1c8 = ppuVar2;
    FUN_1496225ed(*(undefined8 *)(param_1 + 0x88),plVar15,lVar1);
  }
  lVar1 = *plVar24;
  uVar21 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar14 = 0;
  if ((uVar21 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))) {
    uVar25 = 1;
    uVar26 = 1;
    if (1 < (int)uVar21) {
      uVar25 = uVar21;
    }
    do {
      uVar14 = uVar25;
      if (uVar25 == uVar26) break;
      uVar19 = uVar26 >> 9;
      uVar23 = uVar26 & 0x1ff;
      uVar14 = uVar26;
      uVar26 = uVar26 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar19] +
                                         (ulonglong)uVar23 * 2) - 1U));
  }
LAB_1496244ba:
  if (uVar14 != uVar21) {
    lVar5 = *plVar24;
    puVar22 = (undefined4 *)(*ppuVar2 + (longlong)(int)uVar14 * 0x18);
    cVar12 = FUN_146bfed03(puVar22);
    if (cVar12 != '\0') {
      lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
      *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18) =
           *(undefined8 *)(puVar22 + 4);
      uVar8 = puVar22[1];
      uVar9 = puVar22[2];
      uVar10 = puVar22[3];
      puVar3 = (undefined4 *)(lVar7 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
      *puVar3 = *puVar22;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      if (*(char *)(lVar5 + 0x210) == '\x01') {
        LOCK();
        *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
        UNLOCK();
      }
    }
    uVar25 = uVar14 + 1;
    if ((int)(uVar14 + 1) < (int)uVar21) {
      uVar25 = uVar21;
    }
    uVar26 = uVar14;
    do {
      uVar14 = uVar25;
      if (uVar25 - 1 == uVar26) break;
      uVar14 = uVar26 + 1;
      uVar26 = uVar14;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar1 + 0x28) +
                                           (ulonglong)(uVar14 >> 9) * 8) +
                                         (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    goto LAB_1496244ba;
  }
  if (*(char *)(param_1 + 0x140) != '\0') {
    puVar20 = (undefined1 *)*plVar24;
    lVar1 = *(longlong *)(puVar20 + 0x208);
    if (lVar1 == 0) {
      FUN_146c38c5e(puVar20,0);
    }
    else {
      lStack_100 = 0;
      local_f8 = 0;
      if (*(int *)(lVar1 + 0x38) < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = **(undefined8 **)(lVar1 + 0x30);
      }
      local_108 = puVar20;
      FUN_146c383fc(&local_108,uVar13,1,1);
      FUN_146c378c6(&local_108,uVar13,0);
      if (lStack_100 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_c8 != (undefined1 *)0x0) {
    pppuVar17 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar17 = &local_a8;
    }
    (*(code *)(*pppuVar17)[2])();
  }
LAB_149623f57:
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149624570 FUN_149624570 body=891 status=ok
// SIG undefined FUN_149624570(void)

void FUN_149624570(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (lVar4 = FUN_14142e422(), lVar4 == 0)) ||
     (lVar4 = FUN_14142e422(*(undefined8 *)(param_1 + 0x18)), *(int *)(lVar4 + 0x20) < 1)) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 2;
    uStack_58 = 2;
    FUN_148544114(&local_78,4,1);
    uVar2 = DAT_14c84635c;
    uVar1 = DAT_14c8461b4;
    local_50 = DAT_14c84635c;
    uStack_48 = DAT_14c8461b4;
    if ((longlong *)(param_1 + 0x68) == &local_78) {
      *(undefined8 *)(param_1 + 0x80) = local_60;
      *(undefined8 *)(param_1 + 0x88) = uStack_58;
      local_50._0_4_ = (undefined4)uVar2;
      local_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_48._0_4_ = (undefined4)uVar1;
      uStack_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(param_1 + 0x90) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x94) = local_50._4_4_;
      *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_48;
      *(undefined4 *)(param_1 + 0x9c) = uStack_48._4_4_;
      local_50 = uVar2;
      uStack_48 = uVar1;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x68) = local_78;
      *(undefined8 *)(param_1 + 0x70) = uStack_70;
      *(undefined8 *)(param_1 + 0x78) = local_68;
      *(undefined8 *)(param_1 + 0x80) = local_60;
      *(undefined8 *)(param_1 + 0x88) = uStack_58;
      *(undefined4 *)(param_1 + 0x90) = (undefined4)local_50;
      *(undefined4 *)(param_1 + 0x94) = local_50._4_4_;
      *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_48;
      *(undefined4 *)(param_1 + 0x9c) = uStack_48._4_4_;
    }
    lVar4 = *(longlong *)(param_1 + 0x88) * *(longlong *)(param_1 + 0x80);
    if (0 < lVar4) {
      lVar5 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 - lVar5 != 0);
    }
  }
  else {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    lStack_a0 = 0;
    cVar3 = FUN_1484c23e9(*(undefined8 *)(param_1 + 0x18),&local_a8,1);
    if (cVar3 == '\0') {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 2;
      uStack_58 = 2;
      FUN_148544114(&local_78,4,1);
      uVar2 = DAT_14c84635c;
      uVar1 = DAT_14c8461b4;
      local_50 = DAT_14c84635c;
      uStack_48 = DAT_14c8461b4;
      if ((longlong *)(param_1 + 0x68) == &local_78) {
        *(undefined8 *)(param_1 + 0x80) = local_60;
        *(undefined8 *)(param_1 + 0x88) = uStack_58;
        local_50._0_4_ = (undefined4)uVar2;
        local_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_48._0_4_ = (undefined4)uVar1;
        uStack_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(param_1 + 0x90) = (undefined4)local_50;
        *(undefined4 *)(param_1 + 0x94) = local_50._4_4_;
        *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_48;
        *(undefined4 *)(param_1 + 0x9c) = uStack_48._4_4_;
        local_50 = uVar2;
        uStack_48 = uVar1;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x68) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x68) = local_78;
        local_78 = 0;
        *(undefined8 *)(param_1 + 0x70) = uStack_70;
        *(undefined8 *)(param_1 + 0x78) = local_68;
        uStack_70 = 0;
        local_68 = 0;
        *(undefined8 *)(param_1 + 0x80) = local_60;
        *(undefined8 *)(param_1 + 0x88) = uStack_58;
        *(undefined4 *)(param_1 + 0x90) = (undefined4)local_50;
        *(undefined4 *)(param_1 + 0x94) = local_50._4_4_;
        *(undefined4 *)(param_1 + 0x98) = (undefined4)uStack_48;
        *(undefined4 *)(param_1 + 0x9c) = uStack_48._4_4_;
      }
      lVar4 = *(longlong *)(param_1 + 0x88) * *(longlong *)(param_1 + 0x80);
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 4) = 0;
          lVar5 = lVar5 + 1;
        } while (lVar4 - lVar5 != 0);
      }
    }
    else {
      iVar10 = (int)local_a8;
      lVar5 = (longlong)iVar10;
      lVar9 = local_a8 >> 0x20;
      *(longlong *)(param_1 + 0x80) = lVar5;
      *(longlong *)(param_1 + 0x88) = lVar9;
      FUN_148544114((longlong *)(param_1 + 0x68),lVar5 * lVar9,1);
      lVar4 = *(longlong *)(param_1 + 0x88) * *(longlong *)(param_1 + 0x80);
      if (0 < lVar4) {
        lVar6 = 0;
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar4 - lVar6 != 0);
      }
      fVar11 = 1.0 / (float)iVar10;
      *(float *)(param_1 + 0x9c) = fVar11;
      *(float *)(param_1 + 0x98) = fVar11;
      if (0 < lVar9) {
        lVar4 = 0;
        lVar6 = 0;
        do {
          lVar7 = lVar4;
          lVar8 = lVar5;
          if (0 < lVar5) {
            do {
              *(undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar7) =
                   *(undefined4 *)((longlong)*(int *)(param_1 + 0xb4) * 4 + lStack_a0 + lVar7 * 4);
              lVar7 = lVar7 + 4;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          lVar6 = lVar6 + 1;
          lVar4 = lVar4 + lVar5 * 4;
        } while (lVar6 != lVar9);
      }
    }
    if (lStack_a0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496248ec FUN_1496248ec body=243 status=ok
// SIG undefined FUN_1496248ec(void)

void FUN_1496248ec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    plVar4 = *(longlong **)(param_1 + 0xd8);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    lVar3 = FUN_14001cc68(0x80,0x10);
    FUN_140501b78(lVar3,param_2 + 0x30);
    plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14bd8e150;
    plVar4[2] = lVar3;
    *(longlong *)(param_1 + 0xd0) = lVar3;
    plVar2 = *(longlong **)(param_1 + 0xd8);
    if (plVar4 == plVar2) {
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_1496249a6;
    }
    *(longlong **)(param_1 + 0xd8) = plVar4;
    plVar4 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
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
LAB_1496249a6:
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1496249e0 FUN_1496249e0 body=88 status=ok
// SIG undefined FUN_1496249e0(void)

undefined8 * FUN_1496249e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145c61f58(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 149624a38 FUN_149624a38 body=133 status=ok
// SIG undefined FUN_149624a38(void)

void FUN_149624a38(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar3;
  *(longlong *)(param_1 + 0x138) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000149624ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149624ac7 FUN_149624ac7 body=148 status=ok
// SIG undefined FUN_149624ac7(void)

undefined8 FUN_149624ac7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145babfea();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149624b5c FUN_149624b5c body=349 status=ok
// SIG undefined FUN_149624b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_149624b5c(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc20510) {
    FUN_144b3d300(&DAT_14cc20510);
    if (DAT_14cc20510 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc20500 = (undefined *)0x0;
      _DAT_14cc2050c = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc20508 = local_48;
      FUN_1484d23fc(&DAT_14cc204d8,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc204d8;
        if (DAT_14cc20500 != (undefined *)0x0) {
          _Dst = DAT_14cc20500;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1445572d4);
      _Init_thread_footer(&DAT_14cc20510);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc204d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149624cba FUN_149624cba body=84 status=ok
// SIG undefined FUN_149624cba(void)

undefined8 * FUN_149624cba(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 200);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar2,iVar1);
  }
  return param_2;
}


