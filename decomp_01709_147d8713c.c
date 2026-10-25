// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d8713c FUN_147d8713c body=29 status=ok
// SIG undefined FUN_147d8713c(void)

undefined8 FUN_147d8713c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d8715a FUN_147d8715a body=55 status=ok
// SIG undefined FUN_147d8715a(void)

void FUN_147d8715a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x48) = 5;
  FUN_147d87192();
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_140b8566a(lVar1,param_2,5);
  return;
}



// FUNCTION 147d87192 FUN_147d87192 body=129 status=ok
// SIG undefined FUN_147d87192(void)

void FUN_147d87192(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0x50;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e05];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x50,0);
  }
  iVar1 = (int)(uVar2 >> 4);
  iVar3 = 0x7fffffff;
  if (4 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446efa72(param_1 + 0x40,0,iVar3,0x10);
  *(int *)(param_1 + 0x4c) = iVar3;
  return;
}



// FUNCTION 147d87214 FUN_147d87214 body=121 status=ok
// SIG undefined FUN_147d87214(void)

void FUN_147d87214(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = DAT_14cb0d020;
  if (param_1 <= (int)DAT_14cb0d020) {
    iVar2 = 2;
    if (2 < DAT_14cb0d020) {
      if (DAT_14cb0d024 < 3) {
        uVar3 = 4;
        if (4 < DAT_14cb0d020) {
          uVar3 = DAT_14cb0d020;
        }
        lVar6 = (longlong)(int)uVar3;
      }
      else {
        lVar6 = (longlong)(int)DAT_14cb0d020 + ((ulonglong)((longlong)(int)DAT_14cb0d020 * 3) >> 3)
                + 0x10;
      }
      uVar5 = FUN_144a3809e(lVar6 << 3,0);
      iVar4 = (int)(uVar5 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar2 = iVar4;
      }
    }
    DAT_14cb0d024 = iVar2;
    FUN_147d8728e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d8728e FUN_147d8728e body=142 status=ok
// SIG undefined FUN_147d8728e(void)

void FUN_147d8728e(int param_1,uint param_2)

{
  if (param_2 < 3) {
    if (DAT_14cb0d018 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb0d008,DAT_14cb0d018,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb0d018 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb0d018,0,param_2,8);
    memmove(DAT_14cb0d018,&DAT_14cb0d008,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cb0d018,param_1,param_2,8);
  return;
}



// FUNCTION 147d8731c FUN_147d8731c body=107 status=ok
// SIG undefined FUN_147d8731c(void)

void FUN_147d8731c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cb0d048;
  if (param_1 <= (int)DAT_14cb0d048) {
    iVar2 = 3;
    if (3 < DAT_14cb0d048) {
      lVar5 = (longlong)(int)DAT_14cb0d048;
      if (3 < DAT_14cb0d04c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cb0d04c = iVar2;
    FUN_147d87388(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb0d048);
}



// FUNCTION 147d87388 FUN_147d87388 body=142 status=ok
// SIG undefined FUN_147d87388(void)

void FUN_147d87388(int param_1,uint param_2)

{
  if (param_2 < 4) {
    if (DAT_14cb0d040 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cb0d028,DAT_14cb0d040,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cb0d040 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cb0d040,0,param_2,8);
    memmove(DAT_14cb0d040,&DAT_14cb0d028,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14cb0d040,param_1,param_2,8);
  return;
}



// FUNCTION 147d87416 FUN_147d87416 body=210 status=ok
// SIG undefined FUN_147d87416(void)

void FUN_147d87416(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147d874ba;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147d874ba:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147d874e8 FUN_147d874e8 body=173 status=ok
// SIG undefined FUN_147d874e8(void)

void FUN_147d874e8(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147d8757f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147d8757f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147d87596 FUN_147d87596 body=138 status=ok
// SIG undefined FUN_147d87596(void)

void FUN_147d87596(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 147d87620 FUN_147d87620 body=191 status=ok
// SIG undefined FUN_147d87620(void)

void FUN_147d87620(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14c964298;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14c9642a4 = DAT_14c9642a4 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14c964290 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14c964290 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14c9642a4 = DAT_14c9642a4 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147d876c6;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14c9642a4 = DAT_14c9642a4 + -1;
LAB_147d876c6:
  FUN_14474d06a(&DAT_14c964290,0);
  return;
}



// FUNCTION 147d876e0 FUN_147d876e0 body=62 status=ok
// SIG undefined FUN_147d876e0(void)

void FUN_147d876e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d8771e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147d8771e FUN_147d8771e body=93 status=ok
// SIG undefined FUN_147d8771e(void)

ulonglong FUN_147d8771e(uint param_1,uint param_2)

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



// FUNCTION 147d8777c FUN_147d8777c body=320 status=ok
// SIG undefined FUN_147d8777c(void)

undefined4 * FUN_147d8777c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14096da0c(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_14096d978(param_1,uVar2,local_40);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14096dbe8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d878be FUN_147d878be body=322 status=ok
// SIG undefined FUN_147d878be(void)

void FUN_147d878be(longlong *param_1)

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



// FUNCTION 147d87a02 FUN_147d87a02 body=29 status=ok
// SIG undefined FUN_147d87a02(void)

undefined8 FUN_147d87a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d87a42 FUN_147d87a42 body=93 status=ok
// SIG undefined FUN_147d87a42(void)

void FUN_147d87a42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6c10;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aae6ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147d87aa0 FUN_147d87aa0 body=93 status=ok
// SIG undefined FUN_147d87aa0(void)

void FUN_147d87aa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aae6c10;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14aae6ba0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147d87afe FUN_147d87afe body=126 status=ok
// SIG undefined FUN_147d87afe(void)

void FUN_147d87afe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aae6c10;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar2;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar4;
  *(undefined ***)p_Var1 = &PTR_FUN_14aae6ba0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d87b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147d87b94 FUN_147d87b94 body=33 status=ok
// SIG undefined FUN_147d87b94(void)

undefined8 FUN_147d87b94(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 147d87bb8 FUN_147d87bb8 body=62 status=ok
// SIG undefined FUN_147d87bb8(void)

void FUN_147d87bb8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d87bf6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147d87bf6 FUN_147d87bf6 body=93 status=ok
// SIG undefined FUN_147d87bf6(void)

ulonglong FUN_147d87bf6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147d87c54 FUN_147d87c54 body=48 status=ok
// SIG undefined FUN_147d87c54(void)

void FUN_147d87c54(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 147d87c84 FUN_147d87c84 body=132 status=ok
// SIG undefined FUN_147d87c84(void)

void FUN_147d87c84(longlong param_1,int param_2)

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



// FUNCTION 147d87d0a FUN_147d87d0a body=451 status=ok
// SIG undefined FUN_147d87d0a(void)

void FUN_147d87d0a(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    FUN_147d88064(param_1 + 0x108);
    FUN_147d881a8(param_1 + 0x108);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x90);
  if (uVar2 != 0) {
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      lVar4 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0xe8);
      }
      iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & (uVar3 >> 0x10 ^ uVar3))
                               * 4);
      if (iVar5 != -1) {
        lVar4 = *(longlong *)(param_1 + 0xa8);
        do {
          lVar1 = lVar4 + (longlong)iVar5 * 0x10;
          if (*(ulonglong *)(lVar4 + (longlong)iVar5 * 0x10) == uVar2) {
            if (lVar1 != 0) goto LAB_147d87d75;
            break;
          }
          iVar5 = *(int *)(lVar1 + 8);
        } while (iVar5 != -1);
      }
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x160) + 0x34) <
         *(int *)(*(longlong *)(param_1 + 0x160) + 8)) || (*(char *)(param_1 + 0x159) == '\x01')) {
      FUN_1457b12ce((longlong *)(param_1 + 0xa8),local_1c,param_1 + 0x90,0);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
      FUN_1468763da(param_1);
      if (0 < *(int *)(param_1 + 0x100)) {
        lVar4 = 0;
        do {
          *(undefined8 *)(param_1 + 0x98) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 8);
          FUN_1468763da(param_1);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x100));
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
      if (*(int *)(param_1 + 0x104) < 0) {
        FUN_14079e7a6(param_1 + 0xf8,0);
      }
    }
  }
LAB_147d87d75:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d87ece FUN_147d87ece body=38 status=ok
// SIG undefined FUN_147d87ece(void)

undefined8 FUN_147d87ece(undefined8 param_1,int param_2)

{
  FUN_147d8229a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d87ef4 FUN_147d87ef4 body=193 status=ok
// SIG undefined FUN_147d87ef4(void)

longlong * FUN_147d87ef4(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = FUN_140007850(param_2);
  if (local_28 == 0) {
    FUN_14010d536(param_2,param_1);
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,&local_28);
    FUN_1400bbfc4(&local_48,local_28);
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = uStack_3c;
    if (&local_48 == param_2) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 4) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 4) = local_38;
      param_2[6] = local_30;
      param_2[7] = local_2c;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d87fbc FUN_147d87fbc body=167 status=ok
// SIG undefined FUN_147d87fbc(void)

longlong FUN_147d87fbc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  FUN_147d882c6(param_1,&local_28);
  if (local_28 != 0) {
    lVar1 = FUN_144b00ba4();
    if (((lVar1 != 0) && (lVar1 != *param_2)) && (*(longlong *)(param_1 + 0x168) != lVar1)) {
      lVar1 = FUN_144b00a7c();
      lVar2 = FUN_144b00a7c(*(undefined8 *)(param_1 + 0x90));
      if ((lVar1 != lVar2) && ((*(uint *)(*param_2 + 8) & 1) == 0)) {
        local_28 = 0;
      }
    }
  }
  *param_2 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d88064 FUN_147d88064 body=322 status=ok
// SIG undefined FUN_147d88064(void)

void FUN_147d88064(longlong *param_1)

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



// FUNCTION 147d881a8 FUN_147d881a8 body=285 status=ok
// SIG undefined FUN_147d881a8(void)

void FUN_147d881a8(longlong *param_1)

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



// FUNCTION 147d882c6 FUN_147d882c6 body=497 status=ok
// SIG undefined FUN_147d882c6(void)

longlong FUN_147d882c6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_58 [39];
  char local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  if (uVar2 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x160);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar8 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar3[8];
      }
      iVar7 = *(int *)((longlong)plVar8 +
                      (ulonglong)((int)plVar3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar7 != -1) {
        do {
          puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar7 * 0x18);
          if (*puVar1 == uVar2) {
            if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
              *param_2 = puVar1[1];
              if (*(char *)(param_1 + 0x158) == '\x01') {
                uVar6 = ((uint)(*(ulonglong *)(param_1 + 0x98) >> 0x14) & 0xffff ^
                        (uint)(*(ulonglong *)(param_1 + 0x98) >> 4)) * -0x7a143595;
                uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
                uVar5 = FUN_147d884b8(param_1 + 0x108,uVar6 >> 0x10 ^ uVar6,param_1 + 0x98);
                local_30 = *(undefined8 *)(param_1 + 0x70);
                FUN_147d88ab2(uVar5);
              }
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
              goto LAB_147d88332;
            }
            break;
          }
          iVar7 = (int)puVar1[2];
        } while (iVar7 != -1);
      }
    }
    if ((uVar2 == *(ulonglong *)(param_1 + 0x90)) || (cVar4 = FUN_144b00bde(), cVar4 != '\0')) {
      local_31 = '\0';
      FUN_1457b12ce(param_1 + 0xa8,&local_30,param_2,&local_31);
      if (local_31 == '\0') {
        iVar7 = *(int *)(param_1 + 0x100);
        *(uint *)(param_1 + 0x100) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x104) < iVar7 + 1U) {
          FUN_1447f76d2((longlong *)(param_1 + 0xf8),iVar7);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar7 * 8) = *param_2;
      }
    }
    else if ((*(char *)(param_1 + 0x159) == '\x01') && ((*(uint *)(*param_2 + 8) & 1) == 0)) {
      *param_2 = 0;
    }
  }
LAB_147d88332:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d884b8 FUN_147d884b8 body=190 status=ok
// SIG undefined FUN_147d884b8(void)

longlong FUN_147d884b8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
          if (lVar3 != 0) goto LAB_147d88559;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_147d88578(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147d88559:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147d88578 FUN_147d88578 body=302 status=ok
// SIG undefined FUN_147d88578(void)

undefined4 *
FUN_147d88578(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147d886a8(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_147d8878e(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147d888d4(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d886a8 FUN_147d886a8 body=229 status=ok
// SIG undefined FUN_147d886a8(void)

int * FUN_147d886a8(longlong *param_1,int *param_2)

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



// FUNCTION 147d8878e FUN_147d8878e body=187 status=ok
// SIG undefined FUN_147d8878e(void)

void FUN_147d8878e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
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
          FUN_147d8884a(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_147d88801;
        }
        iVar8 = puVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_147d88801:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 147d8884a FUN_147d8884a body=138 status=ok
// SIG undefined FUN_147d8884a(void)

void FUN_147d8884a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147d888d4 FUN_147d888d4 body=477 status=ok
// SIG undefined FUN_147d888d4(void)

void FUN_147d888d4(longlong *param_1)

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



// FUNCTION 147d88ab2 FUN_147d88ab2 body=103 status=ok
// SIG undefined FUN_147d88ab2(void)

ulonglong FUN_147d88ab2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_147d88b06;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140001000(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_147d88b06:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147d88b1a FUN_147d88b1a body=71 status=ok
// SIG undefined FUN_147d88b1a(void)

void FUN_147d88b1a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 147d88b62 FUN_147d88b62 body=347 status=ok
// SIG undefined FUN_147d88b62(void)

undefined4 * FUN_147d88b62(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409bc900(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_58 = 0;
  cVar3 = FUN_1409bc7bc(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
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
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d88cbe FUN_147d88cbe body=334 status=ok
// SIG undefined FUN_147d88cbe(void)

undefined4 * FUN_147d88cbe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140503402(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_14050336a(param_1,uVar3,local_40);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140503742(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d88e0e FUN_147d88e0e body=175 status=ok
// SIG undefined FUN_147d88e0e(void)

undefined8 * FUN_147d88e0e(undefined8 *param_1)

{
  FUN_144869430();
  *param_1 = &PTR_FUN_14aae71d0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15b) = 0;
  return param_1;
}



// FUNCTION 147d88ebe FUN_147d88ebe body=38 status=ok
// SIG undefined FUN_147d88ebe(void)

undefined8 FUN_147d88ebe(undefined8 param_1,int param_2)

{
  FUN_147d8229a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d88ee4 FUN_147d88ee4 body=38 status=ok
// SIG undefined FUN_147d88ee4(void)

void FUN_147d88ee4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a90f04(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 147d88f0a FUN_147d88f0a body=81 status=ok
// SIG undefined FUN_147d88f0a(void)

void FUN_147d88f0a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_147d88f5c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147d88f5c FUN_147d88f5c body=90 status=ok
// SIG undefined FUN_147d88f5c(void)

void FUN_147d88f5c(longlong *param_1,int param_2)

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
  FUN_147d88fb6();
  return;
}



// FUNCTION 147d88fb6 FUN_147d88fb6 body=73 status=ok
// SIG undefined FUN_147d88fb6(void)

void FUN_147d88fb6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_1447a1747(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_147d85754(param_1,param_2);
  return;
}



// FUNCTION 147d89000 FUN_147d89000 body=113 status=ok
// SIG undefined FUN_147d89000(void)

void FUN_147d89000(longlong *param_1,double param_2)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + SUB84(param_2,0)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        dVar1 = *(double *)(*param_1 + (longlong)iVar2 * 0x20);
        if ((dVar1 == param_2) && (!NAN(dVar1) && !NAN(param_2))) {
          FUN_147d89072();
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147d89072 FUN_147d89072 body=90 status=ok
// SIG undefined FUN_147d89072(void)

void FUN_147d89072(longlong *param_1,int param_2)

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
  FUN_147d890cc();
  return;
}



// FUNCTION 147d890cc FUN_147d890cc body=73 status=ok
// SIG undefined FUN_147d890cc(void)

void FUN_147d890cc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_1447a1747(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_147d85b46(param_1,param_2);
  return;
}



// FUNCTION 147d89116 FUN_147d89116 body=266 status=ok
// SIG undefined FUN_147d89116(void)

void FUN_147d89116(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb0d2d8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2e0 != DAT_14cb0d30c) {
    puVar4 = &DAT_14cb0d310;
    if (DAT_14cb0d318 != (undefined *)0x0) {
      puVar4 = DAT_14cb0d318;
    }
    uVar3 = (longlong)(int)((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1) &
            (longlong)DAT_14cb0d320 - 1U;
    if ((longlong)*(int *)(puVar4 + uVar3 * 4) != -1) {
      lVar6 = (longlong)*(int *)(puVar4 + uVar3 * 4) * 0x10;
      local_38 = *(undefined8 *)(DAT_14cb0d2d8 + lVar6);
      local_40 = param_1;
      cVar2 = FUN_147d9e1b2();
      if (cVar2 == '\0') {
        lVar1 = lVar1 + lVar6;
        do {
          lVar5 = lVar1;
          lVar6 = (longlong)*(int *)(lVar5 + 8);
          if (lVar6 == -1) goto LAB_147d89179;
          lVar6 = lVar6 * 0x10;
          lVar1 = DAT_14cb0d2d8 + lVar6;
          local_38 = *(undefined8 *)(DAT_14cb0d2d8 + lVar6);
          local_40 = param_1;
          cVar2 = FUN_147d9e1b2(&local_38,&local_40);
        } while (cVar2 == '\0');
        puVar7 = (undefined4 *)(lVar5 + 8);
      }
      else {
        puVar7 = (undefined4 *)(puVar4 + uVar3 * 4);
      }
      FUN_147d9e268(*puVar7);
    }
  }
LAB_147d89179:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d89222 FUN_147d89222 body=151 status=ok
// SIG undefined FUN_147d89222(void)

void FUN_147d89222(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x28);
  uVar2 = FUN_1405d0c38(param_2,param_1 + 0x38);
  FUN_1405d0c38(uVar2,param_1 + 0x48);
  puVar3 = (undefined4 *)(param_1 + 0x58);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147d89292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
    return;
  }
  thunk_FUN_14572512c(param_2,puVar3);
  return;
}



// FUNCTION 147d892ba FUN_147d892ba body=164 status=ok
// SIG undefined FUN_147d892ba(void)

undefined8 FUN_147d892ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((((lVar1 != 0) && (lVar2 = FUN_1446f8646(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)))) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    lVar2 = FUN_1446f8646();
    if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
    }
    if (*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                      *(longlong *)(lVar1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 147d89376 FUN_147d89376 body=1023 status=ok
// SIG undefined FUN_147d89376(void)

undefined8 FUN_147d89376(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  ushort uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined2 *puVar14;
  ushort uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = FUN_144a79778();
  uVar9 = 0;
  if ((*(byte *)(lVar6 + 0x2e) & 0x40) == 0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_c0 = (longlong *)&DAT_100000000;
    local_b8 = (longlong *)&DAT_14cb0d2e8;
    local_b0 = 0xffffffff;
    local_a8 = 0;
    local_108 = param_1;
    if (DAT_14cb0d300 != 0) {
      FUN_1449c0562(&local_c0);
    }
    local_d8 = local_b0;
    uVar9 = local_d8;
    local_d0 = local_a8;
    local_cc = local_a4;
    local_e8 = local_c0;
    local_e0 = local_b8;
    local_f0 = &DAT_14cb0d2d8;
    local_c8 = &DAT_14cb0d2d8;
    local_d8._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
    if (local_d8._4_4_ < (int)local_b8[3]) {
      iVar5 = local_d8._4_4_;
      local_d8 = uVar9;
      do {
        plVar7 = (longlong *)FUN_14479d2ce((longlong)iVar5 * 0x10 + *local_f0);
        if ((((plVar7 != (longlong *)0x0) && ((*(uint *)(plVar7[2] + 0xd4) & 0x82000001) == 0)) &&
            (cVar4 = (**(code **)(*plVar7 + 0x2a0))(plVar7,local_108), cVar4 != '\0')) &&
           (iVar5 = (int)plVar7[8], 0 < iVar5)) {
          lVar6 = 0;
          do {
            puVar1 = (undefined8 *)(plVar7[7] + lVar6 * 0x10);
            iVar3 = *(int *)(plVar7[7] + 8 + lVar6 * 0x10);
            puVar14 = &DAT_149dfb77a;
            if (iVar3 != 0) {
              puVar14 = (undefined2 *)*puVar1;
            }
            lVar16 = 0;
            while( true ) {
              uVar11 = *(ushort *)((longlong)puVar14 + lVar16);
              uVar13 = (uint)uVar11;
              uVar15 = *(ushort *)(param_2 + lVar16);
              uVar19 = (uint)uVar15;
              if (uVar11 != uVar15) {
                if ((uVar15 | uVar11) < 0x80) {
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar11];
                  uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar15];
                  if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar15]) goto LAB_147d8957f;
                }
                iVar10 = uVar13 - uVar19;
                goto LAB_147d895a9;
              }
              if (uVar11 == 0) break;
LAB_147d8957f:
              lVar16 = lVar16 + 2;
            }
            iVar10 = 0;
LAB_147d895a9:
            puVar14 = &DAT_149dfb77a;
            if (iVar3 != 0) {
              puVar14 = (undefined2 *)*puVar1;
            }
            lVar16 = 0;
            while( true ) {
              uVar11 = *(ushort *)((longlong)puVar14 + lVar16);
              uVar12 = (ulonglong)uVar11;
              uVar15 = *(ushort *)((longlong)&DAT_149e060b2 + lVar16);
              if (uVar11 != uVar15) break;
              if (uVar11 == 0) goto LAB_147d895f9;
LAB_147d895cb:
              lVar16 = lVar16 + 2;
            }
            if ((uVar15 | uVar11) < 0x80) {
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar17 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar17]) goto LAB_147d895cb;
            }
            if ((iVar10 != 0) && (uVar11 != uVar15)) goto LAB_147d8966a;
LAB_147d895f9:
            local_f8 = plVar7[2];
            lVar16 = plVar7[5];
            if (((lVar16 == 0) || (lVar8 = FUN_1446f8646(), lVar8 == 0)) ||
               ((*(int *)(lVar16 + 0x38) < *(int *)(lVar8 + 0x38) ||
                (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                 != lVar8 + 0x30)))) {
              local_100 = 0;
            }
            else {
              local_100 = plVar7[5];
            }
            local_c0 = &local_100;
            local_b8 = &local_f8;
            FUN_147d9e2c8(&local_98,local_9c,&local_c0);
            iVar5 = (int)plVar7[8];
LAB_147d8966a:
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar5);
        }
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
        FUN_1449c0562(&local_e8);
        iVar5 = local_d8._4_4_;
        uVar9 = local_d8;
      } while (local_d8._4_4_ < (int)local_e0[3]);
    }
    local_d8 = uVar9;
    uVar12 = *(ulonglong *)(local_108 + 0x10);
    if (uVar12 == 0) {
      uVar9 = 0;
    }
    else {
      puVar18 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar18 = local_60;
      }
      uVar9 = 0;
      do {
        if ((int)uStack_90 != local_64) {
          uVar13 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          iVar5 = *(int *)(puVar18 + (ulonglong)((uVar13 >> 0x10 ^ uVar13) & local_50 - 1U) * 4);
          while (iVar5 != -1) {
            puVar2 = (ulonglong *)(local_98 + (longlong)iVar5 * 0x18);
            if (*puVar2 == uVar12) {
              if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
                uVar9 = FUN_147d89776(DAT_14c951640,puVar2[1]);
                goto LAB_147d89696;
              }
              break;
            }
            iVar5 = (int)puVar2[2];
          }
        }
        uVar12 = *(ulonglong *)(uVar12 + 0x40);
      } while (uVar12 != 0);
    }
LAB_147d89696:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_146820694(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147d89776 FUN_147d89776 body=175 status=ok
// SIG undefined FUN_147d89776(void)

undefined8 FUN_147d89776(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 147d89826 FUN_147d89826 body=791 status=ok
// SIG undefined FUN_147d89826(void)

undefined8 * FUN_147d89826(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_128 [32];
  uint local_108;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8 [3];
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong *local_78;
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_1 = &PTR_FUN_14aae7870;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar3 = FUN_14482ca40();
  uVar4 = FUN_1446f8646();
  local_108 = uVar3 | 0x90200000;
  FUN_146123bc0(&local_a0,uVar4,0,0x10);
  local_c8 = local_a0;
  uStack_c4 = uStack_9c;
  iStack_c0 = iStack_98;
  uStack_bc = uStack_94;
  local_b8 = local_90;
  uStack_b4 = uStack_8c;
  uStack_b0 = uStack_88;
  uStack_ac = uStack_84;
  local_a8 = local_80;
  EnterCriticalSection((LPCRITICAL_SECTION)(CONCAT44(uStack_9c,local_a0) + 0x30));
  iVar1 = *(int *)(CONCAT44(uStack_9c,local_a0) + 0x24);
  lpCriticalSection = (LPCRITICAL_SECTION)(CONCAT44(uStack_9c,local_a0) + 0x30);
  EnterCriticalSection(lpCriticalSection);
  if (iStack_c0 != iVar1) {
    local_f8 = param_1 + 1;
    puVar10 = param_1 + 8;
    do {
      plVar2 = local_f8;
      if ((longlong *)CONCAT44(uStack_b4,local_b8) == (longlong *)0x0) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)CONCAT44(uStack_b4,local_b8);
      }
      if ((longlong)(int)param_2[1] != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*param_2 + lVar7) == lVar9) goto LAB_147d89ac2;
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)param_2[1] * 8 != lVar7);
      }
      local_d0 = *(ulonglong *)(lVar9 + 0x20);
      if ((local_d0 != 0) && ((*(uint *)(local_d0 + 8) >> 0x1e & 1) == 0)) {
        local_f0 = puVar10;
        if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
          uVar3 = ((uint)(local_d0 >> 0x14) & 0xffff ^ (uint)(local_d0 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          puVar6 = (undefined8 *)param_1[9];
          if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
            puVar6 = puVar10;
          }
          iVar5 = *(int *)((longlong)puVar6 +
                          (ulonglong)(*(int *)(param_1 + 10) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          if (iVar5 != -1) {
            do {
              lVar7 = *local_f8 + (longlong)iVar5 * 0x20;
              if (*(ulonglong *)(*local_f8 + (longlong)iVar5 * 0x20) == local_d0) {
                plVar8 = (longlong *)(lVar7 + 8);
                if (plVar8 != (longlong *)0x0 && lVar7 != 0) {
                  iVar5 = *(int *)(lVar7 + 0x10);
                  *(uint *)(lVar7 + 0x10) = iVar5 + 1U;
                  if (iVar5 + 1U <= *(uint *)(lVar7 + 0x14)) goto LAB_147d89aaa;
                  goto LAB_147d89a9f;
                }
                break;
              }
              iVar5 = *(int *)(lVar7 + 0x18);
            } while (iVar5 != -1);
          }
        }
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_70 = local_e8;
        local_78 = &local_d0;
        FUN_147d9e850(local_f8,&local_64,&local_78);
        lVar11 = (longlong)local_64;
        lVar7 = *plVar2;
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + lVar11 * 0x20;
        plVar8 = (longlong *)(lVar7 + 8);
        iVar5 = *(int *)(lVar7 + 0x10);
        *(uint *)(lVar7 + 0x10) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x14) < iVar5 + 1U) {
LAB_147d89a9f:
          FUN_1447f76d2(plVar8);
        }
LAB_147d89aaa:
        *(longlong *)(*plVar8 + (longlong)iVar5 * 8) = lVar9;
        puVar10 = local_f0;
      }
LAB_147d89ac2:
      FUN_1468bea3c(&local_c8);
    } while (iStack_c0 != iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)(CONCAT44(uStack_c4,local_c8) + 0x30));
  LeaveCriticalSection((LPCRITICAL_SECTION)(CONCAT44(uStack_9c,local_a0) + 0x30));
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d89b3e FUN_147d89b3e body=107 status=ok
// SIG undefined FUN_147d89b3e(void)

undefined8 * FUN_147d89b3e(undefined8 *param_1)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  param_1[0x13] = param_1 + 0x15;
  param_1[0x14] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = &PTR_FUN_14aaf6b00;
  return param_1;
}



// FUNCTION 147d89baa FUN_147d89baa body=66 status=ok
// SIG undefined FUN_147d89baa(void)

ulonglong FUN_147d89baa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  
  lVar2 = param_1[1];
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((longlong)(int)lVar2 == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    lVar1 = *param_1;
    uVar4 = CONCAT71(uVar5,1);
    lVar6 = 0;
    do {
      bVar3 = FUN_14376b4c8(*(undefined8 *)(lVar1 + lVar6));
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & bVar3);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar6);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147d89bec FUN_147d89bec body=672 status=ok
// SIG undefined FUN_147d89bec(void)

undefined8 * FUN_147d89bec(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 *local_f0;
  longlong local_e8 [3];
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong *local_78;
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_FUN_14aae7870;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar3 = FUN_14482ca40();
  uVar4 = FUN_1446f8646();
  local_f8 = uVar3 | 0x90200000;
  FUN_146123bc0(&local_a0,uVar4,0,0x10);
  local_c8 = local_a0;
  uStack_c4 = uStack_9c;
  iStack_c0 = iStack_98;
  uStack_bc = uStack_94;
  local_b8 = local_90;
  uStack_b4 = uStack_8c;
  uStack_b0 = uStack_88;
  uStack_ac = uStack_84;
  local_a8 = local_80;
  EnterCriticalSection((LPCRITICAL_SECTION)(CONCAT44(uStack_9c,local_a0) + 0x30));
  iVar2 = *(int *)(CONCAT44(uStack_9c,local_a0) + 0x24);
  lpCriticalSection = (LPCRITICAL_SECTION)(CONCAT44(uStack_9c,local_a0) + 0x30);
  EnterCriticalSection(lpCriticalSection);
  if (iStack_c0 != iVar2) {
    plVar1 = param_1 + 1;
    local_f0 = param_1 + 8;
    do {
      if ((longlong *)CONCAT44(uStack_b4,local_b8) == (longlong *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)CONCAT44(uStack_b4,local_b8);
      }
      local_d0 = *(ulonglong *)(lVar7 + 0x20);
      if (local_d0 != 0) {
        if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
          uVar3 = ((uint)(local_d0 >> 0x14) & 0xffff ^ (uint)(local_d0 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          puVar6 = (undefined8 *)param_1[9];
          if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
            puVar6 = local_f0;
          }
          iVar5 = *(int *)((longlong)puVar6 +
                          (ulonglong)(*(int *)(param_1 + 10) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          if (iVar5 != -1) {
            do {
              lVar9 = *plVar1 + (longlong)iVar5 * 0x20;
              if (*(ulonglong *)(*plVar1 + (longlong)iVar5 * 0x20) == local_d0) {
                plVar10 = (longlong *)(lVar9 + 8);
                if (plVar10 != (longlong *)0x0 && lVar9 != 0) {
                  iVar5 = *(int *)(lVar9 + 0x10);
                  *(uint *)(lVar9 + 0x10) = iVar5 + 1U;
                  if (iVar5 + 1U <= *(uint *)(lVar9 + 0x14)) goto LAB_147d89e1b;
                  goto LAB_147d89e11;
                }
                break;
              }
              iVar5 = *(int *)(lVar9 + 0x18);
            } while (iVar5 != -1);
          }
        }
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_78 = &local_d0;
        local_70 = local_e8;
        FUN_147d9e850(plVar1,&local_64,&local_78);
        lVar8 = (longlong)local_64;
        lVar9 = *plVar1;
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar8 * 0x20 + lVar9;
        plVar10 = (longlong *)(lVar9 + 8);
        iVar5 = *(int *)(lVar9 + 0x10);
        *(uint *)(lVar9 + 0x10) = iVar5 + 1U;
        if (*(uint *)(lVar9 + 0x14) < iVar5 + 1U) {
LAB_147d89e11:
          FUN_1447f76d2(plVar10,iVar5);
        }
LAB_147d89e1b:
        *(longlong *)(*plVar10 + (longlong)iVar5 * 8) = lVar7;
      }
      FUN_1468bea3c(&local_c8);
    } while (iStack_c0 != iVar2);
  }
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection((LPCRITICAL_SECTION)(CONCAT44(uStack_c4,local_c8) + 0x30));
  LeaveCriticalSection((LPCRITICAL_SECTION)(CONCAT44(uStack_9c,local_a0) + 0x30));
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147d89e96 FUN_147d89e96 body=295 status=ok
// SIG undefined FUN_147d89e96(void)

longlong * FUN_147d89e96(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined **local_a8;
  undefined2 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146901688(0x18);
  FUN_140056680(&local_98,&DAT_149dfb77a);
  local_a0 = 0;
  local_a8 = &PTR_FUN_149e98010;
  FUN_147d89bec(&local_88);
  local_b8 = 0;
  local_d0 = 0;
  local_d8 = L"copy";
  local_c0 = 0;
  local_c8 = 0x200800;
  FUN_14376b37a(&local_88,param_2,0,&local_a8);
  *param_1 = local_98;
  local_98 = 0;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_90;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_90._4_4_;
  local_90 = 0;
  local_88 = &PTR_FUN_14aae7870;
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_147d9b188(local_80);
  FUN_144a8720c(&local_a8);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d89fbe FUN_147d89fbe body=139 status=ok
// SIG undefined FUN_147d89fbe(void)

void FUN_147d89fbe(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  uint local_38;
  undefined4 local_34;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_1 + 0x20,&local_30);
  local_34 = *(undefined4 *)(param_1 + 0x30);
  local_40 = local_30;
  if (local_28 == 0) {
    local_40 = &DAT_149dfb77a;
  }
  local_38 = (uint)*(ushort *)(param_1 + 0x40);
  FUN_14127e9f8(&local_40,param_2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d8a04a thunk_FUN_14127e9f8 body=5 status=ok
// SIG undefined thunk_FUN_14127e9f8(void)

void thunk_FUN_14127e9f8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  short sVar7;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar6 = 0;
    do {
      sVar7 = (short)*(undefined4 *)(param_1 + 8) + (short)iVar6;
      psVar2 = (short *)*param_2;
      iVar1 = *(int *)(param_2 + 1);
      lVar5 = (longlong)iVar1;
      if (lVar5 != 0) {
        lVar4 = lVar5 * 0x18;
        psVar3 = psVar2;
        do {
          if (*psVar3 == sVar7) {
            if (psVar3 != (short *)0x0) {
              psVar3[2] = 0xf;
              psVar3[3] = 0;
              goto LAB_14127ea6d;
            }
            break;
          }
          psVar3 = psVar3 + 0xc;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
      }
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146f1c730(param_2,iVar1);
        psVar2 = (short *)*param_2;
      }
      psVar2[lVar5 * 0xc] = sVar7;
      psVar3 = psVar2 + lVar5 * 0xc + 2;
      psVar3[0] = 0xf;
      psVar3[1] = 0;
      psVar3[2] = 0;
      psVar3[3] = 0;
      *(undefined1 *)(psVar2 + lVar5 * 0xc + 6) = 0;
      psVar2 = psVar2 + lVar5 * 0xc + 8;
      psVar2[0] = 0;
      psVar2[1] = 0;
      psVar2[2] = 0;
      psVar2[3] = 0;
LAB_14127ea6d:
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xc));
  }
  return;
}



// FUNCTION 147d8a04f FUN_147d8a04f body=176 status=ok
// SIG undefined FUN_147d8a04f(void)

void FUN_147d8a04f(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  ushort *puVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_2 != 1) {
    uVar7 = *(uint *)(param_1 + 8);
  }
  if ((int)uVar7 <= *(int *)(param_1 + 0xc)) {
    do {
      puVar3 = (ushort *)*param_3;
      iVar1 = *(int *)(param_3 + 1);
      lVar6 = (longlong)iVar1;
      if (lVar6 != 0) {
        lVar5 = lVar6 * 0x18;
        puVar4 = puVar3;
        do {
          if (uVar7 == *puVar4) {
            if (puVar4 != (ushort *)0x0) {
              puVar4[2] = 0xf;
              puVar4[3] = 0;
              goto LAB_147d8a0d3;
            }
            break;
          }
          puVar4 = puVar4 + 0xc;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_146f1c730(param_3,iVar1);
        puVar3 = (ushort *)*param_3;
      }
      puVar3[lVar6 * 0xc] = (ushort)uVar7;
      puVar4 = puVar3 + lVar6 * 0xc + 2;
      puVar4[0] = 0xf;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined1 *)(puVar3 + lVar6 * 0xc + 6) = 0;
      puVar3 = puVar3 + lVar6 * 0xc + 8;
      puVar3[0] = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
LAB_147d8a0d3:
      bVar2 = (int)uVar7 < *(int *)(param_1 + 0xc);
      uVar7 = uVar7 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147d8a0ff FUN_147d8a0ff body=162 status=ok
// SIG undefined FUN_147d8a0ff(void)

void FUN_147d8a0ff(longlong param_1,longlong param_2,byte param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x38) <= *(int *)(param_1 + 0x38))) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
       param_2 + 0x30)) && (FUN_144b2bae2(local_30,param_2,param_3 | 2), local_28 != 0)) {
    do {
      if ((*(byte *)(local_28 + 0x38) & 0x20) != 0) {
        FUN_147d89fbe(local_28,param_4);
      }
      local_28 = *(longlong *)(local_28 + 0x18);
      FUN_144a2daf0(local_30);
    } while (local_28 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d8a1a2 FUN_147d8a1a2 body=42 status=ok
// SIG undefined FUN_147d8a1a2(void)

void FUN_147d8a1a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d8a1d0 FUN_147d8a1d0 body=42 status=ok
// SIG undefined FUN_147d8a1d0(void)

void FUN_147d8a1d0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147d8a21a FUN_147d8a21a body=39 status=ok
// SIG undefined FUN_147d8a21a(void)

void FUN_147d8a21a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147d9b39c(uVar1,param_1);
  return;
}



// FUNCTION 147d8a242 FUN_147d8a242 body=57 status=ok
// SIG undefined FUN_147d8a242(void)

longlong FUN_147d8a242(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return lVar1;
}



// FUNCTION 147d8a27c FUN_147d8a27c body=42 status=ok
// SIG undefined FUN_147d8a27c(void)

void FUN_147d8a27c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d8a2c6 FUN_147d8a2c6 body=39 status=ok
// SIG undefined FUN_147d8a2c6(void)

void FUN_147d8a2c6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147d9ed88(uVar1,param_1);
  return;
}



// FUNCTION 147d8a2ee FUN_147d8a2ee body=60 status=ok
// SIG undefined FUN_147d8a2ee(void)

longlong FUN_147d8a2ee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147d8a32a FUN_147d8a32a body=42 status=ok
// SIG undefined FUN_147d8a32a(void)

void FUN_147d8a32a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d8a374 FUN_147d8a374 body=39 status=ok
// SIG undefined FUN_147d8a374(void)

void FUN_147d8a374(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147d9ed88(uVar1,param_1);
  return;
}



// FUNCTION 147d8a39c FUN_147d8a39c body=60 status=ok
// SIG undefined FUN_147d8a39c(void)

longlong FUN_147d8a39c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147d8a3d8 FUN_147d8a3d8 body=42 status=ok
// SIG undefined FUN_147d8a3d8(void)

void FUN_147d8a3d8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d8a422 FUN_147d8a422 body=39 status=ok
// SIG undefined FUN_147d8a422(void)

void FUN_147d8a422(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147d9ed88(uVar1,param_1);
  return;
}



// FUNCTION 147d8a44a FUN_147d8a44a body=60 status=ok
// SIG undefined FUN_147d8a44a(void)

longlong FUN_147d8a44a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147d8a486 FUN_147d8a486 body=42 status=ok
// SIG undefined FUN_147d8a486(void)

void FUN_147d8a486(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147d8a4d0 FUN_147d8a4d0 body=39 status=ok
// SIG undefined FUN_147d8a4d0(void)

void FUN_147d8a4d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d9ee3e(uVar1,param_1);
  return;
}



// FUNCTION 147d8a4f8 FUN_147d8a4f8 body=51 status=ok
// SIG undefined FUN_147d8a4f8(void)

longlong FUN_147d8a4f8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147d8a52c FUN_147d8a52c body=42 status=ok
// SIG undefined FUN_147d8a52c(void)

void FUN_147d8a52c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147d8a576 FUN_147d8a576 body=39 status=ok
// SIG undefined FUN_147d8a576(void)

void FUN_147d8a576(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d9eea4(uVar1,param_1);
  return;
}



// FUNCTION 147d8a59e FUN_147d8a59e body=51 status=ok
// SIG undefined FUN_147d8a59e(void)

longlong FUN_147d8a59e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147d8a5d2 FUN_147d8a5d2 body=106 status=ok
// SIG undefined FUN_147d8a5d2(void)

void FUN_147d8a5d2(void)

{
  if (DAT_14cb0f188 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0f178 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0f168 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0f158 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0f148 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147d8a63c FUN_147d8a63c body=117 status=ok
// SIG undefined FUN_147d8a63c(void)

undefined8 FUN_147d8a63c(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 == DAT_14cb0f150) {
    if ((int)uVar4 < 2) {
      return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
    lVar6 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*param_1 + lVar6);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)(DAT_14cb0f148 + lVar6);
      uVar7 = (uint)uVar2;
      uVar3 = DAT_14cb0f148;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147d8a676;
        }
        iVar5 = uVar4 - uVar7;
        goto LAB_147d8a6a3;
      }
      if (uVar1 == 0) break;
LAB_147d8a676:
      lVar6 = lVar6 + 2;
    }
    iVar5 = 0;
  }
  else {
    iVar5 = DAT_14cb0f150 + uVar4 + -1;
    uVar3 = (ulonglong)uVar4;
  }
