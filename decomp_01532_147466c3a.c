// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147466c3a FUN_147466c3a body=60 status=ok
// SIG undefined FUN_147466c3a(void)

undefined8 * FUN_147466c3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3ca5f0;
  FUN_146325a70(param_1 + 2);
  FUN_144a4509c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147466c76 FUN_147466c76 body=120 status=ok
// SIG undefined FUN_147466c76(void)

void FUN_147466c76(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_147461eb4(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1461e29ae(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147466cee FUN_147466cee body=168 status=ok
// SIG undefined FUN_147466cee(void)

longlong * FUN_147466cee(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  uint local_38;
  longlong *local_30;
  code *local_28;
  longlong **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1401e2408();
  local_20 = &local_30;
  local_28 = FUN_142840874;
  local_38 = uVar1 | 0x90200000;
  local_30 = param_1;
  FUN_140245161(uVar2,&local_28,1,0x10);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147466d98 FUN_147466d98 body=63 status=ok
// SIG undefined FUN_147466d98(void)

void FUN_147466d98(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147467408(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1474670e6(param_1);
    return;
  }
  FUN_1474672c4(param_1);
  FUN_147467408(param_1);
  return;
}



// FUNCTION 147466dd8 FUN_147466dd8 body=312 status=ok
// SIG undefined FUN_147466dd8(void)

undefined4 * FUN_147466dd8(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147466f12(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147466ff8(param_1,uVar3,local_40,&local_4c);
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
      FUN_1474670e6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147466f12 FUN_147466f12 body=229 status=ok
// SIG undefined FUN_147466f12(void)

int * FUN_147466f12(longlong *param_1,int *param_2)

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



// FUNCTION 147466ff8 FUN_147466ff8 body=124 status=ok
// SIG undefined FUN_147466ff8(void)

undefined8 FUN_147466ff8(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147467074(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147467074 FUN_147467074 body=114 status=ok
// SIG undefined FUN_147467074(void)

void FUN_147467074(longlong *param_1,int param_2)

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



// FUNCTION 1474670e6 FUN_1474670e6 body=477 status=ok
// SIG undefined FUN_1474670e6(void)

void FUN_1474670e6(longlong *param_1)

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



// FUNCTION 1474672c4 FUN_1474672c4 body=322 status=ok
// SIG undefined FUN_1474672c4(void)

void FUN_1474672c4(longlong *param_1)

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



// FUNCTION 147467408 FUN_147467408 body=89 status=ok
// SIG undefined FUN_147467408(void)

void FUN_147467408(longlong param_1)

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



// FUNCTION 147467462 FUN_147467462 body=52 status=ok
// SIG undefined FUN_147467462(void)

void FUN_147467462(longlong *param_1)

{
  FUN_147467408();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147467496 FUN_147467496 body=232 status=ok
// SIG undefined FUN_147467496(void)

longlong * FUN_147467496(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  lVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140c99534(param_1 + 1,iVar1,0);
    FUN_140c994e3(param_1[1],lVar2,iVar1);
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  FUN_147467616(param_1 + 4,param_2 + 4);
  param_1[0x11] = param_2[0x11];
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  FUN_1474676b2(param_1 + 0x13,param_2 + 0x13);
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  FUN_1474676b2(param_1 + 0x21,param_2 + 0x21);
  plVar3 = param_2 + 0x2e;
  plVar4 = param_1 + 0x2e;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  return param_1;
}



// FUNCTION 14746757e FUN_14746757e body=150 status=ok
// SIG undefined FUN_14746757e(void)

void FUN_14746757e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1b8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1b8)) {
      uVar5 = uVar4 / 0x1b8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1b8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147467616 FUN_147467616 body=155 status=ok
// SIG undefined FUN_147467616(void)

undefined8 * FUN_147467616(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_146def7b8(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1474676b2 FUN_1474676b2 body=151 status=ok
// SIG undefined FUN_1474676b2(void)

undefined8 * FUN_1474676b2(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_140cae46a(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14746774a FUN_14746774a body=202 status=ok
// SIG undefined FUN_14746774a(void)

int FUN_14746774a(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
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



// FUNCTION 147467814 FUN_147467814 body=110 status=ok
// SIG undefined FUN_147467814(void)

void FUN_147467814(longlong param_1,uint param_2)

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
    FUN_140841128(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_140ca3e5c(param_1);
    return;
  }
  FUN_147467882(param_1);
  FUN_140841128(param_1,param_2);
  return;
}



// FUNCTION 147467882 FUN_147467882 body=322 status=ok
// SIG undefined FUN_147467882(void)

void FUN_147467882(longlong *param_1)

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



// FUNCTION 1474679c6 FUN_1474679c6 body=375 status=ok
// SIG undefined FUN_1474679c6(void)

undefined4 * FUN_1474679c6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ca3c76(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar7 = *(ulonglong *)*param_3;
  *local_40 = uVar7;
  if ((uVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar7);
    uVar7 = *local_40;
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  if (((bVar2 & 1) != 0) && (uVar7 != 0)) {
    FUN_1456cec3c(uVar7);
  }
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  cVar4 = FUN_147467b3e(param_1,uVar5,local_40,&local_4c);
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
      FUN_140ca3e5c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147467b3e FUN_147467b3e body=164 status=ok
// SIG undefined FUN_147467b3e(void)

undefined8 FUN_147467b3e(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_14746774a(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_147467be4(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_147467b62;
    }
  }
  uVar6 = 0;
LAB_147467b62:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147467be4 FUN_147467be4 body=114 status=ok
// SIG undefined FUN_147467be4(void)

void FUN_147467be4(longlong *param_1,int param_2)

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



// FUNCTION 147467c56 FUN_147467c56 body=69 status=ok
// SIG undefined FUN_147467c56(void)

void FUN_147467c56(longlong param_1,uint param_2)

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
    FUN_140ca3e5c(param_1);
    return;
  }
  return;
}



// FUNCTION 147467c9c FUN_147467c9c body=87 status=ok
// SIG undefined FUN_147467c9c(void)

void FUN_147467c9c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147467be4();
  return;
}



// FUNCTION 147467cf4 FUN_147467cf4 body=48 status=ok
// SIG undefined FUN_147467cf4(void)

void FUN_147467cf4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147467d24 FUN_147467d24 body=204 status=ok
// SIG undefined FUN_147467d24(void)

void FUN_147467d24(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_147467d77;
    }
  }
  lVar2 = 0;
LAB_147467d77:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147468040(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147467e06 FUN_147467e06 body=90 status=ok
// SIG undefined FUN_147467e06(void)

void FUN_147467e06(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147467e60 FUN_147467e60 body=141 status=ok
// SIG undefined FUN_147467e60(void)

void FUN_147467e60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 147468040 FUN_147468040 body=465 status=ok
// SIG undefined FUN_147468040(void)

void FUN_147468040(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14746816f:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_147468187;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14746816f;
LAB_147468187:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_147468212(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147468212 FUN_147468212 body=119 status=ok
// SIG undefined FUN_147468212(void)

void FUN_147468212(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147467e60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14746828a FUN_14746828a body=98 status=ok
// SIG undefined FUN_14746828a(void)

void FUN_14746828a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14746836c FUN_14746836c body=477 status=ok
// SIG undefined FUN_14746836c(void)

void FUN_14746836c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa5f80 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caa5f80,0,0,4);
  }
  uVar3 = DAT_14caa5f88;
  uVar2 = local_50;
  if (DAT_14caa5f88 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14caa5f78,0,DAT_14caa5f88,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14caa5f80;
        if (DAT_14caa5f80 == (undefined *)0x0) {
          puVar6 = &DAT_14caa5f78;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14caa5f88 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caa5f50;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caa5f68 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caa5f40;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x48);
        uVar9 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                (longlong)(int)DAT_14caa5f88 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x44 + lVar5 * 0x48) = iVar8;
        puVar6 = DAT_14caa5f80;
        if (DAT_14caa5f80 == (undefined *)0x0) {
          puVar6 = &DAT_14caa5f78;
        }
        *(undefined4 *)(lVar1 + 0x40 + lVar5 * 0x48) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14caa5f88 - 1U & uVar9) * 4);
        puVar6 = DAT_14caa5f80;
        if (DAT_14caa5f80 == (undefined *)0x0) {
          puVar6 = &DAT_14caa5f78;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14caa5f88 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14746854a FUN_14746854a body=221 status=ok
// SIG undefined FUN_14746854a(void)

void FUN_14746854a(int param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  puVar5 = &DAT_14caa5f78;
  if (DAT_14caa5f80 != (undefined *)0x0) {
    puVar5 = DAT_14caa5f80;
  }
  lVar1 = DAT_14caa5f40 + (longlong)param_1 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)(puVar5 + lVar6 * 4);
  if (iVar4 == param_1) {
    puVar3 = (undefined4 *)(puVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(DAT_14caa5f40 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_1);
    puVar3 = (undefined4 *)(DAT_14caa5f40 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  lVar1 = DAT_14caa5f40;
  if (DAT_14caa5f74 != 0) {
    *(int *)(DAT_14caa5f40 + (longlong)DAT_14caa5f70 * 0x48) = param_1;
  }
  *(undefined4 *)(lVar1 + (longlong)param_1 * 0x48) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caa5f74) {
    iVar4 = DAT_14caa5f70;
  }
  *(int *)(lVar1 + 4 + (longlong)param_1 * 0x48) = iVar4;
  DAT_14caa5f74 = DAT_14caa5f74 + 1;
  puVar3 = &DAT_14caa5f50;
  if (DAT_14caa5f60 != (undefined4 *)0x0) {
    puVar3 = DAT_14caa5f60;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar2 = (byte)param_1 & 0x1f;
  DAT_14caa5f70 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 1474685a8 FUN_1474685a8 body=109 status=ok
// SIG undefined FUN_1474685a8(void)

void FUN_1474685a8(longlong param_1,int param_2)

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



// FUNCTION 147468616 FUN_147468616 body=162 status=ok
// SIG undefined FUN_147468616(void)

void FUN_147468616(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar10 = *param_1;
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (lVar9 != 0) {
    uVar11 = 0;
    do {
      cVar8 = FUN_1474686b8(lVar10 + uVar11,param_2);
      if (cVar8 != '\0') {
        if ((int)(uVar11 >> 3) * -0x49249249 != -1) {
          return;
        }
        break;
      }
      uVar11 = uVar11 + 0x38;
    } while (lVar9 * 0x38 - uVar11 != 0);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147468756(param_1,iVar2);
    lVar10 = *param_1;
  }
  lVar9 = lVar9 * 0x38;
  *(undefined8 *)(lVar10 + 0x30 + lVar9) = param_2[6];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar9);
  *puVar1 = param_2[4];
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar9);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(undefined8 *)(lVar10 + lVar9) = uVar3;
  ((undefined8 *)(lVar10 + lVar9))[1] = uVar4;
  return;
}



// FUNCTION 1474686b8 FUN_1474686b8 body=157 status=ok
// SIG undefined FUN_1474686b8(void)

bool FUN_1474686b8(double *param_1,double *param_2)

{
  if ((*param_1 <= *param_2) && (*param_2 <= param_1[3])) {
    if ((param_1[1] <= param_2[1]) && (param_2[1] <= param_1[4])) {
      if ((param_1[2] <= param_2[2]) && (param_2[2] <= param_1[5])) {
        if (param_2[3] < *param_1) {
          return false;
        }
        if (param_1[3] < param_2[3]) {
          return false;
        }
        if (param_2[4] < param_1[1]) {
          return false;
        }
        if (param_1[4] < param_2[4]) {
          return false;
        }
        if (param_1[2] <= param_2[5]) {
          return param_2[5] <= param_1[5];
        }
      }
    }
  }
  return false;
}



// FUNCTION 147468756 FUN_147468756 body=143 status=ok
// SIG undefined FUN_147468756(void)

void FUN_147468756(longlong param_1,int param_2)

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



// FUNCTION 1474687e6 FUN_1474687e6 body=173 status=ok
// SIG undefined FUN_1474687e6(void)

undefined8 FUN_1474687e6(longlong param_1,longlong param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0x30;
    do {
      if (*(char *)(param_1 + lVar3) != '\0' || *(char *)(param_2 + lVar3) != '\0') {
        if (*(char *)(param_1 + lVar3) == '\0') {
          return 0;
        }
        if (*(char *)(param_2 + lVar3) == '\0') {
          return 0;
        }
        dVar2 = *(double *)(param_1 + -0x30 + lVar3);
        pdVar1 = (double *)(param_2 + -0x30 + lVar3);
        if ((dVar2 != *pdVar1) || (NAN(dVar2) || NAN(*pdVar1))) {
          return 0;
        }
        dVar2 = *(double *)(param_1 + -0x28 + lVar3);
        pdVar1 = (double *)(param_2 + -0x28 + lVar3);
        if (dVar2 != *pdVar1) {
          return 0;
        }
        if (NAN(dVar2) || NAN(*pdVar1)) {
          return 0;
        }
        dVar2 = *(double *)(param_1 + -0x20 + lVar3);
        pdVar1 = (double *)(param_2 + -0x20 + lVar3);
        if (dVar2 != *pdVar1) {
          return 0;
        }
        if (NAN(dVar2) || NAN(*pdVar1)) {
          return 0;
        }
        dVar2 = *(double *)(param_1 + -0x18 + lVar3);
        pdVar1 = (double *)(param_2 + -0x18 + lVar3);
        if (dVar2 != *pdVar1) {
          return 0;
        }
        if (NAN(dVar2) || NAN(*pdVar1)) {
          return 0;
        }
        dVar2 = *(double *)(param_1 + -0x10 + lVar3);
        pdVar1 = (double *)(param_2 + -0x10 + lVar3);
        if (dVar2 != *pdVar1) {
          return 0;
        }
        if (NAN(dVar2) || NAN(*pdVar1)) {
          return 0;
        }
        dVar2 = *(double *)(param_1 + -8 + lVar3);
        pdVar1 = (double *)(param_2 + -8 + lVar3);
        if (dVar2 != *pdVar1) {
          return 0;
        }
        if (NAN(dVar2) || NAN(*pdVar1)) {
          return 0;
        }
      }
      lVar3 = lVar3 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 147468894 FUN_147468894 body=111 status=ok
// SIG undefined FUN_147468894(void)

void FUN_147468894(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147468908 FUN_147468908 body=114 status=ok
// SIG undefined FUN_147468908(void)

void FUN_147468908(longlong *param_1,int param_2)

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



// FUNCTION 14746897a FUN_14746897a body=87 status=ok
// SIG undefined FUN_14746897a(void)

void FUN_14746897a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1474689d2();
  return;
}



// FUNCTION 1474689d2 FUN_1474689d2 body=114 status=ok
// SIG undefined FUN_1474689d2(void)

void FUN_1474689d2(longlong *param_1,int param_2)

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



// FUNCTION 147468a44 FUN_147468a44 body=64 status=ok
// SIG undefined FUN_147468a44(void)

void FUN_147468a44(void)

{
  if (DAT_14caa609c != 0) {
    DAT_14caa609c = 0;
    FUN_1446f8d3c(&DAT_14caa6090,DAT_14caa6098,0,8,8);
  }
  return;
}



// FUNCTION 147468a84 FUN_147468a84 body=364 status=ok
// SIG undefined FUN_147468a84(void)

void FUN_147468a84(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14caa60e0;
  if (DAT_14caa60e8 != (undefined *)0x0) {
    puVar5 = DAT_14caa60e8;
  }
  iVar4 = DAT_14caa60f0 + 3;
  if (-1 < DAT_14caa60f0) {
    iVar4 = DAT_14caa60f0;
  }
  if (DAT_14caa60b0 - DAT_14caa60dc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14caa60b8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14caa60d0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14caa60d0;
    }
    local_78 = &DAT_14caa60a8;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14caa60b8)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar2 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14caa60a8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14caa60b8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14caa60f0) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14caa60f0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147468bf2 FUN_147468bf2 body=140 status=ok
// SIG undefined FUN_147468bf2(void)

void FUN_147468bf2(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14caa6098;
  if (param_1 <= (int)DAT_14caa6098) {
    if (DAT_14caa609c == 0) {
      uVar2 = 4;
      if (4 < DAT_14caa6098) {
        uVar2 = DAT_14caa6098;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14caa6098 + ((ulonglong)((longlong)(int)DAT_14caa6098 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14caa609c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14caa6090,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147468c80 FUN_147468c80 body=258 status=ok
// SIG undefined FUN_147468c80(void)

void FUN_147468c80(longlong *param_1)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar5 = (int)param_1[1] + -1;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    iVar9 = 1;
    if (0 < iVar5) {
      iVar5 = 1;
    }
    memmove((void *)*param_1,(void *)((longlong)((int)param_1[1] - iVar5) * 0x10 + *param_1),
            (longlong)iVar5 << 4);
    lVar4 = param_1[1];
    iVar5 = (int)lVar4 + -1;
    *(int *)(param_1 + 1) = iVar5;
    if (2 < (int)lVar4) {
      lVar4 = *param_1;
      iVar6 = 0;
      iVar10 = 0;
      do {
        iVar6 = iVar6 + 2;
        iVar8 = iVar9;
        if ((iVar6 < iVar5) &&
           (dVar2 = *(double *)(lVar4 + 8 + (longlong)iVar6 * 0x10),
           pdVar1 = (double *)(lVar4 + 8 + (longlong)iVar9 * 0x10),
           dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
          iVar8 = iVar6;
        }
        dVar2 = *(double *)(lVar4 + 8 + (longlong)iVar10 * 0x10);
        pdVar1 = (double *)(lVar4 + 8 + (longlong)iVar8 * 0x10);
        if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + lVar4);
        puVar11 = (undefined8 *)((longlong)iVar8 * 0x10 + lVar4);
        local_28 = *puVar7;
        uStack_20 = puVar7[1];
        uVar3 = puVar11[1];
        *puVar7 = *puVar11;
        puVar7[1] = uVar3;
        *puVar11 = local_28;
        puVar11[1] = uStack_20;
        iVar6 = iVar8 * 2;
        iVar9 = iVar8 * 2 + 1;
        iVar10 = iVar8;
      } while (iVar9 < iVar5);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147468d84 FUN_147468d84 body=38 status=ok
// SIG undefined FUN_147468d84(void)

undefined8 FUN_147468d84(undefined8 param_1,int param_2)

{
  FUN_147468db8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147468db8 FUN_147468db8 body=67 status=ok
// SIG undefined FUN_147468db8(void)

void FUN_147468db8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3cb060;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1474664c4(param_1 + 10);
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 147468dfc FUN_147468dfc body=163 status=ok
// SIG undefined FUN_147468dfc(void)

void FUN_147468dfc(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 147468ea0 FUN_147468ea0 body=29 status=ok
// SIG undefined FUN_147468ea0(void)

undefined8 FUN_147468ea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147468ebe FUN_147468ebe body=258 status=ok
// SIG undefined FUN_147468ebe(void)

void FUN_147468ebe(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa6750) {
    FUN_144b3d300(&DAT_14caa6750);
    if (DAT_14caa6750 == -1) {
      FUN_147468fc2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLandscapeGrassPassParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x23;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa66d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432615dd);
      _Init_thread_footer(&DAT_14caa6750);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147468fc2 FUN_147468fc2 body=226 status=ok
// SIG undefined FUN_147468fc2(void)

longlong * FUN_147468fc2(longlong *param_1)

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
  pcVar13 = FUN_1474690a6;
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



// FUNCTION 1474690a6 FUN_1474690a6 body=136 status=ok
// SIG undefined FUN_1474690a6(void)

code * FUN_1474690a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746912e;
}



// FUNCTION 14746912e FUN_14746912e body=142 status=ok
// SIG undefined FUN_14746912e(void)

code * FUN_14746912e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1474691bc;
}



// FUNCTION 1474691bc FUN_1474691bc body=144 status=ok
// SIG undefined FUN_1474691bc(void)

code * FUN_1474691bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a89e78(0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14746924c;
}



// FUNCTION 14746924c FUN_14746924c body=136 status=ok
// SIG undefined FUN_14746924c(void)

undefined1 * FUN_14746924c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x24;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1474692d4;
}



// FUNCTION 1474692d8 FUN_1474692d8 body=78 status=ok
// SIG undefined FUN_1474692d8(void)

void FUN_1474692d8(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((ulonglong)param_2 << 6,0);
    uVar1 = (uint)(uVar2 >> 6);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x4c)) {
    return;
  }
  *(uint *)(param_1 + 0x4c) = uVar3;
  FUN_147469326(param_1,*(undefined4 *)(param_1 + 0x48),uVar3);
  return;
}



// FUNCTION 147469326 FUN_147469326 body=132 status=ok
// SIG undefined FUN_147469326(void)

void FUN_147469326(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x40);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x40);
  return;
}



// FUNCTION 1474693aa FUN_1474693aa body=124 status=ok
// SIG undefined FUN_1474693aa(void)

void FUN_1474693aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x4c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 6,0);
      iVar3 = (int)(uVar4 >> 6);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar6;
    FUN_147469326(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147469428 FUN_147469428 body=442 status=ok
// SIG undefined FUN_147469428(void)

void FUN_147469428(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)(param_1 + 0x24);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14746664a(param_1);
      iVar11 = *(int *)(param_1 + 0x20);
      iVar10 = *(int *)(param_1 + 0x24);
    }
    *(uint *)(param_1 + 0x20) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1474697c6(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar3 = param_1;
    }
    if (iVar11 < (int)param_2) {
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)(param_1 + 0x44);
      puVar5 = (undefined4 *)(lVar3 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)(param_1 + 0x40) * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)(param_1 + 0x44) < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x40);
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar2;
        *(int *)(param_1 + 0x40) = iVar8 + -1;
        iVar10 = *(int *)(param_1 + 0x44) + 1;
        *(int *)(param_1 + 0x44) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x38) = uVar7;
      if (param_2 != 0) {
        pvVar6 = (void *)(param_1 + 0x28);
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)(param_1 + 0x3c) + 0x1fU >> 5 < uVar12) {
          FUN_144aa70c6(pvVar6,0,uVar12,4);
          *(uint *)(param_1 + 0x3c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = *(void **)(param_1 + 0x30);
        if (*(void **)(param_1 + 0x30) == (void *)0x0) {
          _Dst = pvVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = *(int *)(param_1 + 0x38);
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if (*(void **)(param_1 + 0x30) != (void *)0x0) {
            pvVar6 = *(void **)(param_1 + 0x30);
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)pvVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar2 = FUN_14489e6aa(param_1 + 0x28,uVar7);
      FUN_1470f4066(param_1 + 0x28,uVar2,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1474695e2 FUN_1474695e2 body=482 status=ok
// SIG undefined FUN_1474695e2(void)

void FUN_1474695e2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
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
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1446efa72(param_1 + 0x50,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x58);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x48;
    uVar6 = 0;
    FUN_144a1cbf0(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x58) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0x28;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0x18);
        if (*(longlong *)(local_70 + 0x18) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x58) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x58) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x58) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474697c6 FUN_1474697c6 body=139 status=ok
// SIG undefined FUN_1474697c6(void)

void FUN_1474697c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x24) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x24) = iVar6;
    FUN_1474666aa(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147469852 FUN_147469852 body=63 status=ok
// SIG undefined FUN_147469852(void)

void FUN_147469852(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14746698a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1474699d6(param_1);
    return;
  }
  FUN_147469892(param_1);
  FUN_14746698a(param_1);
  return;
}



// FUNCTION 147469892 FUN_147469892 body=322 status=ok
// SIG undefined FUN_147469892(void)

void FUN_147469892(longlong *param_1)

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



// FUNCTION 1474699d6 FUN_1474699d6 body=474 status=ok
// SIG undefined FUN_1474699d6(void)

void FUN_1474699d6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147469bb1 FUN_147469bb1 body=38 status=ok
// SIG undefined FUN_147469bb1(void)

void FUN_147469bb1(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_LAB_14a3cb1b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147469bd8 FUN_147469bd8 body=132 status=ok
// SIG undefined FUN_147469bd8(void)

void FUN_147469bd8(longlong param_1,int param_2)

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



// FUNCTION 147469cae FUN_147469cae body=98 status=ok
// SIG undefined FUN_147469cae(void)

bool FUN_147469cae(longlong param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_3 < 1) {
    bVar6 = true;
  }
  else {
    iVar2 = 0;
    bVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x1c) <= iVar2) break;
      iVar4 = *(int *)(param_1 + 0x18);
      iVar3 = iVar4;
      if (param_3 < iVar4) {
        iVar3 = param_3;
      }
      if (iVar3 != 0) {
        pbVar5 = (byte *)((longlong)iVar2 * (longlong)*(int *)(param_1 + 0x10) +
                         *(longlong *)(param_1 + 8));
        do {
          bVar1 = bVar1 | *pbVar5;
          *param_2 = *pbVar5;
          param_2 = param_2 + 1;
          pbVar5 = pbVar5 + *(int *)(param_1 + 0x14);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar4 = *(int *)(param_1 + 0x18);
      }
      iVar2 = iVar2 + 1;
      iVar3 = param_3 - iVar4;
      bVar6 = iVar4 <= param_3;
      param_3 = iVar3;
    } while (iVar3 != 0 && bVar6);
    bVar6 = bVar1 == 0;
  }
  return bVar6;
}



// FUNCTION 147469d18 FUN_147469d18 body=62 status=ok
// SIG undefined FUN_147469d18(void)

void FUN_147469d18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147469d56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147469d56 FUN_147469d56 body=93 status=ok
// SIG undefined FUN_147469d56(void)

ulonglong FUN_147469d56(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147469db4 FUN_147469db4 body=326 status=ok
// SIG undefined FUN_147469db4(void)

undefined4 * FUN_147469db4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147469efc(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147469fe2(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1474699d6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147469efc FUN_147469efc body=230 status=ok
// SIG undefined FUN_147469efc(void)

int * FUN_147469efc(longlong *param_1,int *param_2)

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



// FUNCTION 147469fe2 FUN_147469fe2 body=128 status=ok
// SIG undefined FUN_147469fe2(void)

undefined8 FUN_147469fe2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14746a062((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14746a062 FUN_14746a062 body=114 status=ok
// SIG undefined FUN_14746a062(void)

void FUN_14746a062(longlong *param_1,int param_2)

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



// FUNCTION 14746a0d4 FUN_14746a0d4 body=301 status=ok
// SIG undefined FUN_14746a0d4(void)

undefined4 * FUN_14746a0d4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14746a202(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14746a2fe(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    cVar3 = FUN_14746a428(param_1,*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x44));
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x58) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_40 + 0x14) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar7 = param_1 + 0x48;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x58) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar7 = param_1 + 0x48;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x58) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746a202 FUN_14746a202 body=252 status=ok
// SIG undefined FUN_14746a202(void)

int * FUN_14746a202(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar6 + 1;
    if (*(int *)(param_1 + 0x24) == iVar6) {
      FUN_1474697c6(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0x28,1);
    lVar5 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar5 = param_1 + 0x28;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x40);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0x40) = iVar4;
    iVar3 = *(int *)(param_1 + 0x44) + -1;
    *(int *)(param_1 + 0x44) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 14746a2fe FUN_14746a2fe body=175 status=ok
// SIG undefined FUN_14746a2fe(void)

undefined8 FUN_14746a2fe(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x44) != 1) &&
     (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x44))) {
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        lVar4 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar4 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_3) {
          lVar4 = plVar1[1];
          if (lVar4 != 0) {
            FUN_1408410b2(lVar4);
            FUN_1400020a8(lVar4);
          }
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar1 = (int)*param_3;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_14746a3ae(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 14746a3ae FUN_14746a3ae body=121 status=ok
// SIG undefined FUN_14746a3ae(void)

void FUN_14746a3ae(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x40) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x44) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x40);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  lVar5 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14746a428 FUN_14746a428 body=87 status=ok
// SIG undefined FUN_14746a428(void)

undefined8 FUN_14746a428(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (param_2 < 4) {
    iVar3 = 1;
  }
  if (((int)param_2 < 1) || (iVar3 <= *(int *)(param_1 + 0x58))) {
    uVar4 = 0;
  }
  else {
    *(int *)(param_1 + 0x58) = iVar3;
    FUN_1474695e2(param_1);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 14746a480 FUN_14746a480 body=129 status=ok
// SIG undefined FUN_14746a480(void)

longlong FUN_14746a480(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_14746a501();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_140cb88ca(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14746a501 FUN_14746a501 body=652 status=ok
// SIG undefined FUN_14746a501(void)

longlong * FUN_14746a501(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
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
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_1402ac1b3(param_1,lVar5 + (longlong)iVar8 * 0x20);
        (**(code **)(*param_1 + 0x138))(param_1,lVar5 + (longlong)iVar8 * 0x20 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1407bb85e(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_140cb86e4(param_2,&local_90);
        puVar3 = local_88 + 2;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        FUN_1402ac1b3(param_1);
        (**(code **)(*param_1 + 0x138))(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14746a78e FUN_14746a78e body=31 status=ok
// SIG undefined FUN_14746a78e(void)

undefined8 FUN_14746a78e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746a7bc FUN_14746a7bc body=93 status=ok
// SIG undefined FUN_14746a7bc(void)

void FUN_14746a7bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3cb1d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14746a81a FUN_14746a81a body=93 status=ok
// SIG undefined FUN_14746a81a(void)

void FUN_14746a81a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3cb1d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14746a878 FUN_14746a878 body=126 status=ok
// SIG undefined FUN_14746a878(void)

void FUN_14746a878(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3cb1d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014746a8e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14746a902 FUN_14746a902 body=31 status=ok
// SIG undefined FUN_14746a902(void)

undefined8 FUN_14746a902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746a934 FUN_14746a934 body=93 status=ok
// SIG undefined FUN_14746a934(void)

void FUN_14746a934(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3cb2b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14746a992 FUN_14746a992 body=93 status=ok
// SIG undefined FUN_14746a992(void)

void FUN_14746a992(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb320;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3cb2b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14746a9f0 FUN_14746a9f0 body=126 status=ok
// SIG undefined FUN_14746a9f0(void)

void FUN_14746a9f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb320;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3cb2b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014746aa5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14746aa8a FUN_14746aa8a body=34 status=ok
// SIG undefined FUN_14746aa8a(void)

undefined8
FUN_14746aa8a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5);
  return 1;
}



// FUNCTION 14746aaae FUN_14746aaae body=31 status=ok
// SIG undefined FUN_14746aaae(void)

undefined8 FUN_14746aaae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746aade FUN_14746aade body=93 status=ok
// SIG undefined FUN_14746aade(void)

void FUN_14746aade(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3cb390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14746ab3c FUN_14746ab3c body=93 status=ok
// SIG undefined FUN_14746ab3c(void)

void FUN_14746ab3c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3cb390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14746ab9a FUN_14746ab9a body=126 status=ok
// SIG undefined FUN_14746ab9a(void)

void FUN_14746ab9a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3cb390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014746ac09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14746ac24 FUN_14746ac24 body=31 status=ok
// SIG undefined FUN_14746ac24(void)

undefined8 FUN_14746ac24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746ac60 FUN_14746ac60 body=93 status=ok
// SIG undefined FUN_14746ac60(void)

void FUN_14746ac60(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3cb420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14746acbe FUN_14746acbe body=126 status=ok
// SIG undefined FUN_14746acbe(void)

void FUN_14746acbe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3cb420;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014746ad2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14746ad3c FUN_14746ad3c body=21 status=ok
// SIG undefined FUN_14746ad3c(void)

undefined8 FUN_14746ad3c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14746ad7a FUN_14746ad7a body=160 status=ok
// SIG undefined FUN_14746ad7a(void)

void FUN_14746ad7a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x640))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746ae1c FUN_14746ae1c body=160 status=ok
// SIG undefined FUN_14746ae1c(void)

void FUN_14746ae1c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x638))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746aeca FUN_14746aeca body=1260 status=ok
// SIG undefined FUN_14746aeca(void)

void FUN_14746aeca(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_30 = 0;
  FUN_1446f4b16();
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
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
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
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar2 = local_50;
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar1 = local_54;
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = iVar1 != 0;
  local_90 = iVar2 != 0;
  local_78 = local_68;
  local_80 = local_60;
  local_98 = local_4c;
  local_a0 = local_48;
  local_a8 = local_44;
  local_b0 = local_40;
  local_b8 = local_3c;
  FUN_1474558f6(param_1,local_30,local_34,local_38);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746b3b8 FUN_14746b3b8 body=156 status=ok
// SIG undefined FUN_14746b3b8(void)

void FUN_14746b3b8(undefined8 param_1,longlong param_2)

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
  FUN_147455acc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746b456 FUN_14746b456 body=42 status=ok
// SIG undefined FUN_14746b456(void)

void FUN_14746b456(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x650))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14746b492 FUN_14746b492 body=345 status=ok
// SIG undefined FUN_14746b492(void)

void FUN_14746b492(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14745c1da(param_1,local_30,iVar1 != 0,local_38 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746b5ec FUN_14746b5ec body=238 status=ok
// SIG undefined FUN_14746b5ec(void)

void FUN_14746b5ec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  FUN_147455a3e(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746b6dc FUN_14746b6dc body=238 status=ok
// SIG undefined FUN_14746b6dc(void)

void FUN_14746b6dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1474558f8(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746b7cc FUN_14746b7cc body=238 status=ok
// SIG undefined FUN_14746b7cc(void)

void FUN_14746b7cc(undefined8 param_1,longlong param_2)

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
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_147455980(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746b8bc FUN_14746b8bc body=151 status=ok
// SIG undefined FUN_14746b8bc(void)

void FUN_14746b8bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147455ad6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746ba5c FUN_14746ba5c body=89 status=ok
// SIG undefined FUN_14746ba5c(void)

void FUN_14746ba5c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x3a0);
  uStack_24 = *(undefined4 *)(param_1 + 0x3a4);
  uStack_20 = *(undefined4 *)(param_1 + 0x3a8);
  uStack_1c = *(undefined4 *)(param_1 + 0x3ac);
  uVar1 = *(undefined4 *)(param_1 + 0x3f0);
  uVar2 = FUN_1447210f0();
  FUN_141793840(uVar2,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746bace FUN_14746bace body=125 status=ok
// SIG undefined FUN_14746bace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746bace(void)

{
  _DAT_14caa7130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa7138,1);
  _DAT_14caa7120 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014746bb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caa7128,1);
  return;
}



// FUNCTION 14746bb4c FUN_14746bb4c body=94 status=ok
// SIG undefined FUN_14746bb4c(void)

void FUN_14746bb4c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144769b64(param_1,iVar2);
    }
    FUN_147470cef((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14746bbaa FUN_14746bbaa body=94 status=ok
// SIG undefined FUN_14746bbaa(void)

void FUN_14746bbaa(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144769b64(param_1,iVar2);
    }
    FUN_147470d06((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 14746bc08 FUN_14746bc08 body=334 status=ok
// SIG undefined FUN_14746bc08(void)

void FUN_14746bc08(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  do {
    plVar1 = *(longlong **)(param_2 + 0x10);
    if (plVar1 == (longlong *)0x0) {
LAB_14746bca2:
      if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
        uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        lVar4 = *(longlong *)(param_1 + 0xa8);
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          lVar4 = param_1 + 0xa0;
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0xb0) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
        if (iVar5 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x68) + (longlong)iVar5 * 0x30;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar5 * 0x30) == param_2)
            goto LAB_14746bcaf;
            iVar5 = *(int *)(lVar4 + 0x28);
          } while (iVar5 != -1);
        }
      }
    }
    else {
      if (*(code **)(*plVar1 + 0x58) == (code *)&LAB_144b15db2) {
        uVar2 = *(uint *)(plVar1 + 4);
      }
      else {
        uVar2 = (**(code **)(*plVar1 + 0x58))();
      }
      if (uVar2 == 0) goto LAB_14746bca2;
      if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
        lVar4 = *(longlong *)(param_1 + 0xf8);
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          lVar4 = param_1 + 0xf0;
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x100) - 1U & uVar2) * 4);
        if (iVar5 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 0x30;
            if (*(uint *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar5 * 0x30) == uVar2)
            goto LAB_14746bcaf;
            iVar5 = *(int *)(lVar4 + 0x28);
          } while (iVar5 != -1);
        }
      }
    }
    lVar4 = 0;
LAB_14746bcaf:
    lVar3 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    param_2 = *(ulonglong *)(param_2 + 0x30a0);
    if ((param_2 == 0) || (lVar3 != 0)) {
      return;
    }
  } while( true );
}



// FUNCTION 14746bd56 FUN_14746bd56 body=8 status=ok
// SIG undefined FUN_14746bd56(void)

undefined8 * FUN_14746bd56(void)

{
  return &DAT_14caa7230;
}



// FUNCTION 14746bd5e FUN_14746bd5e body=140 status=ok
// SIG undefined FUN_14746bd5e(void)

longlong FUN_14746bd5e(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14042f362(&local_28,param_1);
  if ((longlong)local_20 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = (longlong)local_20 << 3;
    lVar3 = 0;
    plVar2 = local_28;
    do {
      if (*(int *)(*plVar2 + 0x1fc) == param_2) {
        lVar3 = *plVar2;
        if (plVar2 == (longlong *)0x0) {
          lVar3 = 0;
        }
        break;
      }
      plVar2 = plVar2 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  if (local_28 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14746bdec FUN_14746bdec body=94 status=ok
// SIG undefined FUN_14746bdec(void)

void FUN_14746bdec(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_144769b64(param_1,iVar2);
  }
  FUN_147471ae6((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14746be4a FUN_14746be4a body=94 status=ok
// SIG undefined FUN_14746be4a(void)

void FUN_14746be4a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_144769b64(param_1,iVar2);
  }
  FUN_147471b02((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14746bea8 FUN_14746bea8 body=42 status=ok
// SIG undefined FUN_14746bea8(void)

undefined8 * FUN_14746bea8(undefined8 *param_1)

{
  FUN_144b1dcb8();
  *param_1 = &PTR_FUN_14a3c2d50;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 14746bed2 FUN_14746bed2 body=66 status=ok
// SIG undefined FUN_14746bed2(void)

void FUN_14746bed2(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147471bde(param_1,iVar1);
  }
  FUN_147471b40((longlong)iVar1 * 0x30 + *param_1,param_2);
  return;
}



// FUNCTION 14746bf14 FUN_14746bf14 body=106 status=ok
// SIG undefined FUN_14746bf14(void)

undefined4 * FUN_14746bf14(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  lVar3 = *(longlong *)(param_2 + 6);
  lVar4 = *(longlong *)(param_1 + 6);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 6) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 14746bf7e FUN_14746bf7e body=1062 status=ok
// SIG undefined FUN_14746bf7e(void)

undefined8 * FUN_14746bf7e(longlong *param_1,longlong *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_178 [44];
  int local_14c;
  int local_148;
  int local_144;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 *local_128;
  longlong local_120;
  undefined1 local_118 [80];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  uint uStack_a8;
  uint uStack_a4;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined4 uStack_88;
  undefined3 uStack_84;
  undefined5 uStack_81;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_14c = param_4;
  if (param_2 == (longlong *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(code **)(*param_2 + 0x58))(param_2);
  }
  if ((longlong)(int)param_1[1] != 0) {
    lVar10 = 0;
    do {
      puVar8 = *(undefined8 **)(*param_1 + lVar10);
      if (*(int *)(puVar8 + 3) == iVar6) goto LAB_14746c31b;
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)param_1[1] * 8 != lVar10);
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x400,0x10);
  FUN_14746c3a6();
  iVar11 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar11 + 1U) {
    FUN_1456bd870(param_1,iVar11);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar11 * 8) = puVar8;
  *puVar8 = param_1;
  *(int *)(puVar8 + 3) = iVar6;
  if (param_2 != (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*param_2 + 200))(param_2);
    if (*plVar9 == 0) {
      lVar10 = 0;
    }
    else {
      *(undefined8 **)(*plVar9 + 0x10) = puVar8 + 1;
      lVar10 = *plVar9;
    }
    puVar8[1] = lVar10;
    puVar8[2] = plVar9;
    *plVar9 = (longlong)puVar8;
  }
  *(uint *)((longlong)puVar8 + 0x1c) = param_3;
  if (0 < (int)param_3) {
    local_128 = puVar8 + 4;
    local_14c = local_14c * local_14c;
    local_140 = (ulonglong)param_3;
    local_148 = param_3 << 0x18;
    iVar11 = 0;
    lVar13 = 0;
    uVar12 = local_140;
    iVar6 = iVar11;
    uVar5 = 0;
    lVar10 = lVar13;
    do {
      do {
        local_130 = lVar10;
        local_138 = uVar5;
        local_144 = iVar6;
        local_c8 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_ba = 0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        local_b2 = 1;
        uStack_81 = 0;
        local_91 = 0;
        uStack_90 = 0;
        uStack_89 = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_a0 = 0;
        uStack_99 = 0;
        local_b1 = 0;
        uStack_b0 = 0;
        uStack_a9 = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caa72c0) &&
           (FUN_144b3d300(&DAT_14caa72c0), DAT_14caa72c0 == -1)) {
          FUN_1446ddc76(&DAT_14caa72b8,"FLandscapeComponentSceneProxy",1);
          _Init_thread_footer(&DAT_14caa72c0);
        }
        DAT_14caa72c4 = DAT_14caa72c4 + 1;
        FUN_1474121aa(&local_78,DAT_14caa72b8);
        lVar10 = local_c8;
        uStack_88 = local_70;
        uStack_90 = (undefined7)local_78;
        uStack_89 = (undefined1)((ulonglong)local_78 >> 0x38);
        if (local_c8 != 0) {
          local_c8 = 0;
          LOCK();
          puVar1 = (uint *)(lVar10 + 8);
          uVar7 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar7 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        uVar7 = uStack_a8;
        uStack_bc = 0;
        uStack_ba = 0;
        uStack_b4 = 0x101;
        lVar10 = (longlong)(int)uStack_a8;
        uStack_a8 = uStack_a8 + 1;
        if (uStack_a4 < uStack_a8) {
          FUN_1471b2628(&uStack_b0,uVar7);
        }
        puVar4 = local_128;
        uVar7 = iVar11 >> 0x18;
        lVar3 = CONCAT17(uStack_a9,uStack_b0);
        *(undefined8 *)(lVar3 + lVar10 * 0x28) = 0;
        *(undefined8 *)(lVar3 + 8 + lVar10 * 0x28) = 3;
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x28) = 0xc;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x28) = local_14c;
        *(undefined8 *)(lVar3 + 0x18 + lVar10 * 0x28) = 0;
        *(undefined1 *)(lVar3 + 0x20 + lVar10 * 0x28) = 0;
        *(undefined2 *)(lVar3 + 0x21 + lVar10 * 0x28) = 0x101;
        puVar2 = local_128 + (ulonglong)uVar7 * 0x1f + 2;
        FUN_147377468(local_118,&local_c8);
        FUN_141793e86(puVar4 + (ulonglong)uVar7 * 0x1f + 10,local_118);
        FUN_14005bca4(local_118);
        FUN_14742848e(puVar2,&DAT_14ca85100);
        local_78 = lVar13;
        FUN_14326699e(&local_120,&local_78);
        lVar10 = puVar4[(ulonglong)uVar7 * 0x1f + 0x1e];
        puVar4[(ulonglong)uVar7 * 0x1f + 0x1e] = local_120;
        local_120 = 0;
        if (lVar10 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar10 + 8);
          uVar7 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar7 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
          if (local_120 != 0) {
            LOCK();
            puVar1 = (uint *)(local_120 + 8);
            uVar7 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar7 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        FUN_14005bca4(&local_c8);
        lVar13 = lVar13 + 1;
        iVar11 = iVar11 + 0x1000000;
        uVar12 = uVar12 - 1;
        iVar6 = local_144;
        uVar5 = local_138;
        lVar10 = local_130;
      } while (uVar12 != 0);
      lVar13 = local_130 + 0x100000000;
      iVar11 = local_144 + local_148;
      uVar12 = local_140;
      iVar6 = iVar11;
      uVar5 = local_138 + 1;
      lVar10 = lVar13;
    } while (local_138 + 1 != local_140);
  }
LAB_14746c31b:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 14746c3a6 FUN_14746c3a6 body=168 status=ok
// SIG undefined FUN_14746c3a6(void)

undefined8 * FUN_14746c3a6(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  lVar2 = 0;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x20) = 0xff;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x24) = 0xc47a0000c47a0000;
    *(undefined4 *)((longlong)param_1 + lVar2 + 0x2c) = 0;
    FUN_143268f94((longlong)param_1 + lVar2 + 0x30);
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x110) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0xe0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0xf0);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0xfc);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = lVar2 + 0xf8;
  } while (lVar2 != 0x3e0);
  return param_1;
}



// FUNCTION 14746c44e FUN_14746c44e body=161 status=ok
// SIG undefined FUN_14746c44e(void)

void FUN_14746c44e(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    **(longlong **)(param_1 + 0x10) = lVar4;
  }
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          lVar4 = (ulonglong)(uint)(int)(char)((char)iVar1 * (char)iVar2 + (char)iVar3) * 0xf8;
          FUN_14052082e(param_1 + 0x20 + lVar4 + 0x10);
          FUN_1407f1458(param_1 + 0x20 + lVar4 + 0xc0);
          iVar3 = iVar3 + 1;
          iVar1 = *(int *)(param_1 + 0x1c);
        } while (iVar3 < iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  lVar4 = 0x308;
  do {
    FUN_14746fc50(param_1 + lVar4);
    lVar4 = lVar4 + -0xf8;
  } while (lVar4 != -0xd8);
  return;
}



// FUNCTION 14746c4f0 FUN_14746c4f0 body=45 status=ok
// SIG undefined FUN_14746c4f0(void)

int * FUN_14746c4f0(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144807416(param_1,param_3,param_1 + 0x30);
  iVar2 = 2;
  if (iVar1 != 4) {
    iVar2 = iVar1;
  }
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 14746c51e FUN_14746c51e body=66 status=ok
// SIG undefined FUN_14746c51e(void)

void FUN_14746c51e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147471cfe(param_1,iVar1);
  }
  FUN_147471b40((longlong)iVar1 * 0x30 + *param_1,param_2);
  return;
}



// FUNCTION 14746c560 FUN_14746c560 body=600 status=ok
// SIG undefined FUN_14746c560(void)

void FUN_14746c560(longlong param_1,int param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  
  lVar11 = (longlong)param_2;
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x570) +
           (longlong)*(char *)(*(longlong *)(param_1 + 0x588) + lVar11) * 8);
  if (lVar2 != 0) {
    param_3[0x17] = *(undefined8 *)(param_1 + 0x560);
    param_3[0x18] = lVar2;
    param_3[0x19] = *(undefined8 *)(param_1 + 0x580);
    uVar4 = (*(byte *)(param_1 + 0x6b) & 1) * 0x40 +
            (*(uint *)((longlong)param_3 + 0xe4) & 0xfffffabf) + 0x500;
    *(uint *)((longlong)param_3 + 0xe4) = uVar4;
    uVar6 = 0x200;
    if (((*(byte *)(param_1 + 0x78) & 1) != 0) && (2 < *(int *)(*(longlong *)(param_1 + 0x210) + 8))
       ) {
      uVar6 = (uint)(1 < (byte)(*(char *)(param_1 + 0x68) - 1U)) << 0xb | 0x200;
    }
    *(byte *)((longlong)param_3 + 0xde) = (byte)param_2;
    *(uint *)((longlong)param_3 + 0xe4) = uVar4 & 0xfef035ff | uVar6;
    if (DAT_14caa7238 != DAT_14caa7264) {
      puVar10 = &DAT_14caa7268;
      if (DAT_14caa7270 != (undefined *)0x0) {
        puVar10 = DAT_14caa7270;
      }
      uVar4 = *(uint *)(puVar10 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 0x2b0)) * 4);
      while (uVar4 != 0xffffffff) {
        puVar7 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar4 * 0x18);
        if (*puVar7 == *(uint *)(param_1 + 0x2b0)) goto LAB_14746c639;
        uVar4 = puVar7[4];
      }
    }
    puVar7 = (uint *)0x0;
LAB_14746c639:
    lVar2 = *(longlong *)(puVar7 + 2);
    iVar8 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar8 + 1U) {
      FUN_147471cfe(param_4,iVar8);
    }
    lVar3 = *param_4;
    lVar9 = (longlong)iVar8 * 0x30;
    lVar1 = lVar3 + lVar9;
    *(undefined8 *)(lVar3 + 0x18 + lVar9) = 0;
    *(longlong *)(lVar3 + 8 + lVar9) = param_1 + 0x5d8;
    *(longlong *)(lVar3 + 0x10 + lVar9) = param_1 + 0x600;
    lVar2 = *(longlong *)(lVar2 + 0x60);
    if (lVar2 != 0) {
      *(longlong *)(lVar1 + 0x18) = lVar2;
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)(lVar1 + 0x20) = param_1;
    *(int *)(lVar1 + 0x28) = param_2;
    puVar5 = (undefined8 *)param_3[0x15];
    if ((undefined8 *)param_3[0x15] == (undefined8 *)0x0) {
      puVar5 = param_3;
    }
    puVar5[7] = lVar1;
    *puVar5 = *(undefined8 *)(param_1 + 0x250);
    puVar5[3] = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x58) + lVar11 * 8);
    iVar8 = ((*(int *)(param_1 + 0x330) >> ((byte)param_2 & 0x1f)) + -1) * *(int *)(param_1 + 0x328)
    ;
    *(int *)((longlong)puVar5 + 0x5c) = iVar8 * iVar8 * 2;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)(puVar5 + 0xd) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x60) + 0x20 + lVar11 * 0x28);
    *(undefined4 *)((longlong)puVar5 + 0x6c) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x60) + 0x24 + lVar11 * 0x28);
    if (*(char *)(param_1 + 0x3e1) == '\x01') {
      FUN_14745bf82(*(undefined8 *)(param_1 + 0x558),param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14746c7b8 FUN_14746c7b8 body=192 status=ok
// SIG undefined FUN_14746c7b8(void)

void FUN_14746c7b8(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &local_28;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  cVar1 = FUN_14745c0be(param_2,*(undefined4 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2b8),
                        (int)*(char *)(param_3 + 0xde));
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_3 + 0xa8);
    if (*(longlong *)(param_3 + 0xa8) == 0) {
      lVar2 = param_3;
    }
    *(undefined4 *)(lVar2 + 0x5c) = 0;
    lVar2 = *(longlong *)(param_3 + 0xa8);
    if (*(longlong *)(param_3 + 0xa8) == 0) {
      lVar2 = param_3;
    }
    *(undefined4 *)(lVar2 + 0x60) = 0;
    lVar2 = *(longlong *)(param_3 + 0xa8);
    if (*(longlong *)(param_3 + 0xa8) == 0) {
      lVar2 = param_3;
    }
    *(undefined8 *)(lVar2 + 0x48) = local_28;
    lVar2 = *(longlong *)(param_3 + 0xa8);
    if (*(longlong *)(param_3 + 0xa8) == 0) {
      lVar2 = param_3;
    }
    *(undefined4 *)(lVar2 + 0x50) = (undefined4)local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746c87a FUN_14746c87a body=2987 status=ok
// SIG undefined FUN_14746c87a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746c87a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  float fVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  undefined *puVar16;
  longlong lVar17;
  char *pcVar18;
  char cVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_4a8 [44];
  int local_47c;
  char *local_478;
  longlong local_470;
  longlong local_468;
  uint local_45c;
  longlong local_458;
  int local_450;
  int local_44c;
  uint local_448;
  uint local_444;
  longlong local_440;
  char *local_438;
  undefined8 *local_430;
  longlong local_428;
  longlong local_420;
  ulonglong local_418;
  longlong local_410;
  longlong local_408;
  longlong *local_400;
  char *local_3f8;
  longlong local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 *local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  char *local_378;
  longlong local_370;
  uint uStack_368;
  uint uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined1 uStack_350;
  byte bStack_34f;
  undefined2 uStack_34e;
  undefined2 uStack_34c;
  undefined2 uStack_34a;
  undefined4 uStack_348;
  undefined8 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 *local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined8 uStack_30c;
  undefined4 uStack_304;
  undefined8 local_300;
  longlong local_2f8;
  undefined4 local_2ef;
  undefined3 uStack_2eb;
  undefined8 local_2e8;
  uint local_2e0;
  undefined4 local_2dc;
  undefined1 local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  char *local_2c8;
  char *local_2c0;
  undefined1 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_260 [168];
  undefined1 *local_1b8;
  uint local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_17c;
  byte local_178;
  undefined1 local_170 [168];
  undefined1 *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if ((*(char *)(param_1 + 0x2d1) == '\x01') && (*(int *)(DAT_14caa70d0 + 4) != 0)) {
    if (DAT_14caa7238 != DAT_14caa7264) {
      puVar16 = &DAT_14caa7268;
      if (DAT_14caa7270 != (undefined *)0x0) {
        puVar16 = DAT_14caa7270;
      }
      uVar15 = *(uint *)(puVar16 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 0x2b0)) * 4)
      ;
      while (uVar15 != 0xffffffff) {
        puVar14 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar15 * 0x18);
        if (*puVar14 == *(uint *)(param_1 + 0x2b0)) goto LAB_14746c95d;
        uVar15 = puVar14[4];
      }
    }
    puVar14 = (uint *)0x0;
