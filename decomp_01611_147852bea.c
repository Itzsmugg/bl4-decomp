// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147852bea FUN_147852bea body=230 status=ok
// SIG undefined FUN_147852bea(void)

int * FUN_147852bea(longlong *param_1,int *param_2)

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



// FUNCTION 147852cd0 FUN_147852cd0 body=196 status=ok
// SIG undefined FUN_147852cd0(void)

undefined8 FUN_147852cd0(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar9 = FUN_1478529ec(param_1,param_2,&local_38);
    if (iVar9 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
      if (*(longlong *)(puVar1 + 2) != 0) {
        FUN_1400020a8();
      }
      lVar6 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar7 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar8 = param_3[3];
      uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar1[4] = (int)param_3[2];
      puVar1[5] = uVar4;
      puVar1[6] = (int)lVar8;
      puVar1[7] = uVar5;
      *puVar1 = (int)lVar6;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar7;
      puVar1[3] = uVar3;
      FUN_147852d96(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_147852cf6;
    }
  }
  uVar10 = 0;
LAB_147852cf6:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147852d96 FUN_147852d96 body=114 status=ok
// SIG undefined FUN_147852d96(void)

void FUN_147852d96(longlong *param_1,int param_2)

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



// FUNCTION 147852e08 FUN_147852e08 body=510 status=ok
// SIG undefined FUN_147852e08(void)

void FUN_147852e08(longlong *param_1)

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
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x28);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x28;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 147853008 FUN_147853008 body=133 status=ok
// SIG undefined FUN_147853008(void)

longlong FUN_147853008(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14785308e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_147853041;
  }
  local_30 = param_3;
  FUN_14785315e(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_147853041:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785308e FUN_14785308e body=207 status=ok
// SIG undefined FUN_14785308e(void)

int FUN_14785308e(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
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



// FUNCTION 14785315e FUN_14785315e body=296 status=ok
// SIG undefined FUN_14785315e(void)

undefined4 * FUN_14785315e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147853288(param_1,local_40);
  lVar5 = *(longlong *)*param_4;
  *local_38 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  cVar1 = FUN_14785336e(param_1,param_3,local_38);
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
      *(uint *)((longlong)local_38 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1478534a6(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147853288 FUN_147853288 body=229 status=ok
// SIG undefined FUN_147853288(void)

int * FUN_147853288(longlong *param_1,int *param_2)

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



// FUNCTION 14785336e FUN_14785336e body=196 status=ok
// SIG undefined FUN_14785336e(void)

undefined8 FUN_14785336e(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = FUN_14785308e(param_1,param_2,&local_38);
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar5 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar4;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar5;
      puVar1[3] = uVar3;
      FUN_147853434(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_147853394;
    }
  }
  uVar7 = 0;
LAB_147853394:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147853434 FUN_147853434 body=114 status=ok
// SIG undefined FUN_147853434(void)

void FUN_147853434(longlong *param_1,int param_2)

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



// FUNCTION 1478534a6 FUN_1478534a6 body=510 status=ok
// SIG undefined FUN_1478534a6(void)

void FUN_1478534a6(longlong *param_1)

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
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x20);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x20;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x1c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x18) =
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



// FUNCTION 1478536a6 FUN_1478536a6 body=96 status=ok
// SIG undefined FUN_1478536a6(void)

void FUN_1478536a6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_147853706();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1478537c6(param_1,iVar2);
    }
    lVar1 = *param_2;
    *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      return;
    }
  }
  return;
}



// FUNCTION 147853706 FUN_147853706 body=191 status=ok
// SIG undefined FUN_147853706(void)

