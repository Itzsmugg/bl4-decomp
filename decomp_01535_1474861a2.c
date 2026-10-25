// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474861a2 FUN_1474861a2 body=477 status=ok
// SIG undefined FUN_1474861a2(void)

void FUN_1474861a2(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 147486380 FUN_147486380 body=322 status=ok
// SIG undefined FUN_147486380(void)

void FUN_147486380(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 1474864c4 FUN_1474864c4 body=275 status=ok
// SIG undefined FUN_1474864c4(void)

void FUN_1474864c4(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1474830c6((longlong)iStack_44 * 0x68 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474865dc FUN_1474865dc body=136 status=ok
// SIG undefined FUN_1474865dc(void)

void FUN_1474865dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1474818f9(param_1 + 0x15,param_1 + 0x16,*(undefined4 *)(param_1 + 0x18),
                *(undefined4 *)((longlong)param_1 + 0xc4));
  plVar3 = (longlong *)param_1[0x17];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147486659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147486664 FUN_147486664 body=48 status=ok
// SIG undefined FUN_147486664(void)

void FUN_147486664(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147486694 FUN_147486694 body=207 status=ok
// SIG undefined FUN_147486694(void)

int FUN_147486694(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x68 + (longlong)iVar1 * 0x70)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x70);
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



// FUNCTION 147486764 FUN_147486764 body=133 status=ok
// SIG undefined FUN_147486764(void)

longlong FUN_147486764(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1474867ea();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x70;
    if (lVar3 + lVar2 != 0) goto LAB_14748679d;
  }
  local_30 = param_3;
  FUN_1474868ba(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x70;
LAB_14748679d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474867ea FUN_1474867ea body=207 status=ok
// SIG undefined FUN_1474867ea(void)

int FUN_1474867ea(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x68 + (longlong)iVar1 * 0x70)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x70);
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



// FUNCTION 1474868ba FUN_1474868ba body=272 status=ok
// SIG undefined FUN_1474868ba(void)

undefined4 * FUN_1474868ba(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1474869cc(param_1,local_48);
  FUN_147486b72(param_4,local_40);
  *(undefined4 *)(local_40 + 0x68) = 0xffffffff;
  cVar1 = FUN_147486aae(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x6c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x68) =
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
      FUN_147487144(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474869cc FUN_1474869cc body=226 status=ok
// SIG undefined FUN_1474869cc(void)

int * FUN_1474869cc(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 147486aae FUN_147486aae body=195 status=ok
// SIG undefined FUN_147486aae(void)

undefined8 FUN_147486aae(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar2 = FUN_147486694(param_1,param_2,&local_38);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      FUN_147486bfa((longlong)iVar2 * 0x70 + lVar1 + 8);
      memmove((void *)(lVar1 + (longlong)iVar2 * 0x70),param_3,0x68);
      FUN_1474870d0(param_1,*param_4);
      *param_4 = iVar2;
      uVar3 = 1;
      goto LAB_147486ad4;
    }
  }
  uVar3 = 0;
LAB_147486ad4:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147486b72 FUN_147486b72 body=135 status=ok
// SIG undefined FUN_147486b72(void)

undefined8 FUN_147486b72(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_28 = 0;
  uStack_20 = 0;
  FUN_147486c4c(param_2,*param_1,&local_78);
  FUN_147486bfa(&local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147486bfa FUN_147486bfa body=82 status=ok
// SIG undefined FUN_147486bfa(void)

void FUN_147486bfa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147486f6c(param_1);
  return;
}



// FUNCTION 147486c4c FUN_147486c4c body=84 status=ok
// SIG undefined FUN_147486c4c(void)

longlong * FUN_147486c4c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147486ca0(param_1 + 1,param_3);
  param_1[0xb] = *(longlong *)(param_3 + 0x50);
  param_1[0xc] = *(longlong *)(param_3 + 0x58);
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x58) = 0;
  return param_1;
}



// FUNCTION 147486ca0 FUN_147486ca0 body=123 status=ok
// SIG undefined FUN_147486ca0(void)

undefined8 * FUN_147486ca0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147486d1c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147486d1c FUN_147486d1c body=379 status=ok
// SIG undefined FUN_147486d1c(void)

longlong * FUN_147486d1c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_147486e98((longlong)iVar6 * 0x68 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147486e98 FUN_147486e98 body=69 status=ok
// SIG undefined FUN_147486e98(void)

void FUN_147486e98(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147486ede(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147486ede FUN_147486ede body=52 status=ok
// SIG undefined FUN_147486ede(void)

void FUN_147486ede(longlong *param_1)

{
  FUN_147486f12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147486f12 FUN_147486f12 body=89 status=ok
// SIG undefined FUN_147486f12(void)

void FUN_147486f12(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 147486f6c FUN_147486f6c body=52 status=ok
// SIG undefined FUN_147486f6c(void)

void FUN_147486f6c(longlong *param_1)

{
  FUN_147486fa0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147486fa0 FUN_147486fa0 body=303 status=ok
// SIG undefined FUN_147486fa0(void)

void FUN_147486fa0(longlong *param_1)

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
      FUN_147486e98((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 1474870d0 FUN_1474870d0 body=116 status=ok
// SIG undefined FUN_1474870d0(void)

void FUN_1474870d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147487144 FUN_147487144 body=510 status=ok
// SIG undefined FUN_147487144(void)

void FUN_147487144(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x70);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x70;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x6c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x68) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147487344 FUN_147487344 body=121 status=ok
// SIG undefined FUN_147487344(void)

undefined8 * FUN_147487344(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a3ea000;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1474807a2(param_1 + 2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474873c8 FUN_1474873c8 body=29 status=ok
// SIG undefined FUN_1474873c8(void)

undefined8 FUN_1474873c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474873e6 FUN_1474873e6 body=133 status=ok
// SIG undefined FUN_1474873e6(void)

longlong FUN_1474873e6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14748746c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_14748741f;
  }
  local_30 = param_3;
  FUN_147487538(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_14748741f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748746c FUN_14748746c body=203 status=ok
// SIG undefined FUN_14748746c(void)

int FUN_14748746c(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1474874b6:
      lVar10 = (longlong)iVar1 * 0x68;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_14748752c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14748752c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14748751d;
    }
  }
  return -1;
LAB_14748752c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14748751d:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1474874b6;
}



// FUNCTION 147487538 FUN_147487538 body=272 status=ok
// SIG undefined FUN_147487538(void)

undefined4 * FUN_147487538(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14748764a(param_1,local_48);
  FUN_147487796(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_14748772c(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_1474879c8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748764a FUN_14748764a body=226 status=ok
// SIG undefined FUN_14748764a(void)

int * FUN_14748764a(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 14748772c FUN_14748772c body=105 status=ok
// SIG undefined FUN_14748772c(void)

undefined8 FUN_14748772c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_14748746c(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_147486e98(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_147487954(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 147487796 FUN_147487796 body=175 status=ok
// SIG undefined FUN_147487796(void)

undefined8 * FUN_147487796(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  param_1 = (undefined8 *)*param_1;
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_147487846(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147486ede(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147487846 FUN_147487846 body=123 status=ok
// SIG undefined FUN_147487846(void)

undefined8 * FUN_147487846(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1474878c2();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1474878c2 FUN_1474878c2 body=146 status=ok
// SIG undefined FUN_1474878c2(void)

longlong * FUN_1474878c2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147487954 FUN_147487954 body=116 status=ok
// SIG undefined FUN_147487954(void)

void FUN_147487954(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1474879c8 FUN_1474879c8 body=476 status=ok
// SIG undefined FUN_1474879c8(void)

void FUN_1474879c8(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x68;
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
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
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



// FUNCTION 147487ba6 FUN_147487ba6 body=312 status=ok
// SIG undefined FUN_147487ba6(void)

undefined4 * FUN_147487ba6(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147487ce0(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147487dc6(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_147487eb4(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147487ce0 FUN_147487ce0 body=229 status=ok
// SIG undefined FUN_147487ce0(void)

int * FUN_147487ce0(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147487dc6 FUN_147487dc6 body=124 status=ok
// SIG undefined FUN_147487dc6(void)

undefined8 FUN_147487dc6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147487e42(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147487e42 FUN_147487e42 body=114 status=ok
// SIG undefined FUN_147487e42(void)

void FUN_147487e42(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147487eb4 FUN_147487eb4 body=477 status=ok
// SIG undefined FUN_147487eb4(void)

void FUN_147487eb4(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 147488092 FUN_147488092 body=90 status=ok
// SIG undefined FUN_147488092(void)

void FUN_147488092(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147487e42();
  return;
}



// FUNCTION 1474880ec FUN_1474880ec body=22 status=ok
// SIG undefined FUN_1474880ec(void)

undefined8 FUN_1474880ec(undefined8 param_1)

{
  FUN_147488102();
  return param_1;
}



// FUNCTION 147488102 FUN_147488102 body=153 status=ok
// SIG undefined FUN_147488102(void)

undefined8 * FUN_147488102(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14748819c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748819c FUN_14748819c body=147 status=ok
// SIG undefined FUN_14748819c(void)

undefined8 * FUN_14748819c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)*param_3;
  uStack_30 = *(undefined4 *)(param_3 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_38);
  *param_1 = &PTR_FUN_14a3e91e0;
  local_38 = param_1 + 0x33;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  local_40 = 0;
  uStack_30 = 0xffffffff;
  local_28 = 0;
  FUN_146fb8a66(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488230 FUN_147488230 body=25 status=ok
// SIG undefined FUN_147488230(void)

undefined8 FUN_147488230(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 147488268 FUN_147488268 body=22 status=ok
// SIG undefined FUN_147488268(void)

undefined8 FUN_147488268(undefined8 param_1)

{
  FUN_14748827e();
  return param_1;
}



// FUNCTION 14748827e FUN_14748827e body=153 status=ok
// SIG undefined FUN_14748827e(void)

undefined8 * FUN_14748827e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_147488318(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488318 FUN_147488318 body=147 status=ok
// SIG undefined FUN_147488318(void)

undefined8 * FUN_147488318(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)*param_3;
  uStack_30 = *(undefined4 *)(param_3 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_38);
  *param_1 = &PTR_FUN_14a3e9490;
  local_38 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_40 = 0;
  uStack_30 = 0xffffffff;
  local_28 = 0;
  FUN_146fb8a66(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474883ac FUN_1474883ac body=120 status=ok
// SIG undefined FUN_1474883ac(void)

void FUN_1474883ac(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488426 FUN_147488426 body=25 status=ok
// SIG undefined FUN_147488426(void)

undefined8 FUN_147488426(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14748845e FUN_14748845e body=22 status=ok
// SIG undefined FUN_14748845e(void)

undefined8 FUN_14748845e(undefined8 param_1)

{
  FUN_147488474();
  return param_1;
}



// FUNCTION 147488474 FUN_147488474 body=153 status=ok
// SIG undefined FUN_147488474(void)

undefined8 * FUN_147488474(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14748850e(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748850e FUN_14748850e body=240 status=ok
// SIG undefined FUN_14748850e(void)

undefined8 * FUN_14748850e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)*param_3;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_58);
  *param_1 = &PTR_FUN_14a3e9750;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar1 = param_1 + 0x35;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_60 = 0;
  uStack_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_60);
  local_60 = 0;
  uStack_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_60);
  local_58 = (undefined8 *)0x0;
  FUN_1474883ac(param_1,puVar1,puVar1,&local_58);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488600 FUN_147488600 body=25 status=ok
// SIG undefined FUN_147488600(void)

undefined8 FUN_147488600(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 147488638 FUN_147488638 body=22 status=ok
// SIG undefined FUN_147488638(void)

undefined8 FUN_147488638(undefined8 param_1)

{
  FUN_14748864e();
  return param_1;
}



// FUNCTION 14748864e FUN_14748864e body=153 status=ok
// SIG undefined FUN_14748864e(void)

undefined8 * FUN_14748864e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1474886e8(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474886e8 FUN_1474886e8 body=212 status=ok
// SIG undefined FUN_1474886e8(void)

undefined8 * FUN_1474886e8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)*param_3;
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_58);
  *param_1 = &PTR_FUN_14a3e9a10;
  local_58 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_60 = 0;
  uStack_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_60);
  local_60 = 0;
  uStack_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_58,&local_60);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474887be FUN_1474887be body=25 status=ok
// SIG undefined FUN_1474887be(void)

undefined8 FUN_1474887be(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1474887f6 FUN_1474887f6 body=22 status=ok
// SIG undefined FUN_1474887f6(void)

undefined8 FUN_1474887f6(undefined8 param_1)

{
  FUN_14748880c();
  return param_1;
}



// FUNCTION 14748880c FUN_14748880c body=153 status=ok
// SIG undefined FUN_14748880c(void)

undefined8 * FUN_14748880c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1474888a6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474888a6 FUN_1474888a6 body=140 status=ok
// SIG undefined FUN_1474888a6(void)

undefined8 * FUN_1474888a6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)*param_3;
  uStack_30 = *(undefined4 *)(param_3 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_146fb38ca(*(undefined4 *)param_3,param_2,&local_38);
  *param_1 = &PTR_FUN_14a3e9cf0;
  local_38 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_40 = 0;
  uStack_30 = 0xffffffff;
  local_28 = 0;
  FUN_146fb824a(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488934 FUN_147488934 body=25 status=ok
// SIG undefined FUN_147488934(void)

undefined8 FUN_147488934(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14748896c FUN_14748896c body=177 status=ok
// SIG undefined FUN_14748896c(void)

void FUN_14748896c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_147488a1e(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488a1e FUN_147488a1e body=208 status=ok
// SIG undefined FUN_147488a1e(void)

void FUN_147488a1e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14a3ea0c0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  local_48[7] = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488af0 FUN_147488af0 body=29 status=ok
// SIG undefined FUN_147488af0(void)

undefined8 FUN_147488af0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147488b0e FUN_147488b0e body=101 status=ok
// SIG undefined FUN_147488b0e(void)

undefined8 * FUN_147488b0e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea0d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147488b74 FUN_147488b74 body=29 status=ok
// SIG undefined FUN_147488b74(void)

undefined8 FUN_147488b74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147488b92 FUN_147488b92 body=101 status=ok
// SIG undefined FUN_147488b92(void)

undefined8 * FUN_147488b92(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea0d0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147488bf8 FUN_147488bf8 body=311 status=ok
// SIG undefined FUN_147488bf8(void)

longlong FUN_147488bf8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_147488d30(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488d30 FUN_147488d30 body=208 status=ok
// SIG undefined FUN_147488d30(void)

void FUN_147488d30(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_147488e02(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488e02 FUN_147488e02 body=189 status=ok
// SIG undefined FUN_147488e02(void)

undefined8 *
FUN_147488e02(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14a3ea0e0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_14748462e(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147488ec0 FUN_147488ec0 body=57 status=ok
// SIG undefined FUN_147488ec0(void)

undefined8 * FUN_147488ec0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3ea0e0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147488efa FUN_147488efa body=101 status=ok
// SIG undefined FUN_147488efa(void)

undefined8 * FUN_147488efa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea0f0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147488f60 FUN_147488f60 body=29 status=ok
// SIG undefined FUN_147488f60(void)

undefined8 FUN_147488f60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147488f7e FUN_147488f7e body=101 status=ok
// SIG undefined FUN_147488f7e(void)

undefined8 * FUN_147488f7e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea0f0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147488fe4 FUN_147488fe4 body=311 status=ok
// SIG undefined FUN_147488fe4(void)

longlong FUN_147488fe4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_14748911c(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
      while (plVar6 != (longlong *)0x0) {
        lVar1 = *plVar6;
        if (*(int *)(lVar1 + 8) != 1) {
          if (*(int *)(lVar1 + 8) == 0) {
            param_3 = lVar1 + 0x38;
          }
          break;
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748911c FUN_14748911c body=208 status=ok
// SIG undefined FUN_14748911c(void)

void FUN_14748911c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14a3ea100;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  local_48[7] = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474891ee FUN_1474891ee body=29 status=ok
// SIG undefined FUN_1474891ee(void)

undefined8 FUN_1474891ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748920c FUN_14748920c body=101 status=ok
// SIG undefined FUN_14748920c(void)

undefined8 * FUN_14748920c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea110;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147489272 FUN_147489272 body=29 status=ok
// SIG undefined FUN_147489272(void)

undefined8 FUN_147489272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147489290 FUN_147489290 body=101 status=ok
// SIG undefined FUN_147489290(void)

undefined8 * FUN_147489290(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea110;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1474892f6 FUN_1474892f6 body=177 status=ok
// SIG undefined FUN_1474892f6(void)

void FUN_1474892f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_147488d30(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474893a8 FUN_1474893a8 body=132 status=ok
// SIG undefined FUN_1474893a8(void)

void FUN_1474893a8(longlong param_1,int param_2)

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



// FUNCTION 14748942e FUN_14748942e body=177 status=ok
// SIG undefined FUN_14748942e(void)

void FUN_14748942e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_1474894e0(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474894e0 FUN_1474894e0 body=208 status=ok
// SIG undefined FUN_1474894e0(void)

void FUN_1474894e0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_1474895b2(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474895b2 FUN_1474895b2 body=189 status=ok
// SIG undefined FUN_1474895b2(void)

undefined8 *
FUN_1474895b2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14a3ea120;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_14748462e(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147489670 FUN_147489670 body=57 status=ok
// SIG undefined FUN_147489670(void)

undefined8 * FUN_147489670(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3ea120;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474896aa FUN_1474896aa body=101 status=ok
// SIG undefined FUN_1474896aa(void)

undefined8 * FUN_1474896aa(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea130;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147489710 FUN_147489710 body=29 status=ok
// SIG undefined FUN_147489710(void)

undefined8 FUN_147489710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748972e FUN_14748972e body=101 status=ok
// SIG undefined FUN_14748972e(void)

undefined8 * FUN_14748972e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_14a3ea130;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 147489794 FUN_147489794 body=31 status=ok
// SIG undefined FUN_147489794(void)

undefined8 FUN_147489794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474897d0 FUN_1474897d0 body=93 status=ok
// SIG undefined FUN_1474897d0(void)

void FUN_1474897d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3ea140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14748982e FUN_14748982e body=126 status=ok
// SIG undefined FUN_14748982e(void)

void FUN_14748982e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3ea140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014748989d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1474898ac FUN_1474898ac body=21 status=ok
// SIG undefined FUN_1474898ac(void)

undefined8 FUN_1474898ac(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1474898e6 FUN_1474898e6 body=398 status=ok
// SIG undefined FUN_1474898e6(void)

void FUN_1474898e6(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_40 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  plVar3 = (longlong *)(param_1 + 0x1e0);
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_14748bf88(plVar3,uVar1 >> 0x10 ^ uVar1,&local_40);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x68 + *plVar3;
    pcVar4 = (char *)(lVar5 + 8);
    if (pcVar4 != (char *)0x0 && lVar5 != 0) {
      local_48 = param_3;
      if ((param_3 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_3);
      }
      FUN_147489a76(lVar5 + 0x10,&local_48);
      if (param_3 == param_2) {
        *pcVar4 = '\0';
      }
      if ((*(int *)(lVar5 + 0x18) == *(int *)(lVar5 + 0x44)) && (*pcVar4 == '\0')) {
        if (DAT_14c950c29 == 1 && param_2 != 0) {
          FUN_1456cec3c(param_2);
        }
        local_40 = param_2;
        if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_2);
        }
        FUN_14748c12c(plVar3,&local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147489a76 FUN_147489a76 body=318 status=ok
// SIG undefined FUN_147489a76(void)

undefined8 FUN_147489a76(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x10 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_14748c0cc(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[1];
        puVar7 = puVar8 + 1;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 147489bb4 FUN_147489bb4 body=256 status=ok
// SIG undefined FUN_147489bb4(void)

void FUN_147489bb4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_6c [4];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    local_68[0] = *param_3;
    local_58[0] = (longlong *)0x0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    local_88 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_80 = &local_88;
    local_78 = local_68;
    FUN_14748c30a(param_1 + 0x280,local_6c);
    if (local_68[0] != 0) {
      plVar1 = local_58[0];
      if (local_58[0] == (longlong *)0x0) {
        plVar1 = local_48;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147489cb6 FUN_147489cb6 body=256 status=ok
// SIG undefined FUN_147489cb6(void)

void FUN_147489cb6(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_6c [4];
  longlong local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    local_68[0] = *param_3;
    local_58[0] = (longlong *)0x0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    local_88 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_80 = &local_88;
    local_78 = local_68;
    FUN_14748c918(param_1 + 0x2d0,local_6c);
    if (local_68[0] != 0) {
      plVar1 = local_58[0];
      if (local_58[0] == (longlong *)0x0) {
        plVar1 = local_48;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147489dbc FUN_147489dbc body=349 status=ok
// SIG undefined FUN_147489dbc(void)

void FUN_147489dbc(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [256];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_b8 = DAT_14c8464f0;
  local_b0 = (undefined4)DAT_14c8464e0;
  uStack_ac = DAT_14c8464e0._4_4_;
  uStack_a8 = (undefined4)DAT_14c8464e8;
  uStack_a4 = DAT_14c8464e8._4_4_;
  local_a0 = DAT_14c8464f0;
  local_98 = (undefined4)DAT_14c8464e0;
  uStack_94 = DAT_14c8464e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8464e8;
  uStack_8c = DAT_14c8464e8._4_4_;
  local_88 = DAT_14c8464f0;
  local_80 = (undefined4)DAT_14c8464e0;
  uStack_7c = DAT_14c8464e0._4_4_;
  uStack_78 = (undefined4)DAT_14c8464e8;
  uStack_74 = DAT_14c8464e8._4_4_;
  local_70 = DAT_14c8464f0;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  puVar1 = &local_d8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147489f1a(local_1d8,puVar1);
  memcpy(param_3,local_1d8,0x100);
  if ((local_18 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147489f1a FUN_147489f1a body=286 status=ok
// SIG undefined FUN_147489f1a(void)

void * FUN_147489f1a(void *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  memset(param_1,0,0x100);
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  lVar5 = *(longlong *)(param_2 + 8);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  local_30 = 0;
  FUN_14485c47a(&local_30,lVar5);
  *(undefined8 *)((longlong)param_1 + 0xd8) = local_30;
  cVar4 = FUN_144729dda((longlong)param_1 + 0xd8);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    lVar5 = FUN_14479d2ce((longlong)param_1 + 0xd8);
    uVar6 = *(undefined8 *)(lVar5 + 0xa8);
  }
  FUN_140871de8((longlong)param_1 + 0xb8,uVar6);
  *(byte *)((longlong)param_1 + 0xad) = *(byte *)((longlong)param_1 + 0xad) | 1;
  *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x30) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a066 FUN_14748a066 body=126 status=ok
// SIG undefined FUN_14748a066(void)

void FUN_14748a066(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = FUN_1447210f0();
  if (((lVar6 != 0) && (*(longlong *)(param_1 + 0x550) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x550) + 0x68) == '\0')) {
    uVar3 = *(undefined8 *)(param_1 + 0x4c8);
    lVar4 = *(longlong *)(param_1 + 0x4d0);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(lVar6 + 0x270);
    *(undefined8 *)(lVar6 + 0x268) = uVar3;
    *(longlong *)(lVar6 + 0x270) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014748a0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14748a0e8 FUN_14748a0e8 body=162 status=ok
// SIG undefined FUN_14748a0e8(void)

void FUN_14748a0e8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x638))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a1ae FUN_14748a1ae body=99 status=ok
// SIG undefined FUN_14748a1ae(void)

void FUN_14748a1ae(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  FUN_1402d084a(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cbb8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a212 FUN_14748a212 body=41 status=ok
// SIG undefined FUN_14748a212(void)

void FUN_14748a212(undefined8 param_1,longlong *param_2)

{
  FUN_1402d084a();
                    /* WARNING: Could not recover jumptable at 0x00014748a238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  return;
}



// FUNCTION 14748a242 FUN_14748a242 body=119 status=ok
// SIG undefined FUN_14748a242(void)

void FUN_14748a242(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 0x550) != 0) {
    lVar2 = FUN_14091baa4();
    if (lVar2 != 0) {
      bVar5 = *(longlong *)(param_1 + 0x470) != 0;
      lVar3 = param_1;
      if (!bVar5) {
        lVar3 = FUN_1447210f0(param_1);
      }
      FUN_146c96f1e(lVar2,*(undefined8 *)(param_1 + 0x550),lVar3);
      *(bool *)(*(longlong *)(param_1 + 0x550) + 0x68) = bVar5;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x4c8);
  uVar4 = FUN_1447210f0(param_1);
  FUN_14572c72a(uVar1,uVar4);
  return;
}



// FUNCTION 14748a2ba FUN_14748a2ba body=330 status=ok
// SIG undefined FUN_14748a2ba(void)

void FUN_14748a2ba(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1405f1eac();
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FUN_14748a242(param_1);
    lVar1 = *(longlong *)(param_1 + 0x550);
    puVar6 = (undefined8 *)(param_1 + 0x398);
    puVar7 = local_a8;
    for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_40 = *(undefined4 *)(param_1 + 0x400);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0x80);
    *puVar3 = &PTR_LAB_14a3ef3d0;
    puVar3[1] = lVar1;
    puVar6 = local_a8;
    puVar7 = puVar3 + 2;
    for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(puVar3 + 0xf) = local_40;
    puVar5 = &LAB_14327762a;
    if (puVar3 + 1 == (longlong *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = puVar5;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a41e FUN_14748a41e body=573 status=ok
// SIG undefined FUN_14748a41e(void)

void FUN_14748a41e(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [40];
  ulonglong local_70 [2];
  undefined8 *local_60;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x458) == '\x01') {
    local_70[0] = local_70[0] & 0xffffffffffffff00;
    puVar4 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    *puVar4 = &PTR_FUN_149f48de0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0xffffffff;
    *(undefined2 *)((longlong)puVar4 + 0x5c) = 0;
    puVar4[0xc] = 0xffffffffffffffff;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0x100000000;
    *(undefined4 *)((longlong)puVar4 + 0x94) = 0;
    *(undefined1 *)(puVar4 + 0x12) = 0;
    puVar4[2] = 0;
    puVar4[0xe] = 0;
    FUN_14061877a(puVar4,local_70);
    puVar5 = &DAT_14c8464e0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x260);
    }
    uVar6 = *puVar5;
    uVar3 = puVar5[1];
    local_58 = puVar4;
    local_60 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_60[1] = 0;
    local_60[2] = 0;
    *(undefined2 *)(local_60 + 3) = 0x101;
    *(undefined1 *)((longlong)local_60 + 0x1a) = 1;
    *(undefined2 *)((longlong)local_60 + 0x1c) = 0x101;
    *local_60 = &PTR_FUN_149f489d0;
    local_60[4] = 0xc0f86a0000000000;
    local_60[5] = 0xc0f86a0000000000;
    local_60[6] = 0xc08f400000000000;
    local_60[7] = 0x40f86a0000000000;
    local_60[8] = 0x40f86a0000000000;
    local_60[9] = 0;
    puVar5 = puVar4;
    if (local_60 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + 1;
      UNLOCK();
      puVar5 = local_58;
    }
    FUN_1406188f0(puVar4,&local_60);
    fVar1 = *(float *)(param_1 + 0x45c);
    puVar5[4] = uVar6;
    puVar5[5] = uVar3;
    puVar5[6] = (double)fVar1;
    *(byte *)((longlong)puVar5 + 0x94) = *(byte *)((longlong)puVar5 + 0x94) | 1;
    if ((puVar5[2] != 0) && (lVar2 = *(longlong *)(puVar5[2] + 8), lVar2 != 0)) {
      FUN_144a78688(lVar2 + 0x70);
    }
    local_70[1] = 0xffff00000000;
    local_70[0] = 0xffff00000000;
    FUN_146dd99e8(puVar5,0);
    uVar6 = FUN_14001cc68(0x68,0x10);
    FUN_14021696e(uVar6,&local_58,0,0);
    *(undefined8 *)(param_1 + 0x570) = uVar6;
    FUN_14162b148(*(undefined8 *)(param_1 + 0x550),uVar6);
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a65c FUN_14748a65c body=198 status=ok
// SIG undefined FUN_14748a65c(void)

void FUN_14748a65c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_1403d8a98();
  lVar2 = *(longlong *)(param_1 + 0x550);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x570) != 0) {
      FUN_1401cf158(lVar2);
      *(undefined8 *)(param_1 + 0x570) = 0;
      lVar2 = *(longlong *)(param_1 + 0x550);
    }
    puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 8) = 1;
    *puVar1 = &PTR_FUN_149f45dc0;
    puVar1[10] = &DAT_143277680;
    puVar1[0xc] = 0;
    puVar1[0xe] = &PTR_LAB_14a3ef3f0;
    puVar1[0xf] = lVar2;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    *(undefined1 *)(puVar1 + 0x1a) = 0;
    FUN_1406e6496(lVar2 + 0x70,puVar1);
    return;
  }
  return;
}



// FUNCTION 14748a722 FUN_14748a722 body=218 status=ok
// SIG undefined FUN_14748a722(void)

void FUN_14748a722(longlong param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  local_28 = 0x601d1886;
  uStack_24 = 0xac644f84;
  uStack_20 = 0xaa16d3de;
  uStack_1c = 0xdeac7d6;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 0x2b) {
    *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x408);
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x414);
    bVar1 = (byte)*(undefined4 *)(param_1 + 0x418);
    bVar3 = 5;
    if (bVar1 < 5) {
      bVar3 = bVar1;
    }
    *(byte *)(param_1 + 0x3bc) = bVar3;
    *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_1 + 0x42c);
    *(undefined1 *)(param_1 + 0x3bd) = *(undefined1 *)(param_1 + 0x419);
    *(undefined1 *)(param_1 + 0x3e4) = *(undefined1 *)(param_1 + 0x440);
    *(undefined8 *)(param_1 + 0x3d4) = *(undefined8 *)(param_1 + 0x430);
    *(undefined8 *)(param_1 + 0x3dc) = *(undefined8 *)(param_1 + 0x438);
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x41c);
    *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x424);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x444);
    *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x448);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x44c);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x450);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a7fe FUN_14748a7fe body=136 status=ok
// SIG undefined FUN_14748a7fe(void)

void FUN_14748a7fe(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140206818();
  FUN_14748a242(param_1);
  lVar1 = FUN_1447210f0(param_1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x268) == 0)) {
    FUN_14748a066(param_1);
  }
  local_18 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_141795bc1(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a888 FUN_14748a888 body=95 status=ok
// SIG undefined FUN_14748a888(void)

void FUN_14748a888(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1401bf1e0();
  local_18 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1400ff1cf(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748a8e8 FUN_14748a8e8 body=36 status=ok
// SIG undefined FUN_14748a8e8(void)

void FUN_14748a8e8(longlong *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  FUN_14748a242(param_1);
  return;
}



// FUNCTION 14748a95a FUN_14748a95a body=682 status=ok
// SIG undefined FUN_14748a95a(void)

void FUN_14748a95a(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    if (param_3 == '\0') {
      if ((*(longlong *)(param_1 + 0x1e0) == 0) && (*(char *)(param_1 + 200) == '\x01')) {
        FUN_14748a41e(param_1 + -0x390);
      }
      uVar7 = FUN_1447210f0(param_1 + -0x390);
      fVar10 = (float)FUN_144a7c670(uVar7);
      local_68 = (double)fVar10;
      local_78 = 0;
      uStack_70 = 0;
      uVar7 = *(undefined8 *)(param_1 + 0x138);
      lVar8 = FUN_144800528();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      uVar4 = *(undefined1 *)(lVar9 + 0x164);
      lVar8 = FUN_144800528();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      uVar5 = *(undefined4 *)(lVar9 + 0x170);
      lVar8 = FUN_144800528();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      uVar2 = *(undefined4 *)(lVar9 + 0x16c);
      lVar8 = FUN_144800528();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      uVar3 = *(undefined4 *)(lVar9 + 0x160);
      lVar8 = FUN_144800528();
      lVar9 = *(longlong *)(lVar8 + 0x110);
      if (lVar9 == 0) {
        FUN_140aa6c08(lVar8);
        lVar9 = *(longlong *)(lVar8 + 0x110);
      }
      local_a8 = uVar3;
      local_a0 = uVar2;
      local_98 = uVar5;
      local_90 = uVar4;
      FUN_14037ebae(uVar7,&local_78,param_2,*(undefined4 *)(lVar9 + 0x15c));
      FUN_142a2eba8(*(undefined8 *)(param_1 + 0x138));
    }
    else {
      FUN_140a1e722(*(longlong *)(param_1 + 0x1c0),&local_80,(double)(float)param_2);
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_80 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_80)(local_80,1);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    if (*(int *)(param_1 + 0x1d4) < 0) {
      FUN_145901ea4(param_1 + 0x1c8,0);
    }
    lVar9 = FUN_14298adc4(*(longlong *)(param_1 + 0x1c0) + 0x70);
    while (lVar9 != 0) {
      iVar6 = *(int *)(param_1 + 0x1d0);
      *(uint *)(param_1 + 0x1d0) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x1d4) < iVar6 + 1U) {
        FUN_1456fe4d2(param_1 + 0x1c8,iVar6);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar6 * 8) = lVar9;
      lVar9 = FUN_14298adc4(*(longlong *)(param_1 + 0x1c0) + 0x70);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748ac32 FUN_14748ac32 body=172 status=ok
// SIG undefined FUN_14748ac32(void)

longlong FUN_14748ac32(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14475cc44(param_1 + 8,&local_20);
    puVar3 = local_20;
    if (local_18 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = FUN_144a797b2();
    local_30 = 0;
    local_40 = 0;
    local_38 = 1;
    local_48 = 0;
    lVar2 = FUN_1412ecd05(uVar1,0,puVar3,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) goto LAB_14748acbf;
  }
  lVar2 = FUN_14119cd9e();
LAB_14748acbf:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14748ace2 FUN_14748ace2 body=45 status=ok
// SIG undefined FUN_14748ace2(void)

longlong FUN_14748ace2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748ad10 FUN_14748ad10 body=45 status=ok
// SIG undefined FUN_14748ad10(void)

longlong FUN_14748ad10(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748ad3e FUN_14748ad3e body=45 status=ok
// SIG undefined FUN_14748ad3e(void)

longlong FUN_14748ad3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c1e616(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748ad94 FUN_14748ad94 body=74 status=ok
// SIG undefined FUN_14748ad94(void)

undefined8 FUN_14748ad94(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x378);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748ae34 FUN_14748ae34 body=54 status=ok
// SIG undefined FUN_14748ae34(void)

undefined1 FUN_14748ae34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14748af5a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14748ae92 FUN_14748ae92 body=59 status=ok
// SIG undefined FUN_14748ae92(void)

undefined8 FUN_14748ae92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748aed8 FUN_14748aed8 body=51 status=ok
// SIG undefined FUN_14748aed8(void)

void FUN_14748aed8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((char)param_2[8] == '\x01') {
    if (*param_2 != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14748af5a FUN_14748af5a body=290 status=ok
// SIG undefined FUN_14748af5a(void)

longlong * FUN_14748af5a(longlong *param_1,longlong *param_2)

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



// FUNCTION 14748b0d2 FUN_14748b0d2 body=54 status=ok
// SIG undefined FUN_14748b0d2(void)

undefined1 FUN_14748b0d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14748b1f8(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14748b130 FUN_14748b130 body=59 status=ok
// SIG undefined FUN_14748b130(void)

undefined8 FUN_14748b130(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748b176 FUN_14748b176 body=51 status=ok
// SIG undefined FUN_14748b176(void)

void FUN_14748b176(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((char)param_2[8] == '\x01') {
    if (*param_2 != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14748b1f8 FUN_14748b1f8 body=290 status=ok
// SIG undefined FUN_14748b1f8(void)

longlong * FUN_14748b1f8(longlong *param_1,longlong *param_2)

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



// FUNCTION 14748b370 FUN_14748b370 body=54 status=ok
// SIG undefined FUN_14748b370(void)

undefined1 FUN_14748b370(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14748b496(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14748b3ce FUN_14748b3ce body=59 status=ok
// SIG undefined FUN_14748b3ce(void)

undefined8 FUN_14748b3ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748b414 FUN_14748b414 body=51 status=ok
// SIG undefined FUN_14748b414(void)

void FUN_14748b414(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((char)param_2[8] == '\x01') {
    if (*param_2 != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14748b496 FUN_14748b496 body=290 status=ok
// SIG undefined FUN_14748b496(void)

longlong * FUN_14748b496(longlong *param_1,longlong *param_2)

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



// FUNCTION 14748b612 FUN_14748b612 body=46 status=ok
// SIG undefined FUN_14748b612(void)

void FUN_14748b612(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(param_2 + 8);
  return;
}



// FUNCTION 14748b656 FUN_14748b656 body=73 status=ok
// SIG undefined FUN_14748b656(void)

undefined1 FUN_14748b656(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140200ab6();
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14748b6c8 FUN_14748b6c8 body=59 status=ok
// SIG undefined FUN_14748b6c8(void)

undefined8 FUN_14748b6c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748b70e FUN_14748b70e body=54 status=ok
// SIG undefined FUN_14748b70e(void)

void FUN_14748b70e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_1400dbf0e(param_2 + 8);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14748b794 FUN_14748b794 body=211 status=ok
// SIG undefined FUN_14748b794(void)

int FUN_14748b794(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x50 + (longlong)iVar1 * 0x60)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x60);
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



// FUNCTION 14748b9f8 FUN_14748b9f8 body=63 status=ok
// SIG undefined FUN_14748b9f8(void)

undefined1 FUN_14748b9f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1432770c6(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 14748ba60 FUN_14748ba60 body=59 status=ok
// SIG undefined FUN_14748ba60(void)

undefined8 FUN_14748ba60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748bb88 FUN_14748bb88 body=59 status=ok
// SIG undefined FUN_14748bb88(void)

undefined8 FUN_14748bb88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748bc2a FUN_14748bc2a body=50 status=ok
// SIG undefined FUN_14748bc2a(void)

void FUN_14748bc2a(undefined8 param_1,undefined8 *param_2)

{
  FUN_145deecd4(param_2);
  *param_2 = &PTR_FUN_14a3ef280;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 14748bc5c FUN_14748bc5c body=50 status=ok
// SIG undefined FUN_14748bc5c(void)

void FUN_14748bc5c(undefined8 param_1,undefined8 *param_2)

{
  FUN_145deecd4(param_2);
  *param_2 = &PTR_FUN_14a3ef280;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 14748bcde FUN_14748bcde body=59 status=ok
// SIG undefined FUN_14748bcde(void)

undefined8 FUN_14748bcde(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748bd2a FUN_14748bd2a body=67 status=ok
// SIG undefined FUN_14748bd2a(void)

void FUN_14748bd2a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14a3ef280;
    if (param_2[0x10] != 0) {
      FUN_1400020a8();
    }
    FUN_145b0865a(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14748bdbe FUN_14748bdbe body=68 status=ok
// SIG undefined FUN_14748bdbe(void)

undefined8 * FUN_14748bdbe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3ef280;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145b0865a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748be02 FUN_14748be02 body=55 status=ok
// SIG undefined FUN_14748be02(void)

void FUN_14748be02(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8b78 == 0) {
    uVar1 = FUN_14125eb4e();
    DAT_14caa8b78 = FUN_140002ddd(FUN_14632a73f,uVar1,L"DataflowRigidSolverProxy");
  }
  return;
}



// FUNCTION 14748be3a FUN_14748be3a body=73 status=ok
// SIG undefined FUN_14748be3a(void)

undefined8 * FUN_14748be3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748be84 FUN_14748be84 body=32 status=ok
// SIG undefined FUN_14748be84(void)

undefined8 FUN_14748be84(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinderOptional");
  return param_2;
}



// FUNCTION 14748bea4 FUN_14748bea4 body=116 status=ok
// SIG undefined FUN_14748bea4(void)

void FUN_14748bea4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 200)) {
      uVar2 = uVar1 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,200,8);
  }
  return;
}



// FUNCTION 14748bf18 FUN_14748bf18 body=112 status=ok
// SIG undefined FUN_14748bf18(void)

void FUN_14748bf18(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x110)) {
      uVar2 = uVar1 / 0x110 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x110,8);
  }
  return;
}



// FUNCTION 14748bf88 FUN_14748bf88 body=207 status=ok
// SIG undefined FUN_14748bf88(void)

int FUN_14748bf88(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x60 + (longlong)iVar1 * 0x68)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x68);
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



// FUNCTION 14748c058 FUN_14748c058 body=116 status=ok
// SIG undefined FUN_14748c058(void)

void FUN_14748c058(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14748c0cc FUN_14748c0cc body=96 status=ok
// SIG undefined FUN_14748c0cc(void)

void FUN_14748c0cc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14075b7de(param_1,param_2,1);
  return;
}



// FUNCTION 14748c12c FUN_14748c12c body=311 status=ok
// SIG undefined FUN_14748c12c(void)

void FUN_14748c12c(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x68 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_14748c264(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[0xc];
        puVar8 = puVar7 + 0xc;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 14748c264 FUN_14748c264 body=87 status=ok
// SIG undefined FUN_14748c264(void)

void FUN_14748c264(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 100 + (longlong)param_2 * 0x68);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x60 + lVar5 * 0x68);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x68 + 0x60);
  FUN_14748c2bc();
  return;
}



// FUNCTION 14748c2bc FUN_14748c2bc body=78 status=ok
// SIG undefined FUN_14748c2bc(void)

void FUN_14748c2bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x68;
  *(undefined4 *)(lVar1 + 0x58 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x50 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1400dbf0e(lVar1 + lVar2 + 0x10);
  FUN_14748c058(param_1,param_2);
  return;
}



// FUNCTION 14748c30a FUN_14748c30a body=351 status=ok
// SIG undefined FUN_14748c30a(void)

undefined4 * FUN_14748c30a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14748c46a(param_1,local_48);
  FUN_14748c638(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14748c558(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x54) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
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
      FUN_14748c714(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748c46a FUN_14748c46a body=238 status=ok
// SIG undefined FUN_14748c46a(void)

int * FUN_14748c46a(longlong *param_1,int *param_2)

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
      FUN_1401284dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14748c558 FUN_14748c558 body=222 status=ok
// SIG undefined FUN_14748c558(void)

undefined8 FUN_14748c558(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_140171f20(param_1,param_2,&local_38);
    if (iVar1 != -1) {
      _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x60);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar1 * 0x60) != 0) {
        plVar3 = (longlong *)((longlong)_Dst + 0x30);
        if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x20);
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      memmove(_Dst,param_3,0x50);
      FUN_14748c69a(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_14748c57e;
    }
  }
  uVar2 = 0;
LAB_14748c57e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748c638 FUN_14748c638 body=98 status=ok
// SIG undefined FUN_14748c638(void)

longlong * FUN_14748c638(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  return param_1;
}



// FUNCTION 14748c69a FUN_14748c69a body=122 status=ok
// SIG undefined FUN_14748c69a(void)

void FUN_14748c69a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 14748c714 FUN_14748c714 body=514 status=ok
// SIG undefined FUN_14748c714(void)

void FUN_14748c714(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x60);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x60;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x54) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x50) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14748c918 FUN_14748c918 body=351 status=ok
// SIG undefined FUN_14748c918(void)

undefined4 * FUN_14748c918(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14748ca78(param_1,local_48);
  FUN_14748cc40(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14748cb66(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x54) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
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
      FUN_14748cd1c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748ca78 FUN_14748ca78 body=238 status=ok
// SIG undefined FUN_14748ca78(void)

int * FUN_14748ca78(longlong *param_1,int *param_2)

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
      FUN_1401284dc(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14748cb66 FUN_14748cb66 body=216 status=ok
// SIG undefined FUN_14748cb66(void)

undefined8 FUN_14748cb66(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar1 = FUN_14748b794(param_1,param_2,&local_38);
    if (iVar1 != -1) {
      _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x60);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar1 * 0x60) != 0) {
        plVar3 = (longlong *)((longlong)_Dst + 0x30);
        if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x20);
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      memmove(_Dst,param_3,0x50);
      FUN_14748cca2(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_14748cb8c;
    }
  }
  uVar2 = 0;
LAB_14748cb8c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748cc40 FUN_14748cc40 body=98 status=ok
// SIG undefined FUN_14748cc40(void)

longlong * FUN_14748cc40(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = *param_3;
  param_1[2] = lVar1;
  param_1[4] = 0;
  if (lVar1 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 4);
  }
  return param_1;
}



// FUNCTION 14748cca2 FUN_14748cca2 body=122 status=ok
// SIG undefined FUN_14748cca2(void)

void FUN_14748cca2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 14748cd1c FUN_14748cd1c body=514 status=ok
// SIG undefined FUN_14748cd1c(void)

void FUN_14748cd1c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x60);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x60;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x54) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x50) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14748cf32 FUN_14748cf32 body=322 status=ok
// SIG undefined FUN_14748cf32(void)

void FUN_14748cf32(longlong *param_1)

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



// FUNCTION 14748d076 FUN_14748d076 body=147 status=ok
// SIG undefined FUN_14748d076(void)

void FUN_14748d076(longlong param_1,int param_2)

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



// FUNCTION 14748d10a FUN_14748d10a body=53 status=ok
// SIG undefined FUN_14748d10a(void)

void FUN_14748d10a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
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



// FUNCTION 14748d140 FUN_14748d140 body=147 status=ok
// SIG undefined FUN_14748d140(void)

void FUN_14748d140(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
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



// FUNCTION 14748d1d4 FUN_14748d1d4 body=24 status=ok
// SIG undefined FUN_14748d1d4(void)

void FUN_14748d1d4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014748d1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14748d1ec FUN_14748d1ec body=29 status=ok
// SIG undefined FUN_14748d1ec(void)

undefined8 FUN_14748d1ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748d20a FUN_14748d20a body=31 status=ok
// SIG undefined FUN_14748d20a(void)

undefined8 FUN_14748d20a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748d246 FUN_14748d246 body=93 status=ok
// SIG undefined FUN_14748d246(void)

void FUN_14748d246(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3ef410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14748d2a4 FUN_14748d2a4 body=126 status=ok
// SIG undefined FUN_14748d2a4(void)

void FUN_14748d2a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3ef410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014748d313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14748d322 FUN_14748d322 body=21 status=ok
// SIG undefined FUN_14748d322(void)

undefined8 FUN_14748d322(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14748d33c FUN_14748d33c body=389 status=ok
// SIG undefined FUN_14748d33c(void)

void FUN_14748d33c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x390);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x620);
  if (lVar3 == 0) goto LAB_14748d36f;
  if (*(int *)(lVar3 + 0x30) == *(int *)(lVar2 + 0x6b8)) {
    if (*(int *)(lVar3 + 0x30) < 1) goto LAB_14748d36f;
    lVar7 = 0;
    lVar6 = 1;
    do {
      cVar5 = FUN_146e90c1a(*(longlong *)(lVar3 + 0x28) + lVar7,*(longlong *)(lVar2 + 0x6b0) + lVar7
                           );
      if (cVar5 == '\0') break;
      lVar7 = lVar7 + 200;
      bVar4 = lVar6 < *(int *)(lVar3 + 0x30);
      lVar6 = lVar6 + 1;
    } while (bVar4);
    if (cVar5 != '\0') goto LAB_14748d36f;
  }
  else if (*(int *)(lVar2 + 0x6b8) == 0) {
    iVar1 = *(int *)(lVar3 + 0x34);
    FUN_1408bc7be(*(undefined8 *)(lVar3 + 0x28));
    *(undefined4 *)(lVar3 + 0x30) = 0;
    if ((iVar1 < 0) && (*(int *)(lVar3 + 0x34) != 0)) {
      FUN_146eee2a6(lVar3 + 0x28,0);
    }
    goto LAB_14748d36f;
  }
  FUN_14748d4c2(lVar3 + 0x28,(longlong *)(lVar2 + 0x6b0));
LAB_14748d36f:
  iVar1 = *(int *)(lVar2 + 0x678);
  _Src = *(void **)(lVar2 + 0x670);
  *(int *)(lVar2 + 0x648) = iVar1;
  if (iVar1 == 0 && *(int *)(lVar2 + 0x64c) == 0) {
    *(undefined4 *)(lVar2 + 0x64c) = 0;
  }
  else {
    FUN_1401b309e((undefined8 *)(lVar2 + 0x640),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(lVar2 + 0x640),_Src,(longlong)iVar1 << 3);
    }
  }
  FUN_1474939fc(lVar2 + 0x650,lVar2 + 0x680);
  FUN_147493a4c(lVar2 + 0x660,lVar2 + 0x690);
  FUN_14748d520(lVar2 + 0x670);
  return;
}



// FUNCTION 14748d4c2 FUN_14748d4c2 body=93 status=ok
// SIG undefined FUN_14748d4c2(void)

undefined8 * FUN_14748d4c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1408bc7be(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146eecc00(param_1,iVar1);
      FUN_146eecc76(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14748d520 FUN_14748d520 body=105 status=ok
// SIG undefined FUN_14748d520(void)

void FUN_14748d520(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1402191ca(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_147493c04(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_147493c34(param_1 + 0x20);
  return;
}



// FUNCTION 14748d58e FUN_14748d58e body=75 status=ok
// SIG undefined FUN_14748d58e(void)

void FUN_14748d58e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14748d5da(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748d5da FUN_14748d5da body=301 status=ok
// SIG undefined FUN_14748d5da(void)

void FUN_14748d5da(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [36];
  int local_f4;
  undefined1 local_f0 [200];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (5 < iVar3) {
    local_f4 = *(int *)(param_1 + 0x30);
    puVar2 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_f4,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_f4);
      }
    }
    else {
      local_f4 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    iVar3 = local_f4;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_14748d762(local_f0);
      FUN_14748d708((longlong *)(param_1 + 0x28),local_f0,iVar3);
      FUN_14017126a(local_f0);
    }
    if (0 < local_f4) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        FUN_146e903f2(*(longlong *)(param_1 + 0x28) + lVar4,param_2);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 200;
      } while (lVar5 < local_f4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748d708 FUN_14748d708 body=89 status=ok
// SIG undefined FUN_14748d708(void)

void FUN_14748d708(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  FUN_147493f44(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14173150e(param_1,iVar1);
      }
      FUN_1403c2a98((longlong)iVar1 * 200 + *param_1,param_2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14748d762 FUN_14748d762 body=209 status=ok
// SIG undefined FUN_14748d762(void)

longlong FUN_14748d762(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1446ddc76(param_1,&DAT_149e02088,1);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1446ddc76(param_1 + 0x10,&DAT_149e02088,1);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x28) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x30) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x38) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x40) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x48) = 0x47efffffe0000000;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0x3f80000000000000;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return param_1;
}



// FUNCTION 14748d838 FUN_14748d838 body=391 status=ok
// SIG undefined FUN_14748d838(void)

void FUN_14748d838(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  FUN_14748d9c0(param_1,iVar1 != 0,local_25,local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748d9c0 FUN_14748d9c0 body=501 status=ok
// SIG undefined FUN_14748d9c0(void)

void FUN_14748d9c0(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  undefined2 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined1 local_100 [8];
  longlong local_f8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_5 != 0 && param_2 == '\x01') {
    if (*(longlong *)(param_1 + 0x620) != 0) {
      FUN_14748fd2e(local_100,param_3,param_5,param_4);
      if (local_f8 != 0) {
        iVar1 = *(int *)(param_1 + 0x6b8);
        *(uint *)(param_1 + 0x6b8) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x6bc) < iVar1 + 1U) {
          FUN_14173150e(param_1 + 0x6b0,iVar1);
        }
        FUN_1403c2a98((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x6b0),local_100);
        lVar3 = *(longlong *)(param_1 + 0xb0);
        if (((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
           (*(longlong *)(lVar3 + 0x288) != 0)) {
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            FUN_1446f470e(&local_1d0,&DAT_149dfb77a,1);
          }
          else {
            local_1d0 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x18);
            FUN_1400021e4(&local_1d0,&local_1c8);
            puVar4 = local_1c8;
            if (local_1c0 == 0) {
              puVar4 = &DAT_149dfb77a;
            }
            FUN_1446f470e(&local_1d0,puVar4,1);
            if (local_1c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_1403c2a98(&local_1c8,local_100);
          local_1b0 = (float)*(double *)(lVar3 + 0x6d0);
          local_1b8 = local_1d0;
          FUN_147c90c36(*(undefined8 *)(lVar3 + 0x288),&local_1c8);
          FUN_14017126a(&local_1c8);
        }
      }
      FUN_14017126a(local_100);
    }
    uVar2 = FUN_147490046(param_3);
    FUN_14748ff40(param_1 + 0x670,uVar2,param_5,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14748dbba FUN_14748dbba body=396 status=ok
// SIG undefined FUN_14748dbba(void)

void FUN_14748dbba(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  local_40 = 0;
  FUN_14748fc82(param_1,iVar1 != 0,local_25,local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748dd4c FUN_14748dd4c body=322 status=ok
// SIG undefined FUN_14748dd4c(void)

void FUN_14748dd4c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  FUN_14748de90(param_1,iVar1 != 0,&local_68,local_44);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748de90 FUN_14748de90 body=252 status=ok
// SIG undefined FUN_14748de90(void)

void FUN_14748de90(longlong *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [200];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      local_118 = *param_3;
      uStack_114 = param_3[1];
      uStack_110 = param_3[2];
      uStack_10c = param_3[3];
      local_108 = *(undefined8 *)(param_3 + 4);
      puVar2[1] = 0;
      FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
      *puVar2 = &PTR_FUN_149f62a30;
      *(undefined4 *)(puVar2 + 2) = param_4;
      *(undefined4 *)(puVar2 + 3) = local_118;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_114;
      *(undefined4 *)(puVar2 + 4) = uStack_110;
      *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_10c;
      puVar2[5] = local_108;
      FUN_1474900d2(local_f8,2,puVar2);
      FUN_14748f81c(param_1,local_f8,1);
      FUN_14017126a(local_f8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748df92 FUN_14748df92 body=396 status=ok
// SIG undefined FUN_14748df92(void)

void FUN_14748df92(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_25 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  local_40 = 1;
  FUN_14748fc82(param_1,iVar1 != 0,local_25,local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e124 FUN_14748e124 body=322 status=ok
// SIG undefined FUN_14748e124(void)

void FUN_14748e124(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  FUN_14748e268(param_1,iVar1 != 0,&local_68,local_44);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e268 FUN_14748e268 body=252 status=ok
// SIG undefined FUN_14748e268(void)

void FUN_14748e268(longlong *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [200];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      local_118 = *param_3;
      uStack_114 = param_3[1];
      uStack_110 = param_3[2];
      uStack_10c = param_3[3];
      local_108 = *(undefined8 *)(param_3 + 4);
      puVar2[1] = 0;
      FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
      *puVar2 = &PTR_FUN_149f62ae0;
      *(undefined4 *)(puVar2 + 2) = param_4;
      *(undefined4 *)(puVar2 + 3) = local_118;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_114;
      *(undefined4 *)(puVar2 + 4) = uStack_110;
      *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_10c;
      puVar2[5] = local_108;
      FUN_1474900d2(local_f8,2,puVar2);
      FUN_14748f81c(param_1,local_f8,1);
      FUN_14017126a(local_f8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e36a FUN_14748e36a body=410 status=ok
// SIG undefined FUN_14748e36a(void)

void FUN_14748e36a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  local_78 = local_48;
  FUN_14748e506(param_1,iVar1 != 0,&local_68,local_44);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e506 FUN_14748e506 body=487 status=ok
// SIG undefined FUN_14748e506(void)

void FUN_14748e506(longlong *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      local_148 = *param_3;
      uStack_144 = param_3[1];
      uStack_140 = param_3[2];
      uStack_13c = param_3[3];
      local_138 = *(undefined8 *)(param_3 + 4);
      puVar2[1] = 0;
      FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
      *puVar2 = &PTR_FUN_149f62b40;
      *(undefined4 *)(puVar2 + 2) = param_5;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f80000000000000;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 4) = param_4;
      *(undefined4 *)(puVar2 + 5) = local_148;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_144;
      *(undefined4 *)(puVar2 + 6) = uStack_140;
      *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_13c;
      puVar2[7] = local_138;
      *(undefined4 *)(puVar2 + 8) = 1;
      puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      local_168 = *param_3;
      uStack_164 = param_3[1];
      uStack_160 = param_3[2];
      uStack_15c = param_3[3];
      local_158 = *(undefined8 *)(param_3 + 4);
      puVar3[1] = 0;
      FUN_1446ddc76(puVar3 + 1,&DAT_149e02088,1);
      *puVar3 = &PTR_FUN_149f62ae0;
      *(undefined4 *)(puVar3 + 2) = 0x3f800000;
      *(undefined4 *)(puVar3 + 3) = local_168;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_164;
      *(undefined4 *)(puVar3 + 4) = uStack_160;
      *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_15c;
      puVar3[5] = local_158;
      puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar4[1] = 0;
      FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
      *puVar4 = &PTR_FUN_149f62ba0;
      *(undefined4 *)(puVar4 + 2) = 0x3f800000;
      puVar4[3] = puVar2;
      puVar4[4] = puVar3;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      FUN_1474900d2(local_128,2,puVar4);
      FUN_14748f81c(param_1,local_128,1);
      FUN_14017126a(local_128);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e6f2 FUN_14748e6f2 body=322 status=ok
// SIG undefined FUN_14748e6f2(void)

void FUN_14748e6f2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  FUN_14748e836(param_1,iVar1 != 0,&local_68,local_44);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e836 FUN_14748e836 body=273 status=ok
// SIG undefined FUN_14748e836(void)

void FUN_14748e836(longlong *param_1,char param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [200];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      local_118 = *param_3;
      uStack_114 = param_3[1];
      uStack_110 = param_3[2];
      uStack_10c = param_3[3];
      local_108 = *(undefined8 *)(param_3 + 4);
      puVar2[1] = 0;
      FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
      *puVar2 = &PTR_FUN_149f62c00;
      *(undefined4 *)(puVar2 + 2) = param_4;
      *(undefined4 *)(puVar2 + 3) = local_118;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_114;
      *(undefined4 *)(puVar2 + 4) = uStack_110;
      *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_10c;
      puVar2[5] = local_108;
      puVar2[6] = 0x200000004;
      *(undefined4 *)(puVar2 + 7) = 1;
      FUN_1474900d2(local_f8,1,puVar2);
      FUN_14748f81c(param_1,local_f8,1);
      FUN_14017126a(local_f8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748e94c FUN_14748e94c body=480 status=ok
// SIG undefined FUN_14748e94c(void)

void FUN_14748e94c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  local_78 = local_48;
  FUN_14748eb2e(param_1,iVar1 != 0,&local_68,local_44);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748eb2e FUN_14748eb2e body=310 status=ok
// SIG undefined FUN_14748eb2e(void)

void FUN_14748eb2e(longlong *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_108 [200];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      local_128 = *param_3;
      uStack_124 = param_3[1];
      uStack_120 = param_3[2];
      uStack_11c = param_3[3];
      local_118 = *(undefined8 *)(param_3 + 4);
      puVar2[1] = 0;
      FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
      *puVar2 = &PTR_FUN_149f62b40;
      *(undefined4 *)(puVar2 + 2) = param_5;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f80000000000000;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 4) = param_4;
      *(undefined4 *)(puVar2 + 5) = local_128;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_124;
      *(undefined4 *)(puVar2 + 6) = uStack_120;
      *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_11c;
      puVar2[7] = local_118;
      *(undefined4 *)(puVar2 + 8) = 1;
      FUN_1474900d2(local_108,3,puVar2);
      FUN_14748f81c(param_1,local_108,1);
      FUN_14017126a(local_108);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748ec6a FUN_14748ec6a body=534 status=ok
// SIG undefined FUN_14748ec6a(void)

void FUN_14748ec6a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
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
  local_60 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_68 = local_48;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = uStack_34;
  local_88 = local_30;
  local_a0 = local_60;
  local_a8 = local_5c;
  FUN_14748ee82(param_1,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748ee82 FUN_14748ee82 body=497 status=ok
// SIG undefined FUN_14748ee82(void)

void FUN_14748ee82(longlong *param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      local_148 = *param_3;
      uStack_144 = param_3[1];
      uStack_140 = param_3[2];
      uStack_13c = param_3[3];
      local_138 = *(undefined8 *)(param_3 + 4);
      puVar2[1] = 0;
      FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
      *puVar2 = &PTR_FUN_149f62b40;
      *(undefined4 *)(puVar2 + 2) = param_6;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f80000000000000;
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined4 *)(puVar2 + 4) = param_5;
      *(undefined4 *)(puVar2 + 5) = local_148;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_144;
      *(undefined4 *)(puVar2 + 6) = uStack_140;
      *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_13c;
      puVar2[7] = local_138;
      *(undefined4 *)(puVar2 + 8) = 1;
      puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      local_168 = *param_4;
      uStack_164 = param_4[1];
      uStack_160 = param_4[2];
      uStack_15c = param_4[3];
      local_158 = *(undefined8 *)(param_4 + 4);
      puVar3[1] = 0;
      FUN_1446ddc76(puVar3 + 1,&DAT_149e02088,1);
      *puVar3 = &PTR_FUN_149f62a30;
      *(undefined4 *)(puVar3 + 2) = 0x3f800000;
      *(undefined4 *)(puVar3 + 3) = local_168;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_164;
      *(undefined4 *)(puVar3 + 4) = uStack_160;
      *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_15c;
      puVar3[5] = local_158;
      puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar4[1] = 0;
      FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
      *puVar4 = &PTR_FUN_149f62ba0;
      *(undefined4 *)(puVar4 + 2) = 0x3f800000;
      puVar4[3] = puVar2;
      puVar4[4] = puVar3;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      FUN_1474900d2(local_128,2,puVar4);
      FUN_14748f81c(param_1,local_128,1);
      FUN_14017126a(local_128);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748f0a0 FUN_14748f0a0 body=113 status=ok
// SIG undefined FUN_14748f0a0(void)

void FUN_14748f0a0(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x620) != 0) {
    iVar1 = *(int *)(param_1 + 0x6bc);
    FUN_1408bc7be(*(undefined8 *)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x6b8));
    *(undefined4 *)(param_1 + 0x6b8) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x6bc) != 0)) {
      FUN_146eee2a6(param_1 + 0x6b0,0);
    }
  }
  FUN_14748d520(param_1 + 0x640);
  FUN_14748d520(param_1 + 0x670);
  return;
}



// FUNCTION 14748f124 FUN_14748f124 body=450 status=ok
// SIG undefined FUN_14748f124(void)

longlong * FUN_14748f124(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x638)) {
    lVar7 = *(longlong *)(param_1 + 0x630);
    lVar9 = (longlong)*(int *)(param_1 + 0x638) * 0x28;
    do {
      lVar6 = FUN_14748f2e8(lVar7);
      uVar4 = uStack_70;
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(lVar6 + 0x550);
        lVar6 = (longlong)(int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_14013439c(&local_78,uVar4 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar6 * 8) = uVar2;
      }
      lVar7 = lVar7 + 0x28;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) &&
     (*(longlong *)(lVar7 + 0x260) != 0)) {
    lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x260) + 0x38);
    uStack_80 = CONCAT44(uStack_80._4_4_,1);
    FUN_14013439c(&local_88,0);
    *local_88 = lVar9;
    FUN_1401342a6(*(undefined8 *)(param_1 + 0x6a0),lVar7,&local_88);
    if ((longlong)(int)uStack_80 != 0) {
      plVar1 = local_88 + (int)uStack_80;
      iVar3 = (int)uStack_70;
      plVar8 = local_88;
      do {
        lVar7 = *plVar8;
        if (iVar3 == 0) {
LAB_14748f257:
          lVar9 = param_2[1];
          uVar5 = (int)lVar9 + 1;
          *(uint *)(param_2 + 1) = uVar5;
          if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
            FUN_14013439c(param_2);
          }
          *(longlong *)(*param_2 + (longlong)(int)lVar9 * 8) = lVar7;
        }
        else if ((longlong)(int)uStack_70 != 0) {
          lVar9 = 0;
          do {
            if (*(longlong *)(local_78 + lVar9) == lVar7) goto LAB_14748f257;
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)uStack_70 * 8 != lVar9);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8(local_88);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14748f2e8 FUN_14748f2e8 body=197 status=ok
// SIG undefined FUN_14748f2e8(void)

longlong FUN_14748f2e8(longlong param_1)

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
  lVar4 = FUN_14119cd9e();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14748f3ae FUN_14748f3ae body=114 status=ok
// SIG undefined FUN_14748f3ae(void)

void FUN_14748f3ae(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_141255c6e();
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
    if (lVar3 == 0) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
  }
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    uVar2 = FUN_14091baa4();
    *(undefined8 *)(param_1 + 0x6a0) = uVar2;
    *(undefined1 *)(param_1 + 0x6a8) = 1;
  }
  return;
}



// FUNCTION 14748f420 FUN_14748f420 body=45 status=ok
// SIG undefined FUN_14748f420(void)

void FUN_14748f420(longlong param_1)

{
  FUN_1411096ca();
  FUN_14748f44e(param_1);
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined1 *)(param_1 + 0x6a8) = 0;
  return;
}



// FUNCTION 14748f44e FUN_14748f44e body=960 status=ok
// SIG undefined FUN_14748f44e(void)

void FUN_14748f44e(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  int local_138;
  longlong local_130;
  undefined1 local_128 [200];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar2 = (**(code **)(*param_1 + 0x360))();
  if (cVar2 != '\0') {
    if (*(char *)((longlong)param_1 + 0x629) == '\x01') {
      FUN_14748f124(param_1,&local_140);
      if ((longlong)local_138 != 0) {
        local_158 = local_140 + local_138;
        plVar6 = local_140;
        local_168 = param_1;
        do {
          local_160 = plVar6;
          if ((longlong)(int)local_168[0xd9] != 0) {
            local_148 = *plVar6;
            lVar3 = local_168[0xd8];
            local_150 = local_148 + 0x70;
            lVar7 = (longlong)(int)local_168[0xd9] * 200;
            do {
              local_130 = local_148;
              FUN_1403c2a98(local_128,lVar3);
              puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
              puVar5 = (undefined8 *)FUN_14001cc68(0xd8,8);
              *puVar5 = &PTR_LAB_14a3fdf40;
              puVar5[1] = local_130;
              pcVar9 = FUN_1432779fa;
              if (puVar5 + 1 == (longlong *)0x0) {
                pcVar9 = (code *)0x0;
              }
              FUN_1403c2a98(puVar5 + 2,local_128);
              *(undefined2 *)(puVar4 + 1) = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              puVar4[4] = 0;
              puVar4[5] = 0;
              *(undefined2 *)(puVar4 + 8) = 1;
              *puVar4 = &PTR_FUN_149f45dc0;
              puVar4[10] = pcVar9;
              puVar4[0xc] = puVar5;
              puVar4[0x12] = 0;
              puVar4[0x14] = 0;
              *(undefined1 *)(puVar4 + 0x1a) = 0;
              FUN_1406e6496(local_150,puVar4);
              FUN_14017126a(local_128);
              lVar3 = lVar3 + 200;
              lVar7 = lVar7 + -200;
            } while (lVar7 != 0);
          }
          plVar6 = local_160 + 1;
          param_1 = local_168;
        } while (plVar6 != local_158);
      }
      if (local_140 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0x6cc);
    FUN_1408bc7be(param_1[0xd8],(int)param_1[0xd9]);
    *(undefined4 *)(param_1 + 0xd9) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x6cc) != 0)) {
      FUN_146eee2a6(param_1 + 0xd8,0);
    }
    if (((((char)param_1[0xc5] != '\0') || (*(char *)((longlong)param_1 + 0x629) == '\x01')) &&
        ((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) &&
       (*(longlong *)(lVar3 + 0x288) != 0)) {
      if (((char)param_1[0xc5] == '\x01') && ((longlong)(int)param_1[0xdb] != 0)) {
        lVar7 = param_1[0xda];
        lVar8 = (longlong)(int)param_1[0xdb] * 200;
        do {
          FUN_147c90c82(*(undefined8 *)(lVar3 + 0x288),lVar7,1);
          lVar7 = lVar7 + 200;
          lVar8 = lVar8 + -200;
        } while (lVar8 != 0);
      }
      if ((*(char *)((longlong)param_1 + 0x629) == '\x01') && ((longlong)(int)param_1[0xdd] != 0)) {
        lVar7 = param_1[0xdc];
        lVar8 = (longlong)(int)param_1[0xdd] * 200;
        do {
          FUN_147c90c82(*(undefined8 *)(lVar3 + 0x288),lVar7,0);
          lVar7 = lVar7 + 200;
          lVar8 = lVar8 + -200;
        } while (lVar8 != 0);
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0x6dc);
    FUN_1408bc7be(param_1[0xda],(int)param_1[0xdb]);
    *(undefined4 *)(param_1 + 0xdb) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x6dc) != 0)) {
      FUN_146eee2a6(param_1 + 0xda,0);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x6ec);
    FUN_1408bc7be(param_1[0xdc],(int)param_1[0xdd]);
    *(undefined4 *)(param_1 + 0xdd) = 0;
    if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x6ec) != 0)) {
      FUN_146eee2a6(param_1 + 0xdc,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14748f81c FUN_14748f81c body=1125 status=ok
// SIG undefined FUN_14748f81c(void)

void FUN_14748f81c(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  int local_210;
  undefined8 local_208;
  undefined2 *local_200;
  int local_1f8 [2];
  undefined8 local_1f0;
  float local_1e8;
  char local_130;
  undefined8 local_128 [2];
  undefined8 local_118;
  float local_110;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar3 = (**(code **)(*param_1 + 0x360))();
  if ((cVar3 != '\0') && (*(longlong *)(param_2 + 8) != 0)) {
    if (param_1[0x15] == 0) {
      FUN_1446f470e(&local_208,&DAT_149dfb77a,1);
    }
    else {
      local_128[0] = *(undefined8 *)(param_1[0x15] + 0x18);
      FUN_1400021e4(local_128,&local_200);
      puVar7 = local_200;
      if (local_1f8[0] == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_208,puVar7,1);
      if (local_200 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(char *)((longlong)param_1 + 0x629) == '\x01') {
      FUN_14748f124(param_1,&local_218);
      if ((longlong)local_210 != 0) {
        local_230 = param_1 + 0xd8;
        local_228 = (longlong)local_210 << 3;
        lVar4 = 0;
        local_220 = local_218;
        local_238 = param_1;
        do {
          uVar2 = local_208;
          puVar7 = *(undefined2 **)(local_220 + lVar4);
          FUN_1403c2a98(local_128,param_2);
          local_110 = (float)*(double *)(puVar7 + 0xfc);
          local_118 = uVar2;
          if (param_3 == '\0') {
            iVar1 = (int)local_238[0xd9];
            *(uint *)(local_238 + 0xd9) = iVar1 + 1U;
            if (*(uint *)((longlong)local_238 + 0x6cc) < iVar1 + 1U) {
              FUN_14173150e(local_230,iVar1);
            }
            FUN_1403c2a98((longlong)iVar1 * 200 + *local_230,local_128);
          }
          local_200 = puVar7;
          FUN_1403c2a98(local_1f8,local_128);
          local_130 = param_3;
          puVar5 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
          puVar6 = (undefined8 *)FUN_14001cc68(0xe0,8);
          *puVar6 = &PTR_LAB_14a3fdf20;
          puVar6[1] = local_200;
          puVar8 = &LAB_143277942;
          if (puVar6 + 1 == (undefined8 *)0x0) {
            puVar8 = (undefined1 *)0x0;
          }
          FUN_1403c2a98(puVar6 + 2,local_1f8);
          *(char *)(puVar6 + 0x1b) = local_130;
          *(undefined2 *)(puVar5 + 1) = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          *(undefined2 *)(puVar5 + 8) = 1;
          *puVar5 = &PTR_FUN_149f45dc0;
          puVar5[10] = puVar8;
          puVar5[0xc] = puVar6;
          puVar5[0x12] = 0;
          puVar5[0x14] = 0;
          *(undefined1 *)(puVar5 + 0x1a) = 0;
          FUN_1406e6496(puVar7 + 0x38,puVar5);
          FUN_14017126a(local_1f8);
          FUN_14017126a(local_128);
          lVar4 = lVar4 + 8;
          param_1 = local_238;
        } while (local_228 != lVar4);
      }
      if (local_218 != 0) {
        FUN_1400020a8();
      }
    }
    if (((((char)param_1[0xc5] != '\0') || (*(char *)((longlong)param_1 + 0x629) == '\x01')) &&
        ((lVar4 = param_1[0x16], lVar4 != 0 || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
       (*(longlong *)(lVar4 + 0x288) != 0)) {
      FUN_1403c2a98(&local_200,param_2);
      local_1e8 = (float)*(double *)(lVar4 + 0x6d0);
      local_1f0 = local_208;
      if (param_3 == '\0') {
        if ((char)param_1[0xc5] != '\0') {
          iVar1 = (int)param_1[0xdb];
          *(uint *)(param_1 + 0xdb) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x6dc) < iVar1 + 1U) {
            FUN_14173150e(param_1 + 0xda,iVar1);
          }
          FUN_1403c2a98((longlong)iVar1 * 200 + param_1[0xda],&local_200);
          FUN_147c90b7a(*(undefined8 *)(lVar4 + 0x288),&local_200,1);
        }
        if (*(char *)((longlong)param_1 + 0x629) == '\x01') {
          iVar1 = (int)param_1[0xdd];
          *(uint *)(param_1 + 0xdd) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x6ec) < iVar1 + 1U) {
            FUN_14173150e(param_1 + 0xdc,iVar1);
          }
          FUN_1403c2a98((longlong)iVar1 * 200 + param_1[0xdc],&local_200);
          FUN_147c90b7a(*(undefined8 *)(lVar4 + 0x288),&local_200,0);
        }
      }
      else {
        if ((char)param_1[0xc5] != '\0') {
          FUN_147c90abe(*(undefined8 *)(lVar4 + 0x288),&local_200,1);
        }
        if (*(char *)((longlong)param_1 + 0x629) == '\x01') {
          FUN_147c90abe(*(undefined8 *)(lVar4 + 0x288),&local_200,0);
        }
      }
      FUN_14017126a(&local_200);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14748fc82 FUN_14748fc82 body=170 status=ok
// SIG undefined FUN_14748fc82(void)

void FUN_14748fc82(longlong *param_1,char param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [40];
  undefined1 local_100 [200];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_5 != 0 && param_2 == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x360))();
    if (cVar1 != '\0') {
      FUN_14748fd2e(local_100,param_3,param_5,param_4);
      FUN_14748f81c(param_1,local_100,
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff);
      FUN_14017126a(local_100);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748fd2e FUN_14748fd2e body=528 status=ok
// SIG undefined FUN_14748fd2e(void)

longlong FUN_14748fd2e(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == (longlong *)0x0) {
    FUN_14748d762(param_1);
    if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  local_48 = 0;
  uStack_40 = 0;
  uVar6 = (**(code **)(*param_3 + 0x488))(param_3);
  FUN_1403c23ea(param_1,param_2,uVar6);
  if ((param_4 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
    iVar5 = (**(code **)(*param_4 + 0x478))(param_4);
    if (iVar5 == 5) {
      local_38 = &local_4c;
      local_4c = 5;
      FUN_1403c22bc(param_1 + 0x78,&local_2c,&local_38,0);
      lVar10 = *(longlong *)(param_1 + 0x78);
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      bVar1 = *(byte *)((longlong)param_4 + 0x112);
      bVar2 = *(byte *)((longlong)param_4 + 0x111);
      bVar3 = *(byte *)(param_4 + 0x22);
      *puVar7 = &PTR_FUN_14a3fdee0;
      *(uint *)(puVar7 + 1) = (uint)bVar3;
      *(uint *)((longlong)puVar7 + 0xc) = (uint)bVar2;
      *(uint *)(puVar7 + 2) = (uint)bVar1;
    }
    else {
      if (iVar5 == 3) {
        local_38 = &local_4c;
        local_4c = 3;
        FUN_1403c22bc(param_1 + 0x78,&local_2c,&local_38,0);
        lVar10 = *(longlong *)(param_1 + 0x78);
        puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar8 = *(uint *)(param_4 + 0x22);
        ppuVar9 = &PTR_FUN_14a3fdf00;
      }
      else {
        if (iVar5 != 1) goto LAB_14748fe7b;
        local_38 = &local_4c;
        local_4c = 1;
        FUN_1403c22bc(param_1 + 0x78,&local_2c,&local_38,0);
        lVar10 = *(longlong *)(param_1 + 0x78);
        puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        uVar8 = (uint)*(byte *)(param_4 + 0x22);
        ppuVar9 = &PTR_FUN_149f6da10;
      }
      *puVar7 = ppuVar9;
      *(uint *)(puVar7 + 1) = uVar8;
    }
    puVar4 = *(undefined8 **)(lVar10 + 8 + (longlong)local_2c * 0x18);
    if ((puVar4 != puVar7) &&
       (*(undefined8 **)(lVar10 + (longlong)local_2c * 0x18 + 8) = puVar7,
       puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
LAB_14748fe7b:
  FUN_1403c221c(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 14748ff40 FUN_14748ff40 body=262 status=ok
// SIG undefined FUN_14748ff40(void)

void FUN_14748ff40(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147493c64(param_1 + 2,iVar1);
  }
  *(undefined8 *)(param_1[2] + (longlong)iVar1 * 8) = param_3;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  if ((param_4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_4);
  }
  iVar1 = (int)param_1[5];
  *(uint *)(param_1 + 5) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2c) < iVar1 + 1U) {
    FUN_147493cea(param_1 + 4,iVar1);
  }
  *(longlong *)(param_1[4] + (longlong)iVar1 * 8) = param_4;
  if ((param_4 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_4);
    return;
  }
  return;
}



// FUNCTION 147490046 FUN_147490046 body=139 status=ok
// SIG undefined FUN_147490046(void)

undefined8 * FUN_147490046(uint param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)FUN_1403c252d();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa8fc8) {
    FUN_144b3d300(&DAT_14caa8fc8);
    if (DAT_14caa8fc8 == -1) {
      FUN_1446ddc76(&DAT_14caa8fc0,&DAT_149e02088,1);
      _Init_thread_footer(&DAT_14caa8fc8);
    }
  }
  puVar2 = &DAT_14caa8fc0;
  if ((int)param_1 < (int)plVar1[1]) {
    puVar2 = (undefined8 *)((ulonglong)param_1 * 8 + *plVar1);
  }
  return puVar2;
}



// FUNCTION 1474900d2 FUN_1474900d2 body=42 status=ok
// SIG undefined FUN_1474900d2(void)

undefined8 FUN_1474900d2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == 0) {
    FUN_14748d762();
  }
  else {
    FUN_1403c23ea();
    FUN_1403c221c(param_1);
  }
  return param_1;
}



// FUNCTION 147490100 FUN_147490100 body=160 status=ok
// SIG undefined FUN_147490100(void)

void FUN_147490100(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474901a4 FUN_1474901a4 body=157 status=ok
// SIG undefined FUN_1474901a4(void)

void FUN_1474901a4(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x110) = local_21;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147490246 FUN_147490246 body=332 status=ok
// SIG undefined FUN_147490246(void)

void FUN_147490246(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [37];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_22 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  local_23 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_23);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_23);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x110) = local_21;
  *(undefined1 *)(param_1 + 0x111) = local_22;
  *(undefined1 *)(param_1 + 0x112) = local_23;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474903a6 FUN_1474903a6 body=160 status=ok
// SIG undefined FUN_1474903a6(void)

void FUN_1474903a6(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749044a FUN_14749044a body=522 status=ok
// SIG undefined FUN_14749044a(void)

void FUN_14749044a(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *(undefined4 *)(param_1 + 0x118) = local_40;
  *(undefined4 *)(param_1 + 0x11c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x120) = uStack_38;
  *(undefined4 *)(param_1 + 0x124) = uStack_34;
  *(undefined8 *)(param_1 + 0x128) = local_30;
  *(undefined4 *)(param_1 + 0x130) = local_44;
  *(undefined4 *)(param_1 + 0x134) = local_48;
  *(undefined1 *)(param_1 + 0x138) = local_49;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147490658 FUN_147490658 body=164 status=ok
// SIG undefined FUN_147490658(void)

void FUN_147490658(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147490700 FUN_147490700 body=691 status=ok
// SIG undefined FUN_147490700(void)

void FUN_147490700(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [42];
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  local_4e = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4e);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4e);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *(undefined4 *)(param_1 + 0x118) = local_40;
  *(undefined4 *)(param_1 + 0x11c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x120) = uStack_38;
  *(undefined4 *)(param_1 + 0x124) = uStack_34;
  *(undefined8 *)(param_1 + 0x128) = local_30;
  *(undefined4 *)(param_1 + 0x130) = local_44;
  *(undefined4 *)(param_1 + 0x134) = local_48;
  *(undefined1 *)(param_1 + 0x138) = local_4d;
  *(undefined1 *)(param_1 + 0x139) = local_4e;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474909b8 FUN_1474909b8 body=712 status=ok
// SIG undefined FUN_1474909b8(void)

void FUN_1474909b8(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_51 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *(undefined4 *)(param_1 + 0x114) = local_28;
  *(undefined4 *)(param_1 + 0x118) = local_2c;
  *(undefined4 *)(param_1 + 0x11c) = local_30;
  *(undefined4 *)(param_1 + 0x120) = local_34;
  *(undefined4 *)(param_1 + 0x128) = local_50;
  *(undefined4 *)(param_1 + 300) = uStack_4c;
  *(undefined4 *)(param_1 + 0x130) = uStack_48;
  *(undefined4 *)(param_1 + 0x134) = uStack_44;
  *(undefined8 *)(param_1 + 0x138) = local_40;
  *(undefined1 *)(param_1 + 0x140) = local_51;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147490c84 FUN_147490c84 body=811 status=ok
// SIG undefined FUN_147490c84(void)

void FUN_147490c84(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *(undefined4 *)(param_1 + 0x114) = local_28;
  *(undefined4 *)(param_1 + 0x118) = local_2c;
  *(undefined4 *)(param_1 + 0x11c) = local_30;
  *(undefined4 *)(param_1 + 0x128) = local_50;
  *(undefined4 *)(param_1 + 300) = uStack_4c;
  *(undefined4 *)(param_1 + 0x130) = uStack_48;
  *(undefined4 *)(param_1 + 0x134) = uStack_44;
  *(undefined8 *)(param_1 + 0x138) = local_40;
  *(undefined4 *)(param_1 + 0x120) = local_34;
  *(undefined4 *)(param_1 + 0x140) = local_68;
  *(undefined4 *)(param_1 + 0x144) = uStack_64;
  *(undefined4 *)(param_1 + 0x148) = uStack_60;
  *(undefined4 *)(param_1 + 0x14c) = uStack_5c;
  *(undefined8 *)(param_1 + 0x150) = local_58;
  *(undefined1 *)(param_1 + 0x158) = local_69;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147490fb4 FUN_147490fb4 body=747 status=ok
// SIG undefined FUN_147490fb4(void)

void FUN_147490fb4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_2c;
  *(undefined4 *)(param_1 + 0x114) = local_30;
  *(undefined4 *)(param_1 + 0x118) = local_34;
  *(undefined4 *)(param_1 + 0x11c) = local_38;
  puVar2 = local_98;
  puVar3 = (undefined8 *)(param_1 + 0x120);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x180) = local_99;
  *param_3 = param_1;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474912a4 FUN_1474912a4 body=451 status=ok
// SIG undefined FUN_1474912a4(void)

void FUN_1474912a4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_2c;
  *(undefined4 *)(param_1 + 0x114) = local_30;
  puVar2 = local_98;
  puVar3 = (undefined8 *)(param_1 + 0x120);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_3 = param_1;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749146c FUN_14749146c body=264 status=ok
// SIG undefined FUN_14749146c(void)

void FUN_14749146c(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *(undefined4 *)(param_1 + 0x118) = local_40;
  *(undefined4 *)(param_1 + 0x11c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x120) = uStack_38;
  *(undefined4 *)(param_1 + 0x124) = uStack_34;
  *(undefined8 *)(param_1 + 0x128) = local_30;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147491578 FUN_147491578 body=264 status=ok
// SIG undefined FUN_147491578(void)

void FUN_147491578(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *(undefined4 *)(param_1 + 0x118) = local_40;
  *(undefined4 *)(param_1 + 0x11c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x120) = uStack_38;
  *(undefined4 *)(param_1 + 0x124) = uStack_34;
  *(undefined8 *)(param_1 + 0x128) = local_30;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147491684 FUN_147491684 body=164 status=ok
// SIG undefined FUN_147491684(void)

void FUN_147491684(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x110) = local_24;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749172c FUN_14749172c body=392 status=ok
// SIG undefined FUN_14749172c(void)

void FUN_14749172c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  uint local_48;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (uint)local_39;
  FUN_1474918b6(param_1,local_24,local_30,local_38);
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474918b6 FUN_1474918b6 body=118 status=ok
// SIG undefined FUN_1474918b6(void)

longlong FUN_1474918b6(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                      undefined1 param_5)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 0x110) = param_2;
  if (param_4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_4);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x118) = param_4;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x120) = param_3;
  *(undefined1 *)(param_1 + 0x128) = param_5;
  return param_1;
}



// FUNCTION 147491930 FUN_147491930 body=187 status=ok
// SIG undefined FUN_147491930(void)

void FUN_147491930(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  *(longlong *)(param_1 + 0x110) = lVar1;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474919f0 FUN_1474919f0 body=187 status=ok
// SIG undefined FUN_1474919f0(void)

void FUN_1474919f0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  *(longlong *)(param_1 + 0x110) = lVar1;
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147491ab0 FUN_147491ab0 body=313 status=ok
// SIG undefined FUN_147491ab0(void)

void FUN_147491ab0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147491bea(param_1,local_28,local_30,local_31);
  *param_3 = param_1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147491bea FUN_147491bea body=111 status=ok
// SIG undefined FUN_147491bea(void)

longlong FUN_147491bea(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  byte bVar1;
  
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x110) = param_2;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x118) = param_3;
  *(undefined1 *)(param_1 + 0x120) = param_4;
  return param_1;
}



// FUNCTION 147491c74 FUN_147491c74 body=49 status=ok
// SIG undefined FUN_147491c74(void)

void FUN_147491c74(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  bVar1 = *(byte *)(param_1 + 0x110);
  *puVar2 = &PTR_FUN_149f6da10;
  *(uint *)(puVar2 + 1) = (uint)bVar1;
  return;
}



// FUNCTION 147491ca6 FUN_147491ca6 body=71 status=ok
// SIG undefined FUN_147491ca6(void)

void FUN_147491ca6(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  bVar1 = *(byte *)(param_1 + 0x112);
  bVar2 = *(byte *)(param_1 + 0x111);
  bVar3 = *(byte *)(param_1 + 0x110);
  *puVar4 = &PTR_FUN_14a3fdee0;
  *(uint *)(puVar4 + 1) = (uint)bVar3;
  *(uint *)((longlong)puVar4 + 0xc) = (uint)bVar2;
  *(uint *)(puVar4 + 2) = (uint)bVar1;
  return;
}



// FUNCTION 147491cee FUN_147491cee body=48 status=ok
// SIG undefined FUN_147491cee(void)

void FUN_147491cee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  *puVar2 = &PTR_FUN_14a3fdf00;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}



// FUNCTION 147491d1e FUN_147491d1e body=166 status=ok
// SIG undefined FUN_147491d1e(void)

undefined8 * FUN_147491d1e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *param_2;
  iVar1 = (int)param_2[1];
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 - lVar5 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147493f8a(param_2,iVar1);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar6 * 8) = param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x110);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f613b0;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  return puVar4;
}



// FUNCTION 147491dc4 FUN_147491dc4 body=291 status=ok
// SIG undefined FUN_147491dc4(void)

undefined8 * FUN_147491dc4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  iVar3 = (int)param_2[1];
  lVar8 = (longlong)iVar3;
  if (lVar8 != 0) {
    puVar6 = (undefined8 *)0x0;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar7) == param_1) goto LAB_147491eac;
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 - lVar7 != 0);
  }
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147493f8a(param_2,iVar3);
    lVar5 = *param_2;
  }
  *(longlong *)(lVar5 + lVar8 * 8) = param_1;
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  bVar2 = *(byte *)(param_1 + 0x138);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  local_58 = *(undefined4 *)(param_1 + 0x118);
  uStack_54 = *(undefined4 *)(param_1 + 0x11c);
  uStack_50 = *(undefined4 *)(param_1 + 0x120);
  uStack_4c = *(undefined4 *)(param_1 + 0x124);
  local_48 = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puVar6[1] = 0;
  FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
  *puVar6 = &PTR_FUN_149f62c00;
  *(undefined4 *)(puVar6 + 2) = uVar1;
  *(undefined4 *)(puVar6 + 3) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_54;
  *(undefined4 *)(puVar6 + 4) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_4c;
  puVar6[5] = local_48;
  puVar6[6] = uVar4;
  *(uint *)(puVar6 + 7) = (uint)bVar2;
LAB_147491eac:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147491ee8 FUN_147491ee8 body=180 status=ok
// SIG undefined FUN_147491ee8(void)

undefined8 * FUN_147491ee8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *param_2;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 - lVar5 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar6 * 8) = param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f61410;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  return puVar4;
}



// FUNCTION 147491f9c FUN_147491f9c body=246 status=ok
// SIG undefined FUN_147491f9c(void)

undefined8 * FUN_147491f9c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = *param_2;
  iVar4 = (int)param_2[1];
  lVar10 = (longlong)iVar4;
  if (lVar10 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar9) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 - lVar9 != 0);
  }
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_147493f8a(param_2,iVar4);
    lVar7 = *param_2;
  }
  *(longlong *)(lVar7 + lVar10 * 8) = param_1;
  puVar8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  bVar2 = *(byte *)(param_1 + 0x139);
  bVar3 = *(byte *)(param_1 + 0x138);
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puVar8[1] = 0;
  FUN_1446ddc76(puVar8 + 1,&DAT_149e02088,1);
  *puVar8 = &PTR_FUN_149f61470;
  *(undefined4 *)(puVar8 + 2) = uVar1;
  uVar6 = *(undefined8 *)(param_1 + 0x120);
  puVar8[3] = *(undefined8 *)(param_1 + 0x118);
  puVar8[4] = uVar6;
  puVar8[5] = *(undefined8 *)(param_1 + 0x128);
  puVar8[6] = uVar5;
  *(uint *)(puVar8 + 7) = (uint)bVar3;
  *(uint *)((longlong)puVar8 + 0x3c) = (uint)bVar2;
  return puVar8;
}



// FUNCTION 147492092 FUN_147492092 body=301 status=ok
// SIG undefined FUN_147492092(void)

undefined8 * FUN_147492092(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_2;
  iVar3 = (int)param_2[1];
  lVar9 = (longlong)iVar3;
  if (lVar9 != 0) {
    puVar7 = (undefined8 *)0x0;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar8) == param_1) goto LAB_14749217f;
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 - lVar8 != 0);
  }
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147493f8a(param_2,iVar3);
    lVar6 = *param_2;
  }
  *(longlong *)(lVar6 + lVar9 * 8) = param_1;
  puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  bVar2 = *(byte *)(param_1 + 0x140);
  local_58 = *(undefined8 *)(param_1 + 0x138);
  local_68 = *(undefined4 *)(param_1 + 0x128);
  uStack_64 = *(undefined4 *)(param_1 + 300);
  uStack_60 = *(undefined4 *)(param_1 + 0x130);
  uStack_5c = *(undefined4 *)(param_1 + 0x134);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  puVar7[1] = 0;
  FUN_1446ddc76(puVar7 + 1,&DAT_149e02088,1);
  *puVar7 = &PTR_FUN_149f62b40;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  *(undefined4 *)(puVar7 + 4) = uVar1;
  *(undefined4 *)(puVar7 + 5) = local_68;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_64;
  *(undefined4 *)(puVar7 + 6) = uStack_60;
  *(undefined4 *)((longlong)puVar7 + 0x34) = uStack_5c;
  puVar7[7] = local_58;
  *(uint *)(puVar7 + 8) = (uint)bVar2;
LAB_14749217f:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474921c0 FUN_1474921c0 body=349 status=ok
// SIG undefined FUN_1474921c0(void)

undefined8 * FUN_1474921c0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *param_2;
  iVar3 = (int)param_2[1];
  lVar9 = (longlong)iVar3;
  if (lVar9 != 0) {
    puVar7 = (undefined8 *)0x0;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar8) == param_1) goto LAB_1474922da;
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 - lVar8 != 0);
  }
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_147493f8a(param_2,iVar3);
    lVar6 = *param_2;
  }
  *(longlong *)(lVar6 + lVar9 * 8) = param_1;
  puVar7 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  bVar2 = *(byte *)(param_1 + 0x158);
  local_58 = *(undefined8 *)(param_1 + 0x150);
  local_68 = *(undefined8 *)(param_1 + 0x140);
  uStack_60 = *(undefined8 *)(param_1 + 0x148);
  local_88 = *(undefined4 *)(param_1 + 0x128);
  uStack_84 = *(undefined4 *)(param_1 + 300);
  uStack_80 = *(undefined4 *)(param_1 + 0x130);
  uStack_7c = *(undefined4 *)(param_1 + 0x134);
  local_78 = *(undefined8 *)(param_1 + 0x138);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  puVar7[1] = 0;
  FUN_1446ddc76(puVar7 + 1,&DAT_149e02088,1);
  *puVar7 = &PTR_FUN_149f614d0;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  *(undefined4 *)(puVar7 + 4) = uVar1;
  puVar7[5] = CONCAT44(uStack_84,local_88);
  puVar7[6] = CONCAT44(uStack_7c,uStack_80);
  puVar7[7] = local_78;
  *(undefined4 *)(puVar7 + 8) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar7 + 0x44) = local_68._4_4_;
  *(undefined4 *)(puVar7 + 9) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_60._4_4_;
  puVar7[10] = local_58;
  *(uint *)(puVar7 + 0xb) = (uint)bVar2;
LAB_1474922da:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749231e FUN_14749231e body=300 status=ok
// SIG undefined FUN_14749231e(void)

undefined8 * FUN_14749231e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *param_2;
  iVar2 = (int)param_2[1];
  lVar9 = (longlong)iVar2;
  if (lVar9 != 0) {
    puVar5 = (undefined8 *)0x0;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar7) == param_1) goto LAB_147492404;
      lVar7 = lVar7 + 8;
    } while (lVar9 * 8 - lVar7 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar6 = *param_2;
  }
  *(longlong *)(lVar6 + lVar9 * 8) = param_1;
  puVar5 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  bVar1 = *(byte *)(param_1 + 0x180);
  puVar8 = (undefined8 *)(param_1 + 0x120);
  puVar10 = local_b8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  *puVar5 = 0;
  puVar5[1] = 0;
  FUN_1446ddc76(puVar5 + 1,&DAT_149e02088,1);
  *puVar5 = &PTR_FUN_149f61530;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  puVar8 = local_b8;
  puVar10 = puVar5 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  *(uint *)(puVar5 + 0x10) = (uint)bVar1;
LAB_147492404:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749244c FUN_14749244c body=270 status=ok
// SIG undefined FUN_14749244c(void)

undefined8 * FUN_14749244c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *param_2;
  iVar1 = (int)param_2[1];
  lVar7 = (longlong)iVar1;
  if (lVar7 != 0) {
    puVar3 = (undefined8 *)0x0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar5) == param_1) goto LAB_14749251d;
      lVar5 = lVar5 + 8;
    } while (lVar7 * 8 - lVar5 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147493f8a(param_2,iVar1);
    lVar4 = *param_2;
  }
  *(longlong *)(lVar4 + lVar7 * 8) = param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar6 = (undefined8 *)(param_1 + 0x120);
  puVar8 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_1446ddc76(puVar3 + 1,&DAT_149e02088,1);
  *puVar3 = &PTR_FUN_149f61590;
  puVar3[2] = uVar2;
  puVar6 = local_98;
  puVar8 = puVar3 + 4;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
LAB_14749251d:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749255c FUN_14749255c body=270 status=ok
// SIG undefined FUN_14749255c(void)

undefined8 * FUN_14749255c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)0x0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5) == param_1) goto LAB_14749262f;
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 - lVar5 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar6 * 8) = param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  local_58 = *(undefined4 *)(param_1 + 0x118);
  uStack_54 = *(undefined4 *)(param_1 + 0x11c);
  uStack_50 = *(undefined4 *)(param_1 + 0x120);
  uStack_4c = *(undefined4 *)(param_1 + 0x124);
  local_48 = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f62a30;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  *(undefined4 *)(puVar4 + 3) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_54;
  *(undefined4 *)(puVar4 + 4) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_4c;
  puVar4[5] = local_48;
LAB_14749262f:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749266c FUN_14749266c body=270 status=ok
// SIG undefined FUN_14749266c(void)

undefined8 * FUN_14749266c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)0x0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5) == param_1) goto LAB_14749273f;
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 - lVar5 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar6 * 8) = param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  local_58 = *(undefined4 *)(param_1 + 0x118);
  uStack_54 = *(undefined4 *)(param_1 + 0x11c);
  uStack_50 = *(undefined4 *)(param_1 + 0x120);
  uStack_4c = *(undefined4 *)(param_1 + 0x124);
  local_48 = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f62ae0;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  *(undefined4 *)(puVar4 + 3) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_54;
  *(undefined4 *)(puVar4 + 4) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_4c;
  puVar4[5] = local_48;
LAB_14749273f:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14749277c FUN_14749277c body=180 status=ok
// SIG undefined FUN_14749277c(void)

undefined8 * FUN_14749277c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *param_2;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 - lVar5 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar6 * 8) = param_1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f615f0;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  return puVar4;
}



// FUNCTION 147492830 FUN_147492830 body=1815 status=ok
// SIG undefined FUN_147492830(void)

undefined8 * FUN_147492830(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  
  lVar5 = *param_2;
  iVar4 = (int)param_2[1];
  lVar11 = (longlong)iVar4;
  if (lVar11 != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar9) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar9 = lVar9 + 8;
    } while (lVar11 * 8 - lVar9 != 0);
  }
  *(uint *)(param_2 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
    FUN_147493f8a(param_2,iVar4);
    lVar5 = *param_2;
  }
  *(longlong *)(lVar5 + lVar11 * 8) = param_1;
  if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
    bVar12 = true;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
    bVar12 = iVar4 != 2;
  }
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))();
    bVar12 = (bool)(bVar12 & iVar4 != 2);
  }
  if (!bVar12) {
    return (undefined8 *)0x0;
  }
  plVar3 = *(longlong **)(param_1 + 0x120);
  if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
    if (plVar3 == (longlong *)0x0) {
      return (undefined8 *)0x0;
    }
    iVar4 = (**(code **)(*plVar3 + 0x478))(plVar3);
    if (iVar4 == 3) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      uVar10 = (uint)*(byte *)(param_1 + 0x128);
      plVar3 = *(longlong **)(param_1 + 0x120);
      if (plVar3 == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      puVar6[1] = 0;
      FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
      *puVar6 = &PTR_FUN_149f61650;
      *(undefined4 *)(puVar6 + 2) = uVar1;
      puVar6[3] = 0;
      puVar6[4] = uVar7;
      goto LAB_1474929d7;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))();
    if (iVar4 != 4) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar10 = (uint)*(byte *)(param_1 + 0x128);
    plVar3 = *(longlong **)(param_1 + 0x120);
    if (plVar3 == (longlong *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x110);
    puVar6[1] = 0;
    FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
    *puVar6 = &PTR_FUN_149f62ba0;
    *(undefined4 *)(puVar6 + 2) = uVar1;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = uVar7;
    goto LAB_147492ed5;
  }
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
  if (plVar3 == (longlong *)0x0) {
    if (iVar4 == 3) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      uVar10 = (uint)*(byte *)(param_1 + 0x128);
      plVar3 = *(longlong **)(param_1 + 0x118);
      if (plVar3 == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      puVar6[1] = 0;
      FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
      *puVar6 = &PTR_FUN_149f61650;
      *(undefined4 *)(puVar6 + 2) = uVar1;
      puVar6[3] = uVar7;
      puVar6[4] = 0;
      goto LAB_1474929d7;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
    if (iVar4 != 4) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    bVar2 = *(byte *)(param_1 + 0x128);
    plVar3 = *(longlong **)(param_1 + 0x118);
    if (plVar3 == (longlong *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x110);
    puVar6[1] = 0;
    FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
    *puVar6 = &PTR_FUN_149f62ba0;
    *(undefined4 *)(puVar6 + 2) = uVar1;
    puVar6[3] = 0;
    puVar6[4] = uVar7;
LAB_147492dd7:
    uVar10 = (uint)bVar2;
    puVar6[5] = 0;
  }
  else {
    if (((iVar4 == 3) ||
        (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar4 == 1)) &&
       ((iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))(), iVar4 == 3 ||
        (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))(), iVar4 == 1)))) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      uVar10 = (uint)*(byte *)(param_1 + 0x128);
      plVar3 = *(longlong **)(param_1 + 0x120);
      if (plVar3 == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      plVar3 = *(longlong **)(param_1 + 0x118);
      if (plVar3 == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      puVar6[1] = 0;
      FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
      *puVar6 = &PTR_FUN_149f61650;
      *(undefined4 *)(puVar6 + 2) = uVar1;
      puVar6[3] = uVar8;
      puVar6[4] = uVar7;
LAB_1474929d7:
      *(uint *)(puVar6 + 5) = uVar10;
      return puVar6;
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
    if ((iVar4 == 3) &&
       (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))(), iVar4 == 4)) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      bVar2 = *(byte *)(param_1 + 0x128);
      plVar3 = *(longlong **)(param_1 + 0x120);
      if (plVar3 == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      plVar3 = *(longlong **)(param_1 + 0x118);
      if (plVar3 == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      puVar6[1] = 0;
      FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
      *puVar6 = &PTR_FUN_149f62ba0;
      *(undefined4 *)(puVar6 + 2) = uVar1;
      puVar6[3] = uVar8;
      puVar6[4] = 0;
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
      if ((iVar4 == 4) &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))(), iVar4 == 3)) {
        puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        bVar2 = *(byte *)(param_1 + 0x128);
        plVar3 = *(longlong **)(param_1 + 0x118);
        if (plVar3 == (longlong *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
        }
        plVar3 = *(longlong **)(param_1 + 0x120);
        if (plVar3 == (longlong *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
        }
        uVar1 = *(undefined4 *)(param_1 + 0x110);
        puVar6[1] = 0;
        FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
        *puVar6 = &PTR_FUN_149f62ba0;
        *(undefined4 *)(puVar6 + 2) = uVar1;
        puVar6[3] = uVar8;
        puVar6[4] = uVar7;
        goto LAB_147492dd7;
      }
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
      if ((iVar4 != 4) &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar4 != 1)) {
        return (undefined8 *)0x0;
      }
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))();
      if ((iVar4 != 4) &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar4 != 1)) {
        return (undefined8 *)0x0;
      }
      puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      bVar2 = *(byte *)(param_1 + 0x128);
      plVar3 = *(longlong **)(param_1 + 0x120);
      if (plVar3 == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      plVar3 = *(longlong **)(param_1 + 0x118);
      if (plVar3 == (longlong *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar3 + 0x488))(plVar3,param_2);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x110);
      puVar6[1] = 0;
      FUN_1446ddc76(puVar6 + 1,&DAT_149e02088,1);
      *puVar6 = &PTR_FUN_149f62ba0;
      *(undefined4 *)(puVar6 + 2) = uVar1;
      puVar6[3] = 0;
      puVar6[4] = uVar8;
    }
    uVar10 = (uint)bVar2;
    puVar6[5] = uVar7;
  }
LAB_147492ed5:
  *(uint *)(puVar6 + 6) = uVar10;
  return puVar6;
}



// FUNCTION 147492f48 FUN_147492f48 body=150 status=ok
// SIG undefined FUN_147492f48(void)

undefined8 FUN_147492f48(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar1 == 4)) {
    return 4;
  }
  if ((*(longlong **)(param_1 + 0x120) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))(), iVar1 == 4)) {
    return 4;
  }
  if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar1 == 3)) {
    return 3;
  }
  if ((*(longlong **)(param_1 + 0x120) != (longlong *)0x0) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x120) + 0x478))(), iVar1 == 3)) {
    return 3;
  }
  return 0;
}



// FUNCTION 147492fde FUN_147492fde body=198 status=ok
// SIG undefined FUN_147492fde(void)

undefined8 * FUN_147492fde(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = *param_2;
  iVar1 = (int)param_2[1];
  lVar7 = (longlong)iVar1;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar6) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 - lVar6 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147493f8a(param_2,iVar1);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar7 * 8) = param_1;
  plVar2 = *(longlong **)(param_1 + 0x110);
  if (plVar2 == (longlong *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar5 = (**(code **)(*plVar2 + 0x488))(plVar2,param_2);
    puVar4[1] = 0;
    FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
    *puVar4 = &PTR_FUN_149f5fca0;
    puVar4[2] = uVar5;
  }
  return puVar4;
}



// FUNCTION 1474930a4 FUN_1474930a4 body=198 status=ok
// SIG undefined FUN_1474930a4(void)

undefined8 * FUN_1474930a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = *param_2;
  iVar1 = (int)param_2[1];
  lVar7 = (longlong)iVar1;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar6) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 - lVar6 != 0);
  }
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147493f8a(param_2,iVar1);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar7 * 8) = param_1;
  plVar2 = *(longlong **)(param_1 + 0x110);
  if (plVar2 == (longlong *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar5 = (**(code **)(*plVar2 + 0x488))(plVar2,param_2);
    puVar4[1] = 0;
    FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
    *puVar4 = &PTR_FUN_149f5fc40;
    puVar4[2] = uVar5;
  }
  return puVar4;
}



// FUNCTION 14749316a FUN_14749316a body=417 status=ok
// SIG undefined FUN_14749316a(void)

undefined8 * FUN_14749316a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **ppuVar9;
  
  lVar3 = *param_2;
  iVar2 = (int)param_2[1];
  lVar8 = (longlong)iVar2;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar7) == param_1) {
        return (undefined8 *)0x0;
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 - lVar7 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_147493f8a(param_2,iVar2);
    lVar3 = *param_2;
  }
  *(longlong *)(lVar3 + lVar8 * 8) = param_1;
  if ((*(longlong **)(param_1 + 0x110) == (longlong *)0x0) || (*(longlong *)(param_1 + 0x118) == 0))
  {
    return (undefined8 *)0x0;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x478))();
  if ((iVar2 == 3) &&
     (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar2 == 3)) {
    ppuVar9 = &PTR_FUN_149f5fd60;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x478))();
    if ((iVar2 == 3) &&
       (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))(), iVar2 == 4)) {
      ppuVar9 = &PTR_FUN_149f5fdc0;
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x478))();
      if (iVar2 != 3) {
        return (undefined8 *)0x0;
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x478))();
      if (iVar2 != 2) {
        return (undefined8 *)0x0;
      }
      ppuVar9 = &PTR_FUN_149f5fd00;
    }
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  bVar1 = *(byte *)(param_1 + 0x120);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x488))
                    (*(longlong **)(param_1 + 0x118),param_2);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x488))
                    (*(longlong **)(param_1 + 0x110),param_2);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = ppuVar9;
  puVar4[2] = uVar6;
  puVar4[3] = uVar5;
  *(uint *)(puVar4 + 4) = (uint)bVar1;
  return puVar4;
}