LAB_14746c95d:
    lVar13 = *(longlong *)(param_2 + 0x148);
    local_468 = *(longlong *)(puVar14 + 2);
    puVar8 = *(undefined8 **)(param_1 + 0x2d8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *puVar6 = FUN_147471d54;
      puVar8 = puVar6 + 2;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 **)(param_1 + 0x2d8) = puVar8;
    }
    local_440 = FUN_14746bf7e(puVar8,*(undefined8 *)(lVar13 + 0x10),*(undefined4 *)(param_1 + 0x328)
                             );
    lVar9 = local_468;
    uVar12 = *(undefined8 *)(param_1 + 0x2b8);
    lVar7 = FUN_14746bc08(local_468,lVar13);
    uVar3 = *(ulonglong *)(lVar7 + 8);
    uVar11 = lVar7 + 8 + ((longlong)uVar3 >> 0x18);
    if ((uVar3 & 1) == 0) {
      uVar11 = uVar3;
    }
    fVar2 = *(float *)(uVar11 + (longlong)
                                ((((int)((ulonglong)uVar12 >> 0x20) - *(int *)(lVar9 + 8)) *
                                  *(int *)(lVar9 + 0xc) + (int)uVar12) - *(int *)(lVar9 + 4)) * 4);
    puVar8 = (undefined8 *)FUN_14326d4f8(*(undefined8 *)(param_2 + 0xe8));
    *puVar8 = &PTR_FUN_14a3d4338;
    puVar8[1] = 0;
    puVar8[2] = 0;
    local_400 = puVar8 + 1;
    FUN_14746c51e(local_400,*(int *)(param_1 + 0x328) * *(int *)(param_1 + 0x328));
    if (*(int *)(param_1 + 0x578) != 0) {
      local_450 = (int)fVar2;
      uVar15 = (uint)(char)local_450;
      if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)(param_1 + 0x590))) {
        local_418 = (ulonglong)uVar15;
        lVar9 = (longlong)*(char *)(*(longlong *)(param_1 + 0x588) + local_418);
        if ((lVar9 != -1) &&
           (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x570) + lVar9 * 8), lVar9 != 0)) {
          local_c8 = (undefined1 *)0x0;
          local_c0 = 0x100000000;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0xffffffff;
          local_98 = 0xff0000ffffffff;
          uStack_90 = uStack_90 & 0xffffff00;
          uStack_8c = 0x40c00f07;
          local_88 = local_88 & 0xfc;
          local_45c = uVar15;
          local_458 = param_2;
          local_420 = lVar13;
          FUN_141793e06(local_170);
          local_b8 = *(undefined8 *)(param_1 + 0x560);
          local_a8 = *(undefined8 *)(param_1 + 0x580);
          uStack_8c = uStack_8c | 0x40000300;
          local_98 = local_98 & 0xffffffff00000000;
          uStack_b0 = lVar9;
          FUN_1400ccf58(local_170,0);
          iVar22 = *(int *)(param_1 + 0x328);
          if (0 < iVar22) {
            local_440 = local_440 + 0x20;
            local_408 = param_1 + 0x5d8;
            local_410 = param_1 + 0x600;
            local_428 = local_468 + 0x20;
            local_430 = (undefined8 *)(param_1 + 0x100);
            local_47c = 0;
            lVar13 = local_468;
            do {
              if (0 < iVar22) {
                local_448 = local_448 & 0xfffffff8;
                local_444 = local_444 & 0xffffc000;
                iVar21 = 0;
                do {
                  cVar19 = (char)iVar22 * (char)local_47c + (char)iVar21;
                  local_1b8 = (undefined1 *)0x0;
                  puVar10 = local_c8;
                  if (local_c8 == (undefined1 *)0x0) {
                    puVar10 = local_170;
                  }
                  FUN_144739392(local_260,puVar10,local_c0 & 0xffffffff);
                  local_178 = local_88;
                  local_188 = (undefined4)local_98;
                  uStack_184 = local_98._4_4_;
                  uStack_180 = uStack_90;
                  uStack_17c = uStack_8c;
                  local_198 = (undefined4)local_a8;
                  uStack_194 = local_a8._4_4_;
                  uStack_190 = (undefined4)uStack_a0;
                  uStack_18c = uStack_a0._4_4_;
                  local_1a8 = (undefined4)local_b8;
                  uStack_1a4 = local_b8._4_4_;
                  uStack_1a0 = (undefined4)uStack_b0;
                  uStack_19c = uStack_b0._4_4_;
                  lVar9 = *local_400;
                  lVar17 = (longlong)cVar19 * 0x30;
                  puVar8 = (undefined8 *)(lVar9 + lVar17);
                  *(longlong *)(lVar9 + 8 + lVar17) = local_408;
                  *(longlong *)(lVar9 + 0x10 + lVar17) = local_410;
                  lVar7 = *(longlong *)(lVar13 + 0x60);
                  lVar9 = *(longlong *)(lVar9 + 0x18 + lVar17);
                  if (lVar9 != lVar7) {
                    puVar8[3] = lVar7;
                    if (lVar7 != 0) {
                      LOCK();
                      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                      UNLOCK();
                    }
                    if (lVar9 != 0) {
                      LOCK();
                      puVar14 = (uint *)(lVar9 + 8);
                      uVar15 = *puVar14;
                      *puVar14 = *puVar14 - 1;
                      UNLOCK();
                      if ((uVar15 & 0x3fffffff) == 1) {
                        FUN_144a54812();
                      }
                    }
                  }
                  uVar15 = local_1b0;
                  puVar8[4] = param_1;
                  *(uint *)(puVar8 + 5) = local_45c;
                  iVar22 = *(int *)(param_1 + 0x330) >> ((byte)local_45c & 0x1f);
                  if (0 < iVar22) {
                    lVar13 = *(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x558) + 0xa8) + local_418 * 8)
                    ;
                    lVar9 = (longlong)(int)local_1b0;
                    local_1b0 = local_1b0 + 1;
                    pcVar18 = *(char **)(param_1 + 0x250);
                    if (local_1ac < local_1b0) {
                      local_478 = *(char **)(param_1 + 0x250);
                      local_470 = lVar13;
                      FUN_1400cd0f8(local_260,uVar15);
                      pcVar18 = local_478;
                      lVar13 = local_470;
                    }
                    lVar7 = local_468;
                    pcVar20 = (char *)((ulonglong)(uint)(int)cVar19 * 0xf8 + local_440);
                    local_44c = (iVar22 + -1) * (iVar22 + -1) * 2;
                    puVar10 = local_1b8;
                    if (local_1b8 == (undefined1 *)0x0) {
                      puVar10 = local_260;
                    }
                    lVar9 = lVar9 * 0xa8;
                    *(char **)(puVar10 + lVar9) = pcVar18;
                    *(undefined8 *)(puVar10 + lVar9 + 8) = 0;
                    *(undefined8 *)((longlong)(puVar10 + lVar9 + 8) + 8) = 0;
                    *(longlong *)(puVar10 + lVar9 + 0x18) = lVar13;
                    *(undefined8 *)(puVar10 + lVar9 + 0x20) = 0;
                    *(undefined8 *)(puVar10 + lVar9 + 0x30) = 0;
                    *(undefined8 **)(puVar10 + lVar9 + 0x38) = puVar8;
                    *(undefined8 *)(puVar10 + lVar9 + 0x40) = 0;
                    *(undefined8 *)((longlong)(puVar10 + lVar9 + 0x40) + 8) = 0;
                    *(undefined4 *)(puVar10 + lVar9 + 0x50) = 0;
                    *(uint *)(puVar10 + lVar9 + 0x54) = local_448;
                    *(undefined4 *)(puVar10 + lVar9 + 0x58) = 0;
                    *(int *)(puVar10 + lVar9 + 0x5c) = local_44c;
                    *(undefined8 *)(puVar10 + lVar9 + 0x60) = 1;
                    *(undefined8 *)((longlong)(puVar10 + lVar9 + 0x60) + 8) = 0;
                    *(undefined4 *)(puVar10 + lVar9 + 0x70) = 0xffffffff;
                    *(undefined8 *)(puVar10 + lVar9 + 0x74) = 0x3f80000000000000;
                    *(uint *)(puVar10 + lVar9 + 0x7c) = local_444;
                    puVar10[lVar9 + 0x80] = 0;
                    *(uint *)(puVar10 + lVar9 + 0x84) = CONCAT31(uStack_2eb,local_2ef._3_1_);
                    *(undefined4 *)(puVar10 + lVar9 + 0x81) = local_2ef;
                    *(undefined8 *)(puVar10 + lVar9 + 0x88) = 0;
                    *(undefined4 *)(puVar10 + lVar9 + 0x90) = 0xffffffff;
                    *(undefined8 *)(puVar10 + lVar9 + 0x98) = 0;
                    *(undefined8 *)(puVar10 + lVar9 + 0xa0) = 0xffffffffffffffff;
                    lVar13 = *(longlong *)(lVar13 + 0x10);
                    lVar9 = *(longlong *)(pcVar20 + 0x50);
                    if (lVar9 != lVar13) {
                      *(longlong *)(pcVar20 + 0x50) = lVar13;
                      if (lVar13 != 0) {
                        LOCK();
                        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                        UNLOCK();
                      }
                      if (lVar9 != 0) {
                        LOCK();
                        puVar14 = (uint *)(lVar9 + 8);
                        uVar15 = *puVar14;
                        *puVar14 = *puVar14 - 1;
                        UNLOCK();
                        if ((uVar15 & 0x3fffffff) == 1) {
                          FUN_144a54812();
                        }
                      }
                    }
                    local_438 = pcVar20 + 0x10;
                    *puVar8 = *(undefined8 *)(pcVar20 + 0xf0);
                    bVar4 = FUN_1474283d8();
                    if (local_45c == (int)*pcVar20) {
                      bVar4 = bVar4 | (int)local_45c <= DAT_14caa70d8;
                    }
                    else {
                      *pcVar20 = (char)local_450;
                      FUN_1407f1458(pcVar20 + 0xc0);
                      bVar4 = 1;
                    }
                    lVar13 = local_468;
                    uVar3 = *(ulonglong *)(lVar7 + 0x20);
                    uVar11 = ((longlong)uVar3 >> 0x18) + local_428;
                    if ((uVar3 & 1) == 0) {
                      uVar11 = uVar3;
                    }
                    uVar12 = *(undefined8 *)(param_1 + 0x2b8);
                    iVar5 = (int)((ulonglong)uVar12 >> 0x20);
                    fVar2 = *(float *)(uVar11 + (longlong)
                                                (((int)uVar12 - *(int *)(lVar7 + 4)) +
                                                (iVar5 - *(int *)(lVar7 + 8)) *
                                                *(int *)(lVar7 + 0xc)) * 4);
                    if ((*(float *)(pcVar20 + 8) != fVar2) ||
                       (NAN(*(float *)(pcVar20 + 8)) || NAN(fVar2))) {
                      *(float *)(pcVar20 + 8) = fVar2;
                      uVar12 = *(undefined8 *)(param_1 + 0x2b8);
                      iVar5 = (int)((ulonglong)uVar12 >> 0x20);
                      bVar4 = 1;
                    }
                    local_470 = CONCAT71(local_470._1_7_,bVar4);
                    local_478 = pcVar20;
                    lVar9 = FUN_14746bc08(local_468,local_420);
                    uVar3 = *(ulonglong *)(lVar9 + 8);
                    uVar11 = lVar9 + 8 + ((longlong)uVar3 >> 0x18);
                    if ((uVar3 & 1) == 0) {
                      uVar11 = uVar3;
                    }
                    fVar2 = *(float *)(uVar11 + (longlong)
                                                (((iVar5 - *(int *)(lVar13 + 8)) *
                                                  *(int *)(lVar13 + 0xc) + (int)uVar12) -
                                                *(int *)(lVar13 + 4)) * 4);
                    if (_DAT_14caa7100 < ABS(*(float *)(local_478 + 4) - fVar2)) {
                      *(float *)(local_478 + 4) = fVar2;
                      local_470 = CONCAT71(local_470._1_7_,1);
                    }
                    if (0 < DAT_14c760f1c) {
                      local_2f8 = 0;
                      uVar12 = FUN_1449cbe5c(CONCAT44(uStack_19c,uStack_1a0),
                                             *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8),
                                             &local_2f8);
                      lVar13 = FUN_144b252b2(uVar12);
                      if ((*(byte *)(*(longlong *)(lVar13 + 0x28) + 0x246) & 0x10) != 0) {
                        lVar13 = local_2f8;
                        if (local_2f8 == 0) {
                          lVar13 = CONCAT44(uStack_19c,uStack_1a0);
                        }
                        FUN_147bbf090(&local_378,lVar13,uVar12);
                        lVar13 = FUN_144b252b2(uVar12);
                        iVar5 = FUN_147bc7d8e(*(longlong *)(lVar13 + 0x28) + 0x70,&local_378);
                        if (*(int *)(local_478 + 0xc) != iVar5) {
                          *(int *)(local_478 + 0xc) = iVar5;
                          local_470 = CONCAT71(local_470._1_7_,1);
                        }
                      }
                    }
                    uStack_360 = 0;
                    uStack_35c = 0;
                    uStack_358 = 0;
                    local_370 = 0;
                    uStack_368 = 0;
                    uStack_364 = 0;
                    uStack_350 = 0xff;
                    bStack_34f = bStack_34f & 0xe0;
                    uStack_34e = 0;
                    uStack_34c = 0x100;
                    uStack_348 = 0;
                    local_300 = 0;
                    uStack_330 = 0;
                    uStack_32c = 0;
                    uStack_328 = 0;
                    local_340 = 0;
                    uStack_338 = 0;
                    uStack_334 = 0;
                    uStack_310 = 0;
                    uStack_30c = 0;
                    local_320 = (undefined8 *)0x0;
                    uStack_314 = 0;
                    local_378 = local_438;
                    uStack_318 = 1;
                    FUN_140518214(&local_320,0);
                    uVar15 = uStack_368;
                    puVar8 = local_430;
                    puVar6 = local_320;
                    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
                      *puVar6 = *puVar8;
                      puVar8 = puVar8 + 1;
                      puVar6 = puVar6 + 1;
                    }
                    lVar13 = (longlong)(int)uStack_368;
                    uStack_368 = uStack_368 + 1;
                    if (uStack_364 < uStack_368) {
                      FUN_147471df6(&local_370,uVar15);
                    }
                    lVar9 = local_370;
                    lVar13 = lVar13 * 0xf0;
                    *(undefined8 *)(local_370 + 0xa8 + lVar13) = 0;
                    puVar10 = local_1b8;
                    if (local_1b8 == (undefined1 *)0x0) {
                      puVar10 = local_260;
                    }
                    FUN_144739392(local_370 + lVar13,puVar10,local_1b0);
                    *(byte *)(lVar9 + 0xe8 + lVar13) = local_178;
                    puVar1 = (undefined4 *)(lVar9 + 0xd8 + lVar13);
                    *puVar1 = local_188;
                    puVar1[1] = uStack_184;
                    puVar1[2] = uStack_180;
                    puVar1[3] = uStack_17c;
                    puVar1 = (undefined4 *)(lVar9 + 200 + lVar13);
                    *puVar1 = local_198;
                    puVar1[1] = uStack_194;
                    puVar1[2] = uStack_190;
                    puVar1[3] = uStack_18c;
                    puVar1 = (undefined4 *)(lVar9 + 0xb8 + lVar13);
                    *puVar1 = local_1a8;
                    puVar1[1] = uStack_1a4;
                    puVar1[2] = uStack_1a0;
                    puVar1[3] = uStack_19c;
                    if (((char)local_470 != '\0') &&
                       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x560) + 0x30))(),
                       uVar15 = uStack_368, lVar13 = local_370, (*(byte *)(lVar9 + 0x29) & 4) != 0))
                    {
                      local_2e8 = 0;
                      local_2e0 = uStack_368;
                      if (uStack_368 == 0) {
                        local_2dc = 0;
                      }
                      else {
                        FUN_147471e8a(&local_2e8,uStack_368,0);
                        FUN_147471efc(local_2e8,lVar13,uVar15);
                      }
                      local_2d8 = 0;
                      local_2d4 = iVar22 * iVar22;
                      local_2d0 = local_2d4 * 0xc;
                      local_2cc = local_44c;
                      local_2c8 = local_438;
                      local_2c0 = local_478 + 0xc0;
                      local_2b8 = 1;
                      local_2b4 = 0;
                      local_278 = _DAT_14c846280;
                      uStack_270 = _DAT_14c846288;
                      local_288 = _DAT_14c846270;
                      uStack_280 = _DAT_14c846278;
                      local_298 = _DAT_14c846260;
                      uStack_290 = _DAT_14c846268;
                      local_2a8 = DAT_14c846250;
                      uStack_2a4 = DAT_14c846254;
                      uStack_2a0 = (undefined4)DAT_14c846258;
                      uStack_29c = DAT_14c846258._4_4_;
                      FUN_147ceea5a(local_458,&local_2e8);
                    }
                    local_3f8 = local_378;
                    uStack_3e8 = CONCAT44(uStack_364,uStack_368);
                    local_3f0 = local_370;
                    local_370 = 0;
                    uStack_368 = 0;
                    uStack_364 = 0;
                    local_3e0 = CONCAT44(uStack_35c,uStack_360);
                    uStack_3d8 = CONCAT44(uStack_354,uStack_358);
                    uStack_3d0 = CONCAT22(uStack_34e,CONCAT11(bStack_34f,uStack_350));
                    uStack_3cc = CONCAT22(uStack_34a,uStack_34c);
                    uStack_3c8 = uStack_348;
                    local_3c0 = local_340;
                    local_340 = 0;
                    local_3b8 = uStack_338;
                    local_3b4 = uStack_334;
                    uStack_338 = 0;
                    uStack_334 = 0;
                    local_3b0 = CONCAT44(uStack_32c,uStack_330);
                    uStack_3a8 = CONCAT44(uStack_324,uStack_328);
                    local_3a0 = local_320;
                    local_320 = (undefined8 *)0x0;
                    local_398 = uStack_318;
                    local_394 = uStack_314;
                    uStack_318 = 0;
                    uStack_314 = 0;
                    local_390 = uStack_310;
                    uStack_38c = (undefined4)uStack_30c;
                    uStack_388 = uStack_30c._4_4_;
                    uStack_384 = uStack_304;
                    local_380 = local_300;
                    local_300 = 0;
                    FUN_147cee9b0(local_458,&local_3f8);
                    FUN_1472aaabe(&local_378);
                    lVar13 = local_468;
                  }
                  FUN_1446fc232(local_260);
                  iVar21 = iVar21 + 1;
                  iVar22 = *(int *)(param_1 + 0x328);
                } while (iVar21 < iVar22);
              }
              local_47c = local_47c + 1;
            } while (local_47c < iVar22);
          }
          FUN_1446fc232(local_170);
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746d426 FUN_14746d426 body=606 status=ok
// SIG undefined FUN_14746d426(void)