ulonglong FUN_147853706(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      if ((((lVar5 == 0) || (lVar2 = FUN_1458854ca(), lVar2 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      }
      lVar2 = *param_2;
      if (((lVar2 == 0) || (lVar3 = FUN_1458854ca(), lVar3 == 0)) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      if (lVar5 == lVar2) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 1478537c6 FUN_1478537c6 body=132 status=ok
// SIG undefined FUN_1478537c6(void)

void FUN_1478537c6(longlong param_1,int param_2)

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



// FUNCTION 14785384b FUN_14785384b body=47 status=ok
// SIG undefined FUN_14785384b(void)

void FUN_14785384b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14785387a FUN_14785387a body=128 status=ok
// SIG undefined FUN_14785387a(void)

void FUN_14785387a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147851e8c(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1478538fa FUN_1478538fa body=90 status=ok
// SIG undefined FUN_1478538fa(void)

void FUN_1478538fa(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    puVar2 = param_1;
  }
  FUN_1433a36f6(param_1 + 0x15);
  FUN_147853954(param_1 + 0x15);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147853949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147853954 FUN_147853954 body=68 status=ok
// SIG undefined FUN_147853954(void)

void FUN_147853954(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147846f78(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014785398d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147853998 FUN_147853998 body=90 status=ok
// SIG undefined FUN_147853998(void)

void FUN_147853998(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
    puVar2 = param_1;
  }
  FUN_1433a36f6(param_1 + 0x15);
  FUN_147853954(param_1 + 0x15);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478539e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1478539f2 FUN_1478539f2 body=48 status=ok
// SIG undefined FUN_1478539f2(void)

void FUN_1478539f2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 147853a22 FUN_147853a22 body=132 status=ok
// SIG undefined FUN_147853a22(void)

void FUN_147853a22(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147853aa8 FUN_147853aa8 body=145 status=ok
// SIG undefined FUN_147853aa8(void)

undefined8 FUN_147853aa8(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[6];
  puVar5 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar5 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar1 % 0x20) & 0x1fU);
  if ((int)uVar1 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if ((int)uVar1 < 1) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar7 = 0xffffffff;
    if (uVar1 < 0x21) {
      uVar7 = uVar6;
    }
    if ((*puVar5 & uVar7) == 0) {
      uVar4 = (ulonglong)uVar1 + 0x1f >> 5;
      uVar2 = 1;
      do {
        uVar8 = uVar2;
        if (uVar4 == uVar8) break;
        uVar7 = 0xffffffff;
        if (uVar8 - ((int)uVar4 - 2) == 1) {
          uVar7 = uVar6;
        }
        uVar2 = uVar8 + 1;
      } while ((puVar5[uVar8] & uVar7) == 0);
      uVar3 = CONCAT71((uint7)((ulonglong)uVar1 + 0x1f >> 0xd),uVar4 <= uVar8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147853b3a FUN_147853b3a body=132 status=ok
// SIG undefined FUN_147853b3a(void)

void FUN_147853b3a(longlong param_1,int param_2)

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



// FUNCTION 147853bc0 FUN_147853bc0 body=77 status=ok
// SIG undefined FUN_147853bc0(void)

void FUN_147853bc0(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar2 = param_1[4];
  uVar3 = param_1[1];
  do {
    iVar2 = iVar2 + 1;
    param_1[4] = iVar2;
    uVar3 = uVar3 * 2;
    param_1[1] = uVar3;
    if (uVar3 == 0) {
      param_1[1] = 1;
      *param_1 = *param_1 + 1;
      uVar3 = 1;
    }
    if (*(int *)(lVar1 + 0x18) <= iVar2) {
      return;
    }
    lVar4 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar4 = lVar1;
    }
  } while ((bool)(char)param_1[6] != ((*(uint *)(lVar4 + (longlong)*param_1 * 4) & uVar3) != 0));
  return;
}



// FUNCTION 147853c0e FUN_147853c0e body=77 status=ok
// SIG undefined FUN_147853c0e(void)

undefined8 * FUN_147853c0e(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  
  *param_1 = 0x100000000;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  if (0 < *(int *)(param_2 + 0x18)) {
    pbVar1 = *(byte **)(param_2 + 0x10);
    if (*(byte **)(param_2 + 0x10) == (byte *)0x0) {
      pbVar1 = param_2;
    }
    if ((*pbVar1 & 1) == 0) {
      FUN_147853bc0(param_1);
    }
  }
  return param_1;
}



// FUNCTION 147853c5c FUN_147853c5c body=77 status=ok
// SIG undefined FUN_147853c5c(void)

void FUN_147853c5c(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar2 = param_1[4];
  uVar3 = param_1[1];
  do {
    iVar2 = iVar2 + 1;
    param_1[4] = iVar2;
    uVar3 = uVar3 * 2;
    param_1[1] = uVar3;
    if (uVar3 == 0) {
      param_1[1] = 1;
      *param_1 = *param_1 + 1;
      uVar3 = 1;
    }
    if (*(int *)(lVar1 + 0x18) <= iVar2) {
      return;
    }
    lVar4 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar4 = lVar1;
    }
  } while ((bool)(char)param_1[6] != ((*(uint *)(lVar4 + (longlong)*param_1 * 4) & uVar3) != 0));
  return;
}



// FUNCTION 147853caa FUN_147853caa body=77 status=ok
// SIG undefined FUN_147853caa(void)

undefined8 * FUN_147853caa(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  
  *param_1 = 0x100000000;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  if (0 < *(int *)(param_2 + 0x18)) {
    pbVar1 = *(byte **)(param_2 + 0x10);
    if (*(byte **)(param_2 + 0x10) == (byte *)0x0) {
      pbVar1 = param_2;
    }
    if ((*pbVar1 & 1) == 0) {
      FUN_147853c5c(param_1);
    }
  }
  return param_1;
}



// FUNCTION 147853cf8 FUN_147853cf8 body=77 status=ok
// SIG undefined FUN_147853cf8(void)

void FUN_147853cf8(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar2 = param_1[4];
  uVar3 = param_1[1];
  do {
    iVar2 = iVar2 + 1;
    param_1[4] = iVar2;
    uVar3 = uVar3 * 2;
    param_1[1] = uVar3;
    if (uVar3 == 0) {
      param_1[1] = 1;
      *param_1 = *param_1 + 1;
      uVar3 = 1;
    }
    if (*(int *)(lVar1 + 0x18) <= iVar2) {
      return;
    }
    lVar4 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar4 = lVar1;
    }
  } while ((bool)(char)param_1[6] != ((*(uint *)(lVar4 + (longlong)*param_1 * 4) & uVar3) != 0));
  return;
}



// FUNCTION 147853d46 FUN_147853d46 body=81 status=ok
// SIG undefined FUN_147853d46(void)

undefined8 * FUN_147853d46(undefined8 *param_1,byte *param_2,byte param_3)

{
  byte *pbVar1;
  
  *param_1 = 0x100000000;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(byte *)(param_1 + 3) = param_3;
  if (0 < *(int *)(param_2 + 0x18)) {
    pbVar1 = *(byte **)(param_2 + 0x10);
    if (*(byte **)(param_2 + 0x10) == (byte *)0x0) {
      pbVar1 = param_2;
    }
    if ((*pbVar1 & 1) != param_3) {
      FUN_147853cf8(param_1);
    }
  }
  return param_1;
}



// FUNCTION 147853d98 FUN_147853d98 body=317 status=ok
// SIG undefined FUN_147853d98(void)

undefined4 * FUN_147853d98(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_2 + 0x12) = 0;
  FUN_147853f6e(param_1 + 0x14,param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_2 + 0x76);
  param_1[0x78] = param_2[0x78];
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7a) = *(undefined8 *)(param_2 + 0x7a);
  *(undefined8 *)(param_2 + 0x7a) = 0;
  param_1[0x7c] = param_2[0x7c];
  param_1[0x7d] = param_2[0x7d];
  *(undefined8 *)(param_2 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x7e) = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_2 + 0x7e) = 0;
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  *(undefined8 *)(param_2 + 0x80) = 0;
  return param_1;
}



// FUNCTION 147853ed6 FUN_147853ed6 body=150 status=ok
// SIG undefined FUN_147853ed6(void)

void FUN_147853ed6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x208,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x208)) {
      uVar5 = uVar4 / 0x208 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x208,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147853f6e FUN_147853f6e body=966 status=ok
// SIG undefined FUN_147853f6e(void)

void FUN_147853f6e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[2] = 0;
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    lVar2 = param_2[2];
  }
  param_1[2] = lVar2;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[6] = 0;
  lVar2 = param_2[6];
  if (lVar2 == 0) {
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    lVar2 = param_2[6];
  }
  param_1[6] = lVar2;
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[10] = 0;
  lVar2 = param_2[10];
  if (lVar2 == 0) {
    uVar1 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar1;
    lVar2 = param_2[10];
  }
  param_1[10] = lVar2;
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_2[0xb] = 0;
  param_1[0xe] = 0;
  lVar2 = param_2[0xe];
  if (lVar2 == 0) {
    uVar1 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar1;
    lVar2 = param_2[0xe];
  }
  param_1[0xe] = lVar2;
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x12] = 0;
  lVar2 = param_2[0x12];
  if (lVar2 == 0) {
    uVar1 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar1;
    lVar2 = param_2[0x12];
  }
  param_1[0x12] = lVar2;
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  param_1[0x16] = 0;
  lVar2 = param_2[0x16];
  if (lVar2 == 0) {
    uVar1 = param_2[0x15];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar1;
    lVar2 = param_2[0x16];
  }
  param_1[0x16] = lVar2;
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  param_1[0x1a] = 0;
  lVar2 = param_2[0x1a];
  if (lVar2 == 0) {
    uVar1 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar1;
    lVar2 = param_2[0x1a];
  }
  param_1[0x1a] = lVar2;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0;
  param_1[0x1e] = 0;
  lVar2 = param_2[0x1e];
  if (lVar2 == 0) {
    uVar1 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar1;
    lVar2 = param_2[0x1e];
  }
  param_1[0x1e] = lVar2;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  param_2[0x1f] = 0;
  param_1[0x22] = 0;
  lVar2 = param_2[0x22];
  if (lVar2 == 0) {
    uVar1 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = uVar1;
    lVar2 = param_2[0x22];
  }
  param_1[0x22] = lVar2;
  param_2[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_2[0x23] = 0;
  param_1[0x26] = 0;
  lVar2 = param_2[0x26];
  if (lVar2 == 0) {
    uVar1 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x25] = uVar1;
    lVar2 = param_2[0x26];
  }
  param_1[0x26] = lVar2;
  param_2[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  param_2[0x27] = 0;
  param_1[0x2a] = 0;
  lVar2 = param_2[0x2a];
  if (lVar2 == 0) {
    uVar1 = param_2[0x29];
    param_1[0x28] = param_2[0x28];
    param_1[0x29] = uVar1;
    lVar2 = param_2[0x2a];
  }
  param_1[0x2a] = lVar2;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0x15c);
  param_2[0x2b] = 0;
  param_1[0x2e] = 0;
  lVar2 = param_2[0x2e];
  if (lVar2 == 0) {
    uVar1 = param_2[0x2d];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = uVar1;
    lVar2 = param_2[0x2e];
  }
  param_1[0x2e] = lVar2;
  param_2[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  param_2[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



// FUNCTION 147854334 FUN_147854334 body=147 status=ok
// SIG undefined FUN_147854334(void)

void FUN_147854334(longlong param_1,int param_2)

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



// FUNCTION 1478543c8 FUN_1478543c8 body=48 status=ok
// SIG undefined FUN_1478543c8(void)

void FUN_1478543c8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x208,8);
  }
  return;
}



// FUNCTION 1478543f8 FUN_1478543f8 body=103 status=ok
// SIG undefined FUN_1478543f8(void)

void FUN_1478543f8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      if ((*(char *)(lVar1 + 9 + lVar4) != '\x02') && (*(char *)(lVar1 + 8 + lVar4) == '\x01')) {
        uVar3 = FUN_14688f974(&DAT_14cabdcd0,*(undefined8 *)(lVar1 + lVar4));
        FUN_14688fb8a(param_2,uVar3);
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147854460 FUN_147854460 body=250 status=ok
// SIG undefined FUN_147854460(void)

void FUN_147854460(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined1 *)(param_2 + 0xe0);
  local_48 = 0;
  local_40 = 0x8000000000;
  local_68 = &local_59;
  FUN_146fdacc0(puVar1,param_1,local_58,1);
  if (local_58 != puVar1) {
    FUN_144a69486(puVar1,local_58);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined1 *)(param_2 + 0x100);
  local_48 = 0;
  local_40 = 0x8000000000;
  local_68 = &local_59;
  FUN_146fdacc0(puVar1,param_1 + 0x20,local_58,1);
  if (local_58 != puVar1) {
    FUN_144a69486(puVar1,local_58);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785455c FUN_14785455c body=118 status=ok
// SIG undefined FUN_14785455c(void)

void FUN_14785455c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [36];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147856934(*param_1,*(undefined4 *)(param_1 + 1),param_3,&local_11);
  FUN_147856934(param_1[2],*(undefined4 *)(param_1 + 3),param_3,&local_12);
  FUN_147856934(param_1[4],*(undefined4 *)(param_1 + 5),param_3,&local_13);
  FUN_147856934(param_1[6],*(undefined4 *)(param_1 + 7),param_3,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478545d4 FUN_1478545d4 body=395 status=ok
// SIG undefined FUN_1478545d4(void)

undefined8 FUN_1478545d4(longlong param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 0x260);
  if ((*(ushort *)(param_1 + 0x260) & 1) == 0) {
    cVar1 = FUN_14784860c(param_1 + 0x40);
    uVar5 = 2;
    if (cVar1 != '\0') {
      cVar1 = FUN_14784860c(param_1 + 0x60);
      if (cVar1 != '\0') {
        cVar1 = FUN_147846e32(param_1 + 0xc0);
        if (cVar1 != '\0') {
          cVar1 = FUN_147846e32(param_1 + 0xe0);
          if (cVar1 != '\0') {
            cVar1 = FUN_147846ca0(param_1 + 0x140);
            if (cVar1 != '\0') {
              cVar1 = FUN_147846d32(param_1 + 0x1a0);
              if (cVar1 != '\0') {
                bVar2 = FUN_14784d15e(param_1 + 0x200);
                uVar5 = (ushort)(bVar2 ^ 1) * 2;
              }
            }
          }
        }
      }
    }
    *(ushort *)(param_1 + 0x260) = uVar5 | (ushort)*(undefined4 *)(param_1 + 0x260) & 0xfffd;
    cVar1 = FUN_14784860c(param_1 + 0x80);
    uVar5 = 4;
    if (cVar1 != '\0') {
      cVar1 = FUN_147846e32(param_1 + 0x120);
      if (cVar1 != '\0') {
        cVar1 = FUN_147846ca0(param_1 + 0x180);
        if (cVar1 != '\0') {
          cVar1 = FUN_147846d32(param_1 + 0x1e0);
          if (cVar1 != '\0') {
            bVar2 = FUN_14784d15e(param_1 + 0x240);
            uVar5 = (ushort)(bVar2 ^ 1) << 2;
          }
        }
      }
    }
    *(ushort *)(param_1 + 0x260) = uVar5 | (ushort)*(undefined4 *)(param_1 + 0x260) & 0xfffb;
    cVar1 = FUN_147846e32(param_1 + 0x100);
    uVar3 = 9;
    if (cVar1 != '\0') {
      cVar1 = FUN_14784860c(param_1 + 0xa0);
      if (cVar1 != '\0') {
        cVar1 = FUN_147846ca0(param_1 + 0x160);
        if (cVar1 != '\0') {
          cVar1 = FUN_147846d32(param_1 + 0x1c0);
          if (cVar1 != '\0') {
            bVar2 = FUN_14784d15e(param_1 + 0x220);
            uVar3 = (uint)(bVar2 ^ 1) * 8 + 1;
          }
        }
      }
    }
    uVar3 = uVar3 | *(uint *)(param_1 + 0x260) & 0xfffffff6;
    uVar4 = (ulonglong)uVar3;
    *(short *)(param_1 + 0x260) = (short)uVar3;
  }
  return CONCAT71((int7)(uVar4 >> 8),(uVar4 & 0xe) != 0);
}



// FUNCTION 147854760 FUN_147854760 body=1677 status=ok
// SIG undefined FUN_147854760(void)

undefined8 FUN_147854760(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  if ((*(byte *)(param_1 + 0x260) & 8) != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    lVar9 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = param_2;
    }
    iVar11 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar11 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x118);
    bVar15 = 0 < iVar2;
    bVar3 = 0 < iVar1;
    uVar4 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar4 = 0xffffffff;
    }
    lVar10 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x110);
    }
    iVar8 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar8 = iVar2 + 0x1f;
    }
    uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    if (bVar3 || bVar15) {
      uVar12 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      uVar13 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar13 = uVar4;
      }
      uVar14 = 0;
      do {
        uVar6 = 0;
        if (bVar3) {
          uVar6 = (ulonglong)(uVar13 & *(uint *)(lVar9 + uVar14 * 4));
        }
        uVar13 = 0;
        if (bVar15) {
          uVar13 = uVar12 & *(uint *)(lVar10 + uVar14 * 4);
        }
        if ((uVar13 & (uint)uVar6) != 0) goto LAB_147854de6;
        uVar13 = 0xffffffff;
        if ((iVar11 >> 5) - 2 == uVar14) {
          uVar13 = uVar4;
        }
        bVar15 = (iVar8 >> 5) - 2 == uVar14;
        uVar14 = uVar14 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
        bVar3 = (int)uVar14 < iVar11 >> 5;
        bVar15 = (int)uVar14 < iVar8 >> 5;
      } while (bVar3 || bVar15);
    }
    lVar9 = param_2 + 0x20;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar9 = *(longlong *)(param_2 + 0x30);
    }
    iVar1 = *(int *)(param_2 + 0x38);
    iVar11 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar11 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0xb8);
    bVar15 = 0 < iVar2;
    bVar3 = 0 < iVar1;
    uVar4 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar4 = 0xffffffff;
    }
    lVar10 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xb0);
    }
    iVar8 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar8 = iVar2 + 0x1f;
    }
    uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    if (bVar3 || bVar15) {
      uVar12 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      uVar13 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar13 = uVar4;
      }
      uVar14 = 0;
      do {
        uVar6 = 0;
        if (bVar3) {
          uVar6 = (ulonglong)(uVar13 & *(uint *)(lVar9 + uVar14 * 4));
        }
        uVar13 = 0;
        if (bVar15) {
          uVar13 = uVar12 & *(uint *)(lVar10 + uVar14 * 4);
        }
        if ((uVar13 & (uint)uVar6) != 0) goto LAB_147854de6;
        uVar13 = 0xffffffff;
        if ((iVar11 >> 5) - 2 == uVar14) {
          uVar13 = uVar4;
        }
        bVar15 = (iVar8 >> 5) - 2 == uVar14;
        uVar14 = uVar14 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
        bVar3 = (int)uVar14 < iVar11 >> 5;
        bVar15 = (int)uVar14 < iVar8 >> 5;
      } while (bVar3 || bVar15);
    }
    iVar1 = *(int *)(param_2 + 0x58);
    lVar9 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      lVar9 = *(longlong *)(param_2 + 0x50);
    }
    iVar11 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar11 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x178);
    bVar15 = 0 < iVar2;
    bVar3 = 0 < iVar1;
    uVar4 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar4 = 0xffffffff;
    }
    lVar10 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x170) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x170);
    }
    iVar8 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar8 = iVar2 + 0x1f;
    }
    uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    if (bVar3 || bVar15) {
      uVar12 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      uVar13 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar13 = uVar4;
      }
      uVar14 = 0;
      do {
        uVar6 = 0;
        if (bVar3) {
          uVar6 = (ulonglong)(uVar13 & *(uint *)(lVar9 + uVar14 * 4));
        }
        uVar13 = 0;
        if (bVar15) {
          uVar13 = uVar12 & *(uint *)(lVar10 + uVar14 * 4);
        }
        if ((uVar13 & (uint)uVar6) != 0) goto LAB_147854de6;
        uVar13 = 0xffffffff;
        if ((iVar11 >> 5) - 2 == uVar14) {
          uVar13 = uVar4;
        }
        bVar15 = (iVar8 >> 5) - 2 == uVar14;
        uVar14 = uVar14 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
        bVar3 = (int)uVar14 < iVar11 >> 5;
        bVar15 = (int)uVar14 < iVar8 >> 5;
      } while (bVar3 || bVar15);
    }
    lVar9 = param_2 + 0x60;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      lVar9 = *(longlong *)(param_2 + 0x70);
    }
    iVar1 = *(int *)(param_2 + 0x78);
    iVar11 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar11 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x1d8);
    bVar15 = 0 < iVar2;
    bVar3 = 0 < iVar1;
    uVar4 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar4 = 0xffffffff;
    }
    lVar10 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1d0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1d0);
    }
    iVar8 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar8 = iVar2 + 0x1f;
    }
    uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    if (bVar3 || bVar15) {
      uVar12 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      uVar13 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar13 = uVar4;
      }
      uVar14 = 0;
      do {
        uVar6 = 0;
        if (bVar3) {
          uVar6 = (ulonglong)(uVar13 & *(uint *)(lVar9 + uVar14 * 4));
        }
        uVar13 = 0;
        if (bVar15) {
          uVar13 = uVar12 & *(uint *)(lVar10 + uVar14 * 4);
        }
        if ((uVar13 & (uint)uVar6) != 0) {
LAB_147854de6:
          return CONCAT71((int7)(uVar6 >> 8),1);
        }
        uVar13 = 0xffffffff;
        if ((iVar11 >> 5) - 2 == uVar14) {
          uVar13 = uVar4;
        }
        bVar15 = (iVar8 >> 5) - 2 == uVar14;
        uVar14 = uVar14 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
        bVar3 = (int)uVar14 < iVar11 >> 5;
        bVar15 = (int)uVar14 < iVar8 >> 5;
      } while (bVar3 || bVar15);
    }
    iVar1 = *(int *)(param_2 + 0x98);
    lVar9 = param_2 + 0x80;
    if (*(longlong *)(param_2 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_2 + 0x90);
    }
    iVar11 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar11 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x238);
    bVar15 = 0 < iVar2;
    bVar3 = 0 < iVar1;
    uVar4 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar4 = 0xffffffff;
    }
    lVar10 = param_1 + 0x220;
    if (*(longlong *)(param_1 + 0x230) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x230);
    }
    iVar8 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar8 = iVar2 + 0x1f;
    }
    uVar5 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar5 = 0xffffffff;
    }
    if (bVar3 || bVar15) {
      uVar12 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar12 = uVar5;
      }
      uVar13 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar13 = uVar4;
      }
      uVar14 = 0;
      do {
        uVar6 = 0;
        if (bVar3) {
          uVar6 = (ulonglong)(uVar13 & *(uint *)(lVar9 + uVar14 * 4));
        }
        uVar13 = 0;
        if (bVar15) {
          uVar13 = uVar12 & *(uint *)(lVar10 + uVar14 * 4);
        }
        bVar15 = (uVar13 & (uint)uVar6) != 0;
        uVar7 = CONCAT71((int7)(uVar6 >> 8),bVar15);
        if (bVar15) {
          return uVar7;
        }
        uVar13 = 0xffffffff;
        if ((iVar11 >> 5) - 2 == uVar14) {
          uVar13 = uVar4;
        }
        bVar15 = (iVar8 >> 5) - 2 == uVar14;
        uVar14 = uVar14 + 1;
        uVar12 = 0xffffffff;
        if (bVar15) {
          uVar12 = uVar5;
        }
        bVar3 = (int)uVar14 < iVar11 >> 5;
        bVar15 = (int)uVar14 < iVar8 >> 5;
      } while (bVar3 || bVar15);
      return uVar7;
    }
  }
  return 0;
}



