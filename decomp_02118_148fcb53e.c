// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148fcb53e FUN_148fcb53e body=112 status=ok
// SIG undefined FUN_148fcb53e(void)

void FUN_148fcb53e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 148fcb5ae FUN_148fcb5ae body=272 status=ok
// SIG undefined FUN_148fcb5ae(void)

undefined4 * FUN_148fcb5ae(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fcb6c0(param_1,local_40);
  FUN_148fcb7a6(local_38,*param_3,param_3[1]);
  *(undefined4 *)(local_38 + 0xf) = 0xffffffff;
  iVar7 = *(int *)(local_38 + 1);
  if (iVar7 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_38;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
    *(uint *)((longlong)local_38 + 0x7c) = uVar2;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 0xf) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_148fcb80c(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcb6c0 FUN_148fcb6c0 body=229 status=ok
// SIG undefined FUN_148fcb6c0(void)

int * FUN_148fcb6c0(longlong *param_1,int *param_2)

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
      FUN_140eca382(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 148fcb7a6 FUN_148fcb7a6 body=101 status=ok
// SIG undefined FUN_148fcb7a6(void)

undefined8 * FUN_148fcb7a6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_148fca51c(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 148fcb80c FUN_148fcb80c body=476 status=ok
// SIG undefined FUN_148fcb80c(void)

void FUN_148fcb80c(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x80;
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
        *(int *)(lVar3 + 0x7c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x78 + lVar11) =
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



// FUNCTION 148fcb9ea FUN_148fcb9ea body=268 status=ok
// SIG undefined FUN_148fcb9ea(void)

undefined4 * FUN_148fcb9ea(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148fcbaf8(param_1,local_40);
  FUN_148fcbbde(param_3,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  iVar7 = *(int *)(local_38 + 1);
  if (iVar7 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_38;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
    *(uint *)((longlong)local_38 + 0x1c) = uVar2;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 3) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_148fcbc42(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcbaf8 FUN_148fcbaf8 body=229 status=ok
// SIG undefined FUN_148fcbaf8(void)

int * FUN_148fcbaf8(longlong *param_1,int *param_2)

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



// FUNCTION 148fcbbde FUN_148fcbbde body=100 status=ok
// SIG undefined FUN_148fcbbde(void)

undefined8 * FUN_148fcbbde(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
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
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 148fcbc42 FUN_148fcbc42 body=476 status=ok
// SIG undefined FUN_148fcbc42(void)

void FUN_148fcbc42(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x20;
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
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
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



// FUNCTION 148fcbe20 FUN_148fcbe20 body=315 status=ok
// SIG undefined FUN_148fcbe20(void)

undefined4 * FUN_148fcbe20(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fcbf5c(param_1,local_48);
  FUN_148fcc0b4(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_148fcc042(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148fcc256(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcbf5c FUN_148fcbf5c body=229 status=ok
// SIG undefined FUN_148fcbf5c(void)

int * FUN_148fcbf5c(longlong *param_1,int *param_2)

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



// FUNCTION 148fcc042 FUN_148fcc042 body=114 status=ok
// SIG undefined FUN_148fcc042(void)

undefined8 FUN_148fcc042(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_148fcc118(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148fcc1e4(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 148fcc0b4 FUN_148fcc0b4 body=100 status=ok
// SIG undefined FUN_148fcc0b4(void)

undefined8 * FUN_148fcc0b4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
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
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 148fcc118 FUN_148fcc118 body=203 status=ok
// SIG undefined FUN_148fcc118(void)

int FUN_148fcc118(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_148fcc162:
      lVar10 = (longlong)iVar1 * 0x20;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_148fcc1d8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_148fcc1d8;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_148fcc1c9;
    }
  }
  return -1;
LAB_148fcc1d8:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_148fcc1c9:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_148fcc162;
}



// FUNCTION 148fcc1e4 FUN_148fcc1e4 body=114 status=ok
// SIG undefined FUN_148fcc1e4(void)

void FUN_148fcc1e4(longlong *param_1,int param_2)

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



// FUNCTION 148fcc256 FUN_148fcc256 body=476 status=ok
// SIG undefined FUN_148fcc256(void)

void FUN_148fcc256(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x20;
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
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
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



// FUNCTION 148fcc434 FUN_148fcc434 body=132 status=ok
// SIG undefined FUN_148fcc434(void)

void FUN_148fcc434(longlong param_1,int param_2)

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



// FUNCTION 148fcc4ba FUN_148fcc4ba body=143 status=ok
// SIG undefined FUN_148fcc4ba(void)

void FUN_148fcc4ba(longlong param_1,int param_2)

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



// FUNCTION 148fcc54a FUN_148fcc54a body=147 status=ok
// SIG undefined FUN_148fcc54a(void)

void FUN_148fcc54a(longlong param_1,int param_2)

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



// FUNCTION 148fcc5de FUN_148fcc5de body=110 status=ok
// SIG undefined FUN_148fcc5de(void)

longlong * FUN_148fcc5de(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = FUN_1467b79d4(*param_3);
  FUN_140056680(param_1 + 2,uVar1);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148fcc64c FUN_148fcc64c body=113 status=ok
// SIG undefined FUN_148fcc64c(void)

void FUN_148fcc64c(longlong *param_1)

{
  FUN_148fcc6bd(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_148fcc6fa(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fcc6bd FUN_148fcc6bd body=61 status=ok
// SIG undefined FUN_148fcc6bd(void)

void FUN_148fcc6bd(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148fcc6fa FUN_148fcc6fa body=38 status=ok
// SIG undefined FUN_148fcc6fa(void)

void FUN_148fcc6fa(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148fcacc4(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 148fcc728 FUN_148fcc728 body=471 status=ok
// SIG undefined FUN_148fcc728(void)

longlong * FUN_148fcc728(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)param_1[0x12] != *(int *)((longlong)param_1 + 0xbc)) {
    plVar5 = param_1 + 0x18;
    if ((longlong *)param_1[0x19] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x19];
    }
    iVar6 = (int)*plVar5;
    if (iVar6 != -1) {
      plVar5 = (longlong *)0x0;
      do {
        lVar2 = param_1[0x11] + (longlong)iVar6 * 0x80;
        if (*(char *)(param_1[0x11] + (longlong)iVar6 * 0x80) == '\0') {
          if (((lVar2 + 8U & 0xfffffffffffffff7) == 0) ||
             (plVar5 = *(longlong **)(lVar2 + 0x40), plVar5 == (longlong *)0x0)) goto LAB_148fcc77f;
          iVar6 = (int)plVar5[1];
          goto LAB_148fcc869;
        }
        iVar6 = *(int *)(lVar2 + 0x78);
      } while (iVar6 != -1);
      goto LAB_148fcc781;
    }
  }
LAB_148fcc77f:
  plVar5 = (longlong *)0x0;
LAB_148fcc781:
  FUN_148fe2e6e(0,&local_88,1);
  if (&local_88 == param_2) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_88;
    local_88 = 0;
    *(undefined4 *)(param_2 + 1) = local_80;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_7c;
  }
  if (plVar5 == (longlong *)0x0) goto LAB_148fcc7e4;
  goto LAB_148fcc7c7;
  while( true ) {
    LOCK();
    iVar4 = (int)plVar5[1];
    bVar7 = iVar6 == iVar4;
    if (bVar7) {
      *(int *)(plVar5 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    if (bVar7) break;
LAB_148fcc869:
    if (iVar6 == 0) goto LAB_148fcc77f;
  }
  plVar3 = *(longlong **)(lVar2 + 0x38);
  if (plVar3 == (longlong *)0x0) goto LAB_148fcc781;
  (**(code **)(*param_1 + 0x2b8))(0,&local_88);
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_98,&local_88);
  if (&local_98 == param_2) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_2 + 1) = local_90;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_8c;
  }
  FUN_1458ea6a8(&local_88);
LAB_148fcc7c7:
  LOCK();
  plVar3 = plVar5 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_148fcc7e4:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fcc906 FUN_148fcc906 body=622 status=ok
// SIG undefined FUN_148fcc906(void)

void FUN_148fcc906(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong *local_98 [2];
  longlong *local_88 [2];
  undefined8 local_78;
  longlong *local_70;
  wchar_t **local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf53f8) {
    FUN_144b3d300(&DAT_14cbf53f8);
    if (DAT_14cbf53f8 == -1) {
      local_48 = L"SocialChatRoom_MemberJoined";
      local_40 = 0x1b;
      FUN_1446e940c(&local_58,&local_48);
      local_48 = L"SocialChatRoomChannel";
      local_40 = 0x15;
      FUN_1446e940c(&local_68,&local_48);
      FUN_140208bae(&DAT_14cbf53e8,&local_68,&local_58,L"{0} has joined.");
      atexit((_func_5014 *)&LAB_1443bd36d);
      _Init_thread_footer(&DAT_14cbf53f8);
    }
  }
  if ((*(byte *)(param_1 + 7) & 0xfe) == 2) {
    FUN_148fcc728(param_2,local_a8);
    FUN_140233b1a(local_98,local_a8);
    FUN_14023409e(&local_b8,&DAT_14cbf53e8,1);
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
    FUN_14023423e(local_38,local_98);
    local_68 = &local_48;
    local_60 = &local_28;
    FUN_14010d304(&local_58);
    local_78 = local_b8;
    local_70 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_88,&local_78,&local_58);
    FUN_14007f2db(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_148fccb76(param_1,local_88);
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x2a0))(param_1);
  FUN_148fe903e(uVar3,param_2);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fccb76 FUN_148fccb76 body=143 status=ok
// SIG undefined FUN_148fccb76(void)

void FUN_148fccb76(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined1 *)(param_1 + 0x38);
  uVar2 = FUN_1447a1f4a(param_2);
  FUN_140056680(local_50,L"System");
  FUN_148fcd40c(local_40,local_50,uVar2,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  FUN_148fcd18a(param_1,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fccc06 FUN_148fccc06 body=622 status=ok
// SIG undefined FUN_148fccc06(void)

void FUN_148fccc06(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong *local_98 [2];
  longlong *local_88 [2];
  undefined8 local_78;
  longlong *local_70;
  wchar_t **local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf5410) {
    FUN_144b3d300(&DAT_14cbf5410);
    if (DAT_14cbf5410 == -1) {
      local_48 = L"SocialChatRoom_MemberExit";
      local_40 = 0x19;
      FUN_1446e940c(&local_58,&local_48);
      local_48 = L"SocialChatRoomChannel";
      local_40 = 0x15;
      FUN_1446e940c(&local_68,&local_48);
      FUN_140208bae(&DAT_14cbf5400,&local_68,&local_58,L"{0} has left.");
      atexit((_func_5014 *)&LAB_1443bd381);
      _Init_thread_footer(&DAT_14cbf5410);
    }
  }
  if ((*(byte *)(param_1 + 7) & 0xfe) == 2) {
    FUN_148fcc728(param_2,local_a8);
    FUN_140233b1a(local_98,local_a8);
    FUN_14023409e(&local_b8,&DAT_14cbf5400,1);
    local_48 = (wchar_t *)CONCAT44(local_48._4_4_,4);
    FUN_14023423e(local_38,local_98);
    local_68 = &local_48;
    local_60 = &local_28;
    FUN_14010d304(&local_58);
    local_78 = local_b8;
    local_70 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_88,&local_78,&local_58);
    FUN_14007f2db(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    FUN_148fccb76(param_1,local_88);
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_148fe903e(uVar3,param_2);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcce76 FUN_148fcce76 body=33 status=ok
// SIG undefined FUN_148fcce76(void)

void FUN_148fcce76(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  FUN_148fe903e(uVar1,param_2);
  return;
}



// FUNCTION 148fcce98 FUN_148fcce98 body=371 status=ok
// SIG undefined FUN_148fcce98(void)

void FUN_148fcce98(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  longlong *local_78;
  undefined **local_70;
  longlong *local_68;
  longlong local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  uVar4 = FUN_149008ad6(uVar4);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))();
  local_68 = (longlong *)*puVar5;
  local_60 = puVar5[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_70 = &PTR_FUN_14a5af930;
  local_50 = 0;
  uStack_48 = 0;
  lVar6 = FUN_148fcd00c(uVar4,&local_70);
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  if (lVar6 != 0) {
    FUN_148fcd066(&local_70,lVar6,*param_2,*(undefined1 *)(param_1 + 0x38));
    plVar3 = local_68;
    local_80 = local_70;
    local_78 = local_68;
    if (local_68 == (longlong *)0x0) {
      FUN_148fcd18a(param_1,&local_80);
    }
    else {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      FUN_148fcd18a(param_1,&local_80);
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
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd00c FUN_148fcd00c body=89 status=ok
// SIG undefined FUN_148fcd00c(void)

undefined8 FUN_148fcd00c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = FUN_147bede77(param_2);
  iVar2 = FUN_148ffe348((longlong *)(param_1 + 0x88),uVar1,param_2);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x88);
    if (lVar4 != -0x30 && lVar4 != 0) {
      uVar3 = FUN_14479d2ce();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148fcd066 FUN_148fcd066 body=292 status=ok
// SIG undefined FUN_148fcd066(void)

undefined8 *
FUN_148fcd066(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_148fe48e2(puVar2,param_3,param_4);
  *puVar2 = &PTR_FUN_14ba58ee0;
  puVar2[9] = 0;
  FUN_14485c47a(puVar2 + 9,param_2);
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba58fd0;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar3) goto LAB_148fcd15e;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      puVar2[2] = plVar3;
      goto LAB_148fcd15e;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  puVar2[2] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_148fcd15e:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 148fcd18a FUN_148fcd18a body=285 status=ok
// SIG undefined FUN_148fcd18a(void)

void FUN_148fcd18a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar7 = (int)param_1[0xc];
  if ((longlong)iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    lVar2 = param_1[0xb];
    lVar3 = *param_2;
    lVar6 = (longlong)iVar7 * 0x10;
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar8) == lVar3) goto LAB_148fcd25a;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 != lVar8);
    if (0 < iVar7) {
      local_38 = *(undefined8 *)(lVar2 + -0x10 + lVar6);
      local_30 = *(longlong *)(lVar2 + -8 + lVar6);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      FUN_148fcd524(lVar3,&local_38);
      iVar7 = (int)param_1[0xc];
    }
  }
  *(uint *)(param_1 + 0xc) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 100) < iVar7 + 1U) {
    FUN_148fe90e2(param_1 + 0xb,iVar7);
  }
  lVar2 = param_1[0xb];
  *(longlong *)(lVar2 + (longlong)iVar7 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar7 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
  FUN_148fe9168(uVar5,param_2);
LAB_148fcd25a:
  puVar4 = (undefined8 *)param_2[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd2bc FUN_148fcd2bc body=76 status=ok
// SIG undefined FUN_148fcd2bc(void)

undefined8 * FUN_148fcd2bc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  uVar1 = FUN_149008ad6(uVar1);
  plVar2 = (longlong *)FUN_148fcd308(uVar1,0);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0xd0))(plVar2,param_2);
  }
  return param_2;
}



// FUNCTION 148fcd308 FUN_148fcd308 body=109 status=ok
// SIG undefined FUN_148fcd308(void)

void FUN_148fcd308(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  plVar1 = (longlong *)FUN_148fdc7e6();
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_18);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  FUN_1401e3228(&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd376 FUN_148fcd376 body=150 status=ok
// SIG undefined FUN_148fcd376(void)

void FUN_148fcd376(undefined8 param_1)

{
  FUN_1448097c4(param_1,L"&amp;",&DAT_149e05ec0,1);
  FUN_1448097c4(param_1,L"&quot;",&DAT_149e01f5a,1);
  FUN_1448097c4(param_1,L"&apos;",&DAT_149e0208a,1);
  FUN_1448097c4(param_1,L"&lt;",&DAT_149e0633e,1);
  FUN_1448097c4(param_1,L"&gt;",&DAT_149e06342,1);
  return;
}



// FUNCTION 148fcd40c FUN_148fcd40c body=279 status=ok
// SIG undefined FUN_148fcd40c(void)

undefined8 *
FUN_148fcd40c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  FUN_148fe4b7e(puVar2,param_2,param_3,param_4);
  *puVar2 = &PTR_FUN_14ba58ff0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba59060;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar3) goto LAB_148fcd4f7;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      puVar2[2] = plVar3;
      goto LAB_148fcd4f7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  puVar2[2] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_148fcd4f7:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 148fcd524 FUN_148fcd524 body=124 status=ok
// SIG undefined FUN_148fcd524(void)

void FUN_148fcd524(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000148fcd594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fcd5a0 FUN_148fcd5a0 body=99 status=ok
// SIG undefined FUN_148fcd5a0(void)

void FUN_148fcd5a0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != param_2) {
    uVar1 = (**(code **)(*param_2 + 0x2b8))(param_2);
    local_20 = param_2;
    FUN_148fcd604(uVar1,local_28,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd604 FUN_148fcd604 body=258 status=ok
// SIG undefined FUN_148fcd604(void)

undefined8
FUN_148fcd604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_40 = &PTR_LAB_14ba5b590;
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
  *local_40 = &PTR_FUN_14ba5b520;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = &LAB_148fcd708;
  FUN_148fe8f56(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd716 FUN_148fcd716 body=82 status=ok
// SIG undefined FUN_148fcd716(void)

void FUN_148fcd716(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_148fcd18a(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd76a FUN_148fcd76a body=90 status=ok
// SIG undefined FUN_148fcd76a(void)

void FUN_148fcd76a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 6) = (int)param_2[1];
  uVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_140498822(uVar3,param_2);
  return;
}



// FUNCTION 148fcd7c4 FUN_148fcd7c4 body=74 status=ok
// SIG undefined FUN_148fcd7c4(void)

undefined8 FUN_148fcd7c4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 == '\0') {
    FUN_140056680(param_2,L"(source name unavailable)");
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x48);
    FUN_148fcc728(uVar2,param_2);
  }
  return param_2;
}



// FUNCTION 148fcd812 FUN_148fcd812 body=134 status=ok
// SIG undefined FUN_148fcd812(void)

void FUN_148fcd812(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a787a6(param_1 + 0x1c,param_3);
  *(char *)(param_1 + 7) = (char)param_4;
  (**(code **)(*param_1 + 0x318))(param_1,local_38,param_4,param_3);
  FUN_148fcd76a(param_1,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcd89a FUN_148fcd89a body=522 status=ok
// SIG undefined FUN_148fcd89a(void)

undefined8 FUN_148fcd89a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined **local_68;
  uint local_60;
  undefined4 uStack_5c;
  byte local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_2 + 1) - 2U < 0x7fffffff) {
    FUN_148fcd2bc(param_1,&local_78);
    bVar3 = true;
    if (local_78 != (longlong *)0x0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      lVar5 = FUN_149008ad6(uVar6);
      FUN_148fcdaa6(*(undefined8 *)(lVar5 + 0x70),&local_68,0);
      if ((&DAT_149fc1b6e)[local_50] == '\x01') {
        if (((longlong *)CONCAT44(uStack_5c,local_60) != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_5c,local_60) + 0x28))(), cVar4 != '\0'
           )) {
LAB_148fcd9d0:
          local_88 = (void *)0x0;
          local_80 = *(int *)(param_2 + 1);
          lVar5 = (longlong)local_80;
          _Src = (void *)*param_2;
          if (lVar5 == 0) {
            local_7c = 0;
          }
          else {
            FUN_1446dd670(&local_88,local_80,0);
            memcpy(local_88,_Src,lVar5 * 2);
          }
          FUN_148fcd376(&local_88);
          uVar6 = FUN_14127b0d4(&local_68);
          cVar4 = (**(code **)(*local_78 + 0x30))(local_78,uVar6,param_1 + 0xe0,&local_88);
          if (local_88 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (cVar4 != '\0') {
            local_68 = &PTR_FUN_14a5af930;
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            local_68 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
            bVar3 = false;
            goto LAB_148fcd904;
          }
        }
      }
      else if ((local_60 & 0xffffff) != 0) goto LAB_148fcd9d0;
      local_68 = &PTR_FUN_14a5af930;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
    }
LAB_148fcd904:
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    uVar6 = 1;
    if (!bVar3) goto LAB_148fcd8c4;
  }
  uVar6 = 0;
LAB_148fcd8c4:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148fcdaa6 FUN_148fcdaa6 body=197 status=ok
// SIG undefined FUN_148fcdaa6(void)

undefined8 * FUN_148fcdaa6(longlong param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar3 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x80;
        if (*(byte *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x80) == param_3) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = &PTR_FUN_14a184370;
            bVar1 = *(byte *)(lVar3 + 0x20);
            *(byte *)(param_2 + 3) = bVar1;
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_2 + 1,lVar3 + 0x10);
            goto LAB_148fcdac7;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x78);
      } while (iVar2 != -1);
    }
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
LAB_148fcdac7:
  *param_2 = &PTR_FUN_14a5af930;
  param_2[4] = 0;
  param_2[5] = 0;
  return param_2;
}



// FUNCTION 148fcdb6c FUN_148fcdb6c body=543 status=ok
// SIG undefined FUN_148fcdb6c(void)

undefined8
FUN_148fcdb6c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_3) {
  case 0:
    local_30 = L"SocialChatRoomGeneralTab";
    local_28 = 0x18;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"SocialChatRoom";
    local_28 = 0xe;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Global";
    break;
  case 1:
    local_30 = L"SocialChatRoomFoundersTab";
    local_28 = 0x19;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"SocialChatRoom";
    local_28 = 0xe;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Founders";
    break;
  case 2:
    local_30 = L"SocialChatRoomPartyTab";
    local_28 = 0x16;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"SocialChatRoom";
    local_28 = 0xe;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Party";
    break;
  case 3:
    local_30 = L"SocialChatRoomTeamTab";
    local_28 = 0x15;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"SocialChatRoom";
    local_28 = 0xe;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"Team";
    break;
  case 4:
    local_30 = L"SocialChatRoomSystemTab";
    local_28 = 0x17;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"SocialChatRoom";
    local_28 = 0xe;
    FUN_1446e940c(local_38,&local_30);
    pwVar1 = L"System";
    break;
  default:
    FUN_140009b9a(param_2,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_140208bae(param_2,local_38,local_34,pwVar1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fcdd92 FUN_148fcdd92 body=929 status=ok
// SIG undefined FUN_148fcdd92(void)

void FUN_148fcdd92(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar11 = *(longlong **)(param_4 + 0x10);
  if (plVar11 == (longlong *)0x0) {
LAB_148fcddc7:
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) goto LAB_148fcddc7;
      LOCK();
      iVar4 = (int)plVar11[1];
      bVar12 = iVar6 == iVar4;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar12);
  }
  local_70 = 0;
  if (plVar11 != (longlong *)0x0) {
    local_70 = *(undefined8 *)(param_4 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  lVar1 = param_1 + 0x30;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = plVar11;
  FUN_141238a10(lVar1,&local_78);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  plVar11 = (longlong *)param_2[1];
  plVar10 = *(longlong **)(param_1 + 0x88);
  if (plVar10 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 0x88);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x88) = plVar11;
    param_3 = *(longlong *)(param_1 + 0x28);
  }
  FUN_148fcdaa6(param_3,&local_78,0);
  plVar11 = (longlong *)*param_2;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  puVar3 = local_88;
  local_80 = 3;
  *local_88 = &PTR_LAB_14ba5b670;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_88[2] = lVar7;
  *local_88 = &PTR_FUN_14ba5b600;
  local_88[3] = 0;
  FUN_14485c47a(local_88 + 3,param_1);
  puVar3[4] = FUN_148fce134;
  uVar8 = FUN_14127b0d4(lVar1);
  uVar9 = FUN_14127b0d4(&local_78);
  (**(code **)(*plVar11 + 0x10))(plVar11,uVar9,uVar8,&local_88);
  FUN_1449db362(&local_88);
  plVar11 = (longlong *)*param_2;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,3,0x10);
  puVar3 = local_88;
  local_80 = 3;
  *local_88 = &PTR_LAB_14ba5b670;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_88[2] = lVar7;
  *local_88 = &PTR_FUN_14ba5b600;
  local_88[3] = 0;
  FUN_14485c47a(local_88 + 3,param_1);
  puVar3[4] = FUN_148fce27c;
  uVar8 = FUN_14127b0d4(lVar1);
  uVar9 = FUN_14127b0d4(&local_78);
  (**(code **)(*plVar11 + 0x50))(plVar11,uVar9,uVar8,&local_88);
  FUN_1449db362(&local_88);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  plVar11 = (longlong *)param_2[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fce134 FUN_148fce134 body=327 status=ok
// SIG undefined FUN_148fce134(void)

void FUN_148fce134(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined **local_60 [3];
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_148fce15d;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    plVar3 = *(longlong **)(param_1 + 0x80);
    if (plVar3 != (longlong *)0x0) {
      FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x28),local_60,0);
      uVar6 = FUN_14127b0d4(param_1 + 0x30);
      uVar7 = FUN_14127b0d4(local_60);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_70,uVar7,uVar6);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_68 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
      local_60[0] = &PTR_FUN_14a5af930;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      local_60[0] = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])();
    }
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_148fce15d:
  FUN_148fce5a8(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fce27c FUN_148fce27c body=810 status=ok
// SIG undefined FUN_148fce27c(void)

void FUN_148fce27c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  ulonglong uStack_e0;
  longlong *local_d0;
  longlong *local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  byte local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined **local_90 [3];
  byte local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_148fce2b8;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar14 = iVar7 == iVar6;
      if (bVar14) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar14);
    plVar4 = *(longlong **)(param_1 + 0x80);
    if (plVar4 != (longlong *)0x0) {
      local_f0 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20);
      FUN_148fcdaa6(*(longlong *)(param_1 + 0x28),local_90,0);
      uVar8 = FUN_14127b0d4(param_1 + 0x30);
      uVar9 = FUN_14127b0d4(local_90);
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_d0,uVar9,uVar8);
      if (local_d0 != (longlong *)0x0) {
        local_e8 = (undefined8 *)0x0;
        uStack_e0 = 0;
        (**(code **)(*local_d0 + 0x18))();
        plVar4 = (longlong *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x78) = 0;
        if (*(int *)(param_1 + 0x7c) < 0) {
          FUN_148fe983c(plVar4);
        }
        uVar11 = 0;
        if ((longlong)(int)uStack_e0 != 0) {
          puVar12 = local_e8 + (longlong)(int)uStack_e0 * 4;
          puVar13 = local_e8;
          local_f8 = param_2;
          do {
            local_b8 = *puVar13;
            plVar5 = (longlong *)puVar13[1];
            if (plVar5 == (longlong *)0x0) {
              local_b0 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              local_b0 = plVar5;
            }
            local_a8 = 0;
            local_c0 = &PTR_FUN_14a5af930;
            local_a0 = 0;
            uStack_98 = 0;
            lVar10 = FUN_148fcd00c(local_f0,&local_c0);
            local_c0 = &PTR_FUN_14a5af930;
            if (local_a0 != 0) {
              FUN_1400020a8();
            }
            local_c0 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_a8])(&local_b8);
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
            if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar10);
            }
            iVar7 = *(int *)(param_1 + 0x78);
            *(uint *)(param_1 + 0x78) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x7c) < iVar7 + 1U) {
              FUN_148fe986c(plVar4,iVar7);
            }
            *(longlong *)(*plVar4 + (longlong)iVar7 * 8) = lVar10;
            if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar10);
            }
            puVar13 = puVar13 + 4;
          } while (puVar13 != puVar12);
          uVar11 = uStack_e0 & 0xffffffff;
          param_2 = local_f8;
        }
        FUN_148fe97f2(local_e8,uVar11);
        if (local_e8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
      local_90[0] = &PTR_FUN_14a5af930;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      local_90[0] = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])();
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148fce2b8:
  FUN_148fce5a8(param_2);
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fce5a8 FUN_148fce5a8 body=73 status=ok
// SIG undefined FUN_148fce5a8(void)