void FUN_14746d426(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [44];
  int local_7c;
  uint local_78;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar6 = ((uint)(iVar7 * iVar7 * 4) / 3 - 1) * *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x20);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_14480809c(&local_58);
    iVar7 = *(int *)(param_1 + 0x1c);
  }
  uVar1 = (ulonglong)(iVar7 + -1 + (uint)(iVar7 == 0)) * 2 + 1;
  local_60 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> local_60 == 0; local_60 = local_60 - 1) {
    }
  }
  local_60 = local_60 ^ 0x3f;
  local_68 = param_2;
  if (local_60 != 0x3f) {
    local_70 = param_1 + 0x78;
    uVar3 = 0;
    do {
      uVar2 = (int)uStack_50;
      iVar7 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
        FUN_1400cc390(local_70,iVar7);
      }
      lVar10 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar10 = local_70;
      }
      *(undefined4 *)(lVar10 + (longlong)iVar7 * 4) = uVar2;
      iVar7 = *(int *)(param_1 + 0x1c);
      iVar6 = *(int *)(param_1 + 0x20);
      iVar9 = iVar7 >> ((byte)uVar3 & 0x1f);
      local_78 = uVar3;
      if (0 < iVar6) {
        local_7c = 0;
        iVar5 = 0;
        do {
          if (0 < iVar6) {
            iVar8 = 0;
            do {
              if (0 < iVar9) {
                iVar7 = 0;
                local_74 = iVar8;
                do {
                  iVar6 = 0;
                  do {
                    uVar1 = uStack_50;
                    iVar8 = *(int *)(param_1 + 0x1c);
                    lVar10 = (longlong)(int)uStack_50;
                    uVar3 = (int)uStack_50 + 1;
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
                    if (uStack_50._4_4_ < uVar3) {
                      FUN_1447808da(&local_58,uVar1 & 0xffffffff);
                    }
                    *(int *)(local_58 + lVar10 * 4) = iVar8 * iVar7 + iVar5 + iVar6;
                    iVar6 = iVar6 + 1;
                  } while (iVar9 != iVar6);
                  iVar7 = iVar7 + 1;
                } while (iVar7 != iVar9);
                iVar7 = *(int *)(param_1 + 0x1c);
                iVar6 = *(int *)(param_1 + 0x20);
                iVar8 = local_74;
              }
              iVar5 = iVar7 * iVar7 + iVar5;
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar6);
          }
          local_7c = local_7c + 1;
        } while (local_7c < iVar6);
      }
      uVar3 = local_78 + 1;
    } while ((uVar3 ^ (uint)local_60) != 0x3f);
  }
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(plVar4 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)plVar4 + 0xc) = 0x105;
  *(undefined1 *)((longlong)plVar4 + 0xe) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = (longlong)&PTR_FUN_14a3d4570;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[4] = (longlong)&PTR_FUN_14a355380;
  *(undefined1 *)(plVar4 + 7) = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  FUN_14129beec(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  *(longlong **)(param_1 + 0x70) = plVar4;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14746d686 FUN_14746d686 body=616 status=ok
// SIG undefined FUN_14746d686(void)

void FUN_14746d686(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_a8 [44];
  int local_7c;
  uint local_78;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar7 = ((uint)(iVar8 * iVar8 * 4) / 3 - 1) * *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x20);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_1448759c8(&local_58);
    iVar8 = *(int *)(param_1 + 0x1c);
  }
  uVar1 = (ulonglong)(iVar8 + -1 + (uint)(iVar8 == 0)) * 2 + 1;
  local_60 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> local_60 == 0; local_60 = local_60 - 1) {
    }
  }
  local_60 = local_60 ^ 0x3f;
  local_68 = param_2;
  if (local_60 != 0x3f) {
    local_70 = param_1 + 0x78;
    uVar4 = 0;
    do {
      uVar3 = (int)uStack_50;
      iVar8 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar8 + 1U) {
        FUN_1400cc390(local_70,iVar8);
      }
      lVar11 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar11 = local_70;
      }
      *(undefined4 *)(lVar11 + (longlong)iVar8 * 4) = uVar3;
      iVar8 = *(int *)(param_1 + 0x1c);
      iVar7 = *(int *)(param_1 + 0x20);
      iVar10 = iVar8 >> ((byte)uVar4 & 0x1f);
      local_78 = uVar4;
      if (0 < iVar7) {
        local_7c = 0;
        iVar6 = 0;
        do {
          if (0 < iVar7) {
            iVar9 = 0;
            do {
              if (0 < iVar10) {
                iVar8 = 0;
                local_74 = iVar9;
                do {
                  iVar7 = 0;
                  do {
                    uVar1 = uStack_50;
                    sVar2 = *(short *)(param_1 + 0x1c);
                    lVar11 = (longlong)(int)uStack_50;
                    uVar4 = (int)uStack_50 + 1;
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
                    if (uStack_50._4_4_ < uVar4) {
                      FUN_14488eebe(&local_58,uVar1 & 0xffffffff);
                    }
                    *(short *)(local_58 + lVar11 * 2) =
                         sVar2 * (short)iVar8 + (short)iVar6 + (short)iVar7;
                    iVar7 = iVar7 + 1;
                  } while (iVar10 != iVar7);
                  iVar8 = iVar8 + 1;
                } while (iVar8 != iVar10);
                iVar8 = *(int *)(param_1 + 0x1c);
                iVar7 = *(int *)(param_1 + 0x20);
                iVar9 = local_74;
              }
              iVar6 = iVar8 * iVar8 + iVar6;
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar7);
          }
          local_7c = local_7c + 1;
        } while (local_7c < iVar7);
      }
      uVar4 = local_78 + 1;
    } while ((uVar4 ^ (uint)local_60) != 0x3f);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(plVar5 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)plVar5 + 0xc) = 0x105;
  *(undefined1 *)((longlong)plVar5 + 0xe) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *plVar5 = (longlong)&PTR_FUN_14a3d4440;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[4] = (longlong)&PTR_FUN_14a3d46e0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  FUN_140ea92f0(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x18))(plVar5,local_68);
  *(longlong **)(param_1 + 0x70) = plVar5;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14746d914 FUN_14746d914 body=76 status=ok