// FUNCTION 147854dee FUN_147854dee body=4435 status=ok
// SIG undefined FUN_147854dee(void)

undefined1 FUN_147854dee(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ushort uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  
  uVar13 = (uint)*(ushort *)(param_1 + 0x260);
  if ((*(ushort *)(param_1 + 0x260) & 1) == 0) {
    cVar5 = FUN_14784860c(param_1 + 0x40);
    uVar8 = 2;
    if ((((cVar5 != '\0') && (cVar5 = FUN_14784860c(param_1 + 0x60), cVar5 != '\0')) &&
        (cVar5 = FUN_147846e32(param_1 + 0xc0), cVar5 != '\0')) &&
       (((cVar5 = FUN_147846e32(param_1 + 0xe0), cVar5 != '\0' &&
         (cVar5 = FUN_147846ca0(param_1 + 0x140), cVar5 != '\0')) &&
        (cVar5 = FUN_147846d32(param_1 + 0x1a0), cVar5 != '\0')))) {
      bVar6 = FUN_14784d15e(param_1 + 0x200);
      uVar8 = (ushort)(bVar6 ^ 1) * 2;
    }
    *(ushort *)(param_1 + 0x260) = uVar8 | (ushort)*(undefined4 *)(param_1 + 0x260) & 0xfffd;
    cVar5 = FUN_14784860c(param_1 + 0x80);
    uVar8 = 4;
    if (((cVar5 != '\0') && (cVar5 = FUN_147846e32(param_1 + 0x120), cVar5 != '\0')) &&
       ((cVar5 = FUN_147846ca0(param_1 + 0x180), cVar5 != '\0' &&
        (cVar5 = FUN_147846d32(param_1 + 0x1e0), cVar5 != '\0')))) {
      bVar6 = FUN_14784d15e(param_1 + 0x240);
      uVar8 = (ushort)(bVar6 ^ 1) << 2;
    }
    *(ushort *)(param_1 + 0x260) = uVar8 | (ushort)*(undefined4 *)(param_1 + 0x260) & 0xfffb;
    cVar5 = FUN_147846e32(param_1 + 0x100);
    uVar13 = 8;
    if ((((cVar5 != '\0') && (cVar5 = FUN_14784860c(param_1 + 0xa0), cVar5 != '\0')) &&
        (cVar5 = FUN_147846ca0(param_1 + 0x160), cVar5 != '\0')) &&
       (cVar5 = FUN_147846d32(param_1 + 0x1c0), cVar5 != '\0')) {
      bVar6 = FUN_14784d15e(param_1 + 0x220);
      uVar13 = (uint)(bVar6 ^ 1) << 3;
    }
    uVar13 = uVar13 | *(uint *)(param_1 + 0x260) & 0xfffffff6 | 1;
    *(short *)(param_1 + 0x260) = (short)uVar13;
  }
  if ((uVar13 & 4) != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    lVar7 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar7 = param_2;
    }
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x138);
    bVar19 = iVar2 < 1;
    bVar18 = iVar1 < 1;
    uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    lVar9 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x130);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar16 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar16 = 0xffffffff;
    }
    if (!bVar18 || !bVar19) {
      uVar17 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar17 = uVar16;
      }
      uVar15 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar15 = uVar3;
      }
      uVar11 = 0;
      do {
        uVar10 = 0;
        if (!bVar18) {
          uVar10 = uVar15 & *(uint *)(lVar7 + uVar11 * 4);
        }
        uVar15 = 0;
        if (!bVar19) {
          uVar15 = uVar17 & *(uint *)(lVar9 + uVar11 * 4);
        }
        if ((uVar15 & uVar10) != 0) {
          return false;
        }
        uVar15 = 0xffffffff;
        if ((iVar12 >> 5) - 2 == uVar11) {
          uVar15 = uVar3;
        }
        bVar19 = (iVar14 >> 5) - 2 == uVar11;
        uVar11 = uVar11 + 1;
        uVar17 = 0xffffffff;
        if (bVar19) {
          uVar17 = uVar16;
        }
        bVar18 = iVar12 >> 5 <= (int)uVar11;
        bVar19 = iVar14 >> 5 <= (int)uVar11;
      } while (!bVar18 || !bVar19);
    }
    lVar7 = param_2 + 0x20;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x30);
    }
    iVar1 = *(int *)(param_2 + 0x38);
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x98);
    bVar19 = iVar2 < 1;
    bVar18 = iVar1 < 1;
    uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    lVar9 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x90);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar16 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar16 = 0xffffffff;
    }
    if (!bVar18 || !bVar19) {
      uVar17 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar17 = uVar16;
      }
      uVar15 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar15 = uVar3;
      }
      uVar11 = 0;
      do {
        uVar10 = 0;
        if (!bVar18) {
          uVar10 = uVar15 & *(uint *)(lVar7 + uVar11 * 4);
        }
        uVar15 = 0;
        if (!bVar19) {
          uVar15 = uVar17 & *(uint *)(lVar9 + uVar11 * 4);
        }
        if ((uVar15 & uVar10) != 0) {
          return false;
        }
        uVar15 = 0xffffffff;
        if ((iVar12 >> 5) - 2 == uVar11) {
          uVar15 = uVar3;
        }
        bVar19 = (iVar14 >> 5) - 2 == uVar11;
        uVar11 = uVar11 + 1;
        uVar17 = 0xffffffff;
        if (bVar19) {
          uVar17 = uVar16;
        }
        bVar18 = iVar12 >> 5 <= (int)uVar11;
        bVar19 = iVar14 >> 5 <= (int)uVar11;
      } while (!bVar18 || !bVar19);
    }
    iVar1 = *(int *)(param_2 + 0x58);
    lVar7 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x50);
    }
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x198);
    bVar19 = iVar2 < 1;
    bVar18 = iVar1 < 1;
    uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    lVar9 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar9 = *(longlong *)(param_1 + 400);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar16 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar16 = 0xffffffff;
    }
    if (!bVar18 || !bVar19) {
      uVar17 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar17 = uVar16;
      }
      uVar15 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar15 = uVar3;
      }
      uVar11 = 0;
      do {
        uVar10 = 0;
        if (!bVar18) {
          uVar10 = uVar15 & *(uint *)(lVar7 + uVar11 * 4);
        }
        uVar15 = 0;
        if (!bVar19) {
          uVar15 = uVar17 & *(uint *)(lVar9 + uVar11 * 4);
        }
        if ((uVar15 & uVar10) != 0) {
          return false;
        }
        uVar15 = 0xffffffff;
        if ((iVar12 >> 5) - 2 == uVar11) {
          uVar15 = uVar3;
        }
        bVar19 = (iVar14 >> 5) - 2 == uVar11;
        uVar11 = uVar11 + 1;
        uVar17 = 0xffffffff;
        if (bVar19) {
          uVar17 = uVar16;
        }
        bVar18 = iVar12 >> 5 <= (int)uVar11;
        bVar19 = iVar14 >> 5 <= (int)uVar11;
      } while (!bVar18 || !bVar19);
    }
    lVar7 = param_2 + 0x60;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x70);
    }
    iVar1 = *(int *)(param_2 + 0x78);
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x1f8);
    bVar19 = iVar2 < 1;
    bVar18 = iVar1 < 1;
    uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    lVar9 = param_1 + 0x1e0;
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1f0);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar16 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar16 = 0xffffffff;
    }
    if (!bVar18 || !bVar19) {
      uVar17 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar17 = uVar16;
      }
      uVar15 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar15 = uVar3;
      }
      uVar11 = 0;
      do {
        uVar10 = 0;
        if (!bVar18) {
          uVar10 = uVar15 & *(uint *)(lVar7 + uVar11 * 4);
        }
        uVar15 = 0;
        if (!bVar19) {
          uVar15 = uVar17 & *(uint *)(lVar9 + uVar11 * 4);
        }
        if ((uVar15 & uVar10) != 0) {
          return false;
        }
        uVar15 = 0xffffffff;
        if ((iVar12 >> 5) - 2 == uVar11) {
          uVar15 = uVar3;
        }
        bVar19 = (iVar14 >> 5) - 2 == uVar11;
        uVar11 = uVar11 + 1;
        uVar17 = 0xffffffff;
        if (bVar19) {
          uVar17 = uVar16;
        }
        bVar18 = iVar12 >> 5 <= (int)uVar11;
        bVar19 = iVar14 >> 5 <= (int)uVar11;
      } while (!bVar18 || !bVar19);
    }
    iVar1 = *(int *)(param_2 + 0x98);
    lVar7 = param_2 + 0x80;
    if (*(longlong *)(param_2 + 0x90) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x90);
    }
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 600);
    bVar19 = iVar2 < 1;
    bVar18 = iVar1 < 1;
    uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    lVar9 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x250) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x250);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar16 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar16 = 0xffffffff;
    }
    if (!bVar18 || !bVar19) {
      uVar17 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar17 = uVar16;
      }
      uVar15 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar15 = uVar3;
      }
      uVar11 = 0;
      do {
        uVar10 = 0;
        if (!bVar18) {
          uVar10 = uVar15 & *(uint *)(lVar7 + uVar11 * 4);
        }
        uVar15 = 0;
        if (!bVar19) {
          uVar15 = uVar17 & *(uint *)(lVar9 + uVar11 * 4);
        }
        if ((uVar15 & uVar10) != 0) {
          return false;
        }
        uVar15 = 0xffffffff;
        if ((iVar12 >> 5) - 2 == uVar11) {
          uVar15 = uVar3;
        }
        bVar19 = (iVar14 >> 5) - 2 == uVar11;
        uVar11 = uVar11 + 1;
        uVar17 = 0xffffffff;
        if (bVar19) {
          uVar17 = uVar16;
        }
        bVar18 = iVar12 >> 5 <= (int)uVar11;
        bVar19 = iVar14 >> 5 <= (int)uVar11;
      } while (!bVar18 || !bVar19);
    }
  }
  if ((uVar13 & 2) == 0) {
    if ((uVar13 & 8) != 0) {
      uVar4 = FUN_147854760(param_1,param_2);
      return uVar4;
    }
    return true;
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar7 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar7 = param_2;
  }
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar12 = iVar1 + 0x1f;
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  bVar19 = iVar1 < 1;
  uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar13 = 0xffffffff;
  }
  lVar9 = param_1 + 0xc0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar9 = *(longlong *)(param_1 + 0xd0);
  }
  iVar14 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar14 = iVar2 + 0x1f;
  }
  uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar3 = 0xffffffff;
  }
  if (!bVar19 || 0 < iVar2) {
    iVar14 = iVar14 >> 5;
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    do {
      uVar15 = 0;
      if (!bVar19) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if ((longlong)uVar11 < (longlong)iVar14) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      if ((uVar17 & ~uVar15) != 0) {
        return false;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      uVar16 = 0xffffffff;
      if (iVar14 - 2 == uVar11) {
        uVar16 = uVar3;
      }
      uVar11 = uVar11 + 1;
      bVar19 = iVar12 >> 5 <= (int)uVar11;
    } while ((int)uVar11 < iVar14 || !bVar19);
  }
  cVar5 = FUN_147846e32(param_1 + 0xe0);
  if (cVar5 == '\0') {
    iVar1 = *(int *)(param_2 + 0x18);
    lVar7 = *(longlong *)(param_2 + 0x10);
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar7 = param_2;
    }
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0xf8);
    bVar19 = 0 < iVar2;
    bVar18 = 0 < iVar1;
    uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar13 = 0xffffffff;
    }
    lVar9 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xf0);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    if (!bVar18 && !bVar19) {
      return false;
    }
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    while( true ) {
      uVar15 = 0;
      if (bVar18) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if (bVar19) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      if ((uVar17 & uVar15) != 0) break;
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      bVar19 = (iVar14 >> 5) - 2 == uVar11;
      uVar11 = uVar11 + 1;
      uVar16 = 0xffffffff;
      if (bVar19) {
        uVar16 = uVar3;
      }
      bVar18 = (int)uVar11 < iVar12 >> 5;
      bVar19 = (int)uVar11 < iVar14 >> 5;
      if (!bVar18 && !bVar19) {
        return false;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x38);
  lVar7 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar7 = param_2 + 0x20;
  }
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar12 = iVar1 + 0x1f;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  bVar19 = iVar1 < 1;
  uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar13 = 0xffffffff;
  }
  lVar9 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
  }
  iVar14 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar14 = iVar2 + 0x1f;
  }
  uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar3 = 0xffffffff;
  }
  if (!bVar19 || 0 < iVar2) {
    iVar14 = iVar14 >> 5;
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    do {
      uVar15 = 0;
      if (!bVar19) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if ((longlong)uVar11 < (longlong)iVar14) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      if ((uVar17 & ~uVar15) != 0) {
        return false;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      uVar16 = 0xffffffff;
      if (iVar14 - 2 == uVar11) {
        uVar16 = uVar3;
      }
      uVar11 = uVar11 + 1;
      bVar19 = iVar12 >> 5 <= (int)uVar11;
    } while ((int)uVar11 < iVar14 || !bVar19);
  }
  cVar5 = FUN_14784860c(param_1 + 0x60);
  if (cVar5 == '\0') {
    iVar1 = *(int *)(param_2 + 0x38);
    lVar7 = param_2 + 0x20;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x30);
    }
    iVar12 = iVar1 + 0x3e;
    if (-1 < iVar1 + 0x1f) {
      iVar12 = iVar1 + 0x1f;
    }
    iVar2 = *(int *)(param_1 + 0x78);
    bVar19 = 0 < iVar2;
    bVar18 = 0 < iVar1;
    uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
    if (iVar1 % 0x20 < 1) {
      uVar13 = 0xffffffff;
    }
    lVar9 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x70);
    }
    iVar14 = iVar2 + 0x3e;
    if (-1 < iVar2 + 0x1f) {
      iVar14 = iVar2 + 0x1f;
    }
    uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
    if (iVar2 % 0x20 < 1) {
      uVar3 = 0xffffffff;
    }
    if (!bVar18 && !bVar19) {
      return false;
    }
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    while( true ) {
      uVar15 = 0;
      if (bVar18) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if (bVar19) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      if ((uVar17 & uVar15) != 0) break;
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      bVar19 = (iVar14 >> 5) - 2 == uVar11;
      uVar11 = uVar11 + 1;
      uVar16 = 0xffffffff;
      if (bVar19) {
        uVar16 = uVar3;
      }
      bVar18 = (int)uVar11 < iVar12 >> 5;
      bVar19 = (int)uVar11 < iVar14 >> 5;
      if (!bVar18 && !bVar19) {
        return false;
      }
    }
  }
  iVar1 = *(int *)(param_2 + 0x58);
  lVar7 = param_2 + 0x40;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x50);
  }
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar12 = iVar1 + 0x1f;
  }
  iVar2 = *(int *)(param_1 + 0x158);
  bVar19 = iVar1 < 1;
  uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar13 = 0xffffffff;
  }
  lVar9 = param_1 + 0x140;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x150);
  }
  iVar14 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar14 = iVar2 + 0x1f;
  }
  uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar3 = 0xffffffff;
  }
  if (!bVar19 || 0 < iVar2) {
    iVar14 = iVar14 >> 5;
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    do {
      uVar15 = 0;
      if (!bVar19) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if ((longlong)uVar11 < (longlong)iVar14) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      if ((uVar17 & ~uVar15) != 0) {
        return false;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      uVar16 = 0xffffffff;
      if (iVar14 - 2 == uVar11) {
        uVar16 = uVar3;
      }
      uVar11 = uVar11 + 1;
      bVar19 = iVar12 >> 5 <= (int)uVar11;
    } while ((int)uVar11 < iVar14 || !bVar19);
  }
  lVar7 = param_2 + 0x60;
  if (*(longlong *)(param_2 + 0x70) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
  }
  iVar1 = *(int *)(param_2 + 0x78);
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar12 = iVar1 + 0x1f;
  }
  iVar2 = *(int *)(param_1 + 0x1b8);
  bVar19 = iVar1 < 1;
  uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar13 = 0xffffffff;
  }
  lVar9 = param_1 + 0x1a0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x1b0);
  }
  iVar14 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar14 = iVar2 + 0x1f;
  }
  uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar3 = 0xffffffff;
  }
  if (!bVar19 || 0 < iVar2) {
    iVar14 = iVar14 >> 5;
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    do {
      uVar15 = 0;
      if (!bVar19) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if ((longlong)uVar11 < (longlong)iVar14) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      if ((uVar17 & ~uVar15) != 0) {
        return false;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      uVar16 = 0xffffffff;
      if (iVar14 - 2 == uVar11) {
        uVar16 = uVar3;
      }
      uVar11 = uVar11 + 1;
      bVar19 = iVar12 >> 5 <= (int)uVar11;
    } while ((int)uVar11 < iVar14 || !bVar19);
  }
  lVar7 = param_2 + 0x80;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x90);
  }
  iVar1 = *(int *)(param_2 + 0x98);
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar12 = iVar1 + 0x1f;
  }
  iVar2 = *(int *)(param_1 + 0x218);
  bVar19 = iVar1 < 1;
  uVar13 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar13 = 0xffffffff;
  }
  lVar9 = param_1 + 0x200;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x210);
  }
  iVar14 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar14 = iVar2 + 0x1f;
  }
  uVar3 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar3 = 0xffffffff;
  }
  if (!bVar19 || 0 < iVar2) {
    iVar14 = iVar14 >> 5;
    uVar16 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar16 = uVar3;
    }
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar13;
    }
    uVar11 = 0;
    do {
      uVar15 = 0;
      if (!bVar19) {
        uVar15 = uVar17 & *(uint *)(lVar7 + uVar11 * 4);
      }
      uVar17 = 0;
      if ((longlong)uVar11 < (longlong)iVar14) {
        uVar17 = uVar16 & *(uint *)(lVar9 + uVar11 * 4);
      }
      bVar18 = (uVar15 & uVar17) == uVar17;
      if (!bVar18) {
        return bVar18;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar11) {
        uVar17 = uVar13;
      }
      bVar19 = iVar14 - 2 == uVar11;
      uVar11 = uVar11 + 1;
      uVar16 = 0xffffffff;
      if (bVar19) {
        uVar16 = uVar3;
      }
      bVar19 = iVar12 >> 5 <= (int)uVar11;
    } while (!bVar19 || (int)uVar11 < iVar14);
    return bVar18;
  }
  return true;
}



