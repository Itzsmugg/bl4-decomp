// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145820284 FUN_145820284 body=45 status=ok
// SIG undefined FUN_145820284(void)

undefined8 FUN_145820284(undefined8 param_1,int param_2)

{
  FUN_1458202b2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1458202b2 FUN_1458202b2 body=71 status=ok
// SIG undefined FUN_1458202b2(void)

void FUN_1458202b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b358570;
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
  FUN_14100c744(param_1);
  return;
}



// FUNCTION 1458202fa FUN_1458202fa body=492 status=ok
// SIG undefined FUN_1458202fa(void)

void FUN_1458202fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30 != 0;
  FUN_1458204e8(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458204e8 FUN_1458204e8 body=90 status=ok
// SIG undefined FUN_1458204e8(void)

void FUN_1458204e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_48 = 0;
  local_38 = param_2;
  local_20 = param_3;
  FUN_145820544(0,&local_38,&local_20);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145820544 FUN_145820544 body=538 status=ok
// SIG undefined FUN_145820544(void)

void FUN_145820544(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != (longlong *)0x0) &&
     (((lVar3 = (**(code **)(*param_1 + 0x5d8))(), lVar3 != 0 ||
       (lVar3 = FUN_140ed3994(param_1), lVar3 != 0)) && (*(longlong *)(lVar3 + 0x448) != 0)))) {
    lVar4 = FUN_140183ac4();
    lVar3 = *(longlong *)(lVar3 + 0x448);
    if ((((lVar3 != 0) && (lVar4 != 0)) && (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      lVar4 = param_3[1];
      if (lVar4 == 0) {
        uVar5 = FUN_141263ab0();
        lVar4 = FUN_14477b664(uVar5);
        param_3[1] = lVar4;
      }
      lVar6 = param_3[2];
      if (lVar6 == 0) {
        if ((*param_3 == 0) || (lVar4 == 0)) {
          lVar6 = 0;
        }
        else {
          plVar1 = *(longlong **)(lVar4 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,param_3);
          }
          param_3[2] = lVar6;
        }
      }
      FUN_144a79b68(local_58,lVar6);
      local_50 = 0x7202;
      local_48 = 0;
      lVar4 = param_2[1];
      if (lVar4 == 0) {
        uVar5 = FUN_141263a76();
        lVar4 = FUN_14477b664(uVar5);
        param_2[1] = lVar4;
      }
      lVar6 = param_2[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_2 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar6 = FUN_144aff482(uVar5,param_2);
        }
        param_2[2] = lVar6;
      }
      FUN_144a79b68(local_70,lVar6);
      local_68 = 0x7201;
      local_60 = 0;
      local_78 = 0;
      FUN_14117bf1c(lVar3,local_70,local_58,param_4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145820760 FUN_145820760 body=146 status=ok
// SIG undefined FUN_145820760(void)

void FUN_145820760(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,8);
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



// FUNCTION 1458207f2 FUN_1458207f2 body=465 status=ok
// SIG undefined FUN_1458207f2(void)

void FUN_1458207f2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xd0;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xcc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 200 + lVar7) =
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



// FUNCTION 1458209ca FUN_1458209ca body=57 status=ok
// SIG undefined FUN_1458209ca(void)

void FUN_1458209ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23350 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23350 = FUN_140002ddd(FUN_14643d719,uVar1,L"GpsTest_FriendliesGroup");
  }
  return;
}



// FUNCTION 145820a0a FUN_145820a0a body=40 status=ok
// SIG undefined FUN_145820a0a(void)

undefined8 FUN_145820a0a(undefined8 param_1,int param_2)

{
  FUN_145820a32();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145820a32 FUN_145820a32 body=1015 status=ok
// SIG undefined FUN_145820a32(void)

void FUN_145820a32(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bda8e60;
  param_1[5] = &PTR_FUN_14bda94e0;
  param_1[0x13] = &PTR_FUN_14bda9500;
  param_1[0x15] = &PTR_FUN_14bda9530;
  param_1[0x16] = &PTR_FUN_14bda9570;
  param_1[0x174] = &PTR_FUN_14bda95a0;
  if (param_1[0x29c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x298] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x296];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  if (param_1[0x294] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x292] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28c] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e5c(param_1 + 0x248);
  if (param_1[0x240] != 0) {
    plVar4 = param_1 + 0x244;
    if ((longlong *)param_1[0x242] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x242];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (param_1[0x23d] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e5c(param_1 + 0x1fc);
  FUN_141082778(param_1 + 0x1b8);
  if (param_1[0x1b4] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e2a(param_1 + 0x1af);
  if (param_1[0x1ad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a9] != 0) {
    FUN_1400020a8();
  }
  FUN_145820e2a(param_1 + 0x1a4);
  FUN_145820e2a(param_1 + 0x19f);
  if (param_1[0x19d] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x19b];
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
  if (param_1[0x198] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x196] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x194] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x193];
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
  plVar4 = (longlong *)param_1[0x191];
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
  plVar4 = (longlong *)param_1[399];
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
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (param_1[0x18b] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x183);
  if (param_1[0x180] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x179],*(undefined4 *)(param_1 + 0x17a));
  if (param_1[0x179] != 0) {
    FUN_1400020a8();
  }
  FUN_14598c502(param_1);
  return;
}



// FUNCTION 145820e2a FUN_145820e2a body=49 status=ok
// SIG undefined FUN_145820e2a(void)

void FUN_145820e2a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145820e5c FUN_145820e5c body=169 status=ok
// SIG undefined FUN_145820e5c(void)

void FUN_145820e5c(longlong param_1)

{
  FUN_145820f06(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_145820f70(param_1 + 0x130,0);
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xd8);
  FUN_141082ade(param_1 + 0x68);
  FUN_1458210b4(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14117c64e(param_1 + 0x18);
  return;
}



// FUNCTION 145820f06 FUN_145820f06 body=49 status=ok
// SIG undefined FUN_145820f06(void)

void FUN_145820f06(longlong param_1)

{
  FUN_14582117c();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145820f38(param_1);
  return;
}



// FUNCTION 145820f38 FUN_145820f38 body=55 status=ok
// SIG undefined FUN_145820f38(void)

void FUN_145820f38(longlong *param_1)

{
  FUN_145821038(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145820f70 FUN_145820f70 body=104 status=ok
// SIG undefined FUN_145820f70(void)

void FUN_145820f70(longlong *param_1,int param_2)

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
      FUN_145820fd8(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145820fd8 FUN_145820fd8 body=96 status=ok
// SIG undefined FUN_145820fd8(void)

void FUN_145820fd8(longlong param_1,int param_2)

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



// FUNCTION 145821038 FUN_145821038 body=123 status=ok
// SIG undefined FUN_145821038(void)

void FUN_145821038(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 1458210b4 FUN_1458210b4 body=104 status=ok
// SIG undefined FUN_1458210b4(void)

void FUN_1458210b4(longlong *param_1,int param_2)

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
      FUN_14582111c(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14582111c FUN_14582111c body=96 status=ok
// SIG undefined FUN_14582111c(void)

void FUN_14582111c(longlong param_1,int param_2)

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



// FUNCTION 14582117c FUN_14582117c body=275 status=ok
// SIG undefined FUN_14582117c(void)

void FUN_14582117c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
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
  iVar2 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
    iVar2 = (int)param_1[5];
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (local_40 != plVar1)) {
    do {
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (((iStack_54 != iVar2) || (local_60 != plVar1)) || (local_70 != param_1));
  }
  FUN_145821290(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145821290 FUN_145821290 body=68 status=ok
// SIG undefined FUN_145821290(void)

void FUN_145821290(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146be6ea8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1458212df FUN_1458212df body=66 status=ok
// SIG undefined FUN_1458212df(void)

void FUN_1458212df(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = FUN_1446f8646();
    *param_1 = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145821321 FUN_145821321 body=41 status=ok
// SIG undefined FUN_145821321(void)

void FUN_145821321(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14582134a(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 14582134a FUN_14582134a body=55 status=ok
// SIG undefined FUN_14582134a(void)

void FUN_14582134a(longlong param_1)

{
  FUN_145821382(param_1 + 0x88);
  FUN_145821382(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145821382 FUN_145821382 body=71 status=ok
// SIG undefined FUN_145821382(void)

void FUN_145821382(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458213ca FUN_1458213ca body=40 status=ok
// SIG undefined FUN_1458213ca(void)

undefined8 FUN_1458213ca(undefined8 param_1,int param_2)

{
  thunk_FUN_140b35bde();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458213f2 thunk_FUN_140b35bde body=5 status=ok
// SIG undefined thunk_FUN_140b35bde(void)

void thunk_FUN_140b35bde(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a5d5c50;
  param_1[5] = &PTR_FUN_14a5d5f30;
  param_1[6] = &PTR_FUN_14a5d5f70;
  param_1[7] = &PTR_FUN_14a5d5fa0;
  param_1[0x11] = &PTR_FUN_14a5d5fd0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 400;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x130);
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14040f2c8(param_1);
  return;
}



// FUNCTION 145821408 FUN_145821408 body=44 status=ok
// SIG undefined FUN_145821408(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145821408(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8545c = _DAT_14cb8545c + -1;
  *param_1 = DAT_14cb85450;
  DAT_14cb85450 = param_1;
  return;
}



// FUNCTION 145821434 FUN_145821434 body=72 status=ok
// SIG undefined FUN_145821434(void)

void FUN_145821434(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xb48))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145821464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb50))(param_1);
    return;
  }
  FUN_1468998ea(L"StartUsingRepairKit_Validate");
  return;
}



// FUNCTION 145821480 FUN_145821480 body=38 status=ok
// SIG undefined FUN_145821480(void)

undefined8 FUN_145821480(undefined8 param_1,int param_2)

{
  FUN_14117c806();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458214a6 FUN_1458214a6 body=42 status=ok
// SIG undefined FUN_1458214a6(void)

void FUN_1458214a6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_1458214d0(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1458214d0 FUN_1458214d0 body=59 status=ok
// SIG undefined FUN_1458214d0(void)

void FUN_1458214d0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_140ee7193(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 14582150c FUN_14582150c body=72 status=ok
// SIG undefined FUN_14582150c(void)

undefined8 * FUN_14582150c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b611530;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145821554(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145821554 FUN_145821554 body=67 status=ok
// SIG undefined FUN_145821554(void)

void FUN_145821554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b136b60;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145821598(param_1 + 0xb);
  FUN_14117d048(param_1);
  return;
}



// FUNCTION 145821598 FUN_145821598 body=53 status=ok
// SIG undefined FUN_145821598(void)

void FUN_145821598(longlong *param_1)

{
  FUN_1458215ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458215ce FUN_1458215ce body=318 status=ok
// SIG undefined FUN_1458215ce(void)

void FUN_1458215ce(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
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



// FUNCTION 145821720 FUN_145821720 body=59 status=ok
// SIG undefined FUN_145821720(void)

undefined8 * FUN_145821720(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5c56a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582175c FUN_14582175c body=40 status=ok
// SIG undefined FUN_14582175c(void)

undefined8 FUN_14582175c(undefined8 param_1,int param_2)

{
  FUN_145821784();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145821784 FUN_145821784 body=399 status=ok
// SIG undefined FUN_145821784(void)

void FUN_145821784(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a573910;
  param_1[5] = &PTR_FUN_14a573f30;
  param_1[6] = &PTR_LAB_14a573f70;
  plVar3 = (longlong *)param_1[0x121];
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
  FUN_14585d2b6(param_1 + 0x11e);
  FUN_144760e21(param_1[0x116],*(undefined4 *)(param_1 + 0x117));
  if (param_1[0x116] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x114] != 0) {
    FUN_1400020a8();
  }
  FUN_1412895b6(param_1[0x110],*(undefined4 *)(param_1 + 0x111));
  if (param_1[0x110] != 0) {
    FUN_1400020a8();
  }
  FUN_1412895b6(param_1[0x10e],*(undefined4 *)(param_1 + 0x10f));
  if (param_1[0x10e] != 0) {
    FUN_1400020a8();
  }
  FUN_1458793b1(param_1[0x10c],*(undefined4 *)(param_1 + 0x10d));
  if (param_1[0x10c] != 0) {
    FUN_1400020a8();
  }
  FUN_145821914(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xdb) = 0;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_14587937a(param_1 + 0xd2);
  FUN_1458219bc(param_1 + 0x57);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145821914 FUN_145821914 body=168 status=ok
// SIG undefined FUN_145821914(void)

void FUN_145821914(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14117d2fe(param_1 + 8);
  return;
}



// FUNCTION 1458219bc FUN_1458219bc body=299 status=ok
// SIG undefined FUN_1458219bc(void)

void FUN_1458219bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a78dfa0;
  FUN_145821b34(param_1 + 0x72);
  param_1[0x61] = &DAT_14a176f00;
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x61] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x62);
  FUN_145821b84(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4e] = &DAT_14a176f00;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4e] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x4f);
  param_1[0x2c] = &DAT_14a176f00;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2c] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x2d);
  param_1[0x1b] = &DAT_14a176f00;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1b] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x1c);
  FUN_145821ae8(param_1);
  return;
}



// FUNCTION 145821ae8 FUN_145821ae8 body=76 status=ok
// SIG undefined FUN_145821ae8(void)

void FUN_145821ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a78dee8;
  param_1[7] = &DAT_14a176f00;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 8);
  return;
}



// FUNCTION 145821b34 FUN_145821b34 body=80 status=ok
// SIG undefined FUN_145821b34(void)

void FUN_145821b34(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145821b84 FUN_145821b84 body=92 status=ok
// SIG undefined FUN_145821b84(void)

void FUN_145821b84(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145821bec FUN_145821bec body=31 status=ok
// SIG undefined FUN_145821bec(void)

undefined8 FUN_145821bec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145821c1a FUN_145821c1a body=72 status=ok
// SIG undefined FUN_145821c1a(void)

undefined8 * FUN_145821c1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6936d0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145821c62 FUN_145821c62 body=75 status=ok
// SIG undefined FUN_145821c62(void)

void FUN_145821c62(longlong param_1)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x180) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x180) + lVar1) != 0)) {
        FUN_1489b3480(param_1 + 0x180,param_1 + 0x170);
        return;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x188) * 0x10 != lVar1);
  }
  return;
}