// SIG undefined FUN_14746d914(void)

undefined8 FUN_14746d914(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    lVar2 = FUN_140fb57b8();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      return 1;
    }
  }
  uVar3 = FUN_147bb6794(param_1);
  return uVar3;
}



// FUNCTION 14746d964 FUN_14746d964 body=72 status=ok
// SIG undefined FUN_14746d964(void)

void FUN_14746d964(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x580);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_2 + 0x48);
    *(uint *)(param_2 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x4c) < iVar1 + 1U) {
      FUN_147470a8e(param_2,iVar1);
    }
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar3 = param_2;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 14746d9ce FUN_14746d9ce body=66 status=ok
// SIG undefined FUN_14746d9ce(void)

void FUN_14746d9ce(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  param_2[6] = *(undefined8 *)(param_1 + -0xb0);
  uVar1 = *(undefined8 *)(param_1 + -0xe0);
  uVar2 = *(undefined8 *)(param_1 + -0xd8);
  uVar3 = *(undefined8 *)(param_1 + -0xd0);
  uVar4 = *(undefined8 *)(param_1 + -200);
  uVar5 = *(undefined8 *)(param_1 + -0xb8);
  param_2[4] = *(undefined8 *)(param_1 + -0xc0);
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  puVar7 = (undefined8 *)(param_1 + -0x198);
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *param_3 = *puVar7;
    puVar7 = puVar7 + 1;
    param_3 = param_3 + 1;
  }
  return;
}



