// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fd2cba FUN_146fd2cba body=200 status=ok
// SIG undefined FUN_146fd2cba(void)

void FUN_146fd2cba(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_29 = (undefined1)(int)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd2cff;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd2cff:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd2d84(lVar2,uVar5,uVar3,&local_29);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2d84 FUN_146fd2d84 body=200 status=ok
// SIG undefined FUN_146fd2d84(void)

void FUN_146fd2d84(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
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
  *local_48 = &PTR_FUN_149fba218;
  *(undefined1 *)(local_48 + 7) = *param_4;
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



// FUNCTION 146fd2e4e FUN_146fd2e4e body=29 status=ok
// SIG undefined FUN_146fd2e4e(void)

undefined8 FUN_146fd2e4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2e6c FUN_146fd2e6c body=101 status=ok
// SIG undefined FUN_146fd2e6c(void)

undefined8 * FUN_146fd2e6c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fba228;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd2ed2 FUN_146fd2ed2 body=29 status=ok
// SIG undefined FUN_146fd2ed2(void)

undefined8 FUN_146fd2ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2ef0 FUN_146fd2ef0 body=101 status=ok
// SIG undefined FUN_146fd2ef0(void)

undefined8 * FUN_146fd2ef0(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fba228;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd2f56 FUN_146fd2f56 body=101 status=ok
// SIG undefined FUN_146fd2f56(void)

int FUN_146fd2f56(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146fd2fbc FUN_146fd2fbc body=343 status=ok
// SIG undefined FUN_146fd2fbc(void)

undefined4 * FUN_146fd2fbc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fd3114(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = *local_40;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + local_40[1] ^ uVar7;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + local_40[2] ^ uVar7;
  cVar4 = FUN_146fd31fa(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar7) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146fd32ca(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd3114 FUN_146fd3114 body=229 status=ok
// SIG undefined FUN_146fd3114(void)

int * FUN_146fd3114(longlong *param_1,int *param_2)

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



// FUNCTION 146fd31fa FUN_146fd31fa body=93 status=ok
// SIG undefined FUN_146fd31fa(void)

undefined8 FUN_146fd31fa(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146fd2f56(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146fd3258(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146fd3258 FUN_146fd3258 body=114 status=ok
// SIG undefined FUN_146fd3258(void)

void FUN_146fd3258(longlong *param_1,int param_2)

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



// FUNCTION 146fd32ca FUN_146fd32ca body=490 status=ok
// SIG undefined FUN_146fd32ca(void)

void FUN_146fd32ca(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
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
  uVar10 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
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
        uVar10 = *(uint *)(lVar2 + lVar6);
        uVar10 = (uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar2 + 4 + lVar6) ^ uVar10;
        uVar9 = (longlong)
                (int)((uVar10 >> 2) + 0x9e3779b9 + uVar10 * 0x40 + *(int *)(lVar2 + 8 + lVar6) ^
                     uVar10) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 146fd34b6 FUN_146fd34b6 body=68 status=ok
// SIG undefined FUN_146fd34b6(void)

void FUN_146fd34b6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146fd34fa();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146fd34fa FUN_146fd34fa body=322 status=ok
// SIG undefined FUN_146fd34fa(void)

void FUN_146fd34fa(longlong *param_1)

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



// FUNCTION 146fd363e FUN_146fd363e body=287 status=ok
// SIG undefined FUN_146fd363e(void)

undefined4 * FUN_146fd363e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146fd375e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146fd3844(param_1,uVar5,local_40,&local_4c);
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
      FUN_146fd3936(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd375e FUN_146fd375e body=230 status=ok
// SIG undefined FUN_146fd375e(void)

int * FUN_146fd375e(longlong *param_1,int *param_2)

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



// FUNCTION 146fd3844 FUN_146fd3844 body=128 status=ok
// SIG undefined FUN_146fd3844(void)

undefined8 FUN_146fd3844(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_146fd38c4(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fd38c4 FUN_146fd38c4 body=114 status=ok
// SIG undefined FUN_146fd38c4(void)

void FUN_146fd38c4(longlong *param_1,int param_2)

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



// FUNCTION 146fd3936 FUN_146fd3936 body=419 status=ok
// SIG undefined FUN_146fd3936(void)

void FUN_146fd3936(longlong *param_1)

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



// FUNCTION 146fd3ada FUN_146fd3ada body=95 status=ok
// SIG undefined FUN_146fd3ada(void)

void FUN_146fd3ada(longlong param_1,uint param_2)

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



// FUNCTION 146fd3b3a FUN_146fd3b3a body=68 status=ok
// SIG undefined FUN_146fd3b3a(void)

void FUN_146fd3b3a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146fd3b7e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146fd3b7e FUN_146fd3b7e body=322 status=ok
// SIG undefined FUN_146fd3b7e(void)

void FUN_146fd3b7e(longlong *param_1)

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



// FUNCTION 146fd3cc2 FUN_146fd3cc2 body=164 status=ok
// SIG undefined FUN_146fd3cc2(void)

void FUN_146fd3cc2(longlong *param_1,undefined8 param_2)

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
        goto LAB_146fd3d42;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146fd3d42:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146fd3d66 FUN_146fd3d66 body=287 status=ok
// SIG undefined FUN_146fd3d66(void)

undefined4 * FUN_146fd3d66(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146fd3e86(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_146fd3f6c(param_1,uVar5,local_40,&local_4c);
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
      FUN_146fd405e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd3e86 FUN_146fd3e86 body=230 status=ok
// SIG undefined FUN_146fd3e86(void)

int * FUN_146fd3e86(longlong *param_1,int *param_2)

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



// FUNCTION 146fd3f6c FUN_146fd3f6c body=128 status=ok
// SIG undefined FUN_146fd3f6c(void)

undefined8 FUN_146fd3f6c(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_146fd3fec(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fd3fec FUN_146fd3fec body=114 status=ok
// SIG undefined FUN_146fd3fec(void)

void FUN_146fd3fec(longlong *param_1,int param_2)

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



// FUNCTION 146fd405e FUN_146fd405e body=419 status=ok
// SIG undefined FUN_146fd405e(void)

void FUN_146fd405e(longlong *param_1)

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



// FUNCTION 146fd4202 FUN_146fd4202 body=31 status=ok
// SIG undefined FUN_146fd4202(void)

undefined8 FUN_146fd4202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd423a FUN_146fd423a body=93 status=ok
// SIG undefined FUN_146fd423a(void)

void FUN_146fd423a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149fb8e80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fb8e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fd4298 FUN_146fd4298 body=93 status=ok
// SIG undefined FUN_146fd4298(void)

void FUN_146fd4298(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149fb8e80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fb8e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fd42f6 FUN_146fd42f6 body=126 status=ok
// SIG undefined FUN_146fd42f6(void)

void FUN_146fd42f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149fb8e80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fb8e10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fd4365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146fd4382 FUN_146fd4382 body=21 status=ok
// SIG undefined FUN_146fd4382(void)

undefined8 FUN_146fd4382(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fd439a FUN_146fd439a body=150 status=ok
// SIG undefined FUN_146fd439a(void)

void FUN_146fd439a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146fd4430 FUN_146fd4430 body=870 status=ok
// SIG undefined FUN_146fd4430(void)

undefined8 *
FUN_146fd4430(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined2 *local_90;
  int local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  int local_70;
  longlong local_68 [2];
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *(longlong *)(param_4 + 0x10);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar9 = (uint)lVar2 & 0xffff;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar11 = *param_1;
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar11 + (longlong)iVar12 * 0x60) == lVar2) goto LAB_146fd4518;
        iVar12 = *(int *)((longlong)iVar12 * 0x60 + lVar11 + 0x50);
      } while (iVar12 != -1);
    }
  }
  goto LAB_146fd445b;
  while (iVar6 = *(int *)(lVar7 + 0x50), iVar6 != -1) {
LAB_146fd4518:
    lVar7 = lVar11 + (longlong)iVar6 * 0x60;
    if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x60) == lVar2) goto LAB_146fd4537;
  }
  lVar7 = 0;
LAB_146fd4537:
  pcVar3 = *(code **)(lVar7 + 0x10);
  plVar8 = (longlong *)(lVar7 + 0x30);
  if (*(longlong **)(lVar7 + 0x20) != (longlong *)0x0) {
    plVar8 = *(longlong **)(lVar7 + 0x20);
  }
  uVar5 = (**(code **)(*plVar8 + 8))();
  (*pcVar3)(&local_48,uVar5,param_4);
  cVar1 = *(char *)((longlong)local_48 + 0xc9);
  if (cVar1 == '\x01') {
    (**(code **)(*local_48 + 0x28))(local_48,&local_58);
    if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
      lVar2 = *(longlong *)(param_4 + 0x10);
      uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar9 = (uint)lVar2 & 0xffff;
      plVar8 = param_1 + 0x11;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x12];
      }
      iVar6 = *(int *)((longlong)plVar8 +
                      (ulonglong)
                      ((int)param_1[0x13] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          lVar11 = param_1[10] + (longlong)iVar6 * 0x58;
          if (*(longlong *)(param_1[10] + (longlong)iVar6 * 0x58) == lVar2) goto LAB_146fd471b;
          iVar6 = *(int *)(lVar11 + 0x50);
        } while (iVar6 != -1);
      }
    }
    lVar11 = 0;
LAB_146fd471b:
    if ((longlong **)(lVar11 + 0x30) == &local_58) {
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar11 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(longlong **)(lVar11 + 0x30) = local_58;
      local_58 = (longlong *)0x0;
      *(undefined4 *)(lVar11 + 0x38) = local_50;
      *(undefined4 *)(lVar11 + 0x3c) = local_4c;
    }
    FUN_146fd4798(param_3,param_2,&local_48);
  }
  else {
    FUN_1400b22c2(local_68,"Node Factory");
    FUN_140233b1a(&local_58,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*local_48 + 0x10))(local_48,local_80);
    FUN_1400021e4(local_80,&local_78);
    plVar8 = (longlong *)&DAT_149dfb77a;
    if (local_70 != 0) {
      plVar8 = local_78;
    }
    local_98 = local_48[3];
    FUN_1400021e4(&local_98,&local_90);
    puVar10 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar10 = local_90;
    }
    FUN_140002266(local_68,L"Cannot create Node %s. Node Type %s is not well defined.",puVar10,
                  plVar8);
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140009b9a(&local_78,local_68);
    FUN_1468151b0(&local_78,&local_58);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if (cVar1 != '\0') goto LAB_146fd4461;
LAB_146fd445b:
  *param_2 = 0;
  param_2[1] = 0;
LAB_146fd4461:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fd4798 FUN_146fd4798 body=537 status=ok
// SIG undefined FUN_146fd4798(void)

undefined8 * FUN_146fd4798(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar8 = (longlong *)*param_3;
  *param_3 = 0;
  *param_2 = plVar8;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_149fbc300;
  puVar6[2] = plVar8;
  param_2[1] = puVar6;
  local_98 = param_1;
  FUN_146fd9752(param_1 + 0x18,param_2);
  local_68 = 0x100000000;
  uStack_60 = &DAT_14c99d040;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  if (DAT_14c99d058 == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = DAT_14c99d058;
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = &DAT_14c99d030;
  if ((iStack_54 != iVar9) || (uStack_60 != &DAT_14c99d040)) {
    local_98 = local_98 + 0x28;
    do {
      lVar2 = *local_90;
      lVar11 = (longlong)iStack_74;
      cVar5 = (**(code **)(*plVar8 + 0xf0))(plVar8,*(undefined8 *)(lVar2 + lVar11 * 0x10));
      if (cVar5 != '\0') {
        puVar6 = (undefined8 *)(lVar2 + lVar11 * 0x10);
        uVar3 = *puVar6;
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar10 = (uint)uVar3 & 0xffff;
        plVar7 = (longlong *)
                 FUN_146fd97d2(local_98,((uint)uVar3 << 0x10 | uVar10) +
                                        (int)((ulonglong)uVar3 >> 0x20) +
                                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),puVar6);
        iVar1 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
          FUN_146fd9d8c(plVar7,iVar1);
        }
        lVar2 = *plVar7;
        *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = plVar8;
        lVar11 = param_2[1];
        *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
          plVar8 = (longlong *)*param_2;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != &DAT_14c99d030 ||
             ((undefined *)CONCAT44(uStack_7c,uStack_80) != &DAT_14c99d040 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fd49b2 FUN_146fd49b2 body=290 status=ok
// SIG undefined FUN_146fd49b2(void)

undefined * FUN_146fd49b2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c99d0e0) && (FUN_144b3d300(&DAT_14c99d0e0), DAT_14c99d0e0 == -1)) {
    FUN_146fd4ad4();
    atexit(FUN_142ac2bec);
    _Init_thread_footer(&DAT_14c99d0e0);
  }
  if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
    return &DAT_14c99d098;
  }
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  uVar4 = (uint)param_2 & 0xffff;
  lVar3 = param_1 + 0x88;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
  }
  iVar5 = *(int *)(lVar3 + (ulonglong)
                           (*(int *)(param_1 + 0x98) - 1U &
                           (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
  if (iVar5 == -1) {
    return &DAT_14c99d098;
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  iVar6 = iVar5;
  while (*(longlong *)(lVar3 + (longlong)iVar6 * 0x58) != param_2) {
    iVar6 = *(int *)((longlong)iVar6 * 0x58 + lVar3 + 0x50);
    if (iVar6 == -1) {
      return &DAT_14c99d098;
    }
  }
  do {
    lVar2 = lVar3 + (longlong)iVar5 * 0x58;
    if (*(longlong *)(lVar3 + (longlong)iVar5 * 0x58) == param_2) goto LAB_146fd4a90;
    iVar5 = *(int *)(lVar2 + 0x50);
  } while (iVar5 != -1);
  lVar2 = 0;
LAB_146fd4a90:
  return (undefined *)(lVar2 + 8);
}



// FUNCTION 146fd4ad4 FUN_146fd4ad4 body=144 status=ok
// SIG undefined FUN_146fd4ad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146fd4ad4(void)

{
  FUN_1446ddc76(&DAT_14c99d098,&DAT_149e02088,1);
  FUN_1446ddc76(&DAT_14c99d0a0,&DAT_149e02088,1);
  FUN_1446ddc76(&DAT_14c99d0a8,&DAT_149e02088,1);
  FUN_1400b22c2(&DAT_14c99d0b0,&DAT_149e02088);
  FUN_1400b22c2(&DAT_14c99d0c0,&DAT_149e02088);
  _DAT_14c99d0d0 = 0;
  FUN_1446f470e(&DAT_14c99d0d4,&DAT_149fba5e4,1);
  return;
}



// FUNCTION 146fd4b64 FUN_146fd4b64 body=64 status=ok
// SIG undefined FUN_146fd4b64(void)

LARGE_INTEGER FUN_146fd4b64(void)

{
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  QueryPerformanceCounter(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return (LARGE_INTEGER)local_18.QuadPart;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd4bac FUN_146fd4bac body=1717 status=ok
// SIG undefined FUN_146fd4bac(void)

void FUN_146fd4bac(longlong *param_1,longlong *param_2)

{
  longlong ****pppplVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong ****pppplVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_11c [4];
  longlong ***local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong ***local_f0;
  longlong local_e8;
  undefined4 local_dc;
  longlong ***local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong ***local_c0;
  longlong **local_b8 [2];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_a8[0] = 0;
      FUN_1408383eb(param_2,local_a8);
      if (0 < (int)local_a8[0]) {
        iVar15 = (int)local_a8[0] + 1;
        do {
          local_b8[0] = (longlong **)0x0;
          local_98 = (longlong *)0x0;
          uStack_90 = (longlong ****)0x0;
          local_d8 = (longlong ***)DAT_14c99d1d8;
          plVar9 = (longlong *)(**(code **)(*param_2 + 0x160))(param_2,local_b8);
          puVar3 = (ulonglong *)plVar9[1];
          puVar2 = (undefined4 *)*puVar3 + 1;
          if ((undefined4 *)puVar3[1] < puVar2) {
            if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar9 + 0x170))(plVar9,local_11c,4);
            }
            else {
              thunk_FUN_14572512c(plVar9,local_11c);
            }
          }
          else {
            local_11c = *(undefined1 (*) [4])*puVar3;
            *puVar3 = (ulonglong)puVar2;
          }
          plVar9 = (longlong *)FUN_1402ac1b3(plVar9,&local_98);
          puVar3 = (ulonglong *)plVar9[1];
          puVar2 = (undefined4 *)*puVar3 + 1;
          if ((undefined4 *)puVar3[1] < puVar2) {
            if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar9 + 0x170))(plVar9,&local_dc,4);
            }
            else {
              thunk_FUN_14572512c(plVar9,&local_dc);
            }
          }
          else {
            local_dc = *(undefined4 *)*puVar3;
            *puVar3 = (ulonglong)puVar2;
          }
          FUN_146fd52e5(plVar9,&local_d8);
          local_68 = 0;
          FUN_1408383eb(param_2,&local_68);
          uVar10 = FUN_145ea8e14();
          cVar7 = FUN_146fd5262(uVar10,local_b8[0]);
          if (cVar7 == '\0') {
            lVar11 = (**(code **)(*param_2 + 0x28))(param_2);
            (**(code **)(*param_2 + 0x1a0))(param_2,lVar11 + local_68);
          }
          else {
            uVar10 = FUN_145ea8e14();
            uStack_110 = (longlong ****)local_98;
            uStack_108 = uStack_90;
            local_118 = (longlong ***)local_b8[0];
            uStack_100 = 0;
            local_f8 = local_dc;
            local_f0 = local_d8;
            local_c0 = (longlong ***)FUN_142ac0a48(uVar10,param_2,&local_118);
            *(undefined4 *)((longlong)local_c0 + 0xc) = (undefined4)local_98;
            *(undefined4 *)(local_c0 + 2) = local_98._4_4_;
            *(undefined4 *)((longlong)local_c0 + 0x14) = (undefined4)uStack_90;
            *(uint *)(local_c0 + 3) = uStack_90._4_4_;
            *(undefined4 *)(local_c0 + 5) = local_dc;
            local_c0[6] = (longlong **)local_d8;
            local_118 = (longlong ***)local_11c;
            uStack_110 = &local_c0;
            FUN_146fd9f00(param_1,&local_e8,&local_118);
            if ((longlong ****)local_c0 != (longlong ****)0x0) {
              (*(code *)**local_c0)(local_c0,1);
            }
          }
          iVar15 = iVar15 + -1;
        } while (1 < iVar15);
      }
    }
  }
  else {
    uVar10 = (**(code **)(*param_2 + 0x28))(param_2);
    local_68 = 0;
    FUN_1408383eb(param_2);
    pppplVar1 = (longlong ****)(param_1 + 2);
    local_118 = (longlong ***)&DAT_100000000;
    uStack_108 = (longlong ****)&DAT_ffffffff;
    uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
    uStack_110 = pppplVar1;
    if ((int)param_1[5] == 0) {
      iVar15 = 0;
    }
    else {
      FUN_1449c0562(&local_118);
      iVar15 = (int)param_1[5];
    }
    local_80 = uStack_108;
    pppplVar6 = local_80;
    lStack_78 = uStack_100;
    uStack_90 = (longlong ****)local_118;
    local_88 = (int)uStack_110;
    uStack_84 = uStack_110._4_4_;
    local_80._4_4_ = (int)((ulonglong)uStack_108 >> 0x20);
    iVar8 = local_80._4_4_;
    local_98 = param_1;
    if ((local_80._4_4_ != iVar15) || (local_80 = pppplVar6, uStack_110 != pppplVar1)) {
      do {
        local_80 = pppplVar6;
        lVar11 = *local_98;
        lVar13 = *(longlong *)(lVar11 + 8 + (longlong)iVar8 * 0x18);
        if ((lVar13 != 0) &&
           ((plVar9 = *(longlong **)(lVar13 + 0x20), plVar9 != (longlong *)0x0 &&
            (*(int *)(lVar13 + 8) == 0)))) {
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_128 = uVar10;
          (**(code **)(*plVar9 + 0x70))(plVar9,local_b8,local_a8,0);
          FUN_140474144(&local_118,local_b8,local_a8);
          iVar5 = (int)uStack_110 + -1;
          if ((int)uStack_110 == 0) {
            iVar5 = 0;
          }
          FUN_1446f82e2(&local_d8,iVar5,local_118);
          local_c0 = local_d8;
          if ((longlong ****)local_118 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
          puVar2 = (undefined4 *)(lVar11 + (longlong)iVar8 * 0x18);
          lVar11 = *(longlong *)(puVar2 + 2);
          local_d8 = *(longlong ****)(lVar11 + 0xc);
          uStack_d0 = *(undefined4 *)(lVar11 + 0x14);
          uStack_cc = *(undefined4 *)(lVar11 + 0x18);
          local_dc = *(undefined4 *)(*(longlong *)(puVar2 + 2) + 0x28);
          uVar10 = FUN_145ea8e14();
          cVar7 = FUN_146fd5262(uVar10,local_c0);
          if (cVar7 != '\0') {
            plVar9 = (longlong *)(**(code **)(*param_2 + 0x160))(param_2,&local_c0);
            puVar4 = *(undefined4 **)plVar9[1];
            if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar4 + 1) {
              if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar9 + 0x170))(plVar9,puVar2,4);
              }
              else {
                thunk_FUN_14572512c(plVar9,puVar2);
              }
            }
            else {
              *puVar2 = *puVar4;
              *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
            }
            plVar9 = (longlong *)FUN_1402ac1b3(plVar9,&local_d8);
            puVar3 = (ulonglong *)plVar9[1];
            puVar4 = (undefined4 *)*puVar3 + 1;
            if ((undefined4 *)puVar3[1] < puVar4) {
              if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar9 + 0x170))(plVar9,&local_dc,4);
              }
              else {
                thunk_FUN_14572512c(plVar9,&local_dc);
              }
            }
            else {
              local_dc = *(undefined4 *)*puVar3;
              *puVar3 = (ulonglong)puVar4;
            }
            FUN_146fd52e5(plVar9,*(longlong *)(puVar2 + 2) + 0x30);
            lVar11 = (**(code **)(*param_2 + 0x28))(param_2);
            local_e8 = 0;
            FUN_1408383eb(param_2);
            lVar13 = (**(code **)(*param_2 + 0x28))(param_2);
            uVar10 = FUN_145ea8e14();
            uStack_100 = *(longlong *)(puVar2 + 2);
            local_f0 = *(longlong ****)(uStack_100 + 0x30);
            local_118 = local_c0;
            uStack_110 = (longlong ****)local_d8;
            uStack_108 = (longlong ****)CONCAT44(uStack_cc,uStack_d0);
            local_f8 = local_dc;
            FUN_142ac0a48(uVar10,param_2);
            if (lVar11 != -1) {
              lVar14 = (**(code **)(*param_2 + 0x28))(param_2);
              local_e8 = lVar14 - lVar13;
              (**(code **)(*param_2 + 0x1a0))(param_2,lVar11);
              FUN_1408383eb(param_2,&local_e8);
              (**(code **)(*param_2 + 0x1a0))(param_2,lVar14);
            }
            local_68 = local_68 + 1;
          }
          uVar10 = local_128;
          if ((longlong ***)local_b8[0] != (longlong ***)0x0) {
            FUN_1400020a8();
          }
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
        }
        local_80 = (longlong ****)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar8 = local_80._4_4_;
        pppplVar6 = local_80;
      } while (local_98 != param_1 ||
               ((longlong ****)CONCAT44(uStack_84,local_88) != pppplVar1 || local_80._4_4_ != iVar15
               ));
    }
    if (local_68 != 0) {
      uVar12 = (**(code **)(*param_2 + 0x28))(param_2);
      (**(code **)(*param_2 + 0x1a0))(param_2,uVar10);
      FUN_1408383eb(param_2,&local_68);
      (**(code **)(*param_2 + 0x1a0))(param_2,uVar12);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fd5262 FUN_146fd5262 body=131 status=ok
// SIG undefined FUN_146fd5262(void)

undefined8 FUN_146fd5262(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar1 << 0x13 | uVar1) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*param_1 + (longlong)iVar4 * 0x60) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + *param_1 + 0x50);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146fd52e5 FUN_146fd52e5 body=165 status=ok
// SIG undefined FUN_146fd52e5(void)

longlong * FUN_146fd52e5(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  plVar2 = (longlong *)param_1[1];
  if ((undefined8 *)plVar2[1] < (undefined8 *)*plVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&DAT_14c99d1d8,8);
    }
    else {
      thunk_FUN_146821949(param_1,&DAT_14c99d1d8);
    }
  }
  else {
    DAT_14c99d1d8 = *(undefined8 *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  return param_1;
}



// FUNCTION 146fd5392 FUN_146fd5392 body=241 status=ok
// SIG undefined FUN_146fd5392(void)

int FUN_146fd5392(longlong param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  wchar_t *_Str;
  longlong lVar5;
  undefined1 auStack_68 [40];
  wchar_t *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0xffffffff;
  iVar2 = 0;
  local_30 = 0;
  local_40 = (wchar_t *)(param_1 + 0x1a0);
  uVar3 = FUN_146fb4872(param_1,&local_40);
  puVar4 = (undefined8 *)FUN_146fda3fc(uVar3,param_2,(wchar_t *)(param_1 + 0x1a0));
  local_40 = (wchar_t *)0x0;
  local_38 = *(int *)(puVar4 + 1);
  lVar5 = (longlong)local_38;
  _Src = (void *)*puVar4;
  if (lVar5 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar5 * 2);
    iVar2 = 0;
    if ((1 < local_38) && (cVar1 = FUN_1405b43cc(&local_40), cVar1 != '\0')) {
      _Str = local_40;
      if (local_38 == 0) {
        _Str = L"";
      }
      iVar2 = _wtoi(_Str);
    }
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 146fd5484 FUN_146fd5484 body=261 status=ok
// SIG undefined FUN_146fd5484(void)

float FUN_146fd5484(longlong param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *_Str;
  longlong lVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = (wchar_t *)(param_1 + 0x1a0);
  uVar2 = FUN_146fb4872(param_1,&local_58);
  puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_2,(wchar_t *)(param_1 + 0x1a0));
  local_58 = (wchar_t *)0x0;
  local_50 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_50;
  _Src = (void *)*puVar3;
  if (lVar4 == 0) {
    local_4c = 0;
    fVar6 = 0.0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar4 * 2);
    fVar6 = 0.0;
    if ((1 < local_50) && (cVar1 = FUN_1405b43cc(&local_58), cVar1 != '\0')) {
      _Str = local_58;
      if (local_50 == 0) {
        _Str = L"";
      }
      dVar5 = _wtof(_Str);
      fVar6 = (float)dVar5;
    }
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar6;
}



// FUNCTION 146fd558a FUN_146fd558a body=529 status=ok
// SIG undefined FUN_146fd558a(void)

undefined8 * FUN_146fd558a(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  void *_Src;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  ulonglong local_58;
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = -1;
  local_40 = 0;
  local_50 = (undefined2 *)(param_1 + 0x198);
  uVar4 = FUN_146fb4872();
  puVar5 = (ulonglong *)FUN_146fda7f0(uVar4,param_3,(undefined2 *)(param_1 + 0x198));
  uVar8 = *puVar5;
  local_58 = uVar8;
  if ((uVar8 != 0 && param_4 != 0) && (cVar1 = FUN_144a846f6(uVar8 & 0xffffffff), cVar1 != '\0')) {
    FUN_1400021e4(&local_58,&local_50);
    uVar11 = local_48 - 2;
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (uVar11 < 0x7fffffff) {
      FUN_1446ddc76(&local_60,"Overrides",1);
      local_38 = uVar8;
      if (((*(longlong *)(param_4 + 0x10) != 0) &&
          (lVar6 = FUN_146fdab03(*(longlong *)(param_4 + 0x10),local_60,3), lVar6 != 0)) &&
         (plVar12 = (longlong *)(param_4 + *(int *)(lVar6 + 0x44)), plVar12 != (longlong *)0x0)) {
        FUN_1400021e4(&local_38,&local_50);
        puVar9 = local_50;
        if (local_48 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        iVar3 = local_48 + -1;
        if (local_48 == 0) {
          iVar3 = 0;
        }
        uVar2 = FUN_144a49b4a(iVar3,puVar9);
        iVar3 = FUN_1457511aa(plVar12,uVar2,&local_50);
        if (iVar3 != -1) {
          puVar9 = local_50;
          if (local_48 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          uVar10 = 0;
          uVar8 = (ulonglong)(local_48 - 1);
          if (local_48 == 0) {
            uVar8 = uVar10;
          }
          uVar2 = FUN_144a49b4a(uVar8,puVar9);
          iVar3 = FUN_1457511aa(plVar12,uVar2,&local_50);
          if (iVar3 != -1) {
            uVar10 = (longlong)iVar3 * 0x28 + *plVar12;
          }
          puVar7 = (undefined8 *)(uVar10 + 0x10);
          if (uVar10 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          *param_2 = 0;
          iVar3 = *(int *)(puVar7 + 1);
          _Src = (void *)*puVar7;
          *(int *)(param_2 + 1) = iVar3;
          if ((longlong)iVar3 == 0) {
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_2,iVar3,0);
            memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
          }
          if (local_50 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_146fd565f;
        }
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_146fd565f:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146fd579c FUN_146fd579c body=43 status=ok
// SIG undefined FUN_146fd579c(void)

void FUN_146fd579c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_144a54ea4();
  FUN_1447c6044(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 146fd57c8 FUN_146fd57c8 body=176 status=ok
// SIG undefined FUN_146fd57c8(void)

void FUN_146fd57c8(void *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(int *)((longlong)param_1 + 0x18) + 0x1f;
  if (0x1f < uVar6) {
    uVar5 = uVar6 >> 5;
    if (*(int *)((longlong)param_1 + 0x1c) + 0x1fU >> 5 < uVar5) {
      FUN_14499171c(param_1,0,uVar5,4);
      *(uint *)((longlong)param_1 + 0x1c) = uVar6 & 0xffffffe0;
    }
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar4 = param_1;
    }
    if (uVar6 < 0x120) {
      uVar5 = uVar6 >> 3 & 0x3c;
    }
    else {
      uVar5 = uVar5 << 2;
    }
    memset(pvVar4,0,(ulonglong)uVar5);
    iVar1 = *(int *)((longlong)param_1 + 0x18);
    iVar2 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar1 % 0x20 != 0) {
      pvVar4 = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        pvVar4 = param_1;
      }
      bVar3 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  return;
}



// FUNCTION 146fd5878 FUN_146fd5878 body=107 status=ok
// SIG undefined FUN_146fd5878(void)

void FUN_146fd5878(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  FUN_144a9ff88(param_2,*(undefined4 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = param_1;
      }
      if ((*(uint *)(lVar2 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(uint *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar1 = *(int *)(param_1 + 0x18);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return;
}



// FUNCTION 146fd58e4 FUN_146fd58e4 body=105 status=ok
// SIG undefined FUN_146fd58e4(void)

longlong * FUN_146fd58e4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (0 < iVar1) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = param_1;
      }
      if ((*(uint *)(lVar2 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_2,iVar1);
        }
        *(uint *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar1 = *(int *)(param_1 + 0x18);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return param_2;
}



// FUNCTION 146fd594e FUN_146fd594e body=264 status=ok
// SIG undefined FUN_146fd594e(void)

void FUN_146fd594e(void *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  void *pvVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  
  uVar7 = *(int *)((longlong)param_1 + 0x18) + 0x1f;
  if (0x1f < uVar7) {
    uVar10 = uVar7 >> 5;
    if (*(int *)((longlong)param_1 + 0x1c) + 0x1fU >> 5 < uVar10) {
      FUN_14499171c(param_1,0,uVar10,4);
      *(uint *)((longlong)param_1 + 0x1c) = uVar7 & 0xffffffe0;
    }
    pvVar6 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar6 = param_1;
    }
    if (uVar7 < 0x120) {
      uVar10 = uVar7 >> 3 & 0x3c;
    }
    else {
      uVar10 = uVar10 << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar10);
    iVar2 = *(int *)((longlong)param_1 + 0x18);
    iVar9 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar9 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      pvVar6 = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        pvVar6 = param_1;
      }
      bVar5 = -(char)(iVar2 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar8 = 0;
    do {
      iVar2 = *(int *)(lVar3 + lVar8);
      pvVar6 = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        pvVar6 = param_1;
      }
      iVar9 = iVar2 + 0x1f;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      puVar1 = (uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar8);
  }
  return;
}



// FUNCTION 146fd5a56 FUN_146fd5a56 body=252 status=ok
// SIG undefined FUN_146fd5a56(void)

void FUN_146fd5a56(void *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *(int *)((longlong)param_1 + 0x18) + 0x1f;
  if (0x1f < uVar7) {
    uVar8 = uVar7 >> 5;
    if (*(int *)((longlong)param_1 + 0x1c) + 0x1fU >> 5 < uVar8) {
      FUN_14499171c(param_1,0,uVar8,4);
      *(uint *)((longlong)param_1 + 0x1c) = uVar7 & 0xffffffe0;
    }
    pvVar6 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar6 = param_1;
    }
    if (uVar7 < 0x120) {
      uVar8 = uVar7 >> 3 & 0x3c;
    }
    else {
      uVar8 = uVar8 << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar8);
    iVar2 = *(int *)((longlong)param_1 + 0x18);
    iVar3 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    if (iVar2 % 0x20 != 0) {
      pvVar6 = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        pvVar6 = param_1;
      }
      bVar4 = -(char)(iVar2 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar3 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    uVar5 = 0;
    do {
      if (*(char *)(*param_2 + uVar5) == '\x01') {
        pvVar6 = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          pvVar6 = param_1;
        }
        puVar1 = (uint *)((longlong)pvVar6 + (uVar5 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
        iVar2 = (int)param_2[1];
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar2);
  }
  return;
}



// FUNCTION 146fd5b52 FUN_146fd5b52 body=178 status=ok
// SIG undefined FUN_146fd5b52(void)

void FUN_146fd5b52(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x8000000000;
  local_48 = &local_39;
  FUN_1400aa4bb(param_1,param_2,&local_38,1);
  if (&local_38 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_28 == 0) {
      *param_3 = local_38;
      param_3[1] = uStack_34;
      param_3[2] = uStack_30;
      param_3[3] = uStack_2c;
    }
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8(*(longlong *)(param_3 + 4));
    }
    *(longlong *)(param_3 + 4) = local_28;
    param_3[6] = (undefined4)local_20;
    param_3[7] = local_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd5c06 FUN_146fd5c06 body=178 status=ok
// SIG undefined FUN_146fd5c06(void)

void FUN_146fd5c06(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x8000000000;
  local_48 = &local_39;
  FUN_146fdacc0(param_1,param_2,&local_38,1);
  if (&local_38 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_28 == 0) {
      *param_3 = local_38;
      param_3[1] = uStack_34;
      param_3[2] = uStack_30;
      param_3[3] = uStack_2c;
    }
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8(*(longlong *)(param_3 + 4));
    }
    *(longlong *)(param_3 + 4) = local_28;
    param_3[6] = (undefined4)local_20;
    param_3[7] = local_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd5cba FUN_146fd5cba body=178 status=ok
// SIG undefined FUN_146fd5cba(void)

void FUN_146fd5cba(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x8000000000;
  local_48 = &local_39;
  FUN_146fdb01f(param_1,param_2,&local_38,1);
  if (&local_38 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_28 == 0) {
      *param_3 = local_38;
      param_3[1] = uStack_34;
      param_3[2] = uStack_30;
      param_3[3] = uStack_2c;
    }
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8(*(longlong *)(param_3 + 4));
    }
    *(longlong *)(param_3 + 4) = local_28;
    param_3[6] = (undefined4)local_20;
    param_3[7] = local_20._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd5d6e FUN_146fd5d6e body=236 status=ok
// SIG undefined FUN_146fd5d6e(void)

void FUN_146fd5d6e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  FUN_144a69486(local_48);
  FUN_142ac2d42(local_48);
  local_58 = 0;
  local_50 = 0x8000000000;
  local_78 = &local_69;
  FUN_1400aa4bb(param_1,local_48,&local_68,1);
  if (&local_68 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_58 == 0) {
      *param_3 = local_68;
      param_3[1] = uStack_64;
      param_3[2] = uStack_60;
      param_3[3] = uStack_5c;
    }
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8(*(longlong *)(param_3 + 4));
    }
    *(longlong *)(param_3 + 4) = local_58;
    param_3[6] = (undefined4)local_50;
    param_3[7] = local_50._4_4_;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd5e5c FUN_146fd5e5c body=11 status=ok
// SIG undefined FUN_146fd5e5c(void)

void FUN_146fd5e5c(longlong param_1)

{
  FUN_144b07aaa(param_1,0,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 146fd5e68 FUN_146fd5e68 body=82 status=ok
// SIG undefined FUN_146fd5e68(void)

bool FUN_146fd5e68(byte *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 1) {
    bVar3 = false;
  }
  else {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if (*(byte **)(param_1 + 0x10) == (byte *)0x0) {
      pbVar6 = param_1;
    }
    bVar3 = true;
    if ((*pbVar6 & 1) == 0) {
      uVar4 = 0;
      uVar5 = 1;
      iVar2 = 1;
      do {
        iVar7 = iVar2;
        if (iVar1 == iVar7) break;
        iVar2 = uVar5 * 2;
        uVar4 = (ulonglong)((int)uVar4 + (uint)(iVar2 == 0));
        uVar5 = iVar2 + (uint)(iVar2 == 0);
        iVar2 = iVar7 + 1;
      } while ((*(uint *)(pbVar6 + uVar4 * 4) & uVar5) == 0);
      bVar3 = iVar7 < iVar1;
    }
  }
  return bVar3;
}



// FUNCTION 146fd5ebe FUN_146fd5ebe body=38 status=ok
// SIG undefined FUN_146fd5ebe(void)

undefined8 FUN_146fd5ebe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"Plugins",1);
  return param_2;
}



// FUNCTION 146fd5ee4 FUN_146fd5ee4 body=361 status=ok
// SIG undefined FUN_146fd5ee4(void)

undefined8 * FUN_146fd5ee4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb8f20;
  local_60 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x36;
  FUN_146fdbf46(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x36;
  FUN_1446f470e(&local_78,L"FVector2D",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd604e FUN_146fd604e body=249 status=ok
// SIG undefined FUN_146fd604e(void)

void FUN_146fd604e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b0) {
    local_78 = param_1 + 0x198;
    local_70._0_4_ = 0xffffffff;
    local_68 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_78);
    lVar1 = FUN_146fd063c(uVar2,param_2,local_78);
    local_78 = param_1 + 0x1a0;
    local_70 = CONCAT44(local_70._4_4_,0xffffffff);
    local_68 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_78);
    local_70 = FUN_146fd063c(uVar2,param_2,local_78);
    local_68 = 0;
    uStack_60 = 0;
    local_78 = lVar1;
    FUN_146fd6148(param_1,param_2,&local_78,param_1 + 0x1b0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd6148 FUN_146fd6148 body=116 status=ok
// SIG undefined FUN_146fd6148(void)

void FUN_146fd6148(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = CONCAT44(local_28._4_4_,0xffffffff);
  local_20 = 0;
  local_30 = param_4;
  lVar1 = FUN_146fb78aa();
  if (lVar1 != 0) {
    local_30 = lVar1;
    local_28 = param_2;
    local_20 = param_3;
    FUN_146fdbfc6(*(undefined8 *)(lVar1 + 8));
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd61be FUN_146fd61be body=436 status=ok
// SIG undefined FUN_146fd61be(void)

undefined8 * FUN_146fd61be(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9030;
  local_60 = param_1 + 0x33;
  local_98 = param_1 + 0x35;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_60 = local_98;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x36;
  FUN_146fdbf46(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x36;
  FUN_1446f470e(&local_78,L"FVector",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd6374 FUN_146fd6374 body=312 status=ok
// SIG undefined FUN_146fd6374(void)

void FUN_146fd6374(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1b0) {
    local_88 = param_1 + 0x198;
    local_80._0_4_ = 0xffffffff;
    local_78 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    lVar1 = FUN_146fd063c(uVar2,param_2,local_88);
    local_88 = param_1 + 0x1a0;
    local_80._0_4_ = 0xffffffff;
    local_78 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    uVar2 = FUN_146fd063c(uVar2,param_2,local_88);
    local_88 = param_1 + 0x1a8;
    local_80 = CONCAT44(local_80._4_4_,0xffffffff);
    local_78 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_88);
    local_78 = FUN_146fd063c(uVar3,param_2,local_88);
    local_70 = 0;
    local_88 = lVar1;
    local_80 = uVar2;
    FUN_146fd6148(param_1,param_2,&local_88,param_1 + 0x1b0);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd64ae FUN_146fd64ae body=513 status=ok
// SIG undefined FUN_146fd64ae(void)

undefined8 * FUN_146fd64ae(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9140;
  local_60 = param_1 + 0x33;
  local_a0 = param_1 + 0x36;
  local_98 = param_1 + 0x38;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar2 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar2,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x34;
  uVar2 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar2,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  uVar2 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar2,&PTR_PTR_14c75f4b0);
  local_78 = (undefined8 *)0x0;
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar2 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar2,&PTR_PTR_14c75f4b0);
  puVar1 = local_98;
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = local_98;
  local_70 = 0xffffffff;
  local_68 = 0;
  FUN_146fdbf46(param_1,&local_78,&local_60);
  local_60 = puVar1;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_1446f470e(&local_78,L"FVector4",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd66b0 FUN_146fd66b0 body=384 status=ok
// SIG undefined FUN_146fd66b0(void)

void FUN_146fd66b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1c0) {
    local_98 = param_1 + 0x198;
    local_90._0_4_ = 0xffffffff;
    local_88 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_98);
    lVar1 = FUN_146fd063c(uVar2,param_2,local_98);
    local_98 = param_1 + 0x1a0;
    local_90._0_4_ = 0xffffffff;
    local_88 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_98);
    uVar2 = FUN_146fd063c(uVar2,param_2,local_98);
    local_98 = param_1 + 0x1a8;
    local_90._0_4_ = 0xffffffff;
    local_88 = 0;
    uVar3 = FUN_146fb4872(param_1,&local_98);
    uVar3 = FUN_146fd063c(uVar3,param_2,local_98);
    local_98 = param_1 + 0x1b0;
    local_90 = CONCAT44(local_90._4_4_,0xffffffff);
    local_88 = 0;
    uVar4 = FUN_146fb4872(param_1,&local_98);
    local_80 = FUN_146fd063c(uVar4,param_2,local_98);
    local_98 = lVar1;
    local_90 = uVar2;
    local_88 = uVar3;
    FUN_146fd6148(param_1,param_2,&local_98,param_1 + 0x1c0);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd6832 FUN_146fd6832 body=689 status=ok
// SIG undefined FUN_146fd6832(void)

undefined8 * FUN_146fd6832(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9250;
  local_60 = param_1 + 0x34;
  local_a0 = param_1 + 0x3a;
  local_98 = param_1 + 0x3b;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar2 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar2,&PTR_PTR_14c75f4b8);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x38;
  FUN_146fd05d2(param_1,&local_78,&local_60,&local_90);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x39;
  FUN_146fd05d2(param_1,&local_78,&local_60,&local_90);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = local_a0;
  local_70 = 0xffffffff;
  local_68 = 0;
  FUN_146fd05d2(param_1,&local_78,&local_60,&local_90);
  puVar1 = local_98;
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = local_98;
  local_70 = 0xffffffff;
  local_68 = 0;
  FUN_146fd05d2(param_1,&local_78,&local_60,&local_90);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  FUN_1446f470e(&local_78,L"double",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_1446f470e(&local_78,L"double",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  local_60 = local_a0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_1446f470e(&local_78,L"double",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  local_60 = puVar1;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_1446f470e(&local_78,L"double",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd6ae4 FUN_146fd6ae4 body=456 status=ok
// SIG undefined FUN_146fd6ae4(void)

void FUN_146fd6ae4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1 + 0x1c0;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == lVar4) {
    local_40 = param_1 + 0x1a0;
    local_38 = 0xffffffff;
    local_30 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_40);
    puVar3 = local_68;
    FUN_146fdd1ec(uVar2,puVar3,param_2,local_40);
  }
  else {
    lVar4 = param_1 + 0x1c8;
    lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar1 == lVar4) {
      local_40 = param_1 + 0x1a0;
      local_38 = 0xffffffff;
      local_30 = 0;
      uVar2 = FUN_146fb4872(param_1,&local_40);
      FUN_146fdd1ec(uVar2,local_68,param_2,local_40);
      puVar3 = local_60;
    }
    else {
      lVar4 = param_1 + 0x1d0;
      lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
      if (lVar1 == lVar4) {
        local_40 = param_1 + 0x1a0;
        local_38 = 0xffffffff;
        local_30 = 0;
        uVar2 = FUN_146fb4872(param_1,&local_40);
        FUN_146fdd1ec(uVar2,local_68,param_2,local_40);
        puVar3 = local_58;
      }
      else {
        lVar4 = param_1 + 0x1d8;
        lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
        if (lVar1 != lVar4) goto LAB_146fd6b65;
        local_40 = param_1 + 0x1a0;
        local_38 = 0xffffffff;
        local_30 = 0;
        uVar2 = FUN_146fb4872(param_1,&local_40);
        FUN_146fdd1ec(uVar2,local_68,param_2,local_40);
        puVar3 = local_50;
      }
    }
  }
  FUN_146fb6644(param_1,param_2,puVar3,lVar4);
LAB_146fd6b65:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fd6cae FUN_146fd6cae body=382 status=ok
// SIG undefined FUN_146fd6cae(void)

undefined8 * FUN_146fd6cae(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9360;
  local_60 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x3c;
  FUN_146fdbf46(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_1446f470e(&local_78,L"FVector4",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd6e2e FUN_146fd6e2e body=322 status=ok
// SIG undefined FUN_146fd6e2e(void)

void FUN_146fd6e2e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    local_88 = (double)(param_1 + 0x1a0);
    local_80 = 0xffffffff;
    local_78 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    FUN_146fdd1ec(uVar2,&local_68,param_2,local_88);
    local_a8 = (double)(param_1 + 0x1c0);
    local_a0 = (double)CONCAT44(local_a0._4_4_,0xffffffff);
    local_98 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_a8);
    FUN_146fdd1ec(uVar2,&local_88,param_2,local_a8);
    local_90 = local_50 + local_70;
    local_98 = local_58 + local_78;
    local_a0 = local_60 + (double)CONCAT44(uStack_7c,local_80);
    local_a8 = local_68 + local_88;
    FUN_146fd6148(param_1,param_2,&local_a8,param_1 + 0x1e0);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd6f72 FUN_146fd6f72 body=382 status=ok
// SIG undefined FUN_146fd6f72(void)

undefined8 * FUN_146fd6f72(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9470;
  local_60 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x3c;
  FUN_146fdbf46(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_1446f470e(&local_78,L"FVector4",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd70f2 FUN_146fd70f2 body=322 status=ok
// SIG undefined FUN_146fd70f2(void)

void FUN_146fd70f2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    local_88 = (double)(param_1 + 0x1a0);
    local_80 = 0xffffffff;
    local_78 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    FUN_146fdd1ec(uVar2,&local_68,param_2,local_88);
    local_a8 = (double)(param_1 + 0x1c0);
    local_a0 = (double)CONCAT44(local_a0._4_4_,0xffffffff);
    local_98 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_a8);
    FUN_146fdd1ec(uVar2,&local_88,param_2,local_a8);
    local_90 = local_50 - local_70;
    local_98 = local_58 - local_78;
    local_a0 = local_60 - (double)CONCAT44(uStack_7c,local_80);
    local_a8 = local_68 - local_88;
    FUN_146fd6148(param_1,param_2,&local_a8,param_1 + 0x1e0);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd7236 FUN_146fd7236 body=375 status=ok
// SIG undefined FUN_146fd7236(void)

undefined8 * FUN_146fd7236(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9580;
  local_60 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x3c;
  FUN_146fd05d2(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_1446f470e(&local_78,L"double",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd73ae FUN_146fd73ae body=310 status=ok
// SIG undefined FUN_146fd73ae(void)

void FUN_146fd73ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    local_98 = (double)(param_1 + 0x1a0);
    local_90 = 0xffffffff;
    local_88 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_98);
    FUN_146fdd1ec(uVar2,&local_78,param_2,local_98);
    local_58 = (double)(param_1 + 0x1c0);
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    FUN_146fdd1ec(uVar2,&local_98,param_2,local_58);
    local_58 = local_60 * local_80 +
               local_68 * local_88 +
               local_78 * local_98 + local_70 * (double)CONCAT44(uStack_8c,local_90);
    FUN_146fb6644(param_1,param_2,&local_58,param_1 + 0x1e0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd74e6 FUN_146fd74e6 body=295 status=ok
// SIG undefined FUN_146fd74e6(void)

undefined8 * FUN_146fd74e6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9690;
  local_50 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_68 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_50,&local_68);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_80 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x38;
  FUN_146fd05d2(param_1,&local_68,&local_50);
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x38;
  FUN_1446f470e(&local_68,L"double",1);
  FUN_146fb3b6e(param_1,&local_50,local_68);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd760e FUN_146fd760e body=235 status=ok
// SIG undefined FUN_146fd760e(void)

void FUN_146fd760e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1c0) {
    local_48 = (double)(param_1 + 0x1a0);
    local_40 = 0xffffffff;
    local_38 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_48);
    FUN_146fdd1ec(uVar2,&local_68,param_2,local_48);
    local_48 = SQRT(local_50 * local_50 +
                    local_58 * local_58 + local_68 * local_68 + local_60 * local_60);
    FUN_146fb6644(param_1,param_2,&local_48,param_1 + 0x1c0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd76fa FUN_146fd76fa body=295 status=ok
// SIG undefined FUN_146fd76fa(void)

undefined8 * FUN_146fd76fa(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb97a0;
  local_50 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_68 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_50,&local_68);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_80 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x38;
  FUN_146fd05d2(param_1,&local_68,&local_50);
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x38;
  FUN_1446f470e(&local_68,L"double",1);
  FUN_146fb3b6e(param_1,&local_50,local_68);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd7822 FUN_146fd7822 body=231 status=ok
// SIG undefined FUN_146fd7822(void)

void FUN_146fd7822(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1c0) {
    local_48 = (double)(param_1 + 0x1a0);
    local_40 = 0xffffffff;
    local_38 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_48);
    FUN_146fdd1ec(uVar2,&local_68,param_2,local_48);
    local_48 = local_50 * local_50 + local_58 * local_58 + local_68 * local_68 + local_60 * local_60
    ;
    FUN_146fb6644(param_1,param_2,&local_48,param_1 + 0x1c0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd790a FUN_146fd790a body=375 status=ok
// SIG undefined FUN_146fd790a(void)

undefined8 * FUN_146fd790a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb98b0;
  local_60 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x3c;
  FUN_146fd05d2(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_1446f470e(&local_78,L"double",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd7a82 FUN_146fd7a82 body=330 status=ok
// SIG undefined FUN_146fd7a82(void)

void FUN_146fd7a82(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    local_98 = (double)(param_1 + 0x1a0);
    local_90 = 0xffffffff;
    local_88 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_98);
    FUN_146fdd1ec(uVar2,&local_78,param_2,local_98);
    local_58 = (double)(param_1 + 0x1c0);
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar2 = FUN_146fb4872(param_1,&local_58);
    FUN_146fdd1ec(uVar2,&local_98,param_2,local_58);
    local_70 = (double)CONCAT44(uStack_8c,local_90) - local_70;
    local_58 = SQRT((local_80 - local_60) * (local_80 - local_60) +
                    (local_88 - local_68) * (local_88 - local_68) +
                    (local_98 - local_78) * (local_98 - local_78) + local_70 * local_70);
    FUN_146fb6644(param_1,param_2,&local_58,param_1 + 0x1e0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd7bce FUN_146fd7bce body=382 status=ok
// SIG undefined FUN_146fd7bce(void)

undefined8 * FUN_146fd7bce(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb99c0;
  local_60 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_78 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x38;
  uVar1 = FUN_146fb824a(param_1,&local_60,&local_78);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_90 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = param_1 + 0x3c;
  FUN_146fdbf46(param_1,&local_78,&local_60);
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3c;
  FUN_1446f470e(&local_78,L"FVector",1);
  FUN_146fb3b6e(param_1,&local_60,local_78);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd7d4e FUN_146fd7d4e body=391 status=ok
// SIG undefined FUN_146fd7d4e(void)

void FUN_146fd7d4e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar5 == param_1 + 0x1e0) {
    local_88 = param_1 + 0x1a0;
    local_80 = 0xffffffff;
    local_78 = 0;
    uVar6 = FUN_146fb4872(param_1,&local_88);
    FUN_146fdd1ec(uVar6,&local_a8,param_2,local_88);
    dVar4 = local_98;
    dVar3 = local_a0;
    dVar2 = local_a8;
    local_88 = param_1 + 0x1c0;
    local_80 = 0xffffffff;
    local_78 = 0;
    uVar6 = FUN_146fb4872(param_1,&local_88);
    FUN_146fdd1ec(uVar6,&local_a8,param_2,local_88);
    dVar8 = dVar4 * local_a8;
    dVar1 = dVar3 * local_98;
    dVar7 = local_98 * dVar2;
    local_98 = dVar2 * local_a0 - local_a8 * dVar3;
    local_a8 = dVar1 - local_a0 * dVar4;
    local_90 = 0x3ff0000000000000;
    local_a0 = dVar8 - dVar7;
    FUN_146fd6148(param_1,param_2,&local_a8,param_1 + 0x1e0);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd7ed6 FUN_146fd7ed6 body=333 status=ok
// SIG undefined FUN_146fd7ed6(void)

undefined8 * FUN_146fd7ed6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9ad0;
  local_58 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0x3ff0000000000000;
  local_70 = (undefined8 *)0x0;
  local_50 = 0xffffffff;
  local_48 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_58,&local_70);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_70 = (undefined8 *)0x0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x38;
  uVar1 = FUN_146fb824a(param_1,&local_58,&local_70);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b0);
  local_90 = 0;
  local_58 = (undefined8 *)0x0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_68 = 0xffffffff;
  local_60 = 0;
  local_70 = param_1 + 0x3a;
  FUN_146fdbf46(param_1,&local_70,&local_58);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd8024 FUN_146fd8024 body=287 status=ok
// SIG undefined FUN_146fd8024(void)

void FUN_146fd8024(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1d0) {
    local_88 = (double)(param_1 + 0x1a0);
    local_80._0_4_ = 0xffffffff;
    local_78 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    FUN_146fdd1ec(uVar2,&local_68,param_2,local_88);
    local_88 = (double)(param_1 + 0x1c0);
    local_80 = (double)CONCAT44(local_80._4_4_,0xffffffff);
    local_78 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_88);
    local_88 = (double)FUN_146fd063c(uVar2,param_2,local_88);
    local_70 = local_50 * local_88;
    local_78 = local_58 * local_88;
    local_80 = local_60 * local_88;
    local_88 = local_88 * local_68;
    FUN_146fd6148(param_1,param_2,&local_88,param_1 + 0x1d0);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd8144 FUN_146fd8144 body=125 status=ok
// SIG undefined FUN_146fd8144(void)

undefined8 FUN_146fd8144(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar1 == param_1 + 0x1a0) {
    local_38 = param_1 + 0x1d0;
    local_30 = 0xffffffff;
    local_28 = 0;
    uVar2 = FUN_146fb3b6e(param_1,&local_38,param_2[1]);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd81c2 FUN_146fd81c2 body=125 status=ok
// SIG undefined FUN_146fd81c2(void)

undefined8 FUN_146fd81c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar1 == param_1 + 0x1d0) {
    local_38 = param_1 + 0x1a0;
    local_30 = 0xffffffff;
    local_28 = 0;
    uVar2 = FUN_146fb3c58(param_1,&local_38,param_2[1]);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd8240 FUN_146fd8240 body=247 status=ok
// SIG undefined FUN_146fd8240(void)

undefined8 * FUN_146fd8240(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_149fb9be0;
  local_50 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  local_68 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  uVar1 = FUN_146fb824a(param_1,&local_50,&local_68);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  local_80 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x38;
  FUN_146fdbf46(param_1,&local_68,&local_50);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd8338 FUN_146fd8338 body=307 status=ok
// SIG undefined FUN_146fd8338(void)

void FUN_146fd8338(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1c0) {
    local_68 = (double)(param_1 + 0x1a0);
    local_60 = (double)CONCAT44(local_60._4_4_,0xffffffff);
    local_58 = 0.0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    FUN_146fdd1ec(uVar2,&local_48,param_2,local_68);
    dVar3 = local_38 * local_38 + local_48 * local_48 + local_40 * local_40;
    if (dVar3 <= 9.99999993922529e-09) {
      local_50 = 0x3ff0000000000000;
      local_68 = 0.0;
      local_60 = 0.0;
      local_58 = 0.0;
    }
    else {
      local_68 = 1.0 / SQRT(dVar3);
      local_58 = local_38 * local_68;
      local_60 = local_40 * local_68;
      local_68 = local_48 * local_68;
      local_50 = 0;
    }
    FUN_146fd6148(param_1,param_2,&local_68,param_1 + 0x1c0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd846c FUN_146fd846c body=125 status=ok
// SIG undefined FUN_146fd846c(void)

undefined8 FUN_146fd846c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar1 == param_1 + 0x1a0) {
    local_38 = param_1 + 0x1c0;
    local_30 = 0xffffffff;
    local_28 = 0;
    uVar2 = FUN_146fb3b6e(param_1,&local_38,param_2[1]);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd84ea FUN_146fd84ea body=125 status=ok
// SIG undefined FUN_146fd84ea(void)

undefined8 FUN_146fd84ea(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar1 == param_1 + 0x1c0) {
    local_38 = param_1 + 0x1a0;
    local_30 = 0xffffffff;
    local_28 = 0;
    uVar2 = FUN_146fb3c58(param_1,&local_38,param_2[1]);
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd8568 FUN_146fd8568 body=83 status=ok
// SIG undefined FUN_146fd8568(void)

void FUN_146fd8568(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  return;
}



// FUNCTION 146fd85bc FUN_146fd85bc body=83 status=ok
// SIG undefined FUN_146fd85bc(void)

void FUN_146fd85bc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbb570;
  FUN_1446ddc76(param_2 + 0x33,&DAT_149e59cc2,1);
  FUN_1400b22c2(param_2 + 0x34,&DAT_149dfd150);
  *(undefined1 *)(param_2 + 0x36) = 0;
  return;
}



// FUNCTION 146fd8634 FUN_146fd8634 body=111 status=ok
// SIG undefined FUN_146fd8634(void)

undefined8 FUN_146fd8634(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    FUN_144a787a6(param_2 + 0x1a0,param_3 + 0x1a0);
    *(undefined1 *)(param_2 + 0x1b0) = *(undefined1 *)(param_3 + 0x1b0);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 146fd86cc FUN_146fd86cc body=59 status=ok
// SIG undefined FUN_146fd86cc(void)

undefined8 FUN_146fd86cc(longlong *param_1)

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



// FUNCTION 146fd8718 FUN_146fd8718 body=67 status=ok
// SIG undefined FUN_146fd8718(void)

void FUN_146fd8718(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_149fbb570;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 146fd87aa FUN_146fd87aa body=73 status=ok
// SIG undefined FUN_146fd87aa(void)

undefined8 * FUN_146fd87aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fbb570;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 146fd87f4 FUN_146fd87f4 body=38 status=ok
// SIG undefined FUN_146fd87f4(void)

undefined8 FUN_146fd87f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowOverrideNode",1);
  return param_2;
}



// FUNCTION 146fd881a FUN_146fd881a body=38 status=ok
// SIG undefined FUN_146fd881a(void)

undefined8 FUN_146fd881a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DataflowOverrideNode",1);
  return param_2;
}



// FUNCTION 146fd8840 FUN_146fd8840 body=38 status=ok
// SIG undefined FUN_146fd8840(void)

undefined8 FUN_146fd8840(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BaseClass",1);
  return param_2;
}



// FUNCTION 146fd8866 FUN_146fd8866 body=32 status=ok
// SIG undefined FUN_146fd8866(void)

undefined8 FUN_146fd8866(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fd8886 FUN_146fd8886 body=123 status=ok
// SIG undefined FUN_146fd8886(void)

void FUN_146fd8886(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99d0f0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99d0f0 = FUN_140002ddd(FUN_146292cef,uVar1,L"DataflowOverrideNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99d0f0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fd88fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fd8902 FUN_146fd8902 body=93 status=ok
// SIG undefined FUN_146fd8902(void)

void FUN_146fd8902(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99d0f0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99d0f0 = FUN_140002ddd(FUN_146292cef,uVar2,L"DataflowOverrideNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99d0f0,param_1);
  return;
}



// FUNCTION 146fd8960 FUN_146fd8960 body=55 status=ok
// SIG undefined FUN_146fd8960(void)

void FUN_146fd8960(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99d0f0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99d0f0 = FUN_140002ddd(FUN_146292cef,uVar1,L"DataflowOverrideNode");
  }
  return;
}



// FUNCTION 146fd899a FUN_146fd899a body=233 status=ok
// SIG undefined FUN_146fd899a(void)

ulonglong FUN_146fd899a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowOverrideNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fd8a34;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fd8a34;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fd8a34;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fd8a34:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fd8ad4 FUN_146fd8ad4 body=59 status=ok
// SIG undefined FUN_146fd8ad4(void)

undefined1 FUN_146fd8ad4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2,param_3);
    }
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146fd8b38 FUN_146fd8b38 body=59 status=ok
// SIG undefined FUN_146fd8b38(void)

undefined8 FUN_146fd8b38(longlong *param_1)

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



// FUNCTION 146fd8b7e FUN_146fd8b7e body=38 status=ok
// SIG undefined FUN_146fd8b7e(void)

void FUN_146fd8b7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146fd8c42 FUN_146fd8c42 body=59 status=ok
// SIG undefined FUN_146fd8c42(void)

undefined1 FUN_146fd8c42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2,param_3);
    }
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146fd8ca6 FUN_146fd8ca6 body=59 status=ok
// SIG undefined FUN_146fd8ca6(void)

undefined8 FUN_146fd8ca6(longlong *param_1)

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



// FUNCTION 146fd8cec FUN_146fd8cec body=38 status=ok
// SIG undefined FUN_146fd8cec(void)

void FUN_146fd8cec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146fd8db0 FUN_146fd8db0 body=59 status=ok
// SIG undefined FUN_146fd8db0(void)

undefined1 FUN_146fd8db0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2,param_3);
    }
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146fd8e14 FUN_146fd8e14 body=59 status=ok
// SIG undefined FUN_146fd8e14(void)

undefined8 FUN_146fd8e14(longlong *param_1)

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



// FUNCTION 146fd8e5a FUN_146fd8e5a body=38 status=ok
// SIG undefined FUN_146fd8e5a(void)

void FUN_146fd8e5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146fd8f1e FUN_146fd8f1e body=59 status=ok
// SIG undefined FUN_146fd8f1e(void)

undefined1 FUN_146fd8f1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2,param_3);
    }
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146fd8f82 FUN_146fd8f82 body=59 status=ok
// SIG undefined FUN_146fd8f82(void)

undefined8 FUN_146fd8f82(longlong *param_1)

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



// FUNCTION 146fd8fc8 FUN_146fd8fc8 body=38 status=ok
// SIG undefined FUN_146fd8fc8(void)

void FUN_146fd8fc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146fd908c FUN_146fd908c body=59 status=ok
// SIG undefined FUN_146fd908c(void)

undefined1 FUN_146fd908c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2,param_3);
    }
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146fd90f0 FUN_146fd90f0 body=59 status=ok
// SIG undefined FUN_146fd90f0(void)

undefined8 FUN_146fd90f0(longlong *param_1)

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



// FUNCTION 146fd9136 FUN_146fd9136 body=38 status=ok
// SIG undefined FUN_146fd9136(void)

void FUN_146fd9136(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146fd91fa FUN_146fd91fa body=59 status=ok
// SIG undefined FUN_146fd91fa(void)

undefined1 FUN_146fd91fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2,param_3);
    }
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 146fd925e FUN_146fd925e body=59 status=ok
// SIG undefined FUN_146fd925e(void)

undefined8 FUN_146fd925e(longlong *param_1)

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



// FUNCTION 146fd92a4 FUN_146fd92a4 body=38 status=ok
// SIG undefined FUN_146fd92a4(void)

void FUN_146fd92a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 146fd93b4 FUN_146fd93b4 body=59 status=ok
// SIG undefined FUN_146fd93b4(void)

undefined8 FUN_146fd93b4(longlong *param_1)

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



// FUNCTION 146fd9456 FUN_146fd9456 body=32 status=ok
// SIG undefined FUN_146fd9456(void)

void FUN_146fd9456(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbc1c0;
  return;
}



// FUNCTION 146fd9476 FUN_146fd9476 body=32 status=ok
// SIG undefined FUN_146fd9476(void)

void FUN_146fd9476(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fbc1c0;
  return;
}



// FUNCTION 146fd94ba FUN_146fd94ba body=63 status=ok
// SIG undefined FUN_146fd94ba(void)

undefined1 FUN_146fd94ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 146fd9522 FUN_146fd9522 body=59 status=ok
// SIG undefined FUN_146fd9522(void)

undefined8 FUN_146fd9522(longlong *param_1)

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



// FUNCTION 146fd956e FUN_146fd956e body=40 status=ok
// SIG undefined FUN_146fd956e(void)

void FUN_146fd956e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 146fd95e4 FUN_146fd95e4 body=43 status=ok
// SIG undefined FUN_146fd95e4(void)

undefined8 FUN_146fd95e4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 146fd961e FUN_146fd961e body=233 status=ok
// SIG undefined FUN_146fd961e(void)

ulonglong FUN_146fd961e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDataflowTerminalNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fd96b8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fd96b8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fd96b8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fd96b8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146fd9730 FUN_146fd9730 body=34 status=ok
// SIG undefined FUN_146fd9730(void)

undefined8 FUN_146fd9730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 146fd9752 FUN_146fd9752 body=128 status=ok
// SIG undefined FUN_146fd9752(void)

void FUN_146fd9752(longlong *param_1,longlong *param_2)

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
    FUN_146fd9d8c(param_1,iVar1);
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



// FUNCTION 146fd97d2 FUN_146fd97d2 body=181 status=ok
// SIG undefined FUN_146fd97d2(void)

longlong FUN_146fd97d2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146fd986a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146fd9888(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146fd986a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146fd9888 FUN_146fd9888 body=286 status=ok
// SIG undefined FUN_146fd9888(void)

undefined4 * FUN_146fd9888(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146fd99a8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_145dd1dbf(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_146fd9a8e(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146fd9bae(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd99a8 FUN_146fd99a8 body=229 status=ok
// SIG undefined FUN_146fd99a8(void)

int * FUN_146fd99a8(longlong *param_1,int *param_2)

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



// FUNCTION 146fd9a8e FUN_146fd9a8e body=174 status=ok
// SIG undefined FUN_146fd9a8e(void)

undefined8 FUN_146fd9a8e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_145dd1dbf(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
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
          FUN_146fd9b3c(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146fd9b3c FUN_146fd9b3c body=114 status=ok
// SIG undefined FUN_146fd9b3c(void)

void FUN_146fd9b3c(longlong *param_1,int param_2)

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



// FUNCTION 146fd9bae FUN_146fd9bae body=476 status=ok
// SIG undefined FUN_146fd9bae(void)

void FUN_146fd9bae(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 146fd9d8c FUN_146fd9d8c body=132 status=ok
// SIG undefined FUN_146fd9d8c(void)

void FUN_146fd9d8c(longlong param_1,int param_2)

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



// FUNCTION 146fd9e12 FUN_146fd9e12 body=122 status=ok
// SIG undefined FUN_146fd9e12(void)

void FUN_146fd9e12(longlong *param_1,int param_2)

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



// FUNCTION 146fd9e8c FUN_146fd9e8c body=116 status=ok
// SIG undefined FUN_146fd9e8c(void)

void FUN_146fd9e8c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 146fd9f00 FUN_146fd9f00 body=305 status=ok
// SIG undefined FUN_146fd9f00(void)

undefined4 * FUN_146fd9f00(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_146fda032(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  local_58 = 0;
  cVar2 = FUN_146fda118(param_1,uVar4,local_40);
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
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_146fda258(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fda032 FUN_146fda032 body=230 status=ok
// SIG undefined FUN_146fda032(void)

int * FUN_146fda032(longlong *param_1,int *param_2)

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



// FUNCTION 146fda118 FUN_146fda118 body=182 status=ok
// SIG undefined FUN_146fda118(void)

void FUN_146fda118(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          puVar2 = *(undefined8 **)(piVar1 + 2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146fda1ce(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_146fda189;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_146fda189:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146fda1ce FUN_146fda1ce body=138 status=ok
// SIG undefined FUN_146fda1ce(void)

void FUN_146fda1ce(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146fda258 FUN_146fda258 body=419 status=ok
// SIG undefined FUN_146fda258(void)

void FUN_146fda258(longlong *param_1)

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



// FUNCTION 146fda3fc FUN_146fda3fc body=311 status=ok
// SIG undefined FUN_146fda3fc(void)

longlong FUN_146fda3fc(longlong param_1,longlong *param_2,longlong param_3)

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
      FUN_146fda534(param_2,uVar5,uVar2,param_3);
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



// FUNCTION 146fda534 FUN_146fda534 body=208 status=ok
// SIG undefined FUN_146fda534(void)

void FUN_146fda534(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_146fda606(puVar1,&local_58,param_3,param_4);
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



// FUNCTION 146fda606 FUN_146fda606 body=188 status=ok
// SIG undefined FUN_146fda606(void)

undefined8 *
FUN_146fda606(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
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
  *param_1 = &PTR_FUN_149fbc318;
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
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fda6c4 FUN_146fda6c4 body=62 status=ok
// SIG undefined FUN_146fda6c4(void)

undefined8 * FUN_146fda6c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149fbc318;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 146fda702 FUN_146fda702 body=101 status=ok
// SIG undefined FUN_146fda702(void)

undefined8 * FUN_146fda702(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc328;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fda768 FUN_146fda768 body=34 status=ok
// SIG undefined FUN_146fda768(void)

undefined8 FUN_146fda768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fda78a FUN_146fda78a body=101 status=ok
// SIG undefined FUN_146fda78a(void)

undefined8 * FUN_146fda78a(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc328;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fda7f0 FUN_146fda7f0 body=311 status=ok
// SIG undefined FUN_146fda7f0(void)

longlong FUN_146fda7f0(longlong param_1,longlong *param_2,longlong param_3)

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
      FUN_146fda928(param_2,uVar5,uVar2,param_3);
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



// FUNCTION 146fda928 FUN_146fda928 body=202 status=ok
// SIG undefined FUN_146fda928(void)

void FUN_146fda928(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
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
  *local_48 = &PTR_FUN_149fbc338;
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



// FUNCTION 146fda9f4 FUN_146fda9f4 body=34 status=ok
// SIG undefined FUN_146fda9f4(void)

undefined8 FUN_146fda9f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdaa16 FUN_146fdaa16 body=101 status=ok
// SIG undefined FUN_146fdaa16(void)

undefined8 * FUN_146fdaa16(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc348;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdaa7c FUN_146fdaa7c body=34 status=ok
// SIG undefined FUN_146fdaa7c(void)

undefined8 FUN_146fdaa7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdaa9e FUN_146fdaa9e body=101 status=ok
// SIG undefined FUN_146fdaa9e(void)

undefined8 * FUN_146fdaa9e(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc348;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdab03 FUN_146fdab03 body=125 status=ok
// SIG undefined FUN_146fdab03(void)

longlong FUN_146fdab03(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (FUN_146fdab82(local_30,param_1), local_28 != 0)) {
    do {
      lVar1 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_146fdab22;
      local_28 = *(longlong *)(local_28 + 0x18);
      FUN_146fdac06(local_30);
    } while (local_28 != 0);
  }
  lVar1 = 0;
LAB_146fdab22:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 146fdab82 FUN_146fdab82 body=132 status=ok
// SIG undefined FUN_146fdab82(void)

longlong * FUN_146fdab82(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar1 = FUN_144a797b2();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30;
      goto LAB_146fdabe0;
    }
  }
  bVar2 = false;
LAB_146fdabe0:
  *(bool *)((longlong)param_1 + 0x16) = bVar2;
  FUN_146fdac06(param_1);
  return param_1;
}



// FUNCTION 146fdac06 FUN_146fdac06 body=186 status=ok
// SIG undefined FUN_146fdac06(void)

void FUN_146fdac06(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_146fdac25:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x400000008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_146fdac85;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_146fdac25;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_146fdac25;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_146fdac85:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 146fdacc0 FUN_146fdacc0 body=863 status=ok
// SIG undefined FUN_146fdacc0(void)

void FUN_146fdacc0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  
  if ((param_4 & 2) == 0) {
    if ((param_4 & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18)) {
        iVar2 = *(int *)(param_2 + 0x18);
      }
      if (iVar2 != 0) {
        FUN_1456bd906(param_3,iVar2);
        *(int *)(param_3 + 0x18) = iVar2;
        lVar5 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar5 = param_1;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
        if (iVar1 % 0x20 < 1) {
          uVar3 = 0xffffffff;
        }
        lVar6 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar6 = param_2;
        }
        iVar16 = *(int *)(param_2 + 0x18);
        uVar15 = 0xffffffff >> (-(char)(iVar16 % 0x20) & 0x1fU);
        if (iVar16 % 0x20 < 1) {
          uVar15 = 0xffffffff;
        }
        lVar17 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar17 = param_3;
        }
        if (0 < iVar2) {
          iVar12 = param_4 << 0x1b;
          uVar14 = iVar2 + 0x1fU >> 5;
          iVar8 = iVar16 + 0x3e;
          if (-1 < iVar16 + 0x1f) {
            iVar8 = iVar16 + 0x1f;
          }
          iVar4 = iVar1 + 0x3e;
          if (-1 < iVar1 + 0x1f) {
            iVar4 = iVar1 + 0x1f;
          }
          uVar13 = 0xffffffff;
          if (iVar16 - 1U < 0x20) {
            uVar13 = uVar15;
          }
          uVar10 = 0xffffffff;
          if (iVar1 - 1U < 0x20) {
            uVar10 = uVar3;
          }
          uVar7 = 0;
          do {
            uVar9 = iVar12 >> 0x1f;
            if (((longlong)uVar7 < (longlong)(iVar4 >> 5)) &&
               (uVar9 = *(uint *)(lVar5 + uVar7 * 4), uVar10 != 0xffffffff)) {
              if (iVar12 < 0) {
                uVar9 = uVar9 | ~uVar10;
              }
              else {
                uVar9 = uVar9 & uVar10;
              }
            }
            uVar11 = iVar12 >> 0x1f;
            if (((longlong)uVar7 < (longlong)(iVar8 >> 5)) &&
               (uVar11 = *(uint *)(lVar6 + uVar7 * 4), uVar13 != 0xffffffff)) {
              if (iVar12 < 0) {
                uVar11 = uVar11 | ~uVar13;
              }
              else {
                uVar11 = uVar11 & uVar13;
              }
            }
            uVar13 = 0xffffffff;
            if (uVar14 - 1 == uVar7) {
              uVar13 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
            }
            if (iVar2 % 0x20 < 1) {
              uVar13 = 0xffffffff;
            }
            uVar10 = 0xffffffff;
            if ((iVar4 >> 5) - 2 == uVar7) {
              uVar10 = uVar3;
            }
            *(uint *)(lVar17 + uVar7 * 4) = uVar13 & (uVar11 | uVar9);
            bVar19 = (iVar8 >> 5) - 2 == uVar7;
            uVar7 = uVar7 + 1;
            uVar13 = 0xffffffff;
            if (bVar19) {
              uVar13 = uVar15;
            }
          } while (uVar14 != uVar7);
        }
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    if (0 < (int)uVar3) {
      FUN_1456bd906(param_3,uVar3);
      *(uint *)(param_3 + 0x18) = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = param_1;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      uVar15 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
      if (iVar2 % 0x20 < 1) {
        uVar15 = 0xffffffff;
      }
      lVar6 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar6 = param_2;
      }
      iVar1 = *(int *)(param_2 + 0x18);
      uVar14 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
      if (iVar1 % 0x20 < 1) {
        uVar14 = 0xffffffff;
      }
      lVar17 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar17 = param_3;
      }
      uVar7 = 0;
      uVar13 = uVar3 + 0x1f >> 5;
      iVar16 = iVar1 + 0x3e;
      if (-1 < iVar1 + 0x1f) {
        iVar16 = iVar1 + 0x1f;
      }
      uVar10 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar10 = uVar15;
      }
      iVar8 = iVar2 + 0x3e;
      if (-1 < iVar2 + 0x1f) {
        iVar8 = iVar2 + 0x1f;
      }
      uVar9 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar9 = uVar14;
      }
      do {
        uVar18 = uVar10 & *(uint *)(lVar5 + uVar7 * 4);
        uVar11 = 0xffffffff;
        if (uVar13 - 1 == uVar7) {
          uVar11 = -(uint)((uVar3 & 0x1f) == 0) | 0xffffffffU >> (-(char)(uVar3 & 0x1f) & 0x1fU);
        }
        uVar10 = 0xffffffff;
        if ((iVar8 >> 5) - 2 == uVar7) {
          uVar10 = uVar15;
        }
        *(uint *)(lVar17 + uVar7 * 4) = uVar11 & (uVar18 | uVar9 & *(uint *)(lVar6 + uVar7 * 4));
        bVar19 = (iVar16 >> 5) - 2 == uVar7;
        uVar7 = uVar7 + 1;
        uVar9 = 0xffffffff;
        if (bVar19) {
          uVar9 = uVar14;
        }
      } while (uVar13 != uVar7);
    }
  }
  return;
}



// FUNCTION 146fdb01f FUN_146fdb01f body=863 status=ok
// SIG undefined FUN_146fdb01f(void)

void FUN_146fdb01f(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  
  if ((param_4 & 2) == 0) {
    if ((param_4 & 1) != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18)) {
        iVar2 = *(int *)(param_2 + 0x18);
      }
      if (iVar2 != 0) {
        FUN_1456bd906(param_3,iVar2);
        *(int *)(param_3 + 0x18) = iVar2;
        lVar5 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar5 = param_1;
        }
        iVar1 = *(int *)(param_1 + 0x18);
        uVar3 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
        if (iVar1 % 0x20 < 1) {
          uVar3 = 0xffffffff;
        }
        lVar6 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar6 = param_2;
        }
        iVar16 = *(int *)(param_2 + 0x18);
        uVar15 = 0xffffffff >> (-(char)(iVar16 % 0x20) & 0x1fU);
        if (iVar16 % 0x20 < 1) {
          uVar15 = 0xffffffff;
        }
        lVar17 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar17 = param_3;
        }
        if (0 < iVar2) {
          iVar12 = param_4 << 0x1b;
          uVar14 = iVar2 + 0x1fU >> 5;
          iVar8 = iVar16 + 0x3e;
          if (-1 < iVar16 + 0x1f) {
            iVar8 = iVar16 + 0x1f;
          }
          iVar4 = iVar1 + 0x3e;
          if (-1 < iVar1 + 0x1f) {
            iVar4 = iVar1 + 0x1f;
          }
          uVar13 = 0xffffffff;
          if (iVar16 - 1U < 0x20) {
            uVar13 = uVar15;
          }
          uVar10 = 0xffffffff;
          if (iVar1 - 1U < 0x20) {
            uVar10 = uVar3;
          }
          uVar7 = 0;
          do {
            uVar9 = iVar12 >> 0x1f;
            if (((longlong)uVar7 < (longlong)(iVar4 >> 5)) &&
               (uVar9 = *(uint *)(lVar5 + uVar7 * 4), uVar10 != 0xffffffff)) {
              if (iVar12 < 0) {
                uVar9 = uVar9 | ~uVar10;
              }
              else {
                uVar9 = uVar9 & uVar10;
              }
            }
            uVar11 = iVar12 >> 0x1f;
            if (((longlong)uVar7 < (longlong)(iVar8 >> 5)) &&
               (uVar11 = *(uint *)(lVar6 + uVar7 * 4), uVar13 != 0xffffffff)) {
              if (iVar12 < 0) {
                uVar11 = uVar11 | ~uVar13;
              }
              else {
                uVar11 = uVar11 & uVar13;
              }
            }
            uVar13 = 0xffffffff;
            if (uVar14 - 1 == uVar7) {
              uVar13 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
            }
            if (iVar2 % 0x20 < 1) {
              uVar13 = 0xffffffff;
            }
            uVar10 = 0xffffffff;
            if ((iVar4 >> 5) - 2 == uVar7) {
              uVar10 = uVar3;
            }
            *(uint *)(lVar17 + uVar7 * 4) = uVar13 & (uVar11 ^ uVar9);
            bVar19 = (iVar8 >> 5) - 2 == uVar7;
            uVar7 = uVar7 + 1;
            uVar13 = 0xffffffff;
            if (bVar19) {
              uVar13 = uVar15;
            }
          } while (uVar14 != uVar7);
        }
      }
    }
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x18);
    if ((int)*(uint *)(param_1 + 0x18) < (int)*(uint *)(param_2 + 0x18)) {
      uVar3 = *(uint *)(param_1 + 0x18);
    }
    if (0 < (int)uVar3) {
      FUN_1456bd906(param_3,uVar3);
      *(uint *)(param_3 + 0x18) = uVar3;
      lVar5 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = param_1;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      uVar15 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
      if (iVar2 % 0x20 < 1) {
        uVar15 = 0xffffffff;
      }
      lVar6 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar6 = param_2;
      }
      iVar1 = *(int *)(param_2 + 0x18);
      uVar14 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
      if (iVar1 % 0x20 < 1) {
        uVar14 = 0xffffffff;
      }
      lVar17 = *(longlong *)(param_3 + 0x10);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        lVar17 = param_3;
      }
      uVar7 = 0;
      uVar13 = uVar3 + 0x1f >> 5;
      iVar16 = iVar1 + 0x3e;
      if (-1 < iVar1 + 0x1f) {
        iVar16 = iVar1 + 0x1f;
      }
      uVar10 = 0xffffffff;
      if (iVar2 - 1U < 0x20) {
        uVar10 = uVar15;
      }
      iVar8 = iVar2 + 0x3e;
      if (-1 < iVar2 + 0x1f) {
        iVar8 = iVar2 + 0x1f;
      }
      uVar9 = 0xffffffff;
      if (iVar1 - 1U < 0x20) {
        uVar9 = uVar14;
      }
      do {
        uVar18 = uVar10 & *(uint *)(lVar5 + uVar7 * 4);
        uVar11 = 0xffffffff;
        if (uVar13 - 1 == uVar7) {
          uVar11 = -(uint)((uVar3 & 0x1f) == 0) | 0xffffffffU >> (-(char)(uVar3 & 0x1f) & 0x1fU);
        }
        uVar10 = 0xffffffff;
        if ((iVar8 >> 5) - 2 == uVar7) {
          uVar10 = uVar15;
        }
        *(uint *)(lVar17 + uVar7 * 4) = uVar11 & (uVar18 ^ uVar9 & *(uint *)(lVar6 + uVar7 * 4));
        bVar19 = (iVar16 >> 5) - 2 == uVar7;
        uVar7 = uVar7 + 1;
        uVar9 = 0xffffffff;
        if (bVar19) {
          uVar9 = uVar14;
        }
      } while (uVar13 != uVar7);
    }
  }
  return;
}



// FUNCTION 146fdb37e FUN_146fdb37e body=22 status=ok
// SIG undefined FUN_146fdb37e(void)

undefined8 FUN_146fdb37e(undefined8 param_1)

{
  FUN_146fdb394();
  return param_1;
}



// FUNCTION 146fdb394 FUN_146fdb394 body=153 status=ok
// SIG undefined FUN_146fdb394(void)

undefined8 * FUN_146fdb394(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd5ee4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb42e FUN_146fdb42e body=25 status=ok
// SIG undefined FUN_146fdb42e(void)

undefined8 FUN_146fdb42e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb466 FUN_146fdb466 body=22 status=ok
// SIG undefined FUN_146fdb466(void)

undefined8 FUN_146fdb466(undefined8 param_1)

{
  FUN_146fdb47c();
  return param_1;
}



// FUNCTION 146fdb47c FUN_146fdb47c body=153 status=ok
// SIG undefined FUN_146fdb47c(void)

undefined8 * FUN_146fdb47c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd61be(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb516 FUN_146fdb516 body=25 status=ok
// SIG undefined FUN_146fdb516(void)

undefined8 FUN_146fdb516(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb54e FUN_146fdb54e body=22 status=ok
// SIG undefined FUN_146fdb54e(void)

undefined8 FUN_146fdb54e(undefined8 param_1)

{
  FUN_146fdb564();
  return param_1;
}



// FUNCTION 146fdb564 FUN_146fdb564 body=153 status=ok
// SIG undefined FUN_146fdb564(void)

undefined8 * FUN_146fdb564(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd64ae(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb5fe FUN_146fdb5fe body=25 status=ok
// SIG undefined FUN_146fdb5fe(void)

undefined8 FUN_146fdb5fe(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb636 FUN_146fdb636 body=22 status=ok
// SIG undefined FUN_146fdb636(void)

undefined8 FUN_146fdb636(undefined8 param_1)

{
  FUN_146fdb64c();
  return param_1;
}



// FUNCTION 146fdb64c FUN_146fdb64c body=153 status=ok
// SIG undefined FUN_146fdb64c(void)

undefined8 * FUN_146fdb64c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd6832(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb6e6 FUN_146fdb6e6 body=25 status=ok
// SIG undefined FUN_146fdb6e6(void)

undefined8 FUN_146fdb6e6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb71e FUN_146fdb71e body=22 status=ok
// SIG undefined FUN_146fdb71e(void)

undefined8 FUN_146fdb71e(undefined8 param_1)

{
  FUN_146fdb734();
  return param_1;
}



// FUNCTION 146fdb734 FUN_146fdb734 body=153 status=ok
// SIG undefined FUN_146fdb734(void)

undefined8 * FUN_146fdb734(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x200,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd6cae(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb7ce FUN_146fdb7ce body=25 status=ok
// SIG undefined FUN_146fdb7ce(void)

undefined8 FUN_146fdb7ce(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb806 FUN_146fdb806 body=22 status=ok
// SIG undefined FUN_146fdb806(void)

undefined8 FUN_146fdb806(undefined8 param_1)

{
  FUN_146fdb81c();
  return param_1;
}



// FUNCTION 146fdb81c FUN_146fdb81c body=153 status=ok
// SIG undefined FUN_146fdb81c(void)

undefined8 * FUN_146fdb81c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x200,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd6f72(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb8b6 FUN_146fdb8b6 body=25 status=ok
// SIG undefined FUN_146fdb8b6(void)

undefined8 FUN_146fdb8b6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb8ee FUN_146fdb8ee body=22 status=ok
// SIG undefined FUN_146fdb8ee(void)

undefined8 FUN_146fdb8ee(undefined8 param_1)

{
  FUN_146fdb904();
  return param_1;
}



// FUNCTION 146fdb904 FUN_146fdb904 body=153 status=ok
// SIG undefined FUN_146fdb904(void)

undefined8 * FUN_146fdb904(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd7236(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdb99e FUN_146fdb99e body=25 status=ok
// SIG undefined FUN_146fdb99e(void)

undefined8 FUN_146fdb99e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdb9d6 FUN_146fdb9d6 body=22 status=ok
// SIG undefined FUN_146fdb9d6(void)

undefined8 FUN_146fdb9d6(undefined8 param_1)

{
  FUN_146fdb9ec();
  return param_1;
}



// FUNCTION 146fdb9ec FUN_146fdb9ec body=153 status=ok
// SIG undefined FUN_146fdb9ec(void)

undefined8 * FUN_146fdb9ec(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd74e6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdba86 FUN_146fdba86 body=25 status=ok
// SIG undefined FUN_146fdba86(void)

undefined8 FUN_146fdba86(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdbabe FUN_146fdbabe body=22 status=ok
// SIG undefined FUN_146fdbabe(void)

undefined8 FUN_146fdbabe(undefined8 param_1)

{
  FUN_146fdbad4();
  return param_1;
}



// FUNCTION 146fdbad4 FUN_146fdbad4 body=153 status=ok
// SIG undefined FUN_146fdbad4(void)

undefined8 * FUN_146fdbad4(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd76fa(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdbb6e FUN_146fdbb6e body=25 status=ok
// SIG undefined FUN_146fdbb6e(void)

undefined8 FUN_146fdbb6e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdbba6 FUN_146fdbba6 body=22 status=ok
// SIG undefined FUN_146fdbba6(void)

undefined8 FUN_146fdbba6(undefined8 param_1)

{
  FUN_146fdbbbc();
  return param_1;
}



// FUNCTION 146fdbbbc FUN_146fdbbbc body=153 status=ok
// SIG undefined FUN_146fdbbbc(void)

undefined8 * FUN_146fdbbbc(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd790a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdbc56 FUN_146fdbc56 body=25 status=ok
// SIG undefined FUN_146fdbc56(void)

undefined8 FUN_146fdbc56(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdbc8e FUN_146fdbc8e body=22 status=ok
// SIG undefined FUN_146fdbc8e(void)

undefined8 FUN_146fdbc8e(undefined8 param_1)

{
  FUN_146fdbca4();
  return param_1;
}



// FUNCTION 146fdbca4 FUN_146fdbca4 body=153 status=ok
// SIG undefined FUN_146fdbca4(void)

undefined8 * FUN_146fdbca4(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x200,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd7bce(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdbd3e FUN_146fdbd3e body=25 status=ok
// SIG undefined FUN_146fdbd3e(void)

undefined8 FUN_146fdbd3e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdbd76 FUN_146fdbd76 body=22 status=ok
// SIG undefined FUN_146fdbd76(void)

undefined8 FUN_146fdbd76(undefined8 param_1)

{
  FUN_146fdbd8c();
  return param_1;
}



// FUNCTION 146fdbd8c FUN_146fdbd8c body=153 status=ok
// SIG undefined FUN_146fdbd8c(void)

undefined8 * FUN_146fdbd8c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd7ed6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdbe26 FUN_146fdbe26 body=25 status=ok
// SIG undefined FUN_146fdbe26(void)

undefined8 FUN_146fdbe26(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdbe5e FUN_146fdbe5e body=22 status=ok
// SIG undefined FUN_146fdbe5e(void)

undefined8 FUN_146fdbe5e(undefined8 param_1)

{
  FUN_146fdbe74();
  return param_1;
}



// FUNCTION 146fdbe74 FUN_146fdbe74 body=153 status=ok
// SIG undefined FUN_146fdbe74(void)

undefined8 * FUN_146fdbe74(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fd8240(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdbf0e FUN_146fdbf0e body=25 status=ok
// SIG undefined FUN_146fdbf0e(void)

undefined8 FUN_146fdbf0e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fdbf46 FUN_146fdbf46 body=66 status=ok
// SIG undefined FUN_146fdbf46(void)

void FUN_146fdbf46(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146fb8a66(param_1,param_2,param_4);
  FUN_146fb36d2(uVar1,&PTR_PTR_14c75f4b8);
  if (*param_3 != 0) {
    FUN_146fb39ca(uVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 146fdbfc6 FUN_146fdbfc6 body=111 status=ok
// SIG undefined FUN_146fdbfc6(void)

void FUN_146fdbfc6(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfe4 == param_1) {
    FUN_146fdc0a8(&local_28);
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_146fdc036(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc036 FUN_146fdc036 body=113 status=ok
// SIG undefined FUN_146fdc036(void)

undefined8 FUN_146fdc036(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfec == param_1) {
    FUN_146fdc3ac(&local_28);
    uVar1 = 1;
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_146fdc33a(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc0a8 FUN_146fdc0a8 body=181 status=ok
// SIG undefined FUN_146fdc0a8(void)

void FUN_146fdc0a8(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[2];
  local_50 = *puVar2;
  uStack_4c = puVar2[1];
  uStack_48 = puVar2[2];
  uStack_44 = puVar2[3];
  lVar3 = param_1[1];
  FUN_146fb32fc(lVar1,local_58);
  uVar5 = FUN_146fb331c(lVar1);
  FUN_146fb32e0(lVar1,local_68);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_88 = local_68;
  local_80 = uVar5;
  local_78 = local_58;
  FUN_146fdc15e(lVar3,uVar6,uVar4,&local_50);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc15e FUN_146fdc15e body=202 status=ok
// SIG undefined FUN_146fdc15e(void)

void FUN_146fdc15e(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fbc508;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(local_48 + 7) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar2;
  *(undefined4 *)(local_48 + 8) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar4;
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



// FUNCTION 146fdc22a FUN_146fdc22a body=34 status=ok
// SIG undefined FUN_146fdc22a(void)

undefined8 FUN_146fdc22a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 146fdc24c FUN_146fdc24c body=101 status=ok
// SIG undefined FUN_146fdc24c(void)

undefined8 * FUN_146fdc24c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc518;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdc2b2 FUN_146fdc2b2 body=34 status=ok
// SIG undefined FUN_146fdc2b2(void)

undefined8 FUN_146fdc2b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdc2d4 FUN_146fdc2d4 body=101 status=ok
// SIG undefined FUN_146fdc2d4(void)

undefined8 * FUN_146fdc2d4(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc518;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdc33a FUN_146fdc33a body=113 status=ok
// SIG undefined FUN_146fdc33a(void)

undefined8 FUN_146fdc33a(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cff4 == param_1) {
    FUN_146fdc6c2(&local_28);
    uVar1 = 1;
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_146fdc650(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc3ac FUN_146fdc3ac body=191 status=ok
// SIG undefined FUN_146fdc3ac(void)

void FUN_146fdc3ac(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[2];
  local_48 = *(undefined8 *)(puVar2 + 4);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  lVar3 = param_1[1];
  FUN_146fb32fc(lVar1,local_60);
  uVar5 = FUN_146fb331c(lVar1);
  FUN_146fb32e0(lVar1,local_70);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_88 = local_70;
  local_80 = uVar5;
  local_78 = local_60;
  FUN_146fdc46c(lVar3,uVar6,uVar4,&local_58);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc46c FUN_146fdc46c body=210 status=ok
// SIG undefined FUN_146fdc46c(void)

void FUN_146fdc46c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fbc528;
  local_48[9] = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(local_48 + 7) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar2;
  *(undefined4 *)(local_48 + 8) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar4;
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



// FUNCTION 146fdc540 FUN_146fdc540 body=34 status=ok
// SIG undefined FUN_146fdc540(void)

undefined8 FUN_146fdc540(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 146fdc562 FUN_146fdc562 body=101 status=ok
// SIG undefined FUN_146fdc562(void)

undefined8 * FUN_146fdc562(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc538;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdc5c8 FUN_146fdc5c8 body=34 status=ok
// SIG undefined FUN_146fdc5c8(void)

undefined8 FUN_146fdc5c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdc5ea FUN_146fdc5ea body=101 status=ok
// SIG undefined FUN_146fdc5ea(void)

undefined8 * FUN_146fdc5ea(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc538;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdc650 FUN_146fdc650 body=113 status=ok
// SIG undefined FUN_146fdc650(void)

undefined8 FUN_146fdc650(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cffc == param_1) {
    FUN_146fdc9ee(&local_28);
    uVar1 = 1;
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    uVar1 = FUN_146fdc96a(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc6c2 FUN_146fdc6c2 body=195 status=ok
// SIG undefined FUN_146fdc6c2(void)

void FUN_146fdc6c2(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  puVar2 = (undefined4 *)param_1[2];
  local_68 = *puVar2;
  uStack_64 = puVar2[1];
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  local_58 = puVar2[4];
  uStack_54 = puVar2[5];
  uStack_50 = puVar2[6];
  uStack_4c = puVar2[7];
  lVar3 = param_1[1];
  FUN_146fb32fc(lVar1,local_70);
  uVar5 = FUN_146fb331c(lVar1);
  FUN_146fb32e0(lVar1,local_80);
  uVar4 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_98 = local_80;
  local_90 = uVar5;
  local_88 = local_70;
  FUN_146fdc786(lVar3,uVar6,uVar4,&local_68);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc786 FUN_146fdc786 body=210 status=ok
// SIG undefined FUN_146fdc786(void)

void FUN_146fdc786(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar9 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar9;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fbc548;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(local_48 + 10) = param_4[4];
  *(undefined4 *)((longlong)local_48 + 0x54) = uVar6;
  *(undefined4 *)(local_48 + 0xb) = uVar7;
  *(undefined4 *)((longlong)local_48 + 0x5c) = uVar8;
  *(undefined4 *)(local_48 + 8) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar3;
  *(undefined4 *)(local_48 + 9) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar5;
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



// FUNCTION 146fdc85a FUN_146fdc85a body=34 status=ok
// SIG undefined FUN_146fdc85a(void)

undefined8 FUN_146fdc85a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 146fdc87c FUN_146fdc87c body=101 status=ok
// SIG undefined FUN_146fdc87c(void)

undefined8 * FUN_146fdc87c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc558;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdc8e2 FUN_146fdc8e2 body=34 status=ok
// SIG undefined FUN_146fdc8e2(void)

undefined8 FUN_146fdc8e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdc904 FUN_146fdc904 body=101 status=ok
// SIG undefined FUN_146fdc904(void)

undefined8 * FUN_146fdc904(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc558;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdc96a FUN_146fdc96a body=131 status=ok
// SIG undefined FUN_146fdc96a(void)

ulonglong FUN_146fdc96a(longlong param_1,undefined4 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99d004 == param_1) {
    FUN_146fdcc8c(&local_48);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    uVar1 = CONCAT71(uVar2,DAT_14c99d00c == param_1);
    if (DAT_14c99d00c == param_1) {
      FUN_146fdcf3a(&local_28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdc9ee FUN_146fdc9ee body=193 status=ok
// SIG undefined FUN_146fdc9ee(void)

void FUN_146fdc9ee(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = (float)((double *)param_1[2])[1];
  lVar1 = *param_1;
  local_48 = (float)*(double *)param_1[2];
  lVar2 = param_1[1];
  FUN_146fb32fc(lVar1,local_50);
  uVar4 = FUN_146fb331c(lVar1);
  FUN_146fb32e0(lVar1,local_60);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_78 = local_60;
  local_70 = uVar4;
  local_68 = local_50;
  FUN_146fdcab0(lVar2,uVar5,uVar3,&local_48);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdcab0 FUN_146fdcab0 body=202 status=ok
// SIG undefined FUN_146fdcab0(void)

void FUN_146fdcab0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
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
  *local_48 = &PTR_FUN_149fbc568;
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



// FUNCTION 146fdcb7c FUN_146fdcb7c body=34 status=ok
// SIG undefined FUN_146fdcb7c(void)

undefined8 FUN_146fdcb7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdcb9e FUN_146fdcb9e body=101 status=ok
// SIG undefined FUN_146fdcb9e(void)

undefined8 * FUN_146fdcb9e(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc578;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdcc04 FUN_146fdcc04 body=34 status=ok
// SIG undefined FUN_146fdcc04(void)

undefined8 FUN_146fdcc04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdcc26 FUN_146fdcc26 body=101 status=ok
// SIG undefined FUN_146fdcc26(void)

undefined8 * FUN_146fdcc26(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc578;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdcc8c FUN_146fdcc8c body=203 status=ok
// SIG undefined FUN_146fdcc8c(void)

void FUN_146fdcc8c(longlong *param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pdVar1 = (double *)param_1[2];
  local_44 = (float)pdVar1[2];
  lVar2 = *param_1;
  local_48 = (float)pdVar1[1];
  local_4c = (float)*pdVar1;
  lVar3 = param_1[1];
  FUN_146fb32fc(lVar2,local_58);
  uVar5 = FUN_146fb331c(lVar2);
  FUN_146fb32e0(lVar2,local_68);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar6 = FUN_1447addd0(lVar2 + 0x28,0x10);
  local_88 = local_68;
  local_80 = uVar5;
  local_78 = local_58;
  FUN_146fdcd58(lVar3,uVar6,uVar4,&local_4c);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdcd58 FUN_146fdcd58 body=208 status=ok
// SIG undefined FUN_146fdcd58(void)

void FUN_146fdcd58(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  *local_48 = &PTR_FUN_149fbc588;
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



// FUNCTION 146fdce2a FUN_146fdce2a body=34 status=ok
// SIG undefined FUN_146fdce2a(void)

undefined8 FUN_146fdce2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 146fdce4c FUN_146fdce4c body=101 status=ok
// SIG undefined FUN_146fdce4c(void)

undefined8 * FUN_146fdce4c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc598;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdceb2 FUN_146fdceb2 body=34 status=ok
// SIG undefined FUN_146fdceb2(void)

undefined8 FUN_146fdceb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdced4 FUN_146fdced4 body=101 status=ok
// SIG undefined FUN_146fdced4(void)

undefined8 * FUN_146fdced4(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc598;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdcf3a FUN_146fdcf3a body=213 status=ok
// SIG undefined FUN_146fdcf3a(void)

void FUN_146fdcf3a(longlong *param_1)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [8];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pdVar1 = (double *)param_1[2];
  local_4c = (float)pdVar1[3];
  local_50 = (float)pdVar1[2];
  local_54 = (float)pdVar1[1];
  local_58 = (float)*pdVar1;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  FUN_146fb32fc(lVar2,local_60);
  uVar5 = FUN_146fb331c(lVar2);
  FUN_146fb32e0(lVar2,local_70);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar6 = FUN_1447addd0(lVar2 + 0x28,0x10);
  local_88 = local_70;
  local_80 = uVar5;
  local_78 = local_60;
  FUN_146fdd010(lVar3,uVar6,uVar4,&local_58);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd010 FUN_146fdd010 body=202 status=ok
// SIG undefined FUN_146fdd010(void)

void FUN_146fdd010(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fbc5a8;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(local_48 + 8) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar2;
  *(undefined4 *)(local_48 + 9) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x4c) = uVar4;
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



// FUNCTION 146fdd0dc FUN_146fdd0dc body=34 status=ok
// SIG undefined FUN_146fdd0dc(void)

undefined8 FUN_146fdd0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 146fdd0fe FUN_146fdd0fe body=101 status=ok
// SIG undefined FUN_146fdd0fe(void)

undefined8 * FUN_146fdd0fe(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc5b8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdd164 FUN_146fdd164 body=34 status=ok
// SIG undefined FUN_146fdd164(void)

undefined8 FUN_146fdd164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 146fdd186 FUN_146fdd186 body=101 status=ok
// SIG undefined FUN_146fdd186(void)

undefined8 * FUN_146fdd186(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_149fbc5b8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fdd1ec FUN_146fdd1ec body=189 status=ok
// SIG undefined FUN_146fdd1ec(void)

undefined4 *
FUN_146fdd1ec(longlong param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong **local_40;
  undefined4 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  param_2[4] = param_4[4];
  param_2[5] = uVar5;
  param_2[6] = uVar6;
  param_2[7] = uVar7;
  *param_2 = uVar9;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar8 = FUN_146fb5b98(lVar1,param_3);
    if (cVar8 != '\0') {
      uVar9 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_30 = (longlong *)(**(code **)(*param_3 + 0x28))(param_3,uVar9);
      if ((local_30 != (longlong *)0x0) && (*local_30 != 0)) {
        local_40 = &local_30;
        local_50 = param_1;
        local_48 = param_3;
        local_38 = param_2;
        FUN_146fdd2aa(*(undefined8 *)(param_1 + 8));
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd2aa FUN_146fdd2aa body=108 status=ok
// SIG undefined FUN_146fdd2aa(void)

void FUN_146fdd2aa(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfe4 == param_1) {
    FUN_146fdd388(&local_28);
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    FUN_146fdd318();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd318 FUN_146fdd318 body=110 status=ok
// SIG undefined FUN_146fdd318(void)

undefined8 FUN_146fdd318(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfec == param_1) {
    FUN_146fdd47c(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fdd40c();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd388 FUN_146fdd388 body=131 status=ok
// SIG undefined FUN_146fdd388(void)

void FUN_146fdd388(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    puVar4 = (undefined8 *)
             FUN_146fcc36e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_28);
  }
  else {
    puVar4 = &local_28;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  uVar3 = puVar4[1];
  *puVar2 = *puVar4;
  puVar2[1] = uVar3;
  puVar2[2] = 0;
  puVar2[3] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd40c FUN_146fdd40c body=110 status=ok
// SIG undefined FUN_146fdd40c(void)

undefined8 FUN_146fdd40c(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cff4 == param_1) {
    FUN_146fdd584(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fdd514();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fdd47c FUN_146fdd47c body=151 status=ok
// SIG undefined FUN_146fdd47c(void)

void FUN_146fdd47c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  lVar2 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar2 + 8) == 0) {
    puVar7 = (undefined8 *)(lVar2 + 0x38);
  }
  else if (*(int *)(lVar2 + 8) == 1) {
    puVar7 = (undefined8 *)
             FUN_146fcc54e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar2 + 0x38),0,&local_28);
  }
  else {
    puVar7 = &local_28;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  uVar1 = puVar7[2];
  uVar4 = *(undefined4 *)((longlong)puVar7 + 4);
  uVar5 = *(undefined4 *)(puVar7 + 1);
  uVar6 = *(undefined4 *)((longlong)puVar7 + 0xc);
  *puVar3 = *(undefined4 *)puVar7;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  *(undefined8 *)(puVar3 + 4) = uVar1;
  *(undefined8 *)(puVar3 + 6) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