LAB_147d8a6a3:
  return CONCAT71((int7)(uVar3 >> 8),iVar5 == 0);
}



// FUNCTION 147d8a6b2 FUN_147d8a6b2 body=123 status=ok
// SIG undefined FUN_147d8a6b2(void)

undefined8 FUN_147d8a6b2(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == DAT_14cb0f150) {
    if (1 < (int)uVar1) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_1 + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(DAT_14cb0f148 + lVar3);
        uVar2 = DAT_14cb0f148;
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_147d8a719;
LAB_147d8a6ee:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_147d8a6ee;
      }
      if (uVar4 != uVar6) {
        return 0;
      }
    }
  }
  else if (DAT_14cb0f150 + uVar1 != 1) {
    return 0;
  }
LAB_147d8a719:
  return CONCAT71((int7)(uVar2 >> 8),*(uint *)(param_1 + 3) < 2);
}



// FUNCTION 147d8a732 FUN_147d8a732 body=99 status=ok
// SIG undefined FUN_147d8a732(void)

void FUN_147d8a732(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  FUN_140e97a80(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8a79a FUN_147d8a79a body=393 status=ok
// SIG undefined FUN_147d8a79a(void)

undefined8 * FUN_147d8a79a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401cfb1c(param_1,&local_40);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_30,puVar6,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar1 = (uint)((ulonglong)local_30 >> 0x10);
    uVar5 = (uint)local_30 & 0xffff;
    lVar4 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)local_30 >> 0x20) + ((uint)local_30 << 0x10 | uVar5) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 0x20) == local_30) {
          if ((lVar4 != -8 && lVar4 != 0) &&
             (puVar2 = (undefined8 *)FUN_1467cf004(), puVar2 != (undefined8 *)0x0)) {
            *param_2 = 0;
            iVar3 = *(int *)(puVar2 + 1);
            _Src = (void *)*puVar2;
            *(int *)(param_2 + 1) = iVar3;
            if ((longlong)iVar3 == 0) {
              *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(param_2,iVar3,0);
              memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
            }
            goto LAB_147d8a815;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  FUN_14689a74a(param_1,param_2,param_3);
LAB_147d8a815:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d8a928 FUN_147d8a928 body=37 status=ok
// SIG undefined FUN_147d8a928(void)

void FUN_147d8a928(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146935716();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d8a970 FUN_147d8a970 body=150 status=ok
// SIG undefined FUN_147d8a970(void)

undefined8 FUN_147d8a970(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1459d534c();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147d8aa08 FUN_147d8aa08 body=360 status=ok
// SIG undefined FUN_147d8aa08(void)

void FUN_147d8aa08(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    puVar2 = local_78;
    if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0x38);
    }
    FUN_147cf0618(*(longlong *)(param_1 + 0x2e8),&local_38,puVar1,puVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8ab72 FUN_147d8ab72 body=1596 status=ok
// SIG undefined FUN_147d8ab72(void)

void FUN_147d8ab72(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_50 = 0;
  local_1b0 = param_1;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_ec = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = &local_128;
  local_128 = local_110;
  uStack_120 = uStack_108;
  local_1c0 = &local_138;
  local_138 = local_100;
  uStack_130 = uStack_f8;
  local_1d0 = &local_148;
  local_148 = local_e8;
  uStack_140 = uStack_e0;
  local_1d8 = &local_158;
  local_158 = local_d8;
  uStack_150 = uStack_d0;
  local_1e0 = &local_168;
  local_168 = local_c8;
  uStack_160 = uStack_c0;
  local_1e8 = &local_178;
  local_178 = local_b8;
  uStack_170 = uStack_b0;
  local_1f0 = &local_188;
  local_188 = local_a8;
  uStack_180 = uStack_a0;
  local_1f8 = &local_198;
  local_198 = local_98;
  uStack_190 = uStack_90;
  local_200 = &local_1a8;
  local_1a8 = local_88;
  uStack_1a4 = uStack_84;
  uStack_1a0 = uStack_80;
  uStack_19c = uStack_7c;
  local_208 = local_78;
  local_210 = local_70;
  local_218 = local_68;
  local_1c8 = local_ec;
  FUN_147d8b1b0(local_1b0,local_50,local_58,local_60);
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8b1b0 FUN_147d8b1b0 body=617 status=ok
// SIG undefined FUN_147d8b1b0(void)

void FUN_147d8b1b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined8 *param_8,
                  double *param_9,double *param_10,double *param_11,undefined8 *param_12,
                  undefined8 *param_13,undefined8 *param_14,float param_15,undefined8 *param_16,
                  undefined4 *param_17)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [40];
  undefined **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  double dStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((((0.0 < *param_9) && (param_7 != 0)) && (param_6 != 0)) &&
       ((param_5 != 0 && (param_4 != 0)))) &&
      ((param_3 != 0 && ((param_2 != 0 && (0.0 < param_9[1])))))) &&
     (*(longlong *)(param_1 + 0x2e0) != 0)) {
    uVar2 = FUN_1447b4020();
    uVar3 = FUN_1447b4020(param_6);
    uVar4 = FUN_1447b4020(param_5);
    uVar5 = FUN_1447b4020(param_4);
    uVar6 = FUN_1447b4020(param_3);
    local_c8 = FUN_1447b4020(param_2);
    local_158 = *param_8;
    uStack_150 = param_8[1];
    local_138 = 0;
    local_148 = 0;
    local_140 = 0;
    local_160 = &PTR_FUN_14aaf76b0;
    local_120 = *param_9;
    dStack_118 = param_9[1];
    local_f0 = 0x3f800000;
    local_130 = *param_12;
    uStack_128 = param_12[1];
    local_110 = *param_13;
    uStack_108 = param_13[1];
    local_100 = *param_14;
    uStack_f8 = param_14[1];
    local_e8 = *param_10;
    dStack_e0 = param_10[1];
    local_d0 = param_10[1] + param_11[1];
    local_d8 = *param_10 + *param_11;
    local_90 = (double)param_15;
    local_98 = 0;
    local_88 = 0;
    local_80 = *param_16;
    uStack_78 = param_16[1];
    local_70 = *param_17;
    uStack_6c = param_17[1];
    uStack_68 = param_17[2];
    uStack_64 = param_17[3];
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    local_c0 = uVar6;
    local_b8 = uVar5;
    local_b0 = uVar4;
    local_a8 = uVar3;
    local_a0 = uVar2;
    FUN_143770050(&local_160,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8b41a FUN_147d8b41a body=417 status=ok
// SIG undefined FUN_147d8b41a(void)

void FUN_147d8b41a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = &local_68;
  local_68 = local_4c;
  uStack_60 = uStack_44;
  local_78 = local_38;
  uStack_70 = uStack_30;
  local_88 = local_28;
  uStack_84 = uStack_24;
  uStack_80 = uStack_20;
  uStack_7c = uStack_1c;
  FUN_147d8b5bc(param_1,&local_88,&local_78,local_3c);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8b5bc FUN_147d8b5bc body=232 status=ok
// SIG undefined FUN_147d8b5bc(void)

void FUN_147d8b5bc(longlong param_1,undefined8 *param_2,double *param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  double dStack_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((0.0 < *param_3) && (0.0 < param_3[1])) &&
     (lVar1 = *(longlong *)(param_1 + 0x2e0), lVar1 != 0)) {
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    local_80 = &PTR_FUN_14a8eb0d0;
    local_40 = *param_3;
    dStack_38 = param_3[1];
    local_28 = 0;
    uStack_20 = 0;
    local_50 = *param_5;
    uStack_4c = param_5[1];
    uStack_48 = param_5[2];
    uStack_44 = param_5[3];
    local_30 = param_4;
    FUN_140b240d4(&local_80,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
    local_80 = &PTR_FUN_14a8eb0d0;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8b6a6 FUN_147d8b6a6 body=417 status=ok
// SIG undefined FUN_147d8b6a6(void)

void FUN_147d8b6a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = &local_68;
  local_68 = local_4c;
  uStack_60 = uStack_44;
  local_78 = local_38;
  uStack_70 = uStack_30;
  local_88 = local_28;
  uStack_84 = uStack_24;
  uStack_80 = uStack_20;
  uStack_7c = uStack_1c;
  FUN_147d8b848(param_1,&local_88,&local_78,local_3c);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8b848 FUN_147d8b848 body=261 status=ok
// SIG undefined FUN_147d8b848(void)

void FUN_147d8b848(longlong param_1,double *param_2,double *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  double local_90;
  double dStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar3 = *param_3 - *param_2;
  dVar2 = param_3[1] - param_2[1];
  if ((0.0 < dVar2 * dVar2 + dVar3 * dVar3) && (lVar1 = *(longlong *)(param_1 + 0x2e0), lVar1 != 0))
  {
    local_90 = *param_2;
    dStack_88 = param_2[1];
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_98 = &PTR_FUN_14a312d50;
    local_48 = 0;
    local_30 = 0;
    local_68 = *param_5;
    uStack_60 = param_5[1];
    local_58 = *param_2;
    local_50 = param_2[1];
    local_40 = *param_3;
    local_38 = param_3[1];
    local_28 = param_4;
    FUN_143773c92(&local_98,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8b94e FUN_147d8b94e body=715 status=ok
// SIG undefined FUN_147d8b94e(void)

void FUN_147d8b94e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_20 = 0;
  FUN_1446f4b16();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = &local_88;
  local_88 = local_78;
  uStack_80 = uStack_70;
  local_e0 = &local_98;
  local_98 = local_60;
  uStack_90 = uStack_58;
  local_e8 = &local_a8;
  local_a8 = local_50;
  uStack_a0 = uStack_48;
  local_b8 = local_40;
  uStack_b0 = uStack_38;
  local_c8 = local_30;
  uStack_c4 = uStack_2c;
  uStack_c0 = uStack_28;
  uStack_bc = uStack_24;
  local_d8 = local_64;
  FUN_145bd01e2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8bc1a FUN_147d8bc1a body=327 status=ok
// SIG undefined FUN_147d8bc1a(void)

void FUN_147d8bc1a(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_147d9bcca(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 * 0x90);
  }
  FUN_147d8bd62(param_1,local_30,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8bd62 FUN_147d8bd62 body=320 status=ok
// SIG undefined FUN_147d8bd62(void)

void FUN_147d8bd62(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **local_90 [9];
  undefined8 local_48;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 != (longlong *)0x0) && (0 < (int)param_3[1])) &&
     (*(longlong *)(param_1 + 0x2e0) != 0)) {
    FUN_1414cf3d0(param_2);
    local_98 = 0;
    FUN_147a5b500(local_90,&DAT_14c8463f0,&DAT_14c8463f0,&DAT_14c8463f0);
    local_48 = (**(code **)(*param_2 + 0x2f0))(param_2);
    if (&local_38 != param_3) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      local_38 = *param_3;
      *param_3 = 0;
      local_30 = (undefined4)param_3[1];
      local_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    (*(code *)local_90[0][3])(local_90,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
    local_90[0] = &PTR_FUN_14a8bd0b0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8bea4 FUN_147d8bea4 body=499 status=ok
// SIG undefined FUN_147d8bea4(void)

void FUN_147d8bea4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_20 = 0;
  FUN_1446f4b16();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = &local_68;
  local_68 = local_54;
  uStack_60 = uStack_4c;
  local_78 = local_40;
  uStack_70 = uStack_38;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_98 = local_44;
  FUN_147d8c098(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8c098 FUN_147d8c098 body=322 status=ok
// SIG undefined FUN_147d8c098(void)

void FUN_147d8c098(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
                  int param_5,undefined4 *param_6)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((0.0 < *param_4) && (2 < param_5)) && (0.0 < param_4[1])) &&
     (*(longlong *)(param_1 + 0x2e0) != 0)) {
    local_40 = FUN_147d8d3ac(param_2);
    local_90 = *param_3;
    uStack_88 = param_3[1];
    local_70 = 0;
    local_80 = 0;
    local_78 = 0;
    local_98 = &PTR_FUN_14aaeb840;
    local_48 = (undefined8 *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_68 = *param_6;
    uStack_64 = param_6[1];
    uStack_60 = param_6[2];
    uStack_5c = param_6[3];
    FUN_147d8fd4a(local_58,param_5);
    FUN_147d8fdba(&local_98,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    (*(code *)local_98[3])(&local_98,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
    local_98 = &PTR_FUN_14aaeb840;
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8c1ee FUN_147d8c1ee body=1214 status=ok
// SIG undefined FUN_147d8c1ee(void)

void FUN_147d8c1ee(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined4 local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_48[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  iVar3 = local_a4;
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  iVar2 = local_a8;
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar1 = local_ac;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = &local_d8;
  local_d8 = local_bc;
  uStack_d0 = uStack_b4;
  local_158 = &local_e8;
  local_e8 = local_a0;
  uStack_e0 = uStack_98;
  local_160 = &local_f8;
  local_f8 = local_8c;
  uStack_f0 = uStack_84;
  local_170 = &local_108;
  local_108 = local_78;
  uStack_100 = uStack_70;
  local_178 = &local_118;
  local_118 = local_68;
  uStack_110 = uStack_60;
  local_128 = local_58;
  uStack_124 = uStack_54;
  uStack_120 = uStack_50;
  uStack_11c = uStack_4c;
  local_148 = iVar2 != 0;
  local_140 = iVar1 != 0;
  local_150 = iVar3 != 0;
  local_168 = local_7c;
  FUN_147d8c6ae(param_1,local_48[2],local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8c6ae FUN_147d8c6ae body=460 status=ok
// SIG undefined FUN_147d8c6ae(void)

void FUN_147d8c6ae(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
                  undefined4 *param_13)

{
  longlong lVar1;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined4 local_280;
  undefined **local_278 [3];
  undefined4 local_25c;
  undefined4 local_238;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 local_1be;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_e0;
  undefined1 local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if ((1 < *(int *)(param_3 + 8)) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    FUN_140009b9a(&local_288,param_3);
    FUN_140114c18(local_278,param_4,param_6);
    local_78 = 0;
    local_25c = 2;
    local_278[0] = &PTR_FUN_14aaeb7f0;
    local_70 = local_288;
    local_e0 = param_2;
    if (local_288 == (longlong *)0x0) {
      local_68 = local_280;
    }
    else {
      (**(code **)(*local_288 + 8))();
      local_68 = local_280;
      if (local_288 != (longlong *)0x0) {
        (**(code **)(*local_288 + 0x10))();
      }
    }
    local_238 = param_7;
    local_1f0 = *param_8;
    uStack_1e8 = param_8[1];
    local_1e0 = *param_9;
    uStack_1d8 = param_9[1];
    local_1c0 = param_10;
    local_1bf = param_11;
    local_1a8 = *param_5;
    uStack_1a0 = param_5[1];
    local_1be = param_12;
    local_1bc = *param_13;
    uStack_1b8 = param_13[1];
    uStack_1b4 = param_13[2];
    uStack_1b0 = param_13[3];
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    (*(code *)local_278[0][3])(local_278,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
    FUN_140b2399e(local_278);
  }
  if ((local_60 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8c87c FUN_147d8c87c body=899 status=ok
// SIG undefined FUN_147d8c87c(void)

void FUN_147d8c87c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  uint local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_20 = 0;
  FUN_1446f4b16();
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
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
  local_f0 = &local_98;
  local_98 = local_88;
  uStack_90 = uStack_80;
  local_108 = &local_a8;
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  local_110 = &local_b8;
  local_b8 = local_60;
  uStack_b0 = uStack_58;
  local_118 = &local_c8;
  local_c8 = local_50;
  uStack_c0 = uStack_48;
  local_d8 = local_40;
  uStack_d0 = uStack_38;
  local_e8 = local_30;
  uStack_e4 = uStack_2c;
  uStack_e0 = uStack_28;
  uStack_dc = uStack_24;
  local_f8 = local_78;
  local_100 = (uint)local_71;
  FUN_147d8cc00(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8cc00 FUN_147d8cc00 body=484 status=ok
// SIG undefined FUN_147d8cc00(void)

void FUN_147d8cc00(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 *param_7,uint param_8,float param_9,
                  undefined4 *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_148 [40];
  undefined **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  undefined4 local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((0.0 < *param_4) && (0.0 < param_4[1])) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    dVar1 = *param_5;
    dVar2 = param_5[1];
    dVar3 = param_6[1];
    dVar4 = *param_6;
    local_a8 = FUN_147d8d3ac();
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_f8 = 0;
    local_100 = 0;
    local_120 = &PTR_FUN_14aaeb770;
    local_e0 = *param_4;
    dStack_d8 = param_4[1];
    local_d0 = 0x3f800000;
    local_c8 = *param_5;
    dStack_c0 = param_5[1];
    local_a0 = 0;
    local_f0 = *param_7;
    uStack_e8 = param_7[1];
    local_90 = (double)param_9;
    local_98 = 0;
    local_88 = 0;
    local_80 = *param_10;
    uStack_7c = param_10[1];
    uStack_78 = param_10[2];
    uStack_74 = param_10[3];
    uVar6 = 0xb;
    if (param_8 < 7) {
      uVar6 = *(uint *)(&DAT_14aaf9b00 + (ulonglong)param_8 * 4);
    }
    local_108 = (ulonglong)uVar6 << 0x20;
    lVar5 = *(longlong *)(param_1 + 0x2e0);
    local_b8 = dVar1 + dVar4;
    local_b0 = dVar2 + dVar3;
    FUN_1405054c0(&local_120,lVar5);
    if (*(int *)(lVar5 + 0xac) == 1) {
      FUN_14376e4da(lVar5,0);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8cde6 FUN_147d8cde6 body=327 status=ok
// SIG undefined FUN_147d8cde6(void)

void FUN_147d8cde6(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_147d9bcca(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 * 0x90);
  }
  FUN_147d8cf2e(param_1,local_30,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8cf2e FUN_147d8cf2e body=284 status=ok
// SIG undefined FUN_147d8cf2e(void)

void FUN_147d8cf2e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **local_80 [11];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((0 < (int)param_3[1]) && (*(longlong *)(param_1 + 0x2e0) != 0)) {
    local_88 = FUN_147d8d3ac(param_2);
    FUN_147a5b500(local_80,&DAT_14c8463f0,&DAT_14c8463f0,&DAT_14c8463f0);
    if (&local_28 != param_3) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      local_28 = *param_3;
      *param_3 = 0;
      local_20 = (undefined4)param_3[1];
      local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    (*(code *)local_80[0][3])(local_80,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
    local_80[0] = &PTR_FUN_14a8bd0b0;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d04c FUN_147d8d04c body=195 status=ok
// SIG undefined FUN_147d8d04c(void)

void FUN_147d8d04c(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_40;
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  FUN_147d8ea00(param_1,&local_68,&local_38,1);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d110 FUN_147d8d110 body=270 status=ok
// SIG undefined FUN_147d8d110(void)

void FUN_147d8d110(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d8d220(param_1,&local_58,local_30,local_48);
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d220 FUN_147d8d220 body=166 status=ok
// SIG undefined FUN_147d8d220(void)

double * FUN_147d8d220(longlong param_1,double *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  float local_30;
  float local_2c;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1 < *(int *)(param_4 + 1)) {
    local_28 = *param_4;
    local_20 = *(int *)(param_4 + 1) + -1;
    local_40 = *(undefined8 *)(param_1 + 0x2e0);
    local_48 = 0;
    FUN_140b23708(param_3,&local_28,&local_30,&local_2c);
    *param_2 = (double)local_30;
    param_2[1] = (double)local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d8d2dc FUN_147d8d2dc body=207 status=ok
// SIG undefined FUN_147d8d2dc(void)

undefined8 * FUN_147d8d2dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e9ef24(&local_28);
  plVar3 = local_20;
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
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
  FUN_1406607e0(&local_28);
  param_1[2] = local_28;
  param_1[3] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d3ac FUN_147d8d3ac body=70 status=ok
// SIG undefined FUN_147d8d3ac(void)

undefined8 FUN_147d8d3ac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447b4020();
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_1447b4020(param_1);
      cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
      if (cVar1 == '\0') {
        uVar4 = FUN_1447b4020(param_1);
        return uVar4;
      }
    }
  }
  return DAT_14ca94e18;
}



// FUNCTION 147d8d3f2 FUN_147d8d3f2 body=358 status=ok
// SIG undefined FUN_147d8d3f2(void)

undefined4 FUN_147d8d3f2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)param_2[3] < (int)uVar2) {
    uVar5 = FUN_147d8d558(param_2,uVar2);
    if ((uVar5 == 0xffffffff) || (cVar4 = FUN_147d8d616(param_2,uVar5), cVar4 == '\0')) {
      uVar6 = FUN_147d8d6fc(param_2);
      uVar9 = 0xffffffff;
      if (uVar6 == uVar2) {
        uVar9 = uVar6;
      }
      iVar8 = (int)param_2[3];
      if ((int)uVar9 <= iVar8) {
        uVar5 = (**(code **)(*(longlong *)param_1[2] + 0x80))((longlong *)param_1[2],uVar6 + 1);
        uVar9 = 0xffffffff;
        if (iVar8 <= (int)uVar5) {
          uVar9 = uVar5;
        }
        iVar8 = (int)param_2[3];
      }
      if ((int)uVar9 <= iVar8) {
        uVar5 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,uVar6 + 1);
        uVar9 = 0xffffffff;
        if (iVar8 <= (int)uVar5) {
          uVar9 = uVar5;
        }
        iVar8 = (int)param_2[3];
      }
      uVar5 = uVar6;
      if (iVar8 < (int)uVar9) {
        uVar6 = uVar9;
        uVar5 = uVar9;
      }
    }
    else {
      uVar6 = uVar5 - 1;
    }
    uVar11 = (ulonglong)uVar5;
    uVar12 = (ulonglong)uVar6;
    uVar9 = (int)uVar6 >> 0x1f & uVar6;
    uVar6 = uVar6 + 1;
    do {
      uVar10 = uVar9;
      if ((int)uVar12 < 1) break;
      lVar1 = uVar12 * 2;
      uVar12 = uVar12 - 1;
      cVar4 = FUN_1406655ec(*(undefined2 *)(*param_2 + -2 + lVar1));
      uVar6 = uVar6 - 1;
      uVar10 = uVar6;
    } while (cVar4 != '\0');
    uVar7 = CONCAT31((int3)(uVar9 >> 8),(int)param_2[3] <= (int)uVar10);
    if ((int)param_2[3] <= (int)uVar10) {
      FUN_147d8d7dc(param_2,uVar10);
    }
    if ((int)uVar5 < (int)uVar2) {
      uVar11 = (ulonglong)(int)uVar5;
      do {
        cVar4 = FUN_1406655ec(*(undefined2 *)(*param_2 + uVar11 * 2));
        if (cVar4 == '\0') goto LAB_147d8d4ee;
        uVar11 = uVar11 + 1;
      } while (uVar2 != (uint)uVar11);
      uVar11 = (ulonglong)uVar2;
    }
LAB_147d8d4ee:
    plVar3 = (longlong *)param_2[5];
    if (plVar3 != (longlong *)0x0) {
      iVar8 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar8 + 1U) {
        FUN_1406b704c(plVar3,iVar8);
      }
      lVar1 = *plVar3;
      *(int *)(lVar1 + (longlong)iVar8 * 8) = (int)param_2[3];
      *(uint *)(lVar1 + 4 + (longlong)iVar8 * 8) = uVar10;
    }
    *(int *)(param_2 + 3) = (int)uVar11;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 147d8d558 FUN_147d8d558 body=190 status=ok
// SIG undefined FUN_147d8d558(void)

ulonglong FUN_147d8d558(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = *(uint *)(param_1 + 3);
  lVar5 = (longlong)(int)uVar3;
  if ((int)(uVar3 + 1) < (int)param_2) {
    lVar1 = *param_1 + lVar5 * 2;
    lVar6 = lVar1 + 2;
    lVar4 = 0;
    lVar7 = 0;
    do {
      uVar2 = *(ushort *)(lVar1 + lVar7 * 2);
      if (uVar2 - 10 < 4) {
        if ((lVar6 + lVar4 == 0) || ((uVar2 != 0xd || (*(short *)(lVar6 + lVar7 * 2) != 10)))) {
LAB_147d8d5cd:
          if (-2 - lVar5 != lVar7) {
            return lVar5 + 1 + lVar7;
          }
          break;
        }
      }
      else if ((uVar2 - 0x2028 < 2) || (uVar2 == 0x85)) goto LAB_147d8d5cd;
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 2;
    } while (~uVar3 + param_2 != (int)lVar7);
  }
  uVar2 = *(ushort *)(*param_1 + -2 + (longlong)(int)param_2 * 2);
  uVar3 = 0xffffffff;
  if (uVar2 - 10 < 4) {
    uVar3 = param_2;
  }
  if (uVar2 == 0x85) {
    uVar3 = param_2;
  }
  if ((uVar2 & 0xfffe) == 0x2028) {
    uVar3 = param_2;
  }
  return (ulonglong)uVar3;
}



// FUNCTION 147d8d616 FUN_147d8d616 body=228 status=ok
// SIG undefined FUN_147d8d616(void)

undefined8 FUN_147d8d616(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  longlong local_70;
  int local_68;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined4 *)param_1[2];
  local_58 = *puVar3;
  uStack_54 = puVar3[1];
  fStack_50 = (float)puVar3[2];
  uStack_4c = puVar3[3];
  local_48 = puVar3[4];
  uStack_44 = puVar3[5];
  uStack_40 = puVar3[6];
  uStack_3c = puVar3[7];
  local_38 = *(longlong *)(puVar3 + 8);
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = puVar3[10];
  uStack_2c = puVar3[0xb];
  uStack_28 = puVar3[0xc];
  uStack_24 = puVar3[0xd];
  iVar1 = (int)param_1[1];
  uVar2 = *(uint *)(param_1 + 3);
  uVar5 = (int)uVar2 >> 0x1f & uVar2;
  iVar6 = (param_2 - uVar2) + uVar5;
  iVar4 = uVar2 - uVar5;
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  local_68 = iVar1 - iVar4;
  if (iVar6 < iVar1 - iVar4) {
    local_68 = iVar6;
  }
  if (local_68 < 1) {
    local_68 = 0;
  }
  local_70 = (longlong)iVar4 * 2 + *param_1;
  local_78 = local_5c;
  FUN_147d8d986(&local_58,&local_70,0,2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_1[2] >> 8),fStack_50 <= *(float *)(param_1[2] + 8));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d6fc FUN_147d8d6fc body=223 status=ok
// SIG undefined FUN_147d8d6fc(void)

int FUN_147d8d6fc(longlong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  int *local_78;
  longlong local_70;
  int local_68;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = (undefined4 *)param_1[2];
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_48 = puVar2[4];
  uStack_44 = puVar2[5];
  uStack_40 = puVar2[6];
  uStack_3c = puVar2[7];
  local_38 = *(longlong *)(puVar2 + 8);
  puVar3 = puVar2;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    puVar3 = (undefined4 *)param_1[2];
  }
  local_30 = puVar2[10];
  uStack_2c = puVar2[0xb];
  uStack_28 = puVar2[0xc];
  uStack_24 = puVar2[0xd];
  local_78 = &local_5c;
  local_5c = -1;
  iVar1 = (int)param_1[1];
  iVar4 = iVar1 - (int)param_1[3];
  if (iVar1 <= iVar4) {
    iVar4 = iVar1;
  }
  local_68 = 0;
  if (0 < iVar4) {
    local_68 = iVar4;
  }
  local_70 = ((longlong)iVar1 * 2 + *param_1) - (ulonglong)(uint)(local_68 * 2);
  FUN_147d8d986(&local_58,&local_70,(int)(float)puVar3[2],1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_5c + (int)param_1[3];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d7dc FUN_147d8d7dc body=425 status=ok
// SIG undefined FUN_147d8d7dc(void)

void FUN_147d8d7dc(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_68;
  int local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = (undefined4 *)param_1[2];
  local_a8 = *puVar4;
  uStack_a4 = puVar4[1];
  fStack_a0 = (float)puVar4[2];
  fStack_9c = (float)puVar4[3];
  local_98 = puVar4[4];
  uStack_94 = puVar4[5];
  uStack_90 = puVar4[6];
  uStack_8c = puVar4[7];
  local_88 = *(longlong *)(puVar4 + 8);
  if ((local_88 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_80 = puVar4[10];
  uStack_7c = puVar4[0xb];
  uStack_78 = puVar4[0xc];
  uStack_74 = puVar4[0xd];
  iVar2 = (int)param_1[1];
  uVar3 = *(uint *)(param_1 + 3);
  uVar10 = (int)uVar3 >> 0x1f & uVar3;
  iVar13 = (param_2 - uVar3) + uVar10;
  iVar9 = uVar3 - uVar10;
  if (iVar2 <= iVar9) {
    iVar9 = iVar2;
  }
  iVar12 = iVar2 - iVar9;
  if (iVar13 < iVar2 - iVar9) {
    iVar12 = iVar13;
  }
  if (iVar12 < 1) {
    iVar12 = 0;
  }
  pvVar14 = (void *)((longlong)iVar9 * 2 + *param_1);
  local_b8 = local_54;
  local_68 = pvVar14;
  local_60 = iVar12;
  FUN_147d8d986(&local_a8,&local_68,0,2);
  FUN_14006620a(&local_68,pvVar14,iVar12);
  iVar9 = local_60;
  pvVar14 = local_68;
  dVar7 = (double)fStack_a0;
  dVar8 = (double)fStack_9c;
  plVar5 = (longlong *)param_1[4];
  iVar2 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
    FUN_147d9f5b2(plVar5,iVar2);
  }
  lVar6 = *plVar5;
  lVar11 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined8 *)(lVar6 + lVar11);
  *(undefined8 *)(lVar6 + lVar11) = 0;
  *(int *)(lVar6 + 8 + lVar11) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar9,0);
    memcpy((void *)*puVar1,pvVar14,(longlong)iVar9 * 2);
  }
  puVar1[2] = dVar7;
  puVar1[3] = dVar8;
  if (pvVar14 != (void *)0x0) {
    FUN_1400020a8(pvVar14);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8d986 FUN_147d8d986 body=766 status=ok
// SIG undefined FUN_147d8d986(void)

void FUN_147d8d986(longlong param_1,longlong *param_2,int param_3,int param_4,undefined4 *param_5)

{
  double dVar1;
  wint_t wVar2;
  longlong lVar3;
  wint_t *pwVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  wint_t *pwVar8;
  wint_t *pwVar9;
  wint_t *pwVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_5 = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_147a97e60(lVar3,0x30,&local_e4,&local_e8);
    if ((local_e4 == 0.0) && (!NAN(local_e4))) {
      FUN_147a97e60(lVar3,0x41,&local_e4,&local_e8);
    }
    pwVar4 = (wint_t *)*param_2;
    lVar3 = param_2[1];
    pwVar10 = pwVar4;
    if (0 < (longlong)(int)lVar3) {
      fVar13 = (float)*(double *)(param_1 + 0x10);
      dVar1 = *(double *)(param_1 + 0x18);
      fVar14 = (float)((double)fVar13 * *(double *)(param_1 + 0x28));
      pwVar8 = (wint_t *)0x0;
      local_f8 = param_2;
      while( true ) {
        pwVar9 = pwVar10 + 1;
        wVar2 = *pwVar10;
        param_2 = local_f8;
        if (wVar2 == 0) break;
        FUN_147a97e60(*(undefined8 *)(param_1 + 0x20),wVar2,&local_ec,&local_f0);
        if (((wVar2 == 10) && (local_f0 == 0.0)) && (!NAN(local_f0))) {
          local_f0 = local_e8;
        }
        fVar15 = fVar14;
        if (pwVar8 != (wint_t *)0x0) {
          cVar5 = FUN_147a98046(*(undefined8 *)(param_1 + 0x20),*pwVar8,wVar2);
          fVar15 = (float)(int)cVar5 * fVar13 + fVar14;
        }
        local_ec = local_ec * fVar13;
        local_f0 = local_f0 * (float)dVar1;
        if (((pwVar9 < pwVar4 + (int)lVar3) && (*pwVar9 != 0)) &&
           (iVar7 = iswspace(*pwVar9), iVar7 == 0)) {
          local_ec = local_ec + fVar15;
        }
        fVar15 = local_ec;
        *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + local_ec;
        fVar11 = (float)(*(double *)(param_1 + 0x30) * (double)(float)dVar1) + local_f0;
        fVar12 = *(float *)(param_1 + 0xc);
        if (*(float *)(param_1 + 0xc) <= fVar11) {
          fVar12 = fVar11;
        }
        *(float *)(param_1 + 0xc) = fVar12;
        if (((param_4 == 1 && param_3 != -1) &&
            (sVar6 = FUN_147a981a4(*(undefined8 *)(param_1 + 0x20),wVar2), param_2 = local_f8,
            (float)param_3 < (fVar15 + (float)(int)sVar6) * -0.5 + *(float *)(param_1 + 8))) ||
           (pwVar8 = pwVar10, param_2 = local_f8, pwVar10 = pwVar9, pwVar4 + (int)lVar3 <= pwVar9))
        break;
      }
    }
    *param_5 = (int)((ulonglong)((longlong)pwVar10 - *param_2) >> 1);
  }
  if ((local_e0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d8dc86 FUN_147d8dc86 body=371 status=ok
// SIG undefined FUN_147d8dc86(void)

undefined8 *
FUN_147d8dc86(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x30);
    puVar5 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14aaf9090;
  FUN_145db65c4(puVar5 + 1);
  puVar5[1] = &PTR_FUN_14aaf90a0;
  puVar5[3] = param_2;
  plVar2 = (longlong *)(param_1 + 0x98);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(plVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar5;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar6 + 0x25;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x138);
    puVar6 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar6 + 0x25;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar6 = &PTR_FUN_14aaf9120;
  FUN_147d8ddfa(puVar6 + 1,puVar5 + 1,param_3,param_4,param_5,param_6);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(plVar2,iVar3);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar3 * 8) = puVar6;
  return puVar6 + 1;
}



// FUNCTION 147d8ddfa FUN_147d8ddfa body=193 status=ok
// SIG undefined FUN_147d8ddfa(void)

longlong FUN_147d8ddfa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                      undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x80) = *param_4;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_4 + 4);
  *(undefined4 *)(param_1 + 0x9c) = param_5;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = param_6;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_1401fad2c(param_1);
  return param_1;
}



// FUNCTION 147d8debc FUN_147d8debc body=101 status=ok
// SIG undefined FUN_147d8debc(void)

void FUN_147d8debc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 < 1) {
    *(uint *)(param_1 + 0x30) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
      FUN_1401fb018(plVar1,iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x90 + *plVar1);
  }
  else {
    puVar5 = (undefined8 *)*plVar1;
  }
  puVar6 = puVar5;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar3 = FUN_1448eb174(puVar5,0x80,0);
  *(undefined4 *)(puVar5 + 0x10) = uVar3;
  return;
}



// FUNCTION 147d8df22 FUN_147d8df22 body=173 status=ok
// SIG undefined FUN_147d8df22(void)

undefined8 *
FUN_147d8df22(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aaf7480;
  plVar3 = (longlong *)FUN_14001cc68(0x420,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aaf74b0;
  FUN_147d9b79a(plVar3 + 2,param_2,param_3,param_4);
  param_1[1] = plVar3 + 2;
  param_1[2] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  *(undefined1 *)(param_1 + 3) = param_5;
  return param_1;
}



// FUNCTION 147d8dfd0 FUN_147d8dfd0 body=141 status=ok
// SIG undefined FUN_147d8dfd0(void)

void FUN_147d8dfd0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auStack_6b8 [32];
  undefined1 local_698 [1656];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6b8;
  if ((((*(byte *)(param_1 + 0x78) & 1) == 0 & ((byte)param_3 ^ 1)) == 0) &&
     (*(int *)(param_1 + 0xc0) != 0)) {
    FUN_1407779ba(local_698,param_2,param_3,0);
    FUN_14376dc88(param_1,local_698,param_3 & 0xffffffff);
    FUN_140779360(local_698);
    FUN_140778010(local_698);
  }
  if ((local_20 ^ (ulonglong)auStack_6b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e05e FUN_147d8e05e body=218 status=ok
// SIG undefined FUN_147d8e05e(void)

void FUN_147d8e05e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148 [16];
  undefined8 local_c8 [16];
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1447fea8d(local_148,param_2,
                *(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 0x90 + -0x90);
  puVar3 = local_148;
  puVar4 = local_c8;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_48 = FUN_1448eb174(local_c8,0x80,0);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1401fb018((longlong *)(param_1 + 0x28),iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x28)),local_c8,0x90);
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e13a FUN_147d8e13a body=99 status=ok
// SIG undefined FUN_147d8e13a(void)

void FUN_147d8e13a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  if (puVar2 != param_2) {
    *(undefined8 **)(param_1 + 0x68) = param_2;
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (param_2 != (undefined8 *)0x0 && puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d8e192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 147d8e19e FUN_147d8e19e body=146 status=ok
// SIG undefined FUN_147d8e19e(void)

void FUN_147d8e19e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14aaeb770;
  uVar1 = param_4[1];
  param_1[8] = *param_4;
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  uVar1 = param_5[1];
  param_1[0xb] = *param_5;
  param_1[0xc] = uVar1;
  uVar1 = param_6[1];
  param_1[0xd] = *param_6;
  param_1[0xe] = uVar1;
  param_1[0xf] = param_3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x14] = DAT_14c8463f0;
  param_1[0x15] = uVar1;
  uVar1 = param_7[1];
  param_1[6] = *param_7;
  param_1[7] = uVar1;
  return;
}



// FUNCTION 147d8e230 FUN_147d8e230 body=371 status=ok
// SIG undefined FUN_147d8e230(void)

int FUN_147d8e230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 longlong param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined **local_248 [3];
  undefined4 local_22c;
  byte local_200;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  double local_198;
  longlong local_b0;
  longlong *local_70;
  char local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_258 = *param_4;
  uStack_254 = param_4[1];
  uStack_250 = param_4[2];
  uStack_24c = param_4[3];
  local_268 = param_2;
  local_260 = param_3;
  FUN_140114c18(local_248,&local_268,param_6);
  local_b0 = param_5;
  local_48 = '\0';
  local_22c = 2;
  local_248[0] = &PTR_FUN_14aaf74d0;
  local_40 = local_258;
  uStack_3c = uStack_254;
  uStack_38 = uStack_250;
  uStack_34 = uStack_24c;
  if ((param_5 == 0) || ((*(byte *)(param_5 + 0x110) & 1) == 0)) {
    local_1b0 = 0x3ff0000000000000;
    local_1a8 = 0x3ff0000000000000;
    local_1c0 = *param_7;
    uStack_1bc = param_7[1];
    uStack_1b8 = param_7[2];
    uStack_1b4 = param_7[3];
    local_200 = local_200 | 2;
  }
  else {
    local_22c = 6;
  }
  FUN_1405050c6(local_248,param_1);
  if (*(int *)(param_1 + 0xac) == 1) {
    FUN_14376e4da(param_1,0);
  }
  local_248[0] = &PTR_LAB_14aaf76e0;
  if ((local_48 == '\x01') && (local_70 != (longlong *)0x0)) {
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
  if ((local_30 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return (int)local_198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e3a4 FUN_147d8e3a4 body=314 status=ok
// SIG undefined FUN_147d8e3a4(void)

int FUN_147d8e3a4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 longlong param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined1 auStack_278 [40];
  undefined8 local_250;
  undefined8 local_248;
  undefined **local_240 [3];
  undefined4 local_224;
  byte local_1f8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_190;
  longlong local_a8;
  undefined1 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_250 = param_2;
  local_248 = param_3;
  FUN_140114c18(local_240,&local_250,param_6);
  local_a8 = param_5;
  local_40 = 0;
  local_224 = 2;
  local_240[0] = &PTR_FUN_14aaeb7f0;
  local_38 = (longlong *)*param_4;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  local_30 = (undefined4)param_4[1];
  if ((param_5 == 0) || ((*(byte *)(param_5 + 0x110) & 1) == 0)) {
    local_1a8 = 0x3ff0000000000000;
    local_1a0 = 0x3ff0000000000000;
    local_1b8 = *param_7;
    uStack_1b4 = param_7[1];
    uStack_1b0 = param_7[2];
    uStack_1ac = param_7[3];
    local_1f8 = local_1f8 | 2;
  }
  else {
    local_224 = 6;
  }
  (*(code *)local_240[0][3])(local_240,param_1);
  if (*(int *)(param_1 + 0xac) == 1) {
    FUN_14376e4da(param_1,0);
  }
  FUN_140b2399e();
  if ((local_28 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return (int)local_190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e4df FUN_147d8e4df body=212 status=ok
// SIG undefined FUN_147d8e4df(void)

void FUN_147d8e4df(longlong param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3ff0000000000000;
  local_80 = 0x3ff0000000000000;
  local_78 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_70 = 0;
  uStack_68 = 0;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_a8 = local_44;
  FUN_147d8d986(&local_98,&local_58,0,2);
  *param_2 = (int)(float)uStack_90;
  *param_3 = (int)uStack_90._4_4_;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e5b4 FUN_147d8e5b4 body=6 status=ok
// SIG undefined FUN_147d8e5b4(void)

void FUN_147d8e5b4(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  return;
}



// FUNCTION 147d8e5ba FUN_147d8e5ba body=23 status=ok
// SIG undefined FUN_147d8e5ba(void)

undefined4 FUN_147d8e5ba(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xb;
  if (param_1 < 7) {
    uVar1 = *(undefined4 *)(&DAT_14aaf9b00 + (ulonglong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 147d8e5d2 FUN_147d8e5d2 body=222 status=ok
// SIG undefined FUN_147d8e5d2(void)

void FUN_147d8e5d2(undefined8 param_1,float param_2,float param_3,int *param_4,int *param_5,
                  undefined4 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_4 = 0;
  *param_5 = 0;
  local_80 = (double)param_3;
  local_88 = (double)param_2;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = param_1;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c();
  }
  local_70 = 0;
  uStack_68 = 0;
  local_58 = *param_6;
  uStack_54 = param_6[1];
  uStack_50 = param_6[2];
  uStack_4c = param_6[3];
  local_a8 = local_44;
  FUN_147d8d986(&local_98,&local_58,0,2);
  *param_4 = (int)(float)uStack_90;
  *param_5 = (int)uStack_90._4_4_;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e6b2 FUN_147d8e6b2 body=740 status=ok
// SIG undefined FUN_147d8e6b2(void)

/* WARNING: Type propagation algorithm not settling */

float FUN_147d8e6b2(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                   float param_5,float param_6,float param_7,byte *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_348 [32];
  int *local_328;
  int *local_320;
  undefined8 local_318;
  float local_310;
  float local_308;
  byte local_300;
  undefined1 local_2f8;
  undefined8 *local_2f0;
  byte *local_2e8;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  float local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  int local_290 [2];
  undefined **local_288 [3];
  undefined4 local_26c;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  double local_1b8;
  double local_1b0;
  undefined8 local_f0;
  longlong *local_b0;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  auVar5._8_4_ = in_XMM3_Dc;
  auVar5._0_8_ = param_4;
  auVar5._12_4_ = in_XMM3_Dd;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_328 = local_290 + 1;
  local_290[1] = 0;
  local_320 = local_290;
  local_290[0] = 0;
  local_2a8 = *param_3;
  uStack_2a0 = param_3[1];
  local_2f0 = &local_2a8;
  local_2e8 = param_8;
  local_300 = (byte)*(uint *)(param_1 + 0x3c) & 1;
  local_308 = param_7;
  local_310 = param_6;
  local_2f8 = (undefined1)((*(uint *)(param_1 + 0x3c) & 2) >> 1);
  local_318 = param_2;
  FUN_14376f8fc(param_1,(*param_8 & 1) == 0,(float)param_4,param_5);
  if ((*param_8 & 1) != 0) {
    local_2b8 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x3a)];
    local_2b4 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x39)];
    local_2b0 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x38)];
    local_2ac = (float)*(byte *)(param_1 + 0x3b) * 0.003921569;
    local_2c8 = *param_3;
    uStack_2c0 = param_3[1];
    auVar4 = ZEXT816(0);
    auVar6 = blendps(ZEXT416((uint)(param_5 + *(float *)(param_1 + 0x2c))),auVar4,0xe);
    auVar6 = roundps(in_XMM1,auVar6,3);
    local_2d0 = (double)auVar6._0_4_;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = (float)param_4 + *(float *)(param_1 + 0x28);
    auVar5 = blendps(auVar6,auVar4,0xe);
    auVar5 = roundps(auVar4,auVar5,3);
    local_2d8 = (double)auVar5._0_4_;
    FUN_140114c18(local_288);
    local_88 = '\0';
    local_288[0] = &PTR_FUN_14aaf74d0;
    local_80 = local_2c8;
    uStack_78 = uStack_2c0;
    local_1b0 = (double)param_7;
    local_1b8 = (double)param_6;
    local_26c = 2;
    local_240 = *(undefined8 *)param_8;
    uStack_238 = *(undefined8 *)(param_8 + 8);
    local_230 = *(undefined8 *)(param_8 + 0x10);
    uStack_228 = *(undefined8 *)(param_8 + 0x18);
    local_220 = *(undefined4 *)(param_8 + 0x20);
    uStack_21c = *(undefined4 *)(param_8 + 0x24);
    uStack_218 = *(undefined4 *)(param_8 + 0x28);
    uStack_214 = *(undefined4 *)(param_8 + 0x2c);
    local_210 = *(undefined4 *)(param_8 + 0x30);
    uStack_20c = *(undefined4 *)(param_8 + 0x34);
    uStack_208 = *(undefined4 *)(param_8 + 0x38);
    uStack_204 = *(undefined4 *)(param_8 + 0x3c);
    lVar3 = *(longlong *)(param_1 + 0x2e0);
    local_f0 = param_2;
    FUN_1405050c6(local_288,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    local_288[0] = &PTR_LAB_14aaf76e0;
    if ((local_88 == '\x01') && (local_b0 != (longlong *)0x0)) {
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
  }
  if ((local_70 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return (float)local_290[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8e998 FUN_147d8e998 body=102 status=ok
// SIG undefined FUN_147d8e998(void)

void FUN_147d8e998(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x2e0);
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = param_6;
  FUN_140b23708(param_2,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8ea00 FUN_147d8ea00 body=224 status=ok
// SIG undefined FUN_147d8ea00(void)

double * FUN_147d8ea00(longlong param_1,double *param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  double dVar2;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    local_38 = 0.0;
    bVar1 = true;
    local_40 = 0.0;
    local_48 = 0.0;
  }
  else {
    FUN_147cf0546(*(longlong *)(param_1 + 0x2e8),&local_48);
    bVar1 = local_30 <= 0.0;
  }
  param_2[2] = local_38;
  dVar2 = (double)(*(float *)(param_1 + 0x30) * 0.5);
  *param_2 = local_48 * dVar2 + dVar2;
  dVar2 = (double)(*(float *)(param_1 + 0x34) * 0.5);
  param_2[1] = dVar2 - local_40 * dVar2;
  if ((param_4 != '\0') && (bVar1)) {
    param_2[2] = 0.0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8eae2 FUN_147d8eae2 body=17 status=ok
// SIG undefined FUN_147d8eae2(void)

void FUN_147d8eae2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 auStack_98 [16];
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined8 *)(lVar1 + 0xb30);
  puVar4 = auStack_98;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uStack_a8 = param_4;
  FUN_147cf0692(param_2,lVar1 + 0x4d8,auStack_98,param_3);
  if ((uStack_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8eaf4 FUN_147d8eaf4 body=119 status=ok
// SIG undefined FUN_147d8eaf4(void)

void FUN_147d8eaf4(undefined8 param_1,uint *param_2,byte param_3,byte param_4,longlong param_5,
                  undefined8 *param_6,undefined8 *param_7)

{
  float fVar1;
  undefined8 uVar2;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *param_2 = (uint)param_3 + (uint)param_4 * 2 | *param_2 & 0xfffffffc;
  fVar1 = *(float *)(param_5 + 0xc);
  param_2[2] = -(uint)(fVar1 != 0.0) & 1 | param_2[2] & 0xfffffffe;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    uVar2 = param_6[1];
    *(undefined8 *)(param_2 + 8) = *param_6;
    *(undefined8 *)(param_2 + 10) = uVar2;
    uVar2 = param_7[1];
    *(undefined8 *)(param_2 + 0xc) = *param_7;
    *(undefined8 *)(param_2 + 0xe) = uVar2;
  }
  return;
}



// FUNCTION 147d8eb6c FUN_147d8eb6c body=1663 status=ok
// SIG undefined FUN_147d8eb6c(void)

void FUN_147d8eb6c(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,double *param_9,double *param_10)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double dVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_4e8 [32];
  double local_4c8;
  double local_4c0;
  longlong *local_4b8;
  double local_4b0;
  undefined **local_4a8;
  undefined8 local_4a0;
  undefined **local_498;
  longlong *local_490;
  double local_488;
  undefined8 local_480;
  undefined1 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  longlong *local_458;
  double local_450;
  undefined8 local_448;
  double local_440;
  double local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined **local_420;
  double local_418;
  double local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined **local_370;
  longlong *local_368;
  double local_360;
  undefined8 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  double local_330;
  double local_328;
  undefined4 local_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined **local_308;
  undefined8 local_300;
  undefined4 local_2ec;
  undefined8 local_170;
  undefined1 local_108;
  longlong *local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  plVar3 = (longlong *)(double)param_5;
  dVar9 = *param_9;
  uVar7 = -(ulonglong)(param_9[1] == dVar9);
  local_330 = (double)param_7;
  dVar8 = (double)(~uVar7 & (ulonglong)(((double)param_3 - dVar9) / (param_9[1] - dVar9)) |
                  (ulonglong)dVar9 & uVar7) * local_330;
  dVar4 = (double)param_6;
  dVar9 = *param_10;
  uVar7 = -(ulonglong)(param_10[1] == dVar9);
  local_328 = (double)param_8;
  dVar9 = (double)(~uVar7 & (ulonglong)(((double)param_4 - dVar9) / (param_10[1] - dVar9)) |
                  (ulonglong)dVar9 & uVar7) * local_328;
  local_348 = 0;
  local_358 = 0;
  local_350 = 0;
  local_340 = 0x3f800000;
  uStack_33c = 0x3f800000;
  uStack_338 = 0x3f800000;
  uStack_334 = 0x3f800000;
  local_370 = &PTR_FUN_14a8eb0d0;
  local_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  local_368 = plVar3;
  local_360 = dVar4;
  FUN_140b240d4();
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1);
  }
  dVar9 = (double)(int)(dVar9 + dVar4 + -4.0);
  dVar8 = (double)(int)(dVar8 + (double)plVar3 + -4.0);
  local_3f8 = 0;
  local_408 = 0;
  local_400 = 0;
  local_420 = &PTR_FUN_14aaeb770;
  local_3e0 = 0x4020000000000000;
  local_3d8 = 0x4020000000000000;
  local_3d0 = 0x3f800000;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0x3ff0000000000000;
  local_3b0 = 0x3ff0000000000000;
  local_3a8 = DAT_14ca94e18;
  local_3a0 = 0;
  uStack_398 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_380 = DAT_14c8463f0;
  uStack_378 = DAT_14c8463f8;
  local_3f0 = 0x3f800000;
  uStack_3ec = 0x3f800000;
  uStack_3e8 = 0;
  uStack_3e4 = 0x3f800000;
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  local_418 = dVar8;
  local_410 = dVar9;
  FUN_1405054c0(&local_420,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  local_440 = (double)(param_5 + param_7);
  local_470 = 0;
  local_480 = 0;
  local_478 = 0;
  local_498 = &PTR_FUN_14a312d50;
  local_428 = 0;
  local_448 = 0;
  local_430 = 0;
  local_468 = 0x3f000000;
  uStack_464 = 0x3f000000;
  uStack_460 = 0;
  uStack_45c = 0x3f000000;
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  local_490 = plVar3;
  local_488 = dVar9;
  local_458 = plVar3;
  local_450 = dVar9;
  local_438 = dVar9;
  FUN_143773c92(&local_498,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  local_448 = 0;
  local_438 = (double)(param_8 + param_6);
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  local_458 = (longlong *)dVar8;
  local_450 = dVar4;
  local_440 = dVar8;
  (*(code *)local_498[3])(&local_498,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  FUN_140002266(&local_308,&DAT_149e02016,SUB84((double)param_3,0));
  ppuVar6 = local_308;
  local_4a8 = local_308;
  local_4a0 = local_300;
  uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  FUN_140009b9a(&local_4b8);
  local_4c0 = (double)(param_8 + param_6 + 16.0);
  local_4c8 = dVar8;
  FUN_140114c18(&local_308,&local_4c8,&DAT_149e1dd24);
  local_108 = 0;
  local_2ec = 2;
  local_308 = &PTR_FUN_14aaeb7f0;
  local_100 = local_4b8;
  local_170 = uVar2;
  if (local_4b8 == (longlong *)0x0) {
    local_f8 = local_4b0._0_4_;
  }
  else {
    (**(code **)(*local_4b8 + 8))();
    local_f8 = local_4b0._0_4_;
    if (local_4b8 != (longlong *)0x0) {
      (**(code **)(*local_4b8 + 0x10))();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  (*(code *)local_308[3])(&local_308,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  FUN_140002266(&local_4b8,&DAT_149e02016,SUB84((double)param_4,0));
  if (ppuVar6 != (undefined **)0x0) {
    FUN_1400020a8(ppuVar6);
  }
  plVar5 = local_4b8;
  local_4a8 = (undefined **)local_4b8;
  local_4a0 = local_4b0;
  FUN_140009b9a(&local_4b8);
  FUN_140008f88(&local_100,&local_4b8);
  if (local_4b8 != (longlong *)0x0) {
    (**(code **)(*local_4b8 + 0x10))();
  }
  local_4b8 = (longlong *)(double)(param_5 + param_7 + 8.0);
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  local_4b0 = dVar9;
  (*(code *)local_308[2])(&local_308,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  if (1 < *(int *)(param_2 + 8)) {
    FUN_140009b9a(&local_4b8,param_2);
    FUN_140008f88(&local_100,&local_4b8);
    if (local_4b8 != (longlong *)0x0) {
      (**(code **)(*local_4b8 + 0x10))();
    }
    local_4b0 = (double)(param_6 + -16.0);
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    local_4b8 = plVar3;
    (*(code *)local_308[2])(&local_308,lVar1);
    if (*(int *)(lVar1 + 0xac) == 1) {
      FUN_14376e4da(lVar1,0);
    }
  }
  FUN_140b2399e(&local_308);
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8(plVar5);
  }
  local_370 = &PTR_FUN_14a8eb0d0;
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8f1ec FUN_147d8f1ec body=140 status=ok
// SIG undefined FUN_147d8f1ec(void)

void FUN_147d8f1ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14aaeb770;
  uVar1 = param_4[1];
  param_1[8] = *param_4;
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x14] = DAT_14c8463f0;
  param_1[0x15] = uVar1;
  uVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar1;
  return;
}



// FUNCTION 147d8f278 FUN_147d8f278 body=55 status=ok
// SIG undefined FUN_147d8f278(void)

void FUN_147d8f278(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  (**(code **)(*param_2 + 8))(param_2,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 147d8f2b0 FUN_147d8f2b0 body=102 status=ok
// SIG undefined FUN_147d8f2b0(void)

void FUN_147d8f2b0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_147d8086b();
  FUN_147d8e3a4(uVar1,(double)param_3,(double)*(int *)(param_1 + 1),param_2,uVar2,param_4,
                &DAT_149e1e308);
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 0xe;
  return;
}



// FUNCTION 147d8f316 FUN_147d8f316 body=568 status=ok
// SIG undefined FUN_147d8f316(void)

void FUN_147d8f316(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x46];
  if (lVar1 == 0) goto LAB_147d8f338;
  if (*(char *)(*(longlong *)(lVar1 + 0x2e0) + 0xa0) == '\0') {
    fVar2 = *(float *)(*(longlong *)(lVar1 + 0x2e0) + 0xb0) * 1920.0;
  }
  else {
    fVar2 = 1920.0;
  }
  fVar2 = (float)*(int *)(lVar1 + 0x40) / fVar2;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  param_1[0x1a] = (longlong)(double)fVar2;
  param_1[0x1b] = (longlong)(double)fVar2;
  FUN_140009b9a(&local_30);
  FUN_140008f88(param_1 + 0x41,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  local_28 = (double)*(float *)((longlong)param_1 + 0x21c);
  local_30 = (longlong *)(double)(*(float *)(param_1 + 0x43) + *param_3);
  lVar1 = *(longlong *)(param_1[0x46] + 0x2e0);
  (**(code **)(*param_1 + 0x10))(param_1,lVar1);
  if (*(int *)(lVar1 + 0xac) == 1) {
    FUN_14376e4da(lVar1,0);
  }
  lVar1 = param_1[0x46];
  if (*(char *)(*(longlong *)(lVar1 + 0x2e0) + 0xa0) == '\0') {
    dVar4 = (double)*(float *)(*(longlong *)(lVar1 + 0x2e0) + 0xb0);
  }
  else {
    dVar4 = 1.0;
  }
  dVar4 = (double)param_1[0x15] / dVar4 + (double)(*(float *)(param_1 + 0x43) + *param_3);
  fVar2 = *(float *)(param_1 + 0x44);
  if ((double)fVar2 <= dVar4) {
    fVar2 = (float)dVar4;
  }
  *(float *)(param_1 + 0x44) = fVar2;
  dVar4 = (double)param_1[0x16];
  if (*(char *)(*(longlong *)(lVar1 + 0x2e0) + 0xa0) == '\x01') {
    fVar2 = *(float *)((longlong)param_1 + 0x224);
    if (lVar1 != 0) {
      fVar5 = 1920.0;
      goto LAB_147d8f4ff;
    }
LAB_147d8f4ed:
    fVar5 = 1.0;
  }
  else {
    fVar5 = *(float *)(*(longlong *)(lVar1 + 0x2e0) + 0xb0);
    dVar4 = dVar4 / (double)fVar5;
    fVar2 = *(float *)((longlong)param_1 + 0x224);
    if (lVar1 == 0) goto LAB_147d8f4ed;
    fVar5 = fVar5 * 1920.0;
LAB_147d8f4ff:
    fVar5 = (float)*(int *)(lVar1 + 0x40) / fVar5;
    if (fVar5 <= 1.0) {
      fVar5 = 1.0;
    }
  }
  dVar3 = (double)(fVar2 * 1.15 * fVar5);
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  *(float *)((longlong)param_1 + 0x21c) =
       (float)((double)*(float *)((longlong)param_1 + 0x21c) + dVar3);
  FUN_147d8f550(param_1);
LAB_147d8f338:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8f550 FUN_147d8f550 body=150 status=ok
// SIG undefined FUN_147d8f550(void)

void FUN_147d8f550(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  if (lVar1 != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 0x2e0) + 0xa0) == '\0') {
      fVar3 = *(float *)(*(longlong *)(lVar1 + 0x2e0) + 0xb0) * 1920.0;
    }
    else {
      fVar3 = 1920.0;
    }
    fVar3 = (float)*(int *)(lVar1 + 0x40) / fVar3;
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    fVar3 = *(float *)(param_1 + 0x224) * 1.15 * fVar3;
    fVar2 = *(float *)(param_1 + 0x21c) + fVar3;
    if (*(float *)(lVar1 + 0x34) <= fVar2 && fVar2 != *(float *)(lVar1 + 0x34)) {
      *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x22c);
      *(float *)(param_1 + 0x218) = fVar3 + fVar3 + *(float *)(param_1 + 0x220);
    }
  }
  return;
}



// FUNCTION 147d8f5e6 FUN_147d8f5e6 body=455 status=ok
// SIG undefined FUN_147d8f5e6(void)

undefined4 * FUN_147d8f5e6(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_288 [32];
  longlong *local_268;
  int local_260;
  undefined **local_258 [26];
  double local_188;
  double local_180;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar6 = DAT_14c8463f0._4_4_;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *param_2 = (undefined4)DAT_14c8463f0;
  param_2[1] = uVar6;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((*(longlong *)(param_1 + 0x230) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x2e0) != 0)) {
    FUN_147d9baec(local_258,param_1);
    local_258[0] = &PTR_FUN_14aaeb7f0;
    local_50 = *(longlong **)(param_1 + 0x208);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))();
    }
    local_48 = *(undefined4 *)(param_1 + 0x210);
    lVar1 = *(longlong *)(param_1 + 0x230);
    if (lVar1 == 0) {
      local_188 = 1.0;
    }
    else {
      if (*(char *)(*(longlong *)(lVar1 + 0x2e0) + 0xa0) == '\0') {
        fVar5 = *(float *)(*(longlong *)(lVar1 + 0x2e0) + 0xb0) * 1920.0;
      }
      else {
        fVar5 = 1920.0;
      }
      fVar5 = (float)*(int *)(lVar1 + 0x40) / fVar5;
      if (fVar5 <= 1.0) {
        fVar5 = 1.0;
      }
      local_188 = (double)fVar5;
    }
    local_180 = local_188;
    FUN_140009b9a(&local_268,param_3);
    FUN_140008f88(&local_50,&local_268);
    if (local_268 != (longlong *)0x0) {
      (**(code **)(*local_268 + 0x10))();
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x2e0);
    if (*(char *)(lVar1 + 0xa0) == '\0') {
      uVar6 = *(undefined4 *)(lVar1 + 0xb0);
    }
    else {
      uVar6 = 0x3f800000;
    }
    puVar4 = (undefined8 *)FUN_1447a1f4a(&local_50);
    local_268 = (longlong *)*puVar4;
    local_260 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      local_260 = 0;
    }
    FUN_147d8f97e(local_258,param_2,&local_268,uVar6);
    FUN_140b2399e(local_258);
  }
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8f7ae FUN_147d8f7ae body=124 status=ok
// SIG undefined FUN_147d8f7ae(void)

undefined8 FUN_147d8f7ae(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_1447a1f4a(param_1 + 0x208);
  local_40 = *puVar1;
  local_38 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    local_38 = 0;
  }
  FUN_147d8f97e(param_1,param_2,&local_40,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8f82c FUN_147d8f82c body=194 status=ok
// SIG undefined FUN_147d8f82c(void)

undefined8 *
FUN_147d8f82c(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar4 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar4;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14aaeb770;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = param_3;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar4 = DAT_14c8463f8;
  param_1[0x14] = DAT_14c8463f0;
  param_1[0x15] = uVar4;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 6) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  uVar5 = (**(code **)(*param_3 + 0x30))(param_3);
  param_1[8] = (double)uVar5;
  uVar5 = (**(code **)(*param_3 + 0x38))(param_3);
  param_1[9] = (double)uVar5;
  return param_1;
}



// FUNCTION 147d8f8ee FUN_147d8f8ee body=135 status=ok
// SIG undefined FUN_147d8f8ee(void)

void FUN_147d8f8ee(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14aaeb770;
  uVar1 = param_4[1];
  param_1[8] = *param_4;
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x14] = DAT_14c8463f0;
  param_1[0x15] = uVar1;
  return;
}



// FUNCTION 147d8f97e FUN_147d8f97e body=648 status=ok
// SIG undefined FUN_147d8f97e(void)

double * FUN_147d8f97e(longlong param_1,double *param_2,float *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  float *local_e8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  float local_68;
  float fStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_44;
  ulonglong local_40;
  
  uVar7 = DAT_14c8463f8._4_4_;
  uVar6 = (undefined4)DAT_14c8463f8;
  uVar5 = DAT_14c8463f0._4_4_;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  lVar4 = *(longlong *)(param_1 + 0x198);
  if (*(char *)(lVar4 + 0x30) == '\x01') {
    if (*(char *)(param_1 + 0x200) == '\x01') {
      FUN_144a87366(&local_c8,param_1 + 0x1a0);
    }
    else {
      local_e8 = &local_68;
      uStack_60 = 0;
      local_68 = 0.0;
      fStack_64 = (float)((uint)fStack_64 & 0xff000000);
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0x3f800000;
      FUN_140324f46(&local_c8,lVar4,(float)*(int *)(lVar4 + 0x13c),lVar4 + 0x140);
    }
    lVar4 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar8 = *(undefined8 *)(lVar4 + 0x30);
      plVar9 = *(longlong **)(lVar4 + 0x38);
    }
    else {
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      plVar9 = *(longlong **)(lVar4 + 0x28);
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_d8 = *param_3;
    fStack_d4 = param_3[1];
    fStack_d0 = param_3[2];
    fStack_cc = param_3[3];
    local_e8 = (float *)CONCAT44(local_e8._4_4_,param_4);
    FUN_140499e78(uVar8,&local_68,&local_d8,&local_c8);
    dVar3 = *(double *)(param_1 + 0xd8);
    *param_2 = (double)((float)*(double *)(param_1 + 0xd0) * local_68);
    param_2[1] = (double)((float)dVar3 * fStack_64);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_90 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
  }
  else if (*(char *)(lVar4 + 0x30) == '\0') {
    local_b0 = (double)(float)*(double *)(param_1 + 0xd8);
    local_b8 = (double)(float)*(double *)(param_1 + 0xd0);
    local_c8 = 0;
    uStack_c0 = 0;
    local_a8 = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_68 = *param_3;
    fStack_64 = param_3[1];
    uStack_60 = *(undefined8 *)(param_3 + 2);
    local_e8 = &local_44;
    FUN_147d8d986(&local_c8,&local_68,0,2);
    *param_2 = (double)(float)uStack_c0;
    param_2[1] = (double)uStack_c0._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8fc20 FUN_147d8fc20 body=78 status=ok
// SIG undefined FUN_147d8fc20(void)

undefined8 FUN_147d8fc20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x208);
  uStack_24 = *(undefined4 *)(param_1 + 0x20c);
  uStack_20 = *(undefined4 *)(param_1 + 0x210);
  uStack_1c = *(undefined4 *)(param_1 + 0x214);
  FUN_147d8f97e(local_28,param_2,&local_28,param_3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8fc70 FUN_147d8fc70 body=104 status=ok
// SIG undefined FUN_147d8fc70(void)

void FUN_147d8fc70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *param_5;
  uStack_10 = param_5[1];
  local_30 = &local_18;
  local_28 = *(undefined4 *)(param_1 + 0x208);
  uStack_24 = *(undefined4 *)(param_1 + 0x20c);
  uStack_20 = *(undefined4 *)(param_1 + 0x210);
  uStack_1c = *(undefined4 *)(param_1 + 0x214);
  local_38 = param_4;
  FUN_14482f9ae();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d8fcda FUN_147d8fcda body=72 status=ok
// SIG undefined FUN_147d8fcda(void)

void FUN_147d8fcda(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x20 + lVar3);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x50 + lVar3);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80 + lVar3);
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x90;
    } while (lVar4 < *(int *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 147d8fd22 FUN_147d8fd22 body=25 status=ok
// SIG undefined FUN_147d8fd22(void)

void FUN_147d8fd22(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000147d8fd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  return;
}



// FUNCTION 147d8fd4a FUN_147d8fd4a body=112 status=ok
// SIG undefined FUN_147d8fd4a(void)

void FUN_147d8fd4a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147a66e18(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x90 + *param_1),0,(longlong)(param_2 - iVar1) * 0x90);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_147d9f504(param_1);
  return;
}



// FUNCTION 147d8fdba FUN_147d8fdba body=512 status=ok
// SIG undefined FUN_147d8fdba(void)

void FUN_147d8fdba(longlong param_1,double *param_2,double *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  
  puVar14 = *(undefined8 **)(param_1 + 0x50);
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)(puVar14,1);
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  uVar5 = *(uint *)(param_1 + 0x48);
  if (0 < (int)uVar5) {
    dVar8 = *param_3 + *param_2;
    dVar9 = param_3[1] * 0.0 + param_2[1];
    puVar14 = (undefined8 *)(param_1 + 0x30);
    lVar16 = 1;
    lVar15 = 0;
    do {
      fVar18 = ((float)(int)lVar16 * 6.2831855) / (float)(int)uVar5;
      lVar6 = *plVar1;
      dVar4 = param_2[1];
      *(double *)(lVar6 + lVar15) = *param_2;
      ((double *)(lVar6 + lVar15))[1] = dVar4;
      uVar10 = *(undefined4 *)(param_1 + 0x34);
      uVar11 = *(undefined4 *)(param_1 + 0x38);
      uVar12 = *(undefined4 *)(param_1 + 0x3c);
      puVar2 = (undefined4 *)(*plVar1 + 0x20 + lVar15);
      *puVar2 = *(undefined4 *)puVar14;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      lVar6 = *plVar1;
      *(double *)(lVar6 + 0x30 + lVar15) = dVar8;
      *(double *)(lVar6 + 0x38 + lVar15) = dVar9;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      puVar3 = (undefined8 *)(*plVar1 + 0x50 + lVar15);
      *puVar3 = *puVar14;
      puVar3[1] = uVar7;
      dVar8 = param_3[1];
      fVar17 = sinf(fVar18);
      dVar4 = *param_3;
      fVar18 = cosf(fVar18);
      dVar9 = (double)fVar17 * dVar8 + param_2[1];
      dVar8 = (double)fVar18 * dVar4 + *param_2;
      lVar6 = *plVar1;
      *(double *)(lVar6 + 0x60 + lVar15) = dVar8;
      *(double *)(lVar6 + 0x68 + lVar15) = dVar9;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      puVar3 = (undefined8 *)(*plVar1 + 0x80 + lVar15);
      *puVar3 = *puVar14;
      puVar3[1] = uVar7;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x90;
    } while ((ulonglong)uVar5 + 1 != lVar16);
  }
  puVar14 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  uVar13 = DAT_14c8463f8;
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  puVar14[1] = DAT_14c8463f0;
  puVar14[2] = uVar13;
  puVar14[5] = 0;
  puVar14[3] = 0;
  *(undefined1 *)(puVar14 + 4) = 0;
  puVar14[6] = &DAT_3f8000003f800000;
  puVar14[7] = &DAT_3f8000003f800000;
  *puVar14 = &PTR_FUN_14a8bd0b0;
  puVar14[8] = uVar7;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  FUN_147d9bc70(puVar14 + 0xb,plVar1);
  uVar7 = ((undefined8 *)puVar14[0xb])[1];
  puVar14[1] = *(undefined8 *)puVar14[0xb];
  puVar14[2] = uVar7;
  *(undefined8 **)(param_1 + 0x50) = puVar14;
  return;
}



// FUNCTION 147d8ffc8 FUN_147d8ffc8 body=62 status=ok
// SIG undefined FUN_147d8ffc8(void)

void FUN_147d8ffc8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1408be2c4(param_1 + 0x50,0);
    return;
  }
  return;
}



// FUNCTION 147d90006 FUN_147d90006 body=172 status=ok
// SIG undefined FUN_147d90006(void)

void FUN_147d90006(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0e230) {
    FUN_144b3d300(&DAT_14cb0e230);
    if (DAT_14cb0e230 == -1) {
      FUN_1446f470e(&DAT_14cb0e228,L"Typing",1);
      _Init_thread_footer(&DAT_14cb0e230);
    }
  }
  (**(code **)(*param_1 + 0x3c0))(param_1,DAT_14cb0e228);
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2);
  iVar1 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147d90073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1,iVar1);
  return;
}



// FUNCTION 147d900ce FUN_147d900ce body=32 status=ok
// SIG undefined FUN_147d900ce(void)

undefined8 FUN_147d900ce(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1,param_3);
  }
  return 1;
}



// FUNCTION 147d900ee FUN_147d900ee body=172 status=ok
// SIG undefined FUN_147d900ee(void)

undefined4
FUN_147d900ee(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_3;
  local_28 = param_3[1];
  local_20 = param_3[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_40 = param_6;
  local_48 = param_5;
  uVar4 = (**(code **)(*param_1 + 0x340))(param_5,param_2,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9019c FUN_147d9019c body=286 status=ok
// SIG undefined FUN_147d9019c(void)

ulonglong FUN_147d9019c(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  int iVar8;
  
  lVar3 = *param_3;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (lVar3 == DAT_14c966e98) {
    if (param_4 == 1) {
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x128);
      *(undefined2 *)(param_1 + 0x131) = 0x101;
    }
    else {
      if (param_4 != 0) goto LAB_147d901e5;
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x128);
      *(undefined1 *)(param_1 + 0x130) = 1;
      *(undefined1 *)(param_1 + 0x132) = 0;
      *(undefined4 *)(param_1 + 0x134) = 0;
    }
    uVar6 = CONCAT71(uVar7,1);
  }
  else {
LAB_147d901e5:
    if ((lVar3 == DAT_14c964e00) || (lVar3 == DAT_14c964cf8)) {
      iVar5 = *(int *)(param_1 + 0x58) + -1;
      uVar6 = CONCAT71(uVar7,1);
      if (*(int *)(param_1 + 100) < iVar5) {
        iVar8 = *(int *)(param_1 + 100) + (*(uint *)(param_1 + 0xb0) & 2) * 2 + 1;
        if (iVar8 < *(int *)(param_1 + 0x58)) {
          iVar5 = iVar8;
        }
        *(int *)(param_1 + 100) = iVar5;
      }
    }
    else if ((lVar3 == DAT_14c964e18) || (lVar3 == DAT_14c964d10)) {
      uVar6 = CONCAT71(uVar7,1);
      if (0 < *(int *)(param_1 + 100)) {
        iVar5 = (-(uint)((*(uint *)(param_1 + 0xb0) & 2) == 0) | 0xfffffffb) +
                *(int *)(param_1 + 100);
        if (iVar5 < 1) {
          iVar5 = 0;
        }
        *(int *)(param_1 + 100) = iVar5;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  plVar4 = (longlong *)param_3[2];
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 147d902ba FUN_147d902ba body=2427 status=ok
// SIG undefined FUN_147d902ba(void)

void FUN_147d902ba(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  int *piVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_718 [32];
  undefined ***local_6f8;
  undefined ***local_6f0;
  longlong local_6e8;
  float local_6e0;
  float local_6d8;
  float local_6d0;
  double *local_6c8;
  float local_6c0;
  undefined1 local_6bc [4];
  undefined **local_6b8;
  double local_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined1 local_698;
  undefined8 local_690;
  undefined1 *local_688;
  undefined4 local_680;
  float local_67c;
  double local_678;
  double local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined1 local_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  float local_5cc;
  double local_5c8;
  double local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  double local_558;
  double dStack_550;
  undefined1 *local_548;
  undefined4 local_540;
  undefined **local_538 [65];
  undefined **local_330;
  undefined4 local_328;
  undefined **local_320;
  double local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  float local_2e4;
  double local_2e0;
  double local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_188;
  undefined1 local_120;
  undefined **local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  lVar6 = DAT_14cb0dd88;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_718;
  fVar3 = *(float *)(param_2 + 0x30);
  fVar21 = *(float *)(param_2 + 0x34);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar18 + 0xc60) == 0x40000002) {
    uVar13 = 0;
  }
  else {
    bVar12 = FUN_144a61b4f();
    uVar13 = (ulonglong)(bVar12 ^ 1);
  }
  piVar11 = DAT_14cb0dda0;
  if (*(int *)(lVar6 + uVar13 * 4) == 0) {
    auVar23 = roundps(unaff_XMM7,ZEXT416((uint)(fVar21 * 0.75)),1);
    fVar22 = auVar23._0_4_;
    fVar21 = 0.0;
    goto LAB_147d903c3;
  }
  piVar1 = (int *)(lVar18 + 0xc60);
  if (*piVar1 == 0x40000002) {
    iVar16 = *DAT_14cb0dda0;
LAB_147d903ab:
    uVar13 = 0;
    lVar18 = DAT_14cb0ddb8;
  }
  else {
    bVar12 = FUN_144a61b4f();
    lVar18 = DAT_14cb0ddb8;
    iVar16 = piVar11[bVar12 ^ 1];
    if (*piVar1 == 0x40000002) goto LAB_147d903ab;
    bVar12 = FUN_144a61b4f();
    uVar13 = (ulonglong)(bVar12 ^ 1);
  }
  fVar21 = (float)iVar16;
  fVar22 = *(float *)(param_2 + 0x34) - (float)*(int *)(lVar18 + uVar13 * 4);
LAB_147d903c3:
  uVar5 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  local_6f0 = *(undefined ****)(param_2 + 0x2e0);
  if (*(char *)(local_6f0 + 0x14) == '\0') {
    fVar25 = *(float *)(local_6f0 + 0x16);
  }
  else {
    fVar25 = 1.0;
  }
  local_320 = (undefined **)&DAT_149ebbbfe;
  local_318 = (double)CONCAT44(local_318._4_4_,1);
  local_6f8 = (undefined ***)CONCAT71(local_6f8._1_7_,*(undefined1 *)(param_1 + 0x168));
  FUN_140b23708(uVar5,&local_320,param_1 + 0x138,(float *)(param_1 + 0x13c));
  *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) / fVar25;
  fVar20 = *(float *)(param_1 + 0x13c) / fVar25;
  *(float *)(param_1 + 0x13c) = fVar20;
  fVar24 = fVar22 - fVar20;
  if (*(int *)(param_1 + 0x58) != 0) {
    local_540 = 0x3f800000;
    local_548 = &DAT_3f8000003f800000;
    lVar18 = *(longlong *)(param_1 + 0x150);
    fVar20 = *(float *)(lVar18 + 0x50);
    local_608 = (undefined **)
                CONCAT44((&DAT_14c758c60)[*(byte *)(lVar18 + 0x59)],
                         (&DAT_14c758c60)[*(byte *)(lVar18 + 0x5a)]);
    local_600 = (double)CONCAT44((float)*(byte *)(lVar18 + 0x5b) * 0.003921569,
                                 (&DAT_14c758c60)[*(byte *)(lVar18 + 0x58)]);
    FUN_140056680(&local_108,&DAT_149dfb77a);
    FUN_140233b1a(&local_6b8,&local_108);
    fVar26 = fVar22 + 0.0;
    dStack_550 = (double)((fVar26 + -5.0) - *(float *)(param_1 + 0x13c));
    dVar7 = (double)fVar21;
    local_558 = dVar7;
    FUN_140114c18(&local_320,&local_558,&local_608);
    local_120 = 0;
    uStack_308 = CONCAT44(2,(undefined4)uStack_308);
    local_320 = &PTR_FUN_14aaeb7f0;
    local_118 = local_6b8;
    local_188 = uVar5;
    if (local_6b8 == (undefined **)0x0) {
      local_110 = local_6b0._0_4_;
    }
    else {
      (**(code **)(*local_6b8 + 8))();
      local_110 = local_6b0._0_4_;
      if (local_6b8 != (undefined **)0x0) {
        (**(code **)(*local_6b8 + 0x10))();
      }
    }
    fVar20 = fVar20 / 100.0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    fVar4 = *(float *)(param_1 + 0x13c);
    dVar8 = (double)fVar3;
    local_590 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x40));
    local_5e0 = 0;
    uStack_5dc = 0;
    uStack_5d8 = 0;
    uStack_5d4 = 0;
    local_5f8 = 0;
    uStack_5f4 = 0;
    uStack_5f0 = 0;
    uStack_5ec = 0;
    uVar13 = 0;
    local_5e8 = 0;
    local_608 = &PTR_FUN_14aaeb770;
    local_5b8 = 0x3f800000;
    local_5b0 = 0;
    uStack_5ac = 0;
    uStack_5a8 = 0;
    uStack_5a4 = 0;
    local_5a0 = 0x3ff0000000000000;
    local_598 = 0x3ff0000000000000;
    local_588 = 0;
    uStack_584 = 0;
    uStack_580 = 0;
    uStack_57c = 0;
    local_578 = 0;
    uStack_574 = 0;
    uStack_570 = 0;
    uStack_56c = 0;
    local_568 = (undefined4)DAT_14c8463f0;
    uStack_564 = DAT_14c8463f0._4_4_;
    uStack_560 = (undefined4)DAT_14c8463f8;
    uStack_55c = DAT_14c8463f8._4_4_;
    local_5d0 = 0;
    dVar9 = (double)(fVar26 - *(float *)(param_1 + 0x13c));
    local_600 = dVar7;
    local_5cc = fVar20;
    local_5c8 = dVar8;
    local_5c0 = (double)(fVar26 - fVar4);
    local_640 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x48));
    local_690 = 0;
    local_6a8 = 0;
    uStack_6a4 = 0;
    uStack_6a0 = 0;
    local_698 = 0;
    local_6b8 = &PTR_FUN_14aaeb770;
    local_668 = 0x3f800000;
    local_660 = 0;
    uStack_65c = 0;
    uStack_658 = 0;
    uStack_654 = 0;
    local_650 = 0x3ff0000000000000;
    local_648 = 0x3ff0000000000000;
    local_638 = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    uStack_62c = 0;
    local_628 = 0;
    uStack_624 = 0;
    uStack_620 = 0;
    uStack_61c = 0;
    local_618 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    uStack_610 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    local_680 = local_540;
    local_688 = local_548;
    uStack_5ec = 0xb;
    uStack_69c = 0xb;
    uVar17 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 100);
    local_558 = 0.0;
    dStack_550 = 0.0;
    fVar26 = *(float *)(param_1 + 0x13c);
    local_6b0 = dVar7;
    local_67c = fVar20;
    local_678 = dVar8;
    local_670 = dVar9;
    if (-1 < (int)uVar17 && -fVar26 < fVar24) {
      lVar18 = (ulonglong)uVar17 << 4;
      do {
        if ((int)uVar17 < *(int *)(param_1 + 0x58)) {
          iVar16 = *(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar18);
          iVar14 = iVar16 + -1;
          if (iVar16 == 0) {
            iVar14 = 0;
          }
          local_108 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar18);
          local_6f0 = *(undefined ****)(param_2 + 0x2e0);
          uStack_100 = CONCAT44(uStack_100._4_4_,iVar14);
          local_6f8 = (undefined ***)CONCAT71(local_6f8._1_7_,*(undefined1 *)(param_1 + 0x168));
          FUN_140b23708(uVar5,&local_108,local_6bc,&local_6c0);
          fVar26 = local_6c0;
          fVar20 = *(float *)(param_1 + 0x13c);
          lVar6 = *(longlong *)(param_1 + 0x50);
          FUN_147d9baec(local_538,&local_320);
          local_538[0] = &PTR_FUN_14aaeb7f0;
          local_330 = local_118;
          if (local_118 != (undefined **)0x0) {
            (**(code **)(*local_118 + 8))();
          }
          uVar19 = -(uint)(fVar20 < fVar26 / fVar25);
          fVar24 = (float)(~uVar19 & (uint)fVar24 |
                          (uint)(fVar24 - (fVar26 / fVar25 - fVar20)) & uVar19);
          local_6d8 = fVar24 + 0.0;
          local_328 = local_110;
          local_6c8 = &local_558;
          local_6f0 = local_538;
          local_6f8 = &local_6b8;
          local_6e8 = lVar6 + lVar18;
          local_6e0 = fVar21;
          local_6d0 = fVar21;
          FUN_147d90c36(param_1,param_2,uVar5,&local_608);
          fVar26 = *(float *)(param_1 + 0x13c);
        }
        fVar24 = fVar24 - fVar26;
        if ((int)uVar17 < 1) break;
        lVar18 = lVar18 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-fVar26 < fVar24);
      uVar13 = (ulonglong)dStack_550 & 0xffffffff;
      if (*(char *)(param_1 + 0x131) == '\x01') {
        if (dStack_550._0_4_ == 0) {
          uVar13 = 0;
        }
        else {
          if (1 < dStack_550._0_4_) {
            lVar18 = uVar13 << 4;
            uVar15 = 0;
            do {
              lVar18 = lVar18 + -0x10;
              lVar6 = *(longlong *)((longlong)local_558 + uVar15);
              lVar10 = ((longlong *)((longlong)local_558 + uVar15))[1];
              uVar5 = ((undefined8 *)((longlong)local_558 + lVar18))[1];
              *(undefined8 *)((longlong)local_558 + uVar15) =
                   *(undefined8 *)((longlong)local_558 + lVar18);
              ((undefined8 *)((longlong)local_558 + uVar15))[1] = uVar5;
              local_108._0_4_ = (undefined4)lVar6;
              local_108._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
              uStack_100._0_4_ = (uint)lVar10;
              uStack_100._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
              puVar2 = (undefined4 *)((longlong)local_558 + lVar18);
              *puVar2 = (undefined4)local_108;
              puVar2[1] = local_108._4_4_;
              puVar2[2] = (uint)uStack_100;
              puVar2[3] = uStack_100._4_4_;
              uVar15 = uVar15 + 0x10;
              local_108 = lVar6;
              uStack_100 = lVar10;
            } while ((uVar13 * 8 & 0xfffffffffffffff0) != uVar15);
          }
          FUN_144a8b2a0(&local_108,&local_558,&DAT_149e02010);
          if (1 < (uint)uStack_100) {
            FUN_142855b70(local_108);
          }
          *(undefined1 *)(param_1 + 0x131) = 0;
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          uVar13 = (ulonglong)dStack_550 & 0xffffffff;
        }
      }
    }
    FUN_1447a1747(local_558,uVar13);
    if (local_558 != 0.0) {
      FUN_1400020a8();
    }
    FUN_140b2399e(&local_320);
    fVar20 = *(float *)(param_1 + 0x13c);
  }
  fVar25 = *(float *)(*(longlong *)(param_1 + 0x150) + 0x50);
  local_2a8 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x40));
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_310 = 0;
  local_300 = 0;
  local_320 = &PTR_FUN_14aaeb770;
  local_2d0 = 0x3f800000;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0x3ff0000000000000;
  local_2b0 = 0x3ff0000000000000;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = (undefined4)DAT_14c8463f0;
  uStack_27c = DAT_14c8463f0._4_4_;
  uStack_278 = (undefined4)DAT_14c8463f8;
  uStack_274 = DAT_14c8463f8._4_4_;
  local_2e8 = 0;
  uStack_308 = 0xb00000000;
  lVar18 = *(longlong *)(param_2 + 0x2e0);
  local_318 = (double)fVar21;
  local_2e4 = fVar25 / 100.0;
  local_2e0 = (double)fVar3;
  local_2d8 = (double)(fVar20 + fVar24);
  FUN_1405054c0(&local_320,lVar18);
  if (*(int *)(lVar18 + 0xac) == 1) {
    FUN_14376e4da(lVar18,0);
  }
  FUN_140b22556(param_1,param_2,CONCAT44((int)(fVar22 + 0.0 + 6.0),(int)fVar21));
  if ((local_f0 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d90c36 FUN_147d90c36 body=4019 status=ok
// SIG undefined FUN_147d90c36(void)

void FUN_147d90c36(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,float param_8,
                  float param_9,float param_10,longlong *param_11)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  bool bVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  float *local_120;
  uint *local_118;
  ulonglong local_110;
  longlong *local_108;
  longlong *local_100 [2];
  void *local_f0;
  int local_e8;
  uint local_e0;
  uint local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  fVar2 = *(float *)(param_2 + 0x30);
  local_d4 = 0.0;
  local_d8 = 0.0;
  local_dc = 0;
  local_e0 = 0;
  if (*(char *)(param_1 + 0x130) != '\x01') {
LAB_147d9179a:
    fVar21 = (float)FUN_147d91d3c(param_1,param_2,param_3,param_7);
    param_4[1] = (longlong)(double)param_10;
    param_4[2] = (longlong)(double)param_9;
    fVar20 = *(float *)(param_1 + 0x13c);
    param_4[8] = (longlong)(double)fVar21;
    param_4[9] = (longlong)(double)fVar20;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_4 + 0x18))(param_4,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    *(undefined4 *)(param_6 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)param_6 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_6 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)param_6 + 0x3c) = 0x3f800000;
    iVar11 = *(int *)(param_7 + 1) + -1;
    if (*(int *)(param_7 + 1) == 0) {
      iVar11 = 0;
    }
    FUN_144a63a7c(param_7,&local_f0,0,iVar11);
    FUN_140009b9a(local_100,&local_f0);
    FUN_140008f88(param_6 + 0x41,local_100);
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_6 + 8))(param_6,lVar3,param_8,param_9);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_4[1] = (longlong)(double)fVar21;
    param_4[2] = (longlong)(double)param_9;
    fVar20 = *(float *)(param_1 + 0x13c);
    param_4[8] = (longlong)(double)(fVar2 - fVar21);
    param_4[9] = (longlong)(double)fVar20;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_4 + 0x18))(param_4,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    goto LAB_147d9144d;
  }
  fVar20 = *(float *)(param_1 + 0x13c) + param_9;
  fVar22 = *(float *)(param_1 + 0x11c) - *(float *)(param_1 + 0x134);
  fVar21 = *(float *)(param_1 + 0x124 + (ulonglong)(*(byte *)(param_1 + 0x132) ^ 1) * 8) -
           *(float *)(param_1 + 0x134);
  bVar12 = param_9 <= fVar22 && fVar22 <= fVar20;
  if (bVar12) {
    local_128 = *(undefined4 *)(param_1 + 0x118);
    local_118 = &local_dc;
    local_120 = &local_d4;
    FUN_147d91bea(param_1,param_2,param_3,param_7);
  }
  bVar10 = param_9 <= fVar21 && fVar21 <= fVar20;
  if (bVar10) {
    local_128 = *(undefined4 *)(param_1 + 0x120 + (ulonglong)(*(byte *)(param_1 + 0x132) ^ 1) * 8);
    local_118 = &local_e0;
    local_120 = &local_d8;
    FUN_147d91bea(param_1,param_2,param_3,param_7);
  }
  fVar9 = local_d8;
  uVar15 = local_dc;
  fVar18 = fVar21;
  fVar19 = fVar22;
  if (fVar21 < fVar22) {
    bVar12 = param_9 > fVar22 || fVar22 > fVar20;
    bVar10 = param_9 > fVar21 || fVar21 > fVar20;
    fVar18 = fVar22;
    fVar19 = fVar21;
  }
  bVar5 = fVar19 < param_9;
  bVar6 = fVar20 < fVar18;
  bVar8 = (bool)(local_d8 <= 0.0 & bVar10);
  if ((((bool)(bVar12 ^ 1U) || bVar6 && bVar5) || bVar8) || (bool)(bVar10 ^ 1U)) {
    if ((!(bool)(bVar12 ^ 1U) && (!bVar6 || !bVar5)) && !bVar8) {
      fVar18 = (float)FUN_147d91d3c(param_1,param_2,param_3,param_7);
      fVar20 = local_d4;
      if (fVar21 < fVar22) {
        local_dc = local_e0;
        fVar20 = fVar9;
      }
      dVar7 = (double)param_9;
      param_4[1] = (longlong)(double)param_10;
      param_4[2] = (longlong)dVar7;
      fVar21 = *(float *)(param_1 + 0x13c);
      param_4[8] = (longlong)(double)fVar20;
      param_4[9] = (longlong)(double)fVar21;
      lVar3 = *(longlong *)(param_2 + 0x2e0);
      (**(code **)(*param_4 + 0x18))(param_4,lVar3);
      if (*(int *)(lVar3 + 0xac) == 1) {
        FUN_14376e4da(lVar3,0);
      }
      *(undefined4 *)(param_6 + 6) = 0x3f800000;
      *(undefined4 *)((longlong)param_6 + 0x34) = 0x3f800000;
      *(undefined4 *)(param_6 + 7) = 0x3f800000;
      *(undefined4 *)((longlong)param_6 + 0x3c) = 0x3f800000;
      local_110 = (ulonglong)local_dc;
      uVar15 = local_dc + 1;
      FUN_144a63a7c(param_7,&local_f0,0);
      FUN_140009b9a(local_100,&local_f0);
      local_108 = param_6 + 0x41;
      FUN_140008f88(local_108,local_100);
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      lVar3 = *(longlong *)(param_2 + 0x2e0);
      (**(code **)(*param_6 + 8))(param_6,lVar3,param_8,param_9);
      if (*(int *)(lVar3 + 0xac) == 1) {
        FUN_14376e4da(lVar3,0);
      }
      if (local_f0 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_5[1] = (longlong)(double)fVar20;
      param_5[2] = (longlong)dVar7;
      fVar21 = *(float *)(param_1 + 0x13c);
      param_5[8] = (longlong)(double)(fVar18 - fVar20);
      param_5[9] = (longlong)(double)fVar21;
      lVar3 = *(longlong *)(param_2 + 0x2e0);
      (**(code **)(*param_5 + 0x18))(param_5,lVar3);
      if (*(int *)(lVar3 + 0xac) == 1) {
        FUN_14376e4da(lVar3,0);
      }
      *(undefined4 *)(param_6 + 6) = 0;
      *(undefined4 *)((longlong)param_6 + 0x34) = 0;
      *(undefined4 *)(param_6 + 7) = 0;
      *(undefined4 *)((longlong)param_6 + 0x3c) = 0x3f800000;
      uVar17 = (ulonglong)uVar15;
      if ((int)local_110 < 1) {
        uVar17 = 0;
      }
      iVar11 = *(int *)(param_7 + 1) + -1;
      if (*(int *)(param_7 + 1) == 0) {
        iVar11 = 0;
      }
      FUN_144a63a7c(param_7,&local_f0,uVar17,iVar11);
      FUN_140009b9a(local_100,&local_f0);
      FUN_140008f88(local_108,local_100);
      if (local_100[0] != (longlong *)0x0) {
        (**(code **)(*local_100[0] + 0x10))();
      }
      lVar3 = *(longlong *)(param_2 + 0x2e0);
      (**(code **)(*param_6 + 8))(param_6,lVar3,fVar20 + param_8,param_9);
      if (*(int *)(lVar3 + 0xac) == 1) {
        FUN_14376e4da(lVar3,0);
      }
      if (local_f0 != (void *)0x0) {
        FUN_1400020a8();
      }
      param_4[1] = (longlong)(double)fVar18;
      param_4[2] = (longlong)dVar7;
      fVar20 = *(float *)(param_1 + 0x13c);
      param_4[8] = (longlong)(double)(fVar2 - fVar18);
      param_4[9] = (longlong)(double)fVar20;
      lVar3 = *(longlong *)(param_2 + 0x2e0);
      (**(code **)(*param_4 + 0x18))(param_4,lVar3);
      if (*(int *)(lVar3 + 0xac) == 1) {
        FUN_14376e4da(lVar3,0);
      }
      if (*(char *)(param_1 + 0x131) != '\x01') goto LAB_147d9144d;
      iVar11 = *(int *)(param_7 + 1) + -1;
      if (*(int *)(param_7 + 1) == 0) {
        iVar11 = 0;
      }
      goto LAB_147d913d0;
    }
    if (bVar6 && bVar5 || (bool)(bVar10 ^ 1U)) {
      if (param_9 <= fVar18 && fVar19 <= fVar20) {
        fVar21 = (float)FUN_147d91d3c(param_1,param_2,param_3,param_7);
        param_5[1] = (longlong)(double)param_10;
        param_5[2] = (longlong)(double)param_9;
        fVar20 = *(float *)(param_1 + 0x13c);
        param_5[8] = (longlong)(double)fVar21;
        param_5[9] = (longlong)(double)fVar20;
        lVar3 = *(longlong *)(param_2 + 0x2e0);
        (**(code **)(*param_5 + 0x18))(param_5,lVar3);
        if (*(int *)(lVar3 + 0xac) == 1) {
          FUN_14376e4da(lVar3,0);
        }
        *(undefined4 *)(param_6 + 6) = 0;
        *(undefined4 *)((longlong)param_6 + 0x34) = 0;
        *(undefined4 *)(param_6 + 7) = 0;
        *(undefined4 *)((longlong)param_6 + 0x3c) = 0x3f800000;
        iVar11 = *(int *)(param_7 + 1) + -1;
        if (*(int *)(param_7 + 1) == 0) {
          iVar11 = 0;
        }
        FUN_144a63a7c(param_7,&local_f0,0,iVar11);
        FUN_140009b9a(local_100,&local_f0);
        FUN_140008f88(param_6 + 0x41,local_100);
        if (local_100[0] != (longlong *)0x0) {
          (**(code **)(*local_100[0] + 0x10))();
        }
        lVar3 = *(longlong *)(param_2 + 0x2e0);
        (**(code **)(*param_6 + 8))(param_6,lVar3,param_8,param_9);
        if (*(int *)(lVar3 + 0xac) == 1) {
          FUN_14376e4da(lVar3,0);
        }
        if (local_f0 != (void *)0x0) {
          FUN_1400020a8();
        }
        param_4[1] = (longlong)(double)fVar21;
        param_4[2] = (longlong)(double)param_9;
        fVar20 = *(float *)(param_1 + 0x13c);
        param_4[8] = (longlong)(double)(fVar2 - fVar21);
        param_4[9] = (longlong)(double)fVar20;
        lVar3 = *(longlong *)(param_2 + 0x2e0);
        (**(code **)(*param_4 + 0x18))(param_4,lVar3);
        if (*(int *)(lVar3 + 0xac) == 1) {
          FUN_14376e4da(lVar3,0);
        }
        if (*(char *)(param_1 + 0x131) == '\x01') {
          iVar11 = (int)param_11[1];
          *(uint *)(param_11 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_11 + 0xc) < iVar11 + 1U) {
            FUN_1447a1bd6(param_11,iVar11);
          }
          lVar3 = *param_11;
          lVar13 = (longlong)iVar11 * 0x10;
          puVar1 = (undefined8 *)(lVar3 + lVar13);
          *(undefined8 *)(lVar3 + lVar13) = 0;
          iVar11 = *(int *)(param_7 + 1);
          pvVar4 = (void *)*param_7;
          *(int *)(lVar3 + 8 + lVar13) = iVar11;
          if ((longlong)iVar11 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar11,0);
            memcpy((void *)*puVar1,pvVar4,(longlong)iVar11 * 2);
          }
        }
        goto LAB_147d9144d;
      }
      goto LAB_147d9179a;
    }
    fVar20 = local_d8;
    if (fVar21 < fVar22) {
      local_e0 = local_dc;
      fVar20 = local_d4;
    }
    param_5[1] = (longlong)(double)param_10;
    param_5[2] = (longlong)(double)param_9;
    fVar21 = *(float *)(param_1 + 0x13c);
    param_5[8] = (longlong)(double)fVar20;
    param_5[9] = (longlong)(double)fVar21;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_5 + 0x18))(param_5,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    param_6[6] = 0;
    param_6[7] = 0x3f80000000000000;
    iVar11 = local_e0 + 1;
    if (fVar20 <= 0.0) {
      iVar11 = 0;
    }
    FUN_144a63a7c(param_7,&local_f0,0,iVar11);
    FUN_140009b9a(local_100,&local_f0);
    FUN_140008f88(param_6 + 0x41,local_100);
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_6 + 8))(param_6,lVar3,param_8,param_9);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_4[1] = (longlong)(double)fVar20;
    param_4[2] = (longlong)(double)param_9;
    fVar21 = *(float *)(param_1 + 0x13c);
    param_4[8] = (longlong)(double)(fVar2 - fVar20);
    param_4[9] = (longlong)(double)fVar21;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_4 + 0x18))(param_4,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    *(undefined4 *)(param_6 + 6) = 0x3f800000;
    *(undefined4 *)((longlong)param_6 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_6 + 7) = 0x3f800000;
    *(undefined4 *)((longlong)param_6 + 0x3c) = 0x3f800000;
    iVar14 = *(int *)(param_7 + 1) + -1;
    if (*(int *)(param_7 + 1) == 0) {
      iVar14 = 0;
    }
    FUN_144a63a7c(param_7,&local_f0,iVar11,iVar14);
    FUN_140009b9a(local_100,&local_f0);
    FUN_140008f88(param_6 + 0x41,local_100);
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_6 + 8))(param_6,lVar3,fVar20 + param_8,param_9);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 0x131) != '\x01') goto LAB_147d9144d;
    FUN_144a63a7c(param_7,&local_f0,0,iVar11);
    if (1 < local_e8) goto LAB_147d913d5;
  }
  else {
    fVar20 = local_d4;
    fVar21 = local_d8;
    if (local_d8 < local_d4) {
      local_dc = local_e0;
      local_e0 = uVar15;
      fVar20 = local_d8;
      fVar21 = local_d4;
    }
    dVar7 = (double)param_9;
    param_4[1] = (longlong)(double)param_10;
    param_4[2] = (longlong)dVar7;
    fVar22 = *(float *)(param_1 + 0x13c);
    param_4[8] = (longlong)(double)fVar20;
    param_4[9] = (longlong)(double)fVar22;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_4 + 0x18))(param_4,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    param_6[6] = (longlong)&DAT_3f8000003f800000;
    param_6[7] = (longlong)&DAT_3f8000003f800000;
    local_110 = (ulonglong)local_dc;
    local_108 = (longlong *)CONCAT44(local_108._4_4_,local_dc + 1);
    FUN_144a63a7c(param_7,&local_f0,0);
    FUN_140009b9a(local_100,&local_f0);
    plVar16 = param_6 + 0x41;
    FUN_140008f88(plVar16,local_100);
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_6 + 8))(param_6,lVar3,param_8,param_9);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_5[1] = (longlong)(double)fVar20;
    param_5[2] = (longlong)dVar7;
    fVar22 = *(float *)(param_1 + 0x13c);
    param_5[8] = (longlong)(double)(fVar21 - fVar20);
    param_5[9] = (longlong)(double)fVar22;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_5 + 0x18))(param_5,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    uVar15 = local_e0;
    *(undefined4 *)(param_6 + 6) = 0;
    *(undefined4 *)((longlong)param_6 + 0x34) = 0;
    *(undefined4 *)(param_6 + 7) = 0;
    *(undefined4 *)((longlong)param_6 + 0x3c) = 0x3f800000;
    uVar17 = 0;
    if (0 < (int)local_110) {
      uVar17 = (ulonglong)local_108 & 0xffffffff;
    }
    FUN_144a63a7c(param_7,&local_f0,uVar17,(local_e0 - (int)uVar17) + 1);
    FUN_140009b9a(local_100,&local_f0);
    FUN_140008f88(plVar16,local_100);
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_6 + 8))(param_6,lVar3,fVar20 + param_8,param_9);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    param_4[1] = (longlong)(double)fVar21;
    param_4[2] = (longlong)dVar7;
    fVar20 = *(float *)(param_1 + 0x13c);
    param_4[8] = (longlong)(double)(fVar2 - fVar21);
    param_4[9] = (longlong)(double)fVar20;
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_4 + 0x18))(param_4,lVar3);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    param_6[6] = (longlong)&DAT_3f8000003f800000;
    param_6[7] = (longlong)&DAT_3f8000003f800000;
    iVar11 = uVar15 + 1;
    if (fVar21 <= 0.0) {
      iVar11 = 0;
    }
    iVar14 = *(int *)(param_7 + 1) + -1;
    if (*(int *)(param_7 + 1) == 0) {
      iVar14 = 0;
    }
    FUN_144a63a7c(param_7,&local_f0,iVar11,iVar14);
    FUN_140009b9a(local_100,&local_f0);
    FUN_140008f88(plVar16,local_100);
    if (local_100[0] != (longlong *)0x0) {
      (**(code **)(*local_100[0] + 0x10))();
    }
    lVar3 = *(longlong *)(param_2 + 0x2e0);
    (**(code **)(*param_6 + 8))(param_6,lVar3,fVar21 + param_8,param_9);
    if (*(int *)(lVar3 + 0xac) == 1) {
      FUN_14376e4da(lVar3,0);
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_1 + 0x131) != '\x01') goto LAB_147d9144d;
    uVar17 = (ulonglong)local_108 & 0xffffffff;
    iVar11 = uVar15 - (int)local_110;