// FUNCTION 14746da10 FUN_14746da10 body=650 status=ok
// SIG undefined FUN_14746da10(void)

void FUN_14746da10(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar10 = (double)param_1[-0x1c];
  dVar11 = (double)param_1[-0x1b];
  dVar13 = (double)param_1[-0x1a];
  dVar6 = (double)param_1[-0x33];
  dVar4 = (double)param_1[-0x32];
  dVar7 = (double)param_1[-0x2f];
  dVar5 = (double)param_1[-0x2e];
  dVar8 = (double)param_1[-0x2b];
  dVar16 = (double)param_1[-0x2a];
  dVar12 = (double)param_1[-0x27];
  dVar14 = (double)param_1[-0x26];
  dVar18 = (double)param_1[-0x25];
  dVar1 = (double)param_1[-0x29];
  dVar2 = (double)param_1[-0x31];
  dVar3 = (double)param_1[-0x2d];
  iVar9 = (**(code **)(*param_1 + 0x40))();
  *param_2 = dVar13 * dVar8 + dVar11 * dVar7 + dVar10 * dVar6 + dVar12;
  param_2[1] = dVar13 * dVar16 + dVar11 * dVar5 + dVar10 * dVar4 + dVar14;
  param_2[2] = dVar13 * dVar1 + dVar10 * dVar2 + dVar11 * dVar3 + dVar18;
  dVar11 = DAT_14c8463a0 * dVar4;
  dVar13 = DAT_14c8463a8 * dVar5;
  dVar19 = DAT_14c8463b0 * dVar16;
  dVar12 = dVar12 * 0.0;
  dVar14 = dVar14 * 0.0;
  dVar10 = (double)iVar9;
  dVar17 = DAT_14c8463a0 * dVar2;
  dVar20 = DAT_14c8463a8 * dVar3;
  dVar15 = DAT_14c8463b0 * dVar1;
  dVar18 = dVar18 * 0.0;
  *param_3 = (DAT_14c8463b0 * dVar8 + DAT_14c8463a8 * dVar7 + DAT_14c8463a0 * dVar6 + dVar12) *
             dVar10;
  param_3[1] = (dVar19 + dVar13 + dVar11 + dVar14) * dVar10;
  param_3[2] = (dVar15 + dVar20 + dVar17 + dVar18) * dVar10;
  dVar4 = DAT_14c846388 * dVar4;
  dVar5 = DAT_14c846390 * dVar5;
  dVar16 = DAT_14c846398 * dVar16;
  dVar2 = dVar2 * DAT_14c846388;
  dVar3 = dVar3 * DAT_14c846390;
  dVar1 = dVar1 * DAT_14c846398;
  *param_4 = (DAT_14c846398 * dVar8 + DAT_14c846390 * dVar7 + DAT_14c846388 * dVar6 + dVar12) *
             dVar10;
  param_4[1] = (dVar16 + dVar5 + dVar4 + dVar14) * dVar10;
  param_4[2] = (dVar1 + dVar3 + dVar2 + dVar18) * dVar10;
  return;
}



