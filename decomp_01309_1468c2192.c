// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468c2192 FUN_1468c2192 body=114 status=ok
// SIG undefined FUN_1468c2192(void)

int FUN_1468c2192(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a7afa6(lVar4 + (longlong)iVar1 * 0x30,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x28 + (longlong)iVar1 * 0x30);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1468c2204 FUN_1468c2204 body=45 status=ok
// SIG undefined FUN_1468c2204(void)

void FUN_1468c2204(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    param_1[4] = 0xffffffff;
    param_1[5] = 0xffffffff;
    param_1[6] = 0xffffffff;
    param_1[7] = 0xffffffff;
    param_1[8] = 0xffffffff;
    param_1[9] = 0xffffffff;
    *(undefined8 *)(param_1 + 10) = 0;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 1468c2232 FUN_1468c2232 body=147 status=ok
// SIG undefined FUN_1468c2232(void)

void FUN_1468c2232(longlong param_1,int param_2)

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



// FUNCTION 1468c22ca FUN_1468c22ca body=190 status=ok
// SIG undefined FUN_1468c22ca(void)

undefined8 * FUN_1468c22ca(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_145b09778();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  *puVar3 = &PTR_FUN_149e8f7e0;
  FUN_14680ea3d(L"UObject(FVTableHelper& Helper)");
  *puVar3 = &PTR_FUN_149e8f040;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
  puVar3[0xd] = 0;
  *(undefined4 *)(puVar3 + 0xe) = 0;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  *(undefined8 *)((longlong)puVar3 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0xac) = 0;
  puVar3[0x17] = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  return puVar3;
}



// FUNCTION 1468c2388 FUN_1468c2388 body=440 status=ok
// SIG undefined FUN_1468c2388(void)

void FUN_1468c2388(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1468c2542 FUN_1468c2542 body=95 status=ok
// SIG undefined FUN_1468c2542(void)

void FUN_1468c2542(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_1468c25a2();
  return;
}



// FUNCTION 1468c25a2 FUN_1468c25a2 body=204 status=ok
// SIG undefined FUN_1468c25a2(void)

void FUN_1468c25a2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  lVar2 = *param_1;
  lVar6 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar2 + 0x50 + lVar6) = 0;
  if (*(longlong *)(lVar2 + 0x48 + lVar6) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(lVar2 + lVar6 + 8);
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
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1468c266e FUN_1468c266e body=141 status=ok
// SIG undefined FUN_1468c266e(void)

void FUN_1468c266e(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  FUN_1468c26fb();
  bVar1 = *(byte *)(*(longlong *)(*param_1 + 8) + 0x28);
  if (((bVar1 & 1) != 0) ||
     (((bVar1 & 4) == 0 && ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((0 < (int)uVar3) && (0 < iVar5)) {
      *(int *)(param_2 + 0x48) = iVar5;
      FUN_1468c2388(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1468c26fb FUN_1468c26fb body=483 status=ok
// SIG undefined FUN_1468c26fb(void)

void FUN_1468c26fb(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  FUN_1449b19ea(*param_1);
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) == 0) {
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar3 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar4 = local_88._4_4_;
      local_88 = uVar3;
      do {
        lVar2 = *local_a0;
        (**(code **)(**(longlong **)(*param_1 + 8) + 0x120))
                  (*(longlong **)(*param_1 + 8),lVar2 + (longlong)iVar4 * 0x60);
        FUN_1468c29ce(param_1,lVar2 + (longlong)iVar4 * 0x60 + 8);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar4 = local_88._4_4_;
        uVar3 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    FUN_145ed2eb4(param_2,local_74);
    uVar3 = local_88;
    if (0 < local_74) {
      iVar4 = 0;
      do {
        FUN_1468c28e0(param_2,&local_a0);
        puVar1 = local_98 + 1;
        local_98[6] = 0;
        local_98[7] = 0;
        local_98[8] = 0;
        local_98[9] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        *local_98 = 0;
        local_98[1] = 0;
        local_98[10] = 0;
        *(undefined8 *)((longlong)local_98 + 0x34) = 0xffffffff00000080;
        *(undefined4 *)(local_98 + 0xb) = 0xffffffff;
        (**(code **)(**(longlong **)(*param_1 + 8) + 0x120))();
        FUN_1468c29ce(param_1,puVar1);
        iVar4 = iVar4 + 1;
        uVar3 = local_88;
      } while (iVar4 < local_74);
    }
  }
  local_88 = uVar3;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c28e0 FUN_1468c28e0 body=238 status=ok
// SIG undefined FUN_1468c28e0(void)

int * FUN_1468c28e0(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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



// FUNCTION 1468c29ce FUN_1468c29ce body=142 status=ok
// SIG undefined FUN_1468c29ce(void)

void FUN_1468c29ce(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  FUN_1468c2a5c();
  bVar1 = *(byte *)(*(longlong *)(*param_1 + 8) + 0x28);
  if (((bVar1 & 1) != 0) ||
     (((bVar1 & 4) == 0 && ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((0 < (int)uVar3) && (0 < iVar5)) {
      *(int *)(param_2 + 0x48) = iVar5;
      FUN_1406e2aa2(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1468c2a5c FUN_1468c2a5c body=455 status=ok
// SIG undefined FUN_1468c2a5c(void)

void FUN_1468c2a5c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  FUN_1449b19ea(*param_1);
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) == 0) {
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar3 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar4 = local_78._4_4_;
      local_78 = uVar3;
      do {
        lVar2 = *local_90;
        (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))
                  (*(longlong **)(*param_1 + 8),lVar2 + (longlong)iVar4 * 0x20);
        FUN_14021219d(*(undefined8 *)(*param_1 + 8),lVar2 + (longlong)iVar4 * 0x20 + 8);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    FUN_140bb2a52(param_2,local_64);
    uVar3 = local_78;
    if (0 < local_64) {
      iVar4 = 0;
      do {
        FUN_1406e28c6(param_2,&local_90);
        puVar1 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))();
        FUN_14021219d(*(undefined8 *)(*param_1 + 8),puVar1);
        iVar4 = iVar4 + 1;
        uVar3 = local_78;
      } while (iVar4 < local_64);
    }
  }
  local_78 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c2c24 FUN_1468c2c24 body=132 status=ok
// SIG undefined FUN_1468c2c24(void)

void FUN_1468c2c24(longlong param_1,int param_2)

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



// FUNCTION 1468c2caa FUN_1468c2caa body=182 status=ok
// SIG undefined FUN_1468c2caa(void)

void FUN_1468c2caa(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xd40);
  if (param_1 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xd44) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd44)
         = iVar6;
    FUN_1468c2d62(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468c2d62 FUN_1468c2d62 body=232 status=ok
// SIG undefined FUN_1468c2d62(void)

void FUN_1468c2d62(int param_1,uint param_2)

{
  void *_Src;
  longlong lVar1;
  
  _Src = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xd38);
  if (param_2 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    memmove((void *)(lVar1 + 0xd28),_Src,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else {
    if (_Src == (void *)0x0) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      FUN_1446efa72(lVar1 + 0xd38,0,param_2,8);
      memmove(*(void **)(lVar1 + 0xd38),(void *)(lVar1 + 0xd28),(longlong)param_1 << 3);
      return;
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  }
  FUN_1446efa72(lVar1 + 0xd38,param_1,param_2,8);
  return;
}



// FUNCTION 1468c2e4a FUN_1468c2e4a body=95 status=ok
// SIG undefined FUN_1468c2e4a(void)

void FUN_1468c2e4a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1468c2eaa FUN_1468c2eaa body=132 status=ok
// SIG undefined FUN_1468c2eaa(void)

void FUN_1468c2eaa(longlong param_1,int param_2)

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



// FUNCTION 1468c2f2f FUN_1468c2f2f body=43 status=ok
// SIG undefined FUN_1468c2f2f(void)

void FUN_1468c2f2f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1468c2f5a FUN_1468c2f5a body=147 status=ok
// SIG undefined FUN_1468c2f5a(void)

void FUN_1468c2f5a(longlong param_1,int param_2)

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



// FUNCTION 1468c2fee FUN_1468c2fee body=31 status=ok
// SIG undefined FUN_1468c2fee(void)

undefined8 FUN_1468c2fee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c3030 FUN_1468c3030 body=93 status=ok
// SIG undefined FUN_1468c3030(void)

void FUN_1468c3030(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e8f350;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e8f2e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468c308e FUN_1468c308e body=126 status=ok
// SIG undefined FUN_1468c308e(void)

void FUN_1468c308e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e8f350;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e8f2e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468c30fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468c3116 FUN_1468c3116 body=20 status=ok
// SIG undefined FUN_1468c3116(void)

undefined8 FUN_1468c3116(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1468c312c FUN_1468c312c body=31 status=ok
// SIG undefined FUN_1468c312c(void)

undefined8 FUN_1468c312c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c3162 FUN_1468c3162 body=93 status=ok
// SIG undefined FUN_1468c3162(void)

void FUN_1468c3162(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e8f3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468c31c0 FUN_1468c31c0 body=93 status=ok
// SIG undefined FUN_1468c31c0(void)

void FUN_1468c31c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e1c150;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e8f3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468c321e FUN_1468c321e body=126 status=ok
// SIG undefined FUN_1468c321e(void)

void FUN_1468c321e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e1c150;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e8f3c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468c328d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468c32a6 FUN_1468c32a6 body=55 status=ok
// SIG undefined FUN_1468c32a6(void)

void FUN_1468c32a6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if ((3 < (int)plVar1[-1]) && (*plVar1 != 0)) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468c32e2 FUN_1468c32e2 body=102 status=ok
// SIG undefined FUN_1468c32e2(void)

undefined8 * FUN_1468c32e2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14c951640;
  uVar2 = FUN_140007dea();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  *puVar3 = &PTR_FUN_149e8f7e0;
  FUN_14680ea3d(L"UObject(FVTableHelper& Helper)");
  *puVar3 = &PTR_FUN_149e8f430;
  return puVar3;
}



// FUNCTION 1468c3348 FUN_1468c3348 body=62 status=ok
// SIG undefined FUN_1468c3348(void)

void FUN_1468c3348(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468c3386(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1468c3386 FUN_1468c3386 body=112 status=ok
// SIG undefined FUN_1468c3386(void)

ulonglong FUN_1468c3386(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1468c33c0;
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
LAB_1468c33c0:
  return param_2 & 0xffffffff;
}



// FUNCTION 1468c33f6 FUN_1468c33f6 body=331 status=ok
// SIG undefined FUN_1468c33f6(void)

int FUN_1468c33f6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = (**(code **)(*param_1 + 0x18))();
  plVar1 = param_1 + 0x24;
  plVar2 = param_1 + 0x26;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  iVar6 = 0;
  local_58 = plVar2;
  if ((int)param_1[0x29] != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = (int)param_1[0x29];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != plVar2)) {
    iVar5 = 0;
    do {
      plVar3 = *(longlong **)(*local_88 + (longlong)iStack_6c * 0x10);
      if (*plVar3 == lVar4) {
        *plVar3 = param_2;
        iVar5 = iVar5 + 1;
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != plVar2 || iStack_6c != iVar6));
  }
  FUN_1468c3542(plVar1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c3542 FUN_1468c3542 body=63 status=ok
// SIG undefined FUN_1468c3542(void)

void FUN_1468c3542(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cacfb0(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146896312(param_1);
    return;
  }
  FUN_1468c3582(param_1);
  FUN_145cacfb0(param_1);
  return;
}



// FUNCTION 1468c3582 FUN_1468c3582 body=322 status=ok
// SIG undefined FUN_1468c3582(void)

void FUN_1468c3582(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1468c36c6 FUN_1468c36c6 body=261 status=ok
// SIG undefined FUN_1468c36c6(void)

ulonglong FUN_1468c36c6(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  
  lVar5 = *(longlong *)(param_1 + 0x78);
  if (param_2 == (longlong *)0x0) {
    bVar2 = true;
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x40);
      if (*(longlong *)(lVar5 + 0x40) == 0) {
        lVar6 = lVar5;
      }
      param_2 = *(longlong **)(lVar6 + (longlong)(*(int *)(lVar5 + 0x48) + -1) * 8);
      if (param_2 != (longlong *)0x0) goto LAB_1468c36ec;
    }
    param_2 = (longlong *)0x0;
  }
  else {
LAB_1468c36ec:
    bVar2 = false;
    unaff_RBP = 0;
    if ((*(byte *)((longlong)param_2 + 0x3f) & 8) != 0) goto LAB_1468c3726;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar5 + 0xd58) != 0) {
    uVar4 = FUN_1468c37cc();
    unaff_RBP = (ulonglong)uVar4;
    if ((char)uVar4 != '\0') goto LAB_1468c3726;
  }
  if ((bVar2) ||
     ((unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),2),
      (*(byte *)((longlong)param_2 + 0x3f) & 4) == 0 &&
      ((((plVar1 = *(longlong **)(lVar5 + 0xd58), plVar1 == (longlong *)0x0 ||
         ((*(uint *)(*plVar1 + 8) & 0x10) == 0)) ||
        (lVar5 = FUN_14496b3f0(param_2), lVar5 != *(longlong *)(*plVar1 + 0x10))) ||
       (cVar3 = (**(code **)(*param_2 + 200))
                          (param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x34)), cVar3 != '\0'))
      )))) {
    unaff_RBP = 0;
  }
LAB_1468c3726:
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1468c37cc FUN_1468c37cc body=355 status=ok
// SIG undefined FUN_1468c37cc(void)

undefined8 FUN_1468c37cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  lVar5 = DAT_14c947cf8;
  uVar3 = DAT_14c947cf0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c947cf8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14c947cf8);
  }
  local_a0 = uVar3;
  local_98 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  local_90 = 0;
  lVar5 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar1 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar4 = (uint)uVar3 & 0xffff;
  iVar2 = FUN_1468cbb00((longlong *)(param_1 + 8),
                        ((uint)uVar3 << 0x10 | uVar4) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4));
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 8);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_14685f3c6(&local_88);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1468c44d6(param_1,lVar5,param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c3930 FUN_1468c3930 body=333 status=ok
// SIG undefined FUN_1468c3930(void)

undefined8 * FUN_1468c3930(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_338 [36];
  undefined1 local_314 [4];
  undefined8 local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  char local_2f0;
  undefined1 local_2e8 [512];
  undefined1 local_e8 [120];
  longlong local_70;
  undefined8 local_68;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_338;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    local_70 = 0;
    local_68 = 0xa00000000;
    local_38 = 0;
    local_30 = 0xa00000000;
    local_28 = 0xffffffff;
    FUN_14171b354(local_e8,local_314);
    local_308 = local_2e8;
    local_2f0 = '\0';
    local_2f8 = local_e8;
    local_310 = *(undefined8 *)(param_2 + 0x20);
    local_300 = local_308;
    FUN_14005eb5c(&local_310,&local_308);
    FUN_1468c3a7e(&local_308,&DAT_149e9807e);
    FUN_1468ec39a(&local_308,local_314);
    FUN_1446f82e2(&local_310,(ulonglong)((longlong)local_300 - (longlong)local_308) >> 1,local_308,1
                 );
    *param_1 = local_310;
    if (local_2f0 == '\x01') {
      FUN_1400020a8(local_308);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c3a7e FUN_1468c3a7e body=114 status=ok
// SIG undefined FUN_1468c3a7e(void)

longlong FUN_1468c3a7e(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 1468c3af0 FUN_1468c3af0 body=310 status=ok
// SIG undefined FUN_1468c3af0(void)

undefined8 * FUN_1468c3af0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
LAB_1468c3b9a:
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_60 = 0;
    (**(code **)(*param_2 + 0xf0))(param_2,&local_58,param_3,0);
    *param_1 = 0;
    param_1[1] = 0;
    iVar3 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(param_1,iVar3,local_58,1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = param_2[1];
    lVar1 = FUN_1446f4b16();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar4 = lVar2 != 0;
      if (lVar2 != lVar1 && bVar4) {
        do {
          lVar2 = *(longlong *)(lVar2 + 0x30);
          bVar4 = lVar2 != 0;
          if (lVar2 == lVar1) break;
        } while (lVar2 != 0);
      }
      if (!bVar4) goto LAB_1468c3b9a;
    }
    else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1468c3b9a;
    lVar2 = (**(code **)(*param_2 + 0x210))(param_2,param_3);
    if (lVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    FUN_1468c3c28(param_1,lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1468c3c28 FUN_1468c3c28 body=201 status=ok
// SIG undefined FUN_1468c3c28(void)

undefined8 * FUN_1468c3c28(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = FUN_145782296(&DAT_14c9647b8,uVar1);
  FUN_140002266(&local_38,L"%d%d",uVar1,uVar2);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar3,1);
  *param_1 = local_28;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468c3cf2 FUN_1468c3cf2 body=830 status=ok
// SIG undefined FUN_1468c3cf2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1468c3cf2(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  void *pvVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 *_Dst;
  undefined2 **ppuVar14;
  undefined2 **ppuVar15;
  int iVar16;
  bool bVar17;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  void *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffc8;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) {
LAB_1468c3efa:
    ppuVar15 = &local_68;
    if ((longlong)*(int *)((longlong)param_2 + 0x24) == 0) {
      _Dst = (void *)0x0;
    }
    else {
      lVar10 = -((longlong)*(int *)((longlong)param_2 + 0x24) + 0x1eU & 0xfffffffffffffff0);
      ppuVar15 = (undefined2 **)((longlong)&local_68 + lVar10);
      _Dst = (undefined1 *)((longlong)&local_68 + lVar10);
    }
    plVar2 = (longlong *)*param_2;
    if ((*(byte *)((longlong)plVar2 + 0x39) & 2) == 0) {
      pcVar5 = *(code **)(*plVar2 + 0x160);
      *(undefined8 *)((longlong)ppuVar15 + -0x28) = 0x1468c3f33;
      (*pcVar5)(plVar2,_Dst);
    }
    else {
      iVar12 = *(int *)((longlong)plVar2 + 0x34);
      lVar10 = plVar2[6];
      *(undefined8 *)((longlong)ppuVar15 + -0x28) = 0x1468c3f4f;
      memset(_Dst,0,(longlong)(int)lVar10 * (longlong)iVar12);
    }
    *(undefined8 *)((longlong)ppuVar15 + -0x28) = 0x1468c3f66;
    FUN_1400021e4(param_1,&local_68);
    puVar13 = local_68;
    if (local_60 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    if (puVar13 != (undefined2 *)0x0) {
      plVar2 = (longlong *)*param_2;
      lVar10 = *plVar2;
      *(undefined8 *)((longlong)ppuVar15 + -0x10) = DAT_14c872be8;
      *(undefined4 *)((longlong)ppuVar15 + -0x18) = 0x8000000;
      *(undefined8 *)((longlong)ppuVar15 + -0x20) = 0;
      pcVar5 = *(code **)(lVar10 + 0xf8);
      *(undefined8 *)((longlong)ppuVar15 + -0x48) = 0x1468c3fb7;
      (*pcVar5)(plVar2,puVar13,_Dst,0);
    }
    local_48 = *param_2;
    local_58 = param_2;
    local_50 = _Dst;
    *(undefined8 *)((longlong)ppuVar15 + -0x28) = 0x1468c3fd9;
    iVar12 = FUN_1468c91de(param_2);
    param_2 = (longlong *)*param_2;
    if ((*(byte *)((longlong)param_2 + 0x3c) & 0x10) == 0) {
      pcVar5 = *(code **)(*param_2 + 0x148);
      *(undefined8 *)((longlong)ppuVar15 + -0x28) = 0x1468c3ff9;
      (*pcVar5)(param_2,_Dst);
    }
    ppuVar14 = ppuVar15;
    if (local_68 != (undefined2 *)0x0) {
      *(undefined8 *)((longlong)ppuVar15 + -0x28) = 0x1468c4013;
      FUN_1400020a8();
    }
  }
  else {
    lVar10 = plVar2[1];
    lVar8 = FUN_1446f4b16();
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar17 = lVar10 != 0;
      if (lVar10 != lVar8 && bVar17) {
        do {
          lVar10 = *(longlong *)(lVar10 + 0x30);
          bVar17 = lVar10 != 0;
          if (lVar10 == lVar8) break;
        } while (lVar10 != 0);
      }
      if (!bVar17) goto LAB_1468c3efa;
    }
    else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_1468c3efa;
    iVar1 = *(int *)(param_2[2] + 8);
    iVar16 = 0;
    iVar12 = iVar16;
    if (0 < iVar1) {
      do {
        local_58 = (longlong *)CONCAT44(local_58._4_4_,iVar16);
        cVar7 = FUN_1446ec082(param_2,&local_58);
        iVar12 = iVar16;
        if (cVar7 != '\0') break;
        iVar16 = iVar16 + 1;
        iVar12 = iVar1;
      } while (iVar1 != iVar16);
    }
    local_58 = (longlong *)CONCAT44(local_58._4_4_,iVar12);
    cVar7 = FUN_1446ec082(param_2);
    if (cVar7 != '\0') {
      do {
        puVar3 = (ulonglong *)param_2[2];
        if ((*(byte *)(param_2 + 6) & 1) == 0) {
          uVar9 = *puVar3;
        }
        else {
          uVar4 = *puVar3;
          uVar9 = ((longlong)uVar4 >> 0x18) + (longlong)puVar3;
          if ((uVar4 & 1) == 0) {
            uVar9 = uVar4;
          }
        }
        lVar10 = (**(code **)(*plVar2 + 0x210))
                           (plVar2,(longlong)iVar12 * (longlong)*(int *)((longlong)param_2 + 0x2c) +
                                   uVar9);
        if (lVar10 != 0) {
          FUN_1468c3c28(&local_58,lVar10);
          pvVar6 = local_50;
          ppuVar14 = &local_68;
          if ((longlong *)*param_1 == local_58) goto LAB_1468c3e9a;
          pvVar11 = (void *)param_1[1];
          if ((pvVar11 != (void *)0x0) && (local_50 != (void *)0x0)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(local_50);
              pvVar11 = (void *)param_1[1];
            }
            ppuVar14 = &local_68;
            if (pvVar11 == pvVar6) goto LAB_1468c3e9a;
          }
        }
        iVar1 = *(int *)(param_2[2] + 8);
        do {
          iVar12 = iVar12 + 1;
          if (iVar1 <= iVar12) break;
          local_58 = (longlong *)CONCAT44(local_58._4_4_,iVar12);
          cVar7 = FUN_1446ec082(param_2,&local_58);
        } while (cVar7 == '\0');
        local_58 = (longlong *)CONCAT44(local_58._4_4_,iVar12);
        cVar7 = FUN_1446ec082(param_2,&local_58);
      } while (cVar7 != '\0');
    }
    iVar12 = -1;
    ppuVar14 = &local_68;
  }
LAB_1468c3e9a:
  if ((local_40 ^ (ulonglong)&stack0xffffffffffffffc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)ppuVar14 + -0x28) = &UNK_1468c3ec4;
    FUN_144d8e3a0();
  }
  return iVar12;
}



// FUNCTION 1468c4036 FUN_1468c4036 body=808 status=ok
// SIG undefined FUN_1468c4036(void)

longlong FUN_1468c4036(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t sVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined2 *local_a8;
  undefined2 *puStack_a0;
  undefined2 *local_98;
  ulonglong local_90 [4];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (undefined2 *)0x0;
  puStack_a0 = (undefined2 *)0x0;
  uVar1 = *param_3;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  puVar6 = (undefined8 *)
           FUN_1468cb52c(param_2 + 0x18,
                         ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4),param_3);
  puVar2 = (undefined2 *)*puVar6;
  if (puVar2 == (undefined2 *)0x0) {
    if (*(char *)(param_2 + 0x10) == '\0') {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    local_a8 = &DAT_14c8731a0;
    local_98 = &DAT_14c8731a2;
    local_90[0] = local_90[0] & 0xffffffffffffff00;
    FUN_1400021e4(param_2,&local_b8);
    if (local_b0 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)CONCAT44(uStack_b4,local_b8);
    }
    sVar7 = 0;
    if (pwVar10 != (wchar_t *)0x0) {
      sVar7 = wcslen(pwVar10);
    }
    puStack_a0 = &DAT_14c8731a0;
    FUN_1449668a2(&local_a8,pwVar10,sVar7);
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_1400020a8();
    }
    if (local_98 <= puStack_a0 + 1) {
      FUN_140213274(&local_a8,1);
    }
    *puStack_a0 = 0x2e;
    puStack_a0 = puStack_a0 + 1;
    FUN_1400021e4(param_3,&local_b8);
    if (local_b0 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)CONCAT44(uStack_b4,local_b8);
    }
    sVar7 = 0;
    if (pwVar10 != (wchar_t *)0x0) {
      sVar7 = wcslen(pwVar10);
    }
    FUN_1449668a2(&local_a8,pwVar10,sVar7);
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_1400020a8();
    }
    *puStack_a0 = 0;
    FUN_1446f470e(&local_b8,local_a8,1);
    *puVar6 = CONCAT44(uStack_b4,local_b8);
    lVar9 = param_3[1];
    if (DAT_14c950c29 == 1) {
      if (lVar9 == 0) {
        lVar9 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar9 = param_3[1];
      }
    }
    puVar6[1] = lVar9;
    FUN_1468c4360(param_1 + 8,&local_b8,puVar6);
    lVar9 = (longlong)local_b8 * 0x70 + *(longlong *)(param_1 + 8);
    if ((char)local_90[0] == '\x01') {
      FUN_1400020a8(local_a8);
    }
  }
  else {
    puVar3 = (undefined2 *)puVar6[1];
    if ((DAT_14c950c29 == 1) && (puVar3 != (undefined2 *)0x0)) {
      FUN_1456cec3c(puVar3);
    }
    local_a8 = puVar2;
    puStack_a0 = puVar3;
    if (((DAT_14c950c29 & 1) != 0) && (puVar3 != (undefined2 *)0x0)) {
      FUN_1456cec3c(puVar3);
    }
    local_98 = (undefined2 *)((ulonglong)local_98 & 0xffffffffffffff00);
    lVar9 = 0;
    local_70 = 0;
    local_68 = 0;
    local_90[0] = 0;
    local_90[1] = 0;
    local_64 = 0xffffffff00000080;
    local_5c = 0;
    local_50 = 0;
    local_48 = 0;
    uVar4 = (uint)((ulonglong)puVar2 >> 0x10);
    uVar8 = (uint)puVar2 & 0xffff;
    iVar5 = FUN_1468cbb00((longlong *)(param_1 + 8),
                          ((uint)puVar2 << 0x10 | uVar8) + (int)((ulonglong)puVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4));
    if (iVar5 != -1) {
      lVar9 = (longlong)iVar5 * 0x70 + *(longlong *)(param_1 + 8);
    }
    local_48 = 0;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_14685f3c6(local_90);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c4360 FUN_1468c4360 body=373 status=ok
// SIG undefined FUN_1468c4360(void)

undefined4 * FUN_1468c4360(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468cbba4(param_1,local_58);
  local_48 = *param_3;
  local_40 = param_3[1];
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14685f364(local_50,&local_48);
  *(undefined4 *)(local_50 + 0xd) = 0xffffffff;
  local_48 = CONCAT44(local_48._4_4_,local_58[0]);
  uVar1 = *local_50;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1468cbc86(param_1,uVar8,local_50,&local_48);
  uVar2 = (undefined4)local_48;
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
      *(uint *)((longlong)local_50 + 0x6c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0xd) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = (undefined4)local_48;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1468cbd80(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c44d6 FUN_1468c44d6 body=790 status=ok
// SIG undefined FUN_1468c44d6(void)

ulonglong FUN_1468c44d6(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [64];
  undefined1 *local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar8 = (undefined1 *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
  if (*(char *)(param_2 + 0x10) != '\x02') {
    if (param_3 == 0) {
      local_78 = (undefined1 *)0x0;
      local_70 = 0x800000000;
      local_68 = 0;
    }
    else {
      FUN_1468c4e40(local_b8,param_3);
    }
    uVar3 = local_70;
    if (param_4 != 0) {
      puVar8 = (undefined1 *)(longlong)(int)local_70;
      uVar4 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,uVar4);
      if (local_70._4_4_ < uVar4) {
        FUN_140b4c3de(local_b8,uVar3 & 0xffffffff);
      }
      puVar6 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar6 = local_b8;
      }
      *(longlong *)(puVar6 + (longlong)puVar8 * 8) = param_4;
      iVar5 = local_68 + 1;
      do {
        local_68 = iVar5;
        iVar5 = 1;
      } while (local_68 == 0);
    }
    if ((param_2 != 0) && (0 < (int)local_70)) {
      puVar8 = local_b8;
      lVar9 = 0;
      do {
        if (*(char *)(param_2 + 0x10) == '\x02') {
          puVar8 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar8 >> 8),2);
          goto LAB_1468c47b9;
        }
        puVar6 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar6 = puVar8;
        }
        FUN_1468c3930(&local_120,*(undefined8 *)(puVar6 + lVar9 * 8));
        uVar4 = (uint)((ulonglong)local_120 >> 0x10);
        uVar7 = (uint)local_120 & 0xffff;
        iVar5 = FUN_1468cb5c0((longlong *)(param_2 + 0x18),
                              ((uint)local_120 << 0x10 | uVar7) +
                              (int)((ulonglong)local_120 >> 0x20) + (uVar4 << 0x13 | uVar4 & 0xffff)
                              + (uVar7 >> 4),&local_120);
        if (iVar5 == -1) goto LAB_1468c47b7;
        lVar1 = *(longlong *)(param_2 + 0x18);
        if ((lVar1 + (longlong)iVar5 * 0x28 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_1468c47b7;
        lVar1 = lVar1 + (longlong)iVar5 * 0x28;
        uVar2 = *(undefined8 *)(lVar1 + 0x10);
        lVar1 = *(longlong *)(lVar1 + 0x18);
        if ((DAT_14c950c29 == 1) && (lVar1 != 0)) {
          FUN_1456cec3c(lVar1);
        }
        local_120 = uVar2;
        local_118 = lVar1;
        if (((DAT_14c950c29 & 1) != 0) && (lVar1 != 0)) {
          FUN_1456cec3c(lVar1);
        }
        local_110 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        uVar4 = (uint)((ulonglong)local_120 >> 0x10);
        uVar7 = (uint)local_120 & 0xffff;
        iVar5 = FUN_1468cbb00((longlong *)(param_1 + 8),
                              ((uint)local_120 << 0x10 | uVar7) +
                              (int)((ulonglong)local_120 >> 0x20) + (uVar4 << 0x13 | uVar4 & 0xffff)
                              + (uVar7 >> 4),&local_120);
        param_2 = 0;
        if (iVar5 != -1) {
          param_2 = (longlong)iVar5 * 0x70 + *(longlong *)(param_1 + 8);
        }
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_14685f3c6(&local_108);
      } while ((param_2 != 0) && (lVar9 = lVar9 + 1, (int)lVar9 < (int)local_70));
    }
    if (param_2 == 0) {
LAB_1468c47b7:
      puVar8 = (undefined1 *)0x0;
    }
    else {
      puVar8 = (undefined1 *)
               CONCAT71((int7)((ulonglong)puVar8 >> 8),*(undefined1 *)(param_2 + 0x10));
    }
LAB_1468c47b9:
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return (ulonglong)puVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c47ee FUN_1468c47ee body=360 status=ok
// SIG undefined FUN_1468c47ee(void)

undefined8 FUN_1468c47ee(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  lVar2 = DAT_14c947cf8;
  uVar3 = DAT_14c947cf0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_3;
  if ((DAT_14c947cf8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14c947cf8);
  }
  local_b0 = uVar3;
  local_a8 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar1 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar4 = (uint)uVar3 & 0xffff;
  uVar3 = FUN_1468cbf5a(param_1 + 8,
                        ((uint)uVar3 << 0x10 | uVar4) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4),&local_b0,0);
  local_c8 = param_4;
  uVar3 = FUN_1468c4958(param_1,param_2,uVar3,local_b8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14685f3c6(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c4958 FUN_1468c4958 body=376 status=ok
// SIG undefined FUN_1468c4958(void)

longlong FUN_1468c4958(undefined8 param_1,undefined1 param_2,longlong param_3,longlong param_4,
                      longlong param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  undefined1 local_90 [64];
  undefined1 *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_3 + 0x10) == '\x02') {
    param_3 = 0;
  }
  else {
    if (param_4 == 0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0x800000000;
      local_40 = 0;
    }
    else {
      FUN_1468c4e40(local_90,param_4);
    }
    uVar1 = local_48;
    if (param_5 != 0) {
      lVar5 = (longlong)(int)local_48;
      uVar3 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar3);
      if (local_48._4_4_ < uVar3) {
        FUN_140b4c3de(local_90,uVar1 & 0xffffffff);
      }
      puVar4 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar4 = local_90;
      }
      *(longlong *)(puVar4 + lVar5 * 8) = param_5;
      iVar2 = local_40 + 1;
      do {
        local_40 = iVar2;
        iVar2 = 1;
      } while (local_40 == 0);
    }
    if (0 < (int)local_48) {
      lVar5 = 0;
      do {
        if (*(char *)(param_3 + 0x10) == '\x02') {
          param_3 = 0;
          goto LAB_1468c4aa7;
        }
        puVar4 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar4 = local_90;
        }
        FUN_1468c3930(local_a0,*(undefined8 *)(puVar4 + lVar5 * 8));
        param_3 = FUN_1468c4036(param_1,param_3,local_a0);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < (int)local_48);
    }
    *(undefined1 *)(param_3 + 0x10) = param_2;
LAB_1468c4aa7:
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c4ad2 FUN_1468c4ad2 body=336 status=ok
// SIG undefined FUN_1468c4ad2(void)

undefined8 FUN_1468c4ad2(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  lVar5 = DAT_14c947cf8;
  uVar3 = DAT_14c947cf0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c947cf8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14c947cf8);
  }
  local_98 = uVar3;
  local_90 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  local_88 = 0;
  lVar5 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  uVar1 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar4 = (uint)uVar3 & 0xffff;
  iVar2 = FUN_1468cbb00((longlong *)(param_1 + 8),
                        ((uint)uVar3 << 0x10 | uVar4) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4));
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 8);
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_14685f3c6(&local_80);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1468c4c24(param_1,lVar5,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c4c24 FUN_1468c4c24 body=538 status=ok
// SIG undefined FUN_1468c4c24(void)

longlong FUN_1468c4c24(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_3 != 0) && (0 < *(int *)(param_3 + 0x48))) {
    lVar6 = 0;
    while( true ) {
      lVar4 = *(longlong *)(param_3 + 0x40);
      if (*(longlong *)(param_3 + 0x40) == 0) {
        lVar4 = param_3;
      }
      FUN_1468c3930(&local_c8,*(undefined8 *)(lVar4 + lVar6 * 8));
      uVar2 = (uint)((ulonglong)local_c8 >> 0x10);
      uVar5 = (uint)local_c8 & 0xffff;
      iVar3 = FUN_1468cb5c0((longlong *)(param_2 + 0x18),
                            ((uint)local_c8 << 0x10 | uVar5) + (int)((ulonglong)local_c8 >> 0x20) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),&local_c8);
      if (iVar3 == -1) break;
      lVar4 = *(longlong *)(param_2 + 0x18);
      if ((lVar4 + (longlong)iVar3 * 0x28 + 0x10U & 0xffffffffffffffef) == 0) break;
      lVar4 = lVar4 + (longlong)iVar3 * 0x28;
      uVar1 = *(undefined8 *)(lVar4 + 0x10);
      lVar4 = *(longlong *)(lVar4 + 0x18);
      if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      local_c8 = uVar1;
      local_c0 = lVar4;
      if (((DAT_14c950c29 & 1) != 0) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      local_b8 = 0;
      local_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_84 = 0xffffffff00000080;
      local_7c = 0;
      local_70 = 0;
      local_68 = 0;
      uVar2 = (uint)((ulonglong)local_c8 >> 0x10);
      uVar5 = (uint)local_c8 & 0xffff;
      iVar3 = FUN_1468cbb00((longlong *)(param_1 + 8),
                            ((uint)local_c8 << 0x10 | uVar5) + (int)((ulonglong)local_c8 >> 0x20) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),&local_c8);
      param_2 = 0;
      if (iVar3 != -1) {
        param_2 = (longlong)iVar3 * 0x70 + *(longlong *)(param_1 + 8);
      }
      local_68 = 0;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      FUN_14685f3c6(&local_b0);
      if ((param_2 == 0) || (lVar6 = lVar6 + 1, *(int *)(param_3 + 0x48) <= (int)lVar6))
      goto LAB_1468c4e06;
    }
    param_2 = 0;
  }
LAB_1468c4e06:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468c4e40 FUN_1468c4e40 body=113 status=ok
// SIG undefined FUN_1468c4e40(void)

void * FUN_1468c4e40(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x48);
  _Src = *(void **)((longlong)param_2 + 0x40);
  *(int *)((longlong)param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 8;
  }
  else {
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    FUN_1468286a4(param_1,iVar1,0);
    _Dst = *(void **)((longlong)param_1 + 0x40);
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
  return param_1;
}



// FUNCTION 1468c4eb2 FUN_1468c4eb2 body=306 status=ok
// SIG undefined FUN_1468c4eb2(void)

undefined1 FUN_1468c4eb2(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_2;
  lVar6 = param_2[1];
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  local_88 = uVar1;
  local_80 = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  local_78 = 0;
  lVar6 = 0;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_1468cbb00((longlong *)(param_1 + 8),
                        ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4));
  if (iVar4 != -1) {
    lVar6 = (longlong)iVar4 * 0x70 + *(longlong *)(param_1 + 8);
  }
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_14685f3c6(&local_70);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined1 *)(lVar6 + 0x10);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c4fe6 FUN_1468c4fe6 body=117 status=ok
// SIG undefined FUN_1468c4fe6(void)

void FUN_1468c4fe6(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_4;
  local_28 = param_4[1];
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_1468c4036(param_1,param_3,&local_30);
  *(undefined1 *)(lVar1 + 0x10) = param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c505c FUN_1468c505c body=78 status=ok
// SIG undefined FUN_1468c505c(void)

longlong * FUN_1468c505c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140195631(*param_1,(int)param_1[1]);
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



// FUNCTION 1468c50aa FUN_1468c50aa body=129 status=ok
// SIG undefined FUN_1468c50aa(void)

void FUN_1468c50aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140195631(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001468c5120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468c512c FUN_1468c512c body=62 status=ok
// SIG undefined FUN_1468c512c(void)

void FUN_1468c512c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_21();
  if ((((*(byte *)(param_2 + 0x2b) & 8) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20), lVar1 != 0)) {
    FUN_1468b57b2(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1468c516a FUN_1468c516a body=125 status=ok
// SIG undefined FUN_1468c516a(void)

undefined8 FUN_1468c516a(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  code *local_30;
  undefined8 **local_28;
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_18;
  local_18 = 0;
  local_40 = &local_19;
  local_19 = 0;
  local_28 = &local_48;
  local_30 = FUN_14280d95a;
  local_58 = 0;
  local_38 = param_2;
  FUN_144a56f9f(param_1,&local_30,0,0);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c51e8 FUN_1468c51e8 body=144 status=ok
// SIG undefined FUN_1468c51e8(void)

void FUN_1468c51e8(longlong param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140ebe022();
  if (cVar1 == '\0') {
    local_18 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_38 = 0;
    FUN_1402791b4(0,puVar2,0,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c528a FUN_1468c528a body=13 status=ok
// SIG undefined FUN_1468c528a(void)

void FUN_1468c528a(void *param_1)

{
  memset(param_1,0,0x138);
  return;
}



// FUNCTION 1468c5297 FUN_1468c5297 body=290 status=ok
// SIG undefined FUN_1468c5297(void)

undefined8 FUN_1468c5297(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  int local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1412a5ca6();
  *(undefined4 *)(param_3 + 2) = local_30;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_2c;
  *(int *)(param_3 + 3) = iStack_28;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_24;
  local_40 = *(ulonglong *)(param_1 + 0x28);
  local_38 = *(int *)(param_1 + 0x30) + -1;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_38 = 0;
  }
  FUN_1412a5ca6(&local_30);
  *(undefined4 *)param_3 = local_30;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_2c;
  *(int *)(param_3 + 1) = iStack_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_24;
  if (*(int *)(param_3 + 3) == *(int *)(param_3 + 1)) {
    if (*(int *)(param_3 + 1) != 0) {
      iVar3 = FUN_144a54874(param_3[2],*param_3);
      if (iVar3 != 0) goto LAB_1468c5313;
    }
  }
  else {
LAB_1468c5313:
    lVar1 = DAT_14c951898;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar2 ^ 1);
    }
    if ((*(int *)(lVar1 + uVar4 * 4) == 1) && (0x3ef < *(int *)(param_1 + 8))) {
      local_40 = local_40 & 0xffffffffffffff00;
      local_58 = *(undefined4 *)param_3;
      uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_50 = *(undefined4 *)(param_3 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_144aa0ab0(&local_30,&local_58,&local_40,1);
      if ((iStack_28 != 0) && ((char)local_40 == '\0')) {
        param_3[4] = *param_3;
        *(int *)(param_3 + 5) = iStack_28 + 2;
        uVar5 = CONCAT71((uint7)(uint3)((uint)(iStack_28 + 2) >> 8),1);
        goto LAB_1468c5358;
      }
    }
  }
  uVar5 = 0;
LAB_1468c5358:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c53ba FUN_1468c53ba body=1219 status=ok
// SIG undefined FUN_1468c53ba(void)

undefined8 FUN_1468c53ba(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  code **ppcVar19;
  longlong lVar20;
  undefined1 auStack_3e8 [44];
  uint local_3bc;
  longlong *local_3b8;
  undefined1 *local_3b0;
  int local_3a8;
  code **local_3a0;
  undefined2 *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  code *local_388;
  code ***local_380;
  code *local_378;
  undefined1 **local_370;
  code **local_278;
  undefined8 local_270;
  undefined1 local_268 [256];
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  iVar8 = (int)param_1[5];
  iVar2 = (int)param_2[1];
  iVar7 = iVar2;
  if (iVar8 < iVar2) {
    iVar7 = iVar8;
  }
  uVar12 = 0;
  iVar18 = 0;
  if (0 < iVar7) {
    iVar18 = iVar7;
  }
  if (iVar8 == iVar18) {
    lVar16 = *param_2;
    if ((iVar7 < 1 || iVar8 == 0) || (iVar7 = FUN_144a54874(param_1[4],lVar16,iVar8), iVar7 == 0)) {
      local_58 = (undefined1 *)0x0;
      iStack_390 = iVar2 - iVar8;
      if (iVar2 <= iVar2 - iVar8) {
        iStack_390 = iVar2;
      }
      local_50 = 0x1000000000;
      if (iStack_390 < 1) {
        iStack_390 = 0;
      }
      local_398 = (undefined2 *)((lVar16 + (longlong)iVar2 * 2) - (ulonglong)(uint)(iStack_390 * 2))
      ;
      local_168 = (undefined1 *)0x0;
      local_160 = 0x1000000000;
      local_370 = &local_3b0;
      local_378 = FUN_142788b08;
      local_388 = (code *)&DAT_149e065c6;
      local_380 = (code ***)CONCAT44(local_380._4_4_,1);
      local_3b0 = local_268;
      FUN_1403deae6(&local_398,&local_388,&local_378,2);
      iVar8 = (int)param_1[1];
      local_3a8 = iVar8 - (int)param_1[5];
      if (iVar8 <= local_3a8) {
        local_3a8 = iVar8;
      }
      if (local_3a8 < 1) {
        local_3a8 = 0;
      }
      local_3b0 = (undefined1 *)
                  (((longlong)iVar8 * 2 + *param_1) - (ulonglong)(uint)(local_3a8 * 2));
      local_278 = (code **)0x0;
      local_270 = 0x1000000000;
      local_380 = &local_3a0;
      local_388 = FUN_142788b08;
      local_398 = &DAT_149e065c6;
      iStack_390 = 1;
      local_3a0 = &local_378;
      FUN_1403deae6(&local_3b0,&local_398,&local_388,2);
      uVar9 = (uint)local_160;
      local_3bc = (uint)local_270;
      uVar14 = 0;
      local_3b8 = param_1;
      if (0 < (int)(uint)local_270 && 0 < (int)(uint)local_160) {
        ppcVar19 = &local_378;
        if (local_278 != (code **)0x0) {
          ppcVar19 = local_278;
        }
        puVar11 = local_168;
        if (local_168 == (undefined1 *)0x0) {
          puVar11 = local_268;
        }
        uVar13 = (uint)local_270;
        if ((uint)local_160 < (uint)local_270) {
          uVar13 = (uint)local_160;
        }
        lVar16 = 8;
        uVar15 = 0;
        do {
          uVar14 = uVar15;
          if ((*(int *)(puVar11 + lVar16) != *(int *)((longlong)ppcVar19 + lVar16)) ||
             ((*(int *)((longlong)ppcVar19 + lVar16) != 0 &&
              (iVar8 = FUN_144a54874(*(undefined8 *)(puVar11 + lVar16 + -8),
                                     *(undefined8 *)((longlong)ppcVar19 + lVar16 + -8)), iVar8 != 0)
              ))) break;
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 0x10;
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 != uVar15);
      }
      iVar8 = (int)uVar14;
      uVar13 = uVar9 - iVar8;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar13);
      }
      if (0x10 < uVar13) {
        FUN_1468cc4ea(local_158);
        uVar9 = (uint)local_160;
      }
      if (iVar8 < (int)uVar9) {
        lVar16 = (uVar14 & 0xffffffff) << 4;
        uVar14 = uVar14 & 0xffffffff;
        do {
          uVar15 = local_50;
          puVar11 = local_168;
          if (local_168 == (undefined1 *)0x0) {
            puVar11 = local_268;
          }
          lVar20 = (longlong)(int)local_50;
          uVar9 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar9);
          if (local_50._4_4_ < uVar9) {
            FUN_14681c37c(local_158,uVar15 & 0xffffffff);
          }
          puVar17 = (undefined4 *)(puVar11 + lVar16);
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_158;
          }
          uVar3 = puVar17[1];
          uVar4 = puVar17[2];
          uVar5 = puVar17[3];
          puVar1 = (undefined4 *)(puVar11 + lVar20 * 0x10);
          *puVar1 = *puVar17;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          uVar9 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar9;
          lVar16 = lVar16 + 0x10;
        } while ((int)uVar9 < (int)(uint)local_160);
      }
      if (local_278 != (code **)0x0) {
        FUN_1400020a8();
      }
      plVar6 = local_3b8;
      iVar8 = local_3bc - iVar8;
      if (local_168 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_168 = (undefined1 *)0x0;
      local_160 = 0x1000000000;
      local_398 = (undefined2 *)plVar6[2];
      iStack_390 = (int)plVar6[3];
      uStack_38c = *(undefined4 *)((longlong)plVar6 + 0x1c);
      local_370 = &local_3b0;
      local_378 = FUN_142788b08;
      local_388 = (code *)&DAT_149e065c6;
      local_380 = (code ***)CONCAT44(local_380._4_4_,1);
      local_3b0 = local_268;
      FUN_1403deae6(&local_398,&local_388,&local_378,2);
      param_3[1] = *param_3;
      if (iVar8 < (int)(uint)local_160) {
        lVar16 = 8;
        lVar20 = 0;
        do {
          puVar10 = (undefined2 *)param_3[1];
          if ((undefined2 *)param_3[2] <= puVar10 + 1) {
            FUN_140213274(param_3,1);
            puVar10 = (undefined2 *)param_3[1];
          }
          param_3[1] = puVar10 + 1;
          *puVar10 = 0x2f;
          puVar11 = local_168;
          if (local_168 == (undefined1 *)0x0) {
            puVar11 = local_268;
          }
          FUN_1449668a2(param_3,*(undefined8 *)(puVar11 + lVar16 + -8),
                        *(undefined4 *)(puVar11 + lVar16));
          lVar20 = lVar20 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar20 < (longlong)(int)(uint)local_160 - (longlong)iVar8);
        if (0 < (int)local_50) {
          lVar20 = 8;
          lVar16 = 0;
          do {
            puVar10 = (undefined2 *)param_3[1];
            if ((undefined2 *)param_3[2] <= puVar10 + 1) {
              FUN_140213274(param_3,1);
              puVar10 = (undefined2 *)param_3[1];
            }
            param_3[1] = puVar10 + 1;
            *puVar10 = 0x2f;
            puVar11 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar11 = local_158;
            }
            FUN_1449668a2(param_3,*(undefined8 *)(puVar11 + lVar20 + -8),
                          *(undefined4 *)(puVar11 + lVar20));
            lVar16 = lVar16 + 1;
            lVar20 = lVar20 + 0x10;
          } while (lVar16 < (int)local_50);
        }
      }
      if (local_168 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1468c5880 FUN_1468c5880 body=179 status=ok
// SIG undefined FUN_1468c5880(void)

void FUN_1468c5880(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar5 == (longlong *)0x0) goto LAB_1468c58b0;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_1468c58dc:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1468c58b0;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x18);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x18) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1468c58b0;
      goto LAB_1468c58dc;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1468c58b0;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1468c58b0:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001468c592f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468c5934 FUN_1468c5934 body=59 status=ok
// SIG undefined FUN_1468c5934(void)

void FUN_1468c5934(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1468ca37c(param_1 + 0x60);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1468c5970 FUN_1468c5970 body=244 status=ok
// SIG undefined FUN_1468c5970(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1468c5970(LPCRITICAL_SECTION param_1,undefined8 param_2,longlong *param_3,
                  undefined8 *param_4)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _RTL_CRITICAL_SECTION *p_Var2;
  code *pcVar3;
  _LIST_ENTRY *p_Var4;
  undefined8 uVar5;
  _LIST_ENTRY *p_Var6;
  longlong *plVar7;
  _RTL_CRITICAL_SECTION **pp_Var8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  EnterCriticalSection(param_1);
  local_40 = &local_48;
  FUN_1468ca3cc(param_1 + 1,&local_34);
  p_Var1 = param_1[1].DebugInfo;
  pp_Var8 = &p_Var1->CriticalSection + (longlong)local_34 * 4;
  if (pp_Var8 != (_RTL_CRITICAL_SECTION **)param_3) {
    p_Var2 = *pp_Var8;
    *pp_Var8 = (_RTL_CRITICAL_SECTION *)*param_3;
    *param_3 = 0;
    if (p_Var2 != (_RTL_CRITICAL_SECTION *)0x0) {
      (**(code **)p_Var2->DebugInfo)(p_Var2,1);
    }
  }
  p_Var2 = *pp_Var8;
  pcVar3 = (code *)*param_4;
  plVar7 = param_4 + 4;
  if ((longlong *)param_4[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_4[2];
  }
  uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
  p_Var6 = (_LIST_ENTRY *)(*pcVar3)(uVar5,p_Var2);
  p_Var4 = (&p_Var1->ProcessLocksList)[(longlong)local_34 * 2].Flink;
  if ((p_Var4 != p_Var6) &&
     ((&p_Var1->ProcessLocksList)[(longlong)local_34 * 2].Flink = p_Var6,
     p_Var4 != (_LIST_ENTRY *)0x0)) {
    (*(code *)p_Var4->Flink->Flink)(p_Var4,1);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c5a70 FUN_1468c5a70 body=217 status=ok
// SIG undefined FUN_1468c5a70(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1468c5a70(LPCRITICAL_SECTION param_1,ulonglong param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  uint uVar3;
  HANDLE *ppvVar4;
  int iVar5;
  longlong lVar6;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    ppvVar4 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar4 = param_1[2].LockSemaphore;
    }
    iVar5 = *(int *)((longlong)ppvVar4 +
                    (ulonglong)((int)param_1[2].SpinCount - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      p_Var1 = param_1[1].DebugInfo;
      do {
        lVar6 = (longlong)iVar5;
        if (*(ulonglong *)(&p_Var1->Type + lVar6 * 0x10) == param_2) {
          if ((((ulonglong)(&p_Var1->CriticalSection + lVar6 * 4) & 0xfffffffffffffff7) != 0) &&
             (p_Var2 = (&p_Var1->ProcessLocksList)[lVar6 * 2].Flink,
             *(char *)((longlong)&p_Var2[5].Flink + 3) == '\0')) {
            *(undefined1 *)((longlong)&p_Var2[5].Flink + 3) = 1;
            *(undefined1 *)&p_Var2[5].Flink = 1;
            if (*(char *)((longlong)&p_Var2[5].Flink + 1) == '\0') {
              (*(code *)p_Var2->Flink[1].Blink)();
            }
          }
          break;
        }
        iVar5 = *(int *)&(&p_Var1->ProcessLocksList)[lVar6 * 2].Blink;
      } while (iVar5 != -1);
    }
  }
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468c5a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1468c5b4a FUN_1468c5b4a body=249 status=ok
// SIG undefined FUN_1468c5b4a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1468c5b4a(LPCRITICAL_SECTION param_1,ulonglong param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  uint uVar2;
  HANDLE *ppvVar3;
  int iVar4;
  _LIST_ENTRY *p_Var6;
  longlong lVar5;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    ppvVar3 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar3 = param_1[2].LockSemaphore;
    }
    iVar4 = *(int *)((longlong)ppvVar3 +
                    (ulonglong)((int)param_1[2].SpinCount - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      p_Var1 = param_1[1].DebugInfo;
      do {
        lVar5 = (longlong)iVar4;
        if (*(ulonglong *)(&p_Var1->Type + lVar5 * 0x10) == param_2) {
          if (((ulonglong)(&p_Var1->CriticalSection + lVar5 * 4) & 0xfffffffffffffff7) != 0) {
            p_Var6 = (&p_Var1->ProcessLocksList)[lVar5 * 2].Flink;
            if (*(char *)((longlong)&p_Var6[5].Flink + 1) == '\0') {
              (*(code *)p_Var6->Flink[1].Flink)(p_Var6,0);
              p_Var6 = (&p_Var1->ProcessLocksList)[lVar5 * 2].Flink;
            }
            if (p_Var6 != (_LIST_ENTRY *)0x0) {
              (&p_Var1->ProcessLocksList)[lVar5 * 2].Flink = (_LIST_ENTRY *)0x0;
              (*(code *)p_Var6->Flink->Flink)(p_Var6,1);
            }
            FUN_1468ca900(param_1 + 1,param_2);
          }
          break;
        }
        iVar4 = *(int *)&(&p_Var1->ProcessLocksList)[lVar5 * 2].Blink;
      } while (iVar4 != -1);
    }
  }
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468c5b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1468c5c44 FUN_1468c5c44 body=327 status=ok
// SIG undefined FUN_1468c5c44(void)

undefined4 *
FUN_1468c5c44(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_11e [254];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = 0;
  local_130 = 0;
  if (*(char *)((longlong)param_3 + 0xb) == '\r') {
    cVar1 = FUN_1407f0566(*param_3,&local_130);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                         (*(longlong **)(param_1 + 8),&local_130,0,0);
      if (plVar2 == (longlong *)0x0) {
        *param_2 = 8;
        *(undefined2 *)(param_2 + 1) = 0;
        memcpy((void *)((longlong)param_2 + 6),local_11e,0xfe);
      }
      else {
        lVar3 = (**(code **)(*plVar2 + 8))(plVar2,*param_4,param_4[1],0);
        if (lVar3 == 0) {
          *param_2 = 8;
          *(undefined2 *)(param_2 + 1) = 0;
          memcpy((void *)((longlong)param_2 + 6),local_11e,0xfe);
          (**(code **)*plVar2)(plVar2,1);
        }
        else {
          *param_2 = DAT_14c845dc8;
          memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
          *(longlong **)(param_2 + 0x42) = plVar2;
          *(longlong *)(param_2 + 0x44) = lVar3;
        }
      }
      goto LAB_1468c5d0d;
    }
  }
  *param_2 = 8;
  *(undefined2 *)(param_2 + 1) = 0;
LAB_1468c5d0d:
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c5d8c FUN_1468c5d8c body=311 status=ok
// SIG undefined FUN_1468c5d8c(void)

void FUN_1468c5d8c(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
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
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = *param_6;
  uStack_40 = param_6[1];
  local_80 = &local_48;
  local_58 = *param_5;
  uStack_50 = param_5[1];
  local_88 = &local_58;
  local_68 = *param_4;
  uStack_60 = param_4[1];
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  (**(code **)(*param_1 + 0x60))(local_78,&local_38);
  if ((int)uStack_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_30 & 0xffffffff);
  }
  if (*(int *)((longlong)param_2 + 0xc) < (int)uStack_30) {
    FUN_146874d6e(param_2);
  }
  if ((int)uStack_30 != 0) {
    lVar3 = (longlong)(int)uStack_30 << 4;
    lVar2 = local_38;
    do {
      if (*(char *)(lVar2 + 0xc) == '\0') {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1468cc544(param_2,iVar1);
        }
        FUN_1427b945c((longlong)iVar1 * 0xc + *param_2,lVar2);
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c5ec6 FUN_1468c5ec6 body=90 status=ok
// SIG undefined FUN_1468c5ec6(void)

void FUN_1468c5ec6(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = &local_20;
  local_18 = &LAB_14280dd6e;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_20 = param_3;
  (**(code **)(*param_1 + 0x70))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c5f22 FUN_1468c5f22 body=644 status=ok
// SIG undefined FUN_1468c5f22(void)

longlong FUN_1468c5f22(undefined8 param_1,undefined8 *param_2,ulonglong param_3,char param_4,
                      undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  wchar_t *_Str;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined1 auStack_2a8 [39];
  char local_281;
  undefined8 *local_280;
  wchar_t *local_278;
  int local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  uVar8 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  plVar5 = (longlong *)FUN_14054d1d4();
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_260 = local_268;
  FUN_14065c5ae(param_2,&local_278);
  iVar2 = local_270 + -1;
  if (local_270 == 0) {
    iVar2 = 0;
  }
  FUN_1449668a2(&local_268,local_278,iVar2);
  if (local_278 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar10 = (longlong)local_260 - (longlong)local_268;
  if ((int)(uVar10 >> 1) == 0) goto LAB_1468c60dd;
  if ((char)uVar8 != '\0') {
    FUN_140002266(&local_278,L".%03hhu",param_3 & 0xff);
    iVar2 = local_270 + -1;
    if (local_270 == 0) {
      iVar2 = 0;
    }
    FUN_1449668a2(&local_268,local_278,iVar2);
    if (local_278 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = (longlong)local_260 - (longlong)local_268;
  }
  lVar7 = 2;
  puVar11 = &DAT_14c75ec19;
  if (param_4 == '\0') {
    bVar4 = *(byte *)(param_2 + 1);
    if (bVar4 != 0) goto LAB_1468c6190;
  }
  else {
    switch(param_4) {
    case '\x01':
      bVar4 = 7;
      break;
    case '\x02':
      bVar4 = 8;
      break;
    case '\x03':
      bVar4 = 9;
      break;
    case '\x04':
      bVar4 = 10;
      break;
    case '\x05':
      bVar4 = 0xb;
      break;
    default:
      goto switchD_1468c617c_default;
    }
LAB_1468c6190:
    puVar11 = &DAT_14c75ec18 + bVar4;
    lVar7 = 1;
  }
switchD_1468c617c_default:
  lVar9 = 0;
  local_281 = param_4;
  local_280 = param_2;
  do {
    cVar1 = puVar11[lVar9];
    uVar8 = CONCAT71((int7)(uVar8 >> 8),cVar1);
    local_260 = local_260 +
                -(longlong)
                 ((int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1) -
                 (int)(uVar10 >> 1));
    if (cVar1 == '\x05') {
      FUN_1468751e0(local_280,&local_278,0);
      _Str = local_278;
    }
    else {
      _Str = (wchar_t *)FUN_1415380f8(uVar8);
      wcslen(_Str);
    }
    FUN_1449668a2(&local_268,_Str);
    *local_260 = 0;
    lVar6 = (**(code **)(*plVar5 + 0x108))(plVar5,local_268);
    if (lVar6 != -1) {
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = *local_280;
        *(undefined1 *)(param_5 + 1) = *(undefined1 *)(local_280 + 1);
        if ((local_281 == '\0') && (cVar3 = FUN_1427b976e(), cVar3 == '\0')) {
          *(char *)(param_5 + 1) = cVar1;
        }
      }
      goto LAB_1468c60e4;
    }
    lVar9 = lVar9 + 1;
  } while (lVar7 != lVar9);
LAB_1468c60dd:
  lVar6 = -1;
LAB_1468c60e4:
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1468c61a8 FUN_1468c61a8 body=698 status=ok
// SIG undefined FUN_1468c61a8(void)

longlong *
FUN_1468c61a8(undefined8 param_1,longlong *param_2,undefined8 *param_3,char param_4,char param_5,
             undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  wchar_t *_Str;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  wchar_t **ppwVar9;
  ulonglong uVar10;
  undefined1 auStack_2b8 [40];
  longlong *local_290;
  undefined8 *local_288;
  longlong *local_280;
  wchar_t *local_278;
  int local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0x100;
  local_280 = (longlong *)FUN_14054d1d4();
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_260 = local_268;
  FUN_14065c5ae(param_3,&local_278);
  iVar2 = local_270 + -1;
  if (local_270 == 0) {
    iVar2 = 0;
  }
  FUN_1449668a2(&local_268,local_278,iVar2);
  if (local_278 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar10 = (longlong)local_260 - (longlong)local_268;
  if ((int)(uVar10 >> 1) == 0) goto LAB_1468c6394;
  if (param_4 != '\0') {
    FUN_140002266(&local_278,L".%03hhu",param_4);
    iVar2 = local_270 + -1;
    if (local_270 == 0) {
      iVar2 = 0;
    }
    FUN_1449668a2(&local_268,local_278,iVar2);
    if (local_278 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = (longlong)local_260 - (longlong)local_268;
  }
  ppwVar9 = &local_278;
  lVar8 = 2;
  puVar7 = &DAT_14c75ec19;
  if (param_5 == '\0') {
    bVar4 = *(byte *)(param_3 + 1);
    if (bVar4 != 0) goto LAB_1468c644c;
  }
  else {
    switch(param_5) {
    case '\x01':
      bVar4 = 7;
      break;
    case '\x02':
      bVar4 = 8;
      break;
    case '\x03':
      bVar4 = 9;
      break;
    case '\x04':
      bVar4 = 10;
      break;
    case '\x05':
      bVar4 = 0xb;
      break;
    default:
      goto switchD_1468c6438_default;
    }
LAB_1468c644c:
    puVar7 = &DAT_14c75ec18 + bVar4;
    lVar8 = 1;
  }
switchD_1468c6438_default:
  lVar6 = 0;
  local_290 = param_2;
  local_288 = param_3;
  do {
    cVar1 = puVar7[lVar6];
    ppwVar9 = (wchar_t **)CONCAT71((int7)((ulonglong)ppwVar9 >> 8),cVar1);
    local_260 = local_260 +
                -(longlong)
                 ((int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1) -
                 (int)(uVar10 >> 1));
    if (cVar1 == '\x05') {
      FUN_1468751e0(local_288,&local_278,0);
      _Str = local_278;
    }
    else {
      _Str = (wchar_t *)FUN_1415380f8((ulonglong)ppwVar9 & 0xffffffff);
      wcslen(_Str);
    }
    FUN_1449668a2(&local_268,_Str);
    *local_260 = 0;
    if ((1 < (byte)(cVar1 - 3U)) &&
       (lVar5 = (**(code **)(*local_280 + 0x18))(local_280,local_268), param_2 = local_290,
       lVar5 != 0)) {
      *local_290 = lVar5;
      *(undefined1 *)(local_290 + 1) = 0;
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = *local_288;
        *(undefined1 *)(param_6 + 1) = *(undefined1 *)(local_288 + 1);
        if ((param_5 == '\0') && (cVar3 = FUN_1427b976e(), cVar3 == '\0')) {
          *(char *)(param_6 + 1) = cVar1;
        }
      }
      goto LAB_1468c6394;
    }
    lVar6 = lVar6 + 1;
  } while (lVar8 != lVar6);
  *local_290 = 0;
  param_2 = local_290;
LAB_1468c6394:
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468c6464 FUN_1468c6464 body=695 status=ok
// SIG undefined FUN_1468c6464(void)

longlong *
FUN_1468c6464(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,char param_5)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  wchar_t *_Str;
  size_t sVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  wchar_t **local_268;
  wchar_t *local_260;
  uint local_258;
  undefined2 *local_250;
  undefined2 *local_248;
  ulonglong *local_240;
  char local_238;
  undefined2 local_230 [256];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0x100;
  if (param_5 == '\0') {
    bVar3 = *(byte *)(param_3 + 8);
    if (bVar3 != 0) goto LAB_1468c670a;
switchD_1468c66f6_default:
    local_268 = &local_260;
    local_258 = local_258 & 0xffffff00;
    local_260 = (wchar_t *)0x0;
    cVar2 = FUN_14065c1d4(param_1,param_3,param_4,param_5);
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      local_250 = (undefined2 *)0x0;
      local_248 = (undefined2 *)((ulonglong)local_248 & 0xffffffff00000000);
      uVar4 = FUN_1468751b0(&local_260,param_5);
    }
  }
  else {
    switch(param_5) {
    case '\x01':
      bVar3 = 7;
      break;
    case '\x02':
      bVar3 = 8;
      break;
    case '\x03':
      bVar3 = 9;
      break;
    case '\x04':
      bVar3 = 10;
      break;
    case '\x05':
      bVar3 = 0xb;
      break;
    default:
      goto switchD_1468c66f6_default;
    }
LAB_1468c670a:
    uVar4 = (uint)(byte)(&DAT_14c75ec18)[bVar3];
  }
  cVar2 = (char)uVar4;
  if (cVar2 != '\0') {
    local_250 = local_230;
    local_238 = '\0';
    local_240 = &local_30;
    local_248 = local_250;
    FUN_14065c5ae(param_3,&local_260);
    iVar1 = local_258 - 1;
    if (local_258 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(&local_250,local_260,iVar1);
    if (local_260 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (0 < (int)((ulonglong)((longlong)local_248 - (longlong)local_250) >> 1)) {
      if ((char)param_4 != '\0') {
        FUN_140002266(&local_260,L".%03hhu",param_4 & 0xff);
        iVar1 = local_258 - 1;
        if (local_258 == 0) {
          iVar1 = 0;
        }
        FUN_1449668a2(&local_250,local_260,iVar1);
        if (local_260 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if (cVar2 == '\x05') {
        FUN_1468751e0(param_3,&local_260,0);
        sVar5 = (size_t)local_258;
        _Str = local_260;
      }
      else {
        _Str = (wchar_t *)FUN_1415380f8(uVar4);
        sVar5 = wcslen(_Str);
      }
      FUN_1449668a2(&local_250,_Str,sVar5);
      plVar6 = (longlong *)FUN_1400dbadc();
      plVar9 = (longlong *)*plVar6;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)FUN_140e92164();
        *plVar6 = (longlong)plVar9;
      }
      *local_248 = 0;
      lVar7 = (**(code **)(*plVar9 + 0x178))(plVar9,local_250);
      if (lVar7 != 0) {
        *param_2 = lVar7;
        *(bool *)(param_2 + 1) = (byte)(cVar2 - 3U) < 2;
        if (local_238 == '\x01') {
          FUN_1400020a8(local_250);
        }
        goto LAB_1468c6673;
      }
      *(bool *)(param_2 + 1) = (byte)(cVar2 - 3U) < 2;
    }
    if (local_238 == '\x01') {
      FUN_1400020a8(local_250);
    }
  }
  puVar8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar8 = &PTR_FUN_149e91020;
  if (puVar8 != (undefined8 *)0x0) {
    *param_2 = (longlong)puVar8;
  }
LAB_1468c6673:
  if ((local_30 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468c671c FUN_1468c671c body=585 status=ok
// SIG undefined FUN_1468c671c(void)

longlong FUN_1468c671c(undefined8 param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  wchar_t *_Str;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_2b8 [47];
  char local_289;
  undefined8 *local_288;
  undefined8 *local_280;
  wchar_t *local_278;
  int local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  uVar9 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar5 = (longlong *)FUN_1400dbadc();
  plVar7 = (longlong *)*plVar5;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_140e92164();
    *plVar5 = (longlong)plVar7;
  }
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_260 = local_268;
  FUN_14065c5ae(param_2,&local_278);
  iVar12 = local_270 + -1;
  if (local_270 == 0) {
    iVar12 = 0;
  }
  FUN_1449668a2(&local_268,local_278,iVar12);
  if (local_278 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  iVar12 = (int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
  if (iVar12 == 0) goto LAB_1468c6890;
  lVar8 = 2;
  puVar10 = &DAT_14c75ec19;
  local_289 = (char)uVar9;
  if (local_289 == '\0') {
    bVar4 = *(byte *)(param_2 + 1);
    if (bVar4 != 0) goto LAB_1468c694f;
  }
  else {
    switch((uint)param_3 & 0xff) {
    case 1:
      bVar4 = 7;
      break;
    case 2:
      bVar4 = 8;
      break;
    case 3:
      bVar4 = 9;
      break;
    case 4:
      bVar4 = 10;
      break;
    case 5:
      bVar4 = 0xb;
      break;
    default:
      goto switchD_1468c693b_default;
    }
LAB_1468c694f:
    puVar10 = &DAT_14c75ec18 + bVar4;
    lVar8 = 1;
  }
switchD_1468c693b_default:
  lVar11 = 0;
  local_288 = param_2;
  local_280 = param_4;
  do {
    cVar1 = puVar10[lVar11];
    uVar9 = CONCAT71((int7)(uVar9 >> 8),cVar1);
    local_260 = local_260 +
                -(longlong)
                 ((int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1) - iVar12);
    if (cVar1 == '\x05') {
      FUN_1468751e0(local_288,&local_278,0);
      _Str = local_278;
    }
    else {
      _Str = (wchar_t *)FUN_1415380f8(uVar9);
      wcslen(_Str);
    }
    FUN_1449668a2(&local_268,_Str);
    *local_260 = 0;
    lVar6 = (**(code **)(*plVar7 + 0x188))(plVar7,local_268);
    puVar2 = local_280;
    if (lVar6 != 0) {
      if (local_280 != (undefined8 *)0x0) {
        *local_280 = *local_288;
        *(undefined1 *)(local_280 + 1) = *(undefined1 *)(local_288 + 1);
        if ((local_289 == '\0') && (cVar3 = FUN_1427b976e(), cVar3 == '\0')) {
          *(char *)(puVar2 + 1) = cVar1;
        }
      }
      goto LAB_1468c6893;
    }
    lVar11 = lVar11 + 1;
  } while (lVar8 != lVar11);
LAB_1468c6890:
  lVar6 = 0;
LAB_1468c6893:
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1468c6966 FUN_1468c6966 body=152 status=ok
// SIG undefined FUN_1468c6966(void)

undefined8 * FUN_1468c6966(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    local_20 = 0;
    local_28 = 0;
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    cVar1 = FUN_1414176ea();
    if (cVar1 == '\0') {
      local_48[0] = 0;
    }
    else {
      local_50 = 0;
      local_58 = 0;
      FUN_1468c61a8(extraout_XMM0_Da,local_48,&local_28,0);
    }
    *param_2 = local_48[0];
  }
  else {
    *param_2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c6a00 FUN_1468c6a00 body=116 status=ok
// SIG undefined FUN_1468c6a00(void)

undefined8 FUN_1468c6a00(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    local_10 = 0;
    local_18 = 0;
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    cVar1 = FUN_1414176ea();
    if (cVar1 != '\0') {
      local_38 = 0;
      uVar2 = FUN_14065c1d4(extraout_XMM0_Da,&local_18,0,0);
      goto LAB_1468c6a19;
    }
  }
  uVar2 = 0;
LAB_1468c6a19:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c6a76 FUN_1468c6a76 body=153 status=ok
// SIG undefined FUN_1468c6a76(void)

undefined8 * FUN_1468c6a76(undefined8 param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    local_18 = 0;
    local_20 = 0;
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    cVar1 = FUN_1414176ea();
    if (cVar1 != '\0') {
      local_48 = 0;
      FUN_1468c6464(extraout_XMM0_Da,param_2,&local_20,0);
      goto LAB_1468c6ad9;
    }
  }
  puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar2 = &PTR_FUN_149e91020;
  *param_2 = puVar2;
  *(undefined2 *)(param_2 + 1) = 0x100;
LAB_1468c6ad9:
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c6b10 FUN_1468c6b10 body=185 status=ok
// SIG undefined FUN_1468c6b10(void)

longlong * FUN_1468c6b10(longlong *param_1,undefined8 *param_2)

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
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_28,*param_2,*(undefined4 *)(param_2 + 1));
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_140aa5ef8(&local_28);
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
    uStack_20 = 0;
  }
  if (CONCAT44(uStack_34,local_38) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c6bca FUN_1468c6bca body=217 status=ok
// SIG undefined FUN_1468c6bca(void)

bool FUN_1468c6bca(wchar_t *param_1,char param_2,undefined8 *param_3,undefined1 *param_4)

{
  char cVar1;
  size_t sVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [40];
  wchar_t *local_70;
  undefined4 local_68;
  undefined8 local_5c;
  undefined4 local_54;
  wchar_t *local_50;
  undefined4 local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = 0;
  bVar4 = false;
  if (param_2 != '\0') goto LAB_1468c6c76;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    uVar5 = (int)sVar2;
  }
  local_50 = param_1;
  local_48 = uVar5;
  cVar1 = FUN_146874e64(&local_50,local_3c);
  uVar3 = 0;
  switch(cVar1) {
  case '\0':
  case '\x05':
    goto switchD_1468c6c48_caseD_0;
  case '\a':
    uVar3 = 1;
    break;
  case '\b':
  case '\t':
  case '\n':
    uVar3 = 2;
    break;
  case '\v':
    uVar3 = 5;
  }
  *param_4 = uVar3;
  local_70 = param_1;
  local_68 = uVar5;
  FUN_14687508a(&local_5c);
  *(undefined4 *)(param_3 + 1) = local_54;
  *param_3 = local_5c;
switchD_1468c6c48_caseD_0:
  bVar4 = cVar1 != '\x05' && cVar1 != '\0';
LAB_1468c6c76:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c6ca4 FUN_1468c6ca4 body=187 status=ok
// SIG undefined FUN_1468c6ca4(void)

void FUN_1468c6ca4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined1 local_70;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_78 = &PTR_LAB_149e910a0;
  local_70 = 0;
  FUN_1468c6b10(&local_68);
  local_78 = &PTR_FUN_149e910c0;
  local_58 = uVar1;
  uStack_50 = uVar2;
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar4 = local_68;
  if (local_60 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar3 + 0xa0))(plVar3,puVar4,&local_78);
  local_78 = &PTR_FUN_149e910c0;
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c6d60 FUN_1468c6d60 body=249 status=ok
// SIG undefined FUN_1468c6d60(void)

void FUN_1468c6d60(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_b0 = &PTR_LAB_149e91100;
  FUN_145de1ef2(local_a8);
  local_b0 = &PTR_FUN_149e910e0;
  local_78 = uVar1;
  uStack_70 = uVar2;
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar4 = local_88;
  if (local_80 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar3 + 0xc0))(plVar3,puVar4,&local_b0);
  local_b0 = &PTR_FUN_149e910e0;
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c6e5a FUN_1468c6e5a body=179 status=ok
// SIG undefined FUN_1468c6e5a(void)

void FUN_1468c6e5a(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
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
  local_60 = &PTR_LAB_149e91100;
  FUN_1468c6b10(&local_58);
  local_60 = &PTR_FUN_149e91120;
  local_48 = *param_3;
  local_40 = param_3[1];
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar1 + 0xc0))(plVar1,puVar2,&local_60);
  local_60 = &PTR_FUN_149e91120;
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c6f0e FUN_1468c6f0e body=462 status=ok
// SIG undefined FUN_1468c6f0e(void)

void FUN_1468c6f0e(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  (**(code **)(*param_2 + 0x170))(param_2,param_1,0x14);
  FUN_1408383eb(param_2,param_1 + 0x18);
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x20),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x28),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  if ((1 < param_3) || ((*(byte *)(param_2 + 5) & 4) != 0)) {
    puVar2 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x30),2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x30) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
    puVar2 = *(undefined2 **)param_2[1];
    if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 0x32),2);
      }
      else {
        thunk_FUN_1457251a8(param_2);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x32) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
    }
  }
  if ((param_3 != 0) || ((*(byte *)(param_2 + 5) & 4) != 0)) {
    puVar3 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
                    /* WARNING: Could not recover jumptable at 0x0001468c7045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x34),1);
      return;
    }
    *(undefined1 *)(param_1 + 0x34) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  return;
}



// FUNCTION 1468c70dc FUN_1468c70dc body=179 status=ok
// SIG undefined FUN_1468c70dc(void)

undefined1 (*) [16]
FUN_1468c70dc(longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             longlong *param_4)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  
  if ((longlong)(int)param_1[5] != 0) {
    pauVar1 = (undefined1 (*) [16])param_1[4];
    lVar2 = (longlong)(int)param_1[5] * 0x38;
    do {
      if (*(int *)pauVar1[1] == *(int *)param_3[1] && *pauVar1 == *param_3) {
        if ((pauVar1 != (undefined1 (*) [16])0x0) && (pauVar1[3][4] == '\0')) {
          (**(code **)(*param_4 + 0x1a0))
                    (param_4,(ulonglong)*(uint *)((longlong)param_1 + 0x14) + *param_1 +
                             *(longlong *)(pauVar1[1] + 8));
          *(undefined8 *)(*param_2 + 8) = 0;
          *(undefined8 *)param_2[1] = 0x100000000;
          FUN_1467a9214(param_4,param_2);
          return param_2;
        }
        break;
      }
      pauVar1 = (undefined1 (*) [16])(pauVar1[3] + 8);
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined4 *)(param_2[1] + 4) = 1;
  return param_2;
}



// FUNCTION 1468c7190 FUN_1468c7190 body=59 status=ok
// SIG undefined FUN_1468c7190(void)

longlong FUN_1468c7190(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1468cc750(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_1468cc72a(lVar2);
  return lVar2;
}



// FUNCTION 1468c71cc FUN_1468c71cc body=452 status=ok
// SIG undefined FUN_1468c71cc(void)

undefined8 FUN_1468c71cc(undefined8 param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  int local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0x14 < lVar3) {
    (**(code **)(*param_2 + 0x1a0))(param_2,lVar3 + -0x14);
    local_38 = 0;
    lStack_30 = 0;
    local_28[0] = 0;
    puVar1 = (ulonglong *)param_2[1];
    plVar2 = (longlong *)*puVar1 + 1;
    if ((longlong *)puVar1[1] < plVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_38,8);
      }
      else {
        thunk_FUN_146821949(param_2,&local_38);
      }
    }
    else {
      local_38 = *(longlong *)*puVar1;
      *puVar1 = (ulonglong)plVar2;
    }
    plVar2 = (longlong *)param_2[1];
    if ((longlong *)plVar2[1] < (longlong *)*plVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&lStack_30,8);
      }
      else {
        thunk_FUN_146821949(param_2,&lStack_30);
      }
    }
    else {
      lStack_30 = *(longlong *)*plVar2;
      *plVar2 = *plVar2 + 8;
    }
    plVar2 = (longlong *)param_2[1];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_28,4);
      }
      else {
        FUN_14572512c(param_2,local_28);
      }
    }
    else {
      local_28[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      if (local_28[0] == -0x61d57c3f) {
        if (local_38 == 0x29bfca045138de76) {
          lVar3 = (**(code **)(*param_2 + 0x28))(param_2);
          (**(code **)(*param_2 + 0x1a0))(param_2,lVar3 - lStack_30);
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            uVar4 = FUN_1468c73c6(param_1,param_2);
            goto LAB_1468c71f8;
          }
        }
      }
      else {
        FUN_14572541c(param_2);
      }
    }
  }
  uVar4 = 0;
LAB_1468c71f8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c7392 FUN_1468c7392 body=51 status=ok
// SIG undefined FUN_1468c7392(void)

void FUN_1468c7392(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x1a0))(param_1,uVar1);
  FUN_1468c71cc(param_2,param_1);
  return;
}



// FUNCTION 1468c73c6 FUN_1468c73c6 body=816 status=ok
// SIG undefined FUN_1468c73c6(void)

bool FUN_1468c73c6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_68 [32];
  int local_48;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar12 = (**(code **)(*param_2 + 0x28))(param_2);
  *param_1 = lVar12;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  plVar6 = *(longlong **)param_2[1];
  if ((longlong *)((longlong *)param_2[1])[1] < plVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,plVar1,8);
    }
    else {
      thunk_FUN_146821949(param_2,plVar1);
    }
  }
  else {
    *plVar1 = *plVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  if (*plVar1 == -0x2e3bc4d17f5a0969) {
    plVar1 = param_1 + 2;
    piVar7 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,plVar1,4);
      }
      else {
        FUN_14572512c(param_2,plVar1);
      }
    }
    else {
      *(int *)plVar1 = *piVar7;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar2 = (uint *)((longlong)param_1 + 0x14);
    puVar8 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar8 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      }
      else {
        FUN_14572512c(param_2,puVar2);
      }
    }
    else {
      *puVar2 = *puVar8;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar3 = (ulonglong *)(param_1 + 3);
    puVar9 = *(ulonglong **)param_2[1];
    if ((ulonglong *)((longlong *)param_2[1])[1] < puVar9 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar3,8);
      }
      else {
        thunk_FUN_146821949(param_2,puVar3);
      }
    }
    else {
      *puVar3 = *puVar9;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
    uVar5 = *(uint *)((longlong)param_1 + 0x14);
    lVar12 = *param_1;
    lVar10 = param_1[3];
    uVar13 = (**(code **)(*param_2 + 0x30))(param_2);
    if ((ulonglong)uVar5 + lVar12 + lVar10 <= uVar13) {
      local_41 = 0;
      if ((int)*plVar1 == 0) {
        puVar9 = (ulonglong *)param_2[1];
        pbVar4 = (byte *)*puVar9 + 1;
        if ((byte *)puVar9[1] < pbVar4) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_41,1);
        }
        else {
          local_41 = *(byte *)*puVar9;
          *puVar9 = (ulonglong)pbVar4;
        }
      }
      local_48 = 0;
      puVar9 = (ulonglong *)param_2[1];
      piVar7 = (int *)*puVar9 + 1;
      if ((int *)puVar9[1] < piVar7) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
        }
        else {
          FUN_14572512c(param_2,&local_48);
        }
      }
      else {
        local_48 = *(int *)*puVar9;
        *puVar9 = (ulonglong)piVar7;
      }
      if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) goto LAB_1468c7630;
      if ((uint)(local_48 * 0x31) <= *puVar2) {
        if (local_48 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_48);
        }
        if (*(int *)((longlong)param_1 + 0x2c) < local_48) {
          FUN_1468cc6be(param_1 + 4);
        }
        if (0 < local_48) {
          iVar14 = 0;
          do {
            lVar12 = FUN_1468c7190(param_1 + 4);
            FUN_1468c6f0e(lVar12,param_2,(int)*plVar1);
            if ((*(char *)(lVar12 + 0x34) != '\x02') &&
               ((*(longlong *)(lVar12 + 0x18) < 0 ||
                ((*(char *)(lVar12 + 0x34) == '\0' &&
                 (*puVar3 < (ulonglong)(*(longlong *)(lVar12 + 0x18) + *(longlong *)(lVar12 + 0x20))
                 )))))) goto LAB_1468c7628;
            if ((int)*plVar1 == 0) {
              bVar11 = local_41;
              if (*(longlong *)(lVar12 + 0x18) == -1) {
                bVar11 = 2;
              }
              *(byte *)(lVar12 + 0x34) = bVar11;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < local_48);
        }
        bVar15 = (*(byte *)((longlong)param_2 + 0x29) & 2) == 0;
        goto LAB_1468c7632;
      }
    }
LAB_1468c7628:
    FUN_14572541c(param_2);
  }
LAB_1468c7630:
  bVar15 = false;
LAB_1468c7632:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar15;
}



// FUNCTION 1468c76f8 FUN_1468c76f8 body=177 status=ok
// SIG undefined FUN_1468c76f8(void)

int FUN_1468c76f8(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  switch(param_2) {
  case 0:
    return *(int *)(param_1 + 0x28);
  case 1:
    iVar1 = 0;
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      lVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + (uint)(*(char *)(*(longlong *)(param_1 + 0x20) + 0x34 + lVar2) == '\0');
        lVar2 = lVar2 + 0x38;
      } while ((longlong)*(int *)(param_1 + 0x28) * 0x38 - lVar2 != 0);
    }
    break;
  case 2:
    iVar1 = 0;
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      lVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + (uint)(*(char *)(*(longlong *)(param_1 + 0x20) + 0x34 + lVar2) == '\x01');
        lVar2 = lVar2 + 0x38;
      } while ((longlong)*(int *)(param_1 + 0x28) * 0x38 - lVar2 != 0);
    }
    break;
  case 3:
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      lVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + (uint)(*(char *)(*(longlong *)(param_1 + 0x20) + 0x34 + lVar2) == '\x02');
        lVar2 = lVar2 + 0x38;
      } while ((longlong)*(int *)(param_1 + 0x28) * 0x38 - lVar2 != 0);
    }
  }
  return iVar1;
}



// FUNCTION 1468c77c5 FUN_1468c77c5 body=218 status=ok
// SIG undefined FUN_1468c77c5(void)

longlong * FUN_1468c77c5(longlong *param_1,byte *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (ulonglong *)param_1[1];
  if (puVar1[1] < *puVar1 + 4) {
    local_24 = 0;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c78a0 FUN_1468c78a0 body=33 status=ok
// SIG undefined FUN_1468c78a0(void)

undefined8 * FUN_1468c78a0(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a83b10(param_2,uVar1);
  return param_2;
}



// FUNCTION 1468c78c2 FUN_1468c78c2 body=242 status=ok
// SIG undefined FUN_1468c78c2(void)

void FUN_1468c78c2(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 & 1) == 0) {
    FUN_1400021e4(param_1,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar2);
  }
  else {
    FUN_1400021e4(param_1,&local_48);
    FUN_144832102(&local_48,0);
    puVar1 = local_48;
    bVar4 = (int)uStack_40 != 0;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    puVar3 = &DAT_149dfb77a;
    if (bVar4) {
      puVar3 = puVar1;
    }
    FUN_140002266(&local_38,L"\"%s\"",puVar3);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_38 = local_48;
    if (puVar1 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar1);
      local_38 = local_48;
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c79b6 FUN_1468c79b6 body=175 status=ok
// SIG undefined FUN_1468c79b6(void)

bool FUN_1468c79b6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  lVar1 = FUN_1401e9420(*param_2,&local_40,1);
  if (lVar1 != 0) {
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_1446f470e(&local_48,puVar2,1);
    *param_1 = local_48;
    *param_2 = lVar1;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c7a66 FUN_1468c7a66 body=258 status=ok
// SIG undefined FUN_1468c7a66(void)

undefined8 FUN_1468c7a66(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b58) {
    local_38 = (undefined2 *)0x0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_38);
    *param_1 = (longlong)local_38;
  }
  else {
    if (*(ulonglong *)(param_2 + 0xc) != (ulonglong)DAT_14c892b74) {
      uVar2 = 0;
      goto LAB_1468c7ad9;
    }
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_38);
    puVar3 = local_38;
    if ((int)uStack_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar3,1);
    *param_1 = local_40;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar2 = 1;
LAB_1468c7ad9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1468c7b6a FUN_1468c7b6a body=179 status=ok
// SIG undefined FUN_1468c7b6a(void)

undefined8 * FUN_1468c7b6a(undefined8 *param_1,short *param_2,uint param_3)

{
  short *psVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    uVar2 = 0;
    psVar1 = param_2;
    do {
      if (*psVar1 == 0x3a) {
        FUN_1446f82e2(&local_38,uVar2 & 0xffffffff,param_2,1);
        FUN_1446f82e2(param_1 + 1,~(uint)uVar2 + param_3,psVar1 + 1,1);
        *param_1 = local_38;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
      uVar2 = uVar2 + 1;
      psVar1 = psVar1 + 1;
    } while (param_3 != uVar2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c7c20 FUN_1468c7c20 body=242 status=ok
// SIG undefined FUN_1468c7c20(void)

void FUN_1468c7c20(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 & 1) == 0) {
    FUN_14088662c(param_1,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar2);
  }
  else {
    FUN_14088662c(param_1,&local_48);
    FUN_144832102(&local_48,0);
    puVar1 = local_48;
    bVar4 = (int)uStack_40 != 0;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    puVar3 = &DAT_149dfb77a;
    if (bVar4) {
      puVar3 = puVar1;
    }
    FUN_140002266(&local_38,L"\"%s\"",puVar3);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_38 = local_48;
    if (puVar1 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar1);
      local_38 = local_48;
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c7d14 FUN_1468c7d14 body=186 status=ok
// SIG undefined FUN_1468c7d14(void)

bool FUN_1468c7d14(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = &DAT_149dfb77a;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  lVar1 = FUN_1401e9420(*param_2,&local_40,1);
  if (lVar1 != 0) {
    iVar2 = 0;
    if (local_38 != 0) {
      puVar3 = local_40;
      iVar2 = local_38 + -1;
    }
    FUN_1468c7b6a(&local_50,puVar3,iVar2);
    *param_1 = local_50;
    param_1[1] = uStack_4c;
    param_1[2] = uStack_48;
    param_1[3] = uStack_44;
    *param_2 = lVar1;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c7dd0 FUN_1468c7dd0 body=332 status=ok
// SIG undefined FUN_1468c7dd0(void)

ulonglong FUN_1468c7dd0(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b58) {
    puVar4 = &local_30;
    local_30 = 0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),puVar4);
    FUN_1400021e4(puVar4,&local_58);
    iVar2 = 0;
    if (iStack_50 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)CONCAT44(uStack_54,local_58);
      iVar2 = iStack_50 + -1;
    }
    FUN_1468c7b6a(&local_48,puVar3,iVar2);
    *param_1 = (undefined4)local_48;
    param_1[1] = local_48._4_4_;
    param_1[2] = (int)uStack_40;
    param_1[3] = uStack_40._4_4_;
    puVar3 = (undefined2 *)CONCAT44(uStack_54,local_58);
  }
  else {
    puVar4 = (undefined8 *)0x0;
    if (*(ulonglong *)(param_2 + 0xc) != (ulonglong)DAT_14c892b74) goto LAB_1468c7e2a;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),&local_48);
    puVar5 = (undefined8 *)(ulonglong)((int)uStack_40 - 1);
    puVar3 = local_48;
    if ((int)uStack_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      puVar5 = puVar4;
    }
    FUN_1468c7b6a(&local_58,puVar3,puVar5);
    *param_1 = local_58;
    param_1[1] = uStack_54;
    param_1[2] = iStack_50;
    param_1[3] = uStack_4c;
    puVar3 = local_48;
  }
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
LAB_1468c7e2a:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar4 & 0xffffffff;
}



// FUNCTION 1468c7f1e FUN_1468c7f1e body=182 status=ok
// SIG undefined FUN_1468c7f1e(void)

undefined8 * FUN_1468c7f1e(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_1446ddbd2();
  puVar1[1] = &DAT_14c951a38;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *puVar1 = &PTR_LAB_149e90840;
  puVar1[0xd] = 0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c8008 FUN_1468c8008 body=148 status=ok
// SIG undefined FUN_1468c8008(void)

void FUN_1468c8008(longlong *param_1,longlong param_2,void *param_3)

{
  char cVar1;
  void *_Dst;
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001468c803f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3);
    return;
  }
  _Dst = (void *)(param_2 + *(int *)((longlong)param_1 + 0x44));
  if (_Dst != param_3) {
    if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001468c8072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x100))(param_1,_Dst,param_3,(int)param_1[6]);
      return;
    }
    memcpy(_Dst,param_3,(longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
    return;
  }
  return;
}



// FUNCTION 1468c80a4 FUN_1468c80a4 body=183 status=ok
// SIG undefined FUN_1468c80a4(void)

undefined8 FUN_1468c80a4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x3b) & 0x20) == 0) {
    if (param_1 == 0) {
      FUN_140056680(param_2,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(param_1 + 0x20,param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (param_1 == 0) {
    FUN_140056680(local_28,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(param_1 + 0x20,local_28);
  }
  FUN_144a882a8(param_2,local_28,L"_DEPRECATED");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468c815c FUN_1468c815c body=149 status=ok
// SIG undefined FUN_1468c815c(void)

undefined8 FUN_1468c815c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14020fad6(param_3,&DAT_149e25bf0);
  FUN_1400021e4(*(undefined8 *)(param_1 + 8),&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_3,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"PROPERTY");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c8203 FUN_1468c8203 body=105 status=ok
// SIG undefined FUN_1468c8203(void)

void FUN_1468c8203(undefined4 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  
  iVar1 = *(int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x30);
  FUN_14689aefa(param_2,&local_28);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Property.cpp",0x5a8,
                L"Invalid property size %u when linking property %s of size %d",param_1,puVar3,
                iVar1 * iVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1468c826c FUN_1468c826c body=10 status=ok
// SIG undefined FUN_1468c826c(void)

void FUN_1468c826c(void)

{
  undefined8 *in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x0001468c8273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_R9)(in_R9[1]);
  return;
}



// FUNCTION 1468c8276 FUN_1468c8276 body=222 status=ok
// SIG undefined FUN_1468c8276(void)

undefined8 FUN_1468c8276(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  int local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 1;
  FUN_146895f4a(&local_88,0);
  *local_88 = param_1;
  local_88[1] = 0;
  *(undefined4 *)(local_88 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)local_88 + 0x14) = 0;
  local_78 = &local_40;
  local_40 = 0;
  local_48 = 0;
  local_58 = &local_78;
  local_68 = (int)uStack_80 + 1;
  local_60 = &LAB_1468d935c;
  local_70 = param_3;
  local_50 = param_2;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_88);
  uVar1 = local_40;
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c8356 FUN_1468c8356 body=71 status=ok
// SIG undefined FUN_1468c8356(void)

undefined8 FUN_1468c8356(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x178))();
  uVar2 = FUN_14153c902((longlong)*(int *)((longlong)param_1 + 0x34) * (longlong)(int)param_1[6],
                        uVar1);
  if ((*(byte *)((longlong)param_1 + 0x39) & 2) == 0) {
    (**(code **)(*param_1 + 0x160))(param_1,uVar2);
  }
  return uVar2;
}



// FUNCTION 1468c83be FUN_1468c83be body=108 status=ok
// SIG undefined FUN_1468c83be(void)

undefined8 FUN_1468c83be(longlong *param_1,uint param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)
                           *(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) >> 8)
                    ,local_20 ==
                     *(longlong *)
                      (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
                      (ulonglong)(param_2 & 0x1fff) * 0xc));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c842b FUN_1468c842b body=150 status=ok
// SIG undefined FUN_1468c842b(void)

void FUN_1468c842b(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  for (lVar1 = *(longlong *)(param_2 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
    if (*(longlong *)(lVar1 + 0x20) == param_1) goto LAB_1468c84b6;
  }
  FUN_14280ca20(&local_28,param_2,param_1);
  if (local_28 != 0) {
    for (lVar1 = *(longlong *)(param_2 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
      if (*(longlong *)(lVar1 + 0x20) == local_28) {
LAB_1468c84b6:
        if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1468c84d6 FUN_1468c84d6 body=53 status=ok
// SIG undefined FUN_1468c84d6(void)

void FUN_1468c84d6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_14689aaf4();
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468c8500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1468c850c FUN_1468c850c body=153 status=ok
// SIG undefined FUN_1468c850c(void)

void FUN_1468c850c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0xfff00007;
  local_20 = param_1;
  uVar1 = FUN_145a1bb4a(*(undefined8 *)(param_2 + 0x78),&local_20,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  FUN_145a1bbfc(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c85a6 FUN_1468c85a6 body=35 status=ok
// SIG undefined FUN_1468c85a6(void)

undefined1 FUN_1468c85a6(void)

{
  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyArray.cpp",0x319,
                L"Deprecated code path");
  return 1;
}



// FUNCTION 1468c85ca FUN_1468c85ca body=27 status=ok
// SIG undefined FUN_1468c85ca(void)

undefined8 FUN_1468c85ca(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x78))();
  return param_2;
}



// FUNCTION 1468c85e6 FUN_1468c85e6 body=166 status=ok
// SIG undefined FUN_1468c85e6(void)

undefined8 FUN_1468c85e6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))
            (*(longlong **)(param_1 + 0x78),&local_30,0,0);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  FUN_140056680(param_2,L"TARRAY");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c868e FUN_1468c868e body=512 status=ok
// SIG undefined FUN_1468c868e(void)

void FUN_1468c868e(longlong *param_1,undefined8 param_2,ulonglong *param_3,int param_4,
                  ulonglong *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong *_Dst;
  int iVar4;
  ulonglong uVar5;
  ulonglong *_Src;
  ulonglong uVar6;
  
  if (param_4 == 1) {
    cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar3 != '\0') {
      _Dst = (ulonglong *)FUN_1468c8356(param_1);
      cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar3 == '\0') {
        _Src = (ulonglong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
        param_3 = _Dst;
        if (_Src != _Dst) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst,_Src,(int)param_1[6]);
          }
          else {
            memcpy(_Dst,_Src,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,_Dst);
        param_3 = _Dst;
      }
      goto LAB_1468c8720;
    }
    param_3 = (ulonglong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
  }
  _Dst = (ulonglong *)0x0;
LAB_1468c8720:
  bVar1 = *(byte *)(param_1 + 0xe);
  (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
  if (param_5 == (ulonglong *)0x0) {
    uVar5 = 0;
    iVar4 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xe);
    (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
    iVar4 = (int)param_5[1];
    if (iVar4 == 0) {
      uVar5 = 0;
      iVar4 = 0;
    }
    else if ((bVar2 & 1) == 0) {
      uVar5 = *param_5;
    }
    else {
      uVar5 = *param_5;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)param_5 + ((longlong)uVar5 >> 0x18);
      }
    }
  }
  if ((int)param_3[1] == 0) {
    uVar6 = 0;
  }
  else if ((bVar1 & 1) == 0) {
    uVar6 = *param_3;
  }
  else {
    uVar6 = *param_3;
    if ((uVar6 & 1) != 0) {
      uVar6 = (longlong)param_3 + ((longlong)uVar6 >> 0x18);
    }
  }
  FUN_1468c888e(param_2,param_1[0xf],uVar6,(int)param_3[1],uVar5,iVar4,param_6,param_7,param_8);
  if (_Dst == (ulonglong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x3c) & 0x10) == 0) {
    (**(code **)(*param_1 + 0x148))(param_1,_Dst);
  }
  FUN_1400020a8(_Dst);
  return;
}



// FUNCTION 1468c888e FUN_1468c888e body=747 status=ok
// SIG undefined FUN_1468c888e(void)

void FUN_1468c888e(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,
                  longlong param_5,int param_6,undefined8 param_7,uint param_8,undefined8 param_9)

{
  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  void *_Dst;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  char cVar9;
  bool bVar11;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  uint uVar10;
  
  uVar3 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_74 = param_4;
  local_60 = param_3;
  local_48 = uVar3;
  if (param_2 == (longlong *)0x0) {
LAB_1468c898f:
    cVar9 = (char)((param_8 & 0x40) >> 6);
    local_70 = CONCAT71((int7)(uVar3 >> 8),1);
    _Dst = (void *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar8 = param_2[1];
    uVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(uVar3 + 8) == 0) {
      bVar11 = uVar8 != 0;
      if (uVar8 != uVar3 && bVar11) {
        do {
          uVar8 = *(ulonglong *)(uVar8 + 0x30);
          bVar11 = uVar8 != 0;
          if (uVar8 == uVar3) break;
        } while (uVar8 != 0);
      }
      if (!bVar11) goto LAB_1468c898f;
    }
    else if ((*(ulonglong *)(uVar8 + 0x18) & *(ulonglong *)(uVar3 + 8)) == 0) goto LAB_1468c898f;
    _Dst = (void *)0x0;
    local_70 = 0;
    uVar10 = param_8 >> 6 & 1;
    cVar9 = (char)uVar10;
    plVar6 = param_2;
    if ((uVar10 == 0) && ((int)param_2[6] == 1)) {
      iVar7 = *(int *)(param_2[0xe] + 0x5c);
      _Dst = (void *)FUN_14001cc68((longlong)
                                   (int)(-iVar7 & (*(int *)(param_2[0xe] + 0x58) + iVar7) - 1U));
      if ((*(byte *)((longlong)param_2 + 0x39) & 2) == 0) {
        (**(code **)(*param_2 + 0x160))(param_2,_Dst);
        local_70 = 0;
      }
      else {
        local_70 = 0;
        memset(_Dst,0,(longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
      }
      cVar9 = '\0';
    }
  }
  if (0 < local_74) {
    iVar7 = 0;
    local_68 = plVar6;
    do {
      if ((param_8 >> 0x19 & 1) == 0) {
        if (iVar7 == 0) {
          uVar5 = 0x28;
        }
        else {
          uVar5 = 0x2c;
        }
        FUN_140002184(param_1,uVar5);
      }
      else {
        if (iVar7 != 0) {
          FUN_140002184(param_1,10);
        }
        FUN_140002266(&local_58,L"[%i] ",iVar7);
        iVar2 = local_50 + -1;
        if (local_50 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_1,local_58,iVar2);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      lVar4 = (longlong)iVar7 * (longlong)*(int *)((longlong)param_2 + 0x34);
      pvVar1 = (void *)(local_60 + lVar4);
      local_98 = (void *)(lVar4 + param_5);
      if (param_6 <= iVar7) {
        local_98 = (void *)0x0;
      }
      if (param_5 == 0) {
        local_98 = (void *)0x0;
      }
      iVar7 = iVar7 + 1;
      if ((char)local_70 == '\0') {
        local_98 = _Dst;
      }
      if (cVar9 != '\0') {
        local_98 = pvVar1;
      }
      local_80 = param_9;
      local_90 = param_7;
      local_88 = param_8 | 1;
      (**(code **)(*param_2 + 0xf0))(param_2,param_1,pvVar1,0);
      plVar6 = local_68;
    } while (local_74 != iVar7);
    if ((param_8 >> 0x19 & 1) == 0) {
      FUN_1400020e8(param_1,&DAT_149e06144,1);
    }
  }
  if (_Dst != (void *)0x0) {
    if ((*(byte *)((longlong)plVar6 + 0x3c) & 0x10) == 0) {
      (**(code **)(*plVar6 + 0x148))(plVar6,_Dst);
    }
    FUN_1400020a8(_Dst);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468c8b7e FUN_1468c8b7e body=95 status=ok
// SIG undefined FUN_1468c8b7e(void)

void FUN_1468c8b7e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1468984f2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0001468c8bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x58))(*(longlong **)(param_1 + 0x78),param_2);
    return;
  }
  return;
}



// FUNCTION 1468c8bde FUN_1468c8bde body=108 status=ok
// SIG undefined FUN_1468c8bde(void)

longlong FUN_1468c8bde(longlong param_1,undefined8 param_2,ulonglong *param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x70);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  lVar2 = 0;
  if ((((int)param_3[1] != 0) && (-1 < (int)param_4)) && ((int)param_4 < (int)param_3[1])) {
    if ((bVar1 & 1) == 0) {
      uVar3 = *param_3;
    }
    else {
      uVar3 = *param_3;
      if ((uVar3 & 1) != 0) {
        uVar3 = (longlong)param_3 + ((longlong)uVar3 >> 0x18);
      }
    }
    lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x34) * (ulonglong)param_4 + uVar3;
  }
  return lVar2;
}



// FUNCTION 1468c8c4a FUN_1468c8c4a body=367 status=ok
// SIG undefined FUN_1468c8c4a(void)

ulonglong FUN_1468c8c4a(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x168))(param_1,&local_38);
  uVar5 = 0;
  if (local_38 !=
      *(ulonglong *)
       (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
       (ulonglong)(param_2 & 0x1fff) * 0xc)) goto LAB_1468c8d94;
  uVar3 = (ulonglong)(param_2 + 1);
  if (*(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
              (ulonglong)(param_2 & 0x1fff) * 0xc) < 1) {
    uVar3 = uVar5;
  }
  local_38 = uVar5;
  if (param_1 != (longlong *)0x0) {
    local_38 = param_1[4];
  }
  local_48 = *(undefined8 *)
              (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)(uint)uVar3 >> 0xd) * 8) +
              (ulonglong)((uint)uVar3 & 0x1fff) * 0xc);
  uVar5 = 0;
  local_40 = param_1;
  plVar2 = (longlong *)FUN_14689ac8c();
  if (plVar2 == (longlong *)0x0) goto LAB_1468c8d94;
  puVar4 = (undefined *)plVar2[1];
  FUN_1446ddbd2();
  if (DAT_14c951a40 == 0) {
    bVar6 = puVar4 != (undefined *)0x0;
    if (puVar4 != &DAT_14c951a38 && bVar6) {
      do {
        puVar4 = *(undefined **)(puVar4 + 0x30);
        bVar6 = puVar4 != (undefined *)0x0;
        if (puVar4 == &DAT_14c951a38) break;
      } while (puVar4 != (undefined *)0x0);
    }
    if (bVar6) goto LAB_1468c8d65;
  }
  else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a40) != 0) {
LAB_1468c8d65:
    cVar1 = (**(code **)(*plVar2 + 0x198))(plVar2,uVar3,param_3);
    if (cVar1 != '\0') {
      param_1[0xf] = (longlong)plVar2;
      uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
      goto LAB_1468c8d94;
    }
  }
  (**(code **)(*plVar2 + 8))(plVar2,1);
  uVar5 = 0;
LAB_1468c8d94:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1468c8dba FUN_1468c8dba body=406 status=ok
// SIG undefined FUN_1468c8dba(void)

char FUN_1468c8dba(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [39];
  byte local_71;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(*param_2 + 0x15 + (longlong)((int)param_2[1] + -1) * 0x18) = 1;
  cVar5 = (*(code *)*param_4)(param_4[1]);
  if (cVar5 == '\x03') {
    puVar2 = (ulonglong *)*param_3;
    local_71 = *(byte *)(param_1 + 0x70);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
    lVar8 = *(longlong *)(param_1 + 0x78);
    local_70 = (longlong)*(int *)(lVar8 + 0x34);
    iVar1 = (int)param_2[1];
    lVar9 = (longlong)iVar1;
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_146895f4a(param_2,iVar1);
    }
    lVar3 = *param_2;
    *(longlong *)(lVar3 + lVar9 * 0x18) = lVar8;
    *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18) = 0;
    *(undefined4 *)(lVar3 + 0x10 + lVar9 * 0x18) = 0xffffffff;
    *(undefined2 *)(lVar3 + 0x14 + lVar9 * 0x18) = 0;
    uVar4 = puVar2[1];
    if ((longlong)(int)uVar4 < 1) {
      cVar5 = '\x03';
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      do {
        lVar3 = *param_2;
        lVar6 = (longlong)((int)param_2[1] + -1);
        *(int *)(lVar3 + 0x10 + lVar6 * 0x18) = (int)lVar9;
        *(undefined1 *)(lVar3 + 0x14 + lVar6 * 0x18) = 2;
        if ((int)puVar2[1] == 0) {
          local_58 = 0;
        }
        else {
          if ((local_71 & 1) == 0) {
            uVar7 = *puVar2;
          }
          else {
            uVar7 = *puVar2;
            if ((uVar7 & 1) != 0) {
              uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar2;
            }
          }
          local_58 = uVar7 + lVar8;
        }
        local_50 = param_3[1];
        local_68 = *param_4;
        local_60 = param_4[1];
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xa8))
                          (*(longlong **)(param_1 + 0x78),param_2,&local_58,&local_68);
        if (cVar5 == '\0') {
          cVar5 = '\0';
          break;
        }
        if (cVar5 == '\x02') {
          cVar5 = '\x01';
          break;
        }
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + local_70;
      } while ((int)uVar4 != lVar9);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar5;
}



// FUNCTION 1468c8fbc FUN_1468c8fbc body=164 status=ok
// SIG undefined FUN_1468c8fbc(void)

void FUN_1468c8fbc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x1c8))();
  if (cVar2 != '\0') {
    lVar1 = param_1[0xe];
    local_2c = (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
    local_40 = param_1[0xf];
    local_30 = *(undefined4 *)(local_40 + 0x34);
    local_38 = param_2;
    local_28 = (char)lVar1;
    FUN_14474d2ba(&local_40,0);
    if (*(int *)((longlong)param_2 + 0xc) != -1) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = 0;
      param_2[1] = -0x100000000;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9062 FUN_1468c9062 body=54 status=ok
// SIG undefined FUN_1468c9062(void)

void FUN_1468c9062(undefined8 param_1,longlong *param_2)

{
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    param_2[1] = -0x100000000;
  }
  return;
}



// FUNCTION 1468c90ae FUN_1468c90ae body=29 status=ok
// SIG undefined FUN_1468c90ae(void)

undefined8 FUN_1468c90ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c90cc FUN_1468c90cc body=63 status=ok
// SIG undefined FUN_1468c90cc(void)

undefined8 FUN_1468c90cc(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x130,
                L"Pure virtual not implemented (%s)",L"FProperty::GetCPPType");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1468c910c FUN_1468c910c body=42 status=ok
// SIG undefined FUN_1468c910c(void)

undefined8 FUN_1468c910c(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x510,
                L"Pure virtual not implemented (%s)",L"FProperty::HasIntrusiveUnsetOptionalState");
  return 0;
}



// FUNCTION 1468c9136 FUN_1468c9136 body=38 status=ok
// SIG undefined FUN_1468c9136(void)

undefined8 FUN_1468c9136(undefined8 param_1,int param_2)

{
  FUN_1456cf064();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c9162 FUN_1468c9162 body=33 status=ok
// SIG undefined FUN_1468c9162(void)

void FUN_1468c9162(undefined8 param_1)

{
  FUN_1456cf0e4();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1468c91b8 FUN_1468c91b8 body=38 status=ok
// SIG undefined FUN_1468c91b8(void)

undefined8 FUN_1468c91b8(undefined8 param_1,int param_2)

{
  FUN_1456cf064();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468c91de FUN_1468c91de body=216 status=ok
// SIG undefined FUN_1468c91de(void)

void FUN_1468c91de(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 **local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  undefined1 *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    local_38 = param_2[2];
    local_10 = &local_20;
    local_48 = &local_18;
    local_18 = &LAB_1468c94c2;
    local_28 = &local_38;
    local_30 = &LAB_1468c94dc;
    local_20 = local_38;
    FUN_14000c564(*(undefined8 *)(param_1 + 0x10),param_2[1],*param_2 + 0x18);
  }
  else {
    local_38 = param_2[2];
    local_10 = &local_20;
    local_48 = &local_18;
    local_18 = &LAB_1468c9494;
    local_28 = &local_38;
    local_30 = &LAB_1468c94ae;
    local_20 = local_38;
    FUN_1468c92b8(*(undefined8 *)(param_1 + 0x10),param_2[1],*param_2 + 0x18);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c92b8 FUN_1468c92b8 body=172 status=ok
// SIG undefined FUN_1468c92b8(void)

undefined8
FUN_1468c92b8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  code **local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x24)) {
    local_50 = *param_5;
    local_38 = &local_50;
    local_48 = param_5[1];
    local_40 = FUN_1468c9446;
    local_30 = param_2;
    uVar1 = (*(code *)*param_4)(param_4[1]);
    local_58 = &local_40;
    uVar2 = FUN_1468c9366(param_1,param_2,param_3 + 4,uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9366 FUN_1468c9366 body=222 status=ok
// SIG undefined FUN_1468c9366(void)

int FUN_1468c9366(ulonglong *param_1,undefined8 param_2,int *param_3,int param_4,undefined8 *param_5
                 )

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = param_1[5];
  uVar3 = (longlong)param_1 + ((longlong)uVar1 >> 0x18) + 0x28;
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  iVar4 = *(int *)(uVar3 + ((longlong)param_4 & (longlong)(int)param_1[6] - 1U) * 4);
  if (iVar4 != -1) {
    do {
      uVar1 = *param_1;
      uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
      if ((uVar1 & 1) == 0) {
        uVar3 = uVar1;
      }
      lVar5 = (longlong)iVar4 * (longlong)param_3[4] + uVar3;
      local_58 = param_2;
      local_50 = lVar5;
      cVar2 = (*(code *)*param_5)(param_5[1],&local_58,&local_50);
      if (cVar2 != '\0') goto LAB_1468c941b;
      iVar4 = *(int *)(lVar5 + *param_3);
    } while (iVar4 != -1);
  }
  iVar4 = -1;
LAB_1468c941b:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9446 FUN_1468c9446 body=77 status=ok
// SIG undefined FUN_1468c9446(void)

void FUN_1468c9446(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_3;
  local_18 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c94f0 FUN_1468c94f0 body=114 status=ok
// SIG undefined FUN_1468c94f0(void)

void FUN_1468c94f0(longlong *param_1,int param_2)

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



// FUNCTION 1468c9562 FUN_1468c9562 body=149 status=ok
// SIG undefined FUN_1468c9562(void)

void FUN_1468c9562(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  FUN_1468c95f8(param_1,param_2,param_3 + 0xc);
  uVar3 = (uint)param_2;
  if (uVar3 < 4) {
    iVar5 = 1;
    if (uVar3 == 0) goto LAB_1468c95b2;
  }
  else {
    uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x30) != iVar5) {
    *(int *)(param_1 + 0x30) = iVar5;
    FUN_144a7f90c(param_1 + 0x28,0,iVar5,4,0);
  }
LAB_1468c95b2:
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  uVar1 = param_1 + 0x28 + ((longlong)uVar4 >> 0x18);
  if ((uVar4 & 1) == 0) {
    uVar1 = uVar4;
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0;
    do {
      *(undefined4 *)(uVar1 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1468c95f8 FUN_1468c95f8 body=99 status=ok
// SIG undefined FUN_1468c95f8(void)

void FUN_1468c95f8(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1468c0360(param_1,param_2,uVar2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  if (*(uint *)(param_1 + 0x1c) == uVar3) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  FUN_1468c965c(param_1 + 0x10,0);
  return;
}



// FUNCTION 1468c965c FUN_1468c965c body=149 status=ok
// SIG undefined FUN_1468c965c(void)

void FUN_1468c965c(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = *(int *)((longlong)param_1 + 0xc) + 0x1fU >> 5;
  uVar1 = FUN_144a3809e(uVar2 * 4,0);
  uVar3 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  uVar2 = (uint)uVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar2 << 5;
  uVar4 = param_2 + 0x1fU >> 5;
  FUN_144a7f90c(param_1,uVar4,uVar3,4,0);
  if (uVar4 <= uVar2 && uVar2 - uVar4 != 0) {
    uVar1 = *param_1;
    uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar1;
    }
    memset((void *)(uVar3 + (ulonglong)uVar4 * 4),0,(ulonglong)(uVar2 - uVar4) << 2);
    return;
  }
  return;
}



// FUNCTION 1468c96f2 FUN_1468c96f2 body=372 status=ok
// SIG undefined FUN_1468c96f2(void)

void FUN_1468c96f2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_148 [32];
  undefined1 **local_128;
  undefined1 **local_120;
  undefined1 **local_118;
  undefined1 **local_110;
  undefined1 **local_108;
  undefined1 **local_100;
  undefined1 **local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined1 *local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 *local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_a0 = param_1[4];
  local_38 = &local_48;
  local_f8 = &local_40;
  local_40 = &LAB_1468ca090;
  local_f0 = param_1[3];
  local_50 = &local_60;
  local_100 = &local_58;
  local_58 = &LAB_1468ca0b0;
  local_68 = &local_80;
  local_98 = param_1[2];
  local_108 = &local_70;
  local_70 = &LAB_1468ca0d0;
  local_88 = &local_a0;
  local_110 = &local_90;
  local_90 = &LAB_1468ca0ea;
  local_a8 = &local_c0;
  local_b8 = param_1[1];
  local_118 = &local_b0;
  local_b0 = &LAB_1468ca148;
  local_c8 = &local_d8;
  local_120 = &local_d0;
  local_d0 = &LAB_1468ca1a6;
  local_e0 = &local_f0;
  local_128 = &local_e8;
  local_e8 = &LAB_1468ca1c0;
  local_d8 = local_f0;
  local_c0 = local_f0;
  local_80 = local_a0;
  local_78 = local_98;
  local_60 = local_f0;
  local_48 = local_a0;
  FUN_1468c9868(param_2,local_b8,local_98,*param_1 + 0x18);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9868 FUN_1468c9868 body=329 status=ok
// SIG undefined FUN_1468c9868(void)

void FUN_1468c9868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  code **local_f0;
  code **local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_70 = *param_10;
  local_30 = &local_70;
  local_68 = param_10[1];
  local_60 = *param_11;
  local_58 = param_11[1];
  local_50 = *param_4;
  uStack_48 = param_4[1];
  local_40 = param_4[2];
  local_e8 = &local_38;
  local_38 = FUN_1468c9fcc;
  local_b8 = *param_7;
  local_78 = &local_b8;
  local_b0 = param_7[1];
  local_a8 = *param_8;
  local_a0 = param_8[1];
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = param_4[2];
  local_f0 = &local_80;
  local_80 = FUN_1468ca02e;
  local_c8 = *param_6;
  local_f8 = &local_c8;
  local_c0 = param_6[1];
  local_d8 = *param_5;
  local_d0 = param_5[1];
  FUN_1468c99b2(local_98,param_2,(undefined4 *)((longlong)param_4 + 4),&local_d8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c99b2 FUN_1468c99b2 body=315 status=ok
// SIG undefined FUN_1468c99b2(void)

void FUN_1468c99b2(ulonglong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_2;
  uVar2 = (*(code *)*param_4)(param_4[1],&local_50);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x24)) {
    local_50 = *param_5;
    local_48 = param_5[1];
    local_78 = &local_50;
    iVar3 = FUN_1468c9366(param_1,param_2,param_3,uVar2);
    if (iVar3 != -1) {
      uVar1 = *param_1;
      uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
      if ((uVar1 & 1) == 0) {
        uVar4 = uVar1;
      }
      lVar5 = (longlong)iVar3 * (longlong)*(int *)(param_3 + 0x10) + uVar4;
      local_50 = lVar5;
      (*(code *)*param_7)(param_7[1],&local_50);
      local_50 = lVar5;
      (*(code *)*param_6)(param_6[1],&local_50);
      goto LAB_1468c9a3a;
    }
  }
  local_60 = *param_6;
  local_78 = &local_60;
  local_58 = param_6[1];
  local_70 = *param_4;
  local_68 = param_4[1];
  FUN_1468c9aee(param_1,param_3,&local_70,uVar2);
LAB_1468c9a3a:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9aee FUN_1468c9aee body=273 status=ok
// SIG undefined FUN_1468c9aee(void)

int FUN_1468c9aee(ulonglong *param_1,int *param_2,undefined8 *param_3,uint param_4,
                 undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = FUN_1468c9c00(param_1,param_2 + 3);
  uVar5 = *param_1;
  uVar7 = ((longlong)uVar5 >> 0x18) + (longlong)param_1;
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5;
  }
  lVar8 = (longlong)iVar3 * (longlong)param_2[4] + uVar7;
  local_48 = lVar8;
  (*(code *)*param_5)(param_5[1]);
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x24);
  iVar6 = 1;
  if (3 < uVar4) {
    uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar1 = (int)param_1[6];
  if ((iVar1 == 0) || (iVar1 < iVar6)) {
    local_58 = *param_3;
    local_50 = param_3[1];
    FUN_1468c9cb6(param_1,param_2);
  }
  else {
    param_4 = iVar1 - 1U & param_4;
    uVar5 = param_1[5];
    uVar7 = (longlong)param_1 + ((longlong)uVar5 >> 0x18) + 0x28;
    if ((uVar5 & 1) == 0) {
      uVar7 = uVar5;
    }
    *(uint *)(lVar8 + param_2[1]) = param_4;
    *(undefined4 *)(lVar8 + *param_2) = *(undefined4 *)(uVar7 + (longlong)(int)param_4 * 4);
    *(int *)(uVar7 + (longlong)(int)param_4 * 4) = iVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9c00 FUN_1468c9c00 body=181 status=ok
// SIG undefined FUN_1468c9c00(void)

ulonglong FUN_1468c9c00(ulonglong *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = (uint)param_1[1];
    uVar9 = (ulonglong)uVar4;
    *(uint *)(param_1 + 1) = uVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) <= (int)uVar4) {
      FUN_1468c03c2(param_1,uVar9,uVar3,uVar2);
    }
    FUN_1468c9e7a(param_1 + 2,0);
  }
  else {
    uVar9 = (ulonglong)(int)param_1[4];
    uVar5 = *param_1;
    uVar8 = ((longlong)uVar5 >> 0x18) + (longlong)param_1;
    if ((uVar5 & 1) == 0) {
      uVar8 = uVar5;
    }
    iVar7 = *(int *)(uVar8 + 4 + (longlong)(int)param_2[1] * uVar9);
    *(int *)(param_1 + 4) = iVar7;
    iVar6 = *(int *)((longlong)param_1 + 0x24) + -1;
    *(int *)((longlong)param_1 + 0x24) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(uVar8 + (longlong)(int)param_2[1] * (longlong)iVar7) = 0xffffffff;
    }
  }
  uVar5 = param_1[2];
  uVar8 = (longlong)param_1 + ((longlong)uVar5 >> 0x18) + 0x10;
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  iVar6 = (int)uVar9;
  iVar7 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  puVar1 = (uint *)(uVar8 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  return uVar9 & 0xffffffff;
}



// FUNCTION 1468c9cb6 FUN_1468c9cb6 body=450 status=ok
// SIG undefined FUN_1468c9cb6(void)

void FUN_1468c9cb6(ulonglong *param_1,int *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = param_1 + 5;
  local_58 = 0;
  FUN_144a7f90c(puVar1,0,0,4);
  uVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x24);
  iVar7 = 1;
  if (3 < uVar2) {
    uVar4 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar8 & 0x1f);
  }
  *(int *)(param_1 + 6) = iVar7;
  local_58 = 0;
  uVar2 = 0;
  FUN_144a7f90c(puVar1,0,iVar7,4);
  iVar7 = (int)param_1[6];
  if (0 < iVar7) {
    do {
      uVar4 = param_1[5];
      uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
      if ((uVar4 & 1) == 0) {
        uVar6 = uVar4;
      }
      *(undefined4 *)(uVar6 + (ulonglong)(iVar7 + 0x7fffffffU & uVar2) * 4) = 0xffffffff;
      uVar2 = uVar2 + 1;
      iVar7 = (int)param_1[6];
    } while ((int)uVar2 < iVar7);
  }
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x24);
  if (iVar7 != 0) {
    uVar2 = 0;
    do {
      if ((int)uVar2 < (int)param_1[3]) {
        uVar4 = param_1[2];
        uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)(param_1 + 2);
        if ((uVar4 & 1) == 0) {
          uVar6 = uVar4;
        }
        if ((*(uint *)(uVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
          uVar4 = *param_1;
          uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
          if ((uVar4 & 1) == 0) {
            uVar6 = uVar4;
          }
          lVar8 = (longlong)(int)uVar2 * (longlong)param_2[4] + uVar6;
          local_50 = lVar8;
          iVar3 = (*(code *)*param_3)(param_3[1],&local_50);
          uVar5 = (longlong)iVar3 & (longlong)(int)param_1[6] - 1U;
          iVar3 = (int)uVar5;
          *(int *)(param_2[1] + lVar8) = iVar3;
          uVar4 = param_1[5];
          uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
          if ((uVar4 & 1) == 0) {
            uVar6 = uVar4;
          }
          *(undefined4 *)(*param_2 + lVar8) =
               *(undefined4 *)(uVar6 + ((longlong)(int)param_1[6] - 1U & uVar5) * 4);
          uVar4 = param_1[5];
          uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
          if ((uVar4 & 1) == 0) {
            uVar6 = uVar4;
          }
          *(uint *)(uVar6 + ((longlong)iVar3 & (longlong)(int)param_1[6] - 1U) * 4) = uVar2;
          iVar7 = iVar7 + -1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (iVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468c9e7a FUN_1468c9e7a body=153 status=ok
// SIG undefined FUN_1468c9e7a(void)

uint FUN_1468c9e7a(ulonglong *param_1,char param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = (uint)param_1[1];
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if ((int)uVar1 < *(int *)((longlong)param_1 + 0xc)) {
    bVar4 = (byte)(uVar1 & 0x1f);
    if ((uVar1 & 0x1f) == 0) {
      uVar2 = *param_1;
      uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2;
      }
      *(undefined4 *)(uVar3 + (longlong)((int)uVar1 >> 5) * 4) = 0;
      bVar4 = 0;
    }
  }
  else {
    FUN_1468c9f14(param_1,uVar1);
    bVar4 = (byte)uVar1 & 0x1f;
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar6 = uVar1 + 0x1f;
  if (-1 < (int)uVar1) {
    uVar6 = uVar1;
  }
  lVar5 = (longlong)((int)uVar6 >> 5);
  if (param_2 == '\0') {
    uVar6 = ~(1 << bVar4) & *(uint *)(uVar3 + lVar5 * 4);
  }
  else {
    uVar6 = 1 << bVar4 | *(uint *)(uVar3 + lVar5 * 4);
  }
  *(uint *)(uVar3 + lVar5 * 4) = uVar6;
  return uVar1;
}



// FUNCTION 1468c9f14 FUN_1468c9f14 body=184 status=ok
// SIG undefined FUN_1468c9f14(void)

void FUN_1468c9f14(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = (int)param_1[1] + 0x1fU >> 5;
  if (*(int *)((longlong)param_1 + 0xc) + 0x1fU < 0x20) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
  }
  uVar1 = FUN_144a3809e(uVar4 << 2,0);
  uVar3 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  uVar2 = (uint)uVar3;
  *(uint *)((longlong)param_1 + 0xc) = uVar2 << 5;
  uVar4 = param_2 + 0x1fU >> 5;
  FUN_144a7f90c(param_1,uVar4,uVar3,4,0);
  if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
    return;
  }
  uVar1 = *param_1;
  uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  memset((void *)(uVar3 + (ulonglong)uVar4 * 4),0,(ulonglong)(uVar2 - uVar4) << 2);
  return;
}



// FUNCTION 1468c9fcc FUN_1468c9fcc body=97 status=ok
// SIG undefined FUN_1468c9fcc(void)

void FUN_1468c9fcc(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  local_28 = *(int *)(param_1 + 4) + lVar1;
  (*(code *)param_1[2])(param_1[3],&local_28);
  local_28 = lVar1;
  (*(code *)*param_1)(param_1[1],&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ca02e FUN_1468ca02e body=97 status=ok
// SIG undefined FUN_1468ca02e(void)

void FUN_1468ca02e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  local_28 = lVar1;
  (*(code *)*param_1)(param_1[1],&local_28);
  local_28 = *(int *)(param_1 + 4) + lVar1;
  (*(code *)param_1[2])(param_1[3],&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ca0f2 FUN_1468ca0f2 body=86 status=ok
// SIG undefined FUN_1468ca0f2(void)

void FUN_1468ca0f2(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,param_2);
  }
  else {
    memset(param_2,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001468ca145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,param_2,param_1[1]);
  return;
}



// FUNCTION 1468ca150 FUN_1468ca150 body=86 status=ok
// SIG undefined FUN_1468ca150(void)

void FUN_1468ca150(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))(plVar1,param_2);
  }
  else {
    memset(param_2,0,(longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001468ca1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x110))((longlong *)*param_1,param_2,param_1[1]);
  return;
}



// FUNCTION 1468ca1ee FUN_1468ca1ee body=62 status=ok
// SIG undefined FUN_1468ca1ee(void)

void FUN_1468ca1ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_1417113bc(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468ca22c FUN_1468ca22c body=210 status=ok
// SIG undefined FUN_1468ca22c(void)

longlong FUN_1468ca22c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x10;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar1;
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (uStack_40 != lVar1)) {
    do {
      do {
        local_58 = local_58 & ~uStack_64;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar2);
    } while ((CONCAT44(uStack_5c,uStack_60) != lVar1) || (local_70 != param_1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ca300 FUN_1468ca300 body=123 status=ok
// SIG undefined FUN_1468ca300(void)

int FUN_1468ca300(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_1401246e4(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1409d3082(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 1468ca37c FUN_1468ca37c body=79 status=ok
// SIG undefined FUN_1468ca37c(void)

longlong * FUN_1468ca37c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (((char)param_1[1] == '\x01') && (lVar2 = *param_1, lVar2 != 0)) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 1468ca3cc FUN_1468ca3cc body=322 status=ok
// SIG undefined FUN_1468ca3cc(void)

undefined4 * FUN_1468ca3cc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1468ca510(param_1,local_48);
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1468ca5f6(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_1468ca722(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ca510 FUN_1468ca510 body=229 status=ok
// SIG undefined FUN_1468ca510(void)

int * FUN_1468ca510(longlong *param_1,int *param_2)

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



// FUNCTION 1468ca5f6 FUN_1468ca5f6 body=185 status=ok
// SIG undefined FUN_1468ca5f6(void)

undefined8 FUN_1468ca5f6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          puVar2 = *(undefined8 **)(puVar1 + 4);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          puVar2 = *(undefined8 **)(puVar1 + 2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          lVar5 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar5;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar6;
          puVar1[3] = uVar4;
          FUN_1468ca6b0(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1468ca6b0 FUN_1468ca6b0 body=114 status=ok
// SIG undefined FUN_1468ca6b0(void)

void FUN_1468ca6b0(longlong *param_1,int param_2)

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



// FUNCTION 1468ca722 FUN_1468ca722 body=477 status=ok
// SIG undefined FUN_1468ca722(void)

void FUN_1468ca722(longlong *param_1)

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



// FUNCTION 1468ca900 FUN_1468ca900 body=132 status=ok
// SIG undefined FUN_1468ca900(void)

void FUN_1468ca900(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_1468ca984(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1468ca984 FUN_1468ca984 body=90 status=ok
// SIG undefined FUN_1468ca984(void)

void FUN_1468ca984(longlong *param_1,int param_2)

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
  FUN_1468ca9de();
  return;
}



// FUNCTION 1468ca9de FUN_1468ca9de body=82 status=ok
// SIG undefined FUN_1468ca9de(void)

void FUN_1468ca9de(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x10 + (longlong)param_2 * 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(lVar1 + (longlong)param_2 * 0x20 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1468ca6b0(param_1,param_2);
  return;
}



// FUNCTION 1468caa30 FUN_1468caa30 body=39 status=ok
// SIG undefined FUN_1468caa30(void)

undefined8 * FUN_1468caa30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e064c0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468caa58 FUN_1468caa58 body=42 status=ok
// SIG undefined FUN_1468caa58(void)

void FUN_1468caa58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_14280d4c6(uVar1,param_2,1);
  return;
}



// FUNCTION 1468caa82 FUN_1468caa82 body=44 status=ok
// SIG undefined FUN_1468caa82(void)

void FUN_1468caa82(void)

{
  undefined8 uVar1;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_14001cc68(0x60,0x10);
  FUN_14280d4c6(uVar1,in_stack_00000028,0);
  return;
}



// FUNCTION 1468caab2 FUN_1468caab2 body=38 status=ok
// SIG undefined FUN_1468caab2(void)

undefined8 FUN_1468caab2(undefined8 param_1,int param_2)

{
  FUN_1400e0f74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468cab4e FUN_1468cab4e body=59 status=ok
// SIG undefined FUN_1468cab4e(void)

undefined8 FUN_1468cab4e(longlong *param_1)

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



// FUNCTION 1468cabf0 FUN_1468cabf0 body=190 status=ok
// SIG undefined FUN_1468cabf0(void)

bool FUN_1468cabf0(uint *param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar4 = (ulonglong)DAT_14c892b48;
  if (uVar2 == uVar4) {
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_2c,4);
      }
      else {
        FUN_14572512c(param_3,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *param_1 = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 == uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cad1c FUN_1468cad1c body=59 status=ok
// SIG undefined FUN_1468cad1c(void)

undefined8 FUN_1468cad1c(longlong *param_1)

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



// FUNCTION 1468cae2a FUN_1468cae2a body=59 status=ok
// SIG undefined FUN_1468cae2a(void)

undefined8 FUN_1468cae2a(longlong *param_1)

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



// FUNCTION 1468caecc FUN_1468caecc body=190 status=ok
// SIG undefined FUN_1468caecc(void)

bool FUN_1468caecc(uint *param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar4 = (ulonglong)DAT_14c892b50;
  if (uVar2 == uVar4) {
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_2c,4);
      }
      else {
        FUN_14572512c(param_3,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *param_1 = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 == uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468caf9a FUN_1468caf9a body=22 status=ok
// SIG undefined FUN_1468caf9a(void)

undefined1 FUN_1468caf9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468c77c5(param_2,param_3);
  return 1;
}



// FUNCTION 1468cb006 FUN_1468cb006 body=59 status=ok
// SIG undefined FUN_1468cb006(void)

undefined8 FUN_1468cb006(longlong *param_1)

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



// FUNCTION 1468cb0a8 FUN_1468cb0a8 body=196 status=ok
// SIG undefined FUN_1468cb0a8(void)

bool FUN_1468cb0a8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar5 = (ulonglong)DAT_14c892b4c;
  if (uVar2 == uVar5) {
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_34 = 0;
      (**(code **)(*param_3 + 0x170))(param_3,&local_34,4);
      uVar4 = local_34;
      if (1 < local_34) {
        FUN_14572541c(param_3);
        uVar4 = local_34;
      }
    }
    else {
      uVar4 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *(bool *)param_1 = uVar4 != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 == uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cb1e2 FUN_1468cb1e2 body=59 status=ok
// SIG undefined FUN_1468cb1e2(void)

undefined8 FUN_1468cb1e2(longlong *param_1)

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



// FUNCTION 1468cb2ea FUN_1468cb2ea body=47 status=ok
// SIG undefined FUN_1468cb2ea(void)

longlong FUN_1468cb2ea(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468cb31a FUN_1468cb31a body=43 status=ok
// SIG undefined FUN_1468cb31a(void)

longlong FUN_1468cb31a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1 + 0x10,*param_2,iVar1);
  return param_1 + 0x10;
}



// FUNCTION 1468cb346 FUN_1468cb346 body=153 status=ok
// SIG undefined FUN_1468cb346(void)

void FUN_1468cb346(ulonglong *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  char param_6)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar3 = iVar2 - (param_3 + param_2);
    if (iVar3 != 0) {
      lVar4 = (longlong)param_4;
      uVar1 = *param_1;
      uVar5 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
      if ((uVar1 & 1) == 0) {
        uVar5 = uVar1;
      }
      memmove((void *)(lVar4 * param_2 + uVar5),
              (void *)(((longlong)param_3 + (longlong)param_2) * lVar4 + uVar5),iVar3 * lVar4);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_6 == '\x01') {
      FUN_1468cb3e0(param_1,param_4,param_5);
      return;
    }
  }
  return;
}



// FUNCTION 1468cb3e0 FUN_1468cb3e0 body=136 status=ok
// SIG undefined FUN_1468cb3e0(void)

void FUN_1468cb3e0(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = (ulonglong)param_2;
  if (((longlong)(int)(iVar3 - uVar1) * uVar4 < 0x4000) && (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1)) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 * uVar4);
      uVar2 = uVar2 / uVar4;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,uVar4,param_3);
    }
  }
  return;
}



// FUNCTION 1468cb468 FUN_1468cb468 body=29 status=ok
// SIG undefined FUN_1468cb468(void)

undefined8 FUN_1468cb468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468cb48a FUN_1468cb48a body=32 status=ok
// SIG undefined FUN_1468cb48a(void)

undefined8 FUN_1468cb48a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468cb4ba FUN_1468cb4ba body=66 status=ok
// SIG undefined FUN_1468cb4ba(void)

void FUN_1468cb4ba(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(param_2 + *(int *)(param_1 + 0x34) * lVar2) != 0) {
        FUN_1400020a8();
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 1468cb52c FUN_1468cb52c body=146 status=ok
// SIG undefined FUN_1468cb52c(void)

longlong FUN_1468cb52c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1468cb5c0();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_1468cb56b;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_1468cb664(param_1,&local_2c,param_2);
  lVar2 = (longlong)local_2c;
  lVar3 = *param_1;
LAB_1468cb56b:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cb5c0 FUN_1468cb5c0 body=164 status=ok
// SIG undefined FUN_1468cb5c0(void)

int FUN_1468cb5c0(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar5 = *param_1;
      do {
        lVar6 = (longlong)iVar2;
        if (*(longlong *)(lVar5 + lVar6 * 0x28) == *param_3) {
          return iVar2;
        }
        lVar1 = lVar5 + lVar6 * 0x28;
        lVar7 = *(longlong *)(lVar1 + 8);
        if ((lVar7 != 0) && (lVar3 = param_3[1], lVar3 != 0)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
            lVar7 = *(longlong *)(lVar1 + 8);
          }
          if (lVar7 == lVar3) {
            return iVar2;
          }
          lVar5 = *param_1;
        }
        iVar2 = *(int *)(lVar5 + 0x20 + lVar6 * 0x28);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1468cb664 FUN_1468cb664 body=276 status=ok
// SIG undefined FUN_1468cb664(void)

undefined4 * FUN_1468cb664(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1468cb77a(param_1,local_48);
  FUN_1468cb8be(local_40,*param_4,param_4[1]);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_1468cb860(param_1,param_3,local_40,local_48);
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
      FUN_1468cb926(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cb77a FUN_1468cb77a body=230 status=ok
// SIG undefined FUN_1468cb77a(void)

int * FUN_1468cb77a(longlong *param_1,int *param_2)

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



// FUNCTION 1468cb860 FUN_1468cb860 body=93 status=ok
// SIG undefined FUN_1468cb860(void)

undefined8 FUN_1468cb860(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1468cb5c0(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1468c94f0(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1468cb8be FUN_1468cb8be body=103 status=ok
// SIG undefined FUN_1468cb8be(void)

undefined8 * FUN_1468cb8be(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  param_1[2] = *param_3;
  lVar1 = param_3[1];
  param_1[3] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1468cb926 FUN_1468cb926 body=473 status=ok
// SIG undefined FUN_1468cb926(void)

void FUN_1468cb926(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1468cbb00 FUN_1468cbb00 body=164 status=ok
// SIG undefined FUN_1468cbb00(void)

int FUN_1468cbb00(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar6 = (longlong)iVar1 * 0x70;
        if (*(longlong *)(lVar4 + lVar6) == *param_3) {
          return iVar1;
        }
        lVar5 = *(longlong *)(lVar4 + lVar6 + 8);
        if ((lVar5 != 0) && (lVar2 = param_3[1], lVar2 != 0)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar2);
            lVar5 = *(longlong *)(lVar4 + lVar6 + 8);
          }
          if (lVar5 == lVar2) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        iVar1 = *(int *)(lVar4 + 0x68 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1468cbba4 FUN_1468cbba4 body=226 status=ok
// SIG undefined FUN_1468cbba4(void)

int * FUN_1468cbba4(longlong *param_1,int *param_2)

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



// FUNCTION 1468cbc86 FUN_1468cbc86 body=134 status=ok
// SIG undefined FUN_1468cbc86(void)

undefined8 FUN_1468cbc86(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1468cbb00(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x70;
    *(undefined4 *)(lVar1 + 0x60 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x58 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_14685f3c6(lVar1 + lVar3 + 0x18);
    memmove((void *)(lVar1 + lVar3),param_3,0x68);
    FUN_1468cbd0c(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1468cbd0c FUN_1468cbd0c body=116 status=ok
// SIG undefined FUN_1468cbd0c(void)

void FUN_1468cbd0c(longlong *param_1,int param_2)

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



// FUNCTION 1468cbd80 FUN_1468cbd80 body=473 status=ok
// SIG undefined FUN_1468cbd80(void)

void FUN_1468cbd80(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x70;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x6c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x68 + lVar7) =
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



// FUNCTION 1468cbf5a FUN_1468cbf5a body=277 status=ok
// SIG undefined FUN_1468cbf5a(void)

longlong FUN_1468cbf5a(longlong *param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = FUN_1468cbb00();
  if (param_4 != 0) {
    *(bool *)param_4 = iVar2 != -1;
  }
  if (iVar2 == -1) {
    FUN_1468cbba4(param_1,local_38);
    FUN_1468cc070(local_30,param_3);
    *(undefined4 *)(local_30 + 0x68) = 0xffffffff;
    uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar2 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)(local_30 + 0x6c) = param_2;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(undefined4 *)(local_30 + 0x68) =
           *(undefined4 *)
            ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_38[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1468cbd80(param_1);
    }
  }
  else {
    local_30 = (longlong)iVar2 * 0x70 + *param_1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cc070 FUN_1468cc070 body=79 status=ok
// SIG undefined FUN_1468cc070(void)

undefined8 * FUN_1468cc070(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  FUN_1468cc0c0(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1468cc0c0 FUN_1468cc0c0 body=123 status=ok
// SIG undefined FUN_1468cc0c0(void)

undefined8 * FUN_1468cc0c0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1468cc13c();
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



// FUNCTION 1468cc13c FUN_1468cc13c body=146 status=ok
// SIG undefined FUN_1468cc13c(void)

longlong * FUN_1468cc13c(longlong *param_1,longlong *param_2)

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



// FUNCTION 1468cc1da FUN_1468cc1da body=125 status=ok
// SIG undefined FUN_1468cc1da(void)

undefined8 * FUN_1468cc1da(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_1409ffe1d();
  uVar2 = FUN_144a7a812();
  puVar3 = (undefined8 *)FUN_140010cf7(uVar2,uVar1,0,0x510,0,0,0,0);
  FUN_1468be472(puVar3,param_1);
  *puVar3 = &PTR_FUN_149e91ae0;
  puVar3[9] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined1 *)(puVar3 + 8) = 0;
  return puVar3;
}



// FUNCTION 1468cc258 FUN_1468cc258 body=86 status=ok
// SIG undefined FUN_1468cc258(void)

void FUN_1468cc258(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1468cc2ae FUN_1468cc2ae body=132 status=ok
// SIG undefined FUN_1468cc2ae(void)

void FUN_1468cc2ae(longlong param_1,int param_2)

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



// FUNCTION 1468cc334 FUN_1468cc334 body=109 status=ok
// SIG undefined FUN_1468cc334(void)

void FUN_1468cc334(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1468cc3c8(param_1,iVar1);
    }
    FUN_1468cc3a2((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1468cc44e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1468cc3a2 FUN_1468cc3a2 body=38 status=ok
// SIG undefined FUN_1468cc3a2(void)

void FUN_1468cc3a2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1468b549a(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1468cc3c8 FUN_1468cc3c8 body=132 status=ok
// SIG undefined FUN_1468cc3c8(void)

void FUN_1468cc3c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468cc44e FUN_1468cc44e body=62 status=ok
// SIG undefined FUN_1468cc44e(void)

void FUN_1468cc44e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468cc48c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1468cc48c FUN_1468cc48c body=93 status=ok
// SIG undefined FUN_1468cc48c(void)

ulonglong FUN_1468cc48c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1468cc4ea FUN_1468cc4ea body=89 status=ok
// SIG undefined FUN_1468cc4ea(void)

void FUN_1468cc4ea(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,0);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = (int)uVar2;
  FUN_14681c3fa(param_1,*(undefined4 *)(param_1 + 0x108),uVar2,0x10);
  return;
}



// FUNCTION 1468cc544 FUN_1468cc544 body=147 status=ok
// SIG undefined FUN_1468cc544(void)

void FUN_1468cc544(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468cc5d8 FUN_1468cc5d8 body=95 status=ok
// SIG undefined FUN_1468cc5d8(void)

void FUN_1468cc5d8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1468cc638 FUN_1468cc638 body=132 status=ok
// SIG undefined FUN_1468cc638(void)

void FUN_1468cc638(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1468cc6be FUN_1468cc6be body=108 status=ok
// SIG undefined FUN_1468cc6be(void)

void FUN_1468cc6be(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 1468cc72a FUN_1468cc72a body=38 status=ok
// SIG undefined FUN_1468cc72a(void)

void FUN_1468cc72a(undefined1 (*param_1) [16])

{
  *(undefined4 *)param_1[1] = 0;
  *param_1 = (undefined1  [16])0x0;
  *(undefined4 *)(param_1[1] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[2] = 0xffffffff;
  *(undefined4 *)(param_1[2] + 4) = 0xffffffff;
  *(undefined8 *)(param_1[2] + 8) = 0xffffffffffffffff;
  *(undefined4 *)param_1[3] = 0;
  param_1[3][4] = 0;
  return;
}



// FUNCTION 1468cc750 FUN_1468cc750 body=143 status=ok
// SIG undefined FUN_1468cc750(void)

void FUN_1468cc750(longlong param_1,int param_2)

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



// FUNCTION 1468cc802 FUN_1468cc802 body=22 status=ok
// SIG undefined FUN_1468cc802(void)

undefined1 FUN_1468cc802(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1447712aa(param_2,param_3);
  return 1;
}



// FUNCTION 1468cc884 FUN_1468cc884 body=267 status=ok
// SIG undefined FUN_1468cc884(void)

void FUN_1468cc884(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cc95f;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cc95f:
  FUN_1468cca46(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cc990 FUN_1468cc990 body=78 status=ok
// SIG undefined FUN_1468cc990(void)

void FUN_1468cc990(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0xc,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cca46 FUN_1468cca46 body=134 status=ok
// SIG undefined FUN_1468cca46(void)

void FUN_1468cca46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_3;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_30 = (ulonglong)DAT_14c892c64;
  local_38 = (ulonglong)DAT_14c892c60;
  FUN_1468ccacd(param_1,param_2,&local_20,DAT_14c892c2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ccacd FUN_1468ccacd body=197 status=ok
// SIG undefined FUN_1468ccacd(void)

undefined8
FUN_1468ccacd(float *param_1,longlong param_2,undefined8 *param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_5) {
    plVar3 = (longlong *)*param_3;
    lVar2 = *plVar3;
LAB_1468ccaf6:
    FUN_144aa025c(lVar2,param_1);
    FUN_144aa025c(*plVar3,param_1 + 1);
    FUN_144aa025c(*plVar3,param_1 + 2);
  }
  else {
    if (param_2 == param_4) {
      plVar3 = (longlong *)*param_3;
      lVar2 = *plVar3;
      if (*(int *)(*(longlong *)(lVar2 + 8) + 0x44) < 0x3ec) goto LAB_1468ccaf6;
    }
    else {
      if (param_2 != param_6) {
        uVar1 = 0;
        goto LAB_1468ccb1b;
      }
      plVar3 = (longlong *)*param_3;
    }
    FUN_144afe965(plVar3,&local_38);
    *param_1 = (float)local_38;
    param_1[1] = (float)local_30;
    param_1[2] = (float)local_28;
  }
  uVar1 = 1;
LAB_1468ccb1b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1468ccbb6 FUN_1468ccbb6 body=22 status=ok
// SIG undefined FUN_1468ccbb6(void)

undefined1 FUN_1468ccbb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14480c34d(param_2,param_3);
  return 1;
}



// FUNCTION 1468ccbf2 FUN_1468ccbf2 body=267 status=ok
// SIG undefined FUN_1468ccbf2(void)

void FUN_1468ccbf2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468ccccd;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468ccccd:
  FUN_1468ccdb0(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cccfe FUN_1468cccfe body=78 status=ok
// SIG undefined FUN_1468cccfe(void)

void FUN_1468cccfe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0x18,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ccdb0 FUN_1468ccdb0 body=134 status=ok
// SIG undefined FUN_1468ccdb0(void)

void FUN_1468ccdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_3;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_30 = (ulonglong)DAT_14c892c60;
  local_38 = (ulonglong)DAT_14c892c64;
  FUN_1468cce37(param_1,param_2,&local_20,DAT_14c892c2c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cce37 FUN_1468cce37 body=181 status=ok
// SIG undefined FUN_1468cce37(void)

undefined8
FUN_1468cce37(double *param_1,longlong param_2,undefined8 *param_3,longlong param_4,longlong param_5
             ,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_144afe965(*param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cce75;
    }
    param_3 = (undefined8 *)*param_3;
    FUN_144aa025c(*param_3,&local_2c);
    FUN_144aa025c(*param_3,&local_28);
    FUN_144aa025c(*param_3,&local_24);
    *param_1 = (double)local_2c;
    param_1[1] = (double)local_28;
    param_1[2] = (double)local_24;
  }
  uVar1 = 1;
LAB_1468cce75:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ccf4a FUN_1468ccf4a body=267 status=ok
// SIG undefined FUN_1468ccf4a(void)

void FUN_1468ccf4a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cd025;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cd025:
  FUN_1468cd10a(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cd05a FUN_1468cd05a body=72 status=ok
// SIG undefined FUN_1468cd05a(void)

void FUN_1468cd05a(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cd10a FUN_1468cd10a body=96 status=ok
// SIG undefined FUN_1468cd10a(void)

void FUN_1468cd10a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cd16a(param_1,param_2,param_3,DAT_14c892c20,DAT_14c892dd4,DAT_14c892dd8);
  return;
}



// FUNCTION 1468cd16a FUN_1468cd16a body=145 status=ok
// SIG undefined FUN_1468cd16a(void)

undefined8
FUN_1468cd16a(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_1402197d0(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cd1a4;
    }
    uVar1 = FUN_1408383eb(param_3,local_28);
    FUN_1408383eb(uVar1,&local_20);
    *param_1 = local_20 << 0x20 | (ulonglong)local_28[0];
  }
  uVar1 = 1;
LAB_1468cd1a4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cd212 FUN_1468cd212 body=42 status=ok
// SIG undefined FUN_1468cd212(void)

undefined1 FUN_1468cd212(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408383eb(param_2,param_3);
  FUN_1408383eb(uVar1,param_3 + 8);
  return 1;
}



// FUNCTION 1468cd284 FUN_1468cd284 body=267 status=ok
// SIG undefined FUN_1468cd284(void)

void FUN_1468cd284(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cd35f;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cd35f:
  FUN_1468cd46c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cd394 FUN_1468cd394 body=112 status=ok
// SIG undefined FUN_1468cd394(void)

void FUN_1468cd394(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877((int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,
                (int)((ulonglong)param_2[1] >> 0x20) * 0x17 + (int)param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cd46c FUN_1468cd46c body=96 status=ok
// SIG undefined FUN_1468cd46c(void)

void FUN_1468cd46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cd4cc(param_1,param_2,param_3,DAT_14c892c20,DAT_14c892dd8,DAT_14c892dd4);
  return;
}



// FUNCTION 1468cd4cc FUN_1468cd4cc body=145 status=ok
// SIG undefined FUN_1468cd4cc(void)

undefined8
FUN_1468cd4cc(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    uVar1 = FUN_1408383eb(param_3,param_1);
    FUN_1408383eb(uVar1,param_1 + 1);
  }
  else {
    if (param_2 != param_4 && param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cd507;
    }
    FUN_1402197d0(param_3,&local_20);
    *param_1 = (longlong)(int)local_20;
    param_1[1] = local_20 >> 0x20;
  }
  uVar1 = 1;
LAB_1468cd507:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cd574 FUN_1468cd574 body=22 status=ok
// SIG undefined FUN_1468cd574(void)

undefined1 FUN_1468cd574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468cd78e(param_2,param_3);
  return 1;
}



// FUNCTION 1468cd5d0 FUN_1468cd5d0 body=267 status=ok
// SIG undefined FUN_1468cd5d0(void)

void FUN_1468cd5d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cd6ab;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cd6ab:
  FUN_1468cd838(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cd6e0 FUN_1468cd6e0 body=72 status=ok
// SIG undefined FUN_1468cd6e0(void)

void FUN_1468cd6e0(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cd78e FUN_1468cd78e body=168 status=ok
// SIG undefined FUN_1468cd78e(void)

longlong * FUN_1468cd78e(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1468cd838 FUN_1468cd838 body=96 status=ok
// SIG undefined FUN_1468cd838(void)

void FUN_1468cd838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cd898(param_1,param_2,param_3,DAT_14c892dd0,DAT_14c892ddc,DAT_14c892de0);
  return;
}



// FUNCTION 1468cd898 FUN_1468cd898 body=123 status=ok
// SIG undefined FUN_1468cd898(void)

undefined8
FUN_1468cd898(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == param_5) || (param_2 == param_4)) {
    FUN_1468cd78e(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cd8c5;
    }
    FUN_1468cd914(param_3,local_28);
    *param_1 = local_20 << 0x20 | (ulonglong)local_28[0];
  }
  uVar1 = 1;
LAB_1468cd8c5:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cd914 FUN_1468cd914 body=172 status=ok
// SIG undefined FUN_1468cd914(void)

longlong * FUN_1468cd914(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1468cd9d6 FUN_1468cd9d6 body=22 status=ok
// SIG undefined FUN_1468cd9d6(void)

undefined1 FUN_1468cd9d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1468cd914(param_2,param_3);
  return 1;
}



// FUNCTION 1468cda34 FUN_1468cda34 body=267 status=ok
// SIG undefined FUN_1468cda34(void)

void FUN_1468cda34(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cdb0f;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cdb0f:
  FUN_1468cdc1c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cdb44 FUN_1468cdb44 body=112 status=ok
// SIG undefined FUN_1468cdb44(void)

void FUN_1468cdb44(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877((int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2,
                (int)((ulonglong)param_2[1] >> 0x20) * 0x17 + (int)param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cdc1c FUN_1468cdc1c body=96 status=ok
// SIG undefined FUN_1468cdc1c(void)

void FUN_1468cdc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cdc7c(param_1,param_2,param_3,DAT_14c892dd0,DAT_14c892de0,DAT_14c892ddc);
  return;
}



// FUNCTION 1468cdc7c FUN_1468cdc7c body=123 status=ok
// SIG undefined FUN_1468cdc7c(void)

undefined8
FUN_1468cdc7c(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    FUN_1468cd914(param_3,param_1);
  }
  else {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      uVar1 = 0;
      goto LAB_1468cdca9;
    }
    FUN_1468cd78e(param_3,&local_20);
    *param_1 = local_20 & 0xffffffff;
    param_1[1] = local_20 >> 0x20;
  }
  uVar1 = 1;
LAB_1468cdca9:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cdd54 FUN_1468cdd54 body=267 status=ok
// SIG undefined FUN_1468cdd54(void)

void FUN_1468cdd54(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468cde2f;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468cde2f:
  FUN_1468cdf0e(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468cde64 FUN_1468cde64 body=79 status=ok
// SIG undefined FUN_1468cde64(void)

void FUN_1468cde64(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,8,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468cdf0e FUN_1468cdf0e body=96 status=ok
// SIG undefined FUN_1468cdf0e(void)

void FUN_1468cdf0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468cdf6e(param_1,param_2,param_3,DAT_14c892db8,DAT_14c892dbc,DAT_14c892dc0);
  return;
}



// FUNCTION 1468cdf6e FUN_1468cdf6e body=145 status=ok
// SIG undefined FUN_1468cdf6e(void)

undefined8
FUN_1468cdf6e(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_4 || param_2 == param_5) {
    FUN_140731b82(param_3,param_1);
  }
  else {
    if (param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468cdfa8;
    }
    uVar1 = FUN_1408383eb(param_3,local_28);
    FUN_1408383eb(uVar1,&local_20);
    *param_1 = local_20 << 0x20 | (ulonglong)local_28[0];
  }
  uVar1 = 1;
LAB_1468cdfa8:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ce024 FUN_1468ce024 body=42 status=ok
// SIG undefined FUN_1468ce024(void)

undefined1 FUN_1468ce024(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408383eb(param_2,param_3);
  FUN_1408383eb(uVar1,param_3 + 8);
  return 1;
}



// FUNCTION 1468ce096 FUN_1468ce096 body=267 status=ok
// SIG undefined FUN_1468ce096(void)

void FUN_1468ce096(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468ce171;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468ce171:
  FUN_1468ce25c(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ce1a6 FUN_1468ce1a6 body=79 status=ok
// SIG undefined FUN_1468ce1a6(void)

void FUN_1468ce1a6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,0x10,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ce25c FUN_1468ce25c body=96 status=ok
// SIG undefined FUN_1468ce25c(void)

void FUN_1468ce25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_1468ce2bc(param_1,param_2,param_3,DAT_14c892db8,DAT_14c892dc0,DAT_14c892dbc);
  return;
}



// FUNCTION 1468ce2bc FUN_1468ce2bc body=145 status=ok
// SIG undefined FUN_1468ce2bc(void)

undefined8
FUN_1468ce2bc(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == param_5) {
    uVar1 = FUN_1408383eb(param_3,param_1);
    FUN_1408383eb(uVar1,param_1 + 1);
  }
  else {
    if (param_2 != param_4 && param_2 != param_6) {
      uVar1 = 0;
      goto LAB_1468ce2f7;
    }
    FUN_140731b82(param_3,&local_20);
    *param_1 = (longlong)(int)local_20;
    param_1[1] = local_20 >> 0x20;
  }
  uVar1 = 1;
LAB_1468ce2f7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ce364 FUN_1468ce364 body=22 status=ok
// SIG undefined FUN_1468ce364(void)

undefined1 FUN_1468ce364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140b9be50(param_2,param_3);
  return 1;
}



// FUNCTION 1468ce3c0 FUN_1468ce3c0 body=267 status=ok
// SIG undefined FUN_1468ce3c0(void)

void FUN_1468ce3c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) +
           (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892b68) {
    local_34 = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_14281b48e();
    if (0 < iVar2) {
      uVar1 = *(uint *)(param_2 + 8);
      uVar4 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8) + 8 +
                      (ulonglong)(uVar1 & 0x1fff) * 0xc)) {
        uVar4 = uVar1 + 1;
      }
      uVar3 = *(ulonglong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
               (ulonglong)(uVar4 & 0x1fff) * 0xc);
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_1468ce49b;
    }
  }
  uVar5 = 0;
  uVar3 = 0;
LAB_1468ce49b:
  FUN_1468ce586(param_4,uVar5 | uVar3,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468ce4d0 FUN_1468ce4d0 body=79 status=ok
// SIG undefined FUN_1468ce4d0(void)

void FUN_1468ce4d0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  (*(code *)PTR_FUN_14c75b148)(param_2,8,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