// FUNCTION 145821cae FUN_145821cae body=116 status=ok
// SIG undefined FUN_145821cae(void)

void FUN_145821cae(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1b8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1b8)) {
      uVar2 = uVar1 / 0x1b8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1b8,8);
  }
  return;
}



// FUNCTION 145821d22 FUN_145821d22 body=162 status=ok
// SIG undefined FUN_145821d22(void)

void FUN_145821d22(longlong *param_1,undefined8 param_2)

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
        goto LAB_145821daf;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145821daf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145821dc4 FUN_145821dc4 body=76 status=ok
// SIG undefined FUN_145821dc4(void)

void FUN_145821dc4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
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
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  FUN_145821e50(param_1 + 0x18);
  FUN_145821e10(param_1 + 8);
  return;
}



// FUNCTION 145821e10 FUN_145821e10 body=63 status=ok
// SIG undefined FUN_145821e10(void)

void FUN_145821e10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 145821e50 FUN_145821e50 body=84 status=ok
// SIG undefined FUN_145821e50(void)

void FUN_145821e50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145821ea6 FUN_145821ea6 body=119 status=ok
// SIG undefined FUN_145821ea6(void)

void FUN_145821ea6(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14117e474();
  lVar3 = plVar1[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) {
      return;
    }
  }
  lVar2 = FUN_14117e474();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    FUN_140bee9ec(param_1,lVar3 + 0x88);
    return;
  }
  return;
}



// FUNCTION 145821f1e FUN_145821f1e body=21 status=ok
// SIG undefined FUN_145821f1e(void)

undefined8 FUN_145821f1e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145821f50 FUN_145821f50 body=38 status=ok
// SIG undefined FUN_145821f50(void)

undefined8 FUN_145821f50(undefined8 param_1,int param_2)

{
  FUN_145821f76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145821f76 FUN_145821f76 body=1 status=ok
// SIG undefined FUN_145821f76(void)

void FUN_145821f76(void)

{
  return;
}



// FUNCTION 145821f78 FUN_145821f78 body=226 status=ok
// SIG undefined FUN_145821f78(void)

longlong * FUN_145821f78(longlong *param_1)

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
  pcVar13 = FUN_1462b88c8;
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



// FUNCTION 145822060 FUN_145822060 body=138 status=ok
// SIG undefined FUN_145822060(void)

undefined1 * FUN_145822060(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1405f00c8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FShaderPrintCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14582205c;
}



// FUNCTION 1458220ea FUN_1458220ea body=138 status=ok
// SIG undefined FUN_1458220ea(void)

code * FUN_1458220ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShaderPrint_StateBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145822060;
}



// FUNCTION 145822174 FUN_145822174 body=947 status=ok
// SIG undefined FUN_145822174(void)

void FUN_145822174(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x1c] != 0) {
    FUN_1458239a8(param_1[0x1c],param_2);
    cVar5 = FUN_144729dda((longlong)param_1 + 0xac);
    if ((cVar5 == '\0') ||
       (lVar7 = FUN_14479d2ce((longlong)param_1 + 0xac), *(int *)(lVar7 + 0x4c) != 3)) {
      uVar8 = FUN_140c05e56(param_1);
      FUN_145822528(uVar8);
    }
  }
  if (param_1[0x1d] != 0) {
    FUN_145822660(param_1[0x1d],param_2);
  }
  if (param_1[0x1f] != 0) {
    FUN_145822e64(param_1[0x1f],param_2);
  }
  lVar7 = param_1[0x22];
  if ((longlong)(int)lVar7 != 0) {
    lVar11 = param_1[0x21];
    lVar12 = 0;
    do {
      FUN_145822e64(*(undefined8 *)(lVar11 + lVar12),param_2);
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar12);
  }
  plVar9 = (longlong *)param_1[0x27];
  if (plVar9 == (longlong *)0x0) {
LAB_14582229c:
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_14582229c;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
  }
  lVar7 = param_1[0x26];
  plVar10 = (longlong *)param_2[1];
  if (plVar10 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    iVar6 = (int)plVar10[1];
    lVar11 = 0;
    do {
      if (iVar6 == 0) goto LAB_1458222a3;
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar13 = iVar6 == iVar4;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar13);
    lVar11 = *param_2;
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_1458222a3:
  if (plVar9 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
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
  if (lVar7 == lVar11) goto LAB_14582245e;
  plVar9 = (longlong *)param_1[0x27];
  bVar13 = true;
  if (plVar9 == (longlong *)0x0) {
LAB_145822486:
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_145822486;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar14 = iVar6 == iVar4;
      if (bVar14) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar14);
    lVar7 = param_1[0x26];
    if (lVar7 != 0) {
      FUN_140457ffc(lVar7 + 0x80,param_1);
      FUN_140457ffc(lVar7 + 0x68,param_1);
      FUN_140457ffc(lVar7 + 200,param_1);
    }
    bVar13 = false;
  }
  lVar7 = *param_2;
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x27];
  param_1[0x26] = lVar7;
  param_1[0x27] = (longlong)plVar10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    plVar10 = (longlong *)param_1[0x27];
  }
  bVar14 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14582248d:
    plVar10 = (longlong *)0x0;