// FUNCTION 14746dc9a FUN_14746dc9a body=520 status=ok
// SIG undefined FUN_14746dc9a(void)

undefined8 *
FUN_14746dc9a(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined4 param_9,undefined4 param_10)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1403305c2(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a3d0e60;
  *(undefined2 *)(param_1 + 0x117) = 0;
  plVar1 = param_1 + 0x118;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  lVar4 = FUN_14494250a(param_2);
  if (lVar4 == 0) {
    *(undefined2 *)(param_1 + 0x117) = 0x100;
  }
  else {
    cVar7 = -(*(char *)(lVar4 + 0x241) >> 7);
    *(char *)(param_1 + 0x117) = cVar7;
    *(byte *)((longlong)param_1 + 0x8b9) = *(byte *)(lVar4 + 0x240) >> 5 & 1;
    if (cVar7 == '\x01') {
      *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) | 8;
    }
  }
  FUN_14746dea4(plVar1,(int)param_3[1]);
  if (0 < (int)param_3[1]) {
    lVar8 = 0;
    lVar4 = 0;
    local_70 = param_4;
    do {
      local_50 = *(undefined8 *)(*param_3 + lVar4 * 8);
      if (lVar4 < (int)local_70[1]) {
        local_58 = *(undefined8 *)(*local_70 + 0x10 + lVar8);
        puVar2 = (undefined4 *)(*local_70 + lVar8);
        local_68 = *puVar2;
        uStack_64 = puVar2[1];
        uStack_60 = puVar2[2];
        uStack_5c = puVar2[3];
      }
      else {
        local_58 = DAT_14c8464f0;
        local_68 = (undefined4)DAT_14c8464e0;
        uStack_64 = DAT_14c8464e0._4_4_;
        uStack_60 = (undefined4)DAT_14c8464e8;
        uStack_5c = DAT_14c8464e8._4_4_;
      }
      lVar5 = *(longlong *)(param_2 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_2);
      }
      uVar6 = FUN_14001cc68(0x90,0x10);
      local_80 = param_10;
      local_88 = param_9;
      local_90 = param_8;
      local_98 = param_7;
      local_a0 = param_6;
      local_a8 = param_5;
      FUN_147472d98(uVar6,lVar5,&local_50,&local_68);
      iVar3 = *(int *)(param_1 + 0x119);
      *(uint *)(param_1 + 0x119) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x8cc) < iVar3 + 1U) {
        FUN_14747316c(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar6;
      lVar4 = lVar4 + 1;
      lVar8 = lVar8 + 0x18;
    } while (lVar4 < (int)param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14746dea4 FUN_14746dea4 body=68 status=ok
// SIG undefined FUN_14746dea4(void)

void FUN_14746dea4(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147472d03(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147472d38(param_1,param_2);
  return;
}



// FUNCTION 14746def2 FUN_14746def2 body=142 status=ok
// SIG undefined FUN_14746def2(void)

void FUN_14746def2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405ec0dc();
  iVar1 = *(int *)(param_1 + 0x8c8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x8c0);
    lVar3 = 0;
    do {
      FUN_140e86b6e(param_2,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (((*(char *)(param_1 + 0x8b8) != '\x01') || (*(char *)(param_1 + 0x8b9) != '\0')) &&
     (iVar1 = *(int *)(param_1 + 0x8c8), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x8c0);
    lVar3 = 0;
    do {
      FUN_140cc5f4c(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14746df80 FUN_14746df80 body=89 status=ok
// SIG undefined FUN_14746df80(void)

ulonglong FUN_14746df80(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong lVar4;
  
  cVar1 = *(char *)(param_1 + 0x8b9);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x8b9) = 1;
    *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xef;
    iVar2 = *(int *)(param_1 + 0x8c8);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x8c0);
      lVar4 = 0;
      do {
        FUN_140cc5f4c(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar2 * 8 != lVar4);
    }
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 14746dfda FUN_14746dfda body=78 status=ok
// SIG undefined FUN_14746dfda(void)

void FUN_14746dfda(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x8b9) == '\x01') {
    *(undefined1 *)(param_1 + 0x8b9) = 0;
    *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) | 0x10;
    iVar1 = *(int *)(param_1 + 0x8c8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8c0);
      lVar3 = 0;
      do {
        FUN_140d04eae(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 14746e028 FUN_14746e028 body=114 status=ok
// SIG undefined FUN_14746e028(void)

void FUN_14746e028(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14051cbec();
  iVar1 = *(int *)(param_1 + 0x8c8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x8c0);
    lVar3 = 0;
    do {
      FUN_140d04eae(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
    iVar1 = *(int *)(param_1 + 0x8c8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8c0);
      lVar3 = 0;
      do {
        FUN_140d05008(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 14746e09e FUN_14746e09e body=58 status=ok
// SIG undefined FUN_14746e09e(void)

undefined8 FUN_14746e09e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + -0x1c8) != 0) {
    uVar2 = FUN_140d2fbb2();
    cVar1 = FUN_144a7ca96((undefined8 *)(param_1 + -0x1c8),uVar2);
    if (cVar1 != '\0') {
      return *(undefined8 *)(param_1 + -0x1c8);
    }
  }
  return 0;
}



// FUNCTION 14746e0d8 FUN_14746e0d8 body=53 status=ok
// SIG undefined FUN_14746e0d8(void)

undefined8 FUN_14746e0d8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  lVar1 = FUN_14479d2ce(lVar1 + 0x28);
  (**(code **)(*(longlong *)(lVar1 + 0x390) + 0x20))(lVar1 + 0x390,param_2);
  return param_2;
}



// FUNCTION 14746e10e FUN_14746e10e body=40 status=ok
// SIG undefined FUN_14746e10e(void)

void FUN_14746e10e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447210f0(param_1 + -0x390);
  FUN_14059fcc4(uVar1,param_1 + 8);
  return;
}



// FUNCTION 14746e13c FUN_14746e13c body=359 status=ok
// SIG undefined FUN_14746e13c(void)

undefined8 FUN_14746e13c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_898 [32];
  longlong local_878;
  int local_870;
  undefined2 *local_868;
  undefined2 *local_860;
  ulonglong *local_858;
  char local_850;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_898;
  puVar4 = local_848;
  local_850 = '\0';
  local_858 = &local_48;
  iVar1 = *(int *)(param_1 + 0x398);
  local_868 = puVar4;
  local_860 = puVar4;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x390);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        if ((DAT_14c950c29 == '\x01') && (plVar3[0xcc] != 0)) {
          FUN_1456cec3c();
        }
        else if (plVar3[0xcc] == 0) goto LAB_14746e221;
        (**(code **)(*plVar3 + 0x48))(plVar3,&local_878);
        iVar6 = local_870 + -1;
        if (local_870 == 0) {
          iVar6 = 0;
        }
        FUN_1449668a2(&local_868,local_878,iVar6);
        if (local_878 != 0) {
          FUN_1400020a8();
        }
        if (local_858 <= local_860 + 1) {
          FUN_140213274(&local_868,1);
        }
        *local_860 = 10;
        puVar4 = local_860 + 1;
        local_860 = puVar4;
      }
LAB_14746e221:
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *puVar4 = 0;
  FUN_140056680(param_2,local_868);
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_48 ^ (ulonglong)auStack_898) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14746e2a4 FUN_14746e2a4 body=117 status=ok
// SIG undefined FUN_14746e2a4(void)

undefined8 * FUN_14746e2a4(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  
  FUN_147aea248(param_1,param_4);
  *param_1 = &PTR_FUN_14a3d4410;
  param_1[4] = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[5] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  param_1[6] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 14746e31a FUN_14746e31a body=10 status=ok
// SIG undefined FUN_14746e31a(void)

undefined8 * FUN_14746e31a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14746e324 FUN_14746e324 body=191 status=ok
// SIG undefined FUN_14746e324(void)

void FUN_14746e324(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + 0x58;
  uVar1 = FUN_14040e062(param_1,param_2,local_3c,&local_58);
  *param_3 = uVar1;
  FUN_140703ce0(param_1,&local_58,uVar1,&DAT_14c8464e0);
  *(undefined8 *)(param_4 + 4) = local_48;
  *param_4 = local_58;
  param_4[1] = uStack_54;
  param_4[2] = uStack_50;
  param_4[3] = uStack_4c;
  FUN_140754464(param_1,&local_58,*param_3,&DAT_14c8464e0);
  *(undefined8 *)(param_5 + 4) = local_48;
  *param_5 = local_58;
  param_5[1] = uStack_54;
  param_5[2] = uStack_50;
  param_5[3] = uStack_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14746e3e4 FUN_14746e3e4 body=159 status=ok
// SIG undefined FUN_14746e3e4(void)

void FUN_14746e3e4(undefined8 param_1,undefined8 *param_2,double *param_3)

{
  char cVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  double local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  FUN_144b2ab52(*param_2,local_58);
  if (cVar1 == '\0') {
    pdVar2 = local_40;
  }
  else if ((cVar1 == '\x02') || (cVar1 != '\x01')) {
    pdVar2 = local_40 + 2;
  }
  else {
    pdVar2 = local_40 + 1;
  }
  cVar1 = *(char *)((longlong)param_2 + 0x51);
  if (cVar1 != '\0') {
    if ((cVar1 == '\x02') || (cVar1 != '\x01')) {
      param_3 = param_3 + 2;
    }
    else {
      param_3 = param_3 + 1;
    }
  }
  dVar3 = (*pdVar2 + *pdVar2) * *param_3;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)dVar3 >> 0x20),(float)dVar3) & 0x7fffffff7fffffff);
}



// FUNCTION 14746e4a0 FUN_14746e4a0 body=38 status=ok
// SIG undefined FUN_14746e4a0(void)

undefined8 FUN_14746e4a0(undefined8 param_1,int param_2)

{
  FUN_147473258();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746e4fa FUN_14746e4fa body=90 status=ok
// SIG undefined FUN_14746e4fa(void)

undefined1 FUN_14746e4fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 14746e57c FUN_14746e57c body=59 status=ok
// SIG undefined FUN_14746e57c(void)

undefined8 FUN_14746e57c(longlong *param_1)

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



// FUNCTION 14746e666 FUN_14746e666 body=59 status=ok
// SIG undefined FUN_14746e666(void)

undefined8 FUN_14746e666(longlong *param_1)

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



// FUNCTION 14746e750 FUN_14746e750 body=59 status=ok
// SIG undefined FUN_14746e750(void)

undefined8 FUN_14746e750(longlong *param_1)

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



// FUNCTION 14746e822 FUN_14746e822 body=101 status=ok
// SIG undefined FUN_14746e822(void)

undefined1 FUN_14746e822(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14746e8b0 FUN_14746e8b0 body=59 status=ok
// SIG undefined FUN_14746e8b0(void)

undefined8 FUN_14746e8b0(longlong *param_1)

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



// FUNCTION 14746e952 FUN_14746e952 body=138 status=ok
// SIG undefined FUN_14746e952(void)

code * FUN_14746e952(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalmapTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe80000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746e9dc;
}



// FUNCTION 14746e9dc FUN_14746e9dc body=138 status=ok
// SIG undefined FUN_14746e9dc(void)

code * FUN_14746e9dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalmapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463262c2;
}



// FUNCTION 14746ea66 FUN_14746ea66 body=138 status=ok
// SIG undefined FUN_14746ea66(void)

code * FUN_14746ea66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightmapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457a9b7e;
}



// FUNCTION 14746eaf0 FUN_14746eaf0 body=138 status=ok
// SIG undefined FUN_14746eaf0(void)

code * FUN_14746eaf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightmapSubsectionOffsetParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457a9c08;
}



// FUNCTION 14746eb7a FUN_14746eb7a body=138 status=ok
// SIG undefined FUN_14746eb7a(void)

code * FUN_14746eb7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsectionSizeVertsLayerUVPan";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746ec04;
}



// FUNCTION 14746ec04 FUN_14746ec04 body=138 status=ok
// SIG undefined FUN_14746ec04(void)

code * FUN_14746ec04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapeLightmapScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746ec8e;
}



// FUNCTION 14746ec8e FUN_14746ec8e body=138 status=ok
// SIG undefined FUN_14746ec8e(void)

code * FUN_14746ec8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WeightmapUVScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746ed18;
}



// FUNCTION 14746ed18 FUN_14746ed18 body=138 status=ok
// SIG undefined FUN_14746ed18(void)

code * FUN_14746ed18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightmapUVScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746eda2;
}



// FUNCTION 14746eda2 FUN_14746eda2 body=138 status=ok
// SIG undefined FUN_14746eda2(void)

code * FUN_14746eda2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightmapTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746ee2c;
}



// FUNCTION 14746ee2c FUN_14746ee2c body=138 status=ok
// SIG undefined FUN_14746ee2c(void)

code * FUN_14746ee2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NonNaniteVirtualShadowMapConstantDepthBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746eeb6;
}



// FUNCTION 14746eeb6 FUN_14746eeb6 body=138 status=ok
// SIG undefined FUN_14746eeb6(void)

code * FUN_14746eeb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvLODBlendRange";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746ef40;
}



// FUNCTION 14746ef40 FUN_14746ef40 body=138 status=ok
// SIG undefined FUN_14746ef40(void)

code * FUN_14746ef40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualTexturePerPixelHeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746efca;
}



// FUNCTION 14746efca FUN_14746efca body=138 status=ok
// SIG undefined FUN_14746efca(void)

code * FUN_14746efca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LastLOD";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746f054;
}



// FUNCTION 14746f054 FUN_14746f054 body=138 status=ok
// SIG undefined FUN_14746f054(void)

code * FUN_14746f054(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSubsections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746f0de;
}



// FUNCTION 14746f0de FUN_14746f0de body=138 status=ok
// SIG undefined FUN_14746f0de(void)

code * FUN_14746f0de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsectionSizeVerts";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746f168;
}



// FUNCTION 14746f168 FUN_14746f168 body=138 status=ok
// SIG undefined FUN_14746f168(void)

code * FUN_14746f168(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComponentBaseY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14746f1f2;
}



// FUNCTION 14746f1f2 FUN_14746f1f2 body=132 status=ok
// SIG undefined FUN_14746f1f2(void)

undefined1 * FUN_14746f1f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComponentBaseX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x69;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14746f276;
}



// FUNCTION 14746f27e FUN_14746f27e body=56 status=ok
// SIG undefined FUN_14746f27e(void)

undefined8 * FUN_14746f27e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3c2d50;
  FUN_144725486();
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746f2b6 FUN_14746f2b6 body=56 status=ok
// SIG undefined FUN_14746f2b6(void)

undefined8 * FUN_14746f2b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3c2d50;
  FUN_144725486();
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746f2ee FUN_14746f2ee body=38 status=ok
// SIG undefined FUN_14746f2ee(void)

undefined8 FUN_14746f2ee(undefined8 param_1,int param_2)