void FUN_148fce5a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148fce5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fce5f6 FUN_148fce5f6 body=255 status=ok
// SIG undefined FUN_148fce5f6(void)

void FUN_148fce5f6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fcd812();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  uVar2 = FUN_149008ad6(uVar2);
  uVar3 = FUN_145988618();
  uVar2 = FUN_144a78ede(uVar2,uVar3);
  lVar4 = FUN_148fde686(uVar2,0);
  if (lVar4 != 0) {
    FUN_148fce6f6(lVar4,&local_50);
    lVar1 = local_50;
    if ((longlong)local_48 != 0) {
      lVar5 = 0;
      do {
        FUN_148fce866(*(longlong *)(lVar1 + lVar5) + 0x100,local_58,param_1);
        lVar5 = lVar5 + 8;
      } while ((longlong)local_48 * 8 != lVar5);
    }
    FUN_148fce96a(lVar4 + 0x2a8,local_58,param_1);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fce6f6 FUN_148fce6f6 body=366 status=ok
// SIG undefined FUN_148fce6f6(void)

longlong * FUN_148fce6f6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  plVar1 = (longlong *)(param_1 + 0xe0);
  *param_2 = 0;
  param_2[1] = 0;
  iVar5 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_148fe98f2(param_2);
  }
  lVar2 = param_1 + 0xf0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x108) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x108);
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
      lVar4 = *(longlong *)(*local_88 + 0x30 + (longlong)iStack_6c * 0x40);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_148fe9952(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fce866 FUN_148fce866 body=244 status=ok
// SIG undefined FUN_148fce866(void)

undefined8 FUN_148fce866(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ba5b750;
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
  *local_38 = &PTR_FUN_14ba5b6e0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148fce95c;
  FUN_148fe99d8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fce96a FUN_148fce96a body=244 status=ok
// SIG undefined FUN_148fce96a(void)

undefined8 FUN_148fce96a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ba5b830;
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
  *local_38 = &PTR_FUN_14ba5b7c0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148fcea60;
  FUN_148fe9d4e(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcea6e FUN_148fcea6e body=117 status=ok
// SIG undefined FUN_148fcea6e(void)

void FUN_148fcea6e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  uVar1 = FUN_149008ad6(uVar1);
  uVar2 = FUN_145988618();
  uVar1 = FUN_144a78ede(uVar1,uVar2);
  lVar3 = FUN_148fde686(uVar1,0);
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0xe8) - *(int *)(lVar3 + 0x114) < 2)) &&
     (*(char *)(param_1 + 0x39) == '\0')) {
    *(undefined1 *)(param_1 + 0x39) = 1;
    FUN_140898514(param_1 + 0x40,1);
    return;
  }
  return;
}



// FUNCTION 148fceae4 FUN_148fceae4 body=174 status=ok
// SIG undefined FUN_148fceae4(void)

void FUN_148fceae4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148fce866(param_2 + 0x100,local_20,param_1);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  uVar1 = FUN_149008ad6(uVar1);
  uVar2 = FUN_145988618();
  uVar1 = FUN_144a78ede(uVar1,uVar2);
  lVar3 = FUN_148fde686(uVar1,0);
  if (((lVar3 != 0) && (*(char *)(param_1 + 0x39) == '\x01')) &&
     (1 < *(int *)(lVar3 + 0xe8) - *(int *)(lVar3 + 0x114))) {
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_140898514(param_1 + 0x40,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fceb98 FUN_148fceb98 body=163 status=ok
// SIG undefined FUN_148fceb98(void)

void FUN_148fceb98(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xe0) = param_2;
  *(undefined1 *)(param_1 + 0x38) = 5;
  FUN_148fcc728(param_2,local_40);
  FUN_140233b1a(local_30,local_40);
  FUN_148fcd76a(param_1,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcec3c FUN_148fcec3c body=877 status=ok
// SIG undefined FUN_148fcec3c(void)

undefined8 FUN_148fcec3c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [16];
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  longlong *local_a8;
  undefined **local_a0;
  uint local_98;
  undefined4 uStack_94;
  byte local_88;
  longlong local_80;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  byte local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_2 + 1) - 2U < 0x7fffffff) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar6 = 0;
    }
    lVar5 = FUN_149008ad6(uVar6);
    lVar5 = *(longlong *)(lVar5 + 0x70);
    FUN_148fcd2bc(param_1,&local_b0);
    bVar3 = true;
    if ((((local_b0 != (longlong *)0x0) && (lVar8 = *(longlong *)(param_1 + 0xe0), lVar8 != 0)) &&
        (lVar8 != lVar5)) && (cVar4 = FUN_148fcefaa(lVar8,0), cVar4 != '\0')) {
      FUN_148fcdaa6(lVar5,&local_70,0);
      FUN_148fcdaa6(*(undefined8 *)(param_1 + 0xe0),&local_a0,0);
      if ((&DAT_149fc1b6e)[local_58] == '\x01') {
        if (((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x28))(), cVar4 != '\0'
           )) {
LAB_148fced8e:
          if ((&DAT_149fc1b6e)[local_88] == '\x01') {
            if (((longlong *)CONCAT44(uStack_94,local_98) != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_94,local_98) + 0x28))(),
               cVar4 != '\0')) {
LAB_148fcedba:
              plVar1 = local_b0;
              uVar6 = FUN_14127b0d4(&local_a0);
              uVar7 = FUN_14127b0d4(&local_70);
              cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar7,uVar6);
              if (cVar4 != '\0') {
                local_c0 = (void *)0x0;
                local_b8 = *(int *)(param_2 + 1);
                lVar8 = (longlong)local_b8;
                _Src = (void *)*param_2;
                if (lVar8 == 0) {
                  local_b4 = 0;
                }
                else {
                  FUN_1446dd670(&local_c0,local_b8,0);
                  memcpy(local_c0,_Src,lVar8 * 2);
                }
                FUN_148fcd376(&local_c0);
                uVar6 = FUN_14127b0d4(&local_a0);
                uVar7 = FUN_14127b0d4(&local_70);
                cVar4 = (**(code **)(*local_b0 + 0x38))(local_b0,uVar7,uVar6,&local_c0);
                if (cVar4 != '\0') {
                  FUN_148fcf03e(local_d0,lVar5,&local_c0,*(undefined1 *)(param_1 + 0x38));
                  FUN_148fcd18a(param_1,local_d0);
                  if (local_c0 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  local_a0 = &PTR_FUN_14a5af930;
                  if (local_80 != 0) {
                    FUN_1400020a8();
                  }
                  local_a0 = &PTR_FUN_14a184370;
                  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_88])(&local_98);
                  local_70 = &PTR_FUN_14a5af930;
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                  local_70 = &PTR_FUN_14a184370;
                  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
                  bVar3 = false;
                  goto LAB_148fcece2;
                }
                if (local_c0 != (void *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          else if ((local_98 & 0xffffff) != 0) goto LAB_148fcedba;
        }
      }
      else if ((local_68 & 0xffffff) != 0) goto LAB_148fced8e;
      local_a0 = &PTR_FUN_14a5af930;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      local_a0 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_88])();
      local_70 = &PTR_FUN_14a5af930;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      local_70 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
    }
LAB_148fcece2:
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a8 + 0x10))(local_a8);
        }
      }
    }
    uVar6 = 1;
    if (!bVar3) goto LAB_148fcec6e;
  }
  uVar6 = 0;
LAB_148fcec6e:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148fcefaa FUN_148fcefaa body=148 status=ok
// SIG undefined FUN_148fcefaa(void)

bool FUN_148fcefaa(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_148fddcfe();
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc))) {
    lVar3 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x80;
        if (*(byte *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x80) == param_2) {
          if (lVar3 == -8 || lVar3 == 0) {
            return false;
          }
          iVar2 = FUN_148fe2c1e();
          return iVar2 == 1;
        }
        iVar2 = *(int *)(lVar3 + 0x78);
      } while (iVar2 != -1);
    }
  }
  return false;
}



// FUNCTION 148fcf03e FUN_148fcf03e body=292 status=ok
// SIG undefined FUN_148fcf03e(void)

undefined8 *
FUN_148fcf03e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_148fe4cea(puVar2,param_3,param_4);
  *puVar2 = &PTR_FUN_14ba58ee0;
  puVar2[9] = 0;
  FUN_14485c47a(puVar2 + 9,param_2);
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba58fd0;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    return param_1;
  }
  if (((puVar2[1] != 0) && (puVar2[2] != 0)) && (0 < *(int *)(puVar2[2] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    puVar2[1] = puVar2;
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    puVar2[1] = puVar2;
    if ((longlong *)puVar2[2] == plVar3) goto LAB_148fcf136;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)puVar2[2];
    if (plVar4 == (longlong *)0x0) {
      puVar2[2] = plVar3;
      goto LAB_148fcf136;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  puVar2[2] = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_148fcf136:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 148fcf166 FUN_148fcf166 body=187 status=ok
// SIG undefined FUN_148fcf166(void)

void FUN_148fcf166(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x38) = 0;
  local_38 = L"AllChatChannelKey";
  local_30 = 0x11;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"AllChatChannelNS";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,&DAT_149e3aa3e);
  FUN_148fcd76a(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf226 FUN_148fcf226 body=248 status=ok
// SIG undefined FUN_148fcf226(void)

undefined8 FUN_148fcf226(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_148fcefaa(param_2,1);
  if (cVar1 == '\0') {
    local_30 = L"AddFriend";
    local_28 = 9;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"UserInteractions";
    local_28 = 0x10;
    FUN_1446e940c(local_38,&local_30);
    pwVar2 = L"Add Friend";
  }
  else {
    local_30 = L"AddEpicFriend";
    local_28 = 0xd;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"UserInteractions";
    local_28 = 0x10;
    FUN_1446e940c(local_38,&local_30);
    pwVar2 = L"Add Epic Friend";
  }
  FUN_140208bae(param_1,local_38,local_34,pwVar2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf320 FUN_148fcf320 body=420 status=ok
// SIG undefined FUN_148fcf320(void)

undefined8 FUN_148fcf320(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  longlong local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_140a68038(1);
  if (plVar2 == (longlong *)0x0) {
    local_38 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_38);
  }
  if (local_38 != DAT_14cb8e1d8) {
    cVar1 = FUN_148fcf4c6(&local_38);
    if (cVar1 == '\0') {
      if (local_38 == DAT_14cb8e208) {
        local_30 = L"AddPlatformFriend_Tencent";
        local_28 = 0x19;
        FUN_1446e940c(local_3c,&local_30);
        local_30 = L"UserInteractions";
        local_28 = 0x10;
        FUN_1446e940c(local_40,&local_30);
        pwVar3 = L"Add WeGame Friend";
      }
      else {
        local_30 = L"AddPlatformFriend_Unknown";
        local_28 = 0x19;
        FUN_1446e940c(local_3c,&local_30);
        local_30 = L"UserInteractions";
        local_28 = 0x10;
        FUN_1446e940c(local_40,&local_30);
        pwVar3 = L"Add Platform Friend";
      }
      goto LAB_148fcf3bb;
    }
  }
  local_30 = L"AddPlatformFriend_PSN";
  local_28 = 0x15;
  FUN_1446e940c(local_3c,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_40,&local_30);
  pwVar3 = L"Add Playstation Network Friend";
LAB_148fcf3bb:
  FUN_140208bae(param_1,local_40,local_3c,pwVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf4c6 FUN_148fcf4c6 body=107 status=ok
// SIG undefined FUN_148fcf4c6(void)

longlong FUN_148fcf4c6(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  plVar2 = (longlong *)FUN_145b138ac();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  piVar1 = (int *)(lVar3 + 0x68);
  if ((longlong)*piVar1 == 0) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(lVar3 + 0x60);
    lVar4 = 0;
    do {
      bVar5 = *(longlong *)(*plVar2 + lVar4) == *param_1;
      lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar5);
      if (bVar5) {
        return lVar3;
      }
      bVar5 = (longlong)*piVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return lVar3;
}



// FUNCTION 148fcf532 FUN_148fcf532 body=152 status=ok
// SIG undefined FUN_148fcf532(void)

undefined8 FUN_148fcf532(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"RemoveFriend";
  local_28 = 0xc;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Remove Friend");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf5cc FUN_148fcf5cc body=246 status=ok
// SIG undefined FUN_148fcf5cc(void)

undefined8 * FUN_148fcf5cc(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_Unfriend";
  local_30 = 0x15;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UserInteractions";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"unfriend");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf6c4 FUN_148fcf6c4 body=152 status=ok
// SIG undefined FUN_148fcf6c4(void)

undefined8 FUN_148fcf6c4(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"AcceptFriendInvite";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Accept");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf75e FUN_148fcf75e body=121 status=ok
// SIG undefined FUN_148fcf75e(void)

undefined4 FUN_148fcf75e(longlong param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar7 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar7 = *(longlong *)(param_1 + 200);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x80;
        if (*(byte *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x80) == param_2) {
          if (lVar7 == -8 || lVar7 == 0) {
            return 0;
          }
          if (*(longlong *)(lVar7 + 0x48) == 0) {
            return 0;
          }
          plVar5 = *(longlong **)(lVar7 + 0x50);
          if (plVar5 == (longlong *)0x0) {
            return 0;
          }
          if ((int)plVar5[1] < 1) {
            return 0;
          }
          iVar6 = (int)plVar5[1];
          plVar4 = (longlong *)0x0;
          goto LAB_148fe2c41;
        }
        iVar6 = *(int *)(lVar7 + 0x78);
      } while (iVar6 != -1);
    }
  }
  return 0;
  while( true ) {
    LOCK();
    iVar2 = (int)plVar5[1];
    bVar8 = iVar6 == iVar2;
    if (bVar8) {
      *(int *)(plVar5 + 1) = iVar6 + 1;
      iVar2 = iVar6;
    }
    iVar6 = iVar2;
    UNLOCK();
    if (bVar8) break;
LAB_148fe2c41:
    if (iVar6 == 0) {
      plVar5 = (longlong *)0x0;
      goto LAB_148fe2c59;
    }
  }
  plVar4 = *(longlong **)(lVar7 + 0x48);
LAB_148fe2c59:
  uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return uVar3;
}



// FUNCTION 148fcf7d8 FUN_148fcf7d8 body=152 status=ok
// SIG undefined FUN_148fcf7d8(void)

undefined8 FUN_148fcf7d8(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"RejectFriendInvite";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Reject");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf872 FUN_148fcf872 body=152 status=ok
// SIG undefined FUN_148fcf872(void)

undefined8 FUN_148fcf872(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"BlockUser";
  local_28 = 9;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Block");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcf90c FUN_148fcf90c body=246 status=ok
// SIG undefined FUN_148fcf90c(void)

undefined8 * FUN_148fcf90c(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_BlockUser";
  local_30 = 0x16;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UserInteractions";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"block");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcfa04 FUN_148fcfa04 body=123 status=ok
// SIG undefined FUN_148fcfa04(void)

bool FUN_148fcfa04(longlong param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    piVar2 = (int *)(param_1 + 0xc0);
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      piVar2 = *(int **)(param_1 + 200);
    }
    iVar3 = *piVar2;
    if (iVar3 != -1) {
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80) == '\0') {
          cVar1 = FUN_148fcfa80(param_1,0);
          if (cVar1 != '\0') {
            return false;
          }
          return *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) != param_1;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + *(longlong *)(param_1 + 0x88) + 0x78);
      } while (iVar3 != -1);
    }
  }
  return false;
}



// FUNCTION 148fcfa80 FUN_148fcfa80 body=181 status=ok
// SIG undefined FUN_148fcfa80(void)

undefined8 FUN_148fcfa80(longlong param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar5 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar5 = *(longlong *)(param_1 + 200);
    }
    iVar2 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x80;
        if (*(byte *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x80) == param_2) {
          param_2 = lVar5 != 0;
          if (lVar5 != -8 && (bool)param_2) {
            if ((*(longlong *)(lVar5 + 0x68) != 0) && (*(longlong *)(lVar5 + 0x70) != 0)) {
              uVar4 = (undefined7)((ulonglong)lVar5 >> 8);
              bVar1 = 1;
              param_2 = 1;
              if (0 < *(int *)(*(longlong *)(lVar5 + 0x70) + 8)) goto LAB_148fcfa94;
            }
            uVar3 = FUN_148fe2c1e();
            param_2 = (int)uVar3 == 4;
            uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
            bVar1 = 1;
            goto LAB_148fcfa94;
          }
          break;
        }
        iVar2 = *(int *)(lVar5 + 0x78);
      } while (iVar2 != -1);
    }
  }
  bVar1 = 0;
  uVar4 = 0;
LAB_148fcfa94:
  return CONCAT71(uVar4,bVar1 & param_2);
}



// FUNCTION 148fcfb36 FUN_148fcfb36 body=152 status=ok
// SIG undefined FUN_148fcfb36(void)

undefined8 FUN_148fcfb36(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"UnblockUser";
  local_28 = 0xb;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Unblock");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcfbd0 FUN_148fcfbd0 body=246 status=ok
// SIG undefined FUN_148fcfbd0(void)

undefined8 * FUN_148fcfbd0(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_Unblock";
  local_30 = 0x14;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UserInteractions";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"unblock");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcfcc8 FUN_148fcfcc8 body=83 status=ok
// SIG undefined FUN_148fcfcc8(void)

undefined8 FUN_148fcfcc8(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    piVar1 = (int *)(param_1 + 0xc0);
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      piVar1 = *(int **)(param_1 + 200);
    }
    iVar3 = *piVar1;
    if (iVar3 != -1) {
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x80) == '\0') {
          uVar2 = FUN_148fcfa80(param_1,0);
          return uVar2;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + *(longlong *)(param_1 + 0x88) + 0x78);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 148fcfd1c FUN_148fcfd1c body=152 status=ok
// SIG undefined FUN_148fcfd1c(void)

undefined8 FUN_148fcfd1c(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SendPrivateMessage";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Whisper");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcfdb6 FUN_148fcfdb6 body=246 status=ok
// SIG undefined FUN_148fcfdb6(void)

undefined8 * FUN_148fcfdb6(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_PrivateMessage";
  local_30 = 0x1b;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UserInteractions";
  local_30 = 0x10;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"whisper");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fcfeae FUN_148fcfeae body=62 status=ok
// SIG undefined FUN_148fcfeae(void)

undefined8 FUN_148fcfeae(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + 0x68) + 0x310))();
  if (cVar1 == '\0') {
    cVar1 = FUN_148fcfeec(param_1);
    if (cVar1 != '\x01') {
      uVar2 = FUN_148fd006a(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148fcfeec FUN_148fcfeec body=381 status=ok
// SIG undefined FUN_148fcfeec(void)

ulonglong FUN_148fcfeec(ulonglong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar10 = (undefined7)(param_1 >> 8);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) == param_1) {
    lVar6 = FUN_148fdf1d2();
    uVar3 = local_68;
    if (lVar6 == 0) {
      param_1 = CONCAT71(uVar10,1);
    }
    else {
      param_1 = CONCAT71(uVar10,*(undefined1 *)(lVar6 + 0x30));
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x88);
    lVar6 = param_1 + 0x98;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar6;
    if (*(int *)(param_1 + 0xb0) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar8 = *(int *)(param_1 + 0xb0);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar8) || (param_1 = CONCAT71(uVar10,1), uStack_50 != lVar6)) {
      param_1 = CONCAT71((int7)(param_1 >> 8),1);
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar5 = FUN_148fe2ba4(*local_80 + (longlong)iVar4 * 0x80 + 8);
        if (lVar5 != 0) {
          cVar2 = *(char *)(lVar5 + 0x30);
          if ((char)param_1 == '\x01') {
            param_1 = CONCAT71((int7)((ulonglong)lVar5 >> 8),cVar2) & 0xffffffff;
          }
          else if (cVar2 == '\0') {
            param_1 = 0;
          }
          else {
            uVar7 = param_1 & 0xff;
            uVar9 = uVar7;
            if ((char)param_1 != '\0') {
              uVar9 = 2;
            }
            param_1 = uVar9;
            if (cVar2 != '\x02') {
              param_1 = uVar7;
            }
          }
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar6 || local_68._4_4_ != iVar8));
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 148fd006a FUN_148fd006a body=317 status=ok
// SIG undefined FUN_148fd006a(void)

ulonglong FUN_148fd006a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_148fddcfe();
  uVar6 = 0;
  if (cVar4 == '\0') {
    plVar1 = (longlong *)(param_1 + 0x88);
    lVar2 = param_1 + 0x98;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = lVar2;
    if (*(int *)(param_1 + 0xb0) != 0) {
      FUN_1449c0562(&local_48);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0xb0);
    }
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_68 = local_48;
    local_60 = local_40;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    iVar5 = local_58._4_4_;
    local_70 = plVar1;
    if ((local_58._4_4_ != (int)uVar6) || (local_58 = uVar3, local_40 != lVar2)) {
      do {
        local_58 = uVar3;
        iVar5 = FUN_148fe2c1e(*local_70 + (longlong)iVar5 * 0x80 + 8);
        if (iVar5 == 1) {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          goto LAB_148fd0090;
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar3 = local_58;
      } while ((local_60 != lVar2 || local_58._4_4_ != (int)uVar6) || local_70 != plVar1);
    }
    uVar6 = 0;
  }
LAB_148fd0090:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148fd01a8 FUN_148fd01a8 body=152 status=ok
// SIG undefined FUN_148fd01a8(void)

undefined8 FUN_148fd01a8(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"ShowPlatformProfile";
  local_28 = 0x13;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"UserInteractions";
  local_28 = 0x10;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"View Profile");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0242 FUN_148fd0242 body=353 status=ok
// SIG undefined FUN_148fd0242(void)

ulonglong FUN_148fd0242(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [16];
  undefined2 *local_90;
  int local_88;
  undefined **local_48;
  uint local_40;
  undefined4 uStack_3c;
  byte local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_148fd03a4();
  if (local_88 == 0) {
    local_90 = &DAT_149dfb77a;
  }
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)((longlong)local_90 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"CONSOLE" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_148fd02d6;
LAB_148fd02a6:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_148fd02a6;
  }
  if (uVar4 != uVar5) {
    uVar3 = 0;
    goto LAB_148fd0366;
  }
LAB_148fd02d6:
  FUN_148fcdaa6(param_1,&local_48,&DAT_149e05d01);
  if ((&DAT_149fc1b6e)[local_30] == '\x01') {
    if ((longlong *)CONCAT44(uStack_3c,local_40) == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar1 = (**(code **)(*(longlong *)CONCAT44(uStack_3c,local_40) + 0x28))();
      uVar3 = (ulonglong)uVar1;
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),(local_40 & 0xffffff) != 0);
  }
  local_48 = &PTR_FUN_14a5af930;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_48 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])(&local_40);
LAB_148fd0366:
  FUN_1458ea6a8(local_a0);
  if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 148fd03a4 FUN_148fd03a4 body=93 status=ok
// SIG undefined FUN_148fd03a4(void)

undefined8 FUN_148fd03a4(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143e6d8ca(local_28);
  FUN_148fd279e(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0402 FUN_148fd0402 body=567 status=ok
// SIG undefined FUN_148fd0402(void)

void FUN_148fd0402(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined **local_88;
  uint local_80;
  undefined4 uStack_7c;
  byte local_70;
  longlong local_68;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),&local_58,1);
  FUN_148fcdaa6(param_1,&local_88,1);
  if ((&DAT_149fc1b6e)[local_40] == '\x01') {
    if (((longlong *)CONCAT44(uStack_4c,local_50) == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))(), cVar3 == '\0'))
    goto LAB_148fd058d;
  }
  else if ((local_50 & 0xffffff) == 0) goto LAB_148fd058d;
  if ((&DAT_149fc1b6e)[local_70] == '\x01') {
    if (((longlong *)CONCAT44(uStack_7c,local_80) == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_7c,local_80) + 0x28))(), cVar3 == '\0'))
    goto LAB_148fd058d;
  }
  else if ((local_80 & 0xffffff) == 0) goto LAB_148fd058d;
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
    local_a0 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_a0);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_b8 = local_a0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_98);
    plVar4 = local_98;
    if (local_98 != (longlong *)0x0) {
      local_b8 = 0;
      uStack_b0 = 0;
      uVar5 = FUN_14127b0d4(&local_88);
      uVar6 = FUN_14127b0d4(&local_58);
      (**(code **)(*plVar4 + 0x48))(plVar4,uVar6,uVar5,&local_b8);
      FUN_1449db362(&local_b8);
    }
  }
  plVar4 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_148fd058d:
  local_88 = &PTR_FUN_14a5af930;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_88 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
  local_58 = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd063a FUN_148fd063a body=152 status=ok