LAB_147d913d0:
    FUN_144a63a7c(param_7,&local_f0,uVar17,iVar11);
LAB_147d913d5:
    iVar11 = (int)param_11[1];
    *(uint *)(param_11 + 1) = iVar11 + 1U;
    if (*(uint *)((longlong)param_11 + 0xc) < iVar11 + 1U) {
      FUN_1447a1bd6(param_11,iVar11);
    }
    pvVar4 = local_f0;
    lVar3 = *param_11;
    lVar13 = (longlong)iVar11 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar13);
    *(undefined8 *)(lVar3 + lVar13) = 0;
    *(int *)(lVar3 + 8 + lVar13) = local_e8;
    if ((longlong)local_e8 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_e8,0);
      memcpy((void *)*puVar1,pvVar4,(longlong)local_e8 * 2);
    }
  }
  if (local_f0 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_147d9144d:
  FUN_140b2399e(param_6);
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d91bea FUN_147d91bea body=336 status=ok
// SIG undefined FUN_147d91bea(void)

void FUN_147d91bea(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  float param_5,float *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [4];
  float local_94;
  longlong local_90;
  int local_88;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_4[1] - 2U < 0x7fffffff) {
    fVar3 = 0.0;
    lVar2 = 0;
    do {
      FUN_140002266(&local_90,&DAT_14aaec3c4,*(undefined2 *)(*param_4 + lVar2 * 2));
      local_a8 = *(undefined1 *)(param_1 + 0x168);
      local_78 = local_88 + -1;
      if (local_88 == 0) {
        local_78 = 0;
      }
      local_a0 = *(undefined8 *)(param_2 + 0x2e0);
      local_80 = local_90;
      FUN_140b23708(param_3,&local_80,&local_94,local_98);
      fVar3 = fVar3 + local_94;
      if (param_5 < fVar3) {
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      *param_6 = fVar3;
      *param_7 = (int)lVar2;
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
      iVar1 = (int)param_4[1] + -1;
      if ((int)param_4[1] == 0) {
        iVar1 = 0;
      }
    } while (lVar2 < iVar1);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d91d3c FUN_147d91d3c body=269 status=ok
// SIG undefined FUN_147d91d3c(void)

float FUN_147d91d3c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88 [4];
  float local_84;
  longlong local_80;
  int local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar3 = 0.0;
  if ((int)param_4[1] - 2U < 0x7fffffff) {
    lVar2 = 0;
    do {
      FUN_140002266(&local_80,&DAT_14aaec3c4,*(undefined2 *)(*param_4 + lVar2 * 2));
      local_98 = *(undefined1 *)(param_1 + 0x168);
      local_68 = local_78 + -1;
      if (local_78 == 0) {
        local_68 = 0;
      }
      local_90 = *(undefined8 *)(param_2 + 0x2e0);
      local_70 = local_80;
      FUN_140b23708(param_3,&local_70,&local_84,local_88);
      fVar3 = fVar3 + local_84;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
      iVar1 = (int)param_4[1] + -1;
      if ((int)param_4[1] == 0) {
        iVar1 = 0;
      }
    } while (lVar2 < iVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d91e82 FUN_147d91e82 body=172 status=ok
// SIG undefined FUN_147d91e82(void)

undefined4
FUN_147d91e82(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_3;
  local_28 = param_3[1];
  local_20 = param_3[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_40 = param_6;
  local_48 = param_5;
  uVar4 = (**(code **)(*param_1 + 0x378))(param_5,param_2,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d91f36 FUN_147d91f36 body=419 status=ok
// SIG undefined FUN_147d91f36(void)

void FUN_147d91f36(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  byte local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar3 = DAT_14c966e90;
  local_38 = DAT_14c966e88;
  local_40 = DAT_14c966e80;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_50 = 0;
    local_48 = 0;
    local_40 = DAT_14c966e80;
    local_38 = DAT_14c966e88;
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_50 = 0;
    local_48 = local_48 & 0xf0;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar5 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar4 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147da1a82(param_1 + 0x90,puVar5);
  if (iVar4 != 0) {
    FUN_147d922a0();
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d920e0 FUN_147d920e0 body=425 status=ok
// SIG undefined FUN_147d920e0(void)

void FUN_147d920e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  plVar3 = DAT_14c966e90;
  local_38 = DAT_14c966e88;
  local_40 = DAT_14c966e80;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_50 = 0;
    local_48 = 0x3f800000;
    local_40 = DAT_14c966e80;
    local_38 = DAT_14c966e88;
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_50 = 0;
    local_48 = 0x3f800000;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar5 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar4 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147da1cfc(param_1 + 0xa0,puVar5);
  if (iVar4 != 0) {
    FUN_147d922a0();
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d922a0 FUN_147d922a0 body=157 status=ok
// SIG undefined FUN_147d922a0(void)

void FUN_147d922a0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d92f22(&local_28);
  uVar1 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      FUN_140f44cf4(*(undefined8 *)(local_28 + (uVar1 & 0xffffffff) * 8),1);
      uVar1 = (longlong)(int)local_18;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_18 = (uint)uVar1;
        if ((longlong)local_20 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_28 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9233e FUN_147d9233e body=267 status=ok
// SIG undefined FUN_147d9233e(void)

void FUN_147d9233e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  FUN_147d9244a(param_1,local_28,plVar1);
  FUN_1457e92cc(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9244a FUN_147d9244a body=210 status=ok
// SIG undefined FUN_147d9244a(void)

void FUN_147d9244a(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar4 = FUN_144a846f6(param_2 & 0xffffffff);
  if ((cVar4 != '\0') && (lVar6 = (longlong)*(int *)(param_1 + 0x98), 0 < lVar6)) {
    uVar7 = lVar6 + 1;
    lVar6 = lVar6 * 0x28;
    do {
      lVar6 = lVar6 + -0x28;
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(ulonglong *)(lVar2 + lVar6) == param_2) {
        iVar1 = (int)param_3[1];
        lVar5 = (longlong)iVar1;
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_147da1b44(param_3,iVar1);
        }
        lVar3 = *param_3;
        *(undefined1 *)(lVar3 + 8 + lVar5 * 0x28) =
             *(undefined1 *)((undefined8 *)(lVar6 + lVar2) + 1);
        *(undefined8 *)(lVar3 + lVar5 * 0x28) = *(undefined8 *)(lVar6 + lVar2);
        *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28) = *(undefined8 *)(lVar2 + 0x10 + lVar6);
        *(undefined8 *)(lVar3 + 0x18 + lVar5 * 0x28) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        lVar2 = *(longlong *)(lVar2 + 0x20 + lVar6);
        *(longlong *)(lVar3 + 0x20 + lVar5 * 0x28) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 147d9251c FUN_147d9251c body=180 status=ok
// SIG undefined FUN_147d9251c(void)

void FUN_147d9251c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d925d2(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d925d2 FUN_147d925d2 body=197 status=ok
// SIG undefined FUN_147d925d2(void)

void FUN_147d925d2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0x28;
    do {
      FUN_140721fbe(param_2,lVar2);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar2 + lVar3);
      FUN_1409d9716(param_2,&local_38);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d92698 FUN_147d92698 body=267 status=ok
// SIG undefined FUN_147d92698(void)

void FUN_147d92698(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  FUN_147d927a4(param_1,local_28,plVar1);
  FUN_1457e927f(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d927a4 FUN_147d927a4 body=210 status=ok
// SIG undefined FUN_147d927a4(void)

void FUN_147d927a4(longlong param_1,ulonglong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar4 = FUN_144a846f6(param_2 & 0xffffffff);
  if ((cVar4 != '\0') && (lVar6 = (longlong)*(int *)(param_1 + 0xa8), 0 < lVar6)) {
    uVar7 = lVar6 + 1;
    lVar6 = lVar6 * 0x28;
    do {
      lVar6 = lVar6 + -0x28;
      lVar2 = *(longlong *)(param_1 + 0xa0);
      if (*(ulonglong *)(lVar2 + lVar6) == param_2) {
        iVar1 = (int)param_3[1];
        lVar5 = (longlong)iVar1;
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_147da1dbc(param_3,iVar1);
        }
        lVar3 = *param_3;
        *(undefined4 *)(lVar3 + 8 + lVar5 * 0x28) =
             *(undefined4 *)((undefined8 *)(lVar6 + lVar2) + 1);
        *(undefined8 *)(lVar3 + lVar5 * 0x28) = *(undefined8 *)(lVar6 + lVar2);
        *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28) = *(undefined8 *)(lVar2 + 0x10 + lVar6);
        *(undefined8 *)(lVar3 + 0x18 + lVar5 * 0x28) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        lVar2 = *(longlong *)(lVar2 + 0x20 + lVar6);
        *(longlong *)(lVar3 + 0x20 + lVar5 * 0x28) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 147d92876 FUN_147d92876 body=180 status=ok
// SIG undefined FUN_147d92876(void)

void FUN_147d92876(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d9292c(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9292c FUN_147d9292c body=92 status=ok
// SIG undefined FUN_147d9292c(void)

void FUN_147d9292c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar1 = (longlong)*(int *)(param_1 + 0xa8) * 0x28;
    do {
      FUN_140721fbe(param_2,lVar2);
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 147d92988 FUN_147d92988 body=74 status=ok
// SIG undefined FUN_147d92988(void)

void FUN_147d92988(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_140389788();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  *param_3 = lVar2;
  return;
}



// FUNCTION 147d929d8 FUN_147d929d8 body=404 status=ok
// SIG undefined FUN_147d929d8(void)

void FUN_147d929d8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  byte local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  plVar3 = DAT_14c966e90;
  local_30 = DAT_14c966e88;
  local_38 = DAT_14c966e80;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = DAT_14c966e80;
    local_30 = DAT_14c966e88;
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_48 = 0;
    local_40 = local_40 & 0xf0;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d92b6e(param_1,puVar4,local_4c != 0);
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d92b6e FUN_147d92b6e body=160 status=ok
// SIG undefined FUN_147d92b6e(void)

void FUN_147d92b6e(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x98);
  if (0 < (longlong)uVar4) {
    plVar3 = (longlong *)(param_1 + 0x90);
    lVar5 = uVar4 * 0x28 + -0x18;
    do {
      lVar1 = *plVar3;
      if (((*(longlong *)(lVar1 + -0x10 + lVar5) == *param_2) &&
          (*(longlong *)(lVar1 + lVar5) == param_2[2])) &&
         (((*(byte *)(param_2 + 1) ^ *(byte *)(lVar1 + -8 + lVar5)) & 0xf) == 0)) {
        FUN_147da1bd8(plVar3,(int)uVar4 + -1);
        FUN_147da1c4e(plVar3);
      }
      lVar5 = lVar5 + -0x28;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
  }
  if (param_3 != '\0') {
    FUN_147d922a0();
    return;
  }
  return;
}



// FUNCTION 147d92c14 FUN_147d92c14 body=410 status=ok
// SIG undefined FUN_147d92c14(void)

void FUN_147d92c14(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  plVar3 = DAT_14c966e90;
  local_30 = DAT_14c966e88;
  local_38 = DAT_14c966e80;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = DAT_14c966e90;
  if (DAT_14c966e90 == (longlong *)0x0) {
    local_48 = 0;
    local_40 = 0x3f800000;
    local_38 = DAT_14c966e80;
    local_30 = DAT_14c966e88;
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
    local_48 = 0;
    local_40 = 0x3f800000;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar4 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d92db0(param_1,puVar4,local_4c != 0);
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d92db0 FUN_147d92db0 body=147 status=ok
// SIG undefined FUN_147d92db0(void)

void FUN_147d92db0(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0xa8);
  if (0 < (longlong)uVar3) {
    plVar2 = (longlong *)(param_1 + 0xa0);
    lVar4 = uVar3 * 0x28 + -0x18;
    do {
      if ((*(longlong *)(*plVar2 + -0x10 + lVar4) == *param_2) &&
         (*(longlong *)(*plVar2 + lVar4) == param_2[2])) {
        FUN_147da1e50(plVar2,(int)uVar3 + -1);
        FUN_147da1ec6(plVar2);
      }
      lVar4 = lVar4 + -0x28;
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  if (param_3 != '\0') {
    FUN_147d922a0();
    return;
  }
  return;
}



// FUNCTION 147d92e5a FUN_147d92e5a body=97 status=ok
// SIG undefined FUN_147d92e5a(void)

void FUN_147d92e5a(longlong param_1)

{
  FUN_147da075e(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  FUN_147da0e62(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  FUN_147da1587(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0,1);
  return;
}



// FUNCTION 147d92f22 FUN_147d92f22 body=107 status=ok
// SIG undefined FUN_147d92f22(void)

longlong * FUN_147d92f22(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140415bba();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147d92f8e FUN_147d92f8e body=22 status=ok
// SIG undefined FUN_147d92f8e(void)

void FUN_147d92f8e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_5;
  return;
}



// FUNCTION 147d92fa4 FUN_147d92fa4 body=174 status=ok
// SIG undefined FUN_147d92fa4(void)

longlong * FUN_147d92fa4(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  (**(code **)(*param_1 + 0x160))();
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 8);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x10),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = (undefined4 *)(param_2 + 0x14);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147d93052 FUN_147d93052 body=11 status=ok
// SIG undefined FUN_147d93052(void)

undefined4 FUN_147d93052(longlong param_1,uint param_2)

{
  return CONCAT31((int3)(~*(uint *)(param_1 + 0x14) >> 8),
                  (param_2 & ~*(uint *)(param_1 + 0x14)) == 0);
}



// FUNCTION 147d9305e FUN_147d9305e body=186 status=ok
// SIG undefined FUN_147d9305e(void)

undefined8 FUN_147d9305e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_1 + 8,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1400021e4(param_1,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s::%s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9318a FUN_147d9318a body=78 status=ok
// SIG undefined FUN_147d9318a(void)

void FUN_147d9318a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147d931ce;
  }
  lVar2 = 0;
LAB_147d931ce:
  *param_3 = lVar2;
  return;
}



// FUNCTION 147d931d8 FUN_147d931d8 body=156 status=ok
// SIG undefined FUN_147d931d8(void)

void FUN_147d931d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d93276(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d93276 FUN_147d93276 body=612 status=ok
// SIG undefined FUN_147d93276(void)

void FUN_147d93276(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (*(int *)(param_1 + 0x2c4) < *(int *)(param_1 + 0x298)) {
    uVar6 = (uint)((ulonglong)param_2 >> 0x10);
    uVar8 = (uint)param_2 & 0xffff;
    lVar7 = param_1 + 0x2c8;
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2d0);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x2d8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar9 * 0x28);
        if (*plVar1 == param_2) {
          if ((((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) != 0) &&
             (bVar2 = *(byte *)(plVar1 + 3), *(byte *)(plVar1 + 3) = bVar2 ^ 1, (bVar2 & 1) != 0)) {
            uVar6 = *(uint *)(param_1 + 0x1e8);
            if (0 < (longlong)(int)uVar6) {
              iVar9 = -uVar6;
              uVar10 = (longlong)(int)uVar6;
              do {
                lVar7 = *(longlong *)(param_1 + 0x1e0);
                if (*(longlong *)(lVar7 + -8 + uVar10 * 8) == param_2) {
                  if (uVar10 != uVar6) {
                    iVar5 = uVar6 + iVar9;
                    if (0 < iVar5) {
                      iVar5 = 1;
                    }
                    memmove((void *)(lVar7 + uVar10 * 8 + -8),
                            (void *)(lVar7 + (longlong)(int)(uVar6 - iVar5) * 8),
                            (longlong)iVar5 << 3);
                    uVar6 = *(uint *)(param_1 + 0x1e8);
                  }
                  uVar6 = uVar6 - 1;
                  *(uint *)(param_1 + 0x1e8) = uVar6;
                }
                iVar9 = iVar9 + 1;
                bVar4 = 1 < uVar10;
                uVar10 = uVar10 - 1;
              } while (bVar4);
            }
            goto LAB_147d93333;
          }
          break;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
    }
    FUN_140721fbe(param_1 + 0x1e0,&local_40);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    iVar9 = *(int *)(param_1 + 0x1e8);
    uVar10 = (ulonglong)iVar9;
    if ((longlong)uVar10 < 1) {
LAB_147d9340f:
      *(uint *)(param_1 + 0x1e8) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x1ec) < iVar9 + 1U) {
        FUN_1446f84a2(plVar1,iVar9);
      }
      *(longlong *)(*plVar1 + (longlong)iVar9 * 8) = param_2;
    }
    else {
      bVar4 = false;
      uVar11 = uVar10;
      do {
        iVar9 = (int)uVar11;
        lVar7 = *plVar1;
        uVar12 = uVar10;
        while (*(longlong *)(lVar7 + -8 + uVar12 * 8) != param_2) {
          bVar3 = uVar12 < 2;
          uVar12 = uVar12 - 1;
          if (bVar3) {
            if (!bVar4) goto LAB_147d9340f;
            goto LAB_147d93333;
          }
        }
        if ((uVar11 & 0xffffffff) != uVar12) {
          iVar5 = iVar9 - (int)uVar12;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove((void *)(lVar7 + uVar12 * 8 + -8),(void *)(lVar7 + (longlong)(iVar9 - iVar5) * 8),
                  (longlong)iVar5 << 3);
          iVar9 = *(int *)(param_1 + 0x1e8);
        }
        uVar10 = uVar12 - 1;
        uVar11 = (ulonglong)(iVar9 - 1U);
        *(uint *)(param_1 + 0x1e8) = iVar9 - 1U;
        bVar4 = true;
      } while (1 < uVar12);
    }
  }
LAB_147d93333:
  local_48 = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d934dc FUN_147d934dc body=232 status=ok
// SIG undefined FUN_147d934dc(void)

void FUN_147d934dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
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
  local_50 = (undefined4)local_38;
  uStack_4c = local_38._4_4_;
  uStack_48 = (undefined4)uStack_30;
  uStack_44 = uStack_30._4_4_;
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FUN_147d935c6(param_1,&local_50);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d935c6 FUN_147d935c6 body=254 status=ok
// SIG undefined FUN_147d935c6(void)

void FUN_147d935c6(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a44060();
  local_28 = 0x3f8000003e4ccccd;
  local_20 = 0x3f800000;
  local_1c = 0;
  local_40 = *param_2;
  local_38 = param_2[1];
  local_30 = param_2[2];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  cVar3 = FUN_1405af7e2(param_1,&local_40,&local_28);
  if (cVar3 != '\0') {
    local_1c = local_1c ^ 1;
    local_58 = *param_2;
    local_50 = param_2[1];
    local_48 = param_2[2];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    FUN_147d94030(param_1,&local_58,&local_28);
  }
  puVar2 = (undefined8 *)param_2[2];
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d936d6 FUN_147d936d6 body=229 status=ok
// SIG undefined FUN_147d936d6(void)

void FUN_147d936d6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
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
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d937bc FUN_147d937bc body=159 status=ok
// SIG undefined FUN_147d937bc(void)

void FUN_147d937bc(undefined8 param_1,longlong param_2)

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
  FUN_147d941f2(param_1,local_1c,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d93860 FUN_147d93860 body=891 status=ok
// SIG undefined FUN_147d93860(void)

ulonglong FUN_147d93860(longlong *param_1,uint param_2,int param_3,longlong *param_4,float param_5)

{
  float fVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0e50c) && (FUN_144b3d300(&DAT_14cb0e50c), DAT_14cb0e50c == -1)) {
    uVar8 = FUN_14118da1c();
    DAT_14cb0e508 = FUN_14054d46e(uVar8,L"DisableTouch");
    _Init_thread_footer(&DAT_14cb0e50c);
  }
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (DAT_14cb0e508 != '\0') goto LAB_147d938c6;
  if (10 < param_2) {
    uVar9 = 0;
    goto LAB_147d938c6;
  }
  uVar11 = (ulonglong)param_2;
  param_1[uVar11 * 3 + 5] = *param_4;
  param_1[uVar11 * 3 + 6] = param_4[1];
  dVar3 = 0.0;
  if (param_3 != 5) {
    dVar3 = (double)param_5;
  }
  plVar12 = param_1 + uVar11 * 3 + 5;
  param_1[uVar11 * 3 + 7] = (longlong)dVar3;
  uVar8 = (&DAT_14c965af0)[uVar11 * 3];
  uVar4 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar10 = (uint)uVar8 & 0xffff;
  plVar5 = (longlong *)
           FUN_1403e802c(param_1 + 0x5c,
                         ((uint)uVar8 << 0x10 | uVar10) + (int)((ulonglong)uVar8 >> 0x20) +
                         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),
                         &DAT_14c965af0 + uVar11 * 3);
  plVar13 = param_1 + 0x92;
  *(int *)(param_1 + 0x92) = (int)param_1[0x92] + 1;
  local_88 = plVar13;
  local_80 = plVar12;
  if (param_3 == 5) {
    plVar13 = plVar5 + 0x13;
    uVar11 = (ulonglong)(int)plVar5[0x14];
    uVar4 = (int)plVar5[0x14] + 1;
    *(uint *)(plVar5 + 0x14) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xa4) < uVar4) {
LAB_147d93a9c:
      FUN_1447808da(plVar13,uVar11 & 0xffffffff);
    }
LAB_147d93aa7:
    *(int *)(*plVar13 + uVar11 * 4) = (int)param_1[0x92];
    FUN_147da205c(param_1 + 0x26,local_74);
  }
  else {
    if (param_3 != 0) {
      plVar13 = plVar5 + 0x15;
      uVar11 = (ulonglong)(int)plVar5[0x16];
      uVar4 = (int)plVar5[0x16] + 1;
      *(uint *)(plVar5 + 0x16) = uVar4;
      if (*(uint *)((longlong)plVar5 + 0xb4) < uVar4) goto LAB_147d93a9c;
      goto LAB_147d93aa7;
    }
    iVar2 = (int)plVar5[0x12];
    *(uint *)(plVar5 + 0x12) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar5 + 0x94) < iVar2 + 1U) {
      FUN_1447808da(plVar5 + 0x11,iVar2);
    }
    *(int *)(plVar5[0x11] + (longlong)iVar2 * 4) = (int)param_1[0x92];
    FUN_147da205c(param_1 + 0x26,local_74);
    if ((*(byte *)((longlong)plVar5 + 0x34) & 2) == 0) {
      lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      dVar3 = *(double *)(lVar6 + 0x6e0);
      fVar1 = *(float *)(plVar5 + 6);
      plVar7 = (longlong *)FUN_140389788();
      lVar6 = plVar7[0x22];
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 1000))(plVar7);
        lVar6 = plVar7[0x22];
      }
      if ((float)dVar3 - fVar1 < *(float *)(lVar6 + 0x88)) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        iVar2 = (int)plVar5[0x18];
        *(uint *)(plVar5 + 0x18) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc4) < iVar2 + 1U) {
          FUN_1447808da(plVar5 + 0x17,iVar2);
        }
        *(int *)(plVar5[0x17] + (longlong)iVar2 * 4) = (int)*plVar13;
        local_88 = plVar13;
        local_80 = plVar12;
        FUN_147da205c(param_1 + 0x26,local_74);
      }
      *(float *)(plVar5 + 6) = (float)dVar3;
    }
  }
  *(char *)((longlong)plVar5 + 0x35) = *(char *)((longlong)plVar5 + 0x35) + '\x01';
  lVar6 = param_4[1];
  *plVar5 = *param_4;
  plVar5[1] = lVar6;
  plVar5[2] = 0;
  plVar5[5] = 0;
  *(int *)(plVar5 + 3) = (int)*plVar5;
  *(undefined4 *)((longlong)plVar5 + 0x1c) = *(undefined4 *)((longlong)plVar5 + 4);
  *(int *)(plVar5 + 4) = (int)plVar5[1];
  *(undefined4 *)((longlong)plVar5 + 0x24) = *(undefined4 *)((longlong)plVar5 + 0xc);
  plVar5[0x1d] = 0;
  *(int *)(plVar5 + 0x1b) = (int)*plVar5;
  *(undefined4 *)((longlong)plVar5 + 0xdc) = *(undefined4 *)((longlong)plVar5 + 4);
  *(int *)(plVar5 + 0x1c) = (int)plVar5[1];
  *(undefined4 *)((longlong)plVar5 + 0xe4) = *(undefined4 *)((longlong)plVar5 + 0xc);
LAB_147d938c6:
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 147d93bdc FUN_147d93bdc body=877 status=ok
// SIG undefined FUN_147d93bdc(void)

undefined8
FUN_147d93bdc(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = param_1 + 0x2e0;
  uVar2 = (uint)((ulonglong)DAT_14c965a88 >> 0x10);
  uVar5 = (uint)DAT_14c965a88 & 0xffff;
  lVar3 = FUN_1403e802c(lVar4,((uint)DAT_14c965a88 << 0x10 | uVar5) +
                              (int)((ulonglong)DAT_14c965a88 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),&DAT_14c965a88);
  *(double *)(lVar3 + 0xd8) = *param_2 + *(double *)(lVar3 + 0xd8);
  *(double *)(lVar3 + 0xe0) = param_2[1] + *(double *)(lVar3 + 0xe0);
  *(double *)(lVar3 + 0xe8) = param_2[2] + *(double *)(lVar3 + 0xe8);
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  iVar1 = *(int *)(lVar3 + 0xb0);
  *(uint *)(lVar3 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xb4) < iVar1 + 1U) {
    FUN_1447808da(lVar3 + 0xa8,iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + (longlong)iVar1 * 4) =
       *(undefined4 *)(param_1 + 0x490);
  *(char *)(lVar3 + 0x35) = *(char *)(lVar3 + 0x35) + '\x01';
  uVar2 = (uint)((ulonglong)DAT_14c965aa0 >> 0x10);
  uVar5 = (uint)DAT_14c965aa0 & 0xffff;
  lVar3 = FUN_1403e802c(lVar4,((uint)DAT_14c965aa0 << 0x10 | uVar5) +
                              (int)((ulonglong)DAT_14c965aa0 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),&DAT_14c965aa0);
  *(double *)(lVar3 + 0xd8) = *param_3 + *(double *)(lVar3 + 0xd8);
  *(double *)(lVar3 + 0xe0) = param_3[1] + *(double *)(lVar3 + 0xe0);
  *(double *)(lVar3 + 0xe8) = param_3[2] + *(double *)(lVar3 + 0xe8);
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  iVar1 = *(int *)(lVar3 + 0xb0);
  *(uint *)(lVar3 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xb4) < iVar1 + 1U) {
    FUN_1447808da(lVar3 + 0xa8,iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + (longlong)iVar1 * 4) =
       *(undefined4 *)(param_1 + 0x490);
  *(char *)(lVar3 + 0x35) = *(char *)(lVar3 + 0x35) + '\x01';
  uVar2 = (uint)((ulonglong)DAT_14c965ab8 >> 0x10);
  uVar5 = (uint)DAT_14c965ab8 & 0xffff;
  lVar3 = FUN_1403e802c(lVar4,((uint)DAT_14c965ab8 << 0x10 | uVar5) +
                              (int)((ulonglong)DAT_14c965ab8 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),&DAT_14c965ab8);
  *(double *)(lVar3 + 0xd8) = *param_4 + *(double *)(lVar3 + 0xd8);
  *(double *)(lVar3 + 0xe0) = param_4[1] + *(double *)(lVar3 + 0xe0);
  *(double *)(lVar3 + 0xe8) = param_4[2] + *(double *)(lVar3 + 0xe8);
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  iVar1 = *(int *)(lVar3 + 0xb0);
  *(uint *)(lVar3 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(lVar3 + 0xb4) < iVar1 + 1U) {
    FUN_1447808da(lVar3 + 0xa8,iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + (longlong)iVar1 * 4) =
       *(undefined4 *)(param_1 + 0x490);
  *(char *)(lVar3 + 0x35) = *(char *)(lVar3 + 0x35) + '\x01';
  uVar2 = (uint)((ulonglong)DAT_14c965ad0 >> 0x10);
  uVar5 = (uint)DAT_14c965ad0 & 0xffff;
  lVar4 = FUN_1403e802c(lVar4,((uint)DAT_14c965ad0 << 0x10 | uVar5) +
                              (int)((ulonglong)DAT_14c965ad0 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4),&DAT_14c965ad0);
  *(double *)(lVar4 + 0xd8) = *param_5 + *(double *)(lVar4 + 0xd8);
  *(double *)(lVar4 + 0xe0) = param_5[1] + *(double *)(lVar4 + 0xe0);
  *(double *)(lVar4 + 0xe8) = param_5[2] + *(double *)(lVar4 + 0xe8);
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  iVar1 = *(int *)(lVar4 + 0xb0);
  *(uint *)(lVar4 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(lVar4 + 0xb4) < iVar1 + 1U) {
    FUN_1447808da(lVar4 + 0xa8,iVar1);
  }
  lVar3 = *(longlong *)(lVar4 + 0xa8);
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x490);
  *(char *)(lVar4 + 0x35) = *(char *)(lVar4 + 0x35) + '\x01';
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 147d93f4a FUN_147d93f4a body=230 status=ok
// SIG undefined FUN_147d93f4a(void)

undefined8 FUN_147d93f4a(longlong param_1,undefined8 *param_2,int param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  double *pdVar7;
  uint uVar8;
  double dVar9;
  
  uVar4 = *param_2;
  uVar6 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar8 = (uint)uVar4 & 0xffff;
  pdVar7 = (double *)
           FUN_1403e802c(param_1 + 0x2e0,
                         ((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4),param_2);
  dVar9 = (double)param_4;
  pdVar7[0x1b] = dVar9;
  *pdVar7 = dVar9;
  pdVar7[3] = dVar9;
  *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + 1;
  iVar3 = *(int *)(pdVar7 + (longlong)param_3 * 2 + 0x12);
  *(uint *)(pdVar7 + (longlong)param_3 * 2 + 0x12) = iVar3 + 1U;
  if (*(uint *)((longlong)pdVar7 + (longlong)param_3 * 0x10 + 0x94) < iVar3 + 1U) {
    FUN_1447808da(pdVar7 + (longlong)param_3 * 2 + 0x11,iVar3);
  }
  *(undefined4 *)((longlong)pdVar7[(longlong)param_3 * 2 + 0x11] + (longlong)iVar3 * 4) =
       *(undefined4 *)(param_1 + 0x490);
  plVar5 = (longlong *)param_2[2];
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
  return 1;
}



// FUNCTION 147d94030 FUN_147d94030 body=162 status=ok
// SIG undefined FUN_147d94030(void)

void FUN_147d94030(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  iVar4 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    lVar10 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar10) == *param_2) {
        uVar7 = param_3[1];
        uVar8 = param_3[2];
        uVar9 = param_3[3];
        puVar3 = (undefined4 *)(lVar5 + 8 + lVar10);
        *puVar3 = *param_3;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar10);
  }
  if (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x224)) {
    FUN_140f44ee6(param_1 + 0x1f0);
    FUN_140f45030(param_1 + 0x1f0);
  }
  plVar6 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147d940c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d940d2 FUN_147d940d2 body=142 status=ok
// SIG undefined FUN_147d940d2(void)

void FUN_147d940d2(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  uVar2 = (undefined4)DAT_14c964cb0;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x3f8000003e4ccccd;
  local_10 = 0x3f800000;
  local_c = 0;
  local_30 = (undefined4)DAT_14c964cb0;
  uStack_2c = DAT_14c964cb0._4_4_;
  uStack_28 = (undefined4)DAT_14c964cb8;
  uStack_24 = DAT_14c964cb8._4_4_;
  local_20 = DAT_14c964cc0;
  if (DAT_14c964cc0 != 0) {
    LOCK();
    *(int *)(DAT_14c964cc0 + 8) = *(int *)(DAT_14c964cc0 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1405af7e2(uVar2,&local_30,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = local_18._4_4_;
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147d94162 FUN_147d94162 body=142 status=ok
// SIG undefined FUN_147d94162(void)

void FUN_147d94162(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  uVar2 = (undefined4)DAT_14c964cc8;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x3f8000003e4ccccd;
  local_10 = 0x3f800000;
  local_c = 0;
  local_30 = (undefined4)DAT_14c964cc8;
  uStack_2c = DAT_14c964cc8._4_4_;
  uStack_28 = (undefined4)DAT_14c964cd0;
  uStack_24 = DAT_14c964cd0._4_4_;
  local_20 = DAT_14c964cd8;
  if (DAT_14c964cd8 != 0) {
    LOCK();
    *(int *)(DAT_14c964cd8 + 8) = *(int *)(DAT_14c964cd8 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1405af7e2(uVar2,&local_30,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = local_18._4_4_;
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 147d941f2 FUN_147d941f2 body=393 status=ok
// SIG undefined FUN_147d941f2(void)

void FUN_147d941f2(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0x3f8000003e4ccccd;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_58 = (undefined4)DAT_14c964cb0;
  uStack_54 = DAT_14c964cb0._4_4_;
  uStack_50 = (undefined4)DAT_14c964cb8;
  uStack_4c = DAT_14c964cb8._4_4_;
  local_48 = DAT_14c964cc0;
  if (DAT_14c964cc0 != 0) {
    LOCK();
    *(int *)(DAT_14c964cc0 + 8) = *(int *)(DAT_14c964cc0 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1405af7e2(param_1,&local_58,&local_40);
  if (cVar1 != '\0') {
    local_40 = CONCAT44(param_2,(undefined4)local_40);
    local_70 = (undefined4)DAT_14c964cb0;
    uStack_6c = DAT_14c964cb0._4_4_;
    uStack_68 = (undefined4)DAT_14c964cb8;
    uStack_64 = DAT_14c964cb8._4_4_;
    local_60 = DAT_14c964cc0;
    if (DAT_14c964cc0 != 0) {
      LOCK();
      *(int *)(DAT_14c964cc0 + 8) = *(int *)(DAT_14c964cc0 + 8) + 1;
      UNLOCK();
    }
    FUN_147d94030(param_1,&local_70,&local_40);
  }
  local_88 = (undefined4)DAT_14c964cc8;
  uStack_84 = DAT_14c964cc8._4_4_;
  uStack_80 = (undefined4)DAT_14c964cd0;
  uStack_7c = DAT_14c964cd0._4_4_;
  local_78 = DAT_14c964cd8;
  if (DAT_14c964cd8 != 0) {
    LOCK();
    *(int *)(DAT_14c964cd8 + 8) = *(int *)(DAT_14c964cd8 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1405af7e2(param_1,&local_88,&local_40);
  if (cVar1 != '\0') {
    local_40 = CONCAT44(param_3,(undefined4)local_40);
    local_a0 = (undefined4)DAT_14c964cc8;
    uStack_9c = DAT_14c964cc8._4_4_;
    uStack_98 = (undefined4)DAT_14c964cd0;
    uStack_94 = DAT_14c964cd0._4_4_;
    local_90 = DAT_14c964cd8;
    if (DAT_14c964cd8 != 0) {
      LOCK();
      *(int *)(DAT_14c964cd8 + 8) = *(int *)(DAT_14c964cd8 + 8) + 1;
      UNLOCK();
    }
    FUN_147d94030(param_1,&local_a0,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9437c FUN_147d9437c body=237 status=ok
// SIG undefined FUN_147d9437c(void)

void FUN_147d9437c(undefined8 param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147da1a82(&DAT_14cb0e4b8,param_1);
  FUN_147d92f22(&local_28);
  uVar6 = (ulonglong)local_18;
  lVar4 = local_28;
  iVar3 = local_20;
  if ((int)local_18 < local_20 && -1 < (int)local_18) {
    do {
      lVar2 = *(longlong *)(lVar4 + (uVar6 & 0xffffffff) * 8);
      uVar5 = (uint)uVar6;
      if (*(int *)(lVar2 + 0x248) != *(int *)(lVar2 + 0x274)) {
        FUN_147da250a(lVar2 + 0x240);
        FUN_147da264e(lVar2 + 0x240);
        lVar4 = local_28;
        iVar3 = local_20;
        uVar5 = local_18;
      }
      pbVar1 = (byte *)(*(longlong *)(lVar4 + (longlong)(int)uVar5 * 8) + 0x334);
      *pbVar1 = *pbVar1 & 0xfe;
      uVar6 = (longlong)(int)uVar5;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_18 = (uint)uVar6;
        if ((longlong)iVar3 <= (longlong)uVar6) break;
      } while (*(longlong *)(lVar4 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_18 < iVar3));
  }
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d9446a FUN_147d9446a body=237 status=ok
// SIG undefined FUN_147d9446a(void)

void FUN_147d9446a(undefined8 param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147da1cfc(&DAT_14cb0e4c8,param_1);
  FUN_147d92f22(&local_28);
  uVar6 = (ulonglong)local_18;
  lVar4 = local_28;
  iVar3 = local_20;
  if ((int)local_18 < local_20 && -1 < (int)local_18) {
    do {
      lVar2 = *(longlong *)(lVar4 + (uVar6 & 0xffffffff) * 8);
      uVar5 = (uint)uVar6;
      if (*(int *)(lVar2 + 0x298) != *(int *)(lVar2 + 0x2c4)) {
        FUN_147da276a(lVar2 + 0x290);
        FUN_147da28ae(lVar2 + 0x290);
        lVar4 = local_28;
        iVar3 = local_20;
        uVar5 = local_18;
      }
      pbVar1 = (byte *)(*(longlong *)(lVar4 + (longlong)(int)uVar5 * 8) + 0x334);
      *pbVar1 = *pbVar1 & 0xfe;
      uVar6 = (longlong)(int)uVar5;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_18 = (uint)uVar6;
        if ((longlong)iVar3 <= (longlong)uVar6) break;
      } while (*(longlong *)(lVar4 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_18 < iVar3));
  }
  if (lVar4 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d94558 FUN_147d94558 body=63 status=ok
// SIG undefined FUN_147d94558(void)

longlong FUN_147d94558(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147da1b44(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_147da2b5e(lVar2);
  return lVar2;
}



// FUNCTION 147d94598 FUN_147d94598 body=258 status=ok
// SIG undefined FUN_147d94598(void)

undefined8 FUN_147d94598(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_1 + 8,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_1446f470e(local_68,L"Speech",1);
  FUN_1400021e4(local_68,&local_60);
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  FUN_140002266(&local_40,L"%s_%s",puVar2,puVar1);
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_1446f470e(param_2,puVar1,1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9469c FUN_147d9469c body=1598 status=ok
// SIG undefined FUN_147d9469c(void)

void FUN_147d9469c(longlong param_1,longlong param_2,byte *param_3,char param_4,undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  byte local_1c0;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  byte local_178;
  undefined4 local_170;
  uint uStack_16c;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_148;
  longlong lStack_140;
  byte local_138;
  byte *local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *plStack_118;
  undefined1 local_110;
  byte local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  bVar7 = *(byte *)(param_2 + 8);
  if ((bVar7 & 4) == 0) {
LAB_147d946d8:
    if ((bVar7 & 2) != 0) {
      cVar8 = FUN_1417f7d46(param_1);
      if (cVar8 == '\0') goto LAB_147d94759;
      bVar7 = *(byte *)(param_2 + 8);
    }
    if ((bVar7 & 1) != 0) {
      cVar8 = FUN_14011b712(param_1);
      if (cVar8 == '\0') goto LAB_147d94759;
      bVar7 = *(byte *)(param_2 + 8);
    }
    if (((bVar7 & 8) == 0) || (cVar8 = FUN_1417f7de2(param_1), cVar8 != '\0')) {
      plVar2 = (longlong *)(param_1 + 0x480);
      bVar7 = param_3[2];
      local_60 = *(undefined8 *)(param_2 + 0x10);
      local_58 = *(undefined8 *)(param_2 + 0x18);
      local_50 = *(longlong *)(param_2 + 0x20);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      local_1c8 = param_5;
      cVar8 = FUN_14011b9d8(param_1,&local_60,bVar7,plVar2);
      if (cVar8 != '\0') {
        bVar7 = *(byte *)(param_2 + 8);
        local_98 = *(undefined8 *)(param_2 + 0x10);
        local_90 = *(undefined8 *)(param_2 + 0x18);
        local_88 = *(longlong *)(param_2 + 0x20);
        if (local_88 != 0) {
          LOCK();
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
          UNLOCK();
        }
        local_1c0 = (bVar7 & 8) >> 3;
        local_1c8 = CONCAT71(local_1c8._1_7_,(bVar7 & 4) >> 2);
        FUN_146a69f34();
        uVar10 = (ulonglong)(int)DAT_14cb0e590;
        if (0 < (longlong)uVar10) {
          do {
            iVar9 = FUN_1469ba826();
            if (iVar9 == 3) {
              FUN_147da2bcc();
            }
            else if (iVar9 == 2) {
              bVar4 = false;
              goto LAB_147d94906;
            }
            bVar4 = 1 < uVar10;
            uVar10 = uVar10 - 1;
          } while (bVar4);
        }
        local_108 = param_3[2];
        if ((param_4 == '\0') || ((*param_3 & 2) != 0)) {
          local_168 = *(undefined8 *)(param_3 + 0x10);
          lStack_160 = *(longlong *)(param_3 + 0x18);
          if (lStack_160 != 0) {
            LOCK();
            *(int *)(lStack_160 + 8) = *(int *)(lStack_160 + 8) + 1;
            UNLOCK();
          }
          local_158 = *(undefined8 *)(param_3 + 0x20);
          lStack_150 = *(longlong *)(param_3 + 0x28);
          if (lStack_150 != 0) {
            LOCK();
            *(int *)(lStack_150 + 8) = *(int *)(lStack_150 + 8) + 1;
            UNLOCK();
          }
          local_148 = *(undefined8 *)(param_3 + 0x30);
          lStack_140 = *(longlong *)(param_3 + 0x38);
          if (lStack_140 == 0) {
            lStack_140 = 0;
          }
          else {
            LOCK();
            *(int *)(lStack_140 + 8) = *(int *)(lStack_140 + 8) + 1;
            UNLOCK();
          }
          local_178 = param_3[0x40];
        }
        else {
          local_178 = 0;
          lStack_140 = 0;
          local_148 = 0;
          lStack_150 = 0;
          local_158 = 0;
          lStack_160 = 0;
          local_168 = 0;
        }
        local_170 = *(undefined4 *)*plVar2;
        uStack_16c = DAT_14cb0e590;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_128 = local_80;
        local_120 = local_78;
        plStack_118 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
        }
        local_110 = local_68;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_138 = local_178;
        local_130 = param_3;
        FUN_14128edda(&local_1a8);
        local_1ac = *(int *)(param_1 + 0x488) - 1;
        if (1 < *(int *)(param_1 + 0x488)) {
          uVar10 = (ulonglong)local_1ac;
          uVar12 = 0;
          do {
            uVar6 = DAT_14cb0e590;
            local_170 = *(undefined4 *)(*plVar2 + uVar12 * 4);
            lVar11 = (longlong)(int)DAT_14cb0e590;
            DAT_14cb0e590 = DAT_14cb0e590 + 1;
            if (DAT_14cb0e594 < DAT_14cb0e590) {
              FUN_147da2d50(&DAT_14cb0e588,uVar6);
            }
            FUN_147da2c3e(lVar11 * 0xd8 + DAT_14cb0e588,&local_170);
            uVar12 = uVar12 + 1;
          } while (uVar10 != uVar12);
        }
        uVar6 = DAT_14cb0e590;
        local_170 = *(undefined4 *)(*plVar2 + (longlong)(int)local_1ac * 4);
        lVar11 = (longlong)(int)DAT_14cb0e590;
        DAT_14cb0e590 = DAT_14cb0e590 + 1;
        if (DAT_14cb0e594 < DAT_14cb0e590) {
          FUN_147da2d50(&DAT_14cb0e588,uVar6);
        }
        lVar5 = DAT_14cb0e588;
        lVar11 = lVar11 * 0xd8;
        *(ulonglong *)(DAT_14cb0e588 + lVar11) = CONCAT44(uStack_16c,local_170);
        *(undefined8 *)(lVar5 + 8 + lVar11) = local_168;
        *(longlong *)(lVar5 + 0x10 + lVar11) = lStack_160;
        local_168 = 0;
        lStack_160 = 0;
        *(undefined8 *)(lVar5 + 0x18 + lVar11) = local_158;
        *(longlong *)(lVar5 + 0x20 + lVar11) = lStack_150;
        local_158 = 0;
        lStack_150 = 0;
        *(undefined8 *)(lVar5 + 0x28 + lVar11) = local_148;
        *(longlong *)(lVar5 + 0x30 + lVar11) = lStack_140;
        local_148 = 0;
        lStack_140 = 0;
        *(byte *)(lVar5 + 0x38 + lVar11) = local_138;
        *(byte **)(lVar5 + 0x40 + lVar11) = local_130;
        *(undefined8 *)(lVar5 + 0x48 + lVar11) = local_128;
        *(undefined8 *)(lVar5 + 0x50 + lVar11) = local_120;
        *(longlong **)(lVar5 + 0x58 + lVar11) = plStack_118;
        local_120 = 0;
        plStack_118 = (longlong *)0x0;
        *(undefined1 *)(lVar5 + 0x60 + lVar11) = local_110;
        *(byte *)(lVar5 + 0x68 + lVar11) = local_108;
        *(undefined8 *)(lVar5 + 0x70 + lVar11) = local_100;
        *(undefined8 *)(lVar5 + 0x78 + lVar11) = uStack_f8;
        local_100 = 0;
        uStack_f8 = 0;
        *(undefined8 *)(lVar5 + 0x80 + lVar11) = local_f0;
        *(undefined8 *)(lVar5 + 0x88 + lVar11) = uStack_e8;
        local_f0 = 0;
        uStack_e8 = 0;
        puVar3 = (undefined4 *)(lVar5 + 0x9c + lVar11);
        *puVar3 = uStack_d4;
        puVar3[1] = uStack_d0;
        puVar3[2] = uStack_cc;
        puVar3[3] = uStack_c8;
        puVar3 = (undefined4 *)(lVar5 + 0x90 + lVar11);
        *puVar3 = local_e0;
        puVar3[1] = uStack_dc;
        puVar3[2] = uStack_d8;
        puVar3[3] = uStack_d4;
        *(undefined8 *)(lVar5 + 0xb0 + lVar11) = local_c0;
        *(undefined8 *)(lVar5 + 0xb8 + lVar11) = uStack_b8;
        local_c0 = 0;
        uStack_b8 = 0;
        *(undefined8 *)(lVar5 + 0xc0 + lVar11) = local_b0;
        *(undefined8 *)(lVar5 + 200 + lVar11) = uStack_a8;
        local_b0 = 0;
        uStack_a8 = 0;
        *(undefined4 *)(lVar5 + 0xd0 + lVar11) = local_a0;
        FUN_147d94cdc();
        bVar4 = true;
LAB_147d94906:
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_70 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)local_70 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_70 + 0x10))(local_70);
            }
          }
        }
        goto LAB_147d9475b;
      }
    }
  }
  else {
    cVar8 = FUN_14011bae6(param_1);
    if (cVar8 != '\0') {
      bVar7 = *(byte *)(param_2 + 8);
      goto LAB_147d946d8;
    }
  }
LAB_147d94759:
  bVar4 = false;
LAB_147d9475b:
  if (((*param_3 & 1) != 0) &&
     ((bVar4 || (((*(byte *)(param_2 + 8) & 0xf) == 0 && (param_3[2] != 3)))))) {
    FUN_14011b67e(&DAT_14cb0e570,param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x48c) < 0) {
    *(undefined4 *)(param_1 + 0x488) = 0;
    FUN_14480809c(param_1 + 0x480,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x488) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d94cdc FUN_147d94cdc body=86 status=ok
// SIG undefined FUN_147d94cdc(void)

void FUN_147d94cdc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1479f6ec0(param_1 + 0xb0);
  FUN_1479f6d2c(param_1 + 0x70);
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  FUN_14128edda(param_1 + 8);
  return;
}



// FUNCTION 147d94d32 FUN_147d94d32 body=1113 status=ok
// SIG undefined FUN_147d94d32(void)

void FUN_147d94d32(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_c9;
  longlong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c9 = param_3;
  if ((*(byte *)((longlong)param_1 + 0x334) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  if ((int)param_1[0x49] != *(int *)((longlong)param_1 + 0x274)) {
    lVar4 = *(longlong *)(param_2 + 4);
    uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar12 = (uint)lVar4 & 0xffff;
    plVar9 = param_1 + 0x4f;
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0x50];
    }
    iVar13 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)param_1[0x51] - 1U &
                     (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar12) +
                     (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar13 != -1) {
      do {
        lVar10 = param_1[0x48] + (longlong)iVar13 * 0x40;
        if (*(longlong *)(param_1[0x48] + (longlong)iVar13 * 0x40) == lVar4) {
          if (((lVar10 + 8U & 0xfffffffffffffff7) != 0) && ((longlong)*(int *)(lVar10 + 0x10) != 0))
          {
            puVar16 = *(undefined8 **)(lVar10 + 8);
            puVar15 = puVar16 + (longlong)*(int *)(lVar10 + 0x10) * 5;
            plVar9 = param_1 + 0x5c;
            local_c0 = param_1 + 99;
            plVar3 = param_1 + 0x5e;
            local_c8 = param_2;
            local_b8 = puVar15;
            do {
              lVar4 = puVar16[2];
              if (lVar4 == DAT_14c966e68) {
                local_98 = 0x100000000;
                local_88 = 0xffffffff;
                uStack_80 = uStack_80 & 0xffffffff00000000;
                uStack_90 = plVar3;
                if ((int)param_1[0x61] == 0) {
                  iVar13 = 0;
                }
                else {
                  FUN_1449c0562(&local_98);
                  iVar13 = (int)param_1[0x61];
                }
                local_58 = local_88;
                uVar6 = local_58;
                uStack_50 = uStack_80;
                local_68 = (undefined4)local_98;
                uStack_64 = local_98._4_4_;
                uStack_60 = (undefined4)uStack_90;
                uStack_5c = uStack_90._4_4_;
                local_58._4_4_ = (int)((ulonglong)local_88 >> 0x20);
                iVar8 = local_58._4_4_;
                local_70 = plVar9;
                if ((local_58._4_4_ != iVar13) ||
                   (puVar15 = local_b8, local_58 = uVar6, uStack_90 != plVar3)) {
                  do {
                    local_58 = uVar6;
                    puVar15 = (undefined8 *)((longlong)iVar8 * 0x110 + *local_70);
                    cVar7 = FUN_1449448d4(puVar15);
                    if ((cVar7 == '\0') && ((*(byte *)((longlong)puVar15 + 0x4c) & 4) == 0)) {
                      uStack_90 = (longlong *)CONCAT71(uStack_90._1_7_,*(undefined1 *)(puVar16 + 1))
                      ;
                      local_98 = *puVar16;
                      plVar11 = (longlong *)puVar16[4];
                      if (plVar11 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                        UNLOCK();
                      }
                      local_88 = *puVar15;
                      uStack_80 = puVar15[1];
                      local_78 = (longlong *)puVar15[2];
                      if (local_78 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                        UNLOCK();
                      }
                      if (plVar11 != (longlong *)0x0) {
                        LOCK();
                        plVar1 = plVar11 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
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
                      local_d8 = puVar15 + 3;
                      FUN_147d9469c(param_1,&local_98,local_c8,local_c9);
                      plVar11 = local_78;
                      param_2 = local_c8;
                      if (local_78 != (longlong *)0x0) {
                        LOCK();
                        plVar1 = local_78 + 1;
                        *(int *)plVar1 = (int)*plVar1 + -1;
                        UNLOCK();
                        if ((int)*plVar1 == 0) {
                          (**(code **)*local_78)(local_78);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar11 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          param_2 = local_c8;
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar11 + 0x10))(plVar11);
                            param_2 = local_c8;
                          }
                        }
                      }
                    }
                    local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
                    FUN_1449c0562(&local_68);
                    puVar15 = local_b8;
                    iVar8 = local_58._4_4_;
                    uVar6 = local_58;
                  } while (local_70 != plVar9 ||
                           ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar3 ||
                           local_58._4_4_ != iVar13));
                }
              }
              else {
                if ((int)param_1[0x5d] != *(int *)((longlong)param_1 + 0x314)) {
                  uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
                  uVar12 = (uint)lVar4 & 0xffff;
                  plVar11 = (longlong *)param_1[100];
                  if ((longlong *)param_1[100] == (longlong *)0x0) {
                    plVar11 = local_c0;
                  }
                  iVar13 = *(int *)((longlong)plVar11 +
                                   (ulonglong)
                                   ((int)param_1[0x65] - 1U &
                                   (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar12)
                                   + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4)) * 4);
                  if (iVar13 != -1) {
                    do {
                      lVar10 = *plVar9 + (longlong)iVar13 * 0x110;
                      if (*(longlong *)(*plVar9 + (longlong)iVar13 * 0x110) == lVar4)
                      goto LAB_147d94f33;
                      iVar13 = *(int *)(lVar10 + 0x108);
                    } while (iVar13 != -1);
                  }
                }
                lVar10 = 0;
LAB_147d94f33:
                puVar14 = (undefined8 *)(lVar10 + 0x18);
                if (lVar10 == 0) {
                  puVar14 = (undefined8 *)0x0;
                }
                local_a8 = puVar16[3];
                local_a0 = puVar16[4];
                if (local_a0 != 0) {
                  LOCK();
                  *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
                  UNLOCK();
                }
                local_b0 = lVar4;
                cVar7 = FUN_14011b7ae(param_1,&local_b0,puVar14);
                if (cVar7 == '\0') {
                  local_d8 = puVar14;
                  FUN_147d9469c(param_1,puVar16,param_2,local_c9);
                }
              }
              puVar16 = puVar16 + 5;
            } while (puVar16 != puVar15);
          }
          break;
        }
        iVar13 = *(int *)(lVar10 + 0x38);
      } while (iVar13 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d9518c FUN_147d9518c body=542 status=ok
// SIG undefined FUN_147d9518c(void)

undefined8 FUN_147d9518c(longlong *param_1,byte *param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)((longlong)param_1 + 0x334) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  *param_4 = 0;
  fVar11 = 0.0;
  uVar12 = 0;
  if ((int)param_1[0x53] != *(int *)((longlong)param_1 + 0x2c4)) {
    lVar8 = *(longlong *)(param_2 + 4);
    uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    plVar5 = param_1 + 0x59;
    if ((longlong *)param_1[0x5a] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x5a];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0x5b] - 1U &
                    (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar5 = (longlong *)(param_1[0x52] + (longlong)iVar7 * 0x28);
        if (*plVar5 == lVar8) {
          local_98 = plVar5 + 1;
          if (local_98 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
            if ((int)plVar5[2] < 1) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = 0.0;
              lVar9 = 0x10;
              lVar8 = 0;
              do {
                lVar1 = *local_98;
                local_78 = *(undefined8 *)(lVar1 + lVar9);
                local_70 = *(undefined8 *)(lVar1 + 8 + lVar9);
                local_68 = *(longlong *)(lVar1 + 0x10 + lVar9);
                if (local_68 != 0) {
                  LOCK();
                  *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
                  UNLOCK();
                }
                cVar3 = FUN_14011b7ae(param_1,&local_78,0);
                if (cVar3 == '\0') {
                  if ((param_3 == '\0') || (bVar4 = *param_2, (bVar4 & 2) != 0)) {
                    local_90 = *(undefined8 *)(lVar1 + lVar9);
                    local_88 = *(undefined8 *)(lVar1 + 8 + lVar9);
                    local_80 = *(longlong *)(lVar1 + 0x10 + lVar9);
                    if (local_80 != 0) {
                      LOCK();
                      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
                      UNLOCK();
                    }
                    fVar10 = (float)FUN_143774bb6(param_1,&local_90);
                    fVar11 = fVar11 + fVar10 * *(float *)(lVar1 + -8 + lVar9);
                    bVar4 = *param_2;
                  }
                  if ((bVar4 & 1) != 0) {
                    FUN_14011b67e(&DAT_14cb0e570,lVar1 + lVar9);
                  }
                  *param_4 = 1;
                }
                lVar8 = lVar8 + 1;
                lVar9 = lVar9 + 0x28;
              } while (lVar8 < (int)plVar5[2]);
            }
            uVar12 = 0;
            if ((*(byte *)(plVar5 + 3) & 1) != 0) {
              uVar12 = 0x80000000;
              fVar11 = -fVar11;
            }
          }
          break;
        }
        iVar7 = (int)plVar5[4];
      } while (iVar7 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar12,fVar11);
}



// FUNCTION 147d953ac FUN_147d953ac body=61 status=ok
// SIG undefined FUN_147d953ac(void)

undefined8 FUN_147d953ac(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\x03') {
    uVar3 = FUN_14113f0c0(param_1[4]);
    return uVar3;
  }
  if (cVar1 == '\x02') {
    plVar2 = (longlong *)param_1[2];
  }
  else {
    if (cVar1 != '\x01') {
      return 0;
    }
    plVar2 = (longlong *)*param_1;
  }
  if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147d953d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    return uVar3;
  }
  return 0;
}



// FUNCTION 147d953ea FUN_147d953ea body=181 status=ok
// SIG undefined FUN_147d953ea(void)

undefined4 *
FUN_147d953ea(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_146075062(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x1c) = *param_4;
  *(undefined8 *)(param_1 + 0x1e) = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4[2];
  *(undefined8 *)(param_1 + 0x22) = param_4[3];
  param_4[2] = 0;
  param_4[3] = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_5 + 4);
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_1[0x24] = *param_5;
  param_1[0x25] = uVar1;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar3;
  param_1[0x2a] = param_6;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1479f6d2c(param_4);
  return param_1;
}



// FUNCTION 147d954a0 FUN_147d954a0 body=162 status=ok
// SIG undefined FUN_147d954a0(void)

undefined4 *
FUN_147d954a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_146075062(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x2c) = *param_4;
  *(undefined8 *)(param_1 + 0x2e) = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined8 *)(param_1 + 0x30) = param_4[2];
  *(undefined8 *)(param_1 + 0x32) = param_4[3];
  param_4[2] = 0;
  param_4[3] = 0;
  param_1[0x34] = param_5;
  FUN_1479f6ec0(param_4);
  return param_1;
}



// FUNCTION 147d95542 FUN_147d95542 body=71 status=ok
// SIG undefined FUN_147d95542(void)

undefined8 FUN_147d95542(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (param_1[2] == 0) {
    return 0;
  }
  uVar3 = FUN_14113f0c0();
  return uVar3;
}



// FUNCTION 147d9558a FUN_147d9558a body=71 status=ok
// SIG undefined FUN_147d9558a(void)

undefined8 FUN_147d9558a(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (param_1[2] == 0) {
    return 0;
  }
  uVar3 = FUN_14113f0c0();
  return uVar3;
}



// FUNCTION 147d955d2 FUN_147d955d2 body=344 status=ok
// SIG undefined FUN_147d955d2(void)

void FUN_147d955d2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = (char)param_1[6];
  if (cVar5 == '\x03') {
    cVar5 = FUN_14113f0c0(param_1[4]);
    if (cVar5 != '\0') {
      lVar4 = param_1[4];
      local_48 = *param_2;
      local_40 = param_2[1];
      local_38 = param_2[2];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      FUN_147d9d8c2(lVar4,&local_48);
    }
  }
  else if (cVar5 == '\x02') {
    if (((int)((longlong *)param_1[2])[1] != 0) &&
       (plVar6 = *(longlong **)param_1[2], plVar6 != (longlong *)0x0)) {
      cVar5 = (**(code **)(*plVar6 + 0x30))();
      if (cVar5 != '\0') {
        puVar3 = (undefined8 *)param_1[2];
        local_30 = *param_2;
        local_28 = param_2[1];
        local_20 = param_2[2];
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        if (*(int *)(puVar3 + 1) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)*puVar3;
        }
        (**(code **)(*plVar6 + 0x58))();
      }
    }
  }
  else if (((cVar5 == '\x01') && ((int)((longlong *)*param_1)[1] != 0)) &&
          (plVar6 = *(longlong **)*param_1, plVar6 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar6 + 0x30))();
    if (cVar5 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)*param_1;
      }
      (**(code **)(*plVar6 + 0x58))();
    }
  }
  plVar6 = (longlong *)param_2[2];
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9572c FUN_147d9572c body=71 status=ok
// SIG undefined FUN_147d9572c(void)

undefined8 FUN_147d9572c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (param_1[2] == 0) {
    return 0;
  }
  uVar3 = FUN_14113f0c0();
  return uVar3;
}



// FUNCTION 147d95774 FUN_147d95774 body=187 status=ok
// SIG undefined FUN_147d95774(void)

void FUN_147d95774(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    if (param_1[2] != 0) {
      cVar1 = FUN_14113f0c0();
      if (cVar1 != '\0') {
        local_28 = *(undefined8 *)(param_3 + 4);
        local_38 = *param_3;
        uStack_34 = param_3[1];
        uStack_30 = param_3[2];
        uStack_2c = param_3[3];
        FUN_1479dfd8a(param_1[2],param_2);
      }
    }
  }
  else if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)*param_1;
      }
      local_28 = *(undefined8 *)(param_3 + 4);
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      (**(code **)(*plVar2 + 0x58))(local_38,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d95830 FUN_147d95830 body=71 status=ok
// SIG undefined FUN_147d95830(void)

undefined8 FUN_147d95830(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)*param_1;
  if (((plVar1 != (longlong *)0x0) && ((int)plVar1[1] != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if (param_1[2] == 0) {
    return 0;
  }
  uVar3 = FUN_14113f0c0();
  return uVar3;
}



// FUNCTION 147d95878 FUN_147d95878 body=138 status=ok
// SIG undefined FUN_147d95878(void)

void FUN_147d95878(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    if (param_1[2] != 0) {
      cVar1 = FUN_14113f0c0();
      if (cVar1 != '\0') {
        FUN_1479dfeda(param_1[2],param_2);
        return;
      }
    }
  }
  else if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x000147d958c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147d95902 FUN_147d95902 body=138 status=ok
// SIG undefined FUN_147d95902(void)

void FUN_147d95902(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    if (param_1[2] != 0) {
      cVar1 = FUN_14113f0c0();
      if (cVar1 != '\0') {
        FUN_1479dfe00(param_1[2],param_2);
        return;
      }
    }
  }
  else if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)*param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x000147d95952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147d9598c FUN_147d9598c body=177 status=ok
// SIG undefined FUN_147d9598c(void)

void FUN_147d9598c(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    if (param_1[2] != 0) {
      cVar1 = FUN_14113f0c0();
      if (cVar1 != '\0') {
        local_28 = *(undefined8 *)(param_2 + 4);
        local_38 = *param_2;
        uStack_34 = param_2[1];
        uStack_30 = param_2[2];
        uStack_2c = param_2[3];
        FUN_1479dfe68(param_1[2]);
      }
    }
  }
  else if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)*param_1;
      }
      local_28 = *(undefined8 *)(param_2 + 4);
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      uStack_2c = param_2[3];
      (**(code **)(*plVar2 + 0x58))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d95a3e FUN_147d95a3e body=536 status=ok
// SIG undefined FUN_147d95a3e(void)

ulonglong FUN_147d95a3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
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
  lVar4 = *param_2;
  plVar3 = (longlong *)(param_1 + 0x2e0);
  if (lVar4 == DAT_14c966e68) {
    lVar4 = param_1 + 0x2f0;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar4;
    if (*(int *)(param_1 + 0x308) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar11 = *(int *)(param_1 + 0x308);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar6 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar3;
    if ((local_68._4_4_ != iVar11) || (uStack_50 != lVar4)) {
      iVar8 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar10 = (longlong)iVar8 * 0x110 + *local_80;
        cVar7 = FUN_1449448d4(lVar10);
        if ((cVar7 == '\0') && (0 < *(int *)(lVar10 + 0x58))) {
          uVar12 = CONCAT71((int7)((ulonglong)&local_78 >> 8),1);
          goto LAB_147d95b5b;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_80 != plVar3 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar4 || local_68._4_4_ != iVar11));
    }
  }
  else {
    uVar6 = local_68;
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar9 = (uint)lVar4 & 0xffff;
      lVar10 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar10 = *(longlong *)(param_1 + 800);
      }
      iVar11 = *(int *)(lVar10 + (ulonglong)
                                 (*(int *)(param_1 + 0x328) - 1U &
                                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          lVar10 = *plVar3 + (longlong)iVar11 * 0x110;
          if (*(longlong *)(*plVar3 + (longlong)iVar11 * 0x110) == lVar4) {
            if (lVar10 != -0x18 && lVar10 != 0) {
              uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < *(int *)(lVar10 + 0x58));
              goto LAB_147d95b5b;
            }
            break;
          }
          iVar11 = *(int *)(lVar10 + 0x108);
        } while (iVar11 != -1);
      }
    }
  }
  local_68 = uVar6;
  uVar12 = 0;
LAB_147d95b5b:
  plVar3 = (longlong *)param_2[2];
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 147d95c58 FUN_147d95c58 body=536 status=ok
// SIG undefined FUN_147d95c58(void)

ulonglong FUN_147d95c58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
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
  lVar4 = *param_2;
  plVar3 = (longlong *)(param_1 + 0x2e0);
  if (lVar4 == DAT_14c966e68) {
    lVar4 = param_1 + 0x2f0;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar4;
    if (*(int *)(param_1 + 0x308) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar11 = *(int *)(param_1 + 0x308);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar6 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar3;
    if ((local_68._4_4_ != iVar11) || (uStack_50 != lVar4)) {
      iVar8 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar10 = (longlong)iVar8 * 0x110 + *local_80;
        cVar7 = FUN_1449448d4(lVar10);
        if ((cVar7 == '\0') && (0 < *(int *)(lVar10 + 0x68))) {
          uVar12 = CONCAT71((int7)((ulonglong)&local_78 >> 8),1);
          goto LAB_147d95d75;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_80 != plVar3 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar4 || local_68._4_4_ != iVar11));
    }
  }
  else {
    uVar6 = local_68;
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      uVar5 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar9 = (uint)lVar4 & 0xffff;
      lVar10 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar10 = *(longlong *)(param_1 + 800);
      }
      iVar11 = *(int *)(lVar10 + (ulonglong)
                                 (*(int *)(param_1 + 0x328) - 1U &
                                 (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar9) +
                                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar11 != -1) {
        do {
          lVar10 = *plVar3 + (longlong)iVar11 * 0x110;
          if (*(longlong *)(*plVar3 + (longlong)iVar11 * 0x110) == lVar4) {
            if (lVar10 != -0x18 && lVar10 != 0) {
              uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),0 < *(int *)(lVar10 + 0x68));
              goto LAB_147d95d75;
            }
            break;
          }
          iVar11 = *(int *)(lVar10 + 0x108);
        } while (iVar11 != -1);
      }
    }
  }
  local_68 = uVar6;
  uVar12 = 0;
LAB_147d95d75:
  plVar3 = (longlong *)param_2[2];
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 147d95e72 FUN_147d95e72 body=127 status=ok
// SIG undefined FUN_147d95e72(void)

void FUN_147d95e72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar3 = *param_2;
  uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar7 = (uint)uVar3 & 0xffff;
  lVar6 = FUN_1403e802c(param_1 + 0x2e0,
                        ((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4),param_2);
  *(byte *)(lVar6 + 0x34) = *(byte *)(lVar6 + 0x34) | 4;
  plVar4 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x000147d95ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d95ef2 FUN_147d95ef2 body=203 status=ok
// SIG undefined FUN_147d95ef2(void)

undefined8 * FUN_147d95ef2(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  if ((*(byte *)((longlong)param_1 + 0x334) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  if ((int)param_1[0x49] != *(int *)((longlong)param_1 + 0x274)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar5 = param_1 + 0x4f;
    if ((longlong *)param_1[0x50] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x50];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0x51] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = param_1[0x48] + (longlong)iVar2 * 0x40;
        if (*(longlong *)(param_1[0x48] + (longlong)iVar2 * 0x40) == param_2) goto LAB_147d95f23;
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_147d95f23:
  puVar7 = (undefined8 *)(lVar3 + 8);
  if (lVar3 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  puVar4 = &DAT_14cb0e498;
  if (puVar7 != (undefined8 *)0x0) {
    puVar4 = puVar7;
  }
  return puVar4;
}



// FUNCTION 147d95fc2 FUN_147d95fc2 body=541 status=ok
// SIG undefined FUN_147d95fc2(void)

void FUN_147d95fc2(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  double local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [128];
  longlong local_118 [15];
  longlong local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar7 = *param_1;
  dVar1 = *(double *)(lVar7 + 0x28);
  dVar2 = *(double *)(lVar7 + 0x30);
  dVar3 = *(double *)(lVar7 + 0x38);
  dVar4 = *(double *)(lVar7 + 0x50);
  dVar5 = *(double *)(lVar7 + 0x48);
  dVar6 = *(double *)(lVar7 + 0x40);
  plVar8 = param_2;
  plVar9 = local_118;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar9 = plVar9 + 1;
  }
  FUN_144a1c686(local_118);
  plVar8 = local_118;
  plVar9 = param_1 + 8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar9 = plVar9 + 1;
  }
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = local_a0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0x3ff0000000000000;
  local_298 = 0x3ff0000000000000;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0x3ff0000000000000;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0x3ff0000000000000;
  local_240 = 0;
  local_220 = 0x3ff0000000000000;
  local_238 = dVar1;
  local_230 = dVar2;
  local_228 = dVar3;
  local_218 = dVar6 - dVar1;
  local_1f0 = dVar5 - dVar2;
  local_1c8 = dVar4 - dVar3;
  FUN_1447fea8d(local_198);
  FUN_1447fea8d(local_118,local_198,param_2);
  plVar8 = local_118;
  plVar9 = param_1 + 0x28;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar9 = plVar9 + 1;
  }
  FUN_14494412e(param_1 + 0x28,local_118);
  plVar8 = local_118;
  plVar9 = param_1 + 0x18;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar9 = plVar9 + 1;
  }
  if ((local_90 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d961e0 FUN_147d961e0 body=136 status=ok
// SIG undefined FUN_147d961e0(void)

void FUN_147d961e0(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_18,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/Engine/Private/VectorField.cpp",0x7c,L"%s must override InitInstance.",
                puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d9626a FUN_147d9626a body=66 status=ok
// SIG undefined FUN_147d9626a(void)

void FUN_147d9626a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != puVar2) {
    *param_2 = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 0xc) = *(int *)(puVar2 + 0xc) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x3a) = 0;
  return;
}



// FUNCTION 147d962ac FUN_147d962ac body=269 status=ok
// SIG undefined FUN_147d962ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d962ac(longlong param_1,double *param_2,int *param_3)

{
  undefined1 auVar1 [12];
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar3 = *(int *)(param_1 + 0x68) + -1;
  if (*param_3 < iVar3) {
    iVar3 = *param_3;
  }
  iVar5 = 0;
  if (iVar3 < 1) {
    iVar3 = iVar5;
  }
  iVar9 = *(int *)(param_1 + 0x6c) + -1;
  if (param_3[1] < iVar9) {
    iVar9 = param_3[1];
  }
  if (iVar9 < 1) {
    iVar9 = iVar5;
  }
  iVar2 = *(int *)(param_1 + 0x70) + -1;
  if (param_3[2] < iVar2) {
    iVar2 = param_3[2];
  }
  if (iVar2 < 1) {
    iVar2 = iVar5;
  }
  iVar3 = (iVar2 * *(int *)(param_1 + 0x6c) + iVar9) * *(int *)(param_1 + 0x68) + iVar3;
  uVar4 = (ulonglong)(uint)(iVar3 * 3);
  if (*(int *)(param_1 + 0xb0) >> 1 < iVar3 * 3 + 3) {
    uVar4 = 0;
  }
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + uVar4 * 2);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar4;
  auVar7 = pmovzxwd(in_XMM1,auVar6);
  auVar7 = auVar7 & _DAT_149e1a1a0;
  iVar3 = auVar7._0_4_;
  iVar5 = auVar7._4_4_;
  iVar9 = auVar7._8_4_;
  iVar2 = auVar7._12_4_;
  auVar14._0_4_ = (float)(iVar3 << 0xd) * 5.192297e+33;
  auVar14._4_4_ = (float)(iVar5 << 0xd) * 5.192297e+33;
  auVar14._8_4_ = (float)(iVar9 << 0xd) * 5.192297e+33;
  auVar14._12_4_ = (float)(iVar2 << 0xd) * 0.0;
  auVar10._0_4_ = -(uint)(0x7bff < iVar3);
  auVar10._4_4_ = -(uint)(0x7bff < iVar5);
  auVar10._8_4_ = -(uint)(0x7bff < iVar9);
  auVar10._12_4_ = -(uint)(0x7bff < iVar2);
  auVar13._0_12_ = SUB1412(SUB1614((undefined1  [16])0x0,0),0);
  auVar13._12_2_ = 0;
  auVar13._14_2_ = (short)(uVar4 >> 0x30);
  auVar12._12_4_ = auVar13._12_4_;
  auVar12._0_10_ = SUB1410(SUB1614((undefined1  [16])0x0,0),0);
  auVar12._10_2_ = (short)(uVar4 >> 0x20);
  auVar11._10_6_ = auVar12._10_6_;
  auVar11._0_10_ = (unkuint10)0 << 0x40;
  auVar1._2_8_ = auVar11._8_8_;
  auVar1._0_2_ = (short)(uVar4 >> 0x10);
  auVar1._10_2_ = 0;
  auVar7._2_12_ = auVar1 << 0x10;
  auVar7._0_2_ = (short)uVar4;
  auVar7._14_2_ = 0;
  auVar8._0_4_ = -(uint)(0x7c00 < iVar3);
  auVar8._4_4_ = -(uint)(0x7c00 < iVar5);
  auVar8._8_4_ = -(uint)(0x7c00 < iVar9);
  auVar8._12_4_ = -(uint)(0x7c00 < iVar2);
  auVar14 = auVar7 << 0x10 & _DAT_149e1ee40 | auVar8 & _DAT_14a2ddea0 | auVar10 & _DAT_14a2dde90 |
            auVar14;
  *param_2 = (double)auVar14._0_4_;
  param_2[1] = (double)auVar14._4_4_;
  param_2[2] = (double)auVar14._8_4_;
  return;
}



// FUNCTION 147d963ba FUN_147d963ba body=100 status=ok
// SIG undefined FUN_147d963ba(void)

void FUN_147d963ba(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xb4));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14484255c(param_2,(ulonglong)*(uint5 *)(param_1 + 0x88));
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  FUN_147d9641e(*(longlong *)(param_1 + 0x78),param_2);
  return;
}



// FUNCTION 147d9641e FUN_147d9641e body=163 status=ok
// SIG undefined FUN_147d9641e(void)

void FUN_147d9641e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x20) *
                          (longlong)*(int *)(param_1 + 0x1c) * (longlong)*(int *)(param_1 + 0x18) *
                          8);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_146820164(param_2,(longlong)DAT_14c873608 *
                          (longlong)
                          ((*(int *)(param_1 + 0x20) + DAT_14c873604 + -1) / DAT_14c873604) *
                          (longlong)
                          ((DAT_14c873600 + *(int *)(param_1 + 0x1c) + -1) / DAT_14c873600) *
                          (longlong)
                          ((*(int *)(param_1 + 0x18) + DAT_14c8735fc + -1) / DAT_14c8735fc));
    return;
  }
  return;
}



// FUNCTION 147d964c2 FUN_147d964c2 body=129 status=ok
// SIG undefined FUN_147d964c2(void)

undefined8 * FUN_147d964c2(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x640) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x3d0,0x10);
    FUN_1406ff4f8(puVar1,param_1,0);
    *puVar1 = &PTR_FUN_14aaf89e0;
    FUN_144b1dcb8(puVar1 + 0x54,*(undefined4 *)(puVar1[0x42] + 8));
    puVar1[0x54] = &PTR_FUN_14aaf8c20;
    *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
    puVar1[0x53] = *(undefined8 *)(param_1 + 0x640);
  }
  return puVar1;
}