// FUNCTION 147855f42 FUN_147855f42 body=236 status=ok
// SIG undefined FUN_147855f42(void)

void FUN_147855f42(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *param_1;
  local_20 = *(undefined4 *)(param_1 + 1);
  FUN_147856040();
  local_38 = param_1[2];
  local_30 = *(undefined4 *)(param_1 + 3);
  FUN_1478560c1(&local_38,param_2 + 0x40);
  local_48 = param_1[6];
  local_40 = *(undefined4 *)(param_1 + 7);
  FUN_147856142(&local_48,param_2 + 0x80);
  local_58 = param_1[4];
  local_50 = *(undefined4 *)(param_1 + 5);
  FUN_1478543f8(&local_58,param_2 + 0xc0);
  if ((undefined8 *)(param_2 + 0x120) != param_1 + 8) {
    FUN_144a69486();
  }
  if ((undefined8 *)(param_2 + 0x140) != param_1 + 0xc) {
    FUN_144a69486();
  }
  if ((undefined8 *)(param_2 + 0x160) != param_1 + 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147856040 FUN_147856040 body=129 status=ok
// SIG undefined FUN_147856040(void)

void FUN_147856040(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      if ((*(char *)(lVar2 + 9 + lVar6) != '\x02') &&
         ((cVar1 = *(char *)(lVar2 + 8 + lVar6), lVar5 = param_2, cVar1 == '\x01' ||
          (lVar5 = param_2 + 0x20, cVar1 == '\x02')))) {
        uVar4 = FUN_14688f974(&DAT_14cabda20,*(undefined8 *)(lVar2 + lVar6));
        FUN_14688fb8a(lVar5,uVar4);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 1478560c1 FUN_1478560c1 body=129 status=ok
// SIG undefined FUN_1478560c1(void)

void FUN_1478560c1(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      if ((*(char *)(lVar2 + 9 + lVar6) != '\x02') &&
         ((cVar1 = *(char *)(lVar2 + 8 + lVar6), lVar5 = param_2, cVar1 == '\x01' ||
          (lVar5 = param_2 + 0x20, cVar1 == '\x02')))) {
        uVar4 = FUN_14688f974(&DAT_14cabdf80,*(undefined8 *)(lVar2 + lVar6));
        FUN_14688fb8a(lVar5,uVar4);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 147856142 FUN_147856142 body=129 status=ok
// SIG undefined FUN_147856142(void)

void FUN_147856142(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      if ((*(char *)(lVar2 + 9 + lVar6) != '\x02') &&
         ((cVar1 = *(char *)(lVar2 + 8 + lVar6), lVar5 = param_2, cVar1 == '\x01' ||
          (lVar5 = param_2 + 0x20, cVar1 == '\x02')))) {
        uVar4 = FUN_14688f974(&DAT_14cabe230,*(undefined8 *)(lVar2 + lVar6));
        FUN_14688fb8a(lVar5,uVar4);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 1478561cc FUN_1478561cc body=444 status=ok
// SIG undefined FUN_1478561cc(void)

ulonglong FUN_1478561cc(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  uint *unaff_RBX;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_44;
  longlong local_40;
  int local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_147853aa8(param_2);
  if ((cVar1 == '\0') || (cVar1 = FUN_147853aa8(param_2 + 0x20), cVar1 == '\0')) {
    unaff_RBX = &local_48;
    FUN_147853d46(unaff_RBX,param_2,1);
    cVar1 = '\x01';
    if (local_38 < *(int *)(local_40 + 0x18)) {
      do {
        cVar2 = FUN_14785638a(param_1);
        uVar4 = local_48;
        do {
          local_38 = local_38 + 1;
          local_44 = local_44 * 2;
          if (local_44 == 0) {
            local_44 = 1;
            local_48 = uVar4 + 1;
            uVar4 = local_48;
          }
          cVar1 = cVar2;
          if (*(int *)(local_40 + 0x18) <= local_38) goto LAB_1478562df;
          lVar5 = *(longlong *)(local_40 + 0x10);
          if (*(longlong *)(local_40 + 0x10) == 0) {
            lVar5 = local_40;
          }
          unaff_RBX = (uint *)(longlong)(int)uVar4;
        } while ((bool)local_30 != ((*(uint *)(lVar5 + (longlong)unaff_RBX * 4) & local_44) != 0));
        cVar1 = '\0';
      } while (cVar2 != '\0');
    }
LAB_1478562df:
    FUN_147853d46(&local_48,param_2 + 0x20,1);
    if ((cVar1 == '\0') || (*(int *)(local_40 + 0x18) <= local_38)) {
      if (cVar1 != '\0') goto LAB_147856202;
    }
    else {
      do {
        cVar1 = FUN_14785638a(param_1);
        uVar4 = local_48;
        do {
          local_38 = local_38 + 1;
          local_44 = local_44 * 2;
          if (local_44 == 0) {
            local_44 = 1;
            uVar4 = uVar4 + 1;
            local_48 = uVar4;
          }
          if (*(int *)(local_40 + 0x18) <= local_38) {
            if (cVar1 == '\0') goto LAB_147856378;
            goto LAB_147856202;
          }
          lVar5 = *(longlong *)(local_40 + 0x10);
          if (*(longlong *)(local_40 + 0x10) == 0) {
            lVar5 = local_40;
          }
          unaff_RBX = (uint *)(longlong)(int)uVar4;
        } while ((bool)local_30 != ((*(uint *)(lVar5 + (longlong)unaff_RBX * 4) & local_44) != 0));
      } while (cVar1 != '\0');
    }
LAB_147856378:
    uVar3 = 0;
  }
  else {
LAB_147856202:
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (param_1 != param_2) {
      FUN_144a69486(param_1,param_2);
      FUN_144a69486(param_1 + 0x20,param_2 + 0x20);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14785638a FUN_14785638a body=305 status=ok
// SIG undefined FUN_14785638a(void)

bool FUN_14785638a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  if (param_2 < 0 || iVar2 <= param_2) {
    uVar6 = (iVar2 - param_2) + 1;
    *(int *)(param_1 + 0x48) = (iVar2 - param_2) + iVar2 + 1;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar6) {
      FUN_14019835c(plVar1);
    }
    memset((void *)((longlong)iVar2 * 8 + *plVar1),0,(longlong)(int)uVar6 << 3);
  }
  bVar7 = true;
  if (*(longlong *)(*plVar1 + (longlong)param_2 * 8) != 0) goto LAB_147856408;
  lVar3 = FUN_1478564bc(param_2);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar3 != 0) goto LAB_147856447;
  }
  else {
    FUN_1456cec3c(lVar3);
LAB_147856447:
    lVar4 = FUN_1406d1670();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      local_38 = lVar3;
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      uVar5 = FUN_14479d2ce(param_1 + 0x50);
      lVar3 = FUN_1433a400e(uVar5,&local_38);
      *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 8) = lVar3;
      bVar7 = lVar3 != 0;
      goto LAB_147856408;
    }
  }
  bVar7 = false;
LAB_147856408:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478564bc FUN_1478564bc body=100 status=ok
// SIG undefined FUN_1478564bc(void)

longlong FUN_1478564bc(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  
  if ((-1 < (int)param_1) && ((int)param_1 < DAT_14cabe738)) {
    puVar3 = &DAT_14cabe530;
    if (DAT_14cabe730 != (undefined *)0x0) {
      puVar3 = DAT_14cabe730;
    }
    lVar1 = FUN_14479d2ce(puVar3 + (ulonglong)param_1 * 8);
    if (lVar1 != 0) {
      lVar2 = FUN_144a797b2();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 147856536 FUN_147856536 body=23 status=ok
// SIG undefined FUN_147856536(void)

void FUN_147856536(longlong param_1)

{
  FUN_14110d204();
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 1;
  return;
}



// FUNCTION 1478565ac FUN_1478565ac body=48 status=ok
// SIG undefined FUN_1478565ac(void)

void FUN_1478565ac(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478565f2 FUN_1478565f2 body=86 status=ok
// SIG undefined FUN_1478565f2(void)

undefined1 FUN_1478565f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      if (param_2 != param_3) {
        FUN_144a69486(param_2 + -0x20,param_3 + -0x20);
        FUN_144a69486(param_2,param_3);
      }
      *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147856670 FUN_147856670 body=59 status=ok
// SIG undefined FUN_147856670(void)

undefined8 FUN_147856670(longlong *param_1)

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



// FUNCTION 14785670e FUN_14785670e body=52 status=ok
// SIG undefined FUN_14785670e(void)

void FUN_14785670e(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147856770 FUN_147856770 body=63 status=ok
// SIG undefined FUN_147856770(void)

undefined1 FUN_147856770(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784d95e(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 1478567d8 FUN_1478567d8 body=59 status=ok
// SIG undefined FUN_1478567d8(void)

undefined8 FUN_1478567d8(longlong *param_1)

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



// FUNCTION 147856824 FUN_147856824 body=40 status=ok
// SIG undefined FUN_147856824(void)

void FUN_147856824(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14784d730(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 14785689c FUN_14785689c body=76 status=ok
// SIG undefined FUN_14785689c(void)

void FUN_14785689c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1411791a8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1478568d9;
    }
  }
  lVar2 = 0;
LAB_1478568d9:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1478568e8 FUN_1478568e8 body=76 status=ok
// SIG undefined FUN_1478568e8(void)

void FUN_1478568e8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14107a202();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147856925;
    }
  }
  lVar2 = 0;
LAB_147856925:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 147856934 FUN_147856934 body=741 status=ok
// SIG undefined FUN_147856934(void)

void FUN_147856934(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_398 [40];
  longlong *local_370;
  int local_364;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_360 = param_4;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar17 + fVar17);
    plVar8 = &local_358;
    do {
      puVar10 = (undefined8 *)*plVar8;
      puVar11 = (undefined8 *)plVar8[1];
      local_364 = (int)plVar8[2];
      uVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar10) >> 4) + 1;
      puVar12 = puVar10;
      puVar13 = puVar11;
      local_370 = plVar8;
      if (local_364 != 0) {
LAB_147856a06:
        plVar8 = local_370;
        if (8 < (int)uVar6) {
          uVar1 = puVar10[(ulonglong)(uVar6 >> 1) * 2];
          uVar2 = (puVar10 + (ulonglong)(uVar6 >> 1) * 2)[1];
          uVar3 = puVar10[1];
          puVar10[(ulonglong)(uVar6 >> 1) * 2] = *puVar10;
          (puVar10 + (ulonglong)(uVar6 >> 1) * 2)[1] = uVar3;
          local_58._0_4_ = (undefined4)uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar2;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          puVar15 = puVar13 + 2;
          puVar9 = puVar10;
          local_58 = uVar1;
          uStack_50 = uVar2;
          do {
            puVar4 = puVar9 + 2;
            puVar14 = puVar9 + 2;
            do {
              puVar9 = puVar14;
              puVar16 = puVar4;
              if (puVar13 < puVar9) break;
              cVar5 = FUN_147856dfa(puVar10,puVar9);
              puVar4 = puVar16 + 2;
              puVar14 = puVar9 + 2;
            } while (cVar5 == '\0');
            puVar4 = puVar15 + -4;
            do {
              puVar14 = puVar15;
              puVar7 = puVar4;
              puVar15 = puVar14 + -2;
              if (puVar15 <= puVar10) break;
              cVar5 = FUN_147856dfa(puVar15,puVar10);
              puVar4 = puVar7 + -2;
            } while (cVar5 == '\0');
            if (puVar15 < puVar9) goto LAB_147856ab8;
            uVar1 = *puVar9;
            uVar2 = puVar9[1];
            uVar3 = puVar14[-1];
            *puVar9 = *puVar15;
            puVar9[1] = uVar3;
            local_58._0_4_ = (undefined4)uVar1;
            local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar2;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            *(undefined4 *)puVar15 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
            local_58 = uVar1;
            uStack_50 = uVar2;
          } while( true );
        }
        for (; local_370 = plVar8, puVar12 = puVar10, puVar11 = puVar10, puVar10 < puVar13;
            puVar13 = puVar13 + -2) {
          while (puVar15 = puVar12, puVar11 = puVar11 + 2, puVar11 <= puVar13) {
            cVar5 = FUN_147856dfa(puVar15,puVar11);
            puVar12 = puVar11;
            if (cVar5 == '\0') {
              puVar12 = puVar15;
            }
          }
          local_58 = *puVar15;
          uStack_50 = puVar15[1];
          uVar2 = local_58;
          uVar3 = uStack_50;
          uVar1 = puVar13[1];
          *puVar15 = *puVar13;
          puVar15[1] = uVar1;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
          plVar8 = local_370;
          local_58 = uVar2;
          uStack_50 = uVar3;
        }
        goto LAB_147856beb;
      }
LAB_147856c05:
      FUN_147856c1a(puVar10,uVar6,local_360);
      plVar8 = local_370;
LAB_147856beb:
      plVar8 = plVar8 + -3;
    } while (&local_358 <= plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147856ab8:
  local_58 = *puVar10;
  uStack_50 = puVar10[1];
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = puVar14[-1];
  *puVar10 = *puVar15;
  puVar10[1] = uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar15 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar14 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar14 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar14 + -4) = uStack_50._4_4_;
  local_364 = local_364 + -1;
  puVar14 = puVar14 + -4;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar7 - (longlong)puVar12 < (longlong)puVar11 - (longlong)puVar16) {
    plVar8 = local_370;
    if (puVar9 < puVar13) {
      *local_370 = (longlong)puVar9;
      local_370[1] = (longlong)puVar13;
      *(int *)(local_370 + 2) = local_364;
      plVar8 = local_370 + 3;
    }
    puVar11 = puVar7;
    puVar16 = puVar10;
    if (puVar15 <= puVar10 + 2) goto LAB_147856beb;
  }
  else {
    if (puVar10 + 2 < puVar15) {
      *local_370 = (longlong)puVar10;
      local_370[1] = (longlong)puVar14;
      *(int *)(local_370 + 2) = local_364;
      local_370 = local_370 + 3;
    }
    plVar8 = local_370;
    puVar11 = puVar13;
    puVar10 = puVar9;
    puVar14 = puVar13;
    if (puVar13 <= puVar9) goto LAB_147856beb;
  }
  local_370 = plVar8;
  uVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar16) >> 4) + 1;
  puVar12 = puVar16;
  puVar13 = puVar14;
  if (local_364 == 0) goto LAB_147856c05;
  goto LAB_147856a06;
}



// FUNCTION 147856c1a FUN_147856c1a body=478 status=ok
// SIG undefined FUN_147856c1a(void)

void FUN_147856c1a(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar12 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar12;
joined_r0x000147856c5f:
    do {
      iVar6 = iVar12 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar8 = iVar12 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           (cVar5 = FUN_147856dfa(param_1 + (longlong)iVar8 * 2,param_1 + (longlong)iVar6 * 2),
           cVar5 == '\0')) {
          iVar6 = iVar8;
        }
        puVar7 = param_1 + (longlong)iVar12 * 2;
        puVar10 = param_1 + (longlong)iVar6 * 2;
        cVar5 = FUN_147856dfa(puVar7,puVar10);
        if (cVar5 != '\0') {
          uVar2 = *puVar7;
          uVar3 = puVar7[1];
          uVar4 = puVar10[1];
          *puVar7 = *puVar10;
          puVar7[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar10 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar10 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_50._4_4_;
          iVar12 = iVar6;
          local_58 = uVar2;
          uStack_50 = uVar3;
          goto joined_r0x000147856c5f;
        }
      }
      bVar13 = iVar9 != 0;
      iVar12 = iVar9 + -1;
      iVar9 = iVar12;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar11 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar11 * 2)[1];
      *param_1 = param_1[uVar11 * 2];
      param_1[1] = uVar4;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar7 = param_1 + uVar11 * 2;
      *(undefined4 *)puVar7 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar7 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
      if (param_2 != 2) {
        do {
          iVar12 = 0;
          iVar6 = 1;
          iVar9 = 0;
          do {
            iVar12 = iVar12 + 2;
            iVar8 = iVar6;
            if (((longlong)iVar12 < (longlong)uVar11) &&
               (cVar5 = FUN_147856dfa(param_1 + (longlong)iVar12 * 2,param_1 + (longlong)iVar6 * 2),
               cVar5 == '\0')) {
              iVar8 = iVar12;
            }
            puVar10 = param_1 + (longlong)iVar9 * 2;
            puVar7 = param_1 + (longlong)iVar8 * 2;
            cVar5 = FUN_147856dfa(puVar10,puVar7);
            if (cVar5 == '\0') break;
            uVar2 = *puVar10;
            uVar3 = puVar10[1];
            uVar4 = puVar7[1];
            *puVar10 = *puVar7;
            puVar10[1] = uVar4;
            local_58._0_4_ = (undefined4)uVar2;
            local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            *(undefined4 *)puVar7 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar7 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_50._4_4_;
            iVar12 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            local_58 = uVar2;
            uStack_50 = uVar3;
            iVar9 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar11);
          uVar1 = uVar11 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar7 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar7 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar7 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar7 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar7 + 0xc) = uStack_50._4_4_;
          bVar13 = 2 < uVar11;
          uVar11 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
        } while (bVar13);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147856dfa FUN_147856dfa body=91 status=ok
// SIG undefined FUN_147856dfa(void)

ulonglong FUN_147856dfa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *param_1;
  uVar5 = -*(int *)(lVar1 + 0x5c) & (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U;
  lVar2 = *param_2;
  uVar3 = (*(int *)(lVar2 + 0x58) + *(int *)(lVar2 + 0x5c)) - 1;
  uVar6 = -*(int *)(lVar2 + 0x5c) & uVar3;
  uVar4 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  if ((int)uVar5 <= (int)uVar6) {
    if (uVar5 == uVar6) {
      uVar3 = (int)*(undefined8 *)(lVar2 + 0x18) - (int)*(undefined8 *)(lVar1 + 0x18);
      if (uVar3 == 0) {
        uVar3 = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) -
                (int)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
      }
      uVar4 = (ulonglong)(uVar3 >> 0x1f);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 147856e56 FUN_147856e56 body=114 status=ok
// SIG undefined FUN_147856e56(void)

void FUN_147856e56(longlong *param_1,int param_2)

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



// FUNCTION 147856ed0 FUN_147856ed0 body=75 status=ok
// SIG undefined FUN_147856ed0(void)

void FUN_147856ed0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a4854c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147856f42 FUN_147856f42 body=126 status=ok
// SIG undefined FUN_147856f42(void)

void FUN_147856f42(undefined8 param_1,undefined1 param_2,longlong *param_3,undefined4 *param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_48 = param_2;
  if (DAT_14c950c29 == '\x01') {
    if (local_40 == 0) {
      local_40 = 0;
    }
    else {
      FUN_1456cec3c();
      local_40 = *param_3;
    }
  }
  local_38 = param_3[1];
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  FUN_1447cd2ec(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147856fd8 FUN_147856fd8 body=75 status=ok
// SIG undefined FUN_147856fd8(void)

void FUN_147856fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140191926(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785704a FUN_14785704a body=256 status=ok
// SIG undefined FUN_14785704a(void)

void FUN_14785704a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14785714c(&local_58,puVar1);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  FUN_1478571f4(&local_48);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785714c FUN_14785714c body=167 status=ok
// SIG undefined FUN_14785714c(void)

longlong * FUN_14785714c(longlong *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pfVar7 = (float *)*param_2;
    pfVar1 = pfVar7 + (longlong)*(int *)(param_2 + 1) * 3;
    do {
      fVar2 = pfVar7[2];
      fVar3 = pfVar7[1];
      fVar4 = *pfVar7;
      iVar5 = (int)param_1[1];
      lVar8 = (longlong)iVar5;
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1403e3958(param_1,iVar5);
      }
      lVar6 = *param_1;
      *(double *)(lVar6 + lVar8 * 0x18) = (double)fVar4;
      *(double *)(lVar6 + 8 + lVar8 * 0x18) = (double)fVar3;
      *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = (double)fVar2;
      pfVar7 = pfVar7 + 3;
    } while (pfVar7 != pfVar1);
  }
  return param_1;
}



// FUNCTION 1478571f4 FUN_1478571f4 body=61 status=ok
// SIG undefined FUN_1478571f4(void)

void FUN_1478571f4(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147857232 FUN_147857232 body=256 status=ok
// SIG undefined FUN_147857232(void)

void FUN_147857232(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147857334(&local_58,puVar1);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  FUN_1478571f4(&local_48);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147857334 FUN_147857334 body=198 status=ok
// SIG undefined FUN_147857334(void)

longlong * FUN_147857334(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    pfVar9 = *(float **)(param_2 + 0x10);
    pfVar7 = pfVar9 + (longlong)*(int *)(param_2 + 0x18) * 4;
    do {
      fVar1 = pfVar9[3];
      fVar2 = pfVar9[2];
      fVar3 = pfVar9[1];
      fVar4 = *pfVar9;
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_140e16be0(param_1,iVar5);
      }
      lVar6 = *param_1;
      lVar8 = (longlong)iVar5 * 0x20;
      *(double *)(lVar6 + lVar8) = (double)fVar4;
      *(double *)(lVar6 + 8 + lVar8) = (double)fVar3;
      *(double *)(lVar6 + 0x10 + lVar8) = (double)fVar2;
      *(double *)(lVar6 + 0x18 + lVar8) = (double)fVar1;
      pfVar9 = pfVar9 + 4;
    } while (pfVar9 != pfVar7);
  }
  return param_1;
}



// FUNCTION 1478573fa FUN_1478573fa body=256 status=ok
// SIG undefined FUN_1478573fa(void)

void FUN_1478573fa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478574fc(&local_58,puVar1);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  FUN_1478571f4(&local_48);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478574fc FUN_1478574fc body=168 status=ok
// SIG undefined FUN_1478574fc(void)

longlong * FUN_1478574fc(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)*(int *)(param_2 + 0x28) != 0) {
    pfVar7 = *(float **)(param_2 + 0x20);
    pfVar1 = pfVar7 + (longlong)*(int *)(param_2 + 0x28) * 3;
    do {
      fVar2 = pfVar7[2];
      fVar3 = pfVar7[1];
      fVar4 = *pfVar7;
      iVar5 = (int)param_1[1];
      lVar8 = (longlong)iVar5;
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1403e3958(param_1,iVar5);
      }
      lVar6 = *param_1;
      *(double *)(lVar6 + lVar8 * 0x18) = (double)fVar4;
      *(double *)(lVar6 + 8 + lVar8 * 0x18) = (double)fVar3;
      *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = (double)fVar2;
      pfVar7 = pfVar7 + 3;
    } while (pfVar7 != pfVar1);
  }
  return param_1;
}



// FUNCTION 1478575f6 FUN_1478575f6 body=91 status=ok
// SIG undefined FUN_1478575f6(void)

void FUN_1478575f6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,uVar1);
  FUN_14785cd1c(uVar1,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147857652 FUN_147857652 body=34 status=ok
// SIG undefined FUN_147857652(void)

void FUN_147857652(undefined8 param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_21();
  FUN_14785cd1c(param_2,param_1);
  return;
}



// FUNCTION 14785767a FUN_14785767a body=45 status=ok
// SIG undefined FUN_14785767a(void)

longlong FUN_14785767a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140946884(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478576c4 FUN_1478576c4 body=41 status=ok
// SIG undefined FUN_1478576c4(void)

void FUN_1478576c4(void)

{
  FUN_140033559(".\\Runtime/Engine/Classes/Animation/AnimSequenceBase.h",0xdc,
                L"Pure virtual not implemented (%s)",L"UAnimSequenceBase::GetAnimationPose");
  return;
}



// FUNCTION 14785779c FUN_14785779c body=51 status=ok
// SIG undefined FUN_14785779c(void)

void FUN_14785779c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x360))();
  return;
}



// FUNCTION 1478577d2 FUN_1478577d2 body=52 status=ok
// SIG undefined FUN_1478577d2(void)

void FUN_1478577d2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x370))();
  return;
}