{
  FUN_140137a98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746f314 FUN_14746f314 body=32 status=ok
// SIG undefined FUN_14746f314(void)

undefined8 FUN_14746f314(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FRayTracingGeometry");
  return param_2;
}



// FUNCTION 14746f334 FUN_14746f334 body=56 status=ok
// SIG undefined FUN_14746f334(void)

longlong FUN_14746f334(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746f386 FUN_14746f386 body=218 status=ok
// SIG undefined FUN_14746f386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14746f386(void)

{
  if ((DAT_14caa7957 & 2) == 0) {
    DAT_14caa7957 = DAT_14caa7957 | 2;
    _DAT_14caa78f8 = L"TResourceArray";
    _DAT_14caa7910 = FUN_146826540;
    _DAT_14caa7918 = FUN_146825d77;
    _DAT_14caa7920 = FUN_146825fd6;
    _DAT_14caa7928 = FUN_1407e02ea;
    _DAT_14caa7930 = FUN_146826273;
    _DAT_14caa7908 = FUN_14746f460;
    _DAT_14caa7948 = 0xffffffff00000020;
    _DAT_14caa7950 = 8;
    DAT_14caa7954 = 1;
    _DAT_14caa7938 = &LAB_14746f48c;
    FUN_14746f492(&DAT_14caa78f0);
    FUN_14746f5a0(&DAT_14caa78f0);
    FUN_1407e00cc(&DAT_14caa78f0);
  }
  return &DAT_14caa78f0;
}



// FUNCTION 14746f460 FUN_14746f460 body=43 status=ok
// SIG undefined FUN_14746f460(void)

void FUN_14746f460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14746f492 FUN_14746f492 body=269 status=ok
// SIG undefined FUN_14746f492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746f492(longlong param_1)

{
  _DAT_14caa7980 = L"bNeedsCPUAccess";
  DAT_14caa79aa = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14caa7988 = &DAT_14c9cfcf0;
  _DAT_14caa7998 = &LAB_14682652b;
  _DAT_14caa79a0 = &DAT_100000018;
  _DAT_14caa79a8 = 0;
  _DAT_14caa7990 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14caa7980;
  return;
}



// FUNCTION 14746f5a0 FUN_14746f5a0 body=361 status=ok
// SIG undefined FUN_14746f5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746f5a0(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14caa7450 = L"BASE";
  DAT_14caa747a = 4;
  if ((DAT_14caa7a17 & 2) == 0) {
    DAT_14caa7a17 = DAT_14caa7a17 | 3;
    _DAT_14caa79b8 = L"(TArray<T, AllocatorType>)";
    _DAT_14caa79d0 = &LAB_14746f788;
    _DAT_14caa79d8 = FUN_14746f796;
    _DAT_14caa79e0 = &LAB_14746f7b6;
    _DAT_14caa79e8 = &LAB_14746f7c4;
    _DAT_14caa79f0 = &LAB_14746f7d2;
    _DAT_14caa79c8 = FUN_14746f7de;
    _DAT_14caa7a08 = 0x1000000010;
    _DAT_14caa7a10 = 8;
    DAT_14caa7a14 = '\0';
  }
  _DAT_14caa7458 = &DAT_14caa79b0;
  _DAT_14caa7468 = &LAB_14682652b;
  _DAT_14caa7470 = &DAT_100000008;
  _DAT_14caa7460 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14caa7450;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14caa7a14 != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  _DAT_14caa7480 = L"BASE";
  DAT_14caa74aa = 4;
  lVar1 = FUN_146268212();
  _DAT_14caa7498 = &LAB_14682652b;
  _DAT_14caa74a0 = 0x100000000;
  _DAT_14caa7490 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14caa7488 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14caa7480;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 14746f709 FUN_14746f709 body=127 status=ok
// SIG undefined FUN_14746f709(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14746f709(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7978) {
    FUN_144b3d300(&DAT_14caa7978);
    if (DAT_14caa7978 == -1) {
      DAT_14caa7960 = 0;
      uRam000000014caa7968 = 0;
      _DAT_14caa7958 = &PTR_FUN_14a3d4750;
      DAT_14caa7970 = 0;
      atexit((_func_5014 *)&LAB_143269032);
      _Init_thread_footer(&DAT_14caa7978);
    }
  }
  return &DAT_14caa7958;
}



// FUNCTION 14746f796 FUN_14746f796 body=31 status=ok
// SIG undefined FUN_14746f796(void)