// FUNCTION 147d96544 FUN_147d96544 body=265 status=ok
// SIG undefined FUN_147d96544(void)

undefined8 FUN_147d96544(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0.0;
  dStack_30 = 0.0;
  local_48 = 0.0;
  dStack_40 = 0.0;
  local_58 = 0.0;
  dStack_50 = 0.0;
  local_28 = 0.0;
  lVar1 = *(longlong *)(param_1 + 0x620);
  if (lVar1 != 0) {
    dStack_30 = (*(double *)(lVar1 + 0x50) - *(double *)(lVar1 + 0x38)) * 0.5;
    local_38 = (*(double *)(lVar1 + 0x48) - *(double *)(lVar1 + 0x30)) * 0.5;
    dStack_40 = (*(double *)(lVar1 + 0x40) - *(double *)(lVar1 + 0x28)) * 0.5;
    local_48 = *(double *)(lVar1 + 0x38) + dStack_30;
    dStack_50 = *(double *)(lVar1 + 0x30) + local_38;
    local_58 = *(double *)(lVar1 + 0x28) + dStack_40;
    local_28 = SQRT(dStack_30 * dStack_30 + dStack_40 * dStack_40 + local_38 * local_38);
  }
  FUN_144a80a4c(&local_58,param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9664e FUN_147d9664e body=69 status=ok
// SIG undefined FUN_147d9664e(void)

void FUN_147d9664e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x518);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 147d96694 FUN_147d96694 body=793 status=ok
// SIG undefined FUN_147d96694(void)

void FUN_147d96694(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1448aa298();
  plVar1 = *(longlong **)(param_1 + 0x620);
  if (plVar1 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x630) & 1) == 0) {
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (lVar9 == 0) {
        lVar9 = FUN_1448abda6(param_1);
        if (lVar9 == 0) goto LAB_147d967c4;
      }
      if (*(longlong **)(lVar9 + 0x218) != (longlong *)0x0) {
        lVar7 = (**(code **)(**(longlong **)(lVar9 + 0x218) + 0x420))();
        if (lVar7 != 0) {
          uVar8 = (**(code **)(**(longlong **)(lVar9 + 0x218) + 0x420))();
          *(undefined8 *)(param_1 + 0x638) = uVar8;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_128);
        }
      }
    }
    else {
      puVar10 = (undefined8 *)FUN_14001cc68(0x1e0);
      *puVar10 = 0;
      *(undefined1 *)(puVar10 + 7) = 0;
      puVar11 = &DAT_14c846400;
      puVar12 = puVar10 + 8;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = &DAT_14c846400;
      puVar12 = puVar10 + 0x18;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar11 = &DAT_14c846400;
      puVar12 = puVar10 + 0x28;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar10[0x38] = 0;
      puVar10[0x39] = 0xffffffff;
      *(undefined1 *)(puVar10 + 0x3a) = 0;
      (**(code **)(*plVar1 + 0x2a0))(plVar1,puVar10,1);
      dVar4 = *(double *)(param_1 + 0x240);
      dVar5 = *(double *)(param_1 + 0x248);
      dVar2 = *(double *)(param_1 + 0x250);
      local_f8 = *(double *)(param_1 + 0x280);
      dVar6 = *(double *)(param_1 + 0x288);
      dStack_c0 = *(double *)(param_1 + 0x290);
      dVar17 = dVar5 + dVar5;
      dVar13 = dVar2 + dVar2;
      dVar16 = dVar4 * (dVar4 + dVar4);
      local_108 = (1.0 - (dVar2 * dVar13 + dVar5 * dVar17)) * local_f8;
      dVar2 = (1.0 - (dVar2 * dVar13 + dVar16)) * dVar6;
      local_b8 = (1.0 - (dVar16 + dVar5 * dVar17)) * dStack_c0;
      dVar3 = *(double *)(param_1 + 0x240) * dVar13;
      dVar16 = *(double *)(param_1 + 600);
      dVar14 = dVar13 * dVar16;
      dVar15 = (dVar4 + dVar4) * *(double *)(param_1 + 600);
      dVar16 = dVar17 * dVar16;
      dStack_100 = (dVar17 * dVar4 + dVar14) * local_f8;
      local_d8 = (dVar13 * dVar5 + dVar15) * dVar6;
      local_c8 = (dVar16 + dVar3) * dStack_c0;
      local_f8 = (dVar3 - dVar16) * local_f8;
      dStack_c0 = (dVar13 * dVar5 - dVar15) * dStack_c0;
      uStack_f0 = 0;
      local_e8._8_4_ = SUB84(dVar2,0);
      local_e8._0_8_ = (dVar17 * dVar4 - dVar14) * dVar6;
      local_e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      uStack_d0 = 0;
      uStack_b0 = 0;
      local_a8 = *(undefined8 *)(param_1 + 0x260);
      uStack_a0 = *(undefined8 *)(param_1 + 0x268);
      local_98 = *(undefined8 *)(param_1 + 0x270);
      uStack_90 = 0x3ff0000000000000;
      FUN_147d95fc2(puVar10);
      *(undefined8 **)(param_1 + 0x640) = puVar10;
    }
  }