// FUNCTION 14785782e FUN_14785782e body=38 status=ok
// SIG undefined FUN_14785782e(void)

void FUN_14785782e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// FUNCTION 14785786a FUN_14785786a body=45 status=ok
// SIG undefined FUN_14785786a(void)

longlong FUN_14785786a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14040f240(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785789e FUN_14785789e body=45 status=ok
// SIG undefined FUN_14785789e(void)

longlong FUN_14785789e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14040f240(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478578d2 FUN_1478578d2 body=45 status=ok
// SIG undefined FUN_1478578d2(void)

longlong FUN_1478578d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14040f240(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147857906 FUN_147857906 body=145 status=ok
// SIG undefined FUN_147857906(void)

ulonglong FUN_147857906(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2d8);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (DAT_14cb0b300 != (longlong *)0x0 && DAT_14cb0b308 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0b300 + 0x30))();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2d8);
    uVar4 = CONCAT71(uVar5,1);
    if (cVar1 == '\0') goto LAB_147857945;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2d8);
    plVar3 = DAT_14cb0b300;
    if (DAT_14cb0b308 == 0) {
      plVar3 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
    uVar4 = (ulonglong)uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2d8);
LAB_147857945:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147857998 FUN_147857998 body=26 status=ok
// SIG undefined FUN_147857998(void)