LAB_14582248f:
    FUN_1447f69b6(param_1 + 10);
    local_58 = (void *)0x0;
    uStack_50 = 0;
  }
  else {
    iVar6 = (int)plVar10[1];
    do {
      if (iVar6 == 0) goto LAB_14582248d;
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar15 = iVar6 == iVar4;
      if (bVar15) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar15);
    lVar7 = param_1[0x26];
    if (lVar7 == 0) {
      bVar14 = false;
      goto LAB_14582248f;
    }
    FUN_14582257a(lVar7 + 0x80,&local_58,param_1,&LAB_140c05abe);
    FUN_14582257a(lVar7 + 0x68,&local_58,param_1,&LAB_143df677e);
    FUN_145823778(lVar7 + 200,&local_58,param_1);
    FUN_1447f69b6(param_1 + 10);
    local_58 = (void *)0x0;
    uVar2 = *(uint *)(lVar7 + 0x2f0);
    _Src = *(void **)(lVar7 + 0x2e8);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      uStack_50 = (ulonglong)uVar2;
      bVar14 = false;
    }
    else {
      bVar14 = false;
      FUN_1446dd7be(&local_58,uVar2,0);
      memcpy(local_58,_Src,(longlong)(int)uVar2 * 0xc);
    }
  }
  (**(code **)(*param_1 + 0x80))(param_1,&local_58);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar14) {
    LOCK();
    plVar3 = plVar10 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (!bVar13) {
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
LAB_14582245e:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145822528 FUN_145822528 body=81 status=ok
// SIG undefined FUN_145822528(void)

void FUN_145822528(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_140bde9ac();
  if ((plVar3 != (longlong *)0x0) && ((longlong)(int)plVar3[1] != 0)) {
    lVar4 = *plVar3;
    lVar5 = (longlong)(int)plVar3[1] << 3;
    do {
      cVar2 = FUN_144729dda(lVar4);
      if (cVar2 != '\0') {
        uVar1 = FUN_14479d2ce(lVar4);
        FUN_145709742(uVar1);
      }
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14582257a FUN_14582257a body=228 status=ok
// SIG undefined FUN_14582257a(void)

undefined8
FUN_14582257a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b405fd0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b41ceb0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_141286bf6(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145822660 FUN_145822660 body=404 status=ok
// SIG undefined FUN_145822660(void)

void FUN_145822660(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_145822758;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      plVar9 = (longlong *)param_1[8];
      bVar10 = true;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        lVar8 = 0;
      }
      else {
        iVar7 = (int)plVar9[1];
        lVar8 = 0;
        do {
          if (iVar7 == 0) {
            plVar9 = (longlong *)0x0;
            goto LAB_1458226c3;
          }
          LOCK();
          iVar6 = (int)plVar9[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        lVar8 = param_1[7];
        bVar10 = false;
      }
LAB_1458226c3:
      if (lVar8 != lVar3) {
        FUN_1458227f6(param_1);
        lVar8 = *param_2;
        lVar4 = param_2[1];
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        plVar5 = (longlong *)param_1[8];
        param_1[7] = lVar8;
        param_1[8] = lVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        local_58 = &LAB_140d7e62e;
        local_50 = 0;
        FUN_145823e10(local_48,param_1);
        FUN_141286bf6(lVar3 + 0x68,&local_58,local_48);
        FUN_1449db362(local_48);
        FUN_144a6a822(param_1);
        (**(code **)(*param_1 + 0x38))(param_1);
      }
      if (!bVar10) {
        LOCK();
        plVar5 = plVar9 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_145822758:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458227f6 FUN_1458227f6 body=167 status=ok
// SIG undefined FUN_1458227f6(void)

void FUN_1458227f6(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_14117ff6e();
  FUN_14117f62e(param_1);
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        if (param_1[7] != 0) {
          FUN_140457ffc(param_1[7] + 0x68,param_1);
          plVar3 = (longlong *)param_1[8];
          param_1[7] = 0;
          param_1[8] = 0;
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
        (**(code **)(*param_1 + 0x40))(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000145822899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x10))(plVar2);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145822821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}



// FUNCTION 14582289e FUN_14582289e body=67 status=ok
// SIG undefined FUN_14582289e(void)

void FUN_14582289e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145822960(param_1);
    FUN_14117fd5c(param_1,0);
    return;
  }
  FUN_14117fd5c(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140d81f0a(param_1);
  return;
}



// FUNCTION 1458228e2 FUN_1458228e2 body=126 status=ok
// SIG undefined FUN_1458228e2(void)

undefined8 * FUN_1458228e2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145822932;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x30);
      *param_2 = *(undefined8 *)(lVar4 + 0x28);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_145822932:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 145822960 FUN_145822960 body=327 status=ok
// SIG undefined FUN_145822960(void)

void FUN_145822960(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 145822aa8 FUN_145822aa8 body=67 status=ok
// SIG undefined FUN_145822aa8(void)

void FUN_145822aa8(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145822c6c(param_1);
    FUN_141180298(param_1,0);
    return;
  }
  FUN_141180298(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140d81ca8(param_1);
  return;
}



// FUNCTION 145822af8 FUN_145822af8 body=370 status=ok
// SIG undefined FUN_145822af8(void)

void FUN_145822af8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [44];
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)FUN_140f7f1be();
  if ((plVar7 != (longlong *)0x0) &&
     (plVar2 = *(longlong **)(param_1 + 0xf0), plVar2 != (longlong *)0x0)) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_145822bf3;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *(longlong *)(param_1 + 0xe8);
    if (lVar3 != 0) {
      uVar5 = (**(code **)(*plVar7 + 0x18))();
      FUN_140ac173c(&local_8c,param_1 + 0x110);
      local_68 = local_8c;
      local_60 = local_84;
      local_5c = local_80;
      local_54 = local_78;
      local_50 = local_74;
      local_48 = local_6c;
      local_44 = uVar5;
      FUN_140d81074(lVar3,&local_40);
      if (local_40 != 0) {
        FUN_140457ffc(local_40 + 0x108,param_1);
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_38 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
    }
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
LAB_145822bf3:
  FUN_1408256d2(param_1 + 0xf8);
  FUN_140d8114c(param_1,0);
  FUN_14118019e(param_1);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145822c6c FUN_145822c6c body=327 status=ok
// SIG undefined FUN_145822c6c(void)

void FUN_145822c6c(longlong *param_1)

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



// FUNCTION 145822db4 FUN_145822db4 body=9 status=ok
// SIG undefined FUN_145822db4(void)

void FUN_145822db4(longlong param_1)

{
  FUN_145822dbe(param_1 + 0x10);
  return;
}



// FUNCTION 145822dbe FUN_145822dbe body=119 status=ok
// SIG undefined FUN_145822dbe(void)

void FUN_145822dbe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c330;
  FUN_1407e878c(param_1 + 0x30);
  plVar3 = (longlong *)param_1[0x2f];
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
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1407e878c(param_1 + 0x1f);
  FUN_14118054a(param_1);
  return;
}



// FUNCTION 145822e36 FUN_145822e36 body=45 status=ok
// SIG undefined FUN_145822e36(void)

void FUN_145822e36(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b35c350;
  FUN_1407e878c(param_1 + 0x108);
  FUN_14118054a(param_1 + 0x10);
  return;
}



// FUNCTION 145822e64 FUN_145822e64 body=681 status=ok
// SIG undefined FUN_145822e64(void)

void FUN_145822e64(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 unaff_RBP;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  uint local_6c;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_14582305b;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    lVar4 = *param_2;
    if (lVar4 != 0) {
      local_78 = *(longlong **)(param_1 + 0xb8);
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (local_78 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        lVar9 = 0;
      }
      else {
        iVar8 = (int)local_78[1];
        lVar9 = 0;
        do {
          if (iVar8 == 0) {
            local_78 = (longlong *)0x0;
            goto LAB_145822ed5;
          }
          LOCK();
          iVar7 = (int)local_78[1];
          bVar11 = iVar8 == iVar7;
          if (bVar11) {
            *(int *)(local_78 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *(longlong *)(param_1 + 0xb0);
        uVar10 = 0;
      }
LAB_145822ed5:
      if (lVar9 != lVar4) {
        FUN_1458232d6(param_1);
        lVar9 = *param_2;
        lVar5 = param_2[1];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
          UNLOCK();
        }
        local_6c = (uint)uVar10;
        plVar6 = *(longlong **)(param_1 + 0xb8);
        *(longlong *)(param_1 + 0xb0) = lVar9;
        *(longlong *)(param_1 + 0xb8) = lVar5;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        local_68 = &LAB_14098d688;
        local_60 = 0;
        FUN_14582312a(local_58,param_1);
        FUN_141180640(lVar4 + 0x38,&local_68,local_58);
        FUN_1449db362(local_58);
        local_68 = &LAB_14098d692;
        local_60 = 0;
        FUN_14582312a(local_58,param_1,&local_68);
        FUN_141180640(lVar4 + 0x50,&local_68,local_58);
        FUN_1449db362(local_58);
        local_68 = &LAB_145964d5a;
        local_60 = 0;
        FUN_145823420(local_58,param_1,&local_68);
        FUN_141286bf6(lVar4 + 0xb0,&local_68,local_58);
        FUN_1449db362(local_58);
        local_68 = &LAB_14891b78a;
        local_60 = 0;
        FUN_1458235cc(local_58,param_1,&local_68);
        FUN_14598d416(lVar4 + 0x128,&local_68,local_58);
        FUN_1449db362(local_58);
        uVar10 = (ulonglong)local_6c;
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_145823fbc(*(longlong *)(param_1 + 0x90),param_2);
        }
      }
      plVar6 = local_78;
      if ((char)uVar10 == '\0') {
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
            (**(code **)(*local_78 + 0x10))();
          }
        }
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
  }
LAB_14582305b:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582312a FUN_14582312a body=428 status=ok
// SIG undefined FUN_14582312a(void)

longlong * FUN_14582312a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14582320a:
    *puVar5 = &PTR_LAB_14b41e020;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41d020;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14582320a;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b41e020;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41d020;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1458232d6 FUN_1458232d6 body=218 status=ok
// SIG undefined FUN_1458232d6(void)

void FUN_1458232d6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0xb8);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_145823364:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_145823364;
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2 + 0x38,param_1);
      FUN_140457ffc(lVar2 + 0x50,param_1);
      FUN_140457ffc(lVar2 + 0xb0,param_1);
      FUN_140457ffc(lVar2 + 0x128,param_1);
      plVar3 = *(longlong **)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
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
    bVar4 = false;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1458233b0();
  }
  if (!bVar4) {
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
                    /* WARNING: Could not recover jumptable at 0x0001458233ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458233b0 FUN_1458233b0 body=112 status=ok
// SIG undefined FUN_1458233b0(void)

void FUN_1458233b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  plVar3 = (longlong *)param_1[0x13];
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
        (**(code **)(*param_1 + 0x20))(param_1,param_1[0x12]);
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
                    /* WARNING: Could not recover jumptable at 0x00014582341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001458233d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,0);
  return;
}



// FUNCTION 145823420 FUN_145823420 body=428 status=ok
// SIG undefined FUN_145823420(void)

longlong * FUN_145823420(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145823500:
    *puVar5 = &PTR_LAB_14b405fd0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41d090;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145823500;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b405fd0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41d090;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1458235cc FUN_1458235cc body=428 status=ok
// SIG undefined FUN_1458235cc(void)

longlong * FUN_1458235cc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1458236ac:
    *puVar5 = &PTR_LAB_14b417790;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41d100;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1458236ac;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b417790;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41d100;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145823778 FUN_145823778 body=228 status=ok
// SIG undefined FUN_145823778(void)

undefined8 FUN_145823778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b41cf20;
  local_38[3] = param_3;
  local_38[4] = &LAB_1457c0d36;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582385e FUN_14582385e body=309 status=ok
// SIG undefined FUN_14582385e(void)

void FUN_14582385e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140fec400();
  if (cVar1 != '\0') {
    if (*(int *)(param_2 + 1) == 0) {
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        cVar1 = FUN_144729dda(param_1 + 0xa0);
        if (cVar1 != '\0') {
          lVar2 = FUN_140d80daa(*(undefined8 *)(param_1 + 0xa8));
          if (lVar2 != 0) {
            FUN_140457ffc(lVar2 + 0x2b8,param_1);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
        }
      }
    }
    else if (*(int *)(param_2 + 1) == 1) {
      lVar2 = FUN_14479d2ce(*param_2);
      if (lVar2 != 0) {
        lVar3 = FUN_144a6c4d8();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          uVar4 = FUN_140d80eca();
          lVar3 = FUN_144718840(lVar2,uVar4);
          if (lVar3 != 0) {
            FUN_1458242b0(local_38,param_1,FUN_146113c3a);
            FUN_14490d954(lVar2 + 0x2b8,local_40,local_38);
            FUN_1449db362(local_38);
            FUN_140d7ffec(param_1,lVar3);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458239a8 FUN_1458239a8 body=461 status=ok
// SIG undefined FUN_1458239a8(void)

void FUN_1458239a8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_145823adc;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar10 = iVar7 == iVar6;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      plVar9 = *(longlong **)(param_1 + 400);
      bVar10 = true;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        lVar8 = 0;
      }
      else {
        iVar7 = (int)plVar9[1];
        lVar8 = 0;
        do {
          if (iVar7 == 0) {
            plVar9 = (longlong *)0x0;
            goto LAB_145823a0e;
          }
          LOCK();
          iVar6 = (int)plVar9[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        lVar8 = *(longlong *)(param_1 + 0x188);
        bVar10 = false;
      }
LAB_145823a0e:
      if (lVar8 != lVar3) {
        FUN_141566e80(param_1);
        FUN_145823c5c(param_1);
        lVar8 = *param_2;
        lVar4 = param_2[1];
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)(param_1 + 400);
        *(longlong *)(param_1 + 0x188) = lVar8;
        *(longlong *)(param_1 + 400) = lVar4;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        FUN_145823b76(lVar3 + 8,&local_40,param_1,FUN_145e06a1e);
        *(undefined8 *)(param_1 + 0x170) = local_40;
        FUN_145823b76(lVar3 + 0x20,&local_40,param_1,&LAB_145e06a18);
        *(undefined8 *)(param_1 + 0x178) = local_40;
        FUN_145823d2a(lVar3 + 0xb0,&local_40,param_1);
        *(undefined8 *)(param_1 + 0x180) = local_40;
        FUN_140526f12(param_1);
      }
      if (!bVar10) {
        LOCK();
        plVar5 = plVar9 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_145823adc:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145823b76 FUN_145823b76 body=228 status=ok
// SIG undefined FUN_145823b76(void)

undefined8
FUN_145823b76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b4198a0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145823c5c FUN_145823c5c body=205 status=ok
// SIG undefined FUN_145823c5c(void)

void FUN_145823c5c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 400);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar3 = *(longlong *)(param_1 + 0x188);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x170) != 0) {
        FUN_14480f766(lVar3 + 8);
      }
      if (*(longlong *)(param_1 + 0x178) != 0) {
        FUN_14480f766(lVar3 + 0x20);
      }
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_14480f766(lVar3 + 0xb0);
      }
      plVar4 = *(longlong **)(param_1 + 400);
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145823d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145823d2a FUN_145823d2a body=228 status=ok
// SIG undefined FUN_145823d2a(void)

undefined8 FUN_145823d2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b405fd0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b419910;
  local_38[3] = param_3;
  local_38[4] = FUN_145dfa926;
  FUN_141286bf6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145823e10 FUN_145823e10 body=428 status=ok
// SIG undefined FUN_145823e10(void)

longlong * FUN_145823e10(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145823ef0:
    *puVar5 = &PTR_LAB_14b405fd0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41b030;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145823ef0;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b405fd0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b41b030;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145823fbc FUN_145823fbc body=443 status=ok
// SIG undefined FUN_145823fbc(void)

void FUN_145823fbc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar7 = (longlong *)param_1[0x13];
  if (plVar7 == (longlong *)0x0) {
LAB_145823fdf:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_145823fdf;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  lVar8 = param_1[0x12];
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    lVar9 = 0;
    do {
      if (iVar6 == 0) goto LAB_145824019;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar9 = *param_2;
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
LAB_145824019:
  if (plVar7 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
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
  if (lVar8 == lVar9) {
    return;
  }
  FUN_1458233b0(param_1);
  lVar8 = *param_2;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_1[0x13];
  param_1[0x12] = lVar8;
  param_1[0x13] = lVar9;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) goto LAB_14582409a;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar6 == iVar4;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar8 = *param_2;
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
LAB_14582409a:
  uVar5 = FUN_145824178(param_1,lVar8);
  *(undefined1 *)(param_1 + 0x14) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0001458240c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,lVar8);
  return;
}



// FUNCTION 145824178 FUN_145824178 body=186 status=ok
// SIG undefined FUN_145824178(void)

undefined8 FUN_145824178(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = FUN_145824234();
    lVar2 = FUN_141221176(uVar1);
    uVar1 = FUN_145824234(param_1);
    lVar3 = FUN_140149a73(uVar1,0);
    if ((lVar2 != 0) && (lVar3 != 0)) {
      uVar1 = FUN_14479d2ce(param_1 + 0x78);
      FUN_1409845a0(lVar2,local_2c,uVar1);
      local_30 = FUN_140b9fef0(lVar2,local_2c,0);
      lVar2 = FUN_140ee8222(lVar3);
      uVar1 = 1;
      if (lVar2 == param_2) goto LAB_145824212;
    }
  }
  uVar1 = 0;
LAB_145824212:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145824234 FUN_145824234 body=124 status=ok
// SIG undefined FUN_145824234(void)

undefined8 FUN_145824234(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x80) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x88), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_14575b4de(0);
        return uVar6;
      }
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
    uVar6 = FUN_14575b4de(*(undefined8 *)(param_1 + 0x80));
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
  return uVar6;
}



// FUNCTION 1458242b0 FUN_1458242b0 body=416 status=ok
// SIG undefined FUN_1458242b0(void)

longlong * FUN_1458242b0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_145824387:
    *puVar3 = &PTR_LAB_14a3a3510;
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
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41aec0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_145824387;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14a3a3510;
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
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b41aec0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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



// FUNCTION 14582445e FUN_14582445e body=40 status=ok
// SIG undefined FUN_14582445e(void)

undefined8 FUN_14582445e(undefined8 param_1,int param_2)

{
  FUN_145824486();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145824486 FUN_145824486 body=85 status=ok
// SIG undefined FUN_145824486(void)

void FUN_145824486(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b69de80;
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458244dc FUN_1458244dc body=169 status=ok
// SIG undefined FUN_1458244dc(void)

bool FUN_1458244dc(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 14582459a FUN_14582459a body=76 status=ok
// SIG undefined FUN_14582459a(void)

undefined8 * FUN_14582459a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e12d70;
  FUN_1449db362(param_1 + 4);
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458245f6 FUN_1458245f6 body=44 status=ok
// SIG undefined FUN_1458245f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458245f6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb75934 = _DAT_14cb75934 + -1;
  *param_1 = DAT_14cb75928;
  DAT_14cb75928 = param_1;
  return;
}



// FUNCTION 145824622 FUN_145824622 body=40 status=ok
// SIG undefined FUN_145824622(void)

undefined8 FUN_145824622(undefined8 param_1,int param_2)

{
  FUN_14582464a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582464a FUN_14582464a body=78 status=ok
// SIG undefined FUN_14582464a(void)

void FUN_14582464a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a9dca10;
  puVar1 = (undefined8 *)param_1[0xd];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458246a6 FUN_1458246a6 body=40 status=ok
// SIG undefined FUN_1458246a6(void)

undefined8 FUN_1458246a6(undefined8 param_1,int param_2)

{
  FUN_1458246ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458246ce FUN_1458246ce body=200 status=ok
// SIG undefined FUN_1458246ce(void)

void FUN_1458246ce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6bca50;
  FUN_145824796(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145824796 FUN_145824796 body=61 status=ok
// SIG undefined FUN_145824796(void)

void FUN_145824796(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458247e2 FUN_1458247e2 body=104 status=ok
// SIG undefined FUN_1458247e2(void)

undefined8 FUN_1458247e2(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14582484c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582484c FUN_14582484c body=22 status=ok
// SIG undefined FUN_14582484c(void)

longlong FUN_14582484c(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_48 [32];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  lVar4 = DAT_14cb8d3c0;
  if (DAT_14cb8d3c0 == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar5 = *(int *)(DAT_14cb8d3c0 + 0x338);
  iStack_28 = *param_1;
  if ((longlong)iVar5 == -1) {
    if (((iStack_28 != 0) && (param_1[1] != 0)) && (iStack_28 != DAT_14c948000)) {
      puVar6 = &DAT_14c948028;
      goto LAB_1407d7def;
    }
  }
  else if (iStack_28 != 0) {
    iVar2 = param_1[1];
    if ((iVar2 != 0) && (iStack_28 != DAT_14c948000)) {
      piVar9 = param_1 + 2;
      if (0 < param_1[9]) {
        piVar9 = *(int **)(param_1 + 6);
      }
      if (1 < iVar2) {
        piVar9 = *(int **)(param_1 + 6);
      }
      if (iVar2 == 1 && 0 < iVar5) {
        piVar8 = (int *)&DAT_14c948618;
        if (*(int *)(DAT_14cb8d3c0 + 0x33c) == 1) {
          piVar8 = piVar9;
        }
        iStack_28 = *piVar8;
        puVar6 = (ulonglong *)(piVar8 + 1);
        goto LAB_1407d7def;
      }
      if (iVar5 < iVar2) {
        puVar6 = (ulonglong *)(piVar9 + (longlong)iVar5 * 3 + 1);
        iStack_28 = piVar9[(longlong)iVar5 * 3];
        goto LAB_1407d7def;
      }
    }
  }
  puVar6 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
  iStack_28 = (int)DAT_14c948618;
LAB_1407d7def:
  plVar1 = (longlong *)(DAT_14cb8d3c0 + 0x2e8);
  uVar3 = *puVar6;
  uStack_24 = (undefined4)uVar3;
  uStack_20 = (undefined4)(uVar3 >> 0x20);
  iVar5 = iStack_28;
  if (uVar3 >> 0x20 != 0) {
    iVar5 = FUN_144a78877(iStack_28,uVar3 >> 0x20);
  }
  iVar5 = FUN_1447fa34e(plVar1,iVar5,&iStack_28);
  if (((iVar5 == -1) || (lVar7 = (longlong)iVar5 * 0x20 + *plVar1, lVar7 == 0)) ||
     (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x30);
    iStack_28 = (int)lVar7;
    uStack_24 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if (lVar7 == 0) {
      FUN_145747a3a(lVar4,&iStack_28);
      lVar7 = CONCAT44(uStack_24,iStack_28);
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145824872 FUN_145824872 body=41 status=ok
// SIG undefined FUN_145824872(void)

void FUN_145824872(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 14582489c FUN_14582489c body=80 status=ok
// SIG undefined FUN_14582489c(void)

uint FUN_14582489c(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = bVar1 & 3;
  switch(uVar2) {
  case 1:
    bVar1 = (param_1[1] & 8) >> 3;
    uVar2 = (uint)bVar1 + (uint)bVar1 * 2 + 1;
    break;
  case 2:
    uVar2 = 2;
    if ((char)bVar1 < '\0') {
      uVar2 = 6 - (*(int *)(param_1 + 0x24) == 0);
    }
    break;
  case 3:
    uVar2 = (uint)(bVar1 >> 7) * 4 + 3;
  }
  return uVar2;
}



// FUNCTION 1458248ec FUN_1458248ec body=1589 status=ok
// SIG undefined FUN_1458248ec(void)

undefined8 FUN_1458248ec(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  bool bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined1 auStack_378 [32];
  int local_358;
  uint *local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined1 local_330 [8];
  longlong *local_328;
  undefined8 local_320;
  undefined1 local_318 [16];
  undefined1 *local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined ***local_2f0;
  undefined ****local_2e8;
  undefined8 local_2e0;
  undefined4 *puStack_2d8;
  undefined4 *local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  longlong local_280;
  undefined4 local_278;
  undefined4 local_270 [2];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined1 local_208;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined ***local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  longlong *plStack_150;
  longlong *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if ((((ulonglong)(longlong)*(int *)(param_1 + 1) < 0x10) ||
      (puVar6 = (uint *)*param_1, (*puVar6 & 0xffffff00) != 0x44434e00)) ||
     ((longlong)*(int *)(param_1 + 1) - 0x10U != (ulonglong)puVar6[3])) {
    uVar14 = 0;
    goto LAB_145824bcc;
  }
  puVar12 = puVar6 + 4;
  if ((char)puVar6[1] == '\0') {
    uVar13 = puVar6[2];
    local_338 = (longlong *)0x0;
    plVar15 = local_338;
LAB_145824c12:
    local_338 = plVar15;
    local_348 = puVar12;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0xf;
    local_d0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = local_68 & 0xffffffffffffff00;
    uVar10 = 0x1000fff;
    if (DAT_14c9a1130 == '\0') {
      uVar10 = 0;
    }
    local_f8 = (undefined **)(ulonglong)uVar10;
    local_180 = (undefined ***)((ulonglong)local_180 & 0xffffffff00000000);
    local_140 = 0;
    local_138 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = (longlong *)0x0;
    local_134 = 0xffffffff00000080;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_200[0] = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1ac = 0xffffffff00000080;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_270[0] = 0;
    local_238 = 0;
    local_230 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_22c = 0xffffffff00000080;
    local_224 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_294 = 0xffffffff00000080;
    local_28c = 0;
    local_280 = 0;
    local_278 = 0;
    local_2f8 = (longlong *)0x0;
    local_308 = (undefined1 *)0x0;
    local_300 = 0x8000000000;
    local_340 = param_2;
    local_2f0 = &local_f8;
    local_2e8 = &local_180;
    puStack_2d8 = local_200;
    local_2d0 = local_270;
    uVar8 = FUN_144a54ea4(local_318,uVar13 << 3);
    puVar11 = local_308;
    if (local_308 == (undefined1 *)0x0) {
      puVar11 = local_318;
    }
    local_358 = uVar13 << 3;
    FUN_14493566c(puVar11,uVar8,local_348,0);
    local_320 = 0;
    FUN_1417381c6(&local_f8,local_318,&local_320);
    FUN_144a5eb16(&local_180,local_318,&local_320);
    FUN_140ca80ca(local_200,local_318,&local_320);
    FUN_144882f62(local_270,local_318,&local_320);
    FUN_1447af47c(local_330,&local_2f8,local_318,&local_320);
    FUN_1446dcc2e(local_340,local_330);
    if (local_328 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_328 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_328)(local_328);
        LOCK();
        piVar3 = (int *)((longlong)local_328 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_328 + 0x10))(local_328);
        }
      }
    }
    if (local_308 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = local_338;
    local_278 = 0;
    if (local_280 != 0) {
      FUN_1400020a8();
    }
    FUN_142b1be38(&local_2c0);
    FUN_140c64c5a(local_270);
    FUN_140bf8c6a(local_200);
    FUN_140201a14(&local_180);
    FUN_1409da1f4(&local_f8);
    uVar14 = 1;
  }
  else {
    plVar15 = (longlong *)0x0;
    bVar7 = false;
    memset(&local_f8,0,0x90);
    FUN_144869430(&local_f8);
    local_68 = 0;
    local_f8 = &PTR_FUN_149e1e050;
    local_58 = 0x7fffffffffffffff;
    local_d0 = local_d0 | 1;
    local_60 = param_1;
    FUN_1449c2eca(&local_f8,0);
    local_68 = 0x10;
    local_178 = 0;
    uStack_170 = 0xffffffffffffffff;
    local_168 = 0;
    uStack_160 = 0xffffffff00000000;
    local_158 = (longlong *)0x0;
    plStack_150 = (longlong *)0x0;
    local_148 = (longlong *)0x0;
    local_180 = &local_f8;
    uVar9 = FUN_141700c74();
    if (uVar9 == puVar6[2]) {
      bVar7 = false;
      FUN_140e03374(&local_180,&local_2f8,0,0xffffffffffffffff);
      plVar15 = local_2f8;
      if (local_2f8 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        if (((ulonglong)local_2f8[3] >> 0x3e & 1) == 0) {
          (**(code **)(*local_2f8 + 8))(local_2f8);
        }
        puVar12 = (uint *)plVar15[1];
        if ((plVar15[3] & 0x4000000000000000U) == 0) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
        uVar9 = plVar15[2];
        bVar7 = true;
      }
    }
    plVar4 = local_148;
    uVar13 = (uint)uVar9;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_148 + 3;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar5 & 0x3fffffff) == 1) {
        (**(code **)(*local_148 + 0x10))(local_148);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar4 + 3);
        uVar9 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
    plVar4 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_150 + 3;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar5 & 0x3fffffff) == 1) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar4 + 3);
        uVar9 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
    plVar4 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_158 + 3;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar5 & 0x3fffffff) == 1) {
        (**(code **)(*local_158 + 0x10))(local_158);
        plVar4[1] = 0;
        plVar4[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar4 + 3);
        uVar9 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
    FUN_144a7fc42(&local_f8);
    if (bVar7) goto LAB_145824c12;
    uVar14 = 0;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar15 + 3;
    lVar5 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      plVar15[1] = 0;
      plVar15[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar15 + 3);
      uVar9 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar9 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar15)(plVar15,1);
      }
    }
  }
LAB_145824bcc:
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 145824f22 FUN_145824f22 body=2939 status=ok
// SIG undefined FUN_145824f22(void)

longlong * FUN_145824f22(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  short *psVar14;
  undefined8 uVar15;
  int iVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  double dVar22;
  undefined1 auStack_218 [32];
  longlong **local_1f8;
  longlong *local_1f0;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined2 *local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 uStack_170;
  longlong *local_168;
  undefined8 uStack_160;
  longlong *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined2 *local_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_138 = (longlong *)0x0;
  uStack_130 = 0;
  local_148 = (longlong *)0x0;
  uStack_140 = 0;
  local_158 = (longlong *)0x0;
  uStack_150 = 0;
  local_168 = (longlong *)0x0;
  uStack_160 = 0;
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  local_128 = 0xffffffffffffffff;
  plStack_120 = (longlong *)0x0;
  local_118 = 0x3f80000000000001;
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0c98);
  local_1b0 = DAT_14c9a0c90;
  local_1e0 = param_1;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar2 + 8);
  }
  local_1d8 = param_2;
  FUN_1400b22c2(&local_1b0,uVar15);
  local_178 = local_1b0;
  uStack_170 = uStack_1a8;
  local_1b0 = (longlong *)0x0;
  uStack_1a8 = 0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0cb0);
  local_1b0 = DAT_14c9a0ca8;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_1b0,uVar15);
  local_168 = local_1b0;
  uStack_160 = uStack_1a8;
  local_1b0 = (longlong *)0x0;
  uStack_1a8 = 0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0cc8);
  local_1b0 = DAT_14c9a0cc0;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_1b0,uVar15);
  local_158 = local_1b0;
  uStack_150 = uStack_1a8;
  local_1b0 = (longlong *)0x0;
  uStack_1a8 = 0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0ce0);
  local_1b0 = DAT_14c9a0cd8;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_1b0,uVar15);
  local_148 = local_1b0;
  uStack_140 = uStack_1a8;
  local_1b0 = (longlong *)0x0;
  uStack_1a8 = 0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0cf8);
  local_1b0 = DAT_14c9a0cf0;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1400b22c2(&local_1b0,uVar15);
  local_138 = local_1b0;
  uStack_130 = uStack_1a8;
  local_1b0 = (longlong *)0x0;
  uStack_1a8 = 0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0d40);
  local_1b0 = DAT_14c9a0d38;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1446ddc76(&local_1b0,uVar15,1);
  plStack_120 = local_1b0;
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0d58);
  local_1b0 = DAT_14c9a0d50;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  lVar8 = 1;
  if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 1)) &&
     (*(char **)(pbVar2 + 8) != (char *)0x0)) {
    lVar8 = strtol(*(char **)(pbVar2 + 8),(char **)0x0,0);
  }
  local_118 = CONCAT44(local_118._4_4_,lVar8);
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0d70);
  local_1b0 = DAT_14c9a0d68;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  fVar21 = 1.0;
  if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 1)) &&
     (*(char **)(pbVar2 + 8) != (char *)0x0)) {
    dVar22 = atof(*(char **)(pbVar2 + 8));
    fVar21 = (float)dVar22;
  }
  local_118 = CONCAT44(fVar21,(undefined4)local_118);
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
  uStack_1a8 = CONCAT44(uStack_1a8._4_4_,DAT_14c9a0da0);
  local_1b0 = DAT_14c9a0d98;
  FUN_1448075d0(&local_f0);
  if (*param_3 == 0) {
    puVar11 = &DAT_14c9a1308;
  }
  else {
    puVar11 = (undefined8 *)FUN_142b20a62(*param_3,&local_f0);
  }
  pbVar2 = (byte *)*puVar11;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
    lVar3 = *(longlong *)(pbVar2 + 8);
    if (lStack_d8 != 0) {
      FUN_1400020a8();
    }
    if (lVar3 == 0) goto LAB_1458254ce;
    FUN_140002266(&local_f0,L"Alert requested - %hs",lVar3);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) != 0x40000002) {
      FUN_144a61b4f();
    }
    lStack_d8 = CONCAT44(uStack_ec,local_f0);
  }
  if (lStack_d8 != 0) {
    FUN_1400020a8();
  }
LAB_1458254ce:
  lVar3 = local_1e0;
  local_f0 = 0;
  local_e8 = &DAT_14a171d50;
  local_e0 = 0;
  lStack_d8 = 0;
  bVar20 = false;
  local_d0 = 0;
  local_c8 = &DAT_14a171d50;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = &DAT_14a171d50;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = &DAT_14a171d50;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = &DAT_14a171d50;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_14708f861(*(undefined8 *)(local_1e0 + 0x20),&local_178,*(undefined8 *)(*param_4 + 0x40),
                &local_f0);
  plVar17 = *(longlong **)(lVar3 + 0x20);
  if ((int)plVar17[1] != *(int *)((longlong)plVar17 + 0x34)) {
    plVar19 = plVar17 + 7;
    if ((longlong *)plVar17[8] != (longlong *)0x0) {
      plVar19 = (longlong *)plVar17[8];
    }
    iVar16 = *(int *)((longlong)plVar19 +
                     (ulonglong)
                     ((int)plVar17[9] - 1U &
                     ((uint)plStack_120 << 0x10 | (uint)plStack_120 & 0xffff) +
                     (((uint)plStack_120 & 0xffff) >> 4) +
                     (((uint)plStack_120 >> 0x10) << 0x13 | (uint)plStack_120 >> 0x10)) * 4);
    if (iVar16 == -1) {
      bVar20 = false;
    }
    else {
      do {
        bVar20 = *(ulonglong *)(*plVar17 + (longlong)iVar16 * 0x10) ==
                 ((ulonglong)plStack_120 & 0xffffffff);
        if (bVar20) break;
        iVar16 = *(int *)((longlong)iVar16 * 0x10 + *plVar17 + 8);
      } while (iVar16 != -1);
    }
  }
  cVar6 = FUN_1470a0b7c(plVar17[10] + 0x70,&local_e8);
  cVar7 = FUN_1470a0b7c(*(longlong *)(*(longlong *)(local_1e0 + 0x20) + 0x58) + 0x70,&local_a8);
  if (((bVar20) && (cVar6 != '\0')) && (cVar7 != '\0')) {
    lVar3 = *param_4;
    plVar12 = (longlong *)FUN_14001cc68(0x188,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14a176230;
    plVar19 = plVar12 + 2;
    local_1f8 = &local_178;
    local_1f0 = param_3;
    FUN_142b15a64(plVar19,lVar3 + 0x10,param_4,&local_f0);
    pbVar2 = (byte *)*param_3;
    plVar17 = &DAT_14c9a1288;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar17 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    local_1d0 = plVar17 + 3;
    local_110 = 0x100000000;
    local_100 = 0xffffffff;
    uStack_f8 = 0;
    local_188 = plVar19;
    local_180 = plVar12;
    uStack_108 = local_1d0;
    if ((int)plVar17[6] == 0) {
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_110);
      iVar16 = (int)plVar17[6];
    }
    uStack_190 = CONCAT44(uStack_f4,uStack_f8);
    local_198 = local_100;
    uVar15 = local_198;
    uStack_1a8 = local_110;
    local_1a0 = (int)uStack_108;
    uStack_19c = uStack_108._4_4_;
    local_198._4_4_ = (int)((ulonglong)local_100 >> 0x20);
    iVar9 = local_198._4_4_;
    local_1b0 = plVar17;
    if ((local_198._4_4_ != iVar16) || (local_198 = uVar15, uStack_108 != local_1d0)) {
      do {
        local_198 = uVar15;
        lVar4 = *local_1b0;
        lVar3 = (longlong)iVar9 * 0x40 + lVar4;
        plVar19 = *(longlong **)(*(longlong *)(local_1e0 + 0x20) + 0x68);
        FUN_144a62e5c(&local_110,lVar3,(int)plVar19[10],*(undefined4 *)((longlong)plVar19 + 0x54));
        if ((int)uStack_108 != 0) {
          FUN_144a78877(local_110 & 0xffffffff,(ulonglong)uStack_108 & 0xffffffff);
        }
        iVar10 = FUN_140ce9e28(plVar19);
        if (iVar10 == -1) {
LAB_1458257cf:
          cVar6 = FUN_14708f696(lVar3);
          if (cVar6 == '\0') {
            local_1c8 = (undefined2 *)0x0;
            uStack_1c0 = 0;
            FUN_1400b2348(lVar3,&local_1c8,1);
            puVar18 = local_1c8;
            if ((int)uStack_1c0 == 0) {
              puVar18 = &DAT_149dfb77a;
            }
            FUN_140002266(&local_110,L"Can\'t find Root Details for %s.",puVar18);
            FUN_14708d2e4(&local_110);
            if (local_110 != 0) {
              FUN_1400020a8();
            }
            if (local_1c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          lVar13 = *plVar19 + (longlong)iVar10 * 0x1c;
          if ((lVar13 == 0) ||
             (psVar14 = (short *)(*plVar19 + (longlong)iVar10 * 0x1c + 0xc), psVar14 == (short *)0x0
             )) goto LAB_1458257cf;
          if (-1 < *psVar14) {
            iVar10 = *(int *)(lVar13 + 0x10);
            if (iVar10 == 0) {
              FUN_14708fcb2(local_1e0,&local_188,(longlong)iVar9 * 0x40 + lVar4 + 0x28);
            }
            else if (iVar10 == 2) {
              FUN_14709038e(local_1e0,&local_188);
            }
            else if (iVar10 == 1) {
              FUN_14708fbc6(local_1e0,&local_188);
            }
            *(undefined8 *)(lVar3 + 0x28) = 0;
            plVar19 = *(longlong **)(lVar3 + 0x30);
            if (plVar19 != (longlong *)0x0) {
              *(undefined8 *)(lVar3 + 0x30) = 0;
              LOCK();
              plVar12 = plVar19 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
          }
        }
        local_198 = CONCAT44(local_198._4_4_,(uint)local_198 & ~uStack_1a8._4_4_);
        FUN_1449c0562(&uStack_1a8);
        plVar12 = local_180;
        plVar19 = local_188;
        iVar9 = local_198._4_4_;
        uVar15 = local_198;
      } while (local_1b0 != plVar17 ||
               ((longlong *)CONCAT44(uStack_19c,local_1a0) != local_1d0 || local_198._4_4_ != iVar16
               ));
    }
    plVar5 = local_180;
    plVar17 = local_1d8;
    *local_1d8 = (longlong)plVar19;
    local_1d8[1] = (longlong)plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_180 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_180)(local_180);
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
  else {
    *local_1d8 = 0;
    local_1d8[1] = 0;
    plVar17 = local_1d8;
  }
  FUN_140a6c880(&local_f0);
  FUN_142b145b4(&local_178);
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return plVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145825a9e FUN_145825a9e body=64 status=ok
// SIG undefined FUN_145825a9e(void)

undefined8 * FUN_145825a9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3d1650;
  FUN_141188596(param_1 + 6,1);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145825ade FUN_145825ade body=38 status=ok
// SIG undefined FUN_145825ade(void)

undefined8 FUN_145825ade(undefined8 param_1,int param_2)

{
  FUN_145825b04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145825b04 FUN_145825b04 body=57 status=ok
// SIG undefined FUN_145825b04(void)

void FUN_145825b04(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  return;
}



// FUNCTION 145825b3e FUN_145825b3e body=93 status=ok
// SIG undefined FUN_145825b3e(void)

void FUN_145825b3e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_145825b9c(lVar1 + 0x10,lVar1 + 0x10,*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8));
    FUN_1400020a8(*(undefined8 *)(lVar1 + 0x10));
    FUN_1400020a8(lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_145825bfe(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145825b9c FUN_145825b9c body=98 status=ok
// SIG undefined FUN_145825b9c(void)

void FUN_145825b9c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_145825b9c(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1401d9a90(param_3 + 8);
    FUN_1401d9a90(param_3 + 4);
    FUN_1400020a8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 145825bfe FUN_145825bfe body=156 status=ok
// SIG undefined FUN_145825bfe(void)

void FUN_145825bfe(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_145825cd0(param_1 + 0x108);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_1400020a8(uVar1);
  FUN_14118945e(param_1 + 0xf0);
  FUN_1411894dc(param_1 + 200);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_1400020a8(uVar1);
  FUN_1411895f4(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_1400020a8(uVar1);
  FUN_141189684(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1400020a8(uVar1);
  FUN_145825c9a(param_1 + 0x18);
  return;
}



// FUNCTION 145825c9a FUN_145825c9a body=53 status=ok
// SIG undefined FUN_145825c9a(void)

void FUN_145825c9a(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    thunk_FUN_1400020a8();
  }
  FUN_141189566(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1400020a8(uVar1);
  return;
}



// FUNCTION 145825cd0 FUN_145825cd0 body=138 status=ok
// SIG undefined FUN_145825cd0(void)

void FUN_145825cd0(longlong param_1)

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



// FUNCTION 145825d5c FUN_145825d5c body=83 status=ok
// SIG undefined FUN_145825d5c(void)

void FUN_145825d5c(longlong param_1)

{
  FUN_141189718(param_1 + 0x60,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_141189b3c(param_1 + 0x50,0);
  }
  FUN_140402d60(param_1);
  FUN_141189c74(param_1 + 0x340);
  FUN_141189c74(param_1 + 0x390);
  return;
}



// FUNCTION 145825db0 FUN_145825db0 body=125 status=ok
// SIG undefined FUN_145825db0(void)

undefined8 * FUN_145825db0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145825e2e();
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



// FUNCTION 145825e2e FUN_145825e2e body=150 status=ok
// SIG undefined FUN_145825e2e(void)

longlong * FUN_145825e2e(longlong *param_1,longlong *param_2)

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



// FUNCTION 145825ec4 FUN_145825ec4 body=8 status=ok
// SIG undefined FUN_145825ec4(void)

undefined8 FUN_145825ec4(void)

{
  return DAT_14cbe42e8;
}



// FUNCTION 145825ecc FUN_145825ecc body=146 status=ok
// SIG undefined FUN_145825ecc(void)

void FUN_145825ecc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148eef1c2(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_144326be2;
  local_20 = &local_30;
  local_28 = FUN_14118a6c4;
  local_48 = param_2;
  FUN_14118a30c(param_1,&local_28,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145825f60 FUN_145825f60 body=56 status=ok
// SIG undefined FUN_145825f60(void)

ulonglong FUN_145825f60(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  cVar2 = FUN_145825f98((ulonglong)uVar1);
  if ((cVar2 == '\0') ||
     (lVar3 = (ulonglong)uVar1 * 0x3c, (*(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 2) & 4) == 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814d8 + lVar3 + 1)) & 0xffffffffffffff01;
  }
  return uVar4;
}



// FUNCTION 145825f98 FUN_145825f98 body=77 status=ok
// SIG undefined FUN_145825f98(void)

ulonglong FUN_145825f98(ushort param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)param_1;
  lVar3 = uVar2 * 0x3c;
  if ((int)(&DAT_14ca814b8)[uVar2 * 0xf] < 3) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar2;
    if (((param_1 == 0x30) ||
        (uVar1 = DAT_14ca838f8, *(ulonglong *)(&DAT_14ca814b0 + lVar3) == DAT_14ca838f8)) ||
       ((uVar1 = CONCAT71((int7)(DAT_14ca838f8 >> 8),1),
        (*(byte *)(&DAT_14ca814d8 + uVar2 * 0xf) & 0x80) != 0 &&
        ((*(byte *)((longlong)&DAT_14ca814d0 + lVar3 + 3) & 2) != 0)))) {
      uVar2 = CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)((longlong)&DAT_14ca814d0 + lVar3 + 7)) &
              0xffffffffffffff04;
      uVar1 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
    }
  }
  return uVar1;
}



// FUNCTION 145825fe6 FUN_145825fe6 body=107 status=ok
// SIG undefined FUN_145825fe6(void)

void FUN_145825fe6(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if ((int)param_2 < iVar2) {
    if (~param_2 + iVar1 != 0) {
      memmove((void *)(*param_1 + (longlong)(int)param_2 * 2),
              (void *)(*param_1 + (longlong)(int)param_2 * 2 + 2),
              (longlong)(int)(~param_2 + iVar1) * 2);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    if (param_3 == '\x01') {
      FUN_1449649ae(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14582605a FUN_14582605a body=81 status=ok
// SIG undefined FUN_14582605a(void)

undefined8 * FUN_14582605a(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b6936d0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  return param_1;
}



// FUNCTION 1458260ab FUN_1458260ab body=35 status=ok
// SIG undefined FUN_1458260ab(void)

void FUN_1458260ab(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458260ce(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bde08e0;
  return;
}



// FUNCTION 1458260ce FUN_1458260ce body=32 status=ok
// SIG undefined FUN_1458260ce(void)

undefined8 * FUN_1458260ce(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b508810;
  return param_1;
}



// FUNCTION 1458260ee FUN_1458260ee body=9 status=ok
// SIG undefined FUN_1458260ee(void)

void FUN_1458260ee(longlong param_1)

{
  FUN_1458260f8(param_1 + 0x10);
  return;
}



// FUNCTION 1458260f8 FUN_1458260f8 body=134 status=ok
// SIG undefined FUN_1458260f8(void)

void FUN_1458260f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0215d0;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_140fbdbe2(param_1 + 0x4a);
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2194c(param_1);
  return;
}



// FUNCTION 14582617e FUN_14582617e body=56 status=ok
// SIG undefined FUN_14582617e(void)

void FUN_14582617e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001458261ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1458261b6 FUN_1458261b6 body=9 status=ok
// SIG undefined FUN_1458261b6(void)

void FUN_1458261b6(longlong param_1)

{
  FUN_1458261c0(param_1 + 0x10);
  return;
}



// FUNCTION 1458261c0 FUN_1458261c0 body=148 status=ok
// SIG undefined FUN_1458261c0(void)

void FUN_1458261c0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar4 = FUN_144729dda(param_1 + 0x10);
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    cVar4 = FUN_140114204(param_1 + 0x20);
    if (cVar4 != '\0') {
      uVar5 = FUN_14479d2ce(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar6 = FUN_140149a73(uVar5,0);
      if (lVar6 != 0) {
        FUN_140825b72(param_1 + 0x20,uVar2,lVar6,0);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145826250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145826254 FUN_145826254 body=112 status=ok
// SIG undefined FUN_145826254(void)

void FUN_145826254(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      iVar5 = 8;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1458262c4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1458262c4 FUN_1458262c4 body=131 status=ok
// SIG undefined FUN_1458262c4(void)

void FUN_1458262c4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 145826356 FUN_145826356 body=40 status=ok
// SIG undefined FUN_145826356(void)

undefined8 FUN_145826356(undefined8 param_1,int param_2)

{
  FUN_14582637e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582637e FUN_14582637e body=134 status=ok
// SIG undefined FUN_14582637e(void)

void FUN_14582637e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b937870;
  if ((param_1[0x26] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x26] + 0x50));
  }
  if ((param_1[0x20] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x20] + 0x50));
  }
  if ((param_1[0x1a] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1a] + 0x50));
    return;
  }
  return;
}



// FUNCTION 14582640c FUN_14582640c body=205 status=ok
// SIG undefined FUN_14582640c(void)

longlong * FUN_14582640c(longlong *param_1)

{
  FUN_140e48d86();
  *param_1 = (longlong)&PTR_FUN_14ac47d70;
  FUN_140785382(param_1 + 0x10,0x14);
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_140440628(param_1 + 0x18,&DAT_14cb23e24,0);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_14044066a(param_1 + 0x20,1,0);
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_140440628(param_1 + 0x28,&DAT_14cb23ee8,0);
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  FUN_14044066a(param_1 + 0x30,1,0);
  *(undefined4 *)(param_1 + 0x37) = 0;
  FUN_140440628(param_1 + 0x38,&DAT_14cb23ee8,0);
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



// FUNCTION 1458264da FUN_1458264da body=11 status=ok
// SIG undefined FUN_1458264da(void)

void FUN_1458264da(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  return;
}



// FUNCTION 1458264ec FUN_1458264ec body=97 status=ok
// SIG undefined FUN_1458264ec(void)

undefined8 FUN_1458264ec(ushort *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (((int)uVar1 / 2 & 0x80000001U) == 1) {
    cVar2 = FUN_14118b50a(*param_1);
    if ((uVar1 & 0x80000001) != 1) {
      return 0;
    }
    if (cVar2 == '\0') {
      return 0;
    }
  }
  lVar3 = (ulonglong)*param_1 * 0x3c;
  if ((int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf] < 3) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),
                     *(byte *)((longlong)&DAT_14ca814d0 + lVar3 + 5) >> 7);
  }
  return uVar4;
}



// FUNCTION 14582654e FUN_14582654e body=40 status=ok
// SIG undefined FUN_14582654e(void)

undefined8 FUN_14582654e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826576 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14582657c FUN_14582657c body=67 status=ok
// SIG undefined FUN_14582657c(void)

undefined8 * FUN_14582657c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae7bd00;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458265c0 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458265d4 FUN_1458265d4 body=31 status=ok
// SIG undefined FUN_1458265d4(void)

undefined8 FUN_1458265d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826602 FUN_145826602 body=31 status=ok
// SIG undefined FUN_145826602(void)

undefined8 FUN_145826602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826630 FUN_145826630 body=31 status=ok
// SIG undefined FUN_145826630(void)

undefined8 FUN_145826630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582665e FUN_14582665e body=31 status=ok
// SIG undefined FUN_14582665e(void)

undefined8 FUN_14582665e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582669a FUN_14582669a body=31 status=ok
// SIG undefined FUN_14582669a(void)

undefined8 FUN_14582669a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458266c8 FUN_1458266c8 body=31 status=ok
// SIG undefined FUN_1458266c8(void)

undefined8 FUN_1458266c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826716 FUN_145826716 body=98 status=ok
// SIG undefined FUN_145826716(void)

undefined8 * FUN_145826716(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_1 + 3);
  *param_1 = &PTR_FUN_14b676be0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_144a5dc74(param_1 + 10);
  FUN_144a5dc74(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 145826786 FUN_145826786 body=31 status=ok
// SIG undefined FUN_145826786(void)

undefined8 FUN_145826786(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458267b4 FUN_1458267b4 body=31 status=ok
// SIG undefined FUN_1458267b4(void)

undefined8 FUN_1458267b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458267e2 FUN_1458267e2 body=31 status=ok
// SIG undefined FUN_1458267e2(void)

undefined8 FUN_1458267e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826810 FUN_145826810 body=31 status=ok
// SIG undefined FUN_145826810(void)

undefined8 FUN_145826810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582683e FUN_14582683e body=31 status=ok
// SIG undefined FUN_14582683e(void)

undefined8 FUN_14582683e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582686c FUN_14582686c body=31 status=ok
// SIG undefined FUN_14582686c(void)

undefined8 FUN_14582686c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826892 FUN_145826892 body=40 status=ok
// SIG undefined FUN_145826892(void)

undefined8 FUN_145826892(undefined8 param_1,int param_2)

{
  thunk_FUN_140e36c74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458268ba thunk_FUN_140e36c74 body=5 status=ok
// SIG undefined thunk_FUN_140e36c74(void)

void thunk_FUN_140e36c74(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  uint uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14aed7c60;
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 7;
  puVar2 = param_1 + 9;
  uStack_48 = 0x100000000;
  uStack_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  puStack_40 = puVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1449c0562(&uStack_48);
  }
  uStack_68 = uStack_48;
  puStack_60 = puStack_40;
  uStack_58 = uStack_38;
  iStack_54 = iStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  plStack_70 = plVar1;
  if (iStack_34 < *(int *)(puStack_40 + 3)) {
    do {
      if (*(longlong *)(*plStack_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uStack_58 = uStack_58 & ~uStack_68._4_4_;
      FUN_1449c0562(&uStack_68);
    } while (iStack_54 < *(int *)(puStack_60 + 3));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140e36e81(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((uStack_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458268c0 FUN_1458268c0 body=40 status=ok
// SIG undefined FUN_1458268c0(void)

undefined8 FUN_1458268c0(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458268e8 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458268ee FUN_1458268ee body=101 status=ok
// SIG undefined FUN_1458268ee(void)

void FUN_1458268ee(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xe4 + (longlong)param_2 * 0xe8);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xe8 + 0xe0);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xe8 + 0xe0);
  FUN_145826954();
  return;
}



// FUNCTION 145826954 FUN_145826954 body=74 status=ok
// SIG undefined FUN_145826954(void)

void FUN_145826954(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1 + (longlong)param_2 * 0xe8;
  FUN_14118c3d0(lVar1 + 0x38);
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14582699e(param_1,param_2);
  return;
}



// FUNCTION 14582699e FUN_14582699e body=120 status=ok
// SIG undefined FUN_14582699e(void)

void FUN_14582699e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xe8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe8) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xe8 + 4) = uVar5;
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



// FUNCTION 145826a16 FUN_145826a16 body=9 status=ok
// SIG undefined FUN_145826a16(void)

void FUN_145826a16(longlong param_1)

{
  FUN_145826a20(param_1 + 0x10);
  return;
}



// FUNCTION 145826a20 FUN_145826a20 body=95 status=ok
// SIG undefined FUN_145826a20(void)

void FUN_145826a20(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b28ff30;
  plVar3 = (longlong *)param_1[0x18];
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
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  return;
}



// FUNCTION 145826a8c FUN_145826a8c body=31 status=ok
// SIG undefined FUN_145826a8c(void)

undefined8 FUN_145826a8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826ab6 FUN_145826ab6 body=509 status=ok
// SIG undefined FUN_145826ab6(void)

undefined8 * FUN_145826ab6(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4cbfa0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  lVar2 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar2 + 0x100);
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    lVar2 = FUN_14009d2a0();
    lVar4 = 0;
    lVar3 = FUN_14038fb82();
    do {
      uVar1 = *(undefined2 *)(lVar2 + 0xbc + lVar4 * 2);
      local_40 = param_1[2];
      if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14118c742(&local_40,uVar1);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 9);
    uVar1 = *(undefined2 *)(lVar2 + 0xe8);
    local_48 = param_1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_48,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0x78);
    local_50 = param_1[2];
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_50,uVar1);
    uVar1 = *(undefined2 *)(lVar2 + 0x6e);
    local_58 = param_1[2];
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_58,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0x104);
    local_60 = param_1[2];
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_60,uVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145826cb4 FUN_145826cb4 body=48 status=ok
// SIG undefined FUN_145826cb4(void)

void FUN_145826cb4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145826ce4(param_1 + 0x30);
  return;
}



// FUNCTION 145826ce4 FUN_145826ce4 body=55 status=ok
// SIG undefined FUN_145826ce4(void)

void FUN_145826ce4(longlong *param_1)

{
  FUN_145826d1c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145826d1c FUN_145826d1c body=123 status=ok
// SIG undefined FUN_145826d1c(void)

void FUN_145826d1c(longlong param_1,int param_2)

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



// FUNCTION 145826da6 FUN_145826da6 body=40 status=ok
// SIG undefined FUN_145826da6(void)

undefined8 FUN_145826da6(undefined8 param_1,int param_2)

{
  FUN_14118d138();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145826dd4 FUN_145826dd4 body=95 status=ok
// SIG undefined FUN_145826dd4(void)

ulonglong FUN_145826dd4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = (&DAT_14ca814c8)[(ulonglong)uVar1 * 0xf];
  if (((((*(int *)(param_1 + 2) / 2 & 0x80000001U) != 1) || ((uVar2 & 0x2400000) == 0x2400000)) &&
      (uVar3 = FUN_1410209b8(), (char)uVar3 != '\0')) && ((uVar2 >> 0x16 & 1) != 0)) {
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),
                    *(undefined1 *)((longlong)&DAT_14ca814d0 + (ulonglong)uVar1 * 0x3c + 7)) &
           0xffffffffffffff01;
  }
  return 0;
}



// FUNCTION 145826e34 FUN_145826e34 body=373 status=ok
// SIG undefined FUN_145826e34(void)

void FUN_145826e34(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar4 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar4,L"d3ddebug");
  if (cVar2 == '\0') {
    uVar4 = FUN_14118da1c();
    cVar2 = FUN_14054d46e(uVar4,L"d3debug");
    if (cVar2 == '\0') {
      uVar4 = FUN_14118da1c();
      cVar2 = FUN_14054d46e(uVar4,L"dxdebug");
      if (cVar2 == '\0') goto LAB_145826e8d;
    }
  }
  FUN_140635eb8(DAT_14ca769e8,1,0xc000000,0);
LAB_145826e8d:
  uVar4 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar4,L"d3dlogwarnings");
  if (cVar2 != '\0') {
    FUN_140635eb8(DAT_14ca769e8,2,0xc000000,0);
  }
  uVar4 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar4,L"d3dbreakonwarning");
  if (cVar2 != '\0') {
    FUN_140635eb8(DAT_14ca769e8,3,0xc000000,0);
  }
  uVar4 = FUN_14118da1c();
  cVar2 = FUN_14054d46e(uVar4,L"d3dcontinueonerrors");
  if (cVar2 != '\0') {
    FUN_140635eb8(DAT_14ca769e8,4,0xc000000,0);
  }
  lVar1 = DAT_14ca769f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  DAT_14ca8507a = 0 < *(int *)(lVar1 + uVar5 * 4);
  return;
}



// FUNCTION 145826fb4 FUN_145826fb4 body=101 status=ok
// SIG undefined FUN_145826fb4(void)

undefined8 * FUN_145826fb4(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a52aa90;
  param_1[5] = &PTR_FUN_14a52adb0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,4);
  param_1[0x35] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 14582701a FUN_14582701a body=45 status=ok
// SIG undefined FUN_14582701a(void)

undefined8 FUN_14582701a(undefined8 param_1,int param_2)

{
  FUN_145827048();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 145827048 FUN_145827048 body=74 status=ok
// SIG undefined FUN_145827048(void)

void FUN_145827048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b297ab0;
  param_1[3] = &DAT_14a176f00;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[3] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 4);
  return;
}



// FUNCTION 14582709a FUN_14582709a body=54 status=ok
// SIG undefined FUN_14582709a(void)

undefined8 * FUN_14582709a(undefined8 *param_1)

{
  FUN_1406046aa();
  *param_1 = &PTR_FUN_14b18efb0;
  param_1[5] = &PTR_FUN_14b18f2b0;
  param_1[6] = &PTR_FUN_14b18f2e0;
  return param_1;
}



// FUNCTION 1458270e0 FUN_1458270e0 body=44 status=ok
// SIG undefined FUN_1458270e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458270e0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc8cdc = _DAT_14cbc8cdc + -1;
  *param_1 = DAT_14cbc8cd0;
  DAT_14cbc8cd0 = param_1;
  return;
}



// FUNCTION 14582710c FUN_14582710c body=40 status=ok
// SIG undefined FUN_14582710c(void)

undefined8 FUN_14582710c(undefined8 param_1,int param_2)

{
  FUN_145827134();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145827134 FUN_145827134 body=126 status=ok
// SIG undefined FUN_145827134(void)

void FUN_145827134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a73ec20;
  param_1[5] = &PTR_FUN_14a73f230;
  param_1[6] = &PTR_LAB_14a73f270;
  FUN_1458271b2(param_1[0x1b0],*(undefined4 *)(param_1 + 0x1b1));
  if (param_1[0x1b0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17d] != 0) {
    FUN_1400020a8();
  }
  FUN_1458271e8(param_1);
  return;
}



// FUNCTION 1458271b2 FUN_1458271b2 body=54 status=ok
// SIG undefined FUN_1458271b2(void)

void FUN_1458271b2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
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
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458271e8 FUN_1458271e8 body=236 status=ok
// SIG undefined FUN_1458271e8(void)

void FUN_1458271e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a868d40;
  param_1[5] = &PTR_FUN_14a869340;
  param_1[6] = &PTR_LAB_14a869380;
  FUN_1411ab79c(param_1 + 0x6d);
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_141191a02(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1458272d4 FUN_1458272d4 body=73 status=ok
// SIG undefined FUN_1458272d4(void)

void FUN_1458272d4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) {
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72((longlong *)(lVar1 + 0x18),0,0,0x10);
      *(undefined4 *)(lVar1 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 14582731e FUN_14582731e body=68 status=ok
// SIG undefined FUN_14582731e(void)

undefined8 * FUN_14582731e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4214f0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 145827362 FUN_145827362 body=9 status=ok
// SIG undefined FUN_145827362(void)

void FUN_145827362(longlong param_1)

{
  FUN_14582736c(param_1 + 0x10);
  return;
}



// FUNCTION 14582736c FUN_14582736c body=123 status=ok
// SIG undefined FUN_14582736c(void)

void FUN_14582736c(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b42ccc0;
  plVar3 = param_1 + 7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xb) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar3;
    if (0x18 < *(ushort *)(param_1 + 10)) {
      plVar4 = (longlong *)*plVar3;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 10)) {
    FUN_1400020a8(*plVar3);
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458273e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1458273fa FUN_1458273fa body=467 status=ok
// SIG undefined FUN_1458273fa(void)

void FUN_1458273fa(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_88 [44];
  undefined1 local_5c [12];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_1 + 0x10);
  local_50 = *(undefined8 *)(param_1 + 8);
  FUN_145827634(local_5c);
  lVar6 = FUN_145827710(param_3,param_2,local_5c,&local_50);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar5 + 0xc80) & 1) == 0) {
    plVar7 = (longlong *)FUN_1458275ce();
  }
  else {
    puVar3 = (undefined1 *)(lVar5 + 0xc80);
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc7c);
    *puVar3 = 0;
    *(undefined4 *)(lVar5 + 0xc7c) = 0xffffffff;
    plVar7 = (longlong *)FUN_1458275ce();
    *(undefined4 *)(lVar5 + 0xc7c) = uVar4;
    *puVar3 = 1;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar8 = *(int *)(lVar6 + 0x50);
  *(uint *)(lVar6 + 0x50) = iVar8 + 1U;
  if (*(uint *)(lVar6 + 0x54) < iVar8 + 1U) {
    FUN_140822376((longlong *)(lVar6 + 0x48),iVar8);
  }
  lVar5 = *(longlong *)(lVar6 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar8 * 0x10) = plVar7 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = plVar7;
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
  *(undefined1 *)(plVar7 + 5) = *(undefined1 *)(param_3 + 0xa0);
  if (plVar7[6] == *(longlong *)(param_3 + 0xa8)) {
    iVar8 = *(int *)(param_3 + 0xb0);
    if ((int)plVar7[7] == iVar8) goto LAB_145827530;
  }
  else {
    iVar8 = *(int *)(param_3 + 0xb0);
  }
  plVar7[6] = *(longlong *)(param_3 + 0xa8);
  *(int *)(plVar7 + 7) = iVar8;
  plVar7[8] = 0;
LAB_145827530:
  *(undefined4 *)(plVar7 + 10) = *(undefined4 *)(param_3 + 200);
  plVar7[9] = *(longlong *)(param_3 + 0xc0);
  *(undefined2 *)(plVar7 + 0xb) = 0x101;
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
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458275ce FUN_1458275ce body=101 status=ok
// SIG undefined FUN_1458275ce(void)

void FUN_1458275ce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b97e060;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[0xb] = 0;
  puVar1[2] = &PTR_FUN_14b5c7380;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



// FUNCTION 145827634 FUN_145827634 body=218 status=ok
// SIG undefined FUN_145827634(void)

longlong FUN_145827634(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 8);
  }
  FUN_144a7660c(puVar1,local_4c,1);
  FUN_1408226d0(local_4c,&local_40,1);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_140002266(&local_30,L"__Bind_FailsafeCarryable_%s",puVar2);
  *(undefined8 *)(param_1 + 4) = 0;
  puVar2 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar2 = local_30;
  }
  FUN_1405f0d29(param_1,puVar2,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145827710 FUN_145827710 body=372 status=ok
// SIG undefined FUN_145827710(void)

longlong * FUN_145827710(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [36];
  undefined8 local_44;
  undefined4 local_3c;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar7 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 8);
  }
  FUN_144a7660c(puVar7,&local_44,1);
  local_30 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_30[1] = (longlong)&DAT_100000001;
  *local_30 = (longlong)&PTR_FUN_14b41ba60;
  local_38 = local_30 + 2;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[2] = (longlong)&PTR_FUN_14b417bb0;
  local_30[5] = *param_3;
  *(int *)(local_30 + 6) = (int)param_3[1];
  *(undefined4 *)((longlong)local_30 + 0x3c) = local_3c;
  *(undefined8 *)((longlong)local_30 + 0x34) = local_44;
  *(undefined1 *)(local_30 + 8) = 0;
  *(undefined1 *)(local_30 + 0xf) = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[9] = 0;
  local_30[10] = 0;
  FUN_1408241ea();
  iVar3 = *(int *)(param_2 + 0x2c8);
  *(uint *)(param_2 + 0x2c8) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x2cc) < iVar3 + 1U) {
    FUN_14082428c((longlong *)(param_2 + 0x2c0),iVar3);
  }
  lVar4 = *(longlong *)(param_2 + 0x2c0);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = local_38;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  if (*param_4 != 0) {
    FUN_14082216c(local_38,param_4);
  }
  plVar6 = local_30;
  plVar5 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582789c FUN_14582789c body=116 status=ok
// SIG undefined FUN_14582789c(void)

void FUN_14582789c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1407afa82();
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x755f) == '\x01') {
      lVar2 = FUN_1407afa82(param_1);
      if (lVar2 != 0) {
        *(undefined1 *)(param_1 + 0x755f) = 0;
        FUN_140fb4310(lVar2);
      }
    }
    if ((*(longlong *)(lVar1 + 0xb20) != 0) && ((*(byte *)(lVar1 + 0x3e0) & 2) != 0)) {
      FUN_1412bbaf4(lVar1 + 0x9b0,lVar1 + 0x8c8);
      return;
    }
  }
  return;
}



// FUNCTION 145827910 FUN_145827910 body=64 status=ok
// SIG undefined FUN_145827910(void)

undefined4 FUN_145827910(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145827952 FUN_145827952 body=48 status=ok
// SIG undefined FUN_145827952(void)

void FUN_145827952(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb8,8);
  }
  return;
}



// FUNCTION 145827982 FUN_145827982 body=221 status=ok
// SIG undefined FUN_145827982(void)

void FUN_145827982(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0xb8;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0xb8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xb8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0xb8);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_14018c050(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145827a60 FUN_145827a60 body=83 status=ok
// SIG undefined FUN_145827a60(void)

longlong * FUN_145827a60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_141199f54();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 145827ad0 FUN_145827ad0 body=129 status=ok
// SIG undefined FUN_145827ad0(void)

void FUN_145827ad0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140059518(param_1 + 0x44);
  if (lVar1 != 0) {
    lVar1 = FUN_1400b6e86(lVar1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x18))(lVar1 + 0x30);
      if (lVar1 != 0) {
        lVar2 = FUN_1410c44e8();
        if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
            (*(char *)(lVar1 + 0x130) == '\x01')) && (*(char *)(param_1 + 0x110) == '\0')) {
          FUN_14119a14e(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145827b52 FUN_145827b52 body=5 status=ok
// SIG undefined FUN_145827b52(void)

longlong FUN_145827b52(longlong param_1)

{
  return param_1 + 0x78;
}



// FUNCTION 145827b58 FUN_145827b58 body=5 status=ok
// SIG undefined FUN_145827b58(void)

longlong FUN_145827b58(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 145827b5d FUN_145827b5d body=150 status=ok
// SIG undefined FUN_145827b5d(void)

undefined8 FUN_145827b5d(undefined8 param_1)

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
  uVar1 = FUN_140febe0e();
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



// FUNCTION 145827bf4 FUN_145827bf4 body=323 status=ok
// SIG undefined FUN_145827bf4(void)

undefined4 * FUN_145827bf4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145827db8(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145827d38(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14119c1aa(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145827d38 FUN_145827d38 body=128 status=ok
// SIG undefined FUN_145827d38(void)

undefined8 FUN_145827d38(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148e55542((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 145827db8 FUN_145827db8 body=231 status=ok
// SIG undefined FUN_145827db8(void)

int * FUN_145827db8(longlong *param_1,int *param_2)

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



// FUNCTION 145827ea0 FUN_145827ea0 body=53 status=ok
// SIG undefined FUN_145827ea0(void)

void FUN_145827ea0(longlong *param_1)

{
  FUN_145827ed6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145827ed6 FUN_145827ed6 body=88 status=ok
// SIG undefined FUN_145827ed6(void)

void FUN_145827ed6(longlong param_1)

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



// FUNCTION 145827f2e FUN_145827f2e body=312 status=ok
// SIG undefined FUN_145827f2e(void)

undefined8 FUN_145827f2e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x150;
    if (*(longlong *)(param_1 + 0x158) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x158);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x160) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar6 * 0x18);
        if (*plVar1 == param_2) {
          if (((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) != 0) {
            uVar3 = 0;
            goto LAB_145827fab;
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  local_48 = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  local_38 = &local_40;
  local_30 = &local_48;
  FUN_145828068((longlong *)(param_1 + 0x118),local_24);
  FUN_14580147e(param_1,param_3);
  uVar3 = 1;
LAB_145827fab:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 145828068 FUN_145828068 body=366 status=ok
// SIG undefined FUN_145828068(void)

undefined4 * FUN_145828068(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14582825a(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1458281d8(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145828342(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458281d8 FUN_1458281d8 body=130 status=ok
// SIG undefined FUN_1458281d8(void)

undefined8 FUN_1458281d8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148b05dd6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14582825a FUN_14582825a body=231 status=ok
// SIG undefined FUN_14582825a(void)

int * FUN_14582825a(longlong *param_1,int *param_2)

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



// FUNCTION 145828342 FUN_145828342 body=482 status=ok
// SIG undefined FUN_145828342(void)

void FUN_145828342(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145828526 FUN_145828526 body=90 status=ok
// SIG undefined FUN_145828526(void)

void FUN_145828526(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1410dea44(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014582853b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  puVar2 = (undefined8 *)FUN_14119c38e(&DAT_14cb75928);
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b3f1b70;
  puVar2[3] = 0x4348000043fa0000;
  *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) & 0xfffffff8 | 2;
  return;
}



// FUNCTION 145828580 FUN_145828580 body=69 status=ok
// SIG undefined FUN_145828580(void)

void FUN_145828580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14119c38e(&DAT_14cb75928);
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b3f1b70;
  puVar1[3] = 0x4348000043fa0000;
  *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) & 0xfffffff8 | 2;
  return;
}



// FUNCTION 1458285c6 FUN_1458285c6 body=133 status=ok
// SIG undefined FUN_1458285c6(void)

undefined8 * FUN_1458285c6(undefined8 *param_1)

{
  *param_1 = 0x100000000;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
  }
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  FUN_14582864c(param_1 + 0xe,2);
  return param_1;
}



// FUNCTION 14582864c FUN_14582864c body=68 status=ok
// SIG undefined FUN_14582864c(void)

int FUN_14582864c(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_145828690(param_1,iVar1);
  }
  FUN_14119c3e2((longlong)iVar1 * 0xf8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 145828690 FUN_145828690 body=150 status=ok
// SIG undefined FUN_145828690(void)

void FUN_145828690(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145828726 FUN_145828726 body=1158 status=ok
// SIG undefined FUN_145828726(void)

void FUN_145828726(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong local_70;
  int local_68;
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x4000;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_64 = 0x4461000000000000;
  local_5c = local_5c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  iVar1 = local_68;
  local_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  plVar2 = &local_70;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_98 = lStack_78;
  if ((lStack_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_f0 = &local_b8;
  local_b0 = local_5c;
  local_b8 = local_64;
  local_d0 = local_40;
  local_c8 = local_38;
  local_c0 = 0;
  local_e8 = iVar1 != 0;
  local_d8 = &local_a8;
  local_f8 = local_58;
  local_e0 = plVar2;
  FUN_145828bae(local_28,&local_d0,local_48,local_50);
  if ((DAT_14c950c29 == 1) && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145828bae FUN_145828bae body=476 status=ok
// SIG undefined FUN_145828bae(void)

void FUN_145828bae(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,char param_7,undefined8 param_8,
                  undefined4 *param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar3 != 0) {
    if (param_7 != '\0') {
      *(undefined2 *)param_6 = 0x101;
    }
    local_d0 = *param_2;
    FUN_145828d8c(&local_c8,param_1,&local_d0,param_3);
    FUN_14485c47a(CONCAT44(uStack_bc,uStack_c0) + 0x88,param_4);
    local_c8 = CONCAT31(local_c8._1_3_,1);
    FUN_14485c47a(CONCAT44(uStack_bc,uStack_c0) + 0x90,param_5);
    local_c8._0_2_ = CONCAT11(1,(undefined1)local_c8);
    *(undefined4 *)(CONCAT44(uStack_bc,uStack_c0) + 0x18) = *(undefined4 *)(param_6 + 1);
    *(undefined8 *)(CONCAT44(uStack_bc,uStack_c0) + 0x10) = *param_6;
    FUN_140faf12e(&local_c8,&local_58);
    FUN_14119d0c2(&local_c8);
    uVar4 = FUN_14119d0a4(lVar3);
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    local_c8 = *param_9;
    uStack_c4 = (undefined4)*(undefined8 *)(param_9 + 2);
    uStack_c0 = (undefined4)((ulonglong)*(undefined8 *)(param_9 + 2) >> 0x20);
    uStack_bc = 0;
    local_b8 = 0;
    FUN_14485c47a(&uStack_bc,*(undefined8 *)(param_9 + 4));
    *puVar5 = &PTR_FUN_14ab66bd0;
    puVar5[1] = local_58;
    puVar5[2] = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      plVar6 = local_50;
    }
    *(undefined4 *)(puVar5 + 5) = local_b8;
    *(undefined4 *)(puVar5 + 3) = local_c8;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_c4;
    *(undefined4 *)(puVar5 + 4) = uStack_c0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_bc;
    puVar5[6] = param_8;
    FUN_140b1330e(uVar4,*(undefined8 *)(param_9 + 4),param_9[1],puVar5);
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
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145828d8c FUN_145828d8c body=106 status=ok
// SIG undefined FUN_145828d8c(void)

longlong FUN_145828d8c(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1411375d8();
  FUN_14485c47a(*(longlong *)(param_1 + 8) + 0x80,param_2);
  lVar1 = *param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + 0x98) != lVar1) {
    *(undefined8 *)(lVar2 + 0xa8) = 0;
  }
  *(longlong *)(lVar2 + 0x98) = lVar1;
  FUN_14485c47a(*(longlong *)(param_1 + 8) + 200,param_4);
  return param_1;
}



// FUNCTION 145828df6 FUN_145828df6 body=45 status=ok
// SIG undefined FUN_145828df6(void)

undefined8 FUN_145828df6(undefined8 param_1,int param_2)

{
  FUN_145828e24();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145828e24 FUN_145828e24 body=56 status=ok
// SIG undefined FUN_145828e24(void)

void FUN_145828e24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b236e60;
  FUN_14119d219(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145828e64 FUN_145828e64 body=107 status=ok
// SIG undefined FUN_145828e64(void)

void FUN_145828e64(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((*(longlong *)(param_1 + 0x70) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x50));
    return;
  }
  return;
}



// FUNCTION 145828ed0 FUN_145828ed0 body=581 status=ok
// SIG undefined FUN_145828ed0(void)

void FUN_145828ed0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14582980a();
  local_38 = *(undefined8 *)*param_2;
  plVar4 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar4 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_30 = plVar4;
  }
  FUN_145a1f102(param_1,&local_38);
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
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
  local_38 = *(undefined8 *)*param_2;
  plVar4 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar4 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_30 = plVar4;
  }
  FUN_145829116(param_1,&local_38);
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
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
  local_38 = *(undefined8 *)*param_2;
  plVar4 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar4 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_30 = plVar4;
  }
  FUN_145ce2fee(param_1,&local_38);
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145829116 FUN_145829116 body=142 status=ok
// SIG undefined FUN_145829116(void)

void FUN_145829116(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1458295f4(param_1 + 0x6e8,local_60);
  FUN_1414f3eb8(local_50,param_1 + 0x28,&DAT_14cbced60,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1458291a6(param_1,local_50,param_2);
  FUN_14119d498(local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458291a6 FUN_1458291a6 body=665 status=ok
// SIG undefined FUN_1458291a6(void)

void FUN_1458291a6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  longlong local_68 [2];
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = FUN_14119d4d6(*(undefined8 *)(param_1 + 0x38));
  if ((lVar6 != 0) && (lVar6 = FUN_14119d510(param_1,*(undefined4 *)(lVar6 + 0xe0)), lVar6 != 0)) {
    if (*param_3 == 0) {
      local_78 = (undefined8 *)0x0;
      local_70 = 0;
      FUN_1446efa72(&local_78,0,2,0x10);
      local_70 = 2;
      *local_78 = &PTR_LAB_14b4f3a00;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_78[2] = lVar7;
      *local_78 = &PTR_FUN_14b4f09f0;
      FUN_140056680(local_68,&DAT_149dfb77a);
      FUN_145829440(param_2,local_48,local_68);
      uVar5 = FUN_14119d564(param_1);
      FUN_14119d789(lVar6,uVar5,local_48,&local_78);
      bVar9 = local_48[0] != 0;
      local_48[0] = local_68[0];
      if (bVar9) {
        FUN_1400020a8();
        local_48[0] = local_68[0];
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        FUN_140056680(local_48,L"unset");
      }
      else {
        FUN_14119d664(*(longlong *)(param_1 + 0x60),local_48);
      }
      lVar3 = *param_3;
      plVar4 = (longlong *)param_3[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      local_50 = 3;
      *local_58 = &PTR_LAB_14b4f06a0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_58[2] = lVar8;
      *local_58 = &PTR_FUN_14b4f0980;
      local_58[3] = lVar3;
      local_58[4] = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      FUN_145829440(param_2,local_68,local_48);
      uVar5 = FUN_145829596();
      FUN_14119d8d9(lVar6,uVar5,local_68,&local_58);
      if (local_68[0] != 0) {
        FUN_1400020a8();
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
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145829440 FUN_145829440 body=341 status=ok
// SIG undefined FUN_145829440(void)

undefined8 FUN_145829440(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_3 + 8) < 2) {
    FUN_140474144(local_58,param_1,param_1 + 0x10);
    FUN_144a7dea0(local_48,local_58,&DAT_14cb97660);
    FUN_144a7dea0(param_2,local_48,param_1 + 0x20);
    local_78[0] = local_58[0];
    if (local_48[0] != 0) {
      FUN_1400020a8();
      local_78[0] = local_58[0];
    }
  }
  else {
    FUN_140474144(local_78,param_1,param_1 + 0x10);
    FUN_144a7dea0(local_68,local_78,&DAT_14cb97660);
    FUN_144a7dea0(local_58,local_68,param_3);
    FUN_144a7dea0(local_48,local_58,&DAT_14cb97660);
    FUN_144a7dea0(param_2,local_48,param_1 + 0x20);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145829596 FUN_145829596 body=92 status=ok
// SIG undefined FUN_145829596(void)

undefined4 FUN_145829596(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,local_28);
  uVar1 = FUN_140b71325(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458295f4 FUN_1458295f4 body=530 status=ok
// SIG undefined FUN_1458295f4(void)

undefined8 * FUN_1458295f4(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined2 *local_e8;
  uint local_e0;
  undefined2 *local_d8;
  undefined2 *local_d0;
  uint local_bc;
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_1 == 0) {
    *param_2 = 0;
    iVar3 = DAT_14cbced88;
    _Src = DAT_14cbced80;
    lVar5 = (longlong)DAT_14cbced88;
    *(int *)(param_2 + 1) = DAT_14cbced88;
    if (lVar5 != 0) {
      FUN_1446dd670(param_2,iVar3,0);
      memcpy((void *)*param_2,_Src,lVar5 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    FUN_1400b2348(param_1 + 10,&local_78,1);
    local_b8 = &DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      local_b8 = local_78;
    }
    local_b0 = param_2;
    FUN_1400021e4((longlong)param_1 + 0x44,&local_88);
    puVar6 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar6 = local_88;
    }
    local_bc = (uint)*(byte *)(param_1 + 8);
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    FUN_1400b2348(param_1 + 3,&local_98,1);
    local_e8 = &DAT_149dfb77a;
    if ((int)uStack_90 != 0) {
      local_e8 = local_98;
    }
    lVar5 = param_1[2];
    lVar2 = param_1[1];
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1400021e4(param_1,&local_a8);
    param_2 = local_b0;
    puVar4 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar4 = local_a8;
    }
    local_d0 = local_b8;
    local_e0 = local_bc;
    local_f8 = uVar1;
    local_f0 = (int)lVar5;
    local_d8 = puVar6;
    FUN_140002266(local_b0,L"%s %d %d %d %s %d %s %s",puVar4,(int)lVar2);
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582980a FUN_14582980a body=208 status=ok
// SIG undefined FUN_14582980a(void)

void FUN_14582980a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458298dc();
  local_30 = *(undefined8 *)*param_2;
  plVar4 = (longlong *)((undefined8 *)*param_2)[1];
  if (plVar4 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_28 = plVar4;
  }
  (**(code **)(*param_1 + 0xf0))(param_1,&local_30);
  plVar2 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458298dc FUN_1458298dc body=1 status=ok
// SIG undefined FUN_1458298dc(void)

void FUN_1458298dc(void)

{
  return;
}



// FUNCTION 1458298de FUN_1458298de body=40 status=ok
// SIG undefined FUN_1458298de(void)

undefined8 FUN_1458298de(undefined8 param_1,int param_2)

{
  FUN_145829906();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145829906 FUN_145829906 body=54 status=ok
// SIG undefined FUN_145829906(void)

void FUN_145829906(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab54ae0;
  FUN_144a2da94(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14582994a FUN_14582994a body=56 status=ok
// SIG undefined FUN_14582994a(void)

void FUN_14582994a(longlong param_1)

{
  FUN_145829982();
  *(undefined8 *)(param_1 + 0xda8) = 0;
  FUN_14119e5ee(param_1,0);
  *(undefined1 *)(param_1 + 0xce8) = 0;
  FUN_14119eb2c(param_1,0);
  return;
}



// FUNCTION 145829982 FUN_145829982 body=18 status=ok
// SIG undefined FUN_145829982(void)

void FUN_145829982(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x4cd) = 0;
  *(undefined8 *)(param_1 + 0x4d5) = 0;
  *(undefined8 *)(param_1 + 0x4c4) = 0;
  *(undefined8 *)(param_1 + 0x4cc) = 0;
  return;
}



// FUNCTION 145829994 FUN_145829994 body=115 status=ok
// SIG undefined FUN_145829994(void)

void FUN_145829994(longlong param_1)

{
  longlong lVar1;
  
  FUN_14119f284(param_1 + 0x90,0);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    FUN_14106822e(*(undefined8 *)(lVar1 + 0x118),*(undefined4 *)(lVar1 + 0x120));
    *(undefined4 *)(lVar1 + 0x120) = 0;
    if (*(int *)(lVar1 + 0x124) != 0) {
      FUN_145829a08(lVar1 + 0x118);
    }
    FUN_14119f28e(param_1,1);
    return;
  }
  return;
}



// FUNCTION 145829a08 FUN_145829a08 body=48 status=ok
// SIG undefined FUN_145829a08(void)

void FUN_145829a08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x150,8);
  }
  return;
}



// FUNCTION 145829a38 FUN_145829a38 body=4 status=ok
// SIG undefined FUN_145829a38(void)

undefined4 FUN_145829a38(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 145829a3c FUN_145829a3c body=134 status=ok
// SIG undefined FUN_145829a3c(void)

void FUN_145829a3c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145829ac4(param_1,iVar1);
    }
    FUN_14119f8b6((longlong)iVar1 * 0x150 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1488c9a48(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1488c982e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145829ac4 FUN_145829ac4 body=146 status=ok
// SIG undefined FUN_145829ac4(void)

void FUN_145829ac4(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x150,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145829b6c FUN_145829b6c body=102 status=ok
// SIG undefined FUN_145829b6c(void)

void FUN_145829b6c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_145829bd2(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145829bd2 FUN_145829bd2 body=123 status=ok
// SIG undefined FUN_145829bd2(void)

void FUN_145829bd2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x40 + 0x38);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x38);
  FUN_1412ae528(*param_1 + lVar2 + 8);
  FUN_145829c4e(param_1,param_2);
  return;
}



// FUNCTION 145829c4e FUN_145829c4e body=116 status=ok
// SIG undefined FUN_145829c4e(void)

void FUN_145829c4e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 145829cd0 FUN_145829cd0 body=40 status=ok
// SIG undefined FUN_145829cd0(void)

undefined8 FUN_145829cd0(undefined8 param_1,int param_2)

{
  FUN_145829cf8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145829cf8 FUN_145829cf8 body=59 status=ok
// SIG undefined FUN_145829cf8(void)

void FUN_145829cf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0ade20;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145829d56 FUN_145829d56 body=82 status=ok
// SIG undefined FUN_145829d56(void)

void FUN_145829d56(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_140115c12(param_1 + 2,0);
    }
    param_1[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 145829da8 FUN_145829da8 body=262 status=ok
// SIG undefined FUN_145829da8(void)

void FUN_145829da8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  uVar4 = 0;
  if (param_2[0xd] != 0) {
    uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_1b0 = (undefined **)CONCAT44(local_1b0._4_4_,uVar4);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1b0,4);
    uVar4 = (uint)local_1b0;
    if (1 < (uint)local_1b0) {
      FUN_14572541c(param_2);
      uVar4 = (uint)local_1b0;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  lVar3 = param_1;
  if (uVar4 != 0) {
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_145829e46;
    }
    if ((*(byte *)((longlong)param_2 + 0x2b) & 8) == 0) {
      FUN_145829eb0(param_1 + 0xa0,param_2,param_1);
    }
  }
LAB_145829e46:
  if ((local_20 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145829eb0 FUN_145829eb0 body=492 status=ok
// SIG undefined FUN_145829eb0(void)

void FUN_145829eb0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  uint local_30;
  byte local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140562eea(local_2a,param_2,0,&DAT_14c896044);
  if ((local_2a[0] & 2) == 0) {
    FUN_14582a0e2(param_2,param_1);
    puVar1 = (uint *)(param_1 + 0x70);
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      puVar2 = *(uint **)param_2[1];
      if ((uint *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,puVar1,4);
        }
        else {
          FUN_14572512c(param_2,puVar1);
        }
      }
      else {
        *puVar1 = *puVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      local_30 = *puVar1;
    }
    else {
      local_30 = *puVar1 & 0xfffffffe;
      puVar4 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
    }
    FUN_1447a84cc(param_2,param_1 + 0x78);
    FUN_14041268c(param_2,param_1 + 0x88);
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x98),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x98) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_140077068(param_2,param_1 + 0xa0);
    FUN_14582a09e(param_1 + 0xd8,param_2);
    if ((local_30 & 1) == 0) {
      local_40 = 0;
      local_48 = 1;
      FUN_140430222(param_1 + 0xb0,param_2,param_3,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14582a09e FUN_14582a09e body=68 status=ok
// SIG undefined FUN_14582a09e(void)

void FUN_14582a09e(longlong param_1,undefined8 param_2)

{
  FUN_1411a16b6(param_2,param_1);
  FUN_1447a84cc(param_2,param_1 + 0x10);
  FUN_1447a84cc(param_2,param_1 + 0x20);
  FUN_1447a84cc(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 14582a0e2 FUN_14582a0e2 body=138 status=ok
// SIG undefined FUN_14582a0e2(void)

undefined8 FUN_14582a0e2(undefined8 param_1,longlong param_2)

{
  FUN_140333cf8();
  FUN_140333cf8(param_1,param_2 + 0xc);
  FUN_140333cf8(param_1,param_2 + 0x18);
  FUN_140333cf8(param_1,param_2 + 0x24);
  FUN_140333cf8(param_1,param_2 + 0x30);
  FUN_140333cf8(param_1,param_2 + 0x3c);
  FUN_1411a1637(param_1,param_2 + 0x48);
  FUN_1411a1637(param_1,param_2 + 0x49);
  FUN_1447e46aa(param_1,param_2 + 0x50);
  FUN_1447e46aa(param_1,param_2 + 0x60);
  return param_1;
}



// FUNCTION 14582a16c FUN_14582a16c body=95 status=ok
// SIG undefined FUN_14582a16c(void)

void FUN_14582a16c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14582a1d6 FUN_14582a1d6 body=110 status=ok
// SIG undefined FUN_14582a1d6(void)

undefined8 * FUN_14582a1d6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a759b40;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  FUN_14582a244(param_1 + 0x14);
  return param_1;
}



// FUNCTION 14582a244 FUN_14582a244 body=191 status=ok
// SIG undefined FUN_14582a244(void)

void FUN_14582a244(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x7fffffff00000000;
  param_1[2] = 0x7fffffff7fffffff;
  param_1[3] = 0x8000000080000000;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0x7fffffff7fffffff;
  param_1[7] = 0x800000007fffffff;
  param_1[8] = 0x8000000080000000;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbd) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0xff;
  *(undefined4 *)(param_1 + 0x1a) = DAT_14c845dc4;
  param_1[0x19] = DAT_14c845dbc;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}



// FUNCTION 14582a326 FUN_14582a326 body=40 status=ok
// SIG undefined FUN_14582a326(void)

undefined8 FUN_14582a326(undefined8 param_1,int param_2)

{
  FUN_14582a34e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14582a34e FUN_14582a34e body=76 status=ok
// SIG undefined FUN_14582a34e(void)

void FUN_14582a34e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4e5c00;
  param_1[0x1f] = &PTR_LAB_14a4e5f50;
  param_1[0x20] = &PTR_LAB_14a4e5f80;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}


