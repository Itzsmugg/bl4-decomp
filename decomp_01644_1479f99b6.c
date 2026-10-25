// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479f99b6 FUN_1479f99b6 body=56 status=ok
// SIG undefined FUN_1479f99b6(void)

undefined8 * FUN_1479f99b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8619d0;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479f99ee FUN_1479f99ee body=147 status=ok
// SIG undefined FUN_1479f99ee(void)

void FUN_1479f99ee(longlong param_1,int param_2)

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



// FUNCTION 1479f9a82 FUN_1479f9a82 body=48 status=ok
// SIG undefined FUN_1479f9a82(void)

void FUN_1479f9a82(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 1479f9ab2 FUN_1479f9ab2 body=283 status=ok
// SIG undefined FUN_1479f9ab2(void)

undefined4 * FUN_1479f9ab2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479f9bce(param_1,local_48);
  puVar2 = (undefined8 *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[8] = 0xffff;
  local_40[9] = 0xffff;
  local_4c = local_48[0];
  cVar4 = FUN_1479f9cb4(param_1,uVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 10) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1479f9da8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479f9bce FUN_1479f9bce body=230 status=ok
// SIG undefined FUN_1479f9bce(void)

int * FUN_1479f9bce(longlong *param_1,int *param_2)

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



// FUNCTION 1479f9cb4 FUN_1479f9cb4 body=130 status=ok
// SIG undefined FUN_1479f9cb4(void)

undefined8 FUN_1479f9cb4(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        psVar1 = (short *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*psVar1 == *param_3) {
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 2);
          uVar4 = *(undefined4 *)(param_3 + 4);
          uVar5 = *(undefined4 *)(param_3 + 6);
          *(undefined4 *)psVar1 = uVar2;
          *(undefined4 *)(psVar1 + 2) = uVar3;
          *(undefined4 *)(psVar1 + 4) = uVar4;
          *(undefined4 *)(psVar1 + 6) = uVar5;
          FUN_1479f9d36(uVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)(psVar1 + 8);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479f9d36 FUN_1479f9d36 body=114 status=ok
// SIG undefined FUN_1479f9d36(void)

void FUN_1479f9d36(longlong *param_1,int param_2)

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



// FUNCTION 1479f9da8 FUN_1479f9da8 body=410 status=ok
// SIG undefined FUN_1479f9da8(void)

void FUN_1479f9da8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0x18);
        *(uint *)(lVar2 + 0x14 + lVar5 * 0x18) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1479f9f44 FUN_1479f9f44 body=246 status=ok
// SIG undefined FUN_1479f9f44(void)

undefined4 * FUN_1479f9f44(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405dc782(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  local_30[1] = *puVar1;
  local_30[2] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[3] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[2] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1406b664c(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fa03c FUN_1479fa03c body=243 status=ok
// SIG undefined FUN_1479fa03c(void)

undefined8 * FUN_1479fa03c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c867980,CONCAT71(uVar5,1));
      plVar1 = (longlong *)*param_2;
      if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
        local_28 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
      }
      *param_1 = local_28;
      uVar3 = DAT_14c867988;
      lVar6 = (longlong)(int)DAT_14c867988;
      DAT_14c867988 = DAT_14c867988 + 1;
      if (DAT_14c86798c < DAT_14c867988) {
        FUN_1447a71f6(&DAT_14c867980,uVar3);
      }
      lVar2 = DAT_14c867980;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c867980 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fa130 FUN_1479fa130 body=29 status=ok
// SIG undefined FUN_1479fa130(void)

undefined8 FUN_1479fa130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479fa168 FUN_1479fa168 body=29 status=ok
// SIG undefined FUN_1479fa168(void)

bool FUN_1479fa168(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1479fa186 FUN_1479fa186 body=26 status=ok
// SIG undefined FUN_1479fa186(void)

bool FUN_1479fa186(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1479fa1a0 FUN_1479fa1a0 body=24 status=ok
// SIG undefined FUN_1479fa1a0(void)

bool FUN_1479fa1a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1479fa1c4 FUN_1479fa1c4 body=101 status=ok
// SIG undefined FUN_1479fa1c4(void)

void FUN_1479fa1c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a861ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a861a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479fa22a FUN_1479fa22a body=101 status=ok
// SIG undefined FUN_1479fa22a(void)

void FUN_1479fa22a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a861ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a861a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1479fa290 FUN_1479fa290 body=134 status=ok
// SIG undefined FUN_1479fa290(void)

void FUN_1479fa290(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a861ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a861a70;
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
                    /* WARNING: Could not recover jumptable at 0x0001479fa307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479fa316 FUN_1479fa316 body=42 status=ok
// SIG undefined FUN_1479fa316(void)

void FUN_1479fa316(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479fa33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1479fa340 FUN_1479fa340 body=154 status=ok
// SIG undefined FUN_1479fa340(void)

bool FUN_1479fa340(longlong param_1,undefined4 param_2)

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



// FUNCTION 1479fa3de FUN_1479fa3de body=141 status=ok
// SIG undefined FUN_1479fa3de(void)

void FUN_1479fa3de(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x15d0);
  if (param_2 <= (int)uVar1) {
    iVar6 = 6;
    if (6 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x15d4)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x3a0,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 5;
      iVar5 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x15d4) = iVar6;
    FUN_1479fa46c(param_1,param_2,iVar6,0x3a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479fa46c FUN_1479fa46c body=152 status=ok
// SIG undefined FUN_1479fa46c(void)

void FUN_1479fa46c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x15c0);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x3a0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x15c0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x15c0),param_1,(longlong)param_2 * 0x3a0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x15c0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1479fa504 FUN_1479fa504 body=102 status=ok
// SIG undefined FUN_1479fa504(void)

void FUN_1479fa504(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  FUN_144aa17a4();
  lVar1 = FUN_146391130();
  if (lVar1 != 0) {
    FUN_14485c47a(param_1 + 8,lVar1);
    uVar3 = -*(int *)(lVar1 + 0x5c) & (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U;
    uVar2 = FUN_14001cc68((longlong)(int)(uVar3 + (uVar3 == 0)),0);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    FUN_1479ed704(uVar2,*param_2);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 1479fa56a FUN_1479fa56a body=116 status=ok
// SIG undefined FUN_1479fa56a(void)

void FUN_1479fa56a(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_1479fa5e0(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479fa5e0 FUN_1479fa5e0 body=133 status=ok
// SIG undefined FUN_1479fa5e0(void)

void FUN_1479fa5e0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1479fa666 FUN_1479fa666 body=332 status=ok
// SIG undefined FUN_1479fa666(void)

undefined4 *
FUN_1479fa666(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1479fa7b4(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1479fa89a(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1479fa9b4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fa7b4 FUN_1479fa7b4 body=229 status=ok
// SIG undefined FUN_1479fa7b4(void)

int * FUN_1479fa7b4(longlong *param_1,int *param_2)

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



// FUNCTION 1479fa89a FUN_1479fa89a body=144 status=ok
// SIG undefined FUN_1479fa89a(void)

void FUN_1479fa89a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1479fa92a(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1479fa905;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1479fa905:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1479fa92a FUN_1479fa92a body=138 status=ok
// SIG undefined FUN_1479fa92a(void)

void FUN_1479fa92a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479fa9b4 FUN_1479fa9b4 body=477 status=ok
// SIG undefined FUN_1479fa9b4(void)

void FUN_1479fa9b4(longlong *param_1)

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



// FUNCTION 1479fab92 FUN_1479fab92 body=420 status=ok
// SIG undefined FUN_1479fab92(void)

undefined8 FUN_1479fab92(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  void *_Dst;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar2 = *(uint *)(param_3 + 800);
  uVar9 = (ulonglong)uVar2;
  if ((param_2 != 0) && (uVar9 = (ulonglong)uVar2, 0 < *(int *)(param_1 + 0x408))) {
    lVar12 = 0xe0;
    lVar13 = 0;
    do {
      lVar10 = FUN_14479d2ce(*(longlong *)(param_1 + 0x400) + lVar12);
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0xa8) == param_2)) {
        lVar10 = *(longlong *)(param_1 + 0x400);
        iVar3 = *(int *)(param_3 + 800);
        *(uint *)(param_3 + 800) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x324) < iVar3 + 1U) {
          FUN_14011d10e(param_3,iVar3);
        }
        lVar11 = *(longlong *)(param_3 + 0x318);
        if (*(longlong *)(param_3 + 0x318) == 0) {
          lVar11 = param_3;
        }
        puVar1 = (undefined4 *)(lVar10 + lVar12);
        _Dst = (void *)(lVar11 + 8 + (longlong)iVar3 * 0x108);
        *(undefined1 *)((longlong)_Dst + -8) = *(undefined1 *)(puVar1 + -0x38);
        memcpy(_Dst,puVar1 + -0x36,0xb8);
        *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
        *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
        *(undefined8 *)((longlong)_Dst + 200) = 0;
        *(undefined4 *)((longlong)_Dst + 0xd0) = 0xffffffff;
        *(undefined1 *)((longlong)_Dst + 0xd4) = 0;
        *(undefined8 *)((longlong)_Dst + 0xb8) = *(undefined8 *)(puVar1 + -8);
        uVar8 = *(undefined8 *)(puVar1 + -4);
        *(undefined8 *)((longlong)_Dst + 0xc0) = *(undefined8 *)(puVar1 + -6);
        *(undefined8 *)((longlong)_Dst + 200) = uVar8;
        *(undefined4 *)((longlong)_Dst + 0xd0) = puVar1[-2];
        *(undefined1 *)((longlong)_Dst + 0xd4) = *(undefined1 *)(puVar1 + -1);
        *(undefined8 *)((longlong)_Dst + 0xf8) = *(undefined8 *)(puVar1 + 8);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar8 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)((longlong)_Dst + 0xe8) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)((longlong)_Dst + 0xf0) = uVar8;
        *(undefined4 *)((longlong)_Dst + 0xd8) = uVar4;
        *(undefined4 *)((longlong)_Dst + 0xdc) = uVar5;
        *(undefined4 *)((longlong)_Dst + 0xe0) = uVar6;
        *(undefined4 *)((longlong)_Dst + 0xe4) = uVar7;
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x108;
    } while (lVar13 < *(int *)(param_1 + 0x408));
    uVar9 = (ulonglong)*(uint *)(param_3 + 800);
  }
  return CONCAT71((int7)(uVar9 >> 8),uVar2 != (uint)uVar9);
}



// FUNCTION 1479fad36 FUN_1479fad36 body=22 status=ok
// SIG undefined FUN_1479fad36(void)

undefined8 FUN_1479fad36(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1479fad4c(param_1,*param_2,*param_3);
  return 0;
}



// FUNCTION 1479fad4c FUN_1479fad4c body=442 status=ok
// SIG undefined FUN_1479fad4c(void)

void FUN_1479fad4c(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  double *local_d0;
  undefined4 *local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(uint *)(param_3 + 0x5c) & *(byte *)(param_1 + 8) + 1) != 0) {
    puVar1 = (undefined8 *)*param_1;
    pdVar2 = (double *)param_1[4];
    local_90 = 1.0 / (double)param_1[6];
    local_80 = pdVar2[2] * local_90;
    local_88 = pdVar2[1] * local_90;
    local_90 = local_90 * *pdVar2;
    puVar3 = (undefined4 *)param_1[3];
    local_a8 = *puVar3;
    uStack_a4 = puVar3[1];
    uStack_a0 = puVar3[2];
    uStack_9c = puVar3[3];
    local_98 = *(undefined8 *)(puVar3 + 4);
    local_b8 = &local_74;
    local_c0 = &local_70;
    local_c8 = &local_58;
    local_d0 = &local_40;
    local_d8 = 0;
    cVar4 = (**(code **)(**(longlong **)(param_3 + 0x10) + 0xa0))();
    if (cVar4 != '\0') {
      if (local_40 < (double)*(float *)(param_1[9] + 0x70)) {
        *(undefined1 *)param_1[1] = 1;
        puVar7 = (undefined8 *)param_1[2];
        puVar8 = (undefined8 *)param_1[7];
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        *(float *)(param_1[9] + 0x70) = (float)local_40;
        lVar6 = param_1[9];
        *(undefined8 *)(lVar6 + 0x68) = local_60;
        *(undefined8 *)(lVar6 + 0x58) = local_70;
        *(undefined8 *)(lVar6 + 0x60) = uStack_68;
        lVar6 = param_1[9];
        *(undefined8 *)(lVar6 + 0x50) = local_48;
        *(undefined4 *)(lVar6 + 0x40) = local_58;
        *(undefined4 *)(lVar6 + 0x44) = uStack_54;
        *(undefined4 *)(lVar6 + 0x48) = uStack_50;
        *(undefined4 *)(lVar6 + 0x4c) = uStack_4c;
        *(longlong *)(param_1[9] + 8) = param_3;
        uVar5 = FUN_146e202c6(*puVar1,param_2);
        *(undefined8 *)param_1[9] = uVar5;
        *(undefined4 *)(param_1[9] + 0x10) = local_74;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479faf08 FUN_1479faf08 body=303 status=ok
// SIG undefined FUN_1479faf08(void)

ulonglong FUN_1479faf08(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_138 [40];
  undefined8 *local_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined8 **local_c0;
  undefined1 local_b8 [96];
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_49 = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      local_58 = *(undefined8 *)(lVar1 + lVar5);
      FUN_146e1fc90(*param_1,local_b8);
      local_f8 = &local_49;
      local_d8 = param_5;
      local_d0 = param_6;
      local_c0 = &local_100;
      local_c8 = FUN_1479fb038;
      local_110 = &local_58;
      local_108 = 1;
      local_100 = param_1;
      local_f0 = local_b8;
      local_e8 = param_3;
      local_e0 = param_4;
      uVar3 = FUN_146e202d6(*param_1,&local_110,&local_c8);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
    uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),local_49);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar4 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fb038 FUN_1479fb038 body=22 status=ok
// SIG undefined FUN_1479fb038(void)

undefined8 FUN_1479fb038(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1479fb04e(param_1,*param_2,*param_3);
  return 0;
}



// FUNCTION 1479fb04e FUN_1479fb04e body=249 status=ok
// SIG undefined FUN_1479fb04e(void)

void FUN_1479fb04e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [13];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = (undefined8 *)*param_1;
  local_48 = param_1[2];
  local_40 = param_1[6];
  puVar8 = (undefined8 *)param_1[4];
  puVar9 = local_b8;
  local_50 = param_3;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  cVar4 = FUN_1479fb148(param_1[3]);
  if (cVar4 != '\0') {
    *(undefined1 *)param_1[1] = 1;
    uVar5 = FUN_146e202c6(*puVar2,param_2);
    plVar3 = (longlong *)param_1[5];
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1479fb4aa(plVar3,iVar1);
    }
    lVar6 = *plVar3;
    lVar7 = (longlong)iVar1 * 0x38;
    *(undefined8 *)(lVar6 + lVar7) = uVar5;
    *(undefined8 *)(lVar6 + 8 + lVar7) = param_3;
    *(undefined4 *)(lVar6 + 0x10 + lVar7) = 0xffffffff;
    puVar2 = (undefined8 *)(lVar6 + 0x18 + lVar7);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar6 + 0x28 + lVar7) = 0;
    *(undefined4 *)(lVar6 + 0x30 + lVar7) = 0xffffffff;
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fb148 FUN_1479fb148 body=864 status=ok
// SIG undefined FUN_1479fb148(void)

void FUN_1479fb148(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1479fb193_caseD_42:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
    break;
  case 1:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
LAB_1479fb2b3:
    local_98 = 0;
    FUN_1405c9af5(uVar3,local_88,param_1);
    goto LAB_1479fb20d;
  case 3:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
LAB_1479fb327:
    local_98 = 0;
    FUN_144945691(uVar3,local_88,param_1);
    goto LAB_1479fb20d;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_1479fb148(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_1479fb20d;
  case 8:
    local_90 = param_3[2];
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
LAB_1479fb2ed:
    local_98 = 0;
    FUN_140ea601d(uVar3,local_88,param_1);
    goto LAB_1479fb20d;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      goto LAB_1479fb2b3;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1479fb193_caseD_42;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      goto LAB_1479fb327;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[2];
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      goto LAB_1479fb2ed;
    default:
      switch(uVar1) {
      case 0x80:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cd55a9(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
        break;
      case 0x81:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cd93af(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
        break;
      default:
        goto switchD_1479fb193_caseD_42;
      case 0x83:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cdd0cb(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
        break;
      case 0x88:
        local_90 = param_3[2];
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_140a08058(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
      }
      goto LAB_1479fb20d;
    }
  }
  local_98 = 0;
  FUN_140682465(uVar3,local_88,param_1);
LAB_1479fb20d:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fb4aa FUN_1479fb4aa body=143 status=ok
// SIG undefined FUN_1479fb4aa(void)

void FUN_1479fb4aa(longlong param_1,int param_2)

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



// FUNCTION 1479fb53a FUN_1479fb53a body=22 status=ok
// SIG undefined FUN_1479fb53a(void)

undefined8 FUN_1479fb53a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_1479fb550(param_1,*param_2,*param_3);
  return 0;
}



// FUNCTION 1479fb550 FUN_1479fb550 body=1088 status=ok
// SIG undefined FUN_1479fb550(void)

void FUN_1479fb550(undefined8 *param_1,undefined8 param_2,double param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  double local_1e8 [12];
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 local_170;
  double *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined4 *local_150;
  undefined1 *local_148;
  byte *local_140;
  undefined1 local_138 [28];
  undefined4 local_11c;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((*(uint *)((longlong)param_3 + 0x5c) & *(byte *)param_1[9] + 1) != 0) {
    puVar1 = (undefined8 *)*param_1;
    dStack_180 = (double)param_1[1];
    local_178 = (double)param_1[7];
    local_170 = param_1[6];
    local_168 = &local_118;
    local_160 = &local_f8;
    local_158 = &local_110;
    local_150 = &local_11c;
    local_148 = local_138;
    pdVar14 = (double *)param_1[3];
    pdVar15 = local_1e8;
    local_188 = param_3;
    local_140 = (byte *)param_1[9];
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar15 = *pdVar14;
      pdVar14 = pdVar14 + 1;
      pdVar15 = pdVar15 + 1;
    }
    cVar10 = FUN_1479fb991(param_1[2]);
    if (cVar10 != '\0') {
      if ((float)local_118 < *(float *)(param_1[8] + 0x70)) {
        *(undefined1 *)param_1[4] = 1;
        *(double *)(param_1[8] + 8) = param_3;
        lVar13 = param_1[8];
        *(undefined8 *)(lVar13 + 0x50) = local_e8;
        *(undefined8 *)(lVar13 + 0x40) = local_f8;
        *(undefined8 *)(lVar13 + 0x48) = uStack_f0;
        lVar13 = param_1[8];
        *(undefined8 *)(lVar13 + 0x68) = local_100;
        *(undefined8 *)(lVar13 + 0x58) = local_110;
        *(undefined8 *)(lVar13 + 0x60) = uStack_108;
        *(float *)(param_1[8] + 0x70) = (float)local_118;
        *(undefined4 *)(param_1[8] + 0x10) = local_11c;
        lVar13 = param_1[8];
        if (0.0 < *(float *)(lVar13 + 0x70)) {
          pdVar14 = (double *)param_1[1];
          dVar19 = *(double *)(lVar13 + 0x40) - pdVar14[4];
          dVar20 = *(double *)(lVar13 + 0x48) - pdVar14[5];
          dVar16 = *(double *)(lVar13 + 0x50) - pdVar14[6];
          pdVar15 = (double *)param_1[7];
          dVar7 = *pdVar14;
          dVar17 = -dVar7;
          dVar18 = -pdVar14[1];
          dVar2 = pdVar14[2] * -1.0;
          dVar3 = pdVar14[3] * 1.0;
          dVar21 = dVar20 * dVar17 - dVar19 * dVar18;
          dVar4 = dVar16 * dVar18 - dVar20 * dVar2;
          dVar22 = dVar19 * dVar2 - dVar16 * dVar17;
          dVar4 = dVar4 + dVar4;
          dVar22 = dVar22 + dVar22;
          dVar21 = dVar21 + dVar21;
          dVar8 = *pdVar15;
          dVar9 = pdVar15[1];
          dVar5 = dVar9 * dVar17 - dVar18 * dVar8;
          dVar6 = pdVar15[2] * dVar18 - dVar2 * dVar9;
          dVar23 = dVar8 * dVar2 - dVar17 * pdVar15[2];
          dVar6 = dVar6 + dVar6;
          dVar23 = dVar23 + dVar23;
          dVar5 = dVar5 + dVar5;
          local_178 = dVar21 * dVar3 + dVar16 + (dVar22 * dVar17 - dVar4 * dVar18);
          local_188 = (dVar21 * dVar18 - dVar22 * dVar2) + dVar3 * dVar4 + dVar19;
          dStack_180 = dVar7 * dVar21 + dVar2 * dVar4 + dVar3 * dVar22 + dVar20;
          local_1e8[2] = dVar5 * dVar3 + pdVar15[2] + (dVar23 * dVar17 - dVar6 * dVar18);
          local_1e8[0] = (dVar5 * dVar18 - dVar23 * dVar2) + dVar3 * dVar6 + dVar8;
          local_1e8[1] = dVar7 * dVar5 + dVar2 * dVar6 + dVar3 * dVar23 + dVar9;
          local_1f8 = 0x3ff0000000000000;
          uVar11 = (**(code **)(**(longlong **)((longlong)param_3 + 0x10) + 0xa8))
                             (*(longlong **)((longlong)param_3 + 0x10),&local_188,local_1e8,
                              *(undefined4 *)(lVar13 + 0x10));
          *(undefined4 *)(param_1[8] + 0x10) = uVar11;
        }
        uVar12 = FUN_146e202c6(*puVar1,param_2);
        *(undefined8 *)param_1[8] = uVar12;
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fb991 FUN_1479fb991 body=373 status=ok
// SIG undefined FUN_1479fb991(void)

void FUN_1479fb991(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_1479fba22_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_1479fba22_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_1479fb9e8_caseD_82;
  case 3:
switchD_1479fba22_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_1479fb991(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_1479fba22_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_1479fba22_caseD_0;
    case 0x41:
      goto switchD_1479fba22_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_1479fba22_caseD_3;
    case 0x48:
      goto switchD_1479fba22_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_1479fb9e8_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1479fbbcc(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 1479fbbcc FUN_1479fbbcc body=196 status=ok
// SIG undefined FUN_1479fbbcc(void)

void FUN_1479fbbcc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_144852885(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fbc92 FUN_1479fbc92 body=196 status=ok
// SIG undefined FUN_1479fbc92(void)

void FUN_1479fbc92(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_140913240(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fbd58 FUN_1479fbd58 body=196 status=ok
// SIG undefined FUN_1479fbd58(void)

void FUN_1479fbd58(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_14496e94c(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fbe1e FUN_1479fbe1e body=196 status=ok
// SIG undefined FUN_1479fbe1e(void)

void FUN_1479fbe1e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_1411e80d4(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fbee4 FUN_1479fbee4 body=196 status=ok
// SIG undefined FUN_1479fbee4(void)

void FUN_1479fbee4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_146d7b150(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fbfaa FUN_1479fbfaa body=196 status=ok
// SIG undefined FUN_1479fbfaa(void)

void FUN_1479fbfaa(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_146d7d1dc(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fc070 FUN_1479fc070 body=196 status=ok
// SIG undefined FUN_1479fc070(void)

void FUN_1479fc070(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_146d7ef54(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fc136 FUN_1479fc136 body=196 status=ok
// SIG undefined FUN_1479fc136(void)

void FUN_1479fc136(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_98 [12];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(undefined1 *)(param_1[9] + 1);
  local_b8 = param_1[8];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_d8 = (undefined4)param_1[4];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_d0 = (undefined4)param_1[5];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e0 = param_1[3];
  puVar1 = (undefined4 *)param_1[2];
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  local_28 = *(undefined8 *)(puVar1 + 4);
  local_e8 = &local_38;
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_b0 = 0;
  FUN_146d80fe0(*(undefined8 *)(*param_1 + 0x10),local_98,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fc1fc FUN_1479fc1fc body=16 status=ok
// SIG undefined FUN_1479fc1fc(void)

undefined8 FUN_1479fc1fc(void)

{
  FUN_1479fc25c();
  return 0;
}



// FUNCTION 1479fc232 FUN_1479fc232 body=12 status=ok
// SIG undefined FUN_1479fc232(void)

void FUN_1479fc232(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001479fc23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1479fc23e FUN_1479fc23e body=29 status=ok
// SIG undefined FUN_1479fc23e(void)

undefined8 FUN_1479fc23e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479fc25c FUN_1479fc25c body=120 status=ok
// SIG undefined FUN_1479fc25c(void)

void FUN_1479fc25c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar3 = *param_2;
  uVar6 = FUN_146e202c6(*(undefined8 *)*param_1,param_1[1]);
  plVar4 = (longlong *)param_1[2];
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1479fb4aa(plVar4,iVar2);
  }
  lVar5 = *plVar4;
  lVar7 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar5 + lVar7) = uVar6;
  *(undefined8 *)(lVar5 + 8 + lVar7) = uVar3;
  *(undefined4 *)(lVar5 + 0x10 + lVar7) = 0xffffffff;
  puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + 0x28 + lVar7) = 0;
  *(undefined4 *)(lVar5 + 0x30 + lVar7) = 0xffffffff;
  return;
}



// FUNCTION 1479fc2d4 FUN_1479fc2d4 body=62 status=ok
// SIG undefined FUN_1479fc2d4(void)

void FUN_1479fc2d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479fc312(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x108,8);
  }
  return;
}



// FUNCTION 1479fc312 FUN_1479fc312 body=118 status=ok
// SIG undefined FUN_1479fc312(void)

ulonglong FUN_1479fc312(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x108) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479fc34f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x108,8);
      param_2 = param_2 / 0x108;
    }
  }
LAB_1479fc34f:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479fc388 FUN_1479fc388 body=63 status=ok
// SIG undefined FUN_1479fc388(void)

void FUN_1479fc388(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479fc3c8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1479fc3c8 FUN_1479fc3c8 body=97 status=ok
// SIG undefined FUN_1479fc3c8(void)

ulonglong FUN_1479fc3c8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1479fc42a FUN_1479fc42a body=188 status=ok
// SIG undefined FUN_1479fc42a(void)

void FUN_1479fc42a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140e402be(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1479fc4e6 FUN_1479fc4e6 body=98 status=ok
// SIG undefined FUN_1479fc4e6(void)

void FUN_1479fc4e6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1479fc548 FUN_1479fc548 body=52 status=ok
// SIG undefined FUN_1479fc548(void)

void FUN_1479fc548(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479fc57c(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_140717da4(param_1,*(undefined4 *)(param_1 + 0x48),iVar1);
  return;
}



// FUNCTION 1479fc57c FUN_1479fc57c body=108 status=ok
// SIG undefined FUN_1479fc57c(void)

ulonglong FUN_1479fc57c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1479fc5e8 FUN_1479fc5e8 body=266 status=ok
// SIG undefined FUN_1479fc5e8(void)

undefined8 * FUN_1479fc5e8(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fc60c;
  FUN_1479fc6f4(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a0,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fc60c;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fc6b0:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fc6b0;
      }
    }
  }
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
LAB_1479fc60c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fc6f4 FUN_1479fc6f4 body=120 status=ok
// SIG undefined FUN_1479fc6f4(void)

undefined8 * FUN_1479fc6f4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e88) {
    FUN_144b3d300(&DAT_14cad1e88);
    if (DAT_14cad1e88 == -1) {
      FUN_1446ddc76(&DAT_14cad1e80,"OnEndCursorOver",1);
      _Init_thread_footer(&DAT_14cad1e88);
    }
  }
  *param_1 = DAT_14cad1e80;
  return param_1;
}



// FUNCTION 1479fc76c FUN_1479fc76c body=266 status=ok
// SIG undefined FUN_1479fc76c(void)

undefined8 * FUN_1479fc76c(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fc790;
  FUN_1479fc878(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x206,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fc790;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fc834:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fc834;
      }
    }
  }
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
LAB_1479fc790:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fc878 FUN_1479fc878 body=120 status=ok
// SIG undefined FUN_1479fc878(void)

undefined8 * FUN_1479fc878(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e98) {
    FUN_144b3d300(&DAT_14cad1e98);
    if (DAT_14cad1e98 == -1) {
      FUN_1446ddc76(&DAT_14cad1e90,"OnEndCursorOver",1);
      _Init_thread_footer(&DAT_14cad1e98);
    }
  }
  *param_1 = DAT_14cad1e90;
  return param_1;
}



// FUNCTION 1479fc8f0 FUN_1479fc8f0 body=266 status=ok
// SIG undefined FUN_1479fc8f0(void)

undefined8 * FUN_1479fc8f0(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fc914;
  FUN_1479fc9fc(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x205,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fc914;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fc9b8:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fc9b8;
      }
    }
  }
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
LAB_1479fc914:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fc9fc FUN_1479fc9fc body=120 status=ok
// SIG undefined FUN_1479fc9fc(void)

undefined8 * FUN_1479fc9fc(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1ea8) {
    FUN_144b3d300(&DAT_14cad1ea8);
    if (DAT_14cad1ea8 == -1) {
      FUN_1446ddc76(&DAT_14cad1ea0,"OnBeginCursorOver",1);
      _Init_thread_footer(&DAT_14cad1ea8);
    }
  }
  *param_1 = DAT_14cad1ea0;
  return param_1;
}



// FUNCTION 1479fca74 FUN_1479fca74 body=266 status=ok
// SIG undefined FUN_1479fca74(void)

undefined8 * FUN_1479fca74(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fca98;
  FUN_1479fcb80(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x59f,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fca98;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fcb3c:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fcb3c;
      }
    }
  }
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
LAB_1479fca98:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fcb80 FUN_1479fcb80 body=120 status=ok
// SIG undefined FUN_1479fcb80(void)

undefined8 * FUN_1479fcb80(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1eb8) {
    FUN_144b3d300(&DAT_14cad1eb8);
    if (DAT_14cad1eb8 == -1) {
      FUN_1446ddc76(&DAT_14cad1eb0,"OnBeginCursorOver",1);
      _Init_thread_footer(&DAT_14cad1eb8);
    }
  }
  *param_1 = DAT_14cad1eb0;
  return param_1;
}



// FUNCTION 1479fcbf8 FUN_1479fcbf8 body=266 status=ok
// SIG undefined FUN_1479fcbf8(void)

undefined8 * FUN_1479fcbf8(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fcc1c;
  FUN_1479fcd04(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a6,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fcc1c;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fccc0:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fccc0;
      }
    }
  }
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
LAB_1479fcc1c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fcd04 FUN_1479fcd04 body=120 status=ok
// SIG undefined FUN_1479fcd04(void)

undefined8 * FUN_1479fcd04(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1ec8) {
    FUN_144b3d300(&DAT_14cad1ec8);
    if (DAT_14cad1ec8 == -1) {
      FUN_1446ddc76(&DAT_14cad1ec0,"OnInputTouchLeave",1);
      _Init_thread_footer(&DAT_14cad1ec8);
    }
  }
  *param_1 = DAT_14cad1ec0;
  return param_1;
}



// FUNCTION 1479fcd7c FUN_1479fcd7c body=266 status=ok
// SIG undefined FUN_1479fcd7c(void)

undefined8 * FUN_1479fcd7c(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fcda0;
  FUN_1479fce88(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x20c,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fcda0;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fce44:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fce44;
      }
    }
  }
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
LAB_1479fcda0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fce88 FUN_1479fce88 body=120 status=ok
// SIG undefined FUN_1479fce88(void)

undefined8 * FUN_1479fce88(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1ed8) {
    FUN_144b3d300(&DAT_14cad1ed8);
    if (DAT_14cad1ed8 == -1) {
      FUN_1446ddc76(&DAT_14cad1ed0,"OnInputTouchLeave",1);
      _Init_thread_footer(&DAT_14cad1ed8);
    }
  }
  *param_1 = DAT_14cad1ed0;
  return param_1;
}



// FUNCTION 1479fcf00 FUN_1479fcf00 body=266 status=ok
// SIG undefined FUN_1479fcf00(void)

undefined8 * FUN_1479fcf00(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fcf24;
  FUN_1479fd00c(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x20b,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fcf24;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fcfc8:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fcfc8;
      }
    }
  }
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
LAB_1479fcf24:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd00c FUN_1479fd00c body=120 status=ok
// SIG undefined FUN_1479fd00c(void)

undefined8 * FUN_1479fd00c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1ee8) {
    FUN_144b3d300(&DAT_14cad1ee8);
    if (DAT_14cad1ee8 == -1) {
      FUN_1446ddc76(&DAT_14cad1ee0,"OnInputTouchEnter",1);
      _Init_thread_footer(&DAT_14cad1ee8);
    }
  }
  *param_1 = DAT_14cad1ee0;
  return param_1;
}



// FUNCTION 1479fd084 FUN_1479fd084 body=266 status=ok
// SIG undefined FUN_1479fd084(void)

undefined8 * FUN_1479fd084(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fd0a8;
  FUN_1479fd190(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a5,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fd0a8;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fd14c:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fd14c;
      }
    }
  }
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
LAB_1479fd0a8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd190 FUN_1479fd190 body=120 status=ok
// SIG undefined FUN_1479fd190(void)

undefined8 * FUN_1479fd190(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1ef8) {
    FUN_144b3d300(&DAT_14cad1ef8);
    if (DAT_14cad1ef8 == -1) {
      FUN_1446ddc76(&DAT_14cad1ef0,"OnInputTouchEnter",1);
      _Init_thread_footer(&DAT_14cad1ef8);
    }
  }
  *param_1 = DAT_14cad1ef0;
  return param_1;
}



// FUNCTION 1479fd208 FUN_1479fd208 body=266 status=ok
// SIG undefined FUN_1479fd208(void)

undefined8 * FUN_1479fd208(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fd22c;
  FUN_1479fd39c(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x207,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fd22c;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fd2d0:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fd2d0;
      }
    }
  }
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
LAB_1479fd22c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd314 FUN_1479fd314 body=134 status=ok
// SIG undefined FUN_1479fd314(void)

void FUN_1479fd314(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = param_3[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1478ba702(param_1,param_2,&local_28);
  plVar3 = (longlong *)param_3[2];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd39c FUN_1479fd39c body=120 status=ok
// SIG undefined FUN_1479fd39c(void)

undefined8 * FUN_1479fd39c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f08) {
    FUN_144b3d300(&DAT_14cad1f08);
    if (DAT_14cad1f08 == -1) {
      FUN_1446ddc76(&DAT_14cad1f00,"OnClicked",1);
      _Init_thread_footer(&DAT_14cad1f08);
    }
  }
  *param_1 = DAT_14cad1f00;
  return param_1;
}



// FUNCTION 1479fd414 FUN_1479fd414 body=266 status=ok
// SIG undefined FUN_1479fd414(void)

undefined8 * FUN_1479fd414(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fd438;
  FUN_1479fd5a8(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a1,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fd438;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fd4dc:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fd4dc;
      }
    }
  }
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
LAB_1479fd438:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd520 FUN_1479fd520 body=134 status=ok
// SIG undefined FUN_1479fd520(void)

void FUN_1479fd520(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = param_3[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_147890402(param_1,param_2,&local_28);
  plVar3 = (longlong *)param_3[2];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd5a8 FUN_1479fd5a8 body=120 status=ok
// SIG undefined FUN_1479fd5a8(void)

undefined8 * FUN_1479fd5a8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f18) {
    FUN_144b3d300(&DAT_14cad1f18);
    if (DAT_14cad1f18 == -1) {
      FUN_1446ddc76(&DAT_14cad1f10,"OnClicked",1);
      _Init_thread_footer(&DAT_14cad1f18);
    }
  }
  *param_1 = DAT_14cad1f10;
  return param_1;
}



// FUNCTION 1479fd620 FUN_1479fd620 body=266 status=ok
// SIG undefined FUN_1479fd620(void)

undefined8 * FUN_1479fd620(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fd644;
  FUN_1479fd7b4(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x208,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fd644;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fd6e8:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fd6e8;
      }
    }
  }
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
LAB_1479fd644:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd72c FUN_1479fd72c body=134 status=ok
// SIG undefined FUN_1479fd72c(void)

void FUN_1479fd72c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = param_3[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1478ba800(param_1,param_2,&local_28);
  plVar3 = (longlong *)param_3[2];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd7b4 FUN_1479fd7b4 body=120 status=ok
// SIG undefined FUN_1479fd7b4(void)

undefined8 * FUN_1479fd7b4(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f28) {
    FUN_144b3d300(&DAT_14cad1f28);
    if (DAT_14cad1f28 == -1) {
      FUN_1446ddc76(&DAT_14cad1f20,"OnReleased",1);
      _Init_thread_footer(&DAT_14cad1f28);
    }
  }
  *param_1 = DAT_14cad1f20;
  return param_1;
}



// FUNCTION 1479fd82c FUN_1479fd82c body=266 status=ok
// SIG undefined FUN_1479fd82c(void)

undefined8 * FUN_1479fd82c(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fd850;
  FUN_1479fd9c0(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a2,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fd850;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fd8f4:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fd8f4;
      }
    }
  }
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
LAB_1479fd850:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd938 FUN_1479fd938 body=134 status=ok
// SIG undefined FUN_1479fd938(void)

void FUN_1479fd938(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  local_18 = param_3[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_147890500(param_1,param_2,&local_28);
  plVar3 = (longlong *)param_3[2];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fd9c0 FUN_1479fd9c0 body=120 status=ok
// SIG undefined FUN_1479fd9c0(void)

undefined8 * FUN_1479fd9c0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f38) {
    FUN_144b3d300(&DAT_14cad1f38);
    if (DAT_14cad1f38 == -1) {
      FUN_1446ddc76(&DAT_14cad1f30,"OnReleased",1);
      _Init_thread_footer(&DAT_14cad1f38);
    }
  }
  *param_1 = DAT_14cad1f30;
  return param_1;
}



// FUNCTION 1479fda38 FUN_1479fda38 body=266 status=ok
// SIG undefined FUN_1479fda38(void)

undefined8 * FUN_1479fda38(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fda5c;
  FUN_1479fdb44(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x209,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fda5c;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fdb00:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fdb00;
      }
    }
  }
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
LAB_1479fda5c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fdb44 FUN_1479fdb44 body=120 status=ok
// SIG undefined FUN_1479fdb44(void)

undefined8 * FUN_1479fdb44(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f48) {
    FUN_144b3d300(&DAT_14cad1f48);
    if (DAT_14cad1f48 == -1) {
      FUN_1446ddc76(&DAT_14cad1f40,"OnInputTouchBegin",1);
      _Init_thread_footer(&DAT_14cad1f48);
    }
  }
  *param_1 = DAT_14cad1f40;
  return param_1;
}



// FUNCTION 1479fdbbc FUN_1479fdbbc body=266 status=ok
// SIG undefined FUN_1479fdbbc(void)

undefined8 * FUN_1479fdbbc(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fdbe0;
  FUN_1479fdcc8(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a3,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fdbe0;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fdc84:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fdc84;
      }
    }
  }
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
LAB_1479fdbe0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fdcc8 FUN_1479fdcc8 body=120 status=ok
// SIG undefined FUN_1479fdcc8(void)

undefined8 * FUN_1479fdcc8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f58) {
    FUN_144b3d300(&DAT_14cad1f58);
    if (DAT_14cad1f58 == -1) {
      FUN_1446ddc76(&DAT_14cad1f50,"OnInputTouchBegin",1);
      _Init_thread_footer(&DAT_14cad1f58);
    }
  }
  *param_1 = DAT_14cad1f50;
  return param_1;
}



// FUNCTION 1479fdd40 FUN_1479fdd40 body=266 status=ok
// SIG undefined FUN_1479fdd40(void)

undefined8 * FUN_1479fdd40(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fdd64;
  FUN_1479fde4c(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x20a,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fdd64;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fde08:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fde08;
      }
    }
  }
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
LAB_1479fdd64:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fde4c FUN_1479fde4c body=120 status=ok
// SIG undefined FUN_1479fde4c(void)

undefined8 * FUN_1479fde4c(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f68) {
    FUN_144b3d300(&DAT_14cad1f68);
    if (DAT_14cad1f68 == -1) {
      FUN_1446ddc76(&DAT_14cad1f60,"OnInputTouchEnd",1);
      _Init_thread_footer(&DAT_14cad1f68);
    }
  }
  *param_1 = DAT_14cad1f60;
  return param_1;
}



// FUNCTION 1479fdec4 FUN_1479fdec4 body=266 status=ok
// SIG undefined FUN_1479fdec4(void)

undefined8 * FUN_1479fdec4(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_1479fdee8;
  FUN_1479fdfd0(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x5a4,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1479fdee8;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x0001479fdf8c:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x0001479fdf8c;
      }
    }
  }
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
LAB_1479fdee8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fdfd0 FUN_1479fdfd0 body=120 status=ok
// SIG undefined FUN_1479fdfd0(void)

undefined8 * FUN_1479fdfd0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1f78) {
    FUN_144b3d300(&DAT_14cad1f78);
    if (DAT_14cad1f78 == -1) {
      FUN_1446ddc76(&DAT_14cad1f70,"OnInputTouchEnd",1);
      _Init_thread_footer(&DAT_14cad1f78);
    }
  }
  *param_1 = DAT_14cad1f70;
  return param_1;
}



// FUNCTION 1479fe048 FUN_1479fe048 body=22 status=ok
// SIG undefined FUN_1479fe048(void)

void FUN_1479fe048(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x48);
    return;
  }
  return;
}



// FUNCTION 1479fe05e FUN_1479fe05e body=244 status=ok
// SIG undefined FUN_1479fe05e(void)

void FUN_1479fe05e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))
                              (plVar2,param_2,param_3,param_4,param_5,param_6,param_7),
           cVar4 != '\0'))) {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1479fe124;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479fe124:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479fe152 FUN_1479fe152 body=209 status=ok
// SIG undefined FUN_1479fe152(void)

void FUN_1479fe152(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_1479fe1f5;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479fe1f5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479fe224 FUN_1479fe224 body=95 status=ok
// SIG undefined FUN_1479fe224(void)

void FUN_1479fe224(undefined8 param_1,void *param_2)

{
  undefined1 auStack_138 [32];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memcpy(local_118,param_2,0x100);
  FUN_1447cd2ec(param_1,local_118);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fe302 FUN_1479fe302 body=195 status=ok
// SIG undefined FUN_1479fe302(void)

void FUN_1479fe302(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  FUN_1401149ea(param_1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fe3c6 FUN_1479fe3c6 body=268 status=ok
// SIG undefined FUN_1479fe3c6(void)

void FUN_1479fe3c6(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_40;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5a8))(param_1,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fe4ee FUN_1479fe4ee body=160 status=ok
// SIG undefined FUN_1479fe4ee(void)

void FUN_1479fe4ee(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x5a0))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fe590 FUN_1479fe590 body=221 status=ok
// SIG undefined FUN_1479fe590(void)

void FUN_1479fe590(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  puVar1 = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x590))(param_1,puVar1);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fe6ea FUN_1479fe6ea body=127 status=ok
// SIG undefined FUN_1479fe6ea(void)

void FUN_1479fe6ea(longlong param_1)

{
  float fVar1;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1463b95b4();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x102) {
    fVar1 = 1.0 - *(float *)(param_1 + 0x1b0);
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0x1b4) = fVar1;
    *(byte *)(param_1 + 0x180) = *(byte *)(param_1 + 0x180) & 0xf7;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fe76a FUN_1479fe76a body=232 status=ok
// SIG undefined FUN_1479fe76a(void)

double * FUN_1479fe76a(longlong param_1,double *param_2)

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
  
  lVar2 = FUN_14479d2ce(param_1 + 0x1e4);
  lVar1 = *(longlong *)(param_1 + 0x110);
  dVar3 = *(double *)(lVar2 + 0x270) - *(double *)(lVar1 + 0x270);
  dVar5 = *(double *)(lVar2 + 0x260) - *(double *)(lVar1 + 0x260);
  dVar7 = *(double *)(lVar2 + 0x268) - *(double *)(lVar1 + 0x268);
  dVar9 = dVar3 * dVar3 + dVar5 * dVar5 + dVar7 * dVar7;
  if (((dVar9 != 1.0) || (dVar4 = dVar3, dVar6 = dVar5, dVar8 = dVar7, NAN(dVar9))) &&
     (dVar4 = DAT_14c8464f0, dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / SQRT(dVar9);
    dVar4 = dVar3 * dVar9;
    dVar6 = dVar5 * dVar9;
    dVar8 = dVar7 * dVar9;
  }
  dVar3 = (double)*(float *)(param_1 + 0x1e0);
  *param_2 = dVar6 * dVar3;
  param_2[1] = dVar8 * dVar3;
  param_2[2] = dVar4 * dVar3;
  return param_2;
}



// FUNCTION 1479fe852 FUN_1479fe852 body=556 status=ok
// SIG undefined FUN_1479fe852(void)

double * FUN_1479fe852(longlong *param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[2] = (double)param_1[0x27];
  dVar1 = (double)param_1[0x26];
  *param_2 = (double)param_1[0x25];
  param_2[1] = dVar1;
  local_88 = *(undefined4 *)(param_3 + 0x40);
  uStack_84 = *(undefined4 *)(param_3 + 0x44);
  uStack_80 = *(undefined4 *)(param_3 + 0x48);
  uStack_7c = *(undefined4 *)(param_3 + 0x4c);
  local_78 = *(undefined8 *)(param_3 + 0x50);
  (**(code **)(*param_1 + 0x560))(param_1,&local_68,&local_88);
  fVar7 = (float)(param_2[2] * local_58 + *param_2 * local_68 + param_2[1] * local_60);
  if (fVar7 <= 0.0) {
    dVar2 = (double)-fVar7;
    dVar1 = *param_2 + local_68 * dVar2;
    dVar5 = param_2[1] + local_60 * dVar2;
    dVar6 = param_2[2] + local_58 * dVar2;
    if ((*(byte *)((longlong)param_1 + 0x181) & 3) == 0) {
      fVar7 = *(float *)((longlong)param_1 + 0x1b4);
    }
    else {
      dVar3 = dVar2 / SQRT(dVar6 * dVar6 + dVar1 * dVar1 + dVar5 * dVar5);
      if (1.0 <= dVar3) {
        dVar3 = 1.0;
      }
      if (dVar3 <= (double)*(float *)((longlong)param_1 + 0x1bc)) {
        dVar3 = (double)*(float *)((longlong)param_1 + 0x1bc);
      }
      fVar7 = (float)((double)*(float *)((longlong)param_1 + 0x1b4) * dVar3);
    }
    fVar7 = 1.0 - fVar7;
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar3 = (double)fVar7;
    fVar7 = *(float *)(param_1 + 0x36);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar4 = (double)fVar7;
    *param_2 = local_68 * dVar2 * dVar4 + dVar1 * dVar3;
    param_2[1] = local_60 * dVar2 * dVar4 + dVar5 * dVar3;
    param_2[2] = local_58 * dVar2 * dVar4 + dVar6 * dVar3;
    local_a8 = *(undefined4 *)param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = *(undefined4 *)(param_2 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_98 = param_2[2];
    FUN_1401149ea(param_1,param_2);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fea80 FUN_1479fea80 body=373 status=ok
// SIG undefined FUN_1479fea80(void)

void FUN_1479fea80(longlong *param_1,void *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  longlong local_140;
  longlong lStack_138;
  longlong local_130;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    local_148 = param_1[0x27];
    local_158 = (undefined4)param_1[0x25];
    uStack_154 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_150 = (undefined4)param_1[0x26];
    uStack_14c = *(undefined4 *)((longlong)param_1 + 0x134);
    local_188 = param_4;
    (**(code **)(*param_1 + 0x5e0))(param_1,&local_140,param_2,param_3);
    param_1[0x27] = local_130;
    param_1[0x25] = local_140;
    param_1[0x26] = lStack_138;
    memcpy(&local_140,param_2,0x100);
    local_40 = local_158;
    uStack_3c = uStack_154;
    uStack_38 = uStack_150;
    uStack_34 = uStack_14c;
    local_30 = local_148;
    FUN_1447cd2ec(param_1 + 0x38,&local_140);
    local_178 = (undefined4)param_1[0x25];
    uStack_174 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_170 = (undefined4)param_1[0x26];
    uStack_16c = *(undefined4 *)((longlong)param_1 + 0x134);
    local_168 = param_1[0x27];
    FUN_1401149ea(param_1,&local_140);
    param_1[0x27] = local_130;
    param_1[0x25] = local_140;
    param_1[0x26] = lStack_138;
    if ((double)(*(float *)(param_1 + 0x37) * *(float *)(param_1 + 0x37)) <=
        (double)param_1[0x27] * (double)param_1[0x27] +
        (double)param_1[0x25] * (double)param_1[0x25] +
        (double)param_1[0x26] * (double)param_1[0x26]) goto LAB_1479febcf;
  }
  (**(code **)(*param_1 + 0x590))(param_1,param_2);
LAB_1479febcf:
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479febf6 FUN_1479febf6 body=423 status=ok
// SIG undefined FUN_1479febf6(void)

void FUN_1479febf6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_14479d2ce(param_1 + 0x4c);
  if (lVar7 != param_2) {
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x5b0))(param_1);
      param_1[0x4c] = 0;
      lVar7 = DAT_14c8464e8;
      param_1[0x49] = DAT_14c8464e0;
      param_1[0x4a] = lVar7;
      param_1[0x4b] = DAT_14c8464f0;
      lVar7 = DAT_14c8463d8;
      param_1[0x52] = DAT_14c8463d0;
      param_1[0x53] = lVar7;
      uVar4 = DAT_14c8463e8._4_4_;
      uVar3 = (undefined4)DAT_14c8463e8;
      uVar2 = DAT_14c8463e0._4_4_;
      *(undefined4 *)(param_1 + 0x54) = (undefined4)DAT_14c8463e0;
      *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar2;
      *(undefined4 *)(param_1 + 0x55) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar4;
      *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 0x20;
      if (((*(byte *)(param_1 + 0x2e) & 2) != 0) && (param_1[0x22] == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
      }
    }
    else if (param_1[0x22] != param_2) {
      (**(code **)(*param_1 + 0x5b0))(param_1);
      FUN_14485c47a(param_1 + 0x4c,param_2);
      lVar7 = *(longlong *)(param_2 + 0x198);
      lVar1 = *(longlong *)(param_2 + 0x1a0);
      param_1[0x4b] = *(longlong *)(param_2 + 0x1a8);
      param_1[0x49] = lVar7;
      param_1[0x4a] = lVar1;
      local_58 = *(undefined8 *)(param_2 + 0x1c0);
      local_68 = *(undefined4 *)(param_2 + 0x1b0);
      uStack_64 = *(undefined4 *)(param_2 + 0x1b4);
      uStack_60 = *(undefined4 *)(param_2 + 0x1b8);
      uStack_5c = *(undefined4 *)(param_2 + 0x1bc);
      FUN_144a7484c(&local_68,&local_48);
      *(undefined4 *)(param_1 + 0x54) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x2a4) = uStack_34;
      *(undefined4 *)(param_1 + 0x55) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x2ac) = uStack_2c;
      *(undefined4 *)(param_1 + 0x52) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x294) = uStack_44;
      *(undefined4 *)(param_1 + 0x53) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x29c) = uStack_3c;
      *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 0x20;
      iVar8 = (int)param_1[0x42];
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      else {
        uVar5 = rand();
        iVar6 = (int)((float)(iVar8 + 1) * ((float)(uVar5 & 0x7fff) / 32767.0));
        if (iVar6 < iVar8) {
          iVar8 = iVar6;
        }
      }
      *(int *)((longlong)param_1 + 0x184) = iVar8;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479fedb2 FUN_1479fedb2 body=1318 status=ok
// SIG undefined FUN_1479fedb2(void)

void FUN_1479fedb2(longlong *param_1,double *param_2,undefined8 *param_3)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = param_1[0x22];
  if (lVar9 != 0) {
    if ((*(byte *)((longlong)param_1 + 0x181) & 4) != 0) {
      lVar9 = FUN_14479d2ce(param_1 + 0x4c);
      if (lVar9 != 0) {
        local_88 = *(undefined8 *)(lVar9 + 0x1c0);
        local_98 = *(undefined4 *)(lVar9 + 0x1b0);
        uStack_94 = *(undefined4 *)(lVar9 + 0x1b4);
        uStack_90 = *(undefined4 *)(lVar9 + 0x1b8);
        uStack_8c = *(undefined4 *)(lVar9 + 0x1bc);
        FUN_140835e9a(local_a8,lVar9);
        lVar2 = param_1[0x22];
        dVar14 = *(double *)(lVar2 + 0x270) - param_2[2];
        dVar18 = *(double *)(lVar2 + 0x268) - param_2[1];
        dVar17 = *(double *)(lVar2 + 0x260) - *param_2;
        dVar3 = (double)param_1[0x46] + dVar17;
        param_1[0x46] = (longlong)dVar3;
        dVar10 = (double)param_1[0x47] + dVar18;
        param_1[0x47] = (longlong)dVar10;
        dVar11 = (double)param_1[0x48] + dVar14;
        param_1[0x48] = (longlong)dVar11;
        if (dVar14 * dVar14 + dVar17 * dVar17 + dVar18 * dVar18 <=
            (double)(*(float *)((longlong)param_1 + 0x204) * *(float *)((longlong)param_1 + 0x204)))
        {
          dVar18 = dVar11 * dVar11 + dVar3 * dVar3 + dVar10 * dVar10;
          fVar1 = *(float *)(param_1 + 0x40);
          if ((double)(fVar1 * fVar1) < dVar18) {
            if ((dVar18 != 1.0) || (NAN(dVar18))) {
              if (9.99999993922529e-09 <= dVar18) {
                dVar18 = 1.0 / SQRT(dVar18);
                dVar11 = dVar11 * dVar18;
                dVar10 = dVar10 * dVar18;
                dVar3 = dVar3 * dVar18;
              }
              else {
                dVar3 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                dVar10 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                dVar11 = DAT_14c8464f0;
              }
            }
            dVar18 = (double)fVar1;
            param_1[0x46] = (longlong)(dVar3 * dVar18);
            param_1[0x47] = (longlong)(dVar10 * dVar18);
            param_1[0x48] = (longlong)(dVar11 * dVar18);
          }
        }
        else {
          param_1[0x48] = (longlong)DAT_14c8464f0;
          uVar8 = DAT_14c8464e8._4_4_;
          uVar7 = (undefined4)DAT_14c8464e8;
          uVar6 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(param_1 + 0x46) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)param_1 + 0x234) = uVar6;
          *(undefined4 *)(param_1 + 0x47) = uVar7;
          *(undefined4 *)((longlong)param_1 + 0x23c) = uVar8;
        }
        if ((*(byte *)((longlong)param_1 + 0x181) & 8) == 0) {
          *(byte *)(lVar9 + 0x1f8) = *(byte *)(lVar9 + 0x1f8) & 0xf7;
          FUN_144a62f0c(lVar9,*(undefined8 *)(lVar9 + 0x38),9);
          FUN_144a62f0c(lVar9,*(undefined8 *)(lVar9 + 0x38),6);
          *(undefined8 *)(lVar9 + 0x1c0) = local_88;
          *(ulonglong *)(lVar9 + 0x1b0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar9 + 0x1b8) = CONCAT44(uStack_8c,uStack_90);
          lVar9 = DAT_14c8463e8;
          param_1[0x50] = DAT_14c8463e0;
          param_1[0x51] = lVar9;
          lVar9 = DAT_14c8463d8;
          param_1[0x4e] = DAT_14c8463d0;
          param_1[0x4f] = lVar9;
        }
        else {
          dVar3 = *(double *)(lVar2 + 0x240);
          dVar18 = *(double *)(lVar2 + 0x248);
          dVar10 = *(double *)(lVar2 + 0x250);
          dVar11 = *(double *)(lVar2 + 600);
          FUN_144a7484c(param_3,&local_c8);
          local_b8 = local_b8 * -1.0;
          dStack_b0 = dStack_b0 * 1.0;
          dVar12 = dVar18 * local_b8 * -1.0 +
                   ((dVar3 * dStack_b0 - dVar11 * local_c8 * 1.0) - dVar10 * local_c0);
          dVar13 = dVar3 * local_b8 * 1.0 +
                   ((dVar18 * dStack_b0 - dVar10 * local_c8 * -1.0) - dVar11 * local_c0);
          dVar15 = dVar11 * local_b8 * 1.0 +
                   dVar3 * local_c0 + (dStack_b0 * dVar10 - local_c8 * dVar18 * 1.0);
          dVar16 = dVar10 * local_b8 * -1.0 +
                   dVar18 * local_c0 + (dStack_b0 * dVar11 - local_c8 * dVar3 * -1.0);
          dVar10 = (double)param_1[0x4e];
          dVar11 = (double)param_1[0x4f];
          dVar14 = (double)param_1[0x50];
          dVar17 = (double)param_1[0x51];
          dVar3 = dVar10 * dVar15 * 1.0 + dVar17 * dVar13 + dVar14 * dVar12 * -1.0 + dVar11 * dVar16
          ;
          dVar18 = dVar14 * dVar15 * -1.0 +
                   ((dVar12 * dVar10 * -1.0 + dVar16 * dVar17) - dVar13 * dVar11);
          auVar4._8_4_ = SUB84(dVar3,0);
          auVar4._0_8_ = dVar11 * dVar15 * -1.0 +
                         dVar14 * dVar13 + dVar17 * dVar12 * 1.0 + dVar10 * dVar16;
          auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x4e) = auVar4;
          auVar5._8_4_ = SUB84(dVar18,0);
          auVar5._0_8_ = dVar17 * dVar15 * 1.0 +
                         ((dVar12 * dVar11 * 1.0 + dVar16 * dVar14) - dVar13 * dVar10);
          auVar5._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x50) = auVar5;
        }
        local_d8 = param_3[2];
        local_e8 = *param_3;
        uStack_e0 = param_3[1];
        local_108 = *(undefined4 *)param_2;
        uStack_104 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_100 = *(undefined4 *)(param_2 + 1);
        uStack_fc = *(undefined4 *)((longlong)param_2 + 0xc);
        local_f8 = param_2[2];
        local_150 = 0;
        local_158 = 0;
        FUN_1401ca0e6(param_1[0x22],&local_108,&local_e8,0);
        *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) & 0xdf;
        FUN_1408360e2(local_a8);
        goto LAB_1479fee61;
      }
      (**(code **)(*param_1 + 0x5b0))(param_1);
      *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 0x20;
      lVar9 = param_1[0x22];
    }
    local_118 = param_3[2];
    local_128 = *param_3;
    uStack_120 = param_3[1];
    local_148 = *(undefined4 *)param_2;
    uStack_144 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_140 = *(undefined4 *)(param_2 + 1);
    uStack_13c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_138 = param_2[2];
    local_150 = 0;
    local_158 = 0;
    FUN_1401ca0e6(lVar9,&local_148,&local_128,0);
  }
LAB_1479fee61:
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff2da FUN_1479ff2da body=199 status=ok
// SIG undefined FUN_1479ff2da(void)

void FUN_1479ff2da(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14479d2ce(param_1 + 0x260);
  if (lVar5 != 0) {
    local_18 = *(undefined8 *)(param_1 + 600);
    local_28 = *(undefined4 *)(param_1 + 0x248);
    uStack_24 = *(undefined4 *)(param_1 + 0x24c);
    uStack_20 = *(undefined4 *)(param_1 + 0x250);
    uStack_1c = *(undefined4 *)(param_1 + 0x254);
    local_30 = 0;
    local_38 = 0;
    FUN_144927ad4(lVar5,&local_28,param_1 + 0x290,0);
  }
  *(undefined8 *)(param_1 + 0x240) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x230) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  uVar1 = DAT_14c8463d8;
  *(undefined8 *)(param_1 + 0x270) = DAT_14c8463d0;
  *(undefined8 *)(param_1 + 0x278) = uVar1;
  uVar4 = DAT_14c8463e8._4_4_;
  uVar3 = (undefined4)DAT_14c8463e8;
  uVar2 = DAT_14c8463e0._4_4_;
  *(undefined4 *)(param_1 + 0x280) = (undefined4)DAT_14c8463e0;
  *(undefined4 *)(param_1 + 0x284) = uVar2;
  *(undefined4 *)(param_1 + 0x288) = uVar3;
  *(undefined4 *)(param_1 + 0x28c) = uVar4;
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) | 0x20;
  *(undefined4 *)(param_1 + 0x184) = 0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff3a2 FUN_1479ff3a2 body=117 status=ok
// SIG undefined FUN_1479ff3a2(void)

undefined8 FUN_1479ff3a2(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((~*(byte *)((longlong)param_1 + 0x181) & 0x14) == 0) &&
     (iVar3 = (**(code **)(*param_1 + 0x5b8))(param_1,param_2), 0 < iVar3)) {
    iVar2 = *(int *)((longlong)param_1 + 0x184);
    iVar1 = iVar2 + 1;
    *(int *)((longlong)param_1 + 0x184) = iVar1;
    if (iVar2 < iVar3) {
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
  }
  if (0 < *(int *)((longlong)param_1 + 0x184)) {
    *(undefined4 *)((longlong)param_1 + 0x184) = 0;
    (**(code **)(*param_1 + 0x5c0))(param_1,param_2);
  }
  return 0;
}



// FUNCTION 1479ff418 FUN_1479ff418 body=90 status=ok
// SIG undefined FUN_1479ff418(void)

undefined4 FUN_1479ff418(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_3 + 0xa8);
  uVar3 = 0;
  if (lVar1 != 0) {
    cVar2 = FUN_14096f7c8(lVar1,*(undefined4 *)(param_1 + 0x208));
    if (cVar2 == '\0') {
      cVar2 = FUN_14096f7c8(lVar1,*(undefined4 *)(param_1 + 0x20c));
      if (cVar2 == '\0') {
        uVar3 = *(undefined4 *)(param_1 + 0x214);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x210);
      }
    }
  }
  return uVar3;
}



// FUNCTION 1479ff47e FUN_1479ff47e body=156 status=ok
// SIG undefined FUN_1479ff47e(void)

void FUN_1479ff47e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ff51c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff51c FUN_1479ff51c body=80 status=ok
// SIG undefined FUN_1479ff51c(void)

void FUN_1479ff51c(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x430) != param_2) ||
       (NAN(*(float *)(param_1 + 0x430)) || NAN(param_2))) {
      if (88.0 <= param_2) {
        param_2 = 88.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)(param_1 + 0x430) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ff56c FUN_1479ff56c body=156 status=ok
// SIG undefined FUN_1479ff56c(void)

void FUN_1479ff56c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ff60a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff60a FUN_1479ff60a body=73 status=ok
// SIG undefined FUN_1479ff60a(void)

void FUN_1479ff60a(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x434) != param_2) ||
       (NAN(*(float *)(param_1 + 0x434)) || NAN(param_2))) {
      if (param_2 <= 0.1) {
        param_2 = 0.1;
      }
      *(float *)(param_1 + 0x434) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ff654 FUN_1479ff654 body=156 status=ok
// SIG undefined FUN_1479ff654(void)

void FUN_1479ff654(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ff6f2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff6f2 FUN_1479ff6f2 body=65 status=ok
// SIG undefined FUN_1479ff6f2(void)

void FUN_1479ff6f2(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x42c) != param_2) ||
       (NAN(*(float *)(param_1 + 0x42c)) || NAN(param_2))) {
      *(float *)(param_1 + 0x42c) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ff734 FUN_1479ff734 body=156 status=ok
// SIG undefined FUN_1479ff734(void)

void FUN_1479ff734(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ff7d2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff7d2 FUN_1479ff7d2 body=110 status=ok
// SIG undefined FUN_1479ff7d2(void)

void FUN_1479ff7d2(longlong param_1,longlong param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(longlong *)(param_1 + 0x440) != param_2)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x440) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 1479ff840 FUN_1479ff840 body=156 status=ok
// SIG undefined FUN_1479ff840(void)

void FUN_1479ff840(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ff8de(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ff8de FUN_1479ff8de body=65 status=ok
// SIG undefined FUN_1479ff8de(void)

void FUN_1479ff8de(longlong param_1,float param_2)

{
  if ((((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) {
    if ((*(float *)(param_1 + 0x428) != param_2) ||
       (NAN(*(float *)(param_1 + 0x428)) || NAN(param_2))) {
      *(float *)(param_1 + 0x428) = param_2;
      FUN_1448215fa();
      return;
    }
  }
  return;
}



// FUNCTION 1479ff922 FUN_1479ff922 body=127 status=ok
// SIG undefined FUN_1479ff922(void)

undefined8 FUN_1479ff922(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*(char *)(param_1 + 0x418) == '\0') {
    fVar1 = *(float *)(param_1 + 0x428) * *(float *)(param_1 + 0x42c);
    if (fVar1 < 0.0) {
      fVar1 = sqrtf(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    fVar1 = (float)(~-(uint)(fVar1 == 0.0) & (uint)(fVar1 * 0.005) |
                   -(uint)(fVar1 == 0.0) & 0x3d4ccccd);
    auVar3 = ZEXT416((uint)fVar1);
    if (1.0 <= fVar1) {
      auVar3 = ZEXT416(0x3f800000);
    }
    uVar2 = auVar3._0_8_;
    if (auVar3._0_4_ <= 0.0001) {
      auVar3._0_4_ = 0x38d1b717;
      uVar2 = auVar3._0_8_;
    }
  }
  else {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}



// FUNCTION 1479ff9a6 FUN_1479ff9a6 body=91 status=ok
// SIG undefined FUN_1479ff9a6(void)

void FUN_1479ff9a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14010df0a(param_1,uVar1);
  FUN_1479ffb7a(param_1,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ffa02 FUN_1479ffa02 body=204 status=ok
// SIG undefined FUN_1479ffa02(void)

void FUN_1479ffa02(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
  }
  if (*(longlong *)(lVar2 + 0x218) == 0) {
    puVar3 = &DAT_14ca85550;
  }
  else {
    puVar3 = (ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(lVar2 + 0x218) + 8) * 2);
  }
  if ((&DAT_14ca814b8)[(ulonglong)*puVar3 * 0xf] == 1) {
    cVar1 = FUN_14743059b();
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x2f0) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((*(byte *)(param_1 + 0x1f8) & 0x20) != 0) {
    local_18 = param_1;
    FUN_145bdf792(&DAT_14cad20f8);
    *(undefined1 *)(param_1 + 0x300) = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ffadc FUN_1479ffadc body=72 status=ok
// SIG undefined FUN_1479ffadc(void)

void FUN_1479ffadc(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001479ffb17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x150))(*(longlong **)(lVar1 + 0x218),param_1);
  return;
}



// FUNCTION 1479ffb24 FUN_1479ffb24 body=84 status=ok
// SIG undefined FUN_1479ffb24(void)

void FUN_1479ffb24(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_1 + 0x2e0) = local_28;
  *(undefined4 *)(param_1 + 0x2e4) = uStack_24;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_20;
  *(undefined4 *)(param_1 + 0x2ec) = uStack_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ffb7a FUN_1479ffb7a body=1329 status=ok
// SIG undefined FUN_1479ffb7a(void)

void FUN_1479ffb7a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  int local_140;
  uint local_13c;
  undefined **local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  byte local_110;
  byte local_10f;
  byte local_10e;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_88 [3];
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39154);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e39154);
  if (iVar7 < 1) {
    if (0x11c < (int)param_2[8]) {
      puVar4 = (ulonglong *)param_2[1];
      if (puVar4[1] < *puVar4 + 4) {
        local_138 = (undefined **)((ulonglong)local_138 & 0xffffffff00000000);
        (**(code **)(*param_2 + 0x170))(param_2,&local_138,4);
        if (1 < (uint)local_138) {
          FUN_14572541c(param_2);
        }
      }
      else {
        *puVar4 = *puVar4 + 4;
      }
    }
    if (0x15d < (int)param_2[8]) {
      local_68 = 0;
      uStack_60 = 0;
      FUN_1402ac1b3(param_2);
      local_6c = 0x3f800000;
      iVar7 = FUN_1448332aa(param_2,&DAT_149e3cb60);
      if (4 < iVar7) {
        puVar4 = (ulonglong *)param_2[1];
        puVar1 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
          }
          else {
            thunk_FUN_14572512c(param_2,&local_6c);
          }
        }
        else {
          local_6c = *(undefined4 *)*puVar4;
          *puVar4 = (ulonglong)puVar1;
        }
      }
      local_70 = 0;
      puVar4 = (ulonglong *)param_2[1];
      piVar2 = (int *)*puVar4 + 1;
      if ((int *)puVar4[1] < piVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_70,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_70);
        }
      }
      else {
        local_70 = *(int *)*puVar4;
        *puVar4 = (ulonglong)piVar2;
      }
      if (((((int)local_68 == 0xc669396) && (local_68._4_4_ == -0x6347b652)) &&
          ((int)uStack_60 == -0x60bedf01)) && (uStack_60._4_4_ == 0x5812f4d3)) {
        puVar4 = (ulonglong *)param_2[1];
        puVar3 = (uint *)*puVar4 + 1;
        if ((uint *)puVar4[1] < puVar3) {
          local_138 = (undefined **)((ulonglong)local_138 & 0xffffffff00000000);
          (**(code **)(*param_2 + 0x170))(param_2,&local_138,4);
          uVar8 = (uint)local_138;
          if (1 < (uint)local_138) {
            FUN_14572541c(param_2);
            uVar8 = (uint)local_138;
          }
        }
        else {
          uVar8 = *(uint *)*puVar4;
          *puVar4 = (ulonglong)puVar3;
        }
        if (uVar8 != 0) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
          puVar9[6] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x19) = 0;
          *(undefined8 *)((longlong)puVar9 + 0x21) = 0;
          iVar7 = FUN_1448332aa(param_2,&DAT_149e3cb60);
          if (iVar7 < 2) {
            *(undefined4 *)puVar9 = 0x80;
          }
          else {
            plVar5 = (longlong *)param_2[1];
            if ((undefined4 *)plVar5[1] < (undefined4 *)*plVar5 + 1) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,puVar9,4);
              }
              else {
                thunk_FUN_14572512c(param_2,puVar9);
              }
            }
            else {
              *(undefined4 *)puVar9 = *(undefined4 *)*plVar5;
              *plVar5 = *plVar5 + 4;
            }
          }
          local_88[0] = 0;
          local_88[1] = 0;
          FUN_140077068(param_2);
          memset(&local_138,0,0x90);
          FUN_144869430(&local_138);
          local_a8 = 0;
          local_138 = &PTR_FUN_149e1e050;
          local_98 = 0x7fffffffffffffff;
          local_110 = local_110 | 1;
          local_10f = local_10f & 0xfe;
          puVar4 = (ulonglong *)CONCAT44(uStack_12c,uStack_130);
          puVar3 = (uint *)*puVar4 + 1;
          local_a0 = local_88;
          if ((uint *)puVar4[1] < puVar3) {
            if ((local_10e & 2) == 0) {
              FUN_14004e24c(&local_138,&local_13c,4);
            }
            else {
              thunk_FUN_14572512c(&local_138,&local_13c);
            }
          }
          else {
            local_13c = *(uint *)*puVar4;
            *puVar4 = (ulonglong)puVar3;
          }
          puVar4 = (ulonglong *)CONCAT44(uStack_12c,uStack_130);
          piVar2 = (int *)*puVar4 + 1;
          if ((int *)puVar4[1] < piVar2) {
            if ((local_10e & 2) == 0) {
              (*(code *)local_138[0x2e])(&local_138,&local_140,4);
            }
            else {
              thunk_FUN_14572512c(&local_138,&local_140);
            }
          }
          else {
            local_140 = *(int *)*puVar4;
            *puVar4 = (ulonglong)piVar2;
          }
          if ((int)local_13c < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(local_13c);
          }
          puVar11 = puVar9 + 1;
          *(undefined4 *)(puVar9 + 2) = 0;
          iVar7 = 0;
          uVar8 = local_13c;
          if (*(uint *)((longlong)puVar9 + 0x14) != local_13c) {
            FUN_144893a1c(puVar11);
            iVar7 = *(int *)(puVar9 + 2);
            uVar8 = *(uint *)((longlong)puVar9 + 0x14);
          }
          *(uint *)(puVar9 + 2) = local_13c + iVar7;
          if (uVar8 - iVar7 < local_13c) {
            FUN_1447403be(puVar11,iVar7);
          }
          lVar13 = (int)local_a8 + local_88[0];
          lVar10 = (longlong)local_140;
          lVar12 = (longlong)(int)local_13c;
          uVar6 = *puVar11;
          FUN_1401a700c(&local_4c,0x101);
          local_148 = 0;
          local_150 = 0;
          local_158 = lVar10;
          FUN_140aa9920(local_4c,uVar6,lVar12,lVar13);
          FUN_144a7fc42(&local_138);
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          *(undefined4 *)((longlong)puVar9 + 4) = local_6c;
          local_138 = *(undefined ***)(param_1 + 0x2e0);
          uStack_130 = *(undefined4 *)(param_1 + 0x2e8);
          uStack_12c = *(undefined4 *)(param_1 + 0x2ec);
          local_128 = puVar9;
          FUN_147a131c4(param_1);
        }
      }
      else {
        (**(code **)(*param_2 + 0x1a0))(param_2,(longlong)local_70);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a000ae FUN_147a000ae body=119 status=ok
// SIG undefined FUN_147a000ae(void)

void FUN_147a000ae(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1f8) & 0x20) != 0) {
    FUN_14282b7b8();
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 0x2e0) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x2e4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 0x2e8) = uStack_20;
    *(undefined4 *)(param_1 + 0x2ec) = uStack_1c;
    local_28 = param_1;
    FUN_145bdf792(&DAT_14cad20f8,&local_28);
    *(undefined1 *)(param_1 + 0x300) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a00126 FUN_147a00126 body=72 status=ok
// SIG undefined FUN_147a00126(void)

ulonglong FUN_147a00126(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = FUN_147cf28e2();
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (((iVar1 < 1) && (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x44))) &&
     (*(int *)(param_1 + 0xa8) <= *(int *)(param_1 + 0xd4))) {
    iVar1 = FUN_147cf28d6(param_1);
    if (iVar1 < 1) {
      uVar2 = CONCAT71(uVar3,0 < *(int *)(param_1 + 0x60));
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147a0016e FUN_147a0016e body=131 status=ok
// SIG undefined FUN_147a0016e(void)

void FUN_147a0016e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_147a13ace(param_2);
  }
  local_20 = FUN_145898b94();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_147a139ec(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a001f2 FUN_147a001f2 body=150 status=ok
// SIG undefined FUN_147a001f2(void)

void FUN_147a001f2(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(longlong *)(param_1 + 800);
  if (lVar1 != 0) {
    dVar2 = (double)*(float *)(param_1 + 0x310);
    dVar3 = (*(double *)(param_1 + 0x290) - dVar2) / *(double *)(param_1 + 0x290);
    dVar4 = (*(double *)(param_1 + 0x288) - dVar2) / *(double *)(param_1 + 0x288);
    dVar2 = (*(double *)(param_1 + 0x280) - dVar2) / *(double *)(param_1 + 0x280);
    if (dVar3 <= DAT_14c8464f0) {
      dVar3 = DAT_14c8464f0;
    }
    if (dVar4 <= DAT_14c8464e8) {
      dVar4 = DAT_14c8464e8;
    }
    if (dVar2 <= DAT_14c8464e0) {
      dVar2 = DAT_14c8464e0;
    }
    *(double *)(lVar1 + 0x640) = dVar2;
    *(double *)(lVar1 + 0x648) = dVar4;
    *(double *)(lVar1 + 0x650) = dVar3;
  }
  FUN_145ae785a();
  return;
}



// FUNCTION 147a002c0 FUN_147a002c0 body=55 status=ok
// SIG undefined FUN_147a002c0(void)

void FUN_147a002c0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[99];
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x5e0))(param_1);
    *(undefined4 *)(lVar1 + 0x640) = uVar2;
  }
  FUN_145ae785a(param_1);
  return;
}



// FUNCTION 147a00330 FUN_147a00330 body=275 status=ok
// SIG undefined FUN_147a00330(void)

void FUN_147a00330(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar4 = DAT_14ca8c078;
  }
  local_48 = *(undefined4 *)(param_1 + 0x20);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_44 = 0;
  local_38 = *(undefined8 *)(lVar4 + 0x10);
  local_30 = *(undefined8 *)(lVar4 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x10);
  local_28 = local_38;
  local_20 = local_30;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_1411eeb9e(&local_50,&local_48,2,1);
    if (plVar1 != &local_50) {
      lVar4 = *plVar1;
      *plVar1 = local_50;
      local_50 = 0;
      if (lVar4 == 0) goto LAB_147a00417;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_50 != 0) {
      LOCK();
      puVar2 = (uint *)(local_50 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_14724fee6(plVar1,local_3c,&local_48);
  }
LAB_147a00417:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a00450 FUN_147a00450 body=1271 status=ok
// SIG undefined FUN_147a00450(void)

void FUN_147a00450(longlong *param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar14 = (**(code **)(*param_1 + 0x498))();
  if (cVar14 == '\0') {
    FUN_14347b504(param_1,param_2,param_3,param_4);
    lVar4 = param_1[0x22];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
      dVar10 = *(double *)(lVar4 + 0x240);
      dVar11 = *(double *)(lVar4 + 0x248);
      dVar12 = *(double *)(lVar4 + 0x250);
      dVar13 = *(double *)(lVar4 + 600);
      dVar15 = (double)param_2;
      dStack_f0 = (double)param_1[0x30] * dVar15;
      local_f8 = dVar15 * (double)param_1[0x2f];
      local_e8._0_8_ = (double)param_1[0x31] * dVar15;
      FUN_144a7484c(&local_f8,&local_d8);
      if ((*(byte *)(param_1 + 0x35) & 1) == 0) {
        local_f8 = dVar12 * dStack_d0 + dVar13 * local_d8 * 1.0 + dVar10 * dStack_c0;
        dStack_f0 = dVar13 * dStack_d0 + dVar12 * local_d8 * -1.0 + dVar11 * dStack_c0;
        dVar15 = (local_d8 * dVar11 * 1.0 + dStack_c0 * dVar12) - dStack_d0 * dVar10;
        dVar17 = (local_d8 * dVar10 * -1.0 + dStack_c0 * dVar13) - dStack_d0 * dVar11;
        dStack_d0 = dVar11 * local_c8;
        local_d8 = dVar10 * local_c8;
        dStack_c0 = dVar13 * local_c8;
      }
      else {
        local_f8 = dVar10 * dStack_c0 * 1.0 + dVar13 * local_d8 + dVar11 * local_c8;
        dStack_f0 = dVar10 * local_c8 * -1.0 + dVar13 * dStack_d0 + dVar11 * dStack_c0;
        dVar15 = (dVar10 * dStack_d0 * 1.0 + dVar13 * local_c8) - local_d8 * dVar11;
        dVar17 = (dVar10 * local_d8 * -1.0 + dVar13 * dStack_c0) - dStack_d0 * dVar11;
        dStack_d0 = dStack_d0 * dVar12;
        local_d8 = local_d8 * dVar12;
        dStack_c0 = dStack_c0 * dVar12;
      }
      local_f8 = dStack_d0 * -1.0 + local_f8;
      dStack_f0 = local_d8 * 1.0 + dStack_f0;
      dVar15 = dStack_c0 * 1.0 + dVar15;
      dVar17 = dVar12 * local_c8 * -1.0 + dVar17;
      local_e8._8_4_ = SUB84(dVar17,0);
      local_e8._0_8_ = dVar15;
      local_e8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_108 = DAT_14c8464f0;
      local_118 = DAT_14c8464e0;
      dStack_110 = DAT_14c8464e8;
      dVar1 = (double)param_1[0x32];
      dVar2 = (double)param_1[0x33];
      dVar3 = (double)param_1[0x34];
      if ((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar2 != 0.0)) ||
         (((NAN(dVar2) || (dVar3 != 0.0)) || (NAN(dVar3))))) {
        dVar7 = dVar10 * dVar2 - dVar1 * dVar11;
        dVar8 = dVar12 * dVar1 - dVar3 * dVar10;
        dVar6 = dVar11 * dVar3 - dVar2 * dVar12;
        dVar7 = dVar7 + dVar7;
        dVar8 = dVar8 + dVar8;
        dVar6 = dVar6 + dVar6;
        dVar5 = local_f8 * dVar2 - dVar1 * dStack_f0;
        dVar16 = dVar15 * dVar1 - dVar3 * local_f8;
        dVar9 = dStack_f0 * dVar3 - dVar2 * dVar15;
        dVar5 = dVar5 + dVar5;
        dVar16 = dVar16 + dVar16;
        dVar9 = dVar9 + dVar9;
        local_108 = ((dVar10 * dVar8 - dVar6 * dVar11) + dVar13 * dVar7 + dVar3) -
                    ((local_f8 * dVar16 - dVar9 * dStack_f0) + dVar17 * dVar5 + dVar3);
        dStack_110 = ((dVar12 * dVar6 - dVar7 * dVar10) + dVar13 * dVar8 + dVar2) -
                     ((dVar15 * dVar9 - dVar5 * local_f8) + dVar17 * dVar16 + dVar2);
        local_118 = ((dVar11 * dVar7 - dVar8 * dVar12) + dVar13 * dVar6 + dVar1) -
                    ((dStack_f0 * dVar5 - dVar16 * dVar15) + dVar17 * dVar9 + dVar1);
      }
      local_120 = 0;
      local_128 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,&local_118,&local_f8,0);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a00948 FUN_147a00948 body=279 status=ok
// SIG undefined FUN_147a00948(void)

void FUN_147a00948(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_59 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x218), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x218))(plVar1,param_1,puVar2,local_59);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a00ab4 FUN_147a00ab4 body=57 status=ok
// SIG undefined FUN_147a00ab4(void)

void FUN_147a00ab4(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x2d8) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147a00aee FUN_147a00aee body=26 status=ok
// SIG undefined FUN_147a00aee(void)

void FUN_147a00aee(undefined8 param_1)

{
  FUN_147a00b08();
  FUN_1448c69c8(param_1);
  return;
}



// FUNCTION 147a00b08 FUN_147a00b08 body=4355 status=ok
// SIG undefined FUN_147a00b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a00b08(longlong *param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  double *pdVar15;
  double *pdVar16;
  longlong lVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  double local_3a8 [4];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348 [2];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  cVar8 = (char)param_3;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  FUN_14480333a(param_1,local_3a8);
  plVar14 = (longlong *)param_1[0x24];
  if (plVar14 == (longlong *)0x0) {
    pdVar15 = local_3a8;
    pdVar16 = local_348;
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar16 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar16 = pdVar16 + 1;
    }
  }
  else if ((*(byte *)(param_1 + 0x3f) & 0x1c) == 0) {
    uVar10 = (**(code **)(*plVar14 + 0x4a8))(plVar14,&local_2e8,param_1[0x25],0);
    auVar36 = _DAT_149934d80;
    local_318 = 0.0;
    dStack_310 = 0.0;
    local_328 = 0.0;
    dStack_320 = 0.0;
    dVar1 = local_2a8._0_8_;
    dVar5 = local_2a8._8_8_;
    dVar2 = local_298._0_8_;
    dVar6 = local_298._8_8_;
    dVar3 = local_368._0_8_;
    dVar23 = local_368._8_8_;
    dVar4 = local_358._0_8_;
    dVar30 = local_358._8_8_;
    auVar25 = minpd(local_368,local_2a8);
    auVar31 = minpd(local_358,local_298);
    auVar32._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar11 = movmskpd(uVar10,auVar32);
    auVar25._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    uVar12 = movmskpd((int)plVar14,auVar25);
    if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar41 = local_3a8[2] * local_2d8 * -1.0 +
               ((local_2e8 * local_3a8[0] * -1.0 + local_3a8[3] * dStack_2d0) -
               local_3a8[1] * dStack_2e0);
      local_348[0] = local_3a8[1] * local_2d8 * -1.0 +
                     local_3a8[2] * dStack_2e0 +
                     local_3a8[3] * local_2e8 * 1.0 + local_3a8[0] * dStack_2d0;
      local_348[1] = local_3a8[0] * local_2d8 * 1.0 +
                     local_3a8[3] * dStack_2e0 +
                     local_3a8[2] * local_2e8 * -1.0 + local_3a8[1] * dStack_2d0;
      local_338._8_4_ = SUB84(dVar41,0);
      local_338._0_8_ =
           local_3a8[3] * local_2d8 * 1.0 +
           ((local_2e8 * local_3a8[1] * 1.0 + local_3a8[2] * dStack_2d0) - local_3a8[0] * dStack_2e0
           );
      local_338._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      dVar41 = local_388 * dVar1;
      dVar29 = dStack_380 * dVar5;
      dVar38 = local_378 * dVar2;
      dVar39 = dStack_370 * dVar6;
      dVar40 = dVar29 * local_2e8 - dStack_2e0 * dVar41;
      dVar34 = dVar38 * dStack_2e0 - local_2d8 * dVar29;
      dVar42 = dVar41 * local_2d8 - local_2e8 * dVar38;
      dVar28 = dVar39 * dStack_2d0 - dStack_2d0 * dVar39;
      dVar34 = dVar34 + dVar34;
      dVar42 = dVar42 + dVar42;
      dVar40 = dVar40 + dVar40;
      dVar28 = dVar28 + dVar28;
      local_328 = (dVar40 * dStack_2e0 - local_2d8 * dVar42) + dStack_2d0 * dVar34 + dVar41 +
                  local_2c8;
      dStack_320 = (dVar34 * local_2d8 - dVar40 * local_2e8) + dStack_2d0 * dVar42 + dVar29 +
                   dStack_2c0;
      local_318 = (dVar42 * local_2e8 - dStack_2e0 * dVar34) + dStack_2d0 * dVar40 + dVar38 +
                  (double)CONCAT44(uStack_2b4,local_2b8);
      dStack_310 = (dVar28 * dStack_2d0 - dVar28 * dStack_2d0) + dStack_2d0 * dVar28 + dVar39 +
                   dStack_2b0;
    }
    else {
      dVar28 = dStack_2e0 + dStack_2e0;
      dVar41 = local_2d8 + local_2d8;
      dVar40 = local_2e8 * (local_2e8 + local_2e8);
      local_198 = (1.0 - (dVar40 + dStack_2e0 * dVar28)) * dVar2;
      dVar29 = (local_2e8 + local_2e8) * dStack_2d0;
      local_1a8 = (dVar28 * dStack_2d0 + local_2e8 * dVar41) * dVar2;
      dStack_1a0 = (dVar41 * dStack_2e0 - dVar29) * dVar2;
      local_1e8 = ((double)DAT_149934d80 - (local_2d8 * dVar41 + dStack_2e0 * dVar28)) * dVar1;
      dVar40 = (DAT_149934d80._8_8_ - (local_2d8 * dVar41 + dVar40)) * dVar5;
      dStack_1e0 = (dVar28 * local_2e8 + dVar41 * dStack_2d0) * dVar1;
      local_1b8 = (dVar41 * dStack_2e0 + dVar29) * dVar5;
      local_1d8 = (local_2e8 * dVar41 - dVar28 * dStack_2d0) * dVar1;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar40,0);
      local_1c8._0_8_ = (dVar28 * local_2e8 - dVar41 * dStack_2d0) * dVar5;
      local_1c8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = local_2c8;
      dStack_180 = dStack_2c0;
      local_178 = local_2b8;
      uStack_174 = uStack_2b4;
      uStack_170 = 0;
      uStack_16c = 0x3ff00000;
      dVar28 = local_3a8[1] + local_3a8[1];
      dVar41 = local_3a8[2] + local_3a8[2];
      dVar40 = local_3a8[0] * (local_3a8[0] + local_3a8[0]);
      local_218 = (1.0 - (dVar40 + local_3a8[1] * dVar28)) * dVar4;
      dVar29 = (local_3a8[0] + local_3a8[0]) * local_3a8[3];
      local_228 = (dVar28 * local_3a8[3] + local_3a8[0] * dVar41) * dVar4;
      local_248 = (dVar28 * local_3a8[0] - dVar41 * local_3a8[3]) * dVar23;
      dStack_220 = (dVar41 * local_3a8[1] - dVar29) * dVar4;
      local_268 = ((double)DAT_149934d80 - (local_3a8[2] * dVar41 + local_3a8[1] * dVar28)) * dVar3;
      dStack_240 = (DAT_149934d80._8_8_ - (local_3a8[2] * dVar41 + dVar40)) * dVar23;
      dStack_260 = (dVar28 * local_3a8[0] + dVar41 * local_3a8[3]) * dVar3;
      local_238 = (dVar41 * local_3a8[1] + dVar29) * dVar23;
      local_258 = (local_3a8[0] * dVar41 - dVar28 * local_3a8[3]) * dVar3;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = local_388;
      dStack_200 = dStack_380;
      local_1f8 = local_378;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar31._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar23);
      auVar31._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
      auVar25 = blendvpd(_DAT_149936790,auVar36,auVar31);
      uVar19 = -(ulonglong)(0.0 <= dVar2 * dVar4);
      dVar41 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar29 = auVar25._0_8_;
      local_158 = local_158 * dVar29;
      local_160 = local_160 * dVar29;
      local_168 = local_168 * dVar29;
      dVar29 = auVar25._8_8_;
      local_138 = local_138 * dVar29;
      local_140 = local_140 * dVar29;
      local_148 = dVar29 * local_148;
      local_118 = local_118 * dVar41;
      local_120 = local_120 * dVar41;
      local_128 = dVar41 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar41 = local_278 * local_278 + local_288 * local_288;
      dVar29 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar24._0_8_ = dVar41 + dVar29;
      auVar24._8_8_ = dVar41 + dVar29;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
      auVar25 = sqrtpd(auVar24,auVar24);
      auVar36 = divpd(auVar36,auVar25);
      auVar35._0_8_ = auVar36._0_8_ * local_278;
      auVar35._8_8_ = auVar36._8_8_ * dStack_270;
      local_338 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar20);
      local_348[0] = (double)((ulonglong)(local_288 * auVar36._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
      local_348[1] = (double)((ulonglong)(dStack_280 * auVar36._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
      local_328 = local_108;
      dStack_320 = dStack_100;
      local_318 = local_f8;
      dStack_310 = 0.0;
    }
    dVar6 = dVar6 * dVar30;
    local_308._8_4_ = SUB84(dVar5 * dVar23,0);
    local_308._0_8_ = dVar1 * dVar3;
    local_308._12_4_ = (int)((ulonglong)(dVar5 * dVar23) >> 0x20);
    local_2f8._8_4_ = SUB84(dVar6,0);
    local_2f8._0_8_ = dVar2 * dVar4;
    local_2f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    local_3b8 = param_1[0x25];
    FUN_14028ca22(param_1,local_348,local_3a8);
  }
  pdVar15 = local_348;
  pdVar16 = (double *)(param_1 + 0x48);
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *pdVar16 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar16 = pdVar16 + 1;
  }
  param_1[0x2c] = (longlong)(*param_2 + (double)param_1[0x2c]);
  param_1[0x2d] = (longlong)(param_2[1] + (double)param_1[0x2d]);
  param_1[0x2e] = (longlong)(param_2[2] + (double)param_1[0x2e]);
  if ((param_1[0x24] == 0) || ((*(byte *)(param_1 + 0x3f) & 4) != 0)) {
    dVar1 = (double)param_1[0x4e];
    dVar2 = param_2[2];
    dVar3 = (double)param_1[0x4d];
    dVar4 = param_2[1];
    dVar5 = (double)param_1[0x4c];
    dVar6 = *param_2;
    FUN_144a62f0c(param_1,param_1[7],5);
    param_1[0x33] = (longlong)(dVar5 + dVar6);
    param_1[0x34] = (longlong)(dVar3 + dVar4);
    param_1[0x35] = (longlong)(dVar1 + dVar2);
    FUN_14480333a(param_1,local_3a8);
    plVar14 = (longlong *)param_1[0x24];
    if (plVar14 == (longlong *)0x0) {
      pdVar15 = local_3a8;
      pdVar16 = local_348;
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar16 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        pdVar16 = pdVar16 + 1;
      }
    }
    else if ((*(byte *)(param_1 + 0x3f) & 0x1c) == 0) {
      uVar10 = (**(code **)(*plVar14 + 0x4a8))(plVar14,&local_2e8,param_1[0x25],0);
      auVar36 = _DAT_149934d80;
      local_318 = 0.0;
      dStack_310 = 0.0;
      local_328 = 0.0;
      dStack_320 = 0.0;
      dVar1 = local_2a8._0_8_;
      dVar5 = local_2a8._8_8_;
      dVar2 = local_298._0_8_;
      dVar3 = local_368._0_8_;
      dVar6 = local_368._8_8_;
      dVar4 = local_358._0_8_;
      auVar25 = minpd(local_368,local_2a8);
      auVar32 = minpd(local_358,local_298);
      auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
      auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
      iVar11 = movmskpd(uVar10,auVar26);
      auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
      auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
      uVar12 = movmskpd((int)plVar14,auVar33);
      if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
        dVar23 = local_3a8[2] * local_2d8 * -1.0 +
                 ((local_2e8 * local_3a8[0] * -1.0 + local_3a8[3] * dStack_2d0) -
                 local_3a8[1] * dStack_2e0);
        local_348[0] = local_3a8[1] * local_2d8 * -1.0 +
                       local_3a8[2] * dStack_2e0 +
                       local_3a8[3] * local_2e8 * 1.0 + local_3a8[0] * dStack_2d0;
        local_348[1] = local_3a8[0] * local_2d8 * 1.0 +
                       local_3a8[3] * dStack_2e0 +
                       local_3a8[2] * local_2e8 * -1.0 + local_3a8[1] * dStack_2d0;
        local_338._8_4_ = SUB84(dVar23,0);
        local_338._0_8_ =
             local_3a8[3] * local_2d8 * 1.0 +
             ((local_2e8 * local_3a8[1] * 1.0 + local_3a8[2] * dStack_2d0) -
             local_3a8[0] * dStack_2e0);
        local_338._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        local_388 = local_388 * dVar1;
        dStack_380 = dStack_380 * dVar5;
        local_378 = local_378 * dVar2;
        dStack_370 = dStack_370 * local_298._8_8_;
        dVar23 = dStack_380 * local_2e8 - dStack_2e0 * local_388;
        dVar41 = local_378 * dStack_2e0 - local_2d8 * dStack_380;
        dVar29 = local_388 * local_2d8 - local_2e8 * local_378;
        dVar30 = dStack_370 * dStack_2d0 - dStack_2d0 * dStack_370;
        dVar41 = dVar41 + dVar41;
        dVar29 = dVar29 + dVar29;
        dVar23 = dVar23 + dVar23;
        dVar30 = dVar30 + dVar30;
        local_328 = (dVar23 * dStack_2e0 - local_2d8 * dVar29) + dStack_2d0 * dVar41 + local_388 +
                    local_2c8;
        dStack_320 = (dVar41 * local_2d8 - dVar23 * local_2e8) + dStack_2d0 * dVar29 + dStack_380 +
                     dStack_2c0;
        local_318 = (dVar29 * local_2e8 - dStack_2e0 * dVar41) + dStack_2d0 * dVar23 + local_378 +
                    (double)CONCAT44(uStack_2b4,local_2b8);
        dStack_310 = (dVar30 * dStack_2d0 - dVar30 * dStack_2d0) + dStack_2d0 * dVar30 + dStack_370
                     + dStack_2b0;
      }
      else {
        dVar29 = dStack_2e0 + dStack_2e0;
        dVar23 = local_2d8 + local_2d8;
        dVar41 = local_2e8 * (local_2e8 + local_2e8);
        local_198 = (1.0 - (dVar41 + dStack_2e0 * dVar29)) * dVar2;
        dVar30 = (local_2e8 + local_2e8) * dStack_2d0;
        local_1a8 = (dVar29 * dStack_2d0 + local_2e8 * dVar23) * dVar2;
        dStack_1a0 = (dVar23 * dStack_2e0 - dVar30) * dVar2;
        local_1e8 = ((double)DAT_149934d80 - (local_2d8 * dVar23 + dStack_2e0 * dVar29)) * dVar1;
        dVar41 = (DAT_149934d80._8_8_ - (local_2d8 * dVar23 + dVar41)) * dVar5;
        dStack_1e0 = (dVar29 * local_2e8 + dVar23 * dStack_2d0) * dVar1;
        local_1b8 = (dVar23 * dStack_2e0 + dVar30) * dVar5;
        local_1d8 = (local_2e8 * dVar23 - dVar29 * dStack_2d0) * dVar1;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar41,0);
        local_1c8._0_8_ = (dVar29 * local_2e8 - dVar23 * dStack_2d0) * dVar5;
        local_1c8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_2c8;
        dStack_180 = dStack_2c0;
        local_178 = local_2b8;
        uStack_174 = uStack_2b4;
        uStack_170 = 0;
        uStack_16c = 0x3ff00000;
        dVar29 = local_3a8[1] + local_3a8[1];
        dVar23 = local_3a8[2] + local_3a8[2];
        dVar41 = local_3a8[0] * (local_3a8[0] + local_3a8[0]);
        local_218 = (1.0 - (dVar41 + local_3a8[1] * dVar29)) * dVar4;
        dVar30 = (local_3a8[0] + local_3a8[0]) * local_3a8[3];
        local_228 = (dVar29 * local_3a8[3] + local_3a8[0] * dVar23) * dVar4;
        local_248 = (dVar29 * local_3a8[0] - dVar23 * local_3a8[3]) * dVar6;
        dStack_220 = (dVar23 * local_3a8[1] - dVar30) * dVar4;
        local_268 = ((double)DAT_149934d80 - (local_3a8[2] * dVar23 + local_3a8[1] * dVar29)) *
                    dVar3;
        dStack_240 = (DAT_149934d80._8_8_ - (local_3a8[2] * dVar23 + dVar41)) * dVar6;
        dStack_260 = (dVar29 * local_3a8[0] + dVar23 * local_3a8[3]) * dVar3;
        local_238 = (dVar23 * local_3a8[1] + dVar30) * dVar6;
        local_258 = (local_3a8[0] * dVar23 - dVar29 * local_3a8[3]) * dVar3;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = local_388;
        dStack_200 = dStack_380;
        local_1f8 = local_378;
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
        auVar25 = blendvpd(_DAT_149936790,auVar36,auVar21);
        uVar19 = -(ulonglong)(0.0 <= dVar2 * dVar4);
        dVar23 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
        dVar30 = auVar25._0_8_;
        local_158 = local_158 * dVar30;
        local_160 = local_160 * dVar30;
        local_168 = local_168 * dVar30;
        dVar30 = auVar25._8_8_;
        local_138 = local_138 * dVar30;
        local_140 = local_140 * dVar30;
        local_148 = dVar30 * local_148;
        local_118 = local_118 * dVar23;
        local_120 = local_120 * dVar23;
        local_128 = dVar23 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar23 = local_278 * local_278 + local_288 * local_288;
        dVar30 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar27._0_8_ = dVar23 + dVar30;
        auVar27._8_8_ = dVar23 + dVar30;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
        auVar25 = sqrtpd(auVar27,auVar27);
        auVar36 = divpd(auVar36,auVar25);
        auVar37._0_8_ = auVar36._0_8_ * local_278;
        auVar37._8_8_ = auVar36._8_8_ * dStack_270;
        local_338 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar22);
        local_348[0] = (double)((ulonglong)(local_288 * auVar36._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
        local_348[1] = (double)((ulonglong)(dStack_280 * auVar36._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
        local_328 = local_108;
        dStack_320 = dStack_100;
        local_318 = local_f8;
        dStack_310 = 0.0;
      }
      dVar23 = local_298._8_8_ * local_358._8_8_;
      local_308._8_4_ = SUB84(dVar5 * dVar6,0);
      local_308._0_8_ = dVar1 * dVar3;
      local_308._12_4_ = (int)((ulonglong)(dVar5 * dVar6) >> 0x20);
      local_2f8._8_4_ = SUB84(dVar23,0);
      local_2f8._0_8_ = dVar2 * dVar4;
      local_2f8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    }
    else {
      local_3b8 = param_1[0x25];
      FUN_14028ca22(param_1,local_348,local_3a8);
    }
    pdVar15 = local_348;
    pdVar16 = (double *)(param_1 + 0x48);
    for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar16 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar16 = pdVar16 + 1;
    }
  }
  bVar18 = (*(byte *)((longlong)param_1 + 0x9c) & 8) == 0;
  if (cVar8 == '\x01' && !bVar18) {
    cVar9 = FUN_147c69bd4();
    if (cVar9 == '\0') {
      bVar18 = false;
    }
    else {
      bVar18 = true;
      if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
        bVar18 = (bool)(-(param_2[2] != 0.0) & 1);
      }
    }
  }
  (**(code **)(*param_1 + 0x500))(param_1,bVar18,0);
  if (((cVar8 == '\0') ||
      ((((*param_2 == 0.0 && (!NAN(*param_2))) &&
        ((param_2[1] == 0.0 && ((!NAN(param_2[1]) && (param_2[2] == 0.0)))))) && (!NAN(param_2[2])))
      )) && (FUN_1448c69c8(param_1),
            (*(byte *)((longlong)param_1 + 0x1f9) & 4) != 0 && cVar8 == '\0')) {
    (**(code **)(*param_1 + 0x550))(param_1,1);
  }
  lVar13 = param_1[0x28];
  if ((longlong)(int)lVar13 != 0) {
    lVar7 = param_1[0x27];
    lVar17 = 0;
    do {
      plVar14 = *(longlong **)(lVar7 + lVar17);
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x458))(plVar14,param_2,param_3);
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar17);
  }
  if ((local_e0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a01c0c FUN_147a01c0c body=73 status=ok
// SIG undefined FUN_147a01c0c(void)

void FUN_147a01c0c(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x218);
    }
    (**(code **)(*plVar1 + 0x200))(plVar1,param_1);
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  return;
}



// FUNCTION 147a01c56 FUN_147a01c56 body=65 status=ok
// SIG undefined FUN_147a01c56(void)

void FUN_147a01c56(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 2) != 0) {
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x218);
    }
    (**(code **)(*plVar1 + 0x200))(plVar1,param_1);
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 147a01c98 FUN_147a01c98 body=63 status=ok
// SIG undefined FUN_147a01c98(void)

void FUN_147a01c98(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x218);
  }
  (**(code **)(*plVar1 + 0x208))(plVar1,param_1);
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  return;
}



// FUNCTION 147a01d76 FUN_147a01d76 body=93 status=ok
// SIG undefined FUN_147a01d76(void)

undefined8 * FUN_147a01d76(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141191a02(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a13fee(param_1,iVar1);
      FUN_147a14061(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a01dda FUN_147a01dda body=235 status=ok
// SIG undefined FUN_147a01dda(void)

void FUN_147a01dda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a01ec6(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a01ec6 FUN_147a01ec6 body=235 status=ok
// SIG undefined FUN_147a01ec6(void)

void FUN_147a01ec6(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    FUN_14024dbd6(param_2,local_100);
    puVar1 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar1 = local_100;
    }
    lVar2 = (longlong)(int)local_38;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        local_108 = 0;
        FUN_14485c47a(&local_108,*(undefined8 *)(puVar1 + lVar3));
        FUN_147a14292(param_1 + 0x2b0,&local_108);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a01fb2 FUN_147a01fb2 body=193 status=ok
// SIG undefined FUN_147a01fb2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147a01fb2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    local_28[1] = 0;
    FUN_14485c47a(local_28 + 1);
    FUN_147a14292(param_1 + 0x2b0,local_28 + 1);
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0207a FUN_147a0207a body=235 status=ok
// SIG undefined FUN_147a0207a(void)

void FUN_147a0207a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a02166(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02166 FUN_147a02166 body=249 status=ok
// SIG undefined FUN_147a02166(void)

void FUN_147a02166(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != 0) {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x1800000000;
    FUN_14024dbd6(param_2,local_108);
    puVar2 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar2 = local_108;
    }
    lVar3 = (longlong)(int)local_40;
    if (lVar3 != 0) {
      lVar1 = 0;
      do {
        local_118 = 0;
        FUN_14485c47a(&local_118,*(undefined8 *)(puVar2 + lVar1));
        local_110 = &local_118;
        FUN_141086cf2(param_1 + 0x2d0,&local_110);
        lVar1 = lVar1 + 8;
      } while (lVar3 * 8 != lVar1);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a02260 FUN_147a02260 body=191 status=ok
// SIG undefined FUN_147a02260(void)

void FUN_147a02260(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  FUN_14485c47a(&local_28,local_30);
  local_20 = &local_28;
  FUN_141086cf2(param_1 + 0x2d0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02320 FUN_147a02320 body=152 status=ok
// SIG undefined FUN_147a02320(void)

void FUN_147a02320(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x2f8) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a023ba FUN_147a023ba body=203 status=ok
// SIG undefined FUN_147a023ba(void)

void FUN_147a023ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a01d76(param_1 + 0x300,plVar1);
  FUN_140de3754(param_1);
  FUN_141191a02(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0248c FUN_147a0248c body=235 status=ok
// SIG undefined FUN_147a0248c(void)

void FUN_147a0248c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a02578(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02578 FUN_147a02578 body=242 status=ok
// SIG undefined FUN_147a02578(void)

void FUN_147a02578(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x2a8) = 2;
    local_40 = (undefined1 *)0x0;
    local_38 = 0x1800000000;
    FUN_14024dbd6(param_2,local_100);
    puVar1 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar1 = local_100;
    }
    lVar2 = (longlong)(int)local_38;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        local_108 = 0;
        FUN_14485c47a(&local_108,*(undefined8 *)(puVar1 + lVar3));
        FUN_147121b08(param_1 + 0x2d0,&local_108);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a0266c FUN_147a0266c body=200 status=ok
// SIG undefined FUN_147a0266c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147a0266c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    *(undefined1 *)(param_1 + 0x2a8) = 2;
    local_28[1] = 0;
    FUN_14485c47a(local_28 + 1);
    FUN_147121b08(param_1 + 0x2d0,local_28 + 1);
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02770 FUN_147a02770 body=75 status=ok
// SIG undefined FUN_147a02770(void)

void FUN_147a02770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a027bc(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a027bc FUN_147a027bc body=91 status=ok
// SIG undefined FUN_147a027bc(void)

void FUN_147a027bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_14010df0a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  if ((iVar1 < 0x13) && ((0 < *(int *)(param_1 + 0x2e8) || (0 < *(int *)(param_1 + 0x2d8))))) {
    *(undefined1 *)(param_1 + 0x2a8) = 2;
  }
  return;
}



// FUNCTION 147a0281e FUN_147a0281e body=41 status=ok
// SIG undefined FUN_147a0281e(void)

void FUN_147a0281e(undefined8 param_1,longlong *param_2)

{
  FUN_1402d084a();
                    /* WARNING: Could not recover jumptable at 0x000147a02844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  return;
}



// FUNCTION 147a02848 FUN_147a02848 body=15 status=ok
// SIG undefined FUN_147a02848(void)

void FUN_147a02848(longlong param_1,undefined8 param_2)

{
  FUN_14045627c(*(undefined8 *)(param_1 + 0x3a0),param_2,1);
  return;
}



// FUNCTION 147a0287c FUN_147a0287c body=15 status=ok
// SIG undefined FUN_147a0287c(void)

void FUN_147a0287c(longlong param_1,undefined8 param_2)

{
  FUN_14045627c(*(undefined8 *)(param_1 + 0x3a0),param_2,1);
  return;
}



// FUNCTION 147a0288c FUN_147a0288c body=138 status=ok
// SIG undefined FUN_147a0288c(void)

void FUN_147a0288c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140136774();
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_147a028f2;
  }
  FUN_144a61b4f();
  uVar2 = FUN_140c61bfa();
  local_28 = FUN_140f12794;
  local_20 = 0;
  FUN_145902f72(uVar2,local_18,param_1);
LAB_147a028f2:
  FUN_140de3754(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02918 FUN_147a02918 body=26 status=ok
// SIG undefined FUN_147a02918(void)

void FUN_147a02918(undefined8 param_1)

{
  FUN_1401a0912();
  FUN_140de3754(param_1);
  return;
}



// FUNCTION 147a02938 FUN_147a02938 body=120 status=ok
// SIG undefined FUN_147a02938(void)

void FUN_147a02938(longlong *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = 0;
  do {
    puVar2 = *(undefined8 **)(lVar1 + 8 + lVar5 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    lVar5 = lVar5 + 1;
  } while (param_2 != (uint)lVar5);
  iVar3 = (int)param_1[1];
  iVar4 = iVar3 - (param_2 + 1);
  if (iVar4 != 0) {
    memmove((void *)(*param_1 + 8),(void *)(*param_1 + (ulonglong)param_2 * 8 + 8),
            (longlong)iVar4 << 3);
    iVar3 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar3 - param_2;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 147a029b0 FUN_147a029b0 body=186 status=ok
// SIG undefined FUN_147a029b0(void)

void FUN_147a029b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  uVar2 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  cVar1 = FUN_1413e2d88(param_2,uVar2,0x83,1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x390) = 0x44000000;
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar3 < 0x33) {
    *(undefined1 *)(param_1 + 0x394) = 0;
  }
  FUN_147a027bc(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cb60);
    if (iVar3 < 0x10) {
      *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) & 0xdf;
      *(byte *)(param_1 + 0x31d) = *(byte *)(param_1 + 0x31d) & 0xdf;
    }
  }
  return;
}



// FUNCTION 147a02a80 FUN_147a02a80 body=108 status=ok
// SIG undefined FUN_147a02a80(void)

void FUN_147a02a80(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  local_28 = 0xe4b068ed;
  uStack_24 = 0xf49442e9;
  uStack_20 = 0xa231da0b;
  uStack_1c = 0x2e46bb41;
  iVar1 = FUN_1448a256a(param_1);
  if ((iVar1 < 0x1b) && (*(longlong *)(param_1 + 0x3a0) != 0)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x3a0) + 0x3bc) = *(undefined1 *)(param_1 + 0x3a8);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02aee FUN_147a02aee body=15 status=ok
// SIG undefined FUN_147a02aee(void)

void FUN_147a02aee(longlong param_1,undefined8 param_2)

{
  FUN_14045627c(*(undefined8 *)(param_1 + 0x3a0),param_2,1);
  return;
}



// FUNCTION 147a02afe FUN_147a02afe body=26 status=ok
// SIG undefined FUN_147a02afe(void)

void FUN_147a02afe(undefined8 param_1)

{
  FUN_1401a0912();
  FUN_140de3754(param_1);
  return;
}



// FUNCTION 147a02b18 FUN_147a02b18 body=83 status=ok
// SIG undefined FUN_147a02b18(void)

void FUN_147a02b18(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_147a027bc();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cb60);
    if (iVar1 < 6) {
      *(undefined8 *)(param_1 + 0x3ac) = *(undefined8 *)(param_1 + 0x3a4);
    }
  }
  return;
}



// FUNCTION 147a02b6c FUN_147a02b6c body=192 status=ok
// SIG undefined FUN_147a02b6c(void)

void FUN_147a02b6c(longlong param_1)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x388);
  if (lVar4 != 0) {
    fVar1 = *(float *)(param_1 + 0x3b0);
    *(undefined8 *)(lVar4 + 0x640) = 0x409f400000000000;
    *(undefined8 *)(lVar4 + 0x648) = 0x409f400000000000;
    *(double *)(lVar4 + 0x650) = (double)fVar1;
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  cVar2 = FUN_147a02c2c(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_140041326(param_1);
    if (cVar2 != '\0') {
      uVar3 = FUN_14001cc68(0x260,0x10);
      FUN_147c9124c(uVar3,param_1);
      *(undefined8 *)(param_1 + 0x3c8) = uVar3;
      lVar4 = *(longlong *)(param_1 + 0xb0);
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6(param_1);
      }
                    /* WARNING: Could not recover jumptable at 0x000147a02c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar4 + 0x218) + 0x1a8))(*(longlong **)(lVar4 + 0x218),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147a02c2c FUN_147a02c2c body=97 status=ok
// SIG undefined FUN_147a02c2c(void)

bool FUN_147a02c2c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  
  cVar3 = FUN_144a884fa();
  bVar5 = true;
  if (cVar3 == '\0') {
    bVar5 = DAT_14cb0cbf8 < (int)(uint)*(byte *)(param_1 + 0x1fc);
  }
  if ((*(longlong *)(param_1 + 0xb0) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), lVar1 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(lVar1 + 8) < 2;
  }
  if (bVar2 || bVar5 != false) {
    bVar5 = (bool)(bVar5 ^ 1);
  }
  else {
    iVar4 = FUN_147cee33b();
    bVar5 = iVar4 != 1;
  }
  return bVar5;
}



// FUNCTION 147a02c8e FUN_147a02c8e body=122 status=ok
// SIG undefined FUN_147a02c8e(void)

void FUN_147a02c8e(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x388);
  if (lVar2 != 0) {
    fVar1 = *(float *)(param_1 + 0x3b0);
    *(undefined8 *)(lVar2 + 0x640) = 0x409f400000000000;
    *(undefined8 *)(lVar2 + 0x648) = 0x409f400000000000;
    *(double *)(lVar2 + 0x650) = (double)fVar1;
  }
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    (**(code **)(**(longlong **)(lVar2 + 0x218) + 0x1b8))(*(longlong **)(lVar2 + 0x218),param_1);
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 147a02d08 FUN_147a02d08 body=26 status=ok
// SIG undefined FUN_147a02d08(void)

void FUN_147a02d08(undefined8 param_1)

{
  FUN_1401a0912();
  FUN_140de3754(param_1);
  return;
}



// FUNCTION 147a02d22 FUN_147a02d22 body=43 status=ok
// SIG undefined FUN_147a02d22(void)

void FUN_147a02d22(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2aa) & 3) == 2) {
    FUN_147a02d4e(param_1);
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 147a02d4e FUN_147a02d4e body=227 status=ok
// SIG undefined FUN_147a02d4e(void)

void FUN_147a02d4e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[0x16];
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
    if (lVar2 == 0) goto LAB_147a02e0f;
  }
  if (*(longlong *)(lVar2 + 0x218) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_140c70d96(param_1);
      if (cVar1 == '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
        local_38 = 0;
        FUN_14485c47a(&local_38,param_1);
        local_40 = 0;
        FUN_14485c47a(&local_40,lVar2);
        FUN_140c70d16(&DAT_14cad2278,&local_40,&local_38);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad22c8);
      }
    }
  }
LAB_147a02e0f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a02e32 FUN_147a02e32 body=41 status=ok
// SIG undefined FUN_147a02e32(void)

void FUN_147a02e32(longlong param_1)

{
  FUN_144a7e84a();
  if ((*(byte *)(param_1 + 0x2aa) & 1) == 0) {
    return;
  }
  FUN_147a02d4e(param_1);
  return;
}



// FUNCTION 147a02e62 FUN_147a02e62 body=410 status=ok
// SIG undefined FUN_147a02e62(void)

void FUN_147a02e62(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [8];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 == 0) goto LAB_147a02ee9;
  }
  if (*(longlong *)(lVar4 + 0x218) != 0) {
    cVar3 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if (cVar3 != '\0') {
      cVar3 = FUN_140c70d96(param_1);
      if (cVar3 == '\0') {
        *(byte *)((longlong)param_1 + 0x2aa) = *(byte *)((longlong)param_1 + 0x2aa) & 0xef;
        FUN_14083337a(lVar4);
        (**(code **)(*param_1 + 0x5f0))(param_1,*(undefined8 *)(lVar4 + 0x218));
      }
    }
  }
LAB_147a02ee9:
  if ((*(byte *)((longlong)param_1 + 0x2aa) & 1) != 0) {
    FUN_1446ddc76(local_80,"Blueprint",1);
    FUN_14276766e(local_78,local_80);
    local_38 = L"CaptureScene";
    local_30 = 0xc;
    FUN_1446e940c(local_84,&local_38);
    local_38 = L"SceneCaptureComponent";
    local_30 = 0x15;
    FUN_1446e940c(local_88,&local_38);
    FUN_140208bae(&local_38,local_88,local_84,
                  L"CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency."
                 );
    FUN_1427679d4(local_78,local_48,&local_38);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    FUN_1427678c0(local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a03014 FUN_147a03014 body=246 status=ok
// SIG undefined FUN_147a03014(void)

undefined8
FUN_147a03014(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_144a799b0();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0310c FUN_147a0310c body=129 status=ok
// SIG undefined FUN_147a0310c(void)

int FUN_147a0310c(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140f41d82(param_1,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*param_1 + lVar3 * 8 + 8),(void *)(*param_1 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *param_2;
  *(longlong *)(*param_1 + lVar3 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_3;
}



// FUNCTION 147a0318e FUN_147a0318e body=466 status=ok
// SIG undefined FUN_147a0318e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a0318e(longlong param_1,double *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
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
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar18 = *param_2 - *(double *)(param_1 + 0x1b0);
  dVar19 = param_2[1] - *(double *)(param_1 + 0x1b8);
  dVar5 = param_2[2] - *(double *)(param_1 + 0x1c0);
  dVar1 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  auVar12._8_8_ = dVar19;
  auVar12._0_8_ = dVar18;
  auVar13 = divpd(auVar12,_DAT_1499387d0);
  auVar6._0_8_ = dVar5 / 360.0;
  auVar6._8_8_ = 0;
  auVar14 = roundpd(auVar13,auVar13,3);
  auVar13 = roundpd(auVar6,auVar6,3);
  auVar20._0_8_ = dVar5 - auVar13._0_8_ * dVar1;
  auVar20._8_8_ = 0.0 - auVar13._8_8_ * dVar2;
  dVar18 = dVar18 - auVar14._0_8_ * dVar1;
  dVar19 = dVar19 - auVar14._8_8_ * dVar2;
  auVar17._0_8_ = dVar18 + dVar1;
  auVar17._8_8_ = dVar19 + dVar2;
  auVar16._0_8_ = dVar1 + auVar20._0_8_;
  auVar16._8_8_ = dVar2 + auVar20._8_8_;
  auVar7._8_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar7._0_8_ = -(ulonglong)(0.0 <= dVar18);
  auVar13._8_8_ = dVar19;
  auVar13._0_8_ = dVar18;
  auVar14 = blendvpd(auVar17,auVar13,auVar7);
  auVar8._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
  auVar8._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
  auVar13 = blendvpd(auVar16,auVar20,auVar8);
  auVar21._0_8_ = auVar14._0_8_ + -360.0;
  auVar21._8_8_ = auVar14._8_8_ + -360.0;
  auVar9._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
  auVar9._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
  auVar6 = blendvpd(auVar14,auVar21,auVar9);
  auVar10._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
  auVar10._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
  auVar14._8_8_ = auVar13._8_8_ + -360.0;
  auVar14._0_8_ = auVar13._0_8_ + -360.0;
  auVar13 = blendvpd(auVar13,auVar14,auVar10);
  auVar15._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar6._8_8_));
  auVar15._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar6._0_8_));
  iVar3 = movmskpd((int)local_40,auVar15);
  auVar11._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar13._8_8_));
  auVar11._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar13._0_8_));
  uVar4 = movmskpd((int)param_1,auVar11);
  if ((uVar4 & 0x3fffffff) != 0 || iVar3 != 0) {
    FUN_144a7484c(param_2,local_68);
    local_78 = *(undefined8 *)(param_1 + 0x1a8);
    local_88 = *(undefined8 *)(param_1 + 0x198);
    uStack_80 = *(undefined8 *)(param_1 + 0x1a0);
    local_b0 = param_5;
    local_b8 = param_4;
    FUN_144927ad4(param_1,&local_88,local_68,param_3);
  }
  local_98 = param_2[2];
  local_a8 = *param_2;
  dStack_a0 = param_2[1];
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),6);
  *(double *)(param_1 + 0x1c0) = local_98;
  *(double *)(param_1 + 0x1b0) = local_a8;
  *(double *)(param_1 + 0x1b8) = dStack_a0;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a03362 FUN_147a03362 body=852 status=ok
// SIG undefined FUN_147a03362(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a03362(longlong param_1,double *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  auVar6 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar1 = auVar6._0_8_;
  dVar2 = auVar6._8_8_;
  dVar11 = *(double *)(param_1 + 0x1c0);
  pdVar5 = *(double **)(param_1 + 0x230);
  if (pdVar5 == (double *)0x0) {
    pdVar5 = (double *)FUN_14001cc68(0x40,0x10);
    dVar3 = DAT_14c8463d8;
    *pdVar5 = DAT_14c8463d0;
    pdVar5[1] = dVar3;
    dVar3 = DAT_14c8463e8;
    pdVar5[2] = DAT_14c8463e0;
    pdVar5[3] = dVar3;
    dVar3 = DAT_14c846500;
    pdVar5[4] = DAT_14c8464f8;
    pdVar5[5] = dVar3;
    pdVar5[6] = DAT_14c846508;
    *(double **)(param_1 + 0x230) = pdVar5;
  }
  if ((((pdVar5[4] == dVar1) && (!NAN(pdVar5[4]) && !NAN(dVar1))) && (pdVar5[5] == dVar2)) &&
     (!NAN(pdVar5[5]) && !NAN(dVar2))) {
    if ((pdVar5[6] == dVar11) && (!NAN(pdVar5[6]) && !NAN(dVar11))) goto LAB_147a034f3;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar11;
  dVar3 = (double)DAT_1499387d0;
  dVar4 = DAT_1499387d0._8_8_;
  auVar6 = divpd(auVar6,_DAT_1499387d0);
  auVar9 = divpd(auVar15,_DAT_1499387d0);
  auVar6 = roundpd(auVar6,auVar6,3);
  auVar9 = roundpd(auVar9,auVar9,3);
  dVar1 = dVar1 - auVar6._0_8_ * dVar3;
  dVar2 = dVar2 - auVar6._8_8_ * dVar4;
  auVar16._0_8_ = dVar11 - auVar9._0_8_ * dVar3;
  auVar16._8_8_ = 0.0 - auVar9._8_8_ * dVar4;
  auVar14._0_8_ = dVar1 + dVar3;
  auVar14._8_8_ = dVar2 + dVar4;
  auVar12._0_8_ = dVar3 + auVar16._0_8_;
  auVar12._8_8_ = dVar4 + auVar16._8_8_;
  auVar9._8_8_ = -(ulonglong)(0.0 <= dVar2);
  auVar9._0_8_ = -(ulonglong)(0.0 <= dVar1);
  auVar6._8_4_ = SUB84(dVar2,0);
  auVar6._0_8_ = dVar1;
  auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar9 = blendvpd(auVar14,auVar6,auVar9);
  auVar7._8_8_ = -(ulonglong)(0.0 <= auVar16._8_8_);
  auVar7._0_8_ = -(ulonglong)(0.0 <= auVar16._0_8_);
  auVar6 = blendvpd(auVar12,auVar16,auVar7);
  auVar10._0_8_ = auVar9._0_8_ + -360.0;
  auVar10._8_8_ = auVar9._8_8_ + -360.0;
  auVar8._8_8_ = -(ulonglong)(180.0 < auVar9._8_8_);
  auVar8._0_8_ = -(ulonglong)(180.0 < auVar9._0_8_);
  auVar9 = blendvpd(auVar9,auVar10,auVar8);
  dVar11 = auVar6._0_8_;
  *(undefined1 (*) [16])(pdVar5 + 4) = auVar9;
  pdVar5[6] = (double)(~-(ulonglong)(180.0 < dVar11) & (ulonglong)dVar11 |
                      (ulonglong)(dVar11 + -360.0) & -(ulonglong)(180.0 < dVar11));
  FUN_144a7484c(pdVar5 + 4,&local_b8);
  pdVar5[2] = local_a8;
  pdVar5[3] = dStack_a0;
  *pdVar5 = local_b8;
  pdVar5[1] = dStack_b0;
LAB_147a034f3:
  local_b8 = *pdVar5;
  dStack_b0 = pdVar5[1];
  local_a8 = pdVar5[2];
  dStack_a0 = pdVar5[3];
  dVar11 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = dStack_b0 * dVar2 - dVar1 * local_a8;
  dVar3 = dVar3 + dVar3;
  dVar4 = local_b8 * dVar1 - dVar11 * dStack_b0;
  dVar4 = dVar4 + dVar4;
  dVar13 = local_a8 * dVar11 - dVar2 * local_b8;
  dVar13 = dVar13 + dVar13;
  local_c0 = (local_b8 * dVar13 - dVar3 * dStack_b0) + dStack_a0 * dVar4 + dVar2 +
             *(double *)(param_1 + 0x1a8);
  local_c8 = (local_a8 * dVar3 - dVar4 * local_b8) + dStack_a0 * dVar13 + dVar1 +
             *(double *)(param_1 + 0x1a0);
  local_d0 = (dStack_b0 * dVar4 - dVar13 * local_a8) + dVar3 * dStack_a0 + dVar11 +
             *(double *)(param_1 + 0x198);
  local_e0 = param_5;
  local_e8 = param_4;
  FUN_144927ad4(param_1,&local_d0,&local_b8,param_3);
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a036b8 FUN_147a036b8 body=770 status=ok
// SIG undefined FUN_147a036b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a036b8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  double dVar3;
  double dVar5;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  auVar9 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar6 = auVar9._0_8_;
  dVar7 = auVar9._8_8_;
  dVar14 = *(double *)(param_1 + 0x1c0);
  pdVar8 = *(double **)(param_1 + 0x230);
  if (pdVar8 == (double *)0x0) {
    pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
    dVar1 = DAT_14c8463d8;
    *pdVar8 = DAT_14c8463d0;
    pdVar8[1] = dVar1;
    dVar1 = DAT_14c8463e8;
    pdVar8[2] = DAT_14c8463e0;
    pdVar8[3] = dVar1;
    dVar1 = DAT_14c846500;
    pdVar8[4] = DAT_14c8464f8;
    pdVar8[5] = dVar1;
    pdVar8[6] = DAT_14c846508;
    *(double **)(param_1 + 0x230) = pdVar8;
  }
  if ((((pdVar8[4] == dVar6) && (!NAN(pdVar8[4]) && !NAN(dVar6))) && (pdVar8[5] == dVar7)) &&
     (!NAN(pdVar8[5]) && !NAN(dVar7))) {
    if ((pdVar8[6] == dVar14) && (!NAN(pdVar8[6]) && !NAN(dVar14))) goto LAB_147a03843;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar14;
  dVar1 = (double)DAT_1499387d0;
  dVar3 = DAT_1499387d0._8_8_;
  auVar9 = divpd(auVar9,_DAT_1499387d0);
  auVar12 = divpd(auVar17,_DAT_1499387d0);
  auVar9 = roundpd(auVar9,auVar9,3);
  auVar12 = roundpd(auVar12,auVar12,3);
  dVar6 = dVar6 - auVar9._0_8_ * dVar1;
  dVar7 = dVar7 - auVar9._8_8_ * dVar3;
  auVar18._0_8_ = dVar14 - auVar12._0_8_ * dVar1;
  auVar18._8_8_ = 0.0 - auVar12._8_8_ * dVar3;
  auVar16._0_8_ = dVar6 + dVar1;
  auVar16._8_8_ = dVar7 + dVar3;
  auVar15._0_8_ = dVar1 + auVar18._0_8_;
  auVar15._8_8_ = dVar3 + auVar18._8_8_;
  auVar12._8_8_ = -(ulonglong)(0.0 <= dVar7);
  auVar12._0_8_ = -(ulonglong)(0.0 <= dVar6);
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendvpd(auVar16,auVar9,auVar12);
  auVar10._8_8_ = -(ulonglong)(0.0 <= auVar18._8_8_);
  auVar10._0_8_ = -(ulonglong)(0.0 <= auVar18._0_8_);
  auVar9 = blendvpd(auVar15,auVar18,auVar10);
  auVar13._0_8_ = auVar12._0_8_ + -360.0;
  auVar13._8_8_ = auVar12._8_8_ + -360.0;
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar12._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar12._0_8_);
  auVar12 = blendvpd(auVar12,auVar13,auVar11);
  dVar14 = auVar9._0_8_;
  *(undefined1 (*) [16])(pdVar8 + 4) = auVar12;
  pdVar8[6] = (double)(~-(ulonglong)(180.0 < dVar14) & (ulonglong)dVar14 |
                      (ulonglong)(dVar14 + -360.0) & -(ulonglong)(180.0 < dVar14));
  FUN_144a7484c(pdVar8 + 4,&local_a8);
  pdVar8[2] = local_98;
  pdVar8[3] = dStack_90;
  *pdVar8 = local_a8;
  pdVar8[1] = dStack_a0;
LAB_147a03843:
  dVar6 = pdVar8[3];
  dVar14 = pdVar8[3];
  dVar1 = *pdVar8;
  dVar7 = *pdVar8;
  dVar2 = pdVar8[1];
  dVar3 = pdVar8[1];
  dVar4 = pdVar8[2];
  dVar5 = pdVar8[2];
  FUN_144a7484c(param_2,&local_c8);
  local_a8 = dStack_c0 * dVar4 * -1.0 +
             dVar1 * dStack_b0 * 1.0 + dVar6 * local_c8 + dVar2 * local_b8;
  dStack_a0 = local_c8 * dVar5 * 1.0 +
              dVar7 * local_b8 * -1.0 + dVar14 * dStack_c0 + dVar3 * dStack_b0;
  local_98 = dStack_b0 * dVar4 * 1.0 +
             ((dVar1 * dStack_c0 * 1.0 + dVar6 * local_b8) - dVar2 * local_c8);
  dStack_90 = local_b8 * dVar5 * -1.0 +
              ((dVar7 * local_c8 * -1.0 + dVar14 * dStack_b0) - dVar3 * dStack_c0);
  local_e8 = *(undefined8 *)(param_1 + 0x198);
  uStack_e0 = *(undefined8 *)(param_1 + 0x1a0);
  local_d8 = *(undefined8 *)(param_1 + 0x1a8);
  local_f0 = param_5;
  local_f8 = param_4;
  FUN_144927ad4(param_1,&local_e8,&local_a8,param_3);
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a039bc FUN_147a039bc body=388 status=ok
// SIG undefined FUN_147a039bc(void)

void FUN_147a039bc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144a7484c(param_2,&local_98);
  dVar1 = *(double *)(param_1 + 0x240);
  dVar2 = *(double *)(param_1 + 0x248);
  dVar3 = *(double *)(param_1 + 0x250);
  dVar4 = *(double *)(param_1 + 600);
  local_b8 = dVar2 * local_88 * -1.0 + dVar3 * local_90 + dVar4 * local_98 * 1.0 + dVar1 * local_80;
  dStack_b0 = dVar1 * local_88 * 1.0 + dVar4 * local_90 + dVar3 * local_98 * -1.0 + dVar2 * local_80
  ;
  local_a8 = dVar4 * local_88 * 1.0 +
             ((local_98 * dVar2 * 1.0 + local_80 * dVar3) - dVar1 * local_90);
  dStack_a0 = dVar3 * local_88 * -1.0 +
              ((local_98 * dVar1 * -1.0 + local_80 * dVar4) - dVar2 * local_90);
  FUN_140e1cfe8(param_1,&local_98);
  local_68 = *(undefined8 *)(param_1 + 0x1a8);
  local_78 = *(undefined4 *)(param_1 + 0x198);
  uStack_74 = *(undefined4 *)(param_1 + 0x19c);
  uStack_70 = *(undefined4 *)(param_1 + 0x1a0);
  uStack_6c = *(undefined4 *)(param_1 + 0x1a4);
  local_c0 = param_5;
  local_c8 = param_4;
  FUN_144927ad4(param_1,&local_78,&local_98,param_3);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a03b42 FUN_147a03b42 body=368 status=ok
// SIG undefined FUN_147a03b42(void)

void FUN_147a03b42(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar7 = *(double *)(param_1 + 0x240);
  dVar8 = *(double *)(param_1 + 0x248);
  dVar9 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  dVar3 = param_2[1];
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar6 = param_2[2];
  local_b8 = dVar8 * dVar5 * -1.0 + dVar9 * dVar3 + *param_2 * dVar10 * 1.0 + dVar1 * dVar7;
  dStack_b0 = dVar7 * dVar6 * 1.0 + dVar10 * dVar4 + *param_2 * dVar9 * -1.0 + dVar2 * dVar8;
  local_a8 = dVar10 * dVar5 * 1.0 + ((*param_2 * dVar8 * 1.0 + dVar1 * dVar9) - dVar3 * dVar7);
  dStack_a0 = dVar9 * dVar6 * -1.0 + ((*param_2 * dVar7 * -1.0 + dVar2 * dVar10) - dVar4 * dVar8);
  dVar1 = *(double *)(param_1 + 0x268) + param_2[5];
  local_88 = *(double *)(param_1 + 0x270) + param_2[6];
  local_98._8_4_ = SUB84(dVar1,0);
  local_98._0_8_ = *(double *)(param_1 + 0x260) + param_2[4];
  local_98._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_c8 = param_5;
  FUN_140613f88();
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a03cb4 FUN_147a03cb4 body=368 status=ok
// SIG undefined FUN_147a03cb4(void)

void FUN_147a03cb4(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar7 = *(double *)(param_1 + 0x240);
  dVar8 = *(double *)(param_1 + 0x248);
  dVar9 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  dVar3 = param_2[1];
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar6 = param_2[2];
  local_b8 = dVar8 * dVar5 * -1.0 + dVar9 * dVar3 + *param_2 * dVar10 * 1.0 + dVar1 * dVar7;
  dStack_b0 = dVar7 * dVar6 * 1.0 + dVar10 * dVar4 + *param_2 * dVar9 * -1.0 + dVar2 * dVar8;
  local_a8 = dVar10 * dVar5 * 1.0 + ((*param_2 * dVar8 * 1.0 + dVar1 * dVar9) - dVar3 * dVar7);
  dStack_a0 = dVar9 * dVar6 * -1.0 + ((*param_2 * dVar7 * -1.0 + dVar2 * dVar10) - dVar4 * dVar8);
  local_98 = *(double *)(param_1 + 0x260) + param_2[4];
  dStack_90 = *(double *)(param_1 + 0x268) + param_2[5];
  local_88 = *(double *)(param_1 + 0x270) + param_2[6];
  local_78 = *(undefined4 *)(param_1 + 0x280);
  uStack_74 = *(undefined4 *)(param_1 + 0x284);
  uStack_70 = *(undefined4 *)(param_1 + 0x288);
  uStack_6c = *(undefined4 *)(param_1 + 0x28c);
  local_68 = *(undefined8 *)(param_1 + 0x290);
  uStack_80 = 0;
  uStack_60 = 0;
  local_c8 = param_5;
  FUN_140613f88();
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a03e26 FUN_147a03e26 body=176 status=ok
// SIG undefined FUN_147a03e26(void)

void FUN_147a03e26(longlong *param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = DAT_14c8464f8;
  uStack_20 = DAT_14c846500;
  local_18 = DAT_14c846508;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  local_70 = 0;
  local_78 = 0;
  FUN_1401ca0e6();
  local_60 = 0x3ff0000000000000;
  local_58 = 0x3ff0000000000000;
  local_50 = 0x3ff0000000000000;
  (**(code **)(*param_1 + 0x478))(param_1);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a03ed8 FUN_147a03ed8 body=26 status=ok
// SIG undefined FUN_147a03ed8(void)

undefined8 * FUN_147a03ed8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_1 + 0x240);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 147a03ef2 FUN_147a03ef2 body=27 status=ok
// SIG undefined FUN_147a03ef2(void)

undefined8 * FUN_147a03ef2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x268);
  *param_2 = *(undefined8 *)(param_1 + 0x260);
  param_2[1] = uVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x270);
  return param_2;
}



// FUNCTION 147a03f0e FUN_147a03f0e body=292 status=ok
// SIG undefined FUN_147a03f0e(void)

undefined4 * FUN_147a03f0e(longlong param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  double dVar11;
  double *pdVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  
  dVar11 = (double)(DAT_14c707940 ^ (ulonglong)auStack_98);
  dVar3 = *(double *)(param_1 + 0x240);
  dVar4 = *(double *)(param_1 + 0x248);
  dVar5 = *(double *)(param_1 + 0x250);
  dVar6 = *(double *)(param_1 + 600);
  pdVar12 = *(double **)(param_1 + 0x228);
  lVar14 = param_1;
  local_78 = dVar3;
  uStack_70 = dVar4;
  local_68 = dVar5;
  uStack_60 = dVar6;
  local_40 = dVar11;
  if (pdVar12 == (double *)0x0) {
    lVar14 = 0x40;
    pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
    dVar11 = DAT_14c8463d8;
    *pdVar12 = DAT_14c8463d0;
    pdVar12[1] = dVar11;
    dVar11 = DAT_14c8463e8;
    pdVar12[2] = DAT_14c8463e0;
    pdVar12[3] = dVar11;
    dVar11 = DAT_14c846500;
    pdVar12[4] = DAT_14c8464f8;
    pdVar12[5] = dVar11;
    dVar11 = DAT_14c846508;
    pdVar12[6] = DAT_14c846508;
    *(double **)(param_1 + 0x228) = pdVar12;
  }
  auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar12[1]);
  auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar12);
  auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar12[1]) >> 0x20);
  iVar10 = movmskpd(SUB84(dVar11,0),auVar1);
  auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[3]);
  auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
  auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[3]) >> 0x20);
  uVar13 = movmskpd((int)lVar14,auVar2);
  if ((uVar13 & 0x3fffffff) != 0 || iVar10 != 0) {
    *(undefined4 *)(pdVar12 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)pdVar12 + 0x14) = local_68._4_4_;
    *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_60._4_4_;
    *(undefined4 *)pdVar12 = (undefined4)local_78;
    *(undefined4 *)((longlong)pdVar12 + 4) = local_78._4_4_;
    *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_70._4_4_;
    FUN_1448052ee(&local_78,&local_58);
    pdVar12[6] = local_48;
    pdVar12[4] = local_58;
    pdVar12[5] = dStack_50;
  }
  *(double *)(param_2 + 4) = pdVar12[6];
  uVar7 = *(undefined4 *)((longlong)pdVar12 + 0x24);
  uVar8 = *(undefined4 *)(pdVar12 + 5);
  uVar9 = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  *param_2 = *(undefined4 *)(pdVar12 + 4);
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  if (((ulonglong)local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04034 FUN_147a04034 body=97 status=ok
// SIG undefined FUN_147a04034(void)

void FUN_147a04034(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_140732c36(param_2,0);
  }
  for (lVar2 = *(longlong *)(param_1 + 0x120); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x120)) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_140612240(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 147a04096 FUN_147a04096 body=193 status=ok
// SIG undefined FUN_147a04096(void)

void FUN_147a04096(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  pdVar6 = (double *)(lVar1 + 0x20);
  pdVar4 = (double *)(lVar1 + 0x28);
  pdVar2 = (double *)(lVar1 + 0x30);
  if (lVar1 == 0) {
    pdVar2 = (double *)&DAT_14c846508;
    pdVar4 = (double *)&DAT_14c846500;
    pdVar6 = (double *)&DAT_14c8464f8;
  }
  lVar1 = *param_2;
  pdVar7 = (double *)(lVar1 + 0x20);
  pdVar5 = (double *)(lVar1 + 0x28);
  pdVar3 = (double *)(lVar1 + 0x30);
  if (lVar1 == 0) {
    pdVar3 = (double *)&DAT_14c846508;
    pdVar5 = (double *)&DAT_14c846500;
    pdVar7 = (double *)&DAT_14c8464f8;
  }
  dVar8 = *pdVar6;
  if ((dVar8 == *pdVar7) && (!NAN(dVar8) && !NAN(*pdVar7))) {
    dVar8 = *pdVar4;
    if ((dVar8 == *pdVar5) && (!NAN(dVar8) && !NAN(*pdVar5))) {
      dVar8 = *pdVar2;
      if ((dVar8 == *pdVar3) && (!NAN(dVar8) && !NAN(*pdVar3))) {
        return;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    FUN_1447a91cc(dVar8,0,0);
  }
  FUN_147a04158(param_1 + 0x230,param_2);
  return;
}



// FUNCTION 147a04158 FUN_147a04158 body=254 status=ok
// SIG undefined FUN_147a04158(void)

longlong * FUN_147a04158(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0 || puVar5 != (undefined8 *)0x0) {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = DAT_14c8463d8;
      *puVar4 = DAT_14c8463d0;
      puVar4[1] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar4[2] = DAT_14c8463e0;
      puVar4[3] = uVar2;
      uVar2 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      puVar4[4] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      puVar4[5] = uVar2;
      puVar4[6] = DAT_14c846508;
      *param_1 = (longlong)puVar4;
      puVar5 = (undefined8 *)*param_2;
    }
    puVar6 = &DAT_14c8463d0;
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5;
    }
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar7 = *(undefined4 *)((longlong)puVar6 + 0x14);
    uStack_20 = *(undefined4 *)(puVar6 + 3);
    uStack_1c = *(undefined4 *)((longlong)puVar6 + 0x1c);
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar6 + 2);
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar7;
    *(undefined4 *)(puVar4 + 3) = uStack_20;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_1c;
    *puVar4 = uVar2;
    puVar4[1] = uVar3;
    lVar1 = *param_2;
    if (lVar1 == 0) {
      local_28 = DAT_14c846508;
      uVar7 = (undefined4)DAT_14c8464f8;
      uVar8 = DAT_14c8464f8._4_4_;
      uVar9 = (undefined4)DAT_14c846500;
      uVar10 = DAT_14c846500._4_4_;
    }
    else {
      local_28 = *(undefined8 *)(lVar1 + 0x30);
      uVar7 = *(undefined4 *)(lVar1 + 0x20);
      uVar8 = *(undefined4 *)(lVar1 + 0x24);
      uVar9 = *(undefined4 *)(lVar1 + 0x28);
      uVar10 = *(undefined4 *)(lVar1 + 0x2c);
    }
    _local_38 = CONCAT44(uVar8,uVar7);
    _uStack_30 = CONCAT44(uVar10,uVar9);
    puVar4[6] = local_28;
    *(undefined4 *)(puVar4 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar4 + 0x24) = uVar8;
    *(undefined4 *)(puVar4 + 5) = uVar9;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar10;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04258 FUN_147a04258 body=154 status=ok
// SIG undefined FUN_147a04258(void)

void FUN_147a04258(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_38 [44];
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  local_a = 0;
  local_9 = param_5;
  if (param_4 == 3) {
    local_c._0_1_ = 2;
    uVar1 = 2;
    local_a = 2;
  }
  else if (param_4 == 2) {
    local_c._0_1_ = 2;
    local_a = 1;
    uVar1 = 2;
  }
  else {
    if (param_4 != 1) goto LAB_147a042c5;
    local_c._0_1_ = 1;
    uVar1 = 1;
    local_a = 1;
  }
  local_c = CONCAT11(uVar1,(undefined1)local_c);
LAB_147a042c5:
  (**(code **)(*param_1 + 0x490))(param_1,param_2,&local_c,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a042f4 FUN_147a042f4 body=33 status=ok
// SIG undefined FUN_147a042f4(void)

void FUN_147a042f4(uint param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  
  if (param_1 < 4) {
    bVar2 = (byte)(param_1 << 3);
    uVar1 = (undefined1)(0x2020100 >> (bVar2 & 0x1f));
    *param_2 = uVar1;
    *param_3 = uVar1;
    *param_4 = (char)(0x2010100 >> (bVar2 & 0x1f));
  }
  return;
}



// FUNCTION 147a04316 FUN_147a04316 body=98 status=ok
// SIG undefined FUN_147a04316(void)

void FUN_147a04316(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_38 [36];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_13 = param_5;
  local_12 = param_6;
  local_11 = param_7;
  local_14 = param_4;
  (**(code **)(*param_1 + 0x490))();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0437a FUN_147a0437a body=93 status=ok
// SIG undefined FUN_147a0437a(void)

void FUN_147a0437a(longlong *param_1,char param_2,undefined1 param_3)

{
  undefined1 auStack_38 [44];
  undefined2 local_c;
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  local_a = param_2 != '\0';
  if ((bool)local_a) {
    local_c = 0x101;
  }
  local_9 = param_3;
  (**(code **)(*param_1 + 0x4a0))(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a043d8 FUN_147a043d8 body=83 status=ok
// SIG undefined FUN_147a043d8(void)

void FUN_147a043d8(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_38 [44];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_5;
  local_c = param_2;
  local_b = param_3;
  local_a = param_4;
  (**(code **)(*param_1 + 0x4a0))(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0442c FUN_147a0442c body=21 status=ok
// SIG undefined FUN_147a0442c(void)

void FUN_147a0442c(longlong param_1)

{
  do {
    if (param_1 == 0) {
      return;
    }
    param_1 = *(longlong *)(param_1 + 0x120);
  } while (param_1 != 0);
  return;
}



// FUNCTION 147a04442 FUN_147a04442 body=526 status=ok
// SIG undefined FUN_147a04442(void)

undefined8 * FUN_147a04442(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined1 local_94 [4];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1479b5da0();
  *param_1 = &PTR_FUN_14a544a90;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (0 < (longlong)*(int *)(param_2 + 0x140)) {
    lVar3 = *(longlong *)(param_2 + 0xa8);
    uVar8 = (longlong)*(int *)(param_2 + 0x140) + 1;
    do {
      local_b0 = *(longlong *)(*(longlong *)(param_2 + 0x138) + -0x10 + uVar8 * 8);
      if ((((local_b0 != 0) && (*(longlong *)(local_b0 + 0xa8) == lVar3)) &&
          (1 < (byte)(*(char *)(local_b0 + 0xb9) - 1U))) &&
         ((*(uint *)(local_b0 + 8) >> 0x12 & 1) == 0)) {
        uVar4 = *(undefined8 *)(local_b0 + 0x198);
        uVar5 = *(undefined8 *)(local_b0 + 0x1a0);
        uVar1 = *(undefined8 *)(local_b0 + 0x1a8);
        uVar6 = *(undefined8 *)(local_b0 + 0x1c8);
        uVar7 = *(undefined8 *)(local_b0 + 0x1d0);
        uVar2 = *(undefined8 *)(local_b0 + 0x1d8);
        local_128 = *(undefined8 *)(local_b0 + 0x1c0);
        local_138 = *(undefined4 *)(local_b0 + 0x1b0);
        uStack_134 = *(undefined4 *)(local_b0 + 0x1b4);
        uStack_130 = *(undefined4 *)(local_b0 + 0x1b8);
        uStack_12c = *(undefined4 *)(local_b0 + 0x1bc);
        FUN_144a7484c(&local_138,local_118);
        uStack_e0 = 0;
        uStack_c0 = 0;
        local_f8 = uVar4;
        uStack_f0 = uVar5;
        local_e8 = uVar1;
        local_d8 = uVar6;
        uStack_d0 = uVar7;
        local_c8 = uVar2;
        local_a8 = &local_b0;
        local_a0 = local_118;
        FUN_147a143d8(param_1 + 0x22,local_94,&local_a8);
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147a04652 FUN_147a04652 body=24 status=ok
// SIG undefined FUN_147a04652(void)

bool FUN_147a04652(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x118) <= *(int *)(param_1 + 0x144)) {
    bVar1 = 0 < *(int *)(param_1 + 0x10);
  }
  return bVar1;
}



// FUNCTION 147a0466a FUN_147a0466a body=367 status=ok
// SIG undefined FUN_147a0466a(void)

void FUN_147a0466a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar1 = param_2[6];
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),5);
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar3;
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1448052ee(&local_78,&local_90);
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),6);
  *(undefined8 *)(param_1 + 0x1c0) = local_80;
  *(undefined8 *)(param_1 + 0x1b0) = local_90;
  *(undefined8 *)(param_1 + 0x1b8) = uStack_88;
  dVar4 = SUB168(*(undefined1 (*) [16])(param_2 + 8),0);
  dVar5 = (double)param_2[9];
  if (ABS((float)dVar4) < 0.001) {
    dVar4 = (double)((ulonglong)(SUB164(*(undefined1 (*) [16])(param_2 + 8),4) & 0x80000000) << 0x20
                    | 0x3f50624de0000000);
  }
  dVar6 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
  if (ABS((float)dVar5) < 0.001) {
    dVar5 = (double)((ulonglong)((uint)((ulonglong)dVar5 >> 0x20) & 0x80000000) << 0x20 |
                    0x3f50624de0000000);
  }
  if (ABS((float)dVar6) < 0.001) {
    dVar6 = (double)((ulonglong)(SUB164(*(undefined1 (*) [16])(param_2 + 10),4) & 0x80000000) <<
                     0x20 | 0x3f50624de0000000);
  }
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),7);
  *(double *)(param_1 + 0x1c8) = dVar4;
  *(double *)(param_1 + 0x1d0) = dVar5;
  *(double *)(param_1 + 0x1d8) = dVar6;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a047da FUN_147a047da body=93 status=ok
// SIG undefined FUN_147a047da(void)

undefined8 * FUN_147a047da(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  FUN_144a7c084(param_2);
  *param_2 = &PTR_FUN_14a544b40;
  FUN_147a14576(param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04838 FUN_147a04838 body=223 status=ok
// SIG undefined FUN_147a04838(void)

longlong * FUN_147a04838(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_58);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_50 & 0xffffffff);
  }
  if ((uStack_50 & 0xffffffff) != 0) {
    FUN_1402191ca(param_2);
    lVar2 = local_58;
    lVar3 = (longlong)(int)uStack_50;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4);
        lVar4 = lVar4 + 0xc;
      } while (lVar3 * 0xc != lVar4);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a0491a FUN_147a0491a body=102 status=ok
// SIG undefined FUN_147a0491a(void)

undefined8 * FUN_147a0491a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_78,param_3,0);
  *param_2 = local_78;
  param_2[1] = uStack_70;
  *(undefined4 *)(param_2 + 2) = local_68;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_64;
  *(undefined4 *)(param_2 + 3) = uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0499e FUN_147a0499e body=124 status=ok
// SIG undefined FUN_147a0499e(void)

ulonglong FUN_147a0499e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  byte bVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar4 = FUN_144b1f45c(lVar1);
    if (lVar4 != 0) {
      cVar3 = FUN_147a0499e(lVar4);
      if (cVar3 == '\0') {
        uVar5 = 0;
        goto LAB_147a049ec;
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
    if (lVar4 != 0) goto LAB_147a049cc;
    uVar6 = 0;
    bVar2 = 1;
  }
  else {
LAB_147a049cc:
    uVar6 = (undefined7)((ulonglong)lVar4 >> 8);
    bVar2 = 1;
    if (*(byte *)(lVar4 + 0x152) < 7) {
      bVar2 = 0x15 >> (*(byte *)(lVar4 + 0x152) & 0x1f);
    }
  }
  if (lVar1 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)(lVar1 + 0x60) >> 7;
  }
  uVar5 = CONCAT71(uVar6,bVar2 | bVar7) ^ 1;
LAB_147a049ec:
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 147a04a1a FUN_147a04a1a body=33 status=ok
// SIG undefined FUN_147a04a1a(void)

undefined8 FUN_147a04a1a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x528))(param_1,param_2,&DAT_14c846480);
  return param_2;
}



// FUNCTION 147a04a5a FUN_147a04a5a body=133 status=ok
// SIG undefined FUN_147a04a5a(void)

void FUN_147a04a5a(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,char param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == '\0') {
    param_5 = 0;
  }
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_18 = param_3[2];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  local_50 = param_6;
  local_58 = param_5;
  FUN_1401ca0e6(local_48,&local_48,&local_28);
  if ((local_8 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a04ae0 FUN_147a04ae0 body=672 status=ok
// SIG undefined FUN_147a04ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a04ae0(longlong param_1,double *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  auVar10 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar6 = auVar10._0_8_;
  dVar7 = auVar10._8_8_;
  dVar15 = *(double *)(param_1 + 0x1c0);
  puVar9 = *(undefined8 **)(param_1 + 0x230);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar8 = DAT_14c8463d8;
    *puVar9 = DAT_14c8463d0;
    puVar9[1] = uVar8;
    uVar8 = DAT_14c8463e8;
    puVar9[2] = DAT_14c8463e0;
    puVar9[3] = uVar8;
    uVar8 = DAT_14c846500;
    puVar9[4] = DAT_14c8464f8;
    puVar9[5] = uVar8;
    puVar9[6] = DAT_14c846508;
    *(undefined8 **)(param_1 + 0x230) = puVar9;
  }
  if (((((double)puVar9[4] == dVar6) && (!NAN((double)puVar9[4]) && !NAN(dVar6))) &&
      ((double)puVar9[5] == dVar7)) && (!NAN((double)puVar9[5]) && !NAN(dVar7))) {
    if (((double)puVar9[6] == dVar15) && (!NAN((double)puVar9[6]) && !NAN(dVar15)))
    goto LAB_147a04c85;
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar15;
  dVar4 = (double)DAT_1499387d0;
  dVar5 = DAT_1499387d0._8_8_;
  auVar10 = divpd(auVar10,_DAT_1499387d0);
  auVar13 = divpd(auVar18,_DAT_1499387d0);
  auVar10 = roundpd(auVar10,auVar10,3);
  auVar13 = roundpd(auVar13,auVar13,3);
  dVar6 = dVar6 - auVar10._0_8_ * dVar4;
  dVar7 = dVar7 - auVar10._8_8_ * dVar5;
  auVar19._0_8_ = dVar15 - auVar13._0_8_ * dVar4;
  auVar19._8_8_ = 0.0 - auVar13._8_8_ * dVar5;
  auVar17._0_8_ = dVar6 + dVar4;
  auVar17._8_8_ = dVar7 + dVar5;
  auVar16._0_8_ = dVar4 + auVar19._0_8_;
  auVar16._8_8_ = dVar5 + auVar19._8_8_;
  auVar13._8_8_ = -(ulonglong)(0.0 <= dVar7);
  auVar13._0_8_ = -(ulonglong)(0.0 <= dVar6);
  auVar10._8_4_ = SUB84(dVar7,0);
  auVar10._0_8_ = dVar6;
  auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar13 = blendvpd(auVar17,auVar10,auVar13);
  auVar11._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
  auVar11._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
  auVar10 = blendvpd(auVar16,auVar19,auVar11);
  auVar14._0_8_ = auVar13._0_8_ + -360.0;
  auVar14._8_8_ = auVar13._8_8_ + -360.0;
  auVar12._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
  auVar12._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
  auVar13 = blendvpd(auVar13,auVar14,auVar12);
  dVar15 = auVar10._0_8_;
  *(undefined1 (*) [16])(puVar9 + 4) = auVar13;
  puVar9[6] = ~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
              (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15);
  FUN_144a7484c(puVar9 + 4,&local_b8);
  puVar9[2] = local_a8;
  puVar9[3] = uStack_a0;
  *puVar9 = local_b8;
  puVar9[1] = uStack_b0;
LAB_147a04c85:
  local_e8 = 0;
  if ((char)param_3 != '\0') {
    local_e8 = param_4;
  }
  local_b8 = *puVar9;
  uStack_b0 = puVar9[1];
  local_a8 = puVar9[2];
  uStack_a0 = puVar9[3];
  local_c0 = dVar3 + *(double *)(param_1 + 0x1a8);
  local_c8 = dVar2 + *(double *)(param_1 + 0x1a0);
  local_d0 = dVar1 + *(double *)(param_1 + 0x198);
  local_e0 = param_5;
  FUN_144927ad4(param_1,&local_d0,&local_b8,param_3);
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04d82 FUN_147a04d82 body=126 status=ok
// SIG undefined FUN_147a04d82(void)

void FUN_147a04d82(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_10 = param_2[2] + *(double *)(param_1 + 0x1c0);
  local_18 = param_2[1] + *(double *)(param_1 + 0x1b8);
  local_20 = *param_2 + *(double *)(param_1 + 0x1b0);
  local_28 = param_5;
  FUN_14020f75c(local_20,&local_20,local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04e02 FUN_147a04e02 body=95 status=ok
// SIG undefined FUN_147a04e02(void)

void FUN_147a04e02(undefined8 param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = param_5;
  FUN_147a03362(local_28,&local_28,param_3,param_4);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04e62 FUN_147a04e62 body=95 status=ok
// SIG undefined FUN_147a04e62(void)

void FUN_147a04e62(undefined8 param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = param_5;
  FUN_147a036b8(local_28,&local_28,param_3,param_4);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04ec2 FUN_147a04ec2 body=14 status=ok
// SIG undefined FUN_147a04ec2(void)

void FUN_147a04ec2(void)

{
  FUN_1417bf298();
  return;
}



// FUNCTION 147a04ed0 FUN_147a04ed0 body=95 status=ok
// SIG undefined FUN_147a04ed0(void)

void FUN_147a04ed0(undefined8 param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = param_5;
  FUN_140d93b16(local_28,&local_28,param_3,param_4);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04f30 FUN_147a04f30 body=126 status=ok
// SIG undefined FUN_147a04f30(void)

void FUN_147a04f30(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_10 = param_2[2] + *(double *)(param_1 + 0x270);
  local_18 = param_2[1] + *(double *)(param_1 + 0x268);
  local_20 = *param_2 + *(double *)(param_1 + 0x260);
  local_28 = param_5;
  FUN_140d93b16(local_20,&local_20,local_10,param_4);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a04fb0 FUN_147a04fb0 body=95 status=ok
// SIG undefined FUN_147a04fb0(void)

void FUN_147a04fb0(undefined8 param_1,undefined4 *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = param_5;
  FUN_147a039bc(local_28,&local_28,param_3,param_4);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05010 FUN_147a05010 body=378 status=ok
// SIG undefined FUN_147a05010(void)

void FUN_147a05010(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar7 = *(double *)(param_1 + 0x240);
  dVar8 = *(double *)(param_1 + 0x248);
  dVar9 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  dVar3 = param_2[1];
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar6 = param_2[2];
  local_b8 = dVar8 * dVar5 * -1.0 + dVar9 * dVar3 + *param_2 * dVar10 * 1.0 + dVar1 * dVar7;
  dStack_b0 = dVar7 * dVar6 * 1.0 + dVar10 * dVar4 + *param_2 * dVar9 * -1.0 + dVar2 * dVar8;
  local_a8 = dVar10 * dVar5 * 1.0 + ((*param_2 * dVar8 * 1.0 + dVar1 * dVar9) - dVar3 * dVar7);
  dStack_a0 = dVar9 * dVar6 * -1.0 + ((*param_2 * dVar7 * -1.0 + dVar2 * dVar10) - dVar4 * dVar8);
  dVar1 = *(double *)(param_1 + 0x268) + param_2[5];
  local_88 = *(double *)(param_1 + 0x270) + param_2[6];
  local_98._8_4_ = SUB84(dVar1,0);
  local_98._0_8_ = *(double *)(param_1 + 0x260) + param_2[4];
  local_98._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_c8 = param_5;
  FUN_140613f88(0,&local_b8,local_88,param_4);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0518c FUN_147a0518c body=378 status=ok
// SIG undefined FUN_147a0518c(void)

void FUN_147a0518c(longlong param_1,double *param_2,char param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == '\0') {
    param_4 = 0;
  }
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar7 = *(double *)(param_1 + 0x240);
  dVar8 = *(double *)(param_1 + 0x248);
  dVar9 = *(double *)(param_1 + 0x250);
  dVar10 = *(double *)(param_1 + 600);
  dVar3 = param_2[1];
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar6 = param_2[2];
  local_b8 = dVar8 * dVar5 * -1.0 + dVar9 * dVar3 + *param_2 * dVar10 * 1.0 + dVar1 * dVar7;
  dStack_b0 = dVar7 * dVar6 * 1.0 + dVar10 * dVar4 + *param_2 * dVar9 * -1.0 + dVar2 * dVar8;
  local_a8 = dVar10 * dVar5 * 1.0 + ((*param_2 * dVar8 * 1.0 + dVar1 * dVar9) - dVar3 * dVar7);
  dStack_a0 = dVar9 * dVar6 * -1.0 + ((*param_2 * dVar7 * -1.0 + dVar2 * dVar10) - dVar4 * dVar8);
  local_98 = *(double *)(param_1 + 0x260) + param_2[4];
  dStack_90 = *(double *)(param_1 + 0x268) + param_2[5];
  local_88 = *(double *)(param_1 + 0x270) + param_2[6];
  local_78 = *(undefined4 *)(param_1 + 0x280);
  uStack_74 = *(undefined4 *)(param_1 + 0x284);
  uStack_70 = *(undefined4 *)(param_1 + 0x288);
  uStack_6c = *(undefined4 *)(param_1 + 0x28c);
  local_68 = *(undefined8 *)(param_1 + 0x290);
  uStack_80 = 0;
  uStack_60 = 0;
  local_c8 = param_5;
  FUN_140613f88(local_98,&local_b8,local_88,param_4);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05308 FUN_147a05308 body=164 status=ok
// SIG undefined FUN_147a05308(void)

void FUN_147a05308(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x638) = local_1c;
  FUN_1448215fa(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a053ae FUN_147a053ae body=13 status=ok
// SIG undefined FUN_147a053ae(void)

void FUN_147a053ae(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x638) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 147a053de FUN_147a053de body=75 status=ok
// SIG undefined FUN_147a053de(void)

void FUN_147a053de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1448284b2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05456 FUN_147a05456 body=137 status=ok
// SIG undefined FUN_147a05456(void)

void FUN_147a05456(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479eea3c();
  if ((*(byte *)(param_1 + 900) & 4) != 0) {
    local_30 = 0;
    FUN_147a054e0(param_1 + -0x2a8,local_38);
    FUN_1433c458e(param_2 + 0x88,param_1 + -0x2a8,local_38,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a054e0 FUN_147a054e0 body=67 status=ok
// SIG undefined FUN_147a054e0(void)

longlong * FUN_147a054e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x62c) & 8) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x630);
    *param_2 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  else {
    FUN_1478c98d9(param_2);
  }
  return param_2;
}



// FUNCTION 147a0552a FUN_147a0552a body=347 status=ok
// SIG undefined FUN_147a0552a(void)

void FUN_147a0552a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d19f4e(param_1,puVar2,local_2c,local_30 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05686 FUN_147a05686 body=238 status=ok
// SIG undefined FUN_147a05686(void)

void FUN_147a05686(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459db936(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05782 FUN_147a05782 body=442 status=ok
// SIG undefined FUN_147a05782(void)

void FUN_147a05782(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  local_78 = local_48 != 0;
  (**(code **)(*param_1 + 0xc88))(param_1,&local_68,local_40,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0594a FUN_147a0594a body=442 status=ok
// SIG undefined FUN_147a0594a(void)

void FUN_147a0594a(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  local_78 = local_48 != 0;
  (**(code **)(*param_1 + 0xc90))(param_1,&local_68,local_40,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05b0c FUN_147a05b0c body=308 status=ok
// SIG undefined FUN_147a05b0c(void)

void FUN_147a05b0c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  uVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)(param_1 + 0xc7d) == (local_2c != 0)) {
    iVar1 = *(int *)(param_1 + 0xc88);
    *(uint *)(param_1 + 0xc88) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xc8c) < iVar1 + 1U) {
      FUN_1446f84a2(param_1 + 0xc80,iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0xc80) + (longlong)iVar1 * 8) = uVar2;
    *(undefined2 *)(param_1 + 0xc74) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05c58 FUN_147a05c58 body=130 status=ok
// SIG undefined FUN_147a05c58(void)

void FUN_147a05c58(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x668);
  if (lVar1 != 0) {
    lVar2 = FUN_144a74fb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_144a81888(param_1);
      lVar3 = FUN_144a81888(lVar1);
      if ((lVar2 == lVar3) &&
         ((*(longlong *)(param_1 + 0xe50) != 0 && (*(longlong *)(lVar1 + 0xe50) != 0)))) {
        *(byte *)(param_1 + 0xc62) = *(byte *)(param_1 + 0xc62) | 4;
        *(byte *)(param_1 + 0xc68) = *(byte *)(param_1 + 0xc68) | 4;
      }
    }
  }
  return;
}



// FUNCTION 147a05cda FUN_147a05cda body=361 status=ok
// SIG undefined FUN_147a05cda(void)

void FUN_147a05cda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_58 = local_38;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_78 = local_20;
  FUN_147d1a852(param_1,&local_88,&local_68,local_50);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05e70 FUN_147a05e70 body=174 status=ok
// SIG undefined FUN_147a05e70(void)

void FUN_147a05e70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147d1a352(param_1,&local_30,local_24);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a05fcc FUN_147a05fcc body=96 status=ok
// SIG undefined FUN_147a05fcc(void)

void FUN_147a05fcc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0xae0);
  if (lVar1 != 0) {
    lVar2 = FUN_1402e44f4();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar3 = *(undefined8 *)(param_1 + 0xae0);
      goto LAB_147a06018;
    }
  }
  uVar3 = 0;
LAB_147a06018:
  *param_3 = uVar3;
  return;
}



// FUNCTION 147a06048 FUN_147a06048 body=196 status=ok
// SIG undefined FUN_147a06048(void)

void FUN_147a06048(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1990a(param_1,&local_40,puVar1);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a06114 FUN_147a06114 body=250 status=ok
// SIG undefined FUN_147a06114(void)

void FUN_147a06114(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d1c52e(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0622c FUN_147a0622c body=39 status=ok
// SIG undefined FUN_147a0622c(void)

void FUN_147a0622c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1436b8c10();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a0625a FUN_147a0625a body=274 status=ok
// SIG undefined FUN_147a0625a(void)

void FUN_147a0625a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1a454(param_1,&local_38,local_28,local_2c != 0);
  *(undefined4 *)(param_3 + 1) = local_30;
  *param_3 = local_38;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a06372 FUN_147a06372 body=273 status=ok
// SIG undefined FUN_147a06372(void)

void FUN_147a06372(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1a532(param_1,iVar1 != 0,plVar2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a06496 FUN_147a06496 body=545 status=ok
// SIG undefined FUN_147a06496(void)

void FUN_147a06496(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong *local_60;
  longlong local_58 [2];
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_144a63fc8();
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
  iVar3 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar2 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_60 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_60 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = iVar1 != 0;
  FUN_147d1a646(param_1,local_38,iVar3 != 0,iVar2 != 0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a066b8 FUN_147a066b8 body=467 status=ok
// SIG undefined FUN_147a066b8(void)

void FUN_147a066b8(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_40;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  local_58 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_58 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1ab28(param_1,local_38,puVar2,puVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a068d2 FUN_147a068d2 body=527 status=ok
// SIG undefined FUN_147a068d2(void)

void FUN_147a068d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_68 = &local_50;
  if (puVar2 != (undefined4 *)0x0) {
    local_68 = puVar2;
  }
  puVar5 = &local_48;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_51;
  uVar3 = FUN_147a0cd60(param_1,puVar4,puVar5,local_4c);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a06ae8 FUN_147a06ae8 body=455 status=ok
// SIG undefined FUN_147a06ae8(void)

void FUN_147a06ae8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  local_68 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    local_68 = puVar2;
  }
  puVar5 = &local_48;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_4d;
  uVar3 = FUN_147a0cd60(param_1,puVar4,puVar5,*local_68);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a06cb6 FUN_147a06cb6 body=526 status=ok
// SIG undefined FUN_147a06cb6(void)

void FUN_147a06cb6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_51 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_51);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_51);
  }
  local_68 = &local_50;
  if (puVar2 != (undefined4 *)0x0) {
    local_68 = puVar2;
  }
  puVar5 = &local_48;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_51;
  uVar3 = FUN_147a0d1be(param_1,puVar4,puVar5,local_4c);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a06ecc FUN_147a06ecc body=454 status=ok
// SIG undefined FUN_147a06ecc(void)

void FUN_147a06ecc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined1 local_60;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  local_68 = &local_4c;
  if (puVar2 != (undefined4 *)0x0) {
    local_68 = puVar2;
  }
  puVar5 = &local_48;
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_4d;
  uVar3 = FUN_147a0d1be(param_1,puVar4,puVar5,*local_68);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07094 FUN_147a07094 body=186 status=ok
// SIG undefined FUN_147a07094(void)

void FUN_147a07094(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(byte *)(param_1 + 0xc70) & 0x20) == 0) || (*(longlong *)(param_1 + 0xae8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1478eeff6(*(longlong *)(param_1 + 0xae8),local_28);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07150 FUN_147a07150 body=288 status=ok
// SIG undefined FUN_147a07150(void)

void FUN_147a07150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(byte *)(param_1 + 0xc70) & 0x20) != 0) && (*(longlong *)(param_1 + 0xae8) != 0)) {
    FUN_1478ef178(*(longlong *)(param_1 + 0xae8),local_20,plVar1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07272 FUN_147a07272 body=193 status=ok
// SIG undefined FUN_147a07272(void)

void FUN_147a07272(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147a07334(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07334 FUN_147a07334 body=120 status=ok
// SIG undefined FUN_147a07334(void)

undefined8 FUN_147a07334(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(byte *)(param_1 + 0xc70) & 0x20) == 0) ||
     (lVar1 = *(longlong *)(param_1 + 0xae8), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    local_18 = *param_2;
    if ((local_18 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar2 = FUN_1478ef2d4(lVar1,&local_18,0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a073ae FUN_147a073ae body=186 status=ok
// SIG undefined FUN_147a073ae(void)

void FUN_147a073ae(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((*(byte *)(param_1 + 0xc70) & 0x20) == 0) || (*(longlong *)(param_1 + 0xae8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1478ef4b0(*(longlong *)(param_1 + 0xae8),local_28);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a0746a FUN_147a0746a body=165 status=ok
// SIG undefined FUN_147a0746a(void)

void FUN_147a0746a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a07510(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a07510 FUN_147a07510 body=170 status=ok
// SIG undefined FUN_147a07510(void)

undefined4 FUN_147a07510(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xed8) != *(int *)(param_1 + 0xf04)) {
    uVar2 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar4 = param_1 + 0xf08;
    if (*(longlong *)(param_1 + 0xf10) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf10);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xf18) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar2 << 0x13 | uVar2) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xed0) + (longlong)iVar3 * 0x14);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          return (int)plVar1[1];
        }
        iVar3 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a075ba FUN_147a075ba body=39 status=ok
// SIG undefined FUN_147a075ba(void)

void FUN_147a075ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14348c06a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a075e2 FUN_147a075e2 body=39 status=ok
// SIG undefined FUN_147a075e2(void)

void FUN_147a075e2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14348c0c6();
  *param_3 = uVar1;
  return;
}