// SIG undefined FUN_148fd063a(void)

undefined8 FUN_148fd063a(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"InviteToParty";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Invite to Party");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd06d4 FUN_148fd06d4 body=246 status=ok
// SIG undefined FUN_148fd06d4(void)

undefined8 * FUN_148fd06d4(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_InviteToParty";
  local_30 = 0x1a;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"invite");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd07cc FUN_148fd07cc body=101 status=ok
// SIG undefined FUN_148fd07cc(void)

bool FUN_148fd07cc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  
  cVar1 = FUN_148fddcfe();
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = FUN_145988618();
    uVar3 = FUN_144a78ede(uVar3,uVar2);
    bVar5 = false;
    plVar4 = (longlong *)FUN_148fdcd7a(uVar3,param_2,0);
    if (plVar4 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar4 + 800))(plVar4,param_1,0);
      bVar5 = cVar1 == '\0';
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



// FUNCTION 148fd0832 FUN_148fd0832 body=93 status=ok
// SIG undefined FUN_148fd0832(void)

void FUN_148fd0832(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = FUN_145988618();
  uVar2 = FUN_144a78ede(uVar2,uVar1);
  lVar3 = FUN_148fdcd7a(uVar2,param_2,0);
  if (lVar3 == 0) {
    return;
  }
  FUN_148fd5d16(lVar3,param_1,0,param_3);
  return;
}



// FUNCTION 148fd0890 FUN_148fd0890 body=152 status=ok
// SIG undefined FUN_148fd0890(void)

undefined8 FUN_148fd0890(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"JoinParty";
  local_28 = 9;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Join Party");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd092a FUN_148fd092a body=246 status=ok
// SIG undefined FUN_148fd092a(void)

undefined8 * FUN_148fd092a(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_JoinParty";
  local_30 = 0x16;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"join");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0a22 FUN_148fd0a22 body=130 status=ok
// SIG undefined FUN_148fd0a22(void)

undefined8 FUN_148fd0a22(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  char local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0x11111111;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = FUN_145988618();
  plVar2 = (longlong *)FUN_144a78ede(uVar3,uVar1);
  (**(code **)(*plVar2 + 0x2b8))(plVar2,local_28,param_1,&local_2c);
  if (local_28[0] == '\x01') {
    uVar3 = FUN_148fd006a(param_1);
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0aa6 FUN_148fd0aa6 body=152 status=ok
// SIG undefined FUN_148fd0aa6(void)

undefined8 FUN_148fd0aa6(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"RequestToJoinParty";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Request to Join");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0b40 FUN_148fd0b40 body=246 status=ok
// SIG undefined FUN_148fd0b40(void)

undefined8 * FUN_148fd0b40(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_RequestToJoinParty";
  local_30 = 0x1f;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"requesttojoin");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0c38 FUN_148fd0c38 body=151 status=ok
// SIG undefined FUN_148fd0c38(void)

undefined8 FUN_148fd0c38(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"AcceptJoinRequest";
  local_30 = 0x11;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1,local_40,local_3c,L"Accept Request");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0cd0 FUN_148fd0cd0 body=246 status=ok
// SIG undefined FUN_148fd0cd0(void)

undefined8 * FUN_148fd0cd0(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_AcceptJoinRequest";
  local_30 = 0x1e;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"acceptjoinrequest");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0dc8 FUN_148fd0dc8 body=464 status=ok
// SIG undefined FUN_148fd0dc8(void)

void FUN_148fd0dc8(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_98;
  longlong *local_90;
  undefined **local_88 [3];
  byte local_70;
  longlong local_68;
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[4];
  uVar2 = FUN_145988618();
  uVar2 = FUN_144a78ede(lVar3,uVar2);
  local_58[0] = (undefined **)CONCAT44(local_58[0]._4_4_,0x11111111);
  lVar3 = FUN_148fdcd7a(uVar2,local_58,0);
  if (lVar3 != 0) {
    FUN_140056680(local_58,L"RequestToJoin");
    FUN_148fd5d16(lVar3,param_1,2,local_58);
    if (local_58[0] != (undefined **)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x180))(param_1);
    local_58[0] = (undefined **)0x0;
    plVar4 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_98);
    FUN_148fcdaa6(param_1,local_58,0);
    uVar5 = FUN_14127b0d4(local_58);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x70) + 0x18);
    FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),local_88,0);
    uVar6 = FUN_14127b0d4(local_88);
    local_a8 = 4;
    (**(code **)(*local_98 + 0x40))(local_98,uVar6,uVar2,uVar5);
    local_88[0] = &PTR_FUN_14a5af930;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_88[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd0f9a FUN_148fd0f9a body=152 status=ok
// SIG undefined FUN_148fd0f9a(void)

undefined8 FUN_148fd0f9a(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"DismissJoinRequest";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Dismiss Request");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1034 FUN_148fd1034 body=246 status=ok
// SIG undefined FUN_148fd1034(void)

undefined8 * FUN_148fd1034(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_DismissJoinRequest";
  local_30 = 0x1f;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"dismissjoinrequest");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd112c FUN_148fd112c body=414 status=ok
// SIG undefined FUN_148fd112c(void)

void FUN_148fd112c(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong *local_98;
  longlong *local_90;
  undefined **local_88 [3];
  byte local_70;
  longlong local_68;
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[4];
  uVar2 = FUN_145988618();
  uVar2 = FUN_144a78ede(lVar3,uVar2);
  local_58[0] = (undefined **)CONCAT44(local_58[0]._4_4_,0x11111111);
  lVar3 = FUN_148fdcd7a(uVar2,local_58,0);
  if (lVar3 != 0) {
    (**(code **)(*param_1 + 0x180))(param_1);
    local_58[0] = (undefined **)0x0;
    plVar4 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_98);
    FUN_148fcdaa6(param_1,local_58,0);
    uVar5 = FUN_14127b0d4(local_58);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x70) + 0x18);
    FUN_148fcdaa6(*(undefined8 *)(param_1[4] + 0x70),local_88,0);
    uVar6 = FUN_14127b0d4(local_88);
    local_a8 = 3;
    (**(code **)(*local_98 + 0x40))(local_98,uVar6,uVar2,uVar5);
    local_88[0] = &PTR_FUN_14a5af930;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_88[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_70])();
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd12cc FUN_148fd12cc body=151 status=ok
// SIG undefined FUN_148fd12cc(void)

undefined8 FUN_148fd12cc(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"AcceptPartyInvite";
  local_30 = 0x11;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1,local_40,local_3c,L"Accept Invite");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1364 FUN_148fd1364 body=151 status=ok
// SIG undefined FUN_148fd1364(void)

undefined8 FUN_148fd1364(undefined8 param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"RejectPartyInvite";
  local_30 = 0x11;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_1,local_40,local_3c,L"Reject Invite");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd13fc FUN_148fd13fc body=152 status=ok
// SIG undefined FUN_148fd13fc(void)

undefined8 FUN_148fd13fc(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"LeaveParty";
  local_28 = 10;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Leave Party");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1496 FUN_148fd1496 body=246 status=ok
// SIG undefined FUN_148fd1496(void)

undefined8 * FUN_148fd1496(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_LeaveParty";
  local_30 = 0x17;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"leave");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd158e FUN_148fd158e body=155 status=ok
// SIG undefined FUN_148fd158e(void)

bool FUN_148fd158e(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) == param_1) {
    lVar3 = FUN_14479d2ce(*(longlong *)(param_1 + 0x20) + 0xdc);
    if (lVar3 != 0) {
      cVar2 = FUN_1406f1f80(lVar3);
      if (cVar2 != '\0') {
        local_14 = 0x11111111;
        lVar3 = FUN_148fd162a(param_1);
        if (lVar3 != 0) {
          uVar4 = FUN_145a91644();
          lVar3 = FUN_144a78ede(lVar3,uVar4);
          bVar1 = 1 < *(int *)(lVar3 + 0xe8) - *(int *)(lVar3 + 0x114);
          goto LAB_148fd15b1;
        }
      }
    }
  }
  bVar1 = false;
LAB_148fd15b1:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd162a FUN_148fd162a body=198 status=ok
// SIG undefined FUN_148fd162a(void)

undefined8 FUN_148fd162a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = FUN_145988618();
  uVar2 = FUN_144a78ede(uVar2,uVar1);
  uVar1 = 0;
  lVar3 = FUN_148fdcd7a(uVar2,param_2,0);
  if (lVar3 != 0) {
    FUN_148fcdaa6(param_1,local_58,0);
    uVar1 = FUN_148fd8170(lVar3,local_58);
    local_58[0] = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd16f2 FUN_148fd16f2 body=125 status=ok
// SIG undefined FUN_148fd16f2(void)

void FUN_148fd16f2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = CONCAT44(local_28._4_4_,0x11111111);
  lVar1 = FUN_148fd162a();
  if (lVar1 != 0) {
    uVar2 = FUN_145a91644();
    plVar3 = (longlong *)FUN_144a78ede(lVar1,uVar2);
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar3 + 0x2a0))(plVar3,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1770 FUN_148fd1770 body=152 status=ok
// SIG undefined FUN_148fd1770(void)

undefined8 FUN_148fd1770(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"KickPartyMember";
  local_28 = 0xf;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Kick");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd180a FUN_148fd180a body=246 status=ok
// SIG undefined FUN_148fd180a(void)

undefined8 * FUN_148fd180a(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_KickMember";
  local_30 = 0x17;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"kick");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1902 FUN_148fd1902 body=158 status=ok
// SIG undefined FUN_148fd1902(void)

undefined8 FUN_148fd1902(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x20) + 0xdc);
  local_2c = 0x11111111;
  lVar2 = FUN_148fd162a(param_1);
  if (lVar2 != 0 && lVar1 != 0) {
    uVar3 = FUN_145a91644();
    FUN_144a78ede(lVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd19ba FUN_148fd19ba body=156 status=ok
// SIG undefined FUN_148fd19ba(void)

void FUN_148fd19ba(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x20) + 0xdc);
  local_2c = 0x11111111;
  lVar2 = FUN_148fd162a(param_1);
  if (lVar2 != 0 && lVar1 != 0) {
    uVar3 = FUN_145a91644();
    FUN_144a78ede(lVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1a70 FUN_148fd1a70 body=152 status=ok
// SIG undefined FUN_148fd1a70(void)

undefined8 FUN_148fd1a70(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"PromoteToPartyLeader";
  local_28 = 0x14;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"PartyInteractions";
  local_28 = 0x11;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Promote");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1b0a FUN_148fd1b0a body=246 status=ok
// SIG undefined FUN_148fd1b0a(void)

undefined8 * FUN_148fd1b0a(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"SlashCommand_PromoteToLeader";
  local_30 = 0x1c;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"PartyInteractions";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"promote");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_38);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1c02 FUN_148fd1c02 body=158 status=ok
// SIG undefined FUN_148fd1c02(void)

undefined8 FUN_148fd1c02(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x20) + 0xdc);
  local_2c = 0x11111111;
  lVar2 = FUN_148fd162a(param_1);
  if (lVar2 != 0 && lVar1 != 0) {
    uVar3 = FUN_145a91644();
    FUN_144a78ede(lVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1cba FUN_148fd1cba body=142 status=ok
// SIG undefined FUN_148fd1cba(void)

void FUN_148fd1cba(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x20) + 0xdc);
  local_24 = 0x11111111;
  lVar2 = FUN_148fd162a(param_1);
  if (lVar2 != 0 && lVar1 != 0) {
    uVar3 = FUN_145a91644();
    FUN_144a78ede(lVar2,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1d62 FUN_148fd1d62 body=191 status=ok
// SIG undefined FUN_148fd1d62(void)

undefined8 * FUN_148fd1d62(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x60) + 8))(*(longlong **)(param_1 + 0x60),&local_28);
  *param_2 = &PTR_FUN_14a184370;
  *(undefined1 *)(param_2 + 3) = 0;
  param_2[1] = local_28;
  param_2[2] = local_20;
  if (local_20 == (longlong *)0x0) {
    *param_2 = &PTR_FUN_14a5af930;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    *(undefined1 *)(param_2 + 3) = 0;
    *param_2 = &PTR_FUN_14a5af930;
    param_2[4] = 0;
    param_2[5] = 0;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1e36 FUN_148fd1e36 body=63 status=ok
// SIG undefined FUN_148fd1e36(void)

undefined8 FUN_148fd1e36(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    cVar1 = FUN_144729dda(param_1 + 0x18);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x18);
      uVar2 = FUN_148fd1e76(uVar2);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148fd1e76 FUN_148fd1e76 body=182 status=ok
// SIG undefined FUN_148fd1e76(void)

undefined4 FUN_148fd1e76(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_145a91644();
  uVar2 = FUN_144a78ede(param_1,uVar2);
  uVar3 = FUN_145988618();
  uVar2 = FUN_144a78ede(uVar2,uVar3);
  FUN_148fd1d62(param_1,local_58);
  uVar1 = FUN_148fd2aa4(uVar2,local_58);
  local_58[0] = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd1f2e FUN_148fd1f2e body=105 status=ok
// SIG undefined FUN_148fd1f2e(void)

void FUN_148fd1f2e(undefined8 param_1,longlong param_2)

{
  FUN_1443d5a74(param_1,param_2 + 0x28);
  FUN_1443d5b30(param_1,param_2 + 0x80);
  FUN_1443d5b8c(param_1,param_2 + 0xb0);
  FUN_1443d5c4e(param_1,param_2 + 0x150);
  FUN_1443d5ca2(param_1,param_2 + 0x1c8);
  FUN_1443d5d0c(param_1,param_2 + 0x200);
  return;
}



// FUNCTION 148fd1f98 FUN_148fd1f98 body=64 status=ok
// SIG undefined FUN_148fd1f98(void)

undefined8 FUN_148fd1f98(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x18);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  uVar3 = FUN_145a91644();
  uVar2 = FUN_144a78ede(uVar2,uVar3);
  return uVar2;
}



// FUNCTION 148fd1fd8 FUN_148fd1fd8 body=45 status=ok
// SIG undefined FUN_148fd1fd8(void)

undefined8 FUN_148fd1fd8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x18);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x18);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148fd2006 FUN_148fd2006 body=244 status=ok
// SIG undefined FUN_148fd2006(void)

undefined8 FUN_148fd2006(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ba5b9c0;
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
  *local_38 = &PTR_FUN_14ba5b950;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148fd20fc;
  FUN_148fea1f6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2108 FUN_148fd2108 body=244 status=ok
// SIG undefined FUN_148fd2108(void)

undefined8 FUN_148fd2108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ba5baa0;
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
  *local_38 = &PTR_FUN_14ba5ba30;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_148fd21fe;
  FUN_148fea596(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd21fe FUN_148fd21fe body=115 status=ok
// SIG undefined FUN_148fd21fe(void)

void FUN_148fd21fe(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  lVar2 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)puVar1 + lVar2);
    uVar4 = (ulonglong)uVar3;
    uVar5 = *(ushort *)((longlong)L"displayName" + lVar2);
    if (uVar3 != uVar5) break;
    if (uVar3 == 0) goto LAB_148fd2264;
LAB_148fd2237:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_148fd2237;
  }
  if (uVar3 != uVar5) {
    return;
  }
LAB_148fd2264:
  FUN_1447f69b6(param_1 + 0xa0);
  return;
}



// FUNCTION 148fd2272 FUN_148fd2272 body=292 status=ok
// SIG undefined FUN_148fd2272(void)

longlong FUN_148fd2272(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(lVar2 + lVar5);
      plVar4 = (longlong *)FUN_14479d2ce(lVar6 + 0xdc);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x350))(plVar4,&local_78);
        cVar3 = FUN_140ba41f1(&local_78,param_2);
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(local_70);
        if (cVar3 != '\0') goto LAB_148fd2335;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  lVar6 = 0;
LAB_148fd2335:
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2398 FUN_148fd2398 body=182 status=ok
// SIG undefined FUN_148fd2398(void)

void FUN_148fd2398(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 2;
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 0x18)] == '\x01') {
    if ((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_2 + 8) + 0x28))(), cVar1 == '\0'))
    goto LAB_148fd23f2;
  }
  else if ((*(uint *)(param_2 + 8) & 0xffffff) == 0) goto LAB_148fd23f2;
  FUN_140b6e8c2(param_2,&local_40);
  cVar1 = FUN_148fdee4a(local_40,&local_31);
  if (cVar1 != '\0') {
    local_48 = param_4;
    FUN_1443d067e(param_1,param_2,local_31,param_3);
  }
LAB_148fd23f2:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd2450 FUN_148fd2450 body=244 status=ok
// SIG undefined FUN_148fd2450(void)