void FUN_147857998(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_14785cd68(param_1);
  return;
}



// FUNCTION 1478579b2 FUN_1478579b2 body=144 status=ok
// SIG undefined FUN_1478579b2(void)

undefined4 FUN_1478579b2(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b310);
  if (DAT_14cb0b338 == (longlong *)0x0 || DAT_14cb0b340 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*DAT_14cb0b338 + 0x30))();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b310);
    if (cVar1 == '\0') {
      return 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b310);
    plVar3 = DAT_14cb0b338;
    if (DAT_14cb0b340 == 0) {
      plVar3 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b310);
  return uVar2;
}



// FUNCTION 147857aae FUN_147857aae body=109 status=ok
// SIG undefined FUN_147857aae(void)

int FUN_147857aae(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147857bc0 FUN_147857bc0 body=113 status=ok
// SIG undefined FUN_147857bc0(void)

undefined1 FUN_147857bc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    bVar7 = DAT_14c950c29;
    do {
      lVar8 = *(longlong *)(param_3 + lVar9);
      if ((bVar7 & 1) != 0) {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *(longlong *)(param_3 + lVar9);
          bVar7 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar9);
      *plVar1 = lVar8;
      plVar2 = (longlong *)(param_3 + 8 + lVar9);
      lVar8 = plVar2[1];
      plVar1[1] = *plVar2;
      plVar1[2] = lVar8;
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar9);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)(plVar1 + 3) = *puVar3;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar4;
      *(undefined4 *)(plVar1 + 4) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar6;
      lVar9 = lVar9 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147857c5a FUN_147857c5a body=59 status=ok
// SIG undefined FUN_147857c5a(void)

undefined8 FUN_147857c5a(longlong *param_1)

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



// FUNCTION 147857d1e FUN_147857d1e body=75 status=ok
// SIG undefined FUN_147857d1e(void)

undefined1 FUN_147857d1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147857d6a FUN_147857d6a body=31 status=ok
// SIG undefined FUN_147857d6a(void)