LAB_147d967c4:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d969f4 FUN_147d969f4 body=50 status=ok
// SIG undefined FUN_147d969f4(void)

void FUN_147d969f4(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14472bd78();
  plVar1 = *(longlong **)(param_1 + 0x638);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d96a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 147d96a48 FUN_147d96a48 body=42 status=ok
// SIG undefined FUN_147d96a48(void)

void FUN_147d96a48(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d96a92 FUN_147d96a92 body=39 status=ok
// SIG undefined FUN_147d96a92(void)

void FUN_147d96a92(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147d9dc58(uVar1,param_1);
  return;
}



// FUNCTION 147d96aba FUN_147d96aba body=61 status=ok
// SIG undefined FUN_147d96aba(void)

longlong FUN_147d96aba(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147d96af8 FUN_147d96af8 body=401 status=ok
// SIG undefined FUN_147d96af8(void)

void FUN_147d96af8(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
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
  byte bVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar16 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar16,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar14 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      return;
    }
    bVar14 = DAT_14c8442b8 & 1;
  }
  if (bVar14 == 0) {
    puVar15 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *(undefined4 *)(puVar15 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)puVar15 + 0xc) = 0x105;
    *(undefined1 *)((longlong)puVar15 + 0xe) = 0;
    *puVar15 = &PTR_FUN_14aaf0d40;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 0xb) = 0;
    *(undefined4 *)(puVar15 + 0xc) = 0;
    *puVar15 = &PTR_FUN_14aaf8db0;
    puVar15[0xd] = 0;
    puVar15[0xe] = param_1;
    *(undefined4 *)(puVar15 + 0xf) = 0;
    *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)((longlong)puVar15 + 0x1c) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)((longlong)puVar15 + 0x24) = *(undefined4 *)(param_1 + 0x60);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar6 = *(undefined4 *)(param_1 + 0x38);
    uVar7 = *(undefined4 *)(param_1 + 0x3c);
    uVar8 = *(undefined4 *)(param_1 + 0x40);
    uVar9 = *(undefined4 *)(param_1 + 0x44);
    uVar10 = *(undefined4 *)(param_1 + 0x48);
    uVar11 = *(undefined4 *)(param_1 + 0x4c);
    uVar12 = *(undefined4 *)(param_1 + 0x50);
    uVar13 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(puVar15 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar3;
    *(undefined4 *)(puVar15 + 6) = uVar4;
    *(undefined4 *)((longlong)puVar15 + 0x34) = uVar5;
    *(undefined4 *)(puVar15 + 7) = uVar6;
    *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar7;
    *(undefined4 *)(puVar15 + 8) = uVar8;
    *(undefined4 *)((longlong)puVar15 + 0x44) = uVar9;
    *(undefined4 *)(puVar15 + 9) = uVar10;
    *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar11;
    *(undefined4 *)(puVar15 + 10) = uVar12;
    *(undefined4 *)((longlong)puVar15 + 0x54) = uVar13;
    puVar15[0xb] = *(undefined8 *)(param_1 + 0x58);
    if (param_3 == '\0') {
      FUN_140308182(puVar15,0);
    }
    puVar2 = (undefined8 *)*param_2;
    if (puVar2 != puVar15) {
      *param_2 = (longlong)puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar15 + 0xc) = *(int *)(puVar15 + 0xc) + 1;
        UNLOCK();
      }
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x3a) = 1;
  }
  return;
}