undefined8
FUN_148fd2450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_LAB_14ba5bba0;
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
  *local_40 = &PTR_FUN_14ba5bb30;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_148fea944(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2546 FUN_148fd2546 body=333 status=ok
// SIG undefined FUN_148fd2546(void)

void FUN_148fd2546(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_2 + 0x2a8))(param_2);
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar4;
  *local_38 = &PTR_FUN_14ba5bd10;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_1);
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_140c6314c(param_2 + 0x29,local_40,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd26a8 FUN_148fd26a8 body=245 status=ok
// SIG undefined FUN_148fd26a8(void)

void FUN_148fd26a8(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong *local_60;
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    if (param_1[0x10] != 0) {
      FUN_148fcdaa6(*(undefined8 *)(param_2 + 0x70),local_58,0);
      lVar2 = param_1[0x10];
      FUN_1405e6804(local_58,local_70);
      local_60 = local_70;
      FUN_140c8411c(lVar2 + 0x30);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      local_58[0] = &PTR_FUN_14a5af930;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_58[0] = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    }
    cVar3 = FUN_1443bfb83(param_1);
    if (cVar3 != '\0') {
      pbVar1 = (byte *)(param_1 + 0xf);
      *pbVar1 = *pbVar1 & 0xfe;
      if (*pbVar1 == 0) {
        (**(code **)(*param_1 + 0x2a0))(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd279e FUN_148fd279e body=243 status=ok
// SIG undefined FUN_148fd279e(void)

undefined8 * FUN_148fd279e(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0;
  plVar2 = (longlong *)FUN_145b138ac();
  lVar6 = plVar2[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar6 = plVar2[0x22];
  }
  if ((longlong)*(int *)(lVar6 + 0x58) == 0) {
    return param_1;
  }
  plVar2 = *(longlong **)(lVar6 + 0x50);
  plVar3 = plVar2 + (longlong)*(int *)(lVar6 + 0x58) * 0xb;
  iVar1 = (int)param_2[1];
LAB_148fd2816:
  if ((int)plVar2[1] == iVar1) {
    if (1 < iVar1) {
      lVar6 = 0;
      do {
        uVar7 = *(ushort *)(*plVar2 + lVar6);
        uVar8 = (ulonglong)uVar7;
        uVar4 = *(ushort *)(*param_2 + lVar6);
        if (uVar7 == uVar4) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar4 | uVar7)) goto LAB_148fd2875;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar5 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar5]) goto LAB_148fd2875;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
    goto LAB_148fd287d;
  }
  if ((int)plVar2[1] + iVar1 == 1) goto LAB_148fd287d;
  goto LAB_148fd286a;
LAB_148fd2875:
  if (uVar7 == uVar4) {
LAB_148fd287d:
    FUN_148fe2a7c(param_1);
    return param_1;
  }
LAB_148fd286a:
  plVar2 = plVar2 + 0xb;
  if (plVar2 == plVar3) {
    return param_1;
  }
  goto LAB_148fd2816;
}



// FUNCTION 148fd2892 FUN_148fd2892 body=110 status=ok
// SIG undefined FUN_148fd2892(void)

longlong FUN_148fd2892(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar2 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & *param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0xe8;
        if (*(uint *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 0xe8) == *param_2)
        goto LAB_148fd289f;
        iVar3 = *(int *)(lVar2 + 0xe0);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_148fd289f:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 148fd2900 FUN_148fd2900 body=126 status=ok
// SIG undefined FUN_148fd2900(void)

bool FUN_148fd2900(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_140dfa800((longlong *)(param_1 + 0x28),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 0x28);
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    FUN_1489b74b6(param_3,lVar5);
  }
  return lVar5 != 0;
}



// FUNCTION 148fd2988 FUN_148fd2988 body=282 status=ok
// SIG undefined FUN_148fd2988(void)

undefined8 FUN_148fd2988(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined **local_98 [3];
  byte local_80;
  longlong local_78;
  undefined **local_68;
  undefined1 local_60 [16];
  byte local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_145a91644();
  uVar1 = FUN_144a78ede(param_1,uVar1);
  uVar2 = FUN_145988618();
  uVar1 = FUN_144a78ede(uVar1,uVar2);
  local_68 = &PTR_FUN_14a184370;
  local_50 = *(byte *)(param_2 + 0x18);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_50])(local_60,param_2 + 8);
  local_68 = &PTR_FUN_14a5af930;
  local_48 = 0;
  uStack_40 = 0;
  lVar3 = FUN_148fd2272(uVar1,&local_68);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_148fd1d62(param_1,local_98);
    uVar1 = FUN_148fcd00c(lVar3,local_98);
    local_98[0] = &PTR_FUN_14a5af930;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_98[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_80])();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2aa4 FUN_148fd2aa4 body=226 status=ok
// SIG undefined FUN_148fd2aa4(void)

undefined4 FUN_148fd2aa4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined1 local_70 [16];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar4 = 0;
    do {
      FUN_148fcdaa6(*(undefined8 *)(*(longlong *)(lVar2 + lVar4) + 0x70),&local_78,0);
      uVar3 = FUN_140ba41f1(&local_78,param_2);
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_78 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(local_70);
      bVar5 = (longlong)iVar1 * 8 + -8 == lVar4;
      lVar4 = lVar4 + 8;
    } while ((byte)(bVar5 | (byte)uVar3) != 1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2b88 FUN_148fd2b88 body=220 status=ok
// SIG undefined FUN_148fd2b88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148fd2b88(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    piVar5 = (int *)(param_1 + 0xc0);
    if (*(int **)(param_1 + 200) != (int *)0x0) {
      piVar5 = *(int **)(param_1 + 200);
    }
    iVar6 = *piVar5;
    if (iVar6 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x80;
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x80) == '\0') {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (*(longlong *)(lVar2 + 0x38) == 0) {
            return;
          }
          plVar3 = *(longlong **)(lVar2 + 0x40);
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          if ((int)plVar3[1] < 1) {
            return;
          }
          iVar6 = (int)plVar3[1];
          do {
            if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148fd2c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(_DAT_00000000 + 0x28))(0);
              return;
            }
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar7 = iVar6 == iVar4;
            if (bVar7) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar7);
          (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x28))();
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return;
          }
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar5 = (int *)((longlong)plVar3 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000148fd2c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
        iVar6 = *(int *)(lVar2 + 0x78);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 148fd2c88 FUN_148fd2c88 body=26 status=ok
// SIG undefined FUN_148fd2c88(void)

undefined8 FUN_148fd2c88(longlong param_1,undefined8 param_2)

{
  FUN_148fcdaa6(*(undefined8 *)(param_1 + 0x70));
  return param_2;
}



// FUNCTION 148fd2ca2 FUN_148fd2ca2 body=184 status=ok
// SIG undefined FUN_148fd2ca2(void)

void FUN_148fd2ca2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if ((longlong *)*param_2 != (longlong *)0x0 && (int)param_2[1] != 0) {
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x80) == '\x01') {
        if ((int)param_2[1] == 0) {
          param_2 = (longlong *)0x0;
        }
        else {
          param_2 = (longlong *)*param_2;
        }
                    /* WARNING: Could not recover jumptable at 0x000148fd2d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x58))(param_2,param_1);
        return;
      }
      iVar1 = *(int *)(param_1 + 0xf0);
      *(uint *)(param_1 + 0xf0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xf4) < iVar1 + 1U) {
        FUN_149005b52((longlong *)(param_1 + 0xe8),iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0xe8);
      lVar4 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar4) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar4) = 0;
      FUN_149005bd8(lVar2 + lVar4,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148fd2d5a FUN_148fd2d5a body=143 status=ok
// SIG undefined FUN_148fd2d5a(void)

undefined8 * FUN_148fd2d5a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  FUN_1443bf568(param_2,param_1 + 1);
  param_1[3] = 0;
  param_1[4] = 0;
  QueryPerformanceCounter(&local_38);
  param_1[5] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_148fd2dea(param_1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2dea FUN_148fd2dea body=333 status=ok
// SIG undefined FUN_148fd2dea(void)

void FUN_148fd2dea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_90;
  longlong *local_88;
  double local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  double local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = 10.0;
  local_98 = (code **)&DAT_14c872af8;
  FUN_14612afb8(DAT_14c872ce0,L"/Script/Party.PartyMember",L"DebugInitializer.WarnSeconds",&local_80
               );
  dVar3 = local_80;
  if (0.0 < local_80) {
    uVar4 = FUN_1401cb356();
    local_98 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14ba5bd80;
    local_48 = dVar3;
    local_78[0] = FUN_1443d63fc;
    local_50 = param_1;
    FUN_1401cbba4(uVar4,&local_90,L"UPartyMember::FDebugInitializer",(float)dVar3);
    *(undefined8 *)(param_1 + 0x18) = local_90;
    local_90 = 0;
    plVar2 = *(longlong **)(param_1 + 0x20);
    *(longlong **)(param_1 + 0x20) = local_88;
    local_88 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar5 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar5 = &local_58;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2f38 FUN_148fd2f38 body=115 status=ok
// SIG undefined FUN_148fd2f38(void)

void FUN_148fd2f38(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x18);
    local_18 = *(longlong *)(param_1 + 0x20);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd2fac FUN_148fd2fac body=127 status=ok
// SIG undefined FUN_148fd2fac(void)

undefined8 * FUN_148fd2fac(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  local_18 = param_2;
  lVar1 = FUN_148fdede0();
  if ((lVar1 != 0) && (1 < *(int *)(lVar1 + 0x30))) {
    FUN_14034a368(param_1,lVar1 + 0x28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd302e FUN_148fd302e body=380 status=ok
// SIG undefined FUN_148fd302e(void)

longlong * FUN_148fd302e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = param_2;
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
    plVar3[3] = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,plVar3 + 3);
  }
  plVar3[4] = 0;
  plVar3[5] = 0;
  *param_1 = (longlong)plVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba5be00;
  plVar4[2] = (longlong)plVar3;
  param_1[1] = (longlong)plVar4;
  if ((plVar3 == (longlong *)0x0) ||
     (((*plVar3 != 0 && (plVar3[1] != 0)) && (0 < *(int *)(plVar3[1] + 8))))) goto LAB_148fd30cd;
  if (plVar4 == (longlong *)0x0) {
    *plVar3 = (longlong)plVar3;
    plVar5 = (longlong *)plVar3[1];
    if (plVar5 == (longlong *)0x0) goto LAB_148fd30cd;
LAB_148fd3140:
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar3[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_148fd30cd;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *plVar3 = (longlong)plVar3;
    if ((longlong *)plVar3[1] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)plVar3[1];
      if (plVar5 != (longlong *)0x0) goto LAB_148fd3140;
      plVar3[1] = (longlong)plVar4;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_148fd30cd:
  lVar2 = *(longlong *)(*param_1 + 0x10);
  FUN_148feb1b2(local_30);
  FUN_148feb0ca(lVar2 + 0x1b0,local_38,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148fd31e6 FUN_148fd31e6 body=316 status=ok
// SIG undefined FUN_148fd31e6(void)

void FUN_148fd31e6(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_148fd320b:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_148fd3346(&local_30,&local_48,param_2);
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148fd320b;
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
    local_48 = *param_1;
    plStack_40 = plVar3;
    FUN_148fd3346(&local_30,&local_48,param_2);
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
  iVar6 = *(int *)(param_1 + 5);
  *(uint *)(param_1 + 5) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2c) < iVar6 + 1U) {
    FUN_148feb696(param_1 + 4,iVar6);
  }
  lVar4 = param_1[4];
  *(longlong *)(lVar4 + (longlong)iVar6 * 0x10) = local_30;
  *(undefined8 **)(lVar4 + 8 + (longlong)iVar6 * 0x10) = local_28;
  if (local_28 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
  UNLOCK();
  FUN_148fd3446(local_30 + 0x20,param_1);
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_28 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd3346 FUN_148fd3346 body=256 status=ok
// SIG undefined FUN_148fd3346(void)

undefined8 * FUN_148fd3346(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_14001cc68(0xa8,0x10);
  FUN_148fd3c1a(plVar2,param_2,param_3);
  *param_1 = plVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ba5c1a0;
  plVar3[2] = (longlong)plVar2;
  param_1[1] = plVar3;
  if ((plVar2 == (longlong *)0x0) ||
     (((*plVar2 != 0 && (plVar2[1] != 0)) && (0 < *(int *)(plVar2[1] + 8))))) goto LAB_148fd3431;
  if (plVar3 == (longlong *)0x0) {
    *plVar2 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148fd3431;
LAB_148fd33e9:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar2[1] = (longlong)plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_148fd3431;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *plVar2 = (longlong)plVar2;
    if ((longlong *)plVar2[1] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = (longlong *)plVar2[1];
      if (plVar4 != (longlong *)0x0) goto LAB_148fd33e9;
      plVar2[1] = (longlong)plVar3;
    }
  }
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_148fd3431:
  FUN_1443c05a2(*param_1);
  return param_1;
}



// FUNCTION 148fd3446 FUN_148fd3446 body=375 status=ok
// SIG undefined FUN_148fd3446(void)

void FUN_148fd3446(longlong *param_1,undefined8 *param_2)

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
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148fd354f:
    *puVar3 = &PTR_LAB_14ba5bf70;
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
    *puVar3 = &PTR_FUN_14ba5bf00;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148fd35be;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148fd354f;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14ba5bf70;
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
    *puVar3 = &PTR_FUN_14ba5bf00;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148fd35be;
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
                    /* WARNING: Could not recover jumptable at 0x000148fd354b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fd35be FUN_148fd35be body=164 status=ok
// SIG undefined FUN_148fd35be(void)

void FUN_148fd35be(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_148feca04(param_1 + 0x20);
  lVar3 = FUN_148fdcd7a(*(undefined8 *)(param_1 + 0x10),*param_2 + 0x48,0);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x227) == '\0')) {
    FUN_148fd31e6(param_1,lVar3);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd3674 FUN_148fd3674 body=559 status=ok
// SIG undefined FUN_148fd3674(void)

longlong FUN_148fd3674(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined **local_50;
  uint local_48;
  undefined4 uStack_44;
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar5 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar5 = *(longlong *)(param_1 + 200);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2 & 0xff) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x80;
        if (*(char *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar4 * 0x80) == (char)param_2) {
          if ((lVar5 != -8 && lVar5 != 0) && (lVar5 = FUN_148fe2ba4(), lVar5 != 0))
          goto LAB_148fd36b0;
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x78);
      } while (iVar4 != -1);
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70) != param_1) {
    lVar5 = 0;
    goto LAB_148fd36b0;
  }
  plVar6 = (longlong *)FUN_148fcd308(*(longlong *)(param_1 + 0x20),param_2);
  if (plVar6 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
LAB_148fd3772:
    lVar5 = 0;
  }
  else {
    (**(code **)(*plVar6 + 200))(plVar6,&local_68);
    if (local_68 == (longlong *)0x0) goto LAB_148fd3772;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_148fcdaa6(param_1,&local_50,param_2);
    if ((&DAT_149fc1b6e)[local_38] == '\x01') {
      if (((longlong *)CONCAT44(uStack_44,local_48) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x28))(), cVar3 == '\0'))
      goto LAB_148fd382e;
LAB_148fd3802:
      plVar6 = local_68;
      uVar7 = FUN_14127b0d4(&local_50);
      iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,uVar7,&local_78);
      lVar5 = local_78;
      if (iVar4 != 0) goto LAB_148fd382e;
    }
    else {
      if ((local_48 & 0xffffff) != 0) goto LAB_148fd3802;
LAB_148fd382e:
      lVar5 = 0;
    }
    local_50 = &PTR_FUN_14a5af930;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_50 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])(&local_48);
    plVar6 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  plVar6 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_148fd36b0:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 148fd38a4 FUN_148fd38a4 body=82 status=ok
// SIG undefined FUN_148fd38a4(void)

undefined8 * FUN_148fd38a4(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xb0) < 1) {
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *param_2 = &PTR_FUN_14a5af930;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    FUN_148fcdaa6(*(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0xa8) + 0x70),
                  param_2,1);
  }
  return param_2;
}



// FUNCTION 148fd38f6 FUN_148fd38f6 body=402 status=ok
// SIG undefined FUN_148fd38f6(void)

longlong *
FUN_148fd38f6(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar9 = 0;
  FUN_1446efa72(param_1,0,8,0x10);
  *(undefined4 *)(param_1 + 1) = 8;
  puVar3 = (undefined8 *)*param_1;
  plVar10 = (longlong *)param_2[1];
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar10[1];
    uVar9 = 0;
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_148fd3956;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar11 = iVar7 == iVar5;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar11);
    uVar9 = *param_2;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar4 = false;
  }
LAB_148fd3956:
  *puVar3 = &PTR_LAB_14ba5c050;
  FUN_148fec020(puVar3 + 1,param_3,param_4,param_5);
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar3[0xb] = lVar8;
  *puVar3 = &PTR_FUN_14ba5bfe0;
  puVar3[0xc] = uVar9;
  puVar3[0xd] = plVar10;
  if (bVar4) {
    puVar3[0xe] = FUN_1443c00b8;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    puVar3[0xe] = FUN_1443c00b8;
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
  }
  return param_1;
}



// FUNCTION 148fd3a88 FUN_148fd3a88 body=402 status=ok
// SIG undefined FUN_148fd3a88(void)

longlong *
FUN_148fd3a88(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar9 = 0;
  FUN_1446efa72(param_1,0,8,0x10);
  *(undefined4 *)(param_1 + 1) = 8;
  puVar3 = (undefined8 *)*param_1;
  plVar10 = (longlong *)param_2[1];
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar10[1];
    uVar9 = 0;
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_148fd3ae8;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar11 = iVar7 == iVar5;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar11);
    uVar9 = *param_2;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar4 = false;
  }
LAB_148fd3ae8:
  *puVar3 = &PTR_LAB_14ba5c130;
  FUN_148fec81c(puVar3 + 1,param_3,param_4,param_5);
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar3[0xb] = lVar8;
  *puVar3 = &PTR_FUN_14ba5c0c0;
  puVar3[0xc] = uVar9;
  puVar3[0xd] = plVar10;
  if (bVar4) {
    puVar3[0xe] = FUN_1443c031a;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    puVar3[0xe] = FUN_1443c031a;
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
  }
  return param_1;
}



// FUNCTION 148fd3c1a FUN_148fd3c1a body=157 status=ok
// SIG undefined FUN_148fd3c1a(void)

undefined8 * FUN_148fd3c1a(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[6] = *param_2;
  lVar1 = param_2[1];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = 0;
  FUN_14485c47a(param_1 + 8,param_3);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x28);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 148fd3cb8 FUN_148fd3cb8 body=101 status=ok
// SIG undefined FUN_148fd3cb8(void)

void FUN_148fd3cb8(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined1 *)(param_1 + 0x88) = 1;
    iVar1 = FUN_148fd3d1e();
    if (iVar1 - 2U < 5) {
      FUN_1443c0888(param_1);
      return;
    }
    if ((iVar1 == 0) ||
       (((*(longlong *)(param_1 + 0x90) != 0 && (*(longlong *)(param_1 + 0x98) != 0)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x98) + 8))))) {
      FUN_1443c09c4(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148fd3d1e FUN_148fd3d1e body=205 status=ok
// SIG undefined FUN_148fd3d1e(void)

undefined4 FUN_148fd3d1e(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x180))();
  local_20 = uVar2;
  plVar4 = (longlong *)FUN_1401e3228();
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_30);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar5 = (**(code **)(*local_30 + 0x20))(local_30,DAT_14c892fc0);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar5 + 0x148);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd3dec FUN_148fd3dec body=307 status=ok
// SIG undefined FUN_148fd3dec(void)

ulonglong FUN_148fd3dec(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + 0x40;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_50);
      plVar3 = local_50;
    }
    if (plVar3 == DAT_14cb8e208) goto LAB_148fd3eed;
    uVar4 = FUN_14479d2ce(param_1);
    pplVar8 = &local_50;
    FUN_148fce6f6(uVar4,pplVar8);
    bVar1 = true;
    if ((longlong)local_48 != 0) {
      plVar3 = local_50 + local_48;
      plVar9 = local_50;
      do {
        pplVar8 = (longlong **)*plVar9;
        cVar2 = FUN_148fd1e76(pplVar8);
        if (cVar2 != '\0') {
          lVar5 = FUN_14479d2ce(param_1);
          lVar6 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x40) + 0x60);
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x58);
            lVar6 = lVar6 * 0x50;
            do {
              cVar2 = FUN_148fd411c(lVar5,pplVar8);
              if (cVar2 != '\0') {
                bVar1 = false;
                goto LAB_148fd3ed4;
              }
              lVar5 = lVar5 + 0x50;
              lVar6 = lVar6 + -0x50;
            } while (lVar6 != 0);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar3);
    }
LAB_148fd3ed4:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = CONCAT71((int7)((ulonglong)pplVar8 >> 8),1);
    if (!bVar1) goto LAB_148fd3eed;
  }
  uVar7 = 0;
LAB_148fd3eed:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd3f20 FUN_148fd3f20 body=346 status=ok
// SIG undefined FUN_148fd3f20(void)

longlong * FUN_148fd3f20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144729dda(param_1 + 0x40);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 == (longlong *)0x0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_40);
    }
    FUN_148fd2fac(&local_38,local_40);
    if (local_2c != -1) {
      lVar4 = FUN_14479d2ce(param_1 + 0x40);
      plVar3 = *(longlong **)(*(longlong *)(lVar4 + 0x40) + 0x58);
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x40) + 0x60);
      bVar1 = true;
      plVar7 = plVar3;
      if (lVar4 != 0) {
        plVar7 = plVar3 + lVar4 * 10;
LAB_148fd3fe6:
        if (local_30 != (int)plVar3[1]) {
          if ((int)plVar3[1] + local_30 == 1) goto LAB_148fd4055;
          goto LAB_148fd403f;
        }
        if (1 < local_30) {
          lVar4 = 0;
          do {
            uVar8 = *(ushort *)(local_38 + lVar4);
            uVar9 = (ulonglong)uVar8;
            uVar5 = *(ushort *)(*plVar3 + lVar4);
            if (uVar8 == uVar5) {
              if (uVar8 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar8)) goto LAB_148fd404d;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar6 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar6]) goto LAB_148fd404d;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
        goto LAB_148fd4055;
      }
LAB_148fd4057:
      if ((local_2c != -1) && (local_38 != 0)) {
        FUN_1400020a8();
      }
      if (!bVar1) goto LAB_148fd3f4c;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_148fd3f4c:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
LAB_148fd404d:
  if (uVar8 == uVar5) {
LAB_148fd4055:
    bVar1 = false;
    plVar7 = plVar3;
    goto LAB_148fd4057;
  }
LAB_148fd403f:
  plVar3 = plVar3 + 10;
  if (plVar3 == plVar7) goto LAB_148fd4057;
  goto LAB_148fd3fe6;
}



// FUNCTION 148fd407c FUN_148fd407c body=159 status=ok
// SIG undefined FUN_148fd407c(void)

void FUN_148fd407c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x88) == '\0') {
    FUN_1443c1bde(param_1 + 0x78,DAT_14cbf5550);
    FUN_144a787a6(param_1 + 0x50,param_2 + 0x10);
    FUN_14034a368(param_1 + 0x60,param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    FUN_148fd47a0(local_38,param_1);
    FUN_1443bffea(uVar1,param_2,local_38);
    FUN_1449db362(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd411c FUN_148fd411c body=141 status=ok
// SIG undefined FUN_148fd411c(void)

undefined4 FUN_148fd411c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined **local_50 [3];
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148fd1d62(param_2,local_50);
  uVar1 = FUN_140ba41f1(local_50,param_1 + 0x20);
  local_50[0] = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd41aa FUN_148fd41aa body=132 status=ok
// SIG undefined FUN_148fd41aa(void)

void FUN_148fd41aa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0x78) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  local_38 = param_2;
  FUN_148fef2e0(local_30,param_1);
  FUN_1448b6402(param_2 + 0xb8,local_40,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd4248 FUN_148fd4248 body=140 status=ok
// SIG undefined FUN_148fd4248(void)

void FUN_148fd4248(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(param_1,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd42d6 FUN_148fd42d6 body=851 status=ok
// SIG undefined FUN_148fd42d6(void)

ulonglong FUN_148fd42d6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = param_1 + 0x40;
  cVar7 = FUN_144729dda(param_1);
  if (cVar7 == '\0') {
LAB_148fd4560:
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)FUN_14479d2ce(param_1);
    (**(code **)(*plVar9 + 0x180))(plVar9);
    local_68 = 0;
    plVar9 = (longlong *)FUN_1401e3228();
    if (plVar9 == (longlong *)0x0) goto LAB_148fd4560;
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_58);
    plVar9 = local_58;
    if (local_58 != (longlong *)0x0) {
      lVar10 = FUN_14479d2ce(param_1);
      uVar12 = *(undefined8 *)(*(longlong *)(lVar10 + 0x70) + 0x18);
      lVar10 = FUN_14479d2ce(param_1);
      uVar11 = FUN_14127b0d4(lVar10 + 0x80);
      (**(code **)(*plVar9 + 0x128))(plVar9,&local_68,uVar11,uVar12);
      iVar19 = local_60;
      if (1 < local_60) {
        FUN_1446f470e(&local_70,L"CUSTOM",1);
        FUN_145cba9f8(param_2,local_70,&local_68,2);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar16 = 0;
      if (iVar19 < 2) goto LAB_148fd456a;
      FUN_143e6d8ca(&local_68);
      uVar12 = FUN_14479d2ce(param_1);
      FUN_148fce6f6(uVar12,&local_80);
      local_88 = local_80;
      iVar19 = 0;
      if ((longlong)local_78 != 0) {
        iVar19 = 0;
        uVar16 = 0;
        plVar9 = local_80;
        do {
          lVar10 = *(longlong *)(*plVar9 + 0x40);
          iVar6 = *(int *)(lVar10 + 0x30);
          if (iVar6 == local_60) {
            if (1 < local_60) {
              lVar17 = 0;
              while( true ) {
                uVar4 = *(ushort *)(*(longlong *)(lVar10 + 0x28) + lVar17);
                uVar5 = *(ushort *)(local_68 + lVar17);
                if (uVar4 != uVar5) break;
                if (uVar4 == 0) goto LAB_148fd44bc;
LAB_148fd446e:
                lVar17 = lVar17 + 2;
              }
              if ((uVar5 | uVar4) < 0x80) {
                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_148fd446e;
                iVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4] -
                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
              }
              else {
                iVar18 = (uint)uVar4 - (uint)uVar5;
              }
              if (iVar18 != 0) goto LAB_148fd44a5;
            }
LAB_148fd44bc:
            uVar15 = (int)uVar16 + 1;
            iVar19 = iVar19 + (uint)(1 < *(int *)(lVar10 + 0xb8));
          }
          else {
            if (local_60 + iVar6 == 1) goto LAB_148fd44bc;
LAB_148fd44a5:
            uVar15 = (int)uVar16 + (uint)(iVar6 < 2);
          }
          uVar16 = (ulonglong)uVar15;
          plVar9 = plVar9 + 1;
        } while (plVar9 != local_80 + local_78);
      }
      if (local_80 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = FUN_14479d2ce(param_1);
      uVar15 = 0;
      if (*(uint *)(lVar10 + 0x1b0) < 0x42) {
        uVar15 = *(uint *)(lVar10 + 0x1b0);
      }
      cVar7 = (char)uVar15;
      if ((cVar7 == '\0') || (iVar19 != (int)uVar16)) {
        lVar10 = FUN_14479d2ce(param_1);
        cVar3 = *(char *)(*(longlong *)(lVar10 + 0x40) + 0x21);
        if (cVar3 == '\0') {
          *(undefined1 *)(param_2 + 0x16) = 1;
          uVar12 = FUN_14479d2ce(param_1);
          uVar8 = FUN_148fd4eda(uVar12);
          *(undefined4 *)(param_2 + 8) = uVar8;
          uVar14 = 1;
          uVar8 = 0;
          goto LAB_148fd45d8;
        }
        if (cVar3 == '\x01') {
          *(undefined1 *)(param_2 + 0x16) = 1;
          *(undefined4 *)(param_2 + 8) = 0;
          uVar12 = FUN_14479d2ce(param_1);
          uVar8 = FUN_148fd4eda(uVar12);
          uVar14 = 1;
          goto LAB_148fd45d8;
        }
        if (cVar3 == '\x02') goto LAB_148fd45bb;
      }
      else {
LAB_148fd45bb:
        *(undefined1 *)(param_2 + 0x16) = 1;
        *(undefined4 *)(param_2 + 8) = 0;
        FUN_14479d2ce(param_1);
        uVar8 = FUN_148fd4eda();
        uVar14 = 0;
LAB_148fd45d8:
        *(undefined4 *)(param_2 + 0xc) = uVar8;
        *(undefined1 *)(param_2 + 0x10) = uVar14;
        *(undefined1 *)(param_2 + 0x17) = uVar14;
      }
      bVar13 = cVar7 == '\a' || cVar7 == '\0';
      *(bool *)(param_2 + 0x15) = bVar13;
      *(bool *)(param_2 + 0x11) = bVar13;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
      goto LAB_148fd456a;
    }
  }
  uVar16 = 0;
LAB_148fd456a:
  plVar9 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd462a FUN_148fd462a body=373 status=ok
// SIG undefined FUN_148fd462a(void)

longlong * FUN_148fd462a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148fd4732:
    *puVar3 = &PTR_LAB_149eae4d0;
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
    *puVar3 = &PTR_FUN_14ba5c4d0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148fd4732;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149eae4d0;
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
    *puVar3 = &PTR_FUN_14ba5c4d0;
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



// FUNCTION 148fd47a0 FUN_148fd47a0 body=380 status=ok
// SIG undefined FUN_148fd47a0(void)

longlong * FUN_148fd47a0(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148fd48aa:
    *puVar3 = &PTR_LAB_14ba5c690;
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
    *puVar3 = &PTR_FUN_14ba5c620;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1443c2428;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148fd48aa;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14ba5c690;
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
    *puVar3 = &PTR_FUN_14ba5c620;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1443c2428;
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



// FUNCTION 148fd491c FUN_148fd491c body=380 status=ok
// SIG undefined FUN_148fd491c(void)

longlong * FUN_148fd491c(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148fd4a26:
    *puVar3 = &PTR_LAB_14b4c2ba0;
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
    *puVar3 = &PTR_FUN_14ba5c700;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1443c272c;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148fd4a26;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4c2ba0;
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
    *puVar3 = &PTR_FUN_14ba5c700;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1443c272c;
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



// FUNCTION 148fd4a98 FUN_148fd4a98 body=373 status=ok
// SIG undefined FUN_148fd4a98(void)

longlong * FUN_148fd4a98(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148fd4ba0:
    *puVar3 = &PTR_LAB_149e02020;
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
    *puVar3 = &PTR_FUN_14ba5c770;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148fd4ba0;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e02020;
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
    *puVar3 = &PTR_FUN_14ba5c770;
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



// FUNCTION 148fd4d5e FUN_148fd4d5e body=380 status=ok
// SIG undefined FUN_148fd4d5e(void)

longlong * FUN_148fd4d5e(longlong *param_1,undefined8 *param_2)

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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_148fd4e68:
    *puVar3 = &PTR_LAB_14b98ad40;
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
    *puVar3 = &PTR_FUN_14ba5c8c0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1443c30cc;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148fd4e68;
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
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b98ad40;
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
    *puVar3 = &PTR_FUN_14ba5c8c0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1443c30cc;
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



// FUNCTION 148fd4eda FUN_148fd4eda body=114 status=ok
// SIG undefined FUN_148fd4eda(void)

undefined4 FUN_148fd4eda(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))(*(longlong **)(param_1 + 0x70),&local_28);
  uVar3 = *(undefined4 *)(local_28 + 0x1c);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd4f54 FUN_148fd4f54 body=234 status=ok
// SIG undefined FUN_148fd4f54(void)

undefined8 FUN_148fd4f54(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*param_1 + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(*param_2 + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_148fd4fc0;
LAB_148fd4f8c:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_148fd4f8c;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
    return 0;
  }
LAB_148fd4fc0:
  iVar1 = (int)param_1[3];
  if (iVar1 == (int)param_2[3]) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(param_1[2] + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(param_2[2] + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_148fd502f;
LAB_148fd4ff8:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_148fd4ff8;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if ((int)param_2[3] + iVar1 != 1) {
    return 0;
  }
LAB_148fd502f:
  uVar2 = FUN_140ba41f1(param_1 + 4,param_2 + 4);
  return uVar2;
}



// FUNCTION 148fd5054 FUN_148fd5054 body=161 status=ok
// SIG undefined FUN_148fd5054(void)

void FUN_148fd5054(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar4 = FUN_148fd50f6(plVar1);
  if (lVar4 == 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar2 + 1U;
    if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
      FUN_148fefb86(plVar1,iVar2);
    }
    FUN_148fefb00((longlong)iVar2 * 0x50 + *plVar1,param_2);
  }
  else {
    cVar3 = FUN_148fd4f54(lVar4,param_2);
    if (cVar3 != '\0') {
      return;
    }
    FUN_148fd518a(lVar4,param_2);
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
  }
  FUN_1447f69b6(param_1 + 0x68);
  return;
}



// FUNCTION 148fd50f6 FUN_148fd50f6 body=147 status=ok
// SIG undefined FUN_148fd50f6(void)

longlong * FUN_148fd50f6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)(int)param_1[1] * 10;
  iVar1 = (int)param_2[1];
LAB_148fd511c:
  if ((int)plVar2[1] == iVar1) {
    if (iVar1 < 2) {
      return plVar2;
    }
    lVar8 = 0;
    do {
      uVar6 = *(ushort *)(*plVar2 + lVar8);
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(ushort *)(*param_2 + lVar8);
      if (uVar6 == uVar4) {
        if (uVar6 == 0) {
          return plVar2;
        }
      }
      else {
        if (0x7f < (uVar4 | uVar6)) goto LAB_148fd5181;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar5]) goto LAB_148fd5181;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  if ((int)plVar2[1] + iVar1 == 1) {
    return plVar2;
  }
  goto LAB_148fd5171;
LAB_148fd5181:
  if (uVar6 == uVar4) {
    return plVar2;
  }
LAB_148fd5171:
  plVar2 = plVar2 + 10;
  if (plVar2 == plVar3) {
    return (longlong *)0x0;
  }
  goto LAB_148fd511c;
}



// FUNCTION 148fd518a FUN_148fd518a body=127 status=ok
// SIG undefined FUN_148fd518a(void)

longlong * FUN_148fd518a(longlong *param_1,longlong *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  FUN_141238a10(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 148fd520a FUN_148fd520a body=577 status=ok
// SIG undefined FUN_148fd520a(void)

void FUN_148fd520a(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar14 = (ulonglong)(int)uVar3;
  if (uVar14 == 0) {
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
  iVar13 = (int)plVar4[1];
  if (iVar13 == (int)param_2[1]) {
    bVar16 = true;
    if (1 < iVar13) {
      lVar10 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*plVar4 + lVar10);
        uVar7 = (uint)uVar1;
        uVar2 = *(ushort *)(*param_2 + lVar10);
        uVar12 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148fd526c;
          }
          iVar13 = uVar7 - uVar12;
          goto LAB_148fd543c;
        }
        if (uVar1 == 0) break;
LAB_148fd526c:
        lVar10 = lVar10 + 2;
      }
      iVar13 = 0;
LAB_148fd543c:
      bVar16 = iVar13 == 0;
    }
  }
  else {
    bVar16 = (int)param_2[1] + iVar13 == 1;
  }
  iVar13 = 0;
  uVar9 = 0;
LAB_148fd52b4:
  iVar6 = (int)uVar9;
  uVar9 = (ulonglong)(iVar6 + 1U);
  if ((int)(iVar6 + 1U) < (int)uVar3) {
    uVar9 = (longlong)iVar6 + 1;
    iVar8 = (int)param_2[1];
    bVar5 = true;
LAB_148fd52d5:
    if ((int)plVar4[uVar9 * 10 + 1] != iVar8) {
      bVar15 = (int)plVar4[uVar9 * 10 + 1] + iVar8 == 1;
      goto LAB_148fd533f;
    }
    if (1 < iVar8) {
      lVar10 = 0;
      do {
        uVar1 = *(ushort *)(plVar4[uVar9 * 10] + lVar10);
        uVar2 = *(ushort *)(*param_2 + lVar10);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_148fd5364;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar11 = (uint)uVar1 - (uint)uVar2;
            goto LAB_148fd5367;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
            goto LAB_148fd5367;
          }
        }
        lVar10 = lVar10 + 2;
      } while( true );
    }
    if (bVar16) goto LAB_148fd534c;
    iVar8 = (int)uVar9 - iVar6;
    goto LAB_148fd53a9;
  }
  bVar5 = false;
  goto LAB_148fd536e;
LAB_148fd5364:
  iVar11 = 0;
LAB_148fd5367:
  bVar15 = iVar11 == 0;
LAB_148fd533f:
  if ((bool)(bVar15 ^ bVar16)) goto LAB_148fd536e;
LAB_148fd534c:
  uVar9 = uVar9 + 1;
  bVar5 = (longlong)uVar9 < (longlong)uVar14;
  if (uVar9 == uVar14) goto LAB_148fd539b;
  goto LAB_148fd52d5;
LAB_148fd539b:
  uVar9 = (ulonglong)uVar3;
LAB_148fd536e:
  iVar8 = (int)uVar9 - iVar6;
  if (bVar16) {
    FUN_148fe79b5(plVar4 + (longlong)iVar6 * 10,iVar8);
    bVar16 = false;
  }
  else {
LAB_148fd53a9:
    if (iVar13 != iVar6) {
      memmove(plVar4 + (longlong)iVar13 * 10,plVar4 + (longlong)iVar6 * 10,(longlong)iVar8 * 0x50);
    }
    iVar13 = iVar13 + iVar8;
    bVar16 = true;
  }
  if (!bVar5) {
    *(int *)(param_1 + 0x60) = iVar13;
    if ((int)uVar3 <= iVar13) {
      return;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
    }
    FUN_1447f69b6(param_1 + 0x68);
    return;
  }
  goto LAB_148fd52b4;
}



// FUNCTION 148fd544c FUN_148fd544c body=74 status=ok
// SIG undefined FUN_148fd544c(void)

undefined8 FUN_148fd544c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    cVar1 = FUN_144729dda(param_1 + 0x18);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x18);
      uVar3 = FUN_140ba41f1(lVar2 + 0x80,lVar2 + 0xb0);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 148fd5496 FUN_148fd5496 body=73 status=ok
// SIG undefined FUN_148fd5496(void)

void FUN_148fd5496(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_1443d5dce(param_1,param_2 + 0x21);
  if (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) {
    cVar1 = FUN_148fefc1a(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_1447f69b6(param_1 + 0x68);
  return;
}



// FUNCTION 148fd54e9 FUN_148fd54e9 body=171 status=ok
// SIG undefined FUN_148fd54e9(void)

ulonglong FUN_148fd54e9(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined7 uStack_57;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  FUN_140056680(&local_58,L"CrossplayPreference");
  cVar1 = FUN_148fd2900(param_1,&local_58,local_48);
  if (CONCAT71(uStack_57,local_58) != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_143e6b7be(local_48,&local_58);
    uVar2 = CONCAT71((int7)((ulonglong)&local_58 >> 8),local_58);
  }
  FUN_140c3a2ac(local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd5596 FUN_148fd5596 body=340 status=ok
// SIG undefined FUN_148fd5596(void)

bool FUN_148fd5596(undefined8 param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar3 = FUN_148fd54e9(param_4);
  FUN_148fce6f6(param_1,&local_58);
  if ((longlong)local_50 != 0) {
    plVar5 = local_58;
    do {
      lVar2 = *(longlong *)(*plVar5 + 0x40);
      iVar1 = *(int *)(param_3 + 0x50);
      if (iVar1 == *(int *)(lVar2 + 0x78)) {
        if (1 < iVar1) {
          lVar7 = 0;
          while( true ) {
            uVar9 = *(ushort *)(*(longlong *)(param_3 + 0x48) + lVar7);
            uVar10 = (ulonglong)uVar9;
            uVar4 = *(ushort *)(*(longlong *)(lVar2 + 0x70) + lVar7);
            if (uVar9 != uVar4) break;
            if (uVar9 == 0) goto LAB_148fd566b;
LAB_148fd5634:
            lVar7 = lVar7 + 2;
          }
          if ((uVar4 | uVar9) < 0x80) {
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar8 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar8]) goto LAB_148fd5634;
          }
          if (uVar9 != uVar4) goto LAB_148fd5676;
        }
      }
      else if (*(int *)(lVar2 + 0x78) + iVar1 != 1) {
LAB_148fd5676:
        if ((((bVar3 & 0xfe) == 2) || ((*(byte *)(lVar2 + 0x150) & 0xfe) == 2)) &&
           ((cVar6 = '\b', bVar3 == 2 || (cVar6 = '\t', *(byte *)(lVar2 + 0x150) == 2)))) {
          *param_2 = cVar6;
          param_2[1] = '\x03';
        }
      }
LAB_148fd566b:
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_58 + local_50);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  cVar6 = *param_2;
  FUN_1447a1747(0,0);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar6 == '\0';
}



// FUNCTION 148fd56ec FUN_148fd56ec body=425 status=ok
// SIG undefined FUN_148fd56ec(void)

undefined2 * FUN_148fd56ec(longlong param_1,undefined2 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_b8;
  longlong *local_b0;
  undefined1 local_a8 [95];
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 0xe8);
  iVar4 = *(int *)(param_1 + 0x114);
  lVar11 = param_3[1];
  iVar9 = FUN_148fd4eda();
  if (iVar9 < (iVar3 - iVar4) + (int)lVar11) {
    *param_2 = 0x304;
  }
  else {
    uVar10 = FUN_148fd8170(param_1,param_1 + 0x80);
    lVar11 = FUN_148fd2988(uVar10,param_1 + 0x80);
    if ((lVar11 == 0) || (cVar7 = FUN_148fcfeec(lVar11), cVar7 != '\x02')) {
      local_49 = '\0';
      local_c8 = &DAT_14c872af8;
      cVar7 = FUN_14052bb08(DAT_14c872ce0,L"Social",L"bAlwaysEnforceCrossplatformOnPartyJoin");
      if (((cVar7 != '\0') && (local_49 == '\x01')) &&
         (lVar11 = param_3[1], (longlong)(int)lVar11 != 0)) {
        lVar5 = *param_3;
        lVar12 = 0;
        do {
          uVar10 = (**(code **)(**(longlong **)(lVar5 + lVar12) + 0x18))();
          FUN_148fd279e(local_a8,uVar10);
          plVar6 = *(longlong **)(lVar5 + lVar12);
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_b8);
          bVar8 = FUN_148fd5596(param_1,param_2,local_a8,local_b8);
          plVar6 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          FUN_1458ea6a8(local_a8);
          bVar13 = (longlong)(int)lVar11 * 0x10 + -0x10 != lVar12;
          lVar12 = lVar12 + 0x10;
        } while ((bVar8 & bVar13) != 0);
      }
    }
    else {
      *param_2 = 0x310;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148fd5896 FUN_148fd5896 body=517 status=ok
// SIG undefined FUN_148fd5896(void)

ulonglong FUN_148fd5896(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong unaff_RBX;
  undefined1 auStack_98 [32];
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 < 2) && (cVar2 = FUN_148fd5a9c(param_2), cVar2 == '\0')) {
    cVar2 = (**(code **)(*param_2 + 0x2d8))(param_2);
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (cVar2 == '\0') goto LAB_148fd595f;
  }
  if ((*(char *)(param_1 + 0x1ad) == '\0') &&
     (unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),2), *(int *)(param_1 + 0x1b0) != 7))
  goto LAB_148fd595f;
  plVar5 = (longlong *)FUN_14479d2ce(param_2[4] + 0xdc);
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),5);
  if (plVar5 == (longlong *)0x0) goto LAB_148fd595f;
  plVar1 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar5 + 0x350))(plVar5,&local_78);
  uVar6 = FUN_14127b0d4(&local_78);
  cVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar6);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  if (cVar2 == '\0') goto LAB_148fd595f;
  FUN_148fcdaa6(param_2,&local_78,0);
  lVar7 = FUN_148fd8170(param_1,&local_78);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  unaff_RBX = CONCAT71((int7)((ulonglong)&local_78 >> 8),4);
  if (lVar7 != 0) goto LAB_148fd595f;
  uVar4 = FUN_148fd5bc0(param_1,param_2,0);
  bVar3 = 1;
  FUN_148fcdaa6(param_2,&local_78,1);
  if ((&DAT_149fc1b6e)[local_60] == '\x01') {
    if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar2 != '\0')) {
LAB_148fd5a4c:
      bVar3 = FUN_148fd5bc0(param_1,param_2,1);
    }
  }
  else if ((local_70 & 0xffffff) != 0) goto LAB_148fd5a4c;
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  unaff_RBX = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),((byte)uVar4 & bVar3) << 3);
LAB_148fd595f:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 148fd5a9c FUN_148fd5a9c body=291 status=ok
// SIG undefined FUN_148fd5a9c(void)

undefined8 FUN_148fd5a9c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_98 [40];
  longlong *local_70;
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
  plVar1 = (longlong *)(param_1 + 0x88);
  lVar2 = param_1 + 0x98;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar5 = *(int *)(param_1 + 0xb0);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar5) || (uStack_40 != lVar2)) {
    do {
      lVar3 = FUN_148fe2ba4(*local_70 + (longlong)iStack_54 * 0x80 + 8);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 1) != 0)) {
        uVar4 = 1;
        goto LAB_148fd5b31;
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar5));
  }
  uVar4 = 0;
LAB_148fd5b31:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148fd5bc0 FUN_148fd5bc0 body=341 status=ok
// SIG undefined FUN_148fd5bc0(void)

ulonglong FUN_148fd5bc0(longlong param_1,undefined8 param_2,char param_3)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  double *pdVar7;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  undefined **local_70;
  uint local_68;
  undefined4 uStack_64;
  byte local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148fcdaa6(param_2,&local_70);
  if ((&DAT_149fc1b6e)[local_58] == '\x01') {
    if (((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x28))(), cVar2 != '\0')) {
LAB_148fd5c8b:
      uVar3 = FUN_147bede77(&local_70);
      iVar4 = FUN_148fefc5e((longlong *)(param_1 + 0x138),uVar3,&local_70);
      if ((iVar4 != -1) &&
         (lVar6 = (longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 0x138),
         pdVar7 = (double *)(lVar6 + 0x30), pdVar7 != (double *)0x0 && lVar6 != 0)) {
        dVar1 = *(double *)(param_1 + 0x188 + (ulonglong)(param_3 == '\0') * 8);
        QueryPerformanceCounter(&local_78);
        uVar5 = CONCAT71((int7)((ulonglong)&local_78 >> 8),
                         (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0 < dVar1 + *pdVar7);
        goto LAB_148fd5c27;
      }
    }
  }
  else if ((local_68 & 0xffffff) != 0) goto LAB_148fd5c8b;
  uVar5 = 0;
LAB_148fd5c27:
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148fd5d16 FUN_148fd5d16 body=2278 status=ok
// SIG undefined FUN_148fd5d16(void)

undefined8 FUN_148fd5d16(longlong *param_1,longlong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined1 auStack_188 [32];
  longlong **local_168;
  undefined1 local_160;
  byte local_151;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *plStack_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined **local_110;
  undefined **local_108;
  undefined8 local_100;
  longlong *local_f8;
  byte local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  byte local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  byte local_90;
  longlong local_88;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar4 = (**(code **)(*param_1 + 800))();
  if (cVar4 != '\0') {
    local_168 = (longlong **)CONCAT71(local_168._1_7_,cVar4);
    uVar15 = 0;
    local_160 = param_3;
    (**(code **)(*param_1 + 0x350))(param_1,2,param_2,0);
    goto LAB_148fd5d73;
  }
  plVar10 = (longlong *)FUN_145b138ac();
  lVar11 = plVar10[0x22];
  if (lVar11 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar11 = plVar10[0x22];
  }
  cVar4 = *(char *)(lVar11 + 0x3c);
  plVar10 = (longlong *)FUN_145b138ac();
  lVar11 = plVar10[0x22];
  if (lVar11 == 0) {
    (**(code **)(*plVar10 + 1000))(plVar10);
    lVar11 = plVar10[0x22];
  }
  local_151 = *(byte *)(lVar11 + 0x3d);
  bVar17 = 0;
  FUN_148fcdaa6(param_2,&local_78,0);
  FUN_148fcdaa6(param_2,&local_a8,1);
  lVar11 = FUN_148fd3674(param_2,1);
  if (lVar11 != 0) {
    bVar17 = *(byte *)(lVar11 + 0x10);
  }
  plVar10 = (longlong *)FUN_14479d2ce(*(longlong *)(param_2 + 0x20) + 0xdc);
  if ((&DAT_149fc1b6e)[local_90] == '\x01') {
    if ((longlong *)CONCAT44(uStack_9c,local_a0) != (longlong *)0x0) {
      bVar5 = (**(code **)(*(longlong *)CONCAT44(uStack_9c,local_a0) + 0x28))();
      goto LAB_148fd5e82;
    }
LAB_148fd5ed0:
    uVar15 = 0;
    if (plVar10 != (longlong *)0x0) {
LAB_148fd5ed7:
      if ((&DAT_149fc1b6e)[local_60] == '\x01') {
        if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(), cVar4 != '\0'
           )) {
LAB_148fd610d:
          cVar4 = FUN_148fd5bc0(param_1,param_2,0);
          if (cVar4 == '\0') {
            uVar12 = FUN_14127b0d4(&local_78);
            FUN_148fd65fe(&local_108,uVar12,param_4);
            (**(code **)(*param_1 + 0x180))(param_1);
            local_d8 = (undefined **)0x0;
            plVar13 = (longlong *)FUN_1401e3228();
            (**(code **)(*plVar13 + 0x40))(plVar13,&local_128);
            plVar13 = local_128;
            local_138 = (longlong *)0x0;
            plStack_130 = (longlong *)0x0;
            uVar12 = *(undefined8 *)(param_1[0xe] + 0x18);
            (**(code **)(*plVar10 + 0x350))(plVar10,&local_d8);
            uVar14 = FUN_14127b0d4(&local_d8);
            local_168 = &local_138;
            uVar8 = (**(code **)(*plVar13 + 0x78))(plVar13,uVar14,uVar12,&local_108);
            local_d8 = &PTR_FUN_14a5af930;
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            local_d8 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])();
            FUN_1449db362(&local_138);
            uVar7 = 7;
            if ((byte)uVar8 != 0) {
              uVar7 = 0;
            }
            local_168 = (longlong **)CONCAT71(local_168._1_7_,uVar7);
            local_160 = param_3;
            (**(code **)(*param_1 + 0x350))(param_1,0,param_2,uVar8);
            plVar10 = plStack_120;
            if (plStack_120 != (longlong *)0x0) {
              LOCK();
              plVar13 = plStack_120 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plStack_120)(plStack_120);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            uVar15 = CONCAT71((int7)((ulonglong)uVar15 >> 8),(byte)uVar15 | (byte)uVar8);
            FUN_148fd668c(&local_108);
          }
        }
      }
      else if ((local_70 & 0xffffff) != 0) goto LAB_148fd610d;
    }
  }
  else {
    bVar5 = (local_a0 & 0xffffff) != 0;
LAB_148fd5e82:
    if ((bVar5 & bVar17) != 1) goto LAB_148fd5ed0;
    if ((&DAT_149fc1b6e)[local_60] == '\x01') {
      if ((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) {
        cVar6 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))();
        goto LAB_148fd5ebf;
      }
    }
    else {
      cVar6 = (local_70 & 0xffffff) != 0;
LAB_148fd5ebf:
      if ((cVar4 == '\0') && (cVar6 != '\0')) goto LAB_148fd5ed0;
    }
    cVar4 = FUN_148fd5bc0(param_1,param_2,1);
    if (cVar4 != '\0') goto LAB_148fd5ed0;
    plVar13 = (longlong *)FUN_140a68038(1);
    if (plVar13 == (longlong *)0x0) {
      local_110 = (undefined **)0x0;
    }
    else {
      (**(code **)(*plVar13 + 0x10))(plVar13,&local_110);
    }
    ppuVar3 = local_110;
    (**(code **)(*param_1 + 0x180))(param_1);
    local_d8 = ppuVar3;
    plVar13 = (longlong *)FUN_1401e3228();
    if (plVar13 == (longlong *)0x0) {
      local_128 = (longlong *)0x0;
      plStack_120 = (longlong *)0x0;
      local_150 = CONCAT71(local_150._1_7_,plVar10 != (longlong *)0x0);
      uVar7 = 6;
      uVar16 = 0;
    }
    else {
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_128);
      uVar16 = 0;
      uVar7 = 6;
      local_150 = CONCAT71(local_150._1_7_,plVar10 != (longlong *)0x0);
      if ((plVar10 != (longlong *)0x0) && (local_128 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x350))(plVar10,&local_d8);
        lVar11 = FUN_148fd8170(param_1,&local_d8);
        local_d8 = &PTR_FUN_14a5af930;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        local_d8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])();
        if (lVar11 == 0) {
          local_d0 = (longlong *)0x0;
          uStack_c8 = 0;
          local_c0 = 0;
        }
        else {
          local_d8 = &PTR_FUN_14a184370;
          local_c0 = *(byte *)(*(longlong *)(lVar11 + 0x40) + 0x98);
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_c0])
                    (&local_d0,*(longlong *)(lVar11 + 0x40) + 0x88);
        }
        local_d8 = &PTR_FUN_14a5af930;
        local_b8 = 0;
        uStack_b0 = 0;
        if ((&DAT_149fc1b6e)[local_c0] == '\x01') {
          if ((local_d0 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*local_d0 + 0x28))(), cVar4 == '\0')) {
LAB_148fd63a6:
            ppuVar3 = local_110;
            (**(code **)(*param_1 + 0x180))(param_1);
            local_108 = ppuVar3;
            plVar13 = (longlong *)FUN_1401e3228();
            if (plVar13 == (longlong *)0x0) {
              local_138 = (longlong *)0x0;
              plStack_130 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar13 + 0x80))(plVar13,&local_138);
              if (local_138 != (longlong *)0x0) {
                lVar11 = FUN_148fd8170(param_1,param_1 + 0x10);
                lVar11 = FUN_14479d2ce(*(longlong *)(*(longlong *)(lVar11 + 0x70) + 0x20) + 0xdc);
                if (lVar11 != 0) {
                  (**(code **)(*local_138 + 0x110))
                            (local_138,&local_148,*(undefined4 *)(lVar11 + 0xe0));
                  local_100 = local_148;
                  local_f8 = local_140;
                  if (local_140 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                    UNLOCK();
                  }
                  local_f0 = 0;
                  local_108 = &PTR_FUN_14a5af930;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  FUN_141238a10(&local_d8,&local_108);
                  local_108 = &PTR_FUN_14a5af930;
                  if (local_e8 != 0) {
                    FUN_1400020a8();
                  }
                  local_108 = &PTR_FUN_14a184370;
                  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_f0])(&local_100);
                  if (local_140 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = local_140 + 1;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)*plVar13 == 0) {
                      (**(code **)*local_140)(local_140);
                      LOCK();
                      piVar1 = (int *)((longlong)local_140 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_140 + 0x10))(local_140);
                      }
                    }
                  }
                }
              }
            }
            plVar13 = plStack_130;
            if (plStack_130 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_130 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_130)(plStack_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
          }
        }
        else if (((ulonglong)local_d0 & 0xffffff) == 0) goto LAB_148fd63a6;
        if ((&DAT_149fc1b6e)[local_c0] == '\x01') {
          if ((local_d0 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*local_d0 + 0x28))(), cVar4 == '\0')) goto LAB_148fd6346;
LAB_148fd6537:
          plVar13 = local_128;
          local_150 = FUN_14127b0d4(&local_a8);
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          uVar8 = DAT_14c892fc0;
          uVar15 = FUN_14127b0d4(&local_d8);
          uVar9 = (**(code **)(*plVar13 + 0x310))(plVar13,uVar15,uVar8,local_150);
          uVar16 = (ulonglong)uVar9;
        }
        else {
          if (((ulonglong)local_d0 & 0xffffff) != 0) goto LAB_148fd6537;
LAB_148fd6346:
          uVar16 = 0;
        }
        local_d8 = &PTR_FUN_14a5af930;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        local_d8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_c0])();
        uVar7 = 6;
        if ((char)uVar16 != '\0') {
          uVar7 = 0;
        }
        local_150 = CONCAT71(local_150._1_7_,1);
      }
    }
    local_168 = (longlong **)CONCAT71(local_168._1_7_,uVar7);
    local_160 = param_3;
    (**(code **)(*param_1 + 0x350))(param_1,1,param_2,uVar16);
    plVar13 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_120 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if ((char)uVar16 == '\0') goto LAB_148fd5ed0;
    uVar15 = CONCAT71((int7)(uVar16 >> 8),1);
    if ((local_151 & (byte)local_150) != 0) goto LAB_148fd5ed7;
  }
  local_a8 = &PTR_FUN_14a5af930;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  local_a8 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_90])(&local_a0);
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
LAB_148fd5d73:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 148fd65fe FUN_148fd65fe body=142 status=ok
// SIG undefined FUN_148fd65fe(void)

undefined8 * FUN_148fd65fe(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 == 0) {
LAB_148fd6628:
    lVar4 = 0;
  }
  else {
    iVar2 = *(int *)(lVar4 + 8);
    do {
      if (iVar2 == 0) goto LAB_148fd6628;
      LOCK();
      iVar1 = *(int *)(lVar4 + 8);
      bVar5 = iVar2 == iVar1;
      if (bVar5) {
        *(int *)(lVar4 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar5);
  }
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = uVar3;
  param_1[1] = lVar4;
  param_1[2] = 0;
  iVar2 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 148fd668c FUN_148fd668c body=73 status=ok
// SIG undefined FUN_148fd668c(void)

void FUN_148fd668c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000148fd66ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fd66d6 FUN_148fd66d6 body=87 status=ok
// SIG undefined FUN_148fd66d6(void)

ulonglong FUN_148fd66d6(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  cVar1 = FUN_148fd672e();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x201) == '\x01')) {
    uVar2 = FUN_145a91644();
    lVar3 = FUN_144a78ede(param_3,uVar2);
    lVar3 = FUN_148fd8170(lVar3,lVar3 + 0xb0);
    if (lVar3 != param_3) {
      uVar4 = FUN_148fd1e76(param_3);
      return uVar4 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 148fd672e FUN_148fd672e body=148 status=ok
// SIG undefined FUN_148fd672e(void)

undefined4 FUN_148fd672e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined **local_50 [3];
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x350))(param_2,local_50);
  uVar1 = FUN_140ba41f1(local_50,param_1 + 0xb0);
  local_50[0] = &PTR_FUN_14a5af930;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd67c4 FUN_148fd67c4 body=156 status=ok
// SIG undefined FUN_148fd67c4(void)

void FUN_148fd67c4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x28);
    local_18 = *(longlong *)(param_1 + 0x30);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd687c FUN_148fd687c body=37 status=ok
// SIG undefined FUN_148fd687c(void)

ulonglong FUN_148fd687c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_148fd672e();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_148fd1e76(param_3);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 148fd68a2 FUN_148fd68a2 body=231 status=ok
// SIG undefined FUN_148fd68a2(void)

void FUN_148fd68a2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x18);
  cVar7 = (**(code **)*puVar3)(puVar3,param_3);
  if (cVar7 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))(*(longlong **)(param_1 + 0x70),&local_38);
    uVar4 = *(undefined4 *)(local_38 + 0x14);
    uVar5 = *(undefined4 *)(local_38 + 0x18);
    uVar6 = *(undefined4 *)(local_38 + 0x1c);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(local_38 + 0x10);
    *(undefined4 *)(param_1 + 0x1ac) = uVar4;
    *(undefined4 *)(param_1 + 0x1b0) = uVar5;
    *(undefined4 *)(param_1 + 0x1b4) = uVar6;
    FUN_144a787a6(param_1 + 0x1b8,local_38 + 0x20);
    FUN_144a787a6(param_1 + 0x1c8,local_38 + 0x30);
    FUN_144a787a6(param_1 + 0x1d8,local_38 + 0x40);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    FUN_148ff2c92(param_1 + 0x2d8,param_1 + 0x198);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd698a FUN_148fd698a body=372 status=ok
// SIG undefined FUN_148fd698a(void)

void FUN_148fd698a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  longlong *local_58;
  byte local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = (**(code **)**(undefined8 **)(param_1[0xe] + 0x18))
                    (*(undefined8 **)(param_1[0xe] + 0x18),param_3);
  if (cVar4 != '\0') {
    uVar6 = FUN_14127b0d4(param_1 + 0x10);
    cVar4 = (**(code **)*param_2)(param_2,uVar6);
    if (cVar4 == '\0') {
      local_78 = (undefined **)0x0;
      uStack_70 = 0;
      plVar8 = (longlong *)param_2[2];
      if (plVar8 == (longlong *)0x0) {
LAB_148fd6a23:
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar5 = (int)plVar8[1];
        do {
          if (iVar5 == 0) goto LAB_148fd6a23;
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar9);
      }
      uStack_60 = 0;
      if (plVar8 != (longlong *)0x0) {
        uStack_60 = param_2[1];
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      local_50 = 0;
      local_68 = &PTR_FUN_14a5af930;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = plVar8;
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_68,&local_78);
      local_68 = &PTR_FUN_14a5af930;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&uStack_60);
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
      pppuVar7 = &local_78;
    }
    else {
      pppuVar7 = &local_68;
      local_68 = (undefined **)0x0;
      uStack_60 = 0;
      (**(code **)(*param_1 + 0x2a0))(param_1,pppuVar7);
    }
    FUN_1449db362(pppuVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd6b00 FUN_148fd6b00 body=73 status=ok
// SIG undefined FUN_148fd6b00(void)

void FUN_148fd6b00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x18);
  cVar2 = (**(code **)*puVar1)(puVar1,param_3);
  if (cVar2 != '\0') {
    FUN_1443c6702(param_1,param_4);
    if (*(char *)(param_1 + 0x228) == '\0') {
      FUN_148fd6bba(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148fd6b4a FUN_148fd6b4a body=98 status=ok
// SIG undefined FUN_148fd6b4a(void)

void FUN_148fd6b4a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_5 == DAT_14cb8e138) {
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x18);
    cVar2 = (**(code **)*puVar1)(puVar1,param_3);
    if (cVar2 != '\0') {
      lVar3 = FUN_1443c6702(param_1,param_4);
      if (lVar3 != 0) {
        FUN_1443bf776(lVar3,param_6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148fd6bba FUN_148fd6bba body=291 status=ok
// SIG undefined FUN_148fd6bba(void)

void FUN_148fd6bba(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_1[0x45] == '\0') {
    (**(code **)(*param_1 + 0x180))();
    local_28 = 0;
    plVar3 = (longlong *)FUN_1401e3228();
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_38);
    uVar5 = *(undefined8 *)(param_1[0xe] + 0x18);
    uVar4 = FUN_14127b0d4(param_1 + 0x10);
    iVar2 = (**(code **)(*local_38 + 0xc0))(local_38,uVar4,uVar5);
    if ((iVar2 == (int)param_1[0x1d] - *(int *)((longlong)param_1 + 0x114)) &&
       (*(char *)((longlong)param_1 + 0x229) == '\x01')) {
      *(undefined1 *)(param_1 + 0x45) = 1;
      FUN_148ff1590(param_1 + 0x6a,param_1);
      uVar5 = FUN_145988618();
      plVar3 = (longlong *)FUN_144a78ede(param_1,uVar5);
      (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd6cde FUN_148fd6cde body=161 status=ok
// SIG undefined FUN_148fd6cde(void)

void FUN_148fd6cde(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_140ba41f1(param_1 + 0x10,param_1 + 0x16);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x368))(param_1,&local_19);
    bVar2 = local_19;
    if (local_19 == 0) {
      if (*(char *)(param_1[8] + 0x21) == '\x02') {
        local_19 = 7;
        bVar2 = 7;
      }
      else {
        bVar2 = 0;
      }
    }
    if (*(uint *)(param_1 + 0x36) != (uint)bVar2) {
      *(bool *)((longlong)param_1 + 0x1ad) = bVar2 == 0;
      *(uint *)(param_1 + 0x36) = (uint)bVar2;
      FUN_1443c6e6c(param_1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd6d8e FUN_148fd6d8e body=631 status=ok
// SIG undefined FUN_148fd6d8e(void)

void FUN_148fd6d8e(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != '\0') {
    FUN_148fd7018(param_1[8] + 0x28,&local_58,param_1);
    plVar1 = (longlong *)FUN_145b138ac();
    lVar3 = plVar1[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar3 = plVar1[0x22];
    }
    lVar5 = param_1[8];
    if (*(char *)(lVar3 + 0x3f) == '\x01') {
      (**(code **)(*param_1 + 0x2f8))(param_1,&local_58);
    }
    else {
      local_58 = CONCAT53(local_58._3_5_,0x10202);
      if (*(byte *)((longlong)param_1 + 0x1a9) - 1 < 2) {
        local_58 = local_58 & 0xffffffffffffff00;
      }
      else if (*(byte *)((longlong)param_1 + 0x1a9) == 3) {
        local_58 = CONCAT53(local_58._3_5_,0x202) & 0xffffffffffffff00;
      }
      if (*(byte *)((longlong)param_1 + 0x1aa) < 4) {
        local_58._0_2_ =
             CONCAT11((char)(0x10102 >> ((*(byte *)((longlong)param_1 + 0x1aa) & 3) << 3)),
                      (undefined1)local_58);
      }
    }
    FUN_1443c385e(lVar5,&local_58);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_148fce6f6(param_1,&local_78);
    lVar3 = local_78;
    if ((longlong)local_70 != 0) {
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar3 + lVar5) + 0x40);
        if (1 < *(int *)(lVar6 + 0x58)) {
          lVar6 = lVar6 + 0x50;
          lVar2 = FUN_148fd50f6(param_1[8] + 0x58,lVar6);
          plVar1 = &local_58;
          if (lVar2 == 0) {
            plVar1 = &local_68;
          }
          FUN_1412fabe8(plVar1,lVar6);
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)local_70 * 8 != lVar5);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
    lVar3 = (longlong)*(int *)(param_1[8] + 0x60);
    if (lVar3 != 0) {
      lVar5 = *(longlong *)(param_1[8] + 0x58);
      lVar3 = lVar3 * 0x50;
      do {
        FUN_1412fabe8(&local_58,lVar5);
        lVar5 = lVar5 + 0x50;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
    if ((longlong)(int)uStack_50 != 0) {
      lVar5 = (longlong)(int)uStack_50 << 4;
      lVar3 = local_58;
      do {
        FUN_1443c70c4(param_1,lVar3);
        lVar3 = lVar3 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    if ((longlong)(int)uStack_60 == 0) {
      uVar4 = 0;
    }
    else {
      lVar5 = (longlong)(int)uStack_60 << 4;
      lVar3 = local_68;
      do {
        FUN_148fd711c(param_1,lVar3);
        lVar3 = lVar3 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      uVar4 = uStack_60 & 0xffffffff;
    }
    FUN_1447a1747(local_68,uVar4);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  FUN_140457ffc(param_1[8] + 0x28,param_1);
  return;
}



// FUNCTION 148fd7018 FUN_148fd7018 body=244 status=ok
// SIG undefined FUN_148fd7018(void)

undefined8 FUN_148fd7018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14ba5d180;
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
  *local_38 = &PTR_FUN_14ba5d110;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148fd710e;
  FUN_148ff1634(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd711c FUN_148fd711c body=662 status=ok
// SIG undefined FUN_148fd711c(void)

void FUN_148fd711c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_78;
  longlong *local_70;
  undefined8 uStack_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((int)param_2[1] < 2) ||
     (lVar5 = FUN_148fd50f6(*(longlong *)(param_1 + 0x40) + 0x58), lVar5 != 0)) goto LAB_148fd7147;
  local_70 = (longlong *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  FUN_148fce6f6(param_1,&local_d8);
  if ((longlong)local_d0 != 0) {
    plVar1 = local_d8 + local_d0;
    plVar8 = local_d8;
    do {
      lVar5 = *plVar8;
      iVar2 = (int)param_2[1];
      iVar3 = *(int *)(*(longlong *)(lVar5 + 0x40) + 0x58);
      if (iVar2 == iVar3) {
        if (1 < iVar2) {
          lVar9 = 0;
          while( true ) {
            uVar6 = *(ushort *)(*param_2 + lVar9);
            uVar7 = (ulonglong)uVar6;
            uVar10 = *(ushort *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x50) + lVar9);
            if (uVar6 != uVar10) break;
            if (uVar6 == 0) goto LAB_148fd725e;
LAB_148fd7223:
            lVar9 = lVar9 + 2;
          }
          if ((uVar10 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar11 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_148fd7223;
          }
          if (uVar6 != uVar10) goto LAB_148fd72b5;
        }
LAB_148fd725e:
        FUN_148fd1d62(lVar5,&local_c8);
        FUN_141238a10(&local_78,&local_c8);
        local_c8 = &PTR_FUN_14a5af930;
        if (local_a8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        local_c8 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uStack_b0 & 0xff])(&uStack_c0);
        cVar4 = FUN_148fd1e76(lVar5);
        if (cVar4 != '\0') break;
      }
      else if (iVar3 + iVar2 == 1) goto LAB_148fd725e;
LAB_148fd72b5:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8(local_d8);
  }
  if ((&DAT_149fc1b6e)[local_60] == '\x01') {
    if ((local_70 != (longlong *)0x0) && (cVar4 = (**(code **)(*local_70 + 0x28))(), cVar4 != '\0'))
    {
LAB_148fd7300:
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (undefined **)0x0;
      uStack_c0 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_a8 = &PTR_FUN_14a5af930;
      local_88 = 0;
      uStack_80 = 0;
      FUN_144a787a6(&local_c8,param_2);
      FUN_141238a10(&local_a8,&local_78);
      FUN_148fd5054(*(undefined8 *)(param_1 + 0x40),&local_c8);
      FUN_148fd7c24(&local_c8);
    }
  }
  else if (((ulonglong)local_70 & 0xffffff) != 0) goto LAB_148fd7300;
  local_78 = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
LAB_148fd7147:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd73c0 FUN_148fd73c0 body=334 status=ok
// SIG undefined FUN_148fd73c0(void)

void FUN_148fd73c0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  byte local_68;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_4 == '\0') goto LAB_148fd74c2;
  FUN_148fcdaa6(param_3,&local_80,param_2);
  if ((&DAT_149fc1b6e)[local_68] == '\x01') {
    if (((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x28))(), cVar2 != '\0')) {
LAB_148fd743b:
      QueryPerformanceCounter(&local_88);
      dVar1 = (double)local_88.QuadPart * DAT_14c83f420;
      uVar3 = FUN_147bede77(&local_80);
      pdVar4 = (double *)FUN_148ff19ae(param_1 + 0x27,uVar3,&local_80);
      *pdVar4 = dVar1 + 16777216.0;
    }
  }
  else if ((local_78 & 0xffffff) != 0) goto LAB_148fd743b;
  local_80 = &PTR_FUN_14a5af930;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_68])(&local_78);
LAB_148fd74c2:
  FUN_148ff1f40(param_1 + 0x67,param_3);
  (**(code **)(*param_1 + 0x348))(param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd750f FUN_148fd750f body=175 status=ok
// SIG undefined FUN_148fd750f(void)

undefined8 FUN_148fd750f(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd75c0 FUN_148fd75c0 body=212 status=ok
// SIG undefined FUN_148fd75c0(void)

void FUN_148fd75c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  cVar1 = FUN_140ba41f1(param_1 + 0x80,param_1 + 0xb0);
  if (cVar1 != '\0') {
    FUN_148fd7696(*(longlong *)(param_2 + 0x40) + 0xf0,local_30,param_1,&local_28);
    FUN_148fd7836(*(longlong *)(param_2 + 0x40) + 0x120,local_30,param_1,&local_28);
    FUN_148fd779a(param_1,*(longlong *)(param_2 + 0x40) + 0x80);
  }
  FUN_148fd793a(*(longlong *)(param_2 + 0x40) + 0x210,local_30,param_1,&local_28);
  FUN_148fd7a3e(*(longlong *)(param_2 + 0x40) + 0x240,local_30,param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd7696 FUN_148fd7696 body=258 status=ok
// SIG undefined FUN_148fd7696(void)

undefined8
FUN_148fd7696(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_40 = &PTR_LAB_14ba5d2d0;
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
  *local_40 = &PTR_FUN_14ba5d260;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_148fd779a;
  FUN_145b01d26(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd779a FUN_148fd779a body=155 status=ok
// SIG undefined FUN_148fd779a(void)

void FUN_148fd779a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b6e8c2(param_2,&local_30);
  FUN_148fd2fac(&local_28,local_30);
  if ((local_1c != -1) &&
     (((lVar1 = FUN_148fd50f6(*(longlong *)(param_1 + 0x40) + 0x58,&local_28), lVar1 != 0 ||
       (FUN_148fd711c(param_1,&local_28), local_1c != -1)) && (local_28 != 0)))) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd7836 FUN_148fd7836 body=258 status=ok
// SIG undefined FUN_148fd7836(void)

undefined8
FUN_148fd7836(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_40 = &PTR_LAB_14ba5d3b0;
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
  *local_40 = &PTR_FUN_14ba5d340;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_1443c7df6;
  FUN_14134bd86(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd793a FUN_148fd793a body=258 status=ok
// SIG undefined FUN_148fd793a(void)

undefined8
FUN_148fd793a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_40 = &PTR_LAB_14ba5d490;
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
  *local_40 = &PTR_FUN_14ba5d420;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_1443c7fac;
  FUN_148ff326a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd7a3e FUN_148fd7a3e body=258 status=ok
// SIG undefined FUN_148fd7a3e(void)

undefined8
FUN_148fd7a3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_40 = &PTR_LAB_14ba5d570;
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
  *local_40 = &PTR_FUN_14ba5d500;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = FUN_1443c82c8;
  FUN_148ff35ec(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd7b42 FUN_148fd7b42 body=225 status=ok
// SIG undefined FUN_148fd7b42(void)

undefined8 * FUN_148fd7b42(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar2 * 2);
  }
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar2 * 2);
  }
  param_1[4] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 7);
  *(byte *)(param_1 + 7) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 5,param_2 + 5);
  param_1[4] = &PTR_FUN_14a5af930;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 148fd7c24 FUN_148fd7c24 body=101 status=ok
// SIG undefined FUN_148fd7c24(void)

void FUN_148fd7c24(longlong *param_1)

{
  param_1[4] = (longlong)&PTR_FUN_14a5af930;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = (longlong)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 7)])(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fd7c8a FUN_148fd7c8a body=57 status=ok
// SIG undefined FUN_148fd7c8a(void)

void FUN_148fd7c8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  
  FUN_1443c844a(param_1,1);
  if (((int)param_5[1] != 0) && (plVar1 = (longlong *)*param_5, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_4);
  }
  FUN_1449db362(param_5);
  return;
}



// FUNCTION 148fd7cc4 FUN_148fd7cc4 body=95 status=ok
// SIG undefined FUN_148fd7cc4(void)

void FUN_148fd7cc4(longlong param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x1a9) = 0;
  }
  else if (param_2[2] == '\x01') {
    *(undefined1 *)(param_1 + 0x1a9) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1a9) = 3;
  }
  if ((byte)param_2[1] < 3) {
    *(char *)(param_1 + 0x1aa) = (char)(0x103 >> ((param_2[1] & 3U) << 3));
  }
  FUN_1443c6e6c(param_1,cVar1 == '\x02');
  FUN_148fd6cde(param_1);
  return;
}



// FUNCTION 148fd7d24 FUN_148fd7d24 body=41 status=ok
// SIG undefined FUN_148fd7d24(void)

void FUN_148fd7d24(longlong param_1,undefined8 param_2)

{
  FUN_148fd6cde();
  FUN_148ff3ad8(param_1 + 0x2a8,param_2);
  return;
}



// FUNCTION 148fd7d4e FUN_148fd7d4e body=456 status=ok
// SIG undefined FUN_148fd7d4e(void)

ulonglong FUN_148fd7d4e(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  FUN_148fce6f6(0,&local_68);
  if ((longlong)local_60 != 0) {
    plVar10 = local_68 + local_60;
    plVar8 = local_68;
    local_70 = plVar10;
    do {
      lVar4 = *(longlong *)(*plVar8 + 0x40);
      cVar5 = FUN_148fd7f18(&local_58,lVar4 + 0x28);
      if (cVar5 == '\0') {
        local_78 = (longlong)(int)uStack_50 * 0x58;
        if ((longlong)(int)uStack_50 != 0) {
          iVar3 = *(int *)(lVar4 + 0x78);
          lVar12 = local_58;
          do {
            if (iVar3 == *(int *)(lVar12 + 0x50)) {
              if (1 < iVar3) {
                lVar11 = 0;
                while( true ) {
                  uVar1 = *(ushort *)(*(longlong *)(lVar4 + 0x70) + lVar11);
                  uVar2 = *(ushort *)(*(longlong *)(lVar12 + 0x48) + lVar11);
                  if (uVar1 != uVar2) break;
                  if (uVar1 == 0) goto LAB_148fd7edd;
LAB_148fd7ea6:
                  lVar11 = lVar11 + 2;
                }
                if ((uVar2 | uVar1) < 0x80) {
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_148fd7ea6;
                  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                          (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                }
                else {
                  iVar7 = (uint)uVar1 - (uint)uVar2;
                }
                if (iVar7 != 0) goto LAB_148fd7ef1;
              }
            }
            else if (*(int *)(lVar12 + 0x50) + iVar3 != 1) {
LAB_148fd7ef1:
              if (local_68 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
              goto LAB_148fd7d9d;
            }
LAB_148fd7edd:
            lVar12 = lVar12 + 0x58;
          } while (lVar12 != local_78 + local_58);
        }
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_148ff3c52(&local_58);
        }
        FUN_148fe7106(local_58 + local_78,lVar4 + 0x28);
        plVar10 = local_70;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar10);
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8(local_68);
  }
  uVar9 = 0;
LAB_148fd7d9d:
  FUN_148ff3c2b(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 148fd7f18 FUN_148fd7f18 body=154 status=ok
// SIG undefined FUN_148fd7f18(void)

undefined8 FUN_148fd7f18(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    return 0;
  }
  plVar4 = (longlong *)*param_1;
  plVar9 = plVar4 + (longlong)(int)param_1[1] * 0xb;
  iVar1 = (int)param_2[1];
LAB_148fd7f3c:
  iVar2 = (int)plVar4[1];
  if (iVar2 == iVar1) {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    if (iVar1 < 2) {
      return uVar3;
    }
    lVar5 = 0;
    do {
      uVar7 = *(ushort *)(*plVar4 + lVar5);
      uVar8 = (ulonglong)uVar7;
      uVar6 = *(ushort *)(*param_2 + lVar5);
      if (uVar7 == uVar6) {
        if (uVar7 == 0) {
          return uVar3;
        }
      }
      else {
        if (0x7f < (uVar6 | uVar7)) goto LAB_148fd7fa6;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar10]) goto LAB_148fd7fa6;
      }
      lVar5 = lVar5 + 2;
    } while( true );
  }
  if (iVar2 + iVar1 == 1) {
    return 1;
  }
  goto LAB_148fd7f94;
LAB_148fd7fa6:
  if (uVar7 == uVar6) {
    return uVar3;
  }
LAB_148fd7f94:
  plVar4 = plVar4 + 0xb;
  if (plVar4 == plVar9) {
    return 0;
  }
  goto LAB_148fd7f3c;
}



// FUNCTION 148fd7fb2 FUN_148fd7fb2 body=297 status=ok
// SIG undefined FUN_148fd7fb2(void)

ulonglong FUN_148fd7fb2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  undefined7 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x180))();
  local_28 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      FUN_148fd80dc(param_1,&local_40);
      lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,local_40);
      if ((lVar5 != 0) &&
         ((uVar3 = *(uint *)(lVar5 + 0x148), 7 < uVar3 || ((0x83U >> (uVar3 & 0x1f) & 1) == 0)))) {
        if ((uVar3 - 5 < 0xfffffffe) ||
           (param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1),
           *(char *)(lVar5 + 0x39) != '\0')) {
          uVar7 = (undefined7)((ulonglong)param_1 >> 8);
          if ((*(char *)(lVar5 + 0x38) == '\0') && (*(char *)(lVar5 + 0x3f) == '\0')) {
            param_1 = (longlong *)CONCAT71(uVar7,1);
            bVar6 = 1;
            if (*(byte *)(lVar5 + 0x40) == 0) {
              bVar6 = *(byte *)(lVar5 + 0x3d) ^ 1;
            }
            if (*(longlong *)(lVar5 + 0x100) != 0) {
              param_1 = (longlong *)
                        (ulonglong)
                        CONCAT31((int3)(uVar3 - 5 >> 8),(*(byte *)(lVar5 + 0x40) ^ 1) & bVar6);
            }
          }
          else {
            param_1 = (longlong *)CONCAT71(uVar7,*(longlong *)(lVar5 + 0x100) == 0);
          }
        }
        goto LAB_148fd806f;
      }
    }
  }
  param_1 = (longlong *)0x0;
LAB_148fd806f:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd80dc FUN_148fd80dc body=148 status=ok
// SIG undefined FUN_148fd80dc(void)

ulonglong * FUN_148fd80dc(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = FUN_148fd8170(param_1,param_1 + 0x10);
  lVar1 = FUN_14479d2ce(*(longlong *)(*(longlong *)(lVar1 + 0x70) + 0x20) + 0xdc);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar1 = FUN_140334a94(lVar1,uVar2);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x398) != 0)) {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar1 + 0x398) + 0x3f0);
      goto LAB_148fd8162;
    }
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar3 = (ulonglong)DAT_14c892fbc;
LAB_148fd8162:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 148fd8170 FUN_148fd8170 body=107 status=ok
// SIG undefined FUN_148fd8170(void)

longlong FUN_148fd8170(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_147bede77(param_2);
  iVar2 = FUN_148ff1fe4((longlong *)(param_1 + 0xe0),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0xe0),
     plVar4 = (longlong *)(lVar3 + 0x30), plVar4 == (longlong *)0x0 || lVar3 == 0)) {
    return 0;
  }
  lVar3 = *plVar4;
  if (DAT_14c950c29 != '\x01') {
    return lVar3;
  }
  if (lVar3 == 0) {
    return 0;
  }
  FUN_1456cec3c(lVar3);
  return lVar3;
}



// FUNCTION 148fd81dc FUN_148fd81dc body=190 status=ok
// SIG undefined FUN_148fd81dc(void)

longlong * FUN_148fd81dc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ba5d7a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_148ff4358(puVar1 + 1,param_4);
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
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_14ba5d730;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = param_3;
  return param_1;
}



// FUNCTION 148fd829a FUN_148fd829a body=67 status=ok
// SIG undefined FUN_148fd829a(void)

char * FUN_148fd829a(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  
  cVar3 = FUN_148fd7fb2();
  cVar5 = '\x05';
  if (cVar3 == '\0') {
    iVar1 = *(int *)(param_1 + 0xe8);
    iVar2 = *(int *)(param_1 + 0x114);
    iVar4 = FUN_148fd4eda(param_1);
    cVar5 = (iVar4 <= iVar1 - iVar2) << 2;
  }
  *param_2 = cVar5;
  return param_2;
}



// FUNCTION 148fd82de FUN_148fd82de body=49 status=ok
// SIG undefined FUN_148fd82de(void)

longlong * FUN_148fd82de(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f5a9e();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 148fd8314 FUN_148fd8314 body=62 status=ok
// SIG undefined FUN_148fd8314(void)

undefined8 * FUN_148fd8314(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148fd8170(param_1,param_1 + 0x80);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_148ff43dc(param_2);
  *(undefined8 *)*param_2 = uVar1;
  return param_2;
}



// FUNCTION 148fd8352 FUN_148fd8352 body=84 status=ok
// SIG undefined FUN_148fd8352(void)

undefined8 FUN_148fd8352(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 8);
  lVar1 = *plVar5;
  if (lVar1 != 0) {
    lVar2 = **(longlong **)(param_1 + 8);
    FUN_141238a10(param_2,lVar2 + 8);
    uVar4 = FUN_148ff4514(param_2 + 0x30,lVar2 + 0x38);
    uVar3 = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = uVar3;
    plVar5 = (longlong *)CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(lVar2 + 0x58));
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar2 + 0x58);
  }
  return CONCAT71((int7)((ulonglong)plVar5 >> 8),lVar1 != 0);
}



// FUNCTION 148fd83a6 FUN_148fd83a6 body=153 status=ok
// SIG undefined FUN_148fd83a6(void)

void FUN_148fd83a6(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e020b0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ba5d810;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_1443c9174;
  return;
}



// FUNCTION 148fd8440 FUN_148fd8440 body=153 status=ok
// SIG undefined FUN_148fd8440(void)

void FUN_148fd8440(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14ba5d8f0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14ba5d880;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  puVar1[4] = FUN_1443c91d0;
  return;
}



// FUNCTION 148fd84da FUN_148fd84da body=291 status=ok
// SIG undefined FUN_148fd84da(void)

bool FUN_148fd84da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_141238a10(param_2,lVar1 + 8);
    FUN_148ff4adc(param_2 + 0x30,lVar1 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = uVar3;
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(lVar1 + 0x58);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_78 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_90 = &PTR_FUN_14a5af930;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_141238a10(lVar1 + 8,&local_90);
    FUN_148ff4adc(lVar1 + 0x38,&uStack_60);
    *(undefined4 *)(lVar1 + 0x48) = (undefined4)uStack_50;
    *(undefined4 *)(lVar1 + 0x4c) = uStack_50._4_4_;
    *(undefined4 *)(lVar1 + 0x50) = (undefined4)local_48;
    *(undefined4 *)(lVar1 + 0x54) = local_48._4_4_;
    *(undefined1 *)(lVar1 + 0x58) = (undefined1)uStack_40;
    FUN_14601549e(&local_90);
    if (lVar2 != 0) {
      FUN_14601549e(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd8610 FUN_148fd8610 body=163 status=ok
// SIG undefined FUN_148fd8610(void)

void FUN_148fd8610(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar4 = 0;
  puVar4[1] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 0x18);
  *(byte *)(puVar4 + 4) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(puVar4 + 2,param_2 + 8);
  puVar4[1] = &PTR_FUN_14a5af930;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(puVar4 + 0xb) = *(undefined1 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  puVar4[9] = *(undefined8 *)(param_2 + 0x40);
  puVar4[10] = uVar3;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar4;
    *puVar2 = puVar4;
  }
  return;
}



// FUNCTION 148fd86b4 FUN_148fd86b4 body=166 status=ok
// SIG undefined FUN_148fd86b4(void)

void FUN_148fd86b4(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x240) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = 0;
    iVar1 = *(int *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x238) = 0;
    local_38 = plVar2;
    local_30 = iVar1;
    FUN_1449db362(param_1 + 0x230);
    *(undefined1 *)(param_1 + 0x240) = 0;
    if (plVar2 != (longlong *)0x0 && iVar1 != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    }
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd875c FUN_148fd875c body=176 status=ok
// SIG undefined FUN_148fd875c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148fd875c(undefined8 *param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf58a0) {
    FUN_144b3d300(&DAT_14cbf58a0);
    if (DAT_14cbf58a0 == -1) {
      _DAT_14cbf5880 = &PTR_FUN_14a184370;
      _DAT_14cbf5888 = 0;
      uRam000000014cbf5890 = 0;
      DAT_14cbf5898 = 0;
      atexit((_func_5014 *)&LAB_1443d5e2c);
      _Init_thread_footer(&DAT_14cbf58a0);
    }
  }
  *param_1 = &PTR_FUN_14a184370;
  uVar1 = (ulonglong)DAT_14cbf5898;
  *(byte *)(param_1 + 3) = DAT_14cbf5898;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[uVar1])(param_1 + 1,&DAT_14cbf5888);
  return param_1;
}



// FUNCTION 148fd8810 FUN_148fd8810 body=404 status=ok
// SIG undefined FUN_148fd8810(void)

void FUN_148fd8810(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  iVar4 = 0;
  local_d0 = lVar2;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_d8);
    iVar4 = *(int *)(param_1 + 0x60);
  }
  local_50 = local_c8;
  iStack_4c = iStack_c4;
  local_48 = local_c0;
  local_44 = local_bc;
  local_60 = local_d8;
  local_58 = local_d0;
  local_68 = plVar1;
  if ((iStack_c4 != iVar4) || (local_d0 != lVar2)) {
    do {
      FUN_148fe7fdc(&local_d8,(longlong)iStack_4c * 0x78 + *local_68);
      uVar3 = FUN_148fd89a6(param_1,&local_c8);
      FUN_148fd8ab0(uVar3);
      FUN_148fdb144(&local_c8);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (local_68 != plVar1 || (local_58 != lVar2 || iStack_4c != iVar4));
  }
  FUN_148ff515e(plVar1);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd89a6 FUN_148fd89a6 body=264 status=ok
// SIG undefined FUN_148fd89a6(void)

longlong FUN_148fd89a6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [96];
  undefined8 *local_40;
  undefined1 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 7;
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_148ff565a(plVar1,uVar3,param_2);
  if (iVar4 != -1) {
    if (*plVar1 + (longlong)iVar4 * 0x78 != 0) {
      lVar6 = *plVar1 + (longlong)iVar4 * 0x78 + 0x10;
      goto LAB_148fd8a19;
    }
  }
  FUN_148fdb0cc(local_a0,param_2,param_1);
  local_40 = param_2;
  local_38 = local_a0;
  FUN_148ff5726(plVar1,&local_2c);
  lVar6 = param_1[7] + (longlong)local_2c * 0x78 + 0x10;
  FUN_148fdb144(local_a0);
  FUN_148fdb18e(lVar6);
  (**(code **)(*param_1 + 0x300))(param_1,lVar6);
LAB_148fd8a19:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd8ab0 FUN_148fd8ab0 body=554 status=ok
// SIG undefined FUN_148fd8ab0(void)

void FUN_148fd8ab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x50))(local_30,param_1 + 0x48);
      plVar3 = local_28;
      local_30 = (longlong *)0x0;
      if (local_28 != (longlong *)0x0) {
        local_28 = (longlong *)0x0;
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
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),&local_40);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x2e0))(local_40,param_1 + 0x50);
      (**(code **)(*local_40 + 0x340))(local_40,param_1 + 0x58);
      plVar3 = local_38;
      local_40 = (longlong *)0x0;
      if (local_38 != (longlong *)0x0) {
        local_38 = (longlong *)0x0;
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
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x150))();
    local_78 = DAT_14cb8e200;
    FUN_1400021e4(&local_78,local_70);
    FUN_144a882a8(local_60,local_70,&DAT_149e31048);
    FUN_144a7dea0(&local_50,local_60,param_1);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    puVar4 = local_50;
    if (local_48 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_80,puVar4,1);
    FUN_148a3ada4(local_80);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar3 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd8cdc FUN_148fd8cdc body=1114 status=ok
// SIG undefined FUN_148fd8cdc(void)

void FUN_148fd8cdc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_148fd89a6();
  plVar3 = *(longlong **)(lVar8 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    uVar11 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_58);
    if (local_58 == (longlong *)0x0) {
LAB_148fd8da8:
      bVar5 = true;
      uVar11 = 0;
    }
    else {
      iVar7 = (**(code **)(*local_58 + 0x138))(local_58,0);
      bVar5 = true;
      if (iVar7 == 2) {
        uVar11 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      }
      else {
        if (*(longlong *)(lVar8 + 0x30) != 0) goto LAB_148fd8da8;
        local_a8 = (void *)0x0;
        local_a0 = *(int *)(param_2 + 1);
        lVar10 = (longlong)local_a0;
        pvVar4 = (void *)*param_2;
        local_b0 = param_1;
        if (lVar10 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_a0,0);
          memcpy(local_a8,pvVar4,lVar10 * 2);
        }
        local_98 = 0;
        local_90 = 0;
        FUN_14114e6dc(&local_98,param_4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,4,0x10);
        puVar6 = local_68;
        local_60 = 4;
        *local_68 = &PTR_LAB_14b438a40;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_68[2] = lVar9;
        *local_68 = &PTR_FUN_14ba5d9d0;
        local_68[3] = local_b0;
        local_68[4] = 0;
        lVar10 = (longlong)local_a0;
        *(int *)(local_68 + 5) = local_a0;
        if (lVar10 == 0) {
          *(undefined4 *)((longlong)local_68 + 0x2c) = 0;
        }
        else {
          puVar2 = local_68 + 4;
          local_b8 = local_a8;
          FUN_1446dd670(puVar2,local_a0,0);
          memcpy((void *)*puVar2,local_b8,lVar10 * 2);
        }
        puVar6[6] = 0;
        *(undefined4 *)(puVar6 + 7) = 0;
        FUN_14114e6dc(puVar6 + 6,&local_98);
        FUN_1449db362(&local_98);
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_a8 = (void *)0x0;
        local_a0 = *(int *)(param_2 + 1);
        lVar10 = (longlong)local_a0;
        pvVar4 = (void *)*param_2;
        if (lVar10 == 0) {
          local_9c = 0;
          local_b0 = param_1;
        }
        else {
          local_b0 = param_1;
          FUN_1446dd670(&local_a8,local_a0,0);
          memcpy(local_a8,pvVar4,lVar10 * 2);
        }
        local_98 = 0;
        local_90 = 0;
        FUN_145bf2b6e(&local_98,&local_68);
        local_88 = 0;
        local_80 = 0;
        FUN_14114e6dc(&local_88,param_4);
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,5,0x10);
        puVar6 = local_78;
        pvVar4 = local_a8;
        local_70 = 5;
        *local_78 = &PTR_LAB_14b438870;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_78[2] = lVar9;
        *local_78 = &PTR_FUN_14ba5da40;
        local_78[3] = local_b0;
        local_78[4] = 0;
        lVar10 = (longlong)local_a0;
        *(int *)(local_78 + 5) = local_a0;
        if (lVar10 == 0) {
          *(undefined4 *)((longlong)local_78 + 0x2c) = 0;
        }
        else {
          puVar2 = local_78 + 4;
          FUN_1446dd670(puVar2,local_a0,0);
          memcpy((void *)*puVar2,pvVar4,lVar10 * 2);
        }
        puVar6[6] = local_98;
        uVar11 = 0;
        local_98 = 0;
        *(undefined4 *)(puVar6 + 7) = local_90;
        local_90 = 0;
        puVar6[8] = 0;
        *(undefined4 *)(puVar6 + 9) = 0;
        FUN_14114e6dc(puVar6 + 8,&local_88);
        FUN_1443ca97c(&local_b0);
        (**(code **)(*local_58 + 0x90))(local_58,&local_b0,0,&local_78);
        *(undefined8 *)(lVar8 + 0x30) = local_b0;
        (**(code **)(*local_58 + 0x88))(local_58,0,param_3);
        FUN_1449db362(&local_78);
        FUN_1449db362(&local_68);
        bVar5 = false;
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (!bVar5) goto LAB_148fd8d77;
  }
  plVar3 = (longlong *)*param_4;
  if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar11 & 0xffffffff);
  }
LAB_148fd8d77:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd9138 FUN_148fd9138 body=686 status=ok
// SIG undefined FUN_148fd9138(void)

void FUN_148fd9138(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = FUN_148fd89a6();
  plVar3 = *(longlong **)(lVar8 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    uVar10 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_58);
    if (local_58 == (longlong *)0x0) {
LAB_148fd9385:
      bVar5 = true;
      uVar10 = 0;
    }
    else {
      iVar7 = (**(code **)(*local_58 + 0x138))(local_58,0);
      bVar5 = true;
      if (iVar7 == 0) {
        uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      }
      else {
        if (*(longlong *)(lVar8 + 0x38) != 0) goto LAB_148fd9385;
        local_88 = (void *)0x0;
        local_80 = *(int *)(param_2 + 1);
        lVar11 = (longlong)local_80;
        pvVar4 = (void *)*param_2;
        local_90 = param_1;
        if (lVar11 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,pvVar4,lVar11 * 2);
        }
        local_78 = 0;
        local_70 = 0;
        FUN_14114e6dc(&local_78,param_3);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,4,0x10);
        puVar6 = local_68;
        pvVar4 = local_88;
        local_60 = 4;
        *local_68 = &PTR_LAB_14b438ba0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        local_68[2] = lVar9;
        *local_68 = &PTR_FUN_14ba5dac0;
        local_68[3] = local_90;
        local_68[4] = 0;
        lVar11 = (longlong)local_80;
        *(int *)(local_68 + 5) = local_80;
        if (lVar11 == 0) {
          *(undefined4 *)((longlong)local_68 + 0x2c) = 0;
        }
        else {
          puVar1 = local_68 + 4;
          FUN_1446dd670(puVar1,local_80,0);
          memcpy((void *)*puVar1,pvVar4,lVar11 * 2);
        }
        puVar6[6] = 0;
        *(undefined4 *)(puVar6 + 7) = 0;
        FUN_14114e6dc(puVar6 + 6,&local_78);
        FUN_1449db362(&local_78);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = 0;
        (**(code **)(*local_58 + 0xb8))(local_58,&local_90,0,&local_68);
        *(undefined8 *)(lVar8 + 0x38) = local_90;
        (**(code **)(*local_58 + 0xb0))(local_58,0);
        FUN_1449db362(&local_68);
        bVar5 = false;
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (!bVar5) goto LAB_148fd935a;
  }
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar10 & 0xffffffff);
  }
LAB_148fd935a:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fd93e8 FUN_148fd93e8 body=2167 status=ok
// SIG undefined FUN_148fd93e8(void)

void FUN_148fd93e8(undefined **param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  void *_Src;
  undefined8 uVar5;
  undefined **ppuVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_260;
  longlong *local_250;
  longlong *local_248;
  undefined8 *local_240;
  undefined4 local_238;
  undefined **local_230;
  void *local_228;
  int local_220;
  undefined4 local_21c;
  longlong *local_218;
  longlong *local_210;
  undefined8 local_208;
  undefined4 local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  ulonglong local_1b8;
  longlong *local_1b0;
  undefined2 local_1a8 [2];
  undefined4 local_1a4;
  undefined **local_1a0;
  ulonglong local_198;
  longlong *local_190;
  ulonglong local_188;
  longlong *local_180;
  undefined **ppuStack_178;
  undefined1 local_170 [16];
  byte local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined1 local_140 [88];
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  byte local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  FUN_148ff4dd0(&local_b0,param_3);
  local_a0 = 1;
  lVar8 = FUN_148fd89a6(param_1,param_2);
  plVar3 = *(longlong **)(lVar8 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    FUN_148fd9c60(lVar8,&local_1b8);
    if (local_1b8 != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_1c8);
      if (local_1c8 != (longlong *)0x0) {
        local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,0x11111111);
        (**(code **)(*local_1c8 + 200))(local_1c8,&local_1d8,local_1b8);
        if (local_1d8 != 0) {
          uVar4 = *(ulonglong *)(local_1d8 + 0x30);
          plVar3 = *(longlong **)(local_1d8 + 0x38);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          if (uVar4 != 0) {
            local_e0 = 0;
            uStack_d8 = 0;
            local_d0 = 0;
            local_e8 = &PTR_FUN_14a5af930;
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = 0;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_188 = local_188 & 0xffffffffffffff00;
            local_1a0 = &PTR_FUN_14a5af930;
            local_180 = (longlong *)0x0;
            ppuStack_178 = (undefined **)0x0;
            local_198 = uVar4;
            local_190 = plVar3;
            FUN_141238a10(&local_e8,&local_1a0);
            local_1a0 = &PTR_FUN_14a5af930;
            if (local_180 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_1a0 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_188 & 0xff])(&local_198);
            FUN_140212f8e(&local_230);
            ppuVar6 = local_230;
            local_260 = 0;
            local_268 = 0;
            local_270 = 0;
            local_278 = (undefined2 *)((ulonglong)local_278._4_4_ << 0x20);
            FUN_14021300e(&local_1a0,0x7b2,1,1);
            local_b8 = ((longlong)ppuVar6 - (longlong)local_1a0) / 10000000;
            cVar7 = FUN_148fd9d40(lVar8,&local_e8);
            if (cVar7 != '\0') {
              if (local_a0 == 1) {
                FUN_1449db362(&local_b0);
                local_a0 = 0;
              }
              local_250 = (longlong *)FUN_14001cc68(0x18,0x10);
              local_250[1] = (longlong)&DAT_100000001;
              *local_250 = (longlong)&PTR_FUN_14ba5db30;
              local_250[2] = 0;
              plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
              plVar9[1] = (longlong)&DAT_100000001;
              *plVar9 = (longlong)&PTR_FUN_14ba5db50;
              plVar9[2] = 0;
              local_228 = (void *)0x0;
              local_220 = *(int *)(param_2 + 1);
              lVar8 = (longlong)local_220;
              _Src = (void *)*param_2;
              local_230 = param_1;
              if (lVar8 == 0) {
                local_21c = 0;
              }
              else {
                FUN_1446dd670(&local_228,local_220,0);
                memcpy(local_228,_Src,lVar8 * 2);
              }
              plVar2 = local_250 + 2;
              local_218 = local_1c8;
              local_210 = local_1c0;
              if (local_1c0 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_1c0 + 0xc) = *(int *)((longlong)local_1c0 + 0xc) + 1;
                UNLOCK();
              }
              local_248 = plVar9 + 2;
              local_208 = 0;
              local_200 = 0;
              FUN_148ff4dd0(&local_208,param_3);
              local_1f0 = local_250;
              if (local_250 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_250 + 1) = (int)local_250[1] + 1;
                UNLOCK();
              }
              local_1e8 = local_248;
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                UNLOCK();
              }
              local_198 = local_1b8;
              local_190 = local_1b0;
              if (local_1b0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
                UNLOCK();
              }
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              ppuStack_178 = &PTR_FUN_14a184370;
              local_160 = local_d0;
              local_1f8 = plVar2;
              local_1e0 = plVar9;
              local_1a0 = param_1;
              local_188 = uVar4;
              local_180 = plVar3;
              (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_d0])(local_170,&local_e0);
              ppuStack_178 = &PTR_FUN_14a5af930;
              local_158 = 0;
              uStack_150 = 0;
              local_148 = local_b8;
              FUN_1443caa26(local_140,&local_230);
              local_98 = (undefined8 *)0x0;
              local_90 = 0;
              FUN_1446efa72(&local_98,0,0xe,0x10);
              puVar11 = local_98;
              local_90 = 0xe;
              *local_98 = &PTR_LAB_14ba5cee0;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar8 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar8 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar8;
              local_98[2] = lVar10;
              *local_98 = &PTR_FUN_14ba5db70;
              local_98[3] = 0;
              FUN_14485c47a(local_98 + 3,param_1);
              FUN_1443d80a0(puVar11 + 4,&local_1a0);
              (**(code **)(*local_1c8 + 0x278))(local_1c8,&local_240,&local_98);
              *plVar2 = (longlong)local_240;
              FUN_1449db362(&local_98);
              lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
              if (lVar8 != 0) {
                if (*(longlong *)(lVar8 + 0x1f0) == 0) {
                  puVar11 = (undefined8 *)(lVar8 + 0x458);
                }
                else {
                  puVar11 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
                }
                uVar5 = *puVar11;
                local_240 = (undefined8 *)0x0;
                local_238 = 0;
                FUN_1446efa72(&local_240,0,8,0x10);
                puVar11 = local_240;
                local_238 = 8;
                *local_240 = &PTR_LAB_14ba5dc50;
                *(undefined1 *)(local_240 + 1) = 3;
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 1;
                lVar8 = DAT_14c758608 + 1;
                if (lVar10 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar10 = DAT_14c758608 + 2;
                  lVar8 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar8;
                local_240[2] = lVar10;
                *local_240 = &PTR_FUN_14ba5dbe0;
                local_240[3] = 0;
                FUN_14485c47a(local_240 + 3,param_1);
                FUN_1443caa26(puVar11 + 4,&local_230);
                local_98 = (undefined8 *)0x0;
                local_90 = 0;
                FUN_14487d8d8(&local_98,&local_240);
                local_58 = 1;
                local_278 = local_1a8;
                local_1a8[0] = 0;
                local_1a4 = 0xbf800000;
                FUN_1406f4044(uVar5,local_248,&local_98,0x42700000);
                (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
                FUN_1449db362(&local_240);
              }
              FUN_1443caaf6(&local_1a0);
              FUN_1443cab9a(&local_230);
              if (plVar9 != (longlong *)0x0) {
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
              }
              plVar9 = local_250;
              if (local_250 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_250 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_250)(local_250);
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
            local_e8 = &PTR_FUN_14a5af930;
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
            local_e8 = &PTR_FUN_14a184370;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_d0])(&local_e0);
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar9 = plVar3 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_1d0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_1d0)(local_1d0);
            LOCK();
            piVar1 = (int *)((longlong)local_1d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_1d0 + 0x10))(local_1d0);
            }
          }
        }
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1c0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)local_1c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1c0 + 0x10))(local_1c0);
          }
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b0 + 0x10))(local_1b0);
        }
      }
    }
  }
  if (local_a0 == 1) {
    if (local_b0 != (longlong *)0x0 && local_a8 != 0) {
      (**(code **)(*local_b0 + 0x60))(local_b0,3);
    }
  }
  if ((local_a0 & 1) != 0) {
    FUN_1449db362(&local_b0);
  }
  if ((local_48 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd9c60 FUN_148fd9c60 body=223 status=ok
// SIG undefined FUN_148fd9c60(void)

undefined8 * FUN_148fd9c60(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x110))(local_28,&local_38,0);
      if (&local_38 == param_2) {
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
      }
      else {
        *param_2 = local_38;
        if (local_30 != (longlong *)0x0) {
          param_2[1] = local_30;
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fd9d40 FUN_148fd9d40 body=880 status=ok
// SIG undefined FUN_148fd9d40(void)

ulonglong FUN_148fd9d40(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  undefined2 *local_388;
  int local_380;
  undefined **local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  longlong local_350 [4];
  undefined8 local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d4;
  undefined4 local_2cc;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined **local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined **local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_2a8 = 0;
  local_2a0 = 0;
  local_2b0 = &PTR_FUN_14ba5ae70;
  local_298 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_230 = &PTR_FUN_14a5af930;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 2;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  local_1c8 = 2;
  local_1c4 = 0;
  uStack_1bc = 0;
  local_1b4 = 0x200000000;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_19c = 0x200000000;
  local_194 = 0;
  uStack_18c = 0;
  local_184 = 0x200000000;
  local_17c = 0;
  uStack_174 = 0;
  local_16c = 0;
  local_168 = 2;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 2;
  local_144 = 0;
  uStack_13c = 0;
  local_134 = 0x200000000;
  local_10c = 0;
  local_11c = 0;
  uStack_114 = 0;
  local_12c = 0;
  uStack_124 = 0;
  local_108 = 2;
  local_f4 = 0;
  local_104 = 0;
  uStack_fc = 0;
  local_f0 = 2;
  local_d0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_e8 = &PTR_FUN_14a5af930;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_90 = 2;
  local_8c = 0;
  uStack_84 = 0;
  local_7c = 0x200000000;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = 0x200000000;
  local_4c = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_48 = 2;
  local_290 = 1;
  FUN_1443c9ab4();
  local_370 = 0;
  uStack_368 = 0;
  local_378 = &PTR_FUN_14ba5ae40;
  local_330 = 0;
  local_328 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350[0] = 0;
  local_350[1] = 0;
  local_324 = 0xffffffff00000080;
  local_31c = 0;
  local_310 = 0;
  local_308 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_2d4 = 0xffffffff00000080;
  local_2cc = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_140056680(&local_388,L"JoinInProgressData");
  if (DAT_14cbf5500 == 0) {
    uVar4 = FUN_1410510fd();
    DAT_14cbf5500 = FUN_140002ddd(FUN_146671502,uVar4,L"PartyMemberRepData");
  }
  local_398 = 0x80002000;
  uVar6 = 0;
  cVar1 = FUN_143e6d052(DAT_14cbf5500,&local_2b0,local_350,0);
  if (cVar1 != '\0') {
    puVar7 = local_388;
    if (local_380 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    uVar6 = 0;
    uVar5 = (ulonglong)(local_380 - 1);
    if (local_380 == 0) {
      uVar5 = uVar6;
    }
    uVar2 = FUN_144a49b4a(uVar5,puVar7);
    iVar3 = FUN_140dfa800(local_350,uVar2,&local_388);
    if (iVar3 != -1) {
      puVar7 = local_388;
      if (local_380 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      uVar6 = (ulonglong)(local_380 - 1);
      if (local_380 == 0) {
        uVar6 = 0;
      }
      uVar2 = FUN_144a49b4a(uVar6,puVar7);
      iVar3 = FUN_140dfa800(local_350,uVar2,&local_388);
      uVar6 = 0;
      if (iVar3 != -1) {
        uVar6 = (longlong)iVar3 * 0x38 + local_350[0];
      }
      FUN_148fdbb9e(param_1,&local_388,uVar6 + 0x10);
      uVar6 = CONCAT71((int7)(uVar6 + 0x10 >> 8),1);
    }
  }
  if (local_388 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148fdb04c(&local_378);
  FUN_148fdc24e(&local_2b0);
  if ((local_40 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148fda0b2 FUN_148fda0b2 body=1480 status=ok
// SIG undefined FUN_148fda0b2(void)

void FUN_148fda0b2(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = FUN_148fd89a6();
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    FUN_148fd9c60(lVar6,&local_58);
    if (local_58 != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_68);
      if (local_68 != (longlong *)0x0) {
        if (*(int *)(param_3 + 8) < 2) {
          FUN_148fda67c(param_1,&local_78);
          plVar3 = local_68;
          if (local_78 == (longlong *)0x0) goto LAB_148fda5a9;
          local_b8 = (void *)0x0;
          local_b0 = *(int *)(param_2 + 1);
          lVar6 = (longlong)local_b0;
          pvVar4 = (void *)*param_2;
          if (lVar6 == 0) {
            local_ac = 0;
            local_c0 = param_1;
          }
          else {
            local_c0 = param_1;
            FUN_1446dd670(&local_b8,local_b0,0);
            memcpy(local_b8,pvVar4,lVar6 * 2);
          }
          plStack_a0 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          local_98 = 0;
          local_90 = 0;
          local_a8 = local_68;
          FUN_14114e6dc(&local_98,param_4);
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_1446efa72(&local_88,0,5,0x10);
          puVar5 = local_88;
          pvVar4 = local_b8;
          local_80 = 5;
          *local_88 = &PTR_LAB_14ba5de10;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_88[2] = lVar7;
          *local_88 = &PTR_FUN_14ba5de80;
          local_88[3] = local_c0;
          local_88[4] = 0;
          lVar6 = (longlong)local_b0;
          *(int *)(local_88 + 5) = local_b0;
          if (lVar6 == 0) {
            *(undefined4 *)((longlong)local_88 + 0x2c) = 0;
          }
          else {
            puVar1 = local_88 + 4;
            FUN_1446dd670(puVar1,local_b0,0);
            memcpy((void *)*puVar1,pvVar4,lVar6 * 2);
          }
          puVar5[6] = local_a8;
          puVar5[7] = plStack_a0;
          local_a8 = (longlong *)0x0;
          plStack_a0 = (longlong *)0x0;
          puVar5[8] = 0;
          *(undefined4 *)(puVar5 + 9) = 0;
          FUN_14114e6dc(puVar5 + 8,&local_98);
          (**(code **)(*plVar3 + 0x30))(plVar3,local_58,local_78,&local_88);
          FUN_1449db362(&local_88);
          FUN_1443cacf0(&local_c0);
        }
        else {
          (**(code **)(*plVar3 + 0xb8))(plVar3,&local_78);
          if (local_78 == (longlong *)0x0) {
LAB_148fda5a9:
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_70 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)local_70 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_70 + 0x10))(local_70);
                }
              }
            }
            goto LAB_148fda5d0;
          }
          local_b8 = (void *)0x0;
          local_b0 = *(int *)(param_2 + 1);
          lVar6 = (longlong)local_b0;
          pvVar4 = (void *)*param_2;
          if (lVar6 == 0) {
            local_ac = 0;
            local_c0 = param_1;
          }
          else {
            local_c0 = param_1;
            FUN_1446dd670(&local_b8,local_b0,0);
            memcpy(local_b8,pvVar4,lVar6 * 2);
          }
          local_a8 = local_68;
          plStack_a0 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          local_98 = 0;
          local_90 = 0;
          FUN_14114e6dc(&local_98,param_4);
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_1446efa72(&local_88,0,5,0x10);
          puVar5 = local_88;
          pvVar4 = local_b8;
          local_80 = 5;
          *local_88 = &PTR_LAB_14ba5dd30;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_88[2] = lVar7;
          *local_88 = &PTR_FUN_14ba5dcc0;
          local_88[3] = local_c0;
          local_88[4] = 0;
          lVar6 = (longlong)local_b0;
          *(int *)(local_88 + 5) = local_b0;
          if (lVar6 == 0) {
            *(undefined4 *)((longlong)local_88 + 0x2c) = 0;
          }
          else {
            puVar1 = local_88 + 4;
            FUN_1446dd670(puVar1,local_b0,0);
            memcpy((void *)*puVar1,pvVar4,lVar6 * 2);
          }
          puVar5[6] = local_a8;
          puVar5[7] = plStack_a0;
          local_a8 = (longlong *)0x0;
          plStack_a0 = (longlong *)0x0;
          puVar5[8] = 0;
          *(undefined4 *)(puVar5 + 9) = 0;
          FUN_14114e6dc(puVar5 + 8,&local_98);
          (**(code **)(*local_78 + 0x40))(local_78,local_58,param_3,&local_88);
          FUN_1449db362(&local_88);
          FUN_1443cac62(&local_c0);
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
            }
          }
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        goto LAB_148fda10d;
      }
LAB_148fda5d0:
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  plVar3 = (longlong *)*param_4;
  if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,0);
  }
LAB_148fda10d:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fda67c FUN_148fda67c body=785 status=ok
// SIG undefined FUN_148fda67c(void)

longlong * FUN_148fda67c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*param_1 + 0x180))();
  plVar3 = (longlong *)FUN_1401e3228(&DAT_14cb8e200);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x110))(local_30,&local_40,0);
      if (local_40 != 0) {
        (**(code **)(*plVar3 + 0x40))(plVar3,&local_50);
        if (local_50 != (longlong *)0x0) {
          local_88 = 0x11111111;
          (**(code **)(*local_50 + 0xf0))(local_50,&local_60,local_40,local_40);
          plVar3 = local_58;
          if (&local_60 != param_2) {
            *param_2 = local_60;
            local_60 = 0;
            plVar2 = (longlong *)param_2[1];
            if (local_58 != plVar2) {
              local_58 = (longlong *)0x0;
              param_2[1] = (longlong)plVar3;
              if (plVar2 != (longlong *)0x0) {
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
                    (**(code **)(*plVar2 + 0x10))(plVar2);
                  }
                }
              }
            }
          }
          plVar3 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (*param_2 == 0) {
            local_70 = 0x11111111;
            (**(code **)(*local_50 + 200))(local_50,&local_60,local_40);
            if (local_60 != 0) {
              (**(code **)(*local_50 + 0x128))
                        (local_50,&local_70,local_40,*(undefined8 *)(local_60 + 0x18));
              (**(code **)(*local_50 + 0x130))(local_50,&local_80,&local_70);
              plVar3 = local_78;
              if (&local_80 != param_2) {
                *param_2 = local_80;
                local_80 = 0;
                plVar2 = (longlong *)param_2[1];
                if (local_78 != plVar2) {
                  local_78 = (longlong *)0x0;
                  param_2[1] = (longlong)plVar3;
                  if (plVar2 != (longlong *)0x0) {
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
                        (**(code **)(*plVar2 + 0x10))(plVar2);
                      }
                    }
                  }
                }
              }
              plVar3 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_78 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_78)(local_78);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              if (CONCAT44(uStack_6c,local_70) != 0) {
                FUN_1400020a8();
              }
            }
            plVar3 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_58 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
          }
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_48 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fda98e FUN_148fda98e body=946 status=ok
// SIG undefined FUN_148fda98e(void)

void FUN_148fda98e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = FUN_148fd89a6();
  lVar7 = FUN_148fd89a6(param_1,param_2);
  plVar3 = *(longlong **)(lVar7 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    FUN_148fd9c60(uVar6,&local_50);
    if (local_50 != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_60);
      if (local_60 != (longlong *)0x0) {
        local_a8 = CONCAT44(local_a8._4_4_,0x11111111);
        (**(code **)(*local_60 + 200))(local_60,&local_70,local_50);
        if (local_70 != 0) {
          local_a0 = (void *)0x0;
          local_98 = *(int *)(param_2 + 1);
          lVar7 = (longlong)local_98;
          pvVar4 = (void *)*param_2;
          local_a8 = param_1;
          if (lVar7 == 0) {
            local_94 = 0;
          }
          else {
            FUN_1446dd670(&local_a0,local_98,0);
            memcpy(local_a0,pvVar4,lVar7 * 2);
          }
          local_90 = 0;
          local_88 = 0;
          FUN_14114e6dc(&local_90,param_3);
          local_80 = (undefined8 *)0x0;
          local_78 = 0;
          FUN_1446efa72(&local_80,0,4,0x10);
          puVar5 = local_80;
          pvVar4 = local_a0;
          local_78 = 4;
          *local_80 = &PTR_LAB_14b4389d0;
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
          local_80[2] = lVar8;
          *local_80 = &PTR_FUN_14ba5def0;
          local_80[3] = local_a8;
          local_80[4] = 0;
          lVar7 = (longlong)local_98;
          *(int *)(local_80 + 5) = local_98;
          if (lVar7 == 0) {
            *(undefined4 *)((longlong)local_80 + 0x2c) = 0;
          }
          else {
            puVar1 = local_80 + 4;
            FUN_1446dd670(puVar1,local_98,0);
            memcpy((void *)*puVar1,pvVar4,lVar7 * 2);
          }
          puVar5[6] = 0;
          *(undefined4 *)(puVar5 + 7) = 0;
          FUN_14114e6dc(puVar5 + 6,&local_90);
          local_b8 = &local_80;
          (**(code **)(*local_60 + 0x58))(local_60,local_50,*(undefined8 *)(local_70 + 0x18),1);
          FUN_1449db362(&local_80);
          FUN_1449db362(&local_90);
          if (local_a0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_68 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)local_68 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_58 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)local_58 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_58 + 0x10))(local_58);
              }
            }
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_48 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)local_48 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
          goto LAB_148fda9f3;
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_68 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_58 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,0);
  }
LAB_148fda9f3:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdad42 FUN_148fdad42 body=777 status=ok
// SIG undefined FUN_148fdad42(void)

void FUN_148fdad42(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_148fd89a6();
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    FUN_148fd9c60(lVar6,&local_48);
    if (local_48 != 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_58);
      if (local_58 != (longlong *)0x0) {
        local_88 = (void *)0x0;
        local_80 = *(int *)(param_2 + 1);
        lVar6 = (longlong)local_80;
        pvVar4 = (void *)*param_2;
        local_90 = param_1;
        if (lVar6 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,pvVar4,lVar6 * 2);
        }
        local_78 = 0;
        local_70 = 0;
        FUN_14114e6dc(&local_78,param_3);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,4,0x10);
        puVar5 = local_68;
        pvVar4 = local_88;
        local_60 = 4;
        *local_68 = &PTR_LAB_14b4388e0;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_68[2] = lVar7;
        *local_68 = &PTR_FUN_14ba5df60;
        local_68[3] = local_90;
        local_68[4] = 0;
        lVar6 = (longlong)local_80;
        *(int *)(local_68 + 5) = local_80;
        if (lVar6 == 0) {
          *(undefined4 *)((longlong)local_68 + 0x2c) = 0;
        }
        else {
          puVar2 = local_68 + 4;
          FUN_1446dd670(puVar2,local_80,0);
          memcpy((void *)*puVar2,pvVar4,lVar6 * 2);
        }
        puVar5[6] = 0;
        *(undefined4 *)(puVar5 + 7) = 0;
        FUN_14114e6dc(puVar5 + 6,&local_78);
        (**(code **)(*local_58 + 0x18))(local_58,local_48,&local_68);
        FUN_1449db362(&local_68);
        FUN_1449db362(&local_78);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
        goto LAB_148fdad97;
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,0);
  }
LAB_148fdad97:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdb04c FUN_148fdb04c body=127 status=ok
// SIG undefined FUN_148fdb04c(void)

void FUN_148fdb04c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ba5ae40;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 5);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148fdb0bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148fdb0cc FUN_148fdb0cc body=120 status=ok
// SIG undefined FUN_148fdb0cc(void)

undefined8 * FUN_148fdb0cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 148fdb144 FUN_148fdb144 body=74 status=ok
// SIG undefined FUN_148fdb144(void)

void FUN_148fdb144(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148fdb18e FUN_148fdb18e body=994 status=ok
// SIG undefined FUN_148fdb18e(void)

void FUN_148fdb18e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = DAT_14cb8e200;
  FUN_1400021e4(&local_80,&local_68);
  FUN_144a882a8(&local_58,&local_68,&DAT_149e31048);
  FUN_144a7dea0(&local_48,&local_58,param_1);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  puVar8 = local_48;
  if (local_40 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_58,puVar8,1);
  plVar6 = (longlong *)FUN_1401e3228(&local_58);
  *(longlong **)(param_1 + 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_58);
    if (local_58 != (longlong *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      local_68 = (longlong *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      plVar6 = local_68;
      local_60 = 3;
      *local_68 = (longlong)&PTR_LAB_14b4e27a0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_68[2] = lVar7;
      *local_68 = (longlong)&PTR_FUN_14ba5e3e0;
      local_68[3] = 0;
      FUN_14485c47a(local_68 + 3,uVar3);
      plVar6[4] = (longlong)FUN_148fdb6fe;
      *(undefined4 *)(plVar6 + 5) = 0;
      (**(code **)(*local_58 + 0x48))(local_58,&local_80,&local_68);
      *(undefined8 **)(param_1 + 0x48) = local_80;
      FUN_1449db362(&local_68);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),&local_68);
    plVar6 = local_68;
    if (local_68 != (longlong *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      local_80 = (undefined8 *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,3,0x10);
      puVar4 = local_80;
      local_78 = 3;
      *local_80 = &PTR_LAB_14ba5e4c0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_80[2] = lVar7;
      *local_80 = &PTR_FUN_14ba5e450;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,uVar3);
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[4] = FUN_148fdb7ec;
      (**(code **)(*plVar6 + 0x2d8))(plVar6,&local_70,&local_80);
      *(undefined8 *)(param_1 + 0x50) = local_70;
      FUN_1449db362(&local_80);
      plVar6 = local_68;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      local_80 = (undefined8 *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,3,0x10);
      puVar4 = local_80;
      local_78 = 3;
      *local_80 = &PTR_LAB_14ba5cb60;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_80[2] = lVar7;
      *local_80 = &PTR_FUN_14ba5e530;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,uVar3);
      puVar4[4] = FUN_148fdbaa8;
      *(undefined4 *)(puVar4 + 5) = 0;
      (**(code **)(*plVar6 + 0x338))(plVar6,&local_70,&local_80);
      *(undefined8 *)(param_1 + 0x58) = local_70;
      FUN_1449db362(&local_80);
    }
    plVar6 = (longlong *)CONCAT44(uStack_5c,local_60);
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
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148fdb572 FUN_148fdb572 body=394 status=ok
// SIG undefined FUN_148fdb572(void)

longlong FUN_148fdb572(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
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
  plVar1 = (longlong *)(param_1 + 0x38);
  plVar2 = (longlong *)(param_1 + 0x48);
  local_68 = (undefined8 *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar2;
  if (*(int *)(param_1 + 0x60) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x60);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 == iVar8) && (uStack_60 == plVar2)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      if (*(longlong *)(*local_90 + 0x20 + (longlong)iStack_74 * 0x78) != 0) {
        lVar10 = *local_90 + (longlong)iStack_74 * 0x78 + 0x10;
        FUN_148fd9c60(lVar10,&local_68);
        if ((local_68 == (undefined8 *)0x0) ||
           (cVar7 = (**(code **)*local_68)(local_68,param_2), cVar7 == '\0')) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
          lVar9 = lVar10;
        }
        plVar6 = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_60)(uStack_60);
            LOCK();
            piVar4 = (int *)((longlong)plVar6 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (!bVar5) break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 148fdb6fe FUN_148fdb6fe body=237 status=ok
// SIG undefined FUN_148fdb6fe(void)

void FUN_148fdb6fe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar3 = FUN_148fdb572();
    if (lVar3 != 0) {
      (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x28))(*(longlong **)(lVar3 + 0x10),&local_38);
      if (local_38 != (longlong *)0x0) {
        local_48 = 0;
        uStack_40 = 0;
        FUN_140056680(local_58,L"default");
        local_68 = &local_48;
        (**(code **)(*local_38 + 0x100))(local_38,0,param_3,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_48);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
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



// FUNCTION 148fdb7ec FUN_148fdb7ec body=699 status=ok
// SIG undefined FUN_148fdb7ec(void)

void FUN_148fdb7ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_78;
  undefined4 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x31) != '\x01') goto LAB_148fdb817;
  puVar4 = (undefined8 *)FUN_148fdb572();
  if (puVar4 == (undefined8 *)0x0) goto LAB_148fdb817;
  (**(code **)(*(longlong *)puVar4[2] + 0x40))((longlong *)puVar4[2],&local_58);
  if (local_58 != (longlong *)0x0) {
    local_68 = (void *)0x0;
    local_60 = *(int *)(puVar4 + 1);
    lVar7 = (longlong)local_60;
    pvVar3 = (void *)*puVar4;
    local_a0 = param_1;
    if (lVar7 == 0) {
      local_5c = 0;
      local_90 = 0;
LAB_148fdb921:
      local_98 = (void *)0x0;
      local_8c = 0;
      plVar6 = local_58;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar3,lVar7 * 2);
      plVar6 = local_58;
      pvVar3 = local_68;
      lVar7 = (longlong)local_60;
      local_98 = (void *)0x0;
      local_90 = local_60;
      if (lVar7 == 0) goto LAB_148fdb921;
      FUN_1446dd670(&local_98,local_60,0);
      memcpy(local_98,pvVar3,lVar7 * 2);
    }
    plStack_80 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    local_88 = local_58;
    FUN_1446efa72(&local_78,0,4,0x10);
    puVar4 = local_78;
    pvVar3 = local_98;
    local_70 = 4;
    *local_78 = &PTR_LAB_14ba5de10;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_78[2] = lVar5;
    *local_78 = &PTR_FUN_14ba5e5a0;
    local_78[3] = local_a0;
    local_78[4] = 0;
    lVar7 = (longlong)local_90;
    *(int *)(local_78 + 5) = local_90;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)local_78 + 0x2c) = 0;
    }
    else {
      puVar1 = local_78 + 4;
      FUN_1446dd670(puVar1,local_90,0);
      memcpy((void *)*puVar1,pvVar3,lVar7 * 2);
    }
    puVar4[6] = local_88;
    puVar4[7] = plStack_80;
    local_88 = (longlong *)0x0;
    plStack_80 = (longlong *)0x0;
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_3,&local_78);
    FUN_1449db362(&local_78);
    FUN_1443cc73e(&local_a0);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
LAB_148fdb817:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdbaa8 FUN_148fdbaa8 body=244 status=ok
// SIG undefined FUN_148fdbaa8(void)

void FUN_148fdbaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_148fdb572();
  if (lVar3 != 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x40))(*(longlong **)(lVar3 + 0x10),&local_38);
    if (local_38 != (longlong *)0x0) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      (**(code **)(*param_4 + 0x28))(param_4,&local_48);
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)*local_48 + 8))();
      local_50 = 0;
      local_58 = 1;
      (**(code **)(*local_38 + 0x68))(local_38,param_2,param_3,*puVar4);
      FUN_148fe8eb3(local_48,uStack_40 & 0xffffffff);
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdbb9e FUN_148fdbb9e body=1118 status=ok
// SIG undefined FUN_148fdbb9e(void)

void FUN_148fdbb9e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 == (longlong *)0x0) goto LAB_148fdbc0d;
  (**(code **)(*plVar6 + 0x40))(plVar6,&local_48);
  if (local_48 != (longlong *)0x0) {
    FUN_148fd9c60(param_1,&local_58);
    if (local_58 != 0) {
      local_78 = (longlong *)CONCAT44(local_78._4_4_,0x11111111);
      (**(code **)(*local_48 + 200))(local_48,&local_68);
      if (local_68 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x20);
        if (lVar5 == 0) {
          local_90 = &DAT_14cb8e138;
          local_98 = local_58;
          (**(code **)(*local_48 + 0xe8))
                    (local_48,&local_78,local_58,*(undefined8 *)(local_68 + 0x18));
          plVar6 = local_78;
          if (local_78 != (longlong *)0x0) {
            plVar4 = (longlong *)FUN_14001cc68(0xd8,0x10);
            plVar4[1] = (longlong)&DAT_100000001;
            *plVar4 = (longlong)&PTR_FUN_14ba5dfd0;
            plVar3 = plVar4 + 2;
            FUN_148ff634a(plVar3,plVar6);
            local_88 = plVar3;
            local_80 = plVar4;
            FUN_148ff55b2(&local_88,plVar3);
            if (plVar4 == (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x20) = 0x10;
              plVar6 = *(longlong **)(param_1 + 0x28);
              if (plVar6 != (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x28) = 0;
LAB_148fdbfb3:
                LOCK();
                plVar3 = plVar6 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar2 = *piVar1;
                  UNLOCK();
joined_r0x000148fdbf6f:
                  if (iVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              *(longlong **)(param_1 + 0x20) = plVar3;
              plVar6 = *(longlong **)(param_1 + 0x28);
              if (plVar4 == plVar6) {
                LOCK();
                plVar6 = plVar4 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar2 = *piVar1;
                  UNLOCK();
                  plVar6 = plVar4;
                  goto joined_r0x000148fdbf6f;
                }
              }
              else {
                *(longlong **)(param_1 + 0x28) = plVar4;
                if (plVar6 != (longlong *)0x0) goto LAB_148fdbfb3;
              }
            }
            plVar6 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_80 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
          plVar6 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_70 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          lVar5 = *(longlong *)(param_1 + 0x20);
          if (lVar5 == 0) {
            plVar3 = (longlong *)FUN_14001cc68(0xd8);
            plVar3[1] = (longlong)&DAT_100000001;
            *plVar3 = (longlong)&PTR_FUN_14ba5dfd0;
            plVar6 = plVar3 + 2;
            memset(plVar3 + 3,0,0xc0);
            plVar3[2] = (longlong)&PTR_FUN_14ba5ae40;
            plVar3[5] = 0;
            plVar3[6] = 0;
            plVar3[7] = 0;
            plVar3[8] = 0;
            *(undefined8 *)((longlong)plVar3 + 100) = 0xffffffff00000080;
            plVar3[0x11] = 0;
            plVar3[0x12] = 0;
            *(undefined8 *)((longlong)plVar3 + 0xb4) = 0xffffffff00000080;
            local_78 = plVar6;
            local_70 = plVar3;
            FUN_148ff55b2(&local_78,plVar6);
            if (plVar3 == (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x20) = 0x10;
              plVar6 = *(longlong **)(param_1 + 0x28);
              if (plVar6 != (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x28) = 0;
LAB_148fdbf7f:
                LOCK();
                plVar3 = plVar6 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar2 = *piVar1;
                  UNLOCK();
joined_r0x000148fdbf36:
                  if (iVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                  }
                }
              }
            }
            else {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              *(longlong **)(param_1 + 0x20) = plVar6;
              plVar6 = *(longlong **)(param_1 + 0x28);
              if (plVar3 == plVar6) {
                LOCK();
                plVar6 = plVar3 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*plVar3)(plVar3);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar2 = *piVar1;
                  UNLOCK();
                  plVar6 = plVar3;
                  goto joined_r0x000148fdbf36;
                }
              }
              else {
                *(longlong **)(param_1 + 0x28) = plVar3;
                if (plVar6 != (longlong *)0x0) goto LAB_148fdbf7f;
              }
            }
            plVar6 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_70 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
            lVar5 = *(longlong *)(param_1 + 0x20);
          }
        }
        FUN_148fdbffe(lVar5,param_2,param_3);
        local_98 = *(longlong *)(param_1 + 0x20);
        (**(code **)(*local_48 + 0xb0))
                  (local_48,local_58,*(undefined8 *)(local_68 + 0x18),&DAT_14cb8e138);
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_60 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_148fdbc0d:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdbffe FUN_148fdbffe body=190 status=ok
// SIG undefined FUN_148fdbffe(void)

void FUN_148fdbffe(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c3a11c(local_48,param_3);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  (**(code **)(*param_1 + 8))(param_1,&local_58,local_48);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148fdc24e FUN_148fdc24e body=573 status=ok
// SIG undefined FUN_148fdc24e(void)

void FUN_148fdc24e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba5ae70;
  FUN_144760e21(param_1[0x4b],*(undefined4 *)(param_1 + 0x4c));
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_148fe5626(param_1 + 0x39);
  FUN_144760e21(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_148fe505a(param_1 + 5);
  *param_1 = &PTR_FUN_14ba5ac50;
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 148fdc490 FUN_148fdc490 body=663 status=ok
// SIG undefined FUN_148fdc490(void)

undefined8 * FUN_148fdc490(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_b8 [36];
  uint local_94;
  undefined8 local_90;
  longlong *local_88;
  int local_80;
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18);
  lVar7 = *(longlong *)(lVar6 + 0x10);
  if (lVar7 == 0) {
    lVar7 = 0;
    uVar8 = 0;
  }
  else {
    iVar5 = *(int *)(lVar7 + 8);
    uVar8 = 0;
    do {
      if (iVar5 == 0) {
        lVar7 = 0;
        goto LAB_148fdc4d7;
      }
      LOCK();
      iVar9 = *(int *)(lVar7 + 8);
      bVar13 = iVar5 == iVar9;
      if (bVar13) {
        *(int *)(lVar7 + 8) = iVar5 + 1;
        iVar9 = iVar5;
      }
      iVar5 = iVar9;
      UNLOCK();
    } while (!bVar13);
    uVar8 = *(undefined8 *)(lVar6 + 8);
  }
LAB_148fdc4d7:
  param_1[2] = uVar8;
  param_1[3] = lVar7;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar6 = FUN_148fd8170(param_2,param_2 + 0x80);
  uVar11 = *(ulonglong *)(*(longlong *)(lVar6 + 0x40) + 0x188);
  iVar5 = *(int *)(*(longlong *)(lVar6 + 0x40) + 400);
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = 0;
  }
  FUN_1446f82e2(&local_78,iVar9,uVar11,1);
  param_1[6] = local_78;
  FUN_148fce6f6(param_2,&local_88);
  if ((longlong)local_80 != 0) {
    plVar3 = local_88 + local_80;
    plVar12 = local_88;
    do {
      lVar6 = *plVar12;
      lVar7 = FUN_148fd8170(param_2,param_2 + 0x80);
      if (lVar6 != lVar7) {
        FUN_148fd1d62(lVar6,&local_78);
        if ((&DAT_149fc1b6e)[local_60] == '\x01') {
          if (((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))(),
             cVar4 != '\0')) {
LAB_148fdc67e:
            lVar6 = FUN_1408e4caa();
            plVar10 = *(longlong **)(lVar6 + 0x10);
            uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
            if (plVar10 == (longlong *)0x0) {
LAB_148fdc69f:
              plVar10 = (longlong *)0x0;
              uVar8 = 0;
            }
            else {
              iVar5 = (int)plVar10[1];
              do {
                if (iVar5 == 0) goto LAB_148fdc69f;
                LOCK();
                iVar9 = (int)plVar10[1];
                bVar13 = iVar5 == iVar9;
                if (bVar13) {
                  *(int *)(plVar10 + 1) = iVar5 + 1;
                  iVar9 = iVar5;
                }
                iVar5 = iVar9;
                UNLOCK();
              } while (!bVar13);
              uVar8 = *(undefined8 *)(lVar6 + 8);
              uVar11 = 0;
            }
            iVar5 = *(int *)(param_1 + 5);
            *(uint *)(param_1 + 5) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x2c) < iVar5 + 1U) {
              local_94 = (uint)uVar11;
              local_90 = uVar8;
              FUN_1413eac7e(param_1 + 4,iVar5);
              uVar11 = (ulonglong)local_94;
              uVar8 = local_90;
            }
            lVar6 = param_1[4];
            *(undefined8 *)(lVar6 + (longlong)iVar5 * 0x10) = uVar8;
            *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar10;
            if ((char)uVar11 == '\0') {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
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
            }
          }
        }
        else if ((local_70 & 0xffffff) != 0) goto LAB_148fdc67e;
        local_78 = &PTR_FUN_14a5af930;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_78 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar3);
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148fdc728 FUN_148fdc728 body=189 status=ok
// SIG undefined FUN_148fdc728(void)

undefined8 *
FUN_148fdc728(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  *param_1 = 0;
  FUN_14485c47a();
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined8 *)((longlong)param_1 + 0xc) = *param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = &PTR_FUN_14a5af930;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  FUN_148ff63f6(param_1 + 0xd,param_5);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 148fdc7e6 FUN_148fdc7e6 body=144 status=ok
// SIG undefined FUN_148fdc7e6(void)

longlong * FUN_148fdc7e6(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (param_2 == '\0') {
    local_20 = 0;
    plVar1 = (longlong *)FUN_1401e3228();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
      if (((int)local_20 != (int)DAT_14cb8e198) || (local_20._4_4_ != DAT_14cb8e198._4_4_))
      goto LAB_148fdc849;
    }
  }
  plVar1 = (longlong *)0x0;
LAB_148fdc849:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