undefined8
FUN_14746f796(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14746f8fc(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 14746f7de FUN_14746f7de body=51 status=ok
// SIG undefined FUN_14746f7de(void)

void FUN_14746f7de(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14746f812 FUN_14746f812 body=234 status=ok
// SIG undefined FUN_14746f812(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746f812(longlong param_1,undefined8 param_2)

{
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14ca76fe8,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 14746f8fc FUN_14746f8fc body=248 status=ok
// SIG undefined FUN_14746f8fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746f8fc(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_14746f9f4(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14ca76fe8,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 14746f9f4 FUN_14746f9f4 body=66 status=ok
// SIG undefined FUN_14746f9f4(void)

void FUN_14746f9f4(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_14746fa38(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14746fb0c();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14746fa38 FUN_14746fa38 body=85 status=ok
// SIG undefined FUN_14746fa38(void)

int FUN_14746fa38(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14746fa8e(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1),0,(longlong)(int)param_2);
  return iVar1;
}



// FUNCTION 14746fa8e FUN_14746fa8e body=124 status=ok
// SIG undefined FUN_14746fa8e(void)

void FUN_14746fa8e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_144a7f90c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14746fb0c FUN_14746fb0c body=119 status=ok
// SIG undefined FUN_14746fb0c(void)

void FUN_14746fb0c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 14746fb84 FUN_14746fb84 body=203 status=ok
// SIG undefined FUN_14746fb84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14746fb84(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14ca76fe8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 14746fc50 FUN_14746fc50 body=74 status=ok
// SIG undefined FUN_14746fc50(void)

void FUN_14746fc50(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14476820c(param_1 + 0xc0);
  FUN_140137a98(param_1 + 0x10);
  return;
}



// FUNCTION 14746fc9a FUN_14746fc9a body=109 status=ok
// SIG undefined FUN_14746fc9a(void)

undefined * FUN_14746fc9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa74b8) {
    FUN_144b3d300(&DAT_14caa74b8);
    if (DAT_14caa74b8 == -1) {
      FUN_1446f470e(&DAT_14caa74b0,L"FLandscapeLODOverridesCustomRenderPassUserData",1);
      _Init_thread_footer(&DAT_14caa74b8);
    }
  }
  return &DAT_14caa74b0;
}



// FUNCTION 14746fd08 FUN_14746fd08 body=46 status=ok
// SIG undefined FUN_14746fd08(void)

undefined8 FUN_14746fd08(undefined8 param_1,int param_2)

{
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14746fd4c FUN_14746fd4c body=1134 status=ok
// SIG undefined FUN_14746fd4c(void)

void FUN_14746fd4c(void)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa74f0) {
    FUN_144b3d300(&DAT_14caa74f0);
    if (DAT_14caa74f0 == -1) {
      FUN_1446f470e(local_138,L"TBasePassVSFNoLightMapPolicy",1);
      FUN_1446f470e(local_130,L"TBasePassPSFNoLightMapPolicy",1);
      FUN_1446f470e(local_128,L"TBasePassVSFCachedPointIndirectLightingPolicy",1);
      FUN_1446f470e(local_120,L"TBasePassPSFCachedPointIndirectLightingPolicy",1);
      FUN_1446f470e(local_118,L"FAnisotropyVS",1);
      FUN_1446f470e(local_110,L"FAnisotropyPS",1);
      FUN_1446f470e(local_108,L"TDepthOnlyVS<false>",1);
      FUN_1446f470e(local_100,L"TDepthOnlyVS<true>",1);
      FUN_1446f470e(local_f8,L"FDepthOnlyPS",1);
      FUN_1446f470e(local_f0,L"FHitProxyVS",1);
      FUN_1446f470e(local_e8,L"FHitProxyPS",1);
      FUN_1446f470e(local_e0,L"FVelocityVS",1);
      FUN_1446f470e(local_d8,L"FVelocityPS",1);
      FUN_1446f470e(local_d0,L"TVelocityPS<false>",1);
      FUN_1446f470e(local_c8,L"TBasePassVSFNoLightMapPolicySkyAtmosphereAP",1);
      FUN_1446f470e(local_c0,L"TLightMapDensityVSFNoLightMapPolicy",1);
      FUN_1446f470e(local_b8,L"TLightMapDensityPSFNoLightMapPolicy",1);
      FUN_1446f470e(local_b0,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_DISABLED"
                    ,1);
      FUN_1446f470e(local_a8,L"TMobileBasePassVSFMobileDirectionalLightAndSHIndirectPolicy",1);
      FUN_1446f470e(local_a0,L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_DISABLED",1);
      FUN_1446f470e(local_98,L"TMobileBasePassVSFNoLightMapPolicy",1);
      FUN_1446f470e(local_90,L"TBasePassPSFCachedPointIndirectLightingPolicySkylight",1);
      FUN_1446f470e(local_88,L"TBasePassPSFNoLightMapPolicySkylight",1);
      FUN_1446f470e(local_80,L"TVirtualTextureVSBaseColor",1);
      FUN_1446f470e(local_78,L"TVirtualTextureVSBaseColorNormal",1);
      FUN_1446f470e(local_70,L"TVirtualTextureVSBaseColorNormalSpecular",1);
      FUN_1446f470e(local_68,L"TVirtualTextureVSBaseColorNormalRoughness",1);
      FUN_1446f470e(local_60,L"TVirtualTextureVSMask4",1);
      FUN_1446f470e(local_58,L"TVirtualTextureVSWorldHeight",1);
      FUN_1446f470e(local_50,L"TVirtualTextureVSDisplacement",1);
      FUN_1446f470e(local_48,L"TVirtualTexturePSBaseColor",1);
      FUN_1446f470e(local_40,L"TVirtualTexturePSBaseColorNormal",1);
      FUN_1446f470e(local_38,L"TVirtualTexturePSBaseColorNormalSpecular",1);
      FUN_1446f470e(local_30,L"TVirtualTexturePSBaseColorNormalRoughness",1);
      FUN_1446f470e(local_28,L"TVirtualTexturePSMask4",1);
      FUN_1446f470e(local_20,L"TVirtualTexturePSWorldHeight",1);
      FUN_1446f470e(local_18,L"TVirtualTexturePSDisplacement",1);
      DAT_14caa74e0 = (void *)0x0;
      DAT_14caa74e8 = 0x25;
      FUN_1401b309e(&DAT_14caa74e0,0x25,0);
      memcpy(DAT_14caa74e0,local_138,0x128);
      atexit((_func_5014 *)&LAB_1432699e1);
      _Init_thread_footer(&DAT_14caa74f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474701bc FUN_1474701bc body=2182 status=ok
// SIG undefined FUN_1474701bc(void)

void FUN_1474701bc(void)

{
  undefined1 auStack_2b8 [40];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  undefined1 local_228 [8];
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined1 local_118 [8];
  undefined1 local_110 [8];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7508) {
    FUN_144b3d300(&DAT_14caa7508);
    if (DAT_14caa7508 == -1) {
      FUN_1446f470e(local_290,L"FDebugViewModeVS",1);
      FUN_1446f470e(local_288,L"TLightMapDensityVSFDummyLightMapPolicy",1);
      FUN_1446f470e(local_280,L"TLightMapDensityPSFDummyLightMapPolicy",1);
      FUN_1446f470e(local_278,L"TLightMapDensityPSTLightMapPolicyHQ",1);
      FUN_1446f470e(local_270,L"TLightMapDensityVSTLightMapPolicyHQ",1);
      FUN_1446f470e(local_268,L"TLightMapDensityPSTLightMapPolicyLQ",1);
      FUN_1446f470e(local_260,L"TLightMapDensityVSTLightMapPolicyLQ",1);
      FUN_1446f470e(local_258,L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
      FUN_1446f470e(local_250,L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylight",1);
      FUN_1446f470e(local_248,L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
      FUN_1446f470e(local_240,L"TBasePassPSTLightMapPolicyHQ",1);
      FUN_1446f470e(local_238,L"TBasePassPSTLightMapPolicyHQSkylight",1);
      FUN_1446f470e(local_230,L"TBasePassVSTLightMapPolicyHQ",1);
      FUN_1446f470e(local_228,L"TBasePassPSTLightMapPolicyLQ",1);
      FUN_1446f470e(local_220,L"TBasePassPSTLightMapPolicyLQSkylight",1);
      FUN_1446f470e(local_218,L"TBasePassVSTLightMapPolicyLQ",1);
      FUN_1446f470e(local_210,L"FDebugViewModePS",1);
      FUN_1446f470e(local_208,
                    L"TMobileBasePassPSFMobileMovableDirectionalLightCSMWithLightmapPolicyLOCAL_LIGHTS_DISABLED"
                    ,1);
      FUN_1446f470e(local_200,
                    L"TMobileBasePassVSFMobileMovableDirectionalLightCSMWithLightmapPolicy",1);
      FUN_1446f470e(local_1f8,
                    L"TMobileBasePassPSFMobileMovableDirectionalLightWithLightmapPolicyLOCAL_LIGHTS_DISABLED"
                    ,1);
      FUN_1446f470e(local_1f0,L"TMobileBasePassVSFMobileMovableDirectionalLightWithLightmapPolicy",1
                   );
      FUN_1446f470e(local_1e8,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_DISABLED"
                    ,1);
      FUN_1446f470e(local_1e0,
                    L"TMobileBasePassVSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy",1);
      FUN_1446f470e(local_1d8,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_DISABLED"
                    ,1);
      FUN_1446f470e(local_1d0,L"TMobileBasePassVSFMobileDistanceFieldShadowsAndLQLightMapPolicy",1);
      FUN_1446f470e(local_1c8,L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_DISABLED",1);
      FUN_1446f470e(local_1c0,L"TMobileBasePassVSTLightMapPolicyLQ",1);
      FUN_1446f470e(local_1b8,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_DISABLED",1);
      FUN_1446f470e(local_1b0,L"TMobileBasePassVSFMobileDirectionalLightAndCSMPolicy",1);
      FUN_1446f470e(local_1a8,L"TBasePassVSFCachedVolumeIndirectLightingPolicy",1);
      FUN_1446f470e(local_1a0,L"TBasePassPSFCachedVolumeIndirectLightingPolicy",1);
      FUN_1446f470e(local_198,L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylight",1);
      FUN_1446f470e(local_190,L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylight",1);
      FUN_1446f470e(local_188,L"TBasePassVSFPrecomputedVolumetricLightmapLightingPolicy",1);
      FUN_1446f470e(local_180,L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicy",1);
      FUN_1446f470e(local_178,L"TBasePassVSFCachedPointIndirectLightingPolicy",1);
      FUN_1446f470e(local_170,L"TBasePassVSFSelfShadowedCachedPointIndirectLightingPolicy",1);
      FUN_1446f470e(local_168,L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicy",1);
      FUN_1446f470e(local_160,L"TBasePassPSFSelfShadowedCachedPointIndirectLightingPolicySkylight",1
                   );
      FUN_1446f470e(local_158,L"TBasePassVSFSelfShadowedTranslucencyPolicy",1);
      FUN_1446f470e(local_150,L"TBasePassPSFSelfShadowedTranslucencyPolicy",1);
      FUN_1446f470e(local_148,L"TBasePassPSFSelfShadowedTranslucencyPolicySkylight",1);
      FUN_1446f470e(local_140,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrect",1);
      FUN_1446f470e(local_138,L"TShadowDepthVSVertexShadowDepth_OutputDepth",1);
      FUN_1446f470e(local_130,L"TShadowDepthVSVertexShadowDepth_OnePassPointLight",1);
      FUN_1446f470e(local_128,L"TShadowDepthVSVertexShadowDepth_VirtualShadowMap",1);
      FUN_1446f470e(local_120,L"TShadowDepthVSVertexShadowDepth_PerspectiveCorrectPositionOnly",1);
      FUN_1446f470e(local_118,L"TShadowDepthVSVertexShadowDepth_OutputDepthPositionOnly",1);
      FUN_1446f470e(local_110,L"TShadowDepthVSVertexShadowDepth_OnePassPointLightPositionOnly",1);
      FUN_1446f470e(local_108,L"TShadowDepthVSVertexShadowDepth_VirtualShadowMapPositionOnly",1);
      FUN_1446f470e(local_100,L"TShadowDepthPSPixelShadowDepth_VirtualShadowMap",1);
      FUN_1446f470e(local_f8,L"TShadowDepthPSPixelShadowDepth_PerspectiveCorrect",1);
      FUN_1446f470e(local_f0,L"TShadowDepthPSPixelShadowDepth_OnePassPointLight",1);
      FUN_1446f470e(local_e8,L"TShadowDepthPSPixelShadowDepth_NonPerspectiveCorrect",1);
      FUN_1446f470e(local_e0,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLight",1);
      FUN_1446f470e(local_d8,L"TShadowDepthVSForGSVertexShadowDepth_OnePassPointLightPositionOnly",1
                   );
      FUN_1446f470e(local_d0,L"TShadowDepthVSVertexShadowDepth_VSLayer",1);
      FUN_1446f470e(local_c8,L"TShadowDepthVSVertexShadowDepth_VSLayerPositionOnly",1);
      FUN_1446f470e(local_c0,L"TShadowDepthVSVertexShadowDepth_VSLayerGS",1);
      FUN_1446f470e(local_b8,L"TShadowDepthVSVertexShadowDepth_VSLayerGSPositionOnly",1);
      FUN_1446f470e(local_b0,L"FOnePassPointShadowDepthGS",1);
      FUN_1446f470e(local_a8,L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_Standard>",1);
      FUN_1446f470e(local_a0,L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_Standard>",1);
      FUN_1446f470e(local_98,
                    L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_PerspectiveCorrect>",1);
      FUN_1446f470e(local_90,
                    L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_PerspectiveCorrect>",1);
      FUN_1446f470e(local_88,L"TBasePassVSTDistanceFieldShadowsAndLightMapPolicyHQ",1);
      FUN_1446f470e(local_80,L"TBasePassVSTLightMapPolicyHQ",1);
      FUN_1446f470e(local_78,L"TBasePassVSTLightMapPolicyLQ",1);
      FUN_1446f470e(local_70,L"TBasePassPSFSelfShadowedVolumetricLightmapPolicy",1);
      FUN_1446f470e(local_68,L"TBasePassPSFSelfShadowedVolumetricLightmapPolicySkylight",1);
      FUN_1446f470e(local_60,L"TBasePassVSFSelfShadowedVolumetricLightmapPolicy",1);
      FUN_1446f470e(local_58,L"FCustomColorPS",1);
      FUN_1446f470e(local_50,L"FRayTracingDynamicGeometryConverterCS",1);
      FUN_1446f470e(local_48,L"FTrivialMaterialCHS",1);
      FUN_1446f470e(local_40,L"FLumenCardCS",1);
      FUN_1446f470e(local_38,L"FLumenCardVS",1);
      FUN_1446f470e(local_30,L"FLumenCardPS",1);
      DAT_14caa74f8 = (void *)0x0;
      DAT_14caa7500 = 0x4d;
      FUN_1401b309e(&DAT_14caa74f8,0x4d,0);
      memcpy(DAT_14caa74f8,local_290,0x268);
      atexit((_func_5014 *)&LAB_1432699f2);
      _Init_thread_footer(&DAT_14caa7508);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147470a44 FUN_147470a44 body=70 status=ok
// SIG undefined FUN_147470a44(void)

void FUN_147470a44(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x48);
  *(uint *)(param_2 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x4c) < iVar1 + 1U) {
    FUN_147470a8e(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar2 = param_2;
  }
  *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_1 + 0x2c8;
  return;
}



// FUNCTION 147470a8e FUN_147470a8e body=116 status=ok
// SIG undefined FUN_147470a8e(void)

void FUN_147470a8e(longlong param_1,int param_2)

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
    FUN_147470b04(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147470b04 FUN_147470b04 body=133 status=ok
// SIG undefined FUN_147470b04(void)

void FUN_147470b04(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 147470b8a FUN_147470b8a body=38 status=ok
// SIG undefined FUN_147470b8a(void)

undefined8 FUN_147470b8a(undefined8 param_1,int param_2)

{
  FUN_147aea288();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147470bb6 FUN_147470bb6 body=31 status=ok
// SIG undefined FUN_147470bb6(void)

undefined8 FUN_147470bb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147470bf2 FUN_147470bf2 body=93 status=ok
// SIG undefined FUN_147470bf2(void)

void FUN_147470bf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d4160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147470c50 FUN_147470c50 body=126 status=ok
// SIG undefined FUN_147470c50(void)

void FUN_147470c50(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3d4160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147470cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147470cda FUN_147470cda body=21 status=ok
// SIG undefined FUN_147470cda(void)

undefined8 FUN_147470cda(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147470cef FUN_147470cef body=23 status=ok
// SIG undefined FUN_147470cef(void)

void FUN_147470cef(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147470d06 FUN_147470d06 body=23 status=ok
// SIG undefined FUN_147470d06(void)

void FUN_147470d06(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147470d1e FUN_147470d1e body=122 status=ok
// SIG undefined FUN_147470d1e(void)

void FUN_147470d1e(longlong *param_1,int param_2)

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



// FUNCTION 147470d98 FUN_147470d98 body=122 status=ok
// SIG undefined FUN_147470d98(void)

void FUN_147470d98(longlong *param_1,int param_2)

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



// FUNCTION 147470e12 FUN_147470e12 body=188 status=ok
// SIG undefined FUN_147470e12(void)

longlong FUN_147470e12(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_147470eb1;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147470ed0(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x30 + *param_1;
LAB_147470eb1:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147470ed0 FUN_147470ed0 body=272 status=ok
// SIG undefined FUN_147470ed0(void)

undefined4 * FUN_147470ed0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_147470fe2(param_1,local_48);
  FUN_147471188(param_4,local_40);
  *(undefined4 *)(local_40 + 0x28) = 0xffffffff;
  cVar1 = FUN_1474710d0(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x2c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x28) =
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
      FUN_1474712b2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147470fe2 FUN_147470fe2 body=238 status=ok
// SIG undefined FUN_147470fe2(void)

int * FUN_147470fe2(longlong *param_1,int *param_2)

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



// FUNCTION 1474710d0 FUN_1474710d0 body=183 status=ok
// SIG undefined FUN_1474710d0(void)

undefined8 FUN_1474710d0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          if (*(ulonglong *)(puVar1 + 4) != 0 && (*(ulonglong *)(puVar1 + 4) & 1) == 0) {
            FUN_1400020a8();
          }
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
          FUN_147471238(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147471188 FUN_147471188 body=175 status=ok
// SIG undefined FUN_147471188(void)

undefined8 * FUN_147471188(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined **local_48;
  ulonglong local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = &PTR_FUN_14a34c530;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = &PTR_LAB_14a3d30d0;
  param_2[2] = 0;
  FUN_140702250(param_2 + 2,&local_40);
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_38;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_38._4_4_;
  uStack_38 = 0;
  param_2[1] = &PTR_FUN_14a34c530;
  *(undefined1 *)(param_2 + 4) = local_30;
  if (local_40 != 0 && (local_40 & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147471238 FUN_147471238 body=122 status=ok
// SIG undefined FUN_147471238(void)

void FUN_147471238(longlong *param_1,int param_2)

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



// FUNCTION 1474712b2 FUN_1474712b2 body=478 status=ok
// SIG undefined FUN_1474712b2(void)

void FUN_1474712b2(longlong *param_1)

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



// FUNCTION 147471492 FUN_147471492 body=114 status=ok
// SIG undefined FUN_147471492(void)

void FUN_147471492(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147471504 FUN_147471504 body=31 status=ok
// SIG undefined FUN_147471504(void)

undefined8 FUN_147471504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147471540 FUN_147471540 body=101 status=ok
// SIG undefined FUN_147471540(void)

void FUN_147471540(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d41d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1474715a6 FUN_1474715a6 body=101 status=ok
// SIG undefined FUN_1474715a6(void)

void FUN_1474715a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d41d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14747160c FUN_14747160c body=134 status=ok
// SIG undefined FUN_14747160c(void)

void FUN_14747160c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3d41d0;
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
                    /* WARNING: Could not recover jumptable at 0x000147471683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1474716a2 FUN_1474716a2 body=121 status=ok
// SIG undefined FUN_1474716a2(void)

void FUN_1474716a2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(*param_1 + (longlong)(int)param_2 * 8);
  if (lVar1 != 0) {
    FUN_14746c44e(lVar1);
    FUN_1400020a8(lVar1);
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*param_1 + (longlong)(int)param_2 * 8),
            (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 14747171c FUN_14747171c body=48 status=ok
// SIG undefined FUN_14747171c(void)

void FUN_14747171c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 14747174c FUN_14747174c body=326 status=ok
// SIG undefined FUN_14747174c(void)

void FUN_14747174c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 147471894 FUN_147471894 body=300 status=ok
// SIG undefined FUN_147471894(void)

void FUN_147471894(longlong *param_1)

{
  ulonglong uVar1;
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
      uVar1 = *(ulonglong *)(*local_60 + 0x10 + (longlong)iStack_44 * 0x30);
      if (uVar1 != 0 && (uVar1 & 1) == 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474719c2 FUN_1474719c2 body=132 status=ok
// SIG undefined FUN_1474719c2(void)

void FUN_1474719c2(longlong param_1,int param_2)

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



// FUNCTION 147471a48 FUN_147471a48 body=38 status=ok
// SIG undefined FUN_147471a48(void)

undefined8 FUN_147471a48(undefined8 param_1,int param_2)

{
  FUN_14097e1e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147471a6e FUN_147471a6e body=79 status=ok
// SIG undefined FUN_147471a6e(void)

void FUN_147471a6e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a3d46d0;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147471ac0 FUN_147471ac0 body=38 status=ok
// SIG undefined FUN_147471ac0(void)

undefined8 FUN_147471ac0(undefined8 param_1,int param_2)

{
  FUN_14097e0c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147471ae6 FUN_147471ae6 body=28 status=ok
// SIG undefined FUN_147471ae6(void)

void FUN_147471ae6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 147471b02 FUN_147471b02 body=23 status=ok
// SIG undefined FUN_147471b02(void)

void FUN_147471b02(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147471b1a FUN_147471b1a body=38 status=ok
// SIG undefined FUN_147471b1a(void)

undefined8 FUN_147471b1a(undefined8 param_1,int param_2)

{
  FUN_147471a6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147471b40 FUN_147471b40 body=158 status=ok
// SIG undefined FUN_147471b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147471b40(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar3 = (ulonglong)param_2 - 1;
    auVar5._8_4_ = (int)lVar3;
    auVar5._0_8_ = lVar3;
    auVar5._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    puVar2 = (undefined8 *)(param_1 + 0x18);
    uVar4 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x100);
    auVar5 = auVar5 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar5._0_8_ < (longlong)(uVar4 ^ auVar1._0_8_)) & 1)) {
        *puVar2 = 0;
      }
      auVar7._8_4_ = (int)uVar4;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)(uVar4 >> 0x20);
      if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ auVar1._8_8_) <= auVar5._8_8_) {
        puVar2[6] = 0;
      }
      uVar4 = uVar4 + 2;
      puVar2 = puVar2 + 0xc;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar4);
  }
  return;
}



// FUNCTION 147471bde FUN_147471bde body=147 status=ok
// SIG undefined FUN_147471bde(void)

void FUN_147471bde(longlong param_1,int param_2)

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



// FUNCTION 147471c72 FUN_147471c72 body=70 status=ok
// SIG undefined FUN_147471c72(void)

longlong FUN_147471c72(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a3d4338;
  FUN_14097e147(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  FUN_14326d5f2(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147471cb8 FUN_147471cb8 body=69 status=ok
// SIG undefined FUN_147471cb8(void)

undefined8 * FUN_147471cb8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3d4338;
  FUN_14097e147(param_1[1],*(undefined4 *)(param_1 + 2));
  FUN_14326d5f2(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147471cfe FUN_147471cfe body=85 status=ok
// SIG undefined FUN_147471cfe(void)

void FUN_147471cfe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14326d656();
  return;
}



// FUNCTION 147471d54 FUN_147471d54 body=30 status=ok
// SIG undefined FUN_147471d54(void)

void FUN_147471d54(longlong param_1)

{
  FUN_147471d72(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147471d72 FUN_147471d72 body=61 status=ok
// SIG undefined FUN_147471d72(void)

void FUN_147471d72(longlong *param_1)

{
  FUN_147471db0();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147471db0 FUN_147471db0 body=70 status=ok
// SIG undefined FUN_147471db0(void)

void FUN_147471db0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_14746c44e(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 147471df6 FUN_147471df6 body=146 status=ok
// SIG undefined FUN_147471df6(void)

void FUN_147471df6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147471e8a FUN_147471e8a body=114 status=ok
// SIG undefined FUN_147471e8a(void)

void FUN_147471e8a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
    iVar2 = (int)(uVar1 / 0xf0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147471efc FUN_147471efc body=146 status=ok
// SIG undefined FUN_147471efc(void)

void FUN_147471efc(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
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
  longlong lVar12;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    lVar12 = *(longlong *)(param_2 + 0xa8);
    if (*(longlong *)(param_2 + 0xa8) == 0) {
      lVar12 = param_2;
    }
    FUN_144739392(param_1,lVar12,*(undefined4 *)(param_2 + 0xb0),0);
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    uVar1 = *(undefined4 *)(param_2 + 0xb8);
    uVar2 = *(undefined4 *)(param_2 + 0xbc);
    uVar3 = *(undefined4 *)(param_2 + 0xc0);
    uVar4 = *(undefined4 *)(param_2 + 0xc4);
    uVar5 = *(undefined4 *)(param_2 + 200);
    uVar6 = *(undefined4 *)(param_2 + 0xcc);
    uVar7 = *(undefined4 *)(param_2 + 0xd0);
    uVar8 = *(undefined4 *)(param_2 + 0xd4);
    uVar9 = *(undefined4 *)(param_2 + 0xdc);
    uVar10 = *(undefined4 *)(param_2 + 0xe0);
    uVar11 = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = uVar9;
    *(undefined4 *)(param_1 + 0xe0) = uVar10;
    *(undefined4 *)(param_1 + 0xe4) = uVar11;
    *(undefined4 *)(param_1 + 200) = uVar5;
    *(undefined4 *)(param_1 + 0xcc) = uVar6;
    *(undefined4 *)(param_1 + 0xd0) = uVar7;
    *(undefined4 *)(param_1 + 0xd4) = uVar8;
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    *(undefined4 *)(param_1 + 0xc4) = uVar4;
    param_1 = param_1 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return;
}



// FUNCTION 147471f8e FUN_147471f8e body=132 status=ok
// SIG undefined FUN_147471f8e(void)

void FUN_147471f8e(longlong param_1,int param_2)

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



// FUNCTION 14747201c FUN_14747201c body=73 status=ok
// SIG undefined FUN_14747201c(void)

int FUN_14747201c(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  puVar1 = (ulonglong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_14042c7ac(puVar1,iVar2);
  }
  uVar3 = *puVar1;
  uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  *(undefined4 *)(uVar4 + (longlong)iVar2 * 4) = param_2;
  return iVar2;
}



// FUNCTION 1474720b0 FUN_1474720b0 body=118 status=ok
// SIG undefined FUN_1474720b0(void)

void FUN_1474720b0(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - param_3;
  if (param_3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = iVar3 - (param_3 + param_2);
  if (iVar2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    uVar4 = ((longlong)uVar1 >> 0x18) + param_1 + 0x28;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar1;
    }
    _Dst = (void *)(uVar4 + (longlong)param_2 * 4);
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 4),(longlong)iVar2 << 2);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x30) = iVar3 - param_3;
  FUN_14738c64c(param_1 + 0x28);
  return;
}



// FUNCTION 147472126 FUN_147472126 body=56 status=ok
// SIG undefined FUN_147472126(void)

int FUN_147472126(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x30) < 0x40000000) {
    iVar1 = *(uint *)(param_1 + 0x30) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147472160 FUN_147472160 body=103 status=ok
// SIG undefined FUN_147472160(void)

void FUN_147472160(ulonglong *param_1,int param_2,uint param_3)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_14042c7ac(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  _Src = (void *)(uVar3 + (longlong)param_2 * 4);
  memmove((void *)((longlong)_Src + (longlong)(int)param_3 * 4),_Src,
          (ulonglong)(uint)(iVar1 - param_2) << 2);
  return;
}



// FUNCTION 1474721d0 FUN_1474721d0 body=74 status=ok
// SIG undefined FUN_1474721d0(void)

int FUN_1474721d0(longlong param_1,undefined2 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  puVar1 = (ulonglong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_141794766(puVar1,iVar2);
  }
  uVar3 = *puVar1;
  uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)puVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  *(undefined2 *)(uVar4 + (longlong)iVar2 * 2) = param_2;
  return iVar2;
}



// FUNCTION 147472264 FUN_147472264 body=117 status=ok
// SIG undefined FUN_147472264(void)

void FUN_147472264(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - param_3;
  if (param_3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = iVar3 - (param_3 + param_2);
  if (iVar2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    uVar4 = ((longlong)uVar1 >> 0x18) + param_1 + 0x28;
    if ((uVar1 & 1) == 0) {
      uVar4 = uVar1;
    }
    _Dst = (void *)(uVar4 + (longlong)param_2 * 2);
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 2),(longlong)iVar2 * 2);
    iVar3 = *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x30) = iVar3 - param_3;
  FUN_147472a96(param_1 + 0x28);
  return;
}



// FUNCTION 1474722da FUN_1474722da body=52 status=ok
// SIG undefined FUN_1474722da(void)

int FUN_1474722da(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) < 0) {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,2);
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30) * 2;
  }
  return iVar1;
}