// FUNCTION 147d96ca4 FUN_147d96ca4 body=173 status=ok
// SIG undefined FUN_147d96ca4(void)

void FUN_147d96ca4(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
    FUN_14472e0ae(param_1 + 0x10,iVar4);
  }
  lVar6 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x90);
  }
  *(undefined8 **)(lVar6 + (longlong)iVar4 * 0x10) = &DAT_14cb0e8c0;
  *(undefined8 *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = 0x1000000000;
  lVar5 = DAT_14cb0e8b8;
  lVar6 = *(longlong *)(param_1 + 0x110);
  if (lVar6 != DAT_14cb0e8b8) {
    *(longlong *)(param_1 + 0x110) = DAT_14cb0e8b8;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d96d52 FUN_147d96d52 body=298 status=ok
// SIG undefined FUN_147d96d52(void)

void FUN_147d96d52(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  
  uVar3 = DAT_14c9c0d80;
  lVar1 = *(longlong *)(param_3 + 0x38);
  if (lVar1 != 0) {
    FUN_145f9d498();
    uVar2 = *(ulonglong *)(param_2 + 0xa0);
    uVar4 = param_2 + 0xa0 + ((longlong)uVar2 >> 0x18);
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2;
    }
    if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
      lVar5 = 0;
      do {
        if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14cb0e7c8) {
          uVar2 = *(ulonglong *)(param_2 + 0xb0);
          uVar4 = param_2 + 0xb0 + ((longlong)uVar2 >> 0x18);
          if ((uVar2 & 1) == 0) {
            uVar4 = uVar2;
          }
          psVar6 = (short *)(uVar4 + lVar5);
          goto LAB_147d96df3;
        }
        lVar5 = lVar5 + 2;
      } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar5);
    }
    psVar6 = &DAT_14c9c45cc;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9c45d0) {
      FUN_144b3d300(&DAT_14c9c45d0);
      if (DAT_14c9c45d0 == -1) {
        DAT_14c9c45cc = 0xffff;
        _Init_thread_footer(&DAT_14c9c45d0);
      }
    }