undefined1
FUN_147857d6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144a7afa6(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147857da6 FUN_147857da6 body=70 status=ok
// SIG undefined FUN_147857da6(void)

void FUN_147857da6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147857e6d(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147857df8 FUN_147857df8 body=38 status=ok
// SIG undefined FUN_147857df8(void)

void FUN_147857df8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147857e6d FUN_147857e6d body=198 status=ok
// SIG undefined FUN_147857e6d(void)

void FUN_147857e6d(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  iVar8 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(param_1 + 3) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)param_1[2];
    iVar8 = *(int *)(param_1 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar8,puVar7);
  FUN_144a78877(uVar5,uVar6);
  return;
}



// FUNCTION 147857f9a FUN_147857f9a body=86 status=ok
// SIG undefined FUN_147857f9a(void)

undefined1 FUN_147857f9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1401842de(param_2);
    FUN_14058b698(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 147858018 FUN_147858018 body=59 status=ok
// SIG undefined FUN_147858018(void)

undefined8 FUN_147858018(longlong *param_1)

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



// FUNCTION 147858064 FUN_147858064 body=38 status=ok
// SIG undefined FUN_147858064(void)

void FUN_147858064(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1400d7d10(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1478580d8 FUN_1478580d8 body=98 status=ok
// SIG undefined FUN_1478580d8(void)

void FUN_1478580d8(longlong param_1,int param_2,int param_3)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,0x10);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (param_3 < iVar1) {
    FUN_1446f8d3c(param_1,0,iVar1,0x100,0x10);
    param_3 = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14785813a FUN_14785813a body=60 status=ok
// SIG undefined FUN_14785813a(void)

void FUN_14785813a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147c4992e(param_1,param_2);
    param_1 = param_1 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return;
}



// FUNCTION 147858176 FUN_147858176 body=111 status=ok
// SIG undefined FUN_147858176(void)

void FUN_147858176(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478581e5 FUN_1478581e5 body=52 status=ok
// SIG undefined FUN_1478581e5(void)

void FUN_1478581e5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1479b2570(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 14785821a FUN_14785821a body=115 status=ok
// SIG undefined FUN_14785821a(void)

void FUN_14785821a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,0x10);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14785828d FUN_14785828d body=235 status=ok
// SIG undefined FUN_14785828d(void)

void FUN_14785828d(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1[1] = 0;
    param_1[2] = 0x700000000;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
    *(undefined1 *)((longlong)param_1 + 0x19) = 3;
    *(undefined4 *)(param_1 + 4) = 6;
    param_1[5] = param_1;
    *param_1 = &PTR_FUN_14a418060;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0x3ff0000000000000;
    param_1[0xf] = 0x3ff0000000000000;
    param_1[0x10] = 0x3ff0000000000000;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    FUN_147c4cfbe(param_1,param_2);
    param_1 = param_1 + 0x14;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 147858378 FUN_147858378 body=111 status=ok
// SIG undefined FUN_147858378(void)

void FUN_147858378(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478583e7 FUN_1478583e7 body=114 status=ok
// SIG undefined FUN_1478583e7(void)

void FUN_1478583e7(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1[1] = 0;
    param_1[2] = 0x700000000;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
    *(undefined1 *)((longlong)param_1 + 0x19) = 3;
    *(undefined4 *)(param_1 + 4) = 6;
    param_1[5] = param_1;
    *param_1 = &PTR_FUN_14a418040;
    param_1[6] = 0;
    FUN_147c4d060(param_1,param_2);
    param_1 = param_1 + 7;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1478584de FUN_1478584de body=59 status=ok
// SIG undefined FUN_1478584de(void)

undefined8 FUN_1478584de(longlong *param_1)

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



// FUNCTION 147858600 FUN_147858600 body=59 status=ok
// SIG undefined FUN_147858600(void)

undefined8 FUN_147858600(longlong *param_1)

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



// FUNCTION 147858726 FUN_147858726 body=59 status=ok
// SIG undefined FUN_147858726(void)

undefined8 FUN_147858726(longlong *param_1)

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



// FUNCTION 147858852 FUN_147858852 body=39 status=ok
// SIG undefined FUN_147858852(void)

undefined8 FUN_147858852(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478588a2 FUN_1478588a2 body=59 status=ok
// SIG undefined FUN_1478588a2(void)

undefined8 FUN_1478588a2(longlong *param_1)

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



// FUNCTION 14785895c FUN_14785895c body=47 status=ok
// SIG undefined FUN_14785895c(void)

void FUN_14785895c(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478589a2 FUN_1478589a2 body=67 status=ok
// SIG undefined FUN_1478589a2(void)

undefined1 FUN_1478589a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147858a0e FUN_147858a0e body=59 status=ok
// SIG undefined FUN_147858a0e(void)

undefined8 FUN_147858a0e(longlong *param_1)

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



// FUNCTION 147858aac FUN_147858aac body=51 status=ok
// SIG undefined FUN_147858aac(void)

void FUN_147858aac(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147858af8 FUN_147858af8 body=47 status=ok
// SIG undefined FUN_147858af8(void)

void FUN_147858af8(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147858b3e FUN_147858b3e body=67 status=ok
// SIG undefined FUN_147858b3e(void)

undefined1 FUN_147858b3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147858baa FUN_147858baa body=59 status=ok
// SIG undefined FUN_147858baa(void)

undefined8 FUN_147858baa(longlong *param_1)

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



// FUNCTION 147858c48 FUN_147858c48 body=51 status=ok
// SIG undefined FUN_147858c48(void)

void FUN_147858c48(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147858ce8 FUN_147858ce8 body=59 status=ok
// SIG undefined FUN_147858ce8(void)

undefined8 FUN_147858ce8(longlong *param_1)

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



// FUNCTION 147858e0e FUN_147858e0e body=59 status=ok
// SIG undefined FUN_147858e0e(void)

undefined8 FUN_147858e0e(longlong *param_1)

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



// FUNCTION 147858f1a FUN_147858f1a body=59 status=ok
// SIG undefined FUN_147858f1a(void)

undefined8 FUN_147858f1a(longlong *param_1)

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



// FUNCTION 147858ff2 FUN_147858ff2 body=68 status=ok
// SIG undefined FUN_147858ff2(void)

undefined8 FUN_147858ff2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e00d48(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14785905e FUN_14785905e body=59 status=ok
// SIG undefined FUN_14785905e(void)

undefined8 FUN_14785905e(longlong *param_1)

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



// FUNCTION 1478590a4 FUN_1478590a4 body=37 status=ok
// SIG undefined FUN_1478590a4(void)

void FUN_1478590a4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14785919a FUN_14785919a body=59 status=ok
// SIG undefined FUN_14785919a(void)

undefined8 FUN_14785919a(longlong *param_1)

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



// FUNCTION 1478592ca FUN_1478592ca body=59 status=ok
// SIG undefined FUN_1478592ca(void)

undefined8 FUN_1478592ca(longlong *param_1)

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



// FUNCTION 147859410 FUN_147859410 body=64 status=ok
// SIG undefined FUN_147859410(void)

void FUN_147859410(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x10) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x18);
  return;
}



// FUNCTION 147859460 FUN_147859460 body=118 status=ok
// SIG undefined FUN_147859460(void)

undefined8 FUN_147859460(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + 8 + lVar1) = *(undefined4 *)(param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      *(undefined4 *)(param_2 + 0x78 + lVar1) = *(undefined4 *)(param_3 + 0x78 + lVar1);
      *(undefined2 *)(param_2 + 0x7c + lVar1) = *(undefined2 *)(param_3 + 0x7c + lVar1);
      FUN_14093c00e(param_2 + lVar1 + 0x80,param_3 + lVar1 + 0x80);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478594fe FUN_1478594fe body=59 status=ok
// SIG undefined FUN_1478594fe(void)

undefined8 FUN_1478594fe(longlong *param_1)

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



// FUNCTION 1478595a2 FUN_1478595a2 body=78 status=ok
// SIG undefined FUN_1478595a2(void)

void FUN_1478595a2(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined **)(param_1 + 0x10) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147859628 FUN_147859628 body=155 status=ok
// SIG undefined FUN_147859628(void)

undefined8 FUN_147859628(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar3 = param_3 + 0x10;
    puVar1 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
      *param_2 = *param_3;
      lVar2 = 3;
      puVar4 = puVar1;
      puVar5 = puVar3;
      do {
        *(undefined2 *)((longlong)puVar4 + -4) = *(undefined2 *)((longlong)puVar5 + -4);
        *(undefined4 *)(puVar4 + -1) = *(undefined4 *)(puVar5 + -1);
        FUN_14093c00e(puVar4,puVar5);
        puVar5 = puVar5 + 0x10;
        puVar4 = puVar4 + 0x10;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      param_3 = param_3 + 0x32;
      param_2 = param_2 + 0x32;
      puVar3 = puVar3 + 0x32;
      puVar1 = puVar1 + 0x32;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478596ec FUN_1478596ec body=59 status=ok
// SIG undefined FUN_1478596ec(void)

undefined8 FUN_1478596ec(longlong *param_1)

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



// FUNCTION 147859738 FUN_147859738 body=40 status=ok
// SIG undefined FUN_147859738(void)

void FUN_147859738(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 400) == '\x01') {
    FUN_147859826(param_2);
    *(undefined1 *)(param_2 + 400) = 0;
  }
  return;
}



// FUNCTION 1478597ae FUN_1478597ae body=119 status=ok
// SIG undefined FUN_1478597ae(void)

void FUN_1478597ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = 0x80;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x40) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x68);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x34) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0x7f7fffff;
    *(undefined2 *)((longlong)param_1 + lVar2 + -4) = 0x404;
    *(undefined **)((longlong)param_1 + lVar2 + -0x70) = &DAT_14a176f00;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x80;
  } while (lVar2 != 0x200);
  return;
}



// FUNCTION 147859826 FUN_147859826 body=105 status=ok
// SIG undefined FUN_147859826(void)

void FUN_147859826(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined **)(param_1 + 0x110 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x180 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x110 + lVar1) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x118 + lVar1);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != -0x180);
  return;
}



// FUNCTION 147859890 FUN_147859890 body=63 status=ok
// SIG undefined FUN_147859890(void)

void FUN_147859890(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1478597ae(param_2 + 2);
  FUN_1478597ae(param_2 + 0x34);
  FUN_1478597ae(param_2 + 0x66);
  return;
}



// FUNCTION 1478598d0 FUN_1478598d0 body=63 status=ok
// SIG undefined FUN_1478598d0(void)

void FUN_1478598d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1478597ae(param_2 + 2);
  FUN_1478597ae(param_2 + 0x34);
  FUN_1478597ae(param_2 + 0x66);
  return;
}



// FUNCTION 147859910 FUN_147859910 body=49 status=ok
// SIG undefined FUN_147859910(void)

void FUN_147859910(undefined8 param_1,longlong param_2)

{
  FUN_147859826(param_2 + 0x330);
  FUN_147859826(param_2 + 0x1a0);
  FUN_147859826(param_2 + 0x10);
  return;
}



// FUNCTION 147859962 FUN_147859962 body=63 status=ok
// SIG undefined FUN_147859962(void)

undefined1 FUN_147859962(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147859a6c(param_2,param_3);
    param_3 = param_3 + 0x4c0;
    param_2 = param_2 + 0x4c0;
  }
  return 1;
}



// FUNCTION 1478599ca FUN_1478599ca body=59 status=ok
// SIG undefined FUN_1478599ca(void)

undefined8 FUN_1478599ca(longlong *param_1)

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



// FUNCTION 147859a6c FUN_147859a6c body=297 status=ok
// SIG undefined FUN_147859a6c(void)

undefined8 * FUN_147859a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  puVar2 = param_2 + 0x12;
  puVar1 = param_1 + 0x12;
  lVar3 = 3;
  do {
    *(undefined2 *)((longlong)puVar1 + -4) = *(undefined2 *)((longlong)puVar2 + -4);
    *(undefined4 *)(puVar1 + -1) = *(undefined4 *)(puVar2 + -1);
    FUN_14093c00e(puVar1,puVar2);
    puVar2 = puVar2 + 0x10;
    puVar1 = puVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
  param_1[0x34] = param_2[0x34];
  puVar2 = param_2 + 0x44;
  puVar1 = param_1 + 0x44;
  lVar3 = 3;
  do {
    *(undefined2 *)((longlong)puVar1 + -4) = *(undefined2 *)((longlong)puVar2 + -4);
    *(undefined4 *)(puVar1 + -1) = *(undefined4 *)(puVar2 + -1);
    FUN_14093c00e(puVar1,puVar2);
    puVar2 = puVar2 + 0x10;
    puVar1 = puVar1 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x67);
  param_1[0x66] = param_2[0x66];
  param_2 = param_2 + 0x76;
  puVar2 = param_1 + 0x76;
  lVar3 = 3;
  do {
    *(undefined2 *)((longlong)puVar2 + -4) = *(undefined2 *)((longlong)param_2 + -4);
    *(undefined4 *)(puVar2 + -1) = *(undefined4 *)(param_2 + -1);
    FUN_14093c00e(puVar2,param_2);
    param_2 = param_2 + 0x10;
    puVar2 = puVar2 + 0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 147859b96 FUN_147859b96 body=65 status=ok
// SIG undefined FUN_147859b96(void)

void FUN_147859b96(longlong param_1)

{
  if (*(char *)(param_1 + 0x4c0) == '\x01') {
    FUN_147859826(param_1 + 0x330);
    FUN_147859826(param_1 + 0x1a0);
    FUN_147859826(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x4c0) = 0;
  }
  return;
}



// FUNCTION 147859c44 FUN_147859c44 body=59 status=ok
// SIG undefined FUN_147859c44(void)

undefined8 FUN_147859c44(longlong *param_1)

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



// FUNCTION 147859cf6 FUN_147859cf6 body=44 status=ok
// SIG undefined FUN_147859cf6(void)

void FUN_147859cf6(undefined8 param_1,longlong *param_2)

{
  FUN_14040f326(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147859d38 FUN_147859d38 body=54 status=ok
// SIG undefined FUN_147859d38(void)

undefined1 FUN_147859d38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147859e32(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147859d96 FUN_147859d96 body=59 status=ok
// SIG undefined FUN_147859d96(void)

undefined8 FUN_147859d96(longlong *param_1)

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



// FUNCTION 147859e32 FUN_147859e32 body=93 status=ok
// SIG undefined FUN_147859e32(void)

undefined8 * FUN_147859e32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14040f326(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147859e90(param_1,iVar1);
      FUN_147859f03(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147859e90 FUN_147859e90 body=115 status=ok
// SIG undefined FUN_147859e90(void)

void FUN_147859e90(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147859f03 FUN_147859f03 body=82 status=ok
// SIG undefined FUN_147859f03(void)

void FUN_147859f03(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_1 + -8) = *(undefined4 *)(param_2 + -8);
      *(undefined8 *)(param_1 + -0x10) = *(undefined8 *)(param_2 + -0x10);
      FUN_140501b78(param_1,param_2);
      param_1 = param_1 + 0x90;
      param_2 = param_2 + 0x90;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147859f56 FUN_147859f56 body=48 status=ok
// SIG undefined FUN_147859f56(void)

void FUN_147859f56(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_14040f326(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147859fce FUN_147859fce body=59 status=ok
// SIG undefined FUN_147859fce(void)

undefined8 FUN_147859fce(longlong *param_1)

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



// FUNCTION 14785a0a4 FUN_14785a0a4 body=54 status=ok
// SIG undefined FUN_14785a0a4(void)

undefined1 FUN_14785a0a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14785a102 FUN_14785a102 body=59 status=ok
// SIG undefined FUN_14785a102(void)

undefined8 FUN_14785a102(longlong *param_1)

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



// FUNCTION 14785a148 FUN_14785a148 body=37 status=ok
// SIG undefined FUN_14785a148(void)

void FUN_14785a148(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14785a22a FUN_14785a22a body=59 status=ok
// SIG undefined FUN_14785a22a(void)

undefined8 FUN_14785a22a(longlong *param_1)

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



// FUNCTION 14785a350 FUN_14785a350 body=59 status=ok
// SIG undefined FUN_14785a350(void)

undefined8 FUN_14785a350(longlong *param_1)

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



// FUNCTION 14785a478 FUN_14785a478 body=59 status=ok
// SIG undefined FUN_14785a478(void)

undefined8 FUN_14785a478(longlong *param_1)

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



// FUNCTION 14785a592 FUN_14785a592 body=59 status=ok
// SIG undefined FUN_14785a592(void)

undefined8 FUN_14785a592(longlong *param_1)

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



// FUNCTION 14785a6c4 FUN_14785a6c4 body=59 status=ok
// SIG undefined FUN_14785a6c4(void)

undefined8 FUN_14785a6c4(longlong *param_1)

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



// FUNCTION 14785a7fc FUN_14785a7fc body=59 status=ok
// SIG undefined FUN_14785a7fc(void)

undefined8 FUN_14785a7fc(longlong *param_1)

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



// FUNCTION 14785a94a FUN_14785a94a body=59 status=ok
// SIG undefined FUN_14785a94a(void)

undefined8 FUN_14785a94a(longlong *param_1)

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



// FUNCTION 14785aa74 FUN_14785aa74 body=59 status=ok
// SIG undefined FUN_14785aa74(void)

undefined8 FUN_14785aa74(longlong *param_1)

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



// FUNCTION 14785ab78 FUN_14785ab78 body=54 status=ok
// SIG undefined FUN_14785ab78(void)

undefined1 FUN_14785ab78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785ac90(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14785abd6 FUN_14785abd6 body=59 status=ok
// SIG undefined FUN_14785abd6(void)

undefined8 FUN_14785abd6(longlong *param_1)

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



// FUNCTION 14785ac1c FUN_14785ac1c body=38 status=ok
// SIG undefined FUN_14785ac1c(void)

void FUN_14785ac1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14785ac90 FUN_14785ac90 body=93 status=ok
// SIG undefined FUN_14785ac90(void)

undefined4 * FUN_14785ac90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar4 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar4;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



// FUNCTION 14785ad5a FUN_14785ad5a body=59 status=ok
// SIG undefined FUN_14785ad5a(void)

undefined8 FUN_14785ad5a(longlong *param_1)

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



// FUNCTION 14785ae0c FUN_14785ae0c body=50 status=ok
// SIG undefined FUN_14785ae0c(void)

void FUN_14785ae0c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014785ae33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14785ae54 FUN_14785ae54 body=54 status=ok
// SIG undefined FUN_14785ae54(void)

undefined1 FUN_14785ae54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785af7c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14785aeb2 FUN_14785aeb2 body=59 status=ok
// SIG undefined FUN_14785aeb2(void)

undefined8 FUN_14785aeb2(longlong *param_1)

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



// FUNCTION 14785aef8 FUN_14785aef8 body=53 status=ok
// SIG undefined FUN_14785aef8(void)

void FUN_14785aef8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong **)(param_2 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x20) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14785af7c FUN_14785af7c body=228 status=ok
// SIG undefined FUN_14785af7c(void)

undefined4 * FUN_14785af7c(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  lVar4 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 2);
    }
  }
  bVar3 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  lVar4 = *(longlong *)(param_2 + 6);
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar4;
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[10] = param_2[10];
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  lVar4 = *(longlong *)(param_2 + 0x12);
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x12);
    }
  }
  *(longlong *)(param_1 + 0x12) = lVar4;
  return param_1;
}



// FUNCTION 14785b0d2 FUN_14785b0d2 body=64 status=ok
// SIG undefined FUN_14785b0d2(void)

undefined4 FUN_14785b0d2(longlong *param_1,undefined4 *param_2)

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



// FUNCTION 14785b1b6 FUN_14785b1b6 body=110 status=ok
// SIG undefined FUN_14785b1b6(void)

undefined1 FUN_14785b1b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785b24c FUN_14785b24c body=59 status=ok
// SIG undefined FUN_14785b24c(void)

undefined8 FUN_14785b24c(longlong *param_1)

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



// FUNCTION 14785b366 FUN_14785b366 body=63 status=ok
// SIG undefined FUN_14785b366(void)

undefined1 FUN_14785b366(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785b490(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14785b3ce FUN_14785b3ce body=59 status=ok
// SIG undefined FUN_14785b3ce(void)

undefined8 FUN_14785b3ce(longlong *param_1)

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



// FUNCTION 14785b41a FUN_14785b41a body=39 status=ok
// SIG undefined FUN_14785b41a(void)

void FUN_14785b41a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1447166b4(param_2 + 0x40);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14785b490 FUN_14785b490 body=92 status=ok
// SIG undefined FUN_14785b490(void)

undefined8 * FUN_14785b490(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_14470ea10(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  FUN_144717214(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  FUN_140341952(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 14785b556 FUN_14785b556 body=59 status=ok
// SIG undefined FUN_14785b556(void)

undefined8 FUN_14785b556(longlong *param_1)

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



// FUNCTION 14785b5f6 FUN_14785b5f6 body=29 status=ok
// SIG undefined FUN_14785b5f6(void)

undefined8 FUN_14785b5f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785b65e FUN_14785b65e body=59 status=ok
// SIG undefined FUN_14785b65e(void)

undefined8 FUN_14785b65e(longlong *param_1)

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



// FUNCTION 14785b762 FUN_14785b762 body=59 status=ok
// SIG undefined FUN_14785b762(void)

undefined8 FUN_14785b762(longlong *param_1)

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



// FUNCTION 14785b7a8 FUN_14785b7a8 body=48 status=ok
// SIG undefined FUN_14785b7a8(void)

void FUN_14785b7a8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a5c56a0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14785b88c FUN_14785b88c body=59 status=ok
// SIG undefined FUN_14785b88c(void)

undefined8 FUN_14785b88c(longlong *param_1)

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



// FUNCTION 14785b962 FUN_14785b962 body=54 status=ok
// SIG undefined FUN_14785b962(void)

undefined1 FUN_14785b962(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1407f9912(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14785b9c0 FUN_14785b9c0 body=59 status=ok
// SIG undefined FUN_14785b9c0(void)

undefined8 FUN_14785b9c0(longlong *param_1)

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



// FUNCTION 14785ba06 FUN_14785ba06 body=37 status=ok
// SIG undefined FUN_14785ba06(void)

void FUN_14785ba06(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14785baa8 FUN_14785baa8 body=63 status=ok
// SIG undefined FUN_14785baa8(void)

undefined1 FUN_14785baa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141660abc(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14785bb10 FUN_14785bb10 body=59 status=ok
// SIG undefined FUN_14785bb10(void)

undefined8 FUN_14785bb10(longlong *param_1)

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



// FUNCTION 14785bbbc FUN_14785bbbc body=29 status=ok
// SIG undefined FUN_14785bbbc(void)

undefined8 FUN_14785bbbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785bbda FUN_14785bbda body=29 status=ok
// SIG undefined FUN_14785bbda(void)

undefined8 FUN_14785bbda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785bc7c FUN_14785bc7c body=59 status=ok
// SIG undefined FUN_14785bc7c(void)

undefined8 FUN_14785bc7c(longlong *param_1)

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



// FUNCTION 14785bd1e FUN_14785bd1e body=68 status=ok
// SIG undefined FUN_14785bd1e(void)

void FUN_14785bd1e(undefined8 param_1,longlong param_2)

{
  FUN_1446f470e(param_2,&DAT_149dfb77a,1);
  *(undefined1 **)(param_2 + 8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_2 + 0x10) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 2;
  *(undefined1 *)(param_2 + 0x3c) = 0;
  return;
}



// FUNCTION 14785bd62 FUN_14785bd62 body=68 status=ok
// SIG undefined FUN_14785bd62(void)

void FUN_14785bd62(undefined8 param_1,longlong param_2)

{
  FUN_1446f470e(param_2,&DAT_149dfb77a,1);
  *(undefined1 **)(param_2 + 8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_2 + 0x10) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 2;
  *(undefined1 *)(param_2 + 0x3c) = 0;
  return;
}



// FUNCTION 14785bda6 FUN_14785bda6 body=48 status=ok
// SIG undefined FUN_14785bda6(void)

void FUN_14785bda6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14785bdec FUN_14785bdec body=103 status=ok
// SIG undefined FUN_14785bdec(void)

undefined8 FUN_14785bdec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_14785bf18(param_2,param_3);
      FUN_14785bf70(param_2 + 0x10,param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
      *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_3 + 0x24);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785be7c FUN_14785be7c body=59 status=ok
// SIG undefined FUN_14785be7c(void)

undefined8 FUN_14785be7c(longlong *param_1)

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



// FUNCTION 14785bf18 FUN_14785bf18 body=88 status=ok
// SIG undefined FUN_14785bf18(void)

undefined8 * FUN_14785bf18(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14785bfc8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14785bf70 FUN_14785bf70 body=88 status=ok
// SIG undefined FUN_14785bf70(void)

undefined8 * FUN_14785bf70(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14785c02a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14785bfc8 FUN_14785bfc8 body=98 status=ok
// SIG undefined FUN_14785bfc8(void)

void FUN_14785bfc8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14785c02a FUN_14785c02a body=98 status=ok
// SIG undefined FUN_14785c02a(void)

void FUN_14785c02a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14785c08e FUN_14785c08e body=52 status=ok
// SIG undefined FUN_14785c08e(void)

void FUN_14785c08e(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14785c0da FUN_14785c0da body=47 status=ok
// SIG undefined FUN_14785c0da(void)

void FUN_14785c0da(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14785c120 FUN_14785c120 body=67 status=ok
// SIG undefined FUN_14785c120(void)

undefined1 FUN_14785c120(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14785c228(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14785c18c FUN_14785c18c body=59 status=ok
// SIG undefined FUN_14785c18c(void)

undefined8 FUN_14785c18c(longlong *param_1)

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



// FUNCTION 14785c228 FUN_14785c228 body=89 status=ok
// SIG undefined FUN_14785c228(void)

undefined8 * FUN_14785c228(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14785c282(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 14785c282 FUN_14785c282 body=115 status=ok
// SIG undefined FUN_14785c282(void)

void FUN_14785c282(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14785c2f6 FUN_14785c2f6 body=51 status=ok
// SIG undefined FUN_14785c2f6(void)

void FUN_14785c2f6(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14785c396 FUN_14785c396 body=59 status=ok
// SIG undefined FUN_14785c396(void)

undefined8 FUN_14785c396(longlong *param_1)

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



// FUNCTION 14785c47a FUN_14785c47a body=80 status=ok
// SIG undefined FUN_14785c47a(void)

undefined1 FUN_14785c47a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140de4b5e(param_2,param_3);
    FUN_14785c646(param_2 + 0x10,param_3 + 0x10);
    FUN_140de4b5e(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 14785c4f2 FUN_14785c4f2 body=59 status=ok
// SIG undefined FUN_14785c4f2(void)

undefined8 FUN_14785c4f2(longlong *param_1)

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



// FUNCTION 14785c538 FUN_14785c538 body=34 status=ok
// SIG undefined FUN_14785c538(void)

void FUN_14785c538(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1478571f4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14785c5a8 FUN_14785c5a8 body=80 status=ok
// SIG undefined FUN_14785c5a8(void)

bool FUN_14785c5a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (0x26 < iVar1) {
    FUN_14785c5f8(param_2,param_1);
  }
  return 0x26 < iVar1;
}



// FUNCTION 14785c5f8 FUN_14785c5f8 body=78 status=ok
// SIG undefined FUN_14785c5f8(void)

longlong FUN_14785c5f8(longlong param_1,longlong param_2)

{
  FUN_1406781f6(param_2,param_1,0);
  FUN_146ed5228(param_2 + 0x10,param_1,0);
  if (0x14e < *(int *)(param_1 + 0x40)) {
    FUN_1406781f6(param_2 + 0x20,param_1,0);
  }
  return param_1;
}



// FUNCTION 14785c646 FUN_14785c646 body=88 status=ok
// SIG undefined FUN_14785c646(void)

undefined8 * FUN_14785c646(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ed5568(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14785c71c FUN_14785c71c body=192 status=ok
// SIG undefined FUN_14785c71c(void)

uint FUN_14785c71c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar4 * 0x40 + (uVar4 >> 2) +
           0x9e3779b9 ^ uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785c85c FUN_14785c85c body=47 status=ok
// SIG undefined FUN_14785c85c(void)

void FUN_14785c85c(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14785c8a2 FUN_14785c8a2 body=67 status=ok
// SIG undefined FUN_14785c8a2(void)

undefined1 FUN_14785c8a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14785c90e FUN_14785c90e body=59 status=ok
// SIG undefined FUN_14785c90e(void)

undefined8 FUN_14785c90e(longlong *param_1)

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



// FUNCTION 14785c9ac FUN_14785c9ac body=51 status=ok
// SIG undefined FUN_14785c9ac(void)

void FUN_14785c9ac(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14785ca76 FUN_14785ca76 body=59 status=ok
// SIG undefined FUN_14785ca76(void)

undefined8 FUN_14785ca76(longlong *param_1)

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



// FUNCTION 14785cb5e FUN_14785cb5e body=48 status=ok
// SIG undefined FUN_14785cb5e(void)

void FUN_14785cb5e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14785cba4 FUN_14785cba4 body=126 status=ok
// SIG undefined FUN_14785cba4(void)

undefined8 FUN_14785cba4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      FUN_144a787a6();
      lVar1 = param_3 + lVar3;
      lVar2 = param_2 + lVar3;
      FUN_144a787a6(lVar2 + 0x18,lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar1 + 0x30);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785cc4a FUN_14785cc4a body=59 status=ok
// SIG undefined FUN_14785cc4a(void)

undefined8 FUN_14785cc4a(longlong *param_1)

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



// FUNCTION 14785cce8 FUN_14785cce8 body=52 status=ok
// SIG undefined FUN_14785cce8(void)

void FUN_14785cce8(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14785cd1c FUN_14785cd1c body=75 status=ok
// SIG undefined FUN_14785cd1c(void)

void FUN_14785cd1c(undefined8 param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2a0);
  if ((DAT_14cb0b2d0 != 0) && (DAT_14cb0b2c8 != (longlong *)0x0)) {
    (**(code **)(*DAT_14cb0b2c8 + 0x60))(DAT_14cb0b2c8,param_1,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b2a0);
  return;
}



// FUNCTION 14785cd68 FUN_14785cd68 body=67 status=ok
// SIG undefined FUN_14785cd68(void)

void FUN_14785cd68(undefined8 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b268);
  if ((DAT_14cb0b298 != 0) && (DAT_14cb0b290 != (longlong *)0x0)) {
    (**(code **)(*DAT_14cb0b290 + 0x60))(DAT_14cb0b290,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0b268);
  return;
}



// FUNCTION 14785cdc8 FUN_14785cdc8 body=214 status=ok
// SIG undefined FUN_14785cdc8(void)

void FUN_14785cdc8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785cef6 FUN_14785cef6 body=75 status=ok
// SIG undefined FUN_14785cef6(void)

void FUN_14785cef6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1417b7172(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785cf64 FUN_14785cf64 body=75 status=ok
// SIG undefined FUN_14785cf64(void)

void FUN_14785cf64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_14797ce42(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785cfba FUN_14785cfba body=75 status=ok
// SIG undefined FUN_14785cfba(void)

void FUN_14785cfba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14797ce42(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14785d090 FUN_14785d090 body=45 status=ok
// SIG undefined FUN_14785d090(void)

longlong FUN_14785d090(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145acebd6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d0be FUN_14785d0be body=45 status=ok
// SIG undefined FUN_14785d0be(void)

longlong FUN_14785d0be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403ccc4a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d0f2 FUN_14785d0f2 body=45 status=ok
// SIG undefined FUN_14785d0f2(void)

longlong FUN_14785d0f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1403ccc4a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d12e FUN_14785d12e body=45 status=ok
// SIG undefined FUN_14785d12e(void)

longlong FUN_14785d12e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d15c FUN_14785d15c body=48 status=ok
// SIG undefined FUN_14785d15c(void)

longlong FUN_14785d15c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d18c FUN_14785d18c body=48 status=ok
// SIG undefined FUN_14785d18c(void)

longlong FUN_14785d18c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d1bc FUN_14785d1bc body=48 status=ok
// SIG undefined FUN_14785d1bc(void)

longlong FUN_14785d1bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d1f0 FUN_14785d1f0 body=45 status=ok
// SIG undefined FUN_14785d1f0(void)

longlong FUN_14785d1f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d21e FUN_14785d21e body=45 status=ok
// SIG undefined FUN_14785d21e(void)

longlong FUN_14785d21e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d24c FUN_14785d24c body=45 status=ok
// SIG undefined FUN_14785d24c(void)

longlong FUN_14785d24c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d27a FUN_14785d27a body=45 status=ok
// SIG undefined FUN_14785d27a(void)

longlong FUN_14785d27a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d2a8 FUN_14785d2a8 body=87 status=ok
// SIG undefined FUN_14785d2a8(void)

uint FUN_14785d2a8(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_144757f48(param_1,0x40000000);
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar3 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return uVar1;
    }
    LOCK();
    uVar2 = *(uint *)(lVar3 + 8);
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  return uVar2;
}



// FUNCTION 14785d304 FUN_14785d304 body=45 status=ok
// SIG undefined FUN_14785d304(void)

longlong FUN_14785d304(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145887078(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d336 FUN_14785d336 body=45 status=ok
// SIG undefined FUN_14785d336(void)

longlong FUN_14785d336(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403ccc4a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d364 FUN_14785d364 body=45 status=ok
// SIG undefined FUN_14785d364(void)

longlong FUN_14785d364(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1403ccc4a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785d3c2 FUN_14785d3c2 body=104 status=ok
// SIG undefined FUN_14785d3c2(void)

undefined1 FUN_14785d3c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14785d452 FUN_14785d452 body=59 status=ok
// SIG undefined FUN_14785d452(void)

undefined8 FUN_14785d452(longlong *param_1)

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



// FUNCTION 14785d57c FUN_14785d57c body=59 status=ok
// SIG undefined FUN_14785d57c(void)

undefined8 FUN_14785d57c(longlong *param_1)

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



// FUNCTION 14785d61e FUN_14785d61e body=56 status=ok
// SIG undefined FUN_14785d61e(void)

void FUN_14785d61e(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149e01fe8);
  *(undefined8 *)(param_2 + 0x10) = 0x42c8000000000000;
  *(undefined4 *)(param_2 + 0x18) = 4;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  return;
}



// FUNCTION 14785d656 FUN_14785d656 body=56 status=ok
// SIG undefined FUN_14785d656(void)

void FUN_14785d656(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149e01fe8);
  *(undefined8 *)(param_2 + 0x10) = 0x42c8000000000000;
  *(undefined4 *)(param_2 + 0x18) = 4;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  return;
}


