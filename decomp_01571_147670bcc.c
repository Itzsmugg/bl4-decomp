// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147670bcc FUN_147670bcc body=114 status=ok
// SIG undefined FUN_147670bcc(void)

void FUN_147670bcc(longlong *param_1,int param_2)

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



// FUNCTION 147670c3e FUN_147670c3e body=372 status=ok
// SIG undefined FUN_147670c3e(void)

undefined4 * FUN_147670c3e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147670db4(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  *(undefined4 *)(local_40 + 4) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)local_40 = *puVar2;
  *(undefined8 *)(local_40 + 0x10) = *(undefined8 *)(puVar3 + 4);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(local_40 + 8) = *puVar3;
  *(undefined4 *)(local_40 + 10) = uVar4;
  *(undefined4 *)(local_40 + 0xc) = uVar5;
  *(undefined4 *)(local_40 + 0xe) = uVar6;
  cVar7 = *(char *)(puVar3 + 7);
  *(char *)(local_40 + 0x16) = cVar7;
  if (cVar7 == '\x01') {
    *(undefined4 *)(local_40 + 0x14) = puVar3[6];
  }
  *(undefined1 *)(local_40 + 0x18) = *(undefined1 *)(puVar3 + 8);
  local_40[0x1c] = 0xffff;
  local_40[0x1d] = 0xffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  iVar8 = FUN_144a78877(*(undefined4 *)(local_40 + 2),*(undefined4 *)(local_40 + 4));
  uVar12 = iVar8 + (uint)(uVar1 >> 2) + (uint)uVar1 * 0x40 + 0x9e3779b9 ^ (uint)uVar1;
  cVar7 = FUN_147670e9a(param_1,uVar12,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar12 = *(int *)(param_1 + 0x48) - 1U & uVar12;
      *(uint *)(local_40 + 0x1e) = uVar12;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1c) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar12) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar12) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147670f14(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147670db4 FUN_147670db4 body=229 status=ok
// SIG undefined FUN_147670db4(void)

int * FUN_147670db4(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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



// FUNCTION 147670e9a FUN_147670e9a body=122 status=ok
// SIG undefined FUN_147670e9a(void)

undefined8 FUN_147670e9a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
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
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_147670a4c(), iVar14 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x40);
    if (*(char *)(*param_1 + 0x2c + (longlong)iVar14 * 0x40) == '\x01') {
      *(undefined1 *)(puVar1 + 0xb) = 0;
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_147670bcc(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 147670f14 FUN_147670f14 body=476 status=ok
// SIG undefined FUN_147670f14(void)

void FUN_147670f14(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
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
        lVar4 = *local_88;
        lVar11 = (longlong)iVar6 * 0x40;
        uVar2 = *(ushort *)(lVar4 + lVar11);
        iVar7 = FUN_144a78877(*(undefined4 *)(lVar4 + 4 + lVar11),
                              *(undefined4 *)(lVar4 + 8 + lVar11));
        uVar8 = (longlong)
                (int)(iVar7 + (uint)(uVar2 >> 2) + (uint)uVar2 * 0x40 + 0x9e3779b9 ^ (uint)uVar2) &
                (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x3c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x38 + lVar11) =
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



// FUNCTION 1476710f2 FUN_1476710f2 body=124 status=ok
// SIG undefined FUN_1476710f2(void)

longlong FUN_1476710f2(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147671170();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1476711ce(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x60 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147671170 FUN_147671170 body=93 status=ok
// SIG undefined FUN_147671170(void)

longlong FUN_147671170(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1476711ce FUN_1476711ce body=272 status=ok
// SIG undefined FUN_1476711ce(void)

undefined4 * FUN_1476711ce(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1476712e0(param_1,local_48);
  FUN_14767148e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1476713ce(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1476717a2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476712e0 FUN_1476712e0 body=238 status=ok
// SIG undefined FUN_1476712e0(void)

int * FUN_1476712e0(longlong *param_1,int *param_2)

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



// FUNCTION 1476713ce FUN_1476713ce body=192 status=ok
// SIG undefined FUN_1476713ce(void)

undefined8 FUN_1476713ce(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x60;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_14766429c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147671728(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14767148e FUN_14767148e body=149 status=ok
// SIG undefined FUN_14767148e(void)

undefined8 * FUN_14767148e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_147671524(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_14766429c(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147671524 FUN_147671524 body=123 status=ok
// SIG undefined FUN_147671524(void)

undefined8 * FUN_147671524(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1476715a0();
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



// FUNCTION 1476715a0 FUN_1476715a0 body=391 status=ok
// SIG undefined FUN_1476715a0(void)

longlong * FUN_1476715a0(longlong *param_1,longlong *param_2)

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
        if (*(char *)(*local_78 + 0x2c + (longlong)iVar6 * 0x40) == '\x01') {
          *(undefined1 *)((longlong)iVar6 * 0x40 + *local_78 + 0x2c) = 0;
        }
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



// FUNCTION 147671728 FUN_147671728 body=122 status=ok
// SIG undefined FUN_147671728(void)

void FUN_147671728(longlong *param_1,int param_2)

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



// FUNCTION 1476717a2 FUN_1476717a2 body=450 status=ok
// SIG undefined FUN_1476717a2(void)

void FUN_1476717a2(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
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



// FUNCTION 147671966 FUN_147671966 body=348 status=ok
// SIG undefined FUN_147671966(void)

undefined4 * FUN_147671966(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147670db4(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  *(undefined4 *)(local_40 + 4) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)local_40 = *puVar2;
  *(undefined1 *)(local_40 + 0x16) = 0;
  *(undefined1 *)(local_40 + 0x18) = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_40[0xe] = 0;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  local_40[0x11] = 0;
  local_40[0x12] = 0;
  local_40[0x13] = 0;
  local_40[0x1c] = 0xffff;
  local_40[0x1d] = 0xffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  iVar5 = FUN_144a78877(*(undefined4 *)(local_40 + 2),*(undefined4 *)(local_40 + 4));
  uVar9 = iVar5 + (uint)(uVar1 >> 2) + (uint)uVar1 * 0x40 + 0x9e3779b9 ^ (uint)uVar1;
  cVar4 = FUN_147670e9a(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 0x1e) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1c) =
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
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147670f14(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147671ac4 FUN_147671ac4 body=166 status=ok
// SIG undefined FUN_147671ac4(void)

void FUN_147671ac4(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147671b6c FUN_147671b6c body=542 status=ok
// SIG undefined FUN_147671b6c(void)

void FUN_147671b6c(longlong *param_1,longlong param_2,undefined8 param_3,short *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_4[2]) goto LAB_147671bad;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_147671bad:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_4[1]) goto LAB_147671bd8;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147671bd8:
  lVar5 = *plVar10;
  local_a8 = *(int *)(param_2 + 0x14);
  local_a4 = iVar2;
  if (local_a8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_4) goto LAB_147671c0a;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147671c0a:
  lVar6 = *plVar9;
  iVar2 = *(int *)(param_2 + 0x14);
  local_a0 = param_3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  local_88 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)
               (*(longlong *)(*param_1 + 8) + 0x80 +
               (ulonglong)*(ushort *)(local_88 + uVar7 * 4) * 0x128);
      uVar4 = *(undefined8 *)(lVar6 + uVar7 * 8);
      *(double *)(lVar5 + uVar7 * 8) =
           ((double)((lVar3 >> 0x20) * (longlong)(int)uVar4) +
           (double)(int)((ulonglong)lVar3 >> 0x20) * (double)(float)((ulonglong)uVar4 >> 0x20)) /
           (double)(int)lVar3;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  local_98 = plVar8;
  local_90 = iVar2;
  local_80 = plVar9;
  local_70 = lVar6;
  local_68 = plVar10;
  local_50 = lVar5;
  FUN_147671d8c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147671d8c FUN_147671d8c body=141 status=ok
// SIG undefined FUN_147671d8c(void)

void FUN_147671d8c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147671e0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147671e1a FUN_147671e1a body=126 status=ok
// SIG undefined FUN_147671e1a(void)

undefined4 * FUN_147671e1a(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147671e98 FUN_147671e98 body=467 status=ok
// SIG undefined FUN_147671e98(void)

void FUN_147671e98(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_147671ed6;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147671ed6:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_147671f06;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147671f06:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147671f35;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147671f35:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar8;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar7;
  local_68 = plVar11;
  local_50 = lVar6;
  if ((ulonglong)uVar1 != 0) {
    uVar10 = 0;
    do {
      cVar5 = FUN_1410676cc(*(undefined8 *)(lVar4 + uVar10 * 8),*(undefined8 *)(lVar7 + uVar10 * 8),
                            (undefined1 *)(lVar6 + uVar10));
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar6 + uVar10) = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  FUN_14766794c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14767206c FUN_14767206c body=126 status=ok
// SIG undefined FUN_14767206c(void)

undefined4 * FUN_14767206c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476720ea FUN_1476720ea body=475 status=ok
// SIG undefined FUN_1476720ea(void)

void FUN_1476720ea(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_147672128;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147672128:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_147672158;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147672158:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147672187;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147672187:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar8;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar7;
  local_68 = plVar11;
  local_50 = lVar6;
  if (uVar1 != 0) {
    lVar10 = 0;
    do {
      cVar5 = FUN_14752e8c0(*(undefined8 *)(lVar4 + lVar10 * 2),*(undefined8 *)(lVar7 + lVar10 * 2),
                            (undefined4 *)(lVar6 + lVar10));
      if (cVar5 == '\0') {
        *(undefined4 *)(lVar6 + lVar10) = 0x80000000;
      }
      lVar10 = lVar10 + 4;
    } while ((ulonglong)uVar1 * 4 != lVar10);
  }
  FUN_147669b7a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476722c6 FUN_1476722c6 body=166 status=ok
// SIG undefined FUN_1476722c6(void)

void FUN_1476722c6(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767236e FUN_14767236e body=126 status=ok
// SIG undefined FUN_14767236e(void)

undefined4 * FUN_14767236e(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476723ec FUN_1476723ec body=517 status=ok
// SIG undefined FUN_1476723ec(void)

void FUN_1476723ec(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong local_70;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_147672432;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147672432:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_147672462;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147672462:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_c4 = iVar2;
  local_c0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147672491;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147672491:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_c8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_98 = local_c8;
  local_80 = local_c0;
  local_78 = local_c4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_b8 = plVar8;
  local_b0 = iVar2;
  local_a8 = lVar4;
  local_a0 = plVar9;
  local_90 = lVar7;
  local_88 = plVar11;
  local_70 = lVar6;
  if ((ulonglong)uVar1 != 0) {
    uVar10 = 0;
    do {
      cVar5 = FUN_1400f0204(*(undefined8 *)(lVar4 + uVar10 * 8),0,
                            *(undefined8 *)(lVar7 + uVar10 * 8),&local_64);
      if (cVar5 == '\0') {
        dVar12 = 1.1754943508222875e-38;
      }
      else {
        dVar12 = (double)local_64;
      }
      *(double *)(lVar6 + uVar10 * 8) = dVar12;
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  FUN_1476725f2(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476725f2 FUN_1476725f2 body=141 status=ok
// SIG undefined FUN_1476725f2(void)

void FUN_1476725f2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147672671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147672680 FUN_147672680 body=166 status=ok
// SIG undefined FUN_147672680(void)

void FUN_147672680(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147672728 FUN_147672728 body=126 status=ok
// SIG undefined FUN_147672728(void)

undefined4 * FUN_147672728(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476727a6 FUN_1476727a6 body=482 status=ok
// SIG undefined FUN_1476727a6(void)

void FUN_1476727a6(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_1476727e4;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476727e4:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_147672814;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147672814:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147672843;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147672843:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar8;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar7;
  local_68 = plVar11;
  local_50 = lVar6;
  if (uVar1 != 0) {
    lVar10 = 0;
    do {
      cVar5 = FUN_140108b92(*(undefined8 *)(lVar4 + lVar10),*(undefined8 *)(lVar7 + lVar10),
                            (undefined8 *)(lVar6 + lVar10));
      if (cVar5 == '\0') {
        *(undefined8 *)(lVar6 + lVar10) = 0x10000000000000;
      }
      lVar10 = lVar10 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar10);
  }
  FUN_14767298a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14767298a FUN_14767298a body=141 status=ok
// SIG undefined FUN_14767298a(void)

void FUN_14767298a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147672a09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147672a18 FUN_147672a18 body=436 status=ok
// SIG undefined FUN_147672a18(void)

longlong * FUN_147672a18(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147672bce();
  if (*param_2 != 0) goto LAB_147672a46;
  plVar3 = (longlong *)FUN_14001cc68(0xf0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d7290;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xd0);
  FUN_147672d64(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a4d72b0;
  plVar3[0x1d] = (longlong)&PTR_FUN_14a4d7300;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_147674376(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_147672b92:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147672b82:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x000147672b82;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_147672b92;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_147672c82(param_1,param_3,&local_50);
LAB_147672a46:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147672bce FUN_147672bce body=179 status=ok
// SIG undefined FUN_147672bce(void)

undefined8 * FUN_147672bce(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_147672c28;
    }
  }
  uVar6 = 0;
LAB_147672c28:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147672c82 FUN_147672c82 body=184 status=ok
// SIG undefined FUN_147672c82(void)

void FUN_147672c82(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147672d3c FUN_147672d3c body=9 status=ok
// SIG undefined FUN_147672d3c(void)

void FUN_147672d3c(longlong param_1)

{
  FUN_1476738ba(param_1 + 0x10);
  return;
}



// FUNCTION 147672d46 FUN_147672d46 body=29 status=ok
// SIG undefined FUN_147672d46(void)

undefined8 FUN_147672d46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147672d64 FUN_147672d64 body=134 status=ok
// SIG undefined FUN_147672d64(void)

void FUN_147672d64(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7320;
  param_1[0x1b] = &PTR_FUN_14a4d7370;
  return;
}



// FUNCTION 147672dea FUN_147672dea body=38 status=ok
// SIG undefined FUN_147672dea(void)

undefined8 FUN_147672dea(undefined8 param_1,int param_2)

{
  FUN_1476738ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147672e1c FUN_147672e1c body=25 status=ok
// SIG undefined FUN_147672e1c(void)

void FUN_147672e1c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 147672e36 FUN_147672e36 body=62 status=ok
// SIG undefined FUN_147672e36(void)

void FUN_147672e36(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_147673956();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147672e76 FUN_147672e76 body=910 status=ok
// SIG undefined FUN_147672e76(void)

ulonglong FUN_147672e76(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar7 == '\0') goto LAB_147672ee9;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      local_38 = *(uint *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0xc);
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      FUN_140d0e176(param_1 + 0x18);
      FUN_147673a7e(param_1 + 0x68,param_2);
      uVar8 = *(uint *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar8 != 0) {
          pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
          memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar8 - 1;
LAB_1476731fb:
        FUN_147673af0(param_1 + 0xa0);
      }
LAB_147673053:
      if ((local_38 & 0x100) != 0) {
        FUN_1476739de(&local_40);
      }
      unaff_RBP = 0;
      goto LAB_147672ee9;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc) & 1) == 0)
    goto LAB_147672ee9;
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    uVar10 = 0;
    if (0 < (int)uVar8) {
      uVar12 = (ulonglong)uVar8;
      uVar13 = uVar8;
      do {
        uVar12 = uVar12 >> 1;
        uVar14 = (uint)uVar12 + (int)uVar10;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 8) < param_2) {
          uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
        }
        bVar6 = 1 < uVar13;
        uVar13 = (uint)uVar12;
      } while (bVar6);
    }
    if (((int)uVar10 < (int)uVar8) &&
       (piVar2 = (int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 8),
       piVar2 != (int *)0xfffffffffffffffc && *piVar2 <= param_2)) {
      FUN_1476739de((longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68));
      uVar8 = *(uint *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      unaff_RBP = CONCAT71(uVar11,1);
      if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar8 != 0) {
          pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
          memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar8 - 1;
        FUN_147673af0(param_1 + 0xa0);
      }
      goto LAB_147672ee9;
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\x01') {
      bVar4 = *(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc);
      if ((bVar4 & 1) == 0) goto LAB_147672ee9;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      *(byte *)((longlong)puVar9 + 9) = bVar4 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_147672ee9;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      if ((*(byte *)((longlong)puVar9 + 9) & 2) == 0) {
        local_38 = *(uint *)(puVar9 + 1);
        local_40 = *puVar9;
        FUN_140d0e176(param_1 + 0x18);
        FUN_147673a7e(param_1 + 0x68,param_2);
        uVar8 = *(uint *)(param_1 + 0xa8);
        lVar5 = *(longlong *)(param_1 + 0xa0);
        uVar14 = 0;
        uVar13 = uVar8;
        if (0 < (int)uVar8) {
          do {
            uVar1 = (uVar13 >> 1) + uVar14;
            if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
              uVar14 = uVar1 + (uVar13 & 1);
            }
            bVar6 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
          } while (bVar6);
        }
        if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
          if (~uVar14 + uVar8 != 0) {
            pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
            memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
            uVar8 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar8 - 1;
          goto LAB_1476731fb;
        }
        goto LAB_147673053;
      }
      if ((*(byte *)((longlong)puVar9 + 9) & 1) == 0) goto LAB_147672ee9;
    }
  }
  FUN_1476739de(puVar9);
LAB_147672ee9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147673206 FUN_147673206 body=444 status=ok
// SIG undefined FUN_147673206(void)

undefined8 FUN_147673206(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  lVar13 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar13 * 0xc + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_1476732af;
  }
  if (param_3 == '\x01') {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 0xc);
    FUN_140d0e176(param_1 + 0x18);
    FUN_147673a7e(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    uVar9 = (ulonglong)uVar7;
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (int)(uVar9 >> 1) + uVar12;
        uVar10 = (uint)uVar9;
        if (*(int *)(lVar13 + (ulonglong)uVar11 * 8) < param_2) {
          uVar12 = uVar11 + (uVar10 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar10);
    }
    if (((int)uVar12 < (int)uVar7) && (*(int *)(lVar13 + (ulonglong)uVar12 * 8) <= param_2)) {
      if (~uVar12 + uVar7 != 0) {
        pvVar1 = (void *)(lVar13 + (ulonglong)uVar12 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147673af0(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar12 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (uVar12 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 8) < param_2) {
          uVar10 = uVar11 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 8) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar1 = (void *)(lVar4 + (ulonglong)uVar10 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar10 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147673af0(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + lVar13 * 0xc);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_1476732af:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1476733cc FUN_1476733cc body=436 status=ok
// SIG undefined FUN_1476733cc(void)

void FUN_1476733cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong lStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x18;
  lStack_40 = param_1 + 0x28;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80 = local_48;
  lStack_78 = lStack_40;
  local_50 = 0;
  local_88 = lVar1;
  local_60 = lVar1;
  local_58 = lVar1;
  if (iStack_34 < *(int *)(lStack_40 + 0x18)) {
    do {
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14766abba(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
    }
  }
  lVar1 = param_1 + 0x68;
  lVar2 = param_1 + 0x78;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  lStack_40 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80._0_4_ = (undefined4)local_48;
  local_80._4_4_ = local_48._4_4_;
  lStack_78 = lStack_40;
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_88 = lVar1;
  if ((iStack_34 != iVar3) || (lStack_40 != lVar2)) {
    do {
      do {
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((lStack_78 != lVar2) || (local_88 != lVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147673582 FUN_147673582 body=322 status=ok
// SIG undefined FUN_147673582(void)

void FUN_147673582(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar3 & 1) != 0) {
    uVar1 = *param_2;
    uVar4 = FUN_140732858();
    if (0 < (int)uVar1) {
      local_78 = param_1 + -0xd8;
      local_80 = param_1 + -0x10;
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_5 + uVar5 * 8);
        local_68 = 0;
        if (lVar2 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar2);
          local_68 = local_60;
        }
        FUN_14027461a(local_80,&local_6c,lVar2);
        FUN_147673b92(local_78,&local_70,&local_68);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
        local_60 = CONCAT44(*(undefined4 *)(param_1 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar3;
        FUN_1449da5a2(uVar4,&local_4a,&local_60);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476736c6 FUN_1476736c6 body=180 status=ok
// SIG undefined FUN_1476736c6(void)

void FUN_1476736c6(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) != 0) || (param_3 != '\0')) {
    uVar1 = FUN_140732858();
    FUN_147673d7e(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767377c FUN_14767377c body=88 status=ok
// SIG undefined FUN_14767377c(void)

void FUN_14767377c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_147673e26(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1476737d4 FUN_1476737d4 body=38 status=ok
// SIG undefined FUN_1476737d4(void)

undefined8 FUN_1476737d4(undefined8 param_1,int param_2)

{
  FUN_1476738ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147673806 FUN_147673806 body=38 status=ok
// SIG undefined FUN_147673806(void)

undefined8 FUN_147673806(undefined8 param_1,int param_2)

{
  FUN_1476738ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767382c FUN_14767382c body=52 status=ok
// SIG undefined FUN_14767382c(void)

void FUN_14767382c(longlong *param_1)

{
  FUN_147673860();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147673860 FUN_147673860 body=89 status=ok
// SIG undefined FUN_147673860(void)

void FUN_147673860(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 1476738ba FUN_1476738ba body=155 status=ok
// SIG undefined FUN_1476738ba(void)

void FUN_1476738ba(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d7390;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14767382c(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147673949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147673956 FUN_147673956 body=135 status=ok
// SIG undefined FUN_147673956(void)

void FUN_147673956(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476739de FUN_1476739de body=146 status=ok
// SIG undefined FUN_1476739de(void)

void FUN_1476739de(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_14 = param_1[1];
  lVar2 = FUN_14479d2ce(&local_18);
  if (lVar2 != 0) {
    lVar3 = FUN_1411080a4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_147990588(lVar2);
      if (cVar1 == '\0') {
        FUN_147990662(lVar2,1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147673a7e FUN_147673a7e body=114 status=ok
// SIG undefined FUN_147673a7e(void)

void FUN_147673a7e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 147673af0 FUN_147673af0 body=63 status=ok
// SIG undefined FUN_147673af0(void)

void FUN_147673af0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147673b30(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147673b30 FUN_147673b30 body=97 status=ok
// SIG undefined FUN_147673b30(void)

ulonglong FUN_147673b30(undefined8 param_1,uint param_2,uint param_3)

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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147673b92 FUN_147673b92 body=261 status=ok
// SIG undefined FUN_147673b92(void)

int * FUN_147673b92(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  int *local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(lVar4 + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], *param_2 = iVar5, iVar5 != -1))
          goto LAB_147673c70;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(undefined8 *)param_3;
  FUN_147673c98(param_1 + 0x68,&local_48);
  *(undefined8 *)local_40 = uVar2;
  *(undefined1 *)((longlong)local_40 + 9) = 0;
  *param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_48,0);
LAB_147673c70:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147673c98 FUN_147673c98 body=230 status=ok
// SIG undefined FUN_147673c98(void)

int * FUN_147673c98(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 147673d7e FUN_147673d7e body=167 status=ok
// SIG undefined FUN_147673d7e(void)

longlong FUN_147673d7e(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_147673b92(param_1,&local_30,&local_38);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147673e26 FUN_147673e26 body=134 status=ok
// SIG undefined FUN_147673e26(void)

void FUN_147673e26(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  cVar1 = FUN_147673eae();
  if (cVar1 != '\0') {
    FUN_147673d7e(param_1,local_34,param_3);
    if (**(int **)(param_1 + 0xb0) != 0) {
      thunk_FUN_140adeba6(*(int **)(param_1 + 0xb0),local_34);
    }
    FUN_147673f30(param_1,param_2,local_34);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147673eae FUN_147673eae body=129 status=ok
// SIG undefined FUN_147673eae(void)

byte FUN_147673eae(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_147673fd0(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 147673f30 FUN_147673f30 body=159 status=ok
// SIG undefined FUN_147673f30(void)

void FUN_147673f30(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_3 + 8);
  lVar4 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),param_3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0));
  }
  cVar3 = FUN_14767410e(param_1,iVar2,uVar5);
  if (cVar3 == '\0') {
    local_29 = 1;
    FUN_1476741a0(param_1,iVar2,uVar5);
  }
  if (*param_2 == '\x01') {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)iVar2 * 0xc);
    *pbVar1 = *pbVar1 | 2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147673fd0 FUN_147673fd0 body=171 status=ok
// SIG undefined FUN_147673fd0(void)

longlong FUN_147673fd0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14767407c(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767407c FUN_14767407c body=145 status=ok
// SIG undefined FUN_14767407c(void)

int * FUN_14767407c(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 14767410e FUN_14767410e body=146 status=ok
// SIG undefined FUN_14767410e(void)

ulonglong FUN_14767410e(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 9);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 9));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476741a0 FUN_1476741a0 body=134 status=ok
// SIG undefined FUN_1476741a0(void)

void FUN_1476741a0(longlong param_1,int param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = *param_4;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      FUN_147674228(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(lVar1 + 8) = *param_4;
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147674228 FUN_147674228 body=199 status=ok
// SIG undefined FUN_147674228(void)

int * FUN_147674228(longlong *param_1,int *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_1476742c1;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476742f0(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_1476742c1:
  *piVar9 = iVar5;
  *(undefined1 *)(piVar9 + 1) = *param_3;
  return piVar9 + 1;
}



// FUNCTION 1476742f0 FUN_1476742f0 body=132 status=ok
// SIG undefined FUN_1476742f0(void)

void FUN_1476742f0(longlong param_1,int param_2)

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



// FUNCTION 147674376 FUN_147674376 body=167 status=ok
// SIG undefined FUN_147674376(void)

void FUN_147674376(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476743f1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476743f1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1476743f1:
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
                    /* WARNING: Could not recover jumptable at 0x000147674411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14767441e FUN_14767441e body=436 status=ok
// SIG undefined FUN_14767441e(void)

longlong * FUN_14767441e(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1476745d4();
  if (*param_2 != 0) goto LAB_14767444c;
  plVar3 = (longlong *)FUN_14001cc68(0xf0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d73e0;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xd0);
  FUN_14767476a(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a4d7400;
  plVar3[0x1d] = (longlong)&PTR_FUN_14a4d7450;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_147675b7e(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_147674598:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147674588:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x000147674588;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_147674598;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_147674688(param_1,param_3,&local_50);
LAB_14767444c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476745d4 FUN_1476745d4 body=179 status=ok
// SIG undefined FUN_1476745d4(void)

undefined8 * FUN_1476745d4(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14767462e;
    }
  }
  uVar6 = 0;
LAB_14767462e:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147674688 FUN_147674688 body=184 status=ok
// SIG undefined FUN_147674688(void)

void FUN_147674688(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147674742 FUN_147674742 body=9 status=ok
// SIG undefined FUN_147674742(void)

void FUN_147674742(longlong param_1)

{
  FUN_1476752c0(param_1 + 0x10);
  return;
}



// FUNCTION 14767474c FUN_14767474c body=29 status=ok
// SIG undefined FUN_14767474c(void)

undefined8 FUN_14767474c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767476a FUN_14767476a body=134 status=ok
// SIG undefined FUN_14767476a(void)

void FUN_14767476a(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7470;
  param_1[0x1b] = &PTR_FUN_14a4d74c0;
  return;
}



// FUNCTION 1476747f0 FUN_1476747f0 body=38 status=ok
// SIG undefined FUN_1476747f0(void)

undefined8 FUN_1476747f0(undefined8 param_1,int param_2)

{
  FUN_1476752c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147674822 FUN_147674822 body=25 status=ok
// SIG undefined FUN_147674822(void)

void FUN_147674822(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 14767483c FUN_14767483c body=62 status=ok
// SIG undefined FUN_14767483c(void)

void FUN_14767483c(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_14767535c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767487c FUN_14767487c body=910 status=ok
// SIG undefined FUN_14767487c(void)

ulonglong FUN_14767487c(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar7 == '\0') goto LAB_1476748ef;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      local_38 = *(uint *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0xc);
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      FUN_140d0e176(param_1 + 0x18);
      FUN_147675476(param_1 + 0x68,param_2);
      uVar8 = *(uint *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar8 != 0) {
          pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
          memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar8 - 1;
LAB_147674c01:
        FUN_147673af0(param_1 + 0xa0);
      }
LAB_147674a59:
      if ((local_38 & 0x100) != 0) {
        FUN_1476753e4(&local_40);
      }
      unaff_RBP = 0;
      goto LAB_1476748ef;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc) & 1) == 0)
    goto LAB_1476748ef;
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    uVar10 = 0;
    if (0 < (int)uVar8) {
      uVar12 = (ulonglong)uVar8;
      uVar13 = uVar8;
      do {
        uVar12 = uVar12 >> 1;
        uVar14 = (uint)uVar12 + (int)uVar10;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 8) < param_2) {
          uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
        }
        bVar6 = 1 < uVar13;
        uVar13 = (uint)uVar12;
      } while (bVar6);
    }
    if (((int)uVar10 < (int)uVar8) &&
       (piVar2 = (int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 8),
       piVar2 != (int *)0xfffffffffffffffc && *piVar2 <= param_2)) {
      FUN_1476753e4((longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68));
      uVar8 = *(uint *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      unaff_RBP = CONCAT71(uVar11,1);
      if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar8 != 0) {
          pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
          memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar8 - 1;
        FUN_147673af0(param_1 + 0xa0);
      }
      goto LAB_1476748ef;
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\x01') {
      bVar4 = *(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc);
      if ((bVar4 & 1) == 0) goto LAB_1476748ef;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      *(byte *)((longlong)puVar9 + 9) = bVar4 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476748ef;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      if ((*(byte *)((longlong)puVar9 + 9) & 2) == 0) {
        local_38 = *(uint *)(puVar9 + 1);
        local_40 = *puVar9;
        FUN_140d0e176(param_1 + 0x18);
        FUN_147675476(param_1 + 0x68,param_2);
        uVar8 = *(uint *)(param_1 + 0xa8);
        lVar5 = *(longlong *)(param_1 + 0xa0);
        uVar14 = 0;
        uVar13 = uVar8;
        if (0 < (int)uVar8) {
          do {
            uVar1 = (uVar13 >> 1) + uVar14;
            if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
              uVar14 = uVar1 + (uVar13 & 1);
            }
            bVar6 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
          } while (bVar6);
        }
        if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
          if (~uVar14 + uVar8 != 0) {
            pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
            memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
            uVar8 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar8 - 1;
          goto LAB_147674c01;
        }
        goto LAB_147674a59;
      }
      if ((*(byte *)((longlong)puVar9 + 9) & 1) == 0) goto LAB_1476748ef;
    }
  }
  FUN_1476753e4(puVar9);
LAB_1476748ef:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147674c0c FUN_147674c0c body=444 status=ok
// SIG undefined FUN_147674c0c(void)

undefined8 FUN_147674c0c(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  lVar13 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar13 * 0xc + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_147674cb5;
  }
  if (param_3 == '\x01') {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 0xc);
    FUN_140d0e176(param_1 + 0x18);
    FUN_147675476(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    uVar9 = (ulonglong)uVar7;
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (int)(uVar9 >> 1) + uVar12;
        uVar10 = (uint)uVar9;
        if (*(int *)(lVar13 + (ulonglong)uVar11 * 8) < param_2) {
          uVar12 = uVar11 + (uVar10 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar10);
    }
    if (((int)uVar12 < (int)uVar7) && (*(int *)(lVar13 + (ulonglong)uVar12 * 8) <= param_2)) {
      if (~uVar12 + uVar7 != 0) {
        pvVar1 = (void *)(lVar13 + (ulonglong)uVar12 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147673af0(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar12 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (uVar12 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 8) < param_2) {
          uVar10 = uVar11 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 8) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar1 = (void *)(lVar4 + (ulonglong)uVar10 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar10 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147673af0(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + lVar13 * 0xc);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_147674cb5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147674dd2 FUN_147674dd2 body=436 status=ok
// SIG undefined FUN_147674dd2(void)

void FUN_147674dd2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong lStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x18;
  lStack_40 = param_1 + 0x28;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80 = local_48;
  lStack_78 = lStack_40;
  local_50 = 0;
  local_88 = lVar1;
  local_60 = lVar1;
  local_58 = lVar1;
  if (iStack_34 < *(int *)(lStack_40 + 0x18)) {
    do {
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14766abba(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
    }
  }
  lVar1 = param_1 + 0x68;
  lVar2 = param_1 + 0x78;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  lStack_40 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80._0_4_ = (undefined4)local_48;
  local_80._4_4_ = local_48._4_4_;
  lStack_78 = lStack_40;
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_88 = lVar1;
  if ((iStack_34 != iVar3) || (lStack_40 != lVar2)) {
    do {
      do {
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((lStack_78 != lVar2) || (local_88 != lVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147674f88 FUN_147674f88 body=322 status=ok
// SIG undefined FUN_147674f88(void)

void FUN_147674f88(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar3 & 1) != 0) {
    uVar1 = *param_2;
    uVar4 = FUN_140732858();
    if (0 < (int)uVar1) {
      local_78 = param_1 + -0xd8;
      local_80 = param_1 + -0x10;
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_5 + uVar5 * 8);
        local_68 = 0;
        if (lVar2 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar2);
          local_68 = local_60;
        }
        FUN_14027461a(local_80,&local_6c,lVar2);
        FUN_1476754e8(local_78,&local_70,&local_68);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
        local_60 = CONCAT44(*(undefined4 *)(param_1 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar3;
        FUN_1449da5a2(uVar4,&local_4a,&local_60);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476750cc FUN_1476750cc body=180 status=ok
// SIG undefined FUN_1476750cc(void)

void FUN_1476750cc(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) != 0) || (param_3 != '\0')) {
    uVar1 = FUN_140732858();
    FUN_1476756d4(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675182 FUN_147675182 body=88 status=ok
// SIG undefined FUN_147675182(void)

void FUN_147675182(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_14767577c(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1476751da FUN_1476751da body=38 status=ok
// SIG undefined FUN_1476751da(void)

undefined8 FUN_1476751da(undefined8 param_1,int param_2)

{
  FUN_1476752c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767520c FUN_14767520c body=38 status=ok
// SIG undefined FUN_14767520c(void)

undefined8 FUN_14767520c(undefined8 param_1,int param_2)

{
  FUN_1476752c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147675232 FUN_147675232 body=52 status=ok
// SIG undefined FUN_147675232(void)

void FUN_147675232(longlong *param_1)

{
  FUN_147675266();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147675266 FUN_147675266 body=89 status=ok
// SIG undefined FUN_147675266(void)

void FUN_147675266(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 1476752c0 FUN_1476752c0 body=155 status=ok
// SIG undefined FUN_1476752c0(void)

void FUN_1476752c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d74e0;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147675232(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014767534f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14767535c FUN_14767535c body=135 status=ok
// SIG undefined FUN_14767535c(void)

void FUN_14767535c(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476753e4 FUN_1476753e4 body=132 status=ok
// SIG undefined FUN_1476753e4(void)

void FUN_1476753e4(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_14 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_144a79bde();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14798ead6(lVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675476 FUN_147675476 body=114 status=ok
// SIG undefined FUN_147675476(void)

void FUN_147675476(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 1476754e8 FUN_1476754e8 body=261 status=ok
// SIG undefined FUN_1476754e8(void)

int * FUN_1476754e8(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  int *local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(lVar4 + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], *param_2 = iVar5, iVar5 != -1))
          goto LAB_1476755c6;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(undefined8 *)param_3;
  FUN_1476755ee(param_1 + 0x68,&local_48);
  *(undefined8 *)local_40 = uVar2;
  *(undefined1 *)((longlong)local_40 + 9) = 0;
  *param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_48,0);
LAB_1476755c6:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476755ee FUN_1476755ee body=230 status=ok
// SIG undefined FUN_1476755ee(void)

int * FUN_1476755ee(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1476756d4 FUN_1476756d4 body=167 status=ok
// SIG undefined FUN_1476756d4(void)

longlong FUN_1476756d4(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_1476754e8(param_1,&local_30,&local_38);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767577c FUN_14767577c body=134 status=ok
// SIG undefined FUN_14767577c(void)

void FUN_14767577c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  cVar1 = FUN_147675804();
  if (cVar1 != '\0') {
    FUN_1476756d4(param_1,local_34,param_3);
    if (**(int **)(param_1 + 0xb0) != 0) {
      thunk_FUN_140adeba6(*(int **)(param_1 + 0xb0),local_34);
    }
    FUN_147675886(param_1,param_2,local_34);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675804 FUN_147675804 body=129 status=ok
// SIG undefined FUN_147675804(void)

byte FUN_147675804(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_147675926(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 147675886 FUN_147675886 body=159 status=ok
// SIG undefined FUN_147675886(void)

void FUN_147675886(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_3 + 8);
  lVar4 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),param_3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0));
  }
  cVar3 = FUN_147675a64(param_1,iVar2,uVar5);
  if (cVar3 == '\0') {
    local_29 = 1;
    FUN_147675af6(param_1,iVar2,uVar5);
  }
  if (*param_2 == '\x01') {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)iVar2 * 0xc);
    *pbVar1 = *pbVar1 | 2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675926 FUN_147675926 body=171 status=ok
// SIG undefined FUN_147675926(void)

longlong FUN_147675926(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1476759d2(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476759d2 FUN_1476759d2 body=145 status=ok
// SIG undefined FUN_1476759d2(void)

int * FUN_1476759d2(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 147675a64 FUN_147675a64 body=146 status=ok
// SIG undefined FUN_147675a64(void)

ulonglong FUN_147675a64(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 9);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 9));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 147675af6 FUN_147675af6 body=134 status=ok
// SIG undefined FUN_147675af6(void)

void FUN_147675af6(longlong param_1,int param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = *param_4;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      FUN_147674228(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(lVar1 + 8) = *param_4;
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675b7e FUN_147675b7e body=167 status=ok
// SIG undefined FUN_147675b7e(void)

void FUN_147675b7e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147675bf9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147675bf9;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147675bf9:
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
                    /* WARNING: Could not recover jumptable at 0x000147675c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147675c26 FUN_147675c26 body=436 status=ok
// SIG undefined FUN_147675c26(void)

longlong * FUN_147675c26(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147675ddc();
  if (*param_2 != 0) goto LAB_147675c54;
  plVar3 = (longlong *)FUN_14001cc68(0xf0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d7530;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xd0);
  FUN_147675f72(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a4d7550;
  plVar3[0x1d] = (longlong)&PTR_FUN_14a4d75a0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_147677380(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_147675da0:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147675d90:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x000147675d90;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_147675da0;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_147675e90(param_1,param_3,&local_50);
LAB_147675c54:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675ddc FUN_147675ddc body=179 status=ok
// SIG undefined FUN_147675ddc(void)

undefined8 * FUN_147675ddc(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_147675e36;
    }
  }
  uVar6 = 0;
LAB_147675e36:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147675e90 FUN_147675e90 body=184 status=ok
// SIG undefined FUN_147675e90(void)

void FUN_147675e90(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147675f4a FUN_147675f4a body=9 status=ok
// SIG undefined FUN_147675f4a(void)

void FUN_147675f4a(longlong param_1)

{
  FUN_147676ac8(param_1 + 0x10);
  return;
}



// FUNCTION 147675f54 FUN_147675f54 body=29 status=ok
// SIG undefined FUN_147675f54(void)

undefined8 FUN_147675f54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147675f72 FUN_147675f72 body=134 status=ok
// SIG undefined FUN_147675f72(void)

void FUN_147675f72(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d75c0;
  param_1[0x1b] = &PTR_FUN_14a4d7610;
  return;
}



// FUNCTION 147675ff8 FUN_147675ff8 body=38 status=ok
// SIG undefined FUN_147675ff8(void)

undefined8 FUN_147675ff8(undefined8 param_1,int param_2)

{
  FUN_147676ac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767602a FUN_14767602a body=25 status=ok
// SIG undefined FUN_14767602a(void)

void FUN_14767602a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 147676044 FUN_147676044 body=62 status=ok
// SIG undefined FUN_147676044(void)

void FUN_147676044(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_147676b64();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147676084 FUN_147676084 body=910 status=ok
// SIG undefined FUN_147676084(void)

ulonglong FUN_147676084(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar7 == '\0') goto LAB_1476760f7;
  }
  uVar11 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      local_38 = *(uint *)(*(longlong *)(param_1 + 0x68) + 8 + (longlong)param_2 * 0xc);
      local_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      FUN_140d0e176(param_1 + 0x18);
      FUN_147676c78(param_1 + 0x68,param_2);
      uVar8 = *(uint *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar8 != 0) {
          pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
          memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar8 - 1;
LAB_147676409:
        FUN_147673af0(param_1 + 0xa0);
      }
LAB_147676261:
      if ((local_38 & 0x100) != 0) {
        FUN_147676bec(&local_40);
      }
      unaff_RBP = 0;
      goto LAB_1476760f7;
    }
    unaff_RBP = CONCAT71(uVar11,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc) & 1) == 0)
    goto LAB_1476760f7;
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xa8);
    uVar10 = 0;
    if (0 < (int)uVar8) {
      uVar12 = (ulonglong)uVar8;
      uVar13 = uVar8;
      do {
        uVar12 = uVar12 >> 1;
        uVar14 = (uint)uVar12 + (int)uVar10;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 8) < param_2) {
          uVar10 = (ulonglong)(uVar14 + (uVar13 & 1));
        }
        bVar6 = 1 < uVar13;
        uVar13 = (uint)uVar12;
      } while (bVar6);
    }
    if (((int)uVar10 < (int)uVar8) &&
       (piVar2 = (int *)(*(longlong *)(param_1 + 0xa0) + uVar10 * 8),
       piVar2 != (int *)0xfffffffffffffffc && *piVar2 <= param_2)) {
      FUN_147676bec((longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68));
      uVar8 = *(uint *)(param_1 + 0xa8);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      uVar14 = 0;
      uVar13 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar6 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar6);
      }
      unaff_RBP = CONCAT71(uVar11,1);
      if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
        if (~uVar14 + uVar8 != 0) {
          pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
          memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
          uVar8 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar8 - 1;
        FUN_147673af0(param_1 + 0xa0);
      }
      goto LAB_1476760f7;
    }
    unaff_RBP = CONCAT71(uVar11,1);
    if (param_4 == '\x01') {
      bVar4 = *(byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)param_2 * 0xc);
      if ((bVar4 & 1) == 0) goto LAB_1476760f7;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      *(byte *)((longlong)puVar9 + 9) = bVar4 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476760f7;
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
      if ((*(byte *)((longlong)puVar9 + 9) & 2) == 0) {
        local_38 = *(uint *)(puVar9 + 1);
        local_40 = *puVar9;
        FUN_140d0e176(param_1 + 0x18);
        FUN_147676c78(param_1 + 0x68,param_2);
        uVar8 = *(uint *)(param_1 + 0xa8);
        lVar5 = *(longlong *)(param_1 + 0xa0);
        uVar14 = 0;
        uVar13 = uVar8;
        if (0 < (int)uVar8) {
          do {
            uVar1 = (uVar13 >> 1) + uVar14;
            if (*(int *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
              uVar14 = uVar1 + (uVar13 & 1);
            }
            bVar6 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
          } while (bVar6);
        }
        if (((int)uVar14 < (int)uVar8) && (*(int *)(lVar5 + (ulonglong)uVar14 * 8) <= param_2)) {
          if (~uVar14 + uVar8 != 0) {
            pvVar3 = (void *)(lVar5 + (ulonglong)uVar14 * 8);
            memmove(pvVar3,(void *)((longlong)pvVar3 + 8),(longlong)(int)(~uVar14 + uVar8) << 3);
            uVar8 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar8 - 1;
          goto LAB_147676409;
        }
        goto LAB_147676261;
      }
      if ((*(byte *)((longlong)puVar9 + 9) & 1) == 0) goto LAB_1476760f7;
    }
  }
  FUN_147676bec(puVar9);
LAB_1476760f7:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147676414 FUN_147676414 body=444 status=ok
// SIG undefined FUN_147676414(void)

undefined8 FUN_147676414(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  lVar13 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar13 * 0xc + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_1476764bd;
  }
  if (param_3 == '\x01') {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 0xc);
    FUN_140d0e176(param_1 + 0x18);
    FUN_147676c78(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    uVar9 = (ulonglong)uVar7;
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (int)(uVar9 >> 1) + uVar12;
        uVar10 = (uint)uVar9;
        if (*(int *)(lVar13 + (ulonglong)uVar11 * 8) < param_2) {
          uVar12 = uVar11 + (uVar10 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar10);
    }
    if (((int)uVar12 < (int)uVar7) && (*(int *)(lVar13 + (ulonglong)uVar12 * 8) <= param_2)) {
      if (~uVar12 + uVar7 != 0) {
        pvVar1 = (void *)(lVar13 + (ulonglong)uVar12 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147673af0(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar12 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (uVar12 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 8) < param_2) {
          uVar10 = uVar11 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 8) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar1 = (void *)(lVar4 + (ulonglong)uVar10 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar10 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_147673af0(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + lVar13 * 0xc);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_1476764bd:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1476765da FUN_1476765da body=436 status=ok
// SIG undefined FUN_1476765da(void)

void FUN_1476765da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong lStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x18;
  lStack_40 = param_1 + 0x28;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80 = local_48;
  lStack_78 = lStack_40;
  local_50 = 0;
  local_88 = lVar1;
  local_60 = lVar1;
  local_58 = lVar1;
  if (iStack_34 < *(int *)(lStack_40 + 0x18)) {
    do {
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14766abba(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
    }
  }
  lVar1 = param_1 + 0x68;
  lVar2 = param_1 + 0x78;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  lStack_40 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80._0_4_ = (undefined4)local_48;
  local_80._4_4_ = local_48._4_4_;
  lStack_78 = lStack_40;
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_88 = lVar1;
  if ((iStack_34 != iVar3) || (lStack_40 != lVar2)) {
    do {
      do {
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((lStack_78 != lVar2) || (local_88 != lVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147676790 FUN_147676790 body=322 status=ok
// SIG undefined FUN_147676790(void)

void FUN_147676790(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar3 & 1) != 0) {
    uVar1 = *param_2;
    uVar4 = FUN_140732858();
    if (0 < (int)uVar1) {
      local_78 = param_1 + -0xd8;
      local_80 = param_1 + -0x10;
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_5 + uVar5 * 8);
        local_68 = 0;
        if (lVar2 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar2);
          local_68 = local_60;
        }
        FUN_14027461a(local_80,&local_6c,lVar2);
        FUN_147676cea(local_78,&local_70,&local_68);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
        local_60 = CONCAT44(*(undefined4 *)(param_1 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar3;
        FUN_1449da5a2(uVar4,&local_4a,&local_60);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476768d4 FUN_1476768d4 body=180 status=ok
// SIG undefined FUN_1476768d4(void)

void FUN_1476768d4(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) != 0) || (param_3 != '\0')) {
    uVar1 = FUN_140732858();
    FUN_147676ed6(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767698a FUN_14767698a body=88 status=ok
// SIG undefined FUN_14767698a(void)

void FUN_14767698a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_147676f7e(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1476769e2 FUN_1476769e2 body=38 status=ok
// SIG undefined FUN_1476769e2(void)

undefined8 FUN_1476769e2(undefined8 param_1,int param_2)

{
  FUN_147676ac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147676a14 FUN_147676a14 body=38 status=ok
// SIG undefined FUN_147676a14(void)

undefined8 FUN_147676a14(undefined8 param_1,int param_2)

{
  FUN_147676ac8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147676a3a FUN_147676a3a body=52 status=ok
// SIG undefined FUN_147676a3a(void)

void FUN_147676a3a(longlong *param_1)

{
  FUN_147676a6e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147676a6e FUN_147676a6e body=89 status=ok
// SIG undefined FUN_147676a6e(void)

void FUN_147676a6e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
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



// FUNCTION 147676ac8 FUN_147676ac8 body=155 status=ok
// SIG undefined FUN_147676ac8(void)

void FUN_147676ac8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d7630;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147676a3a(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147676b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147676b64 FUN_147676b64 body=135 status=ok
// SIG undefined FUN_147676b64(void)

void FUN_147676b64(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0xc) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147676bec FUN_147676bec body=124 status=ok
// SIG undefined FUN_147676bec(void)

void FUN_147676bec(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_14 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_1411e5cd6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147676c78 FUN_147676c78 body=114 status=ok
// SIG undefined FUN_147676c78(void)

void FUN_147676c78(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 147676cea FUN_147676cea body=261 status=ok
// SIG undefined FUN_147676cea(void)

int * FUN_147676cea(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  int *local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(lVar4 + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], *param_2 = iVar5, iVar5 != -1))
          goto LAB_147676dc8;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(undefined8 *)param_3;
  FUN_147676df0(param_1 + 0x68,&local_48);
  *(undefined8 *)local_40 = uVar2;
  *(undefined1 *)((longlong)local_40 + 9) = 0;
  *param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_48,0);
LAB_147676dc8:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147676df0 FUN_147676df0 body=230 status=ok
// SIG undefined FUN_147676df0(void)

int * FUN_147676df0(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 147676ed6 FUN_147676ed6 body=167 status=ok
// SIG undefined FUN_147676ed6(void)

longlong FUN_147676ed6(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_147676cea(param_1,&local_30,&local_38);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147676f7e FUN_147676f7e body=134 status=ok
// SIG undefined FUN_147676f7e(void)

void FUN_147676f7e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  cVar1 = FUN_147677006();
  if (cVar1 != '\0') {
    FUN_147676ed6(param_1,local_34,param_3);
    if (**(int **)(param_1 + 0xb0) != 0) {
      thunk_FUN_140adeba6(*(int **)(param_1 + 0xb0),local_34);
    }
    FUN_147677088(param_1,param_2,local_34);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147677006 FUN_147677006 body=129 status=ok
// SIG undefined FUN_147677006(void)

byte FUN_147677006(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_147677128(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 147677088 FUN_147677088 body=159 status=ok
// SIG undefined FUN_147677088(void)

void FUN_147677088(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_3 + 8);
  lVar4 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),param_3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0));
  }
  cVar3 = FUN_147677266(param_1,iVar2,uVar5);
  if (cVar3 == '\0') {
    local_29 = 1;
    FUN_1476772f8(param_1,iVar2,uVar5);
  }
  if (*param_2 == '\x01') {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 9 + (longlong)iVar2 * 0xc);
    *pbVar1 = *pbVar1 | 2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147677128 FUN_147677128 body=171 status=ok
// SIG undefined FUN_147677128(void)

longlong FUN_147677128(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1476771d4(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476771d4 FUN_1476771d4 body=145 status=ok
// SIG undefined FUN_1476771d4(void)

int * FUN_1476771d4(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 147677266 FUN_147677266 body=146 status=ok
// SIG undefined FUN_147677266(void)

ulonglong FUN_147677266(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 9);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 9));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476772f8 FUN_1476772f8 body=134 status=ok
// SIG undefined FUN_1476772f8(void)

void FUN_1476772f8(longlong param_1,int param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = *param_4;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      FUN_147674228(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(lVar1 + 8) = *param_4;
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147677380 FUN_147677380 body=167 status=ok
// SIG undefined FUN_147677380(void)

void FUN_147677380(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476773fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476773fb;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1476773fb:
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
                    /* WARNING: Could not recover jumptable at 0x00014767741b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147677428 FUN_147677428 body=322 status=ok
// SIG undefined FUN_147677428(void)

void FUN_147677428(longlong *param_1)

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



// FUNCTION 14767756c FUN_14767756c body=285 status=ok
// SIG undefined FUN_14767756c(void)

void FUN_14767756c(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767768a FUN_14767768a body=198 status=ok
// SIG undefined FUN_14767768a(void)

void FUN_14767768a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 8);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147677752 FUN_147677752 body=176 status=ok
// SIG undefined FUN_147677752(void)

void FUN_147677752(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(param_1 + 0x58)) {
      uVar3 = *(ulonglong *)(param_1 + 0x58);
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x60) == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476777f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147677802 FUN_147677802 body=236 status=ok
// SIG undefined FUN_147677802(void)

undefined8
FUN_147677802(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476778f0 FUN_1476778f0 body=181 status=ok
// SIG undefined FUN_1476778f0(void)

longlong FUN_1476778f0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147677988;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1476779a6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147677988:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1476779a6 FUN_1476779a6 body=269 status=ok
// SIG undefined FUN_1476779a6(void)

undefined4 * FUN_1476779a6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147677ab4(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_147677b9a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[7] = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147677caa(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147677ab4 FUN_147677ab4 body=229 status=ok
// SIG undefined FUN_147677ab4(void)

int * FUN_147677ab4(longlong *param_1,int *param_2)

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



// FUNCTION 147677b9a FUN_147677b9a body=157 status=ok
// SIG undefined FUN_147677b9a(void)

undefined8 FUN_147677b9a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147677c38(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147677c38 FUN_147677c38 body=114 status=ok
// SIG undefined FUN_147677c38(void)

void FUN_147677c38(longlong *param_1,int param_2)

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



// FUNCTION 147677caa FUN_147677caa body=413 status=ok
// SIG undefined FUN_147677caa(void)

void FUN_147677caa(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 147677e48 FUN_147677e48 body=132 status=ok
// SIG undefined FUN_147677e48(void)

void FUN_147677e48(longlong param_1,int param_2)

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



// FUNCTION 147677ece FUN_147677ece body=132 status=ok
// SIG undefined FUN_147677ece(void)

void FUN_147677ece(longlong param_1,int param_2)

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



// FUNCTION 147677f54 FUN_147677f54 body=63 status=ok
// SIG undefined FUN_147677f54(void)

void FUN_147677f54(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145eec63e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147677caa(param_1);
    return;
  }
  FUN_147677428(param_1);
  FUN_145eec63e(param_1);
  return;
}



// FUNCTION 147677f94 FUN_147677f94 body=223 status=ok
// SIG undefined FUN_147677f94(void)

undefined8 FUN_147677f94(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 147678074 FUN_147678074 body=255 status=ok
// SIG undefined FUN_147678074(void)

void FUN_147678074(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147678174 FUN_147678174 body=197 status=ok
// SIG undefined FUN_147678174(void)

void FUN_147678174(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[3];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767823a FUN_14767823a body=632 status=ok
// SIG undefined FUN_14767823a(void)

void FUN_14767823a(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_3[3]) goto LAB_147678287;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147678287:
  local_c4 = *(int *)(lVar3 + 0x14);
  if (local_c4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_3[2]) goto LAB_1476782c1;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476782c1:
  local_b8 = *puVar10;
  local_c8 = *(int *)(lVar3 + 0x14);
  if (local_c8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_3[1]) goto LAB_147678304;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_147678304:
  uVar4 = *puVar8;
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_3) goto LAB_147678350;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147678350:
  uVar5 = *puVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  local_d8 = uVar4;
  local_b0 = param_1;
  if (iVar2 == 1) {
    local_c0 = uVar4;
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
    local_d8 = local_c0;
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_98 = *puVar9;
  local_70 = local_c8;
  local_58 = local_c4;
  local_50 = local_b8;
  local_d0 = local_b8;
  local_a8 = puVar9;
  local_a0 = iVar2;
  local_90 = puVar7;
  local_88 = iVar1;
  local_80 = uVar5;
  local_78 = puVar8;
  local_68 = local_d8;
  local_60 = puVar10;
  FUN_1476784b4(local_b0,*(undefined8 *)
                          (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_98,
                uVar5);
  FUN_147678550(&local_a8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476784b4 FUN_1476784b4 body=156 status=ok
// SIG undefined FUN_1476784b4(void)

void FUN_1476784b4(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(ushort *)(param_3 + uVar5 * 4);
      lVar3 = *(longlong *)(*param_1 + 8);
      lVar4 = FUN_141179630(*(undefined8 *)(param_4 + uVar5 * 8));
      if (lVar4 != 0) {
        FUN_1476785e8(param_1,lVar4,param_5,param_6,lVar3 + (ulonglong)uVar2 * 0x128);
      }
      uVar5 = uVar5 + 1;
      param_5 = param_5 + 0x40;
      param_6 = param_6 + 0x20;
    } while (uVar1 != uVar5);
  }
  return;
}



// FUNCTION 147678550 FUN_147678550 body=151 status=ok
// SIG undefined FUN_147678550(void)

void FUN_147678550(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476785d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476785e8 FUN_1476785e8 body=3045 status=ok
// SIG undefined FUN_1476785e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1476785e8(longlong param_1,ulonglong param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_d78 [40];
  undefined4 local_d50;
  undefined4 local_d4c;
  double local_d48;
  double dStack_d40;
  undefined1 local_d38 [16];
  double local_d28;
  double dStack_d20;
  undefined1 local_d18 [16];
  double local_d08;
  double dStack_d00;
  double local_cf8;
  double dStack_cf0;
  undefined4 local_ce8;
  undefined4 uStack_ce4;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined1 local_cd8 [16];
  ulonglong local_cc0;
  double local_cb8;
  double dStack_cb0;
  double local_ca8;
  double dStack_ca0;
  double local_c98;
  double dStack_c90;
  double local_c88;
  double local_c80;
  double dStack_c78;
  double local_c70;
  undefined4 local_c68;
  float local_bf0;
  longlong local_3c0;
  longlong local_338;
  char local_2a8;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
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
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
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
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_d78;
  uVar4 = SUB84(&local_c98,0);
  local_cc0 = param_2;
  dVar6 = (double)FUN_1400e6e60();
  local_c98 = *(double *)(param_2 + 0x260);
  dStack_c90 = *(double *)(param_2 + 0x268);
  local_c88 = *(double *)(param_2 + 0x270);
  dVar35 = *(double *)(param_2 + 0x240);
  dVar30 = *(double *)(param_2 + 0x248);
  dVar23 = *(double *)(param_2 + 0x250);
  dVar31 = *(double *)(param_2 + 600);
  pdVar8 = *(double **)(param_2 + 0x228);
  local_168 = dVar35;
  dStack_160 = dVar30;
  local_158 = dVar23;
  dStack_150 = dVar31;
  if (pdVar8 == (double *)0x0) {
    uVar4 = 0x40;
    pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
    dVar6 = DAT_14c8463d8;
    *pdVar8 = DAT_14c8463d0;
    pdVar8[1] = dVar6;
    dVar6 = DAT_14c8463e8;
    pdVar8[2] = DAT_14c8463e0;
    pdVar8[3] = dVar6;
    dVar6 = DAT_14c846500;
    pdVar8[4] = DAT_14c8464f8;
    pdVar8[5] = dVar6;
    dVar6 = DAT_14c846508;
    pdVar8[6] = DAT_14c846508;
    *(double **)(param_2 + 0x228) = pdVar8;
  }
  auVar25._8_8_ = -(ulonglong)(dVar30 != pdVar8[1]);
  auVar25._0_8_ = -(ulonglong)(dVar35 != *pdVar8);
  iVar3 = movmskpd(SUB84(dVar6,0),auVar25);
  auVar20._8_4_ = (int)-(ulonglong)(dVar31 != pdVar8[3]);
  auVar20._0_8_ = -(ulonglong)(dVar23 != pdVar8[2]);
  auVar20._12_4_ = (int)(-(ulonglong)(dVar31 != pdVar8[3]) >> 0x20);
  uVar9 = movmskpd(uVar4,auVar20);
  if ((uVar9 & 0x3fffffff) != 0 || iVar3 != 0) {
    pdVar8[2] = local_158;
    pdVar8[3] = dStack_150;
    *pdVar8 = local_168;
    pdVar8[1] = dStack_160;
    FUN_1448052ee(&local_168,&local_1e8);
    pdVar8[6] = local_1d8;
    pdVar8[4] = local_1e8;
    pdVar8[5] = dStack_1e0;
  }
  local_c80 = pdVar8[4];
  dStack_c78 = pdVar8[5];
  local_c70 = pdVar8[6];
  local_c68 = *(undefined4 *)(param_2 + 0x2a8);
  iVar3 = *(int *)(param_5 + 0x8c);
  fVar13 = 0.0;
  if (SBORROW4(0,iVar3)) {
    lVar10 = param_5 + 4;
    if (*(int *)(param_5 + 0x88) == 0) {
      lVar10 = param_5 + 0x10;
    }
    iVar3 = *(int *)(lVar10 + 0x68);
    fVar13 = *(float *)(lVar10 + 0x6c);
  }
  pdVar8 = &local_c80;
  auVar20 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
  fVar13 = (fVar13 - auVar20._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar13) {
    fVar13 = 0.99999994;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  uVar7 = *param_4;
  lVar10 = *(longlong *)(param_5 + 0x80);
  lVar11 = (lVar10 >> 0x20) * (longlong)((int)auVar20._0_4_ + (iVar3 - *(int *)(param_3 + 0x28)));
  uVar4 = FUN_14341e17e(uVar7,((float)lVar11 + (float)(int)((ulonglong)lVar10 >> 0x20) * fVar13) /
                              (float)(int)lVar10,lVar11,&local_c98);
  auVar20 = *(undefined1 (*) [16])(param_2 + 0x280);
  auVar25 = *(undefined1 (*) [16])(param_2 + 0x290);
  auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar20._8_8_));
  auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar20._0_8_));
  iVar3 = movmskpd(uVar4,auVar28);
  auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar25._8_8_));
  auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar25._0_8_));
  uVar9 = movmskpd((int)uVar7,auVar27);
  if ((uVar9 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_d48 = DAT_14c8464a0;
    dStack_d40 = DAT_14c8464a8;
    uVar4 = (undefined4)DAT_14c8464c0;
    uVar32 = DAT_14c8464c0._4_4_;
    uVar33 = (undefined4)DAT_14c8464c8;
    uVar34 = DAT_14c8464c8._4_4_;
    uVar36 = (undefined4)DAT_14c846480;
    uVar37 = DAT_14c846480._4_4_;
    uVar38 = (undefined4)DAT_14c846488;
    uVar39 = DAT_14c846488._4_4_;
    auVar43 = _DAT_14c8464d0;
    dVar35 = DAT_14c846490;
    dVar30 = DAT_14c846498;
    dVar23 = DAT_14c8464b0;
    dVar31 = DAT_14c8464b8;
  }
  else {
    auVar27 = divpd(_DAT_149934d80,auVar20);
    auVar28 = divpd(ZEXT816(0x3ff0000000000000),auVar25);
    dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar20._0_8_)) & auVar27._0_8_);
    uVar4 = SUB84(dVar23,0);
    uVar32 = (undefined4)((ulonglong)dVar23 >> 0x20);
    dVar31 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar20._8_8_)) & auVar27._8_8_);
    uVar33 = SUB84(dVar31,0);
    uVar34 = (undefined4)((ulonglong)dVar31 >> 0x20);
    dVar40 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar25._0_8_)) & auVar28._0_8_);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = dVar40;
    dVar18 = *(double *)(param_2 + 0x240);
    dVar35 = *(double *)(param_2 + 0x250) * -1.0;
    dVar30 = *(double *)(param_2 + 600) * 1.0;
    dVar6 = -dVar18;
    uVar36 = SUB84(dVar18,0);
    uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar16 = -*(double *)(param_2 + 0x248);
    uVar38 = SUB84(*(double *)(param_2 + 0x248),0);
    uVar39 = (undefined4)((ulonglong)dVar16 >> 0x20);
    dVar23 = *(double *)(param_2 + 0x260) * dVar23;
    dVar31 = *(double *)(param_2 + 0x268) * dVar31;
    dVar40 = *(double *)(param_2 + 0x270) * dVar40;
    dVar19 = dVar31 * dVar6 - dVar16 * dVar23;
    dVar22 = dVar40 * dVar16 - dVar35 * dVar31;
    dVar17 = dVar23 * dVar35 - dVar6 * dVar40;
    dVar22 = dVar22 + dVar22;
    dVar17 = dVar17 + dVar17;
    dVar19 = dVar19 + dVar19;
    local_d48 = 0.0 - ((dVar19 * dVar16 - dVar17 * dVar35) + dVar30 * dVar22 + dVar23);
    dStack_d40 = 0.0 - (dVar19 * dVar18 + dVar35 * dVar22 + dVar30 * dVar17 + dVar31);
    dVar23 = 0.0 - (dVar30 * dVar19 + dVar40 + (dVar17 * dVar6 - dVar22 * dVar16));
    dVar31 = 0.0;
  }
  local_d4c = *(undefined4 *)(param_2 + 0x2a8);
  uVar5 = FUN_144a7484c(pdVar8,&local_168);
  auVar20 = _DAT_149934d80;
  local_d50 = local_c68;
  local_cf8 = 0.0;
  dStack_cf0 = 0.0;
  local_d08 = 0.0;
  dStack_d00 = 0.0;
  auVar1._4_4_ = uVar32;
  auVar1._0_4_ = uVar4;
  auVar1._8_4_ = uVar33;
  auVar1._12_4_ = uVar34;
  auVar25 = minpd(_DAT_149934d80,auVar1);
  auVar28 = minpd(ZEXT816(0x3ff0000000000000),auVar43);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar3 = movmskpd(uVar5,auVar26);
  auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
  auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
  uVar9 = movmskpd((int)pdVar8,auVar29);
  local_d38._0_8_ = auVar43._0_8_;
  uVar7 = local_d38._0_8_;
  local_d38._8_8_ = auVar43._8_8_;
  uVar2 = local_d38._8_8_;
  local_d38 = auVar43;
  if ((uVar9 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_d28 = dStack_160 * dVar35 * -1.0 +
                local_158 * (double)CONCAT44(uVar39,uVar38) +
                (double)CONCAT44(uVar37,uVar36) * dStack_150 * 1.0 + dVar30 * local_168;
    dStack_d20 = local_168 * dVar35 * 1.0 +
                 dStack_150 * (double)CONCAT44(uVar39,uVar38) +
                 (double)CONCAT44(uVar37,uVar36) * local_158 * -1.0 + dVar30 * dStack_160;
    local_d18._8_8_ =
         local_158 * dVar35 * -1.0 +
         (((double)CONCAT44(uVar37,uVar36) * local_168 * -1.0 + dVar30 * dStack_150) -
         (double)CONCAT44(uVar39,uVar38) * dStack_160);
    local_d18._0_8_ =
         dStack_150 * dVar35 * 1.0 +
         (((double)CONCAT44(uVar37,uVar36) * dStack_160 * 1.0 + dVar30 * local_158) -
         (double)CONCAT44(uVar39,uVar38) * local_168);
    dVar17 = local_c98 * (double)CONCAT44(uVar32,uVar4);
    dVar18 = dStack_c90 * (double)CONCAT44(uVar34,uVar33);
    dVar6 = local_c88 * (double)local_d38._0_8_;
    dVar16 = (double)local_d38._8_8_ * 0.0;
    dVar19 = dVar18 * (double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar39,uVar38) * dVar17;
    dVar22 = dVar6 * (double)CONCAT44(uVar39,uVar38) - dVar35 * dVar18;
    dVar40 = dVar17 * dVar35 - (double)CONCAT44(uVar37,uVar36) * dVar6;
    dVar41 = dVar16 * dVar30 - dVar30 * dVar16;
    dVar22 = dVar22 + dVar22;
    dVar40 = dVar40 + dVar40;
    dVar19 = dVar19 + dVar19;
    dVar41 = dVar41 + dVar41;
    local_d08 = local_d48 +
                (dVar19 * (double)CONCAT44(uVar39,uVar38) - dVar35 * dVar40) +
                dVar30 * dVar22 + dVar17;
    dStack_d00 = dStack_d40 +
                 (dVar22 * dVar35 - dVar19 * (double)CONCAT44(uVar37,uVar36)) +
                 dVar30 * dVar40 + dVar18;
    local_cf8 = dVar23 + (dVar40 * (double)CONCAT44(uVar37,uVar36) -
                         (double)CONCAT44(uVar39,uVar38) * dVar22) + dVar30 * dVar19 + dVar6;
    dStack_cf0 = dVar31 + (dVar41 * dVar30 - dVar41 * dVar30) + dVar30 * dVar41 + dVar16;
  }
  else {
    dVar31 = (double)CONCAT44(uVar37,uVar36) + (double)CONCAT44(uVar37,uVar36);
    dVar6 = (double)CONCAT44(uVar39,uVar38) + (double)CONCAT44(uVar39,uVar38);
    dVar16 = dVar35 + dVar35;
    dVar17 = (double)CONCAT44(uVar37,uVar36) * dVar31;
    dVar19 = (double)CONCAT44(uVar39,uVar38) * dVar6;
    local_1e8 = ((double)DAT_149934d80 - (dVar35 * dVar16 + dVar19)) *
                (double)CONCAT44(uVar32,uVar4);
    dStack_1c0 = (DAT_149934d80._8_8_ - (dVar35 * dVar16 + dVar17)) *
                 (double)CONCAT44(uVar34,uVar33);
    dVar18 = dVar6 * (double)CONCAT44(uVar37,uVar36);
    dVar22 = dVar16 * (double)CONCAT44(uVar39,uVar38);
    dVar35 = (double)CONCAT44(uVar37,uVar36) * dVar16;
    dVar31 = dVar31 * dVar30;
    local_1c8 = (dVar18 - dVar16 * dVar30) * (double)CONCAT44(uVar34,uVar33);
    dStack_1a0 = (dVar22 - dVar31) * (double)local_d38._0_8_;
    local_1a8 = (dVar6 * dVar30 + dVar35) * (double)local_d38._0_8_;
    dStack_1e0 = (dVar18 + dVar16 * dVar30) * (double)CONCAT44(uVar32,uVar4);
    local_1b8 = (dVar22 + dVar31) * (double)CONCAT44(uVar34,uVar33);
    local_1d8 = (dVar35 - dVar6 * dVar30) * (double)CONCAT44(uVar32,uVar4);
    uStack_1d0 = 0;
    local_198 = (1.0 - (dVar17 + dVar19)) * (double)local_d38._0_8_;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = local_d48;
    dStack_180 = dStack_d40;
    uStack_170 = 0x3ff0000000000000;
    dVar30 = dStack_160 + dStack_160;
    dVar31 = local_158 + local_158;
    dVar35 = local_168 * (local_168 + local_168);
    local_268 = (double)DAT_149934d80 - (local_158 * dVar31 + dStack_160 * dVar30);
    dStack_240 = DAT_149934d80._8_8_ - (local_158 * dVar31 + dVar35);
    local_218 = 1.0 - (dVar35 + dStack_160 * dVar30);
    dVar35 = (local_168 + local_168) * dStack_150;
    dStack_260 = dVar30 * local_168 + dVar31 * dStack_150;
    local_238 = dVar31 * dStack_160 + dVar35;
    local_248 = dVar30 * local_168 - dVar31 * dStack_150;
    dVar35 = dVar31 * dStack_160 - dVar35;
    local_258 = local_168 * dVar31 - dVar30 * dStack_150;
    uStack_250 = 0;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar35,0);
    local_228._0_8_ = dVar30 * dStack_150 + local_168 * dVar31;
    local_228._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    uStack_210 = 0;
    local_208 = local_c98;
    dStack_200 = dStack_c90;
    local_1f8 = local_c88;
    uStack_1f0 = 0x3ff0000000000000;
    dVar35 = (double)local_d38._0_8_ * 1.0;
    local_178 = dVar23;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar14._8_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar34,uVar33));
    auVar14._0_8_ = -(ulonglong)(0.0 <= (double)CONCAT44(uVar32,uVar4));
    auVar25 = blendvpd(_DAT_149936790,auVar20,auVar14);
    uVar12 = -(ulonglong)(0.0 <= dVar35);
    dVar35 = (double)(~uVar12 & 0xbff0000000000000 | uVar12 & 0x3ff0000000000000);
    dVar30 = auVar25._0_8_;
    local_158 = local_158 * dVar30;
    dStack_160 = dStack_160 * dVar30;
    local_168 = local_168 * dVar30;
    dVar30 = auVar25._8_8_;
    local_138 = local_138 * dVar30;
    local_140 = local_140 * dVar30;
    local_148 = dVar30 * local_148;
    local_118 = local_118 * dVar35;
    local_120 = local_120 * dVar35;
    local_128 = dVar35 * local_128;
    FUN_14481fd10(&local_cb8,&local_168);
    auVar21._0_8_ = local_cb8 * local_cb8;
    auVar21._8_8_ = dStack_cb0 * dStack_cb0;
    dVar35 = local_ca8 * local_ca8 + auVar21._0_8_;
    dVar30 = dStack_ca0 * dStack_ca0 + auVar21._8_8_;
    auVar24._0_8_ = dVar35 + dVar30;
    auVar24._8_8_ = dVar35 + dVar30;
    auVar25 = sqrtpd(auVar21,auVar24);
    auVar20 = divpd(auVar20,auVar25);
    auVar42._0_8_ = auVar20._0_8_ * local_ca8;
    auVar42._8_8_ = auVar20._8_8_ * dStack_ca0;
    local_d28 = (double)((ulonglong)(local_cb8 * auVar20._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
    dStack_d20 = (double)((ulonglong)(dStack_cb0 * auVar20._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
    auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
    auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
    local_d18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar15);
    local_d08 = local_108;
    dStack_d00 = dStack_100;
    local_cf8 = local_f8;
    dStack_cf0 = 0.0;
    param_2 = local_cc0;
  }
  local_cd8._8_4_ = SUB84((double)uVar2 * 0.0,0);
  local_cd8._0_8_ = (double)uVar7 * 1.0;
  local_cd8._12_4_ = (int)((ulonglong)((double)uVar2 * 0.0) >> 0x20);
  uVar9 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_ce8 = uVar4;
  uStack_ce4 = uVar32;
  uStack_ce0 = uVar33;
  uStack_cdc = uVar34;
  uVar7 = FUN_1476799c0(param_1 + 8,uVar9 >> 0x10 ^ uVar9,&local_cc0);
  FUN_1476791ce(uVar7,&local_d28);
  if (0.0 < local_bf0) {
    uVar9 = ((uint)(local_cc0 >> 0x14) & 0xffff ^ (uint)(local_cc0 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar7 = FUN_1476799c0(param_1 + 8,uVar9 >> 0x10 ^ uVar9);
    FUN_1476798cc(uVar7);
  }
  if (local_2a8 == '\x01') {
    local_2a8 = '\0';
  }
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  if (local_3c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_d78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476791ce FUN_1476791ce body=1788 status=ok
// SIG undefined FUN_1476791ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1476791ce(undefined1 *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_298 [44];
  float local_26c;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar34 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  auVar25 = *(undefined1 (*) [16])(param_2 + 8);
  dVar5 = auVar25._0_8_;
  dVar9 = auVar25._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_2 + 10);
  dVar6 = auVar3._0_8_;
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x50);
  dVar7 = auVar26._0_8_;
  dVar10 = auVar26._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
  dVar8 = auVar4._0_8_;
  auVar25 = minpd(auVar26,auVar25);
  auVar29 = minpd(auVar4,auVar3);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar17 = movmskpd((int)local_c0,auVar26);
  auVar25._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  uVar18 = movmskpd((int)param_1,auVar25);
  if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
    dVar27 = *(double *)(param_1 + 0x10);
    dVar31 = *(double *)(param_1 + 0x18);
    dVar32 = *(double *)(param_1 + 0x20);
    dVar33 = *(double *)(param_1 + 0x28);
    dVar13 = *param_2;
    dVar14 = param_2[1];
    dVar15 = param_2[2];
    dVar16 = param_2[3];
    dVar23 = param_2[3];
    dVar22 = param_2[3];
    dVar1 = param_2[1];
    dVar12 = param_2[1];
    dVar2 = param_2[2];
    dVar30 = param_2[2];
    dVar24 = dVar31 * dVar2 * -1.0 + dVar32 * dVar1 + dVar33 * *param_2 * 1.0 + dVar27 * dVar23;
    dVar28 = dVar27 * dVar30 * 1.0 + dVar33 * dVar12 + dVar32 * *param_2 * -1.0 + dVar31 * dVar22;
    auVar34._0_8_ =
         dVar33 * dVar2 * 1.0 + ((*param_2 * dVar31 * 1.0 + dVar32 * dVar23) - dVar27 * dVar1);
    auVar34._8_8_ =
         dVar32 * dVar30 * -1.0 + ((*param_2 * dVar27 * -1.0 + dVar33 * dVar22) - dVar31 * dVar12);
    dVar27 = *(double *)(param_1 + 0x30) * dVar5;
    dVar31 = *(double *)(param_1 + 0x38) * dVar9;
    dVar32 = *(double *)(param_1 + 0x40) * dVar6;
    dVar33 = *(double *)(param_1 + 0x48) * auVar3._8_8_;
    dVar2 = dVar31 * dVar13 - dVar14 * dVar27;
    dVar30 = dVar32 * dVar14 - dVar15 * dVar31;
    dVar12 = dVar27 * dVar15 - dVar13 * dVar32;
    dVar1 = dVar33 * dVar16 - dVar16 * dVar33;
    dVar30 = dVar30 + dVar30;
    dVar12 = dVar12 + dVar12;
    dVar2 = dVar2 + dVar2;
    dVar1 = dVar1 + dVar1;
    local_e8 = (dVar2 * dVar14 - dVar15 * dVar12) + dVar23 * dVar30 + dVar27 + param_2[4];
    dStack_e0 = (dVar30 * dVar15 - dVar2 * dVar13) + dVar22 * dVar12 + dVar31 + param_2[5];
    local_d8 = (dVar12 * dVar13 - dVar14 * dVar30) + dVar23 * dVar2 + dVar32 + param_2[6];
    dVar23 = (dVar1 * dVar16 - dVar1 * dVar16) + dVar22 * dVar1 + dVar33 + param_2[7];
    local_26c = param_3;
  }
  else {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar30 = param_2[2];
    dVar27 = dVar2 + dVar2;
    dVar31 = dVar30 + dVar30;
    dVar22 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar22 + dVar2 * dVar27)) * dVar6;
    dVar23 = param_2[3];
    dVar32 = dVar31 * dVar23;
    dVar33 = (dVar1 + dVar1) * param_2[3];
    dVar23 = dVar27 * dVar23;
    local_188 = (dVar23 + *param_2 * dVar31) * dVar6;
    dVar22 = (DAT_149934d80._8_8_ - (dVar30 * dVar31 + dVar22)) * dVar9;
    dVar12 = (dVar27 * dVar1 + dVar32) * dVar5;
    local_198 = (dVar31 * dVar2 + dVar33) * dVar9;
    dStack_180 = (dVar31 * dVar2 - dVar33) * dVar6;
    local_1b8 = (*param_2 * dVar31 - dVar23) * dVar5;
    local_1c8._8_4_ = SUB84(dVar12,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar30 * dVar31 + dVar2 * dVar27)) * dVar5;
    local_1c8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar22,0);
    local_1a8._0_8_ = (dVar27 * dVar1 - dVar32) * dVar9;
    local_1a8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    dVar12 = *(double *)(param_1 + 0x10);
    dVar1 = *(double *)(param_1 + 0x18);
    dVar2 = *(double *)(param_1 + 0x20);
    dVar30 = dVar1 + dVar1;
    dVar27 = dVar2 + dVar2;
    dVar22 = dVar12 * (dVar12 + dVar12);
    local_1f8 = (1.0 - (dVar22 + dVar1 * dVar30)) * dVar8;
    dVar23 = *(double *)(param_1 + 0x28);
    dVar31 = dVar27 * dVar23;
    dVar32 = (dVar12 + dVar12) * *(double *)(param_1 + 0x28);
    dVar23 = dVar30 * dVar23;
    local_208 = (dVar23 + *(double *)(param_1 + 0x10) * dVar27) * dVar8;
    dStack_200 = (dVar27 * dVar1 - dVar32) * dVar8;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar27 + dVar1 * dVar30)) * dVar7;
    dVar22 = (DAT_149934d80._8_8_ - (dVar2 * dVar27 + dVar22)) * dVar10;
    dStack_240 = (dVar30 * dVar12 + dVar31) * dVar7;
    local_218 = (dVar27 * dVar1 + dVar32) * dVar10;
    local_238 = (*(double *)(param_1 + 0x10) * dVar27 - dVar23) * dVar7;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar22,0);
    local_228._0_8_ = (dVar30 * dVar12 - dVar31) * dVar10;
    local_228._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = *(undefined8 *)(param_1 + 0x30);
    uStack_1e0 = *(undefined8 *)(param_1 + 0x38);
    local_1d8 = *(undefined8 *)(param_1 + 0x40);
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar25 = blendvpd(_DAT_149936790,auVar34,auVar29);
    uVar19 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar23 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar22 = auVar25._0_8_;
    local_138 = local_138 * dVar22;
    local_140 = local_140 * dVar22;
    local_148 = local_148 * dVar22;
    dVar22 = auVar25._8_8_;
    local_118 = local_118 * dVar22;
    local_120 = local_120 * dVar22;
    local_128 = dVar22 * local_128;
    local_f8 = local_f8 * dVar23;
    local_100 = local_100 * dVar23;
    local_108 = dVar23 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar23 = local_258 * local_258 + local_268 * local_268;
    dVar22 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar21._0_8_ = dVar23 + dVar22;
    auVar21._8_8_ = dVar23 + dVar22;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar25 = sqrtpd(auVar21,auVar21);
    auVar25 = divpd(auVar34,auVar25);
    auVar35._0_8_ = auVar25._0_8_ * local_258;
    auVar35._8_8_ = auVar25._8_8_ * dStack_250;
    dVar24 = (double)((ulonglong)(local_268 * auVar25._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
    dVar28 = (double)((ulonglong)(dStack_260 * auVar25._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar20);
    dVar23 = 0.0;
  }
  dVar22 = auVar3._8_8_ * auVar4._8_8_;
  *(double *)(param_1 + 0x10) = dVar24;
  *(double *)(param_1 + 0x18) = dVar28;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar34;
  auVar4._8_4_ = SUB84(dStack_e0,0);
  auVar4._0_8_ = local_e8;
  auVar4._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar4;
  *(double *)(param_1 + 0x40) = local_d8;
  *(double *)(param_1 + 0x48) = dVar23;
  auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar11._0_8_ = dVar5 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar11;
  auVar3._8_4_ = SUB84(dVar22,0);
  auVar3._0_8_ = dVar6 * dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar3;
  *(float *)(param_1 + 0x70) = param_3 + *(float *)(param_1 + 0x70);
  *param_1 = 1;
  if ((local_c0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476798cc FUN_1476798cc body=243 status=ok
// SIG undefined FUN_1476798cc(void)

void FUN_1476798cc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_938 [32];
  undefined1 local_918 [2088];
  longlong local_f0;
  longlong local_68;
  undefined4 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_938;
  FUN_144903306(local_918);
  iVar1 = *(int *)(param_1 + 0x1230);
  *(uint *)(param_1 + 0x1230) = iVar1 + 1U;
  local_58 = param_3;
  if (*(uint *)(param_1 + 0x1234) < iVar1 + 1U) {
    FUN_14767a11a(param_1 + 0x80,iVar1);
  }
  lVar2 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x1220) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1220);
  }
  FUN_1472d1e8c(lVar2 + (longlong)iVar1 * 0x8d0,local_918);
  *(undefined4 *)(lVar2 + 0x8c0 + (longlong)iVar1 * 0x8d0) = local_58;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  if ((local_40 ^ (ulonglong)auStack_938) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476799c0 FUN_1476799c0 body=189 status=ok
// SIG undefined FUN_1476799c0(void)

longlong FUN_1476799c0(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x1260;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x1260) == *param_3) {
          if (lVar3 != 0) goto LAB_147679a60;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x1250);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147679a7e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x1260 + *param_1;
LAB_147679a60:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 147679a7e FUN_147679a7e body=281 status=ok
// SIG undefined FUN_147679a7e(void)

undefined4 * FUN_147679a7e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_147679b98(param_1,local_48);
  FUN_147679d2c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x1250) = 0xffffffff;
  cVar1 = FUN_147679c84(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x1254) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x1250) =
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
      FUN_147679f36(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147679b98 FUN_147679b98 body=235 status=ok
// SIG undefined FUN_147679b98(void)

int * FUN_147679b98(longlong *param_1,int *param_2)

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
      FUN_1433145c2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x1260);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x1260) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1260 + *param_1;
  return param_2;
}



// FUNCTION 147679c84 FUN_147679c84 body=167 status=ok
// SIG undefined FUN_147679c84(void)

undefined8 FUN_147679c84(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x1260);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x1260) == *param_3) {
          FUN_147679e38((longlong)_Dst + 0x90);
          memmove(_Dst,param_3,0x1250);
          FUN_147679ebc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x1250);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147679d2c FUN_147679d2c body=266 status=ok
// SIG undefined FUN_147679d2c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_147679d2c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1288 [32];
  undefined8 local_1268 [4];
  undefined4 local_1248;
  undefined4 uStack_1244;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined4 local_11f8;
  undefined1 local_11e8 [4532];
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1288;
  memset(local_1268,0,0x1240);
  local_1248 = 0;
  uStack_1244 = 0;
  uStack_1240 = 0;
  uStack_123c = 0x3ff00000;
  local_1238 = 0;
  uStack_1230 = 0;
  local_1228 = 0;
  uStack_1220 = 0;
  local_1218 = 0x3ff0000000000000;
  uStack_1210 = 0x3ff0000000000000;
  local_1208 = 0x3ff0000000000000;
  uStack_1200 = 0;
  *param_2 = *(undefined8 *)*param_1;
  puVar2 = local_1268;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x10) = local_11f8;
  memcpy(param_2 + 0x12,local_11e8,0x11a0);
  param_2[0x246] = 0;
  param_2[0x248] = 0x200000000;
  local_34 = 2;
  FUN_147679e38(local_11e8);
  if ((local_28 ^ (ulonglong)auStack_1288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147679e38 FUN_147679e38 body=62 status=ok
// SIG undefined FUN_147679e38(void)

void FUN_147679e38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x11a0);
  if (*(longlong *)(param_1 + 0x11a0) == 0) {
    lVar1 = param_1;
  }
  FUN_147679e76(lVar1,*(undefined4 *)(param_1 + 0x11b0));
  if (*(longlong *)(param_1 + 0x11a0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147679e76 FUN_147679e76 body=70 status=ok
// SIG undefined FUN_147679e76(void)

void FUN_147679e76(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x8b0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x11] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147679ebc FUN_147679ebc body=122 status=ok
// SIG undefined FUN_147679ebc(void)

void FUN_147679ebc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1260) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1260) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1260 + 4) = uVar5;
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



// FUNCTION 147679f36 FUN_147679f36 body=483 status=ok
// SIG undefined FUN_147679f36(void)

void FUN_147679f36(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x1260;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1254 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x1250 + lVar6) =
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



// FUNCTION 14767a11a FUN_14767a11a body=147 status=ok
// SIG undefined FUN_14767a11a(void)

void FUN_14767a11a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x11b0);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(&DAT_000011b4 + param_1) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x8d0,0);
      iVar5 = (int)(uVar4 / 0x8d0);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(&DAT_000011b4 + param_1) = iVar6;
    FUN_14767a1ae(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14767a1ae FUN_14767a1ae body=147 status=ok
// SIG undefined FUN_14767a1ae(void)

void FUN_14767a1ae(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x11a0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x8d0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x11a0,0,param_3,0x8d0);
    memmove(*(void **)((longlong)param_1 + 0x11a0),param_1,(longlong)param_2 * 0x8d0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x11a0,param_2,param_3,0x8d0);
  return;
}



// FUNCTION 14767a242 FUN_14767a242 body=259 status=ok
// SIG undefined FUN_14767a242(void)

void FUN_14767a242(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (uStack_40 != lVar2)) {
    do {
      puVar3 = (undefined8 *)(*local_70 + (longlong)iStack_54 * 0x1260);
      FUN_14767a346(puVar3 + 2,*puVar3);
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767a346 FUN_14767a346 body=140 status=ok
// SIG undefined FUN_14767a346(void)

void FUN_14767a346(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  
  if (*param_1 == '\x01') {
    FUN_14798ead6(param_2);
    FUN_14798e398(param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x70));
  }
  if (param_1[1] == '\x01') {
    FUN_14798ebbe(param_2);
    pcVar1 = param_1 + 0x80;
    if (*(char **)(param_1 + 0x1220) != (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 0x1220);
    }
    if ((longlong)*(int *)(param_1 + 0x1230) != 0) {
      lVar2 = (longlong)*(int *)(param_1 + 0x1230) * 0x8d0;
      do {
        FUN_14798eb2e(param_2,pcVar1,*(undefined4 *)(pcVar1 + 0x8c0));
        pcVar1 = pcVar1 + 0x8d0;
        lVar2 = lVar2 + -0x8d0;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 14767a3d2 FUN_14767a3d2 body=52 status=ok
// SIG undefined FUN_14767a3d2(void)

void FUN_14767a3d2(longlong *param_1)

{
  FUN_14767a406();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14767a406 FUN_14767a406 body=314 status=ok
// SIG undefined FUN_14767a406(void)

void FUN_14767a406(longlong *param_1)

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
      FUN_147679e38(*local_68 + (longlong)iStack_4c * 0x1260 + 0x90);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1433146ce(param_1);
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



// FUNCTION 14767a542 FUN_14767a542 body=195 status=ok
// SIG undefined FUN_14767a542(void)

undefined4 *
FUN_14767a542(undefined4 *param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[4] = param_3[4];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 0xe) = 0x10000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x10000000000;
  *(undefined8 *)(param_1 + 0x26) = 0x10000000000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0x10000000000;
  FUN_147678174(uVar1,param_1 + 6);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(*param_4 + 0x548);
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x43) = 0xffffffff00000080;
  param_1[0x45] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 14767a606 FUN_14767a606 body=73 status=ok
// SIG undefined FUN_14767a606(void)

void FUN_14767a606(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_14767a3d2(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14767a650 FUN_14767a650 body=493 status=ok
// SIG undefined FUN_14767a650(void)

void FUN_14767a650(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = FUN_14009d2a0();
  uVar3 = *(undefined2 *)(lVar8 + 0x11c);
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = param_1;
  local_80 = param_1;
  local_78 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    plVar1 = param_1 + 0x25;
    do {
      uVar4 = *(undefined2 *)(*local_a8 + (longlong)iStack_8c * 0xc);
      local_68 = CONCAT62(local_68._2_6_,uVar4);
      uVar5 = *(ushort *)(*local_a8 + 2 + (longlong)iStack_8c * 0xc);
      if (uVar5 != 0xffff) {
        cVar6 = FUN_140bbead8(param_2 + 0x28,uVar4,uVar3);
        if (cVar6 != '\0') {
          FUN_14086b58e(param_1 + 10,uVar5,&local_68);
          iVar10 = ((uint)uVar5 - (int)param_1[0x28]) + 1;
          if (0 < iVar10) {
            uVar7 = FUN_144a54ea4(plVar1,iVar10);
            FUN_1447c6044(plVar1,uVar7,iVar10,0);
          }
          plVar9 = (longlong *)param_1[0x27];
          if ((longlong *)param_1[0x27] == (longlong *)0x0) {
            plVar9 = plVar1;
          }
          puVar2 = (uint *)((longlong)plVar9 + (ulonglong)(uVar5 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
          FUN_14086b4ac(local_80,iStack_8c);
          local_70 = CONCAT11(local_70._1_1_,1);
        }
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < (int)local_98[3]);
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14767a9b8(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767a83e FUN_14767a83e body=31 status=ok
// SIG undefined FUN_14767a83e(void)

undefined8 FUN_14767a83e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767a86e FUN_14767a86e body=93 status=ok
// SIG undefined FUN_14767a86e(void)

void FUN_14767a86e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767a8cc FUN_14767a8cc body=93 status=ok
// SIG undefined FUN_14767a8cc(void)

void FUN_14767a8cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767a92a FUN_14767a92a body=126 status=ok
// SIG undefined FUN_14767a92a(void)

void FUN_14767a92a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a4d7700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7690;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014767a999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14767a9b8 FUN_14767a9b8 body=69 status=ok
// SIG undefined FUN_14767a9b8(void)

void FUN_14767a9b8(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140bc001c(param_1);
    return;
  }
  return;
}



// FUNCTION 14767a9fe FUN_14767a9fe body=31 status=ok
// SIG undefined FUN_14767a9fe(void)

undefined8 FUN_14767a9fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767aa2e FUN_14767aa2e body=93 status=ok
// SIG undefined FUN_14767aa2e(void)

void FUN_14767aa2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767aa8c FUN_14767aa8c body=93 status=ok
// SIG undefined FUN_14767aa8c(void)

void FUN_14767aa8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a481140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767aaea FUN_14767aaea body=126 status=ok
// SIG undefined FUN_14767aaea(void)

void FUN_14767aaea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a481140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7770;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014767ab59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14767ab76 FUN_14767ab76 body=132 status=ok
// SIG undefined FUN_14767ab76(void)

void FUN_14767ab76(longlong param_1,int param_2)

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



// FUNCTION 14767abfc FUN_14767abfc body=436 status=ok
// SIG undefined FUN_14767abfc(void)

longlong * FUN_14767abfc(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14767adb2();
  if (*param_2 != 0) goto LAB_14767ac2a;
  plVar3 = (longlong *)FUN_14001cc68(0xf0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d77e0;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xd0);
  FUN_14767af48(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a4d7800;
  plVar3[0x1d] = (longlong)&PTR_FUN_14a4d7850;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14767c636(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_14767ad76:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014767ad66:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x00014767ad66;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14767ad76;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_14767ae66(param_1,param_3,&local_50);
LAB_14767ac2a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767adb2 FUN_14767adb2 body=179 status=ok
// SIG undefined FUN_14767adb2(void)

undefined8 * FUN_14767adb2(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14767ae0c;
    }
  }
  uVar6 = 0;
LAB_14767ae0c:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14767ae66 FUN_14767ae66 body=184 status=ok
// SIG undefined FUN_14767ae66(void)

void FUN_14767ae66(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767af20 FUN_14767af20 body=9 status=ok
// SIG undefined FUN_14767af20(void)

void FUN_14767af20(longlong param_1)

{
  FUN_14767badc(param_1 + 0x10);
  return;
}



// FUNCTION 14767af2a FUN_14767af2a body=29 status=ok
// SIG undefined FUN_14767af2a(void)

undefined8 FUN_14767af2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767af48 FUN_14767af48 body=134 status=ok
// SIG undefined FUN_14767af48(void)

void FUN_14767af48(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7870;
  param_1[0x1b] = &PTR_FUN_14a4d78c0;
  return;
}



// FUNCTION 14767afce FUN_14767afce body=38 status=ok
// SIG undefined FUN_14767afce(void)

undefined8 FUN_14767afce(undefined8 param_1,int param_2)

{
  FUN_14767badc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767b000 FUN_14767b000 body=25 status=ok
// SIG undefined FUN_14767b000(void)

void FUN_14767b000(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 14767b01a FUN_14767b01a body=62 status=ok
// SIG undefined FUN_14767b01a(void)

void FUN_14767b01a(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_14767bb78();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767b05a FUN_14767b05a body=954 status=ok
// SIG undefined FUN_14767b05a(void)

ulonglong FUN_14767b05a(longlong param_1,int param_2,char param_3,char param_4)

{
  void *pvVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14767b0c9;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      local_58 = *puVar7;
      uStack_54 = puVar7[1];
      uStack_50 = puVar7[2];
      uStack_4c = puVar7[3];
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x20);
      local_48 = *puVar7;
      uStack_44 = puVar7[1];
      uStack_40 = puVar7[2];
      uStack_3c = puVar7[3];
      FUN_140d0e176(param_1 + 0x18);
      FUN_14767bcb6(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      uVar11 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar10 = (uVar11 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar10 * 0x18) < param_2) {
            uVar12 = uVar10 + (uVar11 & 1);
          }
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
      }
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 0x18) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 0x18);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 0x18),(longlong)(int)(~uVar12 + uVar6) * 0x18);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
LAB_14767b40b:
        FUN_14767bd28(param_1 + 0xa0);
      }
LAB_14767b23e:
      if ((uStack_3c & 1) != 0) {
        FUN_14767bc00(&local_58,&uStack_50);
      }
      unaff_RBP = 0;
      goto LAB_14767b0c9;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20) & 1) == 0)
    goto LAB_14767b0c9;
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    if (0 < (int)uVar6) {
      uVar9 = (ulonglong)uVar6;
      uVar12 = uVar6;
      do {
        uVar9 = uVar9 >> 1;
        uVar10 = (uint)uVar9 + uVar11;
        if (*(int *)(lVar3 + (ulonglong)uVar10 * 0x18) < param_2) {
          uVar11 = uVar10 + (uVar12 & 1);
        }
        bVar4 = 1 < uVar12;
        uVar12 = (uint)uVar9;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar11 * 0x18) <= param_2)) &&
       (lVar3 + (ulonglong)uVar11 * 0x18 != -4)) {
      FUN_14767bc00((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68));
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar12 = 0;
      uVar11 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar10 = (uVar11 >> 1) + uVar12;
          if (*(int *)(lVar3 + (ulonglong)uVar10 * 0x18) < param_2) {
            uVar12 = uVar10 + (uVar11 & 1);
          }
          bVar4 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 0x18) <= param_2)) {
        if (~uVar12 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 0x18);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 0x18),(longlong)(int)(~uVar12 + uVar6) * 0x18);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_14767bd28(param_1 + 0xa0);
      }
      goto LAB_14767b0c9;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20);
      if ((bVar2 & 1) == 0) goto LAB_14767b0c9;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      *(byte *)(puVar7 + 7) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14767b0c9;
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)param_2 * 0x20);
      if ((bVar2 & 2) == 0) {
        local_58 = *puVar7;
        uStack_54 = puVar7[1];
        uStack_50 = puVar7[2];
        uStack_4c = puVar7[3];
        local_48 = puVar7[4];
        uStack_44 = puVar7[5];
        uStack_40 = puVar7[6];
        uStack_3c = puVar7[7];
        FUN_140d0e176(param_1 + 0x18);
        FUN_14767bcb6(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar3 = *(longlong *)(param_1 + 0xa0);
        uVar12 = 0;
        uVar11 = uVar6;
        if (0 < (int)uVar6) {
          do {
            uVar10 = (uVar11 >> 1) + uVar12;
            if (*(int *)(lVar3 + (ulonglong)uVar10 * 0x18) < param_2) {
              uVar12 = uVar10 + (uVar11 & 1);
            }
            bVar4 = 1 < uVar11;
            uVar11 = uVar11 >> 1;
          } while (bVar4);
        }
        if (((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 0x18) <= param_2)) {
          if (~uVar12 + uVar6 != 0) {
            pvVar1 = (void *)(lVar3 + (ulonglong)uVar12 * 0x18);
            memmove(pvVar1,(void *)((longlong)pvVar1 + 0x18),(longlong)(int)(~uVar12 + uVar6) * 0x18
                   );
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          goto LAB_14767b40b;
        }
        goto LAB_14767b23e;
      }
      if ((bVar2 & 1) == 0) goto LAB_14767b0c9;
    }
  }
  FUN_14767bc00(puVar7,puVar7 + 2);
LAB_14767b0c9:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14767b416 FUN_14767b416 body=475 status=ok
// SIG undefined FUN_14767b416(void)

undefined8 FUN_14767b416(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  lVar13 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar13 * 0x20 + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_14767b4cb;
  }
  if (param_3 == '\x01') {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 0x20);
    FUN_140d0e176(param_1 + 0x18);
    FUN_14767bcb6(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    uVar9 = (ulonglong)uVar7;
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (int)(uVar9 >> 1) + uVar12;
        uVar10 = (uint)uVar9;
        if (*(int *)(lVar13 + (ulonglong)uVar11 * 0x18) < param_2) {
          uVar12 = uVar11 + (uVar10 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar10);
    }
    if (((int)uVar12 < (int)uVar7) && (*(int *)(lVar13 + (ulonglong)uVar12 * 0x18) <= param_2)) {
      if (~uVar12 + uVar7 != 0) {
        pvVar1 = (void *)(lVar13 + (ulonglong)uVar12 * 0x18);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 0x18),(longlong)(int)(~uVar12 + uVar7) * 0x18);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_14767bd28(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar12 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (uVar12 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 0x18) < param_2) {
          uVar10 = uVar11 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 0x18) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar1 = (void *)(lVar4 + (ulonglong)uVar10 * 0x18);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 0x18),(longlong)(int)(~uVar10 + uVar7) * 0x18);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_14767bd28(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + lVar13 * 0x20);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_14767b4cb:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14767b5fa FUN_14767b5fa body=436 status=ok
// SIG undefined FUN_14767b5fa(void)

void FUN_14767b5fa(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong lStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x18;
  lStack_40 = param_1 + 0x28;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80 = local_48;
  lStack_78 = lStack_40;
  local_50 = 0;
  local_88 = lVar1;
  local_60 = lVar1;
  local_58 = lVar1;
  if (iStack_34 < *(int *)(lStack_40 + 0x18)) {
    do {
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14766abba(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
    }
  }
  lVar1 = param_1 + 0x68;
  lVar2 = param_1 + 0x78;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  lStack_40 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80._0_4_ = (undefined4)local_48;
  local_80._4_4_ = local_48._4_4_;
  lStack_78 = lStack_40;
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_88 = lVar1;
  if ((iStack_34 != iVar3) || (lStack_40 != lVar2)) {
    do {
      do {
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((lStack_78 != lVar2) || (local_88 != lVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767b7b0 FUN_14767b7b0 body=322 status=ok
// SIG undefined FUN_14767b7b0(void)

void FUN_14767b7b0(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar3 & 1) != 0) {
    uVar1 = *param_2;
    uVar4 = FUN_140732858();
    if (0 < (int)uVar1) {
      local_78 = param_1 + -0xd8;
      local_80 = param_1 + -0x10;
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_5 + uVar5 * 8);
        local_68 = 0;
        if (lVar2 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar2);
          local_68 = local_60;
        }
        FUN_14027461a(local_80,&local_6c,lVar2);
        FUN_14767bdd6(local_78,&local_70,&local_68);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
        local_60 = CONCAT44(*(undefined4 *)(param_1 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar3;
        FUN_1449da5a2(uVar4,&local_4a,&local_60);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767b8f4 FUN_14767b8f4 body=180 status=ok
// SIG undefined FUN_14767b8f4(void)

void FUN_14767b8f4(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) != 0) || (param_3 != '\0')) {
    uVar1 = FUN_140732858();
    FUN_14767bfd0(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767b9aa FUN_14767b9aa body=88 status=ok
// SIG undefined FUN_14767b9aa(void)

void FUN_14767b9aa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_14767c078(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14767ba02 FUN_14767ba02 body=38 status=ok
// SIG undefined FUN_14767ba02(void)

undefined8 FUN_14767ba02(undefined8 param_1,int param_2)

{
  FUN_14767badc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767ba28 FUN_14767ba28 body=38 status=ok
// SIG undefined FUN_14767ba28(void)

undefined8 FUN_14767ba28(undefined8 param_1,int param_2)

{
  FUN_14767badc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767ba4e FUN_14767ba4e body=52 status=ok
// SIG undefined FUN_14767ba4e(void)

void FUN_14767ba4e(longlong *param_1)

{
  FUN_14767ba82();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14767ba82 FUN_14767ba82 body=89 status=ok
// SIG undefined FUN_14767ba82(void)

void FUN_14767ba82(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 14767badc FUN_14767badc body=155 status=ok
// SIG undefined FUN_14767badc(void)

void FUN_14767badc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d78e0;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14767ba4e(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014767bb6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14767bb78 FUN_14767bb78 body=135 status=ok
// SIG undefined FUN_14767bb78(void)

void FUN_14767bb78(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x20) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767bc00 FUN_14767bc00 body=154 status=ok
// SIG undefined FUN_14767bc00(void)

void FUN_14767bc00(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_2c = param_1[1];
  lVar1 = FUN_14479d2ce(&local_30);
  if (lVar1 != 0) {
    lVar2 = FUN_144a799b0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14479d2ce(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767bcb6 FUN_14767bcb6 body=114 status=ok
// SIG undefined FUN_14767bcb6(void)

void FUN_14767bcb6(longlong *param_1,int param_2)

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



// FUNCTION 14767bd28 FUN_14767bd28 body=62 status=ok
// SIG undefined FUN_14767bd28(void)

void FUN_14767bd28(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14767bd66(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,4);
  }
  return;
}



// FUNCTION 14767bd66 FUN_14767bd66 body=112 status=ok
// SIG undefined FUN_14767bd66(void)

ulonglong FUN_14767bd66(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14767bda0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,4);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14767bda0:
  return param_2 & 0xffffffff;
}



// FUNCTION 14767bdd6 FUN_14767bdd6 body=275 status=ok
// SIG undefined FUN_14767bdd6(void)

int * FUN_14767bdd6(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  int *local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(lVar4 + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], *param_2 = iVar5, iVar5 != -1))
          goto LAB_14767bec2;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(undefined8 *)param_3;
  FUN_14767beea(param_1 + 0x68,&local_48);
  *(undefined8 *)local_40 = uVar2;
  *(undefined1 *)(local_40 + 7) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  *(undefined4 *)((longlong)local_40 + 0x17) = 0;
  *param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_48,0);
LAB_14767bec2:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767beea FUN_14767beea body=229 status=ok
// SIG undefined FUN_14767beea(void)

int * FUN_14767beea(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 14767bfd0 FUN_14767bfd0 body=167 status=ok
// SIG undefined FUN_14767bfd0(void)

longlong FUN_14767bfd0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_14767bdd6(param_1,&local_30,&local_38);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c078 FUN_14767c078 body=137 status=ok
// SIG undefined FUN_14767c078(void)

void FUN_14767c078(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  cVar1 = FUN_14767c102();
  if (cVar1 != '\0') {
    FUN_14767bfd0(param_1,local_34,param_3);
    if (**(int **)(param_1 + 0xb0) != 0) {
      thunk_FUN_140adeba6(*(int **)(param_1 + 0xb0),local_34);
    }
    FUN_14767c184(param_1,param_2,local_34,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c102 FUN_14767c102 body=129 status=ok
// SIG undefined FUN_14767c102(void)

byte FUN_14767c102(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14767c25e(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14767c184 FUN_14767c184 body=217 status=ok
// SIG undefined FUN_14767c184(void)

void FUN_14767c184(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_3 + 8);
  lVar4 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),param_3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0));
  }
  cVar3 = FUN_14767c39c(param_1,iVar2,uVar5);
  if (cVar3 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    FUN_14485c47a(&local_58,*(undefined8 *)(param_4 + 0x120));
    uStack_50 = (undefined7)*(undefined8 *)(param_4 + 0x128);
    uStack_49._0_1_ = (undefined1)((ulonglong)*(undefined8 *)(param_4 + 0x128) >> 0x38);
    FUN_14767c434(param_1,iVar2,uVar5,&local_58);
  }
  if (*param_2 == '\x01') {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x1c + (longlong)iVar2 * 0x20);
    *pbVar1 = *pbVar1 | 2;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c25e FUN_14767c25e body=171 status=ok
// SIG undefined FUN_14767c25e(void)

longlong FUN_14767c25e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14767c30a(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c30a FUN_14767c30a body=145 status=ok
// SIG undefined FUN_14767c30a(void)

int * FUN_14767c30a(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 14767c39c FUN_14767c39c body=151 status=ok
// SIG undefined FUN_14767c39c(void)

ulonglong FUN_14767c39c(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined7 uVar6;
  
  lVar7 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x1c);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x18) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x18) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x18;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar7 + 0x1c));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14767c434 FUN_14767c434 body=148 status=ok
// SIG undefined FUN_14767c434(void)

void FUN_14767c434(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar4 + 0x1c) & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x18) = param_4[4];
      uVar1 = param_4[1];
      uVar2 = param_4[2];
      uVar3 = param_4[3];
      *(undefined4 *)(lVar4 + 8) = *param_4;
      *(undefined4 *)(lVar4 + 0xc) = uVar1;
      *(undefined4 *)(lVar4 + 0x10) = uVar2;
      *(undefined4 *)(lVar4 + 0x14) = uVar3;
      *(byte *)(lVar4 + 0x1c) = *(byte *)(lVar4 + 0x1c) | 1;
    }
    else {
      FUN_14767c4ca(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined4 *)(lVar4 + 0x18) = param_4[4];
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *(undefined4 *)(lVar4 + 8) = *param_4;
    *(undefined4 *)(lVar4 + 0xc) = uVar1;
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
    *(undefined4 *)(lVar4 + 0x14) = uVar3;
    *(byte *)(lVar4 + 0x1c) = *(byte *)(lVar4 + 0x1c) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c4ca FUN_14767c4ca body=216 status=ok
// SIG undefined FUN_14767c4ca(void)

void FUN_14767c4ca(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    iVar6 = *param_2;
    uVar9 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar9;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x18) < iVar6) {
        uVar9 = uVar1 + (uVar7 & 1);
      }
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    if (((int)uVar9 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar9 * 0x18) <= iVar6)) {
      piVar10 = (int *)(lVar8 + (ulonglong)uVar9 * 0x18);
      goto LAB_14767c56f;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14767c5a2(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar4 = (ulonglong)uVar9 * 0x18;
  memmove((void *)(lVar8 + lVar4 + 0x18),(void *)(lVar8 + lVar4),(ulonglong)(uVar2 - uVar9) * 0x18);
  piVar10 = (int *)(lVar4 + *param_1);
  iVar6 = *param_2;
LAB_14767c56f:
  *piVar10 = iVar6;
  uVar5 = param_3[1];
  *(undefined8 *)(piVar10 + 1) = *param_3;
  *(undefined8 *)(piVar10 + 3) = uVar5;
  piVar10[5] = *(int *)(param_3 + 2);
  return;
}



// FUNCTION 14767c5a2 FUN_14767c5a2 body=147 status=ok
// SIG undefined FUN_14767c5a2(void)

void FUN_14767c5a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14767c636 FUN_14767c636 body=167 status=ok
// SIG undefined FUN_14767c636(void)

void FUN_14767c636(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14767c6b1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14767c6b1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14767c6b1:
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
                    /* WARNING: Could not recover jumptable at 0x00014767c6d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14767c6de FUN_14767c6de body=167 status=ok
// SIG undefined FUN_14767c6de(void)

void FUN_14767c6de(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c786 FUN_14767c786 body=120 status=ok
// SIG undefined FUN_14767c786(void)

void FUN_14767c786(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014767c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14767c7fe FUN_14767c7fe body=48 status=ok
// SIG undefined FUN_14767c7fe(void)

void FUN_14767c7fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14767c82e FUN_14767c82e body=38 status=ok
// SIG undefined FUN_14767c82e(void)

undefined8 FUN_14767c82e(undefined8 param_1,int param_2)

{
  FUN_141029c86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767c860 FUN_14767c860 body=95 status=ok
// SIG undefined FUN_14767c860(void)

void FUN_14767c860(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x50);
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50;
  uStack_20 = *(undefined4 *)(lVar1 + 8);
  uStack_1c = *(undefined4 *)(lVar1 + 0xc);
  local_28 = *param_4;
  FUN_14767cd78();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767c8c0 FUN_14767c8c0 body=1169 status=ok
// SIG undefined FUN_14767c8c0(void)

ulonglong FUN_14767c8c0(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong unaff_RBP;
  undefined7 uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar7 == '\0') goto LAB_14767c93d;
  }
  uVar12 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x68);
      lVar8 = (longlong)param_2 * 0x50;
      lVar2 = lVar5 + lVar8;
      local_88 = *(undefined8 *)(lVar5 + 0x10 + lVar8);
      puVar9 = (undefined4 *)(lVar5 + lVar8);
      local_98 = *puVar9;
      uStack_94 = puVar9[1];
      uStack_90 = puVar9[2];
      uStack_8c = puVar9[3];
      local_80 = *(longlong *)(lVar5 + 0x18 + lVar8);
      if ((DAT_14c950c29 == '\x01') && (local_80 != 0)) {
        FUN_1456cec3c();
      }
      local_78 = *(undefined8 *)(lVar2 + 0x20);
      local_70 = *(undefined4 *)(lVar2 + 0x28);
      uStack_6c = *(undefined4 *)(lVar2 + 0x2c);
      uStack_68 = *(undefined4 *)(lVar2 + 0x30);
      uStack_64 = *(undefined4 *)(lVar2 + 0x34);
      lVar5 = *(longlong *)(lVar2 + 0x38);
      uVar11 = 0;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      local_58 = *(undefined4 *)(lVar2 + 0x40);
      local_54 = *(undefined4 *)(lVar2 + 0x44);
      *(undefined8 *)(lVar2 + 0x40) = 0;
      bVar15 = *(byte *)(lVar2 + 0x48);
      local_60 = lVar5;
      local_50 = bVar15;
      FUN_145ccf858(param_1 + 0x18);
      FUN_145ccf7a8(param_1 + 0x68,param_2);
      uVar3 = *(uint *)(param_1 + 0xa8);
      if (0 < (int)uVar3) {
        uVar11 = 0;
        uVar10 = (ulonglong)uVar3;
        uVar13 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar14 = (uint)uVar10 + (int)uVar11;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x38) < param_2) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar6 = 1 < uVar13;
          uVar13 = (uint)uVar10;
        } while (bVar6);
      }
      if (((int)uVar11 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 0x38) <= param_2)) {
        FUN_14767cf40(param_1 + 0xa0,uVar11);
        FUN_14767cf98(param_1 + 0xa0);
      }
      if ((bVar15 & 1) != 0) {
        FUN_14767ce14(&local_98,&local_80);
        lVar5 = local_60;
      }
joined_r0x00014767cc55:
      if (lVar5 != 0) {
        FUN_1400020a8(lVar5);
      }
      unaff_RBP = 0;
      goto LAB_14767c93d;
    }
    unaff_RBP = CONCAT71(uVar12,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50) & 1) == 0)
    goto LAB_14767c93d;
    puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar14 = 0;
    uVar13 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar13 >> 1) + uVar14;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 0x38) < param_2) {
          uVar14 = uVar1 + (uVar13 & 1);
        }
        bVar6 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar6);
    }
    lVar2 = param_1 + 0xa0;
    if ((((int)uVar14 < (int)uVar3) && (*(int *)(lVar5 + (ulonglong)uVar14 * 0x38) <= param_2)) &&
       (lVar5 + (ulonglong)uVar14 * 0x38 != -8)) {
      FUN_14767ce14((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar11 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar13 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar14 = (uint)uVar10 + (int)uVar11;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x38) < param_2) {
            uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
          }
          bVar6 = 1 < uVar13;
          uVar13 = (uint)uVar10;
        } while (bVar6);
      }
      unaff_RBP = CONCAT71(uVar12,1);
      if (((int)uVar11 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 0x38) <= param_2)) {
        FUN_14767cf40(lVar2);
        FUN_14767cf98(lVar2);
      }
      goto LAB_14767c93d;
    }
    unaff_RBP = CONCAT71(uVar12,1);
    if (param_4 == '\x01') {
      bVar15 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      if ((bVar15 & 1) == 0) goto LAB_14767c93d;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      *(byte *)(puVar9 + 0x12) = bVar15 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14767c93d;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      bVar15 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      if ((bVar15 & 2) == 0) {
        local_88 = *(undefined8 *)(puVar9 + 4);
        local_98 = *puVar9;
        uStack_94 = puVar9[1];
        uStack_90 = puVar9[2];
        uStack_8c = puVar9[3];
        local_80 = *(longlong *)(puVar9 + 6);
        if ((DAT_14c950c29 == '\x01') && (local_80 != 0)) {
          FUN_1456cec3c();
          bVar15 = *(byte *)(puVar9 + 0x12);
        }
        local_78 = *(undefined8 *)(puVar9 + 8);
        local_70 = puVar9[10];
        uStack_6c = puVar9[0xb];
        uStack_68 = puVar9[0xc];
        uStack_64 = puVar9[0xd];
        lVar5 = *(longlong *)(puVar9 + 0xe);
        uVar11 = 0;
        *(undefined8 *)(puVar9 + 0xe) = 0;
        local_58 = puVar9[0x10];
        local_54 = puVar9[0x11];
        *(undefined8 *)(puVar9 + 0x10) = 0;
        local_60 = lVar5;
        local_50 = bVar15;
        FUN_145ccf858(param_1 + 0x18);
        FUN_145ccf7a8(param_1 + 0x68,param_2);
        uVar3 = *(uint *)(param_1 + 0xa8);
        if (0 < (int)uVar3) {
          uVar11 = 0;
          uVar10 = (ulonglong)uVar3;
          uVar13 = uVar3;
          do {
            uVar10 = uVar10 >> 1;
            uVar14 = (uint)uVar10 + (int)uVar11;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar14 * 0x38) < param_2) {
              uVar11 = (ulonglong)(uVar14 + (uVar13 & 1));
            }
            bVar6 = 1 < uVar13;
            uVar13 = (uint)uVar10;
          } while (bVar6);
        }
        if (((int)uVar11 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 0x38) <= param_2)) {
          FUN_14767cf40(lVar2,uVar11);
          FUN_14767cf98(lVar2);
        }
        if ((bVar15 & 1) != 0) {
          FUN_14767ce14(&local_98,&local_80);
          lVar5 = local_60;
        }
        goto joined_r0x00014767cc55;
      }
      if ((bVar15 & 1) == 0) goto LAB_14767c93d;
    }
  }
  FUN_14767ce14(puVar9,puVar9 + 6);
LAB_14767c93d:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14767cd52 FUN_14767cd52 body=38 status=ok
// SIG undefined FUN_14767cd52(void)

undefined8 FUN_14767cd52(undefined8 param_1,int param_2)

{
  FUN_141029c86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767cd78 FUN_14767cd78 body=154 status=ok
// SIG undefined FUN_14767cd78(void)

void FUN_14767cd78(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x68);
  lVar6 = (longlong)param_2 * 0x50;
  local_48 = *(undefined8 *)(lVar2 + 0x10 + lVar6);
  local_58 = *(undefined8 *)(lVar2 + lVar6);
  uStack_50 = ((undefined8 *)(lVar2 + lVar6))[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + lVar6);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = *(undefined8 *)(param_3 + 4);
  local_3c = param_2;
  FUN_145ccf858(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1458e44de(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ce14 FUN_14767ce14 body=196 status=ok
// SIG undefined FUN_14767ce14(void)

void FUN_14767ce14(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_38 = FUN_14479d2ce(&local_38);
  local_30 = (undefined4)param_1[1];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_28 = (undefined4)param_1[2];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x14);
  if (local_38 == 0) goto LAB_14767ceba;
  if (DAT_14c76101e == '\x01') {
    lVar1 = FUN_1402d20ea(param_2 + 1);
    if (lVar1 == 0) {
      lVar1 = FUN_140cc27fc(param_2 + 1);
      goto LAB_14767ce7e;
    }
  }
  else {
    lVar1 = *param_2;
LAB_14767ce7e:
    if (lVar1 == 0) goto LAB_14767ceba;
  }
  if (DAT_14c76101e == '\x01') {
    lVar1 = FUN_1402d20ea(param_2 + 1);
    if (lVar1 == 0) {
      lVar1 = FUN_140cc27fc(param_2 + 1,0);
    }
  }
  else {
    lVar1 = *param_2;
  }
  FUN_140ca1018(&local_38,lVar1);
LAB_14767ceba:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767ceda FUN_14767ceda body=101 status=ok
// SIG undefined FUN_14767ceda(void)

longlong * FUN_14767ceda(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = param_2[1];
  lVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar1;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  return param_1;
}



// FUNCTION 14767cf40 FUN_14767cf40 body=88 status=ok
// SIG undefined FUN_14767cf40(void)

void FUN_14767cf40(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x28 + (longlong)(int)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x38);
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar2) * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14767cf98 FUN_14767cf98 body=63 status=ok
// SIG undefined FUN_14767cf98(void)

void FUN_14767cf98(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14767cfd8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 14767cfd8 FUN_14767cfd8 body=109 status=ok
// SIG undefined FUN_14767cfd8(void)

ulonglong FUN_14767cfd8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 14767d046 FUN_14767d046 body=38 status=ok
// SIG undefined FUN_14767d046(void)

undefined8 FUN_14767d046(undefined8 param_1,int param_2)

{
  FUN_141029c86();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767d06c FUN_14767d06c body=116 status=ok
// SIG undefined FUN_14767d06c(void)

void FUN_14767d06c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 14767d0f0 FUN_14767d0f0 body=93 status=ok
// SIG undefined FUN_14767d0f0(void)

void FUN_14767d0f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7af0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a4d7a80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767d14e FUN_14767d14e body=93 status=ok
// SIG undefined FUN_14767d14e(void)

void FUN_14767d14e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7af0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a4d7a80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767d1ac FUN_14767d1ac body=126 status=ok
// SIG undefined FUN_14767d1ac(void)

void FUN_14767d1ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a4d7af0;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d7a80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014767d21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14767d244 FUN_14767d244 body=29 status=ok
// SIG undefined FUN_14767d244(void)

undefined8 FUN_14767d244(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14767d262 FUN_14767d262 body=252 status=ok
// SIG undefined FUN_14767d262(void)

void * FUN_14767d262(void *param_1,void *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    uVar2 = *(int *)((longlong)param_2 + 0x20) + 0x1fU & 0xffffffe0;
    *(undefined4 *)((longlong)param_1 + 0x20) = 0;
    if (*(int *)((longlong)param_1 + 0x24) < (int)uVar2 ||
        0x100 < *(int *)((longlong)param_1 + 0x24)) {
      uVar3 = 0x100;
      if (0x100 < (int)uVar2) {
        uVar3 = uVar2;
      }
      *(uint *)((longlong)param_1 + 0x24) = uVar3;
      FUN_14497ddce(param_1,0);
    }
    iVar1 = *(int *)((longlong)param_2 + 0x20);
    *(int *)((longlong)param_1 + 0x20) = iVar1;
    if (iVar1 != 0) {
      memcpy(param_1,param_2,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar2 = *(int *)((longlong)param_2 + 0x48) + 0x1fU & 0xffffffe0;
    *(undefined4 *)((longlong)param_1 + 0x48) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) < (int)uVar2 ||
        0x100 < *(int *)((longlong)param_1 + 0x4c)) {
      uVar3 = 0x100;
      if (0x100 < (int)uVar2) {
        uVar3 = uVar2;
      }
      *(uint *)((longlong)param_1 + 0x4c) = uVar3;
      FUN_14497ddce((void *)((longlong)param_1 + 0x28),0);
    }
    iVar1 = *(int *)((longlong)param_2 + 0x48);
    *(int *)((longlong)param_1 + 0x48) = iVar1;
    if (iVar1 != 0) {
      memcpy((void *)((longlong)param_1 + 0x28),(void *)((longlong)param_2 + 0x28),
             (ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    }
  }
  FUN_141314232((longlong)param_1 + 0x50,(longlong)param_2 + 0x50);
  return param_1;
}



// FUNCTION 14767d35e FUN_14767d35e body=224 status=ok
// SIG undefined FUN_14767d35e(void)

void FUN_14767d35e(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    uVar5 = 0;
    uVar4 = uVar2;
    do {
      uVar1 = (uVar4 >> 1) + uVar5;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x38) < *param_2) {
        uVar5 = uVar1 + (uVar4 & 1);
      }
      bVar3 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar3);
    if (((int)uVar5 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar5 * 0x38) <= *param_2)) {
      piVar7 = (int *)(lVar8 + (ulonglong)uVar5 * 0x38);
      FUN_141029f75(piVar7,1);
      goto LAB_14767d405;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14767d43e(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar6 = (ulonglong)uVar5 * 0x38;
  memmove((void *)(lVar8 + lVar6 + 0x38),(void *)(lVar8 + lVar6),(ulonglong)(uVar2 - uVar5) * 0x38);
  piVar7 = (int *)(lVar6 + *param_1);
LAB_14767d405:
  *piVar7 = *param_2;
  FUN_14767ceda(piVar7 + 2,param_3);
  return;
}



// FUNCTION 14767d43e FUN_14767d43e body=143 status=ok
// SIG undefined FUN_14767d43e(void)

void FUN_14767d43e(longlong param_1,int param_2)

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



// FUNCTION 14767d4de FUN_14767d4de body=93 status=ok
// SIG undefined FUN_14767d4de(void)

void FUN_14767d4de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14767d53c FUN_14767d53c body=93 status=ok
// SIG undefined FUN_14767d53c(void)

void FUN_14767d53c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a4d7700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d7b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