LAB_147d96df3:
    if (*psVar6 != -1) {
      FUN_144b11088(param_4,*(undefined8 *)(lVar1 + 8));
    }
    FUN_142ca4114(param_4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),uVar3,
                  *(undefined8 *)(lVar1 + 0x10));
  }
  return;
}



// FUNCTION 147d96e84 FUN_147d96e84 body=1107 status=ok
// SIG undefined FUN_147d96e84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d96e84(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar21;
  double dVar20;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined4 local_210;
  undefined4 local_208;
  undefined1 local_200;
  double local_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar18 = *param_2;
  dVar24 = (double)(0.5 / (float)*(int *)(lVar18 + 0x20));
  dVar13 = (double)(0.5 / (float)*(int *)(lVar18 + 0x1c));
  local_1e8 = (double)(0.5 / (float)*(int *)(lVar18 + 0x18));
  uStack_1e0 = 0;
  uVar19 = SUB84(local_1e8,0) ^ (uint)DAT_149931e80;
  uVar21 = (uint)((ulonglong)local_1e8 >> 0x20) ^ DAT_149931e80._4_4_;
  local_1b8 = 0x3f0000003f800000;
  uStack_1b0 = 0x3f80000000000000;
  local_1d8 = (double)param_2[0x2c];
  dStack_1d0 = (double)param_2[0x2d];
  local_1c8 = (double)param_2[0x30];
  dStack_1c0 = (double)param_2[0x31];
  dVar16 = (double)param_2[0x34];
  dVar2 = (double)param_2[0x35];
  dVar8 = (double)CONCAT44(uVar21,uVar19) * (double)param_2[0x28];
  dVar9 = (double)CONCAT44(uVar21,uVar19) * (double)param_2[0x29];
  dVar22 = (double)((ulonglong)dVar13 ^ DAT_149931e80) * local_1d8;
  dVar23 = (double)((ulonglong)dVar13 ^ DAT_149931e80._8_8_) * dStack_1d0;
  dVar5 = dVar22 + dVar8;
  dVar6 = dVar23 + dVar9;
  dVar3 = (double)((ulonglong)dVar24 ^ DAT_149931e80) * local_1c8;
  dVar4 = (double)((ulonglong)dVar24 ^ DAT_149931e80._8_8_) * dStack_1c0;
  dVar7 = dVar6 + dVar4 + dVar2;
  local_f0 = (double)param_2[0x36];
  local_1f0 = (double)param_2[0x32];
  puVar17 = local_1a8;
  dVar1 = (double)param_2[0x2a];
  local_1a8._8_4_ = SUB84(dVar7,0);
  local_1a8._0_8_ = dVar5 + dVar3 + dVar16;
  local_1a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar14 = dVar13 * (double)param_2[0x2e];
  dVar20 = (double)CONCAT44(uVar21,uVar19) * dVar1 - dVar14;
  dVar25 = dVar24 * local_1f0;
  local_198 = (dVar20 - dVar25) + local_f0;
  dVar24 = dVar24 + 1.0;
  dVar13 = dVar13 + 1.0;
  dVar7 = local_1e8 + 1.0;
  dVar10 = dVar7 * (double)param_2[0x28];
  dVar11 = dVar7 * (double)param_2[0x29];
  dVar14 = dVar7 * dVar1 - dVar14;
  dVar22 = dVar22 + dVar10;
  dVar23 = dVar23 + dVar11;
  dVar15 = dVar4 + dVar23 + dVar2;
  local_190._8_4_ = SUB84(dVar15,0);
  local_190._0_8_ = dVar3 + dVar22 + dVar16;
  local_190._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_180 = (dVar14 - dVar25) + local_f0;
  dVar12 = dVar13 * (double)param_2[0x2e];
  dVar10 = dVar10 + dVar13 * local_1d8;
  dVar11 = dVar11 + dVar13 * dStack_1d0;
  dVar15 = dVar4 + dVar11 + dVar2;
  local_178._8_4_ = SUB84(dVar15,0);
  local_178._0_8_ = dVar3 + dVar10 + dVar16;
  local_178._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  dVar15 = dVar7 * dVar1 + dVar12;
  local_168 = (dVar15 - dVar25) + local_f0;
  dVar8 = dVar13 * local_1d8 + dVar8;
  dVar9 = dVar13 * dStack_1d0 + dVar9;
  dVar12 = dVar12 - dVar1 * local_1e8;
  dVar7 = dVar24 * local_1f0;
  dVar1 = dVar4 + dVar9 + dVar2;
  local_160._8_4_ = SUB84(dVar1,0);
  local_160._0_8_ = dVar3 + dVar8 + dVar16;
  local_160._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_150 = (dVar12 - dVar25) + local_f0;
  dVar1 = dVar24 * local_1c8;
  dVar24 = dVar24 * dStack_1c0;
  dVar3 = dVar6 + dVar24 + dVar2;
  local_148._8_4_ = SUB84(dVar3,0);
  local_148._0_8_ = dVar5 + dVar1 + dVar16;
  local_148._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_138 = dVar20 + dVar7 + local_f0;
  local_130 = dVar22 + dVar1 + dVar16;
  dStack_128 = dVar23 + dVar24 + dVar2;
  local_120 = dVar14 + dVar7 + local_f0;
  dVar3 = dVar11 + dVar24 + dVar2;
  local_118._8_4_ = SUB84(dVar3,0);
  local_118._0_8_ = dVar10 + dVar1 + dVar16;
  local_118._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_108 = dVar15 + dVar7 + local_f0;
  dVar2 = dVar24 + dVar9 + dVar2;
  local_f0 = dVar7 + dVar12 + local_f0;
  local_100._8_4_ = SUB84(dVar2,0);
  local_100._0_8_ = dVar1 + dVar8 + dVar16;
  local_100._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  lVar18 = 1;
  do {
    local_200 = 0;
    local_208 = 0;
    local_210 = 0;
    local_218 = 0;
    (**(code **)(*param_1 + 0x30))
              (param_1,puVar17,local_1a8 + (ulonglong)((uint)lVar18 & 3) * 0x18,&local_1b8);
    local_200 = 0;
    local_208 = 0;
    local_210 = 0;
    local_218 = 0;
    (**(code **)(*param_1 + 0x30))
              (param_1,puVar17 + 0x60,local_1a8 + (ulonglong)((uint)lVar18 | 4) * 0x18,&local_1b8);
    local_200 = 0;
    local_208 = 0;
    local_210 = 0;
    local_218 = 0;
    (**(code **)(*param_1 + 0x30))(param_1,puVar17,puVar17 + 0x60,&local_1b8);
    puVar17 = puVar17 + 0x18;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 5);
  if ((local_e0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d972d8 FUN_147d972d8 body=900 status=ok
// SIG undefined FUN_147d972d8(void)

void FUN_147d972d8(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_178 [40];
  longlong local_150;
  float local_144;
  float local_140;
  float local_13c;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [64];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
    uVar7 = FUN_14001cc68(0xe8,0x10);
    FUN_1401a700c(&local_138,0x3e);
    uVar8 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x518) + 0x2f0))();
    FUN_14089e406(uVar7,uVar8,&DAT_149e1dd34,local_138 & 0xffffffff);
    iVar6 = (int)param_4[0x16];
    *(uint *)(param_4 + 0x16) = iVar6 + 1U;
    if (*(uint *)((longlong)param_4 + 0xb4) < iVar6 + 1U) {
      FUN_1479cc194(param_4 + 0x15,iVar6);
    }
    *(undefined8 *)(param_4[0x15] + (longlong)iVar6 * 8) = uVar7;
    local_144 = (float)(double)param_2[0x34];
    local_140 = (float)(double)param_2[0x35];
    local_13c = (float)(double)param_2[0x36];
    FUN_144911616(&local_98,&local_144,param_2 + 0x28);
    local_130 = local_50;
    local_138 = local_58;
    local_128 = local_98;
    uStack_124 = uStack_94;
    uStack_120 = uStack_90;
    uStack_11c = uStack_8c;
    local_118 = local_88;
    uStack_114 = uStack_84;
    uStack_110 = uStack_80;
    uStack_10c = uStack_7c;
    local_108 = local_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
    local_f8 = local_68;
    uStack_f4 = uStack_64;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    FUN_144a928e2(local_e8,param_2 + 8);
    local_a0 = 1.0 / (float)*(int *)(lVar4 + 0x20);
    local_a4 = 1.0 / (float)*(int *)(lVar4 + 0x1c);
    local_a8 = 1.0 / (float)*(int *)(lVar4 + 0x18);
    local_9c = *(float *)((longlong)param_2 + 0x1c4) * *(float *)(lVar4 + 0x24);
    puVar9 = (undefined8 *)FUN_14377dcbe(param_4[0x1d]);
    *puVar9 = &PTR_FUN_14aaf99f0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    FUN_143779b6a(&local_150,&local_138);
    lVar5 = puVar9[1];
    puVar9[1] = local_150;
    local_150 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_150 != 0) {
        LOCK();
        puVar1 = (uint *)(local_150 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    lVar5 = *(longlong *)(lVar4 + 0x10);
    lVar10 = puVar9[2];
    if (lVar10 != lVar5) {
      puVar9[2] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      if (lVar10 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar10 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    iVar6 = FUN_14470b8a2(param_4,1);
    lVar5 = *(longlong *)(*param_4 + (longlong)(iVar6 / 0x44) * 8);
    lVar10 = (ulonglong)(uint)(iVar6 % 0x44) * 0xf0;
    *(undefined8 *)(lVar5 + 0xb8 + lVar10) = param_1;
    *(undefined8 *)(lVar5 + 0xc0 + lVar10) = uVar7;
    *(uint *)(lVar5 + 0xe4 + lVar10) = *(uint *)(lVar5 + 0xe4 + lVar10) & 0xfffe36ff | 0x8000;
    puVar11 = *(undefined8 **)(lVar5 + 0xa8 + lVar10);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)(lVar5 + lVar10);
    }
    *(undefined4 *)((longlong)puVar11 + 0x5c) = 1;
    *(int *)(puVar11 + 0xc) =
         *(int *)(lVar4 + 0x1c) * *(int *)(lVar4 + 0x18) * *(int *)(lVar4 + 0x20);
    *(undefined4 *)(puVar11 + 0xb) = 0;
    puVar11[0xd] = 0x100000000;
    *puVar11 = DAT_14cb055b0;
    puVar11[7] = puVar9;
    pbVar2 = (byte *)(lVar5 + 0xe6 + lVar10);
    *pbVar2 = *pbVar2 & 0xef;
    FUN_1436a14f8(param_4,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d97672 FUN_147d97672 body=137 status=ok
// SIG undefined FUN_147d97672(void)

void FUN_147d97672(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d97702 FUN_147d97702 body=722 status=ok
// SIG undefined FUN_147d97702(void)

void FUN_147d97702(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined8 local_90;
  undefined1 local_88 [16];
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_90 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  _Src = local_78;
  uVar2 = local_90;
  iVar1 = local_94;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_70;
  local_a0 = (int)uStack_70;
  if (lVar3 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,uStack_70 & 0xffffffff,0);
    memcpy(local_a8,_Src,lVar3 * 2);
  }
  local_b8 = local_40;
  local_c8 = local_50;
  uStack_c4 = uStack_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  FUN_147d979d6(&local_c8,&local_a8,uVar2,iVar1 != 0);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d979d6 FUN_147d979d6 body=446 status=ok
// SIG undefined FUN_147d979d6(void)

void FUN_147d979d6(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = param_3;
  if (param_4 != '\0') {
    FUN_14276766e(local_78,&local_38);
    local_c8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar5 = local_a8;
    }
    local_c8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar4 = local_b8;
    }
    if ((int)param_2[1] != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    local_c8 = puVar5;
    FUN_140002266(local_98,L"LogArrow: \'%s\' - SegmentStart: (%s) | SegmentEnd:(%s)",puVar3,puVar4)
    ;
    FUN_140233b1a(local_88,local_98);
    FUN_142767a34(local_78,local_48,local_88);
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
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_78);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d97ba2 FUN_147d97ba2 body=780 status=ok
// SIG undefined FUN_147d97ba2(void)

void FUN_147d97ba2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [16];
  void *local_88;
  ulonglong uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  iVar1 = local_a4;
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  _Src = local_88;
  uVar2 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_80;
  local_b0 = (int)uStack_80;
  if (lVar3 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,uStack_80 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar3 * 2);
  }
  local_c8 = CONCAT71(uStack_3f,local_40);
  local_d8 = local_50;
  uStack_d4 = uStack_4c;
  uStack_d0 = uStack_48;
  uStack_cc = uStack_44;
  local_e8 = local_60;
  uStack_e4 = uStack_5c;
  uStack_e0 = uStack_58;
  uStack_dc = uStack_54;
  local_f8 = local_70;
  uStack_f4 = uStack_6c;
  uStack_f0 = uStack_68;
  uStack_ec = uStack_64;
  FUN_147d97eb0(&local_f8,&local_b8,uVar2,iVar1 != 0);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d97eb0 FUN_147d97eb0 body=447 status=ok
// SIG undefined FUN_147d97eb0(void)

void FUN_147d97eb0(undefined8 *param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong *local_88 [2];
  undefined1 local_78 [48];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = param_3;
  if (param_4 != '\0') {
    FUN_14276766e(local_78,&local_38);
    local_c8 = (undefined2 *)param_1[5];
    FUN_140002266(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f",param_1[3],param_1[4]);
    puVar3 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar5 = local_a8;
    }
    local_c8 = (undefined2 *)param_1[2];
    FUN_140002266(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
    puVar4 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar4 = local_b8;
    }
    if ((int)param_2[1] != 0) {
      puVar3 = (undefined2 *)*param_2;
    }
    local_c8 = puVar5;
    FUN_140002266(local_98,L"LogBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s)",puVar3,puVar4);
    FUN_140233b1a(local_88,local_98);
    FUN_142767a34(local_78,local_48,local_88);
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
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x10))();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(local_78);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d9807c FUN_147d9807c body=1078 status=ok
// SIG undefined FUN_147d9807c(void)

void FUN_147d9807c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_138 [32];
  void **local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [16];
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_a0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  iVar1 = local_a4;
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  _Src = local_88;
  uVar2 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_80;
  local_b0 = (int)uStack_80;
  if (lVar3 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,uStack_80 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar3 * 2);
  }
  local_c8 = local_68;
  uStack_c0 = uStack_60;
  local_d8 = local_78;
  uStack_d0 = uStack_70;
  local_f8 = local_50;
  uStack_f4 = uStack_4c;
  uStack_f0 = uStack_48;
  uStack_ec = uStack_44;
  local_e8 = local_40;
  local_108 = iVar1 != 0;
  local_110 = uVar2;
  local_118 = &local_b8;
  FUN_147d984b4(&local_f8,local_54,local_58);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


