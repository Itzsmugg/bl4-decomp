// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a5b984 FUN_148a5b984 body=123 status=ok
// SIG undefined FUN_148a5b984(void)

undefined8 * FUN_148a5b984(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_148a5ba00();
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



// FUNCTION 148a5ba00 FUN_148a5ba00 body=390 status=ok
// SIG undefined FUN_148a5ba00(void)

longlong * FUN_148a5ba00(longlong *param_1,longlong *param_2)

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
        FUN_1401e7e48(*local_78 + (longlong)iVar6 * 0x30 + 8);
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



// FUNCTION 148a5bb88 FUN_148a5bb88 body=136 status=ok
// SIG undefined FUN_148a5bb88(void)

void FUN_148a5bb88(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb96660;
  if (DAT_14cb96694 != 0) {
    *(int *)(DAT_14cb96660 + (longlong)DAT_14cb96690 * 0x60) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x60) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb96694) {
    iVar4 = DAT_14cb96690;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x60) = iVar4;
  DAT_14cb96694 = DAT_14cb96694 + 1;
  puVar3 = &DAT_14cb96670;
  if (DAT_14cb96680 != (undefined *)0x0) {
    puVar3 = DAT_14cb96680;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb96690 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148a5bc10 FUN_148a5bc10 body=518 status=ok
// SIG undefined FUN_148a5bc10(void)

void FUN_148a5bc10(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb966a0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb966a0,0,0,4);
  }
  uVar3 = DAT_14cb966a8;
  uVar2 = local_50;
  if (DAT_14cb966a8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb96698,0,DAT_14cb966a8,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14cb966a0;
        if (DAT_14cb966a0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb96698;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb966a8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb96670;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb96688 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb96660;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x60;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb966a8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x5c + lVar6) = iVar8;
        puVar5 = DAT_14cb966a0;
        if (DAT_14cb966a0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb96698;
        }
        *(undefined4 *)(lVar1 + 0x58 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb966a8 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb966a0;
        if (DAT_14cb966a0 == (undefined *)0x0) {
          puVar5 = &DAT_14cb96698;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb966a8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a5be18 FUN_148a5be18 body=369 status=ok
// SIG undefined FUN_148a5be18(void)

undefined4 * FUN_148a5be18(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148a5bf8a(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(int *)(local_40 + 2) = (int)puVar1[1];
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[3] = puVar1[2];
  *(undefined4 *)(local_40 + 4) = 0;
  puVar1[2] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_148a5c078(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x2c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
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
      FUN_148a5c19c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5bf8a FUN_148a5bf8a body=238 status=ok
// SIG undefined FUN_148a5bf8a(void)

int * FUN_148a5bf8a(longlong *param_1,int *param_2)

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



// FUNCTION 148a5c078 FUN_148a5c078 body=169 status=ok
// SIG undefined FUN_148a5c078(void)

undefined8 FUN_148a5c078(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_1401e7e48(puVar1 + 2);
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_148a5c122(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a5c122 FUN_148a5c122 body=122 status=ok
// SIG undefined FUN_148a5c122(void)

void FUN_148a5c122(longlong *param_1,int param_2)

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



// FUNCTION 148a5c19c FUN_148a5c19c body=478 status=ok
// SIG undefined FUN_148a5c19c(void)

void FUN_148a5c19c(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x30;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x2c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x28 + lVar6) =
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



// FUNCTION 148a5c37c FUN_148a5c37c body=188 status=ok
// SIG undefined FUN_148a5c37c(void)

longlong FUN_148a5c37c(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x30;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == *param_3) {
          if (lVar3 != 0) goto LAB_148a5c41b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148a5c43a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x30 + *param_1;
LAB_148a5c41b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148a5c43a FUN_148a5c43a body=281 status=ok
// SIG undefined FUN_148a5c43a(void)

undefined4 * FUN_148a5c43a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_148a5bf8a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined8 *)((longlong)local_40 + 0x14) = 0;
  *(undefined8 *)((longlong)local_40 + 0x1c) = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar1 = FUN_148a5c078(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
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
      FUN_148a5c19c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5c554 FUN_148a5c554 body=101 status=ok
// SIG undefined FUN_148a5c554(void)

void FUN_148a5c554(longlong *param_1)

{
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_148a5c5b9(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 148a5c5b9 FUN_148a5c5b9 body=43 status=ok
// SIG undefined FUN_148a5c5b9(void)

void FUN_148a5c5b9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 148a5c5e4 FUN_148a5c5e4 body=31 status=ok
// SIG undefined FUN_148a5c5e4(void)

undefined8 FUN_148a5c5e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5c61c FUN_148a5c61c body=93 status=ok
// SIG undefined FUN_148a5c61c(void)

void FUN_148a5c61c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d8e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5c67a FUN_148a5c67a body=126 status=ok
// SIG undefined FUN_148a5c67a(void)

void FUN_148a5c67a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d8e60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5c6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a5c6f8 FUN_148a5c6f8 body=21 status=ok
// SIG undefined FUN_148a5c6f8(void)

undefined8 FUN_148a5c6f8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a5c70e FUN_148a5c70e body=31 status=ok
// SIG undefined FUN_148a5c70e(void)

undefined8 FUN_148a5c70e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5c74a FUN_148a5c74a body=93 status=ok
// SIG undefined FUN_148a5c74a(void)

void FUN_148a5c74a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d90f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5c7a8 FUN_148a5c7a8 body=93 status=ok
// SIG undefined FUN_148a5c7a8(void)

void FUN_148a5c7a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d90f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5c806 FUN_148a5c806 body=126 status=ok
// SIG undefined FUN_148a5c806(void)

void FUN_148a5c806(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d90f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5c875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a5c892 FUN_148a5c892 body=31 status=ok
// SIG undefined FUN_148a5c892(void)

undefined8 FUN_148a5c892(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5c8c2 FUN_148a5c8c2 body=93 status=ok
// SIG undefined FUN_148a5c8c2(void)

void FUN_148a5c8c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5c920 FUN_148a5c920 body=93 status=ok
// SIG undefined FUN_148a5c920(void)

void FUN_148a5c920(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5c97e FUN_148a5c97e body=126 status=ok
// SIG undefined FUN_148a5c97e(void)

void FUN_148a5c97e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d9160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5c9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a5ca0a FUN_148a5ca0a body=31 status=ok
// SIG undefined FUN_148a5ca0a(void)

undefined8 FUN_148a5ca0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5ca42 FUN_148a5ca42 body=93 status=ok
// SIG undefined FUN_148a5ca42(void)

void FUN_148a5ca42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d91f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5caa0 FUN_148a5caa0 body=126 status=ok
// SIG undefined FUN_148a5caa0(void)

void FUN_148a5caa0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d91f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5cb0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a5cb1e FUN_148a5cb1e body=21 status=ok
// SIG undefined FUN_148a5cb1e(void)

undefined8 FUN_148a5cb1e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a5cb34 FUN_148a5cb34 body=31 status=ok
// SIG undefined FUN_148a5cb34(void)

undefined8 FUN_148a5cb34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5cb6c FUN_148a5cb6c body=93 status=ok
// SIG undefined FUN_148a5cb6c(void)

void FUN_148a5cb6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4d93b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5cbca FUN_148a5cbca body=93 status=ok
// SIG undefined FUN_148a5cbca(void)

void FUN_148a5cbca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4d93b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5cc28 FUN_148a5cc28 body=126 status=ok
// SIG undefined FUN_148a5cc28(void)

void FUN_148a5cc28(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4d93b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d9340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5cc97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a5ccb6 FUN_148a5ccb6 body=31 status=ok
// SIG undefined FUN_148a5ccb6(void)

undefined8 FUN_148a5ccb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a5ccee FUN_148a5ccee body=93 status=ok
// SIG undefined FUN_148a5ccee(void)

void FUN_148a5ccee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4d9490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5cd4c FUN_148a5cd4c body=93 status=ok
// SIG undefined FUN_148a5cd4c(void)

void FUN_148a5cd4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4d9490;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a5cdaa FUN_148a5cdaa body=126 status=ok
// SIG undefined FUN_148a5cdaa(void)

void FUN_148a5cdaa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4d9490;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d9420;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a5ce19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a5ce38 FUN_148a5ce38 body=41 status=ok
// SIG undefined FUN_148a5ce38(void)

void FUN_148a5ce38(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148a5ce62();
  return;
}



// FUNCTION 148a5ce62 FUN_148a5ce62 body=95 status=ok
// SIG undefined FUN_148a5ce62(void)

void FUN_148a5ce62(longlong param_1,uint param_2)

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



// FUNCTION 148a5cec2 FUN_148a5cec2 body=132 status=ok
// SIG undefined FUN_148a5cec2(void)

void FUN_148a5cec2(longlong param_1,int param_2)

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



// FUNCTION 148a5cf47 FUN_148a5cf47 body=522 status=ok
// SIG undefined FUN_148a5cf47(void)

void FUN_148a5cf47(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1401e7e86(local_b8);
  iVar3 = 0;
  local_e0 = 0;
  FUN_14485c47a(&local_e0);
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_d0;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar1,lVar2 * 2);
    iVar3 = local_d0;
  }
  pvVar1 = local_d8;
  local_80 = *param_3;
  *param_3 = 0;
  local_78 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = FUN_143ef27ca;
  local_50 = FUN_143ef29c0;
  local_48 = FUN_143ef2a44;
  local_40 = FUN_143ef2af2;
  local_98 = local_e0;
  local_90 = (void *)0x0;
  local_88 = iVar3;
  if (iVar3 == 0) {
    local_84 = 0;
  }
  else {
    local_c8 = local_80;
    local_c0 = local_78;
    FUN_1446dd670(&local_90,iVar3,0);
    memcpy(local_90,pvVar1,(longlong)iVar3 * 2);
    local_80 = local_c8;
    local_78 = local_c0;
  }
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_e8 = local_a0 + local_a8;
  local_f0 = local_a8;
  bifrost::account::rename(*(undefined8 *)(param_1 + 0x2b8),&local_f0,&local_98);
  FUN_1449db362(&local_c8);
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d152 FUN_148a5d152 body=210 status=ok
// SIG undefined FUN_148a5d152(void)

void FUN_148a5d152(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FUN_14485c47a(&local_a0,param_1);
  local_80 = *param_2;
  *param_2 = 0;
  local_78 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_48 = FUN_143ef2e96;
  local_40 = &LAB_143ef32da;
  local_38 = &LAB_143ef3300;
  local_30 = FUN_143ef3334;
  local_88 = local_a0;
  local_98 = 0;
  local_90 = 0;
  bifrost::account::getDetails(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_98);
  FUN_1449db362(param_2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d225 FUN_148a5d225 body=179 status=ok
// SIG undefined FUN_148a5d225(void)

void FUN_148a5d225(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_2;
  *param_2 = 0;
  local_70 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_38 = FUN_143ef338a;
  local_30 = &LAB_143ef363e;
  local_28 = &LAB_143ef3652;
  local_20 = FUN_143ef367c;
  local_88 = 0;
  local_80 = 0;
  bifrost::account::countryCodes(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_88);
  FUN_1449db362(param_2);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d2d9 FUN_148a5d2d9 body=182 status=ok
// SIG undefined FUN_148a5d2d9(void)

void FUN_148a5d2d9(longlong param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  *param_3 = 0;
  local_70 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_38 = &LAB_143ef36cc;
  local_30 = &LAB_143ef36e8;
  local_28 = &LAB_143ef36fc;
  local_20 = FUN_143ef3726;
  local_88 = 0;
  local_80 = 0;
  bifrost::account::updateProfileVisibility(*(undefined8 *)(param_1 + 0x2b8),param_2);
  FUN_1449db362(&local_88);
  FUN_1449db362(param_3);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d390 FUN_148a5d390 body=313 status=ok
// SIG undefined FUN_148a5d390(void)

void FUN_148a5d390(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1401e7e86(local_c0,param_2 + 0x10);
  FUN_1401e7e86(local_e0,param_2);
  FUN_14482e566(local_c0);
  FUN_14482e566(local_e0);
  local_108 = local_c8 + local_d0;
  local_a0 = *param_3;
  *param_3 = 0;
  local_98 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_60 = &LAB_143ef3776;
  local_58 = &LAB_143ef3792;
  local_50 = &LAB_143ef37a6;
  local_48 = FUN_143ef37d0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = local_d0;
  local_100 = local_b0;
  local_f8 = local_a8 + local_b0;
  bifrost::account::age_group::setAgeGroup(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_f0);
  FUN_1401e7e48(local_e0);
  FUN_1401e7e48(local_c0);
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d4ca FUN_148a5d4ca body=452 status=ok
// SIG undefined FUN_148a5d4ca(void)

longlong * FUN_148a5d4ca(longlong *param_1,undefined4 *param_2)

{
  double dVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
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
  longlong local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14152e0f7(&local_40);
  if (&local_40 == param_1) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_1 = local_40;
    param_1[1] = CONCAT44(uStack_34,uStack_38);
  }
  local_68 = param_2[4];
  uStack_64 = param_2[5];
  uStack_60 = param_2[6];
  uStack_5c = param_2[7];
  FUN_14152e0f7(&local_40);
  if (param_1 + 2 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 3) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_34;
  }
  local_78 = param_2[8];
  uStack_74 = param_2[9];
  uStack_70 = param_2[10];
  uStack_6c = param_2[0xb];
  FUN_14152e0f7(&local_40);
  if (param_1 + 4 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 5) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_34;
  }
  dVar1 = *(double *)(param_2 + 0xc);
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  FUN_14021300e(&local_40,0x7b2,1,1);
  param_1[6] = (longlong)dVar1 * 10000000 + local_40;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d690 FUN_148a5d690 body=61 status=ok
// SIG undefined FUN_148a5d690(void)

void FUN_148a5d690(longlong *param_1)

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



// FUNCTION 148a5d6cd FUN_148a5d6cd body=185 status=ok
// SIG undefined FUN_148a5d6cd(void)

undefined8 * FUN_148a5d6cd(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148a5d4ca(local_58);
  FUN_148a5d788(param_1,local_58);
  FUN_148a5d690(local_58);
  dVar1 = *(double *)(param_2 + 0x38);
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_14021300e(local_58,0x7b2,1,1);
  param_1[7] = (longlong)dVar1 * 10000000 + local_58[0];
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d788 FUN_148a5d788 body=167 status=ok
// SIG undefined FUN_148a5d788(void)

longlong * FUN_148a5d788(longlong *param_1,longlong *param_2)

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
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 148a5d82f FUN_148a5d82f body=302 status=ok
// SIG undefined FUN_148a5d82f(void)

longlong FUN_148a5d82f(longlong param_1,undefined4 *param_2)

{
  void *pvVar1;
  uint uVar2;
  ulonglong uVar3;
  size_t _Size;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_40;
  uint local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pvVar1 = *(void **)(param_2 + 4);
  uVar3 = *(longlong *)(param_2 + 6) - (longlong)pvVar1;
  local_40 = (void *)0x0;
  uVar2 = (uint)uVar3;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3 & 0xffffffff);
  }
  local_38 = uVar2;
  if (uVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1447a127e(&local_40,uVar3 & 0xffffffff,0);
    memcpy(local_40,pvVar1,(ulonglong)(uVar2 & 0x7fffffff));
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14152e0f7(param_1);
  pvVar1 = local_40;
  *(undefined8 *)(param_1 + 0x10) = 0;
  _Size = (size_t)(int)local_38;
  *(uint *)(param_1 + 0x18) = local_38;
  if (_Size == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(param_1 + 0x10),local_38,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar1,_Size);
  }
  *(undefined4 *)(param_1 + 0x20) = param_2[6] - param_2[4];
  local_68 = param_2[8];
  uStack_64 = param_2[9];
  uStack_60 = param_2[10];
  uStack_5c = param_2[0xb];
  FUN_14152e0f7(param_1 + 0x28);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5d960 FUN_148a5d960 body=61 status=ok
// SIG undefined FUN_148a5d960(void)

void FUN_148a5d960(longlong *param_1)

{
  if (param_1[5] != 0) {
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



// FUNCTION 148a5d99d FUN_148a5d99d body=158 status=ok
// SIG undefined FUN_148a5d99d(void)

undefined1 * FUN_148a5d99d(undefined1 *param_1,undefined1 *param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[4];
  local_48 = *(undefined4 *)(param_2 + 8);
  uStack_44 = *(undefined4 *)(param_2 + 0xc);
  uStack_40 = *(undefined4 *)(param_2 + 0x10);
  uStack_3c = *(undefined4 *)(param_2 + 0x14);
  FUN_14152e0f7(&local_38);
  if ((undefined4 *)(param_1 + 8) == &local_38) {
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = local_38;
    *(undefined4 *)(param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 0x10) = uStack_30;
    *(undefined4 *)(param_1 + 0x14) = uStack_2c;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5da3c FUN_148a5da3c body=179 status=ok
// SIG undefined FUN_148a5da3c(void)

void FUN_148a5da3c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_2;
  *param_2 = 0;
  local_70 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_38 = FUN_143ef39f6;
  local_30 = &LAB_143ef3ad8;
  local_28 = &LAB_143ef3aec;
  local_20 = FUN_143ef3b16;
  local_88 = 0;
  local_80 = 0;
  bifrost::cross_save::fetchSaveManifest(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_88);
  FUN_1449db362(param_2);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5daf0 FUN_148a5daf0 body=352 status=ok
// SIG undefined FUN_148a5daf0(void)

void FUN_148a5daf0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  int local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  code *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = param_2;
  FUN_148a5dc52();
  iVar1 = *(int *)(param_3 + 0x20);
  lVar2 = *(longlong *)(param_3 + 0x10);
  FUN_1401e7e86(local_c8,param_3);
  FUN_1401e7e86(local_e8,param_3 + 0x28);
  FUN_14482e566(local_c8);
  FUN_14482e566(local_e8);
  local_100 = local_d0 + local_d8;
  local_a8 = *param_4;
  *param_4 = 0;
  local_a0 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_68 = FUN_143ef3f9a;
  local_60 = &LAB_143ef407c;
  local_58 = &LAB_143ef4090;
  local_50 = FUN_143ef40ba;
  local_f8 = 0;
  local_f0 = 0;
  local_128 = local_b8;
  local_108 = local_d8;
  local_120 = local_b0 + local_b8;
  local_118 = lVar2;
  local_110 = iVar1 + lVar2;
  bifrost::cross_save::uploadSave(*(undefined8 *)(local_130 + 0x2b8));
  FUN_1449db362(&local_f8);
  FUN_1401e7e48(local_e8);
  FUN_1401e7e48(local_c8);
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5dc52 FUN_148a5dc52 body=717 status=ok
// SIG undefined FUN_148a5dc52(void)

void FUN_148a5dc52(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  longlong local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  FUN_14485c47a(&local_50);
  local_60 = local_50;
  iVar7 = FUN_148a643b0((longlong *)(param_1 + 0x20),
                        (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (iVar7 == -1) goto LAB_148a5dccb;
  lVar14 = (longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x20);
  if ((longlong *)(lVar14 + 8) == (longlong *)0x0 || lVar14 == 0) goto LAB_148a5dccb;
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_3 + 1);
  lVar10 = (longlong)local_58;
  _Src = (void *)*param_3;
  if (lVar10 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar10 * 2);
  }
  uVar3 = *(uint *)(lVar14 + 0x10);
  uVar11 = (ulonglong)(int)uVar3;
  if (uVar11 != 0) {
    plVar4 = *(longlong **)(lVar14 + 8);
    iVar7 = (int)plVar4[1];
    if (iVar7 == local_58) {
      bVar16 = true;
      if (1 < iVar7) {
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*plVar4 + lVar10);
          uVar8 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)local_60 + lVar10);
          uVar12 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148a5dd84;
            }
            iVar7 = uVar8 - uVar12;
            goto LAB_148a5df11;
          }
          if (uVar1 == 0) break;
LAB_148a5dd84:
          lVar10 = lVar10 + 2;
        }
        iVar7 = 0;
LAB_148a5df11:
        bVar16 = iVar7 == 0;
      }
    }
    else {
      bVar16 = local_58 + iVar7 == 1;
    }
    iVar7 = 0;
    uVar13 = 0;
    local_68 = lVar14;
LAB_148a5ddd5:
    iVar6 = (int)uVar13;
    uVar13 = (ulonglong)(iVar6 + 1U);
    if ((int)(iVar6 + 1U) < (int)uVar3) {
      uVar13 = (longlong)iVar6 + 1;
      bVar5 = true;
LAB_148a5ddf4:
      if ((int)plVar4[uVar13 * 7 + 1] != local_58) {
        bVar15 = (int)plVar4[uVar13 * 7 + 1] + local_58 == 1;
        goto LAB_148a5de55;
      }
      if (1 < local_58) {
        lVar14 = 0;
        do {
          uVar1 = *(ushort *)(plVar4[uVar13 * 7] + lVar14);
          uVar2 = *(ushort *)((longlong)local_60 + lVar14);
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_148a5de76;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar9 = (uint)uVar1 - (uint)uVar2;
              goto LAB_148a5de79;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
              iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                      (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
              goto LAB_148a5de79;
            }
          }
          lVar14 = lVar14 + 2;
        } while( true );
      }
      if (bVar16) goto LAB_148a5de62;
      iVar9 = (int)uVar13 - iVar6;
      goto LAB_148a5deba;
    }
    bVar5 = false;
    goto LAB_148a5de80;
  }
  goto LAB_148a5def7;
LAB_148a5de76:
  iVar9 = 0;
LAB_148a5de79:
  bVar15 = iVar9 == 0;
LAB_148a5de55:
  if ((bool)(bVar15 ^ bVar16)) goto LAB_148a5de80;
LAB_148a5de62:
  uVar13 = uVar13 + 1;
  bVar5 = (longlong)uVar13 < (longlong)uVar11;
  if (uVar13 == uVar11) goto LAB_148a5deab;
  goto LAB_148a5ddf4;
LAB_148a5deab:
  uVar13 = (ulonglong)uVar3;
LAB_148a5de80:
  iVar9 = (int)uVar13 - iVar6;
  if (bVar16) {
    FUN_148a646b2(plVar4 + (longlong)iVar6 * 7,iVar9);
    bVar16 = false;
  }
  else {
LAB_148a5deba:
    if (iVar7 != iVar6) {
      memmove(plVar4 + (longlong)iVar7 * 7,plVar4 + (longlong)iVar6 * 7,(longlong)iVar9 * 0x38);
    }
    iVar7 = iVar7 + iVar9;
    bVar16 = true;
  }
  if (!bVar5) goto LAB_148a5deee;
  goto LAB_148a5ddd5;
LAB_148a5deee:
  *(int *)(local_68 + 0x10) = iVar7;
LAB_148a5def7:
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148a5dccb:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5df20 FUN_148a5df20 body=255 status=ok
// SIG undefined FUN_148a5df20(void)

void FUN_148a5df20(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_148a5dc52();
  FUN_1401e7e86(local_b0,param_3);
  local_90 = *param_4;
  *param_4 = 0;
  local_88 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_50 = FUN_143ef410a;
  local_48 = &LAB_143ef41ec;
  local_40 = &LAB_143ef4200;
  local_38 = FUN_143ef422a;
  local_c0 = 0;
  local_b8 = 0;
  FUN_14482e566(local_b0);
  local_c8 = local_98 + local_a0;
  local_d0 = local_a0;
  bifrost::cross_save::deleteSave(*(undefined8 *)(param_2 + 0x2b8),&local_d0,&local_90);
  FUN_1449db362(&local_c0);
  FUN_1401e7e48(local_b0);
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5e020 FUN_148a5e020 body=248 status=ok
// SIG undefined FUN_148a5e020(void)

void FUN_148a5e020(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [16];
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_90 = *param_4;
  *param_4 = 0;
  local_88 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_50 = FUN_143ef427a;
  local_48 = &LAB_143ef430e;
  local_40 = &LAB_143ef4322;
  local_38 = FUN_143ef434c;
  local_a0 = 0;
  local_98 = 0;
  FUN_1401e7e86(local_d0,param_3);
  FUN_14482e566(local_d0);
  local_a8 = local_b8 + local_c0;
  local_b0 = local_c0;
  bifrost::cross_save::downloadSave(*(undefined8 *)(param_2 + 0x2b8),&local_b0,&local_90);
  FUN_1401e7e48(local_d0);
  FUN_1449db362(&local_a0);
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5e11a FUN_148a5e11a body=290 status=ok
// SIG undefined FUN_148a5e11a(void)

void FUN_148a5e11a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a();
  local_50 = *param_3;
  *param_3 = 0;
  local_48 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b4da450;
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
  *local_40 = &PTR_FUN_14b4da3e0;
  local_40[3] = local_58;
  local_40[4] = local_50;
  local_50 = 0;
  *(undefined4 *)(local_40 + 5) = local_48;
  local_48 = 0;
  FUN_148a5d152(param_2,&local_40);
  FUN_1449db362(&local_50);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5e23e FUN_148a5e23e body=237 status=ok
// SIG undefined FUN_148a5e23e(void)

undefined8 * FUN_148a5e23e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a5e32c FUN_148a5e32c body=650 status=ok
// SIG undefined FUN_148a5e32c(void)

void FUN_148a5e32c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (*(int *)(param_2 + 0x1c) < 0) {
    FUN_148a648fa(param_2,0);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_148a649e6(&local_88,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar3)) {
      local_40 = iVar3;
      FUN_148a64b84();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar3) {
    if (*(int *)(param_2 + 0x1c) < iVar3) {
      FUN_148a648fa(param_2);
    }
    local_a0 = param_1 + 2;
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    iStack_94 = 0;
    local_90 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_a8);
    }
    local_b8 = local_98;
    iStack_b4 = iStack_94;
    local_b0 = local_90;
    local_ac = local_8c;
    local_c8 = local_a8;
    local_c0 = local_a0;
    local_d0 = param_1;
    if (iStack_94 < (int)local_a0[3]) {
      do {
        local_a8 = *(undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x20);
        iVar3 = FUN_148a64d3c(&local_88,(uint)((ulonglong)local_a8 >> 0x20) ^ (uint)local_a8,
                              &local_a8);
        if (iVar3 == -1) {
          lVar5 = (longlong)iStack_b4;
          lVar1 = *local_d0;
          iVar3 = *(int *)(param_2 + 0x18);
          *(uint *)(param_2 + 0x18) = iVar3 + 1U;
          if (*(uint *)(param_2 + 0x1c) < iVar3 + 1U) {
            FUN_148a64df2(param_2,iVar3);
          }
          lVar2 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar2 = param_2;
          }
          *(undefined8 *)(lVar2 + (longlong)iVar3 * 8) = *(undefined8 *)(lVar5 * 0x20 + lVar1);
          FUN_148a64e76(&local_88,&local_a8,(longlong)iStack_b4 * 0x20 + *local_d0);
        }
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 < (int)local_c0[3]);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_148a65172(&local_88);
    if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 148a5e5b8 FUN_148a5e5b8 body=238 status=ok
// SIG undefined FUN_148a5e5b8(void)

void FUN_148a5e5b8(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_b0 = 0;
  FUN_14485c47a(&local_b0,param_1);
  local_90 = *param_4;
  *param_4 = 0;
  local_88 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_58 = &LAB_143ef5106;
  local_50 = &LAB_143ef5184;
  local_48 = &LAB_143ef51aa;
  local_40 = FUN_143ef51de;
  local_98 = local_b0;
  local_a8 = 0;
  local_a0 = 0;
  local_c0 = uVar1;
  local_b8 = param_3;
  bifrost::rewards::consume(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_a8);
  FUN_1449db362(param_4);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5e6a7 FUN_148a5e6a7 body=274 status=ok
// SIG undefined FUN_148a5e6a7(void)

void FUN_148a5e6a7(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_b8);
  local_d0 = 0;
  FUN_14485c47a(&local_d0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = &LAB_143ef5234;
  local_50 = &LAB_143ef52b6;
  local_48 = &LAB_143ef52dc;
  local_40 = FUN_143ef5310;
  local_98 = local_d0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_d8 = local_a0 + local_a8;
  local_e0 = local_a8;
  bifrost::rewards::redeemShiftCode(*(undefined8 *)(param_1 + 0x2b8),&local_e0,&local_98);
  FUN_1449db362(&local_c8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5e7ba FUN_148a5e7ba body=199 status=ok
// SIG undefined FUN_148a5e7ba(void)

void FUN_148a5e7ba(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  FUN_148a5eb46(local_78);
  local_a0 = &local_30;
  local_a8 = local_78;
  FUN_148a5ec8a(&local_98);
  FUN_148a5e882(param_1,&local_98,param_3,&local_88);
  FUN_145be99e5(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_148a58a68(local_78);
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5e882 FUN_148a5e882 body=706 status=ok
// SIG undefined FUN_148a5e882(void)

void FUN_148a5e882(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [64];
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_120 = param_2;
  local_118 = param_1;
  local_110 = param_4;
  if ((longlong)(int)param_2[1] != 0) {
    puVar9 = (undefined8 *)*param_2;
    puVar1 = puVar9 + (longlong)(int)param_2[1] * 9;
    do {
      uVar3 = *puVar9;
      FUN_1401e7e86(&local_f8,puVar9 + 1);
      uVar5 = uStack_b0;
      lVar7 = (longlong)(int)uStack_b0;
      uVar6 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
      if (uStack_b0._4_4_ < uVar6) {
        FUN_145c4be2a(&local_b8,uVar5 & 0xffffffff);
      }
      FUN_145c4bdca(lVar7 * 0x20 + local_b8,&local_f8);
      FUN_1401e7e48(&local_f8);
      lVar7 = local_b8;
      lVar8 = (longlong)((int)uStack_b0 + -1) * 0x20;
      FUN_14482e566(local_b8 + lVar8);
      uVar5 = uStack_c0;
      uVar4 = *(undefined8 *)(lVar7 + 0x10 + lVar8);
      lVar7 = (longlong)(int)uStack_c0;
      uVar6 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
      if (uStack_c0._4_4_ < uVar6) {
        FUN_148a658d0(&local_c8,uVar5 & 0xffffffff);
      }
      *(undefined8 *)(local_c8 + lVar7 * 0x18) = uVar3;
      *(undefined8 *)(local_c8 + 8 + lVar7 * 0x18) = uVar4;
      *(undefined1 *)(local_c8 + 0x10 + lVar7 * 0x18) = param_3;
      puVar9 = puVar9 + 9;
    } while (puVar9 != puVar1);
  }
  lVar8 = local_118;
  local_f8 = 0;
  FUN_14485c47a(&local_f8,local_118);
  puVar1 = local_110;
  local_f0 = *local_110;
  *local_110 = 0;
  local_e8 = *(undefined4 *)(local_110 + 1);
  *(undefined4 *)(local_110 + 1) = 0;
  local_e0 = 0;
  iVar2 = (int)local_120[1];
  lVar7 = *local_120;
  local_d8 = iVar2;
  if (iVar2 == 0) {
    local_d4 = 0;
  }
  else {
    FUN_148a65828(&local_e0,iVar2,0);
    FUN_148a6589b(local_e0,lVar7,iVar2);
  }
  local_68 = FUN_143ef5ee8;
  local_60 = FUN_143ef6088;
  local_58 = FUN_143ef6106;
  local_50 = FUN_143ef61ec;
  local_d0 = param_3;
  FUN_143ef5e64(local_a8,&local_f8);
  local_100 = local_c8 + (longlong)(int)uStack_c0 * 0x18;
  local_108 = local_c8;
  bifrost::account::eula::respond(*(undefined8 *)(lVar8 + 0x2b8),&local_108,local_a8);
  FUN_143eeedd2(&local_f8);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_145c4be03(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(puVar1);
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a5eb46 FUN_148a5eb46 body=324 status=ok
// SIG undefined FUN_148a5eb46(void)

undefined8 * FUN_148a5eb46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a5ec8a FUN_148a5ec8a body=91 status=ok
// SIG undefined FUN_148a5ec8a(void)

undefined8 * FUN_148a5ec8a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * 0x38e38e39;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148a65828(param_1,iVar2,0);
    FUN_148a6589b(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 148a5ece5 FUN_148a5ece5 body=371 status=ok
// SIG undefined FUN_148a5ece5(void)

undefined8 FUN_148a5ece5(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_90 [2];
  longlong local_80 [2];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50 [4];
  
  local_50[0] = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_140056680(local_b8,L"LegalUrl");
  FUN_148a5ee59(local_80,param_2,local_b8,&local_a8);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_140056680(local_d8,L"PrivacyPolicyUrl");
  FUN_148a5ee59(local_70,param_2,local_d8,&local_c8);
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_140056680(local_f8,L"TermsOfServiceUrl");
  FUN_148a5ee59(local_60,param_2,local_f8,&local_e8);
  local_90[1] = (longlong *)local_50;
  local_90[0] = local_80;
  FUN_141469cae(param_1);
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)local_90 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50[0] ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5ee59 FUN_148a5ee59 body=255 status=ok
// SIG undefined FUN_148a5ee59(void)

undefined8 *
FUN_148a5ee59(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 **local_80;
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  undefined1 local_58 [16];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401e7e86(local_58,param_3);
  FUN_1401e7e86(local_78,param_4);
  local_80 = &local_90;
  local_88 = FUN_143ef739a;
  local_90 = param_1;
  FUN_14482e566(local_78);
  local_98 = local_60 + local_68;
  local_a0 = local_68;
  FUN_14482e566(local_58);
  local_a8 = local_40 + local_48;
  local_b0 = local_48;
  bifrost::bifrost_config::getConfigValue
            (*(undefined8 *)(param_2 + 0x2b8),&local_b0,&local_a0,&local_88);
  FUN_1401e7e48(local_78);
  FUN_1401e7e48(local_58);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5ef59 FUN_148a5ef59 body=233 status=ok
// SIG undefined FUN_148a5ef59(void)

void FUN_148a5ef59(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = *param_2;
  *param_2 = 0;
  local_80 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_48 = &LAB_143ef745a;
  local_40 = &LAB_143ef7476;
  local_38 = &LAB_143ef748a;
  local_30 = FUN_143ef74b4;
  local_98 = 0;
  local_90 = 0;
  FUN_1401e7e86(local_c8,param_1);
  FUN_14482e566(local_c8);
  local_a0 = local_b0 + local_b8;
  local_a8 = local_b8;
  bifrost::experimental::startGracePeriod(&local_a8,&local_88);
  FUN_1401e7e48(local_c8);
  FUN_1449db362(&local_98);
  FUN_1449db362(param_2);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5f043 FUN_148a5f043 body=169 status=ok
// SIG undefined FUN_148a5f043(void)

void FUN_148a5f043(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_1;
  *param_1 = 0;
  local_70 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = 0;
  local_38 = &LAB_143ef7504;
  local_30 = &LAB_143ef7520;
  local_28 = &LAB_143ef7534;
  local_20 = FUN_143ef755e;
  local_88 = 0;
  local_80 = 0;
  bifrost::experimental::stopGracePeriod();
  FUN_1449db362(&local_88);
  FUN_1449db362(param_1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5f0ee FUN_148a5f0ee body=182 status=ok
// SIG undefined FUN_148a5f0ee(void)

void FUN_148a5f0ee(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 == 0) {
    FUN_140214cb8(param_1);
    iVar6 = *(int *)(param_1 + 0x20);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar7 = (longlong)(iVar6 + -1) * 0x10;
  iVar6 = *(int *)(lVar2 + 8 + lVar7);
  *(uint *)(lVar2 + 8 + lVar7) = iVar6 + 1U;
  if (*(uint *)(lVar2 + 0xc + lVar7) < iVar6 + 1U) {
    FUN_148a65c4a((longlong *)(lVar2 + lVar7),iVar6);
  }
  uVar3 = *param_2;
  puVar8 = (undefined8 *)((longlong)iVar6 * 0x38 + *(longlong *)(lVar2 + lVar7));
  puVar9 = puVar8 + 2;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar8 = uVar3;
  uVar1 = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(puVar8 + 6) = uVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    *(undefined4 *)puVar9 = *(undefined4 *)param_3;
    return;
  case 1:
    *puVar9 = *param_3;
    return;
  case 3:
    puVar8[4] = param_3[2];
    uVar3 = param_3[1];
    *puVar9 = *param_3;
    puVar8[3] = uVar3;
    return;
  case 4:
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[3];
    puVar8[4] = param_3[2];
    puVar8[5] = uVar5;
    *puVar9 = uVar3;
    puVar8[3] = uVar4;
    return;
  }
  *puVar9 = 0;
  iVar6 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(puVar8 + 3) = iVar6;
  if ((longlong)iVar6 != 0) {
    FUN_1446dd670(puVar9,iVar6,0,param_4,unaff_RBX,unaff_RDI,unaff_RSI);
    memcpy((void *)*puVar9,_Src,(longlong)iVar6 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
  return;
}



// FUNCTION 148a5f17e FUN_148a5f17e body=297 status=ok
// SIG undefined FUN_148a5f17e(void)

void FUN_148a5f17e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0xf8);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar2)) {
    do {
      lVar4 = (longlong)iStack_5c * 0x6f8 + *local_78;
      cVar3 = FUN_144729dda(lVar4);
      if (cVar3 != '\0') {
        FUN_1456e703c(lVar4 + 8);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar5));
  }
  FUN_1407f4802(plVar1,0);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a5f2a8 FUN_148a5f2a8 body=293 status=ok
// SIG undefined FUN_148a5f2a8(void)

void FUN_148a5f2a8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0xf8);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar2)) {
    do {
      lVar4 = (longlong)iStack_5c * 0x6f8 + *local_78;
      cVar3 = FUN_144729dda(lVar4);
      if (cVar3 != '\0') {
        FUN_140eb5152(lVar4 + 8);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar5));
  }
  FUN_1407f4802(plVar1,0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5f3ce FUN_148a5f3ce body=102 status=ok
// SIG undefined FUN_148a5f3ce(void)

void FUN_148a5f3ce(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x140);
  iVar1 = *(int *)(param_1 + 0x148);
  if (param_3 == 0) {
    if (iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)((longlong)plVar2 + lVar3) == param_2) {
          *(undefined1 *)((longlong)plVar2 + lVar3 + 0x20) = 0;
        }
        lVar3 = lVar3 + 0x50;
      } while ((longlong)iVar1 * 0x50 != lVar3);
    }
  }
  else if (iVar1 != 0) {
    lVar3 = (longlong)iVar1 * 0x50;
    do {
      if ((*plVar2 == param_2) && ((int)plVar2[1] == param_3)) {
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        *(undefined1 *)(plVar2 + 4) = 0;
        return;
      }
      plVar2 = plVar2 + 10;
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148a5f434 FUN_148a5f434 body=97 status=ok
// SIG undefined FUN_148a5f434(void)

void FUN_148a5f434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4d9d98;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  param_1[2] = 0x407f400000000000;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = 0x1441200000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 1000000;
  *(undefined4 *)(param_1 + 10) = 1000000;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 148a5f496 FUN_148a5f496 body=157 status=ok
// SIG undefined FUN_148a5f496(void)

undefined4 FUN_148a5f496(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_14cb96658 != 0) && (lVar1 = FUN_1412b2218(), lVar1 != 0)) {
    FUN_145ffd1ec(lVar1,param_2);
    if ((*(char *)(lVar1 + 0x138) == '\x01') && (0 < *(int *)(lVar1 + 0xc0))) {
      if (param_1 == (longlong *)0x0) {
        return 0;
      }
    }
    else {
      if (*(char *)(lVar1 + 0x139) != '\x01') {
        return 0;
      }
      if (param_1 == (longlong *)0x0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0xc4) < 1) {
        return 0;
      }
    }
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar2 != 0) {
      FUN_1457cc262(lVar1,lVar2,1);
      return CONCAT31((int3)((uint)*(int *)(lVar1 + 0xd8) >> 8),
                      *(int *)(lVar1 + 0x104) < *(int *)(lVar1 + 0xd8));
    }
  }
  return 0;
}



// FUNCTION 148a5f534 FUN_148a5f534 body=44 status=ok
// SIG undefined FUN_148a5f534(void)

void FUN_148a5f534(void)

{
  longlong lVar1;
  
  if (DAT_14cb96658 != 0) {
    lVar1 = FUN_1412b2218();
    if (lVar1 != 0) {
      FUN_14153e274(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148a5f596 FUN_148a5f596 body=23 status=ok
// SIG undefined FUN_148a5f596(void)

void FUN_148a5f596(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = DAT_14cb96658;
  if (DAT_14cb96658 == 0) {
    return;
  }
  plVar1 = (longlong *)(DAT_14cb96658 + 0x48);
  if (*plVar1 != 0) {
    if (*(int *)(DAT_14cb96658 + 0x70) < 0) {
      if (*(float *)(DAT_14cb96658 + 0x74) != 0.0) {
        return;
      }
      if (NAN(*(float *)(DAT_14cb96658 + 0x74))) {
        return;
      }
    }
    else {
      *(undefined4 *)(DAT_14cb96658 + 0x74) = 0;
    }
    FUN_1407f4802(*plVar1 + 0xd0,0,param_2);
    iVar2 = *(int *)(lVar3 + 0x70);
    if (iVar2 < 0) {
      fVar4 = -1.0;
    }
    else {
      fVar4 = (float)iVar2;
    }
    *(float *)(lVar3 + 0x74) = fVar4;
  }
  return;
}



// FUNCTION 148a5f5ae FUN_148a5f5ae body=358 status=ok
// SIG undefined FUN_148a5f5ae(void)

void FUN_148a5f5ae(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1;
  if (DAT_14cb96658 != 0) {
    lVar1 = FUN_1412b2218();
    if ((lVar1 != 0) &&
       (((*(char *)(lVar1 + 0x138) == '\x01' && (0 < *(int *)(lVar1 + 0xc0))) ||
        ((*(char *)(lVar1 + 0x139) == '\x01' && (0 < *(int *)(lVar1 + 0xc4))))))) {
      if ((longlong)*(int *)(lVar1 + 0x148) != 0) {
        puVar2 = (undefined4 *)(*(longlong *)(lVar1 + 0x140) + 0x28);
        lVar1 = (longlong)*(int *)(lVar1 + 0x148) * 0x50;
        do {
          if ((*(longlong *)(puVar2 + -10) == param_1) && (puVar2[-8] == 1)) {
            if (puVar2 != (undefined4 *)&DAT_00000028) {
              (*(code *)(&PTR_LAB_14b4d9d70)[*(byte *)(puVar2 + 8)])(puVar2);
              *puVar2 = param_2;
              *(undefined1 *)(puVar2 + 8) = 0;
              *(undefined1 *)(puVar2 + -2) = 1;
              goto LAB_148a5f6cf;
            }
            break;
          }
          puVar2 = puVar2 + 0x14;
          lVar1 = lVar1 + -0x50;
        } while (lVar1 != 0);
      }
      FUN_1400021e4(&local_28,&local_48);
      puVar3 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar3 = local_48;
      }
      FUN_140002266(&local_38,
                    L"Unknown fps constant %s.%s. They must be pre-defined in engine-ini:[/Script/Shift.ShiftFPSHistogram]:Constants"
                    ,puVar3,&DAT_149e0151c);
      puVar3 = &DAT_149dfb77a;
      if (local_30 != 0) {
        puVar3 = local_38;
      }
      FUN_1415b7ec4(puVar3,2,0);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_148a5f6cf:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5f716 FUN_148a5f716 body=369 status=ok
// SIG undefined FUN_148a5f716(void)

void FUN_148a5f716(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_1;
  if (DAT_14cb96658 != 0) {
    lVar1 = FUN_1412b2218();
    if ((lVar1 != 0) &&
       (((*(char *)(lVar1 + 0x138) == '\x01' && (0 < *(int *)(lVar1 + 0xc0))) ||
        ((*(char *)(lVar1 + 0x139) == '\x01' && (0 < *(int *)(lVar1 + 0xc4))))))) {
      if ((longlong)*(int *)(lVar1 + 0x148) != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x140) + 0x28);
        lVar1 = (longlong)*(int *)(lVar1 + 0x148) * 0x50;
        do {
          if ((puVar3[-5] == param_1) && (*(int *)(puVar3 + -4) == 2)) {
            if (puVar3 != (undefined8 *)&DAT_00000028) {
              (*(code *)(&PTR_LAB_14b4d9d70)[*(byte *)(puVar3 + 4)])(puVar3);
              *puVar3 = param_2;
              *(undefined1 *)(puVar3 + 4) = 1;
              *(undefined1 *)(puVar3 + -1) = 1;
              goto LAB_148a5f83c;
            }
            break;
          }
          puVar3 = puVar3 + 10;
          lVar1 = lVar1 + -0x50;
        } while (lVar1 != 0);
      }
      FUN_1400021e4(&local_38,&local_58);
      puVar2 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar2 = local_58;
      }
      FUN_140002266(&local_48,
                    L"Unknown fps constant %s.%s. They must be pre-defined in engine-ini:[/Script/Shift.ShiftFPSHistogram]:Constants"
                    ,puVar2,L"Float");
      puVar2 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar2 = local_48;
      }
      FUN_1415b7ec4(puVar2,2,0);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_148a5f83c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a5f888 FUN_148a5f888 body=427 status=ok
// SIG undefined FUN_148a5f888(void)

void FUN_148a5f888(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_58;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar2 * 2);
  }
  local_30 = param_1;
  if (((DAT_14cb96658 != 0) && (lVar2 = FUN_1412b2218(), lVar2 != 0)) &&
     (((*(char *)(lVar2 + 0x138) == '\x01' && (0 < *(int *)(lVar2 + 0xc0))) ||
      ((*(char *)(lVar2 + 0x139) == '\x01' && (0 < *(int *)(lVar2 + 0xc4))))))) {
    if ((longlong)*(int *)(lVar2 + 0x148) != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x140);
      lVar2 = (longlong)*(int *)(lVar2 + 0x148) * 0x50;
      do {
        if ((*plVar3 == param_1) && ((int)plVar3[1] == 3)) {
          if (plVar3 != (longlong *)0x0) {
            FUN_148a6608e(plVar3 + 5,&local_60);
            *(undefined1 *)(plVar3 + 4) = 1;
            goto LAB_148a5f9f0;
          }
          break;
        }
        plVar3 = plVar3 + 10;
        lVar2 = lVar2 + -0x50;
      } while (lVar2 != 0);
    }
    FUN_1400021e4(&local_30,&local_50);
    puVar1 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar1 = local_50;
    }
    FUN_140002266(&local_40,
                  L"Unknown fps constant %s.%s. They must be pre-defined in engine-ini:[/Script/Shift.ShiftFPSHistogram]:Constants"
                  ,puVar1,L"String");
    puVar1 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar1 = local_40;
    }
    FUN_1415b7ec4(puVar1,2,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_148a5f9f0:
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a5fa34 FUN_148a5fa34 body=96 status=ok
// SIG undefined FUN_148a5fa34(void)

void FUN_148a5fa34(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (DAT_14cb96658 != 0) {
    lVar1 = FUN_1412b2218();
    if ((lVar1 != 0) &&
       (((*(char *)(lVar1 + 0x138) == '\x01' && (0 < *(int *)(lVar1 + 0xc0))) ||
        ((*(char *)(lVar1 + 0x139) == '\x01' && (0 < *(int *)(lVar1 + 0xc4))))))) {
      FUN_148a5f3ce(lVar1,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a5fa94 FUN_148a5fa94 body=1186 status=ok
// SIG undefined FUN_148a5fa94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148a5fa94(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar21;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar42 [16];
  
  if (DAT_14cb96658 != 0) {
    lVar15 = FUN_1412b2218();
    auVar14 = _DAT_149931e80;
    if ((lVar15 != 0) && ((longlong)*(int *)(lVar15 + 0x148) != 0)) {
      uVar16 = (longlong)*(int *)(lVar15 + 0x148) * 0x50 - 0x50;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar16;
      uVar19 = SUB164(auVar22 * ZEXT816(0xcccccccccccccccd),8);
      uVar21 = (undefined4)(uVar16 / 0x140000000);
      auVar23._0_8_ = CONCAT44(uVar21,uVar19);
      auVar23._8_4_ = uVar19;
      auVar23._12_4_ = uVar21;
      auVar20._0_8_ = auVar23._0_8_ >> 6;
      auVar20._8_8_ = auVar23._8_8_ >> 6;
      puVar17 = (undefined1 *)(*(longlong *)(lVar15 + 0x140) + 0x4d0);
      uVar18 = 0;
      auVar22 = pmovsxbq(in_XMM1,0xf0e);
      auVar23 = pmovsxbq(in_XMM2,0xd0c);
      auVar24 = pmovsxbq(in_XMM3,0xb0a);
      auVar25 = pmovsxbq(in_XMM4,0x908);
      auVar26 = pmovsxbq(in_XMM5,0x706);
      auVar27 = pmovsxbq(unaff_XMM6,0x504);
      auVar28 = pmovsxbq(unaff_XMM7,0x302);
      auVar29 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar30._8_4_ = (int)uVar18;
        auVar30._0_8_ = uVar18;
        auVar30._12_4_ = (int)(uVar18 >> 0x20);
        auVar32 = auVar20 | auVar14;
        auVar34 = (auVar30 | auVar29) ^ auVar14;
        lVar15 = auVar32._0_8_;
        auVar35._0_8_ = -(ulonglong)(lVar15 < auVar34._0_8_);
        lVar33 = auVar32._8_8_;
        auVar35._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
        auVar42 = pshuflw(unaff_XMM14,auVar35,0xe8);
        auVar34._8_4_ = 0xffffffff;
        auVar34._0_8_ = 0xffffffffffffffff;
        auVar34._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar42 ^ auVar34,auVar42 ^ auVar34);
        if ((auVar34._0_4_ & 1) != 0) {
          puVar17[-0x4b0] = 0;
        }
        auVar35 = packssdw(auVar35,auVar35);
        auVar42._8_4_ = 0xffffffff;
        auVar42._0_8_ = 0xffffffffffffffff;
        auVar42._12_4_ = 0xffffffff;
        auVar35 = packssdw(auVar35 ^ auVar42,auVar35 ^ auVar42);
        auVar35 = packsswb(auVar35,auVar35);
        if ((auVar35[1] & 1) != 0) {
          puVar17[-0x460] = 0;
        }
        auVar35 = (auVar30 | auVar28) ^ auVar14;
        auVar36._0_8_ = -(ulonglong)(lVar15 < auVar35._0_8_);
        auVar36._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
        auVar34 = packssdw(auVar34,auVar36);
        auVar1._8_4_ = 0xffffffff;
        auVar1._0_8_ = 0xffffffffffffffff;
        auVar1._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar1,auVar34 ^ auVar1);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[2] & 1) != 0) {
          puVar17[-0x410] = 0;
        }
        auVar35 = pshufhw(auVar36,auVar36,0x84);
        auVar2._8_4_ = 0xffffffff;
        auVar2._0_8_ = 0xffffffffffffffff;
        auVar2._12_4_ = 0xffffffff;
        auVar35 = packssdw(auVar35 ^ auVar2,auVar35 ^ auVar2);
        auVar35 = packsswb(auVar35,auVar35);
        if ((auVar35[3] & 1) != 0) {
          puVar17[-0x3c0] = 0;
        }
        auVar35 = (auVar30 | auVar27) ^ auVar14;
        auVar37._0_8_ = -(ulonglong)(lVar15 < auVar35._0_8_);
        auVar37._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
        auVar34 = pshuflw(auVar34,auVar37,0xe8);
        auVar3._8_4_ = 0xffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar3._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar3,auVar34 ^ auVar3);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[4] & 1) != 0) {
          puVar17[-0x370] = 0;
        }
        auVar35 = packssdw(auVar37,auVar37);
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar35 = packssdw(auVar35 ^ auVar4,auVar35 ^ auVar4);
        auVar35 = packsswb(auVar35,auVar35);
        if ((auVar35[5] & 1) != 0) {
          puVar17[-800] = 0;
        }
        auVar35 = (auVar30 | auVar26) ^ auVar14;
        auVar38._0_8_ = -(ulonglong)(lVar15 < auVar35._0_8_);
        auVar38._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
        auVar34 = packssdw(auVar34,auVar38);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar5,auVar34 ^ auVar5);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[6] & 1) != 0) {
          puVar17[-0x2d0] = 0;
        }
        auVar35 = pshufhw(auVar38,auVar38,0x84);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar35 = packssdw(auVar35 ^ auVar6,auVar35 ^ auVar6);
        auVar35 = packsswb(auVar35,auVar35);
        if ((auVar35[7] & 1) != 0) {
          puVar17[-0x280] = 0;
        }
        auVar35 = (auVar30 | auVar25) ^ auVar14;
        auVar39._0_8_ = -(ulonglong)(lVar15 < auVar35._0_8_);
        auVar39._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
        auVar34 = pshuflw(auVar34,auVar39,0xe8);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar7,auVar34 ^ auVar7);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[8] & 1) != 0) {
          puVar17[-0x230] = 0;
        }
        auVar35 = packssdw(auVar39,auVar39);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar35 = packssdw(auVar35 ^ auVar8,auVar35 ^ auVar8);
        auVar35 = packsswb(auVar35,auVar35);
        if ((auVar35[9] & 1) != 0) {
          puVar17[-0x1e0] = 0;
        }
        auVar35 = (auVar30 | auVar24) ^ auVar14;
        auVar40._0_8_ = -(ulonglong)(lVar15 < auVar35._0_8_);
        auVar40._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
        auVar34 = packssdw(auVar34,auVar40);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar9,auVar34 ^ auVar9);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[10] & 1) != 0) {
          puVar17[-400] = 0;
        }
        auVar35 = pshufhw(auVar40,auVar40,0x84);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar35 = packssdw(auVar35 ^ auVar10,auVar35 ^ auVar10);
        auVar35 = packsswb(auVar35,auVar35);
        if ((auVar35[0xb] & 1) != 0) {
          puVar17[-0x140] = 0;
        }
        auVar35 = (auVar30 | auVar23) ^ auVar14;
        auVar41._0_8_ = -(ulonglong)(lVar15 < auVar35._0_8_);
        auVar41._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
        auVar34 = pshuflw(auVar34,auVar41,0xe8);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar11,auVar34 ^ auVar11);
        unaff_XMM14 = packsswb(auVar34,auVar34);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar17[-0xf0] = 0;
        }
        auVar34 = packssdw(auVar41,auVar41);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar12,auVar34 ^ auVar12);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[0xd] & 1) != 0) {
          puVar17[-0xa0] = 0;
        }
        auVar34 = (auVar30 | auVar22) ^ auVar14;
        auVar31._0_8_ = -(ulonglong)(lVar15 < auVar34._0_8_);
        auVar31._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
        auVar34 = packssdw(auVar32,auVar31);
        auVar32._8_4_ = 0xffffffff;
        auVar32._0_8_ = 0xffffffffffffffff;
        auVar32._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar32,auVar34 ^ auVar32);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[0xe] & 1) != 0) {
          puVar17[-0x50] = 0;
        }
        auVar34 = pshufhw(auVar31,auVar31,0x84);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar34 = packssdw(auVar34 ^ auVar13,auVar34 ^ auVar13);
        auVar34 = packsswb(auVar34,auVar34);
        if ((auVar34[0xf] & 1) != 0) {
          *puVar17 = 0;
        }
        uVar18 = uVar18 + 0x10;
        puVar17 = puVar17 + 0x500;
      } while ((uVar16 / 0x50 + 0x10 & 0xfffffffffffffff0) != uVar18);
    }
  }
  return;
}



// FUNCTION 148a5ff36 FUN_148a5ff36 body=277 status=ok
// SIG undefined FUN_148a5ff36(void)

void FUN_148a5ff36(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_b8);
  local_d0 = 0;
  FUN_14485c47a(&local_d0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = FUN_143ef7cee;
  local_50 = &LAB_143ef7e3c;
  local_48 = &LAB_143ef7e62;
  local_40 = FUN_143ef7e96;
  local_98 = local_d0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_d8 = local_a0 + local_a8;
  local_e0 = local_a8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_e0,&local_98,0);
  FUN_1449db362(&local_c8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6004c FUN_148a6004c body=219 status=ok
// SIG undefined FUN_148a6004c(void)

void FUN_148a6004c(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FUN_14485c47a(&local_a8,param_1);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = &LAB_143ef7eec;
  local_48 = &LAB_143ef7f62;
  local_40 = &LAB_143ef7f88;
  local_38 = FUN_143ef7fbc;
  local_90 = local_a8;
  local_a0 = 0;
  local_98 = 0;
  bifrost::social::friends::request(*(undefined8 *)(param_1 + 0x2b8),param_2);
  FUN_1449db362(&local_a0);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60128 FUN_148a60128 body=277 status=ok
// SIG undefined FUN_148a60128(void)

void FUN_148a60128(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_b8);
  local_d0 = 0;
  FUN_14485c47a(&local_d0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = FUN_143ef8012;
  local_50 = &LAB_143ef8160;
  local_48 = &LAB_143ef8186;
  local_40 = FUN_143ef81ba;
  local_98 = local_d0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_d8 = local_a0 + local_a8;
  local_e0 = local_a8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_e0,&local_98,0);
  FUN_1449db362(&local_c8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6023e FUN_148a6023e body=219 status=ok
// SIG undefined FUN_148a6023e(void)

void FUN_148a6023e(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FUN_14485c47a(&local_a8,param_1);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = &LAB_143ef8210;
  local_48 = &LAB_143ef8286;
  local_40 = &LAB_143ef82ac;
  local_38 = FUN_143ef82e0;
  local_90 = local_a8;
  local_a0 = 0;
  local_98 = 0;
  bifrost::social::friends::accept(*(undefined8 *)(param_1 + 0x2b8),param_2);
  FUN_1449db362(&local_a0);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6031a FUN_148a6031a body=277 status=ok
// SIG undefined FUN_148a6031a(void)

void FUN_148a6031a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_b8);
  local_d0 = 0;
  FUN_14485c47a(&local_d0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = FUN_143ef8336;
  local_50 = &LAB_143ef8484;
  local_48 = &LAB_143ef84aa;
  local_40 = FUN_143ef84de;
  local_98 = local_d0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_d8 = local_a0 + local_a8;
  local_e0 = local_a8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_e0,&local_98,0);
  FUN_1449db362(&local_c8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60430 FUN_148a60430 body=219 status=ok
// SIG undefined FUN_148a60430(void)

void FUN_148a60430(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FUN_14485c47a(&local_a8,param_1);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = &LAB_143ef8534;
  local_48 = &LAB_143ef85aa;
  local_40 = &LAB_143ef85d0;
  local_38 = FUN_143ef8604;
  local_90 = local_a8;
  local_a0 = 0;
  local_98 = 0;
  bifrost::social::friends::remove(*(undefined8 *)(param_1 + 0x2b8),param_2);
  FUN_1449db362(&local_a0);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6050c FUN_148a6050c body=277 status=ok
// SIG undefined FUN_148a6050c(void)

void FUN_148a6050c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_b8);
  local_d0 = 0;
  FUN_14485c47a(&local_d0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = FUN_143ef865a;
  local_50 = &LAB_143ef87a8;
  local_48 = &LAB_143ef87ce;
  local_40 = FUN_143ef8802;
  local_98 = local_d0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_d8 = local_a0 + local_a8;
  local_e0 = local_a8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_e0,&local_98,0);
  FUN_1449db362(&local_c8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60622 FUN_148a60622 body=219 status=ok
// SIG undefined FUN_148a60622(void)

void FUN_148a60622(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FUN_14485c47a(&local_a8,param_1);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = &LAB_143ef8858;
  local_48 = &LAB_143ef88ce;
  local_40 = &LAB_143ef88f4;
  local_38 = FUN_143ef8928;
  local_90 = local_a8;
  local_a0 = 0;
  local_98 = 0;
  bifrost::social::friends::block(*(undefined8 *)(param_1 + 0x2b8),param_2);
  FUN_1449db362(&local_a0);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a606fe FUN_148a606fe body=277 status=ok
// SIG undefined FUN_148a606fe(void)

void FUN_148a606fe(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1401e7e86(local_b8);
  local_d0 = 0;
  FUN_14485c47a(&local_d0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_58 = FUN_143ef897e;
  local_50 = &LAB_143ef8acc;
  local_48 = &LAB_143ef8af2;
  local_40 = FUN_143ef8b26;
  local_98 = local_d0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14482e566(local_b8);
  local_d8 = local_a0 + local_a8;
  local_e0 = local_a8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_e0,&local_98,0);
  FUN_1449db362(&local_c8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60814 FUN_148a60814 body=219 status=ok
// SIG undefined FUN_148a60814(void)

void FUN_148a60814(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FUN_14485c47a(&local_a8,param_1);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = &LAB_143ef8b7c;
  local_48 = &LAB_143ef8bf2;
  local_40 = &LAB_143ef8c18;
  local_38 = FUN_143ef8c4c;
  local_90 = local_a8;
  local_a0 = 0;
  local_98 = 0;
  bifrost::social::friends::unblock(*(undefined8 *)(param_1 + 0x2b8),param_2);
  FUN_1449db362(&local_a0);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a608f0 FUN_148a608f0 body=469 status=ok
// SIG undefined FUN_148a608f0(void)

void FUN_148a608f0(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  undefined8 *param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1401e7e86(local_c8);
  local_f8 = *param_5;
  *param_5 = 0;
  local_f0 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  local_e8 = 0;
  FUN_14485c47a(&local_e8,param_1);
  local_d8 = (void *)0x0;
  uStack_d0._0_4_ = (int)param_4[1];
  lVar1 = (longlong)(int)uStack_d0;
  _Src = (void *)*param_4;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_e0 = param_3;
  if (lVar1 != 0) {
    FUN_1446dd670(&local_d8,(int)uStack_d0,0);
    memcpy(local_d8,_Src,lVar1 * 2);
    local_88 = local_d8;
    local_80 = (int)uStack_d0;
    local_7c = uStack_d0._4_4_;
  }
  local_68 = FUN_143ef8ca2;
  local_60 = FUN_143ef8e3e;
  local_58 = FUN_143ef8eb6;
  local_50 = FUN_143ef8f5c;
  local_a8 = local_f8;
  local_f8 = 0;
  local_a0 = local_f0;
  local_f0 = 0;
  local_98 = local_e8;
  local_90 = local_e0;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  FUN_14482e566(local_c8);
  local_100 = local_b0 + local_b8;
  local_108 = local_b8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_108,&local_a8,0);
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_f8);
  FUN_1401e7e48(local_c8);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60ac6 FUN_148a60ac6 body=308 status=ok
// SIG undefined FUN_148a60ac6(void)

void FUN_148a60ac6(longlong param_1,undefined4 param_2,int param_3,longlong *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_ec = param_2;
  FUN_1401e7e86(local_c8,param_4);
  local_a8 = *param_5;
  *param_5 = 0;
  local_a0 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)(param_5 + 1) = 0;
  local_68 = &LAB_143ef8fba;
  local_60 = &LAB_143ef8fd6;
  local_58 = &LAB_143ef8fea;
  local_50 = FUN_143ef9014;
  local_d8 = 0;
  local_d0 = 0;
  FUN_14482e566(local_c8);
  local_e0 = local_b0 + local_b8;
  local_e8 = local_b8;
  iVar1 = 0;
  if (param_3 - 1U < 0xb) {
    iVar1 = param_3;
  }
  local_f8 = &local_a8;
  bifrost::social::reportPlayer(*(undefined8 *)(param_1 + 0x2b8),local_ec,iVar1);
  FUN_1449db362(&local_d8);
  FUN_1401e7e48(local_c8);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60bfb FUN_148a60bfb body=355 status=ok
// SIG undefined FUN_148a60bfb(void)

void FUN_148a60bfb(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  code *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_118 = 0;
  FUN_14485c47a(&local_118,param_1);
  local_98 = *param_3;
  *param_3 = 0;
  local_90 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_60 = &LAB_143ef93fe;
  local_58 = &LAB_143ef9480;
  local_50 = &LAB_143ef94a6;
  local_48 = FUN_143ef94da;
  local_a0 = local_118;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  FUN_14485c47a(&local_130,param_1);
  local_f8 = *param_2;
  *param_2 = 0;
  local_f0 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_c0 = FUN_143ef9228;
  local_b8 = &LAB_143ef934e;
  local_b0 = &LAB_143ef9374;
  local_a8 = FUN_143ef93a8;
  local_100 = local_130;
  local_128 = 0;
  local_120 = 0;
  bifrost::account::link_code::start(*(undefined8 *)(param_1 + 0x2b8),&local_100,&local_a0);
  FUN_1449db362(&local_128);
  FUN_1449db362(&local_110);
  FUN_1449db362(param_2);
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60d5f FUN_148a60d5f body=133 status=ok
// SIG undefined FUN_148a60d5f(void)

undefined8 * FUN_148a60d5f(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14152e0f7(&local_30);
  if ((undefined8 *)&local_30 == param_1) {
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_30;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_2c;
    *(undefined4 *)(param_1 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[5];
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a60de5 FUN_148a60de5 body=134 status=ok
// SIG undefined FUN_148a60de5(void)

longlong * FUN_148a60de5(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)param_2[1];
  if (puVar4 < puVar5) {
    uVar3 = (ulonglong)((longlong)puVar5 - (longlong)puVar4) >> 2;
    iVar2 = (int)uVar3;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3 & 0xffffffff);
    }
    if (iVar2 != 0) {
      FUN_148a663f2(param_1);
      puVar4 = (undefined4 *)*param_2;
      puVar5 = (undefined4 *)param_2[1];
    }
    for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      uVar1 = *puVar4;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14657e454(param_1,iVar2);
      }
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
    }
  }
  return param_1;
}



// FUNCTION 148a60e6c FUN_148a60e6c body=131 status=ok
// SIG undefined FUN_148a60e6c(void)

void FUN_148a60e6c(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  if (uVar4 != 0) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if (*(int *)((longlong)param_2 + 0xc) < (int)uVar1) {
      FUN_148a66448(param_2);
      if ((longlong)*(int *)(param_1 + 1) == 0) {
        return;
      }
      puVar5 = (undefined4 *)*param_1;
      puVar6 = puVar5 + *(int *)(param_1 + 1);
    }
    else {
      puVar5 = (undefined4 *)*param_1;
      puVar6 = puVar5 + uVar4;
    }
    do {
      uVar2 = *puVar5;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_148a661e0(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = uVar2;
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar6);
  }
  return;
}



// FUNCTION 148a60ef0 FUN_148a60ef0 body=1218 status=ok
// SIG undefined FUN_148a60ef0(void)

void FUN_148a60ef0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_1c8 [44];
  undefined4 local_19c;
  undefined4 *local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined8 *local_178;
  undefined4 local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined4 *local_f8;
  uint local_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_19c = *param_2;
  local_118 = 0;
  uStack_110 = 0;
  iVar10 = param_2[4];
  lVar12 = 0;
  local_198 = param_2;
  if ((longlong)iVar10 != 0) {
    lVar12 = *(longlong *)(param_2 + 2);
    lVar14 = 0;
    do {
      uVar7 = uStack_110;
      uVar3 = *(undefined4 *)(lVar12 + lVar14);
      lVar13 = (longlong)(int)uStack_110;
      uVar8 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
      if (uStack_110._4_4_ < uVar8) {
        FUN_148a6649e(&local_118,uVar7 & 0xffffffff);
      }
      *(undefined4 *)(local_118 + lVar13 * 4) = uVar3;
      lVar14 = lVar14 + 4;
    } while ((longlong)iVar10 * 4 != lVar14);
    lVar12 = (longlong)(int)uStack_110;
  }
  lVar14 = local_118;
  puVar5 = local_198;
  local_128 = 0;
  uStack_120 = 0;
  plVar1 = (longlong *)(local_198 + 6);
  local_138 = 0;
  uStack_130 = 0;
  iVar10 = local_198[8];
  iVar9 = iVar10 - local_198[0x13];
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  iVar11 = iVar10;
  if (iVar9 != 0) {
    FUN_148a66524(&local_128,iVar9);
    iVar11 = puVar5[8];
    iVar10 = puVar5[0x13];
  }
  iVar11 = iVar11 - iVar10;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  local_178 = param_3;
  if (iVar11 != 0) {
    FUN_148a66594(&local_138);
  }
  puVar2 = puVar5 + 10;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  iStack_cc = 0;
  local_c8 = 0;
  iVar10 = 0;
  local_180 = param_1;
  local_d8 = puVar2;
  if (puVar5[0x10] != 0) {
    FUN_1449c0562(&local_e0);
    iVar10 = puVar5[0x10];
  }
  local_190 = lVar14 + lVar12 * 4;
  local_f0 = local_d0;
  iStack_ec = iStack_cc;
  local_e8 = local_c8;
  local_e4 = local_c4;
  uStack_100 = local_e0;
  local_f8 = local_d8;
  local_188 = lVar14;
  if ((iStack_cc != iVar10) || (local_d8 != puVar2)) {
    local_108 = plVar1;
    do {
      lVar12 = (longlong)iStack_ec * 0x20 + *local_108;
      FUN_1401e7e86(&local_e0,lVar12);
      uVar7 = uStack_130;
      lVar14 = (longlong)(int)uStack_130;
      uVar8 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar8);
      if (uStack_130._4_4_ < uVar8) {
        FUN_145c4be2a(&local_138,uVar7 & 0xffffffff);
      }
      lVar14 = lVar14 * 0x20;
      FUN_145c4bdca(local_138 + lVar14,&local_e0);
      FUN_1401e7e48(&local_e0);
      lVar13 = local_138;
      FUN_14482e566(local_138 + lVar14);
      uVar7 = uStack_120;
      iVar9 = *(int *)(lVar13 + 0x18 + lVar14);
      lVar14 = *(longlong *)(lVar13 + 0x10 + lVar14);
      uVar4 = *(undefined8 *)(lVar12 + 0x10);
      lVar12 = (longlong)(int)uStack_120;
      uVar8 = (int)uStack_120 + 1;
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar8);
      if (uStack_120._4_4_ < uVar8) {
        FUN_148a665f4(&local_128,uVar7 & 0xffffffff);
      }
      *(longlong *)(local_128 + lVar12 * 0x18) = lVar14;
      *(longlong *)(local_128 + 8 + lVar12 * 0x18) = iVar9 + lVar14;
      *(undefined8 *)(local_128 + 0x10 + lVar12 * 0x18) = uVar4;
      local_f0 = local_f0 & ~uStack_100._4_4_;
      FUN_1449c0562(&uStack_100);
    } while (local_108 != plVar1 || (local_f8 != puVar2 || iStack_ec != iVar10));
  }
  lVar14 = local_128;
  lVar12 = local_128 + (longlong)(int)uStack_120 * 0x18;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  FUN_148a60e6c(local_198 + 0x1a,&local_108);
  puVar6 = local_178;
  local_140 = (longlong)local_108 + (longlong)(int)uStack_100 * 4;
  local_c0 = *local_178;
  *local_178 = 0;
  local_b8 = *(undefined4 *)(local_178 + 1);
  *(undefined4 *)(local_178 + 1) = 0;
  local_80 = &LAB_143ef95ba;
  local_78 = &LAB_143ef95d8;
  local_70 = &LAB_143ef95ec;
  local_68 = FUN_143ef9616;
  local_e0 = 0;
  local_d8 = (undefined4 *)((ulonglong)local_d8 & 0xffffffff00000000);
  local_170 = local_19c;
  local_168 = local_188;
  local_160 = local_190;
  local_158 = lVar14;
  local_148 = local_108;
  local_150 = lVar12;
  bifrost::matchmaking::startSearch(*(undefined8 *)(local_180 + 0x2b8));
  FUN_1449db362(&local_e0);
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_145c4be03(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(puVar6);
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a613b4 FUN_148a613b4 body=254 status=ok
// SIG undefined FUN_148a613b4(void)

void FUN_148a613b4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *param_2;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_148a60e6c(param_2 + 2,&local_a8);
  local_c0 = local_a8 + (longlong)(int)uStack_a0 * 4;
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = &LAB_143ef9666;
  local_48 = &LAB_143ef9682;
  local_40 = &LAB_143ef9696;
  local_38 = FUN_143ef96c0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = local_a8;
  local_d0 = uVar1;
  bifrost::matchmaking::cancelSearch(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_b8);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a614b3 FUN_148a614b3 body=206 status=ok
// SIG undefined FUN_148a614b3(void)

void FUN_148a614b3(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  code *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_4;
  *param_4 = 0;
  local_70 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_38 = &LAB_143ef98b0;
  local_30 = &LAB_143ef98cc;
  local_28 = &LAB_143ef98e0;
  local_20 = FUN_143ef990a;
  local_88 = 0;
  local_80 = 0;
  local_90 = &local_a0;
  local_98 = FUN_143ef9710;
  local_a0 = param_3;
  bifrost::matchmaking::acceptSearch(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_88);
  FUN_1449db362(param_4);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a61582 FUN_148a61582 body=260 status=ok
// SIG undefined FUN_148a61582(void)

Result FUN_148a61582(undefined8 *param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  Result RVar3;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  int local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_bc = param_2;
  local_b8 = param_1;
  FUN_1401e7e86(local_68,param_3);
  FUN_14482e566(local_68);
  lVar2 = param_3[2];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
  FUN_1401e7e86(local_98,param_4);
  FUN_14482e566(local_98);
  local_70 = local_80 + local_88;
  local_78 = local_88;
  local_b0 = local_58;
  local_a8 = local_50 + local_58;
  local_a0 = (char)lVar2;
  local_9c = uVar1;
  RVar3 = bifrost::matchmaking::setProfileFilter(*local_b8,local_bc);
  FUN_1401e7e48(local_98);
  FUN_1401e7e48(local_68);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return RVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a61687 FUN_148a61687 body=178 status=ok
// SIG undefined FUN_148a61687(void)

Result FUN_148a61687(undefined8 *param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  Result RVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401e7e86(local_60,param_3);
  FUN_14482e566(local_60);
  local_70 = local_48 + local_50;
  local_68 = (undefined1)param_3[2];
  local_64 = *(undefined4 *)((longlong)param_3 + 0x14);
  local_78 = local_50;
  RVar1 = bifrost::matchmaking::setProfileFilter(*param_1,param_2,&local_78,param_4);
  FUN_1401e7e48(local_60);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return RVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6173a FUN_148a6173a body=179 status=ok
// SIG undefined FUN_148a6173a(void)

void FUN_148a6173a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  *param_3 = 0;
  local_70 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_38 = &LAB_143ef995a;
  local_30 = &LAB_143ef9976;
  local_28 = &LAB_143ef998a;
  local_20 = FUN_143ef99b4;
  local_88 = 0;
  local_80 = 0;
  bifrost::matchmaking::acceptMatch(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_88);
  FUN_1449db362(param_3);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a617ee FUN_148a617ee body=57 status=ok
// SIG undefined FUN_148a617ee(void)

void FUN_148a617ee(longlong param_1)

{
  FUN_1449db362(param_1 + 0x40);
  FUN_1449db362(param_1 + 0x30);
  FUN_1449db362(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x10);
  FUN_1449db362(param_1);
  return;
}



// FUNCTION 148a61827 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != 0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    if (*(code **)*puVar2 == FUN_145715146) {
      *puVar2 = &PTR_FUN_14b478da0;
      plVar3 = (longlong *)puVar2[4];
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
    else {
      (**(code **)*puVar2)(puVar2,0);
    }
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148a6182c FUN_148a6182c body=51 status=ok
// SIG undefined FUN_148a6182c(void)

void FUN_148a6182c(longlong param_1)

{
  FUN_1449db362(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1);
  return;
}



// FUNCTION 148a61869 FUN_148a61869 body=153 status=ok
// SIG undefined FUN_148a61869(void)

undefined8 * FUN_148a61869(undefined8 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14152e0f7(&local_30);
  if ((undefined8 *)&local_30 == param_1) {
    if (CONCAT44(uStack_2c,local_30) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_1 = local_30;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_2c;
    *(undefined4 *)(param_1 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
  }
  param_1[2] = *(undefined8 *)(param_2 + 4);
  param_1[3] = *(undefined8 *)(param_2 + 6);
  bVar1 = 3;
  if ((byte)param_2[8] < 3) {
    bVar1 = (byte)param_2[8];
  }
  *(byte *)(param_1 + 4) = bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a61903 FUN_148a61903 body=169 status=ok
// SIG undefined FUN_148a61903(void)

void FUN_148a61903(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_1;
  *param_1 = 0;
  local_70 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = 0;
  local_38 = FUN_143efb5e4;
  local_30 = &LAB_143efb65e;
  local_28 = &LAB_143efb672;
  local_20 = FUN_143efb69c;
  local_88 = 0;
  local_80 = 0;
  bifrost::patches::startDownload();
  FUN_1449db362(&local_88);
  FUN_1449db362(param_1);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a619ad stopDownload body=7 status=ok
// SIG void stopDownload(void)

void __cdecl bifrost::patches::stopDownload(void)

{
                    /* WARNING: Could not recover jumptable at 0x000148a619ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  stopDownload();
  return;
}



// FUNCTION 148a619b4 FUN_148a619b4 body=115 status=ok
// SIG undefined FUN_148a619b4(void)

void FUN_148a619b4(void)

{
  undefined8 *in_R9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *in_R9;
  local_48 = &local_20;
  *in_R9 = 0;
  local_18 = *(undefined4 *)(in_R9 + 1);
  *(undefined4 *)(in_R9 + 1) = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_143ef0429();
  FUN_1449db362(in_R9);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a61a28 FUN_148a61a28 body=156 status=ok
// SIG undefined FUN_148a61a28(void)

ulonglong FUN_148a61a28(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte unaff_BL;
  byte bVar1;
  undefined8 unaff_RDI;
  undefined7 uVar2;
  undefined1 auStack_68 [40];
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar1 = 0;
    uVar2 = 0;
  }
  else {
    uStack_38 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 5) >> 0x18);
    local_40 = (undefined5)*param_3;
    uStack_3b = (undefined3)((ulonglong)*param_3 >> 0x28);
    local_30 = param_3[2];
    param_3[2] = 0;
    local_28 = *(undefined4 *)(param_3 + 3);
    local_24 = *(undefined4 *)((longlong)param_3 + 0x1c);
    param_3[3] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar2 = (undefined7)((ulonglong)unaff_RDI >> 8);
    bVar1 = 1;
  }
  if (param_3[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar2,bVar1 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a61ac5 FUN_148a61ac5 body=1258 status=ok
// SIG undefined FUN_148a61ac5(void)

void FUN_148a61ac5(longlong param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  undefined4 local_400;
  undefined1 local_3f8 [16];
  longlong local_3e8;
  int local_3e0;
  undefined8 local_3d8;
  undefined4 uStack_3d0;
  undefined4 local_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  int iStack_3c0;
  undefined1 local_3b8 [16];
  longlong local_3a8;
  int local_3a0;
  undefined *local_398;
  undefined *puStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined8 local_370;
  char *pcStack_368;
  char *local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308;
  undefined1 local_300 [64];
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  code *local_200;
  code *pcStack_1f8;
  code *local_1f0;
  code *pcStack_1e8;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  char local_1c0;
  undefined2 local_1b8;
  undefined6 uStack_1b6;
  char *pcStack_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  char local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  char local_150;
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined2 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_88;
  undefined1 local_70;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_c8 = 0;
  local_88 = 0;
  local_70 = 0;
  local_58 = 0;
  FUN_1401e7e86(local_3b8);
  FUN_14482e566(local_3b8);
  local_e0 = local_3a0 + local_3a8;
  local_e8 = local_3a8;
  uStack_3c8 = 0;
  uStack_3c4 = 0;
  iStack_3c0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3cc = 0;
  if (*(int *)(param_2 + 0x1c) != -1) {
    FUN_1401e7e86(&local_1e0,param_2 + 0x10);
    FUN_148a57d1c(&local_3d8,&local_1e0);
    FUN_1401e7e48(&local_1e0);
    FUN_14482e566(&local_3d8);
    local_d8 = CONCAT44(uStack_3c4,uStack_3c8);
    local_d0 = iStack_3c0 + local_d8;
    local_c8 = 1;
  }
  local_c0 = *(undefined2 *)(param_2 + 0x20);
  FUN_1401e7e86(local_3f8,param_2 + 0x28);
  FUN_14482e566(local_3f8);
  local_b0 = local_3e0 + local_3e8;
  local_b8 = local_3e8;
  local_a8 = *(undefined8 *)(param_2 + 0x38);
  local_a0 = 1;
  local_1e0 = &DAT_14acb0db0;
  puStack_1d8 = &DAT_14acb0db9;
  local_1c0 = '\0';
  local_1b8 = 8000;
  pcStack_1b0 = "local";
  local_1a8 = "";
  local_198 = '\0';
  local_180 = '\0';
  local_168 = '\0';
  local_150 = '\0';
  local_108 = (code *)0x0;
  uStack_100 = (code *)0x0;
  local_f8 = (code *)0x0;
  uStack_f0 = (code *)0x0;
  FUN_148a61fb0(&local_1e0,&local_e8);
  local_408 = 0;
  local_400 = 0;
  FUN_148a678cc(&local_408,param_2 + 0x40);
  local_200 = FUN_143efe148;
  pcStack_1f8 = (code *)&LAB_143efe1bc;
  local_1f0 = FUN_143efe1d0;
  pcStack_1e8 = FUN_143efe1fa;
  local_240 = local_408;
  local_408 = 0;
  local_238 = CONCAT44(local_238._4_4_,local_400);
  local_400 = 0;
  if (uStack_f0 != (code *)0x0) {
    (*uStack_f0)(local_148);
  }
  pcVar1 = local_1f0;
  local_f8 = local_1f0;
  uStack_f0 = pcStack_1e8;
  local_108 = local_200;
  uStack_100 = pcStack_1f8;
  local_200 = (code *)0x0;
  pcStack_1f8 = (code *)0x0;
  local_1f0 = (code *)0x0;
  pcStack_1e8 = (code *)0x0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(local_148,&local_240);
    if (pcStack_1e8 != (code *)0x0) {
      (*pcStack_1e8)(&local_240);
    }
  }
  FUN_1449db362(&local_408);
  local_240 = 0;
  FUN_14485c47a(&local_240,param_1);
  local_298 = *param_3;
  *param_3 = 0;
  local_290 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_260 = &LAB_143efe24a;
  local_258 = &LAB_143efe2d4;
  local_250 = &LAB_143efe2fa;
  local_248 = FUN_143efe32e;
  local_2a0 = local_240;
  local_238 = 0;
  local_230 = 0;
  local_398 = local_1e0;
  puStack_390 = puStack_1d8;
  local_378 = local_1c0 == '\x01';
  if ((bool)local_378) {
    local_388 = local_1d0;
    uStack_380 = uStack_1c8;
  }
  local_360 = local_1a8;
  local_370 = CONCAT62(uStack_1b6,local_1b8);
  pcStack_368 = pcStack_1b0;
  local_350 = local_198 == '\x01';
  if ((bool)local_350) {
    local_358 = local_1a0;
  }
  local_338 = local_180 == '\x01';
  if ((bool)local_338) {
    local_348 = local_190;
    uStack_340 = uStack_188;
  }
  local_320 = local_168 == '\x01';
  if ((bool)local_320) {
    local_330 = local_178;
    uStack_328 = uStack_170;
  }
  local_308 = local_150 == '\x01';
  if ((bool)local_308) {
    local_318 = local_160;
    uStack_310 = uStack_158;
  }
  local_2c0 = (undefined4)local_108;
  uStack_2bc = local_108._4_4_;
  uStack_2b8 = (undefined4)uStack_100;
  uStack_2b4 = uStack_100._4_4_;
  local_2b0 = (undefined4)local_f8;
  uStack_2ac = local_f8._4_4_;
  uStack_2a8 = (undefined4)uStack_f0;
  uStack_2a4 = uStack_f0._4_4_;
  if (uStack_100 != (code *)0x0) {
    (*uStack_100)(local_300,local_148);
  }
  bifrost::game_servers::startServer(*(undefined8 *)(param_1 + 0x2b8),&local_398,&local_2a0);
  FUN_1449db362(&local_238);
  if (uStack_f0 != (code *)0x0) {
    (*uStack_f0)(local_148);
  }
  FUN_1401e7e48(local_3f8);
  FUN_1401e7e48(&local_3d8);
  FUN_1401e7e48(local_3b8);
  FUN_1449db362(param_3);
  if ((local_50 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a61fb0 FUN_148a61fb0 body=515 status=ok
// SIG undefined FUN_148a61fb0(void)

void FUN_148a61fb0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  bVar1 = *(byte *)(param_2 + 4);
  if ((bVar1 == 0 & *(byte *)(param_1 + 4)) == 1) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else if (*(byte *)(param_1 + 4) == 0) {
    if ((bVar1 & 1) != 0) {
      uVar2 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar2;
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  else if ((bVar1 & 1) != 0) {
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
  }
  param_1[7] = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  bVar1 = *(byte *)(param_2 + 9);
  if ((bVar1 == 0 & *(byte *)(param_1 + 9)) == 1) {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else if (*(byte *)(param_1 + 9) == 0) {
    if ((bVar1 & 1) != 0) {
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  else if ((bVar1 & 1) != 0) {
    param_1[8] = param_2[8];
  }
  bVar1 = *(byte *)(param_2 + 0xc);
  if ((bVar1 == 0 & *(byte *)(param_1 + 0xc)) == 1) {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  else if (*(byte *)(param_1 + 0xc) == 0) {
    if ((bVar1 & 1) != 0) {
      uVar2 = param_2[0xb];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar2;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  else if ((bVar1 & 1) != 0) {
    uVar2 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar2;
  }
  bVar1 = *(byte *)(param_2 + 0xf);
  if ((bVar1 == 0 & *(byte *)(param_1 + 0xf)) == 1) {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else if (*(byte *)(param_1 + 0xf) == 0) {
    if ((bVar1 & 1) != 0) {
      uVar2 = param_2[0xe];
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = uVar2;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if ((bVar1 & 1) != 0) {
    uVar2 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar2;
  }
  bVar1 = *(byte *)(param_2 + 0x12);
  if ((bVar1 == 0 & *(byte *)(param_1 + 0x12)) != 1) {
    if (*(byte *)(param_1 + 0x12) == 0) {
      if ((bVar1 & 1) != 0) {
        uVar2 = param_2[0x11];
        param_1[0x10] = param_2[0x10];
        param_1[0x11] = uVar2;
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
    }
    else if ((bVar1 & 1) != 0) {
      uVar2 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = uVar2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 148a621b3 FUN_148a621b3 body=256 status=ok
// SIG undefined FUN_148a621b3(void)

void FUN_148a621b3(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 < 3) {
    local_a8 = 0;
    FUN_14485c47a(&local_a8,param_1);
    local_88 = *param_3;
    *param_3 = 0;
    local_80 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_50 = &LAB_143efe384;
    local_48 = &LAB_143efe40e;
    local_40 = &LAB_143efe434;
    local_38 = FUN_143efe468;
    local_90 = local_a8;
    local_a0 = 0;
    local_98 = 0;
    bifrost::game_servers::updateStatus(*(undefined8 *)(param_1 + 0x2b8),param_2);
    FUN_1449db362(&local_a0);
  }
  else if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1,0);
  }
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a622b4 FUN_148a622b4 body=256 status=ok
// SIG undefined FUN_148a622b4(void)

void FUN_148a622b4(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 < 3) {
    local_a8 = 0;
    FUN_14485c47a(&local_a8,param_1);
    local_88 = *param_3;
    *param_3 = 0;
    local_80 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_50 = &LAB_143efe4be;
    local_48 = &LAB_143efe548;
    local_40 = &LAB_143efe56e;
    local_38 = FUN_143efe5a2;
    local_90 = local_a8;
    local_a0 = 0;
    local_98 = 0;
    bifrost::game_servers::stopServer(*(undefined8 *)(param_1 + 0x2b8),param_2);
    FUN_1449db362(&local_a0);
  }
  else if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1,0);
  }
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a623b5 FUN_148a623b5 body=29 status=ok
// SIG undefined FUN_148a623b5(void)

undefined8 FUN_148a623b5(undefined8 param_1)

{
  FUN_1400b22c2(param_1,&DAT_14b4da170);
  return param_1;
}



// FUNCTION 148a623d2 FUN_148a623d2 body=29 status=ok
// SIG undefined FUN_148a623d2(void)

undefined8 FUN_148a623d2(undefined8 param_1)

{
  FUN_1400b22c2(param_1,"gamecenter");
  return param_1;
}



// FUNCTION 148a623ef FUN_148a623ef body=29 status=ok
// SIG undefined FUN_148a623ef(void)

undefined8 FUN_148a623ef(undefined8 param_1)

{
  FUN_1400b22c2(param_1,&DAT_14b4da180);
  return param_1;
}



// FUNCTION 148a6240c FUN_148a6240c body=29 status=ok
// SIG undefined FUN_148a6240c(void)

undefined8 FUN_148a6240c(undefined8 param_1)

{
  FUN_1400b22c2(param_1,"xboxlive");
  return param_1;
}



// FUNCTION 148a62429 FUN_148a62429 body=29 status=ok
// SIG undefined FUN_148a62429(void)

undefined8 FUN_148a62429(undefined8 param_1)

{
  FUN_1400b22c2(param_1,"googleplay");
  return param_1;
}



// FUNCTION 148a62446 FUN_148a62446 body=29 status=ok
// SIG undefined FUN_148a62446(void)

undefined8 FUN_148a62446(undefined8 param_1)

{
  FUN_1400b22c2(param_1,"nintendo");
  return param_1;
}



// FUNCTION 148a62464 FUN_148a62464 body=216 status=ok
// SIG undefined FUN_148a62464(void)

/* WARNING: Removing unreachable block (ram,0x000148a62507) */

void FUN_148a62464(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_2 + 8) != 0) {
    lVar5 = (longlong)*(int *)(param_2 + 8) << 4;
    uVar3 = local_50;
    uVar4 = local_48;
    do {
      local_48 = uVar4;
      local_50 = uVar3;
      FUN_14657da9a();
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_3,iVar1);
      }
      lVar2 = *param_3;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar6) = 0;
      *(undefined8 *)(lVar2 + lVar6) = local_50;
      local_50 = 0;
      uVar3 = local_50;
      *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)local_48;
      *(undefined4 *)(lVar2 + 0xc + lVar6) = local_48._4_4_;
      local_48 = 0;
      uVar4 = local_48;
      local_48 = 0;
      local_50 = 0;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a6253e FUN_148a6253e body=158 status=ok
// SIG undefined FUN_148a6253e(void)

void FUN_148a6253e(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *param_6;
  *param_6 = 0;
  local_18 = *(undefined4 *)(param_6 + 1);
  *(undefined4 *)(param_6 + 1) = 0;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x1f0);
  }
  local_28 = param_7;
  local_30 = &local_20;
  local_38 = param_5;
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2,uVar1);
  FUN_1449db362(param_6);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a625de FUN_148a625de body=121 status=ok
// SIG undefined FUN_148a625de(void)

void FUN_148a625de(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_4;
  *param_4 = 0;
  local_18 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x1f0);
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,uVar1,&local_20);
  FUN_1449db362(param_4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a62658 FUN_148a62658 body=29 status=ok
// SIG undefined FUN_148a62658(void)

undefined8 FUN_148a62658(longlong param_1,undefined8 param_2)

{
  FUN_148a62676(param_2,param_1 + 0x60);
  return param_2;
}



// FUNCTION 148a62676 FUN_148a62676 body=555 status=ok
// SIG undefined FUN_148a62676(void)

undefined8 * FUN_148a62676(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)((longlong)param_1 + 0x74) = *(undefined2 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 148a628ae FUN_148a628ae body=223 status=ok
// SIG undefined FUN_148a628ae(void)

void FUN_148a628ae(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FUN_14485c47a(&local_a0,param_1);
  local_98 = *param_2;
  *param_2 = 0;
  local_90 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_48 = FUN_143f01244;
  local_40 = &LAB_143f018da;
  local_38 = &LAB_143f01900;
  local_30 = FUN_143f01934;
  local_88 = local_a0;
  local_80 = 0;
  local_78 = 0;
  FUN_14657e154(&local_80,&local_98);
  bifrost::wallet::client::listCurrencies(*(undefined8 *)(param_1 + 0x2b8),&local_88);
  FUN_1449db362(&local_98);
  FUN_1449db362(param_2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6298e FUN_148a6298e body=255 status=ok
// SIG undefined FUN_148a6298e(void)

undefined8 *
FUN_148a6298e(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 **local_80;
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  undefined1 local_58 [16];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1401e7e86(local_58,param_3);
  FUN_1401e7e86(local_78,param_4);
  local_80 = &local_90;
  local_88 = FUN_143eff920;
  local_90 = param_1;
  FUN_14482e566(local_78);
  local_98 = local_60 + local_68;
  local_a0 = local_68;
  FUN_14482e566(local_58);
  local_a8 = local_40 + local_48;
  local_b0 = local_48;
  bifrost::overlay::getConfigValue(*(undefined8 *)(param_2 + 0x2b8),&local_b0,&local_a0,&local_88);
  FUN_1401e7e48(local_78);
  FUN_1401e7e48(local_58);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a62a8e FUN_148a62a8e body=57 status=ok
// SIG undefined FUN_148a62a8e(void)

void FUN_148a62a8e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_143ef2388();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 148a62ac8 FUN_148a62ac8 body=253 status=ok
// SIG undefined FUN_148a62ac8(void)

longlong FUN_148a62ac8(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x2b8) == param_2)) {
          return lVar2;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x30) * 8 != lVar3);
    }
    if (param_3 != '\0') {
      lVar3 = FUN_14657dd61(DAT_14c951640,*(undefined8 *)(param_1 + 0x38));
      *(longlong *)(lVar3 + 0x2b8) = param_2;
      FUN_148a57dec(lVar3 + 0x40,param_2);
      FUN_148a57f4c(lVar3 + 200,*(undefined8 *)(lVar3 + 0x2b8));
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      iVar1 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
        FUN_14657e9a2((longlong *)(param_1 + 0x28),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      if (DAT_14c950c29 == '\0') {
        return lVar3;
      }
      FUN_1456cec3c(lVar3);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 148a62bc5 FUN_148a62bc5 body=520 status=ok
// SIG undefined FUN_148a62bc5(void)

void FUN_148a62bc5(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  longlong local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar3 = 0;
  local_c8 = 0;
  FUN_14485c47a(&local_c8);
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_b8;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar1,lVar2 * 2);
    iVar3 = local_b8;
  }
  pvVar1 = local_c0;
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_60 = FUN_143f0010e;
  local_58 = FUN_143f0025e;
  local_50 = FUN_143f002e2;
  local_48 = FUN_143f00390;
  local_a0 = local_c8;
  local_98 = (void *)0x0;
  local_90 = iVar3;
  if (iVar3 == 0) {
    local_8c = 0;
  }
  else {
    local_b0 = local_88;
    local_a8 = local_80;
    FUN_1446dd670(&local_98,iVar3,0);
    memcpy(local_98,pvVar1,(longlong)iVar3 * 2);
    local_88 = local_b0;
    local_80 = local_a8;
  }
  local_b0 = 0;
  local_a8 = 0;
  FUN_1401e7e86(local_f8,param_2);
  FUN_14482e566(local_f8);
  local_d0 = local_e0 + local_e8;
  local_d8 = local_e8;
  bifrost::users::findByDisplayName(*(undefined8 *)(param_1 + 0x2b8),&local_d8,&local_a0);
  FUN_1401e7e48(local_f8);
  FUN_1449db362(&local_b0);
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a62dce FUN_148a62dce body=526 status=ok
// SIG undefined FUN_148a62dce(void)

void FUN_148a62dce(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1401e7e86(local_b8);
  iVar2 = 0;
  local_e0 = 0;
  FUN_14485c47a(&local_e0,param_1);
  local_90 = *param_3;
  *param_3 = 0;
  local_88 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_c8 = (void *)0x0;
  local_c0 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c0;
  pvVar1 = (void *)*param_2;
  if (lVar3 == 0) {
    local_bc = 0;
  }
  else {
    local_d8 = local_90;
    local_d0 = local_88;
    FUN_1446dd670(&local_c8,local_c0,0);
    memcpy(local_c8,pvVar1,lVar3 * 2);
    local_90 = local_d8;
    local_88 = local_d0;
    iVar2 = local_c0;
  }
  pvVar1 = local_c8;
  local_58 = FUN_143f005fe;
  local_50 = FUN_143f00884;
  local_48 = FUN_143f008fe;
  local_40 = FUN_143f009d2;
  local_98 = local_e0;
  local_d8 = 0;
  local_d0 = 0;
  local_80 = (void *)0x0;
  local_78 = iVar2;
  if (iVar2 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1446dd670(&local_80,iVar2,0);
    memcpy(local_80,pvVar1,(longlong)iVar2 * 2);
  }
  FUN_14482e566(local_b8);
  local_e8 = local_a0 + local_a8;
  local_f0 = local_a8;
  bifrost::users::findByShiftId(*(undefined8 *)(param_1 + 0x2b8),&local_f0,&local_98,0);
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_d8);
  FUN_1401e7e48(local_b8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a62fe2 FUN_148a62fe2 body=79 status=ok
// SIG undefined FUN_148a62fe2(void)

undefined8 * FUN_148a62fe2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4dae90;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a63031 FUN_148a63031 body=38 status=ok
// SIG undefined FUN_148a63031(void)

void FUN_148a63031(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a5d690(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 148a63057 FUN_148a63057 body=38 status=ok
// SIG undefined FUN_148a63057(void)

void FUN_148a63057(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a5d690(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 148a6307d FUN_148a6307d body=61 status=ok
// SIG undefined FUN_148a6307d(void)

void FUN_148a6307d(longlong param_1,int param_2)

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



// FUNCTION 148a630ba FUN_148a630ba body=89 status=ok
// SIG undefined FUN_148a630ba(void)

void FUN_148a630ba(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a63114 FUN_148a63114 body=130 status=ok
// SIG undefined FUN_148a63114(void)

void FUN_148a63114(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a63198 FUN_148a63198 body=162 status=ok
// SIG undefined FUN_148a63198(void)

void FUN_148a63198(longlong *param_1,undefined8 param_2)

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
        goto LAB_148a63225;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148a63225:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148a6323a FUN_148a6323a body=130 status=ok
// SIG undefined FUN_148a6323a(void)

void FUN_148a6323a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a632be FUN_148a632be body=132 status=ok
// SIG undefined FUN_148a632be(void)

void FUN_148a632be(longlong param_1,int param_2)

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



// FUNCTION 148a63344 FUN_148a63344 body=377 status=ok
// SIG undefined FUN_148a63344(void)

undefined8 * FUN_148a63344(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_148a5b108(param_1 + 8,iVar1,0);
    FUN_148a5b16a(param_1[8],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148a634be FUN_148a634be body=130 status=ok
// SIG undefined FUN_148a634be(void)

void FUN_148a634be(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a63542 FUN_148a63542 body=86 status=ok
// SIG undefined FUN_148a63542(void)

void FUN_148a63542(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 148a63598 FUN_148a63598 body=59 status=ok
// SIG undefined FUN_148a63598(void)

void FUN_148a63598(longlong *param_1)

{
  FUN_148a63735(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a635d4 FUN_148a635d4 body=132 status=ok
// SIG undefined FUN_148a635d4(void)

void FUN_148a635d4(longlong param_1,int param_2)

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



// FUNCTION 148a6365a FUN_148a6365a body=86 status=ok
// SIG undefined FUN_148a6365a(void)

void FUN_148a6365a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 148a636b0 FUN_148a636b0 body=132 status=ok
// SIG undefined FUN_148a636b0(void)

void FUN_148a636b0(longlong param_1,int param_2)

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



// FUNCTION 148a63735 FUN_148a63735 body=61 status=ok
// SIG undefined FUN_148a63735(void)

void FUN_148a63735(longlong param_1,int param_2)

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



// FUNCTION 148a63772 FUN_148a63772 body=38 status=ok
// SIG undefined FUN_148a63772(void)

void FUN_148a63772(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a63598(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 148a63798 FUN_148a63798 body=130 status=ok
// SIG undefined FUN_148a63798(void)

void FUN_148a63798(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a6381c FUN_148a6381c body=130 status=ok
// SIG undefined FUN_148a6381c(void)

void FUN_148a6381c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a638a0 FUN_148a638a0 body=130 status=ok
// SIG undefined FUN_148a638a0(void)

void FUN_148a638a0(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a63924 FUN_148a63924 body=99 status=ok
// SIG undefined FUN_148a63924(void)

undefined8 FUN_148a63924(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x38,8);
  }
  return uVar3;
}



// FUNCTION 148a63988 FUN_148a63988 body=143 status=ok
// SIG undefined FUN_148a63988(void)

void FUN_148a63988(longlong param_1,int param_2)

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



// FUNCTION 148a63a18 FUN_148a63a18 body=95 status=ok
// SIG undefined FUN_148a63a18(void)

void FUN_148a63a18(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 148a63a78 FUN_148a63a78 body=132 status=ok
// SIG undefined FUN_148a63a78(void)

void FUN_148a63a78(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a63afe FUN_148a63afe body=130 status=ok
// SIG undefined FUN_148a63afe(void)

void FUN_148a63afe(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a63b82 FUN_148a63b82 body=272 status=ok
// SIG undefined FUN_148a63b82(void)

undefined8 FUN_148a63b82(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar7 + uVar8 * 4);
    if (lVar5 != -1) {
      lVar4 = *param_1;
      lVar5 = lVar5 * 0x20;
      local_48 = *(undefined8 *)(lVar4 + lVar5);
      local_50 = param_2;
      cVar2 = FUN_148a63cee();
      if (cVar2 == '\0') {
        lVar5 = lVar4 + lVar5;
        do {
          lVar4 = lVar5;
          lVar5 = (longlong)*(int *)(lVar4 + 0x18);
          if (lVar5 == -1) goto LAB_148a63baa;
          lVar1 = *param_1;
          lVar5 = lVar5 * 0x20;
          local_48 = *(undefined8 *)(lVar1 + lVar5);
          local_50 = param_2;
          cVar2 = FUN_148a63cee(&local_48,&local_50);
          lVar5 = lVar1 + lVar5;
        } while (cVar2 == '\0');
        puVar6 = (undefined4 *)(lVar4 + 0x18);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
      }
      FUN_148a63c94(param_1,*puVar6);
      uVar3 = 1;
    }
  }
LAB_148a63baa:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a63c94 FUN_148a63c94 body=90 status=ok
// SIG undefined FUN_148a63c94(void)

void FUN_148a63c94(longlong *param_1,int param_2)

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
  FUN_148a63d24();
  return;
}



// FUNCTION 148a63cee FUN_148a63cee body=53 status=ok
// SIG undefined FUN_148a63cee(void)

ulonglong FUN_148a63cee(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148a63d24 FUN_148a63d24 body=73 status=ok
// SIG undefined FUN_148a63d24(void)

void FUN_148a63d24(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_148a646b2(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148a63d6e(param_1,param_2);
  return;
}



// FUNCTION 148a63d6e FUN_148a63d6e body=114 status=ok
// SIG undefined FUN_148a63d6e(void)

void FUN_148a63d6e(longlong *param_1,int param_2)

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



// FUNCTION 148a63de0 FUN_148a63de0 body=130 status=ok
// SIG undefined FUN_148a63de0(void)

void FUN_148a63de0(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a63e72 FUN_148a63e72 body=130 status=ok
// SIG undefined FUN_148a63e72(void)

void FUN_148a63e72(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a63ef6 FUN_148a63ef6 body=131 status=ok
// SIG undefined FUN_148a63ef6(void)

void FUN_148a63ef6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_3;
    *param_3 = 0;
    local_18 = (undefined4)param_3[1];
    local_14 = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
  FUN_148a5b019(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a63f7a FUN_148a63f7a body=133 status=ok
// SIG undefined FUN_148a63f7a(void)

longlong FUN_148a63f7a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148a64000();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_148a63fb3;
  }
  local_30 = param_3;
  FUN_148a640ec(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_148a63fb3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a64000 FUN_148a64000 body=180 status=ok
// SIG undefined FUN_148a64000(void)

int FUN_148a64000(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_148a640b6(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148a6408e;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148a6408e:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a640b6 FUN_148a640b6 body=53 status=ok
// SIG undefined FUN_148a640b6(void)

ulonglong FUN_148a640b6(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148a640ec FUN_148a640ec body=286 status=ok
// SIG undefined FUN_148a640ec(void)

undefined4 * FUN_148a640ec(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_148a6420c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_148a646b2(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_148a642f2(param_1,param_3,local_40,local_48);
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
      FUN_148a6446a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6420c FUN_148a6420c body=229 status=ok
// SIG undefined FUN_148a6420c(void)

int * FUN_148a6420c(longlong *param_1,int *param_2)

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



// FUNCTION 148a642f2 FUN_148a642f2 body=189 status=ok
// SIG undefined FUN_148a642f2(void)

undefined8 FUN_148a642f2(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    iVar7 = FUN_148a643b0();
    if (iVar7 != -1) {
      lVar2 = *param_1;
      lVar9 = (longlong)iVar7 * 0x20;
      puVar1 = (undefined4 *)(lVar2 + lVar9);
      FUN_148a646b2(*(undefined8 *)(lVar2 + 8 + lVar9),*(undefined4 *)(lVar2 + 0x10 + lVar9));
      if (*(longlong *)(lVar2 + 8 + lVar9) != 0) {
        FUN_1400020a8();
      }
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar1 + 4) = param_3[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148a63d6e(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_148a6431c;
    }
  }
  uVar8 = 0;
LAB_148a6431c:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a643b0 FUN_148a643b0 body=185 status=ok
// SIG undefined FUN_148a643b0(void)

int FUN_148a643b0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_148a63cee(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148a643d9;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148a643d9:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148a6446a FUN_148a6446a body=439 status=ok
// SIG undefined FUN_148a6446a(void)

void FUN_148a6446a(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 148a64622 FUN_148a64622 body=143 status=ok
// SIG undefined FUN_148a64622(void)

void FUN_148a64622(longlong param_1,int param_2)

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



// FUNCTION 148a646b2 FUN_148a646b2 body=38 status=ok
// SIG undefined FUN_148a646b2(void)

void FUN_148a646b2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a5d960(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 148a646e6 FUN_148a646e6 body=98 status=ok
// SIG undefined FUN_148a646e6(void)

undefined8 FUN_148a646e6(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2492492492492493),0);
  iVar4 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
  iVar5 = 0x7fffffff;
  if (param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,iVar5,0x38,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return uVar3;
}



// FUNCTION 148a64748 FUN_148a64748 body=47 status=ok
// SIG undefined FUN_148a64748(void)

void FUN_148a64748(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_148a64778(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148a64778 FUN_148a64778 body=242 status=ok
// SIG undefined FUN_148a64778(void)

undefined8 * FUN_148a64778(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 148a6486a FUN_148a6486a body=88 status=ok
// SIG undefined FUN_148a6486a(void)

void FUN_148a6486a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148a648c2 FUN_148a648c2 body=55 status=ok
// SIG undefined FUN_148a648c2(void)

void FUN_148a648c2(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_148a64778(param_1,param_2);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148a648fa FUN_148a648fa body=101 status=ok
// SIG undefined FUN_148a648fa(void)

void FUN_148a648fa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    FUN_148a64960(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 148a64960 FUN_148a64960 body=133 status=ok
// SIG undefined FUN_148a64960(void)

void FUN_148a64960(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a649e6 FUN_148a649e6 body=413 status=ok
// SIG undefined FUN_148a649e6(void)

void FUN_148a649e6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 148a64b84 FUN_148a64b84 body=439 status=ok
// SIG undefined FUN_148a64b84(void)

void FUN_148a64b84(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 148a64d3c FUN_148a64d3c body=180 status=ok
// SIG undefined FUN_148a64d3c(void)

int FUN_148a64d3c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x10);
        cVar1 = FUN_148a63cee(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148a64dca;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148a64dca:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a64df2 FUN_148a64df2 body=130 status=ok
// SIG undefined FUN_148a64df2(void)

void FUN_148a64df2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_148a64960(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a64e76 FUN_148a64e76 body=285 status=ok
// SIG undefined FUN_148a64e76(void)

undefined4 * FUN_148a64e76(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148a64f94(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_148a6507a(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_148a64b84(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a64f94 FUN_148a64f94 body=229 status=ok
// SIG undefined FUN_148a64f94(void)

int * FUN_148a64f94(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 148a6507a FUN_148a6507a body=132 status=ok
// SIG undefined FUN_148a6507a(void)

undefined8 FUN_148a6507a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_148a64d3c();
    if (iVar1 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
      FUN_148a65100(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_148a6509e;
    }
  }
  uVar2 = 0;
LAB_148a6509e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a65100 FUN_148a65100 body=114 status=ok
// SIG undefined FUN_148a65100(void)

void FUN_148a65100(longlong *param_1,int param_2)

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



// FUNCTION 148a65172 FUN_148a65172 body=52 status=ok
// SIG undefined FUN_148a65172(void)

void FUN_148a65172(longlong *param_1)

{
  FUN_148a651a6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a651a6 FUN_148a651a6 body=89 status=ok
// SIG undefined FUN_148a651a6(void)

void FUN_148a651a6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 148a65200 FUN_148a65200 body=63 status=ok
// SIG undefined FUN_148a65200(void)

void FUN_148a65200(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146172356(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148a6446a(param_1);
    return;
  }
  FUN_148a65240(param_1);
  FUN_146172356(param_1);
  return;
}



// FUNCTION 148a65240 FUN_148a65240 body=322 status=ok
// SIG undefined FUN_148a65240(void)

void FUN_148a65240(longlong *param_1)

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



// FUNCTION 148a65384 FUN_148a65384 body=109 status=ok
// SIG undefined FUN_148a65384(void)

void FUN_148a65384(longlong param_1,int param_2)

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
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 148a653f2 FUN_148a653f2 body=109 status=ok
// SIG undefined FUN_148a653f2(void)

void FUN_148a653f2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 148a65460 FUN_148a65460 body=130 status=ok
// SIG undefined FUN_148a65460(void)

void FUN_148a65460(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a654e4 FUN_148a654e4 body=246 status=ok
// SIG undefined FUN_148a654e4(void)

undefined8 * FUN_148a654e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a655da FUN_148a655da body=328 status=ok
// SIG undefined FUN_148a655da(void)

undefined8 * FUN_148a655da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = param_2[6];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a65722 FUN_148a65722 body=113 status=ok
// SIG undefined FUN_148a65722(void)

void FUN_148a65722(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 148a65794 FUN_148a65794 body=147 status=ok
// SIG undefined FUN_148a65794(void)

void FUN_148a65794(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a65828 FUN_148a65828 body=115 status=ok
// SIG undefined FUN_148a65828(void)

void FUN_148a65828(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a6589b FUN_148a6589b body=52 status=ok
// SIG undefined FUN_148a6589b(void)

void FUN_148a6589b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a5eb46(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148a658d0 FUN_148a658d0 body=147 status=ok
// SIG undefined FUN_148a658d0(void)

void FUN_148a658d0(longlong param_1,int param_2)

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



// FUNCTION 148a65964 FUN_148a65964 body=332 status=ok
// SIG undefined FUN_148a65964(void)

void FUN_148a65964(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (lVar10 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_148a65ab0(lVar2,*param_2);
    iVar9 = 0;
    iVar11 = 0;
    do {
      lVar6 = (longlong)iVar11;
      iVar8 = iVar11 + 1;
      if (iVar11 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      uVar3 = *param_2;
      lVar14 = lVar2 + 0x48 + lVar6 * 0x48;
      iVar12 = iVar11;
      lVar7 = lVar6;
      do {
        lVar7 = lVar7 + 1;
        iVar13 = iVar8;
        if (lVar10 <= lVar7) break;
        bVar5 = FUN_148a65ab0(lVar14,uVar3);
        iVar12 = iVar12 + 1;
        lVar14 = lVar14 + 0x48;
        iVar13 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      iVar8 = iVar13 - iVar11;
      if ((bVar4 & 1) == 0) {
        if (iVar9 != iVar11) {
          memmove((void *)(lVar2 + (longlong)iVar9 * 0x48),(void *)(lVar2 + lVar6 * 0x48),
                  (longlong)iVar8 * 0x48);
        }
        iVar9 = iVar9 + iVar8;
      }
      else {
        FUN_145be99e5(lVar2 + lVar6 * 0x48,iVar8);
      }
      iVar11 = iVar13;
      bVar4 = bVar4 ^ 1;
    } while (lVar7 < lVar10);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 148a65ab0 FUN_148a65ab0 body=127 status=ok
// SIG undefined FUN_148a65ab0(void)

undefined8 FUN_148a65ab0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  if (*param_1 == *param_2) {
    iVar7 = (int)param_1[2];
    iVar3 = (int)param_2[2];
    if (iVar7 == iVar3) {
      if (iVar7 < 2) {
        return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      }
      uVar4 = param_2[1];
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(param_1[1] + lVar8);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)(uVar4 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148a65af2;
          }
          iVar7 = uVar6 - uVar9;
          goto LAB_148a65b2b;
        }
        if (uVar1 == 0) break;
LAB_148a65af2:
        lVar8 = lVar8 + 2;
      }
      iVar7 = 0;
LAB_148a65b2b:
      bVar10 = iVar7 == 0;
    }
    else {
      uVar4 = (ulonglong)(uint)(iVar3 + iVar7);
      bVar10 = iVar3 + iVar7 == 1;
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),bVar10);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 148a65b30 FUN_148a65b30 body=132 status=ok
// SIG undefined FUN_148a65b30(void)

void FUN_148a65b30(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a65bb6 FUN_148a65bb6 body=132 status=ok
// SIG undefined FUN_148a65bb6(void)

void FUN_148a65bb6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a65c4a FUN_148a65c4a body=143 status=ok
// SIG undefined FUN_148a65c4a(void)

void FUN_148a65c4a(longlong param_1,int param_2)

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



// FUNCTION 148a65cda FUN_148a65cda body=48 status=ok
// SIG undefined FUN_148a65cda(void)

void FUN_148a65cda(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x78,8);
  }
  return;
}



// FUNCTION 148a65d0a FUN_148a65d0a body=146 status=ok
// SIG undefined FUN_148a65d0a(void)

undefined8 * FUN_148a65d0a(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  bVar1 = *(byte *)(param_2 + 9);
  *(byte *)(param_1 + 9) = bVar1;
  (*(code *)(&switchD_148a5f16c::switchdataD_14b4d9da0)[bVar1])(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 148a65d9c FUN_148a65d9c body=471 status=ok
// SIG undefined FUN_148a65d9c(void)

void FUN_148a65d9c(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x000148a65dd0:
    do {
      iVar7 = iVar5 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        if ((iVar9 < (int)param_2) &&
           ((double)param_1[(longlong)iVar7 * 2] < (double)param_1[(longlong)iVar9 * 2] ||
            (double)param_1[(longlong)iVar7 * 2] == (double)param_1[(longlong)iVar9 * 2])) {
          iVar7 = iVar9;
        }
        if ((double)param_1[(longlong)iVar5 * 2] <= (double)param_1[(longlong)iVar7 * 2] &&
            (double)param_1[(longlong)iVar7 * 2] != (double)param_1[(longlong)iVar5 * 2]) {
          puVar8 = param_1 + (longlong)iVar5 * 2;
          puVar11 = param_1 + (longlong)iVar7 * 2;
          uVar2 = *puVar8;
          uVar3 = puVar8[1];
          uVar4 = puVar11[1];
          *puVar8 = *puVar11;
          puVar8[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          iVar5 = iVar7;
          local_28 = uVar2;
          uStack_20 = uVar3;
          goto joined_r0x000148a65dd0;
        }
      }
      bVar12 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = (param_1 + uVar6 * 2)[1];
      *param_1 = param_1[uVar6 * 2];
      param_1[1] = uVar4;
      local_28._0_4_ = (undefined4)uVar2;
      local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar3;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar8 = param_1 + uVar6 * 2;
      *(undefined4 *)puVar8 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar8 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_20._4_4_;
      local_28 = uVar2;
      uStack_20 = uVar3;
      if (param_2 != 2) {
        do {
          iVar5 = 0;
          iVar7 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar9 = iVar7;
            if (((longlong)iVar5 < (longlong)uVar6) &&
               ((double)param_1[(longlong)iVar7 * 2] < (double)param_1[(longlong)iVar5 * 2] ||
                (double)param_1[(longlong)iVar7 * 2] == (double)param_1[(longlong)iVar5 * 2])) {
              iVar9 = iVar5;
            }
            if ((double)param_1[(longlong)iVar9 * 2] < (double)param_1[(longlong)iVar10 * 2] ||
                (double)param_1[(longlong)iVar9 * 2] == (double)param_1[(longlong)iVar10 * 2])
            break;
            puVar8 = param_1 + (longlong)iVar10 * 2;
            puVar11 = param_1 + (longlong)iVar9 * 2;
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar5 = iVar9 * 2;
            iVar7 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar1 = uVar6 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar4;
          local_28._0_4_ = (undefined4)uVar2;
          local_28._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar3;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar8 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar8 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar8 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar8 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_20._4_4_;
          bVar12 = 2 < uVar6;
          uVar6 = uVar1;
          local_28 = uVar2;
          uStack_20 = uVar3;
        } while (bVar12);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a65f74 FUN_148a65f74 body=147 status=ok
// SIG undefined FUN_148a65f74(void)

void FUN_148a65f74(longlong param_1,int param_2)

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



// FUNCTION 148a66008 FUN_148a66008 body=132 status=ok
// SIG undefined FUN_148a66008(void)

void FUN_148a66008(longlong param_1,int param_2)

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



// FUNCTION 148a6608e FUN_148a6608e body=100 status=ok
// SIG undefined FUN_148a6608e(void)

void FUN_148a6608e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  (*(code *)(&PTR_LAB_14b4d9d70)[*(byte *)(param_1 + 4)])();
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
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



// FUNCTION 148a6611a FUN_148a6611a body=21 status=ok
// SIG undefined FUN_148a6611a(void)

double FUN_148a6611a(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)*param_1)(param_2);
  return (double)fVar1;
}



// FUNCTION 148a6614e FUN_148a6614e body=130 status=ok
// SIG undefined FUN_148a6614e(void)

void FUN_148a6614e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a661e0 FUN_148a661e0 body=132 status=ok
// SIG undefined FUN_148a661e0(void)

void FUN_148a661e0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a66266 FUN_148a66266 body=130 status=ok
// SIG undefined FUN_148a66266(void)

void FUN_148a66266(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a662ea FUN_148a662ea body=130 status=ok
// SIG undefined FUN_148a662ea(void)

void FUN_148a662ea(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a6636e FUN_148a6636e body=130 status=ok
// SIG undefined FUN_148a6636e(void)

void FUN_148a6636e(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a663f2 FUN_148a663f2 body=86 status=ok
// SIG undefined FUN_148a663f2(void)

void FUN_148a663f2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 148a66448 FUN_148a66448 body=86 status=ok
// SIG undefined FUN_148a66448(void)

void FUN_148a66448(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 148a6649e FUN_148a6649e body=132 status=ok
// SIG undefined FUN_148a6649e(void)

void FUN_148a6649e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a66524 FUN_148a66524 body=112 status=ok
// SIG undefined FUN_148a66524(void)

void FUN_148a66524(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 148a66594 FUN_148a66594 body=95 status=ok
// SIG undefined FUN_148a66594(void)

void FUN_148a66594(longlong param_1,uint param_2)

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



// FUNCTION 148a665f4 FUN_148a665f4 body=147 status=ok
// SIG undefined FUN_148a665f4(void)

void FUN_148a665f4(longlong param_1,int param_2)

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



// FUNCTION 148a66688 FUN_148a66688 body=130 status=ok
// SIG undefined FUN_148a66688(void)

void FUN_148a66688(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a6670c FUN_148a6670c body=130 status=ok
// SIG undefined FUN_148a6670c(void)

void FUN_148a6670c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a66790 FUN_148a66790 body=68 status=ok
// SIG undefined FUN_148a66790(void)

void FUN_148a66790(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_148a6685a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148a66886(param_1,param_2);
  return;
}



// FUNCTION 148a667d6 FUN_148a667d6 body=131 status=ok
// SIG undefined FUN_148a667d6(void)

void FUN_148a667d6(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    *param_2 = 0;
    local_18 = (undefined4)param_2[1];
    local_14 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
  FUN_148a6685a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a6685a FUN_148a6685a body=43 status=ok
// SIG undefined FUN_148a6685a(void)

void FUN_148a6685a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 148a66886 FUN_148a66886 body=112 status=ok
// SIG undefined FUN_148a66886(void)

void FUN_148a66886(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 148a668f6 FUN_148a668f6 body=147 status=ok
// SIG undefined FUN_148a668f6(void)

void FUN_148a668f6(longlong param_1,int param_2)

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



// FUNCTION 148a6698a FUN_148a6698a body=106 status=ok
// SIG undefined FUN_148a6698a(void)

undefined8 FUN_148a6698a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 148a669f4 FUN_148a669f4 body=121 status=ok
// SIG undefined FUN_148a669f4(void)

void FUN_148a669f4(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x10);
  do {
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + -1);
    _Src = (void *)puVar2[-2];
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    param_1[2] = *puVar2;
    param_1 = param_1 + 3;
    puVar2 = puVar2 + 3;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 148a66a6e FUN_148a66a6e body=86 status=ok
// SIG undefined FUN_148a66a6e(void)

void FUN_148a66a6e(longlong param_1)

{
  FUN_148a6685a(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a66ac4 FUN_148a66ac4 body=86 status=ok
// SIG undefined FUN_148a66ac4(void)

void FUN_148a66ac4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 148a66b1a FUN_148a66b1a body=132 status=ok
// SIG undefined FUN_148a66b1a(void)

void FUN_148a66b1a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a66ba0 FUN_148a66ba0 body=130 status=ok
// SIG undefined FUN_148a66ba0(void)

void FUN_148a66ba0(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a66c24 FUN_148a66c24 body=130 status=ok
// SIG undefined FUN_148a66c24(void)

void FUN_148a66c24(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a66ca8 FUN_148a66ca8 body=63 status=ok
// SIG undefined FUN_148a66ca8(void)

longlong FUN_148a66ca8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148a66d5e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_148a66d4f(lVar2);
  return lVar2;
}



// FUNCTION 148a66ce8 FUN_148a66ce8 body=103 status=ok
// SIG undefined FUN_148a66ce8(void)

undefined8 FUN_148a66ce8(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xc)) {
    uVar4 = uVar2 / 0xc & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xc,4);
  }
  return uVar3;
}



// FUNCTION 148a66d4f FUN_148a66d4f body=15 status=ok
// SIG undefined FUN_148a66d4f(void)

void FUN_148a66d4f(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 148a66d5e FUN_148a66d5e body=147 status=ok
// SIG undefined FUN_148a66d5e(void)

void FUN_148a66d5e(longlong param_1,int param_2)

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



// FUNCTION 148a66df2 FUN_148a66df2 body=130 status=ok
// SIG undefined FUN_148a66df2(void)

void FUN_148a66df2(longlong *param_1,longlong *param_2)

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



// FUNCTION 148a66e76 FUN_148a66e76 body=130 status=ok
// SIG undefined FUN_148a66e76(void)

void FUN_148a66e76(longlong *param_1,longlong *param_2)

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


