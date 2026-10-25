// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484d2f68 FUN_1484d2f68 body=287 status=ok
// SIG undefined FUN_1484d2f68(void)

undefined4 * FUN_1484d2f68(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1484d3088(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_1484d316e(param_1,uVar5,local_40,&local_4c);
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
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_1484d31ee(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d3088 FUN_1484d3088 body=230 status=ok
// SIG undefined FUN_1484d3088(void)

int * FUN_1484d3088(longlong *param_1,int *param_2)

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



// FUNCTION 1484d316e FUN_1484d316e body=128 status=ok
// SIG undefined FUN_1484d316e(void)

undefined8 FUN_1484d316e(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_1484d2dce(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1484d31ee FUN_1484d31ee body=419 status=ok
// SIG undefined FUN_1484d31ee(void)

void FUN_1484d31ee(longlong *param_1)

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



// FUNCTION 1484d3392 FUN_1484d3392 body=105 status=ok
// SIG undefined FUN_1484d3392(void)

void FUN_1484d3392(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  FUN_1484b585e(param_1[2]);
  local_38 = param_1 + 1;
  local_30 = param_1 + 2;
  FUN_1484d2f68(lVar1 + 0x448,local_24);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d3406 FUN_1484d3406 body=12 status=ok
// SIG undefined FUN_1484d3406(void)

void FUN_1484d3406(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484d340f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484d3412 FUN_1484d3412 body=29 status=ok
// SIG undefined FUN_1484d3412(void)

undefined8 FUN_1484d3412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d3430 FUN_1484d3430 body=163 status=ok
// SIG undefined FUN_1484d3430(void)

void FUN_1484d3430(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  FUN_1484b585e(*(undefined8 *)(param_1 + 0xb8));
  local_38 = param_1 + 0xb0;
  local_30 = param_1 + 0xb8;
  FUN_1484d2f68(lVar2 + 0x448,local_24);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d34ea FUN_1484d34ea body=38 status=ok
// SIG undefined FUN_1484d34ea(void)

undefined8 FUN_1484d34ea(undefined8 param_1,int param_2)

{
  FUN_1484d375e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d3518 FUN_1484d3518 body=220 status=ok
// SIG undefined FUN_1484d3518(void)

undefined8 * FUN_1484d3518(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar4 = FUN_14480c900(0,param_3);
  bVar5 = FUN_144914152(param_1,param_3);
  bVar1 = *(byte *)(param_1 + 0x6e);
  cVar2 = *(char *)(param_1 + 0x82);
  bVar3 = *(byte *)(param_1 + 0x72);
  bVar6 = FUN_144b26b6a(param_1);
  *(uint *)(param_2 + 2) =
       ((uint)bVar6 << 5 |
       (uint)(cVar2 != '\x01') << 0xd | (bVar1 & 8) << 4 | (uint)bVar4 * 4 + (uint)bVar5 * 8) +
       (bVar3 & 1) * 0x4000 + 2;
  FUN_144b252aa(param_1 + 0x438,param_2);
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar8 = 0;
    uVar7 = *(uint *)(param_2 + 2);
    if ((*(byte *)((longlong)param_2 + 4) & 2) != 0) {
      uVar8 = uVar7 >> 3 & 0x10;
    }
  }
  else {
    uVar7 = *(uint *)(param_2 + 2);
    uVar8 = 0;
  }
  *(uint *)(param_2 + 2) = uVar7 & 0xffffffef | uVar8;
  return param_2;
}



// FUNCTION 1484d3628 FUN_1484d3628 body=308 status=ok
// SIG undefined FUN_1484d3628(void)

void FUN_1484d3628(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x448);
  lVar2 = param_1 + 0x458;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x470) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x470);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1484bc49e(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d375e FUN_1484d375e body=60 status=ok
// SIG undefined FUN_1484d375e(void)

void FUN_1484d375e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x490) = 0;
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_1400020a8();
  }
  FUN_1484d379a(param_1 + 0x448);
  FUN_1484af8dc(param_1);
  return;
}



// FUNCTION 1484d379a FUN_1484d379a body=52 status=ok
// SIG undefined FUN_1484d379a(void)

void FUN_1484d379a(longlong *param_1)

{
  FUN_1484d37ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484d37ce FUN_1484d37ce body=89 status=ok
// SIG undefined FUN_1484d37ce(void)

void FUN_1484d37ce(longlong param_1)

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



// FUNCTION 1484d3828 FUN_1484d3828 body=254 status=ok
// SIG undefined FUN_1484d3828(void)

longlong * FUN_1484d3828(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)(param_2 + 0xc) = param_3;
  uVar5 = *(int *)(param_1 + 0x50) * 0x200 + *(int *)(param_1 + 0x54);
  if (uVar5 != 0) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (uVar7 >> 9) * 8);
      lVar4 = (ulonglong)((uint)uVar7 & 0x1ff) * 0x34;
      if (*(uint *)(param_2 + 0xc) == (uint)*(byte *)(lVar3 + 4 + lVar4)) {
        puVar8 = (undefined4 *)(lVar3 + lVar4);
        uVar1 = *puVar8;
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1484d26fa(param_2,iVar2);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = uVar1;
        FUN_144980568(param_2 + 2,local_4c,puVar8,0);
      }
      uVar6 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar5 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1484d3928 FUN_1484d3928 body=86 status=ok
// SIG undefined FUN_1484d3928(void)

longlong * FUN_1484d3928(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_14759db7a(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  return param_1;
}



// FUNCTION 1484d397e FUN_1484d397e body=100 status=ok
// SIG undefined FUN_1484d397e(void)

longlong * FUN_1484d397e(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    FUN_145c7bc50(param_1);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1447ab16c(param_1,0);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1484d39e2 FUN_1484d39e2 body=93 status=ok
// SIG undefined FUN_1484d39e2(void)

longlong FUN_1484d39e2(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1484d3a40(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1484d3a40 FUN_1484d3a40 body=146 status=ok
// SIG undefined FUN_1484d3a40(void)

longlong * FUN_1484d3a40(longlong *param_1,longlong *param_2)

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



// FUNCTION 1484d3ad2 FUN_1484d3ad2 body=105 status=ok
// SIG undefined FUN_1484d3ad2(void)

void FUN_1484d3ad2(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  FUN_1484b585e(param_1[2]);
  local_38 = param_1 + 1;
  local_30 = param_1 + 2;
  FUN_1484d2f68(lVar1 + 0x448,local_24);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d3b46 FUN_1484d3b46 body=12 status=ok
// SIG undefined FUN_1484d3b46(void)

void FUN_1484d3b46(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484d3b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484d3b52 FUN_1484d3b52 body=29 status=ok
// SIG undefined FUN_1484d3b52(void)

undefined8 FUN_1484d3b52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d3b70 FUN_1484d3b70 body=163 status=ok
// SIG undefined FUN_1484d3b70(void)

void FUN_1484d3b70(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  FUN_1484b585e(*(undefined8 *)(param_1 + 0xb8));
  local_38 = param_1 + 0xb0;
  local_30 = param_1 + 0xb8;
  FUN_1484d2f68(lVar2 + 0x448,local_24);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d3c2a FUN_1484d3c2a body=38 status=ok
// SIG undefined FUN_1484d3c2a(void)

undefined8 FUN_1484d3c2a(undefined8 param_1,int param_2)

{
  FUN_1484d3fee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d3c58 FUN_1484d3c58 body=216 status=ok
// SIG undefined FUN_1484d3c58(void)

undefined8 * FUN_1484d3c58(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar3 = FUN_14480c900(0,param_3);
  bVar4 = FUN_144914152(param_1,param_3);
  bVar1 = *(byte *)(param_1 + 0x6e);
  cVar2 = *(char *)(param_1 + 0x82);
  bVar5 = FUN_144b26b6a(param_1);
  *(uint *)(param_2 + 2) =
       ((uint)bVar5 << 5 |
       (uint)(cVar2 != '\x01') << 0xd | (bVar1 & 8) << 4 | (uint)bVar3 * 4 + (uint)bVar4 * 8) +
       (*(byte *)(param_1 + 0x72) & 1) * 0x4000 + 2;
  FUN_144b252aa(param_1 + 0x2a8,param_2);
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar7 = 0;
    uVar6 = *(uint *)(param_2 + 2);
    if ((*(byte *)((longlong)param_2 + 4) & 2) != 0) {
      uVar7 = uVar6 >> 3 & 0x10;
    }
  }
  else {
    uVar6 = *(uint *)(param_2 + 2);
    uVar7 = 0;
  }
  *(uint *)(param_2 + 2) = uVar6 & 0xffffffef | uVar7;
  return param_2;
}



// FUNCTION 1484d3d4a FUN_1484d3d4a body=147 status=ok
// SIG undefined FUN_1484d3d4a(void)

void FUN_1484d3d4a(longlong param_1,int param_2)

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



// FUNCTION 1484d3dde FUN_1484d3dde body=362 status=ok
// SIG undefined FUN_1484d3dde(void)

void FUN_1484d3dde(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = *param_1;
  lVar1 = lVar3 + 0x4d8;
  FUN_14006bf18(lVar3 + 0x560);
  FUN_140d00208(lVar1,param_2);
  FUN_14006bf18(lVar3 + 0x5a0,param_2);
  local_a8 = 0x400000000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0xffffffff;
  local_5c = 0xff;
  local_5a = 0;
  lVar2 = lVar3 + 0x2b8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a7dcb2(lVar3 + 0x560,lVar2,&local_118);
  FUN_144a7dcdc(lVar1,lVar2,&local_118);
  FUN_147cdc2d0(lVar1,lVar2,&local_118,0xffffffff);
  FUN_144a7dd4a(lVar3 + 0x5a0,lVar2,&local_118);
  FUN_140ba0b60(lVar2,param_2,&local_118);
  FUN_14006bf18(lVar2,param_2);
  FUN_14006bf18(lVar3 + 0x5e0,param_2);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d3f5a FUN_1484d3f5a body=12 status=ok
// SIG undefined FUN_1484d3f5a(void)

void FUN_1484d3f5a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484d3f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484d3f66 FUN_1484d3f66 body=29 status=ok
// SIG undefined FUN_1484d3f66(void)

undefined8 FUN_1484d3f66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d3f84 FUN_1484d3f84 body=105 status=ok
// SIG undefined FUN_1484d3f84(void)

void FUN_1484d3f84(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484d3dde(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484d3dde(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001484d3fe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484d3fee FUN_1484d3fee body=200 status=ok
// SIG undefined FUN_1484d3fee(void)

void FUN_1484d3fee(longlong param_1)

{
  FUN_144725486(param_1 + 0x560);
  FUN_1412db970(param_1 + 0x4d8);
  FUN_144725486(param_1 + 0x5a0);
  FUN_144725486(param_1 + 0x5e0);
  FUN_144725486(param_1 + 0x2b8);
  *(undefined ***)(param_1 + 0x5e0) = &PTR_FUN_14a83cdc0;
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x5e0);
  FUN_140296b76(param_1 + 0x5a0);
  FUN_140296ab8(param_1 + 0x560);
  FUN_140296d44(param_1 + 0x4d8);
  FUN_1412b7f2a(param_1 + 0x2b8);
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1484d410e FUN_1484d410e body=87 status=ok
// SIG undefined FUN_1484d410e(void)

void FUN_1484d410e(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 < param_2) {
    *(longlong *)(param_1 + 8) = param_2;
    if ((ulonglong)(*(longlong *)(param_1 + 0x10) - lVar1) < (ulonglong)(param_2 - lVar1)) {
      FUN_1484d4166();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < lVar1) && (*(longlong *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1484d41f4();
      return;
    }
  }
  return;
}



// FUNCTION 1484d4166 FUN_1484d4166 body=141 status=ok
// SIG undefined FUN_1484d4166(void)

void FUN_1484d4166(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 2,2);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 2)) {
    uVar3 = uVar2 >> 2;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,4,2);
  return;
}



// FUNCTION 1484d41f4 FUN_1484d41f4 body=67 status=ok
// SIG undefined FUN_1484d41f4(void)

void FUN_1484d41f4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1484d4238(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,4,2);
  }
  return;
}



// FUNCTION 1484d4238 FUN_1484d4238 body=94 status=ok
// SIG undefined FUN_1484d4238(void)

ulonglong FUN_1484d4238(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (((((param_2 - param_1 & 0x3ffffffffffff000) != 0) ||
       ((longlong)(param_1 * 3) < (longlong)(param_2 * 2))) &&
      (param_1 == 0 || 0x40 < (longlong)(param_2 - param_1))) &&
     (param_2 = param_1, 0 < (longlong)param_1)) {
    uVar1 = FUN_144a3809e(param_1 << 2,2);
    param_2 = uVar1 >> 2;
  }
  return param_2;
}



// FUNCTION 1484d4296 FUN_1484d4296 body=323 status=ok
// SIG undefined FUN_1484d4296(void)

undefined4 * FUN_1484d4296(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146bfb416(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_1448eb174(local_40,8,0);
  local_58 = 0;
  cVar2 = FUN_1483750bc(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_1483751e8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d43da FUN_1484d43da body=59 status=ok
// SIG undefined FUN_1484d43da(void)

void FUN_1484d43da(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001484d4412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1484d4416 FUN_1484d4416 body=115 status=ok
// SIG undefined FUN_1484d4416(void)

void FUN_1484d4416(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1484d448a FUN_1484d448a body=414 status=ok
// SIG undefined FUN_1484d448a(void)

undefined8 * FUN_1484d448a(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0x4008000000000000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14aefe4a0;
  param_1[10] = 0;
  param_1[0xc] = &PTR_LAB_149f36510;
  param_1[0xd] = &LAB_1484d46a2;
  param_1[8] = FUN_146bd3274;
  param_1[0x12] = 0;
  param_1[0x14] = &PTR_LAB_14aefe4b0;
  param_1[0x15] = &DAT_1484d46a6;
  param_1[0x10] = &LAB_1484d46a8;
  param_1[0x1a] = 0;
  param_1[0x1c] = &PTR_LAB_14aefe4d0;
  param_1[0x1d] = &DAT_1484d46fa;
  param_1[0x18] = &LAB_1484d46fc;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  FUN_1411b354a(param_1 + 0x2e,0,0,0,0);
  param_1[0x72] = &PTR_FUN_14aefe4f0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined2 *)(param_1 + 0x75) = 1;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_1483a4c72(param_1 + 0x78);
  param_1[0x92] = 0x8000000080;
  *(undefined1 *)(param_1 + 0x93) = 1;
  *(undefined1 **)((longlong)param_1 + 0x49c) = &DAT_100000004;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0x200000020;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0x200000000;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  memset(param_1 + 0x9a,0,0x98);
  return param_1;
}



// FUNCTION 1484d4628 FUN_1484d4628 body=38 status=ok
// SIG undefined FUN_1484d4628(void)

undefined8 FUN_1484d4628(undefined8 param_1,int param_2)

{
  FUN_1484d478e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d464e FUN_1484d464e body=83 status=ok
// SIG undefined FUN_1484d464e(void)

undefined8 * FUN_1484d464e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aefe4a8;
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



// FUNCTION 1484d46dc FUN_1484d46dc body=29 status=ok
// SIG undefined FUN_1484d46dc(void)

undefined8 FUN_1484d46dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d473c FUN_1484d473c body=29 status=ok
// SIG undefined FUN_1484d473c(void)

undefined8 FUN_1484d473c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d475a FUN_1484d475a body=52 status=ok
// SIG undefined FUN_1484d475a(void)

undefined8 * FUN_1484d475a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aefe4f0;
  FUN_1483a64bc(param_1 + 6);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d478e FUN_1484d478e body=481 status=ok
// SIG undefined FUN_1484d478e(void)

void FUN_1484d478e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aefe4a0;
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_1483b3432(param_1[0xa8],*(undefined4 *)(param_1 + 0xa9));
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x9e],*(undefined4 *)(param_1 + 0x9f));
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  FUN_1483b32e0(param_1[0x9c],*(undefined4 *)(param_1 + 0x9d));
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_1483b367b(param_1[0x9a],*(undefined4 *)(param_1 + 0x9b));
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x72] = &PTR_FUN_14aefe4f0;
  FUN_1483a64bc(param_1 + 0x78);
  FUN_141082778(param_1 + 0x2e);
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x18] != 0) {
    plVar3 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    plVar3 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar3 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *param_1 = &PTR_FUN_14aefe4a8;
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
                    /* WARNING: Could not recover jumptable at 0x0001484d4964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484d4970 FUN_1484d4970 body=97 status=ok
// SIG undefined FUN_1484d4970(void)

void FUN_1484d4970(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aefe570;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x80);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x0001484d49c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1484d49d2 FUN_1484d49d2 body=29 status=ok
// SIG undefined FUN_1484d49d2(void)

undefined8 FUN_1484d49d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d49f0 FUN_1484d49f0 body=102 status=ok
// SIG undefined FUN_1484d49f0(void)

undefined8 * FUN_1484d49f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aefe570;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d4a56 FUN_1484d4a56 body=78 status=ok
// SIG undefined FUN_1484d4a56(void)

void FUN_1484d4a56(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = FUN_1484d4b50;
  param_3[1] = &LAB_1484d4c04;
  param_3[2] = FUN_1484d4c52;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar1);
  return;
}



// FUNCTION 1484d4aa4 FUN_1484d4aa4 body=166 status=ok
// SIG undefined FUN_1484d4aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1484d4aa4(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c9b8) {
    FUN_144b3d300(&DAT_14cb4c9b8);
    if (DAT_14cb4c9b8 == -1) {
      iVar1 = *(int *)(param_1 + 8);
      DAT_14cb4c9a8 = (int *)0x0;
      _DAT_14cb4c9b0 = 1;
      FUN_1483b26ac(&DAT_14cb4c9a8,1,0);
      *DAT_14cb4c9a8 = (iVar1 != 0x20) + 3;
      atexit((_func_5014 *)&LAB_143b7ea29);
      _Init_thread_footer(&DAT_14cb4c9b8);
    }
  }
  return &DAT_14cb4c9a8;
}



// FUNCTION 1484d4b50 FUN_1484d4b50 body=179 status=ok
// SIG undefined FUN_1484d4b50(void)

void FUN_1484d4b50(longlong *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_3 + 0x20);
  plVar4 = (longlong *)(param_3 + 0x40);
  if (*(longlong **)(param_3 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_3 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_38,uVar3,param_2);
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_38;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_34;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_30;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d4c52 FUN_1484d4c52 body=128 status=ok
// SIG undefined FUN_1484d4c52(void)

void FUN_1484d4c52(undefined4 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_4 + 0x60);
  plVar3 = (longlong *)(param_4 + 0x80);
  if (*(longlong **)(param_4 + 0x70) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_4 + 0x70);
  }
  local_34 = param_1;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_48,uVar2,&local_34,param_2);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d4cd4 FUN_1484d4cd4 body=127 status=ok
// SIG undefined FUN_1484d4cd4(void)

undefined4 * FUN_1484d4cd4(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(undefined4 *)(param_3 + 0xe8);
  local_28 = *(undefined4 *)(param_3 + 0xf0);
  uStack_24 = *(undefined4 *)(param_3 + 0xf4);
  uStack_20 = *(undefined4 *)(param_3 + 0xf8);
  uStack_1c = *(undefined4 *)(param_3 + 0xfc);
  uVar1 = FUN_1484d4dde(*(longlong *)(param_2 + 0x50) + 0xe8,&local_14,&local_28,param_2 + 0x3c);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = 0x3f800000;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d4d54 FUN_1484d4d54 body=71 status=ok
// SIG undefined FUN_1484d4d54(void)

void FUN_1484d4d54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe590;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d4da2 FUN_1484d4da2 body=29 status=ok
// SIG undefined FUN_1484d4da2(void)

void FUN_1484d4da2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d4dc0 FUN_1484d4dc0 body=29 status=ok
// SIG undefined FUN_1484d4dc0(void)

undefined8 FUN_1484d4dc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d4dde FUN_1484d4dde body=131 status=ok
// SIG undefined FUN_1484d4dde(void)

undefined4 FUN_1484d4dde(longlong *param_1,int *param_2,double *param_3,undefined4 *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(longlong *)(*param_1 + (longlong)*param_2 * 0x10);
  dVar2 = (double)*(int *)(lVar1 + 0x50);
  dVar3 = *param_3 / dVar2;
  if ((0.0 <= dVar3) && (dVar3 <= 1.0)) {
    dVar4 = param_3[1] / (double)*(int *)(lVar1 + 0x54);
    if ((0.0 <= dVar4) && (dVar4 <= 1.0)) {
      param_4 = (undefined4 *)
                ((longlong)(int)(dVar4 * (double)*(int *)(lVar1 + 0x54)) *
                 (longlong)*(int *)(lVar1 + 0x50) * 4 + *(longlong *)(lVar1 + 0x58) +
                (longlong)(int)(dVar3 * dVar2) * 4);
    }
  }
  return *param_4;
}



// FUNCTION 1484d4e76 FUN_1484d4e76 body=28 status=ok
// SIG undefined FUN_1484d4e76(void)

undefined8
FUN_1484d4e76(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  (*(code *)*param_2)(param_1,*param_3,param_4);
  return param_1;
}



// FUNCTION 1484d4ebc FUN_1484d4ebc body=29 status=ok
// SIG undefined FUN_1484d4ebc(void)

undefined8 FUN_1484d4ebc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d4eda FUN_1484d4eda body=143 status=ok
// SIG undefined FUN_1484d4eda(void)

undefined8 * FUN_1484d4eda(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined4 *)(param_3 + 0xe8);
  local_38 = *(undefined4 *)(param_3 + 0xf0);
  uStack_34 = *(undefined4 *)(param_3 + 0xf4);
  uStack_30 = *(undefined4 *)(param_3 + 0xf8);
  uStack_2c = *(undefined4 *)(param_3 + 0xfc);
  local_48 = param_2 + 0xc;
  FUN_1484d4ff4(*(longlong *)(param_2 + 0x50) + 0x58,&local_24,&local_28);
  *param_1 = local_24;
  *(undefined4 *)(param_1 + 1) = local_1c;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d4f6a FUN_1484d4f6a body=71 status=ok
// SIG undefined FUN_1484d4f6a(void)

void FUN_1484d4f6a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe5d0;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d4fb8 FUN_1484d4fb8 body=29 status=ok
// SIG undefined FUN_1484d4fb8(void)

void FUN_1484d4fb8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d4fd6 FUN_1484d4fd6 body=29 status=ok
// SIG undefined FUN_1484d4fd6(void)

undefined8 FUN_1484d4fd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d4ff4 FUN_1484d4ff4 body=155 status=ok
// SIG undefined FUN_1484d4ff4(void)

void FUN_1484d4ff4(longlong *param_1,undefined8 *param_2,int *param_3,double *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(longlong *)(*param_1 + (longlong)*param_3 * 0x10);
  dVar2 = (double)*(int *)(lVar1 + 0x50);
  dVar3 = *param_4 / dVar2;
  if ((0.0 <= dVar3) && (dVar3 <= 1.0)) {
    dVar4 = param_4[1] / (double)*(int *)(lVar1 + 0x54);
    if ((0.0 <= dVar4) && (dVar4 <= 1.0)) {
      param_5 = (undefined8 *)
                ((longlong)(int)(dVar4 * (double)*(int *)(lVar1 + 0x54)) *
                 (longlong)*(int *)(lVar1 + 0x50) * 0xc + *(longlong *)(lVar1 + 0x58) +
                (longlong)(int)(dVar3 * dVar2) * 0xc);
    }
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_5 + 1);
  *param_2 = *param_5;
  return;
}



// FUNCTION 1484d50a4 FUN_1484d50a4 body=28 status=ok
// SIG undefined FUN_1484d50a4(void)

undefined8 FUN_1484d50a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1484d514a(param_2,param_1);
  return param_1;
}



// FUNCTION 1484d50c0 FUN_1484d50c0 body=71 status=ok
// SIG undefined FUN_1484d50c0(void)

void FUN_1484d50c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe5f0;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d510e FUN_1484d510e body=29 status=ok
// SIG undefined FUN_1484d510e(void)

void FUN_1484d510e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d512c FUN_1484d512c body=29 status=ok
// SIG undefined FUN_1484d512c(void)

undefined8 FUN_1484d512c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d514a FUN_1484d514a body=187 status=ok
// SIG undefined FUN_1484d514a(void)

undefined8 * FUN_1484d514a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_3 + 0xe8);
  local_50 = *(undefined8 *)(param_3 + 0xf0);
  uStack_48 = *(undefined8 *)(param_3 + 0xf8);
  local_2c = *(undefined4 *)(param_1 + 0x18);
  local_28 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  local_58 = &local_30;
  FUN_1484d4ff4(*(longlong *)(param_1 + 0x50) + 0x98,&local_3c,&local_40);
  local_28 = local_34;
  *param_2 = local_3c;
  *(undefined4 *)(param_2 + 1) = local_34;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x3f800000;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d521a FUN_1484d521a body=126 status=ok
// SIG undefined FUN_1484d521a(void)

undefined4 * FUN_1484d521a(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(undefined4 *)(param_3 + 0xe8);
  local_28 = *(undefined4 *)(param_3 + 0xf0);
  uStack_24 = *(undefined4 *)(param_3 + 0xf4);
  uStack_20 = *(undefined4 *)(param_3 + 0xf8);
  uStack_1c = *(undefined4 *)(param_3 + 0xfc);
  uVar1 = FUN_1484d4dde(*(longlong *)(param_2 + 0x50) + 0x68,&local_14,&local_28,param_2 + 0x18);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = 0x3f800000;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d529a FUN_1484d529a body=71 status=ok
// SIG undefined FUN_1484d529a(void)

void FUN_1484d529a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe610;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d52e8 FUN_1484d52e8 body=29 status=ok
// SIG undefined FUN_1484d52e8(void)

void FUN_1484d52e8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d5306 FUN_1484d5306 body=29 status=ok
// SIG undefined FUN_1484d5306(void)

undefined8 FUN_1484d5306(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5338 FUN_1484d5338 body=127 status=ok
// SIG undefined FUN_1484d5338(void)

undefined4 * FUN_1484d5338(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(undefined4 *)(param_3 + 0xe8);
  local_28 = *(undefined4 *)(param_3 + 0xf0);
  uStack_24 = *(undefined4 *)(param_3 + 0xf4);
  uStack_20 = *(undefined4 *)(param_3 + 0xf8);
  uStack_1c = *(undefined4 *)(param_3 + 0xfc);
  uVar1 = FUN_1484d4dde(*(longlong *)(param_2 + 0x50) + 0x88,&local_14,&local_28,param_2 + 0x20);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = 0x3f800000;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d53b8 FUN_1484d53b8 body=71 status=ok
// SIG undefined FUN_1484d53b8(void)

void FUN_1484d53b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe630;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d5406 FUN_1484d5406 body=29 status=ok
// SIG undefined FUN_1484d5406(void)

void FUN_1484d5406(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d5424 FUN_1484d5424 body=29 status=ok
// SIG undefined FUN_1484d5424(void)

undefined8 FUN_1484d5424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5456 FUN_1484d5456 body=126 status=ok
// SIG undefined FUN_1484d5456(void)

undefined4 * FUN_1484d5456(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(undefined4 *)(param_3 + 0xe8);
  local_28 = *(undefined4 *)(param_3 + 0xf0);
  uStack_24 = *(undefined4 *)(param_3 + 0xf4);
  uStack_20 = *(undefined4 *)(param_3 + 0xf8);
  uStack_1c = *(undefined4 *)(param_3 + 0xfc);
  uVar1 = FUN_1484d4dde(*(longlong *)(param_2 + 0x50) + 0x78,&local_14,&local_28,param_2 + 0x1c);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = 0x3f800000;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d54d6 FUN_1484d54d6 body=71 status=ok
// SIG undefined FUN_1484d54d6(void)

void FUN_1484d54d6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe650;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d5524 FUN_1484d5524 body=29 status=ok
// SIG undefined FUN_1484d5524(void)

void FUN_1484d5524(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d5542 FUN_1484d5542 body=29 status=ok
// SIG undefined FUN_1484d5542(void)

undefined8 FUN_1484d5542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5574 FUN_1484d5574 body=144 status=ok
// SIG undefined FUN_1484d5574(void)

undefined8 * FUN_1484d5574(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined4 *)(param_3 + 0xe8);
  local_38 = *(undefined4 *)(param_3 + 0xf0);
  uStack_34 = *(undefined4 *)(param_3 + 0xf4);
  uStack_30 = *(undefined4 *)(param_3 + 0xf8);
  uStack_2c = *(undefined4 *)(param_3 + 0xfc);
  local_48 = param_2 + 0x24;
  FUN_1484d4ff4(*(longlong *)(param_2 + 0x50) + 0xb8,&local_24,&local_28);
  *param_1 = local_24;
  *(undefined4 *)(param_1 + 1) = local_1c;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5606 FUN_1484d5606 body=71 status=ok
// SIG undefined FUN_1484d5606(void)

void FUN_1484d5606(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe670;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d5654 FUN_1484d5654 body=29 status=ok
// SIG undefined FUN_1484d5654(void)

void FUN_1484d5654(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d5672 FUN_1484d5672 body=29 status=ok
// SIG undefined FUN_1484d5672(void)

undefined8 FUN_1484d5672(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d56a4 FUN_1484d56a4 body=127 status=ok
// SIG undefined FUN_1484d56a4(void)

undefined4 * FUN_1484d56a4(undefined4 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *(undefined4 *)(param_3 + 0xe8);
  local_28 = *(undefined4 *)(param_3 + 0xf0);
  uStack_24 = *(undefined4 *)(param_3 + 0xf4);
  uStack_20 = *(undefined4 *)(param_3 + 0xf8);
  uStack_1c = *(undefined4 *)(param_3 + 0xfc);
  uVar1 = FUN_1484d4dde(*(longlong *)(param_2 + 0x50) + 200,&local_14,&local_28,param_2 + 0x40);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = 0x3f800000;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5724 FUN_1484d5724 body=71 status=ok
// SIG undefined FUN_1484d5724(void)

void FUN_1484d5724(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe690;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d5772 FUN_1484d5772 body=29 status=ok
// SIG undefined FUN_1484d5772(void)

void FUN_1484d5772(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d5790 FUN_1484d5790 body=29 status=ok
// SIG undefined FUN_1484d5790(void)

undefined8 FUN_1484d5790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d57c2 FUN_1484d57c2 body=144 status=ok
// SIG undefined FUN_1484d57c2(void)

undefined8 * FUN_1484d57c2(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined4 *)(param_3 + 0xe8);
  local_38 = *(undefined4 *)(param_3 + 0xf0);
  uStack_34 = *(undefined4 *)(param_3 + 0xf4);
  uStack_30 = *(undefined4 *)(param_3 + 0xf8);
  uStack_2c = *(undefined4 *)(param_3 + 0xfc);
  local_48 = param_2 + 0x44;
  FUN_1484d4ff4(*(longlong *)(param_2 + 0x50) + 0xd8,&local_24,&local_28);
  *param_1 = local_24;
  *(undefined4 *)(param_1 + 1) = local_1c;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5854 FUN_1484d5854 body=71 status=ok
// SIG undefined FUN_1484d5854(void)

void FUN_1484d5854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14aefe6b0;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1484d58a2 FUN_1484d58a2 body=29 status=ok
// SIG undefined FUN_1484d58a2(void)

void FUN_1484d58a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d58c0 FUN_1484d58c0 body=29 status=ok
// SIG undefined FUN_1484d58c0(void)

undefined8 FUN_1484d58c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d58f2 FUN_1484d58f2 body=97 status=ok
// SIG undefined FUN_1484d58f2(void)

void FUN_1484d58f2(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aefe6f0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    plVar1 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x80);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x0001484d5948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1484d5954 FUN_1484d5954 body=29 status=ok
// SIG undefined FUN_1484d5954(void)

undefined8 FUN_1484d5954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5972 FUN_1484d5972 body=102 status=ok
// SIG undefined FUN_1484d5972(void)

undefined8 * FUN_1484d5972(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aefe6f0;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d59d8 FUN_1484d59d8 body=78 status=ok
// SIG undefined FUN_1484d59d8(void)

void FUN_1484d59d8(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = FUN_1484d5ad2;
  param_3[1] = &LAB_1484d5b74;
  param_3[2] = FUN_1484d5bae;
  param_3[4] = param_1;
  *(undefined4 *)(param_3 + 5) = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14837f5c6(param_3 + 6,uVar1);
  return;
}



// FUNCTION 1484d5a26 FUN_1484d5a26 body=166 status=ok
// SIG undefined FUN_1484d5a26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1484d5a26(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb4c9d0) {
    FUN_144b3d300(&DAT_14cb4c9d0);
    if (DAT_14cb4c9d0 == -1) {
      iVar1 = *(int *)(param_1 + 8);
      DAT_14cb4c9c0 = (int *)0x0;
      _DAT_14cb4c9c8 = 1;
      FUN_1483b26ac(&DAT_14cb4c9c0,1,0);
      *DAT_14cb4c9c0 = (iVar1 != 0x20) + 3;
      atexit((_func_5014 *)&LAB_143b7ea3a);
      _Init_thread_footer(&DAT_14cb4c9d0);
    }
  }
  return &DAT_14cb4c9c0;
}



// FUNCTION 1484d5ad2 FUN_1484d5ad2 body=160 status=ok
// SIG undefined FUN_1484d5ad2(void)

void FUN_1484d5ad2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_3 + 0x20);
  plVar4 = (longlong *)(param_3 + 0x40);
  if (*(longlong **)(param_3 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_3 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_34,uVar3,param_2);
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_34;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_30;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (longlong)(puVar2 + 1);
  *puVar2 = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5bae FUN_1484d5bae body=128 status=ok
// SIG undefined FUN_1484d5bae(void)

void FUN_1484d5bae(undefined4 param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_4 + 0x60);
  plVar3 = (longlong *)(param_4 + 0x80);
  if (*(longlong **)(param_4 + 0x70) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_4 + 0x70);
  }
  local_34 = param_1;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_48,uVar2,&local_34,param_2);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5c30 FUN_1484d5c30 body=216 status=ok
// SIG undefined FUN_1484d5c30(void)

undefined8 * FUN_1484d5c30(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14aefe730;
  param_1[1] = 0;
  param_1[2] = 0xffffffff00000000;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_14aefe750;
  param_1[9] = param_2;
  param_1[4] = FUN_1484d5eb0;
  param_1[0xc] = *param_3;
  param_1[0xe] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  if (param_1[0xc] != 0) {
    *param_3 = 0;
  }
  param_1[0x16] = 0;
  param_1[0x18] = &PTR_LAB_14aefe770;
  param_1[0x19] = FUN_1484d5f4e;
  param_1[0x14] = &LAB_1484d5f86;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1484d5d08 FUN_1484d5d08 body=38 status=ok
// SIG undefined FUN_1484d5d08(void)

undefined8 FUN_1484d5d08(undefined8 param_1,int param_2)

{
  FUN_1484d5fda();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5d2e FUN_1484d5d2e body=228 status=ok
// SIG undefined FUN_1484d5d2e(void)

void FUN_1484d5d2e(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar4 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(local_38,uVar3);
  plVar4 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) != -1) {
    pcVar1 = *(code **)(param_1 + 0xa0);
    plVar5 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xb0);
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar3,plVar4,local_38);
    if (cVar2 == '\0') goto LAB_1484d5de3;
  }
  if (local_38 != plVar4) {
    FUN_14034a368(plVar4,local_38);
  }
  pcVar1 = *(code **)(param_1 + 0x60);
  plVar5 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x70);
  }
  uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar1)(uVar3,plVar4);
LAB_1484d5de3:
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5e14 FUN_1484d5e14 body=155 status=ok
// SIG undefined FUN_1484d5e14(void)

void FUN_1484d5e14(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_30,uVar2);
  if (&local_30 == (longlong *)(param_1 + 8)) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_30;
    *(undefined4 *)(param_1 + 0x10) = local_28;
    *(undefined4 *)(param_1 + 0x14) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d5eb0 FUN_1484d5eb0 body=85 status=ok
// SIG undefined FUN_1484d5eb0(void)

undefined8 * FUN_1484d5eb0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_2;
  *param_1 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1484d5f30 FUN_1484d5f30 body=29 status=ok
// SIG undefined FUN_1484d5f30(void)

undefined8 FUN_1484d5f30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5f4e FUN_1484d5f4e body=55 status=ok
// SIG undefined FUN_1484d5f4e(void)

ulonglong FUN_1484d5f4e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)(param_2 + 1);
  if (iVar1 == iVar2) {
    uVar4 = (uint7)(uint3)((uint)iVar2 >> 8);
    bVar5 = true;
    if (iVar1 < 2) goto LAB_1484d5f7e;
    uVar3 = FUN_144a80a00(*param_1,*param_2);
    bVar5 = (int)uVar3 == 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(iVar2 + iVar1);
    bVar5 = iVar2 + iVar1 == 1;
  }
  uVar4 = (uint7)(uVar3 >> 8);
LAB_1484d5f7e:
  return CONCAT71(uVar4,bVar5) ^ 1;
}



// FUNCTION 1484d5fbc FUN_1484d5fbc body=29 status=ok
// SIG undefined FUN_1484d5fbc(void)

undefined8 FUN_1484d5fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d5fda FUN_1484d5fda body=162 status=ok
// SIG undefined FUN_1484d5fda(void)

void FUN_1484d5fda(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aefe730;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(int *)((longlong)param_1 + 0x14) != -1) {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = 0;
    param_1[2] = 0xffffffff00000000;
  }
  return;
}



// FUNCTION 1484d607c FUN_1484d607c body=230 status=ok
// SIG undefined FUN_1484d607c(void)

undefined8 * FUN_1484d607c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1484d6172 FUN_1484d6172 body=65 status=ok
// SIG undefined FUN_1484d6172(void)

bool FUN_1484d6172(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x91) == '\x01') && (*(longlong *)(param_1 + 0x58) != 0)) &&
     (lVar1 = FUN_14851bd54(), lVar1 != 0)) {
    lVar1 = FUN_14851bd54(*(undefined8 *)(param_1 + 0x58));
    return *(int *)(lVar1 + 0x170) == 0;
  }
  return false;
}



// FUNCTION 1484d61b4 FUN_1484d61b4 body=199 status=ok
// SIG undefined FUN_1484d61b4(void)

undefined8 * FUN_1484d61b4(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14aefe890;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14aefe8b0;
  param_1[7] = param_2;
  param_1[2] = &LAB_1484d63a8;
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
  param_1[0x16] = &PTR_LAB_14aefe8d0;
  param_1[0x17] = &LAB_1484d63f6;
  param_1[0x12] = &LAB_1484d63fe;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1484d627c FUN_1484d627c body=38 status=ok
// SIG undefined FUN_1484d627c(void)

undefined8 FUN_1484d627c(undefined8 param_1,int param_2)

{
  FUN_1484d6452();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d62a2 FUN_1484d62a2 body=207 status=ok
// SIG undefined FUN_1484d62a2(void)

void FUN_1484d62a2(longlong param_1)

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
    if (cVar3 == '\0') goto LAB_1484d6353;
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
LAB_1484d6353:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d6372 FUN_1484d6372 body=53 status=ok
// SIG undefined FUN_1484d6372(void)

void FUN_1484d6372(longlong param_1)

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



// FUNCTION 1484d63d8 FUN_1484d63d8 body=29 status=ok
// SIG undefined FUN_1484d63d8(void)

undefined8 FUN_1484d63d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d6434 FUN_1484d6434 body=29 status=ok
// SIG undefined FUN_1484d6434(void)

undefined8 FUN_1484d6434(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d6452 FUN_1484d6452 body=127 status=ok
// SIG undefined FUN_1484d6452(void)

void FUN_1484d6452(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aefe890;
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



// FUNCTION 1484d64d2 FUN_1484d64d2 body=132 status=ok
// SIG undefined FUN_1484d64d2(void)

void FUN_1484d64d2(longlong param_1,int param_2)

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



// FUNCTION 1484d6558 FUN_1484d6558 body=132 status=ok
// SIG undefined FUN_1484d6558(void)

void FUN_1484d6558(longlong param_1,int param_2)

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



// FUNCTION 1484d65de FUN_1484d65de body=230 status=ok
// SIG undefined FUN_1484d65de(void)

undefined8 * FUN_1484d65de(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1484d66c6 FUN_1484d66c6 body=29 status=ok
// SIG undefined FUN_1484d66c6(void)

undefined8 FUN_1484d66c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d66fe FUN_1484d66fe body=29 status=ok
// SIG undefined FUN_1484d66fe(void)

bool FUN_1484d66fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1484d671c FUN_1484d671c body=26 status=ok
// SIG undefined FUN_1484d671c(void)

bool FUN_1484d671c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1484d6736 FUN_1484d6736 body=24 status=ok
// SIG undefined FUN_1484d6736(void)

bool FUN_1484d6736(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1484d675a FUN_1484d675a body=101 status=ok
// SIG undefined FUN_1484d675a(void)

void FUN_1484d675a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefe910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484d67c0 FUN_1484d67c0 body=101 status=ok
// SIG undefined FUN_1484d67c0(void)

void FUN_1484d67c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefe910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484d6826 FUN_1484d6826 body=134 status=ok
// SIG undefined FUN_1484d6826(void)

void FUN_1484d6826(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aefe910;
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
                    /* WARNING: Could not recover jumptable at 0x0001484d689d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484d68ac FUN_1484d68ac body=118 status=ok
// SIG undefined FUN_1484d68ac(void)

void FUN_1484d68ac(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d6924 FUN_1484d6924 body=199 status=ok
// SIG undefined FUN_1484d6924(void)

bool FUN_1484d6924(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d69ee FUN_1484d69ee body=769 status=ok
// SIG undefined FUN_1484d69ee(void)

void FUN_1484d69ee(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118 [10];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar6 = FUN_1484d6cf0(param_2);
  if (cVar6 == '\0') {
    local_b8 = DAT_14c8464f0;
    local_c8 = DAT_14c8464e0;
    uStack_c0 = DAT_14c8464e8;
    dVar2 = (double)param_2[7];
    dVar3 = (double)param_2[8];
    uVar11 = -(ulonglong)(-dVar2 <= dVar2);
    uVar12 = -(ulonglong)(-dVar3 <= dVar3);
    dVar4 = (double)param_2[9];
    uVar13 = -(ulonglong)(-dVar4 <= dVar4);
    local_78 = param_2[6];
    local_a8[0] = *param_2;
    local_a8[1] = param_2[1];
    local_98 = *(undefined4 *)(param_2 + 2);
    uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_90 = *(undefined4 *)(param_2 + 3);
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_88 = *(undefined4 *)(param_2 + 4);
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_80 = *(undefined4 *)(param_2 + 5);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
    local_70 = (undefined4)DAT_14c846510;
    uStack_6c = DAT_14c846510._4_4_;
    uStack_68 = (undefined4)DAT_14c846518;
    uStack_64 = DAT_14c846518._4_4_;
    local_60 = DAT_14c846520;
    FUN_1483f713c(local_a8,local_118);
    puVar9 = local_118;
    puVar10 = local_a8;
    for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar5 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar5 + 1U) {
      FUN_1484d6da4(param_1,iVar5);
    }
    lVar8 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar8 = param_1;
    }
    puVar9 = local_a8;
    puVar10 = (undefined8 *)((longlong)iVar5 * 0x50 + lVar8);
    for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar5 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar5 + 1U) {
      FUN_1484d6da4(param_1,iVar5);
    }
    lVar8 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar8 = param_1;
    }
    lVar7 = (longlong)iVar5 * 0x50;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    ((undefined8 *)(lVar8 + lVar7))[1] = 0;
    *(undefined8 *)(lVar8 + 0x10 + lVar7) = 0;
    *(undefined8 *)(lVar8 + 0x18 + lVar7) = 0x3ff0000000000000;
    puVar1 = (undefined4 *)(lVar8 + 0x20 + lVar7);
    *puVar1 = (undefined4)local_c8;
    puVar1[1] = local_c8._4_4_;
    puVar1[2] = (undefined4)uStack_c0;
    puVar1[3] = uStack_c0._4_4_;
    *(undefined8 *)(lVar8 + 0x30 + lVar7) = local_b8;
    *(ulonglong *)(lVar8 + 0x38 + lVar7) =
         -(ulonglong)(1e-08 < (double)(uVar11 & (ulonglong)dVar2 | ~uVar11 & (ulonglong)-dVar2)) &
         (ulonglong)(1.0 / dVar2);
    *(ulonglong *)(lVar8 + 0x40 + lVar7) =
         -(ulonglong)(1e-08 < (double)(uVar12 & (ulonglong)dVar3 | ~uVar12 & (ulonglong)-dVar3)) &
         (ulonglong)(1.0 / dVar3);
    *(ulonglong *)(lVar8 + 0x48 + lVar7) =
         -(ulonglong)(1e-08 < (double)(uVar13 & (ulonglong)dVar4 | ~uVar13 & (ulonglong)-dVar4)) &
         (ulonglong)(1.0 / dVar4);
  }
  else {
    FUN_1483f713c(param_2,local_a8,0x3e45798ee2308c3a);
    iVar5 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar5 + 1U) {
      FUN_1484d6da4(param_1,iVar5);
    }
    lVar8 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar8 = param_1;
    }
    puVar9 = local_a8;
    puVar10 = (undefined8 *)((longlong)iVar5 * 0x50 + lVar8);
    for (lVar7 = 10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d6cf0 FUN_1484d6cf0 body=179 status=ok
// SIG undefined FUN_1484d6cf0(void)

undefined8 FUN_1484d6cf0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((ABS(*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x40)) <= 1e-08) &&
     (ABS(*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x48)) <= 1e-08)) {
    uVar1 = CONCAT71((int7)(local_8 >> 8),1);
    if (ABS(*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x48)) <= 1e-08) goto LAB_1484d6d56;
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_10 = 0x3ff0000000000000;
  uVar1 = FUN_1483529b2(0,&local_28,0x3e45798ee2308c3a);
LAB_1484d6d56:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d6da4 FUN_1484d6da4 body=154 status=ok
// SIG undefined FUN_1484d6da4(void)

void FUN_1484d6da4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0xac) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x50,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
        uVar5 = uVar4 / 0x50 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xac) = (int)uVar5;
    FUN_1482fdf3e(param_1,param_2,uVar5,0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484d6e40 FUN_1484d6e40 body=98 status=ok
// SIG undefined FUN_1484d6e40(void)

void FUN_1484d6e40(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1484d6ea2 FUN_1484d6ea2 body=14 status=ok
// SIG undefined FUN_1484d6ea2(void)

void FUN_1484d6ea2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1484d6eb0 FUN_1484d6eb0 body=29 status=ok
// SIG undefined FUN_1484d6eb0(void)

undefined8 FUN_1484d6eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d6ece FUN_1484d6ece body=110 status=ok
// SIG undefined FUN_1484d6ece(void)

undefined8 * FUN_1484d6ece(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14aefe9e0;
  uVar1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 **)((longlong)param_1 + 0x3c) = &DAT_100000002;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[2] = uVar1;
  FUN_146c68b4c(param_1 + 2);
  return param_1;
}



// FUNCTION 1484d6f46 FUN_1484d6f46 body=29 status=ok
// SIG undefined FUN_1484d6f46(void)

undefined8 FUN_1484d6f46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d6f64 FUN_1484d6f64 body=147 status=ok
// SIG undefined FUN_1484d6f64(void)

void FUN_1484d6f64(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484d6ff8 FUN_1484d6ff8 body=204 status=ok
// SIG undefined FUN_1484d6ff8(void)

undefined8 * FUN_1484d6ff8(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14aefea70;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14aefea90;
  param_1[7] = param_2;
  param_1[2] = &LAB_1484d722c;
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
  param_1[0x16] = &PTR_LAB_14aefeab0;
  param_1[0x17] = &LAB_1484d7282;
  param_1[0x12] = &LAB_1484d728c;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1484d70c4 FUN_1484d70c4 body=38 status=ok
// SIG undefined FUN_1484d70c4(void)

undefined8 FUN_1484d70c4(undefined8 param_1,int param_2)

{
  FUN_1484d72e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d70ea FUN_1484d70ea body=208 status=ok
// SIG undefined FUN_1484d70ea(void)

void FUN_1484d70ea(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(&local_30,uVar4);
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(int *)(param_1 + 8) != -1) {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_30);
    if (cVar3 == '\0') goto LAB_1484d719a;
  }
  if (&local_30 != puVar1) {
    *puVar1 = local_30;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1484d719a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d71bc FUN_1484d71bc body=110 status=ok
// SIG undefined FUN_1484d71bc(void)

void FUN_1484d71bc(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_28,uVar2);
  if (&local_28 != (undefined8 *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 8) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d7264 FUN_1484d7264 body=29 status=ok
// SIG undefined FUN_1484d7264(void)

undefined8 FUN_1484d7264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d72c2 FUN_1484d72c2 body=29 status=ok
// SIG undefined FUN_1484d72c2(void)

undefined8 FUN_1484d72c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d72e0 FUN_1484d72e0 body=132 status=ok
// SIG undefined FUN_1484d72e0(void)

void FUN_1484d72e0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aefea70;
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
  if (*(int *)(param_1 + 1) != -1) {
    param_1[1] = 0xffffffff;
  }
  return;
}



// FUNCTION 1484d7364 FUN_1484d7364 body=199 status=ok
// SIG undefined FUN_1484d7364(void)

undefined8 * FUN_1484d7364(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14aeff660;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14aeff680;
  param_1[7] = param_2;
  param_1[2] = &LAB_1484d7558;
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
  param_1[0x16] = &PTR_LAB_14aeff6a0;
  param_1[0x17] = &LAB_1484d75a6;
  param_1[0x12] = &LAB_1484d75ae;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1484d742c FUN_1484d742c body=38 status=ok
// SIG undefined FUN_1484d742c(void)

undefined8 FUN_1484d742c(undefined8 param_1,int param_2)

{
  FUN_1484d7602();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d7452 FUN_1484d7452 body=207 status=ok
// SIG undefined FUN_1484d7452(void)

void FUN_1484d7452(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1484d7503;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1484d7503:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d7522 FUN_1484d7522 body=53 status=ok
// SIG undefined FUN_1484d7522(void)

void FUN_1484d7522(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1484d7588 FUN_1484d7588 body=29 status=ok
// SIG undefined FUN_1484d7588(void)

undefined8 FUN_1484d7588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d75e4 FUN_1484d75e4 body=29 status=ok
// SIG undefined FUN_1484d75e4(void)

undefined8 FUN_1484d75e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d7602 FUN_1484d7602 body=127 status=ok
// SIG undefined FUN_1484d7602(void)

void FUN_1484d7602(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeff660;
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
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1484d7682 FUN_1484d7682 body=14 status=ok
// SIG undefined FUN_1484d7682(void)

void FUN_1484d7682(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1484d7690 FUN_1484d7690 body=29 status=ok
// SIG undefined FUN_1484d7690(void)

undefined8 FUN_1484d7690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d76ae FUN_1484d76ae body=132 status=ok
// SIG undefined FUN_1484d76ae(void)

void FUN_1484d76ae(longlong param_1,int param_2)

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



// FUNCTION 1484d7734 FUN_1484d7734 body=95 status=ok
// SIG undefined FUN_1484d7734(void)

void FUN_1484d7734(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_145850673(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1484d7794 FUN_1484d7794 body=63 status=ok
// SIG undefined FUN_1484d7794(void)

void FUN_1484d7794(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484d77d4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1484d77d4 FUN_1484d77d4 body=97 status=ok
// SIG undefined FUN_1484d77d4(void)

ulonglong FUN_1484d77d4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1484d7836 FUN_1484d7836 body=98 status=ok
// SIG undefined FUN_1484d7836(void)

void FUN_1484d7836(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1484d7898 FUN_1484d7898 body=78 status=ok
// SIG undefined FUN_1484d7898(void)

void FUN_1484d7898(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1484d78e6 FUN_1484d78e6 body=70 status=ok
// SIG undefined FUN_1484d78e6(void)

void FUN_1484d78e6(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &DAT_100000004;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1 = param_1 + 0xb;
  }
  return;
}



// FUNCTION 1484d792c FUN_1484d792c body=143 status=ok
// SIG undefined FUN_1484d792c(void)

void FUN_1484d792c(longlong param_1,int param_2)

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



// FUNCTION 1484d79bc FUN_1484d79bc body=89 status=ok
// SIG undefined FUN_1484d79bc(void)

void FUN_1484d79bc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x58 + *param_1);
  FUN_1458dc1c8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1484d7a16 FUN_1484d7a16 body=62 status=ok
// SIG undefined FUN_1484d7a16(void)

void FUN_1484d7a16(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484d7a54(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 1484d7a54 FUN_1484d7a54 body=104 status=ok
// SIG undefined FUN_1484d7a54(void)

ulonglong FUN_1484d7a54(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1484d7a8a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_1484d7a8a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1484d7ac2 FUN_1484d7ac2 body=38 status=ok
// SIG undefined FUN_1484d7ac2(void)

undefined8 FUN_1484d7ac2(undefined8 param_1,int param_2)

{
  FUN_1484d7ae8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d7ae8 FUN_1484d7ae8 body=72 status=ok
// SIG undefined FUN_1484d7ae8(void)

void FUN_1484d7ae8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aefeb28;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484d7b30 FUN_1484d7b30 body=57 status=ok
// SIG undefined FUN_1484d7b30(void)

undefined8 * FUN_1484d7b30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aefeb40;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d7b6a FUN_1484d7b6a body=31 status=ok
// SIG undefined FUN_1484d7b6a(void)

undefined8 FUN_1484d7b6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d7ba4 FUN_1484d7ba4 body=29 status=ok
// SIG undefined FUN_1484d7ba4(void)

bool FUN_1484d7ba4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1484d7bc2 FUN_1484d7bc2 body=26 status=ok
// SIG undefined FUN_1484d7bc2(void)

bool FUN_1484d7bc2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1484d7bdc FUN_1484d7bdc body=101 status=ok
// SIG undefined FUN_1484d7bdc(void)

void FUN_1484d7bdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aef0390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefeb90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484d7c42 FUN_1484d7c42 body=101 status=ok
// SIG undefined FUN_1484d7c42(void)

void FUN_1484d7c42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aef0390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aefeb90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1484d7ca8 FUN_1484d7ca8 body=134 status=ok
// SIG undefined FUN_1484d7ca8(void)

void FUN_1484d7ca8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aef0390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aefeb90;
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
                    /* WARNING: Could not recover jumptable at 0x0001484d7d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484d7d2e FUN_1484d7d2e body=108 status=ok
// SIG undefined FUN_1484d7d2e(void)

void FUN_1484d7d2e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = param_3[4];
  uStack_34 = param_3[5];
  uStack_30 = param_3[6];
  uStack_2c = param_3[7];
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d7d9c FUN_1484d7d9c body=187 status=ok
// SIG undefined FUN_1484d7d9c(void)

bool FUN_1484d7d9c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar3 = CONCAT44(uStack_54,local_58);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_48 = param_3[4];
    uStack_44 = param_3[5];
    uStack_40 = param_3[6];
    uStack_3c = param_3[7];
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d7e58 FUN_1484d7e58 body=48 status=ok
// SIG undefined FUN_1484d7e58(void)

void FUN_1484d7e58(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1484d7e88 FUN_1484d7e88 body=207 status=ok
// SIG undefined FUN_1484d7e88(void)

bool FUN_1484d7e88(double *param_1,uint *param_2,double *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar1 = *(longlong *)((longlong)param_1[0xb] + (ulonglong)(*param_2 >> 9) * 8);
  lVar3 = (ulonglong)(*param_2 & 0x1ff) * 0x34;
  dVar4 = *param_1 / (double)(1L << (*(byte *)(lVar1 + 4 + lVar3) & 0x1f));
  dVar5 = param_1[1] * dVar4;
  dVar7 = (double)*(int *)(lVar1 + 8 + lVar3) * dVar4 - dVar5;
  bVar2 = false;
  if ((((dVar7 < param_3[3]) && (dVar6 = dVar5 + dVar5 + dVar4, *param_3 < dVar7 + dVar6)) &&
      (dVar7 = (double)*(int *)(lVar1 + 0xc + lVar3) * dVar4 - dVar5, dVar7 < param_3[4])) &&
     ((bVar2 = false, param_3[1] < dVar7 + dVar6 &&
      (dVar5 = dVar4 * (double)*(int *)(lVar1 + 0x10 + lVar3) - dVar5, dVar5 < param_3[5])))) {
    bVar2 = param_3[2] < dVar5 + dVar6;
  }
  return bVar2;
}



// FUNCTION 1484d7f58 FUN_1484d7f58 body=132 status=ok
// SIG undefined FUN_1484d7f58(void)

void FUN_1484d7f58(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484d7fde FUN_1484d7fde body=1317 status=ok
// SIG undefined FUN_1484d7fde(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1484d7fde(longlong *param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  int *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  uint auStack_b8 [4];
  longlong local_a8;
  ulonglong uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  char acStack_59 [5];
  int local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = param_4;
  FUN_14582f278(param_2);
  FUN_146c017d0(param_2);
  FUN_14582eef4(param_2,0);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14481578e(param_1,0);
  }
  local_108 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14481578e(local_108,0);
  }
  uVar8 = *(uint *)(param_3 + 9);
  uVar2 = *(uint *)(param_3 + 0xb);
  if (uVar2 != 0 && uVar8 != 0) {
    lVar11 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar11 + uVar8;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar11) < uVar8) {
      FUN_1446f48e2(param_1);
    }
    lVar11 = param_1[3];
    *(uint *)(param_1 + 3) = (int)lVar11 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - (int)lVar11) < uVar2) {
      FUN_1446f48e2(local_108);
    }
    lVar11 = param_3[9];
    if ((longlong)(int)lVar11 == 0) {
      local_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar15 = param_3[8];
      iVar9 = -1;
      lVar14 = 0;
      do {
        lVar3 = *param_3;
        lVar10 = (longlong)*(int *)(lVar15 + lVar14) * 0x60;
        local_88 = (double)*(float *)(lVar3 + 8 + lVar10);
        dStack_90 = (double)*(float *)(lVar3 + 4 + lVar10);
        local_98 = (double)*(float *)(lVar3 + lVar10);
        local_78 = DAT_14c846338;
        local_80 = DAT_14c846330;
        local_6c = DAT_14c846338;
        local_74 = DAT_14c846330;
        local_68 = DAT_14c84635c;
        local_60 = 0;
        local_5e = 0;
        iVar5 = FUN_146c02208(param_2,&local_98);
        iVar7 = *(int *)(lVar15 + lVar14);
        *(int *)(*param_1 + (longlong)iVar5 * 4) = iVar7;
        if (iVar7 < iVar9) {
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        lVar14 = lVar14 + 4;
      } while ((longlong)(int)lVar11 * 4 != lVar14);
      local_a8 = 0;
      uStack_a0 = (ulonglong)(iVar9 + 1U);
      if (iVar9 + 1U != 0) {
        FUN_1446f48e2(&local_a8,0);
      }
    }
    if (0 < (int)param_1[1]) {
      lVar11 = 0;
      do {
        *(int *)(local_a8 + (longlong)*(int *)(*param_1 + lVar11 * 4) * 4) = (int)lVar11;
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[1]);
    }
    FUN_1402160b8(&local_98);
    param_1[4] = (longlong)local_98;
    local_f8 = param_1;
    if ((longlong)(int)param_3[0xb] != 0) {
      piVar13 = (int *)param_3[10];
      local_f0 = piVar13 + (int)param_3[0xb];
      local_e8 = param_3;
      do {
        plVar4 = local_e8;
        uVar6 = (*(code *)*local_e0)(local_e0[1],piVar13);
        iVar9 = *piVar13;
        plVar4 = (longlong *)plVar4[7];
        iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar9 * 3);
        local_54[0] = iVar7;
        iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar9 * 3 + 1);
        local_54[1] = iVar5;
        local_54[2] = (**(code **)(*plVar4 + 0x60))(plVar4,iVar9 * 3 + 2);
        auStack_b8[3] = *(undefined4 *)(local_a8 + (longlong)local_54[2] * 4);
        auStack_b8[2] = *(undefined4 *)(local_a8 + (longlong)iVar5 * 4);
        auStack_b8[1] = *(undefined4 *)(local_a8 + (longlong)iVar7 * 4);
        local_fc = uVar6;
        uVar8 = FUN_146c01152(param_2,auStack_b8 + 1,uVar6);
        plVar4 = local_f8;
        if ((~uVar8 & 0xfffffffd) != 0) {
          if (uVar8 == 0xfffffffe) {
            acStack_59[3] = 0;
            acStack_59[1] = '\0';
            acStack_59[2] = '\0';
            lVar11 = 1;
            do {
              lVar15 = lVar11;
              if (lVar11 == 3) {
                lVar15 = 0;
              }
              uVar8 = FUN_146c061e0(param_2,auStack_b8[lVar11],auStack_b8[lVar15 + 1]);
              if ((uVar8 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar8 & 0x1ff) << 4)) != -1)) {
                acStack_59[lVar11] = '\x01';
                acStack_59[lVar15 + 1] = '\x01';
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 != 4);
            lVar11 = 0;
            do {
              if (acStack_59[lVar11 + 1] == '\x01') {
                lVar15 = *(longlong *)
                          (*(longlong *)(param_2 + 0x10) +
                          (ulonglong)(auStack_b8[lVar11 + 1] >> 9) * 8);
                uVar12 = (ulonglong)(auStack_b8[lVar11 + 1] & 0x1ff);
                pdVar1 = (double *)(lVar15 + uVar12 * 0x18);
                local_d8 = *(undefined4 *)pdVar1;
                uStack_d4 = *(undefined4 *)((longlong)pdVar1 + 4);
                local_98 = *pdVar1;
                uStack_d0 = *(undefined4 *)(pdVar1 + 1);
                uStack_cc = *(undefined4 *)((longlong)pdVar1 + 0xc);
                dStack_90 = pdVar1[1];
                local_c8 = *(double *)(lVar15 + 0x10 + uVar12 * 0x18);
                local_78 = DAT_14c846338;
                local_80 = DAT_14c846330;
                local_6c = DAT_14c846338;
                local_74 = DAT_14c846330;
                local_68 = DAT_14c84635c;
                local_60 = 0;
                local_5e = 0;
                local_88 = local_c8;
                iVar9 = FUN_146c02208(param_2,&local_98);
                auStack_b8[lVar11 + 1] = iVar9;
                FUN_144a127d2(plVar4,iVar9 + 1,1);
                *(int *)(*plVar4 + (longlong)iVar9 * 4) = local_54[lVar11];
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 != 3);
            uVar8 = FUN_146c01152(param_2,auStack_b8 + 1,local_fc);
          }
          *(int *)(*local_108 + (longlong)(int)uVar8 * 4) = *piVar13;
        }
        piVar13 = piVar13 + 1;
      } while (piVar13 != local_f0);
    }
    FUN_144a1a59e(local_108,*(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144),1);
    FUN_1402160b8(&local_98);
    local_f8[5] = (longlong)local_98;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d8504 FUN_1484d8504 body=1994 status=ok
// SIG undefined FUN_1484d8504(void)

void FUN_1484d8504(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong *local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290 [3];
  undefined8 local_278;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_290[0] = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  bVar1 = *(byte *)((longlong)param_3 + 0x1d);
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)param_3[6] + (longlong)(int)param_3[3] * 8) + 0xa8);
  local_2f8 = param_1;
  local_2e0 = param_4;
  FUN_14582ed12(param_2);
  uVar13 = (bVar1 & 1) * 2 + 1;
  iVar6 = (**(code **)(*(longlong *)param_2[0x41] + 0xb0))();
  if (iVar6 < (int)uVar13) {
    (**(code **)(*(longlong *)param_2[0x41] + 0xb8))((longlong *)param_2[0x41],uVar13);
  }
  uVar10 = 0;
  do {
    if ((longlong)uVar10 < (longlong)*(int *)(param_2[0x41] + 0x38)) {
      uVar9 = *(undefined8 *)(*(longlong *)(param_2[0x41] + 0x30) + uVar10 * 8);
    }
    else {
      uVar9 = 0;
    }
    FUN_146c1a144(uVar9,(int)param_2[0x28] * 0x200 + *(int *)((longlong)param_2 + 0x144));
    uVar10 = uVar10 + 1;
  } while (uVar13 != uVar10);
  plVar12 = (longlong *)param_2[0x41];
  iVar6 = (int)plVar12[7];
  if (iVar6 < 1) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(longlong *)plVar12[6];
  }
  if ((bVar1 & 1) != 0) {
    if (iVar6 < 2) {
      local_298 = 0;
    }
    else {
      local_298 = *(longlong *)(plVar12[6] + 8);
      if (iVar6 != 2) {
        local_2a0 = *(longlong *)(plVar12[6] + 0x10);
        goto LAB_1484d8647;
      }
    }
    local_2a0 = 0;
  }
LAB_1484d8647:
  uVar13 = 1;
  if (1 < (int)uVar2) {
    uVar13 = uVar2;
  }
  local_290[0] = lVar16;
  (**(code **)(*plVar12 + 0xa8))(plVar12,uVar13);
  if (1 < (int)uVar2) {
    uVar10 = 1;
    do {
      if ((longlong)uVar10 < (longlong)*(int *)(param_2[0x41] + 0x28)) {
        uVar9 = *(undefined8 *)(*(longlong *)(param_2[0x41] + 0x20) + uVar10 * 8);
      }
      else {
        uVar9 = 0;
      }
      FUN_146c1a030(uVar9,(int)param_2[0x28] * 0x200 + *(int *)((longlong)param_2 + 0x144));
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  lVar11 = *(longlong *)(*(longlong *)param_3[6] + (longlong)(int)param_3[3] * 8);
  if ((*(int *)(lVar11 + 0x100) == -1) || (*(int *)(lVar11 + 300) == 0)) {
    lVar11 = 0;
  }
  else {
    FUN_146c17f82(param_2[0x41]);
    lVar11 = *(longlong *)(param_2[0x41] + 0x40);
    local_2a8 = lVar11;
    FUN_146c1a246(lVar11,(int)param_2[0x28] * 0x200 + *(int *)((longlong)param_2 + 0x144));
  }
  FUN_14582ed9a(param_2[0x41]);
  local_2b0 = *(longlong *)(param_2[0x41] + 0x48);
  local_2c8 = (longlong *)0x0;
  uStack_2c0 = 0;
  lVar14 = local_2b0;
  if (0 < (int)uVar2) {
    uVar13 = 0;
    local_2f0 = lVar11;
    local_2e8 = local_2b0;
    do {
      local_c8[0] = 0;
      local_b8 = 0;
      local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar13);
      plStack_70 = local_2f8;
      plStack_80 = param_2;
      local_78 = param_3;
      FUN_143b7fa84(&local_2d8,&local_88,local_c8);
      uVar10 = uStack_2c0;
      lVar16 = (longlong)(int)uStack_2c0;
      uVar7 = (int)uStack_2c0 + 1;
      uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar7);
      if (uStack_2c0._4_4_ < uVar7) {
        FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
      }
      local_2c8[lVar16 * 2] = local_2d8;
      local_2c8[lVar16 * 2 + 1] = local_2d0;
      uVar13 = uVar13 + 1;
      lVar11 = local_2f0;
      lVar14 = local_2e8;
      lVar16 = local_290[0];
    } while (uVar2 != uVar13);
  }
  if (lVar16 != 0) {
    local_108 = 0;
    local_f8 = 0;
    local_88 = local_290;
    local_78 = local_2f8;
    plStack_80 = param_3;
    FUN_143b7fcf0(&local_2d8);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  if (local_298 != 0) {
    local_148 = 0;
    local_138 = 0;
    local_88 = &local_298;
    local_78 = local_2f8;
    plStack_80 = param_3;
    FUN_143b7ff4a(&local_2d8);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  if (local_2a0 != 0) {
    local_188 = 0;
    local_178 = 0;
    local_88 = &local_2a0;
    local_78 = local_2f8;
    plStack_80 = param_3;
    FUN_143b801a4(&local_2d8);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  if (lVar11 != 0) {
    local_1c8 = 0;
    local_1b8 = 0;
    local_88 = &local_2a8;
    local_78 = local_2f8;
    plStack_80 = param_3;
    FUN_143b803fe(&local_2d8);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  if (lVar14 != 0) {
    local_208 = 0;
    local_1f8 = 0;
    plStack_80 = local_2f8;
    local_78 = &local_2b0;
    plStack_70 = local_2e0;
    local_88 = param_2;
    FUN_143b80658(&local_2d8);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  (**(code **)(*(longlong *)param_2[0x41] + 0xd8))((longlong *)param_2[0x41],0);
  if ((int)param_3[0x11] == (int)param_3[1]) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_149f36420;
    puVar8[2] = param_2;
    FUN_146be9ba2(puVar8 + 3);
    local_58 = 0;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0xc00000000;
    FUN_146bea236(puVar8,&local_88);
    uVar9 = DAT_14c99c780;
    puVar8[1] = DAT_14c99c780;
    FUN_146c18154(param_2[0x41],uVar9,puVar8);
    local_248 = 0;
    local_238 = 0;
    local_88 = local_2f8;
    plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
    plStack_80 = param_3;
    local_78 = param_2;
    FUN_143b808c4(&local_2d8,&local_88);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  lVar16 = (**(code **)(*(longlong *)param_3[4] + 0x310))();
  uVar3 = *(undefined4 *)(lVar16 + 8);
  lVar16 = (**(code **)(*(longlong *)param_3[4] + 0x310))();
  if (*(int *)(lVar16 + 8) != 0) {
    FUN_146c26078(param_2[0x41],uVar3);
    lVar16 = param_2[0x41];
    plStack_70 = *(longlong **)(lVar16 + 0xc0);
    local_68 = *(undefined8 *)(lVar16 + 200);
    uStack_60 = *(undefined8 *)(lVar16 + 0xd0);
    local_58 = *(undefined8 *)(lVar16 + 0xd8);
    local_290[1] = 0;
    local_278 = 0;
    local_88 = local_2f8;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    plStack_80 = param_3;
    local_78 = param_2;
    FUN_143b80b30(&local_2d8);
    uVar10 = uStack_2c0;
    lVar16 = (longlong)(int)uStack_2c0;
    uVar13 = (int)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar13);
    if (uStack_2c0._4_4_ < uVar13) {
      FUN_146b79992(&local_2c8,uVar10 & 0xffffffff);
    }
    local_2c8[lVar16 * 2] = local_2d8;
    local_2c8[lVar16 * 2 + 1] = local_2d0;
  }
  uVar10 = 0;
  if ((longlong)(int)uStack_2c0 != 0) {
    plVar15 = local_2c8 + (longlong)(int)uStack_2c0 * 2;
    plVar12 = local_2c8;
    do {
      lVar16 = *plVar12;
      if (*plVar12 != 0) {
        while( true ) {
          do {
            lVar11 = lVar16;
            lVar16 = 0;
          } while (lVar11 == 0);
          plVar4 = *(longlong **)(lVar11 + 0x70);
          cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
          if (cVar5 != '\0') break;
          lVar16 = *plVar12;
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar15);
    uVar10 = uStack_2c0 & 0xffffffff;
  }
  FUN_146b79bb5(local_2c8,uVar10);
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d8cd0 thunk_FUN_1484d8d1c body=5 status=ok
// SIG undefined thunk_FUN_1484d8d1c(void)

void thunk_FUN_1484d8d1c(void)

{
  FUN_1484d8d1c();
  return;
}



// FUNCTION 1484d8cda FUN_1484d8cda body=5 status=ok
// SIG undefined FUN_1484d8cda(void)

longlong FUN_1484d8cda(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484d8ce0 FUN_1484d8ce0 body=29 status=ok
// SIG undefined FUN_1484d8ce0(void)

void FUN_1484d8ce0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1484d8cfe FUN_1484d8cfe body=29 status=ok
// SIG undefined FUN_1484d8cfe(void)

undefined8 FUN_1484d8cfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d8d1c FUN_1484d8d1c body=262 status=ok
// SIG undefined FUN_1484d8d1c(void)

void FUN_1484d8d1c(int *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  code **local_a0;
  undefined1 **local_98;
  longlong local_88;
  int local_80;
  undefined1 *local_78;
  longlong *local_70;
  longlong local_68;
  int local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  code *local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = *param_1;
  uVar1 = 0;
  if ((-1 < (longlong)local_80) &&
     (local_80 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x208) + 0x28))) {
    uVar1 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0x208) + 0x20) +
             (longlong)local_80 * 8);
  }
  local_88 = *(longlong *)(param_1 + 4);
  local_18 = &local_28;
  local_98 = &local_20;
  local_20 = &LAB_1484d9bce;
  local_30 = &local_48;
  local_a0 = &local_38;
  local_38 = FUN_1484d9bec;
  local_50 = &local_68;
  local_a8 = &local_58;
  local_58 = &LAB_1484d9c3e;
  local_70 = &local_88;
  local_78 = &LAB_1484d9c54;
  local_68 = local_88;
  local_60 = local_80;
  local_48 = local_88;
  local_40 = local_80;
  local_28 = local_88;
  FUN_1484d8e24(*(undefined8 *)(param_1 + 6),uVar1,local_88 + 0x70);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d8e24 FUN_1484d8e24 body=192 status=ok
// SIG undefined FUN_1484d8e24(void)

void FUN_1484d8e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *param_5;
  local_78 = &local_38;
  local_30 = param_5[1];
  local_48 = *param_4;
  local_40 = param_4[1];
  FUN_1484d8ee6(param_1,param_2,param_3,&local_48);
  local_58 = *param_7;
  local_50 = param_7[1];
  local_68 = *param_6;
  local_60 = param_6[1];
  FUN_1484d92d6(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d8ee6 FUN_1484d8ee6 body=1007 status=ok
// SIG undefined FUN_1484d8ee6(void)

void FUN_1484d8ee6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined1 local_c8 [32];
  int *local_a8;
  longlong local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined4 local_80;
  uint local_78 [4];
  longlong local_68 [2];
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_c8;
  local_98 = param_1;
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = *param_2;
    iVar7 = -1;
    lVar6 = 0;
    do {
      if (iVar7 < *(int *)(*param_3 + lVar6)) {
        iVar7 = *(int *)(*param_3 + lVar6);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)param_3[1] * 4 != lVar6);
    local_68[0] = 0;
    local_68[1] = 0;
    local_54 = -1;
    FUN_1448156a8(local_68,&local_54,iVar7 + 1);
    if ((longlong)(int)param_3[1] != 0) {
      piVar11 = (int *)*param_3;
      lVar6 = (longlong)(int)param_3[1] << 2;
      do {
        (*(code *)*param_4)(&local_54,param_4[1],piVar11);
        uVar3 = FUN_146c2d0a4(param_2,&local_54);
        *(undefined4 *)(local_68[0] + (longlong)*piVar11 * 4) = uVar3;
        piVar11 = piVar11 + 1;
        lVar6 = lVar6 + -4;
      } while (lVar6 != 0);
    }
    uVar12 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
    uVar9 = 0;
    if ((uVar12 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar12) {
        uVar10 = uVar12;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar12) {
      do {
        local_78[3] = *(undefined4 *)(*(longlong *)(local_98 + 0x10) + (longlong)(int)uVar9 * 4);
        local_a8 = &local_4c;
        cVar2 = (*(code *)*param_5)(param_5[1],local_78 + 3,&local_54,&local_50);
        if (cVar2 != '\0') {
          local_78[0] = *(uint *)(local_68[0] + (longlong)local_54 * 4);
          local_78[1] = *(uint *)(local_68[0] + (longlong)local_50 * 4);
          local_78[2] = *(uint *)(local_68[0] + (longlong)local_4c * 4);
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
          local_80 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_88 = *(undefined8 *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          lVar6 = 0;
          do {
            iVar7 = *(int *)(*(longlong *)
                              (param_2[0xc] +
                              (ulonglong)(*(uint *)((longlong)local_78 + lVar6) >> 9) * 8) +
                            (ulonglong)(*(uint *)((longlong)local_78 + lVar6) & 0x1ff) * 4);
            if ((iVar7 != -1) && (iVar7 != *(int *)((longlong)&local_88 + lVar6))) {
              (*(code *)*param_4)(local_90,param_4[1],(longlong)&local_54 + lVar6);
              uVar3 = FUN_146c2d0a4(param_2,local_90);
              *(undefined4 *)((longlong)local_78 + lVar6) = uVar3;
            }
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0xc);
          if (local_78[0] == local_78[2] && local_78[0] == local_78[1]) {
            (*(code *)*param_4)(local_90,param_4[1],&local_54);
            local_78[0] = FUN_146c2d0a4(param_2,local_90);
            local_78[1] = FUN_146c2d0a4(param_2,local_90);
            local_78[2] = FUN_146c2d0a4(param_2,local_90);
          }
          else {
            if (local_78[0] == local_78[1]) {
              (*(code *)*param_4)(local_90,param_4[1],&local_54);
              local_78[0] = FUN_146c2d0a4(param_2,local_90);
              local_78[1] = FUN_146c2d0a4(param_2,local_90);
            }
            if (local_78[0] == local_78[2]) {
              (*(code *)*param_4)(local_90,param_4[1],&local_54);
              local_78[0] = FUN_146c2d0a4(param_2,local_90);
              local_78[2] = FUN_146c2d0a4(param_2,local_90);
            }
            if (local_78[1] == local_78[2]) {
              (*(code *)*param_4)(local_90,param_4[1],&local_50);
              local_78[1] = FUN_146c2d0a4(param_2,local_90);
              local_78[2] = FUN_146c2d0a4(param_2,local_90);
            }
          }
          FUN_146c01486(param_2,uVar9,local_78,1);
        }
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar12) {
          uVar10 = uVar12;
        }
        do {
          uVar4 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar12);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)local_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d92d6 FUN_1484d92d6 body=652 status=ok
// SIG undefined FUN_1484d92d6(void)

void FUN_1484d92d6(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  longlong local_e8;
  undefined8 *local_e0;
  undefined1 local_d4 [8];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_118;
  lVar1 = *param_2;
  uVar7 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar5 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar6 = 1;
    if (1 < (int)uVar5) {
      uVar7 = (ulonglong)uVar5;
    }
    do {
      uVar3 = uVar6;
      if ((uint)uVar7 == uVar3) goto LAB_1484d9388;
      uVar6 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar3 >> 9] +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
    uVar7 = (ulonglong)uVar3;
  }
LAB_1484d9388:
  local_e8 = param_1;
  local_e0 = param_4;
  local_58 = param_2;
  if ((uint)uVar7 != uVar5) {
    do {
      uVar6 = (uint)uVar7;
      if (*(int *)(*(longlong *)(param_2[0xf] + (ulonglong)(uVar6 * 3 >> 9) * 8) +
                  (ulonglong)(uVar6 * 3 & 0x1ff) * 4) < 0) {
        local_f8 = local_ac;
        (*(code *)*local_e0)
                  (local_e0[1],(longlong)(int)uVar6 * 4 + *(longlong *)(local_e8 + 0x10),local_b4,
                   local_b0);
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (uVar7 >> 9) * 8);
        local_b8 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
        local_c0 = *(undefined8 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
        local_cc = 0xffffffffffffffff;
        local_c4 = 0xffffffff;
        lVar4 = 0;
        do {
          (*(code *)*param_3)(local_d4,param_3[1],local_b4 + lVar4);
          uVar2 = FUN_1484d9564(&local_a8,local_d4,*(undefined4 *)((longlong)&local_c0 + lVar4));
          *(undefined4 *)((longlong)&local_cc + lVar4) = uVar2;
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0xc);
        FUN_146c01486(param_2,uVar7,&local_cc,1);
      }
      uVar3 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar5) {
        uVar3 = uVar5;
      }
      do {
        if (uVar3 - 1 == (int)uVar7) {
          uVar7 = (ulonglong)uVar3;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar7 != uVar5);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1484d9b40(&local_a8);
  if ((local_48 ^ (ulonglong)local_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d9564 FUN_1484d9564 body=189 status=ok
// SIG undefined FUN_1484d9564(void)

undefined4 FUN_1484d9564(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_44 = param_3;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(&local_44,0xc,0);
  iVar2 = FUN_1484d9622(param_1,uVar1,&local_44);
  if (iVar2 != -1) {
    if ((*param_1 + (longlong)iVar2 * 0x18 != 0) &&
       (puVar3 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x18 + 0xc),
       puVar3 != (undefined4 *)0x0)) {
      uVar1 = *puVar3;
      goto LAB_1484d95d3;
    }
  }
  local_48 = FUN_146c2d0a4(param_1[10],param_2);
  local_30 = &local_48;
  local_38 = &local_44;
  FUN_1484d969a(param_1,local_24);
  uVar1 = local_48;
LAB_1484d95d3:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d9622 FUN_1484d9622 body=119 status=ok
// SIG undefined FUN_1484d9622(void)

int FUN_1484d9622(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        if (*(int *)(lVar4 + lVar6 * 0x18) == *param_3) {
          lVar1 = lVar4 + lVar6 * 0x18;
          fVar2 = *(float *)(lVar1 + 4);
          if ((fVar2 == (float)param_3[1]) && (!NAN(fVar2) && !NAN((float)param_3[1]))) {
            fVar2 = *(float *)(lVar1 + 8);
            if ((fVar2 == (float)param_3[2]) && (!NAN(fVar2) && !NAN((float)param_3[2]))) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1484d969a FUN_1484d969a body=312 status=ok
// SIG undefined FUN_1484d969a(void)

undefined4 * FUN_1484d969a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484d97d4(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = (*(code *)PTR_FUN_14c75b148)(local_40,0xc,0);
  cVar4 = FUN_1484d98ba(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1484d9980(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d97d4 FUN_1484d97d4 body=230 status=ok
// SIG undefined FUN_1484d97d4(void)

int * FUN_1484d97d4(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 1484d98ba FUN_1484d98ba body=84 status=ok
// SIG undefined FUN_1484d98ba(void)

undefined8 FUN_1484d98ba(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_1484d9622(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_1484d990e(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 1484d990e FUN_1484d990e body=114 status=ok
// SIG undefined FUN_1484d990e(void)

void FUN_1484d990e(longlong *param_1,int param_2)

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



// FUNCTION 1484d9980 FUN_1484d9980 body=447 status=ok
// SIG undefined FUN_1484d9980(void)

void FUN_1484d9980(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484d9b40 FUN_1484d9b40 body=52 status=ok
// SIG undefined FUN_1484d9b40(void)

void FUN_1484d9b40(longlong *param_1)

{
  FUN_1484d9b74();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484d9b74 FUN_1484d9b74 body=89 status=ok
// SIG undefined FUN_1484d9b74(void)

void FUN_1484d9b74(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
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



// FUNCTION 1484d9bec FUN_1484d9bec body=82 status=ok
// SIG undefined FUN_1484d9bec(void)

float * FUN_1484d9bec(float *param_1,longlong *param_2,undefined4 *param_3)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)*param_2;
  lVar6 = param_2[1];
  plVar3 = (longlong *)plVar2[7];
  iVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,*param_3);
  lVar5 = (longlong)iVar4 * 0x60 + *plVar2;
  lVar6 = (longlong)(int)lVar6 * 0x10;
  dVar1 = *(double *)(lVar6 + 0x28 + lVar5);
  *param_1 = (float)*(double *)(lVar6 + 0x20 + lVar5);
  param_1[1] = (float)dVar1;
  return param_1;
}



// FUNCTION 1484d9c60 thunk_FUN_1484d9c9a body=5 status=ok
// SIG undefined thunk_FUN_1484d9c9a(void)

void thunk_FUN_1484d9c9a(void)

{
  FUN_1484d9c9a();
  return;
}



// FUNCTION 1484d9c6a FUN_1484d9c6a body=5 status=ok
// SIG undefined FUN_1484d9c6a(void)

longlong FUN_1484d9c6a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484d9c70 FUN_1484d9c70 body=12 status=ok
// SIG undefined FUN_1484d9c70(void)

void FUN_1484d9c70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484d9c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484d9c7c FUN_1484d9c7c body=29 status=ok
// SIG undefined FUN_1484d9c7c(void)

undefined8 FUN_1484d9c7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484d9c9a FUN_1484d9c9a body=215 status=ok
// SIG undefined FUN_1484d9c9a(void)

void FUN_1484d9c9a(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  code **local_80;
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1[1];
  local_18 = &local_28;
  local_78 = &local_20;
  local_20 = &LAB_1484dab7c;
  local_30 = &local_40;
  local_80 = &local_38;
  local_38 = FUN_1484dab9a;
  local_48 = &local_58;
  local_88 = &local_50;
  local_50 = &LAB_1484dabe6;
  local_60 = &local_70;
  local_68 = &LAB_1484dabfc;
  local_58 = local_70;
  local_40 = local_70;
  local_28 = local_70;
  FUN_1484d9d72(param_1[2],*(undefined8 *)*param_1,local_70 + 0x70);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d9d72 FUN_1484d9d72 body=192 status=ok
// SIG undefined FUN_1484d9d72(void)

void FUN_1484d9d72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *param_5;
  local_78 = &local_38;
  local_30 = param_5[1];
  local_48 = *param_4;
  local_40 = param_4[1];
  FUN_1484d9e34(param_1,param_2,param_3,&local_48);
  local_58 = *param_7;
  local_50 = param_7[1];
  local_68 = *param_6;
  local_60 = param_6[1];
  FUN_1484da224(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484d9e34 FUN_1484d9e34 body=1007 status=ok
// SIG undefined FUN_1484d9e34(void)

void FUN_1484d9e34(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined1 local_c8 [32];
  int *local_a8;
  longlong local_a0;
  undefined1 local_94 [12];
  undefined8 local_88;
  undefined4 local_80;
  uint local_78 [4];
  longlong local_68 [2];
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_c8;
  local_a0 = param_1;
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = *param_2;
    iVar7 = -1;
    lVar6 = 0;
    do {
      if (iVar7 < *(int *)(*param_3 + lVar6)) {
        iVar7 = *(int *)(*param_3 + lVar6);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)param_3[1] * 4 != lVar6);
    local_68[0] = 0;
    local_68[1] = 0;
    local_54 = -1;
    FUN_1448156a8(local_68,&local_54,iVar7 + 1);
    if ((longlong)(int)param_3[1] != 0) {
      piVar11 = (int *)*param_3;
      lVar6 = (longlong)(int)param_3[1] << 2;
      do {
        (*(code *)*param_4)(&local_54,param_4[1],piVar11);
        uVar3 = FUN_146c2f9e2(param_2,&local_54);
        *(undefined4 *)(local_68[0] + (longlong)*piVar11 * 4) = uVar3;
        piVar11 = piVar11 + 1;
        lVar6 = lVar6 + -4;
      } while (lVar6 != 0);
    }
    uVar12 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
    uVar9 = 0;
    if ((uVar12 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar12) {
        uVar10 = uVar12;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar12) {
      do {
        local_78[3] = *(undefined4 *)(*(longlong *)(local_a0 + 0x10) + (longlong)(int)uVar9 * 4);
        local_a8 = &local_4c;
        cVar2 = (*(code *)*param_5)(param_5[1],local_78 + 3,&local_54,&local_50);
        if (cVar2 != '\0') {
          local_78[0] = *(uint *)(local_68[0] + (longlong)local_54 * 4);
          local_78[1] = *(uint *)(local_68[0] + (longlong)local_50 * 4);
          local_78[2] = *(uint *)(local_68[0] + (longlong)local_4c * 4);
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
          local_80 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_88 = *(undefined8 *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          lVar6 = 0;
          do {
            iVar7 = *(int *)(*(longlong *)
                              (param_2[0xc] +
                              (ulonglong)(*(uint *)((longlong)local_78 + lVar6) >> 9) * 8) +
                            (ulonglong)(*(uint *)((longlong)local_78 + lVar6) & 0x1ff) * 4);
            if ((iVar7 != -1) && (iVar7 != *(int *)((longlong)&local_88 + lVar6))) {
              (*(code *)*param_4)(local_94,param_4[1],(longlong)&local_54 + lVar6);
              uVar3 = FUN_146c2f9e2(param_2,local_94);
              *(undefined4 *)((longlong)local_78 + lVar6) = uVar3;
            }
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0xc);
          if (local_78[0] == local_78[2] && local_78[0] == local_78[1]) {
            (*(code *)*param_4)(local_94,param_4[1],&local_54);
            local_78[0] = FUN_146c2f9e2(param_2,local_94);
            local_78[1] = FUN_146c2f9e2(param_2,local_94);
            local_78[2] = FUN_146c2f9e2(param_2,local_94);
          }
          else {
            if (local_78[0] == local_78[1]) {
              (*(code *)*param_4)(local_94,param_4[1],&local_54);
              local_78[0] = FUN_146c2f9e2(param_2,local_94);
              local_78[1] = FUN_146c2f9e2(param_2,local_94);
            }
            if (local_78[0] == local_78[2]) {
              (*(code *)*param_4)(local_94,param_4[1],&local_54);
              local_78[0] = FUN_146c2f9e2(param_2,local_94);
              local_78[2] = FUN_146c2f9e2(param_2,local_94);
            }
            if (local_78[1] == local_78[2]) {
              (*(code *)*param_4)(local_94,param_4[1],&local_50);
              local_78[1] = FUN_146c2f9e2(param_2,local_94);
              local_78[2] = FUN_146c2f9e2(param_2,local_94);
            }
          }
          FUN_146c01580(param_2,uVar9,local_78,1);
        }
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar12) {
          uVar10 = uVar12;
        }
        do {
          uVar4 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar12);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)local_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484da224 FUN_1484da224 body=652 status=ok
// SIG undefined FUN_1484da224(void)

void FUN_1484da224(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  longlong local_e8;
  undefined8 *local_e0;
  undefined1 local_d8 [12];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_118;
  lVar1 = *param_2;
  uVar7 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar5 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar6 = 1;
    if (1 < (int)uVar5) {
      uVar7 = (ulonglong)uVar5;
    }
    do {
      uVar3 = uVar6;
      if ((uint)uVar7 == uVar3) goto LAB_1484da2d6;
      uVar6 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar3 >> 9] +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
    uVar7 = (ulonglong)uVar3;
  }
LAB_1484da2d6:
  local_e8 = param_1;
  local_e0 = param_4;
  local_58 = param_2;
  if ((uint)uVar7 != uVar5) {
    do {
      uVar6 = (uint)uVar7;
      if (*(int *)(*(longlong *)(param_2[0xf] + (ulonglong)(uVar6 * 3 >> 9) * 8) +
                  (ulonglong)(uVar6 * 3 & 0x1ff) * 4) < 0) {
        local_f8 = local_ac;
        (*(code *)*local_e0)
                  (local_e0[1],(longlong)(int)uVar6 * 4 + *(longlong *)(local_e8 + 0x10),local_b4,
                   local_b0);
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (uVar7 >> 9) * 8);
        local_b8 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
        local_c0 = *(undefined8 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
        local_cc = 0xffffffffffffffff;
        local_c4 = 0xffffffff;
        lVar4 = 0;
        do {
          (*(code *)*param_3)(local_d8,param_3[1],local_b4 + lVar4);
          uVar2 = FUN_1484da4b2(&local_a8,local_d8,*(undefined4 *)((longlong)&local_c0 + lVar4));
          *(undefined4 *)((longlong)&local_cc + lVar4) = uVar2;
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0xc);
        FUN_146c01580(param_2,uVar7,&local_cc,1);
      }
      uVar3 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar5) {
        uVar3 = uVar5;
      }
      do {
        if (uVar3 - 1 == (int)uVar7) {
          uVar7 = (ulonglong)uVar3;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar7 != uVar5);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1484daaee(&local_a8);
  if ((local_48 ^ (ulonglong)local_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484da4b2 FUN_1484da4b2 body=201 status=ok
// SIG undefined FUN_1484da4b2(void)

undefined4 FUN_1484da4b2(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = *param_2;
  local_3c = *(undefined4 *)(param_2 + 1);
  local_48 = param_3;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(&local_48,0x10,0);
  iVar2 = FUN_1484da57c(param_1,uVar1,&local_48);
  if (iVar2 != -1) {
    if ((*param_1 + (longlong)iVar2 * 0x1c != 0) &&
       (puVar3 = (undefined4 *)((longlong)iVar2 * 0x1c + *param_1 + 0x10),
       puVar3 != (undefined4 *)0x0)) {
      uVar1 = *puVar3;
      goto LAB_1484da52d;
    }
  }
  local_4c = FUN_146c2f9e2(param_1[10],param_2);
  local_30 = &local_4c;
  local_38 = &local_48;
  FUN_1484da612(param_1,local_24);
  uVar1 = local_4c;
LAB_1484da52d:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484da57c FUN_1484da57c body=149 status=ok
// SIG undefined FUN_1484da57c(void)

int FUN_1484da57c(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x1c;
        if (*(int *)(lVar3 + lVar4) == *param_3) {
          lVar1 = lVar3 + lVar4;
          if ((*(float *)(lVar1 + 4) == (float)param_3[1]) &&
             (!NAN(*(float *)(lVar1 + 4)) && !NAN((float)param_3[1]))) {
            if ((*(float *)(lVar1 + 8) == (float)param_3[2]) &&
               (!NAN(*(float *)(lVar1 + 8)) && !NAN((float)param_3[2]))) {
              if ((*(float *)(lVar1 + 0xc) == (float)param_3[3]) &&
                 (!NAN(*(float *)(lVar1 + 0xc)) && !NAN((float)param_3[3]))) {
                return iVar2;
              }
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x14 + lVar4);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1484da612 FUN_1484da612 body=306 status=ok
// SIG undefined FUN_1484da612(void)

undefined4 * FUN_1484da612(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484da746(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (*(code *)PTR_FUN_14c75b148)(local_40,0x10,0);
  cVar6 = FUN_1484da842(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1484da924(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484da746 FUN_1484da746 body=251 status=ok
// SIG undefined FUN_1484da746(void)

int * FUN_1484da746(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1484da842 FUN_1484da842 body=98 status=ok
// SIG undefined FUN_1484da842(void)

undefined8 FUN_1484da842(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1484da57c(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1484da8a4(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1484da8a4 FUN_1484da8a4 body=128 status=ok
// SIG undefined FUN_1484da8a4(void)

void FUN_1484da8a4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1484da924 FUN_1484da924 body=457 status=ok
// SIG undefined FUN_1484da924(void)

void FUN_1484da924(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar4,0x10,0);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484daaee FUN_1484daaee body=52 status=ok
// SIG undefined FUN_1484daaee(void)

void FUN_1484daaee(longlong *param_1)

{
  FUN_1484dab22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484dab22 FUN_1484dab22 body=89 status=ok
// SIG undefined FUN_1484dab22(void)

void FUN_1484dab22(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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



// FUNCTION 1484dab9a FUN_1484dab9a body=75 status=ok
// SIG undefined FUN_1484dab9a(void)

undefined8 * FUN_1484dab9a(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  param_2 = (longlong *)*param_2;
  plVar1 = (longlong *)param_2[7];
  iVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,*param_3);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = extraout_XMM0_Qa;
  auVar4 = pmovsxbd(auVar4,*(undefined4 *)(*param_2 + 0x10 + (longlong)iVar3 * 0x60));
  auVar5._0_8_ = CONCAT44((float)auVar4._4_4_ * 0.007874016,(float)auVar4._0_4_ * 0.007874016);
  auVar5._8_4_ = (float)auVar4._8_4_ * 0.007874016;
  auVar5._12_4_ = (float)auVar4._12_4_ * 0.0;
  *param_1 = auVar5._0_8_;
  uVar2 = extractps(auVar5,2);
  param_1[1] = uVar2;
  return param_1;
}



// FUNCTION 1484dac0e thunk_FUN_1484dac48 body=5 status=ok
// SIG undefined thunk_FUN_1484dac48(void)

void thunk_FUN_1484dac48(void)

{
  FUN_1484dac48();
  return;
}



// FUNCTION 1484dac18 FUN_1484dac18 body=5 status=ok
// SIG undefined FUN_1484dac18(void)

longlong FUN_1484dac18(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484dac1e FUN_1484dac1e body=12 status=ok
// SIG undefined FUN_1484dac1e(void)

void FUN_1484dac1e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484dac27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484dac2a FUN_1484dac2a body=29 status=ok
// SIG undefined FUN_1484dac2a(void)

undefined8 FUN_1484dac2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484dac48 FUN_1484dac48 body=215 status=ok
// SIG undefined FUN_1484dac48(void)

void FUN_1484dac48(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  code **local_80;
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1[1];
  local_18 = &local_28;
  local_78 = &local_20;
  local_20 = &LAB_1484dad20;
  local_30 = &local_40;
  local_80 = &local_38;
  local_38 = FUN_1484dad3e;
  local_48 = &local_58;
  local_88 = &local_50;
  local_50 = &LAB_1484dad8a;
  local_60 = &local_70;
  local_68 = &LAB_1484dada0;
  local_58 = local_70;
  local_40 = local_70;
  local_28 = local_70;
  FUN_1484d9d72(param_1[2],*(undefined8 *)*param_1,local_70 + 0x70);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dad3e FUN_1484dad3e body=75 status=ok
// SIG undefined FUN_1484dad3e(void)

undefined8 * FUN_1484dad3e(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  param_2 = (longlong *)*param_2;
  plVar1 = (longlong *)param_2[7];
  iVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,*param_3);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = extraout_XMM0_Qa;
  auVar4 = pmovsxbd(auVar4,*(undefined4 *)(*param_2 + 0xc + (longlong)iVar3 * 0x60));
  auVar5._0_8_ = CONCAT44((float)auVar4._4_4_ * 0.007874016,(float)auVar4._0_4_ * 0.007874016);
  auVar5._8_4_ = (float)auVar4._8_4_ * 0.007874016;
  auVar5._12_4_ = (float)auVar4._12_4_ * 0.0;
  *param_1 = auVar5._0_8_;
  uVar2 = extractps(auVar5,2);
  param_1[1] = uVar2;
  return param_1;
}



// FUNCTION 1484dadb2 thunk_FUN_1484dadec body=5 status=ok
// SIG undefined thunk_FUN_1484dadec(void)

void thunk_FUN_1484dadec(void)

{
  FUN_1484dadec();
  return;
}



// FUNCTION 1484dadbc FUN_1484dadbc body=5 status=ok
// SIG undefined FUN_1484dadbc(void)

longlong FUN_1484dadbc(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484dadc2 FUN_1484dadc2 body=12 status=ok
// SIG undefined FUN_1484dadc2(void)

void FUN_1484dadc2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484dadcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484dadce FUN_1484dadce body=29 status=ok
// SIG undefined FUN_1484dadce(void)

undefined8 FUN_1484dadce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484dadec FUN_1484dadec body=215 status=ok
// SIG undefined FUN_1484dadec(void)

void FUN_1484dadec(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  code **local_80;
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1[1];
  local_18 = &local_28;
  local_78 = &local_20;
  local_20 = &LAB_1484daec4;
  local_30 = &local_40;
  local_80 = &local_38;
  local_38 = FUN_1484daee2;
  local_48 = &local_58;
  local_88 = &local_50;
  local_50 = &LAB_1484db038;
  local_60 = &local_70;
  local_68 = &LAB_1484db04e;
  local_58 = local_70;
  local_40 = local_70;
  local_28 = local_70;
  FUN_1484d9d72(param_1[2],*(undefined8 *)*param_1,local_70 + 0x70);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484daee2 FUN_1484daee2 body=31 status=ok
// SIG undefined FUN_1484daee2(void)

undefined8 FUN_1484daee2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_1484daf02(*param_2,param_1,*param_3);
  return param_1;
}



// FUNCTION 1484daf02 FUN_1484daf02 body=309 status=ok
// SIG undefined FUN_1484daf02(void)

float * FUN_1484daf02(longlong *param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 extraout_XMM0_Qa;
  float fVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = (**(code **)(*(longlong *)param_1[7] + 0x60))((longlong *)param_1[7],param_3);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = extraout_XMM0_Qa;
  auVar4 = pmovsxbd(auVar4,*(undefined4 *)(*param_1 + 0xc + (longlong)iVar1 * 0x60));
  fVar7 = (float)auVar4._0_4_ * 0.007874016;
  fVar8 = (float)auVar4._4_4_ * 0.007874016;
  fVar9 = (float)auVar4._8_4_ * 0.007874016;
  auVar4 = pmovsxbd(in_XMM1,*(undefined4 *)(*param_1 + 0x10 + (longlong)iVar1 * 0x60));
  fVar2 = (float)auVar4._0_4_ * 0.007874016;
  fVar5 = (float)auVar4._4_4_ * 0.007874016;
  fVar6 = (float)auVar4._8_4_ * 0.007874016;
  fVar3 = fVar2 * fVar8 - fVar7 * fVar5;
  fVar7 = fVar6 * fVar7 - fVar9 * fVar2;
  fVar2 = fVar5 * fVar9 - fVar6 * fVar8;
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar7 * fVar7;
  if (((fVar5 != 1.0) || (fVar6 = fVar2, fVar8 = fVar7, fVar9 = fVar3, NAN(fVar5))) &&
     (fVar6 = (float)DAT_14c846330, fVar8 = DAT_14c846330._4_4_, fVar9 = DAT_14c846338,
     1e-08 <= fVar5)) {
    fVar5 = 1.0 / SQRT(fVar5);
    fVar6 = fVar2 * fVar5;
    fVar8 = fVar7 * fVar5;
    fVar9 = fVar3 * fVar5;
  }
  fVar2 = (float)auVar4._12_4_ * 0.007874016;
  *param_2 = fVar2 * fVar6;
  param_2[1] = fVar8 * fVar2;
  param_2[2] = fVar9 * fVar2;
  return param_2;
}



// FUNCTION 1484db060 thunk_FUN_1484db09a body=5 status=ok
// SIG undefined thunk_FUN_1484db09a(void)

void thunk_FUN_1484db09a(void)

{
  FUN_1484db09a();
  return;
}



// FUNCTION 1484db06a FUN_1484db06a body=5 status=ok
// SIG undefined FUN_1484db06a(void)

longlong FUN_1484db06a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1484db070 FUN_1484db070 body=12 status=ok
// SIG undefined FUN_1484db070(void)

void FUN_1484db070(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001484db079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1484db07c FUN_1484db07c body=29 status=ok
// SIG undefined FUN_1484db07c(void)

undefined8 FUN_1484db07c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484db09a FUN_1484db09a body=215 status=ok
// SIG undefined FUN_1484db09a(void)

void FUN_1484db09a(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  code **local_80;
  undefined1 **local_78;
  longlong local_70;
  undefined1 *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  longlong local_40;
  code *local_38;
  longlong *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1[1];
  local_18 = &local_28;
  local_78 = &local_20;
  local_20 = &LAB_1484dbf6a;
  local_30 = &local_40;
  local_80 = &local_38;
  local_38 = FUN_1484dbf88;
  local_48 = &local_58;
  local_88 = &local_50;
  local_50 = &LAB_1484dc084;
  local_60 = &local_70;
  local_68 = &LAB_1484dc09a;
  local_58 = local_70;
  local_40 = local_70;
  local_28 = local_70;
  FUN_1484db172(param_1[2],*(undefined8 *)*param_1,local_70 + 0x70);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484db172 FUN_1484db172 body=192 status=ok
// SIG undefined FUN_1484db172(void)

void FUN_1484db172(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = *param_5;
  local_78 = &local_38;
  local_30 = param_5[1];
  local_48 = *param_4;
  local_40 = param_4[1];
  FUN_1484db234(param_1,param_2,param_3,&local_48);
  local_58 = *param_7;
  local_50 = param_7[1];
  local_68 = *param_6;
  local_60 = param_6[1];
  FUN_1484db624(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484db234 FUN_1484db234 body=1007 status=ok
// SIG undefined FUN_1484db234(void)

void FUN_1484db234(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined1 local_c8 [32];
  int *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_88 [4];
  undefined4 local_78 [4];
  longlong local_68 [2];
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_c8;
  local_a0 = param_1;
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = *param_2;
    iVar7 = -1;
    lVar6 = 0;
    do {
      if (iVar7 < *(int *)(*param_3 + lVar6)) {
        iVar7 = *(int *)(*param_3 + lVar6);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)param_3[1] * 4 != lVar6);
    local_68[0] = 0;
    local_68[1] = 0;
    local_78[0] = 0xffffffff;
    FUN_1448156a8(local_68,local_78,iVar7 + 1);
    if ((longlong)(int)param_3[1] != 0) {
      piVar11 = (int *)*param_3;
      lVar6 = (longlong)(int)param_3[1] << 2;
      do {
        (*(code *)*param_4)(local_78,param_4[1],piVar11);
        uVar3 = FUN_146c32f5e(param_2,local_78);
        *(undefined4 *)(local_68[0] + (longlong)*piVar11 * 4) = uVar3;
        piVar11 = piVar11 + 1;
        lVar6 = lVar6 + -4;
      } while (lVar6 != 0);
    }
    uVar12 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
    uVar9 = 0;
    if ((uVar12 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
      uVar10 = 1;
      uVar4 = 1;
      if (1 < (int)uVar12) {
        uVar10 = uVar12;
      }
      do {
        uVar9 = uVar10;
        if (uVar10 == uVar4) break;
        uVar5 = uVar4 >> 9;
        uVar8 = uVar4 & 0x1ff;
        uVar9 = uVar4;
        uVar4 = uVar4 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                           (ulonglong)uVar8 * 2) - 1U));
    }
    if (uVar9 != uVar12) {
      do {
        local_88[3] = *(undefined4 *)(*(longlong *)(local_a0 + 0x10) + (longlong)(int)uVar9 * 4);
        local_a8 = &local_4c;
        cVar2 = (*(code *)*param_5)(param_5[1],local_88 + 3,&local_54,&local_50);
        if (cVar2 != '\0') {
          local_88[0] = *(uint *)(local_68[0] + (longlong)local_54 * 4);
          local_88[1] = *(uint *)(local_68[0] + (longlong)local_50 * 4);
          local_88[2] = *(uint *)(local_68[0] + (longlong)local_4c * 4);
          lVar6 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
          local_90 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_98 = *(undefined8 *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          lVar6 = 0;
          do {
            iVar7 = *(int *)(*(longlong *)
                              (param_2[0xc] +
                              (ulonglong)(*(uint *)((longlong)local_88 + lVar6) >> 9) * 8) +
                            (ulonglong)(*(uint *)((longlong)local_88 + lVar6) & 0x1ff) * 4);
            if ((iVar7 != -1) && (iVar7 != *(int *)((longlong)&local_98 + lVar6))) {
              (*(code *)*param_4)(local_78,param_4[1],(longlong)&local_54 + lVar6);
              uVar3 = FUN_146c32f5e(param_2,local_78);
              *(undefined4 *)((longlong)local_88 + lVar6) = uVar3;
            }
            lVar6 = lVar6 + 4;
          } while (lVar6 != 0xc);
          if (local_88[0] == local_88[2] && local_88[0] == local_88[1]) {
            (*(code *)*param_4)(local_78,param_4[1],&local_54);
            local_88[0] = FUN_146c32f5e(param_2,local_78);
            local_88[1] = FUN_146c32f5e(param_2,local_78);
            local_88[2] = FUN_146c32f5e(param_2,local_78);
          }
          else {
            if (local_88[0] == local_88[1]) {
              (*(code *)*param_4)(local_78,param_4[1],&local_54);
              local_88[0] = FUN_146c32f5e(param_2,local_78);
              local_88[1] = FUN_146c32f5e(param_2,local_78);
            }
            if (local_88[0] == local_88[2]) {
              (*(code *)*param_4)(local_78,param_4[1],&local_54);
              local_88[0] = FUN_146c32f5e(param_2,local_78);
              local_88[2] = FUN_146c32f5e(param_2,local_78);
            }
            if (local_88[1] == local_88[2]) {
              (*(code *)*param_4)(local_78,param_4[1],&local_50);
              local_88[1] = FUN_146c32f5e(param_2,local_78);
              local_88[2] = FUN_146c32f5e(param_2,local_78);
            }
          }
          FUN_146c2a048(param_2,uVar9,local_88,1);
        }
        uVar10 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar12) {
          uVar10 = uVar12;
        }
        do {
          uVar4 = uVar10;
          if (uVar10 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar4;
      } while (uVar9 != uVar12);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)local_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484db624 FUN_1484db624 body=661 status=ok
// SIG undefined FUN_1484db624(void)

void FUN_1484db624(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_128 [32];
  undefined1 *local_108;
  longlong local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [28];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_128;
  lVar1 = *param_2;
  uVar7 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar5 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar6 = 1;
    if (1 < (int)uVar5) {
      uVar7 = (ulonglong)uVar5;
    }
    do {
      uVar3 = uVar6;
      if ((uint)uVar7 == uVar3) goto LAB_1484db6d9;
      uVar6 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar3 >> 9] +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
    uVar7 = (ulonglong)uVar3;
  }
LAB_1484db6d9:
  local_f8 = param_1;
  local_f0 = param_4;
  local_58 = param_2;
  if ((uint)uVar7 != uVar5) {
    do {
      uVar6 = (uint)uVar7;
      if (*(int *)(*(longlong *)(param_2[0xf] + (ulonglong)(uVar6 * 3 >> 9) * 8) +
                  (ulonglong)(uVar6 * 3 & 0x1ff) * 4) < 0) {
        local_108 = local_ac;
        (*(code *)*local_f0)
                  (local_f0[1],(longlong)(int)uVar6 * 4 + *(longlong *)(local_f8 + 0x10),local_b4,
                   local_b0);
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x130) + (uVar7 >> 9) * 8);
        local_b8 = *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
        local_c0 = *(undefined8 *)(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
        local_cc = 0xffffffffffffffff;
        local_c4 = 0xffffffff;
        lVar4 = 0;
        do {
          (*(code *)*param_3)(local_e8,param_3[1],local_b4 + lVar4);
          uVar2 = FUN_1484db8ba(&local_a8,local_e8,*(undefined4 *)((longlong)&local_c0 + lVar4));
          *(undefined4 *)((longlong)&local_cc + lVar4) = uVar2;
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0xc);
        FUN_146c2a048(param_2,uVar7,&local_cc,1);
      }
      uVar3 = uVar6 + 1;
      if ((int)(uVar6 + 1) < (int)uVar5) {
        uVar3 = uVar5;
      }
      do {
        if (uVar3 - 1 == (int)uVar7) {
          uVar7 = (ulonglong)uVar3;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar6 >> 9) * 8) +
                                           (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar7 != uVar5);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1484dbeda(&local_a8);
  if ((local_48 ^ (ulonglong)local_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484db8ba FUN_1484db8ba body=187 status=ok
// SIG undefined FUN_1484db8ba(void)

undefined4 FUN_1484db8ba(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_48[0] = param_3;
  uVar1 = (*(code *)PTR_FUN_14c75b148)(local_48,0x20,0);
  iVar2 = FUN_1484db976(param_1,uVar1,local_48);
  if (iVar2 != -1) {
    if ((*param_1 + (longlong)iVar2 * 0x40 != 0) &&
       (puVar3 = (undefined4 *)((longlong)iVar2 * 0x40 + *param_1 + 0x20),
       puVar3 != (undefined4 *)0x0)) {
      uVar1 = *puVar3;
      goto LAB_1484db927;
    }
  }
  local_64 = FUN_146c32f5e(param_1[10],param_2);
  local_58 = &local_64;
  local_60 = local_48;
  FUN_1484dba18(param_1,local_4c);
  uVar1 = local_64;
LAB_1484db927:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484db976 FUN_1484db976 body=161 status=ok
// SIG undefined FUN_1484db976(void)

int FUN_1484db976(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x40;
        if (*(int *)(lVar3 + lVar5) == *param_3) {
          lVar1 = lVar3 + lVar5;
          if ((*(float *)(lVar1 + 0x10) == (float)param_3[4]) &&
             (!NAN(*(float *)(lVar1 + 0x10)) && !NAN((float)param_3[4]))) {
            if ((*(float *)(lVar1 + 0x14) == (float)param_3[5]) &&
               (!NAN(*(float *)(lVar1 + 0x14)) && !NAN((float)param_3[5]))) {
              if ((*(float *)(lVar1 + 0x18) == (float)param_3[6]) &&
                 (!NAN(*(float *)(lVar1 + 0x18)) && !NAN((float)param_3[6]))) {
                if ((*(float *)(lVar1 + 0x1c) == (float)param_3[7]) &&
                   (!NAN(*(float *)(lVar1 + 0x1c)) && !NAN((float)param_3[7]))) {
                  return iVar2;
                }
              }
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x30 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1484dba18 FUN_1484dba18 body=314 status=ok
// SIG undefined FUN_1484dba18(void)

undefined4 * FUN_1484dba18(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484dbb54(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar7;
  local_40[6] = uVar8;
  local_40[7] = uVar9;
  *local_40 = uVar3;
  local_40[1] = uVar4;
  local_40[2] = uVar5;
  local_40[3] = uVar6;
  local_40[8] = *puVar2;
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (*(code *)PTR_FUN_14c75b148)(local_40,0x20,0);
  cVar10 = FUN_1484dbc3c(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar12) {
      uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xd] = uVar11;
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar14;
      FUN_1484dbd14(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484dbb54 FUN_1484dbb54 body=231 status=ok
// SIG undefined FUN_1484dbb54(void)

int * FUN_1484dbb54(longlong *param_1,int *param_2)

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
      FUN_146fb2bb4(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1484dbc3c FUN_1484dbc3c body=102 status=ok
// SIG undefined FUN_1484dbc3c(void)

undefined8 FUN_1484dbc3c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_1484db976(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x40;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = param_3[8];
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1484dbca2(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 1484dbca2 FUN_1484dbca2 body=114 status=ok
// SIG undefined FUN_1484dbca2(void)

void FUN_1484dbca2(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1484dbd14 FUN_1484dbd14 body=453 status=ok
// SIG undefined FUN_1484dbd14(void)

void FUN_1484dbd14(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar10,0x20,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
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



// FUNCTION 1484dbeda FUN_1484dbeda body=52 status=ok
// SIG undefined FUN_1484dbeda(void)

void FUN_1484dbeda(longlong *param_1)

{
  FUN_1484dbf0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484dbf0e FUN_1484dbf0e body=91 status=ok
// SIG undefined FUN_1484dbf0e(void)

void FUN_1484dbf0e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_146fb2f02(param_1,0);
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



// FUNCTION 1484dbf88 FUN_1484dbf88 body=31 status=ok
// SIG undefined FUN_1484dbf88(void)

undefined8 FUN_1484dbf88(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  FUN_1484dbfa8(*param_2,param_1,*param_3);
  return param_1;
}



// FUNCTION 1484dbfa8 FUN_1484dbfa8 body=219 status=ok
// SIG undefined FUN_1484dbfa8(void)

float * FUN_1484dbfa8(longlong param_1,float *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8);
  fVar7 = 1.0;
  fVar5 = fVar7;
  fVar6 = fVar7;
  fVar8 = fVar7;
  if (*(int *)(lVar1 + 0x100) != -1) {
    fVar5 = 1.0;
    fVar6 = 1.0;
    fVar8 = 1.0;
    if (*(int *)(lVar1 + 300) != 0) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))
                        (*(longlong **)(param_1 + 0x38),param_3);
      lVar1 = *(longlong *)
               (**(longlong **)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x18) * 8);
      lVar2 = *(longlong *)(lVar1 + 0x120);
      uVar4 = (ulonglong)(uint)(iVar3 * *(int *)(lVar1 + 0x128));
      fVar7 = (float)*(byte *)(lVar2 + 2 + uVar4) * 0.003921569;
      fVar5 = (float)*(byte *)(lVar2 + 3 + uVar4) * 0.003921569;
      fVar6 = (float)*(byte *)(lVar2 + uVar4) * 0.003921569;
      fVar8 = (float)*(byte *)(lVar2 + 1 + uVar4) * 0.003921569;
    }
  }
  *param_2 = fVar7;
  param_2[1] = fVar8;
  param_2[2] = fVar6;
  param_2[3] = fVar5;
  return param_2;
}


