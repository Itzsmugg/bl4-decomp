// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14783c616 FUN_14783c616 body=63 status=ok
// SIG undefined FUN_14783c616(void)

longlong FUN_14783c616(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147836712(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147836700(lVar2);
  return lVar2;
}



// FUNCTION 14783c656 FUN_14783c656 body=130 status=ok
// SIG undefined FUN_14783c656(void)

void FUN_14783c656(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783c6da FUN_14783c6da body=303 status=ok
// SIG undefined FUN_14783c6da(void)

undefined4 * FUN_14783c6da(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14783c80a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_14783c8f0(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
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
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14783ca20(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783c80a FUN_14783c80a body=229 status=ok
// SIG undefined FUN_14783c80a(void)

int * FUN_14783c80a(longlong *param_1,int *param_2)

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



// FUNCTION 14783c8f0 FUN_14783c8f0 body=189 status=ok
// SIG undefined FUN_14783c8f0(void)

undefined8 FUN_14783c8f0(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_14783c9ae(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 14783c9ae FUN_14783c9ae body=114 status=ok
// SIG undefined FUN_14783c9ae(void)

void FUN_14783c9ae(longlong *param_1,int param_2)

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



// FUNCTION 14783ca20 FUN_14783ca20 body=422 status=ok
// SIG undefined FUN_14783ca20(void)

void FUN_14783ca20(longlong *param_1)

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



// FUNCTION 14783cbc8 FUN_14783cbc8 body=47 status=ok
// SIG undefined FUN_14783cbc8(void)

void FUN_14783cbc8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 14783cbf8 FUN_14783cbf8 body=29 status=ok
// SIG undefined FUN_14783cbf8(void)

undefined8 FUN_14783cbf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783cc16 FUN_14783cc16 body=370 status=ok
// SIG undefined FUN_14783cc16(void)

void FUN_14783cc16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 10;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_14783cc52;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_14783cc52:
  plVar8 = (longlong *)FUN_14001cc68(400,0x10);
  local_68 = param_3;
  FUN_14783cd9e(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783d3d4(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783cd9e FUN_14783cd9e body=191 status=ok
// SIG undefined FUN_14783cd9e(void)

undefined8 *
FUN_14783cd9e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad6a0;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783ce5e(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783ce5e(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783ce5e FUN_14783ce5e body=371 status=ok
// SIG undefined FUN_14783ce5e(void)

undefined8 *
FUN_14783ce5e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad6c0;
  memset(param_1 + 6,0,200);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5ab730;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = 0xfffffffefffffffe;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = *param_4;
  param_1[0x22] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x26] = param_4[6];
  param_1[0x27] = uVar4;
  param_1[0x24] = uVar2;
  param_1[0x25] = uVar3;
  if (param_1[0x20] != 0) {
    *param_4 = 0;
  }
  param_1[0x28] = *param_5;
  param_1[0x2a] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2e] = param_5[6];
  param_1[0x2f] = uVar4;
  param_1[0x2c] = uVar2;
  param_1[0x2d] = uVar3;
  if (param_1[0x28] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 14783cfdc FUN_14783cfdc body=29 status=ok
// SIG undefined FUN_14783cfdc(void)

undefined8 FUN_14783cfdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783cffa FUN_14783cffa body=38 status=ok
// SIG undefined FUN_14783cffa(void)

undefined8 FUN_14783cffa(undefined8 param_1,int param_2)

{
  FUN_14783d6c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783d020 FUN_14783d020 body=287 status=ok
// SIG undefined FUN_14783d020(void)

void FUN_14783d020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x140);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x160);
      if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x150);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783d0cf:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783d0cf;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783d140 FUN_14783d140 body=65 status=ok
// SIG undefined FUN_14783d140(void)

void FUN_14783d140(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x100);
  plVar3 = (longlong *)(lVar1 + 0x120);
  if (*(longlong **)(lVar1 + 0x110) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x110);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783d17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783d1be FUN_14783d1be body=83 status=ok
// SIG undefined FUN_14783d1be(void)

undefined8 * FUN_14783d1be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad6e0;
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



// FUNCTION 14783d222 FUN_14783d222 body=12 status=ok
// SIG undefined FUN_14783d222(void)

void FUN_14783d222(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783d22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783d22e FUN_14783d22e body=83 status=ok
// SIG undefined FUN_14783d22e(void)

undefined8 * FUN_14783d22e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad700;
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



// FUNCTION 14783d282 FUN_14783d282 body=220 status=ok
// SIG undefined FUN_14783d282(void)

void FUN_14783d282(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad720;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783d360;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad720;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783d360;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783d380 FUN_14783d380 body=83 status=ok
// SIG undefined FUN_14783d380(void)

undefined8 * FUN_14783d380(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad720;
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



// FUNCTION 14783d3d4 FUN_14783d3d4 body=167 status=ok
// SIG undefined FUN_14783d3d4(void)

void FUN_14783d3d4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783d44f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783d44f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783d44f:
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
                    /* WARNING: Could not recover jumptable at 0x00014783d46f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783d47c FUN_14783d47c body=214 status=ok
// SIG undefined FUN_14783d47c(void)

undefined8 *
FUN_14783d47c(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad780;
  uVar3 = *param_4;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    plVar5 = local_28;
  }
  uVar4 = *param_2;
  local_38 = param_6;
  FUN_14783ce5e(param_1 + 2,&local_30,uVar3,param_5);
  param_1[2] = &PTR_FUN_14a5ad7a0;
  *(undefined4 *)(param_1 + 0x32) = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783d55e FUN_14783d55e body=29 status=ok
// SIG undefined FUN_14783d55e(void)

undefined8 FUN_14783d55e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783d57c FUN_14783d57c body=38 status=ok
// SIG undefined FUN_14783d57c(void)

undefined8 FUN_14783d57c(undefined8 param_1,int param_2)

{
  FUN_14783d6c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783d5a2 FUN_14783d5a2 body=291 status=ok
// SIG undefined FUN_14783d5a2(void)

ulonglong FUN_14783d5a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
    lVar6 = lVar3 + 0x58;
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x60);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x68) - 1U & *(uint *)(param_1 + 0x180)) *
                             4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20) ==
            *(uint *)(param_1 + 0x180)) {
          if (lVar6 != 0) {
            lVar3 = *(longlong *)(lVar6 + 8);
            plVar4 = *(longlong **)(lVar6 + 0x10);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar3 != 0);
            if (lVar3 != 0) {
              QueryPerformanceCounter(&local_38);
              *(double *)(lVar3 + 0x10) = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
              FUN_1447a122a(param_1 + 0xe0,lVar3);
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
            goto LAB_14783d5cd;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  uVar7 = 0;
LAB_14783d5cd:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14783d6c6 FUN_14783d6c6 body=200 status=ok
// SIG undefined FUN_14783d6c6(void)

void FUN_14783d6c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad6c0;
  if (param_1[0x28] != 0) {
    plVar3 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 10);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783d783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783d78e FUN_14783d78e body=167 status=ok
// SIG undefined FUN_14783d78e(void)

void FUN_14783d78e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783d809;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783d809;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783d809:
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
                    /* WARNING: Could not recover jumptable at 0x00014783d829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783d836 FUN_14783d836 body=97 status=ok
// SIG undefined FUN_14783d836(void)

void FUN_14783d836(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar4 = 0;
  }
  else {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 14783d898 FUN_14783d898 body=62 status=ok
// SIG undefined FUN_14783d898(void)

void FUN_14783d898(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14783d8d6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14783d8d6 FUN_14783d8d6 body=93 status=ok
// SIG undefined FUN_14783d8d6(void)

ulonglong FUN_14783d8d6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 14783d934 FUN_14783d934 body=135 status=ok
// SIG undefined FUN_14783d934(void)

longlong FUN_14783d934(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1468f2576();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_14783d96e;
  }
  local_30 = param_3;
  FUN_14783d9bc(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14783d96e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783d9bc FUN_14783d9bc body=281 status=ok
// SIG undefined FUN_14783d9bc(void)

undefined4 * FUN_14783d9bc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14783dad6(param_1,local_48);
  FUN_14783dc56(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_14783dbbc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14783dd3c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783dad6 FUN_14783dad6 body=230 status=ok
// SIG undefined FUN_14783dad6(void)

int * FUN_14783dad6(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14783dbbc FUN_14783dbbc body=154 status=ok
// SIG undefined FUN_14783dbbc(void)

void FUN_14783dbbc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_1468f2576();
    if (iVar10 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      *(undefined4 *)(plVar1 + 2) = param_3[4];
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(undefined4 *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
      FUN_14783dcb2(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_14783dbdd;
    }
  }
  uVar9 = 0;
LAB_14783dbdd:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 14783dc56 FUN_14783dc56 body=92 status=ok
// SIG undefined FUN_14783dc56(void)

undefined8 * FUN_14783dc56(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 14783dcb2 FUN_14783dcb2 body=138 status=ok
// SIG undefined FUN_14783dcb2(void)

void FUN_14783dcb2(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14783dd3c FUN_14783dd3c body=476 status=ok
// SIG undefined FUN_14783dd3c(void)

void FUN_14783dd3c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
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
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
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
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783df32 FUN_14783df32 body=29 status=ok
// SIG undefined FUN_14783df32(void)

undefined8 FUN_14783df32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783df50 FUN_14783df50 body=130 status=ok
// SIG undefined FUN_14783df50(void)

void FUN_14783df50(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783dfd4 FUN_14783dfd4 body=370 status=ok
// SIG undefined FUN_14783dfd4(void)

void FUN_14783dfd4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = 6;
  local_50 = *(undefined8 **)(param_1 + 0x18);
  if (local_50 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)0x0;
    local_58 = 0;
  }
  else {
    iVar7 = *(int *)(local_50 + 1);
    local_58 = 0;
    do {
      if (iVar7 == 0) {
        local_50 = (undefined8 *)0x0;
        goto LAB_14783e010;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(local_50 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    local_58 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_14783e010:
  plVar8 = (longlong *)FUN_14001cc68(0x180,0x10);
  local_68 = param_3;
  FUN_14783e15c(plVar8,&local_58,&local_34,param_2);
  plVar1 = plVar8 + 2;
  local_48 = plVar1;
  local_40 = plVar8;
  FUN_14783e83e(&local_48,plVar1);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar7 + 1U) {
    FUN_147835e0c((longlong *)(param_1 + 0x188),iVar7);
  }
  plVar6 = local_40;
  lVar4 = *(longlong *)(param_1 + 0x188);
  *(longlong **)(lVar4 + (longlong)iVar7 * 0x10) = plVar1;
  *(longlong **)(lVar4 + 8 + (longlong)iVar7 * 0x10) = plVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar5 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_50 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783e15c FUN_14783e15c body=191 status=ok
// SIG undefined FUN_14783e15c(void)

undefined8 *
FUN_14783e15c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad820;
  uVar3 = *param_3;
  local_28 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_20 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_38 = param_5;
    FUN_14783e21c(param_1 + 2,&local_28,uVar3);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = param_5;
    FUN_14783e21c(param_1 + 2,&local_28,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783e21c FUN_14783e21c body=343 status=ok
// SIG undefined FUN_14783e21c(void)

undefined8 *
FUN_14783e21c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad840;
  memset(param_1 + 6,0,0xb8);
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[6] = &PTR_FUN_14a5abbb0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = *param_4;
  param_1[0x20] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x24] = param_4[6];
  param_1[0x25] = uVar4;
  param_1[0x22] = uVar2;
  param_1[0x23] = uVar3;
  if (param_1[0x1e] != 0) {
    *param_4 = 0;
  }
  param_1[0x26] = *param_5;
  param_1[0x28] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2c] = param_5[6];
  param_1[0x2d] = uVar4;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  if (param_1[0x26] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 14783e37e FUN_14783e37e body=29 status=ok
// SIG undefined FUN_14783e37e(void)

undefined8 FUN_14783e37e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783e39c FUN_14783e39c body=38 status=ok
// SIG undefined FUN_14783e39c(void)

undefined8 FUN_14783e39c(undefined8 param_1,int param_2)

{
  FUN_14783e4e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783e3c2 FUN_14783e3c2 body=287 status=ok
// SIG undefined FUN_14783e3c2(void)

void FUN_14783e3c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x130);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x150);
      if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x140);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783e471:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783e471;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783e4e2 FUN_14783e4e2 body=200 status=ok
// SIG undefined FUN_14783e4e2(void)

void FUN_14783e4e2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad840;
  if (param_1[0x26] != 0) {
    plVar3 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1e] != 0) {
    plVar3 = param_1 + 0x22;
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x20];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 8);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783e59f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783e5aa FUN_14783e5aa body=65 status=ok
// SIG undefined FUN_14783e5aa(void)

void FUN_14783e5aa(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0);
  plVar3 = (longlong *)(lVar1 + 0x110);
  if (*(longlong **)(lVar1 + 0x100) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x100);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783e5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783e628 FUN_14783e628 body=83 status=ok
// SIG undefined FUN_14783e628(void)

undefined8 * FUN_14783e628(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad860;
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



// FUNCTION 14783e68c FUN_14783e68c body=12 status=ok
// SIG undefined FUN_14783e68c(void)

void FUN_14783e68c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783e695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783e698 FUN_14783e698 body=83 status=ok
// SIG undefined FUN_14783e698(void)

undefined8 * FUN_14783e698(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad880;
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



// FUNCTION 14783e6ec FUN_14783e6ec body=220 status=ok
// SIG undefined FUN_14783e6ec(void)

void FUN_14783e6ec(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad8a0;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783e7ca;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ad8a0;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783e7ca;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783e7ea FUN_14783e7ea body=83 status=ok
// SIG undefined FUN_14783e7ea(void)

undefined8 * FUN_14783e7ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad8a0;
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



// FUNCTION 14783e83e FUN_14783e83e body=167 status=ok
// SIG undefined FUN_14783e83e(void)

void FUN_14783e83e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783e8b9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783e8b9;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783e8b9:
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
                    /* WARNING: Could not recover jumptable at 0x00014783e8d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783e8e6 FUN_14783e8e6 body=214 status=ok
// SIG undefined FUN_14783e8e6(void)

undefined8 *
FUN_14783e8e6(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a5ad960;
  uVar3 = *param_4;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    plVar5 = local_28;
  }
  uVar4 = *param_2;
  local_38 = param_6;
  FUN_14783e9e6(param_1 + 2,&local_30,uVar3,param_5);
  param_1[2] = &PTR_FUN_14a5ad980;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783e9c8 FUN_14783e9c8 body=29 status=ok
// SIG undefined FUN_14783e9c8(void)

undefined8 FUN_14783e9c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783e9e6 FUN_14783e9e6 body=343 status=ok
// SIG undefined FUN_14783e9e6(void)

undefined8 *
FUN_14783e9e6(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_LAB_14a5acca0;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5ad9a0;
  memset(param_1 + 6,0,0xb8);
  param_1[6] = &PTR_FUN_14a5acc50;
  *(undefined4 *)(param_1 + 7) = 6;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = *param_4;
  param_1[0x20] = param_4[2];
  param_4[2] = 0;
  uVar2 = param_4[4];
  uVar3 = param_4[5];
  uVar4 = param_4[7];
  param_1[0x24] = param_4[6];
  param_1[0x25] = uVar4;
  param_1[0x22] = uVar2;
  param_1[0x23] = uVar3;
  if (param_1[0x1e] != 0) {
    *param_4 = 0;
  }
  param_1[0x26] = *param_5;
  param_1[0x28] = param_5[2];
  param_5[2] = 0;
  uVar2 = param_5[4];
  uVar3 = param_5[5];
  uVar4 = param_5[7];
  param_1[0x2c] = param_5[6];
  param_1[0x2d] = uVar4;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  if (param_1[0x26] != 0) {
    *param_5 = 0;
  }
  return param_1;
}



// FUNCTION 14783eb3e FUN_14783eb3e body=38 status=ok
// SIG undefined FUN_14783eb3e(void)

undefined8 FUN_14783eb3e(undefined8 param_1,int param_2)

{
  FUN_14783edce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783eb64 FUN_14783eb64 body=291 status=ok
// SIG undefined FUN_14783eb64(void)

ulonglong FUN_14783eb64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
    lVar6 = lVar3 + 0x58;
    if (*(longlong *)(lVar3 + 0x60) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x60);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x68) - 1U & *(uint *)(param_1 + 0x170)) *
                             4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20) ==
            *(uint *)(param_1 + 0x170)) {
          if (lVar6 != 0) {
            lVar3 = *(longlong *)(lVar6 + 8);
            plVar4 = *(longlong **)(lVar6 + 0x10);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar3 != 0);
            if (lVar3 != 0) {
              QueryPerformanceCounter(&local_38);
              *(double *)(lVar3 + 0x10) = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
              FUN_1447a122a(param_1 + 0xd0,lVar3);
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
            goto LAB_14783eb8f;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  uVar7 = 0;
LAB_14783eb8f:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14783ec88 FUN_14783ec88 body=287 status=ok
// SIG undefined FUN_14783ec88(void)

void FUN_14783ec88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1c) == 0) && (lVar9 = *(longlong *)(param_1 + 8), lVar9 != 0)) {
    pcVar4 = *(code **)(param_1 + 0x130);
    if (pcVar4 != (code *)0x0) {
      plVar8 = (longlong *)(param_1 + 0x150);
      if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
        plVar8 = *(longlong **)(param_1 + 0x140);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,param_1 + 0x30);
      lVar9 = *(longlong *)(param_1 + 8);
    }
    plStack_30 = *(longlong **)(param_1 + 0x28);
    if (plStack_30 == (longlong *)0x0) {
LAB_14783ed37:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plStack_30[1];
      do {
        if (iVar6 == 0) goto LAB_14783ed37;
        LOCK();
        iVar5 = (int)plStack_30[1];
        bVar10 = iVar6 == iVar5;
        if (bVar10) {
          *(int *)(plStack_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar10);
      local_38 = *(undefined8 *)(param_1 + 0x20);
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      bVar10 = false;
    }
    plVar8 = plStack_30;
    FUN_14338a410(lVar9,&local_38);
    plVar3 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar10) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14783eda8 FUN_14783eda8 body=38 status=ok
// SIG undefined FUN_14783eda8(void)

undefined8 FUN_14783eda8(undefined8 param_1,int param_2)

{
  FUN_14783edce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783edce FUN_14783edce body=200 status=ok
// SIG undefined FUN_14783edce(void)

void FUN_14783edce(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ad9a0;
  if (param_1[0x26] != 0) {
    plVar3 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1e] != 0) {
    plVar3 = param_1 + 0x22;
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x20];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_147832492(param_1 + 8);
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a5acca0;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014783ee8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14783ee96 FUN_14783ee96 body=65 status=ok
// SIG undefined FUN_14783ee96(void)

void FUN_14783ee96(longlong *param_1)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0);
  plVar3 = (longlong *)(lVar1 + 0x110);
  if (*(longlong **)(lVar1 + 0x100) != (longlong *)0x0) {
    plVar3 = *(longlong **)(lVar1 + 0x100);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014783eed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,lVar1 + 0x30);
  return;
}



// FUNCTION 14783ef14 FUN_14783ef14 body=83 status=ok
// SIG undefined FUN_14783ef14(void)

undefined8 * FUN_14783ef14(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad9c0;
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



// FUNCTION 14783ef78 FUN_14783ef78 body=12 status=ok
// SIG undefined FUN_14783ef78(void)

void FUN_14783ef78(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014783ef81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14783ef84 FUN_14783ef84 body=83 status=ok
// SIG undefined FUN_14783ef84(void)

undefined8 * FUN_14783ef84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ad9e0;
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



// FUNCTION 14783efd8 FUN_14783efd8 body=220 status=ok
// SIG undefined FUN_14783efd8(void)

void FUN_14783efd8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x1c) == 0) {
    local_30 = *param_1;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ada00;
      local_28 = (longlong *)0x0;
      local_58 = &LAB_14783f0b6;
      FUN_1407461b0(1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = 0;
      local_38 = &PTR_LAB_14a5ada00;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_58 = &LAB_14783f0b6;
      local_28 = plVar3;
      FUN_1407461b0(1);
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
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783f0d6 FUN_14783f0d6 body=83 status=ok
// SIG undefined FUN_14783f0d6(void)

undefined8 * FUN_14783f0d6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a5ada00;
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



// FUNCTION 14783f12a FUN_14783f12a body=167 status=ok
// SIG undefined FUN_14783f12a(void)

void FUN_14783f12a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14783f1a5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14783f1a5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783f1a5:
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
                    /* WARNING: Could not recover jumptable at 0x00014783f1c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783f1d2 FUN_14783f1d2 body=81 status=ok
// SIG undefined FUN_14783f1d2(void)

void FUN_14783f1d2(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_14783f224(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14783f224 FUN_14783f224 body=90 status=ok
// SIG undefined FUN_14783f224(void)

void FUN_14783f224(longlong *param_1,int param_2)

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
  FUN_14783f27e();
  return;
}



// FUNCTION 14783f27e FUN_14783f27e body=78 status=ok
// SIG undefined FUN_14783f27e(void)

void FUN_14783f27e(longlong *param_1,int param_2)

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
  FUN_14783c9ae(param_1,param_2);
  return;
}



// FUNCTION 14783f2cc FUN_14783f2cc body=96 status=ok
// SIG undefined FUN_14783f2cc(void)

undefined8 * FUN_14783f2cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_LAB_14a5adc10;
  FUN_1409e1656(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a5adb70;
  puVar1[1] = &PTR_FUN_14a5adbc0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return puVar1;
}



// FUNCTION 14783f32c FUN_14783f32c body=31 status=ok
// SIG undefined FUN_14783f32c(void)

undefined8 FUN_14783f32c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783f368 FUN_14783f368 body=93 status=ok
// SIG undefined FUN_14783f368(void)

void FUN_14783f368(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5adb00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14783f3c6 FUN_14783f3c6 body=126 status=ok
// SIG undefined FUN_14783f3c6(void)

void FUN_14783f3c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5adb00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014783f435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14783f450 FUN_14783f450 body=21 status=ok
// SIG undefined FUN_14783f450(void)

undefined8 FUN_14783f450(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14783f466 FUN_14783f466 body=38 status=ok
// SIG undefined FUN_14783f466(void)

undefined8 FUN_14783f466(undefined8 param_1,int param_2)

{
  FUN_14783f4c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783f490 FUN_14783f490 body=45 status=ok
// SIG undefined FUN_14783f490(void)

longlong FUN_14783f490(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14783f4c4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783f4c4 FUN_14783f4c4 body=74 status=ok
// SIG undefined FUN_14783f4c4(void)

void FUN_14783f4c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5adb70;
  param_1[1] = &PTR_FUN_14a5adbc0;
  FUN_14783f50e(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 1);
  return;
}



// FUNCTION 14783f50e FUN_14783f50e body=73 status=ok
// SIG undefined FUN_14783f50e(void)

void FUN_14783f50e(longlong param_1,int param_2)

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



// FUNCTION 14783f558 FUN_14783f558 body=9 status=ok
// SIG undefined FUN_14783f558(void)

void FUN_14783f558(longlong param_1)

{
  FUN_1478322e6(param_1 + 0x10);
  return;
}



// FUNCTION 14783f562 FUN_14783f562 body=29 status=ok
// SIG undefined FUN_14783f562(void)

undefined8 FUN_14783f562(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14783f580 FUN_14783f580 body=167 status=ok
// SIG undefined FUN_14783f580(void)

void FUN_14783f580(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_14783f5fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_14783f5fb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14783f5fb:
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
                    /* WARNING: Could not recover jumptable at 0x00014783f61b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14783f628 FUN_14783f628 body=132 status=ok
// SIG undefined FUN_14783f628(void)

void FUN_14783f628(longlong param_1,int param_2)

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



// FUNCTION 14783f6ae FUN_14783f6ae body=118 status=ok
// SIG undefined FUN_14783f6ae(void)

void FUN_14783f6ae(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14783f724 FUN_14783f724 body=62 status=ok
// SIG undefined FUN_14783f724(void)

void FUN_14783f724(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14783f762(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14783f762 FUN_14783f762 body=93 status=ok
// SIG undefined FUN_14783f762(void)

ulonglong FUN_14783f762(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 14783f7c0 FUN_14783f7c0 body=205 status=ok
// SIG undefined FUN_14783f7c0(void)

void FUN_14783f7c0(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  uint uVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    iVar2 = *(int *)(param_1 + 0xa0);
    uVar3 = (iVar2 - iVar1) + iVar4;
    if (0 < (int)uVar3) {
      *(int *)(param_1 + 0x98) = iVar2 + iVar4;
      if ((uint)(*(int *)(param_1 + 0x9c) - iVar1) < uVar3) {
        FUN_1447403be(param_1 + 0x90);
      }
      memset((void *)((longlong)iVar1 + *(longlong *)(param_1 + 0x90)),0,(ulonglong)uVar3);
      iVar2 = *(int *)(param_1 + 0xa0);
    }
    param_3 = (size_t)iVar4;
    _Dst = (void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x90));
    _Src = param_2;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x98) <
        (longlong)((longlong)*(int *)(param_1 + 0xa0) + param_3)) {
      FUN_14572541c(param_1);
      return;
    }
    _Src = (void *)((longlong)*(int *)(param_1 + 0xa0) + *(longlong *)(param_1 + 0x90));
    _Dst = param_2;
  }
  memcpy(_Dst,_Src,param_3);
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + iVar4;
  return;
}



// FUNCTION 14783f8d0 FUN_14783f8d0 body=460 status=ok
// SIG undefined FUN_14783f8d0(void)

undefined8 * FUN_14783f8d0(undefined8 *param_1)

{
  FUN_147086f92();
  *param_1 = &PTR_FUN_14a5aded0;
  FUN_144869430(param_1 + 2);
  param_1[2] = &PTR_FUN_14a5aec70;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  FUN_144869430(param_1 + 0x17);
  param_1[0x17] = &PTR_FUN_14a5aec70;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x155) = 0;
  FUN_144869430(param_1 + 0x2c);
  param_1[0x2c] = &PTR_FUN_14a5aec70;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fd) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x253) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25b) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
  param_1[0x5b] = &PTR_FUN_14a5ab620;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x6e] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  FUN_1449da20c(DAT_14c872ce0,L"HttpNetworkReplayStreaming",L"ServerURL",param_1 + 0x46,
                &DAT_14c872ce8);
  return param_1;
}



// FUNCTION 14783fa9c FUN_14783fa9c body=58 status=ok
// SIG undefined FUN_14783fa9c(void)

undefined8 * FUN_14783fa9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_14118da1c();
  FUN_14063337c(uVar1,L"ReplayMeta=",param_2,1,0);
  return param_2;
}



// FUNCTION 14783fad6 FUN_14783fad6 body=174 status=ok
// SIG undefined FUN_14783fad6(void)

void FUN_14783fad6(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af0e0;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014783fb61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14783fb84 FUN_14783fb84 body=389 status=ok
// SIG undefined FUN_14783fb84(void)

void FUN_14783fb84(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  LARGE_INTEGER local_40 [2];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  plVar2 = local_30;
  puVar4 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x210) != 0) {
    puVar5 = *(undefined2 **)(param_1 + 0x208);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x230);
  }
  FUN_140002266(local_40,L"%sreplay/%s/event?group=checkpoint",puVar4,puVar5);
  (**(code **)(*plVar2 + 0x68))(plVar2,local_40);
  if (local_40[0].QuadPart != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_30;
  FUN_140056680(local_40,&DAT_149e8e77a);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  if (local_40[0].QuadPart != 0) {
    FUN_1400020a8();
  }
  uVar3 = (**(code **)(*local_30 + 0xf0))();
  FUN_14783fad6(uVar3,param_1,FUN_14339d702);
  local_50 = local_30;
  local_48 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_58 = 0;
  FUN_143397cf2(param_1,9,&local_50,0);
  QueryPerformanceCounter(local_40);
  *(double *)(param_1 + 600) = (double)local_40[0].QuadPart * DAT_14c83f420 + 16777216.0;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783fd0a FUN_14783fd0a body=56 status=ok
// SIG undefined FUN_14783fd0a(void)

void FUN_14783fd0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5aeed0;
  FUN_1447a1747(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14783fd42 FUN_14783fd42 body=79 status=ok
// SIG undefined FUN_14783fd42(void)

void FUN_14783fd42(void)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  FUN_143397cf2(0,0x10,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783fd92 FUN_14783fd92 body=124 status=ok
// SIG undefined FUN_14783fd92(void)

undefined8 *
FUN_14783fd92(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a5aef10;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = 0;
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 14783fe0e FUN_14783fe0e body=424 status=ok
// SIG undefined FUN_14783fe0e(void)

void FUN_14783fe0e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  LARGE_INTEGER local_68;
  longlong *local_60;
  double local_58;
  longlong *local_50;
  LARGE_INTEGER *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_2 != 0) && (*param_3 != 0)) {
    QueryPerformanceCounter(&local_68);
    local_58 = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
    local_68.QuadPart = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_60 = plVar3;
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
    (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,local_78);
    local_50 = local_78;
    local_48 = &local_68;
    FUN_147842740(param_1 + 0x368,local_3c);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    plVar3 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_14783ffb8(param_1);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14783ffb8 FUN_14783ffb8 body=586 status=ok
// SIG undefined FUN_14783ffb8(void)

void FUN_14783ffb8(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined2 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x368);
  do {
    if (*(int *)(param_1 + 0x370) == *(int *)(param_1 + 0x39c)) break;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a0 = 0x100000000;
    local_90 = 0xffffffff;
    local_88 = 0;
    local_98 = param_1 + 0x378;
    if (*(int *)(param_1 + 0x390) != 0) {
      FUN_1449c0562(&local_a0);
    }
    local_e0 = local_90;
    uVar4 = local_e0;
    local_d8 = local_88;
    local_d4 = local_84;
    local_f0 = local_a0;
    local_e8 = local_98;
    local_c0 = 0;
    local_e0._4_4_ = (int)((ulonglong)local_90 >> 0x20);
    local_f8 = plVar1;
    local_d0 = plVar1;
    local_c8 = plVar1;
    if (local_e0._4_4_ < *(int *)(local_98 + 0x18)) {
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      iVar5 = local_e0._4_4_;
      local_e0 = uVar4;
      do {
        lVar7 = (longlong)iVar5;
        lVar8 = lVar7 * 0x30;
        lVar6 = *local_f8;
        dVar2 = *(double *)(lVar6 + 0x20 + lVar8);
        if (((int)uStack_b0 < 2) ||
           (dVar2 <= (double)CONCAT44(uVar12,uVar11) && (double)CONCAT44(uVar12,uVar11) != dVar2)) {
          iVar5 = *(int *)(lVar6 + 8 + lVar8);
          iVar9 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar9 = 0;
          }
          FUN_1402980a2(&local_b8,*(undefined8 *)(lVar6 + lVar8),iVar9);
          lVar7 = (longlong)local_e0._4_4_;
          lVar6 = *local_f8;
          uVar11 = SUB84(dVar2,0);
          uVar12 = (int)((ulonglong)dVar2 >> 0x20);
        }
        lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x10 + lVar7 * 0x30) + 0x48))();
        uVar10 = uVar10 + *(int *)(lVar6 + 8);
        local_e0 = CONCAT44(local_e0._4_4_,(uint)local_e0 & ~local_f0._4_4_);
        FUN_1449c0562(&local_f0);
        iVar5 = local_e0._4_4_;
      } while (local_e0._4_4_ < *(int *)(local_e8 + 0x18));
      if (((local_c0 & 1) != 0) && (local_c0._1_1_ == '\x01')) {
        FUN_147842bb2(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34));
      }
      uVar4 = local_e0;
      if (uVar10 <= *DAT_14cabd3b0) goto LAB_14784017d;
      FUN_147842dd8(plVar1,&local_b8);
      bVar3 = true;
    }
    else {
LAB_14784017d:
      local_e0 = uVar4;
      bVar3 = false;
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  } while (bVar3);
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147840204 FUN_147840204 body=489 status=ok
// SIG undefined FUN_147840204(void)

void FUN_147840204(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_38);
  uVar3 = (**(code **)(*local_38 + 0xf0))();
  FUN_14783fad6(uVar3,param_1,FUN_143398f68);
  plVar2 = local_38;
  puVar4 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x210) != 0) {
    puVar5 = *(undefined2 **)(param_1 + 0x208);
  }
  local_78 = *(undefined8 *)(param_1 + 0x360);
  local_88 = *(undefined4 *)(param_1 + 0x240);
  local_80 = *(undefined4 *)(param_1 + 0x27c);
  if (*(int *)(param_1 + 0x238) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x230);
  }
  FUN_140002266(local_48,L"%sreplay/%s/stopUploading?numChunks=%i&time=%i&absSize=%llu",puVar4,
                puVar5);
  (**(code **)(*plVar2 + 0x68))(plVar2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_140056680(local_48,&DAT_149f280e2);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_140056680(local_48,L"application/octet-stream");
  FUN_140056680(local_58,L"Content-Type");
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_58,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  local_68 = local_38;
  local_60 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_88 = 0x40000000;
  FUN_143397cf2(param_1,3,&local_68,3);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478403ee FUN_1478403ee body=162 status=ok
// SIG undefined FUN_1478403ee(void)

ulonglong * FUN_1478403ee(ulonglong *param_1,uint param_2)

{
  short *psVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (DAT_14cabd360 == 0) {
    uVar3 = FUN_14636a3b5();
    DAT_14cabd360 = FUN_14171c317(FUN_14636a3e4,uVar3,L"EHttpReplayResult");
  }
  uVar2 = DAT_14cabd360;
  *param_1 = (ulonglong)param_2;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,uVar2);
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = &DAT_14a5af94a + *(int *)(&DAT_14a5af944 + (longlong)(int)param_2 * 4);
  do {
    psVar1 = (short *)(puVar4 + -2);
    puVar4 = puVar4 + 2;
  } while (*psVar1 != 0x3a);
  FUN_14020fad6(param_1 + 3);
  return param_1;
}



// FUNCTION 147840490 FUN_147840490 body=155 status=ok
// SIG undefined FUN_147840490(void)

void FUN_147840490(longlong param_1)

{
  float fVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x300) == 0) && (*(int *)(param_1 + 0x2f8) < 1)) {
    fVar1 = *DAT_14cabd398;
    QueryPerformanceCounter(&local_38);
    if ((double)fVar1 <
        ((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x248)) {
      FUN_1433985aa(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784052c FUN_14784052c body=111 status=ok
// SIG undefined FUN_14784052c(void)

undefined8 * FUN_14784052c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a5aef10;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 14784059c FUN_14784059c body=336 status=ok
// SIG undefined FUN_14784059c(void)

undefined8 FUN_14784059c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  if (*(int *)((longlong)param_2 + 0x1fc) != 0) {
    FUN_144893a1c(param_2 + 0x3e,0);
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  cVar2 = (**(code **)(*param_2 + 0x78))(param_2,0,(int)param_2[0x5a]);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_2 + 0x2a) = 0;
    if (*(int *)((longlong)param_2 + 0x154) != 0) {
      FUN_144893a1c(param_2 + 0x29,0);
    }
    *(undefined8 *)((longlong)param_2 + 0x284) = 0;
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  *(undefined4 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_2 + 0x15c) = 0;
  if ((int)param_2[0x58] != 0) {
    plVar1 = param_2 + 0x57;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
      if (cVar2 != '\0') {
        local_40 = &PTR_FUN_14a5ab730;
        local_38 = 0;
        local_30 = param_2[0x5a];
        local_28 = 0xffffffffffffffff;
        if ((int)param_2[0x58] == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)*plVar1;
        }
        (**(code **)(*plVar3 + 0x58))(plVar3,&local_40);
        local_58 = 0;
        uStack_50 = 0;
        FUN_144a450dc(plVar1,&local_58);
        FUN_1449db362(&local_58);
      }
    }
  }
  param_2[0x5a] = -1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478406ee FUN_1478406ee body=209 status=ok
// SIG undefined FUN_1478406ee(void)

void FUN_1478406ee(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af2e0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_147838e1e(&p_Var1->CriticalSection,param_3);
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Blink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af270;
  p_Var1->EntryCount = (int)param_2;
  p_Var1->ContentionCount = (int)((ulonglong)param_2 >> 0x20);
  *(code **)&p_Var1->Flags = FUN_14339aab2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014784079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1478407d2 FUN_1478407d2 body=209 status=ok
// SIG undefined FUN_1478407d2(void)

void FUN_1478407d2(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af3c0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14783a4ec(&p_Var1->CriticalSection,param_3);
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Blink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af350;
  p_Var1->EntryCount = (int)param_2;
  p_Var1->ContentionCount = (int)((ulonglong)param_2 >> 0x20);
  *(code **)&p_Var1->Flags = FUN_14339aff0;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147840880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1478408a4 FUN_1478408a4 body=125 status=ok
// SIG undefined FUN_1478408a4(void)

void FUN_1478408a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x300) = 0;
  plVar3 = *(longlong **)(param_1 + 0x308);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x308) = 0;
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
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147840915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14784094c FUN_14784094c body=432 status=ok
// SIG undefined FUN_14784094c(void)

undefined8 *
FUN_14784094c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_7;
  local_50 = param_7[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_80 = param_4;
  FUN_14784052c(param_1,0xd,&local_58);
  *param_1 = &PTR_FUN_14a5ae500;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar3 = (longlong *)param_1[2];
  FUN_140056680(local_68,&DAT_149f280e2);
  (**(code **)(*plVar3 + 0x60))(plVar3,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  FUN_140056680(local_68,L"application/octet-stream");
  FUN_140056680(local_78,L"Content-Type");
  (**(code **)(*plVar3 + 0xb0))(plVar3,local_78,local_68);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[2] + 0x88))((longlong *)param_1[2],param_6);
  FUN_144a787a6(param_1 + 7,param_2);
  *(undefined4 *)(param_1 + 9) = param_3;
  FUN_144a787a6(param_1 + 10,local_80);
  FUN_144a787a6(param_1 + 0xc,param_5);
  plVar3 = (longlong *)param_7[1];
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147840afe FUN_147840afe body=349 status=ok
// SIG undefined FUN_147840afe(void)

void FUN_147840afe(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong *local_58;
  longlong *local_50;
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_141054386();
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_38);
  plVar2 = local_38;
  puVar4 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x210) != 0) {
    puVar5 = *(undefined2 **)(param_1 + 0x208);
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x230);
  }
  FUN_140002266(local_48,L"%sreplay/%s/file/replay.header",puVar4,puVar5);
  (**(code **)(*plVar2 + 0x68))(plVar2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_38;
  FUN_140056680(local_48,&DAT_149e8e77a);
  (**(code **)(*plVar2 + 0x60))(plVar2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar3 = (**(code **)(*local_38 + 0xf0))();
  FUN_147840c5c(uVar3,param_1,param_2);
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_68 = 0;
  FUN_143397cf2(param_1,5,&local_58,0);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147840c5c FUN_147840c5c body=209 status=ok
// SIG undefined FUN_147840c5c(void)

void FUN_147840c5c(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af4c0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14783df50(&p_Var1->CriticalSection,param_3);
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Blink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af450;
  p_Var1->EntryCount = (int)param_2;
  p_Var1->ContentionCount = (int)((ulonglong)param_2 >> 0x20);
  *(code **)&p_Var1->Flags = FUN_14339bd74;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147840d0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147840d2e FUN_147840d2e body=201 status=ok
// SIG undefined FUN_147840d2e(void)

void FUN_147840d2e(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined4 *param_3,
                  undefined1 *param_4)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af5a0;
  *(undefined4 *)&p_Var1->CriticalSection = *param_3;
  *(undefined1 *)((longlong)&p_Var1->CriticalSection + 4) = *param_4;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af530;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_14339c060;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147840dd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147840e0a FUN_147840e0a body=205 status=ok
// SIG undefined FUN_147840e0a(void)

void FUN_147840e0a(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3,
                  undefined8 param_4)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 4) {
    FUN_1446efa72(param_1 + 1,0,4,0x10);
    param_1[1].LockCount = 4;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af680;
  FUN_147844484(&p_Var1->CriticalSection,param_3,param_4);
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
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af610;
  p_Var1[1].Type = (short)param_2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)param_2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)param_2 >> 0x20);
  p_Var1[1].CriticalSection = (_RTL_CRITICAL_SECTION *)FUN_14339c8ca;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147840eb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147840efc FUN_147840efc body=137 status=ok
// SIG undefined FUN_147840efc(void)

void FUN_147840efc(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x300) == 0) && (*(int *)(param_1 + 0x2f8) < 1)) {
    QueryPerformanceCounter(&local_20);
    if (10.0 < ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) -
               *(double *)(param_1 + 0x250)) {
      FUN_1433983a6(param_1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147840f86 FUN_147840f86 body=377 status=ok
// SIG undefined FUN_147840f86(void)

void FUN_147840f86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong *plVar4;
  char cVar5;
  LPCRITICAL_SECTION p_Var6;
  
  if (*(longlong *)(param_1 + 0x300) != 0) {
    p_Var6 = (LPCRITICAL_SECTION)
             (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x300) + 0x10) + 0xf0))();
    EnterCriticalSection(p_Var6);
    if (p_Var6[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || p_Var6[1].LockCount == 0) {
      cVar5 = '\0';
    }
    else {
      cVar5 = (**(code **)(*(longlong *)p_Var6[1].DebugInfo + 0x30))();
    }
    if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var6);
    }
    if (cVar5 != '\0') {
      p_Var6 = (LPCRITICAL_SECTION)
               (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x300) + 0x10) + 0xf0))();
      EnterCriticalSection(p_Var6);
      p_Var3 = p_Var6[1].DebugInfo;
      if (p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && p_Var6[1].LockCount != 0) {
        (*(code *)**(undefined8 **)p_Var3)(p_Var3,0);
        FUN_1446efa72(p_Var6 + 1,0,0,0x10);
        p_Var6[1].LockCount = 0;
      }
      if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(p_Var6);
      }
    }
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x300) + 0x10) + 0x118))();
    *(undefined8 *)(param_1 + 0x300) = 0;
    plVar4 = *(longlong **)(param_1 + 0x308);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x308) = 0;
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
  FUN_14784467a(*(undefined8 *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2f8));
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x2fc) != 0) {
    FUN_1478446c4(param_1 + 0x2f0);
  }
  *(undefined2 *)(param_1 + 0x260) = 0;
  return;
}



// FUNCTION 147841132 FUN_147841132 body=105 status=ok
// SIG undefined FUN_147841132(void)

undefined8 FUN_147841132(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x168))();
  if ((((cVar1 != '\0') ||
       ((((int)param_1[0x58] != 0 && ((longlong *)param_1[0x57] != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*(longlong *)param_1[0x57] + 0x30))(), cVar1 != '\0')))) ||
      ((((int)param_1[0x54] != 0 || ((*(byte *)(param_1 + 0x1c) & 1) == 0)) ||
       ((int)param_1[0x2a] <= (int)param_1[0x2b])))) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)(int)param_1[0x2b] >> 8),1), (int)param_1[0x4f] < 1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1478411a4 FUN_1478411a4 body=57 status=ok
// SIG undefined FUN_1478411a4(void)

bool FUN_1478411a4(longlong *param_1,uint param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x168))();
  if ((cVar1 == '\0') && (*(uint *)((longlong)param_1 + 0x284) <= param_2)) {
    bVar2 = param_3 <= *(uint *)(param_1 + 0x51);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 147841216 FUN_147841216 body=209 status=ok
// SIG undefined FUN_147841216(void)

void FUN_147841216(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af2e0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_147838e1e(&p_Var1->CriticalSection,param_3);
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Blink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af270;
  p_Var1->EntryCount = (int)param_2;
  p_Var1->ContentionCount = (int)((ulonglong)param_2 >> 0x20);
  *(code **)&p_Var1->Flags = FUN_14339aab2;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478412c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1478412e8 FUN_1478412e8 body=478 status=ok
// SIG undefined FUN_1478412e8(void)

undefined8 * FUN_1478412e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined **local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_14784052c(param_1,0xc,&local_40);
  *param_1 = &PTR_FUN_14a5ae848;
  local_58 = &PTR_FUN_14a5aeed0;
  local_50 = (undefined8 *)0x0;
  uStack_48 = 1;
  FUN_1447a1bd6(&local_50,0);
  puVar5 = local_50;
  *local_50 = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(local_50 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)local_50 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_50,iVar3,0);
    memcpy((void *)*puVar5,_Src,(longlong)iVar3 * 2);
  }
  FUN_14683a1b2(&local_58,local_68,1);
  plVar4 = (longlong *)param_1[2];
  FUN_140056680(local_78,&DAT_149f280e2);
  (**(code **)(*plVar4 + 0x60))(plVar4,local_78);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)param_1[2] + 0x90))((longlong *)param_1[2],local_68);
  plVar4 = (longlong *)param_1[2];
  FUN_140056680(local_78,L"application/json");
  FUN_140056680(local_88,L"Content-Type");
  (**(code **)(*plVar4 + 0xb0))(plVar4,local_88,local_78);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14783fd0a(&local_58);
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478414c8 FUN_1478414c8 body=144 status=ok
// SIG undefined FUN_1478414c8(void)

void FUN_1478414c8(longlong param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x300) == 0) && (*(int *)(param_1 + 0x2f8) < 1)) &&
     (*(char *)(param_1 + 0x262) == '\x01')) {
    QueryPerformanceCounter(&local_20);
    if (30.0 < ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 600)
       ) {
      FUN_14783fb84(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147841586 FUN_147841586 body=209 status=ok
// SIG undefined FUN_147841586(void)

void FUN_147841586(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af780;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_147839a2e(&p_Var1->CriticalSection,param_3);
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Blink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af710;
  p_Var1->EntryCount = (int)param_2;
  p_Var1->ContentionCount = (int)((ulonglong)param_2 >> 0x20);
  *(code **)&p_Var1->Flags = FUN_14339db9c;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147841634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 147841658 FUN_147841658 body=72 status=ok
// SIG undefined FUN_147841658(void)

void FUN_147841658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5aef70;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478416a0 FUN_1478416a0 body=56 status=ok
// SIG undefined FUN_1478416a0(void)

void FUN_1478416a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5aefd0;
  FUN_147842364(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478416d8 FUN_1478416d8 body=71 status=ok
// SIG undefined FUN_1478416d8(void)

void FUN_1478416d8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)*param_2 + 0xe8))();
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
                    /* WARNING: Could not recover jumptable at 0x000147841714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147841728 FUN_147841728 body=222 status=ok
// SIG undefined FUN_147841728(void)

longlong * FUN_147841728(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = FUN_14001cc68(0x3c0,0x10);
  FUN_14783f8d0(lVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a5af900;
  plVar6[2] = lVar5;
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
    FUN_147845574((longlong *)(param_1 + 0x10),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar5;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 == (longlong *)0x0) {
    *param_2 = lVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = lVar5;
    param_2[1] = (longlong)plVar6;
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
  return param_2;
}



// FUNCTION 14784180e FUN_14784180e body=38 status=ok
// SIG undefined FUN_14784180e(void)

undefined8 FUN_14784180e(undefined8 param_1,int param_2)

{
  FUN_14784570c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784183e FUN_14784183e body=89 status=ok
// SIG undefined FUN_14784183e(void)

undefined8 * FUN_14784183e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x210);
  _Src = *(void **)(param_1 + 0x208);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1478418be FUN_1478418be body=83 status=ok
// SIG undefined FUN_1478418be(void)

undefined8 * FUN_1478418be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5aef10;
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



// FUNCTION 147841912 FUN_147841912 body=38 status=ok
// SIG undefined FUN_147841912(void)

undefined8 FUN_147841912(undefined8 param_1,int param_2)

{
  FUN_147845a26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147841938 FUN_147841938 body=83 status=ok
// SIG undefined FUN_147841938(void)

undefined8 * FUN_147841938(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5aef10;
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



// FUNCTION 14784198c FUN_14784198c body=68 status=ok
// SIG undefined FUN_14784198c(void)

undefined8 * FUN_14784198c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5aec70;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478419d0 FUN_1478419d0 body=89 status=ok
// SIG undefined FUN_1478419d0(void)

undefined8 * FUN_1478419d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5af930;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 3)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147841a2a FUN_147841a2a body=91 status=ok
// SIG undefined FUN_147841a2a(void)

void FUN_147841a2a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_144893a1c(param_1 + 0x20,0);
  }
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x18)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar1 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 147841a86 FUN_147841a86 body=70 status=ok
// SIG undefined FUN_147841a86(void)

void FUN_147841a86(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_144893a1c(param_1 + 0x20,0);
  }
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x18)])(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 147841acc FUN_147841acc body=38 status=ok
// SIG undefined FUN_147841acc(void)

undefined8 FUN_147841acc(undefined8 param_1,int param_2)

{
  FUN_14783fd0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147841af2 FUN_147841af2 body=163 status=ok
// SIG undefined FUN_147841af2(void)

void FUN_147841af2(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_28 = L"users";
    local_20 = 5;
    (**(code **)(*param_2 + 0xa0))(param_2,&local_28,param_1 + 8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  else {
    local_28 = L"users";
    local_20 = 5;
    (**(code **)(*param_2 + 0xa0))(param_2,&local_28,param_1 + 8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147841b96 FUN_147841b96 body=83 status=ok
// SIG undefined FUN_147841b96(void)

undefined8 * FUN_147841b96(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5aef10;
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



// FUNCTION 147841bee FUN_147841bee body=57 status=ok
// SIG undefined FUN_147841bee(void)

undefined8 * FUN_147841bee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5aef20;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147841c28 FUN_147841c28 body=157 status=ok
// SIG undefined FUN_147841c28(void)

void FUN_147841c28(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_28 = L"sessionId";
    local_20 = 9;
    (**(code **)(*param_2 + 0x68))(param_2,&local_28,param_1 + 8);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  else {
    local_28 = L"sessionId";
    local_20 = 9;
    (**(code **)(*param_2 + 0x68))(param_2,&local_28,param_1 + 8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147841cc6 FUN_147841cc6 body=38 status=ok
// SIG undefined FUN_147841cc6(void)

undefined8 FUN_147841cc6(undefined8 param_1,int param_2)

{
  FUN_147841658();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147841cec FUN_147841cec body=271 status=ok
// SIG undefined FUN_147841cec(void)

void FUN_147841cec(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_38 = L"state";
  local_30 = 5;
  (**(code **)(*param_2 + 0x68))(param_2,&local_38,param_1 + 8);
  local_48 = L"numChunks";
  local_40 = 9;
  (**(code **)(*param_2 + 0x88))(param_2,&local_48,param_1 + 0x2c);
  local_58 = L"time";
  local_50 = 4;
  (**(code **)(*param_2 + 0x88))(param_2,&local_58,param_1 + 0x28);
  local_68 = L"viewerId";
  local_60 = 8;
  (**(code **)(*param_2 + 0x68))(param_2,&local_68,param_1 + 0x18);
  local_78 = L"meta";
  local_70 = 4;
  (**(code **)(*param_2 + 0x68))(param_2,&local_78,param_1 + 0x30);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147841dfc FUN_147841dfc body=38 status=ok
// SIG undefined FUN_147841dfc(void)

undefined8 FUN_147841dfc(undefined8 param_1,int param_2)

{
  FUN_1478416a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147841e22 FUN_147841e22 body=501 status=ok
// SIG undefined FUN_147841e22(void)

void FUN_147841e22(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_80;
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  cVar3 = (**(code **)*param_2)(param_2);
  if (cVar3 == '\0') {
    local_98 = L"replays";
    local_90 = 7;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar8) + 0x28))
                  (*(longlong *)(param_1 + 8) + lVar8,param_2,0);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x58;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0xf0))(param_2,&local_68);
    local_58 = L"replays";
    local_50 = 7;
    cVar3 = FUN_146843260(local_68,&local_58,5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    if (cVar3 != '\0') {
      (**(code **)(*param_2 + 0xf0))(param_2,&local_58);
      local_78 = L"replays";
      local_70 = 7;
      plVar4 = (longlong *)FUN_14571608c(local_58);
      plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
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
      if (0 < (int)plVar4[1]) {
        lVar8 = 0;
        iVar7 = 0;
        do {
          plVar5 = (longlong *)FUN_147842018(param_1 + 8);
          puVar6 = (undefined8 *)(**(code **)**(undefined8 **)(*plVar4 + lVar8))();
          local_88 = *puVar6;
          local_80 = puVar6[1];
          if (local_80 != 0) {
            LOCK();
            *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_88);
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (iVar7 < (int)plVar4[1]);
      }
    }
  }
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147842018 FUN_147842018 body=59 status=ok
// SIG undefined FUN_147842018(void)

longlong FUN_147842018(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147842084(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_147842053(lVar2);
  return lVar2;
}



// FUNCTION 147842053 FUN_147842053 body=49 status=ok
// SIG undefined FUN_147842053(void)

void FUN_147842053(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5af010;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  return;
}



// FUNCTION 147842084 FUN_147842084 body=143 status=ok
// SIG undefined FUN_147842084(void)

void FUN_147842084(longlong param_1,int param_2)

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



// FUNCTION 147842114 FUN_147842114 body=38 status=ok
// SIG undefined FUN_147842114(void)

undefined8 FUN_147842114(undefined8 param_1,int param_2)

{
  FUN_14784231c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784213a FUN_14784213a body=481 status=ok
// SIG undefined FUN_14784213a(void)

void FUN_14784213a(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_48 = L"AppName";
  local_40 = 7;
  (**(code **)(*param_2 + 0x68))(param_2,&local_48,param_1 + 8);
  local_58 = L"SessionName";
  local_50 = 0xb;
  (**(code **)(*param_2 + 0x68))(param_2,&local_58,param_1 + 0x18);
  local_68 = L"FriendlyName";
  local_60 = 0xc;
  (**(code **)(*param_2 + 0x68))(param_2,&local_68,param_1 + 0x28);
  local_78 = L"Timestamp";
  local_70 = 9;
  (**(code **)(*param_2 + 0x48))(param_2,&local_78,param_1 + 0x38);
  local_88 = L"SizeInBytes";
  local_80 = 0xb;
  (**(code **)(*param_2 + 0x88))(param_2,&local_88,param_1 + 0x40);
  local_98 = L"DemoTimeInMs";
  local_90 = 0xc;
  (**(code **)(*param_2 + 0x88))(param_2,&local_98,param_1 + 0x44);
  local_a8 = L"NumViewers";
  local_a0 = 10;
  (**(code **)(*param_2 + 0x88))(param_2,&local_a8,param_1 + 0x48);
  local_b8 = L"bIsLive";
  local_b0 = 7;
  (**(code **)(*param_2 + 0x70))(param_2,&local_b8,param_1 + 0x4c);
  local_c8 = L"Changelist";
  local_c0 = 10;
  (**(code **)(*param_2 + 0x88))(param_2,&local_c8,param_1 + 0x50);
  local_d8 = L"shouldKeep";
  local_d0 = 10;
  (**(code **)(*param_2 + 0x70))(param_2,&local_d8,param_1 + 0x54);
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784231c FUN_14784231c body=72 status=ok
// SIG undefined FUN_14784231c(void)

void FUN_14784231c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5af010;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147842364 FUN_147842364 body=38 status=ok
// SIG undefined FUN_147842364(void)

void FUN_147842364(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14784231c(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 14784238a FUN_14784238a body=29 status=ok
// SIG undefined FUN_14784238a(void)

undefined8 FUN_14784238a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478423c4 FUN_1478423c4 body=93 status=ok
// SIG undefined FUN_1478423c4(void)

void FUN_1478423c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5af0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147842422 FUN_147842422 body=93 status=ok
// SIG undefined FUN_147842422(void)

void FUN_147842422(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5af0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147842480 FUN_147842480 body=126 status=ok
// SIG undefined FUN_147842480(void)

void FUN_147842480(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af0e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478424ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478424fe FUN_1478424fe body=193 status=ok
// SIG undefined FUN_1478424fe(void)

void FUN_1478424fe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(uVar3);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478425c0 FUN_1478425c0 body=195 status=ok
// SIG undefined FUN_1478425c0(void)

undefined8 FUN_1478425c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_28 = *param_3;
  local_20 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(uVar3);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784269c FUN_14784269c body=29 status=ok
// SIG undefined FUN_14784269c(void)

undefined8 FUN_14784269c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478426ba FUN_1478426ba body=132 status=ok
// SIG undefined FUN_1478426ba(void)

void FUN_1478426ba(longlong param_1,int param_2)

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



// FUNCTION 147842740 FUN_147842740 body=371 status=ok
// SIG undefined FUN_147842740(void)

undefined4 * FUN_147842740(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478428b4(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  local_40[3] = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  local_40[4] = puVar2[2];
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_1478429a2(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x2c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147842bf6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1478428b4 FUN_1478428b4 body=238 status=ok
// SIG undefined FUN_1478428b4(void)

int * FUN_1478428b4(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1478429a2 FUN_1478429a2 body=124 status=ok
// SIG undefined FUN_1478429a2(void)

undefined8 FUN_1478429a2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_147842a1e(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    FUN_147842b68(lVar2 + lVar12);
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147842aee(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 147842a1e FUN_147842a1e body=207 status=ok
// SIG undefined FUN_147842a1e(void)

int FUN_147842a1e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_147842a68:
      lVar10 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_147842ae2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_147842ae2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147842ad3;
    }
  }
  return -1;
LAB_147842ae2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_147842ad3:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147842a68;
}



// FUNCTION 147842aee FUN_147842aee body=122 status=ok
// SIG undefined FUN_147842aee(void)

void FUN_147842aee(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 147842b68 FUN_147842b68 body=74 status=ok
// SIG undefined FUN_147842b68(void)

void FUN_147842b68(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147842bb2 FUN_147842bb2 body=68 status=ok
// SIG undefined FUN_147842bb2(void)

void FUN_147842bb2(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147842bf6(param_1);
  return;
}



// FUNCTION 147842bf6 FUN_147842bf6 body=480 status=ok
// SIG undefined FUN_147842bf6(void)

void FUN_147842bf6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
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
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x30;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147842dd8 FUN_147842dd8 body=257 status=ok
// SIG undefined FUN_147842dd8(void)

void FUN_147842dd8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_147842e4e:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x30);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x30);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_147842ec1;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_147842ec1;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_147842ec7;
      }
      if (iVar2 + iVar1 == 1) goto LAB_147842ec7;
      goto LAB_147842eb3;
    }
  }
  return;
LAB_147842ec1:
  if (uVar7 == uVar6) {
LAB_147842ec7:
    FUN_147842eda(param_1);
    return;
  }
LAB_147842eb3:
  iVar2 = (int)plVar3[5];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_147842e4e;
}



// FUNCTION 147842eda FUN_147842eda body=121 status=ok
// SIG undefined FUN_147842eda(void)

void FUN_147842eda(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x30;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x2c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x28 + lVar6 * 0x30);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x28);
  FUN_147842b68(lVar3 + *param_1);
  FUN_147842aee(param_1,param_2);
  return;
}



// FUNCTION 147842f6c FUN_147842f6c body=29 status=ok
// SIG undefined FUN_147842f6c(void)

undefined8 FUN_147842f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147842f8a FUN_147842f8a body=130 status=ok
// SIG undefined FUN_147842f8a(void)

void FUN_147842f8a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784301c FUN_14784301c body=95 status=ok
// SIG undefined FUN_14784301c(void)

undefined8 * FUN_14784301c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147830eab(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14784307c(param_1,iVar1);
      FUN_1478430de(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14784307c FUN_14784307c body=98 status=ok
// SIG undefined FUN_14784307c(void)

void FUN_14784307c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478430de FUN_1478430de body=52 status=ok
// SIG undefined FUN_1478430de(void)

void FUN_1478430de(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478318b2(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 147843112 FUN_147843112 body=52 status=ok
// SIG undefined FUN_147843112(void)

undefined8 * FUN_147843112(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5af2e0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784316e FUN_14784316e body=121 status=ok
// SIG undefined FUN_14784316e(void)

void FUN_14784316e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af2e0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147838e1e(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af270;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 1478431e8 FUN_1478431e8 body=121 status=ok
// SIG undefined FUN_1478431e8(void)

void FUN_1478431e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af2e0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147838e1e(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af270;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 147843262 FUN_147843262 body=157 status=ok
// SIG undefined FUN_147843262(void)

void FUN_147843262(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af2e0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_147838e1e(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af270;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478432ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147843300 FUN_147843300 body=250 status=ok
// SIG undefined FUN_147843300(void)

void FUN_147843300(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_147838e1e(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478433fc FUN_1478433fc body=252 status=ok
// SIG undefined FUN_1478433fc(void)

undefined8
FUN_1478433fc(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_147838e1e(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478434fc FUN_1478434fc body=52 status=ok
// SIG undefined FUN_1478434fc(void)

undefined8 * FUN_1478434fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5af3c0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147843558 FUN_147843558 body=121 status=ok
// SIG undefined FUN_147843558(void)

void FUN_147843558(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af3c0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14783a4ec(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af350;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 1478435d2 FUN_1478435d2 body=121 status=ok
// SIG undefined FUN_1478435d2(void)

void FUN_1478435d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af3c0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14783a4ec(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af350;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14784364c FUN_14784364c body=157 status=ok
// SIG undefined FUN_14784364c(void)

void FUN_14784364c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af3c0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14783a4ec(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af350;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478436d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478436ea FUN_1478436ea body=250 status=ok
// SIG undefined FUN_1478436ea(void)

void FUN_1478436ea(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_14783a4ec(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478437e6 FUN_1478437e6 body=252 status=ok
// SIG undefined FUN_1478437e6(void)

undefined8
FUN_1478437e6(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_14783a4ec(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478438fe FUN_1478438fe body=29 status=ok
// SIG undefined FUN_1478438fe(void)

undefined8 FUN_1478438fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784391c FUN_14784391c body=52 status=ok
// SIG undefined FUN_14784391c(void)

undefined8 * FUN_14784391c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5af4c0;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147843978 FUN_147843978 body=121 status=ok
// SIG undefined FUN_147843978(void)

void FUN_147843978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af4c0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14783df50(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af450;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 1478439f2 FUN_1478439f2 body=121 status=ok
// SIG undefined FUN_1478439f2(void)

void FUN_1478439f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af4c0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14783df50(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af450;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 147843a6c FUN_147843a6c body=157 status=ok
// SIG undefined FUN_147843a6c(void)

void FUN_147843a6c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af4c0;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_14783df50(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af450;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147843af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147843b0a FUN_147843b0a body=250 status=ok
// SIG undefined FUN_147843b0a(void)

void FUN_147843b0a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_14783df50(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147843c06 FUN_147843c06 body=252 status=ok
// SIG undefined FUN_147843c06(void)

undefined8
FUN_147843c06(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_14783df50(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147843d06 FUN_147843d06 body=97 status=ok
// SIG undefined FUN_147843d06(void)

void FUN_147843d06(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar4 = 0;
  }
  else {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 147843d68 FUN_147843d68 body=62 status=ok
// SIG undefined FUN_147843d68(void)

void FUN_147843d68(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147843da6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147843da6 FUN_147843da6 body=93 status=ok
// SIG undefined FUN_147843da6(void)

ulonglong FUN_147843da6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 147843e04 FUN_147843e04 body=29 status=ok
// SIG undefined FUN_147843e04(void)

undefined8 FUN_147843e04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147843e4a FUN_147843e4a body=93 status=ok
// SIG undefined FUN_147843e4a(void)

void FUN_147843e4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af5a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5af530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147843ea8 FUN_147843ea8 body=93 status=ok
// SIG undefined FUN_147843ea8(void)

void FUN_147843ea8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af5a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5af530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147843f06 FUN_147843f06 body=126 status=ok
// SIG undefined FUN_147843f06(void)

void FUN_147843f06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af5a0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147843f75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147843f84 FUN_147843f84 body=211 status=ok
// SIG undefined FUN_147843f84(void)

void FUN_147843f84(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_50 = *(undefined1 *)(param_1 + 0xc);
  local_58 = *(undefined4 *)(param_1 + 8);
  local_30 = *param_3;
  local_28 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_40 = *param_2;
  local_38 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(uVar3);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147844058 FUN_147844058 body=213 status=ok
// SIG undefined FUN_147844058(void)

undefined8 FUN_147844058(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  local_50 = *(undefined1 *)(param_1 + 0xc);
  local_58 = *(undefined4 *)(param_1 + 8);
  local_30 = *param_3;
  local_28 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_40 = *param_2;
  local_38 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(uVar3);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147844130 FUN_147844130 body=66 status=ok
// SIG undefined FUN_147844130(void)

undefined8 * FUN_147844130(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5af680;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784419a FUN_14784419a body=106 status=ok
// SIG undefined FUN_14784419a(void)

void FUN_14784419a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af680;
  FUN_1478444f0(puVar1 + 1,param_1 + 8);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a5af610;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  return;
}



// FUNCTION 147844204 FUN_147844204 body=106 status=ok
// SIG undefined FUN_147844204(void)

void FUN_147844204(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af680;
  FUN_1478444f0(puVar1 + 1,param_1 + 8);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14a5af610;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  return;
}



// FUNCTION 14784426e FUN_14784426e body=142 status=ok
// SIG undefined FUN_14784426e(void)

void FUN_14784426e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af680;
  FUN_1478444f0(&p_Var1->CriticalSection,param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af610;
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar4;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar5;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar6;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478442ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478442fc FUN_1478442fc body=188 status=ok
// SIG undefined FUN_1478442fc(void)

void FUN_1478442fc(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_19;
  local_28 = *(undefined8 *)(param_1 + 0x30);
  local_38 = param_3;
  local_19 = param_4;
  FUN_14784455c(param_1 + 8,param_1 + 0x38,&local_28,param_2);
  plVar3 = *(longlong **)(param_2 + 8);
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
  puVar4 = *(undefined8 **)(param_3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478443ca FUN_1478443ca body=183 status=ok
// SIG undefined FUN_1478443ca(void)

undefined8 FUN_1478443ca(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_19;
  local_28 = *(undefined8 *)(param_1 + 0x30);
  local_38 = param_3;
  local_19 = param_4;
  FUN_14784455c(param_1 + 8,param_1 + 0x38,&local_28,param_2);
  plVar3 = *(longlong **)(param_2 + 8);
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
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147844484 FUN_147844484 body=107 status=ok
// SIG undefined FUN_147844484(void)

undefined8 * FUN_147844484(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14783bab8();
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1478444f0 FUN_1478444f0 body=108 status=ok
// SIG undefined FUN_1478444f0(void)

undefined8 * FUN_1478444f0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14783bab8();
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  _Src = *(void **)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14784455c FUN_14784455c body=285 status=ok
// SIG undefined FUN_14784455c(void)

void FUN_14784455c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  void *_Src;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar2 = (code *)*param_2;
  uVar3 = *param_3;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x18);
  lVar4 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0x10);
  if (lVar4 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar4 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  FUN_14783bab8(&local_68,param_1);
  uVar1 = *param_6;
  local_78 = *param_5;
  local_70 = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  local_88 = *param_4;
  local_80 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  local_90 = &local_58;
  local_98 = &local_68;
  (*pcVar2)(uVar3,&local_88,&local_78,uVar1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784467a FUN_14784467a body=73 status=ok
// SIG undefined FUN_14784467a(void)

void FUN_14784467a(longlong param_1,int param_2)

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



// FUNCTION 1478446c4 FUN_1478446c4 body=48 status=ok
// SIG undefined FUN_1478446c4(void)

void FUN_1478446c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14784470c FUN_14784470c body=29 status=ok
// SIG undefined FUN_14784470c(void)

undefined8 FUN_14784470c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784472a FUN_14784472a body=52 status=ok
// SIG undefined FUN_14784472a(void)

undefined8 * FUN_14784472a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a5af780;
  FUN_1449db362(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147844786 FUN_147844786 body=121 status=ok
// SIG undefined FUN_147844786(void)

void FUN_147844786(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af780;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147839a2e(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af710;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 147844800 FUN_147844800 body=121 status=ok
// SIG undefined FUN_147844800(void)

void FUN_147844800(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5af780;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_147839a2e(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a5af710;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  return;
}



// FUNCTION 14784487a FUN_14784487a body=157 status=ok
// SIG undefined FUN_14784487a(void)

void FUN_14784487a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5af780;
  p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = 0;
  FUN_147839a2e(&p_Var1->CriticalSection,param_1 + 8);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af710;
  DVar2 = *(DWORD *)(param_1 + 0x24);
  DVar3 = *(DWORD *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->ContentionCount = DVar2;
  p_Var1->Flags = DVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar4;
  p_Var1->SpareWORD = (short)((uint)uVar4 >> 0x10);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147844907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147844918 FUN_147844918 body=250 status=ok
// SIG undefined FUN_147844918(void)

void FUN_147844918(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_147839a2e(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147844a14 FUN_147844a14 body=252 status=ok
// SIG undefined FUN_147844a14(void)

undefined8
FUN_147844a14(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  pcVar4 = *(code **)(param_1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  FUN_147839a2e(&local_48,param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = &local_48;
  (*pcVar4)(uVar3,&local_68,&local_58,param_4);
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147844b14 FUN_147844b14 body=48 status=ok
// SIG undefined FUN_147844b14(void)

void FUN_147844b14(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147844b44 FUN_147844b44 body=1059 status=ok
// SIG undefined FUN_147844b44(void)

void FUN_147844b44(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  float fVar30;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined4 local_378 [188];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_378,0,0x2f0);
    local_380 = (ulonglong)param_2 * 0x40 + param_1 + -0x40;
    local_388 = param_1;
    fVar30 = logf((float)(int)param_2);
    local_378[0] = (int)(longlong)(fVar30 + fVar30);
    plVar23 = &local_388;
    do {
      puVar17 = (undefined8 *)*plVar23;
      puVar24 = (undefined8 *)plVar23[1];
      iVar26 = (int)plVar23[2];
      iVar19 = (int)((ulonglong)((longlong)puVar24 - (longlong)puVar17) >> 6);
      puVar27 = puVar24;
      puVar28 = puVar17;
      if (iVar26 != 0) {
LAB_147844c08:
        if (8 < (int)(iVar19 + 1U)) {
          uVar20 = (ulonglong)(iVar19 + 1U >> 1);
          uVar1 = puVar17[uVar20 * 8];
          uVar2 = (puVar17 + uVar20 * 8)[1];
          uVar3 = puVar17[uVar20 * 8 + 2];
          uVar4 = (puVar17 + uVar20 * 8 + 2)[1];
          uVar5 = puVar17[uVar20 * 8 + 4];
          uVar6 = (puVar17 + uVar20 * 8 + 4)[1];
          uVar7 = puVar17[uVar20 * 8 + 6];
          uVar8 = (puVar17 + uVar20 * 8 + 6)[1];
          uVar9 = *puVar17;
          uVar10 = puVar17[1];
          uVar11 = puVar17[2];
          uVar12 = puVar17[3];
          uVar13 = puVar17[4];
          uVar14 = puVar17[5];
          uVar15 = puVar17[7];
          puVar17[uVar20 * 8 + 6] = puVar17[6];
          (puVar17 + uVar20 * 8 + 6)[1] = uVar15;
          puVar17[uVar20 * 8 + 4] = uVar13;
          (puVar17 + uVar20 * 8 + 4)[1] = uVar14;
          puVar17[uVar20 * 8 + 2] = uVar11;
          (puVar17 + uVar20 * 8 + 2)[1] = uVar12;
          puVar17[uVar20 * 8] = uVar9;
          (puVar17 + uVar20 * 8)[1] = uVar10;
          puVar17[6] = uVar7;
          puVar17[7] = uVar8;
          puVar17[4] = uVar5;
          puVar17[5] = uVar6;
          puVar17[2] = uVar3;
          puVar17[3] = uVar4;
          *puVar17 = uVar1;
          puVar17[1] = uVar2;
          puVar21 = puVar24 + 8;
          puVar18 = puVar17;
          do {
            puVar16 = puVar18 + 8;
            puVar25 = puVar18 + 8;
            do {
              puVar18 = puVar25;
              puVar22 = puVar16;
              if (puVar24 < puVar18) break;
              puVar16 = puVar22 + 8;
              puVar25 = puVar18 + 8;
            } while (*(uint *)(puVar18 + 7) <= *(uint *)(puVar17 + 7));
            puVar16 = puVar21 + -0x10;
            do {
              puVar25 = puVar21;
              puVar29 = puVar16;
              puVar21 = puVar25 + -8;
              if (puVar21 <= puVar17) break;
              puVar16 = puVar29 + -8;
            } while (*(uint *)(puVar17 + 7) <= *(uint *)(puVar25 + -1));
            if (puVar21 < puVar18) goto LAB_147844d77;
            uVar1 = *puVar18;
            uVar2 = puVar18[1];
            uVar3 = puVar18[2];
            uVar4 = puVar18[3];
            uVar5 = puVar18[4];
            uVar6 = puVar18[5];
            uVar7 = puVar18[6];
            uVar8 = puVar18[7];
            uVar9 = *puVar21;
            uVar10 = puVar25[-7];
            uVar11 = puVar25[-6];
            uVar12 = puVar25[-5];
            uVar13 = puVar25[-4];
            uVar14 = puVar25[-3];
            uVar15 = puVar25[-1];
            puVar18[6] = puVar25[-2];
            puVar18[7] = uVar15;
            puVar18[4] = uVar13;
            puVar18[5] = uVar14;
            puVar18[2] = uVar11;
            puVar18[3] = uVar12;
            *puVar18 = uVar9;
            puVar18[1] = uVar10;
            puVar25[-2] = uVar7;
            puVar25[-1] = uVar8;
            puVar25[-4] = uVar5;
            puVar25[-3] = uVar6;
            puVar25[-6] = uVar3;
            puVar25[-5] = uVar4;
            *puVar21 = uVar1;
            puVar25[-7] = uVar2;
          } while( true );
        }
        for (; puVar28 = puVar17, puVar27 = puVar17, puVar17 < puVar24; puVar24 = puVar24 + -8) {
          while (puVar21 = puVar28, puVar27 = puVar27 + 8, puVar27 <= puVar24) {
            puVar28 = puVar27;
            if (*(uint *)(puVar27 + 7) <= *(uint *)(puVar21 + 7)) {
              puVar28 = puVar21;
            }
          }
          local_88 = *puVar21;
          uStack_80 = puVar21[1];
          local_78 = puVar21[2];
          uStack_70 = puVar21[3];
          local_68 = puVar21[4];
          uStack_60 = puVar21[5];
          local_58 = puVar21[6];
          uStack_50 = puVar21[7];
          uVar8 = local_88;
          uVar9 = uStack_80;
          uVar1 = *puVar24;
          uVar2 = puVar24[1];
          uVar3 = puVar24[2];
          uVar4 = puVar24[3];
          uVar5 = puVar24[4];
          uVar6 = puVar24[5];
          uVar7 = puVar24[7];
          puVar21[6] = puVar24[6];
          puVar21[7] = uVar7;
          puVar21[4] = uVar5;
          puVar21[5] = uVar6;
          puVar21[2] = uVar3;
          puVar21[3] = uVar4;
          *puVar21 = uVar1;
          puVar21[1] = uVar2;
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          puVar24[6] = local_58;
          puVar24[7] = uStack_50;
          puVar24[4] = local_68;
          puVar24[5] = uStack_60;
          puVar24[2] = local_78;
          puVar24[3] = uStack_70;
          *(undefined4 *)puVar24 = (undefined4)local_88;
          *(undefined4 *)((longlong)puVar24 + 4) = local_88._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_80._4_4_;
          local_88 = uVar8;
          uStack_80 = uVar9;
        }
        goto LAB_147844f46;
      }
LAB_147844f5b:
      FUN_147844f68(puVar17);
LAB_147844f46:
      plVar23 = plVar23 + -3;
    } while (&local_388 <= plVar23);
  }
  if ((local_40 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147844d77:
  local_88 = *puVar17;
  uStack_80 = puVar17[1];
  local_78 = puVar17[2];
  uStack_70 = puVar17[3];
  local_68 = puVar17[4];
  uStack_60 = puVar17[5];
  local_58 = puVar17[6];
  uStack_50 = puVar17[7];
  uVar8 = local_88;
  uVar9 = uStack_80;
  uVar1 = *puVar21;
  uVar2 = puVar25[-7];
  uVar3 = puVar25[-6];
  uVar4 = puVar25[-5];
  uVar5 = puVar25[-4];
  uVar6 = puVar25[-3];
  uVar7 = puVar25[-1];
  puVar17[6] = puVar25[-2];
  puVar17[7] = uVar7;
  puVar17[4] = uVar5;
  puVar17[5] = uVar6;
  puVar17[2] = uVar3;
  puVar17[3] = uVar4;
  *puVar17 = uVar1;
  puVar17[1] = uVar2;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  puVar25[-2] = local_58;
  puVar25[-1] = uStack_50;
  puVar25[-4] = local_68;
  puVar25[-3] = uStack_60;
  puVar25[-6] = local_78;
  puVar25[-5] = uStack_70;
  *(undefined4 *)puVar21 = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar25 + -0x3c) = local_88._4_4_;
  *(undefined4 *)(puVar25 + -7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar25 + -0x34) = uStack_80._4_4_;
  iVar26 = iVar26 + -1;
  puVar25 = puVar25 + -0x10;
  local_88 = uVar8;
  uStack_80 = uVar9;
  if ((longlong)puVar29 - (longlong)puVar28 < (longlong)puVar27 - (longlong)puVar22) {
    if (puVar18 < puVar24) {
      *plVar23 = (longlong)puVar18;
      plVar23[1] = (longlong)puVar24;
      *(int *)(plVar23 + 2) = iVar26;
      plVar23 = plVar23 + 3;
    }
    puVar22 = puVar17;
    if (puVar21 <= puVar17 + 8) goto LAB_147844f46;
  }
  else {
    if (puVar17 + 8 < puVar21) {
      *plVar23 = (longlong)puVar17;
      plVar23[1] = (longlong)puVar25;
      *(int *)(plVar23 + 2) = iVar26;
      plVar23 = plVar23 + 3;
    }
    puVar17 = puVar18;
    puVar25 = puVar24;
    puVar29 = puVar24;
    if (puVar24 <= puVar18) goto LAB_147844f46;
  }
  iVar19 = (int)((ulonglong)((longlong)puVar29 - (longlong)puVar22) >> 6);
  puVar24 = puVar25;
  puVar27 = puVar29;
  puVar28 = puVar22;
  if (iVar26 == 0) goto LAB_147844f5b;
  goto LAB_147844c08;
}



// FUNCTION 147844f68 FUN_147844f68 body=843 status=ok
// SIG undefined FUN_147844f68(void)

void FUN_147844f68(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  undefined8 *puVar23;
  bool bVar24;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar17 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar22 = iVar17;
joined_r0x000147844fa5:
    do {
      iVar19 = iVar17 * 2 + 1;
      if (iVar19 < (int)param_2) {
        iVar21 = iVar17 * 2 + 2;
        if ((iVar21 < (int)param_2) &&
           (*(uint *)(param_1 + (longlong)iVar19 * 8 + 7) <=
            *(uint *)(param_1 + (longlong)iVar21 * 8 + 7))) {
          iVar19 = iVar21;
        }
        if (*(uint *)(param_1 + (longlong)iVar17 * 8 + 7) <
            *(uint *)(param_1 + (longlong)iVar19 * 8 + 7)) {
          puVar23 = param_1 + (longlong)iVar17 * 8;
          puVar20 = param_1 + (longlong)iVar19 * 8;
          uVar2 = *puVar23;
          uVar3 = puVar23[1];
          uVar4 = puVar23[2];
          uVar5 = puVar23[3];
          uVar6 = puVar23[4];
          uVar7 = puVar23[5];
          uVar8 = puVar23[6];
          uVar9 = puVar23[7];
          uVar10 = *puVar20;
          uVar11 = puVar20[1];
          uVar12 = puVar20[2];
          uVar13 = puVar20[3];
          uVar14 = puVar20[4];
          uVar15 = puVar20[5];
          uVar16 = puVar20[7];
          puVar23[6] = puVar20[6];
          puVar23[7] = uVar16;
          puVar23[4] = uVar14;
          puVar23[5] = uVar15;
          puVar23[2] = uVar12;
          puVar23[3] = uVar13;
          *puVar23 = uVar10;
          puVar23[1] = uVar11;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(puVar20 + 6) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar20 + 0x34) = local_28._4_4_;
          *(undefined4 *)(puVar20 + 7) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar20 + 0x3c) = uStack_20._4_4_;
          *(undefined4 *)(puVar20 + 4) = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar20 + 0x24) = local_38._4_4_;
          *(undefined4 *)(puVar20 + 5) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar20 + 0x2c) = uStack_30._4_4_;
          *(undefined4 *)(puVar20 + 2) = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar20 + 0x14) = local_48._4_4_;
          *(undefined4 *)(puVar20 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar20 + 0x1c) = uStack_40._4_4_;
          *(undefined4 *)puVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
          local_58 = uVar2;
          uStack_50 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
          iVar17 = iVar19;
          goto joined_r0x000147844fa5;
        }
      }
      bVar24 = iVar22 != 0;
      iVar17 = iVar22 + -1;
      iVar22 = iVar17;
    } while (bVar24);
    if (1 < (int)param_2) {
      uVar18 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[4];
      uVar7 = param_1[5];
      uVar8 = param_1[6];
      uVar9 = param_1[7];
      uVar10 = param_1[uVar18 * 8];
      uVar11 = (param_1 + uVar18 * 8)[1];
      uVar12 = param_1[uVar18 * 8 + 2];
      uVar13 = (param_1 + uVar18 * 8 + 2)[1];
      uVar14 = param_1[uVar18 * 8 + 4];
      uVar15 = (param_1 + uVar18 * 8 + 4)[1];
      uVar16 = (param_1 + uVar18 * 8 + 6)[1];
      param_1[6] = param_1[uVar18 * 8 + 6];
      param_1[7] = uVar16;
      param_1[4] = uVar14;
      param_1[5] = uVar15;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      *param_1 = uVar10;
      param_1[1] = uVar11;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_28._0_4_ = (undefined4)uVar8;
      local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar9;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      puVar20 = param_1 + uVar18 * 8 + 6;
      *(undefined4 *)puVar20 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar20 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_20._4_4_;
      puVar20 = param_1 + uVar18 * 8 + 4;
      *(undefined4 *)puVar20 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar20 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_30._4_4_;
      puVar20 = param_1 + uVar18 * 8 + 2;
      *(undefined4 *)puVar20 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar20 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_40._4_4_;
      puVar20 = param_1 + uVar18 * 8;
      *(undefined4 *)puVar20 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      local_48 = uVar4;
      uStack_40 = uVar5;
      local_38 = uVar6;
      uStack_30 = uVar7;
      local_28 = uVar8;
      uStack_20 = uVar9;
      if (param_2 != 2) {
        do {
          iVar17 = 0;
          iVar19 = 1;
          iVar22 = 0;
          do {
            iVar17 = iVar17 + 2;
            iVar21 = iVar19;
            if (((longlong)iVar17 < (longlong)uVar18) &&
               (*(uint *)(param_1 + (longlong)iVar19 * 8 + 7) <=
                *(uint *)(param_1 + (longlong)iVar17 * 8 + 7))) {
              iVar21 = iVar17;
            }
            if (*(uint *)(param_1 + (longlong)iVar21 * 8 + 7) <=
                *(uint *)(param_1 + (longlong)iVar22 * 8 + 7)) break;
            puVar23 = param_1 + (longlong)iVar22 * 8;
            puVar20 = param_1 + (longlong)iVar21 * 8;
            uVar2 = *puVar23;
            uVar3 = puVar23[1];
            uVar4 = puVar23[2];
            uVar5 = puVar23[3];
            uVar6 = puVar23[4];
            uVar7 = puVar23[5];
            uVar8 = puVar23[6];
            uVar9 = puVar23[7];
            uVar10 = *puVar20;
            uVar11 = puVar20[1];
            uVar12 = puVar20[2];
            uVar13 = puVar20[3];
            uVar14 = puVar20[4];
            uVar15 = puVar20[5];
            uVar16 = puVar20[7];
            puVar23[6] = puVar20[6];
            puVar23[7] = uVar16;
            puVar23[4] = uVar14;
            puVar23[5] = uVar15;
            puVar23[2] = uVar12;
            puVar23[3] = uVar13;
            *puVar23 = uVar10;
            puVar23[1] = uVar11;
            puVar20[6] = uVar8;
            puVar20[7] = uVar9;
            puVar20[4] = uVar6;
            puVar20[5] = uVar7;
            puVar20[2] = uVar4;
            puVar20[3] = uVar5;
            *puVar20 = uVar2;
            puVar20[1] = uVar3;
            iVar17 = iVar21 * 2;
            iVar19 = iVar21 * 2 + 1;
            iVar22 = iVar21;
          } while ((longlong)iVar19 < (longlong)uVar18);
          uVar1 = uVar18 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[4];
          uVar7 = param_1[5];
          uVar8 = param_1[6];
          uVar9 = param_1[7];
          uVar10 = param_1[uVar1 * 8];
          uVar11 = (param_1 + uVar1 * 8)[1];
          uVar12 = param_1[uVar1 * 8 + 2];
          uVar13 = (param_1 + uVar1 * 8 + 2)[1];
          uVar14 = param_1[uVar1 * 8 + 4];
          uVar15 = (param_1 + uVar1 * 8 + 4)[1];
          uVar16 = (param_1 + uVar1 * 8 + 6)[1];
          param_1[6] = param_1[uVar1 * 8 + 6];
          param_1[7] = uVar16;
          param_1[4] = uVar14;
          param_1[5] = uVar15;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          *param_1 = uVar10;
          param_1[1] = uVar11;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_38._0_4_ = (undefined4)uVar6;
          local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar7;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_28._0_4_ = (undefined4)uVar8;
          local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar9;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
          puVar20 = param_1 + uVar1 * 8 + 6;
          *(undefined4 *)puVar20 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar20 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_20._4_4_;
          puVar20 = param_1 + uVar1 * 8 + 4;
          *(undefined4 *)puVar20 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar20 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_30._4_4_;
          puVar20 = param_1 + uVar1 * 8 + 2;
          *(undefined4 *)puVar20 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar20 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_40._4_4_;
          puVar20 = param_1 + uVar1 * 8;
          *(undefined4 *)puVar20 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
          bVar24 = 2 < uVar18;
          uVar18 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
          local_38 = uVar6;
          uStack_30 = uVar7;
          local_28 = uVar8;
          uStack_20 = uVar9;
        } while (bVar24);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478452b4 FUN_1478452b4 body=96 status=ok
// SIG undefined FUN_1478452b4(void)

undefined8 * FUN_1478452b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_LAB_14a5adc10;
  FUN_1409e1656(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a5af860;
  puVar1[1] = &PTR_FUN_14a5af8b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return puVar1;
}



// FUNCTION 147845314 FUN_147845314 body=31 status=ok
// SIG undefined FUN_147845314(void)

undefined8 FUN_147845314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147845350 FUN_147845350 body=93 status=ok
// SIG undefined FUN_147845350(void)

void FUN_147845350(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5af7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1478453ae FUN_1478453ae body=126 status=ok
// SIG undefined FUN_1478453ae(void)

void FUN_1478453ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5af7f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014784541d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147845438 FUN_147845438 body=21 status=ok
// SIG undefined FUN_147845438(void)

undefined8 FUN_147845438(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14784544e FUN_14784544e body=38 status=ok
// SIG undefined FUN_14784544e(void)

undefined8 FUN_14784544e(undefined8 param_1,int param_2)

{
  FUN_1478454aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147845478 FUN_147845478 body=45 status=ok
// SIG undefined FUN_147845478(void)

longlong FUN_147845478(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1478454aa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478454aa FUN_1478454aa body=74 status=ok
// SIG undefined FUN_1478454aa(void)

void FUN_1478454aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5af860;
  param_1[1] = &PTR_FUN_14a5af8b0;
  FUN_1478454f4(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 1);
  return;
}



// FUNCTION 1478454f4 FUN_1478454f4 body=73 status=ok
// SIG undefined FUN_1478454f4(void)

void FUN_1478454f4(longlong param_1,int param_2)

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



// FUNCTION 14784553e FUN_14784553e body=24 status=ok
// SIG undefined FUN_14784553e(void)

void FUN_14784553e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147845552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 147845556 FUN_147845556 body=29 status=ok
// SIG undefined FUN_147845556(void)

undefined8 FUN_147845556(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147845574 FUN_147845574 body=132 status=ok
// SIG undefined FUN_147845574(void)

void FUN_147845574(longlong param_1,int param_2)

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



// FUNCTION 1478455fa FUN_1478455fa body=118 status=ok
// SIG undefined FUN_1478455fa(void)

void FUN_1478455fa(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147845670 FUN_147845670 body=62 status=ok
// SIG undefined FUN_147845670(void)

void FUN_147845670(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478456ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1478456ae FUN_1478456ae body=93 status=ok
// SIG undefined FUN_1478456ae(void)

ulonglong FUN_1478456ae(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 14784570c FUN_14784570c body=434 status=ok
// SIG undefined FUN_14784570c(void)

void FUN_14784570c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5aded0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1478458be(param_1 + 0x6d);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x62);
  plVar3 = (longlong *)param_1[0x61];
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
  FUN_14784467a(param_1[0x5e],*(undefined4 *)(param_1 + 0x5f));
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_147831144(param_1 + 0x5b);
  FUN_1449db362(param_1 + 0x57);
  FUN_1449db362(param_1 + 0x55);
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2c] = &PTR_FUN_14a5aec70;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x2c);
  param_1[0x17] = &PTR_FUN_14a5aec70;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x17);
  param_1[2] = &PTR_FUN_14a5aec70;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 2);
  FUN_147086fa8(param_1);
  return;
}



// FUNCTION 1478458be FUN_1478458be body=52 status=ok
// SIG undefined FUN_1478458be(void)

void FUN_1478458be(longlong *param_1)

{
  FUN_1478458f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478458f2 FUN_1478458f2 body=307 status=ok
// SIG undefined FUN_1478458f2(void)

void FUN_1478458f2(longlong *param_1)

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
      FUN_147842b68((longlong)iStack_4c * 0x30 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147845a26 FUN_147845a26 body=121 status=ok
// SIG undefined FUN_147845a26(void)

void FUN_147845a26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5ae500;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a5aef10;
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
                    /* WARNING: Could not recover jumptable at 0x000147845a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147845aa8 FUN_147845aa8 body=436 status=ok
// SIG undefined FUN_147845aa8(void)

void FUN_147845aa8(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_108 [47];
  undefined1 local_d9;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(int *)(param_1 + 0x1c8) == 0) && (*(int *)(param_1 + 0x284) == 0)) {
    *(undefined4 *)(param_1 + 0x284) = param_3;
    if (param_1 == param_2) {
      FUN_147845c5e();
    }
    else {
      FUN_144a69486(param_1,param_2);
      FUN_147845c5e(param_1);
      FUN_144a69486(param_1 + 0x20,param_2 + 0x20);
      FUN_144a69486(param_1 + 0x40,param_2 + 0x40);
    }
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1000000000;
    FUN_147845ed0(param_1 + 0x40,local_d8);
    puVar3 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar3 = local_d8;
    }
    FUN_14784ff2b(puVar3,local_50 & 0xffffffff,&local_d9);
    puVar3 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar3 = local_d8;
    }
    lVar5 = (longlong)(int)local_50;
    if (lVar5 != 0) {
      lVar4 = 0;
      do {
        uVar2 = *(undefined8 *)(puVar3 + lVar4);
        iVar1 = *(int *)(param_1 + 0xa8);
        *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
          FUN_147850332((longlong *)(param_1 + 0xa0),iVar1);
        }
        FUN_14688bdd4((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xa0),uVar2);
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 != lVar4);
    }
    if (param_1 != param_2) {
      FUN_144a69486(param_1 + 0x60,param_2 + 0x60);
      FUN_144a69486(param_1 + 0x80,param_2 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x280) = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147845c5e FUN_147845c5e body=624 status=ok
// SIG undefined FUN_147845c5e(void)

void FUN_147845c5e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_128 [40];
  longlong local_100;
  int local_f4;
  longlong *local_f0;
  int *local_e8;
  undefined1 local_dc [4];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_147845fda(param_1,local_d8);
  puVar4 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar4 = local_d8;
  }
  FUN_14784ff2b(puVar4,local_50 & 0xffffffff,&local_f0);
  plVar9 = (longlong *)(param_1 + 0xb0);
  FUN_1478460e4(plVar9);
  lVar1 = param_1 + 0x220;
  uVar5 = (uint)local_50;
  if ((uint)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x254)) < (uint)local_50) {
    if ((int)(uint)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)(uint)local_50);
    }
    FUN_1478504d8(lVar1);
    iVar2 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x268) == 0) || (*(int *)(param_1 + 0x268) < iVar2)) {
      *(int *)(param_1 + 0x268) = iVar2;
      FUN_147850674(lVar1);
    }
  }
  local_f4 = 0;
  if ((int)(uint)local_50 < 1) {
    uVar11 = 8;
    lVar8 = 0;
  }
  else {
    uVar11 = 8;
    lVar8 = 0;
    do {
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_d8;
      }
      local_100 = *(longlong *)(puVar4 + (longlong)local_f4 * 8);
      plVar6 = *(longlong **)(param_1 + 0x1b0);
      if (*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0) {
        plVar6 = plVar9;
      }
      plVar6[(longlong)local_f4 * 2] = local_100;
      iVar2 = *(int *)(local_100 + 0x5c);
      lVar8 = lVar8 + iVar2;
      uVar11 = uVar11 + (longlong)(int)(-iVar2 & (*(int *)(local_100 + 0x58) + iVar2) - 1U);
      local_f0 = &local_100;
      local_e8 = &local_f4;
      FUN_147850850(lVar1,local_dc,&local_f0);
      local_f4 = local_f4 + 1;
    } while (local_f4 < (int)(uint)local_50);
  }
  *(ulonglong *)(param_1 + 0x278) = uVar11;
  uVar3 = *(longlong *)(param_1 + 0x288) - lVar8;
  uVar7 = uVar3 % uVar11;
  iVar2 = (int)(uVar3 / uVar11);
  *(int *)(param_1 + 0x270) = iVar2;
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x1b0);
  }
  if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
    plVar6 = plVar9 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
    iVar2 = iVar2 << 3;
    do {
      lVar1 = *plVar9;
      uVar10 = -*(int *)(lVar1 + 0x5c) & (iVar2 + *(int *)(lVar1 + 0x5c)) - 1U;
      *(uint *)(plVar9 + 1) = uVar10;
      uVar5 = (*(int *)(lVar1 + 0x5c) + *(int *)(lVar1 + 0x58)) - 1;
      uVar7 = (ulonglong)uVar5;
      iVar2 = (-*(int *)(lVar1 + 0x5c) & uVar5) * *(int *)(param_1 + 0x270) + uVar10;
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar6);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8(local_58,uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147845ed0 FUN_147845ed0 body=265 status=ok
// SIG undefined FUN_147845ed0(void)

void FUN_147845ed0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    lVar9 = 0;
    uVar6 = 1;
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = param_1;
      }
      if ((*(uint *)(lVar3 + uVar7 * 4) & uVar6) != 0) {
        if (lVar8 < DAT_14cabe1d8) {
          puVar5 = DAT_14cabe1d0;
          if (DAT_14cabe1d0 == (undefined *)0x0) {
            puVar5 = &DAT_14cabdfd0;
          }
          lVar3 = FUN_14479d2ce(puVar5 + lVar9);
          if (lVar3 == 0) goto LAB_147845f67;
          lVar4 = FUN_1446f4bba();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147845f67;
        }
        else {
LAB_147845f67:
          lVar3 = 0;
        }
        iVar2 = *(int *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
          FUN_14784fe26(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar3;
        iVar2 = *(int *)(param_1 + 0x18);
      }
      iVar1 = uVar6 * 2;
      uVar7 = (ulonglong)((int)uVar7 + (uint)(iVar1 == 0));
      uVar6 = iVar1 + (uint)(iVar1 == 0);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar8 < iVar2);
  }
  return;
}



// FUNCTION 147845fda FUN_147845fda body=265 status=ok
// SIG undefined FUN_147845fda(void)

void FUN_147845fda(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    lVar9 = 0;
    uVar6 = 1;
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = param_1;
      }
      if ((*(uint *)(lVar3 + uVar7 * 4) & uVar6) != 0) {
        if (lVar8 < DAT_14cabdc78) {
          puVar5 = DAT_14cabdc70;
          if (DAT_14cabdc70 == (undefined *)0x0) {
            puVar5 = &DAT_14cabda70;
          }
          lVar3 = FUN_14479d2ce(puVar5 + lVar9);
          if (lVar3 == 0) goto LAB_147846071;
          lVar4 = FUN_1446f4bba();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147846071;
        }
        else {
LAB_147846071:
          lVar3 = 0;
        }
        iVar2 = *(int *)(param_2 + 0x88);
        *(uint *)(param_2 + 0x88) = iVar2 + 1U;
        if (*(uint *)(param_2 + 0x8c) < iVar2 + 1U) {
          FUN_14784fe26(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar3;
        iVar2 = *(int *)(param_1 + 0x18);
      }
      iVar1 = uVar6 * 2;
      uVar7 = (ulonglong)((int)uVar7 + (uint)(iVar1 == 0));
      uVar6 = iVar1 + (uint)(iVar1 == 0);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar8 < iVar2);
  }
  return;
}



// FUNCTION 1478460e4 FUN_1478460e4 body=88 status=ok
// SIG undefined FUN_1478460e4(void)

void FUN_1478460e4(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x10c) - iVar1) < param_2) {
    FUN_147850460(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  FUN_147850445((longlong)iVar1 * 0x10 + lVar2,param_2);
  return;
}



// FUNCTION 14784613c FUN_14784613c body=100 status=ok
// SIG undefined FUN_14784613c(void)

void FUN_14784613c(longlong param_1)

{
  FUN_1459327ae(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1459327fb(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478461a0 FUN_1478461a0 body=305 status=ok
// SIG undefined FUN_1478461a0(void)

void FUN_1478461a0(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  FUN_1478462d2(param_3,(int)param_2[1]);
  if ((longlong)(int)param_2[1] != 0) {
    puVar8 = (ulonglong *)*param_2;
    puVar7 = puVar8 + (longlong)(int)param_2[1] * 2;
    do {
      if ((char)puVar8[1] != '\0') {
        uVar6 = 0xffffffff;
        if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
          uVar2 = *puVar8;
          uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          lVar3 = *(longlong *)(param_1 + 0x260);
          if (*(longlong *)(param_1 + 0x260) == 0) {
            lVar3 = param_1 + 600;
          }
          iVar5 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(param_1 + 0x268) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
          if (iVar5 != -1) {
            do {
              puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar5 * 0x18);
              if (*puVar1 == uVar2) {
                if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                  uVar6 = (undefined4)puVar1[1];
                }
                break;
              }
              iVar5 = (int)puVar1[2];
            } while (iVar5 != -1);
          }
        }
        iVar5 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar5 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar5 + 1U) {
          FUN_1401fcbb6(param_3,iVar5);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(undefined4 *)(lVar3 + (longlong)iVar5 * 4) = uVar6;
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar7);
  }
  return;
}



// FUNCTION 1478462d2 FUN_1478462d2 body=41 status=ok
// SIG undefined FUN_1478462d2(void)

void FUN_1478462d2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2 <= *(int *)(param_1 + 0x4c)) {
    return;
  }
  FUN_146bf53da();
  return;
}



// FUNCTION 1478462fc FUN_1478462fc body=216 status=ok
// SIG undefined FUN_1478462fc(void)

void FUN_1478462fc(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_1478462d2(param_3,(int)param_2[1]);
  if ((longlong)(int)param_2[1] != 0) {
    plVar6 = (longlong *)*param_2;
    plVar5 = plVar6 + (longlong)(int)param_2[1] * 2;
    iVar1 = -1;
    do {
      if ((char)plVar6[1] != '\0') {
        iVar2 = iVar1 + 1;
        iVar1 = -1;
        if (iVar2 < *(int *)(param_1 + 0xa8)) {
          lVar3 = *plVar6;
          plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0xa0));
          do {
            if (lVar3 != 0) {
              if ((*(int *)(lVar3 + 0x38) <= *(int *)(*plVar4 + 0x38)) &&
                 (iVar1 = iVar2,
                 *(longlong *)(*(longlong *)(*plVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                 == lVar3 + 0x30)) break;
            }
            iVar2 = iVar2 + 1;
            plVar4 = plVar4 + 2;
            iVar1 = -1;
          } while (*(int *)(param_1 + 0xa8) != iVar2);
        }
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_1401fcbb6(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(int *)(lVar3 + (longlong)iVar2 * 4) = iVar1;
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar5);
  }
  return;
}



// FUNCTION 1478463d4 FUN_1478463d4 body=207 status=ok
// SIG undefined FUN_1478463d4(void)

void FUN_1478463d4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    FUN_1478462d2(param_3,(int)param_2[1]);
    if ((longlong)(int)param_2[1] != 0) {
      plVar9 = (longlong *)*param_2;
      plVar8 = plVar9 + (longlong)(int)param_2[1] * 2;
      do {
        if ((char)plVar9[1] != '\0') {
          lVar3 = (longlong)*(int *)(lVar1 + 0x78);
          iVar4 = -1;
          if (lVar3 != 0) {
            lVar5 = 0;
            iVar6 = 0;
            do {
              plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x70) + lVar5);
              if (plVar2 == (longlong *)0x0) {
                lVar7 = 0;
              }
              else {
                lVar7 = *plVar2;
              }
              iVar4 = iVar6;
              if (lVar7 == *plVar9) break;
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + 0x10;
              iVar4 = -1;
            } while (lVar3 * 0x10 != lVar5);
          }
          iVar6 = *(int *)(param_3 + 0x48);
          *(uint *)(param_3 + 0x48) = iVar6 + 1U;
          if (*(uint *)(param_3 + 0x4c) < iVar6 + 1U) {
            FUN_1401fcbb6(param_3,iVar6);
          }
          lVar3 = *(longlong *)(param_3 + 0x40);
          if (*(longlong *)(param_3 + 0x40) == 0) {
            lVar3 = param_3;
          }
          *(int *)(lVar3 + (longlong)iVar6 * 4) = iVar4;
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar8);
    }
  }
  return;
}



// FUNCTION 1478464a4 FUN_1478464a4 body=217 status=ok
// SIG undefined FUN_1478464a4(void)

void FUN_1478464a4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    FUN_1478462d2(param_3,(int)param_2[1]);
    if ((longlong)(int)param_2[1] != 0) {
      plVar9 = (longlong *)*param_2;
      plVar8 = plVar9 + (longlong)(int)param_2[1] * 2;
      do {
        if ((char)plVar9[1] != '\0') {
          lVar3 = (longlong)*(int *)(lVar1 + 0x88);
          iVar4 = -1;
          if (lVar3 != 0) {
            lVar5 = 0;
            iVar6 = 0;
            do {
              plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x80) + lVar5);
              if (plVar2 == (longlong *)0x0) {
                lVar7 = 0;
              }
              else {
                lVar7 = *plVar2;
              }
              iVar4 = iVar6;
              if (lVar7 == *plVar9) break;
              iVar6 = iVar6 + 1;
              lVar5 = lVar5 + 0x10;
              iVar4 = -1;
            } while (lVar3 * 0x10 != lVar5);
          }
          iVar6 = *(int *)(param_3 + 0x48);
          *(uint *)(param_3 + 0x48) = iVar6 + 1U;
          if (*(uint *)(param_3 + 0x4c) < iVar6 + 1U) {
            FUN_1401fcbb6(param_3,iVar6);
          }
          lVar3 = *(longlong *)(param_3 + 0x40);
          if (*(longlong *)(param_3 + 0x40) == 0) {
            lVar3 = param_3;
          }
          *(int *)(lVar3 + (longlong)iVar6 * 4) = iVar4;
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar8);
    }
  }
  return;
}


