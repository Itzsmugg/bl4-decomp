// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a3194c FUN_140a3194c body=172 status=ok
// SIG undefined FUN_140a3194c(void)

void FUN_140a3194c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_140a31a30(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_140a31a68(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140a319f8(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140a319f8(param_1);
  return;
}



// FUNCTION 140a319f8 FUN_140a319f8 body=55 status=ok
// SIG undefined FUN_140a319f8(void)

void FUN_140a319f8(longlong *param_1)

{
  FUN_140a31cc4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a31a30 FUN_140a31a30 body=55 status=ok
// SIG undefined FUN_140a31a30(void)

void FUN_140a31a30(longlong *param_1)

{
  FUN_140a31b1a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a31a68 FUN_140a31a68 body=55 status=ok
// SIG undefined FUN_140a31a68(void)

void FUN_140a31a68(longlong *param_1)

{
  FUN_140a31aa0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a31aa0 FUN_140a31aa0 body=121 status=ok
// SIG undefined FUN_140a31aa0(void)

void FUN_140a31aa0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140a31b1a FUN_140a31b1a body=123 status=ok
// SIG undefined FUN_140a31b1a(void)

void FUN_140a31b1a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140957390(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140a31b96 FUN_140a31b96 body=235 status=ok
// SIG undefined FUN_140a31b96(void)

void FUN_140a31b96(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140a31c81(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a31c81 FUN_140a31c81 body=67 status=ok
// SIG undefined FUN_140a31c81(void)

void FUN_140a31c81(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a31cc4 FUN_140a31cc4 body=556 status=ok
// SIG undefined FUN_140a31cc4(void)

void FUN_140a31cc4(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_140a31dce;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1 + (longlong)iVar6 * 0x88;
      FUN_140a31f5e(lVar11 + 0x38);
      FUN_140a31ef0(*(undefined8 *)(lVar11 + 0x28),*(undefined4 *)(lVar11 + 0x30));
      if (*(longlong *)(lVar11 + 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140a31dce;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140a31dce:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144a544ac(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140a31ef0 FUN_140a31ef0 body=41 status=ok
// SIG undefined FUN_140a31ef0(void)

void FUN_140a31ef0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140a31f1a(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 140a31f1a FUN_140a31f1a body=68 status=ok
// SIG undefined FUN_140a31f1a(void)

void FUN_140a31f1a(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 0x10) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140a31f5e FUN_140a31f5e body=61 status=ok
// SIG undefined FUN_140a31f5e(void)

void FUN_140a31f5e(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 6) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 6) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140a31f9c FUN_140a31f9c body=244 status=ok
// SIG undefined FUN_140a31f9c(void)

void FUN_140a31f9c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_140a320b8(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a320f0(param_1 + 0x98);
  FUN_1447bda9c(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_140a32090(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a32090 FUN_140a32090 body=40 status=ok
// SIG undefined FUN_140a32090(void)

void FUN_140a32090(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145765162(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 140a320b8 FUN_140a320b8 body=55 status=ok
// SIG undefined FUN_140a320b8(void)

void FUN_140a320b8(longlong *param_1)

{
  FUN_140a322ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a320f0 FUN_140a320f0 body=55 status=ok
// SIG undefined FUN_140a320f0(void)

void FUN_140a320f0(longlong *param_1)

{
  FUN_140a32128(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a32128 FUN_140a32128 body=388 status=ok
// SIG undefined FUN_140a32128(void)

void FUN_140a32128(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_145765194(*local_70 + (longlong)iStack_54 * 0x100 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1458130c8(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a322ae FUN_140a322ae body=393 status=ok
// SIG undefined FUN_140a322ae(void)

void FUN_140a322ae(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a32438 FUN_140a32438 body=91 status=ok
// SIG undefined FUN_140a32438(void)

undefined8 FUN_140a32438(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140a32494();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140a32494();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140a32487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a32494 FUN_140a32494 body=228 status=ok
// SIG undefined FUN_140a32494(void)

longlong FUN_140a32494(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad398 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c358d7;
    local_40 = FUN_1465e600b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakOrderRewindUser",&DAT_14cbad398,&DAT_148c358d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad398;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3257a FUN_140a3257a body=205 status=ok
// SIG undefined FUN_140a3257a(void)

void FUN_140a3257a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x3c))) &&
         (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 &&
          ((*(longlong *)(param_1 + 0x50) != 0 && (iVar2 = *(int *)(param_1 + 0x4c), iVar2 != 0)))))
         ) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == iVar2)) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) &&
         ((*(longlong *)(param_1 + 0x40) != 0 && (*(char *)(param_1 + 0x58) != '\x03')))) {
        iVar2 = FUN_140a6fda0(param_1,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
        if (iVar2 != -1) {
          *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x10);
          FUN_1407c9f6e(param_1,3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140a32648 FUN_140a32648 body=229 status=ok
// SIG undefined FUN_140a32648(void)

void FUN_140a32648(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  local_30 = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    plVar2 = (longlong *)
             FUN_140a3272e(param_1 + 0x340,
                           ((uint)param_2 << 0x10 | uVar3) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar3 >> 4) + (uVar1 << 0x13 | uVar1 & 0xffff),&local_30);
    *plVar2 = param_3;
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar3 = (uint)param_3 & 0xffff;
    plVar2 = (longlong *)
             FUN_140a3272e(param_1 + 0x390,
                           ((uint)param_3 << 0x10 | uVar3) + (int)((ulonglong)param_3 >> 0x20) +
                           (uVar3 >> 4) + (uVar1 << 0x13 | uVar1 & 0xffff),&local_38);
    *plVar2 = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3272e FUN_140a3272e body=189 status=ok
// SIG undefined FUN_140a3272e(void)

longlong * FUN_140a3272e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140a327ce;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140a327ec(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_140a327ce:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140a327ec FUN_140a327ec body=304 status=ok
// SIG undefined FUN_140a327ec(void)

undefined4 *
FUN_140a327ec(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_1402ca3ce(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14090688a(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
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
      FUN_140906920(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3291e FUN_140a3291e body=40 status=ok
// SIG undefined FUN_140a3291e(void)

undefined8 FUN_140a3291e(undefined8 param_1,int param_2)

{
  FUN_140a32946();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a32946 FUN_140a32946 body=85 status=ok
// SIG undefined FUN_140a32946(void)

void FUN_140a32946(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b49c6c0;
  plVar3 = (longlong *)param_1[0x17];
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
  FUN_140a3299c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140a3299c FUN_140a3299c body=213 status=ok
// SIG undefined FUN_140a3299c(void)

void FUN_140a3299c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b039460;
  FUN_140a32a72(param_1 + 5);
  plVar4 = (longlong *)param_1[4];
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
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 1) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 1) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140a32a72 FUN_140a32a72 body=148 status=ok
// SIG undefined FUN_140a32a72(void)

void FUN_140a32a72(longlong *param_1)

{
  FUN_143c38609(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9b098(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9b04b(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9afb1(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140d9affe(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140a32b16 FUN_140a32b16 body=41 status=ok
// SIG undefined FUN_140a32b16(void)

void FUN_140a32b16(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 140a32b46 FUN_140a32b46 body=57 status=ok
// SIG undefined FUN_140a32b46(void)

void FUN_140a32b46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62fc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62fc0 = FUN_140002ddd(FUN_1464fbb0a,uVar1,L"GbxRumbleDef");
  }
  return;
}



// FUNCTION 140a32b80 FUN_140a32b80 body=770 status=ok
// SIG undefined FUN_140a32b80(void)

void FUN_140a32b80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_4f8 [32];
  undefined4 *local_4d8;
  longlong *local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined8 local_498;
  uint local_490;
  int local_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined8 local_450;
  longlong local_448;
  longlong *local_440;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  FUN_1401c3c2c();
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
  }
  FUN_140a32e84(&local_448,lVar7);
  if (local_440 != (longlong *)0x0) {
    iVar4 = (int)local_440[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_440[1];
      bVar8 = iVar4 == iVar5;
      if (bVar8) {
        *(int *)(local_440 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      iVar4 = iVar5;
      UNLOCK();
      plVar6 = local_440;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_440 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_440 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if ((local_448 != 0) && (*(int *)(param_1 + 0x6e0) == -1)) {
        local_498 = *(undefined8 *)(param_1 + 400);
        local_4c8 = *(undefined4 *)(param_1 + 0x160);
        uStack_4c4 = *(undefined4 *)(param_1 + 0x164);
        uStack_4c0 = *(undefined4 *)(param_1 + 0x168);
        uStack_4bc = *(undefined4 *)(param_1 + 0x16c);
        local_4b8 = *(undefined4 *)(param_1 + 0x170);
        uStack_4b4 = *(undefined4 *)(param_1 + 0x174);
        uStack_4b0 = *(undefined4 *)(param_1 + 0x178);
        uStack_4ac = *(undefined4 *)(param_1 + 0x17c);
        local_4a8 = *(undefined4 *)(param_1 + 0x180);
        uStack_4a4 = *(undefined4 *)(param_1 + 0x184);
        uStack_4a0 = *(undefined4 *)(param_1 + 0x188);
        uStack_49c = *(undefined4 *)(param_1 + 0x18c);
        local_48c = 0;
        if (param_1 == 0) {
          local_490 = 0;
          iVar4 = 0;
        }
        else {
          local_490 = *(uint *)(param_1 + 0xc);
          if ((int)local_490 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((local_490 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_490 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          iVar4 = *(int *)(lVar7 + 0x10);
          if (*(int *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar5 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar4 = *(int *)(lVar7 + 0x10);
            bVar8 = iVar4 == 0;
            if (bVar8) {
              *(int *)(lVar7 + 0x10) = iVar5;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar4 = iVar5;
            }
          }
        }
        local_4d8 = &local_4c8;
        local_48 = 0;
        local_40 = 0x1000000000;
        local_488 = CONCAT44(uStack_4c4,local_4c8);
        uStack_480 = CONCAT44(uStack_4bc,uStack_4c0);
        local_478 = CONCAT44(uStack_4b4,local_4b8);
        local_458 = CONCAT44(uStack_49c,uStack_4a0);
        local_468 = uStack_4b0;
        uStack_464 = uStack_4ac;
        uStack_460 = local_4a8;
        uStack_45c = uStack_4a4;
        local_450 = 0;
        local_470 = 0;
        local_4d0 = &local_448;
        local_48c = iVar4;
        FUN_140a32fbc(local_448 + 0x30,0,local_448 + 0x30);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
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
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if ((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) {
    bVar3 = *(byte *)(lVar7 + 0x152);
    if ((((bVar3 == 1) || ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))) &&
        (*(longlong *)(param_1 + 0xa8) != 0)) &&
       (((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x60) & 2) == 0 &&
        (*(char *)(param_1 + 0x668) == '\0')))) {
      FUN_147f44422(param_1);
      *(bool *)(param_1 + 0x629) = 0 < *(int *)(param_1 + 0x638);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_4f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a32e84 FUN_140a32e84 body=310 status=ok
// SIG undefined FUN_140a32e84(void)

longlong * FUN_140a32e84(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb23a68;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a32fbc FUN_140a32fbc body=1289 status=ok
// SIG undefined FUN_140a32fbc(void)

void FUN_140a32fbc(longlong param_1,int param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  double *pdVar24;
  longlong lVar25;
  double *pdVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_128 [32];
  double *local_108;
  double *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar25 = (longlong)param_2;
  piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar25 * 8);
  *piVar2 = *piVar2 + 1;
  iVar20 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar25 * 8);
  if (iVar20 == -1) {
    lVar22 = *(longlong *)(param_1 + 0x80) + lVar25 * 0x410;
    iVar20 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x408 + lVar25 * 0x410);
    if ((0xf < (longlong)iVar20) &&
       (*(double *)(param_1 + 0xa0) <= param_3[4] && param_3[4] != *(double *)(param_1 + 0xa0))) {
      FUN_147f4a09a(param_6,lVar22);
      iVar20 = FUN_147f4a124(param_1);
      *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar20 - 1U >> 3) * 4) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x60) + lVar25 * 8) = iVar20;
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + lVar25 * 8) = 0;
      pdVar26 = (double *)param_6[0x80];
      if ((double *)param_6[0x80] == (double *)0x0) {
        pdVar26 = param_6;
      }
      if ((longlong)*(int *)(param_6 + 0x81) != 0) {
        pdVar24 = pdVar26 + (longlong)*(int *)(param_6 + 0x81) * 8;
        do {
          local_f8 = *pdVar26;
          dStack_f0 = pdVar26[1];
          local_e8 = pdVar26[2];
          local_d8 = pdVar26[3];
          dStack_d0 = pdVar26[4];
          local_c8._8_8_ = 0;
          local_c8._0_8_ = pdVar26[5];
          dStack_e0 = 0.0;
          local_100 = param_6;
          local_108 = pdVar26;
          FUN_140a32fbc(param_1,param_2,param_3,&local_f8);
          pdVar26 = pdVar26 + 8;
        } while (pdVar26 != pdVar24);
      }
      *(undefined4 *)(param_6 + 0x81) = 0;
      if (*(int *)((longlong)param_6 + 0x40c) < 0) {
        FUN_147f4a22e(param_6,0);
      }
LAB_140a333b0:
      local_100 = param_6;
      local_108 = param_5;
      FUN_140a32fbc(param_1,param_2,param_3,param_4);
      goto LAB_140a33121;
    }
    *(uint *)(lVar22 + 0x408) = iVar20 + 1U;
    if (*(uint *)(lVar22 + 0x40c) < iVar20 + 1U) {
      FUN_1457652fe(lVar22,iVar20);
    }
    lVar25 = *(longlong *)(lVar22 + 0x400);
    if (*(longlong *)(lVar22 + 0x400) == 0) {
      lVar25 = lVar22;
    }
    lVar22 = (longlong)iVar20 * 0x40;
    uVar11 = *(undefined4 *)param_5;
    uVar12 = *(undefined4 *)((longlong)param_5 + 4);
    uVar13 = *(undefined4 *)(param_5 + 1);
    uVar14 = *(undefined4 *)((longlong)param_5 + 0xc);
    dVar3 = param_5[2];
    dVar9 = param_5[3];
    dVar4 = param_5[4];
    dVar30 = param_5[5];
    dVar32 = param_5[7];
    pdVar26 = (double *)(lVar25 + 0x30 + lVar22);
    *pdVar26 = param_5[6];
    pdVar26[1] = dVar32;
    pdVar26 = (double *)(lVar25 + 0x20 + lVar22);
    *pdVar26 = dVar4;
    pdVar26[1] = dVar30;
    pdVar26 = (double *)(lVar25 + 0x10 + lVar22);
    *pdVar26 = dVar3;
    pdVar26[1] = dVar9;
    puVar1 = (undefined4 *)(lVar25 + lVar22);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    if ((((*(int *)((longlong)param_5 + 0x3c) == 0) ||
         (uVar21 = *(uint *)(param_5 + 7), (int)uVar21 < 0)) || (DAT_14c9647dc <= (int)uVar21)) ||
       (((plVar23 = (longlong *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
         plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)((longlong)param_5 + 0x3c))) ||
        ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) goto LAB_140a33121;
    lVar25 = *plVar23;
  }
  else {
    dVar30 = *param_4;
    dVar32 = param_4[1];
    dVar33 = param_4[2];
    dVar36 = param_4[3];
    dVar15 = *param_3;
    dVar16 = param_3[1];
    dVar17 = param_3[2];
    dVar18 = param_3[3];
    dVar3 = param_3[9];
    dVar9 = dVar32 - (dVar16 - dVar3);
    auVar27._0_8_ = (dVar15 + dVar3) - dVar30;
    auVar27._8_8_ = (dVar16 + dVar3) - dVar32;
    auVar28._8_4_ = SUB84(dVar9,0);
    auVar28._0_8_ = dVar30 - (dVar15 - dVar3);
    auVar28._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar28 = minpd(auVar27,auVar28);
    auVar37._0_8_ = (dVar17 + dVar3) - dVar33;
    auVar37._8_8_ = (dVar18 + dVar3) - dVar36;
    auVar38._8_8_ = dVar36 - (dVar18 - dVar3);
    auVar38._0_8_ = dVar33 - (dVar17 - dVar3);
    auVar38 = minpd(auVar37,auVar38);
    dVar9 = param_3[8];
    dVar4 = param_3[8];
    lVar22 = -(ulonglong)(dVar4 < auVar28._8_8_ + param_4[5]);
    auVar6._8_4_ = (int)lVar22;
    auVar6._0_8_ = -(ulonglong)(dVar9 < auVar28._0_8_ + param_4[4]);
    auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    iVar19 = movmskpd((int)*(longlong *)(param_1 + 0x60),auVar6);
    auVar29._8_8_ = -(ulonglong)(dVar4 < auVar38._8_8_ + param_4[7]);
    auVar29._0_8_ = -(ulonglong)(dVar9 < auVar38._0_8_ + param_4[6]);
    uVar21 = movmskpd((int)param_6,auVar29);
    if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
      pdVar26 = param_3 + 8;
      auVar7._8_4_ = (int)-(ulonglong)(dVar16 < dVar32);
      auVar7._0_8_ = -(ulonglong)(dVar15 < dVar30);
      auVar7._12_4_ = (int)(-(ulonglong)(dVar16 < dVar32) >> 0x20);
      iVar19 = movmskpd(iVar19,auVar7);
      auVar34._8_8_ = -(ulonglong)(dVar18 < dVar36);
      auVar34._0_8_ = -(ulonglong)(dVar17 < dVar33);
      uVar21 = movmskpd(0,auVar34);
      iVar19 = iVar19 + (uVar21 & 1) * 4;
      param_2 = iVar20 + iVar19;
      auVar31._4_4_ = iVar19;
      auVar31._0_4_ = iVar19;
      auVar31._8_4_ = iVar19;
      auVar31._12_4_ = iVar19;
      auVar38 = pmovsxbd(auVar34,0x8040201);
      auVar31 = auVar31 & auVar38;
      dVar33 = (double)(float)-(uint)(auVar31._0_4_ == auVar38._0_4_);
      dVar36 = (double)(float)-(uint)(auVar31._4_4_ == auVar38._4_4_);
      dVar30 = (double)(float)-(uint)(auVar31._8_4_ == auVar38._8_4_);
      dVar32 = (double)(float)-(uint)(auVar31._12_4_ == auVar38._12_4_);
      uVar10 = (ulonglong)dVar3 & (ulonglong)dVar36;
      auVar35._0_8_ = ~(ulonglong)dVar33 & (ulonglong)-dVar3;
      auVar35._8_8_ = ~(ulonglong)dVar36 & (ulonglong)-dVar3;
      auVar8._8_4_ = (int)uVar10;
      auVar8._0_8_ = (ulonglong)dVar3 & (ulonglong)dVar33;
      auVar8._12_4_ = (int)(uVar10 >> 0x20);
      local_f8 = SUB168(auVar35 | auVar8,0) + dVar15;
      dStack_f0 = SUB168(auVar35 | auVar8,8) + dVar16;
      local_e8 = ((double)(~(ulonglong)dVar30 & (ulonglong)-dVar3 |
                          (ulonglong)dVar3 & (ulonglong)dVar30) + dVar17) * 1.0;
      dStack_e0 = ((double)(~(ulonglong)dVar32 & (ulonglong)-dVar3 |
                           (ulonglong)dVar3 & (ulonglong)dVar32) + dVar18) * 0.0;
      param_3 = &local_f8;
      local_b8 = *pdVar26 * 0.5 * 1.0625;
      local_c8._8_4_ = SUB84(dVar4 * 0.0,0);
      local_c8._0_8_ = dVar9 * 1.0;
      local_c8._12_4_ = (int)((ulonglong)(dVar4 * 0.0) >> 0x20);
      local_b0 = *pdVar26 - local_b8;
      local_d8 = dVar9;
      dStack_d0 = dVar4;
      goto LAB_140a333b0;
    }
    lVar5 = *(longlong *)(param_1 + 0x80);
    lVar25 = lVar25 * 0x410;
    lVar22 = lVar5 + lVar25;
    iVar20 = *(int *)(lVar5 + 0x408 + lVar25);
    *(uint *)(lVar5 + 0x408 + lVar25) = iVar20 + 1U;
    if (*(uint *)(lVar5 + 0x40c + lVar25) < iVar20 + 1U) {
      FUN_1457652fe(lVar22,iVar20);
    }
    lVar25 = *(longlong *)(lVar22 + 0x400);
    if (*(longlong *)(lVar22 + 0x400) == 0) {
      lVar25 = lVar22;
    }
    lVar22 = (longlong)iVar20 * 0x40;
    uVar11 = *(undefined4 *)param_5;
    uVar12 = *(undefined4 *)((longlong)param_5 + 4);
    uVar13 = *(undefined4 *)(param_5 + 1);
    uVar14 = *(undefined4 *)((longlong)param_5 + 0xc);
    dVar3 = param_5[2];
    dVar9 = param_5[3];
    dVar4 = param_5[4];
    dVar30 = param_5[5];
    dVar32 = param_5[7];
    pdVar26 = (double *)(lVar25 + 0x30 + lVar22);
    *pdVar26 = param_5[6];
    pdVar26[1] = dVar32;
    pdVar26 = (double *)(lVar25 + 0x20 + lVar22);
    *pdVar26 = dVar4;
    pdVar26[1] = dVar30;
    pdVar26 = (double *)(lVar25 + 0x10 + lVar22);
    *pdVar26 = dVar3;
    pdVar26[1] = dVar9;
    puVar1 = (undefined4 *)(lVar25 + lVar22);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    lVar25 = FUN_14479d2ce(param_5 + 7);
  }
  if (lVar25 != 0) {
    *(ulonglong *)(lVar25 + 0x6e0) = CONCAT44(iVar20,param_2);
  }
LAB_140a33121:
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a334c6 FUN_140a334c6 body=8311 status=ok
// SIG undefined FUN_140a334c6(void)

longlong *
FUN_140a334c6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  longlong **pplVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined1 *puVar29;
  uint uVar30;
  int iVar31;
  undefined1 *puVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong local_250;
  char local_241;
  undefined8 local_240;
  undefined4 local_234;
  longlong *local_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  ulonglong local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong **local_1d0;
  undefined8 local_1c8;
  longlong **pplStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  longlong **pplStack_1a0;
  ulonglong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 local_170;
  uint uStack_168;
  uint uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  uint local_bc;
  int iStack_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  uint local_a0;
  ulonglong local_90;
  
  local_241 = (char)param_4;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if ((param_3 == (longlong *)0x0) ||
     ((*(byte *)(*(longlong *)(*param_3 + 0x680) + (longlong)(int)param_3[1]) & 4) == 0)) {
    iVar26 = *(int *)(param_1 + 0xd0);
    iVar31 = *(int *)(param_1 + 0xfc);
    if (iVar26 != iVar31) {
      uVar14 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar14 = uVar14 >> 0x10 ^ uVar14;
      lVar10 = *(longlong *)(param_1 + 0x108);
      if (*(longlong *)(param_1 + 0x108) == 0) {
        lVar10 = param_1 + 0x100;
      }
      iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar14) * 4);
      if (iVar9 != -1) {
        plVar27 = (longlong *)(param_1 + 200);
        do {
          if (*(longlong **)(*plVar27 + (longlong)iVar9 * 0x20) == param_3) {
            fVar41 = 0.0;
            if (param_3 == (longlong *)0x0) {
LAB_140a34f9c:
              local_240 = (longlong *)((ulonglong)local_240._4_4_ << 0x20);
              fVar40 = 0.0;
            }
            else {
              lVar10 = *(longlong *)(*(longlong *)(*param_3 + 200) + (longlong)(int)param_3[1] * 8);
              if ((lVar10 == 0) || (*(int *)(lVar10 + 0x1c) != 2)) goto LAB_140a34f9c;
              local_240 = (longlong *)
                          CONCAT44(local_240._4_4_,
                                   (int)CONCAT71((int7)(int3)((uint)(int)param_3[1] >> 8),
                                                 *(undefined1 *)(lVar10 + 0x1c3)));
              fVar40 = *(float *)(lVar10 + 0x1c8);
              fVar41 = *(float *)(lVar10 + 0x1cc);
              if (DAT_14c75f3e0 == '\0') {
                FUN_146ee71e6();
                iVar26 = *(int *)(param_1 + 0xd0);
                iVar31 = *(int *)(param_1 + 0xfc);
              }
            }
            if (iVar26 == iVar31) goto LAB_140a3498e;
            lVar10 = param_1 + 0x100;
            if (*(longlong *)(param_1 + 0x108) != 0) {
              lVar10 = *(longlong *)(param_1 + 0x108);
            }
            iVar26 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar14) * 4);
            if (iVar26 == -1) goto LAB_140a3498e;
            goto LAB_140a3367a;
          }
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + *plVar27 + 0x18);
        } while (iVar9 != -1);
      }
    }
  }
  goto LAB_140a341ff;
  while (iVar26 = *(int *)(local_208 + 0x18), iVar26 != -1) {
LAB_140a3367a:
    local_208 = *plVar27 + (longlong)iVar26 * 0x20;
    if (*(longlong **)(*plVar27 + (longlong)iVar26 * 0x20) == param_3) goto LAB_140a3368f;
  }
LAB_140a3498e:
  local_208 = 0;
LAB_140a3368f:
  local_234 = 0;
  if (*(int *)(param_1 + 0x3a0) != *(int *)(param_1 + 0x3cc)) {
    lVar10 = param_1 + 0x3d0;
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x3d8);
    }
    iVar26 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x3e0) - 1U & uVar14) * 4);
    if (iVar26 == -1) {
      local_234 = 0;
    }
    else {
      do {
        param_4 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        local_234 = (undefined4)param_4;
        if (*(longlong **)(*(longlong *)(param_1 + 0x398) + (longlong)iVar26 * 0x10) == param_3)
        break;
        iVar26 = *(int *)((longlong)iVar26 * 0x10 + *(longlong *)(param_1 + 0x398) + 8);
        local_234 = 0;
      } while (iVar26 != -1);
    }
  }
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0x80;
  iStack_b8 = -1;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  plVar21 = *(longlong **)(*(longlong *)(*param_3 + 0x5a8) + (longlong)(int)param_3[1] * 0x10);
  plVar18 = (longlong *)0x0;
  if ((plVar21 != (longlong *)0x0) &&
     (plVar18 = (longlong *)0x0, 2 < *(byte *)((longlong)plVar21 + 0xc))) {
    plVar18 = plVar21;
  }
  local_1f8 = (longlong *)(local_208 + 8);
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0x80;
  uStack_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_220 = plVar27;
  local_230 = param_3;
  local_258 = param_2;
  local_250 = param_1;
  iVar26 = local_c0;
  if (0 < (longlong)*(int *)(local_208 + 0x10)) {
    local_228 = param_1 + 0x118;
    local_210 = (longlong *)(param_1 + 0x378);
    local_200 = 0;
    uVar37 = (longlong)*(int *)(local_208 + 0x10);
    local_218 = plVar18;
    do {
      plVar27 = *(longlong **)(*local_1f8 + -8 + uVar37 * 8);
      if ((plVar27 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar27 + 0xc))) {
        lVar10 = *plVar27;
        lVar16 = (longlong)(int)plVar27[1];
        fVar42 = *(float *)(*(longlong *)(lVar10 + 0x620) + lVar16 * 4);
        fVar39 = *(float *)(*(longlong *)(lVar10 + 0x638) + lVar16 * 4);
        if (fVar42 <= fVar39) {
          fVar42 = fVar39;
        }
        if ((*(float *)(*(longlong *)(lVar10 + 0x650) + lVar16 * 4) <= fVar42) ||
           (local_241 != '\0')) {
          if ((local_200 & 1) == 0) {
            if (0.0 < DAT_14c75f20c) {
              plVar21 = local_218;
              if (local_218 == (longlong *)0x0) {
                plVar21 = local_230;
              }
              FUN_140a36862(local_250,plVar21);
            }
            iVar26 = FUN_140196188(local_228,local_230);
            local_1d0 = (longlong **)CONCAT44(local_1d0._4_4_,iVar26);
            if (iVar26 != -1) {
              lVar10 = FUN_1401961f6(local_228,iVar26);
              if (lVar10 != 0) {
                FUN_1429905ba(local_228,lVar10,local_230);
              }
              plVar21 = local_230;
              local_188 = (longlong *)CONCAT71(local_188._1_7_,1);
              FUN_1447dc87e(local_250,local_230);
              FUN_1447cbafe(&local_138,&local_188,&local_1d0,0);
              local_188 = (longlong *)0x0;
              uStack_180 = (longlong **)CONCAT44(uStack_180._4_4_,1);
              FUN_140509e62(&local_188,1,0);
              *local_188 = (longlong)plVar21;
              FUN_140509fa0(local_228,&local_188,1);
              if (local_188 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          iVar26 = FUN_140196188(local_228,plVar27);
          lVar10 = local_250;
          local_1d0 = (longlong **)CONCAT44(local_1d0._4_4_,iVar26);
          if (iVar26 == -1) {
            FUN_140a35b70(local_250,plVar27,local_230);
            FUN_1402bf4a4(lVar10,plVar27);
            lVar10 = local_208;
            uVar14 = *(uint *)(local_208 + 0x10);
            if (uVar37 != uVar14) {
              iVar26 = uVar14 - (int)uVar37;
              if (0 < iVar26) {
                iVar26 = 1;
              }
              memmove((void *)(*(longlong *)(local_208 + 8) + (uVar37 - 1) * 8),
                      (void *)(*(longlong *)(local_208 + 8) + (longlong)(int)(uVar14 - iVar26) * 8),
                      (longlong)iVar26 << 3);
              uVar14 = *(uint *)(lVar10 + 0x10);
            }
            *(uint *)(lVar10 + 0x10) = uVar14 - 1;
          }
          else {
            FUN_1447cbafe(&local_138,&local_188,&local_1d0,0);
            uVar17 = uStack_1e0;
            lVar10 = (longlong)(int)uStack_1e0;
            uVar14 = (int)uStack_1e0 + 1;
            uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar14);
            if (uStack_1e0._4_4_ < uVar14) {
              FUN_1406b7a4a(&local_1e8,uVar17 & 0xffffffff);
            }
            *(longlong **)(local_1e8 + lVar10 * 8) = plVar27;
          }
          local_188 = plVar27;
          FUN_140a35574(local_258,&local_1a8,&local_188);
          lVar10 = *(longlong *)(*plVar27 + 200);
          lVar16 = *(longlong *)(lVar10 + (longlong)(int)plVar27[1] * 8);
          if (((lVar16 != 0) && (*(int *)(lVar16 + 0x1c) == 2)) &&
             ((*(char *)(lVar16 + 0x1c0) < '\0' || ((*(byte *)(lVar16 + 0x1c1) & 0x10) != 0)))) {
            iVar26 = *(int *)(local_250 + 0x380);
            *(uint *)(local_250 + 0x380) = iVar26 + 1U;
            if (*(uint *)(local_250 + 900) < iVar26 + 1U) {
              FUN_145765404(local_210,iVar26);
            }
            lVar10 = *local_210;
            lVar28 = (longlong)iVar26 * 0x98;
            puVar12 = (uint *)(lVar28 + lVar10);
            FUN_140a3553e(puVar12);
            *(undefined8 *)(lVar10 + 8 + lVar28) =
                 *(undefined8 *)(*(longlong *)(*plVar27 + 200) + (longlong)(int)plVar27[1] * 8);
            lVar36 = plVar27[1];
            lVar35 = *(longlong *)(*plVar27 + 0x28);
            *(undefined8 *)(lVar10 + 0x20 + lVar28) =
                 *(undefined8 *)(lVar35 + 0x10 + (longlong)(int)lVar36 * 0x18);
            puVar1 = (undefined8 *)(lVar35 + (longlong)(int)lVar36 * 0x18);
            uVar7 = puVar1[1];
            puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            lVar36 = (longlong)(int)plVar27[1];
            lVar35 = *(longlong *)(*plVar27 + 0x278);
            fVar39 = *(float *)(lVar35 + 8 + lVar36 * 0xc);
            fVar3 = *(float *)(lVar35 + 4 + lVar36 * 0xc);
            *(double *)(lVar10 + 0x28 + lVar28) = (double)*(float *)(lVar35 + lVar36 * 0xc);
            *(double *)(lVar10 + 0x30 + lVar28) = (double)fVar3;
            *(double *)(lVar10 + 0x38 + lVar28) = (double)fVar39;
            lVar36 = (longlong)(int)plVar27[1];
            lVar35 = *(longlong *)(*plVar27 + 0x290);
            fVar39 = *(float *)(lVar35 + 8 + lVar36 * 0xc);
            fVar3 = *(float *)(lVar35 + 4 + lVar36 * 0xc);
            *(double *)(lVar10 + 0x40 + lVar28) = (double)*(float *)(lVar35 + lVar36 * 0xc);
            *(double *)(lVar10 + 0x48 + lVar28) = (double)fVar3;
            *(double *)(lVar10 + 0x50 + lVar28) = (double)fVar39;
            *(undefined8 *)(lVar10 + 0x58 + lVar28) =
                 *(undefined8 *)(*(longlong *)(*plVar27 + 0x3b0) + (longlong)(int)plVar27[1] * 8);
            plVar21 = *(longlong **)(*(longlong *)(*plVar27 + 0x60) + (longlong)(int)plVar27[1] * 8)
            ;
            if ((plVar21 != (longlong *)0x0) && (*(char *)((longlong)plVar21 + 0x1a) == '\x01')) {
              (**(code **)(*plVar21 + 0x80))(plVar21,&local_188);
              *(longlong **)(puVar12 + 0x1c) = local_178;
              *(longlong **)(puVar12 + 0x18) = local_188;
              *(longlong ***)(puVar12 + 0x1a) = uStack_180;
              puVar12[0x1e] = (uint)local_170;
              puVar12[0x1f] = local_170._4_4_;
              puVar12[0x20] = uStack_168;
              puVar12[0x21] = uStack_164;
              *(longlong **)(puVar12 + 0x22) = local_160;
            }
            uVar14 = 0xffffffff;
            if (*(int *)(lVar16 + 0x358) != *(int *)(lVar16 + 900)) {
              uVar30 = ((uint)((ulonglong)plVar27 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)plVar27 >> 4)) * -0x7a143595;
              uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
              lVar10 = lVar16 + 0x388;
              if (*(longlong *)(lVar16 + 0x390) != 0) {
                lVar10 = *(longlong *)(lVar16 + 0x390);
              }
              iVar26 = *(int *)(lVar10 + (ulonglong)
                                         (*(int *)(lVar16 + 0x398) - 1U & (uVar30 >> 0x10 ^ uVar30))
                                         * 4);
              if (iVar26 != -1) {
                do {
                  puVar1 = (undefined8 *)(*(longlong *)(lVar16 + 0x350) + (longlong)iVar26 * 0x18);
                  if ((longlong *)*puVar1 == plVar27) {
                    if ((puVar1 != (undefined8 *)0x0) && ((uint *)(puVar1 + 1) != (uint *)0x0)) {
                      uVar14 = *(uint *)(puVar1 + 1);
                    }
                    break;
                  }
                  iVar26 = *(int *)(puVar1 + 2);
                } while (iVar26 != -1);
              }
            }
            puVar12[0x24] = uVar14;
            *(char *)(puVar12 + 0x25) = (char)local_234;
            lVar10 = 0;
            *puVar12 = *(byte *)(lVar16 + 0x1c1) >> 3 & 2 | (uint)(*(byte *)(lVar16 + 0x1c0) >> 7);
          }
          local_200 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
        }
        iVar26 = iStack_b8;
        uVar17 = uStack_e0;
        if (((ulonglong)local_240 & 1) != 0) {
          if (local_b4 == 0) {
            iVar26 = (int)uStack_e0;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + 1);
            if (uStack_e0._4_4_ == iVar26) {
              FUN_14482b872(&local_e8,uVar17 & 0xffffffff);
            }
            iVar31 = local_c0;
            if (local_c0 == 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar9 = local_c0 + -1;
              }
              iVar9 = iVar9 >> 5;
            }
            iVar15 = local_c0 + 1;
            iVar20 = local_c0 + 0x1f;
            if (-1 < local_c0) {
              iVar20 = local_c0;
            }
            if (iVar20 >> 5 == iVar9) {
              local_c0 = iVar15;
            }
            else {
              if ((int)local_bc <= local_c0) {
                if (local_c0 + 0x20U < 0xa0) {
                  local_bc = 0x80;
                }
                else {
                  uVar14 = local_c0 + 0x20U >> 5;
                  uVar17 = (ulonglong)uVar14;
                  if (local_bc + 0x1f < 0xa0) {
                    uVar30 = 4;
                    if (4 < uVar14) {
                      uVar30 = uVar14;
                    }
                  }
                  else {
                    uVar30 = uVar14 + (uVar14 * 3 >> 3) + 0x10;
                  }
                  uVar22 = (ulonglong)(uVar30 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar14 = (uint)(uVar22 + 0xf);
                      if (uVar30 < 0x1ffd) {
                        uVar22 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar22 + 0xf >> 4]];
                      }
                      else {
                        uVar25 = (ulonglong)(uVar14 & 0xfffffff0);
                        if (uVar25 < 0x7ff1) {
                          bVar13 = (&DAT_14c841e00)[uVar14 >> 4];
                          uVar23 = 0x32;
                          if (0x32 < bVar13) {
                            uVar23 = (ulonglong)bVar13;
                          }
                          uVar34 = 0x32 - (ulonglong)bVar13;
                          do {
                            uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0)
                            goto LAB_140a34a2b;
                            lVar10 = uVar23 + 1 + uVar34;
                            uVar34 = uVar34 - 1;
                          } while (lVar10 != 0x33);
                        }
                        uVar22 = 0x10;
                        if (0x10 < DAT_14c841df8) {
                          uVar22 = (ulonglong)DAT_14c841df8;
                        }
                        uVar22 = -uVar22 & (uVar25 + uVar22) - 1;
                      }
                    }
                    else {
                      local_1f0 = uVar17;
                      uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
                      uVar17 = local_1f0;
                    }
                  }
LAB_140a34a2b:
                  iVar9 = (int)(uVar22 >> 2);
                  local_bc = iVar9 << 5;
                  if (iVar9 < (int)uVar17) {
                    local_bc = 0xffffffe0;
                  }
                }
                FUN_1446efbd8(local_d8,local_c0);
                iVar15 = local_c0 + 1;
              }
              iVar9 = iVar15 + 0x1f;
              if (-1 < iVar15) {
                iVar9 = iVar15;
              }
              local_c0 = iVar15;
              if (iVar15 % 0x20 != 0) {
                puVar12 = local_c8;
                if (local_c8 == (uint *)0x0) {
                  puVar12 = local_d8;
                }
                bVar13 = -(char)(iVar15 % 0x20);
                puVar12[iVar9 >> 5] = (puVar12[iVar9 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
              }
            }
            lVar10 = (longlong)iVar26;
            puVar12 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar12 = local_d8;
            }
            bVar13 = (byte)iVar31 & 0x1f;
            puVar12[iVar20 >> 5] =
                 puVar12[iVar20 >> 5] & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
          }
          else {
            lVar10 = (longlong)iStack_b8;
            iStack_b8 = *(int *)(local_e8 + 4 + lVar10 * 0x18);
            local_b4 = local_b4 + -1;
            if (local_b4 != 0) {
              *(undefined4 *)(local_e8 + (longlong)iStack_b8 * 0x18) = 0xffffffff;
            }
          }
          puVar12 = local_c8;
          if (local_c8 == (uint *)0x0) {
            puVar12 = local_d8;
          }
          iVar31 = iVar26 + 0x1f;
          if (-1 < iVar26) {
            iVar31 = iVar26;
          }
          puVar12[iVar31 >> 5] = puVar12[iVar31 >> 5] | 1 << ((byte)iVar26 & 0x1f);
          puVar1 = (undefined8 *)(local_e8 + lVar10 * 0x18);
          *puVar1 = plVar27;
          *(float *)(puVar1 + 1) = fVar42;
          *(undefined4 *)(puVar1 + 2) = 0xffffffff;
          uVar14 = ((uint)((ulonglong)plVar27 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar27 >> 4)) *
                   -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          uVar14 = uVar14 >> 0x10 ^ uVar14;
          uVar30 = (int)uStack_e0 - local_b4;
          if ((uVar30 != 0) && (uVar30 != 1)) {
            puVar32 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar32 = local_b0;
            }
            iVar31 = *(int *)(puVar32 + (ulonglong)(local_a0 - 1 & uVar14) * 4);
            while (iVar31 != -1) {
              puVar2 = (undefined8 *)(local_e8 + (longlong)iVar31 * 0x18);
              if ((longlong *)*puVar2 == plVar27) {
                uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
                uVar5 = *(undefined4 *)(puVar1 + 1);
                uVar6 = *(undefined4 *)((longlong)puVar1 + 0xc);
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
                *(undefined4 *)(puVar2 + 1) = uVar5;
                *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
                FUN_146e0f818(&local_e8,iVar26);
                goto LAB_140a33a16;
              }
              iVar31 = *(int *)(puVar2 + 2);
            }
          }
          if (uVar30 < 4) {
            uVar24 = 1;
          }
          else {
            uVar17 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
            lVar10 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            uVar24 = 1 << ((byte)lVar10 & 0x1f);
          }
          if (((int)uVar30 < 1) || ((int)uVar24 <= (int)local_a0)) {
            uVar14 = local_a0 - 1 & uVar14;
            *(uint *)((longlong)puVar1 + 0x14) = uVar14;
            puVar32 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar32 = local_b0;
            }
            *(undefined4 *)(puVar1 + 2) =
                 *(undefined4 *)
                  (puVar32 + ((longlong)(int)local_a0 - 1U & (longlong)(int)uVar14) * 4);
            puVar32 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar32 = local_b0;
            }
            *(int *)(puVar32 + ((longlong)(int)local_a0 - 1U & (longlong)(int)uVar14) * 4) = iVar26;
          }
          else {
            local_a0 = uVar24;
            if (local_a8 != (undefined1 *)0x0) {
              FUN_1446efa72(&local_a8,0,0);
            }
            uVar14 = local_a0;
            if (local_a0 == 1) {
              if (local_a8 != (undefined1 *)0x0) {
                FUN_1446efa72(&local_a8,0,0);
              }
LAB_140a33e2a:
              uVar30 = 0;
              do {
                puVar32 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar32 = local_b0;
                }
                *(undefined4 *)(puVar32 + (ulonglong)(local_a0 + 0x7fffffff & uVar30) * 4) =
                     0xffffffff;
                uVar30 = uVar30 + 1;
              } while (uVar14 != uVar30);
            }
            else {
              if (local_a0 == 0) goto LAB_140a33a16;
              FUN_1446efa72(&local_a8,0,local_a0);
              if (0 < (int)uVar14) goto LAB_140a33e2a;
            }
            if (local_c0 == 0) {
              uVar17 = 0;
              uVar22 = 1;
              iVar26 = 0;
              iVar31 = 0;
            }
            else {
              puVar12 = local_c8;
              if (local_c8 == (uint *)0x0) {
                puVar12 = local_d8;
              }
              uVar14 = *puVar12;
              if (uVar14 == 0) {
                iVar26 = local_c0 + 0x1e;
                if (-1 < local_c0 + -1) {
                  iVar26 = local_c0 + -1;
                }
                uVar17 = 0;
                uVar30 = iVar26 >> 5;
                if (iVar26 >> 5 < 1) {
                  uVar30 = 0;
                }
                iVar31 = 0;
                do {
                  if (uVar30 == uVar17) goto LAB_140a33a16;
                  iVar31 = iVar31 + 0x20;
                  uVar14 = puVar12[uVar17 + 1];
                  uVar17 = uVar17 + 1;
                } while (uVar14 == 0);
              }
              else {
                uVar17 = 0;
                iVar31 = 0;
              }
              uVar22 = (ulonglong)(-uVar14 & uVar14);
              uVar25 = uVar22 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              iVar26 = (iVar31 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar26) {
                iVar26 = local_c0;
              }
            }
            if (iVar26 < local_c0) {
              puVar32 = &DAT_ffffffff;
              do {
                lVar10 = (longlong)iVar26;
                uVar25 = *(ulonglong *)(local_e8 + lVar10 * 0x18);
                uVar14 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
                uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
                uVar25 = (longlong)(int)(uVar14 >> 0x10 ^ uVar14) & (longlong)(int)local_a0 - 1U;
                iVar9 = (int)uVar25;
                *(int *)(local_e8 + 0x14 + lVar10 * 0x18) = iVar9;
                puVar29 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar29 = local_b0;
                }
                *(undefined4 *)(local_e8 + 0x10 + lVar10 * 0x18) =
                     *(undefined4 *)(puVar29 + ((longlong)(int)local_a0 - 1U & uVar25) * 4);
                puVar29 = local_a8;
                if (local_a8 == (undefined1 *)0x0) {
                  puVar29 = local_b0;
                }
                *(int *)(puVar29 + ((longlong)iVar9 & (longlong)(int)local_a0 - 1U) * 4) = iVar26;
                uVar14 = ~(uint)uVar22 & (uint)puVar32;
                puVar12 = local_c8;
                if (local_c8 == (uint *)0x0) {
                  puVar12 = local_d8;
                }
                iVar26 = (int)uVar17;
                lVar10 = (longlong)iVar26;
                uVar30 = puVar12[lVar10] & uVar14;
                if (uVar30 == 0) {
                  iVar9 = local_c0 + 0x1e;
                  if (-1 < local_c0 + -1) {
                    iVar9 = local_c0 + -1;
                  }
                  iVar9 = iVar9 >> 5;
                  iVar20 = iVar9;
                  if (iVar9 < iVar26) {
                    iVar20 = iVar26;
                  }
                  if (iVar9 <= iVar26) break;
                  lVar16 = 0;
                  while( true ) {
                    iVar31 = iVar31 + 0x20;
                    uVar30 = puVar12[lVar10 + lVar16 + 1];
                    if (uVar30 != 0) break;
                    lVar16 = lVar16 + 1;
                    if (iVar20 - lVar10 == lVar16) goto LAB_140a33a16;
                  }
                  uVar17 = (ulonglong)(iVar26 + (int)lVar16 + 1);
                  uVar14 = 0xffffffff;
                }
                puVar32 = (undefined1 *)(ulonglong)uVar14;
                uVar22 = (ulonglong)(-uVar30 & uVar30);
                uVar25 = uVar22 * 2 + 1;
                lVar10 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                iVar26 = (iVar31 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              } while (iVar26 < local_c0);
            }
          }
        }
LAB_140a33a16:
        *(undefined4 *)(*(longlong *)(*plVar27 + 0x638) + (longlong)(int)plVar27[1] * 4) = 0;
      }
      param_2 = local_258;
      bVar38 = 1 < uVar37;
      uVar37 = uVar37 - 1;
    } while (bVar38);
    iVar26 = local_c0;
    if ((int)uStack_1e0 != 0) {
      FUN_140509fa0(local_228,&local_1e8,1);
      iVar26 = local_c0;
    }
  }
  local_c0 = iVar26;
  if (((ulonglong)local_240 & 1) != 0) {
    if (iVar26 == 0) {
      uVar17 = 1;
      uVar37 = 0;
      iVar31 = 0;
      iVar9 = 0;
    }
    else {
      puVar12 = local_c8;
      if (local_c8 == (uint *)0x0) {
        puVar12 = local_d8;
      }
      uVar14 = *puVar12;
      if (uVar14 == 0) {
        iVar31 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar31 = iVar26 + -1;
        }
        uVar37 = 0;
        uVar17 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar17 = uVar37;
        }
        iVar9 = 0;
        do {
          if (uVar17 == uVar37) goto LAB_140a3409e;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar12[uVar37 + 1];
          uVar37 = uVar37 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar37 = 0;
        iVar9 = 0;
      }
      uVar17 = (ulonglong)(-uVar14 & uVar14);
      uVar22 = uVar17 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar31 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar26 <= iVar31) {
        iVar31 = iVar26;
      }
    }
    if (iVar31 != iVar26) {
      plVar27 = param_2 + 7;
      uVar14 = 0xffffffff;
      iVar20 = iVar26;
      local_240 = plVar27;
      do {
        plVar21 = *(longlong **)(local_e8 + (longlong)iVar31 * 0x18);
        plVar18 = (longlong *)0x0;
        if (2 < *(byte *)((longlong)plVar21 + 0xc)) {
          plVar18 = plVar21;
        }
        fVar42 = *(float *)(local_e8 + 8 + (longlong)iVar31 * 0x18);
        if ((0.0 < fVar40) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
          uVar30 = ((uint)((ulonglong)plVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar21 >> 4)) *
                   -0x7a143595;
          uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
          plVar33 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar33 = plVar27;
          }
          iVar31 = *(int *)((longlong)plVar33 +
                           (ulonglong)((int)param_2[9] - 1U & (uVar30 >> 0x10 ^ uVar30)) * 4);
          if (iVar31 != -1) {
            do {
              if (*(longlong **)(*param_2 + (longlong)iVar31 * 0x10) == plVar21) {
                fVar42 = fVar42 - *(float *)(*(longlong *)(*plVar18 + 0x650) +
                                            (longlong)(int)plVar18[1] * 4);
                if (fVar42 <= 0.0) goto LAB_140a34c8c;
                fVar42 = (fVar42 * fVar40) /
                         (float)*(int *)(*(longlong *)(*plVar18 + 0x668) + 8 +
                                        (longlong)(int)plVar18[1] * 0x10);
                goto LAB_140a34ddd;
              }
              iVar31 = *(int *)((longlong)iVar31 * 0x10 + *param_2 + 8);
            } while (iVar31 != -1);
          }
        }
        if (0.0 < fVar41) {
          fVar42 = fVar42 * fVar41;
LAB_140a34ddd:
          if (0.0 < fVar42) {
            lVar10 = (longlong)(int)plVar18[1] * 0x10;
            lVar16 = (longlong)*(int *)(*(longlong *)(*plVar18 + 0x668) + 8 + lVar10);
            if (lVar16 != 0) {
              lVar10 = *(longlong *)(*(longlong *)(*plVar18 + 0x668) + lVar10);
              lVar35 = 0;
              do {
                plVar27 = *(longlong **)(lVar10 + lVar35);
                if ((plVar27 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar27 + 0xc))) {
                  fVar39 = *(float *)(*(longlong *)(*plVar27 + 0x638) +
                                     (longlong)(int)plVar27[1] * 4);
                  if (fVar39 <= fVar42) {
                    fVar39 = fVar42;
                  }
                  *(float *)(*(longlong *)(*plVar27 + 0x638) + (longlong)(int)plVar27[1] * 4) =
                       fVar39;
                  FUN_1402bf4a4(local_250);
                }
                lVar35 = lVar35 + 0x10;
                plVar27 = local_240;
                param_2 = local_258;
                iVar20 = local_c0;
              } while (lVar16 * 0x10 != lVar35);
            }
          }
        }
LAB_140a34c8c:
        uVar14 = uVar14 & ~(uint)uVar17;
        puVar12 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar12 = local_d8;
        }
        iVar31 = (int)uVar37;
        lVar10 = (longlong)iVar31;
        uVar30 = puVar12[lVar10] & uVar14;
        if (uVar30 == 0) {
          iVar15 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar15 = iVar20 + -1;
          }
          iVar15 = iVar15 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar19 = iVar15;
          if (iVar15 < iVar31) {
            iVar19 = iVar31;
          }
          if (iVar31 < iVar15) {
            lVar16 = 0;
            do {
              uVar30 = puVar12[lVar10 + lVar16 + 1];
              if (uVar30 != 0) {
                uVar37 = (ulonglong)(iVar31 + (int)lVar16 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140a34cf7;
              }
              iVar9 = iVar9 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar19 - lVar10 != lVar16);
            uVar14 = 0xffffffff;
            iVar31 = iVar19;
          }
          uVar37 = (ulonglong)(iVar31 + 1);
          param_2 = local_258;
          iVar31 = iVar20;
        }
        else {
LAB_140a34cf7:
          uVar17 = (ulonglong)(-uVar30 & uVar30);
          uVar22 = uVar17 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar31 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar31) {
            iVar31 = iVar20;
          }
        }
      } while (iVar31 != iVar26);
    }
  }
LAB_140a3409e:
  lVar10 = local_250;
  if (*(int *)((longlong)param_2 + 0x34) < (int)param_2[1]) {
    uVar8 = FUN_140a356c4(local_250 + 0x118,local_230);
    if ((*(int *)(local_208 + 0x10) == 0) && (*(int *)(local_208 + 0x14) != 0)) {
      FUN_14043d0a6(local_1f8,0);
    }
    plVar27 = local_258;
    iVar26 = (int)param_2[5];
    local_240 = (longlong *)CONCAT71(local_240._1_7_,uVar8);
    plVar21 = local_220;
    if (DAT_14c75f1fc != 0) {
      if (iVar26 == 0) {
        uVar37 = 1;
        uVar17 = 0;
        iVar31 = 0;
        iVar9 = 0;
      }
      else {
        puVar12 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_2 + 2);
        }
        uVar14 = *puVar12;
        if (uVar14 == 0) {
          iVar31 = iVar26 + 0x1e;
          if (-1 < iVar26 + -1) {
            iVar31 = iVar26 + -1;
          }
          uVar17 = 0;
          uVar37 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar37 = uVar17;
          }
          iVar9 = 0;
          do {
            if (uVar37 == uVar17) goto LAB_140a343f6;
            iVar9 = iVar9 + 0x20;
            uVar14 = puVar12[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar17 = 0;
          iVar9 = 0;
        }
        uVar37 = (ulonglong)(-uVar14 & uVar14);
        uVar22 = uVar37 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar31 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar31) {
          iVar31 = iVar26;
        }
      }
      if (iVar31 != iVar26) {
        uVar14 = 0xffffffff;
        do {
          lVar10 = *(longlong *)(*plVar27 + (longlong)iVar31 * 0x10);
          if (*(byte *)(lVar10 + 0xc) < 3) {
            lVar10 = 0;
          }
          local_188 = (longlong *)CONCAT71(local_188._1_7_,1);
          FUN_1447dc87e(local_250,lVar10,&local_188);
          uVar14 = ~(uint)uVar37 & uVar14;
          puVar12 = (uint *)plVar27[4];
          if ((uint *)plVar27[4] == (uint *)0x0) {
            puVar12 = (uint *)(param_2 + 2);
          }
          iVar20 = (int)plVar27[5];
          iVar31 = (int)uVar17;
          lVar10 = (longlong)iVar31;
          uVar30 = puVar12[lVar10] & uVar14;
          if (uVar30 == 0) {
            iVar15 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar15 = iVar20 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar19 = iVar15;
            if (iVar15 < iVar31) {
              iVar19 = iVar31;
            }
            if (iVar31 < iVar15) {
              lVar16 = 0;
              do {
                uVar30 = puVar12[lVar10 + lVar16 + 1];
                if (uVar30 != 0) {
                  uVar17 = (ulonglong)(iVar31 + (int)lVar16 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_140a343c0;
                }
                iVar9 = iVar9 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar19 - lVar10 != lVar16);
              uVar14 = 0xffffffff;
              iVar31 = iVar19;
            }
            uVar17 = (ulonglong)(iVar31 + 1);
            iVar31 = iVar20;
          }
          else {
LAB_140a343c0:
            uVar37 = (ulonglong)(-uVar30 & uVar30);
            uVar22 = uVar37 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar31 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar31) {
              iVar31 = iVar20;
            }
          }
        } while (iVar31 != iVar26);
      }
LAB_140a343f6:
      FUN_140a37b34(local_250,&local_188,local_230,param_5);
      plVar27 = local_258;
      uVar14 = (int)local_258[1] - *(int *)((longlong)local_258 + 0x34);
      uVar30 = ((int)uStack_180 - local_158._4_4_) + uVar14;
      if (uVar14 < uVar30) {
        if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar30);
        }
        FUN_14050411e(local_258);
        if (uVar30 < 4) {
          iVar26 = 1;
        }
        else {
          uVar14 = (uVar30 | 1) + 0xe;
          iVar26 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar26 == 0; iVar26 = iVar26 + -1) {
            }
          }
          iVar26 = 1 << ((byte)iVar26 & 0x1f);
        }
        if (((int)plVar27[9] == 0) || ((int)plVar27[9] < iVar26)) {
          *(int *)(plVar27 + 9) = iVar26;
          FUN_140503e74(plVar27);
        }
      }
      iVar26 = (int)local_160;
      if ((int)local_160 == 0) {
        uVar17 = 1;
        uVar37 = 0;
        iVar31 = 0;
        iVar9 = 0;
      }
      else {
        pplVar11 = (longlong **)CONCAT44(uStack_164,uStack_168);
        if ((longlong **)CONCAT44(uStack_164,uStack_168) == (longlong **)0x0) {
          pplVar11 = &local_178;
        }
        uVar14 = *(uint *)pplVar11;
        if (uVar14 == 0) {
          iVar31 = (int)local_160 + 0x1e;
          if (-1 < (int)local_160 + -1) {
            iVar31 = (int)local_160 + -1;
          }
          uVar37 = 0;
          uVar17 = (ulonglong)(uint)(iVar31 >> 5);
          if (iVar31 >> 5 < 1) {
            uVar17 = uVar37;
          }
          iVar9 = 0;
          do {
            if (uVar17 == uVar37) {
              iVar20 = 1;
              goto LAB_140a345ce;
            }
            iVar9 = iVar9 + 0x20;
            uVar14 = *(uint *)((longlong)pplVar11 + (uVar37 + 1) * 4);
            uVar37 = uVar37 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar37 = 0;
          iVar9 = 0;
        }
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar22 = uVar17 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar31 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)local_160 <= iVar31) {
          iVar31 = (int)local_160;
        }
      }
      iVar20 = (int)local_160;
      if (iVar31 != (int)local_160) {
        uVar14 = 0xffffffff;
        do {
          FUN_140a35574(local_258,&local_1d0,local_188 + (longlong)iVar31 * 2,0);
          uVar14 = ~(uint)uVar17 & uVar14;
          pplVar11 = (longlong **)CONCAT44(uStack_164,uStack_168);
          if ((longlong **)CONCAT44(uStack_164,uStack_168) == (longlong **)0x0) {
            pplVar11 = &local_178;
          }
          iVar31 = (int)uVar37;
          lVar10 = (longlong)iVar31;
          uVar30 = *(uint *)((longlong)pplVar11 + lVar10 * 4) & uVar14;
          if (uVar30 == 0) {
            iVar20 = (int)local_160 + 0x1e;
            if (-1 < (int)local_160 + -1) {
              iVar20 = (int)local_160 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar15 = iVar20;
            if (iVar20 < iVar31) {
              iVar15 = iVar31;
            }
            if (iVar31 < iVar20) {
              lVar16 = 0;
              do {
                uVar30 = *(uint *)((longlong)pplVar11 + (lVar10 + lVar16 + 1) * 4);
                if (uVar30 != 0) {
                  uVar37 = (ulonglong)(iVar31 + (int)lVar16 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_140a3459d;
                }
                iVar9 = iVar9 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar15 - lVar10 != lVar16);
              uVar14 = 0xffffffff;
              lVar10 = (longlong)iVar15;
            }
            uVar37 = lVar10 + 1U & 0xffffffff;
            iVar31 = (int)local_160;
          }
          else {
LAB_140a3459d:
            uVar17 = (ulonglong)(-uVar30 & uVar30);
            uVar22 = uVar17 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar31 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            if ((int)local_160 <= iVar31) {
              iVar31 = (int)local_160;
            }
          }
          iVar20 = (int)local_160;
        } while (iVar31 != iVar26);
      }
LAB_140a345ce:
      plVar21 = local_220;
      param_2 = local_258;
      lVar10 = local_250;
      if ((int)uStack_180 != local_158._4_4_) {
        puVar32 = local_148;
        if (local_148 == (undefined1 *)0x0) {
          puVar32 = local_150;
        }
        iVar26 = local_140 + 3;
        if (-1 < local_140) {
          iVar26 = local_140;
        }
        if ((int)uStack_180 - local_158._4_4_ < iVar26 >> 2) {
          local_1a8 = (longlong *)&DAT_100000000;
          local_198 = 0xffffffff;
          uStack_190 = 0;
          pplStack_1a0 = &local_178;
          if (iVar20 == 0) {
            iVar26 = 0;
          }
          else {
            FUN_1449c0562(&local_1a8);
            iVar26 = (int)local_160;
          }
          uStack_1b0 = CONCAT44(uStack_18c,uStack_190);
          local_1c8 = local_1a8;
          pplStack_1c0 = pplStack_1a0;
          local_1b8 = local_198;
          uVar37 = local_1b8;
          local_1b8._4_4_ = (uint)(local_198 >> 0x20);
          local_1d0 = &local_188;
          if ((local_1b8._4_4_ != iVar26) || (pplStack_1a0 != &local_178)) {
            iVar31 = local_1b8._4_4_;
            local_1b8 = uVar37;
            do {
              *(undefined4 *)
               (puVar32 +
               (longlong)*(int *)((longlong)*local_1d0 + (longlong)iVar31 * 0x10 + 0xc) * 4) =
                   0xffffffff;
              local_1b8 = CONCAT44(local_1b8._4_4_,(uint)local_1b8 & ~local_1c8._4_4_);
              FUN_1449c0562(&local_1c8);
              iVar31 = local_1b8._4_4_;
              uVar37 = local_1b8;
            } while (local_1d0 != &local_188 ||
                     (pplStack_1c0 != &local_178 || local_1b8._4_4_ != iVar26));
          }
        }
        else {
          uVar37 = local_1b8;
          if (0 < local_140) {
            lVar10 = 0;
            do {
              *(undefined4 *)(puVar32 + lVar10 * 4) = 0xffffffff;
              lVar10 = lVar10 + 1;
            } while (lVar10 < local_140);
          }
        }
        local_1b8 = uVar37;
        plVar21 = local_220;
        lVar10 = local_250;
        param_2 = local_258;
        bVar38 = (longlong)uStack_180 < 0;
        uStack_180 = (longlong **)((ulonglong)uStack_180 & 0xffffffff00000000);
        if (bVar38) {
          FUN_14474875a(&local_188,0);
        }
        local_158 = 0xffffffff;
        local_160 = (longlong *)((ulonglong)local_160._4_4_ << 0x20);
      }
      local_140 = 0;
      if (local_148 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140a356f6();
      iVar26 = (int)param_2[5];
    }
    if (iVar26 == 0) {
      uVar17 = 1;
      uVar37 = 0;
      iVar31 = 0;
      iVar9 = 0;
    }
    else {
      puVar12 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_2 + 2);
      }
      uVar14 = *puVar12;
      if (uVar14 == 0) {
        iVar31 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar31 = iVar26 + -1;
        }
        uVar37 = 0;
        uVar17 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar17 = uVar37;
        }
        iVar9 = 0;
        do {
          if (uVar17 == uVar37) goto LAB_140a34812;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar12[uVar37 + 1];
          uVar37 = uVar37 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar37 = 0;
        iVar9 = 0;
      }
      uVar17 = (ulonglong)(-uVar14 & uVar14);
      uVar22 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar31 = (iVar9 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar26 <= iVar31) {
        iVar31 = iVar26;
      }
    }
    if (iVar31 != iVar26) {
      lVar16 = *local_258;
      uVar14 = 0xffffffff;
      iVar20 = iVar26;
      do {
        plVar27 = *(longlong **)(lVar16 + (longlong)iVar31 * 0x10);
        if ((((plVar27 == (longlong *)0x0) || (*(byte *)((longlong)plVar27 + 0xc) < 3)) ||
            (lVar35 = *(longlong *)
                       (*(longlong *)(*plVar27 + 0x5a8) + (longlong)(int)plVar27[1] * 0x10),
            lVar35 == 0)) || (*(byte *)(lVar35 + 0xc) < 3)) {
          FUN_140a357a8(plVar27,plVar21,*(undefined8 *)(lVar10 + 0x18));
          lVar16 = *local_258;
          iVar20 = (int)local_258[5];
        }
        uVar14 = uVar14 & ~(uint)uVar17;
        puVar12 = (uint *)local_258[4];
        if ((uint *)local_258[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_2 + 2);
        }
        iVar31 = (int)uVar37;
        lVar35 = (longlong)iVar31;
        uVar30 = puVar12[lVar35] & uVar14;
        if (uVar30 == 0) {
          iVar15 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar15 = iVar20 + -1;
          }
          iVar15 = iVar15 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar19 = iVar15;
          if (iVar15 < iVar31) {
            iVar19 = iVar31;
          }
          if (iVar31 < iVar15) {
            lVar36 = 0;
            do {
              uVar30 = puVar12[lVar35 + lVar36 + 1];
              if (uVar30 != 0) {
                uVar37 = (ulonglong)(iVar31 + (int)lVar36 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140a347e4;
              }
              iVar9 = iVar9 + 0x20;
              lVar36 = lVar36 + 1;
            } while (iVar19 - lVar35 != lVar36);
            uVar14 = 0xffffffff;
            lVar35 = (longlong)iVar19;
          }
          uVar37 = lVar35 + 1U & 0xffffffff;
          plVar21 = local_220;
          lVar10 = local_250;
          iVar31 = iVar20;
        }
        else {
LAB_140a347e4:
          uVar17 = (ulonglong)(-uVar30 & uVar30);
          uVar22 = uVar17 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          iVar31 = (iVar9 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar31) {
            iVar31 = iVar20;
          }
        }
      } while (iVar31 != iVar26);
    }
LAB_140a34812:
    plVar27 = local_230;
    param_2 = local_258;
    if ((char)local_240 == '\0') {
      FUN_14016dd2a(lVar10,local_230,1);
      lVar16 = *(longlong *)(*plVar27 + 0x5a8);
      lVar35 = (longlong)(int)plVar27[1] * 0x10;
      *(undefined8 *)(lVar16 + lVar35) = 0;
      *(undefined4 *)(lVar16 + 8 + lVar35) = 0;
      *(undefined4 *)(*(longlong *)(*plVar27 + 0x5d8) + (longlong)(int)plVar27[1] * 4) = 0;
    }
  }
  pplVar11 = local_170;
  if (-1 < (int)(DAT_14c75f210 | DAT_14c75f214)) {
    if (DAT_14c75f214 - DAT_14c75f210 == 0 || (int)DAT_14c75f214 < (int)DAT_14c75f210) {
      fVar41 = 1.0;
    }
    else {
      lVar10 = *(longlong *)(*(longlong *)(local_250 + 0x18) + 0x2c8);
      iVar31 = (*(int *)(lVar10 + 0x170) - DAT_14c75f210) + *(int *)(lVar10 + 0x1d8);
      iVar26 = 0;
      if (0 < iVar31) {
        iVar26 = iVar31;
      }
      fVar40 = (float)iVar26 / (float)(int)(DAT_14c75f214 - DAT_14c75f210);
      fVar41 = 1.0;
      if (fVar40 <= 1.0) {
        fVar41 = fVar40;
      }
    }
    iVar26 = (int)((float)((int)local_258[1] - *(int *)((longlong)local_258 + 0x34)) * fVar41);
    param_2 = local_258;
    lVar10 = local_250;
    if (0 < iVar26) {
      local_1c8 = local_258 + 2;
      local_1d0 = (longlong **)&DAT_100000000;
      pplStack_1c0 = (longlong **)&DAT_ffffffff;
      local_1b8 = local_1b8 & 0xffffffff00000000;
      if ((int)local_258[5] != 0) {
        FUN_1449c0562(&local_1d0);
      }
      lVar16 = local_250;
      local_170 = pplStack_1c0;
      pplVar11 = local_170;
      uStack_168 = (uint)local_1b8;
      uStack_164 = local_1b8._4_4_;
      uStack_180 = local_1d0;
      local_178 = local_1c8;
      local_188 = local_258;
      local_160 = local_258;
      local_170._4_4_ = (uint)((ulonglong)pplStack_1c0 >> 0x20);
      param_2 = local_258;
      lVar10 = local_250;
      if ((int)local_170._4_4_ < (int)local_1c8[3]) {
        iVar9 = 0;
        iVar31 = local_170._4_4_;
        local_170 = pplVar11;
        do {
          lVar10 = *(longlong *)(*local_188 + (longlong)iVar31 * 0x10);
          if (lVar10 != 0) {
            iVar9 = iVar9 + 1;
            FUN_14016dd2a(lVar16,lVar10,1);
            FUN_1456cc230(*(undefined8 *)(*(longlong *)(lVar16 + 0x18) + 0x2c8),lVar10,1);
            FUN_146e103ba(local_160,local_170._4_4_);
          }
          param_2 = local_258;
          lVar10 = local_250;
          pplVar11 = local_170;
          if (iVar26 <= iVar9) break;
          local_170 = (longlong **)CONCAT44(local_170._4_4_,(uint)local_170 & ~uStack_180._4_4_);
          FUN_1449c0562(&uStack_180);
          param_2 = local_258;
          lVar10 = local_250;
          iVar31 = local_170._4_4_;
          pplVar11 = local_170;
        } while ((int)local_170._4_4_ < (int)local_178[3]);
      }
    }
  }
  local_170 = pplVar11;
  *(int *)(lVar10 + 0x10) =
       *(int *)(lVar10 + 0x10) + ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  uVar37 = uStack_130 >> 0x20;
  uStack_130 = uStack_130 & 0xffffffff00000000;
  if ((int)uVar37 != 0) {
    FUN_1447a08a2(&local_138,0);
  }
  uStack_108 = 0xffffffff;
  local_104 = 0;
  local_110 = 0;
  if (0x80 < local_10c) {
    local_10c = 0x80;
    FUN_1446efbd8(local_128,0);
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar37 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar37 != 0) {
    FUN_144727cd0(&local_e8,0);
  }
  iStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    FUN_1446efbd8(local_d8,0);
  }
  if (local_c8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_140a341ff:
  if ((local_90 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3553e FUN_140a3553e body=54 status=ok
// SIG undefined FUN_140a3553e(void)

void FUN_140a3553e(undefined4 *param_1)

{
  *param_1 = 1;
  memset(param_1 + 2,0,0x88);
  param_1[0x24] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return;
}



// FUNCTION 140a35574 FUN_140a35574 body=335 status=ok
// SIG undefined FUN_140a35574(void)

undefined4 *
FUN_140a35574(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_140503c9e(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140503c08(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      FUN_140503e74(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a356c4 FUN_140a356c4 body=49 status=ok
// SIG undefined FUN_140a356c4(void)

bool FUN_140a356c4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  
  uVar1 = FUN_140196188();
  plVar2 = (longlong *)FUN_1401961f6(param_1,uVar1);
  if (plVar2 == (longlong *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *plVar2 == param_2;
  }
  return bVar3;
}



// FUNCTION 140a356f6 FUN_140a356f6 body=55 status=ok
// SIG undefined FUN_140a356f6(void)

void FUN_140a356f6(longlong *param_1)

{
  FUN_140a3572e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a3572e FUN_140a3572e body=121 status=ok
// SIG undefined FUN_140a3572e(void)

void FUN_140a3572e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140a357a8 FUN_140a357a8 body=968 status=ok
// SIG undefined FUN_140a357a8(void)

void FUN_140a357a8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 *local_58;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if (*(byte *)((longlong)param_1 + 0xc) < 3) {
    return;
  }
  if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
    return;
  }
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar14 = (longlong *)param_2[8];
  if ((longlong *)param_2[8] == (longlong *)0x0) {
    plVar14 = param_2 + 7;
  }
  uVar13 = (ulonglong)((int)param_2[9] - 1U & (uVar4 >> 0x10 ^ uVar4));
  iVar5 = *(int *)((longlong)plVar14 + uVar13 * 4);
  if (iVar5 == -1) {
    return;
  }
  lVar11 = *param_2;
  iVar10 = iVar5;
  while (*(longlong **)(lVar11 + (longlong)iVar10 * 0x20) != param_1) {
    iVar10 = *(int *)((longlong)iVar10 * 0x20 + lVar11 + 0x18);
    if (iVar10 == -1) {
      return;
    }
  }
  do {
    lVar8 = lVar11 + (longlong)iVar5 * 0x20;
    if (*(longlong **)(lVar11 + (longlong)iVar5 * 0x20) == param_1) goto LAB_140a35868;
    iVar5 = *(int *)(lVar8 + 0x18);
  } while (iVar5 != -1);
  lVar8 = 0;
LAB_140a35868:
  if (*(int *)(lVar8 + 0x10) != 0) {
    if ((*(byte *)(*(longlong *)(*param_1 + 0x680) + (longlong)(int)param_1[1]) & 2) != 0) {
      FUN_1400d2fee(param_3,param_1,2);
      return;
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar6 = 0;
    iVar5 = *(int *)((longlong)plVar14 + uVar13 * 4);
    while (iVar5 != -1) {
      lVar8 = lVar11 + (longlong)iVar5 * 0x20;
      if (*(longlong **)(lVar11 + (longlong)iVar5 * 0x20) == param_1) goto LAB_140a358d7;
      iVar5 = *(int *)(lVar8 + 0x18);
    }
    lVar8 = 0;
LAB_140a358d7:
    iVar5 = *(int *)(lVar8 + 0x10);
    local_58 = puVar6;
    if ((longlong)iVar5 != 0) {
      lVar11 = *(longlong *)(lVar8 + 8);
      uVar13 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar11 + uVar13);
        puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar7 = 0;
        puVar7[1] = uVar2;
        if (puVar7 != (undefined8 *)0x0) {
          *local_58 = puVar7;
          local_58 = puVar7;
        }
        uVar13 = uVar13 + 8;
      } while ((longlong)iVar5 * 8 != uVar13);
    }
    uVar13 = CONCAT71((int7)(uVar13 >> 8),4);
    puVar3 = (undefined8 *)*puVar6;
    puVar7 = puVar6;
    if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
LAB_140a35939:
      puVar7 = puVar3;
      plVar14 = (longlong *)puVar7[1];
      puVar7[1] = 0;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if ((char)uVar13 != '\x04') {
        bVar16 = false;
        goto LAB_140a35ad6;
      }
      if (plVar14 != (longlong *)0x0 && 2 < *(byte *)((longlong)plVar14 + 0xc)) {
        if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
          uVar4 = ((uint)((ulonglong)plVar14 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar14 >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          plVar9 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar9 = param_2 + 7;
          }
          iVar5 = *(int *)((longlong)plVar9 +
                          (ulonglong)((int)param_2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
          if (iVar5 != -1) {
            lVar11 = *param_2;
            iVar10 = iVar5;
            do {
              if (*(longlong **)(lVar11 + (longlong)iVar10 * 0x20) == plVar14) goto LAB_140a359f1;
              iVar10 = *(int *)((longlong)iVar10 * 0x20 + lVar11 + 0x18);
            } while (iVar10 != -1);
          }
        }
        goto LAB_140a35a5c;
      }
      lVar11 = *plVar14;
      lVar8 = (longlong)(int)plVar14[1];
      goto LAB_140a35a74;
    }
LAB_140a35aa8:
    uVar12 = (undefined4)uVar13;
    bVar16 = (char)uVar13 == '\x04';
    while (puVar7 != (undefined8 *)0x0) {
LAB_140a35ad6:
      uVar12 = (undefined4)uVar13;
      puVar6 = (undefined8 *)*puVar7;
      FUN_1400020a8(puVar7);
      puVar7 = puVar6;
    }
    FUN_1400d2fee(param_3,param_1,uVar12);
    if ((bVar16) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
      if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
        lVar11 = *param_1;
        lVar8 = (longlong)(int)param_1[1];
      }
      else {
        lVar11 = *param_1;
        lVar8 = (longlong)(int)param_1[1];
        if (*(char *)(*(longlong *)(lVar11 + 0x2c0) + 0xb + lVar8 * 0x10) != '\x02') {
          return;
        }
      }
      lVar11 = *(longlong *)(lVar11 + 0x2a8);
      lVar8 = lVar8 * 0x40;
      *(undefined8 *)(lVar11 + lVar8) = 0;
      ((undefined8 *)(lVar11 + lVar8))[1] = 0;
      *(undefined8 *)(lVar11 + 0x10 + lVar8) = 0;
      puVar6 = (undefined8 *)(lVar11 + 0x20 + lVar8);
      *puVar6 = 0;
      puVar6[1] = 0x3f80000000000000;
      *(undefined4 *)(lVar11 + 0x30 + lVar8) = 0;
    }
  }
  return;
  while (iVar5 = *(int *)(lVar8 + 0x18), iVar5 != -1) {
LAB_140a359f1:
    lVar8 = lVar11 + (longlong)iVar5 * 0x20;
    if (*(longlong **)(lVar11 + (longlong)iVar5 * 0x20) == plVar14) goto LAB_140a35a0c;
  }
  lVar8 = 0;
LAB_140a35a0c:
  uVar13 = 0;
  if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
    lVar11 = *(longlong *)(lVar8 + 8);
    uVar13 = (longlong)*(int *)(lVar8 + 0x10) * 8;
    uVar15 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar11 + uVar15);
      puVar6 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar6 = 0;
      puVar6[1] = uVar2;
      if (puVar6 != (undefined8 *)0x0) {
        *local_58 = puVar6;
        local_58 = puVar6;
      }
      uVar15 = uVar15 + 8;
    } while (uVar13 != uVar15);
  }
LAB_140a35a5c:
  lVar11 = *plVar14;
  lVar8 = (longlong)(int)plVar14[1];
  uVar13 = CONCAT71((int7)(uVar13 >> 8),2);
  if ((*(byte *)(*(longlong *)(lVar11 + 0x680) + lVar8) & 2) == 0) {
LAB_140a35a74:
    cVar1 = *(char *)(*(longlong *)(lVar11 + 0x2c0) + 0xb + lVar8 * 0x10);
    uVar13 = (ulonglong)(byte)(4 - (cVar1 == '\x03'));
    if (cVar1 == '\x02') {
      uVar13 = 2;
    }
  }
  puVar3 = (undefined8 *)*puVar7;
  puVar6 = puVar7;
  if ((undefined8 *)*puVar7 == (undefined8 *)0x0) goto LAB_140a35aa8;
  goto LAB_140a35939;
}



// FUNCTION 140a35b70 FUN_140a35b70 body=1322 status=ok
// SIG undefined FUN_140a35b70(void)

void FUN_140a35b70(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_128 [40];
  ulonglong local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    if (2 < *(byte *)((longlong)param_2 + 0xc)) {
      local_38 = param_2;
    }
    if (local_38 != (longlong *)0x0) {
      plVar12 = *(longlong **)(*(longlong *)(*local_38 + 0x5a8) + (longlong)(int)local_38[1] * 0x10)
      ;
      plVar11 = (longlong *)0x0;
      if ((plVar12 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar12 + 0xc))) {
        plVar11 = plVar12;
      }
      if (plVar11 == param_3) {
        FUN_140a36458(*(undefined8 *)(param_1 + 0x18),param_2);
        FUN_140a3609c(param_1 + 0x28,local_98,&local_38,0);
        *(undefined8 *)(*(longlong *)(*local_38 + 0x5a8) + (longlong)(int)local_38[1] * 0x10) = 0;
        lVar13 = (longlong)(int)param_3[1];
        lVar16 = *(longlong *)(*param_3 + 0x548);
        lVar14 = lVar13 * 0x10;
        dVar6 = (double)*(float *)(lVar16 + 0xc + lVar14);
        lVar15 = *(longlong *)(*param_3 + 0x530);
        dVar7 = (double)*(float *)(lVar16 + 4 + lVar14);
        local_98._8_4_ = SUB84(dVar7,0);
        local_98._0_8_ = (double)*(float *)(lVar16 + lVar14);
        local_98._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_88._8_4_ = SUB84(dVar6,0);
        local_88._0_8_ = (double)*(float *)(lVar16 + 8 + lVar14);
        local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        puVar1 = (undefined8 *)(lVar15 + lVar13 * 0x18);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        local_68 = *(undefined8 *)(lVar15 + 0x10 + lVar13 * 0x18);
        uStack_60 = 0;
        local_58 = 0x3ff0000000000000;
        uStack_50 = 0x3ff0000000000000;
        local_48 = 0x3ff0000000000000;
        uStack_40 = 0;
        FUN_1447dc19e((longlong)(int)local_38[1] * 0x60 + *(longlong *)(*local_38 + 0x5c0),&local_f8
                      ,local_98);
        lVar15 = param_2[1];
        lVar16 = *(longlong *)(*param_2 + 0x28);
        puVar1 = (undefined8 *)(lVar16 + (longlong)(int)lVar15 * 0x18);
        *puVar1 = local_d8;
        puVar1[1] = uStack_d0;
        *(undefined8 *)(lVar16 + 0x10 + (longlong)(int)lVar15 * 0x18) = local_c8;
        lVar16 = *(longlong *)(*param_2 + 0x48);
        lVar15 = (longlong)(int)param_2[1] * 0x10;
        *(float *)(lVar16 + lVar15) = (float)local_f8;
        *(float *)(lVar16 + 4 + lVar15) = (float)local_f0;
        *(float *)(lVar16 + 8 + lVar15) = (float)local_e8;
        *(float *)(lVar16 + 0xc + lVar15) = (float)local_e0;
        lVar16 = *(longlong *)(*param_2 + 0x28);
        lVar13 = (longlong)(int)param_2[1] * 0x18;
        lVar15 = *(longlong *)(*param_2 + 0x530);
        *(undefined8 *)(lVar15 + 0x10 + lVar13) = *(undefined8 *)(lVar16 + 0x10 + lVar13);
        puVar1 = (undefined8 *)(lVar16 + lVar13);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(lVar15 + lVar13);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        lVar16 = (longlong)(int)param_2[1] * 0x10;
        puVar1 = (undefined8 *)(*(longlong *)(*param_2 + 0x48) + lVar16);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)(*(longlong *)(*param_2 + 0x548) + lVar16);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        lVar13 = (longlong)(int)param_2[1];
        lVar16 = *(longlong *)(*param_2 + 0x278);
        lVar14 = (longlong)(int)param_3[1];
        lVar15 = *(longlong *)(*param_3 + 0x278);
        fVar3 = *(float *)(lVar15 + 8 + lVar14 * 0xc);
        fVar4 = *(float *)(lVar15 + 4 + lVar14 * 0xc);
        *(float *)(lVar16 + lVar13 * 0xc) =
             *(float *)(lVar16 + lVar13 * 0xc) + *(float *)(lVar15 + lVar14 * 0xc);
        *(float *)(lVar16 + 4 + lVar13 * 0xc) = *(float *)(lVar16 + 4 + lVar13 * 0xc) + fVar4;
        *(float *)(lVar16 + 8 + lVar13 * 0xc) = *(float *)(lVar16 + 8 + lVar13 * 0xc) + fVar3;
        lVar13 = (longlong)(int)param_2[1];
        lVar16 = *(longlong *)(*param_2 + 0x290);
        lVar14 = (longlong)(int)param_3[1];
        lVar15 = *(longlong *)(*param_3 + 0x290);
        fVar3 = *(float *)(lVar15 + 8 + lVar14 * 0xc);
        fVar4 = *(float *)(lVar15 + 4 + lVar14 * 0xc);
        *(float *)(lVar16 + lVar13 * 0xc) =
             *(float *)(lVar16 + lVar13 * 0xc) + *(float *)(lVar15 + lVar14 * 0xc);
        *(float *)(lVar16 + 4 + lVar13 * 0xc) = *(float *)(lVar16 + 4 + lVar13 * 0xc) + fVar4;
        *(float *)(lVar16 + 8 + lVar13 * 0xc) = *(float *)(lVar16 + 8 + lVar13 * 0xc) + fVar3;
        lVar13 = (longlong)(int)param_2[1];
        lVar16 = *(longlong *)(*param_2 + 0x560);
        lVar14 = (longlong)(int)param_3[1];
        lVar15 = *(longlong *)(*param_3 + 0x560);
        fVar3 = *(float *)(lVar15 + 8 + lVar14 * 0xc);
        fVar4 = *(float *)(lVar15 + 4 + lVar14 * 0xc);
        *(float *)(lVar16 + lVar13 * 0xc) =
             *(float *)(lVar16 + lVar13 * 0xc) + *(float *)(lVar15 + lVar14 * 0xc);
        *(float *)(lVar16 + 4 + lVar13 * 0xc) = *(float *)(lVar16 + 4 + lVar13 * 0xc) + fVar4;
        *(float *)(lVar16 + 8 + lVar13 * 0xc) = *(float *)(lVar16 + 8 + lVar13 * 0xc) + fVar3;
        lVar13 = (longlong)(int)param_2[1];
        lVar16 = *(longlong *)(*param_2 + 0x578);
        lVar14 = (longlong)(int)param_3[1];
        lVar15 = *(longlong *)(*param_3 + 0x578);
        fVar3 = *(float *)(lVar15 + 8 + lVar14 * 0xc);
        fVar4 = *(float *)(lVar15 + 4 + lVar14 * 0xc);
        *(float *)(lVar16 + lVar13 * 0xc) =
             *(float *)(lVar16 + lVar13 * 0xc) + *(float *)(lVar15 + lVar14 * 0xc);
        *(float *)(lVar16 + 4 + lVar13 * 0xc) = *(float *)(lVar16 + 4 + lVar13 * 0xc) + fVar4;
        *(float *)(lVar16 + 8 + lVar13 * 0xc) = *(float *)(lVar16 + 8 + lVar13 * 0xc) + fVar3;
        if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
          uVar9 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          lVar16 = param_1 + 0x100;
          if (*(longlong *)(param_1 + 0x108) != 0) {
            lVar16 = *(longlong *)(param_1 + 0x108);
          }
          iVar10 = *(int *)(lVar16 + (ulonglong)
                                     (*(int *)(param_1 + 0x110) - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4)
          ;
          if (iVar10 != -1) {
            do {
              lVar16 = *(longlong *)(param_1 + 200) + (longlong)iVar10 * 0x20;
              if (*(longlong **)(*(longlong *)(param_1 + 200) + (longlong)iVar10 * 0x20) == param_3)
              {
                if ((lVar16 != 0) && (lVar16 != -8)) {
                  lVar15 = (longlong)(int)param_3[1] * 0x10;
                  plVar12 = (longlong *)(*(longlong *)(*param_3 + 0x5a8) + lVar15);
                  lVar15 = *(longlong *)(*(longlong *)(*param_3 + 0x5a8) + lVar15);
                  lVar13 = 0;
                  if ((lVar15 != 0) && (2 < *(byte *)(lVar15 + 0xc))) {
                    lVar13 = lVar15;
                  }
                  uVar5 = *(undefined4 *)(lVar16 + 0x10);
                  *plVar12 = lVar13;
                  *(undefined4 *)(plVar12 + 1) = uVar5;
                  lVar15 = *(longlong *)(*param_3 + 0x680);
                  if (((((*(byte *)(lVar15 + (int)param_3[1]) & 1) != 0) &&
                       (*(int *)(lVar16 + 0x10) == 0)) &&
                      (lVar16 = *(longlong *)
                                 (*(longlong *)(*param_3 + 200) + (longlong)(int)param_3[1] * 8),
                      lVar16 != 0)) && (*(int *)(lVar16 + 0x1c) == 2)) {
                    FUN_14016dd2a(param_1,param_3,CONCAT71((int7)((ulonglong)lVar15 >> 8),1));
                    local_100 = *(ulonglong *)
                                 (*(longlong *)(*param_3 + 200) + (longlong)(int)param_3[1] * 8);
                    uVar9 = ((uint)(local_100 >> 0x14) & 0xffff ^ (uint)(local_100 >> 4)) *
                            -0x7a143595;
                    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                    plVar12 = (longlong *)FUN_146e0f274(param_1 + 1000,uVar9 >> 0x10 ^ uVar9);
                    iVar10 = (int)plVar12[1];
                    *(uint *)(plVar12 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar12 + 0xc) < iVar10 + 1U) {
                      FUN_14043c6b4(plVar12,iVar10);
                    }
                    *(longlong **)(*plVar12 + (longlong)iVar10 * 8) = param_3;
                  }
                }
                break;
              }
              iVar10 = *(int *)(lVar16 + 0x18);
            } while (iVar10 != -1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a3609c FUN_140a3609c body=335 status=ok
// SIG undefined FUN_140a3609c(void)

undefined4 *
FUN_140a3609c(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_140a36282(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140a361ec(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      FUN_140a398ee(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a361ec FUN_140a361ec body=149 status=ok
// SIG undefined FUN_140a361ec(void)

void FUN_140a361ec(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14016e454(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140a36256;
    }
  }
  uVar1 = 0;
LAB_140a36256:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140a36282 FUN_140a36282 body=470 status=ok
// SIG undefined FUN_140a36282(void)

int * FUN_140a36282(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1446efaca(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x10);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140a36458 FUN_140a36458 body=691 status=ok
// SIG undefined FUN_140a36458(void)

void FUN_140a36458(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint local_58;
  undefined4 local_54;
  
  FUN_140a3679e(*(undefined8 *)(param_1 + 0x2c8));
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar9 = *(longlong *)(param_1 + 0xf0);
    lVar18 = 0;
    do {
      plVar4 = *(longlong **)(lVar9 + lVar18);
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar1 * 8 != lVar18);
  }
  lVar9 = *param_2;
  lVar18 = (longlong)(int)param_2[1];
  if (((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) &&
     (*(char *)(*(longlong *)(lVar9 + 0x2c0) + 0xd + lVar18 * 0x10) == '\x01')) {
    if (*(byte *)((longlong)param_2 + 0xc) < 3) {
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar9 + 0x5a8) + lVar18 * 0x10);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    if (*(byte *)((longlong)plVar4 + 0xc) < 3) {
      return;
    }
    if ((*(byte *)(*(longlong *)(*plVar4 + 0x680) + (longlong)(int)plVar4[1]) & 1) == 0) {
      return;
    }
    if (*(longlong *)(*(longlong *)(*plVar4 + 200) + (longlong)(int)plVar4[1] * 8) !=
        *(longlong *)(*(longlong *)(lVar9 + 200) + lVar18 * 8)) {
      return;
    }
  }
  if ((*(char *)(*(longlong *)(lVar9 + 0xe0) + lVar18) != '\0') || (DAT_14c9978a0 != 0)) {
    uVar2 = *(undefined4 *)(*(longlong *)(lVar9 + 0x80) + lVar18 * 4);
    puVar8 = (ulonglong *)FUN_1447eab44(param_1 + 0x360,uVar2,1);
    *(undefined1 *)(puVar8 + 8) = 1;
    lVar9 = *param_2;
    lVar18 = (longlong)(int)param_2[1];
    uVar5 = *(ulonglong *)(*(longlong *)(lVar9 + 0xb0) + lVar18 * 8);
    uVar3 = *(undefined4 *)(*(longlong *)(lVar9 + 0x80) + lVar18 * 4);
    lVar9 = *(longlong *)(lVar9 + 0xf8) + lVar18 * 0x18;
    lVar18 = *(longlong *)(lVar9 + 8);
    if (*(longlong *)(lVar9 + 8) == 0) {
      lVar18 = lVar9;
    }
    if ((longlong)*(int *)(lVar9 + 0x10) == 0) {
      uVar15 = 0;
      uVar14 = 0;
      local_58 = 0;
      local_54 = 0;
      uVar12 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar7 = 0;
      uVar13 = uVar5;
    }
    else {
      lVar19 = (longlong)*(int *)(lVar9 + 0x10) * 8;
      lVar9 = 0;
      uVar13 = 0;
      local_58 = 0;
      uVar14 = 0;
      uVar15 = 0;
      do {
        lVar6 = *(longlong *)(lVar18 + lVar9);
        if ((lVar6 != 0) &&
           ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 2) != 0))
        {
          uVar11 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
          uVar15 = uVar15 | *(uint *)(lVar6 + 0x48 + uVar11 * 8);
          uVar14 = uVar14 | *(uint *)(lVar6 + 0x4c + uVar11 * 8);
          local_58 = local_58 | *(uint *)(lVar6 + 0x50 + uVar11 * 8);
          uVar13 = (ulonglong)((uint)uVar13 | *(uint *)(lVar6 + 0x54 + uVar11 * 8));
        }
        lVar9 = lVar9 + 8;
      } while (lVar19 != lVar9);
      local_54 = (undefined4)uVar13;
      lVar9 = 0;
      uVar12 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar7 = 0;
      do {
        lVar6 = *(longlong *)(lVar18 + lVar9);
        if (lVar6 != 0) {
          uVar13 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
          if ((*(byte *)(lVar6 + 0x71 + uVar13 * 8) & 5) != 0) {
            uVar13 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
            uVar16 = uVar16 | *(uint *)(lVar6 + 0x58 + uVar13 * 8);
            uVar12 = uVar12 | *(uint *)(lVar6 + 0x5c + uVar13 * 8);
            uVar17 = uVar17 | *(uint *)(lVar6 + 0x60 + uVar13 * 8);
            uVar7 = uVar7 | *(uint *)(lVar6 + 100 + uVar13 * 8);
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar19 != lVar9);
    }
    *puVar8 = uVar5;
    puVar8[1] = (ulonglong)param_2;
    *(undefined4 *)(puVar8 + 2) = uVar3;
    *(uint *)((longlong)puVar8 + 0x14) = uVar15;
    *(uint *)(puVar8 + 3) = uVar14;
    *(uint *)((longlong)puVar8 + 0x1c) = local_58;
    *(undefined4 *)(puVar8 + 4) = local_54;
    *(uint *)((longlong)puVar8 + 0x24) = uVar16;
    *(uint *)(puVar8 + 5) = uVar12;
    *(uint *)((longlong)puVar8 + 0x2c) = uVar17;
    *(uint *)(puVar8 + 6) = uVar7;
    *(undefined1 *)((longlong)puVar8 + 0x34) = 1;
    *(undefined2 *)(puVar8 + 7) =
         *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
    puVar10 = (ulonglong *)FUN_1447eab44(param_1 + 0x380,uVar2,CONCAT71((int7)(uVar13 >> 8),1));
    for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return;
}



// FUNCTION 140a3670c FUN_140a3670c body=145 status=ok
// SIG undefined FUN_140a3670c(void)

void FUN_140a3670c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar2 = (longlong)(int)param_2[1] * 0x10;
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1b8) + 8 + lVar2);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(*(longlong *)(*param_2 + 0x1b8) + lVar2);
    plVar1 = plVar5 + lVar4;
    do {
      lVar2 = *plVar5;
      if (*(longlong *)(lVar2 + 8) != 0) {
        plVar6 = (longlong *)(*(longlong *)(lVar2 + 8) + 8);
        plVar3 = (longlong *)FUN_140a37a82();
        do {
          if (*plVar3 == *plVar6) {
            if (((lVar2 != 0) && (*(longlong **)(lVar2 + 0x108) == param_2)) &&
               (*(char *)(lVar2 + 0x118) == '\x01')) {
              *(undefined1 *)(lVar2 + 0x118) = 0;
            }
            break;
          }
          plVar6 = (longlong *)plVar6[1];
        } while (plVar6 != (longlong *)0x0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 140a3679e FUN_140a3679e body=195 status=ok
// SIG undefined FUN_140a3679e(void)

void FUN_140a3679e(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == (longlong *)0x0 || *(byte *)((longlong)param_2 + 0xc) < 2) {
    if (*(byte *)((longlong)param_2 + 0xc) == 0 || param_2 == (longlong *)0x0) {
      uVar2 = *param_1;
    }
    else {
      uVar2 = param_1[2];
    }
    FUN_144b0231c(param_2,uVar2);
  }
  else {
    *(undefined1 *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10) = 0;
    if (*(byte *)((longlong)param_2 + 0xc) < 6) {
      if (*(byte *)((longlong)param_2 + 0xc) < 3) {
        FUN_1456cc2b4();
      }
      else {
        FUN_14043c188();
      }
    }
    else {
      FUN_1400c9b9a(param_1,param_2);
      FUN_1403f3cf4(param_1,param_2);
    }
    cVar1 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
    if (((cVar1 != '\x01') && (cVar1 == '\x04')) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
      FUN_140aa6718(param_1,param_2);
    }
  }
  FUN_1447dd35a(param_1);
  return;
}



// FUNCTION 140a36862 FUN_140a36862 body=869 status=ok
// SIG undefined FUN_140a36862(void)

void FUN_140a36862(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    lVar8 = (longlong)(int)param_2[1] * 0x10;
    local_58 = param_1;
    local_50 = param_2;
    if (0 < *(int *)(*(longlong *)(*param_2 + 0x1d0) + 8 + lVar8)) {
      plVar17 = (longlong *)(*(longlong *)(*param_2 + 0x1d0) + lVar8);
      lVar8 = 0;
      local_60 = plVar17;
      do {
        lVar4 = *(longlong *)(*plVar17 + 8 + lVar8 * 0x10);
        cVar6 = *(char *)(lVar4 + 8);
        if (cVar6 == '\x01') {
          lVar18 = lVar4 + 0x40;
          if (*(longlong *)(lVar4 + 0x98) != 0) {
            lVar18 = *(longlong *)(lVar4 + 0x98);
          }
          iVar3 = *(int *)(lVar4 + 0xa0);
          if ((longlong)iVar3 != 0) {
            lVar19 = 0;
            do {
              lVar5 = *(longlong *)(lVar18 + 0x10 + lVar19);
              if (lVar5 != 0) {
                uVar2 = *(ushort *)(lVar5 + 0x374);
                if ((uVar2 & 2) == 0) {
                  uVar2 = uVar2 & 1;
                }
                else {
                  if ((*(longlong *)(lVar5 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_140a36ac8;
                  uVar2 = *(ushort *)(*(longlong *)(lVar5 + 0x140) + 10) & 0x40;
                }
                if (uVar2 != 0) {
                  FUN_140a36bc8();
                }
              }
LAB_140a36ac8:
              lVar19 = lVar19 + 0x58;
            } while ((longlong)iVar3 * 0x58 - lVar19 != 0);
            cVar6 = *(char *)(lVar4 + 8);
            plVar17 = local_60;
            goto LAB_140a368e0;
          }
        }
        else {
LAB_140a368e0:
          if (cVar6 == '\0') {
            iVar3 = *(int *)(lVar4 + 0x68);
            if (iVar3 == 0) {
              uVar15 = 1;
              uVar20 = 0;
              iVar10 = 0;
              iVar14 = 0;
            }
            else {
              puVar9 = *(uint **)(lVar4 + 0x60);
              if (*(uint **)(lVar4 + 0x60) == (uint *)0x0) {
                puVar9 = (uint *)(lVar4 + 0x50);
              }
              uVar16 = *puVar9;
              if (uVar16 == 0) {
                iVar10 = iVar3 + 0x1e;
                if (-1 < iVar3 + -1) {
                  iVar10 = iVar3 + -1;
                }
                uVar20 = 0;
                uVar15 = (ulonglong)(uint)(iVar10 >> 5);
                if (iVar10 >> 5 < 1) {
                  uVar15 = uVar20;
                }
                iVar14 = 0;
                do {
                  if (uVar15 == uVar20) goto LAB_140a36a69;
                  iVar14 = iVar14 + 0x20;
                  uVar16 = puVar9[uVar20 + 1];
                  uVar20 = uVar20 + 1;
                } while (uVar16 == 0);
              }
              else {
                uVar20 = 0;
                iVar14 = 0;
              }
              uVar15 = (ulonglong)(-uVar16 & uVar16);
              uVar1 = uVar15 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar10 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar10) {
                iVar10 = iVar3;
              }
            }
            if (iVar10 == iVar3) goto LAB_140a36a69;
            uVar16 = 0xffffffff;
            iVar7 = iVar3;
            do {
              lVar18 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + 0x10 + (longlong)iVar10 * 0x20);
              if (lVar18 != 0) {
                uVar2 = *(ushort *)(lVar18 + 0x374);
                if ((uVar2 & 2) == 0) {
                  uVar2 = uVar2 & 1;
                }
                else {
                  if ((*(longlong *)(lVar18 + 0x140) == 0) || ((uVar2 & 1) == 0))
                  goto LAB_140a369c8;
                  uVar2 = *(ushort *)(*(longlong *)(lVar18 + 0x140) + 10) & 0x40;
                }
                if (uVar2 != 0) {
                  FUN_140a36bc8(&local_58);
                  iVar7 = *(int *)(lVar4 + 0x68);
                }
              }
LAB_140a369c8:
              uVar16 = uVar16 & ~(uint)uVar15;
              puVar9 = *(uint **)(lVar4 + 0x60);
              if (*(uint **)(lVar4 + 0x60) == (uint *)0x0) {
                puVar9 = (uint *)(lVar4 + 0x50);
              }
              iVar10 = (int)uVar20;
              lVar18 = (longlong)iVar10;
              uVar11 = puVar9[lVar18] & uVar16;
              if (uVar11 == 0) {
                iVar12 = iVar7 + 0x1e;
                if (-1 < iVar7 + -1) {
                  iVar12 = iVar7 + -1;
                }
                iVar12 = iVar12 >> 5;
                iVar14 = iVar14 + 0x20;
                iVar13 = iVar12;
                if (iVar12 < iVar10) {
                  iVar13 = iVar10;
                }
                if (iVar10 < iVar12) {
                  lVar19 = 0;
                  do {
                    uVar11 = puVar9[lVar18 + lVar19 + 1];
                    if (uVar11 != 0) {
                      uVar20 = (ulonglong)(iVar10 + (int)lVar19 + 1);
                      uVar16 = 0xffffffff;
                      goto LAB_140a36a2e;
                    }
                    iVar14 = iVar14 + 0x20;
                    lVar19 = lVar19 + 1;
                  } while (iVar13 - lVar18 != lVar19);
                  uVar16 = 0xffffffff;
                  iVar10 = iVar13;
                }
                uVar20 = (ulonglong)(iVar10 + 1);
                iVar10 = iVar7;
              }
              else {
LAB_140a36a2e:
                uVar15 = (ulonglong)(-uVar11 & uVar11);
                uVar1 = uVar15 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar10 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar7 <= iVar10) {
                  iVar10 = iVar7;
                }
              }
            } while (iVar10 != iVar3);
            cVar6 = *(char *)(lVar4 + 8);
            plVar17 = local_60;
          }
          if ((cVar6 == '\x02') && (lVar4 = *(longlong *)(lVar4 + 200), lVar4 != 0)) {
            uVar2 = *(ushort *)(lVar4 + 0x374);
            plVar17 = local_60;
            if ((uVar2 & 2) == 0) {
              uVar2 = uVar2 & 1;
            }
            else {
              if ((*(longlong *)(lVar4 + 0x140) == 0) || ((uVar2 & 1) == 0)) goto LAB_140a36a69;
              uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x140) + 10) & 0x40;
            }
            if (uVar2 != 0) {
              FUN_140a36bc8(&local_58);
            }
          }
        }
LAB_140a36a69:
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)plVar17[1]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a36bc8 FUN_140a36bc8 body=3768 status=ok
// SIG undefined FUN_140a36bc8(void)

void FUN_140a36bc8(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  longlong lVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  byte bVar37;
  int iVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  int iVar41;
  uint uVar42;
  longlong lVar43;
  ulonglong uVar44;
  int iVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  int iVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_258 [32];
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [24];
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar7 = (longlong *)param_1[1];
  plVar8 = *(longlong **)(param_2 + 0xe0);
  if (((*(longlong **)(param_2 + 0xe0 + (ulonglong)(plVar8 != plVar7) * 8) != plVar7) ||
      (plVar7 = *(longlong **)(param_2 + 0xe0 + (ulonglong)(plVar8 == plVar7) * 8),
      plVar7 == (longlong *)0x0)) || (*(byte *)((longlong)plVar7 + 0xc) < 2)) goto LAB_140a36c70;
  fVar51 = *(float *)(param_2 + 0x120);
  fVar54 = *(float *)(param_2 + 0x124);
  fVar55 = *(float *)(param_2 + 0x128);
  if (fVar55 * fVar55 + fVar51 * fVar51 + fVar54 * fVar54 <= 1e-08) goto LAB_140a36c70;
  if (plVar8 == plVar7) {
    fVar55 = -fVar55;
    fVar54 = -fVar54;
    fVar51 = -fVar51;
  }
  lVar9 = *param_1;
  dVar12 = (double)fVar55;
  dVar14 = (double)fVar54;
  dVar16 = (double)fVar51;
  FUN_144b043a4(param_2,&local_190);
  lVar48 = *plVar7;
  lVar47 = (longlong)(int)plVar7[1];
  if ((*(byte *)((longlong)plVar7 + 0xc) < 2) ||
     ((cVar6 = *(char *)(*(longlong *)(lVar48 + 0x2c0) + 0xb + lVar47 * 0x10), cVar6 != '\x04' &&
      (cVar6 != '\x01')))) {
    local_168 = *(double *)(*(longlong *)(lVar48 + 0x28) + 0x10 + lVar47 * 0x18);
    pdVar1 = (double *)(*(longlong *)(lVar48 + 0x28) + lVar47 * 0x18);
    local_178 = *pdVar1;
    uStack_170 = pdVar1[1];
  }
  else {
    FUN_1402a018c(lVar48,&local_178);
  }
  local_1c0 = (local_190 - local_178) * dVar14 - dVar16 * (local_188 - uStack_170);
  local_1c8 = (local_180 - local_168) * dVar16 - dVar12 * (local_190 - local_178);
  local_1d0 = (local_188 - uStack_170) * dVar12 - dVar14 * (local_180 - local_168);
  lVar48 = *plVar7;
  lVar47 = (longlong)(int)plVar7[1];
  if (*(byte *)((longlong)plVar7 + 0xc) < 2) {
    local_230 = dVar16 * 0.0;
    local_228 = dVar14 * 0.0;
    local_218 = 0.0;
    local_220 = dVar12 * 0.0;
    dVar12 = 0.0;
    dVar14 = 0.0;
LAB_140a3708c:
    lVar48 = *(longlong *)(lVar48 + 0x48);
    lVar47 = lVar47 * 0x10;
    local_1b8._8_8_ = (double)*(float *)(lVar48 + 4 + lVar47);
    local_1b8._0_8_ = (double)*(float *)(lVar48 + lVar47);
    local_1a8._8_8_ = (double)*(float *)(lVar48 + 0xc + lVar47);
    local_1a8._0_8_ = (double)*(float *)(lVar48 + 8 + lVar47);
  }
  else {
    lVar43 = lVar47 * 0x10;
    cVar6 = *(char *)(*(longlong *)(lVar48 + 0x2c0) + 0xb + lVar43);
    if (cVar6 == '\x04') {
LAB_140a36eea:
      uVar5 = *(undefined8 *)(*(longlong *)(lVar48 + 0x3c8) + lVar47 * 8);
      uVar52 = (undefined4)uVar5;
      uVar53 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      uVar52 = 0;
      uVar53 = 0;
      if (cVar6 == '\x01') goto LAB_140a36eea;
    }
    cVar6 = *(char *)(*(longlong *)(lVar48 + 0x2c0) + 0xb + lVar43);
    if (cVar6 == '\x04') {
LAB_140a36f1c:
      lVar10 = *(longlong *)(lVar48 + 0x380);
      lVar11 = *(longlong *)(lVar48 + 0x398);
      lVar20 = lVar47 * 0xc;
      fVar54 = *(float *)(lVar11 + 8 + lVar20) * *(float *)(lVar10 + 8 + lVar20);
      fVar55 = *(float *)(lVar11 + 4 + lVar20) * *(float *)(lVar10 + 4 + lVar20);
      fVar51 = *(float *)(lVar11 + lVar20) * *(float *)(lVar10 + lVar20);
    }
    else {
      fVar51 = 0.0;
      fVar55 = 0.0;
      fVar54 = 0.0;
      if (cVar6 == '\x01') goto LAB_140a36f1c;
    }
    local_230 = dVar16 * (double)CONCAT44(uVar53,uVar52);
    local_228 = dVar14 * (double)CONCAT44(uVar53,uVar52);
    local_220 = dVar12 * (double)CONCAT44(uVar53,uVar52);
    dVar14 = (double)fVar54;
    dVar12 = (double)fVar55;
    local_218 = (double)fVar51;
    cVar6 = *(char *)(*(longlong *)(lVar48 + 0x2c0) + 0xb + lVar43);
    if ((cVar6 != '\x04') && (cVar6 != '\x01')) goto LAB_140a3708c;
    lVar10 = *(longlong *)(lVar48 + 0x548);
    dVar15 = (double)*(float *)(lVar10 + 0xc + lVar43);
    dVar16 = (double)*(float *)(lVar10 + 8 + lVar43);
    dVar17 = (double)*(float *)(lVar10 + 4 + lVar43);
    dVar56 = (double)*(float *)(lVar10 + lVar43);
    pdVar1 = (double *)(*(longlong *)(lVar48 + 0x3f8) + lVar47 * 0x20);
    dVar57 = *pdVar1;
    dVar19 = pdVar1[1];
    pdVar1 = (double *)(*(longlong *)(lVar48 + 0x3f8) + 0x10 + lVar47 * 0x20);
    dVar58 = *pdVar1;
    dVar21 = pdVar1[1];
    dVar18 = dVar57 * dVar16 * 1.0 + dVar21 * dVar17 + dVar56 * dVar58 * -1.0 + dVar15 * dVar19;
    dVar13 = dVar58 * dVar16 * -1.0 + ((dVar56 * dVar57 * -1.0 + dVar15 * dVar21) - dVar17 * dVar19)
    ;
    local_1b8._8_4_ = SUB84(dVar18,0);
    local_1b8._0_8_ =
         dVar19 * dVar16 * -1.0 + dVar58 * dVar17 + dVar56 * dVar21 * 1.0 + dVar15 * dVar57;
    local_1b8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_1a8._8_4_ = SUB84(dVar13,0);
    local_1a8._0_8_ =
         dVar21 * dVar16 * 1.0 + ((dVar56 * dVar19 * 1.0 + dVar15 * dVar58) - dVar17 * dVar57);
    local_1a8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  }
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0.0;
  uStack_120 = 0;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_148 = 0.0;
  uStack_140 = 0;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_178 = 0.0;
  uStack_170 = 0.0;
  FUN_14076d742(local_1b8,&local_178);
  dVar18 = dVar14 * local_128 + local_168 * 0.0 + local_148 * 0.0;
  local_210 = uStack_170;
  local_1e0 = dStack_150;
  local_1f0 = dStack_130;
  dVar16 = dVar14 * dStack_130 + uStack_170 * 0.0 + dStack_150 * 0.0;
  local_1d8 = local_158;
  local_208 = local_178;
  local_1e8 = local_138;
  dVar17 = dVar14 * local_138 + local_178 * 0.0 + local_158 * 0.0;
  dVar57 = local_148 * dVar12 + local_168 * 0.0 + local_128 * 0.0;
  dVar15 = local_218 * local_168 + local_148 * 0.0 + local_128 * 0.0;
  local_238 = dStack_150 * dVar12 + uStack_170 * 0.0 + dStack_130 * 0.0;
  dVar13 = local_218 * uStack_170 + dStack_150 * 0.0 + dStack_130 * 0.0;
  local_200 = dVar12 * local_158 + local_178 * 0.0 + local_138 * 0.0;
  local_218 = local_218 * local_178 + local_158 * 0.0 + local_138 * 0.0;
  local_1f8 = local_128 * dVar17 + local_168 * local_218 + local_148 * local_200;
  dVar14 = (dStack_130 * dVar18 + uStack_170 * dVar15 + dVar57 * dStack_150) * local_1c8;
  dVar19 = (dVar18 * local_138 + dVar15 * local_178 + dVar57 * local_158) * local_1d0;
  dVar18 = (local_128 * dVar18 + local_168 * dVar15 + local_148 * dVar57) * local_1c0;
  dVar58 = (dStack_130 * dVar16 + uStack_170 * dVar13 + dStack_150 * local_238) * local_1c8;
  dVar15 = (dVar16 * local_138 + dVar13 * local_178 + local_238 * local_158) * local_1d0;
  dVar57 = (local_128 * dVar16 + local_168 * dVar13 + local_148 * local_238) * local_1c0;
  dVar12 = (dStack_130 * dVar17 + uStack_170 * local_218 + dStack_150 * local_200) * local_1c8;
  dVar16 = (dVar17 * local_138 + local_218 * local_178 + local_200 * local_158) * local_1d0;
  dVar13 = local_1f8 * local_1c0;
  plVar8 = (longlong *)(lVar9 + 0x438);
  uVar34 = ((uint)((ulonglong)plVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar7 >> 4)) *
           -0x7a143595;
  uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
  uVar34 = uVar34 >> 0x10 ^ uVar34;
  iVar45 = *(int *)(lVar9 + 0x440);
  iVar41 = *(int *)(lVar9 + 0x46c);
  uVar52 = SUB84(local_220,0);
  uVar53 = (undefined4)((ulonglong)local_220 >> 0x20);
  uVar59 = SUB84(local_228,0);
  uVar60 = (undefined4)((ulonglong)local_228 >> 0x20);
  uVar61 = SUB84(local_230,0);
  uVar62 = (undefined4)((ulonglong)local_230 >> 0x20);
  if (iVar45 != iVar41) {
    lVar48 = lVar9 + 0x470;
    if (*(longlong *)(lVar9 + 0x478) != 0) {
      lVar48 = *(longlong *)(lVar9 + 0x478);
    }
    iVar35 = *(int *)(lVar48 + (ulonglong)(*(int *)(lVar9 + 0x480) - 1U & uVar34) * 4);
    if (iVar35 != -1) {
      do {
        lVar48 = *plVar8 + (longlong)iVar35 * 0x40;
        if (*(longlong **)(*plVar8 + (longlong)iVar35 * 0x40) == plVar7) {
          if (lVar48 != 0) goto LAB_140a3775a;
          break;
        }
        iVar35 = *(int *)(lVar48 + 0x38);
      } while (iVar35 != -1);
    }
  }
  if (iVar41 == 0) {
    *(int *)(lVar9 + 0x440) = iVar45 + 1;
    if (*(int *)(lVar9 + 0x444) == iVar45) {
      FUN_1406cd6a8(plVar8,iVar45);
    }
    iVar41 = *(int *)(lVar9 + 0x460);
    if (iVar41 == 0) {
      iVar35 = -1;
    }
    else {
      iVar35 = iVar41 + 0x1e;
      if (-1 < iVar41 + -1) {
        iVar35 = iVar41 + -1;
      }
      iVar35 = iVar35 >> 5;
    }
    lVar47 = lVar9 + 0x448;
    iVar38 = iVar41 + 1;
    iVar50 = iVar41 + 0x1f;
    if (-1 < iVar41) {
      iVar50 = iVar41;
    }
    if (iVar50 >> 5 == iVar35) {
      *(int *)(lVar9 + 0x460) = iVar38;
    }
    else {
      if (*(int *)(lVar9 + 0x464) <= iVar41) {
        uVar46 = iVar41 + 0x20;
        local_238 = (double)(ulonglong)uVar46;
        iVar35 = iVar41;
        if (uVar46 < 0xa0) {
          iVar38 = 0x80;
        }
        else {
          uVar46 = uVar46 >> 5;
          local_238 = (double)(ulonglong)uVar46;
          if (*(int *)(lVar9 + 0x464) + 0x1fU < 0xa0) {
            uVar42 = 4;
            if (4 < uVar46) {
              uVar42 = uVar46;
            }
          }
          else {
            uVar42 = uVar46 + (uVar46 * 3 >> 3) + 0x10;
          }
          uVar39 = (ulonglong)(uVar42 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar46 = (uint)(uVar39 + 0xf);
              if (uVar42 < 0x1ffd) {
                uVar39 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar39 + 0xf >> 4]];
              }
              else {
                uVar40 = (ulonglong)(uVar46 & 0xfffffff0);
                if (uVar40 < 0x7ff1) {
                  bVar37 = (&DAT_14c841e00)[uVar46 >> 4];
                  uVar44 = 0x32;
                  if (0x32 < bVar37) {
                    uVar44 = (ulonglong)bVar37;
                  }
                  uVar49 = 0x32 - (ulonglong)bVar37;
                  do {
                    uVar39 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar49 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar49 & 0xffffffff] & 0xf) == 0) goto LAB_140a378da;
                    lVar48 = uVar44 + 1 + uVar49;
                    uVar49 = uVar49 - 1;
                  } while (lVar48 != 0x33);
                }
                uVar39 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar39 = (ulonglong)DAT_14c841df8;
                }
                uVar39 = -uVar39 & (uVar40 + uVar39) - 1;
              }
            }
            else {
              uVar39 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar39,0);
              iVar35 = *(int *)(lVar9 + 0x460);
            }
          }
LAB_140a378da:
          iVar36 = (int)(uVar39 >> 2);
          iVar38 = -0x20;
          if (local_238._0_4_ <= iVar36) {
            iVar38 = iVar36 << 5;
          }
        }
        *(int *)(lVar9 + 0x464) = iVar38;
        FUN_1446efbd8(lVar47,iVar35);
        iVar38 = *(int *)(lVar9 + 0x460) + 1;
        uVar52 = SUB84(local_220,0);
        uVar53 = (undefined4)((ulonglong)local_220 >> 0x20);
        uVar59 = SUB84(local_228,0);
        uVar60 = (undefined4)((ulonglong)local_228 >> 0x20);
        uVar61 = SUB84(local_230,0);
        uVar62 = (undefined4)((ulonglong)local_230 >> 0x20);
      }
      iVar35 = iVar38 + 0x1f;
      if (-1 < iVar38) {
        iVar35 = iVar38;
      }
      *(int *)(lVar9 + 0x460) = iVar38;
      if (iVar38 % 0x20 != 0) {
        lVar48 = *(longlong *)(lVar9 + 0x458);
        if (*(longlong *)(lVar9 + 0x458) == 0) {
          lVar48 = lVar47;
        }
        bVar37 = -(char)(iVar38 % 0x20);
        *(uint *)(lVar48 + (longlong)(iVar35 >> 5) * 4) =
             (uint)(*(int *)(lVar48 + (longlong)(iVar35 >> 5) * 4) << (bVar37 & 0x1f)) >>
             (bVar37 & 0x1f);
      }
    }
    lVar48 = (longlong)iVar45;
    if (*(longlong *)(lVar9 + 0x458) != 0) {
      lVar47 = *(longlong *)(lVar9 + 0x458);
    }
    bVar37 = (byte)iVar41 & 0x1f;
    puVar2 = (uint *)(lVar47 + (longlong)(iVar50 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar37 | 0xfffffffeU >> 0x20 - bVar37);
  }
  else {
    iVar45 = *(int *)(lVar9 + 0x468);
    lVar48 = (longlong)iVar45;
    iVar35 = *(int *)(*(longlong *)(lVar9 + 0x438) + 4 + lVar48 * 0x40);
    *(int *)(lVar9 + 0x468) = iVar35;
    *(int *)(lVar9 + 0x46c) = iVar41 + -1;
    if (iVar41 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar9 + 0x438) + (longlong)iVar35 * 0x40) = 0xffffffff;
    }
  }
  iVar41 = 1;
  lVar47 = lVar9 + 0x448;
  if (*(longlong *)(lVar9 + 0x458) != 0) {
    lVar47 = *(longlong *)(lVar9 + 0x458);
  }
  iVar35 = iVar45 + 0x1f;
  if (-1 < iVar45) {
    iVar35 = iVar45;
  }
  puVar2 = (uint *)(lVar47 + (longlong)(iVar35 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar45 & 0x1f);
  dVar56 = DAT_14c8464f0;
  dVar21 = DAT_14c8464e8;
  dVar17 = DAT_14c8464e0;
  lVar47 = *(longlong *)(lVar9 + 0x438);
  lVar48 = lVar48 * 0x40;
  puVar3 = (undefined4 *)(lVar47 + lVar48);
  local_168 = DAT_14c8464f0;
  local_178 = DAT_14c8464e0;
  uStack_170 = DAT_14c8464e8;
  dStack_160 = DAT_14c8464e0;
  local_158 = DAT_14c8464e8;
  dStack_150 = DAT_14c8464f0;
  *(longlong **)(lVar47 + lVar48) = plVar7;
  local_178._0_4_ = SUB84(dVar17,0);
  local_178._4_4_ = (undefined4)((ulonglong)dVar17 >> 0x20);
  uStack_170._0_4_ = SUB84(dVar21,0);
  uStack_170._4_4_ = (undefined4)((ulonglong)dVar21 >> 0x20);
  local_168._0_4_ = SUB84(dVar56,0);
  local_168._4_4_ = (undefined4)((ulonglong)dVar56 >> 0x20);
  puVar4 = (undefined4 *)(lVar47 + 8 + lVar48);
  *puVar4 = (undefined4)local_178;
  puVar4[1] = local_178._4_4_;
  puVar4[2] = (undefined4)uStack_170;
  puVar4[3] = uStack_170._4_4_;
  puVar4 = (undefined4 *)(lVar47 + 0x18 + lVar48);
  *puVar4 = (undefined4)local_168;
  puVar4[1] = local_168._4_4_;
  puVar4[2] = (undefined4)local_178;
  puVar4[3] = local_178._4_4_;
  puVar4 = (undefined4 *)(lVar47 + 0x28 + lVar48);
  *puVar4 = (undefined4)uStack_170;
  puVar4[1] = uStack_170._4_4_;
  puVar4[2] = (undefined4)local_168;
  puVar4[3] = local_168._4_4_;
  *(undefined4 *)(lVar47 + 0x38 + lVar48) = 0xffffffff;
  uVar46 = *(int *)(lVar9 + 0x440) - *(int *)(lVar9 + 0x46c);
  local_178 = dVar17;
  uStack_170 = dVar21;
  local_168 = dVar56;
  if (1 < uVar46) {
    lVar48 = lVar9 + 0x470;
    if (*(longlong *)(lVar9 + 0x478) != 0) {
      lVar48 = *(longlong *)(lVar9 + 0x478);
    }
    iVar35 = *(int *)(lVar48 + (ulonglong)(*(int *)(lVar9 + 0x480) - 1U & uVar34) * 4);
    if (iVar35 != -1) {
      do {
        puVar4 = (undefined4 *)(*plVar8 + (longlong)iVar35 * 0x40);
        if (*(longlong **)(*plVar8 + (longlong)iVar35 * 0x40) == plVar7) {
          uVar22 = *puVar3;
          uVar23 = puVar3[1];
          uVar24 = puVar3[2];
          uVar25 = puVar3[3];
          uVar26 = puVar3[4];
          uVar27 = puVar3[5];
          uVar28 = puVar3[6];
          uVar29 = puVar3[7];
          uVar30 = puVar3[8];
          uVar31 = puVar3[9];
          uVar32 = puVar3[10];
          uVar33 = puVar3[0xb];
          *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
          puVar4[8] = uVar30;
          puVar4[9] = uVar31;
          puVar4[10] = uVar32;
          puVar4[0xb] = uVar33;
          puVar4[4] = uVar26;
          puVar4[5] = uVar27;
          puVar4[6] = uVar28;
          puVar4[7] = uVar29;
          *puVar4 = uVar22;
          puVar4[1] = uVar23;
          puVar4[2] = uVar24;
          puVar4[3] = uVar25;
          FUN_146e0f088(plVar8,iVar45);
          goto LAB_140a37727;
        }
        iVar35 = puVar4[0xe];
      } while (iVar35 != -1);
    }
  }
  if (3 < uVar46) {
    uVar39 = (ulonglong)(uVar46 & 0xfffffffe) + 0xf;
    lVar48 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar48 == 0; lVar48 = lVar48 + -1) {
      }
    }
    iVar41 = 1 << ((byte)lVar48 & 0x1f);
  }
  if (((int)uVar46 < 1) || (iVar41 <= *(int *)(lVar9 + 0x480))) {
    uVar34 = *(int *)(lVar9 + 0x480) - 1U & uVar34;
    puVar3[0xf] = uVar34;
    lVar48 = *(longlong *)(lVar9 + 0x478);
    if (*(longlong *)(lVar9 + 0x478) == 0) {
      lVar48 = lVar9 + 0x470;
    }
    puVar3[0xe] = *(undefined4 *)
                   (lVar48 + ((longlong)*(int *)(lVar9 + 0x480) - 1U & (longlong)(int)uVar34) * 4);
    lVar48 = *(longlong *)(lVar9 + 0x478);
    if (*(longlong *)(lVar9 + 0x478) == 0) {
      lVar48 = lVar9 + 0x470;
    }
    *(int *)(lVar48 + ((longlong)*(int *)(lVar9 + 0x480) - 1U & (longlong)(int)uVar34) * 4) = iVar45
    ;
  }
  else {
    *(int *)(lVar9 + 0x480) = iVar41;
    FUN_140bb7104(plVar8);
  }
LAB_140a37727:
  lVar48 = (longlong)iVar45 * 0x40 + *plVar8;
LAB_140a3775a:
  dVar17 = (double)DAT_14c75f20c;
  *(double *)(lVar48 + 8) = (double)CONCAT44(uVar62,uVar61) * dVar17 + *(double *)(lVar48 + 8);
  *(double *)(lVar48 + 0x10) = (double)CONCAT44(uVar60,uVar59) * dVar17 + *(double *)(lVar48 + 0x10)
  ;
  *(double *)(lVar48 + 0x18) = (double)CONCAT44(uVar53,uVar52) * dVar17 + *(double *)(lVar48 + 0x18)
  ;
  *(double *)(lVar48 + 0x20) = (dVar13 + dVar16 + dVar12) * dVar17 + *(double *)(lVar48 + 0x20);
  *(double *)(lVar48 + 0x28) = (dVar57 + dVar15 + dVar58) * dVar17 + *(double *)(lVar48 + 0x28);
  *(double *)(lVar48 + 0x30) = (dVar18 + dVar19 + dVar14) * dVar17 + *(double *)(lVar48 + 0x30);
LAB_140a36c70:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a37a82 FUN_140a37a82 body=176 status=ok
// SIG undefined FUN_140a37a82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140a37a82(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c992ea0) {
    FUN_144b3d300(&DAT_14c992ea0);
    if (DAT_14c992ea0 == -1) {
      uVar1 = FUN_145765498();
      FUN_1446f470e(&local_20,L"FCharacterGroundConstraintHandle",1);
      _DAT_14c992e90 = local_20;
      _DAT_14c992e98 = uVar1;
      _Init_thread_footer(&DAT_14c992ea0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14c992e90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a37b34 FUN_140a37b34 body=7608 status=ok
// SIG undefined FUN_140a37b34(void)

undefined8 *
FUN_140a37b34(longlong param_1,undefined8 *param_2,ulonglong *******param_3,undefined1 param_4)

{
  float fVar1;
  ulonglong *******pppppppuVar2;
  ulonglong ******ppppppuVar3;
  ulonglong ******ppppppuVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulonglong ******ppppppuVar16;
  longlong lVar17;
  ulonglong *****pppppuVar18;
  ulonglong *******pppppppuVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  ulonglong *******pppppppuVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong ****ppppuVar27;
  ulonglong *******pppppppuVar28;
  ulonglong *puVar29;
  ushort uVar30;
  longlong lVar31;
  ulonglong **ppuVar32;
  ushort uVar33;
  ulonglong *****pppppuVar34;
  ulonglong **ppuVar35;
  ulonglong uVar36;
  ulonglong *****pppppuVar37;
  int iVar38;
  ulonglong *******pppppppuVar39;
  byte bVar40;
  undefined8 *puVar41;
  bool bVar42;
  float fVar43;
  double dVar44;
  undefined1 auStack_328 [32];
  ulonglong ******local_308;
  ulonglong ******local_300;
  ulonglong ******local_2f0;
  longlong local_2e8;
  ulonglong ******local_2e0;
  undefined8 *local_2d8;
  ulonglong ******local_2d0;
  longlong *local_2c8;
  ulonglong local_2c0;
  longlong local_2b8;
  ulonglong ******local_2b0;
  ulonglong ******local_2a8;
  ulonglong ******local_2a0;
  ulonglong ******local_298 [2];
  ulonglong *****local_288 [2];
  longlong local_278;
  undefined8 uStack_270;
  ulonglong *****local_268;
  undefined4 local_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248 [2];
  ulonglong ******local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  longlong local_208 [2];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  ulonglong ***local_1d8;
  ulonglong ***pppuStack_1d0;
  ulonglong ***local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulonglong *****local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined4 local_174;
  ulonglong ******local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  ulonglong ******local_140;
  undefined4 local_132;
  undefined2 local_12e;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong ******local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  ulonglong ******local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_60;
  
  local_2b0 = (ulonglong ******)CONCAT71(local_2b0._1_7_,param_4);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_2d8 = param_2;
  if (param_3 == (ulonglong *******)0x0) goto LAB_140a39886;
  iVar11 = *(int *)((*param_3)[0xb5] + (longlong)*(int *)(param_3 + 1) * 2 + 1);
  lVar17 = param_1 + 0x118;
  uVar10 = FUN_140196188(lVar17,param_3);
  lVar12 = FUN_1401961f6(lVar17,uVar10);
  if (iVar11 < 1) goto LAB_140a39886;
  local_2c8 = (longlong *)(param_1 + 200);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar21 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
             -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    lVar31 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar31 = *(longlong *)(param_1 + 0x108);
    }
    iVar11 = *(int *)(lVar31 + (ulonglong)
                               (*(int *)(param_1 + 0x110) - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
    if (iVar11 != -1) {
      do {
        lVar31 = *local_2c8 + (longlong)iVar11 * 0x20;
        if (*(ulonglong ********)(*local_2c8 + (longlong)iVar11 * 0x20) == param_3)
        goto LAB_140a37c70;
        iVar11 = *(int *)(lVar31 + 0x18);
      } while (iVar11 != -1);
    }
  }
  lVar31 = 0;
LAB_140a37c70:
  local_238 = (ulonglong ******)0x0;
  uStack_230 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = (ulonglong ******)0x0;
  uStack_c0 = (ulonglong *******)0x0;
  uStack_9c = 0x80;
  uStack_98 = 0xffffffff;
  iStack_94 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  uVar21 = *(uint *)(lVar31 + 0x10);
  local_2e8 = param_1;
  local_2e0 = (ulonglong ******)param_3;
  if ((longlong)(int)uVar21 != 0) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar21);
    }
    FUN_14050411e(&local_c8,uVar21);
    if (uVar21 < 4) {
      iVar11 = 1;
    }
    else {
      uVar21 = (uVar21 | 1) + 0xe;
      iVar11 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 1 << ((byte)iVar11 & 0x1f);
    }
    if ((local_80 == 0) || (local_80 < iVar11)) {
      local_80 = iVar11;
      FUN_140503e74();
    }
    if ((longlong)*(int *)(lVar31 + 0x10) != 0) {
      pppppppuVar19 = *(ulonglong ********)(lVar31 + 8);
      pppppppuVar28 = pppppppuVar19 + *(int *)(lVar31 + 0x10);
      do {
        uVar36 = uStack_230;
        local_198 = (ulonglong *****)*pppppppuVar19;
        if ((int)uStack_c0 != iStack_94) {
          uVar21 = ((uint)((ulonglong)local_198 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_198 >> 4)) * -0x7a143595;
          uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
          puVar13 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar13 = local_90;
          }
          for (iVar11 = *(int *)(puVar13 +
                                (ulonglong)(local_80 - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
              iVar11 != -1; iVar11 = *(int *)(local_c8 + (longlong)iVar11 * 2 + 1)) {
            if (local_c8[(longlong)iVar11 * 2] == local_198) goto LAB_140a380c7;
          }
        }
        lVar31 = (longlong)(int)uStack_230;
        uVar21 = (int)uStack_230 + 1;
        uStack_230 = CONCAT44(uStack_230._4_4_,uVar21);
        local_2f0 = (ulonglong ******)pppppppuVar28;
        if (uStack_230._4_4_ < uVar21) {
          FUN_14172b098(&local_238,uVar36 & 0xffffffff);
        }
        ppppppuVar4 = local_238;
        local_238[lVar31 * 2] = (ulonglong *****)0x0;
        (local_238 + lVar31 * 2)[1] = (ulonglong *****)0x0;
        local_1f8._0_12_ = ZEXT412(1) << 0x40;
        local_1f8._12_4_ = 0;
        FUN_1406b7a4a(local_1f8,0);
        *(ulonglong ******)local_1f8._0_8_ = local_198;
        FUN_140503ab8(&local_c8,&local_118,&local_198,0);
        if (local_1f8._8_4_ != 0) {
          pppppppuVar28 = (ulonglong *******)(ppppppuVar4 + lVar31 * 2);
          do {
            pppppuVar37 = *(ulonglong ******)
                           (local_1f8._0_8_ + ((longlong)(int)local_1f8._8_4_ + -1) * 8);
            local_1f8._8_4_ = local_1f8._8_4_ + -1;
            FUN_1400ca182(local_1f8);
            if (pppppuVar37 != (ulonglong *****)0x0) {
              iVar11 = *(int *)(pppppppuVar28 + 1);
              *(uint *)(pppppppuVar28 + 1) = iVar11 + 1U;
              if (*(uint *)((longlong)pppppppuVar28 + 0xc) < iVar11 + 1U) {
                FUN_1406b7a4a(pppppppuVar28,iVar11);
              }
              (*pppppppuVar28)[iVar11] = pppppuVar37;
              pppppuVar18 = (ulonglong *****)0x0;
              if (2 < *(byte *)((longlong)pppppuVar37 + 0xc)) {
                pppppuVar18 = pppppuVar37;
              }
              lVar31 = (longlong)
                       *(int *)((*pppppuVar18)[0xcd] + (longlong)*(int *)(pppppuVar18 + 1) * 2 + 1);
              if (lVar31 != 0) {
                ppuVar32 = (*pppppuVar18)[0xcd][(longlong)*(int *)(pppppuVar18 + 1) * 2];
                ppuVar35 = ppuVar32 + lVar31 * 2;
                do {
                  local_118 = (ulonglong ******)*ppuVar32;
                  cVar9 = FUN_14299128a(pppppuVar37);
                  pppppppuVar23 = (ulonglong *******)local_118;
                  if (cVar9 == '\0') {
                    if ((ulonglong *******)local_118 != (ulonglong *******)0x0) {
LAB_140a37f23:
                      if ((int)uStack_c0 != iStack_94) {
                        uVar21 = ((uint)((ulonglong)pppppppuVar23 >> 0x14) & 0xffff ^
                                 (uint)((ulonglong)pppppppuVar23 >> 4)) * -0x7a143595;
                        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
                        puVar13 = local_88;
                        if (local_88 == (undefined1 *)0x0) {
                          puVar13 = local_90;
                        }
                        for (iVar11 = *(int *)(puVar13 +
                                              (ulonglong)(local_80 - 1U & (uVar21 >> 0x10 ^ uVar21))
                                              * 4); iVar11 != -1;
                            iVar11 = *(int *)(local_c8 + (longlong)iVar11 * 2 + 1)) {
                          if ((ulonglong *******)local_c8[(longlong)iVar11 * 2] == pppppppuVar23)
                          goto LAB_140a37ff1;
                        }
                      }
                      uVar10 = local_1f8._8_4_;
                      lVar31 = (longlong)(int)local_1f8._8_4_;
                      uVar21 = local_1f8._8_4_ + 1;
                      local_1f8._8_4_ = uVar21;
                      if ((uint)local_1f8._12_4_ < uVar21) {
                        FUN_1406b7a4a(local_1f8,uVar10);
                        pppppppuVar23 = (ulonglong *******)local_118;
                      }
                      *(ulonglong ********)(local_1f8._0_8_ + lVar31 * 8) = pppppppuVar23;
                      FUN_140503ab8(&local_c8,&local_228,&local_118,0);
                    }
                  }
                  else if ((ulonglong *******)local_118 != (ulonglong *******)0x0 && lVar12 != 0) {
                    bVar20 = *(byte *)((longlong)local_118 + 0xc);
                    do {
                      if ((bVar20 < 3) ||
                         (pppppppuVar2 = (ulonglong *******)
                                         (*pppppppuVar23)[0xb5]
                                         [(longlong)*(int *)(pppppppuVar23 + 1) * 2],
                         pppppppuVar2 == (ulonglong *******)0x0)) break;
                      bVar20 = *(byte *)((longlong)pppppppuVar2 + 0xc);
                      pppppppuVar39 = pppppppuVar2;
                      if (bVar20 < 3) {
                        pppppppuVar39 = (ulonglong *******)0x0;
                      }
                      if (pppppppuVar39 == (ulonglong *******)local_2e0) goto LAB_140a37f23;
                      pppppppuVar23 = pppppppuVar2;
                      local_118 = (ulonglong ******)pppppppuVar39;
                    } while (pppppppuVar39 != (ulonglong *******)0x0);
                  }
LAB_140a37ff1:
                  ppuVar32 = ppuVar32 + 2;
                } while (ppuVar32 != ppuVar35);
              }
            }
          } while (local_1f8._8_4_ != 0);
        }
        param_3 = (ulonglong *******)local_2e0;
        pppppppuVar28 = (ulonglong *******)local_2f0;
        if ((ulonglong ******)local_1f8._0_8_ != (ulonglong ******)0x0) {
          FUN_1400020a8();
          param_3 = (ulonglong *******)local_2e0;
          pppppppuVar28 = (ulonglong *******)local_2f0;
        }
LAB_140a380c7:
        pppppppuVar19 = pppppppuVar19 + 1;
      } while (pppppppuVar19 != pppppppuVar28);
    }
  }
  local_80 = 0;
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_c8);
  if (lVar12 == 0) {
    local_248[0] = 0;
    local_248[1] = 0;
    uVar36 = uStack_230 & 0xffffffff;
    if ((int)uStack_230 < 0) {
LAB_140a38ae1:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar36);
    }
    if (uVar36 != 0) {
      FUN_14172b1a6(local_248);
    }
    pppppppuVar28 = (ulonglong *******)(*param_3)[0x19][*(int *)(param_3 + 1)];
    if ((pppppppuVar28 == (ulonglong *******)0x0) || (*(int *)((longlong)pppppppuVar28 + 0x1c) != 2)
       ) {
      local_2f0 = (ulonglong ******)0x0;
      pppppppuVar28 = (ulonglong *******)0x0;
      cVar9 = '\0';
    }
    else {
      cVar9 = *(char *)((longlong)pppppppuVar28 + 399);
      local_2f0 = (ulonglong ******)CONCAT71((int7)(int3)((uint)*(int *)(param_3 + 1) >> 8),1);
    }
    local_258 = 0;
    uStack_250 = 0;
    if ((longlong)(int)uStack_230 != 0) {
      pppppppuVar19 = (ulonglong *******)(local_238 + (longlong)(int)uStack_230 * 2);
      local_2f0 = (ulonglong ******)
                  CONCAT71((int7)((ulonglong)local_2f0 >> 8),(byte)local_2f0 & cVar9 == '\x01');
      local_2b8 = local_2e8 + 0x128;
      uVar36 = 0;
      pppppppuVar23 = (ulonglong *******)local_238;
      local_2d0 = (ulonglong ******)pppppppuVar19;
      local_2a8 = (ulonglong ******)pppppppuVar28;
      do {
        if ((((char)local_2f0 == '\0') && (DAT_14c75f200 != '\x01')) ||
           ((longlong)*(int *)(pppppppuVar23 + 1) == 0)) {
LAB_140a38580:
          iVar11 = (int)uVar36;
          if (*(int *)(pppppppuVar23 + 1) == 1) {
            ppppppuVar4 = (ulonglong ******)**pppppppuVar23;
            local_1f8._0_8_ = ppppppuVar4;
            local_c8 = (ulonglong ******)0x0;
            uStack_c0 = (ulonglong *******)CONCAT44(uStack_c0._4_4_,1);
            FUN_140509e62(&local_c8,1,0);
            *local_c8 = (ulonglong *****)ppppppuVar4;
            FUN_1429c390a(local_2e8,param_3,&local_c8);
            if ((ulonglong *******)local_c8 != (ulonglong *******)0x0) {
              FUN_1400020a8();
            }
            FUN_140503ab8(local_2d8,&local_c8);
          }
        }
        else {
          ppppppuVar16 = *pppppppuVar23;
          ppppppuVar4 = ppppppuVar16 + *(int *)(pppppppuVar23 + 1);
          lVar12 = 0;
          local_2c0 = uVar36;
          do {
            pppppuVar37 = *ppppppuVar16;
            if ((pppppuVar37 != (ulonglong *****)0x0) &&
               (2 < *(byte *)((longlong)pppppuVar37 + 0xc))) {
              if ((char)local_2f0 != '\0') {
                FUN_146ee830a(local_2a8,pppppuVar37);
              }
              if ((DAT_14c75f200 == '\x01') && (lVar12 == 0)) {
                lVar12 = (longlong)
                         *(int *)((*pppppuVar37)[0xcd] + (longlong)*(int *)(pppppuVar37 + 1) * 2 + 1
                                 );
                if (lVar12 != 0) {
                  ppuVar32 = (*pppppuVar37)[0xcd][(longlong)*(int *)(pppppuVar37 + 1) * 2];
                  ppuVar35 = ppuVar32 + lVar12 * 2;
                  do {
                    cVar9 = FUN_14299128a(pppppuVar37,ppuVar32);
                    if (cVar9 != '\0') {
                      puVar29 = *ppuVar32;
                      if (puVar29 != (ulonglong *)0x0) {
                        bVar20 = *(byte *)((longlong)puVar29 + 0xc);
                        while (2 < bVar20) {
                          lVar12 = (longlong)(int)puVar29[1] * 0x10;
                          if (*(char *)(*(longlong *)(*puVar29 + 0x2c0) + 0xd + lVar12) != '\x01')
                          goto LAB_140a3850e;
                          puVar29 = *(ulonglong **)(*(longlong *)(*puVar29 + 0x5a8) + lVar12);
                          if (puVar29 == (ulonglong *)0x0) break;
                          bVar20 = *(byte *)((longlong)puVar29 + 0xc);
                        }
                      }
                      puVar29 = (ulonglong *)0x0;
LAB_140a3850e:
                      uVar10 = FUN_140196188(lVar17,puVar29);
                      lVar12 = FUN_1401961f6(lVar17,uVar10);
                      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xf8) & 4) != 0))
                      goto LAB_140a3853c;
                    }
                    ppuVar32 = ppuVar32 + 2;
                  } while (ppuVar32 != ppuVar35);
                }
                lVar12 = 0;
              }
            }
LAB_140a3853c:
            ppppppuVar16 = ppppppuVar16 + 1;
          } while (ppppppuVar16 != ppppppuVar4);
          param_3 = (ulonglong *******)local_2e0;
          pppppppuVar19 = (ulonglong *******)local_2d0;
          uVar36 = local_2c0;
          if (lVar12 == 0) goto LAB_140a38580;
          local_1f8 = ZEXT816(0);
          local_198 = (ulonglong *****)0x0;
          uStack_190 = 0;
          uVar21 = *(uint *)(pppppppuVar23 + 1);
          uVar36 = (ulonglong)uVar21;
          if (DAT_14c75f201 == '\x01') {
            if ((int)uVar21 < 0) goto LAB_140a38ae1;
            if (uVar21 != 0) {
              FUN_14043d0a6(local_1f8);
              uVar21 = *(uint *)(pppppppuVar23 + 1);
              uVar36 = (ulonglong)uVar21;
              if (-1 < (int)uVar21) {
                if ((int)uStack_190._4_4_ < (int)uVar21) {
                  FUN_14043d0a6(&local_198);
                  uVar21 = *(uint *)(pppppppuVar23 + 1);
                }
                goto LAB_140a38675;
              }
              goto LAB_140a38ae1;
            }
          }
          else {
LAB_140a38675:
            if (uVar21 != 0) {
              ppppppuVar4 = *pppppppuVar23;
              lVar31 = 0;
              do {
                local_118 = *(ulonglong *******)((longlong)ppppppuVar4 + lVar31);
                if (DAT_14c75f201 == '\x01') {
                  cVar9 = FUN_146cb8668(lVar17,lVar12);
                  uVar36 = uStack_190;
                  if (cVar9 == '\0') {
                    iVar11 = (int)uStack_190;
                    uVar22 = (int)uStack_190 + 1;
                    uStack_190 = CONCAT44(uStack_190._4_4_,uVar22);
                    ppppppuVar16 = (ulonglong ******)local_198;
                    if (uStack_190._4_4_ < uVar22) {
                      FUN_1406b7a4a(&local_198,uVar36 & 0xffffffff);
                      ppppppuVar16 = (ulonglong ******)local_198;
                    }
                  }
                  else {
                    iVar11 = local_1f8._8_4_;
                    uVar22 = local_1f8._8_4_ + 1;
                    local_1f8._8_4_ = uVar22;
                    if ((uint)local_1f8._12_4_ < uVar22) {
                      FUN_1406b7a4a(local_1f8,iVar11);
                    }
                    ppppppuVar16 = (ulonglong ******)local_1f8._0_8_;
                  }
                  ppppppuVar16[iVar11] = (ulonglong *****)local_118;
                }
                local_12c = CONCAT31(local_12c._1_3_,1);
                local_c8 = (ulonglong ******)&local_118;
                uStack_c0 = (ulonglong *******)&local_12c;
                FUN_146ce9b8c(lVar12 + 0x30,&local_228,&local_c8,0);
                lVar31 = lVar31 + 8;
              } while ((longlong)(int)uVar21 * 8 != lVar31);
            }
          }
          local_308 = (ulonglong ******)pppppppuVar23;
          if (DAT_14c75f201 != '\0') {
            local_308 = (ulonglong ******)local_1f8;
          }
          FUN_146cb7fae(lVar17,local_2b8,*(undefined4 *)(lVar12 + 0x80));
          pppppuVar37 = local_198;
          lVar12 = (longlong)(int)uStack_190;
          iVar11 = (int)local_2c0;
          if (lVar12 != 0) {
            lVar31 = 0;
            do {
              lVar26 = *(longlong *)((longlong)pppppuVar37 + lVar31);
              if (*(byte *)(lVar26 + 0xc) < 3) {
                lVar26 = 0;
              }
              local_c8 = (ulonglong ******)CONCAT71(local_c8._1_7_,1);
              FUN_1447dc87e(local_2e8,lVar26,&local_c8);
              lVar31 = lVar31 + 8;
            } while (lVar12 * 8 != lVar31);
            FUN_1429c390a(local_2e8,local_2e0,&local_198);
            local_268 = local_198;
            local_260 = (int)uStack_190;
            FUN_1405039ea(local_2d8,&local_268);
          }
          uVar36 = uStack_250;
          param_3 = (ulonglong *******)local_2e0;
          lVar12 = (longlong)(int)uStack_250;
          uVar21 = (int)uStack_250 + 1;
          uStack_250 = CONCAT44(uStack_250._4_4_,uVar21);
          if (uStack_250._4_4_ < uVar21) {
            FUN_1446f48e2(&local_258,uVar36 & 0xffffffff);
          }
          pppppppuVar19 = (ulonglong *******)local_2d0;
          *(int *)(local_258 + lVar12 * 4) = iVar11;
          if ((ulonglong ******)local_198 != (ulonglong ******)0x0) {
            FUN_1400020a8();
          }
          if ((ulonglong ******)local_1f8._0_8_ != (ulonglong ******)0x0) {
            FUN_1400020a8();
          }
        }
        uVar36 = (ulonglong)(iVar11 + 1);
        pppppppuVar23 = pppppppuVar23 + 2;
      } while (pppppppuVar23 != pppppppuVar19);
      if (0 < (longlong)(int)uStack_250) {
        uVar36 = (longlong)(int)uStack_250 + 1;
        do {
          FUN_146e0f88a(&local_238,*(undefined4 *)(local_258 + -8 + uVar36 * 4));
          uVar36 = uVar36 - 1;
        } while (1 < uVar36);
      }
    }
    puVar41 = local_2d8;
    lVar17 = local_2e8;
    if ((char)local_2b0 != '\0') {
      if ((longlong)(int)uStack_230 == 0) {
        local_278 = 0;
        uStack_270 = 0;
        iVar11 = 0;
      }
      else {
        pppppppuVar19 = (ulonglong *******)(local_238 + (longlong)(int)uStack_230 * 2);
        pppppppuVar28 = (ulonglong *******)local_238;
        do {
          FUN_1429c390a(lVar17,param_3,pppppppuVar28);
          iVar11 = *(int *)(pppppppuVar28 + 1);
          if (1 < (longlong)iVar11) {
            ppppppuVar4 = *pppppppuVar28;
            lVar12 = 0;
            do {
              FUN_14016dd2a(lVar17,*(undefined8 *)((longlong)ppppppuVar4 + lVar12),0);
              lVar12 = lVar12 + 8;
            } while ((longlong)iVar11 * 8 != lVar12);
          }
          param_3 = (ulonglong *******)local_2e0;
          pppppppuVar28 = pppppppuVar28 + 2;
        } while (pppppppuVar28 != pppppppuVar19);
        local_278 = 0;
        uStack_270 = 0;
        if ((longlong)(int)uStack_230 != 0) {
          lVar12 = 0;
          iVar11 = 0;
          do {
            iVar11 = iVar11 + (uint)(1 < *(int *)((longlong)local_238 + lVar12 + 8));
            lVar12 = lVar12 + 0x10;
          } while ((longlong)(int)uStack_230 * 0x10 != lVar12);
          if (iVar11 != 0) {
            FUN_14043d0a6(&local_278,iVar11);
            goto LAB_140a389ce;
          }
        }
        iVar11 = 0;
      }
LAB_140a389ce:
      lVar12 = (longlong)*(int *)(param_3 + 1);
      pppppuVar18 = (*param_3)[0xa6];
      pppppuVar37 = (*param_3)[0xa9];
      dVar6 = (double)*(float *)((longlong)pppppuVar37 + lVar12 * 0x10 + 0xc);
      dVar44 = (double)*(float *)((longlong)pppppuVar37 + lVar12 * 0x10 + 4);
      local_1f8._8_4_ = SUB84(dVar44,0);
      local_1f8._0_8_ = (double)*(float *)(pppppuVar37 + lVar12 * 2);
      local_1f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      local_1e8._8_4_ = SUB84(dVar6,0);
      local_1e8._0_8_ = (double)*(float *)(pppppuVar37 + lVar12 * 2 + 1);
      local_1e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      pppppuVar37 = pppppuVar18 + lVar12 * 3;
      local_1d8 = (ulonglong ***)*pppppuVar37;
      pppuStack_1d0 = (ulonglong ***)pppppuVar37[1];
      local_1c8 = (ulonglong ***)pppppuVar18[lVar12 * 3 + 2];
      uStack_1c0 = 0;
      local_1b8 = 0x3ff0000000000000;
      uStack_1b0 = 0x3ff0000000000000;
      local_1a8 = 0x3ff0000000000000;
      uStack_1a0 = 0;
      local_c8 = (ulonglong ******)CONCAT44(local_c8._4_4_,0x10000);
      local_308 = (ulonglong ******)&local_c8;
      FUN_14043bbba(*(undefined8 *)(lVar17 + 0x18),local_208,iVar11,0);
      if ((longlong)(int)uStack_230 != 0) {
        pppppppuVar19 = (ulonglong *******)(local_238 + (longlong)(int)uStack_230 * 2);
        local_2f0 = (ulonglong ******)(lVar17 + 0x28);
        local_2d0 = (ulonglong ******)(lVar17 + 0x100);
        local_2c0 = lVar17 + 0x78;
        iVar11 = 0;
        pppppppuVar28 = (ulonglong *******)local_238;
LAB_140a38b1e:
        if (1 < *(int *)(pppppppuVar28 + 1)) {
          local_228 = (undefined4)DAT_14c846510;
          uStack_224 = DAT_14c846510._4_4_;
          uStack_220 = (undefined4)DAT_14c846518;
          uStack_21c = DAT_14c846518._4_4_;
          local_218 = DAT_14c846520;
          local_128 = 0;
          uStack_124 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          local_2a0 = *(ulonglong *******)(local_208[0] + (longlong)iVar11 * 8);
          local_2a8 = (ulonglong ******)pppppppuVar19;
          local_140 = local_2a0;
          if ((ulonglong *******)local_2a0 == (ulonglong *******)0x0) {
            local_198 = (ulonglong *****)CONCAT44(local_198._4_4_,0x10000);
            local_308 = &local_198;
            FUN_14043bbba(*(undefined8 *)(lVar17 + 0x18),&local_c8,1,0);
            local_140 = (ulonglong ******)*local_c8;
            if ((ulonglong *******)local_c8 != (ulonglong *******)0x0) {
              FUN_1400020a8();
            }
          }
          local_2b8 = CONCAT44(local_2b8._4_4_,iVar11);
          FUN_140a36458(*(undefined8 *)(lVar17 + 0x18),local_140);
          *(undefined4 *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2) = 0x7fffffff;
          FUN_140a3609c(local_2f0,&local_c8,&local_140,0);
          *(byte *)((longlong)(*local_140)[0xd0] + (longlong)*(int *)(local_140 + 1)) =
               *(byte *)((longlong)(*local_140)[0xd0] + (longlong)*(int *)(local_140 + 1)) | 1;
          uVar10 = *(undefined4 *)(pppppppuVar28 + 1);
          iVar11 = *(int *)(local_140 + 1);
          pppppuVar37 = (ulonglong *****)(*local_140)[0xb5];
          pppppuVar37[(longlong)iVar11 * 2] = (ulonglong ****)0x0;
          *(undefined4 *)(pppppuVar37 + (longlong)iVar11 * 2 + 1) = uVar10;
          *(byte *)((longlong)(*local_140)[0xd0] + (longlong)*(int *)(local_140 + 1)) =
               *(byte *)((longlong)(*local_140)[0xd0] + (longlong)*(int *)(local_140 + 1)) & 0xfd;
          iVar11 = *(int *)(pppppppuVar28 + 1);
          if ((longlong)iVar11 != 0) {
            ppppppuVar4 = *pppppppuVar28;
            lVar12 = 0;
            do {
              lVar31 = *(longlong *)(lVar17 + 0x18);
              pcVar5 = *(code **)(lVar31 + 0x1050);
              if (pcVar5 != (code *)0x0) {
                local_198 = *(ulonglong ******)((longlong)ppppppuVar4 + lVar12);
                local_c8 = local_140;
                plVar24 = (longlong *)(lVar31 + 0x1070);
                if (*(longlong **)(lVar31 + 0x1060) != (longlong *)0x0) {
                  plVar24 = *(longlong **)(lVar31 + 0x1060);
                }
                uVar15 = (**(code **)(*plVar24 + 8))();
                (*pcVar5)(uVar15,&local_198,&local_c8);
              }
              lVar12 = lVar12 + 8;
            } while ((longlong)iVar11 * 8 != lVar12);
          }
          if (*(int *)(lVar17 + 0xd0) != *(int *)(lVar17 + 0xfc)) {
            uVar21 = ((uint)((ulonglong)local_140 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_140 >> 4)) * -0x7a143595;
            uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
            pppppppuVar19 = *(ulonglong ********)(lVar17 + 0x108);
            if (*(ulonglong ********)(lVar17 + 0x108) == (ulonglong *******)0x0) {
              pppppppuVar19 = (ulonglong *******)local_2d0;
            }
            iVar11 = *(int *)((longlong)pppppppuVar19 +
                             (ulonglong)(*(int *)(lVar17 + 0x110) - 1U & (uVar21 >> 0x10 ^ uVar21))
                             * 4);
            if (iVar11 != -1) {
              lVar12 = *local_2c8;
              iVar38 = iVar11;
              do {
                if (*(ulonglong ********)(lVar12 + (longlong)iVar38 * 0x20) ==
                    (ulonglong *******)local_140) goto LAB_140a39046;
                iVar38 = *(int *)((longlong)iVar38 * 0x20 + lVar12 + 0x18);
              } while (iVar38 != -1);
            }
          }
          local_c8 = (ulonglong ******)&local_140;
          uStack_c0 = pppppppuVar28;
          FUN_140c6236c(local_2c8,&local_198,&local_c8);
          goto LAB_140a38dab;
        }
        goto LAB_140a39767;
      }
LAB_140a39774:
      if (local_208[0] != 0) {
        FUN_1400020a8();
      }
      uVar22 = *(int *)(puVar41 + 1) - *(int *)((longlong)puVar41 + 0x34);
      uVar21 = uVar22 + (int)uStack_270;
      if (uVar22 < uVar21) {
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar21);
        }
        FUN_14050411e(puVar41,uVar21);
        iVar11 = 1;
        if (3 < uVar21) {
          uVar21 = (uVar21 | 1) + 0xe;
          iVar11 = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          iVar11 = 1 << ((byte)iVar11 & 0x1f);
        }
        if ((*(int *)(puVar41 + 9) == 0) || (*(int *)(puVar41 + 9) < iVar11)) {
          *(int *)(puVar41 + 9) = iVar11;
          FUN_140503e74(puVar41);
        }
      }
      if ((int)uStack_270 != 0) {
        lVar12 = (longlong)(int)uStack_270 << 3;
        lVar17 = local_278;
        do {
          FUN_140a35574(puVar41,&local_c8,lVar17,0);
          lVar17 = lVar17 + 8;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      bVar42 = (longlong)uStack_270 < 0;
      uStack_270 = uStack_270 & 0xffffffff00000000;
      if (bVar42) {
        FUN_14043d0a6(&local_278,0);
      }
      if (local_278 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    if (local_248[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if (((DAT_14c75f200 == '\x01') && ((*(byte *)(lVar12 + 0xf8) & 4) != 0)) &&
          ((longlong)(int)uStack_230 != 0)) {
    local_2e0 = local_238 + (longlong)(int)uStack_230 * 2;
    local_2e8 = local_2e8 + 0x128;
    pppppppuVar28 = (ulonglong *******)local_238;
    do {
      local_c8 = (ulonglong ******)0x0;
      uStack_c0 = (ulonglong *******)0x0;
      if ((longlong)*(int *)(pppppppuVar28 + 1) == 0) {
LAB_140a382d0:
        pppppppuVar19 = pppppppuVar28 + 1;
        local_308 = (ulonglong ******)pppppppuVar28;
        FUN_146cb7fae(lVar17,local_2e8,*(undefined4 *)(lVar12 + 0x80),2);
        local_288[0] = (ulonglong *****)*pppppppuVar28;
        pppppppuVar23 = (ulonglong *******)local_288;
LAB_140a3834f:
        *(undefined4 *)(pppppppuVar23 + 1) = *(undefined4 *)pppppppuVar19;
        FUN_1405039ea(local_2d8);
      }
      else {
        ppppppuVar16 = *pppppppuVar28;
        ppppppuVar4 = ppppppuVar16 + *(int *)(pppppppuVar28 + 1);
        bVar42 = false;
        do {
          ppppppuVar3 = (ulonglong ******)*ppppppuVar16;
          if ((!bVar42) && (*(int *)(lVar12 + 0x38) != *(int *)(lVar12 + 100))) {
            uVar21 = ((uint)((ulonglong)ppppppuVar3 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)ppppppuVar3 >> 4)) * -0x7a143595;
            uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
            lVar31 = *(longlong *)(lVar12 + 0x70);
            if (*(longlong *)(lVar12 + 0x70) == 0) {
              lVar31 = lVar12 + 0x68;
            }
            iVar11 = *(int *)(lVar31 + (ulonglong)
                                       (*(int *)(lVar12 + 0x78) - 1U & (uVar21 >> 0x10 ^ uVar21)) *
                                       4);
            if (iVar11 != -1) {
              do {
                puVar29 = (ulonglong *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar11 * 0x18);
                if ((ulonglong ******)*puVar29 == ppppppuVar3) {
                  if ((puVar29 + 1 != (ulonglong *)0x0 && puVar29 != (ulonglong *)0x0) &&
                     ((puVar29[1] & 1) == 0)) {
                    bVar42 = true;
                  }
                  break;
                }
                iVar11 = (int)puVar29[2];
              } while (iVar11 != -1);
            }
          }
          if (DAT_14c75f201 == '\x01') {
            cVar9 = FUN_146cb8668(lVar17,lVar12,ppppppuVar3);
            pppppppuVar19 = uStack_c0;
            if (cVar9 == '\0') {
              lVar31 = (longlong)(int)uStack_c0;
              uVar21 = (int)uStack_c0 + 1;
              uStack_c0 = (ulonglong *******)CONCAT44(uStack_c0._4_4_,uVar21);
              local_2f0 = (ulonglong ******)pppppppuVar28;
              if (uStack_c0._4_4_ < uVar21) {
                FUN_1406b7a4a(&local_c8,(ulonglong)pppppppuVar19 & 0xffffffff);
              }
              local_c8[lVar31] = (ulonglong *****)ppppppuVar3;
              pppppppuVar28 = (ulonglong *******)local_2f0;
            }
          }
          else if (bVar42) break;
          ppppppuVar16 = ppppppuVar16 + 1;
        } while (ppppppuVar16 != ppppppuVar4);
        if (!bVar42) goto LAB_140a382d0;
        if ((int)uStack_c0 != 0) {
          local_308 = (ulonglong ******)&local_c8;
          FUN_146cb7fae(lVar17,local_2e8,*(undefined4 *)(lVar12 + 0x80),2);
          local_298[0] = local_c8;
          pppppppuVar19 = (ulonglong *******)&uStack_c0;
          pppppppuVar23 = local_298;
          goto LAB_140a3834f;
        }
      }
      if ((ulonglong *******)local_c8 != (ulonglong *******)0x0) {
        FUN_1400020a8();
      }
      pppppppuVar28 = pppppppuVar28 + 2;
    } while (pppppppuVar28 != (ulonglong *******)local_2e0);
  }
  FUN_14172b06a(local_238,uStack_230 & 0xffffffff);
  if ((ulonglong *******)local_238 != (ulonglong *******)0x0) {
    FUN_1400020a8();
  }
LAB_140a39886:
  if ((local_60 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_2d8;
  while (iVar11 = *(int *)(lVar31 + 0x18), iVar11 != -1) {
LAB_140a39046:
    lVar31 = lVar12 + (longlong)iVar11 * 0x20;
    if (*(ulonglong ********)(lVar12 + (longlong)iVar11 * 0x20) == (ulonglong *******)local_140)
    goto LAB_140a39061;
  }
  lVar31 = 0;
LAB_140a39061:
  if ((ulonglong *******)(lVar31 + 8) != pppppppuVar28) {
    if (*(longlong *)(lVar31 + 8) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *******)(lVar31 + 8) = *pppppppuVar28;
    *pppppppuVar28 = (ulonglong ******)0x0;
    *(undefined4 *)(lVar31 + 0x10) = *(undefined4 *)(pppppppuVar28 + 1);
    *(undefined4 *)(lVar31 + 0x14) = *(undefined4 *)((longlong)pppppppuVar28 + 0xc);
    pppppppuVar28[1] = (ulonglong ******)0x0;
  }
LAB_140a38dab:
  if (*(int *)(lVar17 + 0xd0) != *(int *)(lVar17 + 0xfc)) {
    uVar21 = ((uint)((ulonglong)local_140 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_140 >> 4)) *
             -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    pppppppuVar19 = *(ulonglong ********)(lVar17 + 0x108);
    if (*(ulonglong ********)(lVar17 + 0x108) == (ulonglong *******)0x0) {
      pppppppuVar19 = (ulonglong *******)local_2d0;
    }
    iVar11 = *(int *)((longlong)pppppppuVar19 +
                     (ulonglong)(*(int *)(lVar17 + 0x110) - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
    if (iVar11 != -1) {
      do {
        lVar12 = *local_2c8 + (longlong)iVar11 * 0x20;
        if (*(ulonglong ********)(*local_2c8 + (longlong)iVar11 * 0x20) ==
            (ulonglong *******)local_140) goto LAB_140a38e38;
        iVar11 = *(int *)(lVar12 + 0x18);
      } while (iVar11 != -1);
    }
  }
  lVar12 = 0;
LAB_140a38e38:
  if (DAT_14c994270 != 0) {
    local_198 = (ulonglong *****)0x0;
    iVar11 = *(int *)(lVar12 + 0x10);
    uVar15 = *(undefined8 *)(lVar12 + 8);
    uStack_190 = CONCAT44(uStack_190._4_4_,iVar11);
    if (iVar11 == 0) {
      uStack_190 = 0;
    }
    else {
      FUN_146e0edd6(&local_198,iVar11,0);
      FUN_146e0ee38(local_198,uVar15,iVar11);
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_c8 = (ulonglong ******)0x0;
    uStack_c0 = (ulonglong *******)0x0;
    uStack_9c = 0x80;
    uStack_98 = 0xffffffff;
    iStack_94 = 0;
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    FUN_146e0ee50(&local_c8,&local_198);
    if ((ulonglong ******)local_198 != (ulonglong ******)0x0) {
      FUN_1400020a8();
    }
    FUN_14172a61a(*(undefined8 *)(lVar17 + 0x18),&local_c8);
    local_80 = 0;
    if (local_88 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400c7da0(&local_c8);
  }
  iVar11 = *(int *)(lVar12 + 0x10);
  local_2b0 = (ulonglong ******)pppppppuVar28;
  if ((longlong)iVar11 == 0) {
    uVar33 = 0;
    uVar30 = 4;
  }
  else {
    lVar17 = *(longlong *)(lVar12 + 8);
    bVar20 = 1;
    lVar31 = 0;
    bVar40 = 0;
    do {
      plVar24 = *(longlong **)(lVar17 + lVar31);
      if ((plVar24 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar24 + 0xc))) {
        FUN_1447dc19e((longlong)(int)plVar24[1] * 0x60 + *(longlong *)(*plVar24 + 0x5c0),&local_c8,
                      local_1f8);
        lVar25 = plVar24[1];
        lVar26 = *(longlong *)(*plVar24 + 0x28);
        puVar41 = (undefined8 *)(lVar26 + (longlong)(int)lVar25 * 0x18);
        *puVar41 = local_a8;
        puVar41[1] = CONCAT44(uStack_9c,uStack_a0);
        *(ulonglong *)(lVar26 + 0x10 + (longlong)(int)lVar25 * 0x18) = CONCAT44(iStack_94,uStack_98)
        ;
        lVar26 = *(longlong *)(*plVar24 + 0x48);
        lVar25 = (longlong)(int)plVar24[1] * 0x10;
        *(float *)(lVar26 + lVar25) = (float)(double)local_c8;
        *(float *)(lVar26 + 4 + lVar25) = (float)(double)uStack_c0;
        *(float *)(lVar26 + 8 + lVar25) = (float)local_b8;
        *(float *)(lVar26 + 0xc + lVar25) = (float)local_b0;
        *(ulonglong *******)(*(longlong *)(*plVar24 + 0x5a8) + (longlong)(int)plVar24[1] * 0x10) =
             local_140;
        *(undefined4 *)(*(longlong *)(*plVar24 + 0x5d8) + (longlong)(int)plVar24[1] * 4) = 0;
        if (DAT_14c994270 != 0) {
          FUN_14016dd9c(local_2f0,plVar24);
          FUN_14016de36(local_2c0,plVar24);
        }
        fVar43 = *(float *)((longlong)(*local_140)[0xc4] + (longlong)*(int *)(local_140 + 1) * 4);
        fVar1 = *(float *)(*(longlong *)(*plVar24 + 0x620) + (longlong)(int)plVar24[1] * 4);
        if (fVar43 <= fVar1) {
          fVar43 = fVar1;
        }
        *(float *)(*(longlong *)(*plVar24 + 0x620) + (longlong)(int)plVar24[1] * 4) = fVar43;
        lVar26 = (longlong)(int)plVar24[1] * 0x10;
        iVar38 = *(int *)(*(longlong *)(*plVar24 + 0x2c0) + lVar26);
        if (*(int *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2) < iVar38) {
          iVar38 = *(int *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2);
        }
        *(int *)(*(longlong *)(*plVar24 + 0x2c0) + lVar26) = iVar38;
        uVar30 = *(ushort *)(*(longlong *)(*plVar24 + 0x2c0) + 8 + (longlong)(int)plVar24[1] * 0x10)
        ;
        bVar20 = (byte)((uVar30 & 4) >> 2) & bVar20;
        bVar40 = bVar40 | (byte)(uVar30 >> 9) & 1;
      }
      lVar31 = lVar31 + 8;
    } while ((longlong)iVar11 * 8 != lVar31);
    uVar30 = (ushort)bVar20 << 2;
    uVar33 = (ushort)bVar40 << 9;
    lVar17 = local_2e8;
  }
  local_198 = (ulonglong *****)0x3fd3333333333333;
  uStack_190 = CONCAT17(uStack_190._7_1_,0x1000000000000);
  local_188 = 2;
  local_174 = uStack_11c;
  local_184 = CONCAT44(local_128,local_12c);
  uStack_17c = CONCAT44(uStack_120,uStack_124);
  local_170 = local_2a0;
  local_158 = local_218;
  local_168 = local_228;
  uStack_164 = uStack_224;
  uStack_160 = uStack_220;
  uStack_15c = uStack_21c;
  local_150 = 0x100;
  local_14a = local_12e;
  local_14e = local_132;
  uStack_190._0_6_ = CONCAT15(DAT_14c994310 != 0,100);
  local_c8 = *(ulonglong *******)(lVar12 + 8);
  local_f8 = 0;
  local_f0 = 0;
  local_118 = (ulonglong ******)0x0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c0 = (ulonglong *******)CONCAT44(uStack_c0._4_4_,*(undefined4 *)(lVar12 + 0x10));
  FUN_1405039ea(&local_118,&local_c8);
  FUN_1429c14eb(local_140,&local_118);
  FUN_14172a7c0(&local_c8,local_140,1);
  plVar24 = local_2c8;
  FUN_140a357a8(local_140,local_2c8,*(undefined8 *)(lVar17 + 0x18));
  local_c8 = (ulonglong ******)0x0;
  local_308 = &local_198;
  FUN_1429c1c96(local_140,&local_118,plVar24,&local_c8);
  puVar41 = local_2d8;
  if ((ulonglong *******)local_c8 != (ulonglong *******)0x0) {
    LOCK();
    pppppppuVar28 = (ulonglong *******)(local_c8 + 1);
    *(int *)pppppppuVar28 = *(int *)pppppppuVar28 + -1;
    UNLOCK();
    if ((*(int *)pppppppuVar28 == 0) && (*(int *)((longlong)local_c8 + 0xc) == 0)) {
      (*(code *)**local_c8)(local_c8,1);
    }
  }
  *(ushort *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2 + 1) =
       uVar30 | *(ushort *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2 + 1) & 0xfffb
  ;
  *(ushort *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2 + 1) =
       uVar33 | *(ushort *)((*local_140)[0x58] + (longlong)*(int *)(local_140 + 1) * 2 + 1) & 0xfdff
  ;
  FUN_1429c354c(lVar17,local_140);
  ppppppuVar4 = local_140;
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_118);
  pppppppuVar28 = (ulonglong *******)local_2b0;
  ppppppuVar3 = local_2e0;
  lVar12 = *(longlong *)(lVar17 + 0x18);
  lVar31 = *(longlong *)(lVar12 + 0x288);
  *(undefined8 *)(lVar31 + (longlong)*(int *)(ppppppuVar4 + 2) * 8) =
       *(undefined8 *)(lVar31 + (longlong)*(int *)(local_2e0 + 2) * 8);
  ppppppuVar16 = (ulonglong ******)*ppppppuVar4;
  if ((((ulonglong *******)ppppppuVar4 != (ulonglong *******)0x0) &&
      (ppppppuVar16[0x3d][*(int *)(ppppppuVar4 + 1)] != (ulonglong ****)0x0)) &&
     ((*(byte *)((longlong)ppppppuVar16[0x3d][*(int *)(ppppppuVar4 + 1)] + 0x2c) & 1) != 0)) {
    FUN_14082044e(lVar12 + 0x100);
    ppppppuVar16 = (ulonglong ******)*ppppppuVar4;
  }
  *(undefined4 *)((longlong)ppppppuVar16[0xca] + (longlong)*(int *)(ppppppuVar4 + 1) * 4) =
       *(undefined4 *)((longlong)(*ppppppuVar3)[0xca] + (longlong)*(int *)(ppppppuVar3 + 1) * 4);
  iVar11 = *(int *)(ppppppuVar4 + 1);
  pppppuVar37 = (ulonglong *****)(*ppppppuVar4)[0x4f];
  uVar15 = *(undefined8 *)
            ((longlong)(*ppppppuVar3)[0x4f] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc);
  *(undefined4 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc + 8) =
       *(undefined4 *)
        ((longlong)(*ppppppuVar3)[0x4f] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc + 8);
  *(undefined8 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc) = uVar15;
  iVar11 = *(int *)(ppppppuVar4 + 1);
  pppppuVar37 = (ulonglong *****)(*ppppppuVar4)[0x52];
  uVar15 = *(undefined8 *)
            ((longlong)(*ppppppuVar3)[0x52] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc);
  *(undefined4 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc + 8) =
       *(undefined4 *)
        ((longlong)(*ppppppuVar3)[0x52] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc + 8);
  *(undefined8 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc) = uVar15;
  iVar11 = *(int *)(ppppppuVar4 + 1);
  pppppuVar37 = (ulonglong *****)(*ppppppuVar4)[0xac];
  uVar15 = *(undefined8 *)
            ((longlong)(*ppppppuVar3)[0xac] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc);
  *(undefined4 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc + 8) =
       *(undefined4 *)
        ((longlong)(*ppppppuVar3)[0xac] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc + 8);
  *(undefined8 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc) = uVar15;
  iVar11 = *(int *)(ppppppuVar4 + 1);
  pppppuVar37 = (ulonglong *****)(*ppppppuVar4)[0xaf];
  uVar15 = *(undefined8 *)
            ((longlong)(*ppppppuVar3)[0xaf] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc);
  *(undefined4 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc + 8) =
       *(undefined4 *)
        ((longlong)(*ppppppuVar3)[0xaf] + (longlong)*(int *)(ppppppuVar3 + 1) * 0xc + 8);
  *(undefined8 *)((longlong)pppppuVar37 + (longlong)iVar11 * 0xc) = uVar15;
  lVar12 = (longlong)*(int *)(ppppppuVar4 + 1);
  pppppuVar37 = (ulonglong *****)(*ppppppuVar4)[5];
  pppppuVar18 = (ulonglong *****)(*ppppppuVar4)[0xa6];
  pppppuVar18[lVar12 * 3 + 2] = pppppuVar37[lVar12 * 3 + 2];
  pppppuVar37 = pppppuVar37 + lVar12 * 3;
  ppppuVar27 = pppppuVar37[1];
  pppppuVar18 = pppppuVar18 + lVar12 * 3;
  *pppppuVar18 = *pppppuVar37;
  pppppuVar18[1] = ppppuVar27;
  pppppuVar37 = (ulonglong *****)((*ppppppuVar4)[9] + (longlong)*(int *)(ppppppuVar4 + 1) * 2);
  uVar10 = *(undefined4 *)((longlong)pppppuVar37 + 4);
  uVar7 = *(undefined4 *)(pppppuVar37 + 1);
  uVar8 = *(undefined4 *)((longlong)pppppuVar37 + 0xc);
  pppppuVar18 = (ulonglong *****)((*ppppppuVar4)[0xa9] + (longlong)*(int *)(ppppppuVar4 + 1) * 2);
  *(undefined4 *)pppppuVar18 = *(undefined4 *)pppppuVar37;
  *(undefined4 *)((longlong)pppppuVar18 + 4) = uVar10;
  *(undefined4 *)(pppppuVar18 + 1) = uVar7;
  *(undefined4 *)((longlong)pppppuVar18 + 0xc) = uVar8;
  FUN_1402bf4a4(lVar17,ppppppuVar4);
  if (0 < *(int *)((*ppppppuVar3)[0x1f] + (longlong)*(int *)(ppppppuVar3 + 1) * 3 + 2)) {
    pppppuVar37 = (ulonglong *****)((*ppppppuVar3)[0x1f] + (longlong)*(int *)(ppppppuVar3 + 1) * 3);
    pppppuVar34 = (ulonglong *****)((*ppppppuVar4)[0x1f] + (longlong)*(int *)(ppppppuVar4 + 1) * 3);
    pppppuVar18 = (ulonglong *****)pppppuVar37[1];
    if ((ulonglong *****)pppppuVar37[1] == (ulonglong *****)0x0) {
      pppppuVar18 = pppppuVar37;
    }
    ppppuVar27 = *pppppuVar18;
    if (((ulonglong)ppppuVar27[1] & 3) == 0) {
      uVar21 = *(uint *)(ppppuVar27 + 0x11);
    }
    else if (((ulonglong)ppppuVar27[1] & 4) == 0) {
      if (ppppuVar27[0xf] == (ulonglong ***)0x0) goto LAB_140a39719;
      uVar21 = *(uint *)(ppppuVar27[0xf] + 1);
    }
    else {
      lVar17 = FUN_14484244a();
      uVar21 = (uint)(lVar17 != 0);
    }
    if (0 < (int)uVar21) {
      pppppuVar18 = (ulonglong *****)pppppuVar37[1];
      if ((ulonglong *****)pppppuVar37[1] == (ulonglong *****)0x0) {
        pppppuVar18 = pppppuVar37;
      }
      ppppuVar27 = *pppppuVar18;
      if (((ulonglong)ppppuVar27[1] & 3) == 0) {
        ppppuVar27 = (ulonglong ****)ppppuVar27[0x10];
      }
      else if (((ulonglong)ppppuVar27[1] & 4) == 0) {
        puVar14 = (undefined8 *)FUN_140135db2();
        ppppuVar27 = (ulonglong ****)*puVar14;
      }
      else {
        ppppuVar27 = ppppuVar27 + 0xf;
      }
      pppppuVar37 = (ulonglong *****)pppppuVar34[1];
      if ((ulonglong *****)pppppuVar34[1] == (ulonglong *****)0x0) {
        pppppuVar37 = pppppuVar34;
      }
      iVar11 = *(int *)(pppppuVar34 + 2);
      if ((longlong)iVar11 != 0) {
        uVar10 = *(undefined4 *)ppppuVar27;
        lVar17 = 0;
        do {
          lVar12 = *(longlong *)((longlong)pppppuVar37 + lVar17);
          uVar21 = *(uint *)(lVar12 + 8);
          if ((uVar21 & 3) == 0) {
            local_c8 = (ulonglong ******)CONCAT44(local_c8._4_4_,uVar10);
            local_300 = (ulonglong ******)&local_c8;
            local_308 = (ulonglong ******)CONCAT44(local_308._4_4_,uVar21 >> 3);
            FUN_1401c2fdc(lVar12 + 0x80,CONCAT71((int7)((ulonglong)local_300 >> 8),1),lVar12 + 0xc);
          }
          else {
            if ((uVar21 & 4) == 0) {
              plVar24 = *(longlong **)(lVar12 + 0x78);
              if (plVar24 != (longlong *)0x0) {
                if (plVar24[6] != 0) {
                  FUN_1400020a8();
                }
                if (plVar24[4] != 0) {
                  FUN_1400020a8();
                }
                if (plVar24[2] != 0) {
                  FUN_1400020a8();
                }
                if (*plVar24 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(plVar24);
                uVar21 = *(uint *)(lVar12 + 8);
              }
              *(uint *)(lVar12 + 8) = uVar21 | 4;
              puVar41 = local_2d8;
            }
            *(undefined4 *)(lVar12 + 0x78) = uVar10;
          }
          lVar17 = lVar17 + 8;
        } while ((longlong)iVar11 * 8 != lVar17);
      }
    }
  }
LAB_140a39719:
  uVar36 = uStack_270;
  lVar17 = (longlong)(int)uStack_270;
  uVar21 = (int)uStack_270 + 1;
  uStack_270 = CONCAT44(uStack_270._4_4_,uVar21);
  if (uStack_270._4_4_ < uVar21) {
    FUN_1406b7a4a(&local_278,uVar36 & 0xffffffff);
  }
  iVar11 = (int)local_2b8 + 1;
  *(ulonglong *******)(local_278 + lVar17 * 8) = ppppppuVar4;
  pppppppuVar19 = (ulonglong *******)local_2a8;
  lVar17 = local_2e8;
LAB_140a39767:
  pppppppuVar28 = pppppppuVar28 + 2;
  if (pppppppuVar28 == pppppppuVar19) goto LAB_140a39774;
  goto LAB_140a38b1e;
}



// FUNCTION 140a398ee FUN_140a398ee body=590 status=ok
// SIG undefined FUN_140a398ee(void)

void FUN_140a398ee(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_140a39af7;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_140a39af7:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a39b3e FUN_140a39b3e body=164 status=ok
// SIG undefined FUN_140a39b3e(void)

void FUN_140a39b3e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140a39be2();
  if (*(int *)(param_2 + 0x40) < 0xe8) {
    *(undefined1 *)(param_1 + 0x844) = 2;
    *(float *)(param_1 + 0x760) = *(float *)(param_1 + 0x760) + -1.5707964;
    *(float *)(param_1 + 0x764) = *(float *)(param_1 + 0x764) + -1.5707964;
    uVar1 = *(undefined8 *)(param_1 + 0x768);
    *(ulonglong *)(param_1 + 0x768) = *(ulonglong *)(param_1 + 0x770) ^ 0x8000000000000000;
    *(undefined8 *)(param_1 + 0x770) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x7b8);
    *(ulonglong *)(param_1 + 0x7b8) = *(ulonglong *)(param_1 + 0x7c0) ^ 0x8000000000000000;
    *(undefined8 *)(param_1 + 0x7c0) = uVar1;
  }
  return;
}



// FUNCTION 140a39be2 FUN_140a39be2 body=1286 status=ok
// SIG undefined FUN_140a39be2(void)

void FUN_140a39be2(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong *puVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb70);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cb70);
  if (iVar9 < 4) {
    iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    bVar6 = iVar9 < 0x44;
    if ((iVar9 < 0x44) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      uVar11 = FUN_144938c96(param_1);
      cVar7 = FUN_1403d2392(uVar11);
      bVar6 = true;
      if (cVar7 == '\0') {
        *(byte *)(param_1 + 0x66c) = *(byte *)(param_1 + 0x66c) & 0xef;
      }
    }
  }
  else {
    bVar6 = false;
  }
  FUN_1448284b2(param_1,param_2);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x6b0) * 0xa0,
             (longlong)*(int *)(param_1 + 0x6b4) * 0xa0);
  uVar10 = 0;
  pbVar1 = (byte *)(param_2 + 5);
  if ((*pbVar1 & 1) == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x6b0);
  }
  local_48 = CONCAT44(local_48._4_4_,uVar10);
  puVar5 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_48);
    }
    uVar15 = (uint)local_48;
  }
  else {
    uVar15 = *(uint *)*puVar5;
    local_48 = CONCAT44(local_48._4_4_,uVar15);
    *puVar5 = (ulonglong)puVar2;
  }
  plVar3 = (longlong *)(param_1 + 0x6a8);
  if (uVar15 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_144760d2a(*(undefined8 *)(param_1 + 0x6a8),*(undefined4 *)(param_1 + 0x6b0));
      *(undefined4 *)(param_1 + 0x6b0) = 0;
      if (*(int *)(param_1 + 0x6b4) != 0) {
        FUN_1417c3228(plVar3,0);
      }
    }
  }
  else if ((((int)uVar15 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x19999 < uVar15 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c();
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_1 + 0x6b0) = uVar15;
    lVar12 = 0;
    lVar14 = 0;
    do {
      FUN_14349f0e6(param_2,*(longlong *)(param_1 + 0x6a8) + lVar12);
      lVar14 = lVar14 + 1;
      lVar12 = lVar12 + 0xa0;
    } while (lVar14 < *(int *)(param_1 + 0x6b0));
  }
  else {
    FUN_144760d2a(*(undefined8 *)(param_1 + 0x6a8),*(undefined4 *)(param_1 + 0x6b0));
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if (*(uint *)(param_1 + 0x6b4) != uVar15) {
      FUN_1417c3228(plVar3,uVar15);
    }
    if (0 < (int)(uint)local_48) {
      iVar9 = 0;
      do {
        iVar4 = *(int *)(param_1 + 0x6b0);
        *(uint *)(param_1 + 0x6b0) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x6b4) < iVar4 + 1U) {
          FUN_147a3af44(plVar3,iVar4);
        }
        lVar12 = (longlong)iVar4 * 0xa0 + *plVar3;
        FUN_1434a5744(lVar12);
        FUN_14349f0e6(param_2,lVar12);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)local_48);
    }
  }
  bVar8 = *pbVar1;
  if ((bVar8 & 1) != 0) {
    if (*(int *)(param_1 + 0x6b0) < 1) {
      bVar13 = 1;
    }
    else {
      lVar12 = 0x98;
      lVar14 = 0;
      do {
        *(longlong *)(*(longlong *)(param_1 + 0x6a8) + lVar12) = param_1;
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + 0xa0;
      } while (lVar14 < *(int *)(param_1 + 0x6b0));
      bVar8 = *pbVar1;
      bVar13 = bVar8 & 1;
    }
    if (bVar6 && bVar13 != 0) {
      *(byte *)(param_1 + 0x66c) =
           *(byte *)(param_1 + 0x66c) & 0xaf | *(byte *)(param_1 + 0x66c) * '\x04' & 0x40 | 0x10;
      bVar8 = *pbVar1;
      bVar13 = bVar8 & 1;
    }
    if ((param_1 != 0) && (lVar12 = param_1, bVar13 != 0)) {
      do {
        if ((*(uint *)(lVar12 + 8) & 0x30) != 0) {
          if ((*(byte *)(param_1 + 0x675) & 0x40) != 0) {
            FUN_1401a080a(param_1);
            FUN_14013683c(param_1 + 0x410,param_1);
            bVar8 = *pbVar1;
          }
          break;
        }
        plVar3 = (longlong *)(lVar12 + 0x20);
        lVar12 = *plVar3;
      } while (*plVar3 != 0);
    }
  }
  if ((bVar8 & 1) != 0) {
    *(byte *)(param_1 + 0x674) =
         *(byte *)(param_1 + 0x674) & 0xfe | *(byte *)(param_1 + 0x66c) >> 4 & 1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cad36e8) && (FUN_144b3d300(&DAT_14cad36e8), DAT_14cad36e8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cad36e0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.StaticMesh.GbxStripFallbackMesh",1)
      ;
      _Init_thread_footer(&DAT_14cad36e8);
    }
    if ((DAT_14cad36e0 != (longlong *)0x0) &&
       (iVar9 = (**(code **)(*DAT_14cad36e0 + 0xb0))(), iVar9 != 0)) {
      *(undefined4 *)(param_1 + 0x650) = 0;
    }
  }
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (0xa5 < iVar9) {
    uVar15 = 0;
    if (param_2[0xd] != 0) {
      uVar15 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
    }
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      local_48 = CONCAT44(local_48._4_4_,uVar15);
      (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
      uVar15 = (uint)local_48;
      if (1 < (uint)local_48) {
        FUN_14572541c(param_2);
        uVar15 = (uint)local_48;
      }
    }
    else {
      uVar15 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    if (uVar15 != 0) {
      if ((*pbVar1 & 4) == 0) {
        (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x688);
      }
      else {
        local_48 = *(undefined8 *)(param_1 + 0x688);
        (**(code **)(*param_2 + 0x150))(param_2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a3a0f8 FUN_140a3a0f8 body=31 status=ok
// SIG undefined FUN_140a3a0f8(void)

undefined8 FUN_140a3a0f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a3a118 FUN_140a3a118 body=42 status=ok
// SIG undefined FUN_140a3a118(void)

void FUN_140a3a118(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140a3a142 FUN_140a3a142 body=280 status=ok
// SIG undefined FUN_140a3a142(void)

longlong FUN_140a3a142(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) goto LAB_140a3a190;
  }
  lVar1 = 0;
LAB_140a3a190:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3a25c FUN_140a3a25c body=2228 status=ok
// SIG undefined FUN_140a3a25c(void)

void FUN_140a3a25c(longlong *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  code *pcVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined8 unaff_R13;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  uint local_7c;
  code *local_78;
  longlong **local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140a3b34e();
  uVar23 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (((longlong *)param_1[4] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0x1c) == 0)) {
LAB_140a3a586:
    lVar22 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 3);
    lVar22 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar22 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((((lVar22 != 0) && (*(int *)(lVar22 + 0x10) == *(int *)((longlong)param_1 + 0x1c))) &&
          ((*(uint *)(lVar22 + 8) & 0x10200000) == 0)) &&
         (lVar22 = (**(code **)(*(longlong *)param_1[4] + 0x30))(), lVar22 != 0)) {
        if (DAT_14cac9ca8 == 0) {
          local_a0 = &local_78;
          local_78 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_1478c0a72;
          local_b0 = &LAB_1417b2375;
          local_b8 = L"Engine";
          local_c0 = 0x1000000000;
          local_c8 = 0x10000004;
          local_d0 = 8;
          local_d8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar22 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
          bVar11 = *(byte *)(lVar22 + 0x60) >> 7;
          if (*(byte *)(param_1 + 0x60) != bVar11) {
            *(byte *)(param_1 + 0x60) = bVar11;
            local_70 = &local_68;
            local_78 = FUN_143d49e3a;
            local_68 = param_1;
            (**(code **)(*param_1 + 0x40))(param_1);
          }
          uVar23 = 0;
          goto LAB_140a3a384;
        }
      }
      goto LAB_140a3a586;
    }
  }
LAB_140a3a384:
  if ((longlong)(int)param_1[0x6d] != 0) {
    plVar17 = (longlong *)(param_1[0x6c] + 0x60);
    lVar15 = (longlong)(int)param_1[0x6d] * 0xc0;
    local_7c = (uint)uVar23;
    do {
      lVar26 = plVar17[-9];
      if (lVar26 == 0) {
        uVar16 = FUN_140067708();
        lVar26 = FUN_14477b664(uVar16);
        plVar17[-9] = lVar26;
      }
      pcVar18 = (code *)plVar17[-8];
      if (pcVar18 == (code *)0x0) {
        if (lVar26 == 0) {
          pcVar18 = (code *)0x0;
        }
        else {
          pcVar18 = (code *)0x0;
          if (plVar17[-10] != 0) {
            plVar25 = *(longlong **)(lVar26 + 0xb8);
            if ((plVar25 == (longlong *)0x0) ||
               (cVar12 = (**(code **)(*plVar25 + 0x108))(), cVar12 == '\0')) {
              pcVar18 = (code *)0x0;
            }
            else {
              uVar16 = (**(code **)(*plVar25 + 0x110))(plVar25);
              pcVar18 = (code *)FUN_144aff482(uVar16,plVar17 + -10);
            }
            plVar17[-8] = (longlong)pcVar18;
          }
        }
      }
      local_78 = pcVar18;
      FUN_140942716(&local_78);
      FUN_1407ec87c(plVar17,&local_78);
      if ((local_78 != (code *)0x0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(longlong *)(local_78 + 0x50));
      }
      FUN_140a3c9f8(param_1,plVar17 + -0xc);
      iVar14 = (int)param_1[0x95];
      *(uint *)(param_1 + 0x95) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0x4ac) < iVar14 + 1U) {
        FUN_140a3d412(param_1 + 0x94,iVar14);
      }
      lVar26 = param_1[0x94];
      lVar24 = (longlong)iVar14 * 0xc0;
      *(int *)(lVar26 + 8 + lVar24) = (int)plVar17[-0xb];
      *(longlong *)(lVar26 + lVar24) = plVar17[-0xc];
      puVar19 = (undefined8 *)(lVar26 + 0x10 + lVar24);
      *puVar19 = 0;
      puVar19[1] = 0;
      *(undefined8 *)(lVar26 + 0x20 + lVar24) = 0;
      *(longlong *)(lVar26 + 0x10 + lVar24) = plVar17[-10];
      uVar16 = FUN_14477b664(plVar17[-9]);
      uVar16 = FUN_14477b664(uVar16);
      *(undefined8 *)(lVar26 + 0x18 + lVar24) = uVar16;
      *(longlong *)(lVar26 + 0x20 + lVar24) = plVar17[-8];
      uVar4 = *(undefined4 *)((longlong)plVar17 + -0x34);
      lVar20 = plVar17[-6];
      uVar5 = *(undefined4 *)((longlong)plVar17 + -0x2c);
      puVar1 = (undefined4 *)(lVar26 + 0x28 + lVar24);
      *puVar1 = (int)plVar17[-7];
      puVar1[1] = uVar4;
      puVar1[2] = (int)lVar20;
      puVar1[3] = uVar5;
      *(undefined8 *)(lVar26 + 0x48 + lVar24) = 0;
      puVar19 = (undefined8 *)(lVar26 + 0x38 + lVar24);
      *puVar19 = 0;
      puVar19[1] = 0;
      *(longlong *)(lVar26 + 0x38 + lVar24) = plVar17[-5];
      uVar16 = FUN_14477b664(plVar17[-4]);
      uVar16 = FUN_14477b664(uVar16);
      *(undefined8 *)(lVar26 + 0x40 + lVar24) = uVar16;
      *(longlong *)(lVar26 + 0x48 + lVar24) = plVar17[-3];
      lVar20 = plVar17[-2];
      *(undefined8 *)(lVar26 + 0x55 + lVar24) = *(undefined8 *)((longlong)plVar17 + -0xb);
      *(longlong *)(lVar26 + 0x50 + lVar24) = lVar20;
      lVar20 = *plVar17;
      *(longlong *)(lVar26 + 0x60 + lVar24) = lVar20;
      if ((lVar20 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        piVar3 = *(int **)(lVar20 + 0x50);
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        if (DAT_14cb259f8 == 0) {
          iVar14 = 5;
        }
        else {
          if ((char)piVar3[1] != '\x01') {
            FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
            goto LAB_140a3a807;
          }
          iVar14 = 2;
        }
        LOCK();
        piVar3[2] = iVar14;
        UNLOCK();
      }
LAB_140a3a807:
      lVar26 = lVar26 + lVar24;
      *(undefined8 *)(lVar26 + 0x68) = 0;
      *(undefined8 *)(lVar26 + 0x70) = 0xffffffffffffffff;
      *(longlong *)(lVar26 + 0x68) = plVar17[1];
      *(longlong *)(lVar26 + 0x70) = plVar17[2];
      uVar4 = *(undefined4 *)((longlong)plVar17 + 0x1c);
      lVar10 = plVar17[4];
      uVar5 = *(undefined4 *)((longlong)plVar17 + 0x24);
      lVar20 = plVar17[5];
      lVar24 = plVar17[6];
      lVar6 = plVar17[7];
      lVar7 = plVar17[8];
      lVar8 = plVar17[9];
      lVar9 = plVar17[10];
      *(int *)(lVar26 + 0x78) = (int)plVar17[3];
      *(undefined4 *)(lVar26 + 0x7c) = uVar4;
      *(int *)(lVar26 + 0x80) = (int)lVar10;
      *(undefined4 *)(lVar26 + 0x84) = uVar5;
      *(longlong *)(lVar26 + 0x88) = lVar20;
      *(longlong *)(lVar26 + 0x90) = lVar24;
      *(longlong *)(lVar26 + 0x98) = lVar6;
      *(longlong *)(lVar26 + 0xa0) = lVar7;
      *(longlong *)(lVar26 + 0xa8) = lVar8;
      *(longlong *)(lVar26 + 0xb0) = lVar9;
      plVar17 = plVar17 + 0x18;
      lVar15 = lVar15 + -0xc0;
      uVar23 = (ulonglong)local_7c;
    } while (lVar15 != 0);
  }
  lVar15 = FUN_140a3abf4(param_1);
  if (lVar15 != 0) {
    local_78 = (code *)0x0;
    local_70 = (longlong **)((ulonglong)local_70 & 0xffffffff00000000);
    FUN_1446efa72(&local_78,0,2,0x10);
    local_70 = (longlong **)CONCAT44(local_70._4_4_,2);
    *(undefined ***)local_78 = &PTR_LAB_14b4024f0;
    LOCK();
    UNLOCK();
    lVar20 = DAT_14c758608 + 1;
    lVar26 = DAT_14c758608 + 1;
    if (lVar20 == 0) {
      LOCK();
      UNLOCK();
      lVar20 = DAT_14c758608 + 2;
      lVar26 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar26;
    *(longlong *)(local_78 + 0x10) = lVar20;
    *(undefined ***)local_78 = &PTR_FUN_14b401f40;
    *(longlong **)(local_78 + 0x18) = param_1;
    iVar14 = 2;
    if (local_78 == (code *)0x0) {
LAB_140a3aaaa:
      if (iVar14 == 0) {
        plVar17 = (longlong *)0x0;
        goto LAB_140a3a512;
      }
      if (local_78 != (code *)0x0) {
        plVar17 = (longlong *)0x0;
        (*(code *)**(undefined8 **)local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        goto LAB_140a3a4ff;
      }
      plVar17 = (longlong *)0x0;
    }
    else {
      cVar12 = (**(code **)(*(longlong *)local_78 + 0x30))();
      if (cVar12 == '\0') {
        iVar14 = (int)local_70;
        goto LAB_140a3aaaa;
      }
      plVar25 = (longlong *)(lVar15 + 0x1618);
      if (*(int *)(lVar15 + 0x162c) < 1) {
        iVar14 = *(int *)(lVar15 + 0x1620);
        iVar13 = *(int *)(lVar15 + 0x1628) + -1;
        *(int *)(lVar15 + 0x1628) = iVar13;
        if (iVar13 <= iVar14) {
          iVar13 = iVar14;
          if (0 < iVar14) {
            iVar21 = 0;
            do {
              if (((*(int *)(*plVar25 + 8 + (longlong)iVar21 * 0x10) == 0) ||
                  (plVar17 = *(longlong **)(*plVar25 + (longlong)iVar21 * 0x10),
                  plVar17 == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(*plVar17 + 0x28))(), cVar12 != '\0')) {
                FUN_14005b288(plVar25,iVar21);
                FUN_14005b248(plVar25);
              }
              else {
                iVar21 = iVar21 + 1;
              }
              iVar13 = *(int *)(lVar15 + 0x1620);
            } while (iVar21 < iVar13);
          }
          iVar21 = 2;
          if (2 < iVar13 * 2) {
            iVar21 = iVar13 * 2;
          }
          *(int *)(lVar15 + 0x1628) = iVar21;
          if ((iVar21 < iVar14) && (*(int *)(lVar15 + 0x1624) != iVar13)) {
            FUN_14045812c();
          }
        }
      }
      plVar17 = (longlong *)0x0;
      if (((int)local_70 != 0) && (local_78 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_68);
        plVar17 = local_68;
      }
      iVar14 = *(int *)(lVar15 + 0x1620);
      *(uint *)(lVar15 + 0x1620) = iVar14 + 1U;
      if (*(uint *)(lVar15 + 0x1624) < iVar14 + 1U) {
        FUN_1447a71f6(plVar25,iVar14);
      }
      lVar15 = *plVar25;
      lVar26 = (longlong)iVar14 * 0x10;
      *(undefined8 *)(lVar15 + lVar26) = 0;
      *(undefined4 *)(lVar15 + 8 + lVar26) = 0;
      *(code **)(lVar15 + lVar26) = local_78;
      local_78 = (code *)0x0;
      *(int *)(lVar15 + 8 + lVar26) = (int)local_70;
LAB_140a3a4ff:
      local_70 = (longlong **)((ulonglong)local_70 & 0xffffffff00000000);
LAB_140a3a512:
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    param_1[0xc4] = (longlong)plVar17;
  }
  if ((char)uVar23 != '\0') goto LAB_140a3a548;
  if (DAT_14cb5b388 == 0) {
    local_a0 = &local_78;
    local_78 = FUN_141864c34;
    local_90 = FUN_14081d0ea;
    local_98 = (code *)&LAB_146431698;
    local_a8 = &LAB_1486775cb;
    local_b0 = &LAB_1464cee35;
    local_b8 = L"Game";
    local_c0 = 0;
    local_c8 = 0x10000005;
    local_d0 = 0x10;
    local_d8 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if (((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
      (lVar22 == 0)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) goto LAB_140a3a548;
  if (*(char *)((longlong)param_1 + 0x304) == '\x01') {
    uVar16 = FUN_1447210f0(lVar22);
    plVar17 = (longlong *)FUN_140a3d526(uVar16);
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x2d0))(plVar17,param_1);
      (**(code **)(*param_1 + 0x68))(param_1);
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_140a3a93b:
    uVar16 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 6);
    uVar16 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar19 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar19 == (undefined8 *)0x0) ||
         ((*(int *)(puVar19 + 2) != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_140a3a93b;
      uVar16 = *puVar19;
    }
  }
  lVar15 = FUN_1405e4c36(uVar16);
  if (lVar15 != 0) {
    FUN_14049df2a(lVar15 + 0x40,lVar22);
  }
LAB_140a3a548:
  FUN_140a3ab1e(param_1);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3ab1e FUN_140a3ab1e body=213 status=ok
// SIG undefined FUN_140a3ab1e(void)

void FUN_140a3ab1e(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_140a3abf4();
  if (plVar1 != (longlong *)0x0) {
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    uVar2 = FUN_1403ad4e4();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1403ad4e4();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3,local_38);
      }
    }
    FUN_140a3beb8(param_1,local_38);
    FUN_140a3afda(param_1,local_38);
    if (local_38[2] != 0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3abf4 FUN_140a3abf4 body=750 status=ok
// SIG undefined FUN_140a3abf4(void)

longlong FUN_140a3abf4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      lVar7 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140a3ad5f;
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar7 != 0) &&
         ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
          ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
        if (lVar3 != 0) {
          if (DAT_14cac9ca8 == 0) {
            local_40 = &local_20;
            local_20 = FUN_141030f22;
            local_30 = FUN_14081d0ea;
            local_38 = FUN_14081d0ea;
            local_48 = &LAB_1478c0a72;
            local_50 = &LAB_1417b2375;
            local_58 = L"Engine";
            local_60 = 0x1000000000;
            local_68 = 0x10000004;
            local_70 = 8;
            local_78 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          lVar7 = *(longlong *)(lVar3 + 0x10);
          iVar2 = *(int *)(lVar7 + 0x38);
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar2) &&
             (*(longlong *)
               (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
              DAT_14cac9ca8 + 0x30)) {
            if (DAT_14cb5b388 == 0) {
              local_40 = &local_20;
              local_20 = FUN_141864c34;
              local_30 = FUN_14081d0ea;
              local_38 = (code *)&LAB_146431698;
              local_48 = &LAB_1486775cb;
              local_50 = &LAB_1464cee35;
              local_58 = L"Game";
              local_60 = 0;
              local_68 = 0x10000005;
              local_70 = 0x10;
              local_78 = 0x3a20;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
              lVar7 = *(longlong *)(lVar3 + 0x10);
              iVar2 = *(int *)(lVar7 + 0x38);
            }
            if ((iVar2 < *(int *)(DAT_14cb5b388 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
                DAT_14cb5b388 + 0x30)) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)(lVar3 + 0x32b8);
            }
            uVar4 = FUN_1407ca880();
            plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
            if (plVar5 != (longlong *)0x0 && lVar7 == 0) {
              lVar7 = (**(code **)(*plVar5 + 0x58))(plVar5,&DAT_14cb71330);
            }
            lVar6 = FUN_140a3aef4();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              if (lVar7 != 0) goto LAB_140a3ad5f;
              lVar7 = *(longlong *)(lVar3 + 0x1aa8);
            }
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
            }
            goto LAB_140a3ad5f;
          }
        }
      }
    }
  }
  lVar7 = 0;
LAB_140a3ad5f:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3aef4 FUN_140a3aef4 body=228 status=ok
// SIG undefined FUN_140a3aef4(void)

longlong FUN_140a3aef4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c6c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b5876;
    local_38 = &LAB_14868ae1f;
    local_40 = &LAB_1464d65f3;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x1c60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDecoCharacter",&DAT_14cb5c6c8,FUN_1464d65cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c6c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3afda FUN_140a3afda body=883 status=ok
// SIG undefined FUN_140a3afda(void)

void FUN_140a3afda(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x510;
  if (*(int *)(param_1 + 0x518) != *(int *)(param_1 + 0x544)) {
    FUN_140a3d752(lVar1);
    FUN_140a3d898(lVar1);
  }
  uVar2 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar2 == 0) {
LAB_140a3b020:
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar13 = 0;
  lVar9 = param_1 + 0x4f8;
LAB_140a3b057:
  if (*(int *)(param_1 + 0x4c8) != *(int *)(param_1 + 0x4f4)) {
    lVar12 = *(longlong *)(*param_2 + uVar13 * 8);
    uVar4 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar10 = (uint)lVar12 & 0xffff;
    lVar8 = *(longlong *)(param_1 + 0x500);
    if (*(longlong *)(param_1 + 0x500) == 0) {
      lVar8 = lVar9;
    }
    iVar11 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(param_1 + 0x508) - 1U &
                              (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar10) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x4c0) + (longlong)iVar11 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x4c0) + (longlong)iVar11 * 0x20) == lVar12) {
          if (((lVar8 != 0) && (lVar8 != -8)) && ((longlong)*(int *)(lVar8 + 0x10) != 0)) {
            plVar14 = *(longlong **)(lVar8 + 8);
            lVar12 = (longlong)*(int *)(lVar8 + 0x10) << 5;
            local_60 = lVar9;
            goto LAB_140a3b073;
          }
          break;
        }
        iVar11 = *(int *)(lVar8 + 0x18);
      } while (iVar11 != -1);
    }
  }
  goto LAB_140a3b069;
LAB_140a3b073:
  do {
    if (*plVar14 != 0) {
      lVar8 = plVar14[2];
      local_58 = lVar12;
      if (lVar8 == 0) {
        uVar6 = FUN_140067708();
        lVar8 = FUN_14477b664(uVar6);
        plVar14[2] = lVar8;
      }
      lVar12 = local_58;
      local_68 = plVar14 + 1;
      lVar7 = plVar14[3];
      if (lVar7 == 0) {
        if ((lVar8 != 0) && (*local_68 != 0)) {
          plVar3 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            plVar14[3] = 0;
            lVar9 = local_60;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar6,local_68);
            plVar14[3] = lVar7;
            lVar9 = local_60;
            if (lVar7 != 0) {
              lVar8 = plVar14[2];
              goto LAB_140a3b113;
            }
          }
        }
      }
      else {
LAB_140a3b113:
        if (lVar8 == 0) {
          uVar6 = FUN_140067708();
          lVar9 = FUN_14477b664(uVar6);
          plVar14[2] = lVar9;
          lVar7 = plVar14[3];
          if (((lVar7 == 0) && (lVar7 = 0, lVar9 != 0)) && (*local_68 != 0)) {
            plVar3 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
              lVar7 = 0;
            }
            else {
              uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar7 = FUN_144aff482(uVar6,local_68);
            }
            plVar14[3] = lVar7;
          }
        }
        local_50 = lVar7;
        FUN_140942716();
        lVar9 = *plVar14;
        uVar4 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar10 = (uint)lVar9 & 0xffff;
        uVar6 = FUN_140d06a6c(lVar1,((uint)lVar9 << 0x10 | uVar10) + (int)((ulonglong)lVar9 >> 0x20)
                                    + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),plVar14);
        FUN_1407ec87c(uVar6,&local_50);
        lVar12 = local_58;
        lVar9 = local_60;
        if ((local_50 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_50 + 0x50));
          lVar12 = local_58;
          lVar9 = local_60;
        }
      }
    }
    plVar14 = plVar14 + 4;
    lVar12 = lVar12 + -0x20;
  } while (lVar12 != 0);
LAB_140a3b069:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar2) goto LAB_140a3b020;
  goto LAB_140a3b057;
}



// FUNCTION 140a3b34e FUN_140a3b34e body=2920 status=ok
// SIG undefined FUN_140a3b34e(void)

void FUN_140a3b34e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  float local_c0;
  undefined4 uStack_bc;
  double local_b8;
  double local_b0;
  code *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_80 [2];
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
       (uVar14 = *(uint *)(param_1 + 0x18), (int)uVar14 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar14 ||
       (lVar18 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar18 == 0)))) ||
     ((*(int *)(lVar18 + 0x10) != *(int *)(param_1 + 0x1c) ||
      ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))) goto LAB_140a3b495;
  plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  if (plVar8 == (longlong *)0x0) {
LAB_140a3b41b:
    plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
    if (plVar8 == (longlong *)0x0) goto LAB_140a3b495;
    if (DAT_14cac9ca8 == 0) {
      local_100 = &local_a8;
      local_a8 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = FUN_14081d0ea;
      local_108 = &LAB_1478c0a72;
      local_110 = &LAB_1417b2375;
      local_118 = L"Engine";
      local_120 = 0x1000000000;
      local_128 = 0x10000004;
      local_130 = 8;
      local_138 = CONCAT44(local_138._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    iVar22 = *(int *)(DAT_14cac9ca8 + 0x38);
    if ((*(int *)(plVar8[2] + 0x38) < iVar22) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)iVar22 * 8) !=
        DAT_14cac9ca8 + 0x30)) goto LAB_140a3b495;
    local_138 = local_138 & 0xffffffffffffff00;
    (**(code **)(*plVar8 + 800))
              (plVar8,CONCAT71((int7)(int3)((uint)iVar22 >> 8),1),&local_a8,&local_c0);
    dVar24 = (double)CONCAT44(uStack_bc,local_c0);
    if ((double)CONCAT44(uStack_bc,local_c0) <= local_b8) {
      dVar24 = local_b8;
    }
    if (dVar24 <= local_b0) {
      dVar24 = local_b0;
    }
    fVar23 = (float)dVar24;
  }
  else {
    if (DAT_14cacf818 == 0) {
      local_100 = &local_a8;
      local_a8 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = (code *)&LAB_1463b216c;
      local_108 = &LAB_1479977e3;
      local_110 = &LAB_1463b2171;
      local_118 = L"Game";
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = CONCAT44(local_138._4_4_,0x750);
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) !=
        DAT_14cacf818 + 0x30)) goto LAB_140a3b41b;
    (**(code **)(*plVar8 + 0x528))(plVar8,&local_a8,&local_c0);
    fVar23 = local_a8._0_4_;
    if (local_a8._0_4_ <= local_c0) {
      fVar23 = local_c0;
    }
  }
  *(float *)(param_1 + 0x38) = fVar23;
LAB_140a3b495:
  iVar22 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar22 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x130);
    lVar20 = 0;
    do {
      if ((*(longlong *)(lVar18 + 8 + lVar20) != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1403c747e(param_1,&local_c0,*(undefined8 *)(lVar18 + lVar20));
        plVar8 = (longlong *)CONCAT44(uStack_bc,local_c0);
        if (plVar8 != (longlong *)0x0) {
          if (*plVar8 != -1) {
            uVar10 = *(undefined8 *)(lVar18 + 8 + lVar20);
            *(int *)(plVar8 + 0x21) = (int)plVar8[0x21] + 1;
            FUN_140a3cb0a(param_1,&local_a8,local_c8,uVar10);
            plVar8 = (longlong *)CONCAT44(uStack_bc,local_c0);
            if (plVar8 == (longlong *)0x0) goto LAB_140a3b55a;
          }
          *(int *)(plVar8 + 0x21) = (int)plVar8[0x21] + -1;
          if (((int)plVar8[0x26] < 1) && (FUN_1400847bc(plVar8 + 0x17,0), (int)plVar8[0x21] == 0)) {
            FUN_140087e46(plVar8);
            if (*plVar8 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140a3b55a;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar8);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar8);
            }
          }
        }
      }
LAB_140a3b55a:
      lVar20 = lVar20 + 0x10;
    } while ((longlong)iVar22 * 0x10 != lVar20);
  }
  local_d0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x220);
    local_e0 = (longlong)*(int *)(param_1 + 0x228) * 0x100 + lVar18;
    do {
      local_e8 = (ulonglong)*(int *)(lVar18 + 0x38);
      if (local_e8 != 0) {
        lVar13 = *(longlong *)(lVar18 + 0x30);
        lVar20 = lVar18 + 0xa8;
        local_d8 = (longlong *)(lVar18 + 0xe0);
        local_e8 = local_e8 << 3;
        uVar17 = 0;
        do {
          FUN_1403c747e(param_1,&local_a8,*(undefined8 *)(lVar13 + uVar17));
          pcVar5 = local_a8;
          if (local_a8 == (code *)0x0) {
            lVar16 = -1;
          }
          else {
            lVar16 = *(longlong *)local_a8;
            *(int *)(local_a8 + 0x108) = *(int *)(local_a8 + 0x108) + -1;
            if ((*(int *)(local_a8 + 0x130) < 1) &&
               (FUN_1400847bc(local_a8 + 0xb8,0), *(int *)(pcVar5 + 0x108) == 0)) {
              FUN_140087e46(pcVar5);
              if (*(longlong *)pcVar5 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_140a3b6a0;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar5);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar5);
              }
            }
          }
LAB_140a3b6a0:
          FUN_1438a8840(lVar20,&local_a8);
          puVar2 = local_a0;
          uVar10 = *(undefined8 *)(lVar13 + uVar17);
          *local_a0 = uVar10;
          local_a0[1] = pcVar5;
          local_a0[2] = lVar16;
          *(undefined4 *)(local_a0 + 3) = 0xffffffff;
          local_c0 = local_a8._0_4_;
          uVar14 = (uint)((ulonglong)uVar10 >> 0x10);
          uVar7 = (uint)uVar10 & 0xffff;
          uVar14 = ((uint)uVar10 << 0x10 | uVar7) + (int)((ulonglong)uVar10 >> 0x20) +
                   (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar7 >> 4);
          local_138 = 0;
          cVar6 = FUN_1438a8af8(lVar20,uVar14,local_a0,&local_c0);
          if (cVar6 == '\0') {
            uVar7 = *(int *)(lVar18 + 0xb0) - *(int *)(lVar18 + 0xdc);
            iVar22 = 1;
            if (3 < uVar7) {
              uVar21 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
              lVar16 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar22 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((int)uVar7 < 1) || (iVar22 <= *(int *)(lVar18 + 0xf0))) {
              uVar14 = *(int *)(lVar18 + 0xf0) - 1U & uVar14;
              *(uint *)((longlong)puVar2 + 0x1c) = uVar14;
              plVar8 = *(longlong **)(lVar18 + 0xe8);
              if (*(longlong **)(lVar18 + 0xe8) == (longlong *)0x0) {
                plVar8 = local_d8;
              }
              *(undefined4 *)(puVar2 + 3) =
                   *(undefined4 *)
                    ((longlong)plVar8 +
                    ((longlong)*(int *)(lVar18 + 0xf0) - 1U & (longlong)(int)uVar14) * 4);
              plVar8 = *(longlong **)(lVar18 + 0xe8);
              if (*(longlong **)(lVar18 + 0xe8) == (longlong *)0x0) {
                plVar8 = local_d8;
              }
              *(float *)((longlong)plVar8 +
                        ((longlong)*(int *)(lVar18 + 0xf0) - 1U & (longlong)(int)uVar14) * 4) =
                   local_c0;
            }
            else {
              *(int *)(lVar18 + 0xf0) = iVar22;
              FUN_1438a8c2e(lVar20);
            }
          }
          uVar17 = uVar17 + 8;
          param_1 = local_d0;
        } while (local_e8 != uVar17);
      }
      lVar20 = local_e0;
      if (((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0))
         || (uVar14 = *(uint *)(param_1 + 0x18), (int)uVar14 < 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
          if (((lVar13 == 0) || (*(int *)(lVar13 + 0x10) != *(int *)(param_1 + 0x1c))) ||
             ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)) {
            uVar10 = 0;
          }
          else {
            uVar10 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
          }
        }
      }
      local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
      local_80[0] = 0;
      FUN_1456bb102(&local_a8,uVar10);
      local_78 = '\0';
      local_50[0] = 0;
      FUN_140c41132(lVar18 + 0x48);
      FUN_14008817c(lVar18);
      FUN_1448173f8(local_50);
      if (local_78 != '\0') {
        if (local_78 == '\x01') {
          local_70 = 0;
        }
        else if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        local_78 = '\0';
      }
      FUN_1448173f8(local_80);
      if (((char)local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      lVar18 = lVar18 + 0x100;
    } while (lVar18 != lVar20);
  }
  uVar14 = *(uint *)(param_1 + 0x2a8);
  if (uVar14 == 0) {
    uVar17 = 1;
    uVar21 = 0;
    iVar22 = 0;
    uVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x2a0);
    if (*(uint **)(param_1 + 0x2a0) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x290);
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar22 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar22 = uVar14 - 1;
      }
      uVar21 = 0;
      uVar17 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar17 = uVar21;
      }
      iVar22 = 0;
      do {
        if (uVar17 == uVar21) goto LAB_140a3b9d8;
        iVar22 = iVar22 + 0x20;
        uVar7 = puVar9[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar21 = 0;
      iVar22 = 0;
    }
    uVar17 = (ulonglong)(-uVar7 & uVar7);
    uVar3 = uVar17 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar7 = (iVar22 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar7) {
      uVar7 = uVar14;
    }
  }
  if (uVar7 != uVar14) {
    uVar15 = 0xffffffff;
    local_e8 = (ulonglong)uVar14;
    do {
      lVar18 = *(longlong *)(local_d0 + 0x280);
      puVar2 = (undefined8 *)(lVar18 + (longlong)(int)uVar7 * 0x28);
      FUN_1403c747e(local_d0,&local_a8,*puVar2);
      lVar20 = puVar2[2];
      if (lVar20 == 0) {
        if (DAT_14cb256c8 == 0) {
          uVar10 = FUN_140cd185c();
          DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar10,L"WwiseGameParameterDef");
        }
        lVar20 = FUN_14477b664(DAT_14cb256c8);
        puVar2[2] = lVar20;
      }
      plVar8 = (longlong *)(lVar18 + (longlong)(int)uVar7 * 0x28 + 8);
      lVar18 = puVar2[3];
      if (lVar18 == 0) {
        if ((lVar20 != 0) && (*plVar8 != 0)) {
          plVar4 = *(longlong **)(lVar20 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
            puVar2[3] = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar18 = FUN_144aff482(uVar10,plVar8);
            puVar2[3] = lVar18;
            if (lVar18 != 0) goto LAB_140a3ba97;
          }
        }
LAB_140a3bbce:
        if (local_a8 != (code *)0x0) {
LAB_140a3bbdb:
          pcVar5 = local_a8;
          *(int *)(local_a8 + 0x108) = *(int *)(local_a8 + 0x108) + -1;
          if ((*(int *)(local_a8 + 0x130) < 1) &&
             (FUN_1400847bc(local_a8 + 0xb8,0), *(int *)(pcVar5 + 0x108) == 0)) {
            FUN_140087e46(pcVar5);
            if (*(longlong *)pcVar5 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_140a3bc08;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),pcVar5);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),pcVar5);
            }
          }
        }
      }
      else {
LAB_140a3ba97:
        pcVar5 = local_a8;
        if (local_a8 != (code *)0x0) {
          if (*(longlong *)local_a8 != -1) {
            if (puVar2[2] == 0) {
              if (DAT_14cb256c8 == 0) {
                uVar10 = FUN_140cd185c();
                DAT_14cb256c8 = FUN_140002ddd(FUN_141819010,uVar10,L"WwiseGameParameterDef");
              }
              lVar20 = FUN_14477b664(DAT_14cb256c8);
              puVar2[2] = lVar20;
              lVar18 = puVar2[3];
              if (lVar18 == 0) {
                if (lVar20 == 0) {
                  lVar18 = 0;
                }
                else {
                  lVar18 = 0;
                  if (*plVar8 != 0) {
                    plVar4 = *(longlong **)(lVar20 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (local_d8 = plVar4, cVar6 = (**(code **)(*plVar4 + 0x108))(), cVar6 == '\0'))
                    {
                      lVar18 = 0;
                    }
                    else {
                      uVar10 = (**(code **)(*local_d8 + 0x110))();
                      lVar18 = FUN_144aff482(uVar10,plVar8);
                    }
                    puVar2[3] = lVar18;
                  }
                }
              }
            }
            FUN_147f7ca9e(pcVar5,*(undefined4 *)(lVar18 + 0x38));
            goto LAB_140a3bbce;
          }
          goto LAB_140a3bbdb;
        }
      }
LAB_140a3bc08:
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar9 = *(uint **)(local_d0 + 0x2a0);
      if (*(uint **)(local_d0 + 0x2a0) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x290);
      }
      uVar14 = *(uint *)(local_d0 + 0x2a8);
      iVar19 = (int)uVar21;
      lVar18 = (longlong)iVar19;
      uVar7 = puVar9[lVar18] & uVar15;
      if (uVar7 == 0) {
        iVar11 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar11 = uVar14 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar19) {
          iVar12 = iVar19;
        }
        if (iVar19 < iVar11) {
          lVar20 = 0;
          do {
            uVar7 = puVar9[lVar18 + lVar20 + 1];
            if (uVar7 != 0) {
              uVar21 = (ulonglong)(iVar19 + (int)lVar20 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140a3bc95;
            }
            iVar22 = iVar22 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar12 - lVar18 != lVar20);
          uVar15 = 0xffffffff;
          iVar19 = iVar12;
        }
        uVar21 = (ulonglong)(iVar19 + 1);
        uVar7 = uVar14;
      }
      else {
LAB_140a3bc95:
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar3 = uVar17 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar7 = (iVar22 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar7) {
          uVar7 = uVar14;
        }
      }
    } while (uVar7 != (uint)local_e8);
  }
LAB_140a3b9d8:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a3beb8 FUN_140a3beb8 body=2009 status=ok
// SIG undefined FUN_140a3beb8(void)

void FUN_140a3beb8(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined1 *puVar6;
  void *_Src;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  void *pvVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  void *pvVar15;
  void *pvVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  void *pvVar20;
  void *pvVar21;
  void *_Src_00;
  float fVar22;
  undefined1 auStack_478 [40];
  void *local_450;
  void *local_448;
  void *local_440;
  longlong *local_438;
  undefined1 local_42c [4];
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong local_408;
  ulonglong uStack_400;
  undefined4 local_3f8 [4];
  longlong local_3e8;
  undefined4 local_3e0;
  uint local_3dc;
  undefined4 uStack_3d8;
  int local_3d4;
  undefined1 local_3d0 [8];
  undefined1 *local_3c8;
  int local_3c0;
  longlong local_108 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_478;
  lVar9 = *(longlong *)(param_1 + 0x360);
  iVar17 = *(int *)(param_1 + 0x368);
  uVar7 = 0;
  if ((longlong)iVar17 != 0) {
    lVar18 = 0;
    do {
      puVar2 = (undefined4 *)(lVar9 + 0xa8 + lVar18);
      local_418 = *puVar2;
      uStack_414 = puVar2[1];
      uStack_410 = puVar2[2];
      uStack_40c = puVar2[3];
      FUN_140bd77dc(param_1,&local_418,0,0);
      lVar18 = lVar18 + 0xc0;
    } while ((longlong)iVar17 * 0xc0 != lVar18);
    uVar7 = *(undefined4 *)(param_1 + 0x368);
    lVar9 = *(longlong *)(param_1 + 0x360);
  }
  plVar14 = (longlong *)(param_1 + 0x360);
  iVar17 = *(int *)(param_1 + 0x36c);
  FUN_14060f50f(lVar9,uVar7);
  *(undefined4 *)(param_1 + 0x368) = 0;
  if ((iVar17 < 0) && (*(int *)(param_1 + 0x36c) != 0)) {
    FUN_14885a200(plVar14);
  }
  uVar11 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar11 != 0) {
    uVar19 = 0;
    do {
      if ((longlong)*(int *)(param_1 + 0x4b8) != 0) {
        lVar9 = *(longlong *)(*param_2 + uVar19 * 8);
        lVar18 = *(longlong *)(param_1 + 0x4b0);
        lVar12 = (longlong)*(int *)(param_1 + 0x4b8) * 0xc0;
        do {
          if (*(longlong *)(lVar18 + 0x54) == lVar9) {
            FUN_140a3c692(param_1,lVar18);
          }
          lVar18 = lVar18 + 0xc0;
          lVar12 = lVar12 + -0xc0;
        } while (lVar12 != 0);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar11);
  }
  if ((longlong)*(int *)(param_1 + 0x4a8) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x4a0);
    lVar18 = (longlong)*(int *)(param_1 + 0x4a8) * 0xc0;
    do {
      FUN_140a3c692(param_1,lVar9);
      lVar9 = lVar9 + 0xc0;
      lVar18 = lVar18 + -0xc0;
    } while (lVar18 != 0);
  }
  FUN_140a3c692(param_1);
  iVar17 = *(int *)(param_1 + 0x368);
  if (1 < (longlong)iVar17) {
    lVar9 = *plVar14;
    memset(local_3f8,0,0x2f0);
    uStack_400 = (longlong)iVar17 * 0xc0 + lVar9 + -0xc0;
    local_408 = lVar9;
    fVar22 = logf((float)iVar17);
    local_3f8[0] = (int)(longlong)(fVar22 + fVar22);
    plVar13 = &local_408;
    local_438 = plVar14;
    do {
      pvVar10 = (void *)*plVar13;
      pvVar20 = (void *)plVar13[1];
      iVar17 = (int)plVar13[2];
      iVar5 = (int)((ulonglong)((longlong)pvVar20 - (longlong)pvVar10) >> 6);
      pvVar21 = pvVar10;
      _Src_00 = pvVar20;
      if (iVar17 != 0) {
LAB_140a3c24e:
        uVar11 = iVar5 * -0x55555555 + 1;
        if (8 < (int)uVar11) {
          pvVar15 = (void *)((ulonglong)(uVar11 >> 1) * 0xc0 + (longlong)pvVar21);
          memcpy(local_108,pvVar15,0xc0);
          memcpy(pvVar15,pvVar21,0xc0);
          memcpy(pvVar21,local_108,0xc0);
          local_448 = (void *)((longlong)_Src_00 + 0xc0);
          local_450 = pvVar21;
          do {
            pvVar15 = (void *)((longlong)local_450 + 0xc0);
            pvVar4 = (void *)((longlong)local_450 + 0xc0);
            do {
              _Src = pvVar4;
              local_440 = pvVar15;
              if (_Src_00 < _Src) break;
              pvVar15 = (void *)((longlong)local_440 + 0xc0);
              pvVar4 = (void *)((longlong)_Src + 0xc0);
            } while (*(byte *)((longlong)pvVar21 + 0x5c) <= *(byte *)((longlong)_Src + 0x5c));
            pvVar4 = (void *)((longlong)local_448 - 0x180);
            pvVar15 = local_448;
            do {
              pvVar16 = pvVar4;
              local_448 = (void *)((longlong)pvVar15 - 0xc0);
              if (local_448 <= pvVar21) break;
              pbVar1 = (byte *)((longlong)pvVar15 - 100);
              pvVar4 = (void *)((longlong)pvVar16 + -0xc0);
              pvVar15 = local_448;
            } while (*pbVar1 <= *(byte *)((longlong)pvVar21 + 0x5c));
            local_450 = _Src;
            if (local_448 < _Src) goto LAB_140a3c59d;
            memcpy(local_108,_Src,0xc0);
            pvVar15 = local_448;
            memcpy(_Src,local_448,0xc0);
            memcpy(pvVar15,local_108,0xc0);
          } while( true );
        }
        for (; pvVar10 = pvVar21, pvVar20 = pvVar21, pvVar21 < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0xc0)) {
          while (pvVar15 = pvVar10, pvVar10 = (void *)((longlong)pvVar20 + 0xc0), pvVar10 <= _Src_00
                ) {
            pbVar1 = (byte *)((longlong)pvVar20 + 0x11c);
            pvVar20 = pvVar10;
            if (*(byte *)((longlong)pvVar15 + 0x5c) <= *pbVar1) {
              pvVar10 = pvVar15;
            }
          }
          memcpy(local_108,pvVar15,0xc0);
          memcpy(pvVar15,_Src_00,0xc0);
          memcpy(_Src_00,local_108,0xc0);
        }
        goto LAB_140a3c2d7;
      }
LAB_140a3c462:
      local_450 = pvVar21;
      FUN_14885a230(local_450);
LAB_140a3c2d7:
      plVar13 = plVar13 + -3;
    } while (&local_408 <= plVar13);
    iVar17 = *(int *)(param_1 + 0x368);
    plVar14 = local_438;
  }
  uVar11 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0x80;
  uStack_3d8 = 0xffffffff;
  local_3d4 = 0;
  local_3c8 = (undefined1 *)0x0;
  local_3c0 = 0;
  if (0 < iVar17) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x360);
      lVar18 = (longlong)(int)uVar11 * 0xc0;
      local_108[0] = *(longlong *)(lVar9 + 4 + lVar18);
      if ((int)uVar11 < *(int *)(param_1 + 0x370)) {
        if ((int)uStack_400 != local_3d4) {
          uVar3 = (uint)((ulonglong)local_108[0] >> 0x10);
          uVar8 = (uint)local_108[0] & 0xffff;
          puVar6 = local_3c8;
          if (local_3c8 == (undefined1 *)0x0) {
            puVar6 = local_3d0;
          }
          for (iVar17 = *(int *)(puVar6 + (ulonglong)
                                          (local_3c0 - 1U &
                                          (int)((ulonglong)local_108[0] >> 0x20) +
                                          ((uint)local_108[0] << 0x10 | uVar8) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
              iVar17 != -1; iVar17 = *(int *)((longlong)iVar17 * 0x10 + local_408 + 8)) {
            if (*(longlong *)(local_408 + (longlong)iVar17 * 0x10) == local_108[0])
            goto LAB_140a3c34e;
          }
        }
        FUN_144a13f80(&local_408,local_42c,local_108,0);
      }
      else {
LAB_140a3c34e:
        if (((*(int *)(lVar9 + 0xac + lVar18) != 0 || *(int *)(lVar9 + 0xa8 + lVar18) != 0) ||
            *(int *)(lVar9 + 0xb0 + lVar18) != 0) || *(int *)(lVar9 + 0xb4 + lVar18) != 0) {
          lVar9 = lVar18 + lVar9;
          local_428 = *(undefined4 *)(lVar9 + 0xa8);
          uStack_424 = *(undefined4 *)(lVar9 + 0xac);
          uStack_420 = *(undefined4 *)(lVar9 + 0xb0);
          uStack_41c = *(undefined4 *)(lVar9 + 0xb4);
          FUN_140bd77dc(param_1,&local_428,0,0);
          lVar9 = *(longlong *)(param_1 + 0x360);
        }
        *(undefined8 *)(lVar9 + 0x68 + lVar18) = 0;
        *(undefined8 *)(lVar9 + 0x70 + lVar18) = 0xffffffffffffffff;
        lVar12 = *(longlong *)(lVar9 + 0x60 + lVar18);
        if ((lVar12 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(lVar12 + 0x50));
        }
        iVar17 = *(int *)(param_1 + 0x368);
        if (~uVar11 + iVar17 != 0) {
          memmove((void *)(lVar9 + lVar18),(void *)(lVar9 + lVar18 + 0xc0),
                  (longlong)(int)(~uVar11 + iVar17) * 0xc0);
          iVar17 = *(int *)(param_1 + 0x368);
        }
        uVar11 = uVar11 - 1;
        *(int *)(param_1 + 0x368) = iVar17 + -1;
        FUN_140a3d6ba(plVar14);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(param_1 + 0x368));
    local_3c0 = 0;
    if (local_3c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar19 = uStack_400 >> 0x20;
  uStack_400 = uStack_400 & 0xffffffff00000000;
  if ((int)uVar19 != 0) {
    FUN_14472eb64(&local_408,0);
  }
  uStack_3d8 = 0xffffffff;
  local_3d4 = 0;
  local_3e0 = 0;
  if (0x80 < local_3dc) {
    local_3dc = 0x80;
    FUN_1446efbd8(local_3f8,0);
  }
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140a3c59d:
  memcpy(local_108,pvVar21,0xc0);
  memcpy(pvVar21,local_448,0xc0);
  memcpy(local_448,local_108,0xc0);
  iVar17 = iVar17 + -1;
  pvVar15 = (void *)((longlong)local_448 + -0xc0);
  if ((longlong)pvVar16 - (longlong)pvVar10 < (longlong)pvVar20 - (longlong)local_440) {
    if (local_450 < _Src_00) {
      *plVar13 = (longlong)local_450;
      plVar13[1] = (longlong)_Src_00;
      *(int *)(plVar13 + 2) = iVar17;
      plVar13 = plVar13 + 3;
    }
    pvVar10 = pvVar21;
    if (local_448 <= (void *)((longlong)pvVar21 + 0xc0U)) goto LAB_140a3c2d7;
  }
  else {
    if ((void *)((longlong)pvVar21 + 0xc0U) < local_448) {
      *plVar13 = (longlong)pvVar21;
      plVar13[1] = (longlong)pvVar15;
      *(int *)(plVar13 + 2) = iVar17;
      plVar13 = plVar13 + 3;
    }
    pvVar16 = _Src_00;
    pvVar15 = _Src_00;
    pvVar21 = local_450;
    pvVar10 = local_440;
    if (_Src_00 <= local_450) goto LAB_140a3c2d7;
  }
  local_440 = pvVar10;
  local_450 = pvVar21;
  iVar5 = (int)((ulonglong)((longlong)pvVar16 - (longlong)local_440) >> 6);
  pvVar10 = local_440;
  pvVar20 = pvVar16;
  pvVar21 = local_450;
  _Src_00 = pvVar15;
  if (iVar17 == 0) goto LAB_140a3c462;
  goto LAB_140a3c24e;
}



// FUNCTION 140a3c692 FUN_140a3c692 body=869 status=ok
// SIG undefined FUN_140a3c692(void)

void FUN_140a3c692(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  char cVar22;
  undefined8 uVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar24 = param_2[3];
  if (lVar24 == 0) {
    uVar23 = FUN_140067708();
    lVar24 = FUN_14477b664(uVar23);
    param_2[3] = lVar24;
  }
  local_58 = (longlong *)param_2[4];
  if (((local_58 == (longlong *)0x0) && (local_58 = (longlong *)0x0, lVar24 != 0)) &&
     (param_2[2] != 0)) {
    plVar6 = *(longlong **)(lVar24 + 0xb8);
    if (plVar6 == (longlong *)0x0) {
LAB_140a3c9f4:
      local_58 = (longlong *)0x0;
    }
    else {
      cVar22 = (**(code **)(*plVar6 + 0x108))(plVar6);
      if (cVar22 == '\0') goto LAB_140a3c9f4;
      uVar23 = (**(code **)(*plVar6 + 0x110))(plVar6);
      local_58 = (longlong *)FUN_144aff482(uVar23,param_2 + 2);
    }
    param_2[4] = local_58;
  }
  FUN_140942716(&local_58);
  FUN_1407ec87c(param_2 + 0xc,&local_58);
  if ((local_58 != (longlong *)0x0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(local_58[10]);
  }
  if ((param_2[0xc] == 0) || ((DAT_14cb26569 & 1) == 0)) goto LAB_140a3c91f;
  FUN_1403c747e(param_1,&local_58,*(undefined8 *)((longlong)param_2 + 4));
  plVar6 = local_58;
  if (local_58 == (longlong *)0x0) goto LAB_140a3c91f;
  lVar24 = *local_58;
  *(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1;
  if ((int)local_58[0x26] < 1) {
    FUN_1400847bc(local_58 + 0x17,0);
    if ((int)plVar6[0x21] == 0) {
      FUN_140087e46(plVar6);
      if (*plVar6 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140a3c78c;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar6);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar6);
      }
    }
  }
LAB_140a3c78c:
  if (lVar24 == -1) goto LAB_140a3c91f;
  iVar25 = *(int *)(param_1 + 0x368);
  *(uint *)(param_1 + 0x368) = iVar25 + 1U;
  if (*(uint *)(param_1 + 0x36c) < iVar25 + 1U) {
    FUN_140a3d412((longlong *)(param_1 + 0x360),iVar25);
  }
  lVar3 = *(longlong *)(param_1 + 0x360);
  lVar26 = (longlong)iVar25 * 0xc0;
  lVar24 = lVar3 + lVar26;
  *(undefined4 *)(lVar3 + 8 + lVar26) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + lVar26) = *param_2;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar26);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar26) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar26) = param_2[2];
  uVar23 = FUN_14477b664(param_2[3]);
  uVar23 = FUN_14477b664(uVar23);
  *(undefined8 *)(lVar3 + 0x18 + lVar26) = uVar23;
  *(undefined8 *)(lVar3 + 0x20 + lVar26) = param_2[4];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar8 = *(undefined4 *)(param_2 + 6);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  puVar2 = (undefined4 *)(lVar3 + 0x28 + lVar26);
  *puVar2 = *(undefined4 *)(param_2 + 5);
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  *(undefined8 *)(lVar3 + 0x48 + lVar26) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x38 + lVar26);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x38 + lVar26) = param_2[7];
  uVar23 = FUN_14477b664(param_2[8]);
  uVar23 = FUN_14477b664(uVar23);
  *(undefined8 *)(lVar3 + 0x40 + lVar26) = uVar23;
  *(undefined8 *)(lVar3 + 0x48 + lVar26) = param_2[9];
  uVar23 = param_2[10];
  *(undefined8 *)(lVar3 + 0x55 + lVar26) = *(undefined8 *)((longlong)param_2 + 0x55);
  *(undefined8 *)(lVar3 + 0x50 + lVar26) = uVar23;
  lVar4 = param_2[0xc];
  *(longlong *)(lVar3 + 0x60 + lVar26) = lVar4;
  if ((lVar4 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar5 = *(int **)(lVar4 + 0x50);
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar25 = 5;
    }
    else {
      if ((char)piVar5[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_140a3c8b7;
      }
      iVar25 = 2;
    }
    LOCK();
    piVar5[2] = iVar25;
    UNLOCK();
  }
LAB_140a3c8b7:
  *(undefined8 *)(lVar24 + 0x68) = 0;
  *(undefined8 *)(lVar24 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(lVar24 + 0x68) = param_2[0xd];
  *(undefined8 *)(lVar24 + 0x70) = param_2[0xe];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar10 = *(undefined4 *)(param_2 + 0x11);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar12 = *(undefined4 *)(param_2 + 0x12);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar14 = *(undefined4 *)(param_2 + 0x13);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar16 = *(undefined4 *)(param_2 + 0x14);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar18 = *(undefined4 *)(param_2 + 0x15);
  uVar19 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar20 = *(undefined4 *)(param_2 + 0x16);
  uVar21 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)(lVar24 + 0x7c) = uVar7;
  *(undefined4 *)(lVar24 + 0x80) = uVar8;
  *(undefined4 *)(lVar24 + 0x84) = uVar9;
  *(undefined4 *)(lVar24 + 0x88) = uVar10;
  *(undefined4 *)(lVar24 + 0x8c) = uVar11;
  *(undefined4 *)(lVar24 + 0x90) = uVar12;
  *(undefined4 *)(lVar24 + 0x94) = uVar13;
  *(undefined4 *)(lVar24 + 0x98) = uVar14;
  *(undefined4 *)(lVar24 + 0x9c) = uVar15;
  *(undefined4 *)(lVar24 + 0xa0) = uVar16;
  *(undefined4 *)(lVar24 + 0xa4) = uVar17;
  *(undefined4 *)(lVar24 + 0xa8) = uVar18;
  *(undefined4 *)(lVar24 + 0xac) = uVar19;
  *(undefined4 *)(lVar24 + 0xb0) = uVar20;
  *(undefined4 *)(lVar24 + 0xb4) = uVar21;
  FUN_140a3c9f8(param_1,lVar26 + *(longlong *)(param_1 + 0x360));
LAB_140a3c91f:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3c9f8 FUN_140a3c9f8 body=272 status=ok
// SIG undefined FUN_140a3c9f8(void)

void FUN_140a3c9f8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1403c747e(param_1,&local_28,*(undefined8 *)(param_2 + 4));
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  local_40 = local_28;
  if (local_28 != (longlong *)0x0) {
    *(int *)(local_28 + 0x21) = (int)local_28[0x21] + 1;
  }
  FUN_140a3cb0a(param_1,&local_38,&local_40,uVar1);
  *(undefined4 *)(param_2 + 0xa8) = local_38;
  *(undefined4 *)(param_2 + 0xac) = uStack_34;
  *(undefined4 *)(param_2 + 0xb0) = uStack_30;
  *(undefined4 *)(param_2 + 0xb4) = uStack_2c;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0xffffffffffffffff;
  }
  else {
    lVar2 = *local_28;
    *(longlong **)(param_2 + 0x68) = local_28;
    *(longlong *)(param_2 + 0x70) = lVar2;
    *(int *)(local_28 + 0x21) = (int)local_28[0x21] + -1;
    if ((int)local_28[0x26] < 1) {
      FUN_1400847bc(local_28 + 0x17,0);
      if ((int)local_28[0x21] == 0) {
        FUN_140087e46(local_28);
        if (*local_28 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140a3ca96;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_28);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_28);
        }
      }
    }
  }
LAB_140a3ca96:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3cb0a FUN_140a3cb0a body=2311 status=ok
// SIG undefined FUN_140a3cb0a(void)

GUID * FUN_140a3cb0a(longlong param_1,GUID *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  byte bVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 auStack_d8 [44];
  int local_ac;
  uint *local_a8;
  longlong *local_a0;
  GUID *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_4 == 0) || (plVar4 = (longlong *)*param_3, plVar4 == (longlong *)0x0)) {
    param_2->Data1 = 0;
    param_2->Data2 = 0;
    param_2->Data3 = 0;
    param_2->Data4[0] = '\0';
    param_2->Data4[1] = '\0';
    param_2->Data4[2] = '\0';
    param_2->Data4[3] = '\0';
    param_2->Data4[4] = '\0';
    param_2->Data4[5] = '\0';
    param_2->Data4[6] = '\0';
    param_2->Data4[7] = '\0';
  }
  else {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0xffffffffffffffff;
    local_68 = 0;
    *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + 1;
    local_90 = param_4;
    local_88 = plVar4;
    FUN_140942716(&local_90);
    FUN_1407ec87c(&local_80,&local_90);
    if ((local_90 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_90 + 0x50));
    }
    param_2->Data1 = 0;
    param_2->Data2 = 0;
    param_2->Data3 = 0;
    param_2->Data4[0] = '\0';
    param_2->Data4[1] = '\0';
    param_2->Data4[2] = '\0';
    param_2->Data4[3] = '\0';
    param_2->Data4[4] = '\0';
    param_2->Data4[5] = '\0';
    param_2->Data4[6] = '\0';
    param_2->Data4[7] = '\0';
    CoCreateGuid(param_2);
    plVar4 = (longlong *)(param_1 + 0x140);
    if (*(int *)(param_1 + 0x174) == 0) {
      iVar22 = *(int *)(param_1 + 0x148);
      *(int *)(param_1 + 0x148) = iVar22 + 1;
      if (*(int *)(param_1 + 0x14c) == iVar22) {
        FUN_1406cd6a8(plVar4,iVar22);
      }
      iVar34 = *(int *)(param_1 + 0x168);
      if (iVar34 == 0) {
        iVar29 = -1;
      }
      else {
        iVar29 = iVar34 + 0x1e;
        if (-1 < iVar34 + -1) {
          iVar29 = iVar34 + -1;
        }
        iVar29 = iVar29 >> 5;
      }
      lVar30 = param_1 + 0x150;
      iVar27 = iVar34 + 1;
      iVar33 = iVar34 + 0x1f;
      if (-1 < iVar34) {
        iVar33 = iVar34;
      }
      if (iVar33 >> 5 == iVar29) {
        *(int *)(param_1 + 0x168) = iVar27;
      }
      else {
        if (*(int *)(param_1 + 0x16c) <= iVar34) {
          if (iVar34 + 0x20U < 0xa0) {
            iVar27 = 0x80;
            iVar29 = iVar34;
          }
          else {
            uVar35 = iVar34 + 0x20U >> 5;
            local_a8 = (uint *)(ulonglong)uVar35;
            if (*(int *)(param_1 + 0x16c) + 0x1fU < 0xa0) {
              uVar21 = 4;
              if (4 < uVar35) {
                uVar21 = uVar35;
              }
            }
            else {
              uVar21 = (uVar35 * 3 >> 3) + uVar35 + 0x10;
            }
            uVar36 = FUN_144a3809e(uVar21 << 2,0);
            iVar29 = (int)(uVar36 >> 2);
            iVar27 = -0x20;
            if ((int)local_a8 <= iVar29) {
              iVar27 = iVar29 << 5;
            }
            iVar29 = *(int *)(param_1 + 0x168);
          }
          *(int *)(param_1 + 0x16c) = iVar27;
          FUN_1446efbd8(lVar30,iVar29);
          iVar27 = *(int *)(param_1 + 0x168) + 1;
        }
        iVar29 = iVar27 + 0x1f;
        if (-1 < iVar27) {
          iVar29 = iVar27;
        }
        *(int *)(param_1 + 0x168) = iVar27;
        if (iVar27 % 0x20 != 0) {
          lVar24 = *(longlong *)(param_1 + 0x160);
          if (*(longlong *)(param_1 + 0x160) == 0) {
            lVar24 = lVar30;
          }
          bVar26 = -(char)(iVar27 % 0x20);
          *(uint *)(lVar24 + (longlong)(iVar29 >> 5) * 4) =
               (uint)(*(int *)(lVar24 + (longlong)(iVar29 >> 5) * 4) << (bVar26 & 0x1f)) >>
               (bVar26 & 0x1f);
        }
      }
      lVar24 = (longlong)iVar22;
      if (*(longlong *)(param_1 + 0x160) != 0) {
        lVar30 = *(longlong *)(param_1 + 0x160);
      }
      bVar26 = (byte)iVar34 & 0x1f;
      puVar28 = (uint *)(lVar30 + (longlong)(iVar33 >> 5) * 4);
      *puVar28 = *puVar28 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
    }
    else {
      iVar22 = *(int *)(param_1 + 0x170);
      lVar24 = (longlong)iVar22;
      iVar34 = *(int *)(*(longlong *)(param_1 + 0x140) + 4 + lVar24 * 0x40);
      *(int *)(param_1 + 0x170) = iVar34;
      iVar29 = *(int *)(param_1 + 0x174) + -1;
      *(int *)(param_1 + 0x174) = iVar29;
      if (iVar29 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar34 * 0x40) = 0xffffffff;
      }
    }
    local_a8 = (uint *)(param_1 + 0x150);
    puVar28 = *(uint **)(param_1 + 0x160);
    if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
      puVar28 = local_a8;
    }
    iVar34 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar34 = iVar22;
    }
    puVar28[iVar34 >> 5] = puVar28[iVar34 >> 5] | 1 << ((byte)iVar22 & 0x1f);
    lVar30 = *(longlong *)(param_1 + 0x140);
    lVar24 = lVar24 * 0x40;
    puVar1 = (undefined4 *)(lVar30 + lVar24);
    uVar6 = *(ulong *)&param_2->Data2;
    uVar7 = *(ulong *)param_2->Data4;
    uVar8 = *(ulong *)(param_2->Data4 + 4);
    puVar2 = (ulong *)(lVar30 + lVar24);
    *puVar2 = param_2->Data1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(longlong **)(lVar30 + 0x10 + lVar24) = local_88;
    if (local_88 != (longlong *)0x0) {
      *(int *)(local_88 + 0x21) = (int)local_88[0x21] + 1;
    }
    *(longlong *)(puVar1 + 6) = local_80;
    if ((local_80 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      piVar5 = *(int **)(local_80 + 0x50);
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      if (DAT_14cb259f8 == 0) {
        iVar34 = 5;
      }
      else {
        if ((char)piVar5[1] != '\x01') {
          FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
          goto LAB_140a3cd51;
        }
        iVar34 = 2;
      }
      LOCK();
      piVar5[2] = iVar34;
      UNLOCK();
    }
LAB_140a3cd51:
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar1 + 8) = uStack_78;
    *(undefined8 *)(puVar1 + 10) = local_70;
    *(undefined8 *)(puVar1 + 0xc) = local_68;
    puVar1[0xe] = 0xffffffff;
    uVar21 = FUN_1447addd0(puVar1,0x10);
    uVar35 = 1;
    if (*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x174) == 1) {
      uVar23 = 1;
LAB_140a3cdb9:
      if (((int)uVar23 < 1) || ((int)uVar35 <= *(int *)(param_1 + 0x188))) {
        uVar21 = *(int *)(param_1 + 0x188) - 1U & uVar21;
        puVar1[0xf] = uVar21;
        lVar30 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar30 = param_1 + 0x178;
        }
        puVar1[0xe] = *(undefined4 *)
                       (lVar30 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)(int)uVar21)
                                 * 4);
        lVar30 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar30 = param_1 + 0x178;
        }
        *(int *)(lVar30 + ((longlong)*(int *)(param_1 + 0x188) - 1U & (longlong)(int)uVar21) * 4) =
             iVar22;
      }
      else {
        *(uint *)(param_1 + 0x188) = uVar35;
        plVar4 = (longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) != 0) {
          FUN_1446efa72(plVar4,0,0,4);
          uVar35 = *(uint *)(param_1 + 0x188);
        }
        lVar30 = param_1 + 0x178;
        if (uVar35 == 1) {
          if (*plVar4 != 0) {
            FUN_1446efa72(plVar4,0,0,4);
          }
LAB_140a3ce04:
          uVar21 = 0;
          do {
            lVar24 = *(longlong *)(param_1 + 0x180);
            if (*(longlong *)(param_1 + 0x180) == 0) {
              lVar24 = lVar30;
            }
            *(undefined4 *)
             (lVar24 + (ulonglong)(*(int *)(param_1 + 0x188) + 0x7fffffffU & uVar21) * 4) =
                 0xffffffff;
            uVar21 = uVar21 + 1;
          } while (uVar35 != uVar21);
        }
        else {
          if (uVar35 == 0) goto LAB_140a3d06f;
          FUN_1446efa72(plVar4,0,uVar35,4);
          if (0 < (int)uVar35) goto LAB_140a3ce04;
        }
        iVar22 = *(int *)(param_1 + 0x168);
        if (iVar22 == 0) {
          uVar37 = 0;
          uVar36 = 1;
          iVar29 = 0;
          iVar34 = 0;
        }
        else {
          puVar28 = *(uint **)(param_1 + 0x160);
          if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
            puVar28 = local_a8;
          }
          uVar35 = *puVar28;
          if (uVar35 == 0) {
            iVar34 = iVar22 + 0x1e;
            if (-1 < iVar22 + -1) {
              iVar34 = iVar22 + -1;
            }
            uVar37 = 0;
            uVar36 = (ulonglong)(uint)(iVar34 >> 5);
            if (iVar34 >> 5 < 1) {
              uVar36 = uVar37;
            }
            iVar34 = 0;
            do {
              if (uVar36 == uVar37) goto LAB_140a3d06f;
              iVar34 = iVar34 + 0x20;
              uVar35 = puVar28[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar35 == 0);
          }
          else {
            uVar37 = 0;
            iVar34 = 0;
          }
          uVar36 = (ulonglong)(-uVar35 & uVar35);
          uVar25 = uVar36 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar29 = (iVar34 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar22 <= iVar29) {
            iVar29 = iVar22;
          }
        }
        if (iVar29 < iVar22) {
          uVar35 = 0xffffffff;
          local_a0 = param_3;
          local_98 = param_2;
          do {
            lVar24 = *(longlong *)(param_1 + 0x140);
            lVar32 = (longlong)iVar29 * 0x40;
            local_ac = iVar34;
            iVar22 = FUN_1447addd0(lVar24 + lVar32,0x10);
            uVar25 = (longlong)iVar22 & (longlong)*(int *)(param_1 + 0x188) - 1U;
            iVar22 = (int)uVar25;
            *(int *)(lVar24 + 0x3c + lVar32) = iVar22;
            lVar31 = *(longlong *)(param_1 + 0x180);
            if (*(longlong *)(param_1 + 0x180) == 0) {
              lVar31 = lVar30;
            }
            *(undefined4 *)(lVar24 + 0x38 + lVar32) =
                 *(undefined4 *)(lVar31 + ((longlong)*(int *)(param_1 + 0x188) - 1U & uVar25) * 4);
            lVar24 = *(longlong *)(param_1 + 0x180);
            if (*(longlong *)(param_1 + 0x180) == 0) {
              lVar24 = lVar30;
            }
            *(int *)(lVar24 + ((longlong)iVar22 & (longlong)*(int *)(param_1 + 0x188) - 1U) * 4) =
                 iVar29;
            uVar35 = ~(uint)uVar36 & uVar35;
            puVar28 = *(uint **)(param_1 + 0x160);
            if (*(uint **)(param_1 + 0x160) == (uint *)0x0) {
              puVar28 = local_a8;
            }
            iVar22 = *(int *)(param_1 + 0x168);
            iVar29 = (int)uVar37;
            lVar24 = (longlong)iVar29;
            uVar21 = puVar28[lVar24] & uVar35;
            iVar34 = local_ac;
            param_2 = local_98;
            param_3 = local_a0;
            if (uVar21 == 0) {
              iVar27 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar27 = iVar22 + -1;
              }
              iVar27 = iVar27 >> 5;
              iVar33 = iVar27;
              if (iVar27 < iVar29) {
                iVar33 = iVar29;
              }
              if (iVar27 <= iVar29) break;
              lVar31 = 0;
              while( true ) {
                iVar34 = iVar34 + 0x20;
                uVar21 = puVar28[lVar24 + lVar31 + 1];
                if (uVar21 != 0) break;
                lVar31 = lVar31 + 1;
                if (iVar33 - lVar24 == lVar31) goto LAB_140a3d06f;
              }
              uVar37 = (ulonglong)(iVar29 + (int)lVar31 + 1);
              uVar35 = 0xffffffff;
            }
            uVar36 = (ulonglong)(-uVar21 & uVar21);
            uVar25 = uVar36 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar29 = (iVar34 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          } while (iVar29 < iVar22);
        }
      }
    }
    else {
      iVar34 = FUN_1404fa484(plVar4,uVar21,puVar1);
      if (iVar34 == -1) {
        uVar23 = *(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x174);
        if (3 < uVar23) {
          uVar36 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
          lVar30 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar30 == 0; lVar30 = lVar30 + -1) {
            }
          }
          uVar35 = 1 << ((byte)lVar30 & 0x1f);
        }
        goto LAB_140a3cdb9;
      }
      puVar3 = (undefined4 *)(*plVar4 + (longlong)iVar34 * 0x40);
      FUN_141818dd8(puVar3 + 4);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      uVar13 = puVar1[4];
      uVar14 = puVar1[5];
      uVar15 = puVar1[6];
      uVar16 = puVar1[7];
      uVar17 = puVar1[8];
      uVar18 = puVar1[9];
      uVar19 = puVar1[10];
      uVar20 = puVar1[0xb];
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(puVar1 + 0xc);
      puVar3[8] = uVar17;
      puVar3[9] = uVar18;
      puVar3[10] = uVar19;
      puVar3[0xb] = uVar20;
      puVar3[4] = uVar13;
      puVar3[5] = uVar14;
      puVar3[6] = uVar15;
      puVar3[7] = uVar16;
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      FUN_140bd7c10(plVar4,iVar22);
    }
LAB_140a3d06f:
    uStack_78 = 0;
    local_70 = 0xffffffffffffffff;
    if ((local_80 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_80 + 0x50));
    }
    plVar4 = local_88;
    if (((local_88 != (longlong *)0x0) &&
        (*(int *)(local_88 + 0x21) = (int)local_88[0x21] + -1, (int)local_88[0x26] < 1)) &&
       (FUN_1400847bc(local_88 + 0x17,0), (int)plVar4[0x21] == 0)) {
      FUN_140087e46(plVar4);
      if (*plVar4 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140a3d0d1;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
      }
    }
  }
LAB_140a3d0d1:
  plVar4 = (longlong *)*param_3;
  if (plVar4 == (longlong *)0x0) goto LAB_140a3d10a;
  *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + -1;
  if (((int)plVar4[0x26] < 1) && (FUN_1400847bc(plVar4 + 0x17,0), (int)plVar4[0x21] == 0)) {
    FUN_140087e46(plVar4);
    if (*plVar4 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140a3d103;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
    }
  }
LAB_140a3d103:
  *param_3 = 0;
LAB_140a3d10a:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3d412 FUN_140a3d412 body=275 status=ok
// SIG undefined FUN_140a3d412(void)

void FUN_140a3d412(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140a3d526 FUN_140a3d526 body=402 status=ok
// SIG undefined FUN_140a3d526(void)

undefined8 FUN_140a3d526(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  uVar2 = DAT_14cb72610;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_30,uVar2,param_1);
    plVar6 = local_28;
    if ((local_30 == 0) || (local_28 == (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_28 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_28 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (plVar6 != (longlong *)0x0) {
      iVar4 = (int)plVar6[1];
      do {
        plVar7 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plVar6;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(local_30 + 0x50);
        }
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        goto LAB_140a3d5f2;
      }
    }
  }
  uVar5 = 0;
LAB_140a3d5f2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140a3d6ba FUN_140a3d6ba body=151 status=ok
// SIG undefined FUN_140a3d6ba(void)

void FUN_140a3d6ba(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc0)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc0,0x10);
      uVar3 = uVar3 / 0xc0;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc0,0x10);
    }
  }
  return;
}



// FUNCTION 140a3d752 FUN_140a3d752 body=325 status=ok
// SIG undefined FUN_140a3d752(void)

void FUN_140a3d752(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 140a3d898 FUN_140a3d898 body=428 status=ok
// SIG undefined FUN_140a3d898(void)

void FUN_140a3d898(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  local_40 = 0;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_48._0_4_ = 0xffffffff;
    local_48._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar14 = local_58 >> 0x20;
  }
  plVar2 = local_50;
  iVar3 = (int)local_50[3];
  iVar13 = (int)local_58;
  uVar8 = (uint)local_48;
  iVar6 = local_48._4_4_;
  iVar9 = local_40;
  bVar4 = DAT_14cb26569;
  if (local_48._4_4_ < iVar3) {
    do {
      lVar12 = *(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18);
      if ((lVar12 != 0) && ((bVar4 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar12 + 0x50));
        iVar3 = (int)plVar2[3];
        bVar4 = DAT_14cb26569;
      }
      uVar8 = uVar8 & ~(uint)uVar14;
      plVar10 = (longlong *)plVar2[2];
      if ((longlong *)plVar2[2] == (longlong *)0x0) {
        plVar10 = plVar2;
      }
      lVar12 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar10 + lVar12 * 4) & uVar8;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar13) {
          iVar7 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar12 * 4 + 4);
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar12 == lVar11) goto LAB_140a3d9d0;
        }
        iVar13 = iVar13 + (int)lVar11 + 1;
        uVar8 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar3);
  }
LAB_140a3d9d0:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3da46 FUN_140a3da46 body=162 status=ok
// SIG undefined FUN_140a3da46(void)

undefined8 * FUN_140a3da46(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a46be50;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x70);
  _Src = *(void **)(param_2 + 0x68);
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_140a3dae8(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar1 << 3);
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 140a3dae8 FUN_140a3dae8 body=310 status=ok
// SIG undefined FUN_140a3dae8(void)

void FUN_140a3dae8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a3db55;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140a3db55:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140a3dc1e FUN_140a3dc1e body=71 status=ok
// SIG undefined FUN_140a3dc1e(void)

void FUN_140a3dc1e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140a3dc66(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a3dc66 FUN_140a3dc66 body=55 status=ok
// SIG undefined FUN_140a3dc66(void)

void FUN_140a3dc66(longlong *param_1)

{
  FUN_140a3dc9e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a3dc9e FUN_140a3dc9e body=123 status=ok
// SIG undefined FUN_140a3dc9e(void)

void FUN_140a3dc9e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140a3dd22 FUN_140a3dd22 body=758 status=ok
// SIG undefined FUN_140a3dd22(void)

longlong * FUN_140a3dd22(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = (longlong)&PTR_FUN_14b036160;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3002;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32) = 1;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x200000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_1405c5fa2();
  param_1[0x12] = (longlong)&DAT_14cb769e8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = (longlong)&PTR_FUN_14b0394b0;
  *(undefined2 *)((longlong)param_1 + 0xa9) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3e4ccccd;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x18] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x19] = lVar1;
  param_1[0x1a] = DAT_14c8464f0;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x1b) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar4;
  param_1[0x1d] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xf00000d0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffe0 | 3;
  FUN_1405c5fa2();
  param_1[0x32] = (longlong)&DAT_14cb769e8;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = (longlong)&PTR_FUN_14b0394b0;
  *(undefined8 *)((longlong)param_1 + 0x1ae) = 0x1000000000000;
  *(undefined2 *)((longlong)param_1 + 0x1b6) = 1;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e6) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  param_1[0x46] = (longlong)&DAT_4030000000000000;
  param_1[0x47] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 0x48) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x246) = 1;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0x1010000;
  uVar5 = FUN_140691b73();
  *(undefined1 *)((longlong)param_1 + 0x254) = uVar5;
  uVar5 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_1 + 0x255) = uVar5;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(uint *)(param_1 + 0x55) = *(uint *)(param_1 + 0x55) & 0xffffffe0 | 3;
  FUN_1405c5fa2();
  param_1[0x57] = (longlong)&DAT_14cb769e8;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = (longlong)&PTR_FUN_14b0394b0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x9bf48485;
  param_1[0x5d] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x5e) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar2;
  *(undefined4 *)(param_1 + 0x5f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar4;
  param_1[0x60] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x10000;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3f800000;
  param_1[0x6b] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  (**(code **)(*param_1 + 0x38))(param_1);
  return param_1;
}



// FUNCTION 140a3e018 FUN_140a3e018 body=895 status=ok
// SIG undefined FUN_140a3e018(void)

void FUN_140a3e018(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint3 uVar3;
  undefined2 uVar4;
  undefined1 auStack_b8 [32];
  uint local_98 [4];
  undefined3 local_88;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined5 uStack_7d;
  ulonglong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140a3e398(param_1 + 0x348);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_85 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  uStack_60 = 0x200000000;
  if ((uint *)(param_1 + 0x38) != local_98) {
    FUN_1400709d4((uint *)(param_1 + 0x38),local_98,0,*(undefined4 *)(param_1 + 0x74));
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_14881cd62(param_1 + 0x78,0);
  }
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 0xf0 | 3;
  *(undefined4 *)(param_1 + 0xac) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xc0) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = DAT_14c8464f0;
  uVar2 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0xd8) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xe8) = DAT_14c846508;
  *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) & 0xf0 | 8;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_14c846508;
  uVar2 = DAT_14c846500;
  *(undefined8 *)(param_1 + 0xf8) = DAT_14c8464f8;
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  uStack_85 = 0;
  uStack_81 = 0;
  local_98[0] = local_98[0] & 0xffffff;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_88 = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  if ((*(longlong *)(param_1 + 0x140) != 0) || (*(int *)(param_1 + 0x148) != -0xfffff30)) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0xf00000d0;
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(uint *)(param_1 + 0x15d) = local_98[0];
  *(undefined4 *)(param_1 + 0x161) = 0;
  *(undefined4 *)(param_1 + 0x165) = 0;
  *(undefined4 *)(param_1 + 0x169) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
  *(byte *)(param_1 + 0x17c) = (*(byte *)(param_1 + 0x17c) & 0xfc) + 1;
  local_98[0] = 3;
  FUN_1405c5fa2();
  local_88 = 0xb769e8;
  uStack_85 = 0x14c;
  uStack_81 = 0;
  uStack_7d = 0;
  local_78 = 0;
  local_98[2] = 0x4b0394b0;
  local_98[3] = 1;
  *(undefined1 *)(param_1 + 0x180) = 3;
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(param_1 + 0x188,0);
  *(ulonglong *)(param_1 + 400) = CONCAT17((undefined1)uStack_81,CONCAT43(uStack_85,local_88));
  FUN_1406022fe(param_1 + 0x198,(longlong)&uStack_81 + 1);
  local_98[2] = 0x4a171d50;
  local_98[3] = 1;
  uVar1 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12((longlong)&uStack_81 + 1,0);
  }
  local_88 = 0;
  uStack_85 = 0;
  uVar3 = uStack_81._1_3_;
  uStack_81 = (uint)uStack_81._1_3_ << 8;
  if (CONCAT53(uStack_7d,uVar3) != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x1a8) = 0xa0;
  *(byte *)(param_1 + 0x1a9) = *(byte *)(param_1 + 0x1a9) & 0xf8;
  local_98[0] = 0x40a00000;
  local_98[2] = 0;
  local_98[3] = 0;
  local_88 = 0;
  uStack_85 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60._0_4_ = 0xf00000d0;
  local_58 = 0;
  local_50 = 0x3f800000;
  uVar4 = FUN_1449148e0(local_98);
  *(undefined2 *)(param_1 + 0x1aa) = uVar4;
  local_98[0] = 0x3dcccccd;
  local_98[2] = 0;
  local_98[3] = 0;
  local_88 = 0;
  uStack_85 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xf00000d0);
  local_58 = 0;
  local_50 = 0x3f800000;
  uVar4 = FUN_1449148e0(local_98);
  *(undefined2 *)(param_1 + 0x1ac) = uVar4;
  *(undefined1 *)(param_1 + 0x2d0) = 8;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined1 *)(param_1 + 0x340) = 0;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3e398 FUN_140a3e398 body=85 status=ok
// SIG undefined FUN_140a3e398(void)

void FUN_140a3e398(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      param_1[1] = 0;
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
  param_1[2] = 0;
  return;
}



// FUNCTION 140a3e3ee FUN_140a3e3ee body=161 status=ok
// SIG undefined FUN_140a3e3ee(void)

void FUN_140a3e3ee(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140a3e490(param_1,iVar1);
    }
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x18 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0xffffffff;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      puVar2 = puVar2 + 6;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_14694a428(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_14694a48e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140a3e490 FUN_140a3e490 body=370 status=ok
// SIG undefined FUN_140a3e490(void)

void FUN_140a3e490(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a3e519;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a3e519:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140a3e602 FUN_140a3e602 body=120 status=ok
// SIG undefined FUN_140a3e602(void)

undefined * FUN_140a3e602(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845cb8) {
    FUN_144b3d300(&DAT_14c845cb8);
    if (DAT_14c845cb8 == -1) {
      FUN_145e01986(&DAT_14c845398);
      DAT_14c845cb0 = &DAT_14c845398;
      atexit(FUN_14276ba3e);
      _Init_thread_footer(&DAT_14c845cb8);
    }
  }
  return DAT_14c845cb0;
}



// FUNCTION 140a3e67a FUN_140a3e67a body=182 status=ok
// SIG undefined FUN_140a3e67a(void)

void FUN_140a3e67a(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x810);
  if (*(longlong *)(param_1 + 0x810) == 0) {
    lVar3 = param_1 + 0x10;
  }
  iVar4 = *(int *)(param_1 + 0x818);
  lVar5 = (longlong)iVar4 << 0x20;
  uVar8 = (longlong)iVar4 << 3;
  do {
    if (uVar8 == 0) goto LAB_140a3e6b2;
    lVar5 = lVar5 + -0x100000000;
    uVar1 = uVar8 - 8;
    plVar2 = (longlong *)(lVar3 + -8 + uVar8);
    uVar8 = uVar1;
  } while (*plVar2 != param_2);
  uVar6 = (uint)(uVar1 >> 3);
  if (uVar6 != 0xffffffff) {
    iVar7 = ~uVar6 + iVar4;
    if (iVar7 != 0) {
      memmove((void *)(lVar3 + (lVar5 >> 0x20) * 8),(void *)(lVar3 + (lVar5 >> 0x20) * 8 + 8),
              (longlong)iVar7 << 3);
      iVar4 = *(int *)(param_1 + 0x818);
    }
    *(int *)(param_1 + 0x818) = iVar4 + -1;
    FUN_1467f23f4(param_1 + 0x10);
    return;
  }
LAB_140a3e6b2:
  FUN_140a3e730(param_1 + 0x820,*(undefined8 *)(param_2 + 4));
  return;
}



// FUNCTION 140a3e730 FUN_140a3e730 body=368 status=ok
// SIG undefined FUN_140a3e730(void)

int FUN_140a3e730(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int *piVar12;
  longlong lVar13;
  int iVar11;
  
  if ((int)param_1[9] != 0) {
    uVar9 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar7 +
                     (longlong)
                     (int)((int)param_1[9] - 1U &
                          ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                          (int)((ulonglong)param_2 >> 0x20) + (uVar9 << 0x13 | uVar9) +
                          (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    while (iVar11 = iVar10, iVar11 != -1) {
      lVar8 = *param_1;
      iVar10 = *(int *)(lVar8 + 0x10 + (longlong)iVar11 * 0x18);
      if (*(longlong *)(lVar8 + (longlong)iVar11 * 0x18) == param_2) {
        iVar3 = 0;
        do {
          lVar4 = (longlong)iVar11;
          if (*(longlong *)(lVar8 + 8 + lVar4 * 0x18) == param_3) {
            plVar7 = (longlong *)param_1[8];
            if ((longlong *)param_1[8] == (longlong *)0x0) {
              plVar7 = param_1 + 7;
            }
            lVar13 = (longlong)*(int *)(lVar8 + 0x14 + lVar4 * 0x18);
            iVar6 = *(int *)((longlong)plVar7 + lVar13 * 4);
            if (iVar6 == iVar11) {
              piVar12 = (int *)((longlong)plVar7 + lVar13 * 4);
            }
            else {
              do {
                piVar12 = (int *)(lVar8 + (longlong)iVar6 * 0x18 + 0x10);
                iVar6 = *piVar12;
              } while (iVar6 != iVar11);
            }
            *piVar12 = *(int *)(lVar8 + lVar4 * 0x18 + 0x10);
            lVar8 = *param_1;
            if (*(int *)((longlong)param_1 + 0x34) != 0) {
              *(int *)(lVar8 + (longlong)(int)param_1[6] * 0x18) = iVar11;
            }
            *(undefined4 *)(lVar8 + lVar4 * 0x18) = 0xffffffff;
            if (*(int *)((longlong)param_1 + 0x34) < 1) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (undefined4)param_1[6];
            }
            *(undefined4 *)(lVar8 + lVar4 * 0x18 + 4) = uVar5;
            *(int *)(param_1 + 6) = iVar11;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
            plVar7 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar7 = param_1 + 2;
            }
            iVar6 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar6 = iVar11;
            }
            bVar2 = (byte)iVar11 & 0x1f;
            puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
            *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
            iVar3 = iVar3 + 1;
          }
          do {
            iVar11 = iVar10;
            if (iVar11 == -1) {
              return iVar3;
            }
            lVar8 = *param_1;
            iVar10 = *(int *)(lVar8 + 0x10 + (longlong)iVar11 * 0x18);
          } while (*(longlong *)(lVar8 + (longlong)iVar11 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 140a3e8a0 FUN_140a3e8a0 body=231 status=ok
// SIG undefined FUN_140a3e8a0(void)

undefined8 *
FUN_140a3e8a0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 0xac) != -1) {
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  local_68 = 0;
  local_64 = 0;
  local_60 = 0xbf80000000000000;
  local_58 = 0xc4750000;
  local_54 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    cVar1 = FUN_140a3e98a(param_3,*(undefined8 *)(param_1 + 8),&local_68);
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') goto LAB_140a3e92b;
    cVar1 = FUN_147f5fde4(param_3,*(undefined8 *)(param_1 + 8),&local_68);
  }
  if (cVar1 != '\0') {
    param_4 = (undefined8 *)&local_68;
  }
LAB_140a3e92b:
  puVar3 = param_2;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3e98a FUN_140a3e98a body=1158 status=ok
// SIG undefined FUN_140a3e98a(void)

/* WARNING: Removing unreachable block (ram,0x000140a3ece5) */
/* WARNING: Removing unreachable block (ram,0x000140a3ed03) */

bool FUN_140a3e98a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 ****ppppuVar17;
  bool bVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [9];
  char local_90 [8];
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  undefined1 local_70;
  int local_68 [2];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar9) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar6 * 0x48);
        if (*plVar7 == param_2) goto LAB_140a3ea20;
        iVar6 = (int)plVar7[8];
      } while (iVar6 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_140a3ea20:
  plVar12 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  if (plVar12 == (longlong *)0x0) goto LAB_140a3eb11;
  cVar2 = (char)param_1[0x20];
  if (cVar2 == '\x01') {
    if (param_1[0x21] == 0) goto LAB_140a3ea56;
    local_90[0] = '\x02';
    uVar3 = *(uint *)(param_1[0x21] + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar6 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar6 = *(int *)(lVar10 + 0x10);
      bVar18 = iVar6 == 0;
      if (bVar18) {
        *(int *)(lVar10 + 0x10) = iVar13;
        iVar6 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar18) {
        iVar6 = iVar13;
      }
    }
    local_88._0_4_ = uVar3;
    local_88 = CONCAT44(iVar6,(uint)local_88);
LAB_140a3eb9f:
    local_68[0] = 0;
    if ((int)param_1[0x25] != 0) {
      uVar8 = FUN_1448174c4(local_68);
      FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)(int)param_1[0x25] * 0x10 + -0x10);
    }
  }
  else {
    if (cVar2 == '\x02') {
      if (((((*(int *)((longlong)param_1 + 0x10c) == 0) ||
            (uVar3 = *(uint *)(param_1 + 0x21), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
          || ((lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 == 0
              || (*(int *)(lVar10 + 0x10) != *(int *)((longlong)param_1 + 0x10c))))) ||
         ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) goto LAB_140a3ea56;
      local_90[0] = '\x02';
      local_88 = param_1[0x21];
      goto LAB_140a3eb9f;
    }
    if (((cVar2 == '\x03') && (lVar10 = param_1[0x21], lVar10 != 0)) &&
       ((plVar7 = (longlong *)param_1[0x22], plVar7 != (longlong *)0x0 && (0 < (int)plVar7[1])))) {
      local_90[0] = '\x03';
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      local_78 = param_1[0x23];
      local_70 = (undefined1)param_1[0x24];
      local_88 = lVar10;
      local_80 = plVar7;
      goto LAB_140a3eb9f;
    }
LAB_140a3ea56:
    uVar8 = FUN_14030ac4c(param_1);
    local_90[0] = '\0';
    local_68[0] = 0;
    FUN_1456bb102(local_90,uVar8);
  }
  FUN_1447c3578(plVar12,local_60,local_90);
  FUN_140a3ee12(local_60,local_d8);
  puVar14 = local_d8;
  for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
    *param_3 = *puVar14;
    puVar14 = puVar14 + 1;
    param_3 = param_3 + 1;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar17 = local_60;
    if (0x18 < local_48) {
      ppppuVar17 = (undefined8 ****)local_60[0];
    }
    (*pcVar4)(ppppuVar17);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  lVar10 = DAT_14c9a3da0;
  if ((longlong)local_68[0] != 0) {
    lVar15 = (longlong)local_68[0] + -1;
    lVar16 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar10 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar10 = DAT_14c9a3da0;
    iVar6 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar10 + lVar16) = 0xffffffff;
    iVar13 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar13 = DAT_14c9a3dd0;
    }
    *(int *)(lVar10 + 4 + lVar16) = iVar13;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar13 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar13 = iVar6;
    }
    bVar5 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    local_68[0] = 0;
  }
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
LAB_140a3eb11:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar12 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3ee12 FUN_140a3ee12 body=211 status=ok
// SIG undefined FUN_140a3ee12(void)

undefined8 * FUN_140a3ee12(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 4) == '\x0f') {
    puVar3 = (undefined8 *)*param_1;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  FUN_1400b56fe(local_50,param_1,0xf);
  pppuVar4 = (undefined8 ***)&DAT_14c9ab1e0;
  if (local_30 != 0) {
    pppuVar4 = (undefined8 ***)local_50[0];
  }
  puVar3 = param_2;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *pppuVar4;
    pppuVar4 = pppuVar4 + 1;
    puVar3 = puVar3 + 1;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar4 = local_50;
    if (0x18 < local_38) {
      pppuVar4 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a3eee6 FUN_140a3eee6 body=247 status=ok
// SIG undefined FUN_140a3eee6(void)

void FUN_140a3eee6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_1407fb560();
  puVar3 = (undefined8 *)param_1[0x7b];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[0x7b] = 0;
  }
  FUN_140c731ba(param_1);
  lVar5 = param_1[0x1b0];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = param_1[0x1af];
    lVar7 = 0;
    do {
      FUN_140a3efde(param_1,*(undefined8 *)(lVar4 + lVar7));
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
  }
  if ((longlong)(int)param_1[0x1ae] != 0) {
    plVar6 = (longlong *)param_1[0x1ad];
    plVar1 = plVar6 + (int)param_1[0x1ae];
    do {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        FUN_144757f48(lVar5,0x40000000);
        uVar2 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        do {
          uVar2 = *(uint *)(lVar5 + 8);
          if ((uVar2 >> 0x15 & 1) != 0) break;
          LOCK();
          bVar8 = uVar2 == *(uint *)(lVar5 + 8);
          if (bVar8) {
            *(uint *)(lVar5 + 8) = uVar2 | 0x200000;
          }
          UNLOCK();
        } while (!bVar8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a3efd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8c0))(param_1);
  return;
}



// FUNCTION 140a3efde FUN_140a3efde body=61 status=ok
// SIG undefined FUN_140a3efde(void)

void FUN_140a3efde(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140a3f096(param_1 + 0x210);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) {
    FUN_140a3f01c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140a3f01c FUN_140a3f01c body=121 status=ok
// SIG undefined FUN_140a3f01c(void)

void FUN_140a3f01c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = DAT_14c999a84 + 1;
  local_30 = param_2;
  if (iVar1 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_14c999ae0 + lVar2) != 0) {
        local_28 = *(longlong *)((longlong)&DAT_14c999ae0 + lVar2);
        FUN_1435a6b5a(&local_30);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 != lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3f096 FUN_140a3f096 body=439 status=ok
// SIG undefined FUN_140a3f096(void)

undefined8 FUN_140a3f096(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
LAB_140a3f1cf:
    uVar6 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar9 = 0;
    do {
      local_44 = 0;
      if (param_2 == 0) {
        local_48 = 0;
        iVar4 = 0;
      }
      else {
        local_48 = *(uint *)(param_2 + 0xc);
        if ((int)local_48 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar4 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar4 = *(int *)(lVar8 + 0x10);
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar4 = iVar7;
          }
        }
      }
      local_44 = iVar4;
      if (((*(uint *)(lVar1 + lVar9) == local_48) && (*(int *)(lVar1 + 4 + lVar9) == iVar4)) ||
         ((cVar3 = FUN_144729dda(), cVar3 == '\0' &&
          (cVar3 = FUN_144729dda(&local_48), cVar3 == '\0')))) {
        uVar5 = (int)(lVar9 >> 2) * -0x33333333;
        if (uVar5 == 0xffffffff) goto LAB_140a3f1cf;
        iVar4 = (int)param_1[1];
        if (~uVar5 + iVar4 != 0) {
          memmove((void *)(*param_1 + (longlong)(int)uVar5 * 0x14),
                  (void *)(*param_1 + (longlong)(int)uVar5 * 0x14 + 0x14),
                  (longlong)(int)(~uVar5 + iVar4) * 0x14);
          iVar4 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar4 + -1;
        FUN_140a3f24e(param_1);
        uVar6 = 1;
        break;
      }
      lVar9 = lVar9 + 0x14;
      uVar6 = 0;
    } while ((longlong)(int)lVar2 * 0x14 != lVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140a3f24e FUN_140a3f24e body=159 status=ok
// SIG undefined FUN_140a3f24e(void)

void FUN_140a3f24e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x14)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x14,4);
      uVar3 = uVar3 / 0x14;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x14,4);
    }
  }
  return;
}



// FUNCTION 140a3f2ee FUN_140a3f2ee body=77 status=ok
// SIG undefined FUN_140a3f2ee(void)

void FUN_140a3f2ee(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  if ((((char)param_3 != '\0') && (*(longlong *)(param_2 + 0x50) != 0)) &&
     (*(char *)(*(longlong *)(param_2 + 0x50) + 0x121) == '\x02')) {
    FUN_140a3fe8a(param_1,DAT_14cbd4078);
  }
  FUN_140a3f33c(param_1,param_2,param_3);
  return;
}



// FUNCTION 140a3f33c FUN_140a3f33c body=112 status=ok
// SIG undefined FUN_140a3f33c(void)

void FUN_140a3f33c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if ((((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x20) + 0x178) == '\x03')) &&
     (*(char *)(param_1 + 0x310) == '\0')) {
    FUN_140a3f3e6(param_1 + 0x348);
    FUN_140a3f3ac(param_1);
    FUN_140a3fa92(param_1,param_3,param_2);
    FUN_140a3f4bc(param_1,param_3,param_2);
    return;
  }
  return;
}



// FUNCTION 140a3f3ac FUN_140a3f3ac body=57 status=ok
// SIG undefined FUN_140a3f3ac(void)

void FUN_140a3f3ac(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = FUN_14072d970();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a3f3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 140a3f3e6 FUN_140a3f3e6 body=212 status=ok
// SIG undefined FUN_140a3f3e6(void)

void FUN_140a3f3e6(undefined4 *param_1,longlong *param_2)

{
  void *_Src;
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0xb0))(param_2,&local_38);
  *(undefined8 *)(param_1 + 4) = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  (**(code **)(*param_2 + 0xb8))(param_2,&local_38);
  *(undefined8 *)(param_1 + 10) = local_28;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  (**(code **)(*param_2 + 200))(param_2,&local_38);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  param_1[0xc] = local_38;
  param_1[0xd] = uStack_34;
  param_1[0xe] = uStack_30;
  param_1[0xf] = uStack_2c;
  uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  param_1[0x12] = uVar1;
  _Src = (void *)(**(code **)(*param_2 + 0xa8))(param_2);
  memcpy(param_1 + 0x14,_Src,0x100);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3f4bc FUN_140a3f4bc body=997 status=ok
// SIG undefined FUN_140a3f4bc(void)

void FUN_140a3f4bc(longlong param_1,char param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float fVar18;
  undefined1 auStack_1d8 [43];
  undefined1 local_1ad;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined2 local_114;
  undefined1 local_112;
  undefined1 local_110 [160];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar12 = FUN_140a3f8a2(param_1,param_3[0x35]);
  if ((((uVar12 != 0xffffffff) && (-1 < (int)uVar12)) &&
      (*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)(int)uVar12 * 0x18) == '\0')) &&
     ((((int)uVar12 < *(int *)(param_1 + 0x40) &&
       (lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)uVar12 * 0x18),
       lVar14 != 0)) && ((*(char *)(lVar14 + 0x2d) != '\x01' || (param_2 != '\0')))))) {
    local_178._0_4_ = (undefined4)DAT_14c8464e0;
    local_178._4_4_ = DAT_14c8464e0._4_4_;
    uStack_170 = (undefined4)DAT_14c8464e8;
    uStack_16c = DAT_14c8464e8._4_4_;
    local_168 = DAT_14c8464f0;
    local_160 = (undefined4)DAT_14c8464e0;
    uStack_15c = DAT_14c8464e0._4_4_;
    uStack_158 = (undefined4)DAT_14c8464e8;
    uStack_154 = DAT_14c8464e8._4_4_;
    local_150 = DAT_14c8464f0;
    local_148 = (undefined4)DAT_14c8464e0;
    uStack_144 = DAT_14c8464e0._4_4_;
    uStack_140 = (undefined4)DAT_14c8464e8;
    uStack_13c = DAT_14c8464e8._4_4_;
    local_138 = DAT_14c8464f0;
    (**(code **)(*param_3 + 0xb0))(param_3,&local_178);
    (**(code **)(*param_3 + 0xb8))(param_3,&local_130);
    local_150 = local_120;
    local_160 = local_130;
    uStack_15c = uStack_12c;
    uStack_158 = uStack_128;
    uStack_154 = uStack_124;
    (**(code **)(*param_3 + 200))(param_3,&local_130);
    local_138 = local_120;
    local_148 = local_130;
    uStack_144 = uStack_12c;
    uStack_140 = uStack_128;
    uStack_13c = uStack_124;
    fVar18 = (float)(**(code **)(*param_3 + 0x148))(param_3);
    puVar13 = (uint *)(**(code **)(*param_3 + 0xa8))(param_3);
    uVar2 = *puVar13;
    uVar1 = puVar13[1];
    memcpy(local_110,puVar13 + 2,0x9c);
    uVar3 = puVar13[0x29];
    uVar10 = *(undefined8 *)(puVar13 + 0x2a);
    uVar4 = puVar13[0x2c];
    uVar5 = puVar13[0x2d];
    uVar6 = puVar13[0x2e];
    uVar7 = puVar13[0x2f];
    uVar8 = puVar13[0x30];
    uVar9 = puVar13[0x31];
    uVar11 = *(undefined8 *)(puVar13 + 0x32);
    local_184 = puVar13[0x34];
    local_1ad = (undefined1)puVar13[0x35];
    local_112 = *(undefined1 *)((longlong)puVar13 + 0xd7);
    local_114 = *(undefined2 *)((longlong)puVar13 + 0xd5);
    if (*(char *)(lVar14 + 0x2f) == '\x01') {
      pfVar17 = (float *)(lVar14 + 0x30);
    }
    else {
      pfVar17 = (float *)(*(longlong *)(param_1 + 0x28) + 0x18);
    }
    if (*pfVar17 <= fVar18) {
      local_188 = puVar13[0x36];
      local_18c = puVar13[0x37];
      local_190 = puVar13[0x38];
      local_194 = puVar13[0x39];
      local_180 = *(undefined8 *)(puVar13 + 0x3a);
      local_198 = puVar13[0x3c];
      local_19c = puVar13[0x3d];
      local_1a0 = puVar13[0x3e];
      local_1a4 = puVar13[0x3f];
      *(undefined1 *)(param_1 + 0x180) = 1;
      *(uint *)(param_1 + 0x178) = uVar12;
      puVar15 = &local_178;
      puVar16 = (undefined8 *)(param_1 + 0x188);
      for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar16 = puVar16 + 1;
      }
      *(float *)(param_1 + 0x1d0) = fVar18;
      *(ulonglong *)(param_1 + 0x1d4) = (ulonglong)uVar2 << 0x20;
      *(uint *)(param_1 + 0x1dc) = uVar1;
      local_1ac = uVar6;
      local_1a8 = uVar5;
      memcpy((void *)(param_1 + 0x1e0),local_110,0x9c);
      *(uint *)(param_1 + 0x27c) = uVar3;
      *(undefined8 *)(param_1 + 0x280) = uVar10;
      *(uint *)(param_1 + 0x288) = uVar4;
      *(uint *)(param_1 + 0x28c) = local_1a8;
      *(uint *)(param_1 + 0x290) = local_1ac;
      *(uint *)(param_1 + 0x294) = uVar7;
      *(uint *)(param_1 + 0x298) = uVar8;
      *(uint *)(param_1 + 0x29c) = uVar9;
      *(undefined8 *)(param_1 + 0x2a0) = uVar11;
      *(uint *)(param_1 + 0x2a8) = local_184;
      *(undefined1 *)(param_1 + 0x2ac) = local_1ad;
      *(undefined2 *)(param_1 + 0x2ad) = local_114;
      *(undefined1 *)(param_1 + 0x2af) = local_112;
      *(uint *)(param_1 + 0x2b0) = local_188;
      *(uint *)(param_1 + 0x2b4) = local_18c;
      *(uint *)(param_1 + 0x2b8) = local_190;
      *(uint *)(param_1 + 700) = local_194;
      *(undefined8 *)(param_1 + 0x2c0) = local_180;
      *(uint *)(param_1 + 0x2c8) = local_198;
      *(uint *)(param_1 + 0x2cc) = local_19c;
      *(uint *)(param_1 + 0x2d0) = local_1a0;
      *(uint *)(param_1 + 0x2d4) = local_1a4;
      *(undefined1 *)(param_1 + 0x181) = 1;
      *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
      FUN_140a3f3ac(param_1);
      FUN_1405badf6(param_1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3f8a2 FUN_140a3f8a2 body=495 status=ok
// SIG undefined FUN_140a3f8a2(void)

ulonglong FUN_140a3f8a2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c))) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    lVar10 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x128);
    }
    uVar12 = *(int *)(param_1 + 0x130) - 1;
    iVar13 = *(int *)(lVar10 + (ulonglong)
                               ((int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar11)
                                + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4) & uVar12) * 4);
    if (iVar13 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar13 * 0x14);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          iVar13 = (int)plVar1[1];
          if (iVar13 == -1) {
            return 0xffffffff;
          }
          if ((longlong)*(int *)(param_1 + 0x40) < 1) {
            return 0xffffffff;
          }
          iVar6 = 0x7fffffff;
          uVar5 = 0xffffffff;
          uVar9 = 0;
          goto LAB_140a3f99a;
        }
        iVar13 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar13 != -1);
    }
  }
  return 0xffffffff;
LAB_140a3f99a:
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + uVar9 * 0x18);
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x18), lVar3 != 0)) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar11 = (uint)lVar3 & 0xffff;
    iVar7 = *(int *)(lVar10 + (ulonglong)
                              ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar11) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4) & uVar12) * 4);
    while (iVar7 != -1) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar7 * 0x14);
      if (*plVar1 == lVar3) {
        if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
           (iVar7 = (int)plVar1[1], iVar7 != -1)) {
          if (iVar13 < iVar7) goto LAB_140a3fa2a;
          iVar8 = 0;
          iVar14 = iVar13;
          goto LAB_140a3fa5b;
        }
        break;
      }
      iVar7 = *(int *)((longlong)plVar1 + 0xc);
    }
  }
  goto LAB_140a3fa48;
  while( true ) {
    iVar14 = *(int *)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)iVar14 * 0xc);
    iVar8 = iVar8 + 1;
    if (iVar14 == -1) break;
LAB_140a3fa5b:
    if (iVar14 == iVar7) {
      if (iVar8 == 0) {
        return uVar9 & 0xffffffff;
      }
      goto LAB_140a3fa2f;
    }
  }
LAB_140a3fa2a:
  iVar8 = -1;
LAB_140a3fa2f:
  if ((0 < iVar8 & *(byte *)(lVar2 + 0x2c) & iVar8 < iVar6) != 0) {
    uVar5 = uVar9 & 0xffffffff;
    iVar6 = iVar8;
  }
LAB_140a3fa48:
  uVar9 = uVar9 + 1;
  if (uVar9 == (longlong)*(int *)(param_1 + 0x40)) {
    return uVar5;
  }
  goto LAB_140a3f99a;
}



// FUNCTION 140a3fa92 FUN_140a3fa92 body=1015 status=ok
// SIG undefined FUN_140a3fa92(void)

void FUN_140a3fa92(longlong param_1,char param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined4 uVar23;
  undefined1 auStack_1d8 [39];
  undefined1 local_1b1;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined2 local_154;
  undefined1 local_152;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((param_2 != '\0') ||
      (fVar22 = (float)(**(code **)(*param_3 + 0x140))(param_3,0), fVar22 <= 0.0)) ||
     ((*(byte *)(param_3 + 0x3a) & 0x20) != 0)) goto LAB_140a3fd7f;
  lVar16 = FUN_1405bbea6();
  lVar19 = *(longlong *)(lVar16 + 0x110);
  if (lVar19 == 0) {
    FUN_140aa6c08(lVar16);
    lVar19 = *(longlong *)(lVar16 + 0x110);
    if (lVar19 == 0) goto LAB_140a3fd7f;
  }
  lVar16 = *(longlong *)(lVar19 + 0x48);
  if (lVar16 == 0) {
    uVar18 = FUN_1405bb4b8();
    lVar16 = FUN_14477b664(uVar18);
    *(longlong *)(lVar19 + 0x48) = lVar16;
  }
  if (*(longlong *)(lVar19 + 0x50) == 0) {
    if ((lVar16 == 0) || (*(longlong *)(lVar19 + 0x40) == 0)) goto LAB_140a3fd7f;
    plVar5 = *(longlong **)(lVar16 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar14 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar14 == '\0')) {
      *(undefined8 *)(lVar19 + 0x50) = 0;
      goto LAB_140a3fd7f;
    }
    uVar18 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar16 = FUN_144aff482(uVar18,(longlong *)(lVar19 + 0x40));
    *(longlong *)(lVar19 + 0x50) = lVar16;
    if (lVar16 == 0) goto LAB_140a3fd7f;
  }
  iVar15 = FUN_140a3f8a2(param_1,param_3[0x35]);
  if ((iVar15 != -1) &&
     (*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)iVar15 * 0x18) != '\0')) {
    iVar15 = -1;
  }
  local_1a8._0_4_ = (undefined4)DAT_14c8464e0;
  local_1a8._4_4_ = DAT_14c8464e0._4_4_;
  uStack_1a0 = (undefined4)DAT_14c8464e8;
  uStack_19c = DAT_14c8464e8._4_4_;
  local_198 = DAT_14c8464f0;
  local_190 = (undefined4)DAT_14c8464e0;
  uStack_18c = DAT_14c8464e0._4_4_;
  uStack_188 = (undefined4)DAT_14c8464e8;
  uStack_184 = DAT_14c8464e8._4_4_;
  local_180 = DAT_14c8464f0;
  local_178 = (undefined4)DAT_14c8464e0;
  uStack_174 = DAT_14c8464e0._4_4_;
  uStack_170 = (undefined4)DAT_14c8464e8;
  uStack_16c = DAT_14c8464e8._4_4_;
  local_168 = DAT_14c8464f0;
  (**(code **)(*param_3 + 0xb0))(param_3,&local_1a8);
  (**(code **)(*param_3 + 0xb8))(param_3,&local_150);
  local_180 = local_140;
  local_190 = local_150;
  uStack_18c = uStack_14c;
  uStack_188 = uStack_148;
  uStack_184 = uStack_144;
  (**(code **)(*param_3 + 200))(param_3,&local_150);
  local_168 = local_140;
  local_178 = local_150;
  uStack_174 = uStack_14c;
  uStack_170 = uStack_148;
  uStack_16c = uStack_144;
  uVar23 = (**(code **)(*param_3 + 0x148))(param_3);
  puVar17 = (uint *)(**(code **)(*param_3 + 0xa8))(param_3);
  uVar2 = *puVar17;
  uVar1 = puVar17[1];
  memcpy(&local_150,puVar17 + 2,0x9c);
  uVar3 = puVar17[0x29];
  uVar18 = *(undefined8 *)(puVar17 + 0x2a);
  uVar6 = *(undefined8 *)(puVar17 + 0x2c);
  uVar7 = *(undefined8 *)(puVar17 + 0x2e);
  uVar8 = *(undefined8 *)(puVar17 + 0x30);
  uVar9 = *(undefined8 *)(puVar17 + 0x32);
  uVar4 = puVar17[0x34];
  local_1b1 = (undefined1)puVar17[0x35];
  local_154 = *(undefined2 *)((longlong)puVar17 + 0xd5);
  local_152 = *(undefined1 *)((longlong)puVar17 + 0xd7);
  uVar10 = *(undefined8 *)(puVar17 + 0x36);
  uVar11 = *(undefined8 *)(puVar17 + 0x38);
  local_1b0 = *(undefined8 *)(puVar17 + 0x3a);
  uVar12 = *(undefined8 *)(puVar17 + 0x3c);
  uVar13 = *(undefined8 *)(puVar17 + 0x3e);
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(int *)(param_1 + 0x178) = iVar15;
  puVar20 = &local_1a8;
  puVar21 = (undefined8 *)(param_1 + 0x188);
  for (lVar19 = 9; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar23;
  *(ulonglong *)(param_1 + 0x1d4) = (ulonglong)uVar2 << 0x20;
  *(uint *)(param_1 + 0x1dc) = uVar1;
  memcpy((void *)(param_1 + 0x1e0),&local_150,0x9c);
  *(uint *)(param_1 + 0x27c) = uVar3;
  *(undefined8 *)(param_1 + 0x280) = uVar18;
  *(undefined8 *)(param_1 + 0x288) = uVar6;
  *(undefined8 *)(param_1 + 0x290) = uVar7;
  *(undefined8 *)(param_1 + 0x298) = uVar8;
  *(undefined8 *)(param_1 + 0x2a0) = uVar9;
  *(uint *)(param_1 + 0x2a8) = uVar4;
  *(undefined1 *)(param_1 + 0x2ac) = local_1b1;
  *(undefined2 *)(param_1 + 0x2ad) = local_154;
  *(undefined1 *)(param_1 + 0x2af) = local_152;
  *(undefined8 *)(param_1 + 0x2b0) = uVar10;
  *(undefined8 *)(param_1 + 0x2b8) = uVar11;
  *(undefined8 *)(param_1 + 0x2c0) = local_1b0;
  *(undefined8 *)(param_1 + 0x2c8) = uVar12;
  *(undefined8 *)(param_1 + 0x2d0) = uVar13;
  *(undefined1 *)(param_1 + 0x181) = 1;
  *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
  FUN_140a3f3ac(param_1);
  FUN_1405badf6(param_1);
LAB_140a3fd7f:
  if ((local_b0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a3fe8a FUN_140a3fe8a body=69 status=ok
// SIG undefined FUN_140a3fe8a(void)

void FUN_140a3fe8a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1400bc96c(param_1 + 0x310,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a3fed6 FUN_140a3fed6 body=57 status=ok
// SIG undefined FUN_140a3fed6(void)

void FUN_140a3fed6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc13c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc13c8 = FUN_140002ddd(FUN_14661b778,uVar1,L"WeaponProjectileDef");
  }
  return;
}



// FUNCTION 140a3ff10 FUN_140a3ff10 body=111 status=ok
// SIG undefined FUN_140a3ff10(void)

void FUN_140a3ff10(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x700);
  FUN_140a3ff80(param_2);
  *param_2 = &PTR_FUN_14b318620;
  param_2[0xd9] = 0;
  *(undefined4 *)(param_2 + 0xda) = 0;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x6d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x6dc) = 0;
  param_2[0xdd] = 0;
  *(undefined4 *)(param_2 + 0xde) = 0;
  return;
}



// FUNCTION 140a3ff80 FUN_140a3ff80 body=1030 status=ok
// SIG undefined FUN_140a3ff80(void)

void FUN_140a3ff80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xaaad1010;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_14b14c820;
  *(undefined1 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[99] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 2;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x82] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x43480000;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0x4416000000000000;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x3e4ccccd;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x8f] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x5b5) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xbb) = 2;
  uVar1 = DAT_14c8463e8;
  param_1[0xbe] = DAT_14c8463e0;
  param_1[0xbf] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_1[0xbc] = DAT_14c8463d0;
  param_1[0xbd] = uVar1;
  param_1[0xc2] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0x41200000;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0x3f800000461c4000;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcf] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}



// FUNCTION 140a40386 FUN_140a40386 body=155 status=ok
// SIG undefined FUN_140a40386(void)

undefined1 *
FUN_140a40386(undefined1 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  bVar1 = *(byte *)((longlong)param_2 + 0xd);
  bVar2 = *(byte *)((longlong)param_2 + 0xf);
  local_40 = (ulonglong)CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(param_2 + 1)));
  uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined1 *)((longlong)param_2 + 0xe);
  uVar5 = FUN_1400e11ce(param_4,&local_48);
  *param_1 = uVar5;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = param_3;
  *(ushort *)(param_1 + 4) = (ushort)bVar1;
  *(ushort *)(param_1 + 6) = bVar2 & 1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a40422 FUN_140a40422 body=155 status=ok
// SIG undefined FUN_140a40422(void)

undefined1 *
FUN_140a40422(undefined1 *param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  bVar1 = *(byte *)((longlong)param_2 + 0xd);
  bVar2 = *(byte *)((longlong)param_2 + 0xf);
  local_40 = (ulonglong)CONCAT16(bVar2,(uint6)CONCAT14(bVar1,*(undefined4 *)(param_2 + 1)));
  uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined1 *)((longlong)param_2 + 0xe);
  uVar5 = FUN_1400e128e(param_4,&local_48);
  *param_1 = uVar5;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = param_3;
  *(ushort *)(param_1 + 4) = (ushort)bVar1;
  *(ushort *)(param_1 + 6) = bVar2 & 1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a404be FUN_140a404be body=88 status=ok
// SIG undefined FUN_140a404be(void)

void FUN_140a404be(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140a40516(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140a40516 FUN_140a40516 body=62 status=ok
// SIG undefined FUN_140a40516(void)

void FUN_140a40516(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_144760e21(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a40554 FUN_140a40554 body=841 status=ok
// SIG undefined FUN_140a40554(void)

void FUN_140a40554(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  uint uVar12;
  ulonglong unaff_RBP;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  char local_a8 [8];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88;
  int local_80 [2];
  undefined8 local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140a40ccc();
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_78 = 0;
  local_58 = 0;
  lVar14 = 0;
  local_50 = 0;
  local_48 = 0;
  lVar15 = *(longlong *)(param_1 + 0x40);
  if (lVar15 == 0) {
    local_a0 = 0;
  }
  else {
    if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_140a407b7:
      lVar14 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar15 + 0x48);
      lVar14 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar15 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_140a407b7;
        lVar14 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar15 + 0x118);
    local_a0 = param_1;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      bVar8 = false;
      local_98 = plVar13;
      goto LAB_140a40654;
    }
  }
  local_98 = (longlong *)0x0;
  bVar8 = true;
LAB_140a40654:
  plVar13 = local_98;
  local_80[0] = 0;
  local_a8[0] = '\x03';
  local_90._0_4_ = 0;
  if (lVar14 == 0) {
    uVar9 = 0;
    uVar4 = (uint)local_90;
  }
  else {
    uVar4 = *(uint *)(lVar14 + 0xc);
    local_90 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar9 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      unaff_RBP = (ulonglong)uVar12;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      unaff_RBP);
      }
      LOCK();
      uVar9 = *(uint *)(lVar15 + 0x10);
      bVar16 = uVar9 == 0;
      if (bVar16) {
        *(uint *)(lVar15 + 0x10) = uVar12;
        uVar9 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_90;
      if (bVar16) {
        uVar9 = uVar12;
      }
    }
  }
  local_90._0_4_ = uVar4;
  local_90 = CONCAT44(uVar9,(uint)local_90);
  local_88 = 2;
  if (local_80[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_80[0] + -1,1);
    local_80[0] = 0;
  }
  if (!bVar8) {
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  uVar3 = *(undefined1 *)(lVar5 + 0x460);
  uVar10 = FUN_140343d7a(param_1);
  local_c0 = &local_78;
  local_c8 = local_a8;
  local_b8 = 0;
  FUN_140a4089e(param_1 + 0x120,uVar10,lVar5 + 0x1e8,
                CONCAT71((int7)(unaff_RBP >> 8),uVar3) & 0xffffffff);
  FUN_1448173f8(local_80);
  if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_98 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar11 = (undefined8 ****)local_70[0];
    if (local_58 < 0x19) {
      ppppuVar11 = local_70;
    }
    (*pcVar6)(ppppuVar11);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a4089e FUN_140a4089e body=1069 status=ok
// SIG undefined FUN_140a4089e(void)

void FUN_140a4089e(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  char *param_5,longlong param_6,undefined1 param_7)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *_Src;
  longlong lVar12;
  bool bVar13;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar7 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar7 = iVar11;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar7;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x78) = param_4;
  _Src = (undefined8 *)(param_6 + 8);
  plVar9 = (longlong *)(param_1 + 0x88);
  bVar2 = *(byte *)(param_1 + 0xa8);
  if (bVar2 == *(byte *)(param_6 + 0x28)) {
    if (0x18 < *(ushort *)(param_6 + 0x20)) {
      _Src = *(undefined8 **)(param_6 + 8);
    }
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      plVar9 = (longlong *)*plVar9;
    }
    uVar8 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar6)(plVar9,_Src);
    }
  }
  else {
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar6 != (code *)0x0) {
      plVar10 = plVar9;
      if (0x18 < *(ushort *)(param_1 + 0xa0)) {
        plVar10 = (longlong *)*plVar9;
      }
      (*pcVar6)(plVar10);
    }
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      FUN_1400020a8(*plVar9);
    }
    bVar2 = *(byte *)(param_6 + 0x28);
    uVar4 = *(ushort *)(param_6 + 0x20);
    *(ushort *)(param_1 + 0xa0) = uVar4;
    plVar10 = plVar9;
    if (0x18 < uVar4) {
      plVar10 = (longlong *)FUN_14001cc68(uVar4,0);
      *plVar9 = (longlong)plVar10;
      _Src = (undefined8 *)*_Src;
    }
    uVar8 = (ulonglong)((uint)bVar2 * 0x120);
    pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8);
    if (pcVar6 == (code *)0x0) {
      memcpy(plVar10,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar6)(plVar10,_Src);
    }
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_6 + 0x28);
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_6 + 0x30);
  cVar3 = *(char *)(param_1 + 0xb8);
  if (cVar3 != '\0') {
    if (cVar3 == '\x03') {
      plVar9 = *(longlong **)(param_1 + 200);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    else if (cVar3 == '\x01') {
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  cVar3 = *param_5;
  *(char *)(param_1 + 0xb8) = cVar3;
  if (cVar3 == '\x01') {
    plVar9 = (longlong *)(param_5 + 8);
  }
  else {
    if (cVar3 == '\x02') {
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_5 + 8);
      goto LAB_140a409fa;
    }
    if (cVar3 != '\x03') goto LAB_140a409fa;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_5 + 8);
    lVar12 = *(longlong *)(param_5 + 0x10);
    *(longlong *)(param_1 + 200) = lVar12;
    if (lVar12 == 0) {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_5 + 0x18);
      *(char *)(param_1 + 0xd8) = param_5[0x20];
      goto LAB_140a409fa;
    }
    LOCK();
    *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_5 + 0x18);
    *(char *)(param_1 + 0xd8) = param_5[0x20];
    if (*(char *)(param_1 + 0xb8) != '\x01') goto LAB_140a409fa;
    plVar9 = (longlong *)(param_1 + 0xc0);
  }
  lVar12 = *plVar9;
  *(undefined1 *)(param_1 + 0xb8) = 2;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar12 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar12 + 0xc);
    *(uint *)(param_1 + 0xc0) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar7 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar7 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar11;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar7 = iVar11;
      }
    }
  }
  *(int *)(param_1 + 0xc4) = iVar7;
LAB_140a409fa:
  FUN_14495544a(param_1 + 0xe0,param_5 + 0x28);
  if ((*(byte *)(param_1 + 0x78) & 0xfe) == 2) {
    FUN_140a41730(param_1);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0xc70) = param_7;
    }
  }
  return;
}



// FUNCTION 140a40ccc FUN_140a40ccc body=694 status=ok
// SIG undefined FUN_140a40ccc(void)

void FUN_140a40ccc(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14066e964();
  lVar7 = FUN_140343d7a(param_1);
  if (lVar7 == 0) goto LAB_140a40df8;
  if (DAT_14cac9ca8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1478c0a72;
    local_60 = &LAB_1417b2375;
    local_68 = L"Engine";
    local_70 = 0x1000000000;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) ||
      (lVar7 = FUN_140a40fb0(lVar7), lVar7 == 0)) || (cVar5 = FUN_140532d9e(lVar7), cVar5 == '\0'))
  goto LAB_140a40df8;
  uVar2 = *(uint *)(lVar7 + 0xc);
  *(uint *)(param_1 + 0xfc) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  iVar6 = *(int *)(lVar10 + 0x10);
  if (*(int *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar9 = DAT_14c964868 + 1;
    bVar11 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar11) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar9);
    }
    LOCK();
    iVar6 = *(int *)(lVar10 + 0x10);
    bVar11 = iVar6 == 0;
    if (bVar11) {
      *(int *)(lVar10 + 0x10) = iVar9;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar11) {
      iVar6 = iVar9;
    }
  }
  *(int *)(param_1 + 0x100) = iVar6;
  uVar3 = *(undefined8 *)(lVar7 + 0x1518);
  puVar4 = *(undefined8 **)(lVar7 + 0x1520);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    plVar8 = *(longlong **)(param_1 + 0xf0);
    if (plVar8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
LAB_140a40e5d:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(undefined8 **)(param_1 + 0xf0) = puVar4;
    FUN_140a410fe(param_1,lVar7);
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a40df8;
  }
  else {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    if (*(undefined8 **)(param_1 + 0xf0) != puVar4) {
      LOCK();
      *(int *)((longlong)puVar4 + 0xc) = *(int *)((longlong)puVar4 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0xf0);
      if (plVar8 != (longlong *)0x0) goto LAB_140a40e5d;
      *(undefined8 **)(param_1 + 0xf0) = puVar4;
    }
    FUN_140a410fe(param_1,lVar7);
  }
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
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
LAB_140a40df8:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a40fb0 FUN_140a40fb0 body=102 status=ok
// SIG undefined FUN_140a40fb0(void)

void FUN_140a40fb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140a41018();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a41018 FUN_140a41018 body=228 status=ok
// SIG undefined FUN_140a41018(void)

longlong FUN_140a41018(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1ba48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140c3e862;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462ac6f0;
    local_38 = &LAB_147e31d97;
    local_40 = &LAB_14641d253;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1b70;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavCharacterMovementComponent",&DAT_14cb1ba48,FUN_14641d22c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ba48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a410fe FUN_140a410fe body=1405 status=ok
// SIG undefined FUN_140a410fe(void)

void FUN_140a410fe(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  int local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [200];
  longlong local_100;
  longlong local_70;
  longlong local_50;
  char local_3f;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)(param_1 + 0x48);
  FUN_140a416a4(local_1c8);
  (**(code **)(*param_2 + 0xc58))(param_2,local_1c8);
  plVar7 = (longlong *)param_2[0x29d];
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x900))(plVar7,local_1c8);
  }
  cVar4 = *(char *)(lVar6 + 0x1e0);
  if (cVar4 == local_3f) {
    lVar6 = param_2[0x2a5];
    if (((lVar6 == 0) || (lVar8 = param_2[0x2a6], lVar8 == 0)) || (*(int *)(lVar8 + 8) < 1)) {
      FUN_140d36434(param_2);
      lVar6 = param_2[0x2a5];
      lVar8 = param_2[0x2a6];
      if (lVar8 != 0) goto LAB_140a414ab;
      lVar8 = 0;
    }
    else {
LAB_140a414ab:
      LOCK();
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(param_1 + 0x110);
    *(longlong *)(param_1 + 0x108) = lVar6;
    *(longlong *)(param_1 + 0x110) = lVar8;
  }
  else {
    lVar6 = param_2[0x16];
    local_3f = cVar4;
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(param_2);
    }
    FUN_1405f96d0(&local_1d8,lVar6,local_1c8);
    plVar7 = local_1d0;
    if ((longlong *)(param_1 + 0x108) != &local_1d8) {
      *(longlong *)(param_1 + 0x108) = local_1d8;
      local_1d8 = 0;
      plVar3 = *(longlong **)(param_1 + 0x110);
      *(longlong **)(param_1 + 0x110) = local_1d0;
      local_1d0 = (longlong *)0x0;
      plVar7 = local_1d0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
          plVar7 = local_1d0;
        }
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x118) != 0) goto LAB_140a413a8;
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  FUN_1446efa72(&local_1e8,0,3,0x10);
  plVar7 = local_1e8;
  local_1e0 = 3;
  FUN_14045cb56(param_1,&local_1d8);
  plVar3 = local_1d0;
  if (local_1d0 == (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_LAB_14ac8adb0;
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
    plVar7[2] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_14ac8ad40;
    plVar7[3] = local_1d8;
    plVar7[4] = 0;
    plVar7[5] = (longlong)FUN_1405f9042;
  }
  else {
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
    UNLOCK();
    *plVar7 = (longlong)&PTR_LAB_14ac8adb0;
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
    plVar7[2] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_14ac8ad40;
    plVar7[3] = local_1d8;
    plVar7[4] = (longlong)local_1d0;
    LOCK();
    *(int *)((longlong)local_1d0 + 0xc) = *(int *)((longlong)local_1d0 + 0xc) + 1;
    UNLOCK();
    plVar7[5] = (longlong)FUN_1405f9042;
    LOCK();
    plVar7 = local_1d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar7 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (((local_1e0 == 0) || (local_1e8 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_1e8 + 0x30))(), cVar4 == '\0')) {
    if (local_1e0 == 0) {
      lVar6 = 0;
      goto LAB_140a41398;
    }
    if (local_1e8 != (longlong *)0x0) {
      lVar6 = 0;
      (**(code **)*local_1e8)(local_1e8,0);
      FUN_1446efa72(&local_1e8,0,0,0x10);
      goto LAB_140a4138b;
    }
    lVar6 = 0;
  }
  else {
    plVar7 = param_2 + 0x29a;
    if (*(int *)((longlong)param_2 + 0x14e4) < 1) {
      iVar2 = (int)param_2[0x29b];
      iVar5 = (int)param_2[0x29c] + -1;
      *(int *)(param_2 + 0x29c) = iVar5;
      if (iVar5 <= iVar2) {
        iVar5 = iVar2;
        if (0 < iVar2) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar7 + (longlong)iVar9 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar7,iVar9);
              FUN_14005b248(plVar7);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar5 = (int)param_2[0x29b];
          } while (iVar9 < iVar5);
        }
        iVar9 = 2;
        if (2 < iVar5 * 2) {
          iVar9 = iVar5 * 2;
        }
        *(int *)(param_2 + 0x29c) = iVar9;
        if ((iVar9 < iVar2) && (*(int *)((longlong)param_2 + 0x14dc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    lVar6 = 0;
    if ((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) {
      (**(code **)(*local_1e8 + 0x38))(local_1e8,&local_1d8);
      lVar6 = local_1d8;
    }
    iVar2 = (int)param_2[0x29b];
    *(uint *)(param_2 + 0x29b) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0x14dc) < iVar2 + 1U) {
      FUN_1447a71f6(plVar7,iVar2);
    }
    lVar8 = *plVar7;
    lVar10 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar8 + lVar10) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar10) = 0;
    *(longlong **)(lVar8 + lVar10) = local_1e8;
    local_1e8 = (longlong *)0x0;
    *(int *)(lVar8 + 8 + lVar10) = local_1e0;
LAB_140a4138b:
    local_1e0 = 0;
LAB_140a41398:
    if (local_1e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(longlong *)(param_1 + 0x118) = lVar6;
LAB_140a413a8:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a416a4 FUN_140a416a4 body=139 status=ok
// SIG undefined FUN_140a416a4(void)

longlong * FUN_140a416a4(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14477bcf0();
  *param_1 = lVar1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x800000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x800000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x8000000000;
  *(undefined2 *)(param_1 + 0x31) = 1;
  FUN_14038d256(param_1 + 1,*(undefined4 *)(lVar1 + 0x50),0x800000001);
  FUN_14038d304(param_1 + 0x1b,*(undefined4 *)(*param_1 + 0x78),1);
  return param_1;
}



// FUNCTION 140a41730 FUN_140a41730 body=1998 status=ok
// SIG undefined FUN_140a41730(void)

void FUN_140a41730(longlong param_1)

{
  int *piVar1;
  longlong **pplVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_140a41cb2:
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar9 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         ((((int)plVar11[2] != *(int *)(param_1 + 0x1c) ||
           ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (*plVar11 == 0)))) goto LAB_140a41cb2;
      uVar9 = FUN_1447210f0();
    }
  }
  FUN_1409e0c66(&local_90,uVar9);
  if (local_88 == (longlong *)0x0) goto LAB_140a41b5b;
  iVar7 = (int)local_88[1];
  do {
    if (iVar7 == 0) {
      plVar11 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar8 = (int)local_88[1];
    bVar17 = iVar7 == iVar8;
    if (bVar17) {
      *(int *)(local_88 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
    plVar11 = local_88;
  } while (!bVar17);
  LOCK();
  piVar1 = (int *)((longlong)local_88 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (plVar11 == (longlong *)0x0) goto LAB_140a41b5b;
  if (local_90 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_140a41cb9:
      uVar9 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar9 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar14 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar14 == (undefined8 *)0x0) ||
           ((*(int *)(puVar14 + 2) != *(int *)(param_1 + 0x1c) ||
            ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_140a41cb9;
        uVar9 = *puVar14;
      }
    }
    local_98 = 1;
    FUN_140a41f04(local_90,&local_90,uVar9,*(undefined8 *)(param_1 + 0x20));
    plVar4 = local_88;
    pplVar2 = (longlong **)(param_1 + 0xe8);
    if (pplVar2 != &local_90) {
      *(longlong **)(param_1 + 0xe8) = local_90;
      local_90 = (longlong *)0x0;
      plVar10 = *(longlong **)(param_1 + 0xf0);
      if (local_88 != plVar10) {
        local_88 = (longlong *)0x0;
        *(longlong **)(param_1 + 0xf0) = plVar4;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
    }
    plVar4 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_88 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    plVar4 = *pplVar2;
    if (plVar4 != (longlong *)0x0) {
      cVar6 = (char)plVar4[0x68];
      if (cVar6 != '\0') {
        if (cVar6 == '\x03') {
          plVar10 = (longlong *)plVar4[0x6a];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
        }
        else if (cVar6 == '\x01') {
          plVar4[0x69] = 0;
        }
        *(undefined1 *)(plVar4 + 0x68) = 0;
      }
      cVar6 = *(char *)(param_1 + 0xb8);
      *(char *)(plVar4 + 0x68) = cVar6;
      if (cVar6 == '\x01') {
        plVar10 = (longlong *)(param_1 + 0xc0);
LAB_140a41907:
        lVar16 = *plVar10;
        *(undefined1 *)(plVar4 + 0x68) = 2;
        plVar4[0x69] = 0;
        if (lVar16 == 0) {
          iVar7 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar16 + 0xc);
          *(uint *)(plVar4 + 0x69) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          iVar7 = *(int *)(lVar16 + 0x10);
          if (*(int *)(lVar16 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar7 = *(int *)(lVar16 + 0x10);
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(lVar16 + 0x10) = iVar8;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar7 = iVar8;
            }
          }
        }
        *(int *)((longlong)plVar4 + 0x34c) = iVar7;
      }
      else if (cVar6 == '\x02') {
        plVar4[0x69] = *(longlong *)(param_1 + 0xc0);
      }
      else if (cVar6 == '\x03') {
        plVar4[0x69] = *(longlong *)(param_1 + 0xc0);
        lVar16 = *(longlong *)(param_1 + 200);
        plVar4[0x6a] = lVar16;
        if (lVar16 == 0) {
          plVar4[0x6b] = *(longlong *)(param_1 + 0xd0);
          *(undefined1 *)(plVar4 + 0x6c) = *(undefined1 *)(param_1 + 0xd8);
        }
        else {
          LOCK();
          *(int *)(lVar16 + 0xc) = *(int *)(lVar16 + 0xc) + 1;
          UNLOCK();
          plVar4[0x6b] = *(longlong *)(param_1 + 0xd0);
          *(undefined1 *)(plVar4 + 0x6c) = *(undefined1 *)(param_1 + 0xd8);
          if ((char)plVar4[0x68] == '\x01') {
            plVar10 = plVar4 + 0x69;
            goto LAB_140a41907;
          }
        }
      }
      FUN_14495544a(plVar4 + 0x6d,param_1 + 0xe0);
      lVar16 = param_1 + 0x38;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar7 = 0;
      local_60 = lVar16;
      if (*(int *)(param_1 + 0x50) != 0) {
        FUN_1449c0562(&local_68);
        iVar7 = *(int *)(param_1 + 0x50);
      }
      local_78 = local_58;
      uVar9 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = (longlong *)local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      if ((local_78._4_4_ != iVar7) || (local_60 != lVar16)) {
        iVar8 = local_78._4_4_;
        local_90 = (longlong *)(param_1 + 0x28);
        local_78 = uVar9;
        do {
          do {
            puVar14 = (undefined8 *)(*local_90 + (longlong)iVar8 * 0x48);
            uVar9 = *puVar14;
            uVar3 = (uint)((ulonglong)uVar9 >> 0x10);
            uVar15 = (uint)uVar9 & 0xffff;
            uVar9 = FUN_145765d38(*pplVar2 + 0x48,
                                  ((uint)uVar9 << 0x10 | uVar15) + (int)((ulonglong)uVar9 >> 0x20) +
                                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar15 >> 4),
                                  *local_90 + (longlong)iVar8 * 0x48);
            FUN_144983130(uVar9,puVar14 + 1);
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar8 = local_78._4_4_;
          } while (local_78._4_4_ != iVar7);
        } while ((local_80 != lVar16) ||
                (uVar9 = local_78, local_90 != (longlong *)(param_1 + 0x28)));
      }
      local_78 = uVar9;
      plVar4 = *pplVar2;
      local_90 = (longlong *)0x0;
      local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
      FUN_1446efa72(&local_90,0,3,0x10);
      local_88 = (longlong *)CONCAT44(local_88._4_4_,3);
      *local_90 = (longlong)&PTR_LAB_14ac8b4c0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar16 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar16 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar16;
      local_90[2] = lVar12;
      *local_90 = (longlong)&PTR_FUN_14ac8acd0;
      local_90[3] = param_1;
      local_90[4] = (longlong)FUN_14094cf9e;
      iVar7 = 3;
      if (local_90 == (longlong *)0x0) {
LAB_140a41e27:
        if (iVar7 != 0) {
          if (local_90 == (longlong *)0x0) goto LAB_140a41b51;
          (**(code **)*local_90)(local_90,0);
          FUN_1446efa72(&local_90,0,0,0x10);
          goto LAB_140a41b3b;
        }
      }
      else {
        cVar6 = (**(code **)(*local_90 + 0x30))();
        if (cVar6 == '\0') {
          iVar7 = (int)local_88;
          goto LAB_140a41e27;
        }
        plVar10 = plVar4 + 0x26;
        if (*(int *)((longlong)plVar4 + 0x144) < 1) {
          iVar7 = (int)plVar4[0x27];
          iVar8 = (int)plVar4[0x28] + -1;
          *(int *)(plVar4 + 0x28) = iVar8;
          if (iVar8 <= iVar7) {
            iVar8 = iVar7;
            if (0 < iVar7) {
              iVar13 = 0;
              do {
                if (((*(int *)(*plVar10 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                    (plVar5 = *(longlong **)(*plVar10 + (longlong)iVar13 * 0x10),
                    plVar5 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar5 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar10,iVar13);
                  FUN_14005b248(plVar10);
                }
                else {
                  iVar13 = iVar13 + 1;
                }
                iVar8 = (int)plVar4[0x27];
              } while (iVar13 < iVar8);
            }
            iVar13 = 2;
            if (2 < iVar8 * 2) {
              iVar13 = iVar8 * 2;
            }
            *(int *)(plVar4 + 0x28) = iVar13;
            if ((iVar13 < iVar7) && (*(int *)((longlong)plVar4 + 0x13c) != iVar8)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)local_88 != 0) && (local_90 != (longlong *)0x0)) {
          (**(code **)(*local_90 + 0x38))(local_90,&local_68);
        }
        iVar7 = (int)plVar4[0x27];
        *(uint *)(plVar4 + 0x27) = iVar7 + 1U;
        if (*(uint *)((longlong)plVar4 + 0x13c) < iVar7 + 1U) {
          FUN_1447a71f6(plVar10,iVar7);
        }
        lVar16 = *plVar10;
        lVar12 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar16 + lVar12) = 0;
        *(undefined4 *)(lVar16 + 8 + lVar12) = 0;
        *(longlong **)(lVar16 + lVar12) = local_90;
        local_90 = (longlong *)0x0;
        *(int *)(lVar16 + 8 + lVar12) = (int)local_88;
LAB_140a41b3b:
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
      }
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140a41b51:
  LOCK();
  plVar4 = plVar11 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_140a41b5b:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a41f04 FUN_140a41f04 body=1557 status=ok
// SIG undefined FUN_140a41f04(void)

undefined8 *
FUN_140a41f04(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  ulonglong unaff_RBP;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  FUN_140cbbed7(&local_60);
  lVar15 = local_60;
  if ((local_60 == 0) || (cVar6 = FUN_140dbf4b8(param_4), cVar6 == '\0')) {
LAB_140a41fd0:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  local_64 = 0;
  local_68 = *(uint *)(lVar15 + 0xc);
  if ((int)local_68 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((local_68 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  uVar7 = *(uint *)(lVar15 + 0x10);
  if (uVar7 == 0) {
    LOCK();
    iVar8 = DAT_14c964868 + 1;
    UNLOCK();
    uVar12 = DAT_14c964868 + 1;
    unaff_RBP = (ulonglong)uVar12;
    bVar16 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar8;
    if (bVar16) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    unaff_RBP);
    }
    LOCK();
    uVar7 = *(uint *)(lVar15 + 0x10);
    bVar16 = uVar7 == 0;
    if (bVar16) {
      *(uint *)(lVar15 + 0x10) = uVar12;
      uVar7 = 0;
    }
    UNLOCK();
    if (bVar16) {
      uVar7 = uVar12;
    }
    local_64 = uVar7;
    if (uVar7 == 0) goto LAB_140a41fd0;
  }
  local_64 = uVar7;
  if (((((int)local_68 < 0) || (DAT_14c9647dc <= (int)local_68)) ||
      (lVar15 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8), lVar15 == 0)) ||
     ((*(uint *)(lVar15 + 0x10) != uVar7 || ((*(uint *)(lVar15 + 8) & 0x10200000) != 0))))
  goto LAB_140a41fd0;
  plVar10 = (longlong *)FUN_14001cc68(0xc88);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14ac8c7d0;
  plVar3 = plVar10 + 2;
  memset(plVar3,0,0xc78);
  FUN_143866f90(plVar3);
  local_58 = plVar3;
  local_50 = plVar10;
  FUN_143887b5a(&local_58,plVar3);
  plVar4 = local_50;
  *param_2 = plVar3;
  param_2[1] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  uVar2 = *param_2;
  FUN_1408f91ce(uVar2,&local_68,param_4,CONCAT71((int7)(unaff_RBP >> 8),param_5) & 0xffffffff);
  iVar8 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar8 + 1U) {
    FUN_1418162d8((longlong *)(param_1 + 0xb0),iVar8);
  }
  lVar5 = local_60;
  lVar15 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(lVar15 + (longlong)iVar8 * 0x10) = uVar2;
  lVar14 = param_2[1];
  *(longlong *)(lVar15 + 8 + (longlong)iVar8 * 0x10) = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  iVar8 = *(int *)(local_60 + 0x2d8);
  if ((longlong)iVar8 != 0) {
    lVar15 = *(longlong *)(local_60 + 0x2d0);
    lVar14 = 0;
    do {
      if (((*(int *)(lVar15 + 8 + lVar14) != 0) &&
          (plVar3 = *(longlong **)(lVar15 + lVar14), plVar3 != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar6 != '\0')) goto LAB_140a42358;
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar14);
  }
  local_58 = (longlong *)0x0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = (longlong *)CONCAT44(local_50._4_4_,4);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_140a423db:
    *local_58 = (longlong)&PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    local_58[2] = lVar14;
    *local_58 = (longlong)&PTR_FUN_14ac8c7f0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = (longlong)FUN_140cbb81e;
    *(undefined4 *)(local_58 + 6) = 0;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_140a423db;
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar16 = iVar8 == iVar9;
      if (bVar16) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar16);
    lVar15 = *(longlong *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_58 = (longlong)&PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_58[2] = lVar13;
    *local_58 = (longlong)&PTR_FUN_14ac8c7f0;
    local_58[3] = lVar15;
    local_58[4] = (longlong)plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_58[5] = (longlong)FUN_140cbb81e;
    *(undefined4 *)(local_58 + 6) = 0;
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
  if (((int)local_50 == 0) || (local_58 == (longlong *)0x0)) {
LAB_140a424aa:
    if ((int)local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140a42358;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140a42342;
    }
  }
  else {
    cVar6 = (**(code **)(*local_58 + 0x30))();
    if (cVar6 == '\0') {
      goto LAB_140a424aa;
    }
    plVar3 = (longlong *)(lVar5 + 0x2d0);
    if (*(int *)(lVar5 + 0x2e4) < 1) {
      iVar8 = *(int *)(lVar5 + 0x2d8);
      iVar9 = *(int *)(lVar5 + 0x2e0) + -1;
      *(int *)(lVar5 + 0x2e0) = iVar9;
      if (iVar9 <= iVar8) {
        iVar9 = iVar8;
        if (0 < iVar8) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar3 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar3 + (longlong)iVar11 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
              FUN_14005b288(plVar3,iVar11);
              FUN_14005b248(plVar3);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar9 = *(int *)(lVar5 + 0x2d8);
          } while (iVar11 < iVar9);
        }
        iVar11 = 2;
        if (2 < iVar9 * 2) {
          iVar11 = iVar9 * 2;
        }
        *(int *)(lVar5 + 0x2e0) = iVar11;
        if ((iVar11 < iVar8) && (*(int *)(lVar5 + 0x2dc) != iVar9)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar8 = *(int *)(lVar5 + 0x2d8);
    *(uint *)(lVar5 + 0x2d8) = iVar8 + 1U;
    if (*(uint *)(lVar5 + 0x2dc) < iVar8 + 1U) {
      FUN_1447a71f6(plVar3,iVar8);
    }
    lVar15 = *plVar3;
    lVar14 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar15 + lVar14) = 0;
    *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
    *(longlong **)(lVar15 + lVar14) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar15 + 8 + lVar14) = (int)local_50;
LAB_140a42342:
    local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140a42358:
  FUN_1418163e6(param_1 + 0x30,param_2);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4251a FUN_140a4251a body=376 status=ok
// SIG undefined FUN_140a4251a(void)

void FUN_140a4251a(longlong *param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  if (param_4 == '\0') goto LAB_140a42532;
  if (param_3 == '\0') {
LAB_140a425d0:
    lVar4 = 0x2e0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
    lVar4 = 0x2b8;
    if (iVar1 < 1) goto LAB_140a425d0;
  }
  iVar1 = (**(code **)(*param_1 + lVar4))(param_1);
  fVar5 = (float)param_2 / 100.0;
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  param_2 = -((int)ROUND(-0.5 - ((float)iVar1 * fVar5 + (float)iVar1 * fVar5)) >> 1);
LAB_140a42532:
  if ((param_3 == '\0') || (iVar1 = (**(code **)(*param_1 + 0x2b8))(param_1), iVar1 < 1)) {
    (**(code **)(*param_1 + 0x350))(param_1,param_2,1);
    if (param_2 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x2c0))(param_1);
      iVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if ((iVar2 < iVar1) && (iVar1 = (**(code **)(*param_1 + 0x2b8))(param_1), 0 < iVar1)) {
        iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
        lVar4 = param_1[0x20];
        *(int *)((longlong)param_1 + 0x11c) = iVar1;
        *(int *)(param_1 + 0x20) = iVar1;
        if ((int)lVar4 != iVar1) {
          FUN_140a429bc(param_1);
        }
        FUN_1447f69b6(param_1 + 8);
        return;
      }
    }
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x2e0))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
  iVar2 = iVar1 - iVar3;
  if (param_2 < iVar1 - iVar3) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a42597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,-iVar2,1);
  return;
}



// FUNCTION 140a42692 FUN_140a42692 body=712 status=ok
// SIG undefined FUN_140a42692(void)

void FUN_140a42692(longlong *param_1,int param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined *puVar7;
  uint *puVar8;
  longlong *plVar9;
  uint uVar10;
  
  cVar2 = (**(code **)(*param_1 + 0x308))();
  if (cVar2 != '\0') {
    param_2 = 0;
  }
  if (param_2 < 0) {
    iVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
    lVar6 = 0x2e0;
    if (0 < iVar3) {
      lVar6 = 0x2b8;
    }
    iVar5 = (**(code **)(*param_1 + lVar6))(param_1);
    iVar3 = (int)param_1[0x20];
    iVar4 = iVar3 - param_2;
    if (iVar5 <= iVar3 - param_2) {
      iVar4 = iVar5;
    }
    *(int *)((longlong)param_1 + 0x11c) = iVar4;
    *(int *)(param_1 + 0x20) = iVar4;
    if (iVar3 != iVar4) {
      FUN_140a429bc(param_1);
      iVar3 = (int)param_1[0x20];
    }
    if (*(int *)((longlong)param_1 + 0x10c) != iVar3) {
      *(int *)((longlong)param_1 + 0x10c) = iVar3;
      uVar1 = param_1[7];
      if (uVar1 < 0xffffffff00000000) {
        plVar9 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar9 = (longlong *)0x0;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar1,4);
      }
      else {
        uVar10 = (uint)uVar1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
          puVar7 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar7 = DAT_14c998080;
          }
          if ((*(uint *)(puVar7 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
            lVar6 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
            puVar8 = *(uint **)(lVar6 + 0x18);
            if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
              puVar8 = (uint *)(lVar6 + 8);
            }
            *puVar8 = *puVar8 | 0x10;
            *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
          }
        }
      }
    }
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x2e8))();
    iVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    lVar6 = param_1[0x20];
    iVar4 = (int)lVar6 - param_2;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    *(int *)((longlong)param_1 + 0x11c) = iVar3;
    *(int *)(param_1 + 0x20) = iVar3;
    if ((int)lVar6 != iVar3) {
      FUN_140a429bc(param_1);
    }
  }
  if (*(char *)(param_1[6] + 0x178) == '\x03') {
    cVar2 = (**(code **)(*param_1 + 0x2f8))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x350))(param_1,-param_2,0);
    }
    iVar4 = (**(code **)(*param_1 + 0x2e8))();
    iVar4 = iVar4 - (int)param_1[0x20];
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    if ((int)param_1[0x21] != iVar3) {
      *(int *)(param_1 + 0x21) = iVar3;
      uVar1 = param_1[7];
      if (uVar1 < 0xffffffff00000000) {
        plVar9 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar9 = (longlong *)0x0;
        }
        (**(code **)(*plVar9 + 0x58))(plVar9,param_1,uVar1,3);
      }
      else {
        uVar10 = (uint)uVar1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
          puVar7 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar7 = DAT_14c998080;
          }
          if ((*(uint *)(puVar7 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
            lVar6 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
            puVar8 = *(uint **)(lVar6 + 0x18);
            if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
              puVar8 = (uint *)(lVar6 + 8);
            }
            *puVar8 = *puVar8 | 8;
            *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
          }
        }
      }
    }
  }
  if (param_3 != '\0') {
    FUN_140a43498(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000140a4279b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3d0))(param_1,param_2);
  return;
}



// FUNCTION 140a4295a FUN_140a4295a body=26 status=ok
// SIG undefined FUN_140a4295a(void)

void FUN_140a4295a(undefined8 param_1)

{
  FUN_140a42afa();
  FUN_140a429bc(param_1);
  return;
}



// FUNCTION 140a42974 FUN_140a42974 body=72 status=ok
// SIG undefined FUN_140a42974(void)

ulonglong FUN_140a42974(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x111) & 2) == 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xb18) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xb20), plVar2 != (longlong *)0x0))
    {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))();
      cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      if (cVar1 != '\0') goto LAB_140a429b4;
    }
    uVar3 = 0;
  }
LAB_140a429b4:
  return uVar3 & 0xffffffff;
}



// FUNCTION 140a429bc FUN_140a429bc body=301 status=ok
// SIG undefined FUN_140a429bc(void)

void FUN_140a429bc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) &&
     (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a42afa FUN_140a42afa body=165 status=ok
// SIG undefined FUN_140a42afa(void)

void FUN_140a42afa(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((0 < param_2) && (*(int *)((longlong)param_1 + 0x94) != 0)) {
    if (0.0 < *(float *)(param_1 + 0x15)) {
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      *(float *)((longlong)param_1 + 0xdc) =
           (float)((double)*(float *)(param_1 + 0x15) + *(double *)(lVar2 + 0x6d0));
      FUN_140a42cb0(param_1,0);
    }
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      cVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
      if ((cVar1 != '\0') && ((*(byte *)(param_1 + 5) & 1) == 0)) {
        *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
        if (param_1[6] != 0) {
          FUN_140b8222c(param_1[6],param_1,1);
        }
      }
    }
  }
  FUN_1447f69b6(param_1 + 8);
  return;
}



// FUNCTION 140a42baa FUN_140a42baa body=158 status=ok
// SIG undefined FUN_140a42baa(void)

undefined8 FUN_140a42baa(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x390))();
  if (cVar1 != '\0') {
    if (*(int *)((longlong)param_1 + 0x94) == 2) {
      iVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (0 < iVar2) {
        iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
        iVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
        if ((iVar3 < iVar2) && (iVar2 = (**(code **)(*param_1 + 0x2d8))(param_1), 0 < iVar2)) {
LAB_140a42c43:
          return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
        }
      }
    }
    else if (*(int *)((longlong)param_1 + 0x94) == 1) {
      iVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
      iVar2 = (**(code **)(*param_1 + 0x2e0))(param_1);
      if (iVar3 < iVar2) goto LAB_140a42c43;
    }
  }
  FUN_140a42cb0(param_1,0);
  return 0;
}



// FUNCTION 140a42cb0 FUN_140a42cb0 body=154 status=ok
// SIG undefined FUN_140a42cb0(void)

void FUN_140a42cb0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x70) != param_2) {
    *(char *)(param_1 + 0x70) = param_2;
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar1 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x58) + 8 + lVar1) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar1) != 0)) {
          local_28 = 0;
          FUN_14485c47a(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
        }
        lVar1 = lVar1 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x60) * 0x10 != lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a42d60 FUN_140a42d60 body=522 status=ok
// SIG undefined FUN_140a42d60(void)

int FUN_140a42d60(longlong *param_1,int param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  
  if (*(char *)(param_1[6] + 0x178) == '\x03') {
    iVar2 = (**(code **)(*param_1 + 0x2e8))();
    if (((((*(int *)((longlong)param_1 + 0x13c) == 0) ||
          (uVar10 = *(uint *)(param_1 + 0x27), (int)uVar10 < 0)) || (DAT_14c9647dc <= (int)uVar10))
        || ((plVar8 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
            plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)((longlong)param_1 + 0x13c)))))
       || (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar5 = *plVar8, lVar5 == 0)))) {
      param_2 = param_2 + *(int *)((longlong)param_1 + 0x104);
      if (*(int *)((longlong)param_1 + 0xfc) <= param_2) {
        param_2 = *(int *)((longlong)param_1 + 0xfc);
      }
      iVar9 = 0;
      if (0 < param_2) {
        iVar9 = param_2;
      }
      *(int *)((longlong)param_1 + 0x104) = iVar9;
    }
    else {
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) | 2;
      FUN_140a42f6a(lVar5,CONCAT71((int7)((ulonglong)plVar8 >> 8),(char)param_1[0x22]),param_2,0);
      iVar9 = *(int *)(lVar5 + 0x2600 + (ulonglong)*(byte *)(param_1 + 0x22) * 0x40);
      *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xfd;
    }
    iVar3 = (**(code **)(*param_1 + 0x2e8))();
    iVar3 = iVar3 - (int)param_1[0x20];
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    if ((int)param_1[0x21] != iVar4) {
      *(int *)(param_1 + 0x21) = iVar4;
      uVar1 = param_1[7];
      if (uVar1 < 0xffffffff00000000) {
        plVar8 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar1,3);
      }
      else {
        uVar10 = (uint)uVar1;
        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
          puVar6 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar6 = DAT_14c998080;
          }
          if ((*(uint *)(puVar6 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0) {
            lVar5 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
            puVar7 = *(uint **)(lVar5 + 0x18);
            if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
              puVar7 = (uint *)(lVar5 + 8);
            }
            *puVar7 = *puVar7 | 8;
            *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
          }
        }
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
    if ((iVar4 != iVar2) && (FUN_140a429bc(param_1), param_3 != '\0')) {
      FUN_1447f69b6(param_1 + 8);
    }
  }
  else {
    iVar9 = 0;
  }
  return iVar9;
}



// FUNCTION 140a42f6a FUN_140a42f6a body=511 status=ok
// SIG undefined FUN_140a42f6a(void)

void FUN_140a42f6a(longlong *param_1,uint param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((char)param_1[0x2f] != '\x03') goto LAB_140a43061;
  uVar8 = (ulonglong)(param_2 & 0xff);
  uVar5 = (param_2 & 0xff) << 6;
  iVar1 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x2600);
  iVar7 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x2608);
  iVar3 = param_3 + iVar1;
  if (iVar7 <= param_3 + iVar1) {
    iVar3 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x2600) = iVar7;
  FUN_1401861f4((longlong)param_1 + (ulonglong)uVar5 + 0x25d0);
  iVar7 = *(int *)((longlong)param_1 + (ulonglong)uVar5 + 0x2600);
  lVar6 = param_1[0x73];
  if (lVar6 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464f5fc4;
      local_68 = &LAB_148c3dd26;
      local_70 = &LAB_1459673ba;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar6 = param_1[0x73];
      if (lVar6 == 0) goto LAB_140a43028;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      FUN_140a43188(lVar6,param_2);
    }
  }
LAB_140a43028:
  if (iVar7 != iVar1) {
    iVar7 = iVar7 - iVar1;
    cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if ((cVar4 == '\0') &&
       (*(undefined2 *)(param_1 + uVar8 + 0x4ea) =
             *(undefined2 *)((longlong)param_1 + (ulonglong)uVar5 + 0x2600),
       param_4 == '\x01' && 0 < iVar7)) {
      uVar5 = (uint)*(ushort *)((longlong)param_1 + uVar8 * 8 + 0x2754) + iVar7;
      *(ushort *)((longlong)param_1 + uVar8 * 8 + 0x2754) =
           ((short)uVar5 + 1) - (ushort)(uVar5 < 0x10000);
    }
    if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
  }
LAB_140a43061:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a43188 FUN_140a43188 body=783 status=ok
// SIG undefined FUN_140a43188(void)

void FUN_140a43188(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_140a432fb;
  lVar4 = FUN_1401b2ade();
  if (lVar4 == 0) {
LAB_140a4346d:
    lVar4 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_88;
      local_88 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140a4346d;
  }
  lVar4 = lVar4 + (ulonglong)param_2 * 0x40;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_78 = 2;
  if ((code **)(lVar4 + 0x25d0) == &local_88) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 2;
  }
  else {
    FUN_140704fa0(&local_88,(code **)(lVar4 + 0x25d0));
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 2;
    FUN_140704fa0(&local_70,lVar4 + 0x25e8);
  }
  local_58 = *(int *)(lVar4 + 0x2600);
  FUN_140704f3a(&local_54,lVar4 + 0x2604);
  if (local_58 < local_50) {
    uVar3 = ~(3 << (param_2 * '\x02' & 0x1f)) & *(uint *)(param_1 + 0x768);
    if (local_58 == 0) {
      uVar3 = uVar3 | 2 << (param_2 * '\x02' & 0x1f);
    }
  }
  else {
    uVar3 = ~(3 << ((byte)((uint)param_2 * 2) & 0x1f)) & *(uint *)(param_1 + 0x768) |
            1 << ((uint)param_2 * 2 & 0x1f);
  }
  *(uint *)(param_1 + 0x768) = uVar3;
  lVar4 = DAT_14c9a3d60;
  if (local_54 != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      lVar2 = (longlong)(local_54 + -1) * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar4 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,local_54 + -1,1);
    }
    local_54 = 0;
  }
  FUN_144760e21(local_70,uStack_68 & 0xffffffff);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140a432fb:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a43498 FUN_140a43498 body=230 status=ok
// SIG undefined FUN_140a43498(void)

void FUN_140a43498(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x30);
  if ((((char)plVar1[0x2f] == '\x03') && ((longlong *)plVar1[0x36] != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*(longlong *)plVar1[0x36] + 0x700))(), cVar2 == '\0')) {
    local_28[0] = 0xff;
    if (0 < (longlong)(int)plVar1[0x17e]) {
      lVar4 = 0;
      do {
        lVar5 = (longlong)*(int *)(plVar1[0x17d] + 0x50 + lVar4 * 0x88);
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(plVar1[0x17d] + 0x48 + lVar4 * 0x88) + lVar6) == param_1
               ) {
              local_28[0] = (undefined1)lVar4;
              goto LAB_140a43534;
            }
            lVar6 = lVar6 + 8;
          } while (lVar5 * 8 != lVar6);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != (int)plVar1[0x17e]);
    }
LAB_140a43534:
    local_24 = param_2;
    uVar3 = FUN_14477b072(plVar1,DAT_14cb937e8);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar3,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a43580 FUN_140a43580 body=171 status=ok
// SIG undefined FUN_140a43580(void)

void FUN_140a43580(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_140a43615;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140a43615:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140a4362c FUN_140a4362c body=183 status=ok
// SIG undefined FUN_140a4362c(void)

undefined8 FUN_140a4362c(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x180))();
  lVar3 = FUN_140a436e4(param_1 + 0x1b,uVar2);
  if (lVar3 == 0) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x2d) != '\x01') {
    return 0;
  }
  if (((longlong *)param_1[0x30] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x17c) != 0))
  {
    uVar1 = *(uint *)(param_1 + 0x2f);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140a436c2;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)((longlong)param_1 + 0x17c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(*(longlong *)param_1[0x30] + 0x18))();
      goto LAB_140a436c2;
    }
  }
  uVar2 = 0;
LAB_140a436c2:
  plVar4 = (longlong *)FUN_1409fe326(uVar2);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a436db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
  return uVar2;
}



// FUNCTION 140a436e4 FUN_140a436e4 body=318 status=ok
// SIG undefined FUN_140a436e4(void)

longlong FUN_140a436e4(int *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  
  if ((((param_2 != 0) && (lVar3 = FUN_140115352(param_2), lVar3 != 0)) &&
      (plVar1 = *(longlong **)(lVar3 + 0x48), plVar1 != (longlong *)0x0)) &&
     ((*param_1 != 0 && ((longlong)(int)plVar1[1] != 0)))) {
    piVar7 = (int *)(*plVar1 + 4);
    lVar3 = 0;
    do {
      if (*piVar7 == *param_1) {
        lVar3 = *plVar1 - lVar3;
        if (lVar3 != 0) {
          lVar6 = *(longlong *)(piVar7 + 0x41);
          if (lVar6 == 0) {
            uVar5 = FUN_14065b502();
            lVar6 = FUN_14477b664(uVar5);
            *(longlong *)(piVar7 + 0x41) = lVar6;
          }
          lVar4 = *(longlong *)(piVar7 + 0x43);
          if (lVar4 == 0) {
            if ((*(longlong *)(piVar7 + 0x3f) != 0) && (lVar6 != 0)) {
              plVar1 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                piVar7[0x43] = 0;
                piVar7[0x44] = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar6 = FUN_144aff482(uVar5,lVar3 + 0x100);
                *(longlong *)(piVar7 + 0x43) = lVar6;
                if (lVar6 != 0) {
                  return lVar6;
                }
              }
            }
            lVar4 = FUN_140317ef6(lVar3 + 0x20);
            if (lVar4 == 0) {
              lVar3 = FUN_14575395a();
              return lVar3;
            }
          }
          return lVar4;
        }
        break;
      }
      lVar3 = lVar3 + -0x118;
      piVar7 = piVar7 + 0x46;
    } while ((longlong)(int)plVar1[1] * -0x118 - lVar3 != 0);
  }
  lVar3 = FUN_140317ef6(param_1 + 0xc);
  return lVar3;
}



// FUNCTION 140a43822 FUN_140a43822 body=1841 status=ok
// SIG undefined FUN_140a43822(void)

void FUN_140a43822(double param_1,undefined8 param_2,double param_3,longlong param_4,
                  longlong *param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  code **ppcVar10;
  ulonglong *puVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  longlong **local_158;
  double local_150;
  code *local_148;
  longlong ***local_140;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  longlong *local_e0;
  ulonglong *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  longlong **local_a8;
  double local_a0;
  code **local_98;
  longlong **local_90;
  double local_88;
  longlong *local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar8 = *(longlong **)(param_4 + 8);
  iVar2 = FUN_1401abde8(plVar8,~(*(uint *)(param_4 + 0x18) ^ *(uint *)(param_4 + 0x1c) ^
                                *(uint *)(param_4 + 0x20)),(code *)(param_4 + 0x18));
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x20 + *plVar8, puVar4 = (undefined8 *)(lVar3 + 0x10),
     puVar4 == (undefined8 *)0x0 || lVar3 == 0)) {
    pplVar5 = (longlong **)FUN_14001cc68(0x30,0x10);
    *pplVar5 = (longlong *)&PTR_FUN_14b423ba0;
    pplVar5[1] = (longlong *)0x0;
    pplVar5[2] = (longlong *)0x0;
    pplVar5[3] = (longlong *)0x0;
    pplVar5[4] = (longlong *)0x0;
    pplVar5[5] = (longlong *)0x0;
    local_140 = &local_a8;
    local_148 = (code *)(param_4 + 0x18);
    local_a8 = pplVar5;
    FUN_1401ac3b6(*(undefined8 *)(param_4 + 8),&local_c8,&local_148,0);
    if (local_a8 != (longlong **)0x0) {
      (*(code *)**local_a8)(local_a8,1);
    }
  }
  else {
    pplVar5 = (longlong **)*puVar4;
  }
  local_c8 = *(undefined8 *)((longlong)param_1 + 0x10);
  uStack_c0 = *(undefined8 *)((longlong)param_1 + 0x18);
  local_b8 = *(undefined4 *)((longlong)param_3 + 0x10);
  local_150 = param_3;
  FUN_1401abe9c(param_5,&local_d8,&local_c8);
  if ((longlong)local_d0 != 0) {
    local_158 = pplVar5 + 1;
    puVar11 = local_d8;
    do {
      uVar1 = *puVar11;
      if (((((uVar1 >> 0x20 != 0) && (uVar6 = (uint)uVar1, -1 < (int)uVar6)) &&
           ((int)uVar6 < DAT_14c9647dc)) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(uVar1 >> 0x20))))) &&
         (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
          (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
        if (DAT_14cac9ca8 == 0) {
          local_148 = FUN_141030f22;
          local_160 = FUN_14081d0ea;
          local_168 = FUN_14081d0ea;
          local_170 = &local_148;
          local_178 = &LAB_1478c0a72;
          local_180 = &LAB_1417b2375;
          local_188 = L"Engine";
          local_190 = 0x1000000000;
          local_198 = 0x10000004;
          local_1a0 = 8;
          local_1a8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
            DAT_14cac9ca8 + 0x30)) {
          lVar3 = *(longlong *)((longlong)param_1 + 0x20);
          puVar4 = (undefined8 *)(lVar3 + 0x10);
          ppcVar10 = &local_148;
          local_e0 = plVar8;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *ppcVar10 = (code *)*puVar4;
            puVar4 = puVar4 + 1;
            ppcVar10 = ppcVar10 + 1;
          }
          if (*(char *)(lVar3 + 0x79) != '\0') {
            (**(code **)(*plVar8 + 0x520))(plVar8,&local_a8,0,0);
            lVar3 = *(longlong *)((longlong)param_1 + 0x20);
            if (*(char *)(lVar3 + 0x79) == '\x05') {
              dVar15 = ((double)local_90 - (double)local_a8) * 0.5;
              dVar14 = (local_88 - local_a0) * 0.5;
              dVar16 = ((double)local_80 - (double)local_98) * 0.5;
            }
            else {
              switch(*(char *)(lVar3 + 0x79)) {
              case '\x01':
                dVar17 = ((double)local_80 - (double)local_98) * 0.5;
                dVar16 = (local_88 - local_a0) * 0.5;
                dVar15 = ((double)local_90 - (double)local_a8) * 0.5;
                if (dVar15 <= dVar16) {
                  dVar15 = dVar16;
                }
                dVar14 = dVar15;
                dVar16 = dVar15;
                if (dVar15 <= dVar17) {
                  dVar15 = dVar17;
                  dVar14 = dVar17;
                  dVar16 = dVar17;
                }
                break;
              case '\x02':
                dVar17 = ((double)local_80 - (double)local_98) * 0.5;
                dVar16 = (local_88 - local_a0) * 0.5;
                dVar15 = ((double)local_90 - (double)local_a8) * 0.5;
                if (dVar16 <= dVar15) {
                  dVar15 = dVar16;
                }
                dVar14 = dVar15;
                dVar16 = dVar15;
                if (dVar17 <= dVar15) {
                  dVar15 = dVar17;
                  dVar14 = dVar17;
                  dVar16 = dVar17;
                }
                break;
              case '\x03':
                dVar17 = (local_88 - local_a0) * 0.5;
                dVar15 = ((double)local_90 - (double)local_a8) * 0.5;
                dVar14 = dVar15;
                dVar16 = dVar15;
                if (dVar15 <= dVar17) {
                  dVar15 = dVar17;
                  dVar14 = dVar17;
                  dVar16 = dVar17;
                }
                break;
              case '\x04':
                dVar15 = ((double)local_80 - (double)local_98) * 0.5;
                dVar14 = dVar15;
                dVar16 = dVar15;
                break;
              default:
                goto switchD_140a43e5a_default;
              }
            }
            local_f8 = dVar16 * local_f8;
            dStack_100 = dStack_100 * dVar14;
            local_108 = dVar15 * local_108;
            uStack_f0 = 0;
          }
switchD_140a43e5a_default:
          local_98 = &local_148;
          local_88 = local_150;
          local_80 = param_5;
          local_a8 = &local_e0;
          local_a0 = param_1;
          local_90 = pplVar5;
          if (((*(int *)((longlong)pplVar5 + 0xc) != 0 || *(int *)(pplVar5 + 1) != 0) ||
              *(int *)(pplVar5 + 2) != 0) || *(int *)((longlong)pplVar5 + 0x14) != 0) {
            (**(code **)(*param_5 + 0xf8))(param_5,local_158);
            lVar3 = 0;
            bVar13 = true;
            do {
              bVar12 = bVar13;
              plVar8 = (longlong *)FUN_14479d2ce(pplVar5 + lVar3 + 4);
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x420))(plVar8,0);
                pplVar5[lVar3 + 4] = (longlong *)0x0;
              }
              lVar3 = 1;
              bVar13 = false;
            } while (bVar12);
            lVar3 = *(longlong *)((longlong)param_1 + 0x20);
          }
          if (*(char *)(lVar3 + 0x78) != '\x01') {
            lVar3 = FUN_140a43f54(&local_a8,0,0);
            if (lVar3 == 0) {
              *(undefined4 *)(pplVar5 + 4) = 0;
              iVar2 = 0;
            }
            else {
              uVar6 = *(uint *)(lVar3 + 0xc);
              *(uint *)(pplVar5 + 4) = uVar6;
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar3 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar3 = 0;
              }
              iVar2 = *(int *)(lVar3 + 0x10);
              if (*(int *)(lVar3 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                iVar9 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar13) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                               );
                }
                LOCK();
                iVar2 = *(int *)(lVar3 + 0x10);
                bVar13 = iVar2 == 0;
                if (bVar13) {
                  *(int *)(lVar3 + 0x10) = iVar9;
                  iVar2 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar2 = iVar9;
                }
              }
            }
            *(int *)((longlong)pplVar5 + 0x24) = iVar2;
            if (*(char *)(*(longlong *)((longlong)param_1 + 0x20) + 0x78) == '\x02')
            goto LAB_140a43b7e;
          }
          lVar3 = FUN_140a43f54(&local_a8,1,1);
          if (lVar3 == 0) {
            *(undefined4 *)(pplVar5 + 5) = 0;
            iVar2 = 0;
          }
          else {
            uVar6 = *(uint *)(lVar3 + 0xc);
            *(uint *)(pplVar5 + 5) = uVar6;
            if ((int)uVar6 < DAT_14c9647dc) {
              lVar3 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
            }
            else {
              lVar3 = 0;
            }
            iVar2 = *(int *)(lVar3 + 0x10);
            if (*(int *)(lVar3 + 0x10) == 0) {
              LOCK();
              iVar2 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar2;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                             );
              }
              LOCK();
              iVar2 = *(int *)(lVar3 + 0x10);
              bVar13 = iVar2 == 0;
              if (bVar13) {
                *(int *)(lVar3 + 0x10) = iVar9;
                iVar2 = 0;
              }
              UNLOCK();
              if (bVar13) {
                iVar2 = iVar9;
              }
            }
          }
          *(int *)((longlong)pplVar5 + 0x2c) = iVar2;
        }
      }
LAB_140a43b7e:
      puVar11 = puVar11 + 1;
    } while (puVar11 != local_d8 + local_d0);
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a43f54 FUN_140a43f54 body=1298 status=ok
// SIG undefined FUN_140a43f54(void)

longlong FUN_140a43f54(undefined8 *param_1,uint param_2,byte param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  uint local_f8;
  ulonglong local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [24];
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar1 = param_1[1];
  lVar9 = FUN_144a545f2(*(undefined8 *)*param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x70))
  ;
  if (lVar9 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_d0 = &local_68;
      local_68 = FUN_144a7958c;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_142b47bc4;
      local_d8 = &LAB_1478989f1;
      local_e0 = &LAB_146391124;
      local_e8 = L"Engine";
      local_f0 = 0x10000000000;
      local_f8 = 0x10000005;
      local_100 = 0x10;
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30)) {
      lVar16 = 0;
      lVar10 = 0;
      if (param_3 != 0) goto LAB_140a43fe3;
    }
    else {
      lVar16 = lVar9;
      if ((param_3 != 0) && ((*(byte *)(lVar9 + 0x2e4) & 1) == 0)) goto LAB_140a43fe1;
    }
    puVar2 = (undefined8 *)param_1[2];
    local_68 = (code *)*puVar2;
    uStack_60 = puVar2[1];
    local_58 = *(undefined4 *)(puVar2 + 2);
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 0x14);
    uStack_50 = *(undefined4 *)(puVar2 + 3);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0x1c);
    FUN_1448052ee(&local_68,local_80);
    lVar10 = param_1[2];
    local_98 = *(undefined8 *)(lVar10 + 0x20);
    uStack_90 = *(undefined8 *)(lVar10 + 0x28);
    local_88 = *(undefined8 *)(lVar10 + 0x30);
    local_f0 = local_f0 & 0xffffffffffffff00;
    local_f8 = local_f8 & 0xffffff00;
    local_e8 = (wchar_t *)CONCAT71(local_e8._1_7_,1);
    local_100 = 0;
    local_108 = local_80;
    lVar10 = FUN_140a44468(**(undefined8 **)(lVar1 + 0x20),lVar9,
                           (*(undefined8 **)(lVar1 + 0x20))[0xe]);
    if (lVar10 != 0) {
      lVar9 = param_1[2];
      if (((9.999999747378752e-05 < ABS(*(double *)(lVar9 + 0x40) - DAT_14c846510)) ||
          (9.999999747378752e-05 < ABS(*(double *)(lVar9 + 0x48) - DAT_14c846518))) ||
         (9.999999747378752e-05 < ABS(*(double *)(lVar9 + 0x50) - DAT_14c846520))) {
        local_b8 = *(double *)(lVar9 + 0x40);
        dStack_b0 = *(double *)(lVar9 + 0x48);
        local_a8 = *(double *)(lVar9 + 0x50);
        FUN_14084f00a(lVar10);
      }
      uVar13 = *(uint *)(lVar10 + 0x2e4) & 0xfffffffa;
      *(uint *)(lVar10 + 0x2e4) = param_3 + uVar13 + 4;
      lVar9 = *(longlong *)(lVar1 + 0x20);
      bVar12 = *(byte *)(lVar9 + 0x7a);
      if ((lVar16 != 0) && ((bVar12 & 2) != 0)) {
        uVar14 = (ulonglong)CONCAT31((int3)(uVar13 >> 8),*(undefined1 *)(lVar16 + 0x2d5)) &
                 0xffffffffffffff02;
        FUN_140c0563c(lVar10,CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 1));
        FUN_140357fa8(lVar10,*(undefined4 *)(lVar16 + 0x5c8),0);
        *(byte *)(lVar10 + 0x4a) = *(byte *)(lVar10 + 0x4a) & 0xfe | *(byte *)(lVar16 + 0x4a) & 1;
        lVar9 = *(longlong *)(lVar1 + 0x20);
        bVar12 = *(byte *)(lVar9 + 0x7a);
      }
      if ((bVar12 & 1) != 0) {
        FUN_140c056bc(lVar10,1);
        lVar9 = *(longlong *)(lVar1 + 0x20);
      }
      if ((*(longlong *)(lVar9 + 0x7c) != 0) && (0 < *(int *)(lVar9 + 0x90))) {
        if (DAT_14cb39ca0 == 0) {
          local_68 = FUN_144a7958c;
          local_c0 = FUN_14081d0ea;
          local_c8 = (code *)&LAB_14638c6c0;
          local_d8 = &LAB_14811044c;
          local_e0 = &LAB_1407f5cf8;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10000004;
          local_100 = 0x10;
          local_108 = (undefined1 *)CONCAT44(local_108._4_4_,0x8e0);
          local_d0 = &local_68;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
        }
        if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x7c);
          uVar11 = FUN_140a45cc8();
          lVar9 = FUN_140584a5e(uVar11,lVar10,uVar4);
          if (lVar9 != 0) {
            lVar16 = *(longlong *)(lVar1 + 0x20);
            *(int *)(lVar9 + 0xfc) = *(int *)(lVar9 + 0xfc) + 1;
            FUN_1406fa324(lVar9 + 0xb0,lVar16 + 0x88);
          }
        }
      }
      lVar9 = param_1[3];
      uVar13 = *(uint *)(lVar10 + 0xc);
      *(uint *)(lVar9 + 0x20 + (ulonglong)param_2 * 8) = uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar8 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar8 = *(int *)(lVar16 + 0x10);
        bVar17 = iVar8 == 0;
        if (bVar17) {
          *(int *)(lVar16 + 0x10) = iVar15;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar8 = iVar15;
        }
      }
      *(int *)(lVar9 + 0x24 + (ulonglong)param_2 * 8) = iVar8;
      *(undefined8 *)(param_1[3] + 0x18) = *(undefined8 *)(lVar1 + 8);
      lVar1 = param_1[3];
      puVar3 = (undefined4 *)param_1[4];
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *(undefined4 *)(lVar1 + 8) = *puVar3;
      *(undefined4 *)(lVar1 + 0xc) = uVar5;
      *(undefined4 *)(lVar1 + 0x10) = uVar6;
      *(undefined4 *)(lVar1 + 0x14) = uVar7;
      (**(code **)(*(longlong *)param_1[5] + 0xf0))((longlong *)param_1[5],lVar10,param_1[4]);
      goto LAB_140a43fe3;
    }
  }
LAB_140a43fe1:
  lVar10 = 0;
LAB_140a43fe3:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 140a44468 FUN_140a44468 body=280 status=ok
// SIG undefined FUN_140a44468(void)

undefined8
FUN_140a44468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_48[0] = 0;
  local_48[1] = 0;
  local_d8 = &local_60;
  local_60 = 0x3ff0000000000000;
  local_58 = 0x3ff0000000000000;
  local_50 = 0x3ff0000000000000;
  local_78 = *param_5;
  uStack_70 = param_5[1];
  local_e0 = &local_78;
  local_68 = param_5[2];
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  uStack_8c = param_4[3];
  local_e8 = &local_98;
  local_88 = *(undefined8 *)(param_4 + 4);
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = param_9;
  local_c0 = param_8;
  local_c8 = param_7;
  local_d0 = param_6;
  uVar1 = FUN_140a44d48(local_98,local_48,param_2,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a44582 FUN_140a44582 body=342 status=ok
// SIG undefined FUN_140a44582(void)

void FUN_140a44582(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1475a01f8(param_2,0);
  }
  if (DAT_14cac7648 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_143242436;
    local_58 = &LAB_14789ef1f;
    local_60 = &LAB_1417b008f;
    local_68 = L"Engine";
    local_70 = 0x8000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_30 = DAT_14cac7648;
  if ((DAT_14cac7648 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_140a446da(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a446da FUN_140a446da body=719 status=ok
// SIG undefined FUN_140a446da(void)

void FUN_140a446da(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_140a44863:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_140a44745:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1475a04e2(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1475a0266(param_1,&local_40,param_4);
      }
      goto LAB_140a44783;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_140a44863;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140a44745;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140a449aa(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1475a062c(param_1,&local_50,param_4);
  }
LAB_140a44783:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a449aa FUN_140a449aa body=925 status=ok
// SIG undefined FUN_140a449aa(void)

void FUN_140a449aa(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong *local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar10 = (uint *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar8 = 1;
    uVar12 = 0;
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar7 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar7 = uVar2 - 1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_140a44bd8;
        iVar7 = iVar7 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar8 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar14 = 0xffffffff;
    local_58 = (ulonglong)uVar2;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar9 != 0) {
        lVar13 = *param_2;
        if ((lVar13 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar10;
          local_60 = param_2;
          FUN_1456cec3c(lVar13);
          puVar10 = local_68;
          param_2 = local_60;
LAB_140a44aae:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar10;
            local_60 = param_2;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar10 = local_68;
            param_2 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_140a44cf7;
          }
          if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140a44cf7;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar13 = 0;
          }
        }
        else {
          if (lVar13 != 0) goto LAB_140a44aae;
LAB_140a44cf7:
          lVar13 = 0;
        }
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          iVar11 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar11 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar11 + 1U) {
            local_68 = puVar10;
            local_60 = param_2;
            FUN_14024d3e4(param_3,iVar11);
            puVar10 = local_68;
            param_2 = local_60;
          }
          lVar13 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar13 = param_3;
          }
          *(longlong *)(lVar13 + (longlong)iVar11 * 8) = lVar9;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar10;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar11 = (int)uVar12;
      lVar9 = (longlong)iVar11;
      uVar3 = puVar4[lVar9] & uVar14;
      if (uVar3 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar11 < iVar5) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar9 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140a44ba4;
            }
            iVar7 = iVar7 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar6 - lVar9 != lVar13);
          uVar14 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        uVar3 = uVar2;
      }
      else {
LAB_140a44ba4:
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_58);
  }
LAB_140a44bd8:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a44d48 FUN_140a44d48 body=3966 status=ok
// SIG undefined FUN_140a44d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140a44d48(longlong param_1,double *param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 (*param_6) [16],double *param_7,int param_8,
             undefined1 param_9,undefined1 param_10,char param_11,char param_12,char param_13)

{
  int *piVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined *puVar21;
  uint *puVar22;
  double *pdVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  double dVar26;
  int iVar27;
  double *pdVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined8 *local_310;
  code *local_308;
  code *local_300;
  double *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_220;
  longlong lStack_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  int local_110;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((param_3 != (longlong *)0x0 && param_1 != 0) &&
     ((lVar16 = param_3[0x16], lVar16 != 0 || (lVar16 = FUN_1448abda6(param_3), lVar16 != 0)))) {
    if (DAT_14cac6e60 == 0) {
      local_310 = &local_138;
      local_138 = FUN_144a7958c;
      local_300 = FUN_14081d0ea;
      local_308 = FUN_142b47bc4;
      local_318 = &LAB_1478989f1;
      local_320 = &LAB_146391124;
      local_328 = L"Engine";
      local_330 = 0x10000000000;
      local_338 = 0x10000005;
      local_340 = 0x10;
      local_348 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    lVar17 = DAT_14cac6e60;
    if ((*(int *)(param_3[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (lVar17 = DAT_14cac6e60 + 0x30,
       *(longlong *)
        (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != lVar17)
       ) {
      plVar20 = (longlong *)param_3[0x15];
      local_2ec = (undefined4)CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
      local_2e8 = (longlong *)0x0;
      plVar19 = plVar20;
    }
    else {
      plVar20 = (longlong *)param_3[0x15];
      plVar19 = (longlong *)param_3[0xb8];
      if ((longlong *)param_3[0xb8] == (longlong *)0x0) {
        plVar19 = plVar20;
      }
      local_2ec = 0;
      local_2e8 = param_3;
    }
    local_2f8 = param_2;
    if (param_13 == '\0' || param_12 != '\x02') {
      if (param_13 != '\0') goto LAB_140a44ea1;
    }
    else {
      plVar18 = (longlong *)(**(code **)(*plVar19 + 0x5d0))(plVar19);
      if ((plVar18 != (longlong *)0x0) &&
         (cVar14 = (**(code **)(*plVar18 + 0x6c8))(plVar18), cVar14 == '\0')) {
LAB_140a44ea1:
        iVar15 = FUN_14490d72a(lVar16);
        if (iVar15 == 3) goto LAB_140a44dcd;
        local_2e0 = plVar20;
        FUN_140586e04(&local_1a8);
        dVar26 = local_1a8;
        if (local_1a8 != 0.0) {
          FUN_1400bbfc4(&local_138,param_1);
          *(undefined4 *)((longlong)dVar26 + 0x18) = (undefined4)local_138;
          *(undefined4 *)((longlong)dVar26 + 0x1c) = local_138._4_4_;
          *(undefined4 *)((longlong)dVar26 + 0x20) = uStack_130;
          *(undefined4 *)((longlong)dVar26 + 0x24) = uStack_12c;
          if ((undefined8 *)((longlong)dVar26 + 0x18) == &local_138) {
            if (local_128 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)((longlong)dVar26 + 0x28) != 0) {
              FUN_1400020a8();
            }
            *(longlong **)((longlong)dVar26 + 0x28) = local_128;
            local_128 = (longlong *)0x0;
            *(undefined4 *)((longlong)dVar26 + 0x30) = local_120;
            *(undefined4 *)((longlong)dVar26 + 0x34) = local_11c;
          }
          cVar14 = (*(code *)PTR_FUN_14c758760)();
          uVar30 = *(uint *)(param_1 + 0xc);
          if (cVar14 == '\0') {
LAB_140a44fcf:
            *(uint *)((longlong)dVar26 + 0x10) = uVar30;
            if ((int)uVar30 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
            }
            else {
              lVar17 = 0;
            }
            iVar15 = *(int *)(lVar17 + 0x10);
            if (*(int *)(lVar17 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar27 = DAT_14c964868 + 1;
              bVar32 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar32) {
                local_2f0 = iVar27;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar27);
                iVar27 = local_2f0;
              }
              LOCK();
              iVar15 = *(int *)(lVar17 + 0x10);
              bVar32 = iVar15 == 0;
              if (bVar32) {
                *(int *)(lVar17 + 0x10) = iVar27;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar32) {
                iVar15 = iVar27;
              }
            }
            *(int *)((longlong)dVar26 + 0x14) = iVar15;
            dVar26 = local_1a8;
          }
          else {
            if ((int)uVar30 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
            }
            else {
              lVar17 = 0;
            }
            if ((*(uint *)(lVar17 + 8) & 0x8400000) == 0) goto LAB_140a44fcf;
            *(undefined8 *)((longlong)dVar26 + 0x10) = 0;
          }
          uVar25 = *param_5;
          uVar13 = param_5[1];
          *(undefined8 *)((longlong)dVar26 + 0x48) = param_5[2];
          *(undefined8 *)((longlong)dVar26 + 0x38) = uVar25;
          *(undefined8 *)((longlong)dVar26 + 0x40) = uVar13;
          uVar25 = *(undefined8 *)(*param_6 + 8);
          *(undefined8 *)((longlong)dVar26 + 0x50) = *(undefined8 *)*param_6;
          *(undefined8 *)((longlong)dVar26 + 0x58) = uVar25;
          *(undefined8 *)((longlong)dVar26 + 0x60) = *(undefined8 *)param_6[1];
          uVar10 = *(undefined4 *)((longlong)param_7 + 4);
          uVar11 = *(undefined4 *)(param_7 + 1);
          uVar12 = *(undefined4 *)((longlong)param_7 + 0xc);
          *(undefined4 *)((longlong)dVar26 + 0x68) = *(undefined4 *)param_7;
          *(undefined4 *)((longlong)dVar26 + 0x6c) = uVar10;
          *(undefined4 *)((longlong)dVar26 + 0x70) = uVar11;
          *(undefined4 *)((longlong)dVar26 + 0x74) = uVar12;
          *(double *)((longlong)dVar26 + 0x78) = param_7[2];
          FUN_14065c7a4((longlong)dVar26 + 0x80,local_2f8);
          *(bool *)((longlong)dVar26 + 0xac) = param_12 == '\x01';
          *(bool *)((longlong)dVar26 + 0xad) = param_12 == '\x02';
          *(bool *)((longlong)dVar26 + 9) = param_13 == '\x02';
          uVar30 = *(uint *)((longlong)param_3 + 0xc);
          *(uint *)((longlong)dVar26 + 0x98) = uVar30;
          if ((int)uVar30 < DAT_14c9647dc) {
            lVar17 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
          }
          else {
            lVar17 = 0;
          }
          iVar15 = *(int *)(lVar17 + 0x10);
          if (*(int *)(lVar17 + 0x10) == 0) {
            LOCK();
            iVar15 = DAT_14c964868 + 1;
            UNLOCK();
            iVar27 = DAT_14c964868 + 1;
            bVar32 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar15;
            if (bVar32) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar27);
            }
            LOCK();
            iVar15 = *(int *)(lVar17 + 0x10);
            bVar32 = iVar15 == 0;
            if (bVar32) {
              *(int *)(lVar17 + 0x10) = iVar27;
              iVar15 = 0;
            }
            UNLOCK();
            if (bVar32) {
              iVar15 = iVar27;
            }
          }
          dVar4 = local_1a8;
          *(int *)((longlong)dVar26 + 0x9c) = iVar15;
          *(undefined8 *)((longlong)local_1a8 + 0xa0) = param_4;
          *(int *)((longlong)local_1a8 + 0xa8) = param_8;
          if ((param_12 == '\0') || (plVar19 == (longlong *)0x0)) {
            *(undefined4 *)((longlong)local_1a8 + 0x90) = 0;
            iVar15 = 0;
          }
          else {
            uVar30 = *(uint *)((longlong)plVar19 + 0xc);
            *(uint *)((longlong)local_1a8 + 0x90) = uVar30;
            if ((int)uVar30 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
            }
            else {
              lVar17 = 0;
            }
            iVar15 = *(int *)(lVar17 + 0x10);
            if (*(int *)(lVar17 + 0x10) == 0) {
              LOCK();
              iVar15 = DAT_14c964868 + 1;
              UNLOCK();
              iVar27 = DAT_14c964868 + 1;
              bVar32 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar15;
              if (bVar32) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar27);
              }
              LOCK();
              iVar15 = *(int *)(lVar17 + 0x10);
              bVar32 = iVar15 == 0;
              if (bVar32) {
                *(int *)(lVar17 + 0x10) = iVar27;
                iVar15 = 0;
              }
              UNLOCK();
              if (bVar32) {
                iVar15 = iVar27;
              }
            }
          }
          *(int *)((longlong)dVar4 + 0x94) = iVar15;
          local_148 = local_1a8;
          local_140 = plStack_1a0;
          if (plStack_1a0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
            UNLOCK();
          }
          FUN_140586e9a(lVar16,&local_148);
        }
        plVar19 = plStack_1a0;
        plVar20 = local_2e0;
        if (plStack_1a0 != (longlong *)0x0) {
          LOCK();
          plVar18 = plStack_1a0 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
      }
    }
    local_348 = CONCAT31(local_348._1_3_,param_10);
    plVar19 = (longlong *)FUN_140584045(param_1,lVar16,plVar20,param_9);
    if (plVar19 != (longlong *)0x0) {
      if ((*(byte *)((longlong)plVar19 + 0x9c) & 1) == 0) {
        FUN_140486fc4(plVar19,param_3,param_4);
      }
      else {
        (**(code **)(*plVar19 + 0x490))(plVar19,param_3,&DAT_14cadad98,param_4);
      }
      if (param_8 == 1) {
        (**(code **)(*param_3 + 0x4a8))(param_3,&local_138,param_4,0);
        auVar2 = *param_6;
        auVar33 = divpd(auVar2,_DAT_1499387d0);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = *(double *)param_6[1];
        auVar34 = divpd(auVar34,_DAT_1499387d0);
        auVar33 = roundpd(auVar33,auVar33,3);
        auVar34 = roundpd(auVar34,auVar34,3);
        dVar8 = (auVar2._0_8_ - auVar33._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar9 = (auVar2._8_8_ - auVar33._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar6 = (*(double *)param_6[1] - auVar34._0_8_ * (double)DAT_1499387d0) *
                0.008726646259971648;
        dVar7 = (0.0 - auVar34._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar26 = sin(dVar8);
        dVar4 = sin(dVar9);
        dVar5 = sin(dVar6);
        sin(dVar7);
        dVar8 = cos(dVar8);
        dVar9 = cos(dVar9);
        dVar6 = cos(dVar6);
        cos(dVar7);
        dVar7 = dVar4 * dVar26 * dVar5 + dVar9 * dVar8 * dVar6;
        local_1a8 = dVar26 * dVar4 * dVar6 - dVar8 * dVar9 * dVar5;
        plStack_1a0 = (longlong *)(-(dVar26 * dVar9 * dVar6) - dVar8 * dVar4 * dVar5);
        local_198._8_4_ = SUB84(dVar7,0);
        local_198._0_8_ = -(dVar9 * dVar26 * dVar5) + dVar4 * dVar8 * dVar6;
        local_198._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_188 = *param_5;
        uStack_180 = param_5[1];
        local_178 = param_5[2];
        uStack_170 = 0;
        local_168 = *(undefined4 *)param_7;
        uStack_164 = *(undefined4 *)((longlong)param_7 + 4);
        uStack_160 = *(undefined4 *)(param_7 + 1);
        uStack_15c = *(undefined4 *)((longlong)param_7 + 0xc);
        local_158 = param_7[2];
        uStack_150 = 0;
        FUN_1449437a2(&local_1a8,&local_208,&local_138);
        uVar24 = plVar19[7];
        if (uVar24 < 0xffffffff00000000) {
          plVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar18 + 0x58))(plVar18,plVar19,uVar24,5);
        }
        else {
          uVar30 = (uint)uVar24;
          if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c998088)) {
            puVar21 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar21 = DAT_14c998080;
            }
            if ((*(uint *)(puVar21 + ((uint)(uVar24 >> 3) & 0xffffffc)) >> (uVar30 & 0x1f) & 1) != 0
               ) {
              lVar17 = DAT_14c998060 + (ulonglong)(uVar30 & 0x7fffffff) * 0x68;
              puVar22 = *(uint **)(lVar17 + 0x18);
              if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
                puVar22 = (uint *)(lVar17 + 8);
              }
              *puVar22 = *puVar22 | 0x20;
              *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
            }
          }
        }
        pdVar28 = local_2f8;
        plVar19[0x33] = local_1e8;
        plVar19[0x34] = lStack_1e0;
        plVar19[0x35] = local_1d8;
        local_248 = local_208;
        uStack_244 = uStack_204;
        uStack_240 = uStack_200;
        uStack_23c = uStack_1fc;
        local_238 = local_1f8;
        uStack_230 = uStack_1f0;
        FUN_1448052ee(&local_248,&local_220);
        uVar24 = plVar19[7];
        if (uVar24 < 0xffffffff00000000) {
          plVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar18 + 0x58))(plVar18,plVar19,uVar24,6);
          pdVar28 = local_2f8;
        }
        else {
          uVar30 = (uint)uVar24;
          if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c998088)) {
            puVar21 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar21 = DAT_14c998080;
            }
            if ((*(uint *)(puVar21 + ((uint)(uVar24 >> 3) & 0xffffffc)) >> (uVar30 & 0x1f) & 1) != 0
               ) {
              lVar17 = DAT_14c998060 + (ulonglong)(uVar30 & 0x7fffffff) * 0x68;
              puVar22 = *(uint **)(lVar17 + 0x18);
              if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
                puVar22 = (uint *)(lVar17 + 8);
              }
              *puVar22 = *puVar22 | 0x40;
              *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
            }
          }
        }
        plVar19[0x38] = local_210;
        plVar19[0x36] = local_220;
        plVar19[0x37] = lStack_218;
        pdVar23 = &local_268;
        local_268 = local_1c8;
        uStack_260 = uStack_1c0;
        local_258 = local_1b8;
        FUN_14084f00a(plVar19);
      }
      else {
        local_278 = param_5[2];
        local_288 = *(undefined4 *)param_5;
        uStack_284 = *(undefined4 *)((longlong)param_5 + 4);
        uStack_280 = *(undefined4 *)(param_5 + 1);
        uStack_27c = *(undefined4 *)((longlong)param_5 + 0xc);
        uVar24 = plVar19[7];
        if (uVar24 < 0xffffffff00000000) {
          plVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar18 + 0x58))(local_288,plVar19,uVar24,5);
        }
        else {
          uVar30 = (uint)uVar24;
          if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c998088)) {
            puVar21 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar21 = DAT_14c998080;
            }
            if ((*(uint *)(puVar21 + ((uint)(uVar24 >> 3) & 0xffffffc)) >> (uVar30 & 0x1f) & 1) != 0
               ) {
              lVar17 = DAT_14c998060 + (ulonglong)(uVar30 & 0x7fffffff) * 0x68;
              puVar22 = *(uint **)(lVar17 + 0x18);
              if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
                puVar22 = (uint *)(lVar17 + 8);
              }
              *puVar22 = *puVar22 | 0x20;
              *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
            }
          }
        }
        plVar19[0x35] = local_278;
        plVar19[0x33] = CONCAT44(uStack_284,local_288);
        plVar19[0x34] = CONCAT44(uStack_27c,uStack_280);
        local_298 = *(longlong *)param_6[1];
        local_2a8 = *(undefined4 *)*param_6;
        uStack_2a4 = *(undefined4 *)(*param_6 + 4);
        uStack_2a0 = *(undefined4 *)(*param_6 + 8);
        uStack_29c = *(undefined4 *)(*param_6 + 0xc);
        uVar24 = plVar19[7];
        if (uVar24 < 0xffffffff00000000) {
          plVar18 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar18 + 0x58))(local_2a8,plVar19,uVar24,6);
        }
        else {
          uVar30 = (uint)uVar24;
          if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c998088)) {
            puVar21 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar21 = DAT_14c998080;
            }
            if ((*(uint *)(puVar21 + ((uint)(uVar24 >> 3) & 0xffffffc)) >> (uVar30 & 0x1f) & 1) != 0
               ) {
              lVar17 = DAT_14c998060 + (ulonglong)(uVar30 & 0x7fffffff) * 0x68;
              puVar22 = *(uint **)(lVar17 + 0x18);
              if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
                puVar22 = (uint *)(lVar17 + 8);
              }
              *puVar22 = *puVar22 | 0x40;
              *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
            }
          }
        }
        plVar19[0x38] = local_298;
        *(undefined4 *)(plVar19 + 0x36) = local_2a8;
        *(undefined4 *)((longlong)plVar19 + 0x1b4) = uStack_2a4;
        *(undefined4 *)(plVar19 + 0x37) = uStack_2a0;
        *(undefined4 *)((longlong)plVar19 + 0x1bc) = uStack_29c;
        if (param_8 == 2) {
          (**(code **)(*param_3 + 0x4a8))(param_3,&local_138,param_4,0);
          local_2b0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8)) &
                              (ulonglong)(1.0 / local_e8)) * param_7[2];
          local_2b8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_f0)) &
                              (ulonglong)(1.0 / dStack_f0)) * param_7[1];
          local_2c0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_f8)) &
                              (ulonglong)(1.0 / local_f8)) * *param_7;
          pdVar23 = &local_2c0;
        }
        else {
          local_2c8 = param_7[2];
          pdVar23 = (double *)&local_2d8;
          local_2d8 = *(undefined4 *)param_7;
          uStack_2d4 = *(undefined4 *)((longlong)param_7 + 4);
          uStack_2d0 = *(undefined4 *)(param_7 + 1);
          uStack_2cc = *(undefined4 *)((longlong)param_7 + 0xc);
        }
        FUN_14084f00a(plVar19);
        pdVar28 = local_2f8;
      }
      plVar18 = local_2e8;
      if ((char)local_2ec == '\0') {
        lVar17 = 0xa8;
        if (param_12 == '\0') {
          uVar24 = CONCAT71((int7)((ulonglong)pdVar23 >> 8),
                            *(undefined1 *)((longlong)local_2e8 + 0x2d5)) & 0xffffffffffffff02;
          uVar25 = CONCAT71((int7)(uVar24 >> 8),(byte)uVar24 >> 1);
          FUN_140c0563c(plVar19,uVar25);
          uVar24 = CONCAT71((int7)((ulonglong)uVar25 >> 8),
                            *(undefined1 *)((longlong)plVar18 + 0x2d5)) & 0xffffffffffffff04;
          FUN_140c056bc(plVar19,CONCAT71((int7)(uVar24 >> 8),(byte)uVar24 >> 2));
          FUN_140357fa8(plVar19,(int)plVar18[0xb9],0);
          lVar17 = 0x5c0;
        }
        plVar18 = local_2e8;
        uVar25 = *(undefined8 *)((longlong)local_2e8 + lVar17);
        FUN_140e996a4(plVar19,uVar25);
        FUN_140c0573e(plVar19,CONCAT71((int7)((ulonglong)uVar25 >> 8),
                                       *(undefined1 *)((longlong)plVar18 + 0x2e4)) &
                              0xffffffffffffff01);
      }
      if (param_12 == '\x02') {
        FUN_140c056bc(plVar19,1);
      }
      else if (param_12 == '\x01') {
        FUN_140c0563c(plVar19,1);
      }
      if (*(int *)(pdVar28 + 1) != 0) {
        local_138 = (code *)((ulonglong)local_138 & 0xffffffffffffff00);
        local_110 = 0;
        FUN_1456bb102(&local_138,plVar20);
        local_1a8 = *pdVar28;
        plStack_1a0 = (longlong *)CONCAT44(plStack_1a0._4_4_,*(undefined4 *)(pdVar28 + 1));
        FUN_140e99737(plVar19,&local_1a8,&local_138);
        lVar17 = DAT_14c9a3da0;
        if ((longlong)local_110 != 0) {
          lVar29 = (longlong)local_110 + -1;
          lVar31 = lVar29 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar31),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar31));
          if (*(longlong *)(lVar17 + lVar31) != 0) {
            FUN_1400020a8();
          }
          lVar17 = DAT_14c9a3da0;
          iVar15 = (int)lVar29;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar15;
          }
          *(undefined4 *)(lVar17 + lVar31) = 0xffffffff;
          iVar27 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar27 = DAT_14c9a3dd0;
          }
          *(int *)(lVar17 + 4 + lVar31) = iVar27;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar21 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar21 = DAT_14c9a3dc0;
          }
          iVar27 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar27 = iVar15;
          }
          bVar3 = (byte)lVar29 & 0x1f;
          DAT_14c9a3dd0 = iVar15;
          *(uint *)(puVar21 + (longlong)(iVar27 >> 5) * 4) =
               *(uint *)(puVar21 + (longlong)(iVar27 >> 5) * 4) &
               (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          local_110 = 0;
        }
        if (((char)local_138 == '\x03') && (local_128 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_128 + 0x10))();
          }
        }
      }
      FUN_140b506dc(plVar19,lVar16,0);
      if (param_11 != '\0') {
        (**(code **)(*plVar19 + 0xa60))(plVar19,1);
      }
      plVar20 = (longlong *)FUN_140083894();
      (**(code **)(*plVar20 + 0x70))(plVar20,plVar19);
      goto LAB_140a4572e;
    }
  }
LAB_140a44dcd:
  plVar19 = (longlong *)0x0;
LAB_140a4572e:
  if ((local_d0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar19;
}



// FUNCTION 140a45cc8 FUN_140a45cc8 body=228 status=ok
// SIG undefined FUN_140a45cc8(void)

longlong FUN_140a45cc8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3d328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1438fdbac;
    local_38 = &LAB_1481904ab;
    local_40 = FUN_141828e95;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterfaceSkeletalMesh",&DAT_14cb3d328,
                  FUN_146471eba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3d328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a45dbe FUN_140a45dbe body=421 status=ok
// SIG undefined FUN_140a45dbe(void)

undefined4 FUN_140a45dbe(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 local_5c [4];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_140a45f64();
  local_68 = (undefined8 *)CONCAT44(local_68._4_4_,DAT_14cbc28a0);
  local_70 = DAT_14cbc2898;
  FUN_1448075d0(&local_58);
  pbVar3 = (byte *)*param_2;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar7 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar5[9];
      }
      iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar5[10] - 1U & (uint)local_58) * 4);
      if (iVar6 != -1) {
        do {
          lVar2 = *plVar5 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar6 * 0x40) == (uint)local_58) {
            if ((((lVar2 != 0) &&
                 (puVar8 = (undefined8 *)(lVar2 + 0x28), puVar8 != (undefined8 *)0x0)) &&
                ((byte *)*puVar8 != (byte *)0x0)) && ((*(byte *)*puVar8 & 0x40) == 0))
            goto LAB_140a45e7a;
            break;
          }
          iVar6 = *(int *)(lVar2 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar8 = &DAT_14c9a1308;
LAB_140a45e7a:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar8 != (byte *)0x0) && ((*(byte *)*puVar8 & 3) != 0)) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_148cd6454(puVar8,&local_58,0);
    local_70 = &local_78;
    local_78 = 0;
    local_68 = &local_58;
    FUN_148cdbb5a(param_1 + 0x408,local_5c,&local_70,0);
    plVar5 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140a45f64 FUN_140a45f64 body=828 status=ok
// SIG undefined FUN_140a45f64(void)

undefined8 FUN_140a45f64(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [8];
  uint local_98 [6];
  longlong local_80;
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,DAT_14cb1ae08);
  local_c8 = DAT_14cb1ae00;
  FUN_1448075d0(local_98);
  pbVar4 = (byte *)*param_2;
  if (pbVar4 != (byte *)0x0) {
    if ((*pbVar4 & 2) == 0) {
      plVar7 = &DAT_14c9a1288;
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
      plVar10 = plVar7 + 8;
      if ((longlong *)plVar7[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar7[9];
      }
      iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar7[10] - 1U & local_98[0]) * 4);
      if (iVar9 != -1) {
        do {
          lVar11 = *plVar7 + (longlong)iVar9 * 0x40;
          if (*(uint *)(*plVar7 + (longlong)iVar9 * 0x40) == local_98[0]) {
            if ((((lVar11 != 0) &&
                 (puVar12 = (undefined8 *)(lVar11 + 0x28), puVar12 != (undefined8 *)0x0)) &&
                ((byte *)*puVar12 != (byte *)0x0)) && ((*(byte *)*puVar12 & 0x40) == 0))
            goto LAB_140a46028;
            break;
          }
          iVar9 = *(int *)(lVar11 + 0x38);
        } while (iVar9 != -1);
      }
    }
  }
  puVar12 = &DAT_14c9a1308;
LAB_140a46028:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 0x6b) == 2)) {
    local_58 = (uint *)0x0;
    local_50 = 0x800000000;
    puVar12 = (undefined8 *)FUN_1407cbaec(puVar12);
    if ((longlong)*(int *)(puVar12 + 2) != 0) {
      plVar7 = (longlong *)*puVar12;
      lVar11 = (longlong)*(int *)(puVar12 + 2) << 4;
      do {
        cVar2 = FUN_144a8ab0e(plVar7);
        if ((cVar2 != '\0') && (cVar2 = FUN_144b08382(plVar7), cVar2 != '\0')) {
          puVar5 = &DAT_14c9a12e0;
          if (*plVar7 != 0) {
            puVar5 = (undefined4 *)FUN_140625092(*plVar7,&DAT_14c9a12e0);
          }
          FUN_1447325ac(puVar5,local_a0,1);
          FUN_1447683ea(&local_c8,local_a0,0);
          uVar1 = local_50;
          if (local_c8 != 0) {
            lVar8 = (longlong)(int)local_50;
            uVar3 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar3);
            if (local_50._4_4_ < uVar3) {
              FUN_147e21556(local_98,uVar1 & 0xffffffff);
            }
            puVar6 = local_58;
            if (local_58 == (uint *)0x0) {
              puVar6 = local_98;
            }
            *(longlong *)(puVar6 + lVar8 * 2) = local_c8;
          }
        }
        plVar7 = plVar7 + 2;
        lVar11 = lVar11 + -0x10;
      } while (lVar11 != 0);
    }
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_147e21652(&local_c8,local_98);
    FUN_1401fa756(&local_c8);
    FUN_140cc1bde(param_1 + 0xe,&local_c8);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 == 0) {
    puVar12 = &DAT_14c9a1308;
  }
  else {
    puVar12 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb1ada8);
  }
  pbVar4 = (byte *)*puVar12;
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) == 0)) {
    if (*param_2 == 0) {
      puVar12 = &DAT_14c9a1308;
    }
    else {
      puVar12 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb1ada0);
    }
    pbVar4 = (byte *)*puVar12;
    if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) == 0)) goto LAB_140a46094;
  }
  cVar2 = FUN_14000584e(pbVar4,0);
  *(char *)((longlong)param_1 + 0x25) = cVar2 + '\x01';
LAB_140a46094:
  (**(code **)(*param_1 + 0x148))(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140a462a2 FUN_140a462a2 body=1 status=ok
// SIG undefined FUN_140a462a2(void)

void FUN_140a462a2(void)

{
  return;
}



// FUNCTION 140a462a4 FUN_140a462a4 body=2653 status=ok
// SIG undefined FUN_140a462a4(void)

void FUN_140a462a4(longlong param_1,undefined1 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  longlong *plVar16;
  ushort *puVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_118 [35];
  undefined1 local_f5;
  int local_f4;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar19 = *(longlong *)(param_1 + 0x100);
  if (((((*(int *)(lVar19 + 0x14) == 0) || (uVar3 = *(uint *)(lVar19 + 0x10), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar16 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar19 + 0x14))))) ||
     (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 || (lVar10 = *plVar16, lVar10 == 0))))
  goto LAB_140a469e8;
  lVar19 = *(longlong *)(lVar19 + 0x28);
  if ((lVar19 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar19);
  }
  else if (lVar19 == 0) {
    lVar19 = FUN_140b55eae();
  }
  iVar15 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x34);
  if (iVar15 == -1) {
    FUN_140b56998(lVar19,&local_88,lVar10);
    iVar15 = (int)local_88;
  }
  cVar6 = FUN_140a46e6a(lVar19,iVar15,lVar10);
  if (cVar6 == '\0') goto LAB_140a469e8;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x118) = 0;
  lVar8 = FUN_1405e0c42(*(longlong *)(param_1 + 0x100) + 0x38);
  lVar10 = param_1 + 0x110;
  lVar18 = *(longlong *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x110) != DAT_14cab2cd4) {
    lVar19 = FUN_1400d1226(lVar18,lVar10);
    if ((lVar8 != 0) && (lVar19 != 0)) {
      local_e8 = *(undefined8 *)(param_1 + 0x100);
      local_e0 = *(longlong *)(param_1 + 0x108);
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
      FUN_140a473e6(lVar8,lVar10,lVar19,&local_e8);
    }
    goto LAB_140a469e8;
  }
  if (*(int *)(lVar18 + 0x24) == 0) {
LAB_140a46b13:
    uVar14 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar18 + 0x20);
    uVar14 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(lVar18 + 0x24) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_140a46b13;
      uVar14 = *puVar12;
    }
  }
  bVar2 = *(byte *)(lVar18 + 0x44);
  local_f5 = param_2;
  local_f4 = iVar15;
  local_f0 = lVar19;
  if (bVar2 != 0) {
    puVar17 = *(ushort **)(lVar18 + 0x38);
    lVar19 = 0;
    do {
      lVar11 = 0;
      if ((ulonglong)*puVar17 != 0xffff) {
        lVar11 = *(longlong *)(lVar18 + 0x38) + (ulonglong)*puVar17;
      }
      plVar16 = (longlong *)(**(code **)(*(longlong *)(lVar18 + 0x50) + lVar19))(lVar11);
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar14);
      }
      lVar19 = lVar19 + 0x10;
      puVar17 = puVar17 + 3;
    } while ((ulonglong)bVar2 * 0x10 != lVar19);
  }
  iVar15 = local_f4;
  if (lVar8 != 0) {
    local_a8 = *(longlong *)(param_1 + 0x100);
    local_a0 = *(longlong *)(param_1 + 0x108);
    lVar19 = local_a8;
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
      lVar19 = *(longlong *)(param_1 + 0x100);
    }
    if (*(int *)(lVar19 + 0x14) == 0) {
LAB_140a46b1a:
      uVar14 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar19 + 0x10);
      uVar14 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar12 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar12 == (undefined8 *)0x0) ||
           ((*(int *)(puVar12 + 2) != *(int *)(lVar19 + 0x14) ||
            ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_140a46b1a;
        uVar14 = *puVar12;
      }
    }
    FUN_140a473e6(lVar8,lVar10,uVar14,&local_a8);
  }
  lVar19 = local_f0;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    puVar12 = (undefined8 *)(param_1 + 0xf8);
    local_b8 = *(undefined8 *)(param_1 + 0x100);
    local_b0 = *(longlong *)(param_1 + 0x108);
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    FUN_140a46f0a(&local_88,&local_b8);
    if (puVar12 != &local_88) {
      uVar14 = *puVar12;
      *puVar12 = local_88;
      local_88 = (undefined8 *)0x0;
      FUN_140a46d02(puVar12,uVar14);
    }
    FUN_140a46d02(&local_88,local_88);
  }
  plVar16 = (longlong *)(param_1 + 0xf0);
  lVar19 = FUN_1400a382a(lVar19,iVar15);
  plVar9 = *(longlong **)(param_1 + 0xf0);
  if (plVar9 == (longlong *)0x0) {
    if (lVar19 == 0) {
      plVar9 = (longlong *)FUN_14001cc68(0xd0,0x10);
      *plVar9 = (longlong)&PTR_FUN_14a475ff0;
      plVar9[3] = 0;
      plVar9[4] = -0x100000000;
      *(int *)(plVar9 + 5) = iVar15;
      *(undefined1 *)((longlong)plVar9 + 0x2d) = 0;
      plVar9[10] = 0;
      *(undefined4 *)(plVar9 + 0xb) = 0;
      plVar9[6] = 0;
      plVar9[7] = 0;
      *(undefined8 *)((longlong)plVar9 + 0x5c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar9 + 100) = 0;
      plVar9[0xe] = 0;
      *(undefined4 *)(plVar9 + 0xf) = 0;
      plVar9[0x14] = 0;
      *(undefined4 *)(plVar9 + 0x15) = 0;
      plVar9[0x10] = 0;
      plVar9[0x11] = 0;
      *(undefined8 *)((longlong)plVar9 + 0xac) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar9 + 0xb4) = 0;
      plVar9[0x18] = 0;
      *(undefined4 *)(plVar9 + 0x19) = 0;
      plVar9[1] = 0;
      plVar9[2] = 0;
    }
    else {
      plVar9 = (longlong *)FUN_14001cc68(0x198,0x10);
      FUN_145765e50(plVar9,iVar15);
    }
    *plVar16 = (longlong)plVar9;
  }
  else if (lVar19 != 0) {
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_88);
    if (&local_88 == plVar16 || local_88 == (undefined8 *)0x0) {
LAB_140a46b81:
      if (local_88 != (undefined8 *)0x0) {
        (**(code **)*local_88)(local_88,1);
      }
    }
    else {
      puVar12 = (undefined8 *)*plVar16;
      *plVar16 = (longlong)local_88;
      local_88 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
        goto LAB_140a46b81;
      }
    }
    plVar9 = (longlong *)*plVar16;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x100);
  local_c0 = *(longlong *)(param_1 + 0x108);
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
  }
  pbVar1 = (byte *)(param_1 + 0x118);
  (**(code **)(*plVar9 + 0x38))(plVar9,&local_c8,local_f5);
  plVar16 = *(longlong **)(param_1 + 0xf0);
  local_d8 = *(undefined8 *)(param_1 + 0x100);
  local_d0 = *(longlong *)(param_1 + 0x108);
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar16 + 8))(plVar16,&local_d8,pbVar1);
  lVar19 = *(longlong *)(param_1 + 0xe8);
  if (lVar19 != 0) {
    *(undefined4 *)(lVar19 + 0x118) = 0;
    if (*(int *)(lVar19 + 0x11c) != 0) {
      FUN_145765df6(lVar19 + 0x10);
    }
    *(undefined4 *)(lVar19 + 0x380) = 0;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x100);
  lVar19 = puVar12[5];
  if ((lVar19 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar19);
    puVar12 = *(undefined8 **)(param_1 + 0x100);
  }
  iVar15 = *(int *)((longlong)puVar12 + 0x34);
  lVar10 = *(longlong *)(lVar19 + 0xa0);
  lVar18 = (longlong)iVar15 * 0x30;
  if ((*(byte *)(lVar10 + 0x2e + lVar18) & 2) == 0) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      local_90 = *(longlong *)(param_1 + 0x108);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      local_98 = puVar12;
      lVar19 = FUN_140165676(&local_98);
      if (lVar19 != 0) {
        lVar10 = *(longlong *)(param_1 + 0xe8);
        puVar12 = *(undefined8 **)(lVar10 + 0x150);
        lVar18 = *(longlong *)(lVar10 + 0x158);
        uVar14 = *(undefined8 *)(lVar10 + 0x160);
        uVar5 = *(undefined8 *)(lVar10 + 0x168);
        *(undefined8 *)(lVar10 + 0x150) = *(undefined8 *)(lVar10 + 0x130);
        *(undefined8 *)(lVar10 + 0x158) = *(undefined8 *)(lVar10 + 0x138);
        *(undefined8 *)(lVar10 + 0x160) = *(undefined8 *)(lVar10 + 0x140);
        *(undefined8 *)(lVar10 + 0x168) = *(undefined8 *)(lVar10 + 0x148);
        local_88._0_4_ = (int)puVar12;
        local_88._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
        uStack_80._0_4_ = (undefined4)lVar18;
        uStack_80._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
        local_78._0_4_ = (undefined4)uVar14;
        local_78._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar5;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        *(int *)(lVar10 + 0x130) = (int)local_88;
        *(undefined4 *)(lVar10 + 0x134) = local_88._4_4_;
        *(undefined4 *)(lVar10 + 0x138) = (undefined4)uStack_80;
        *(undefined4 *)(lVar10 + 0x13c) = uStack_80._4_4_;
        *(undefined4 *)(lVar10 + 0x140) = (undefined4)local_78;
        *(undefined4 *)(lVar10 + 0x144) = local_78._4_4_;
        *(undefined4 *)(lVar10 + 0x148) = (undefined4)uStack_70;
        *(undefined4 *)(lVar10 + 0x14c) = uStack_70._4_4_;
        local_88 = puVar12;
        uStack_80 = lVar18;
        local_78 = uVar14;
        uStack_70 = uVar5;
        FUN_1400a2664(lVar10 + 0x150);
        FUN_1400a34d0(lVar10);
        FUN_1400a3a18(lVar10,lVar19,0);
        puVar12 = *(undefined8 **)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe8) = 0;
        if (puVar12 != (undefined8 *)0x0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      *pbVar1 = *pbVar1 & 0xf7;
    }
  }
  else {
    uStack_80 = *(longlong *)(param_1 + 0x108);
    if (uStack_80 != 0) {
      LOCK();
      *(int *)(uStack_80 + 8) = *(int *)(uStack_80 + 8) + 1;
      UNLOCK();
    }
    local_88 = puVar12;
    lVar8 = FUN_140165676(&local_88);
    if ((lVar8 != 0) &&
       (*(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 8,
       *(longlong *)(param_1 + 0xe8) == 0)) {
      lVar10 = FUN_140a46d48(lVar10 + lVar18);
      puVar12 = (undefined8 *)FUN_14001cc68(0x388,0x10);
      *puVar12 = &PTR_LAB_149e668b0;
      *(undefined2 *)(puVar12 + 1) = 0;
      FUN_1405bceb4(puVar12);
      *puVar12 = &PTR_FUN_14a478360;
      puVar12[0x22] = 0;
      puVar12[0x23] = 0x800000000;
      puVar12[0x24] = 0;
      if (lVar10 == 0) {
        iVar7 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar10 + 0xc);
        *(uint *)(puVar12 + 0x24) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar7 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar7 = *(int *)(lVar10 + 0x10);
          bVar20 = iVar7 == 0;
          if (bVar20) {
            *(int *)(lVar10 + 0x10) = iVar13;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar7 = iVar13;
          }
        }
      }
      *(int *)((longlong)puVar12 + 0x124) = iVar7;
      *(int *)(puVar12 + 0x25) = iVar15;
      *(int *)((longlong)puVar12 + 300) = DAT_14cab2cd4;
      puVar12[0x26] = 0;
      puVar12[0x27] = 0;
      puVar12[0x28] = 0;
      puVar12[0x29] = 0;
      puVar12[0x2a] = 0;
      puVar12[0x2b] = 0;
      puVar12[0x2c] = 0;
      puVar12[0x2d] = 0;
      puVar12[0x2e] = lVar19;
      if ((lVar19 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar19);
      }
      puVar12[0x37] = 0;
      puVar12[0x38] = 0x800000000;
      puVar12[0x3f] = 0;
      *(undefined4 *)(puVar12 + 0x40) = 0;
      puVar12[0x39] = 0;
      puVar12[0x3a] = 0;
      puVar12[0x3b] = 0;
      puVar12[0x3c] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x204) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0x20c) = 0;
      puVar12[0x43] = 0;
      *(undefined4 *)(puVar12 + 0x44) = 0;
      puVar12[0x49] = 0;
      *(undefined4 *)(puVar12 + 0x4a) = 0;
      puVar12[0x45] = 0;
      puVar12[0x46] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x254) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0x25c) = 0;
      puVar12[0x4d] = 0;
      *(undefined4 *)(puVar12 + 0x4e) = 0;
      puVar12[0x53] = 0;
      *(undefined4 *)(puVar12 + 0x54) = 0;
      puVar12[0x4f] = 0;
      puVar12[0x50] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x2a4) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar12 + 0x2ac) = 0;
      puVar12[0x57] = 0;
      *(undefined4 *)(puVar12 + 0x58) = 0;
      puVar12[0x59] = 0;
      puVar12[0x5a] = 0;
      puVar12[0x5b] = 0;
      puVar12[0x5c] = 0;
      *(undefined4 *)(puVar12 + 0x5d) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x2ec) = DAT_14cab2cd0;
      puVar12[0x5e] = 0xffffffffffffffff;
      *(undefined1 *)(puVar12 + 0x5f) = 0;
      *(undefined1 *)(puVar12 + 0x60) = 1;
      *(undefined8 *)((longlong)puVar12 + 0x304) = 0;
      *(undefined1 *)((longlong)puVar12 + 0x30c) = 1;
      puVar12[0x62] = 0;
      puVar12[99] = 0x10000ea60;
      *(undefined4 *)(puVar12 + 100) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x324) = 0x80000000;
      *(undefined4 *)(puVar12 + 0x65) = 0x3f800000;
      *(undefined4 *)((longlong)puVar12 + 0x32c) = 0;
      *(undefined4 *)(puVar12 + 0x66) = 0;
      puVar12[0x67] = 0;
      puVar12[0x68] = 0;
      puVar12[0x69] = 0;
      puVar12[0x6a] = 0;
      *(undefined1 *)(puVar12 + 0x6b) = 0;
      *(undefined4 *)(puVar12 + 0x6e) = 0;
      puVar12[0x6c] = 0;
      puVar12[0x6d] = 0;
      *(undefined8 *)((longlong)puVar12 + 0x374) = 0x80000000;
      *(byte *)((longlong)puVar12 + 0x37c) = *(byte *)((longlong)puVar12 + 0x37c) & 0xc0;
      *(undefined4 *)(puVar12 + 0x70) = 0;
      puVar4 = *(undefined8 **)(param_1 + 0xe8);
      *(undefined8 **)(param_1 + 0xe8) = puVar12;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
LAB_140a469e8:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a46d02 FUN_140a46d02 body=70 status=ok
// SIG undefined FUN_140a46d02(void)

void FUN_140a46d02(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 140a46d48 FUN_140a46d48 body=73 status=ok
// SIG undefined FUN_140a46d48(void)

undefined8 FUN_140a46d48(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x24)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140a46d92 FUN_140a46d92 body=148 status=ok
// SIG undefined FUN_140a46d92(void)

void FUN_140a46d92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x24) != -1) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0xffffffff00000000;
  }
  FUN_14055ab72(param_1 + 0x30);
  FUN_140a46e26(param_1 + 0x80);
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000140a46e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a46e26 FUN_140a46e26 body=68 status=ok
// SIG undefined FUN_140a46e26(void)

void FUN_140a46e26(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147564722();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140a46e6a FUN_140a46e6a body=159 status=ok
// SIG undefined FUN_140a46e6a(void)

undefined8 FUN_140a46e6a(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 200) <= (int)param_2)) {
    return 0;
  }
  lVar3 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xc0);
  }
  if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x24 + (ulonglong)param_2 * 0x30);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x20 + (ulonglong)param_2 * 0x30);
    lVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140a46efa;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((*(uint *)(plVar5 + 2) == uVar1 &&
        (uVar4 = (ulonglong)*(uint *)(plVar5 + 1), (*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar5;
      goto LAB_140a46efa;
    }
  }
  lVar3 = 0;
LAB_140a46efa:
  return CONCAT71((int7)(uVar4 >> 8),lVar3 == param_3);
}



// FUNCTION 140a46f0a FUN_140a46f0a body=279 status=ok
// SIG undefined FUN_140a46f0a(void)

undefined8 * FUN_140a46f0a(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(*param_2 + 0x34);
  lVar3 = *(longlong *)(*param_2 + 0x28);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  lVar7 = (longlong)iVar2 * 0x30;
  if (((*(byte *)(*(longlong *)(lVar3 + 0xa0) + 0x2c + lVar7) & 1) == 0) &&
     (piVar5 = (int *)(*(longlong *)(lVar3 + 0xa0) + lVar7),
     ((piVar5[1] != 0 || *piVar5 != 0) || piVar5[2] != 0) || piVar5[3] != 0)) {
    *param_1 = 0;
  }
  else {
    uVar6 = FUN_14001cc68(0x160,0x10);
    local_38 = *param_2;
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_147538f1a(uVar6,&local_38);
    *param_1 = uVar6;
    FUN_147538d90(uVar6);
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar5 = (int *)((longlong)plVar4 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a47028 FUN_140a47028 body=638 status=ok
// SIG undefined FUN_140a47028(void)

void FUN_140a47028(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x24) == -1) {
    lVar6 = *(longlong *)(*param_2 + 0x28);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    plVar5 = (longlong *)(param_1 + 0x18);
    lVar7 = (longlong)*(int *)(param_1 + 0x28) * 0x30;
    uVar3 = *(uint *)(*(longlong *)(lVar6 + 0xa0) + 0x18 + lVar7);
    uVar8 = (ulonglong)uVar3;
    if (uVar8 == 0) {
      if (*plVar5 != 0) {
        FUN_1400020a8();
      }
      *plVar5 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      _Src = *(void **)(*(longlong *)(lVar6 + 0xa0) + 0x10 + lVar7);
      local_50 = (void *)0x0;
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar8);
      }
      local_48 = uVar3;
      FUN_140a472a8(&local_50,uVar3,0);
      memcpy(local_50,_Src,uVar8 << 3);
      if (&local_50 == plVar5) {
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        *(void **)(param_1 + 0x18) = local_50;
        local_50 = (void *)0x0;
        *(uint *)(param_1 + 0x20) = local_48;
        *(undefined4 *)(param_1 + 0x24) = local_44;
      }
    }
  }
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FUN_140165676(&local_60);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x70))(plVar5,param_3);
  }
  if ((*(int *)(param_1 + 0x24) != -1) && (0 < *(int *)(param_1 + 0x20))) {
    *param_3 = *param_3 | 1;
  }
  lVar6 = *(longlong *)(*param_2 + 0x28);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  lVar6 = FUN_1400a382a(lVar6,*(undefined4 *)(param_1 + 0x28));
  if (lVar6 != 0) {
    if ((longlong)*(int *)(lVar6 + 0x90) == 0) {
      bVar4 = false;
      bVar9 = false;
    }
    else {
      lVar7 = *(longlong *)(lVar6 + 0x88);
      lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0x18;
      do {
        FUN_147559218(lVar7,&local_50);
        bVar4 = true;
        if (local_50._1_1_ == '\x01') goto LAB_140a4722b;
        lVar7 = lVar7 + 0x18;
        lVar6 = lVar6 + -0x18;
      } while (lVar6 != 0);
      bVar4 = false;
LAB_140a4722b:
      bVar9 = (char)local_50 == '\0';
    }
    if (!bVar4) {
      bVar9 = false;
    }
    if (bVar9) {
      *param_3 = *param_3 | 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a472a8 FUN_140a472a8 body=317 status=ok
// SIG undefined FUN_140a472a8(void)

void FUN_140a472a8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a47316;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140a47316:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140a473e6 FUN_140a473e6 body=804 status=ok
// SIG undefined FUN_140a473e6(void)

void FUN_140a473e6(longlong param_1,uint *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_1f8 [32];
  uint *local_1d8;
  undefined8 *local_1d0;
  int local_1c4;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_16c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined8 local_11c;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 local_cc;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined8 local_7c;
  undefined4 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar3 = (longlong *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar8 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe8);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *param_2) * 4);
    if (iVar7 != -1) {
      do {
        lVar8 = *plVar3 + (longlong)iVar7 * 400;
        if (*(uint *)(*plVar3 + (longlong)iVar7 * 400) == *param_2) {
          if (lVar8 != 0) goto LAB_140a47480;
          break;
        }
        iVar7 = *(int *)(lVar8 + 0x188);
      } while (iVar7 != -1);
    }
  }
  memset(&local_1c0,0,0x180);
  local_1b0 = 2;
  local_1a0 = 0xffffffff;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_128 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_d8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_58 = 0;
  local_1d8 = param_2;
  local_1d0 = &local_1c0;
  FUN_1409e5d90(plVar3,&local_1c4);
  lVar8 = *plVar3 + (longlong)local_1c4 * 400;
  FUN_1409e579e(&local_1c0);
LAB_140a47480:
  uVar5 = *param_4;
  plVar3 = (longlong *)param_4[1];
  if (plVar3 == (longlong *)0x0) {
    cVar6 = FUN_140a4770c(lVar8 + 0x20,param_3);
    if (cVar6 != '\0') goto LAB_140a474c4;
    local_1b8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    cVar6 = FUN_140a4770c(lVar8 + 0x20,param_3);
    if (cVar6 != '\0') goto LAB_140a474c4;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_1b8 = plVar3;
  }
  local_1c0 = uVar5;
  FUN_140874208(lVar8 + 8,&local_1c0);
LAB_140a474c4:
  if (param_3 == 0) {
    *(uint *)(lVar8 + 0x20) = 0;
    iVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(param_3 + 0xc);
    *(uint *)(lVar8 + 0x20) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)(lVar8 + 0x24) = iVar7;
  *(uint *)(lVar8 + 0x28) = *param_2;
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
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a4770c FUN_140a4770c body=316 status=ok
// SIG undefined FUN_140a4770c(void)

bool FUN_140a4770c(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 140a47848 FUN_140a47848 body=89 status=ok
// SIG undefined FUN_140a47848(void)

void FUN_140a47848(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x3c0))();
    if (cVar2 != '\0') {
      lVar3 = FUN_140a478a2(param_1,param_2,0);
      if (lVar3 == 0) {
        FUN_140a47a08(param_1,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a478a2 FUN_140a478a2 body=357 status=ok
// SIG undefined FUN_140a478a2(void)

longlong * FUN_140a478a2(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar6 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe8);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar4 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xa8);
      do {
        lVar1 = lVar6 + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(lVar6 + (longlong)iVar4 * 0x20) == param_2) {
          if (lVar1 != 0) {
            plVar5 = (longlong *)(lVar1 + 8);
            uVar2 = *(ulonglong *)(*plVar5 + 0xd8);
            if ((((uVar2 >> 0x20 != 0) && (uVar3 = (uint)uVar2, -1 < (int)uVar3)) &&
                ((int)uVar3 < DAT_14c9647dc)) &&
               (((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar2 >> 0xd) & 0x3fff8))
                 , lVar6 != 0 && (*(int *)(lVar6 + 0x10) == (int)(uVar2 >> 0x20))) &&
                ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) goto LAB_140a479e9;
            local_28 = uVar2;
            FUN_147bd79ca(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x858),
                          *(undefined8 *)(param_1 + 0x68));
            FUN_147a4f9cc((longlong *)(param_1 + 0xa8),param_2);
            if (param_3 != (undefined1 *)0x0) {
              *param_3 = 1;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140a479e9:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 140a47a08 FUN_140a47a08 body=2323 status=ok
// SIG undefined FUN_140a47a08(void)

longlong * FUN_140a47a08(ulonglong param_1,ulonglong param_2,char param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  undefined1 auStack_88 [32];
  longlong *local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == '\0') {
    FUN_147bcd606(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x68),param_2);
    plVar24 = (longlong *)0x0;
  }
  else {
    FUN_140b14d7c(*(undefined8 *)(param_1 + 0x28),&local_58,*(undefined8 *)(param_1 + 0x68),param_2)
    ;
    uVar14 = local_58;
    plVar25 = local_50;
    plVar24 = local_50;
    if (local_58 != 0) goto LAB_140a47b12;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x380))
            (*(longlong **)(param_1 + 0x28),&local_58,param_2);
  plVar19 = local_50;
  uVar14 = local_58;
  local_58 = 0;
  plVar25 = plVar24;
  if (local_50 == plVar24) {
LAB_140a47ac6:
    plVar24 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_50 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
  }
  else {
    local_50 = (longlong *)0x0;
    plVar25 = plVar19;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar24 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
      goto LAB_140a47ac6;
    }
  }
  if ((*(ulonglong *)(param_1 + 0x68) != param_2) &&
     (lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58), lVar21 != 0)) {
    FUN_1416caf26(*(undefined8 *)(lVar21 + 0x858),*(ulonglong *)(param_1 + 0x68),param_2,param_1);
  }
LAB_140a47b12:
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
  }
  plVar24 = (longlong *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xdc) == 0) {
    iVar30 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar30 + 1;
    if (*(int *)(param_1 + 0xb4) == iVar30) {
      FUN_1447711aa(plVar24,iVar30);
    }
    iVar10 = *(int *)(param_1 + 0xd0);
    if (iVar10 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar9 = iVar10 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    lVar13 = param_1 + 0xb8;
    iVar18 = iVar10 + 1;
    iVar29 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar29 = iVar10;
    }
    if (iVar29 >> 5 == iVar9) {
      *(int *)(param_1 + 0xd0) = iVar18;
    }
    else {
      if (*(int *)(param_1 + 0xd4) <= iVar10) {
        iVar9 = iVar10;
        local_68 = plVar24;
        if (iVar10 + 0x20U < 0xa0) {
          iVar18 = 0x80;
        }
        else {
          uVar17 = iVar10 + 0x20U >> 5;
          if (*(int *)(param_1 + 0xd4) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar17) {
              uVar26 = uVar17;
            }
          }
          else {
            uVar26 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar26 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar15 + 0xf);
              if (uVar26 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar20 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar20 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar23 = 0x32;
                  if (0x32 < bVar16) {
                    uVar23 = (ulonglong)bVar16;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_140a481b4;
                    lVar21 = uVar23 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar21 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar20 + uVar15) - 1;
              }
            }
            else {
              local_60 = (ulonglong)uVar17;
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              uVar17 = (uint)local_60;
              iVar9 = *(int *)(param_1 + 0xd0);
            }
          }
LAB_140a481b4:
          iVar12 = (int)(uVar15 >> 2);
          iVar18 = -0x20;
          if ((int)uVar17 <= iVar12) {
            iVar18 = iVar12 << 5;
          }
        }
        *(int *)(param_1 + 0xd4) = iVar18;
        FUN_1446efbd8(lVar13,iVar9);
        iVar18 = *(int *)(param_1 + 0xd0) + 1;
        plVar24 = local_68;
      }
      iVar9 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar9 = iVar18;
      }
      *(int *)(param_1 + 0xd0) = iVar18;
      if (iVar18 % 0x20 != 0) {
        lVar21 = *(longlong *)(param_1 + 200);
        if (*(longlong *)(param_1 + 200) == 0) {
          lVar21 = lVar13;
        }
        bVar16 = -(char)(iVar18 % 0x20);
        *(uint *)(lVar21 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)(lVar21 + (longlong)(iVar9 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar30;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar13 = *(longlong *)(param_1 + 200);
    }
    bVar16 = (byte)iVar10 & 0x1f;
    puVar4 = (uint *)(lVar13 + (longlong)(iVar29 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar30 = *(int *)(param_1 + 0xd8);
    lVar21 = (longlong)iVar30;
    iVar10 = *(int *)(*(longlong *)(param_1 + 0xa8) + 4 + lVar21 * 0x20);
    *(int *)(param_1 + 0xd8) = iVar10;
    iVar9 = *(int *)(param_1 + 0xdc) + -1;
    *(int *)(param_1 + 0xdc) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  lVar13 = param_1 + 0xb8;
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar13 = *(longlong *)(param_1 + 200);
  }
  iVar10 = iVar30 + 0x1f;
  if (-1 < iVar30) {
    iVar10 = iVar30;
  }
  puVar4 = (uint *)(lVar13 + (longlong)(iVar10 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar30 & 0x1f);
  iVar10 = 1;
  lVar13 = *(longlong *)(param_1 + 0xa8);
  lVar21 = lVar21 * 0x20;
  puVar2 = (ulonglong *)(lVar13 + lVar21);
  *(ulonglong *)(lVar13 + lVar21) = param_2;
  *(ulonglong *)(lVar13 + 8 + lVar21) = uVar14;
  *(longlong **)(lVar13 + 0x10 + lVar21) = plVar25;
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
    param_2 = *puVar2;
  }
  *(undefined4 *)(puVar2 + 3) = 0xffffffff;
  uVar17 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  uVar26 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc);
  if (uVar26 != 1) {
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar21 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar21 = *(longlong *)(param_1 + 0xe8);
      }
      iVar9 = *(int *)(lVar21 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & uVar17) * 4);
      if (iVar9 != -1) {
        do {
          puVar3 = (undefined4 *)(*plVar24 + (longlong)iVar9 * 0x20);
          if (*(ulonglong *)(*plVar24 + (longlong)iVar9 * 0x20) == param_2) {
            plVar19 = *(longlong **)(puVar3 + 4);
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              plVar27 = plVar19 + 1;
              *(int *)plVar27 = (int)*plVar27 + -1;
              UNLOCK();
              if ((int)*plVar27 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
            uVar14 = *puVar2;
            uVar6 = *(undefined4 *)((longlong)puVar2 + 4);
            uVar15 = puVar2[1];
            uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
            *(ulonglong *)(puVar3 + 4) = puVar2[2];
            *puVar3 = (int)uVar14;
            puVar3[1] = uVar6;
            puVar3[2] = (int)uVar15;
            puVar3[3] = uVar7;
            FUN_140c6a032(plVar24,iVar30);
            iVar30 = iVar9;
            goto LAB_140a47d51;
          }
          iVar9 = puVar3[6];
        } while (iVar9 != -1);
      }
    }
    if (3 < uVar26) {
      uVar14 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
      lVar21 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar21 & 0x1f);
    }
  }
  if (((int)uVar26 < 1) || (iVar10 <= *(int *)(param_1 + 0xf0))) {
    uVar17 = *(int *)(param_1 + 0xf0) - 1U & uVar17;
    *(uint *)((longlong)puVar2 + 0x1c) = uVar17;
    lVar21 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar21 = param_1 + 0xe0;
    }
    *(undefined4 *)(puVar2 + 3) =
         *(undefined4 *)
          (lVar21 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)(int)uVar17) * 4);
    lVar21 = *(longlong *)(param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0xe8) == 0) {
      lVar21 = param_1 + 0xe0;
    }
    *(int *)(lVar21 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)(int)uVar17) * 4) =
         iVar30;
  }
  else {
    *(int *)(param_1 + 0xf0) = iVar10;
    FUN_1417c3bac(plVar24);
  }
LAB_140a47d51:
  plVar24 = (longlong *)(*plVar24 + (longlong)iVar30 * 0x20 + 8);
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar25 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
  }
  puVar2 = (ulonglong *)*plVar24;
  uVar14 = puVar2[9];
  if (((uVar14 != 0) ||
      ((((*(int *)((longlong)puVar2 + 0xdc) != 0 && (uVar17 = (uint)puVar2[0x1b], -1 < (int)uVar17))
        && ((int)uVar17 < DAT_14c9647dc)) &&
       (((puVar22 = (ulonglong *)
                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
         puVar22 != (ulonglong *)0x0 && ((int)puVar22[2] == *(int *)((longlong)puVar2 + 0xdc))) &&
        (((puVar22[1] & 0x10200000) == 0 && (uVar14 = *puVar22, uVar14 != 0)))))))) &&
     (puVar2[8] != 0)) {
    uVar15 = *(ulonglong *)(uVar14 + 0x10);
    if ((uVar15 != 0) && (puVar2[8] != uVar15)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(uVar15);
      }
      puVar2[8] = uVar15;
    }
    puVar2[0xb] = param_1;
    plVar19 = *(longlong **)(puVar2[10] + 0x58);
    FUN_140574f3e(plVar19[0x37],&local_58,uVar14,0);
    *puVar2 = local_58;
    if (1 < local_58) {
      *(byte *)((longlong)puVar2 + 0xc) = *(byte *)((longlong)puVar2 + 0xc) & 0xfd;
      cVar8 = (**(code **)(*plVar19 + 0x3c0))(plVar19);
      if ((cVar8 != '\0') || ((*(byte *)((longlong)plVar19 + 0x309) & 8) != 0)) {
        if (((*(byte *)(puVar2[10] + 0xa4) & 2) == 0) &&
           ((puVar2[6] != 0 &&
            (puVar5 = *(undefined1 **)(puVar2[6] + 8), puVar5 != (undefined1 *)0x0)))) {
          uVar17 = 0;
          if (*(longlong *)(puVar2[4] + 0x58) != 0) {
            uVar17 = (uint)*(ushort *)(*(longlong *)(puVar2[4] + 0x58) + 8);
          }
          plVar27 = (longlong *)(puVar5 + 0x430);
          uVar26 = *(uint *)(puVar5 + 0x438);
          if ((int)uVar26 < (int)uVar17) {
            *(uint *)(puVar5 + 0x438) = uVar17;
            local_60 = CONCAT44(local_60._4_4_,uVar17 - uVar26);
            if (*(int *)(puVar5 + 0x43c) - uVar26 < uVar17 - uVar26) {
              local_68 = plVar27;
              FUN_1417c41a0(plVar27,uVar26);
              plVar27 = local_68;
            }
            FUN_1434b894c((longlong)(int)uVar26 * 0x28 + *plVar27,local_60 & 0xffffffff);
          }
          else if (uVar17 < uVar26) {
            local_68 = plVar27;
            FUN_147a4fc62(plVar27,uVar17,uVar26 - uVar17);
            FUN_147a4fcc4(local_68);
          }
          if ((*(byte *)(puVar2[0xb] + 0x90) & 1) != 0) {
            *puVar5 = 1;
          }
        }
        if (((plVar19[0x35] != 0) &&
            (plVar27 = *(longlong **)(plVar19[0x35] + 0x38), plVar27 != (longlong *)0x0)) &&
           (cVar8 = (**(code **)(*plVar27 + 0x3c0))(plVar27), cVar8 != '\0')) {
          plVar19 = plVar27;
        }
        FUN_140d4b59e(plVar19,&local_58,uVar14);
        plVar19 = local_50;
        if (puVar2 + 2 != &local_58) {
          puVar2[2] = local_58;
          local_58 = 0;
          plVar27 = (longlong *)puVar2[3];
          if (local_50 != plVar27) {
            local_50 = (longlong *)0x0;
            puVar2[3] = (ulonglong)plVar19;
            if (plVar27 != (longlong *)0x0) {
              LOCK();
              plVar19 = plVar27 + 1;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)*plVar19 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar1 = (int *)((longlong)plVar27 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
        }
        plVar19 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar27 = local_50 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
      }
    }
  }
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar25 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar24;
}



// FUNCTION 140a4831c FUN_140a4831c body=352 status=ok
// SIG undefined FUN_140a4831c(void)

undefined8 * FUN_140a4831c(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  puVar1[1] = &DAT_14c949688;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70830;
  puVar1[0xf] = 0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140a4847e(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4847e FUN_140a4847e body=135 status=ok
// SIG undefined FUN_140a4847e(void)

undefined8 *
FUN_140a4847e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e70830;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a48506 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a4850c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a48512 FUN_140a48512 body=51 status=ok
// SIG undefined FUN_140a48512(void)

undefined8 FUN_140a48512(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8aa8c);
  FUN_140a48546(param_1,param_2);
  return 0;
}



// FUNCTION 140a48546 FUN_140a48546 body=746 status=ok
// SIG undefined FUN_140a48546(void)

undefined8 FUN_140a48546(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406f8a8a();
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_4c = *(int *)(param_1 + 200);
    puVar4 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    lVar8 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xc0);
    }
    iVar3 = *(int *)(param_1 + 200);
    if ((longlong)iVar3 != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar9) == 0) {
          local_50 = 0xffffffff;
        }
        else {
          local_50 = *(uint *)(*(longlong *)(lVar8 + lVar9) + 0x18);
        }
        puVar4 = (ulonglong *)param_2[1];
        puVar2 = (uint *)*puVar4 + 1;
        if ((uint *)puVar4[1] < puVar2) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
          }
          else {
            thunk_FUN_14572512c(param_2,&local_50);
          }
        }
        else {
          local_50 = *(uint *)*puVar4;
          *puVar4 = (ulonglong)puVar2;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
    goto LAB_140a48661;
  }
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  lVar8 = param_1 + 0x80;
  iVar3 = *(int *)(param_1 + 200);
  if (iVar3 < local_4c) {
    *(int *)(param_1 + 200) = local_4c;
    iVar5 = local_4c;
    if ((uint)(*(int *)(param_1 + 0xcc) - iVar3) < (uint)(local_4c - iVar3)) {
      FUN_14576619e(lVar8);
      goto LAB_140a48698;
    }
  }
  else {
    if (local_4c < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_4c);
    }
    if (local_4c < iVar3) {
      *(int *)(param_1 + 200) = local_4c;
      FUN_147f5566a(lVar8);
    }
LAB_140a48698:
    iVar5 = *(int *)(param_1 + 200);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xc0);
  }
  if (iVar5 != 0) {
    lVar9 = 0;
    do {
      puVar4 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_50);
        }
      }
      else {
        local_50 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar2;
      }
      if ((((int)local_50 < 0) || (*(int *)(*(longlong *)(param_1 + 8) + 0x30) <= (int)local_50)) ||
         (plVar10 = *(longlong **)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + (ulonglong)local_50 * 8),
         plVar10 == (longlong *)0x0)) {
LAB_140a4868b:
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar6 = (**(code **)(*plVar10 + 8))(plVar10);
        lVar7 = FUN_140a48832();
        if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_140a4868b;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
            lVar7 + 0x30) {
          plVar10 = (longlong *)0x0;
        }
      }
      *(longlong **)(lVar8 + lVar9) = plVar10;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar5 * 8 != lVar9);
  }
LAB_140a48661:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140a48832 FUN_140a48832 body=57 status=ok
// SIG undefined FUN_140a48832(void)

void FUN_140a48832(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21b10 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21b10 = FUN_140002ddd(FUN_1464355a1,uVar1,L"GbxBrainTaskSettings");
  }
  return;
}



// FUNCTION 140a4887a FUN_140a4887a body=36 status=ok
// SIG undefined FUN_140a4887a(void)

undefined8 FUN_140a4887a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140a4889e FUN_140a4889e body=108 status=ok
// SIG undefined FUN_140a4889e(void)

longlong FUN_140a4889e(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x138);
    lVar2 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
    do {
      if (*(ulonglong **)(lVar1 + 0x50) == (ulonglong *)0x0) {
        uVar4 = 0;
        uVar3 = 0;
      }
      else {
        uVar4 = **(ulonglong **)(lVar1 + 0x50);
        uVar3 = uVar4 & 0xffffffff;
        uVar4 = uVar4 & 0xffffffff00000000;
      }
      if (*param_2 == *(ulonglong *)(lVar1 + 0x48)) {
        return lVar1;
      }
      if ((uVar3 | uVar4) != 0 && *param_2 == (uVar3 | uVar4)) {
        return lVar1;
      }
      lVar1 = lVar1 + 0xa8;
      lVar2 = lVar2 + -0xa8;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 140a4890a FUN_140a4890a body=194 status=ok
// SIG undefined FUN_140a4890a(void)

int FUN_140a4890a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = FUN_140fcdefe(param_1 + 0xf0);
    iVar6 = 0;
    if ((-1 < (int)uVar3) && (iVar6 = 0, (int)uVar3 < *(int *)(param_1 + 0x120))) {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x118) + (ulonglong)uVar3 * 4);
    }
    if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
      plVar7 = *(longlong **)(param_1 + 0xb0);
      plVar1 = plVar7 + *(int *)(param_1 + 0xb8);
      do {
        lVar2 = *plVar7;
        if ((lVar2 != 0) && (lVar5 = FUN_140a489cc(lVar2), lVar5 == param_2)) {
          if ((longlong)*(int *)(lVar2 + 0x140) == 0) {
            iVar4 = 0;
          }
          else {
            lVar5 = 0;
            iVar4 = 0;
            do {
              iVar4 = iVar4 + *(int *)(*(longlong *)(lVar2 + 0x138) + 0x94 + lVar5);
              lVar5 = lVar5 + 0xa8;
            } while ((longlong)*(int *)(lVar2 + 0x140) * 0xa8 - lVar5 != 0);
          }
          iVar6 = iVar6 - iVar4;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
  }
  return iVar6;
}



// FUNCTION 140a489cc FUN_140a489cc body=155 status=ok
// SIG undefined FUN_140a489cc(void)

void FUN_140a489cc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    uVar4 = FUN_140e2014e();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x110) = lVar3;
  }
  if (((*(longlong *)(param_1 + 0x118) != 0) || (lVar3 == 0)) ||
     (*(longlong *)(param_1 + 0x108) == 0)) goto LAB_140a489ee;
  plVar1 = *(longlong **)(lVar3 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_140a48a63:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))();
    if (cVar2 == '\0') goto LAB_140a48a63;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x108));
  }
  *(undefined8 *)(param_1 + 0x118) = uVar4;
LAB_140a489ee:
  FUN_140a48a68();
  return;
}



// FUNCTION 140a48a68 FUN_140a48a68 body=136 status=ok
// SIG undefined FUN_140a48a68(void)

void FUN_140a48a68(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_145764ed6();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140a48af0 FUN_140a48af0 body=2197 status=ok
// SIG undefined FUN_140a48af0(void)

void FUN_140a48af0(undefined8 param_1,undefined8 *param_2,ulonglong *param_3,byte param_4)

{
  int *_Src;
  void *_Src_00;
  undefined8 uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  byte local_101;
  longlong local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  int local_dc;
  int *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int local_90 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar6 = (longlong *)FUN_141188014();
  if (plVar6 == (longlong *)0x0) goto LAB_140a48b43;
  local_100 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (local_100 == 0) goto LAB_140a48b43;
  local_b8 = local_90;
  local_98 = (undefined4)*param_2;
  uStack_94 = (undefined4)((ulonglong)*param_2 >> 0x20);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = local_78 & 0xffffffff00000000;
  lStack_70 = 0;
  lStack_68 = 0;
  local_c0 = &local_98;
  FUN_14581cf4c(&local_88);
  lVar7 = FUN_140b3986e(&local_88);
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if ((lVar7 == 0) || (iVar13 = *(int *)(local_100 + 0xb8), (longlong)iVar13 == 0))
  goto LAB_140a48b43;
  lVar21 = *(longlong *)(local_100 + 0xb0);
  lVar19 = 0;
  do {
    lVar12 = *(longlong *)(lVar21 + lVar19);
    if (lVar12 != 0) {
      lVar8 = FUN_1401cd362(lVar12);
      if (lVar8 == lVar7) {
        cVar3 = FUN_140a30ba2(lVar12);
        puVar2 = local_c0;
        if (cVar3 != '\0') {
          lVar7 = FUN_140a4889e(lVar12);
          puVar2 = local_c0;
          if (lVar7 != 0) {
            local_c0._0_4_ = 0;
            local_c0._4_4_ = 0;
            local_b8._0_4_ = *(int *)(lVar7 + 0x88);
            lVar21 = (longlong)(int)local_b8;
            _Src_00 = *(void **)(lVar7 + 0x80);
            local_e8 = lVar12;
            if (lVar21 == 0) {
              local_b8._4_4_ = 0;
            }
            else {
              FUN_14651dd56(&local_c0,(int)local_b8,0);
              memcpy((void *)CONCAT44(local_c0._4_4_,(undefined4)local_c0),_Src_00,lVar21 << 3);
            }
            local_98 = 0;
            uStack_94 = 0;
            local_90[0] = 4;
            FUN_144a06ca8(&local_98);
            puVar2 = (undefined4 *)CONCAT44(uStack_94,local_98);
            *puVar2 = 0;
            puVar2[1] = 1;
            puVar2[2] = 2;
            puVar2[3] = 3;
            if ((longlong)(int)local_b8 == 0) goto LAB_140a4909b;
            plVar6 = (longlong *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
            local_c8 = plVar6 + (int)local_b8;
            local_d0 = lVar7;
            goto LAB_140a48cfe;
          }
        }
        break;
      }
    }
    lVar19 = lVar19 + 8;
    puVar2 = local_c0;
  } while ((longlong)iVar13 * 8 != lVar19);
  goto LAB_140a490bc;
LAB_140a4929e:
  if ((~uVar9 & 0x7fffffff8) != 0) {
    local_c0._0_4_ = 0xffffffff;
    uVar1 = *(undefined8 *)(*(longlong *)(lVar12 + (lVar8 >> 0x20) * 8) + 0x48);
    local_c0._4_4_ = (undefined4)uVar1;
    local_b8._0_4_ = (int)((ulonglong)uVar1 >> 0x20);
    local_98 = 0xffffffff;
    uStack_94 = (undefined4)*(undefined8 *)(lVar21 + 0x48);
    local_90[0] = (int)((ulonglong)*(undefined8 *)(lVar21 + 0x48) >> 0x20);
    local_78 = 0;
    lStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_110 = 0;
    local_118 = 0;
    lStack_68 = lVar7;
    FUN_145941cc4(local_100,&local_88,&local_98,&local_c0);
  }
LAB_140a492b0:
  lVar21 = lVar21 + 0x88;
  if (lVar21 == lVar19) goto LAB_140a4933f;
  goto LAB_140a49130;
LAB_140a48cfe:
  do {
    lVar21 = *plVar6;
    if ((*(byte *)(lVar7 + 0x91) & param_4) == 1) {
      local_a0 = *(undefined8 *)(lVar7 + 0x48);
      local_ac = *(undefined8 *)(lVar21 + 0x48);
      local_110 = 0;
      local_118 = 0;
LAB_140a48fef:
      lStack_70 = 0;
      local_78 = 0;
      uStack_80 = 0;
      local_88 = 0;
      local_a4 = 0xffffffff;
      local_b0 = 0xffffffff;
      lStack_68 = local_e8;
      FUN_145941cc4(local_100,&local_88,&local_b0,&local_a4);
    }
    else {
      iVar13 = FUN_1413d6430(lVar21);
      iVar4 = FUN_1413d64c6(lVar21);
      if (iVar4 <= iVar13) {
        iVar13 = FUN_1413d64c6(lVar21);
        lVar7 = (longlong)*(int *)(lVar21 + 0x68);
        if (lVar7 != 0) {
          uVar9 = lVar7 * 8 - 8;
          lVar7 = lVar7 << 0x20;
          do {
            lVar7 = lVar7 + -0x100000000;
            lVar19 = *(longlong *)(*(longlong *)(lVar21 + 0x60) + uVar9);
            if ((*(char *)(lVar19 + 0x91) == '\x01') && (*(int *)(lVar19 + 0x9c) == iVar13 + -1)) {
              if (*(ulonglong **)(lVar19 + 0x50) == (ulonglong *)0x0) {
                uVar18 = 0;
                uVar17 = 0;
              }
              else {
                uVar18 = **(ulonglong **)(lVar19 + 0x50);
                uVar17 = uVar18 & 0xffffffff;
                uVar18 = uVar18 & 0xffffffff00000000;
              }
              if ((*param_3 != *(ulonglong *)(lVar19 + 0x48)) &&
                 (((uVar17 | uVar18) == 0 || (*param_3 != (uVar17 | uVar18))))) {
                if ((~uVar9 & 0x7fffffff8) != 0) {
                  local_a4 = 0xffffffff;
                  local_a0 = *(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar21 + 0x60) + (lVar7 >> 0x20) * 8) +
                              0x48);
                  local_b0 = 0xffffffff;
                  local_ac = *(undefined8 *)(lVar21 + 0x48);
                  local_78 = 0;
                  lStack_70 = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  lStack_68 = local_e8;
                  local_110 = 0;
                  local_118 = 0;
                  FUN_145941cc4(local_100,&local_88,&local_b0,&local_a4);
                }
                break;
              }
            }
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0xfffffffffffffff8);
        }
      }
      if ((longlong)*(int *)(lVar21 + 0x68) != 0) {
        plVar20 = *(longlong **)(lVar21 + 0x60);
        plVar14 = plVar20 + *(int *)(lVar21 + 0x68);
        do {
          iVar13 = local_90[0];
          iVar4 = local_90[0];
          if ((*(char *)(*plVar20 + 0x91) == '\x01') && (lVar7 = (longlong)local_90[0], lVar7 != 0))
          {
            local_dc = *(int *)(*plVar20 + 0x9c);
            local_d8 = (int *)CONCAT44(uStack_94,local_98);
            iVar5 = 0;
            bVar11 = *local_d8 == local_dc;
            iVar4 = 0;
            do {
              local_f4 = iVar4;
              local_f8 = CONCAT31(local_f8._1_3_,bVar11);
              local_101 = bVar11 ^ 1;
              local_f0 = (longlong)iVar5;
              lVar19 = local_f0;
              iVar15 = iVar5;
              iVar4 = iVar5 + 1;
              if (iVar5 + 1 < iVar13) {
                iVar4 = iVar13;
              }
              do {
                lVar19 = lVar19 + 1;
                iVar10 = iVar4;
                if (lVar7 <= lVar19) break;
                iVar10 = iVar15 + 1;
                iVar15 = iVar10;
              } while ((bool)(bVar11 & 1) == (local_d8[lVar19] == local_dc));
              iVar4 = local_f4;
              if ((bVar11 & 1) == 0) {
                iVar4 = iVar10 - iVar5;
                if (local_f4 != iVar5) {
                  _Src = local_d8 + local_f0;
                  local_f8 = iVar10;
                  local_f0 = lVar19;
                  local_e0 = iVar4;
                  memmove(local_d8 + local_f4,_Src,(longlong)iVar4 << 2);
                  lVar19 = local_f0;
                  iVar4 = local_e0;
                  iVar10 = local_f8;
                }
                iVar4 = local_f4 + iVar4;
              }
              iVar5 = iVar10;
              bVar11 = local_101;
            } while (lVar19 < lVar7);
          }
          local_90[0] = iVar4;
          plVar20 = plVar20 + 1;
        } while (plVar20 != plVar14);
      }
      lVar7 = local_d0;
      if (0 < local_90[0]) {
        local_110 = *(undefined4 *)CONCAT44(uStack_94,local_98);
        local_a0 = *(undefined8 *)(local_d0 + 0x48);
        local_ac = *(undefined8 *)(lVar21 + 0x48);
        local_118 = 1;
        goto LAB_140a48fef;
      }
    }
    plVar6 = plVar6 + 1;
  } while (plVar6 != local_c8);
LAB_140a4909b:
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined4 *)0x0;
  if (CONCAT44(local_c0._4_4_,(undefined4)local_c0) != 0) {
    FUN_1400020a8();
    puVar2 = (undefined4 *)CONCAT44(local_c0._4_4_,(undefined4)local_c0);
  }
LAB_140a490bc:
  local_c0 = puVar2;
  if ((longlong)*(int *)(local_100 + 0xb8) != 0) {
    plVar6 = *(longlong **)(local_100 + 0xb0);
    plVar20 = plVar6 + *(int *)(local_100 + 0xb8);
    do {
      lVar7 = *plVar6;
      cVar3 = FUN_140a30ba2(lVar7);
      if ((cVar3 != '\0') && ((longlong)*(int *)(lVar7 + 0x150) != 0)) {
        lVar21 = *(longlong *)(lVar7 + 0x148);
        lVar19 = (longlong)*(int *)(lVar7 + 0x150) * 0x88 + lVar21;
LAB_140a49130:
        if ((longlong)*(int *)(lVar21 + 0x68) == 0) {
          iVar13 = 0;
        }
        else {
          lVar12 = 0;
          iVar13 = 0;
          do {
            iVar13 = iVar13 + (uint)*(byte *)(*(longlong *)(*(longlong *)(lVar21 + 0x60) + lVar12) +
                                             0x91);
            lVar12 = lVar12 + 8;
          } while ((longlong)*(int *)(lVar21 + 0x68) * 8 != lVar12);
        }
        iVar5 = FUN_1413d64c6(lVar21);
        iVar4 = *(int *)(lVar21 + 0x68);
        lVar8 = (longlong)iVar4;
        lVar12 = *(longlong *)(lVar21 + 0x60);
        if (iVar5 < iVar13) {
LAB_140a491bb:
          if (iVar4 != 0) {
            uVar9 = lVar8 * 8 - 8;
            lVar8 = lVar8 << 0x20;
            do {
              lVar8 = lVar8 + -0x100000000;
              lVar16 = *(longlong *)(lVar12 + uVar9);
              if ((*(char *)(lVar16 + 0x91) == '\x01') && (*(int *)(lVar16 + 0x9c) == 1)) {
                if (*(ulonglong **)(lVar16 + 0x50) == (ulonglong *)0x0) {
                  uVar18 = 0;
                  uVar17 = 0;
                }
                else {
                  uVar18 = **(ulonglong **)(lVar16 + 0x50);
                  uVar17 = uVar18 & 0xffffffff;
                  uVar18 = uVar18 & 0xffffffff00000000;
                }
                if ((*param_3 != *(ulonglong *)(lVar16 + 0x48)) &&
                   (((uVar17 | uVar18) == 0 || (*param_3 != (uVar17 | uVar18)))))
                goto LAB_140a4929e;
              }
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0xfffffffffffffff8);
          }
        }
        else if (iVar4 != 0) {
          lVar16 = 0;
          iVar15 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar12 + lVar16) + 0x9c) == 1) {
              iVar15 = iVar15 + (uint)*(byte *)(*(longlong *)(lVar12 + lVar16) + 0x91);
            }
            lVar16 = lVar16 + 8;
          } while (lVar8 * 8 - lVar16 != 0);
          if ((iVar5 == 1) && (0 < iVar15)) goto LAB_140a491bb;
          if ((iVar13 < 2) && (0 < iVar15)) {
            uVar9 = lVar8 * 8 - 8;
            lVar8 = lVar8 << 0x20;
            do {
              lVar8 = lVar8 + -0x100000000;
              lVar16 = *(longlong *)(lVar12 + uVar9);
              if ((*(char *)(lVar16 + 0x91) == '\x01') && (*(int *)(lVar16 + 0x9c) == 0)) {
                if (*(ulonglong **)(lVar16 + 0x50) == (ulonglong *)0x0) {
                  uVar18 = 0;
                  uVar17 = 0;
                }
                else {
                  uVar18 = **(ulonglong **)(lVar16 + 0x50);
                  uVar17 = uVar18 & 0xffffffff;
                  uVar18 = uVar18 & 0xffffffff00000000;
                }
                if ((*param_3 != *(ulonglong *)(lVar16 + 0x48)) &&
                   (((uVar17 | uVar18) == 0 || (*param_3 != (uVar17 | uVar18)))))
                goto LAB_140a4929e;
              }
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0xfffffffffffffff8);
          }
        }
        goto LAB_140a492b0;
      }
LAB_140a4933f:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar20);
  }
LAB_140a48b43:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a49386 FUN_140a49386 body=114 status=ok
// SIG undefined FUN_140a49386(void)

void FUN_140a49386(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_140a493f8(param_1[0x15]);
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a493dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140a493f8 FUN_140a493f8 body=439 status=ok
// SIG undefined FUN_140a493f8(void)

void FUN_140a493f8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 0x68) != -1)) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_140393c76(&local_68,*(int *)(param_1 + 0x68),1);
    lVar1 = local_68;
    iVar2 = *(int *)(param_1 + 0x60);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
    FUN_1401a700c(&local_4c,0x101);
    local_88 = 0;
    local_90 = 0;
    local_98 = (longlong)iVar2;
    cVar5 = FUN_140aa9920(local_4c,lVar1,(longlong)iVar3,uVar4);
    if (cVar5 != '\0') {
      if (&local_68 != (longlong *)(param_1 + 0x58)) {
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x58) = local_68;
        local_68 = 0;
        *(undefined4 *)(param_1 + 0x60) = (undefined4)uStack_60;
        *(undefined4 *)(param_1 + 100) = uStack_60._4_4_;
        uStack_60 = 0;
      }
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar1 = param_1 + 0x70;
      if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x60)) {
        FUN_144893a1c(lVar1);
      }
      local_78 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        local_78 = *(longlong *)(param_1 + 0xa8);
      }
      local_70 = *(undefined4 *)(param_1 + 0xb0);
      FUN_141023512(*(undefined8 *)(param_1 + 0x58),lVar1);
      if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x78)) {
        FUN_144893a1c(lVar1);
      }
      if ((*(char *)(param_1 + 0xb9) == '\x01') && (0 < *(int *)(param_1 + 0x78))) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        if (*(int *)(param_1 + 100) != 0) {
          FUN_144893a1c((longlong *)(param_1 + 0x58),0);
        }
        *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      }
    }
  }
  *(undefined1 *)(param_1 + 0xba) = 1;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a495b0 FUN_140a495b0 body=83 status=ok
// SIG undefined FUN_140a495b0(void)

longlong FUN_140a495b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      uVar5 = FUN_140a49604();
      cVar4 = FUN_1448093f4(lVar2,uVar5);
      if ((cVar4 != '\0') && (lVar2 != 0)) {
        return lVar2;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return 0;
}



// FUNCTION 140a49604 FUN_140a49604 body=57 status=ok
// SIG undefined FUN_140a49604(void)

void FUN_140a49604(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b460 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b460 = FUN_140002ddd(FUN_14652bb8a,uVar1,L"GbxContextParam_PlayerSpawningLoot");
  }
  return;
}



// FUNCTION 140a4964c FUN_140a4964c body=40 status=ok
// SIG undefined FUN_140a4964c(void)

undefined8 FUN_140a4964c(undefined8 param_1,int param_2)

{
  FUN_140a49674();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a49674 FUN_140a49674 body=426 status=ok
// SIG undefined FUN_140a49674(void)

void FUN_140a49674(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b950;
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  FUN_14494dff0(param_1 + 0x7e);
  FUN_14494dff0(param_1 + 0x5a);
  FUN_14494dff0(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2e];
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
  plVar3 = (longlong *)param_1[0x23];
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
  plVar3 = (longlong *)param_1[0x1d];
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
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x000140a497dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a4981e FUN_140a4981e body=75 status=ok
// SIG undefined FUN_140a4981e(void)

void FUN_140a4981e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a4986a FUN_140a4986a body=491 status=ok
// SIG undefined FUN_140a4986a(void)

void FUN_140a4986a(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar10 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar5 = (longlong)iVar7;
      FUN_140a49a56(*(undefined8 *)(lVar11 + 0x10 + lVar5 * 0x28),
                    *(undefined4 *)(lVar11 + 0x18 + lVar5 * 0x28));
      if (*(longlong *)(lVar11 + 0x10 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar5 * 0x28 + lVar11) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar12;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar7 <= iVar13) break;
        lVar5 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar5 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar3 - lVar11 == lVar5) goto LAB_140a499be;
        }
        iVar13 = iVar13 + (int)lVar5 + 1;
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_140a499be:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a49a56 FUN_140a49a56 body=73 status=ok
// SIG undefined FUN_140a49a56(void)

void FUN_140a49a56(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a49aa0 FUN_140a49aa0 body=42 status=ok
// SIG undefined FUN_140a49aa0(void)

void FUN_140a49aa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140a49aca(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140a49aca FUN_140a49aca body=106 status=ok
// SIG undefined FUN_140a49aca(void)

void FUN_140a49aca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_140a49b34(param_1 + 0x48);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a49b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140a49b34 FUN_140a49b34 body=648 status=ok
// SIG undefined FUN_140a49b34(void)

void FUN_140a49b34(longlong param_1)

{
  FUN_140a49e45(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49df3(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x138);
  if (*(char *)(param_1 + 0x120) == '\x01') {
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49e72(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49e1c(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140a49dbc FUN_140a49dbc body=55 status=ok
// SIG undefined FUN_140a49dbc(void)

void FUN_140a49dbc(longlong *param_1)

{
  FUN_140a4a140(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a49df3 FUN_140a49df3 body=41 status=ok
// SIG undefined FUN_140a49df3(void)

void FUN_140a49df3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140a49ea0(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 140a49e1c FUN_140a49e1c body=41 status=ok
// SIG undefined FUN_140a49e1c(void)

void FUN_140a49e1c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140a49fb6(param_1);
    param_1 = param_1 + 0x168;
  }
  return;
}



// FUNCTION 140a49e45 FUN_140a49e45 body=45 status=ok
// SIG undefined FUN_140a49e45(void)

void FUN_140a49e45(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140a49e72 FUN_140a49e72 body=45 status=ok
// SIG undefined FUN_140a49e72(void)

void FUN_140a49e72(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140a49ea0 FUN_140a49ea0 body=277 status=ok
// SIG undefined FUN_140a49ea0(void)

void FUN_140a49ea0(longlong *param_1)

{
  if ((char)param_1[0x16] == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  FUN_1447a1747(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140a49fb6 FUN_140a49fb6 body=393 status=ok
// SIG undefined FUN_140a49fb6(void)

void FUN_140a49fb6(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x30);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140a4a140 FUN_140a4a140 body=570 status=ok
// SIG undefined FUN_140a4a140(void)

void FUN_140a4a140(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    uVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 & 0xffffffff;
    uVar14 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar9 = local_58._4_4_;
  uVar11 = (uint)local_58;
  iVar13 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *param_1;
      lVar5 = (longlong)iVar9;
      local_74 = iVar13;
      local_70 = uVar15;
      FUN_1447a1747(*(undefined8 *)(lVar12 + 0x10 + lVar5 * 0x28),
                    *(undefined4 *)(lVar12 + 0x18 + lVar5 * 0x28));
      if (*(longlong *)(lVar12 + 0x10 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar5 * 0x28 + lVar12) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      plVar10 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar10 = plVar4;
      }
      iVar3 = (int)plVar4[3];
      iVar9 = (int)local_70;
      lVar12 = (longlong)iVar9;
      uVar6 = *(uint *)((longlong)plVar10 + lVar12 * 4) & uVar11;
      uVar15 = local_70;
      iVar13 = local_74;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar5 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = *(uint *)((longlong)plVar10 + lVar5 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar8 - lVar12 == lVar5) goto LAB_140a4a1ba;
        }
        uVar11 = 0xffffffff;
        uVar15 = (ulonglong)(iVar9 + (int)lVar5 + 1);
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar3);
  }
LAB_140a4a1ba:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar6 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4a37c FUN_140a4a37c body=77 status=ok
// SIG undefined FUN_140a4a37c(void)

void FUN_140a4a37c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  param_2 = (undefined8 *)*param_2;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000140a4a3c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2,param_4);
  return;
}



// FUNCTION 140a4a3dc FUN_140a4a3dc body=506 status=ok
// SIG undefined FUN_140a4a3dc(void)

void FUN_140a4a3dc(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  iVar2 = *(int *)(param_1 + 0x3c8);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x3c0);
    if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x3b0);
    }
    uVar15 = *puVar6;
    if (uVar15 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140a4a571;
        iVar10 = iVar10 + 0x20;
        uVar15 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar15 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0x3a0) + (longlong)iVar5 * 0x18;
      (**(code **)(*param_2 + 0x88))(param_2,lVar11,param_1,0);
      plVar4 = *(longlong **)(*(longlong *)(lVar11 + 8) + 8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,param_1,param_2);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar6 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x3b0);
      }
      iVar3 = *(int *)(param_1 + 0x3c8);
      iVar5 = (int)uVar13;
      lVar11 = (longlong)iVar5;
      uVar9 = puVar6[lVar11] & uVar15;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar13 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140a4a542;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar15 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar13 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_140a4a542:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_140a4a571:
                    /* WARNING: Could not recover jumptable at 0x000140a4a595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  return;
}



// FUNCTION 140a4a5fe FUN_140a4a5fe body=64 status=ok
// SIG undefined FUN_140a4a5fe(void)

void FUN_140a4a5fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140a4a63e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 140a4a63e FUN_140a4a63e body=87 status=ok
// SIG undefined FUN_140a4a63e(void)

ulonglong FUN_140a4a63e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
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



// FUNCTION 140a4a6a4 FUN_140a4a6a4 body=40 status=ok
// SIG undefined FUN_140a4a6a4(void)

undefined8 FUN_140a4a6a4(undefined8 param_1,int param_2)

{
  FUN_140a4a6cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a4a6cc FUN_140a4a6cc body=291 status=ok
// SIG undefined FUN_140a4a6cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a4a6cc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14b198c00;
  plVar2 = (longlong *)param_1[0x10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140a4a7ef(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x000140a4a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140a4a7ef FUN_140a4a7ef body=47 status=ok
// SIG undefined FUN_140a4a7ef(void)

void FUN_140a4a7ef(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a4a81e FUN_140a4a81e body=185 status=ok
// SIG undefined FUN_140a4a81e(void)

void FUN_140a4a81e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_140a4a8d8(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4a8d8 FUN_140a4a8d8 body=338 status=ok
// SIG undefined FUN_140a4a8d8(void)

longlong * FUN_140a4a8d8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  local_3c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_3c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_3c) {
      FUN_140491bf8(param_2);
    }
    FUN_140b19cbc(param_2,local_3c,1);
    if (0 < local_3c) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar3 = *param_2;
        FUN_140a4aa2c(param_1,lVar3 + lVar4);
        FUN_1447712aa(param_1,lVar3 + lVar4 + 0x10);
        FUN_1447712aa(param_1,lVar3 + lVar4 + 0x20);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *(undefined4 *)(lVar3 + 0x1c + lVar4) = 0;
          *(undefined4 *)(lVar3 + 0x2c + lVar4) = 0;
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x30;
      } while (lVar5 < local_3c);
    }
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_3c);
}



// FUNCTION 140a4aa2c FUN_140a4aa2c body=345 status=ok
// SIG undefined FUN_140a4aa2c(void)

longlong * FUN_140a4aa2c(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140a4ab86 FUN_140a4ab86 body=59 status=ok
// SIG undefined FUN_140a4ab86(void)

void FUN_140a4ab86(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140a4abc2(param_1 + 0x6070);
  FUN_140a4abf4(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140a4abc2 FUN_140a4abc2 body=49 status=ok
// SIG undefined FUN_140a4abc2(void)

void FUN_140a4abc2(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  if (*param_2 != DAT_14cbc67a8) {
    return;
  }
  uVar1 = FUN_1407eda54(*param_3);
  FUN_14034f21c(param_1,uVar1);
  return;
}



// FUNCTION 140a4abf4 FUN_140a4abf4 body=1279 status=ok
// SIG undefined FUN_140a4abf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a4abf4(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  char local_98 [4];
  undefined8 local_94;
  int local_8c;
  undefined8 local_88;
  int local_7c;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)(param_1 + 0x2c0);
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x360) != 0)) {
    lVar7 = 0;
    do {
      if (*(ulonglong *)(*(longlong *)(lVar8 + 0x358) + lVar7) == *param_2) {
        if (*(char *)(param_1 + -0xfc0) != '\x03') goto LAB_140a4ac71;
        lVar8 = param_1 + 0xdd0;
        if (*(longlong *)(param_1 + 0x16d0) != 0) {
          lVar8 = *(longlong *)(param_1 + 0x16d0);
        }
        if ((longlong)*(int *)(param_1 + 0x16d8) == 0) goto LAB_140a4ac71;
        lVar7 = (longlong)*(int *)(param_1 + 0x16d8) * 0x48;
        goto LAB_140a4ad92;
      }
      lVar7 = lVar7 + 0xc;
    } while ((longlong)*(int *)(lVar8 + 0x360) * 0xc != lVar7);
  }
  puVar6 = ram0x00014cb71294;
  if ((ram0x00014cb71294 == DAT_14c948034) &&
     (puVar6 = DAT_14c948034, (int)DAT_14cb71290 != DAT_14c948030)) {
    FUN_14011791e(&local_88,(int)DAT_14cb71290,(ulonglong)ram0x00014cb71294 >> 0x20);
    unique0x00023e00 = local_88;
    puVar6 = local_88;
  }
  if ((undefined8 *)*param_2 == puVar6) {
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
    local_7c = 0;
    FUN_144976b9c(&local_88,*param_3);
    if ((char)local_88 == '\x01') {
      *(bool *)(param_1 + 0x2cd) = local_7c != 0;
      *(undefined1 *)(param_1 + 0x2ce) = 1;
    }
    else if (*(char *)(param_1 + 0x2ce) == '\x01') {
      *(undefined1 *)(param_1 + 0x2ce) = 0;
    }
  }
  goto LAB_140a4ac71;
  while( true ) {
    lVar8 = lVar8 + 0x48;
    lVar7 = lVar7 + -0x48;
    if (lVar7 == 0) break;
LAB_140a4ad92:
    if (*(ulonglong *)(lVar8 + 0x28) == *param_2) {
      if (lVar8 != 0) {
        local_70 = 0;
        local_68 = 0;
        local_98[0] = '\0';
        local_94 = 0;
        local_8c = 0;
        FUN_144976b9c(local_98,*param_3);
        cVar1 = *(char *)(lVar8 + 0x20);
        if (cVar1 == '\x01') {
          if (local_98[0] == '\x01') {
            uVar3 = (uint)(local_8c != 0);
          }
          else {
            uVar3 = FUN_140321d1a(local_98);
          }
          if (local_68 == 1) {
            local_88 = (undefined8 *)(CONCAT44(local_88._4_4_,uVar3) & 0xffffffff000000ff);
          }
          else {
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
            if (pcVar2 != (code *)0x0) {
              puVar6 = local_88;
              if (local_70 < 0x19) {
                puVar6 = &local_88;
              }
              (*pcVar2)(puVar6);
            }
            if (0x18 < local_70) {
              FUN_1400020a8(local_88);
            }
            local_70 = 4;
            local_88 = (undefined8 *)(CONCAT44(local_88._4_4_,uVar3) & 0xffffffff000000ff);
            local_68 = 1;
          }
LAB_140a4ae4d:
          FUN_1402b90a2(param_1 + 0xdc0,param_2,&local_88);
          uVar3 = (uint)local_68;
        }
        else {
          if (cVar1 == '\x02') {
            uVar4 = FUN_140e195fa(local_98);
            if (local_68 == 2) {
              local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar4);
            }
            else {
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
              if (pcVar2 != (code *)0x0) {
                puVar6 = local_88;
                if (local_70 < 0x19) {
                  puVar6 = &local_88;
                }
                (*pcVar2)(puVar6);
              }
              if (0x18 < local_70) {
                FUN_1400020a8(local_88);
              }
              local_70 = 4;
              local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar4);
              local_68 = 2;
            }
            goto LAB_140a4ae4d;
          }
          if (cVar1 == '\x12') {
            FUN_1403a0728(local_98,&local_a0);
            if (local_68 == 0x12) {
              local_88 = local_a0;
            }
            else {
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
              if (pcVar2 != (code *)0x0) {
                puVar6 = local_88;
                if (local_70 < 0x19) {
                  puVar6 = &local_88;
                }
                (*pcVar2)(puVar6);
              }
              if (0x18 < local_70) {
                FUN_1400020a8(local_88);
              }
              local_70 = 8;
              local_88 = local_a0;
              local_68 = 0x12;
            }
            goto LAB_140a4ae4d;
          }
          if (cVar1 == '\x03') {
            iVar5 = FUN_140e195fa(local_98);
            if (local_68 == 3) {
              local_88 = (undefined8 *)CONCAT44(local_88._4_4_,(float)iVar5);
            }
            else {
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
              if (pcVar2 != (code *)0x0) {
                puVar6 = local_88;
                if (local_70 < 0x19) {
                  puVar6 = &local_88;
                }
                (*pcVar2)(puVar6);
              }
              if (0x18 < local_70) {
                FUN_1400020a8(local_88);
              }
              local_70 = 4;
              local_88 = (undefined8 *)CONCAT44(local_88._4_4_,(float)iVar5);
              local_68 = 3;
            }
            goto LAB_140a4ae4d;
          }
          if (local_68 != 0) goto LAB_140a4ae4d;
          uVar3 = 0;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
        if (pcVar2 != (code *)0x0) {
          puVar6 = local_88;
          if (local_70 < 0x19) {
            puVar6 = &local_88;
          }
          (*pcVar2)(puVar6);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88);
        }
      }
      break;
    }
  }
LAB_140a4ac71:
  local_a8 = param_5;
  FUN_14063fe71(param_1 + 0x148,param_2,param_3,param_4);
  FUN_14063fdb1(param_1 + -0x8a0,param_2,param_3);
  FUN_140640638(param_1 + -0x98,param_2,param_3);
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a4b0f4 FUN_140a4b0f4 body=48 status=ok
// SIG undefined FUN_140a4b0f4(void)

longlong FUN_140a4b0f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe0;
  FUN_140a4b124(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a4b124 FUN_140a4b124 body=336 status=ok
// SIG undefined FUN_140a4b124(void)

void FUN_140a4b124(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_14a915860;
  param_1[0x1c] = &PTR_FUN_14a915890;
  lVar8 = param_1[0x50];
  if (lVar8 != 0) {
    if (*(longlong *)(lVar8 + 0x148) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar8 + 0x140) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(lVar8 + 0x140) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    FUN_1400020a8(lVar8);
  }
  param_1[0x4b] = 0;
  FUN_14020abd2(param_1 + 0x1c);
  *param_1 = &PTR_LAB_14a915960;
  lVar8 = 0x38;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + 8);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar9) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar9 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar9) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
    if (*(longlong *)((longlong)param_1 + lVar8) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar8) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != 0x18);
  return;
}



// FUNCTION 140a4b274 FUN_140a4b274 body=182 status=ok
// SIG undefined FUN_140a4b274(void)

void FUN_140a4b274(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
    FUN_140a4b32a(*(undefined8 *)(param_1 + 0x20),param_1);
    return;
  }
  return;
}



// FUNCTION 140a4b32a FUN_140a4b32a body=252 status=ok
// SIG undefined FUN_140a4b32a(void)

void FUN_140a4b32a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0xd70);
    if ((longlong)iVar2 != 0) {
      lVar1 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xd68) + lVar1) == param_2) {
          return;
        }
        lVar1 = lVar1 + 8;
      } while ((longlong)iVar2 * 8 - lVar1 != 0);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
      iVar2 = *(int *)(param_1 + 0xd70);
    }
    *(uint *)(param_1 + 0xd70) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xd74) < iVar2 + 1U) {
      FUN_140a4b5ea((longlong *)(param_1 + 0xd68),iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xd68) + (longlong)iVar2 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    if ((*(byte *)(param_2 + 0x28) & 2) != 0) {
      iVar2 = *(int *)(param_1 + 0xd80);
      *(uint *)(param_1 + 0xd80) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xd84) < iVar2 + 1U) {
        FUN_140a4b488(param_1 + 0xd78,iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xd78) + (longlong)iVar2 * 8) = param_2;
      FUN_140a4b426(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140a4b426 FUN_140a4b426 body=97 status=ok
// SIG undefined FUN_140a4b426(void)

void FUN_140a4b426(longlong param_1,longlong param_2,undefined4 param_3)

{
  if (((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) &&
     ((*(uint *)(param_2 + 8) & 0x30) == 0)) {
    FUN_140bf259a(param_1 + 0x210,param_2);
    if (((*(byte *)(param_1 + 99) & 8) != 0) && ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10)) {
      FUN_1417e3b60(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140a4b488 FUN_140a4b488 body=353 status=ok
// SIG undefined FUN_140a4b488(void)

void FUN_140a4b488(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a4b50d;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a4b50d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a4b5ea FUN_140a4b5ea body=353 status=ok
// SIG undefined FUN_140a4b5ea(void)

void FUN_140a4b5ea(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a4b66f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a4b66f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a4b74c FUN_140a4b74c body=31 status=ok
// SIG undefined FUN_140a4b74c(void)

undefined1
FUN_140a4b74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140a4b76c(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 140a4b76c FUN_140a4b76c body=147 status=ok
// SIG undefined FUN_140a4b76c(void)

undefined8 FUN_140a4b76c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[1];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (((param_1[1] == lVar1) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) &&
     (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*param_1 + 0x108))(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x108))(param_1);
      cVar3 = (**(code **)(*param_2 + 0x108))(param_2);
      if (cVar2 == cVar3) {
                    /* WARNING: Could not recover jumptable at 0x000140a4b7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*param_1 + 0x110))(param_1,param_2);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140a4b800 FUN_140a4b800 body=134 status=ok
// SIG undefined FUN_140a4b800(void)

void FUN_140a4b800(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  uint local_28;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  if ((*(uint *)(param_1 + 8) & 3) == 0) {
    local_20 = &local_18;
    local_28 = *(uint *)(param_1 + 8) >> 3;
    local_18 = uVar1;
    FUN_140a4b88e(param_1 + 0x80,CONCAT71((int7)((ulonglong)local_20 >> 8),1),param_1 + 0xc,
                  *(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  uVar2 = FUN_140135db2(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_144aa451a(uVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4b88e FUN_140a4b88e body=195 status=ok
// SIG undefined FUN_140a4b88e(void)

void FUN_140a4b88e(undefined8 *param_1,char param_2,uint *param_3,longlong param_4,
                  undefined4 param_5,longlong *param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar3 = (undefined8 *)*param_6;
  if (puVar3 != param_1) {
    iVar1 = *(int *)(puVar3 + 1);
    _Src = (void *)*puVar3;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400c0080(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  if (((param_2 != '\0') && (uVar2 = *param_3, *param_3 = uVar2 | 2, param_4 != 0 && uVar2 == 0)) &&
     (*(longlong *)(param_4 + 8) != 0)) {
    FUN_144821112(*(longlong *)(param_4 + 8) + 0x70,param_4,param_5);
    return;
  }
  return;
}



// FUNCTION 140a4b95e FUN_140a4b95e body=117 status=ok
// SIG undefined FUN_140a4b95e(void)

void FUN_140a4b95e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467ff840(param_1,iVar1);
    }
    FUN_140a4b9d3((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1469885b8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140a4b9d3 FUN_140a4b9d3 body=1 status=ok
// SIG undefined FUN_140a4b9d3(void)

void FUN_140a4b9d3(void)

{
  return;
}



// FUNCTION 140a4b9d4 FUN_140a4b9d4 body=356 status=ok
// SIG undefined FUN_140a4b9d4(void)

void FUN_140a4b9d4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *_Dst;
  int iVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x70;
    lVar4 = *(longlong *)(param_1 + 8) + 0x20;
    do {
      FUN_1448729ea(lVar4,local_68,param_2);
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_140a4bb3a(param_3,iVar1);
      }
      _Dst = (undefined8 *)(*param_3 + (longlong)iVar1 * 0x28);
      *(ushort *)(_Dst + 3) = local_50;
      if (local_50 < 0x19) {
        uVar2 = (ulonglong)((uint)local_48 * 0x120);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85b8 + uVar2);
        if ((pcVar5 == (code *)0x0) &&
           (pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar2), pcVar5 == (code *)0x0)) {
          memcpy(_Dst,local_68,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
        }
        else {
          (*pcVar5)(_Dst,local_68);
        }
      }
      else {
        *_Dst = local_68[0];
        local_68[0] = (undefined8 ***)0x0;
        local_50 = 0;
      }
      *(byte *)(_Dst + 4) = local_48;
      local_48 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        pppuVar3 = local_68;
        if (0x18 < local_50) {
          pppuVar3 = (undefined8 ***)local_68[0];
        }
        (*DAT_14c9a85d0)(pppuVar3);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      lVar4 = lVar4 + 0x70;
      lVar6 = lVar6 + -0x70;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4bb3a FUN_140a4bb3a body=373 status=ok
// SIG undefined FUN_140a4bb3a(void)

void FUN_140a4bb3a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a4bbc3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140a4bbc3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140a4bcb0 FUN_140a4bcb0 body=151 status=ok
// SIG undefined FUN_140a4bcb0(void)

void FUN_140a4bcb0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x3a8) == 0) || (0xfffffffd < *(int *)(param_1 + 0x3b0) - 1U)) {
    *(undefined8 *)(param_1 + 0x3e0) = 0;
  }
  else {
    local_48 = *(longlong *)(param_1 + 0x3a8);
    FUN_1446dcdd4(local_40);
    uVar1 = FUN_140a4bd48(local_40);
    *(undefined8 *)(param_1 + 0x3e0) = uVar1;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1401a0912(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4bd48 FUN_140a4bd48 body=138 status=ok
// SIG undefined FUN_140a4bd48(void)

longlong * FUN_140a4bd48(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447a97f4(local_40,param_1);
  plVar1 = (longlong *)FUN_1400d6974(local_40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140a4bdd4();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_140a4bdb1;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_140a4bdb1:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4bdd4 FUN_140a4bdd4 body=57 status=ok
// SIG undefined FUN_140a4bdd4(void)

void FUN_140a4bdd4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e9d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e9d0 = FUN_140002ddd(FUN_14185fbef,uVar1,L"ProjectileDef");
  }
  return;
}



// FUNCTION 140a4be0e FUN_140a4be0e body=251 status=ok
// SIG undefined FUN_140a4be0e(void)

undefined4 FUN_140a4be0e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x120))();
  lVar3 = (**(code **)(*param_2 + 0x120))(param_2);
  if ((lVar2 == 0) || (lVar3 == 0)) {
    return 0;
  }
  if (((ABS(*(double *)(lVar2 + 0x18) - *(double *)(lVar3 + 0x18)) <= 200.0) &&
      (ABS(*(double *)(lVar2 + 0x20) - *(double *)(lVar3 + 0x20)) <= 200.0)) &&
     (ABS(*(double *)(lVar2 + 0x28) - *(double *)(lVar3 + 0x28)) <= 200.0)) {
    uVar1 = *(uint *)(lVar2 + 0x58);
    if (uVar1 == *(uint *)(lVar3 + 0x58)) {
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (10.0 < ABS(*(float *)(*(longlong *)(lVar2 + 0x50) + uVar4 * 4) -
                         *(float *)(*(longlong *)(lVar3 + 0x50) + uVar4 * 4))) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
      }
      if (*(char *)(lVar2 + 0xa8) == *(char *)(lVar3 + 0xa8)) {
        return CONCAT31((int3)(uVar1 >> 8),*(char *)(lVar2 + 0xa9) == *(char *)(lVar3 + 0xa9));
      }
    }
  }
  return 0;
}



// FUNCTION 140a4bf1a FUN_140a4bf1a body=12 status=ok
// SIG undefined FUN_140a4bf1a(void)

void FUN_140a4bf1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140a4bf23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140a4bf26 FUN_140a4bf26 body=31 status=ok
// SIG undefined FUN_140a4bf26(void)

undefined8 FUN_140a4bf26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a4bf46 FUN_140a4bf46 body=2174 status=ok
// SIG undefined FUN_140a4bf46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140a4bf46(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  longlong *local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined8 *local_260;
  int local_258;
  undefined1 local_250 [112];
  ushort local_1e0;
  undefined8 *local_1d8;
  int local_1d0;
  longlong *local_98;
  undefined8 *local_80;
  int local_78;
  longlong *local_70 [2];
  undefined1 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_140a4c7c6(local_250);
  local_1e0 = DAT_14c96b23c | 0x100;
  if (local_1d0 == 0) {
LAB_140a4bf9e:
    if (local_1d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1d8 != (undefined8 *)0x0) {
    (**(code **)*local_1d8)(local_1d8,0);
    FUN_1446efa72(&local_1d8,0,0,0x10);
    local_1d0 = 0;
    goto LAB_140a4bf9e;
  }
  local_1d8 = (undefined8 *)0x0;
  local_1d0 = 0;
  local_278 = *(longlong **)(param_3 + 0x28);
  if (local_278 != (longlong *)0x0) {
    (**(code **)(*local_278 + 8))();
  }
  local_270 = *(undefined4 *)(param_3 + 0x30);
  local_268 = *(undefined1 *)(param_3 + 0x38);
  local_260 = (undefined8 *)0x0;
  local_258 = 0;
  FUN_1413a4324(&local_260,param_3 + 0x40);
  FUN_140008f88(local_70,&local_278);
  iVar4 = local_258;
  puVar3 = local_260;
  local_60 = local_268;
  local_260 = (undefined8 *)0x0;
  local_258 = 0;
  if (local_50 == 0) {
LAB_140a4c048:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_140a4c048;
  }
  local_58 = puVar3;
  local_50 = iVar4;
  if (local_258 == 0) {
LAB_140a4c078:
    if (local_260 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_260 != (undefined8 *)0x0) {
    (**(code **)*local_260)(local_260,0);
    FUN_1446efa72(&local_260,0,0,0x10);
    local_258 = 0;
    goto LAB_140a4c078;
  }
  if (local_278 != (longlong *)0x0) {
    (**(code **)(*local_278 + 0x10))();
  }
  plVar7 = (longlong *)FUN_14001cc68(0x3c0);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149efda80;
  plVar1 = plVar7 + 2;
  memset(plVar1,0,0x3b0);
  FUN_140a55f88(plVar1);
  plVar7[2] = (longlong)&PTR_FUN_149efdaa0;
  plVar7[0x4f] = (longlong)&PTR_FUN_149efdcf0;
  plVar7[0x50] = 0;
  plVar7[0x51] = 0;
  plVar7[0x53] = 0;
  plVar7[0x54] = 0;
  plVar7[0x55] = 0;
  plVar7[0x56] = 0;
  plVar7[0x57] = 0;
  plVar7[0x58] = 0;
  plVar7[0x59] = 0;
  plVar7[0x5a] = 0;
  plVar7[0x5b] = 0;
  plVar7[0x5c] = 0;
  plVar7[0x5d] = 0;
  plVar7[0x5e] = 0;
  plVar7[0x5f] = 0;
  plVar7[0x60] = 0;
  plVar7[0x61] = 0;
  *(byte *)(plVar7 + 0x62) = (*(byte *)(plVar7 + 0x62) & 0xf8) + 1;
  plVar7[99] = 0;
  plVar7[100] = 0;
  plVar7[0x65] = 0;
  plVar7[0x66] = 0;
  plVar7[0x67] = 0;
  plVar7[0x68] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  plVar10 = DAT_14c844840;
  plVar7[0x69] = (longlong)DAT_14c844840;
  if (plVar10 != (longlong *)0x0) {
    if (*(code **)(*plVar10 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar10 + 8))();
    }
  }
  *(undefined4 *)(plVar7 + 0x6a) = 0;
  *(undefined1 *)(plVar7 + 0x6b) = 0;
  plVar7[0x6c] = 0;
  plVar7[0x6d] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
    DAT_14c844840[2] = -1;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  plVar10 = DAT_14c844840;
  plVar7[0x6e] = (longlong)DAT_14c844840;
  if (plVar10 != (longlong *)0x0) {
    if (*(code **)(*plVar10 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar10 + 8))();
    }
  }
  *(undefined4 *)(plVar7 + 0x6f) = 0;
  *(undefined1 *)(plVar7 + 0x70) = 0;
  *(undefined1 *)((longlong)plVar7 + 0x3b9) = 0;
  plVar7[0x71] = 0;
  plVar7[0x72] = 0;
  plVar7[0x75] = 0;
  plVar7[0x76] = 0;
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar7[3] != 0 && (plVar7[4] != 0)) && (0 < *(int *)(plVar7[4] + 8))))) {
    if (plVar7 == (longlong *)0x0) goto LAB_140a4c2a1;
LAB_140a4c293:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7[3] = (longlong)plVar1;
      if ((longlong *)plVar7[4] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar7[4] != (longlong *)0x0) {
          plVar10 = plVar7 + 4;
          plVar9 = (longlong *)plVar7[4];
          goto LAB_140a4c70e;
        }
        plVar7[4] = (longlong)plVar7;
      }
LAB_140a4c289:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_140a4c293;
    }
    _DAT_00000018 = 0x10;
    plVar10 = (longlong *)&DAT_00000020;
    plVar9 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_140a4c70e:
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      *plVar10 = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) goto LAB_140a4c289;
    }
  }
LAB_140a4c2a1:
  local_288 = 0x3b0;
  FUN_140a52e78(plVar1,"SWindowTitleBar",
                ".\\Runtime/Slate/Private/Framework/Application/SlateApplication.cpp",0x1227);
  FUN_140a515e6(plVar1,local_250);
  local_288 = CONCAT44(local_288._4_4_,*(undefined4 *)(param_3 + 0x20));
  FUN_140a4ca50(plVar1,local_250,param_3,param_3 + 0x10);
  bVar8 = *(byte *)(plVar7 + 8);
  if ((bVar8 & 0x10) == 0) {
    cVar5 = (**(code **)(plVar7[2] + 0x220))(plVar1);
    bVar6 = cVar5 << 5;
    bVar8 = *(byte *)(plVar7 + 8);
  }
  else {
    bVar6 = 0x20;
  }
  *(byte *)(plVar7 + 8) = bVar8 & 0xdf | bVar6;
  *(byte *)((longlong)plVar7 + 0x41) = *(byte *)((longlong)plVar7 + 0x41) | 4;
  if (local_50 == 0) {
LAB_140a4c328:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_140a4c328;
  }
  if (local_70[0] != (longlong *)0x0) {
    (**(code **)(*local_70[0] + 0x10))();
  }
  if (local_78 == 0) {
LAB_140a4c35a:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_140a4c35a;
  }
  plVar10 = plVar7 + 0x4f;
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  FUN_140a4ff8c(local_250);
  if (plVar1 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    *param_4 = (longlong)plVar10;
    plVar10 = (longlong *)param_4[1];
    if (plVar10 == (longlong *)0x0) {
      *param_2 = 0x10;
      param_2[1] = 0;
      goto LAB_140a4c3d5;
    }
    param_4[1] = 0;
LAB_140a4c687:
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
LAB_140a4c76b:
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    *param_2 = plVar1;
    param_2[1] = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_140a4c3d5;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *param_4 = (longlong)plVar10;
    plVar10 = (longlong *)param_4[1];
    if (plVar7 == plVar10) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar10 = plVar7;
        if (*piVar2 == 0) goto LAB_140a4c76b;
      }
    }
    else {
      param_4[1] = (longlong)plVar7;
      if (plVar10 != (longlong *)0x0) goto LAB_140a4c687;
    }
    *param_2 = plVar1;
    param_2[1] = plVar7;
  }
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar7 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_140a4c3d5:
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a4c7c6 FUN_140a4c7c6 body=648 status=ok
// SIG undefined FUN_140a4c7c6(void)

longlong FUN_140a4c7c6(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  local_28 = "Window";
  local_20 = 6;
  local_1c = 0;
  uVar2 = FUN_14001a6c0(&local_28,1);
  uVar4 = FUN_14076516e(lVar3,uVar2,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x1b8) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 0x1e0) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4ca50 FUN_140a4ca50 body=13039 status=ok
// SIG undefined FUN_140a4ca50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140a4ca50(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 *puVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  float *pfVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong *plVar22;
  float *pfVar23;
  longlong *plVar24;
  longlong lVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined1 auStack_1f88 [32];
  undefined8 *local_1f68;
  undefined8 local_1f60;
  undefined8 local_1f58;
  longlong *local_1f50;
  undefined1 local_1f41;
  undefined1 local_1f40 [8];
  longlong *local_1f38;
  longlong local_1f28;
  undefined1 local_1f20;
  undefined8 *local_1f18;
  ulonglong uStack_1f10;
  undefined8 local_1f08;
  longlong *local_1f00;
  undefined8 local_1ef8;
  longlong *local_1ef0;
  undefined2 local_1ee8;
  undefined8 *local_1ee0;
  ulonglong uStack_1ed8;
  undefined2 local_1ed0;
  undefined8 *local_1ec8;
  ulonglong uStack_1ec0;
  undefined1 local_1eb1;
  undefined1 local_1eb0 [8];
  longlong *local_1ea8;
  undefined1 local_1e91;
  undefined1 local_1e90 [8];
  longlong *local_1e88;
  undefined1 local_1e71;
  undefined1 local_1e70 [8];
  longlong *local_1e68;
  longlong local_1e58;
  longlong *local_1e50;
  undefined4 local_1e48;
  undefined1 local_1e44;
  undefined8 local_1e40;
  undefined8 uStack_1e38;
  longlong local_1e30;
  longlong *local_1e28;
  undefined2 local_1e20;
  undefined8 *local_1e18;
  ulonglong uStack_1e10;
  undefined8 local_1e08;
  longlong *local_1e00;
  undefined8 local_1df8;
  longlong *local_1df0;
  undefined1 local_1de1;
  undefined1 local_1de0 [8];
  longlong *local_1dd8;
  undefined1 local_1dc1;
  undefined1 local_1dc0 [8];
  longlong *local_1db8;
  undefined8 local_1da8;
  double dStack_1da0;
  undefined1 local_1d98;
  undefined8 *local_1d90;
  ulonglong uStack_1d88;
  undefined8 local_1d80;
  longlong *local_1d78;
  undefined8 local_1d70;
  longlong *local_1d68;
  longlong local_1d60;
  longlong *local_1d58;
  undefined4 local_1d50;
  undefined1 local_1d4c;
  undefined8 local_1d48;
  undefined8 uStack_1d40;
  undefined1 local_1d31;
  undefined1 local_1d30 [8];
  longlong *local_1d28;
  double local_1d18;
  double dStack_1d10;
  undefined1 local_1d08;
  undefined8 *local_1d00;
  ulonglong uStack_1cf8;
  undefined8 local_1cf0;
  longlong *local_1ce8;
  undefined8 local_1ce0;
  longlong *local_1cd8;
  undefined2 local_1cd0;
  undefined8 *local_1cc8;
  ulonglong uStack_1cc0;
  undefined8 local_1cb8;
  longlong *local_1cb0;
  undefined8 local_1ca8;
  longlong *local_1ca0;
  undefined2 local_1c98;
  undefined8 *local_1c90;
  ulonglong uStack_1c88;
  undefined8 local_1c80;
  longlong *local_1c78;
  undefined2 local_1c70;
  undefined8 *local_1c68;
  ulonglong uStack_1c60;
  undefined8 local_1c58;
  longlong *local_1c50;
  longlong *local_1c48;
  undefined4 local_1c40;
  undefined1 local_1c38;
  undefined8 local_1c30;
  undefined4 local_1c28;
  undefined2 local_1c20;
  undefined8 *local_1c18;
  ulonglong uStack_1c10;
  undefined8 local_1c08;
  undefined8 uStack_1c00;
  undefined1 local_1bf8;
  undefined8 *local_1bf0;
  ulonglong uStack_1be8;
  undefined2 local_1be0;
  undefined8 *local_1bd8;
  ulonglong uStack_1bd0;
  longlong local_1bc8;
  longlong *plStack_1bc0;
  longlong local_1bb8;
  longlong *plStack_1bb0;
  undefined8 *local_1ba0 [2];
  longlong *local_1b90;
  undefined8 *local_1b70;
  int local_1b68;
  char local_1b5c;
  char local_1b54;
  char local_1b4c;
  undefined8 *local_1b48 [2];
  longlong *plStack_1b38;
  undefined8 *local_1b18;
  int local_1b10;
  char local_1b04;
  char local_1afc;
  char local_1af4;
  undefined8 *local_1af0 [2];
  longlong *local_1ae0;
  undefined8 *local_1ac0;
  int local_1ab8;
  char cStack_1aac;
  char local_1aa4;
  char local_1a9c;
  undefined8 *local_1a98 [2];
  longlong *local_1a88;
  undefined8 *local_1a68;
  int local_1a60;
  char local_1a54;
  char local_1a4c;
  char local_1a44;
  undefined1 local_1a40 [112];
  undefined2 local_19d0;
  longlong *local_19c8;
  int local_19c0;
  longlong local_1898;
  undefined1 local_1890;
  undefined8 *local_1888;
  int local_1880;
  undefined1 local_1808 [112];
  undefined2 local_1798;
  undefined8 *local_1790;
  int local_1788;
  longlong local_1660;
  undefined4 local_1658;
  undefined8 *local_1650;
  int local_1648;
  undefined2 local_15e0;
  undefined8 *local_15d8;
  int local_15d0;
  longlong local_14a8;
  longlong *local_14a0;
  undefined8 local_1490;
  undefined8 uStack_1488;
  undefined1 local_1480;
  undefined8 *local_1478;
  int local_1470;
  code *local_1428;
  undefined1 local_1420;
  undefined8 *local_1418;
  int local_1410;
  undefined1 local_1320 [192];
  undefined1 local_1260 [192];
  undefined1 local_11a0 [192];
  undefined8 local_10e0;
  longlong *local_10d8;
  undefined2 local_1070;
  undefined8 *local_1068;
  int local_1060;
  longlong local_f38;
  undefined4 local_f30;
  undefined8 local_f28;
  longlong *local_f20;
  undefined4 local_d80;
  undefined4 uStack_d7c;
  double dStack_d78;
  undefined1 local_d70;
  undefined8 *local_d68;
  int local_d60;
  undefined1 local_d58 [192];
  undefined1 local_c98 [64];
  int local_c58;
  undefined1 local_c54;
  undefined4 local_c50;
  undefined1 local_c4c;
  undefined1 local_bd8 [192];
  longlong local_b18;
  longlong *local_b10;
  undefined2 local_aa8;
  undefined8 *local_aa0;
  int local_a98;
  longlong local_970;
  undefined4 local_968;
  undefined8 local_960;
  longlong *local_958;
  undefined2 local_8f0;
  undefined8 *local_8e8;
  int local_8e0;
  longlong local_7b8;
  undefined4 local_7b0;
  code *local_7a8;
  longlong *plStack_7a0;
  undefined8 *local_798;
  undefined8 *local_790;
  undefined8 uStack_788;
  undefined2 local_738;
  undefined8 *local_730;
  int local_728;
  longlong local_5d8;
  undefined8 local_5d0;
  longlong *local_5c8;
  undefined8 *local_338;
  int local_330;
  undefined4 uStack_32c;
  undefined2 local_2c8;
  undefined8 *local_2c0;
  int local_2b8;
  double local_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  undefined8 *local_170;
  int local_168;
  undefined8 local_160;
  longlong *local_158;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x140a4ca66;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f88;
  bVar6 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar6 & 0xfb;
  if (((bVar6 != (bVar6 & 0xfb)) && (((bVar6 & 0xcc) != 0) != ((bVar6 & 200) != 0))) &&
     (cVar14 = FUN_1400d1184(param_1 + 3,param_1), cVar14 != '\0')) {
    FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                  (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                   (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
  }
  param_1[0x4e] = *param_3;
  plVar7 = (longlong *)param_3[1];
  plVar22 = (longlong *)param_1[0x4f];
  if (plVar22 != plVar7) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar22 = (longlong *)param_1[0x4f];
    }
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      piVar3 = (int *)((longlong)plVar22 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar22 + 0x10))();
      }
    }
    param_1[0x4f] = (longlong)plVar7;
  }
  param_1[0x50] = *(longlong *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x1b0);
  plVar7 = *(longlong **)(param_2 + 0x1b8);
  plVar22 = (longlong *)param_1[0x67];
  if (plVar22 != plVar7) {
    param_1[0x67] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (plVar22 != (longlong *)0x0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x1c8);
  plVar7 = param_1 + 0x6a;
  FUN_1413a4324(plVar7,param_2 + 0x1d0);
  plVar22 = *(longlong **)(param_2 + 0x1e0);
  plVar24 = (longlong *)param_1[0x6c];
  if (plVar24 != plVar22) {
    param_1[0x6c] = (longlong)plVar22;
    if (plVar22 != (longlong *)0x0) {
      (**(code **)(*plVar22 + 8))();
    }
    if (plVar24 != (longlong *)0x0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x1f0);
  FUN_1413a4324(param_1 + 0x6f,param_2 + 0x1f8);
  param_1[0x71] = 0;
  if (((char)param_1[0x69] == '\0') &&
     ((((int)param_1[0x6b] == 0 || ((longlong *)*plVar7 == (longlong *)0x0)) ||
      (cVar14 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar14 == '\0')))) {
    local_7a8 = FUN_1469b8616;
    plStack_7a0 = (longlong *)((ulonglong)plStack_7a0 & 0xffffffff00000000);
    FUN_140a56b5c(&local_1650,param_1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_7a8 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    plStack_7a0 = (longlong *)((ulonglong)plStack_7a0 & 0xffffffff00000000);
    local_798 = (undefined8 *)CONCAT71(local_798._1_7_,1);
    local_790 = (undefined8 *)0x0;
    uStack_788._0_4_ = 0;
    FUN_1413a4324(&local_790,&local_1650);
    FUN_140008f88(param_1 + 0x67,&local_7a8);
    uVar27 = (int)uStack_788;
    puVar12 = local_790;
    *(undefined1 *)(param_1 + 0x69) = local_798._0_1_;
    local_790 = (undefined8 *)0x0;
    uStack_788 = (ulonglong)uStack_788._4_4_ << 0x20;
    if ((int)param_1[0x6b] == 0) {
LAB_140a4ccb3:
      if (*plVar7 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar8 = (undefined8 *)*plVar7;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,0);
        FUN_1446efa72(plVar7,0,0,0x10);
        *(undefined4 *)(param_1 + 0x6b) = 0;
        goto LAB_140a4ccb3;
      }
    }
    param_1[0x6a] = (longlong)puVar12;
    *(undefined4 *)(param_1 + 0x6b) = uVar27;
    if ((int)uStack_788 == 0) {
LAB_140a4cce2:
      if (local_790 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_790 != (undefined8 *)0x0) {
      (**(code **)*local_790)(local_790,0);
      FUN_1446efa72(&local_790,0,0,0x10);
      uStack_788 = uStack_788 & 0xffffffff00000000;
      goto LAB_140a4cce2;
    }
    if (local_7a8 != (code *)0x0) {
      (**(code **)(*(longlong *)local_7a8 + 0x10))();
    }
    if (local_1648 != 0) {
      if (local_1650 == (undefined8 *)0x0) goto LAB_140a4cd1d;
      (**(code **)*local_1650)(local_1650,0);
      FUN_1446efa72(&local_1650,0,0,0x10);
      local_1648 = 0;
    }
    if (local_1650 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140a4cd1d:
  FUN_140a562d0(&local_1650);
  local_7a8 = (code *)0x0;
  plStack_7a0 = (longlong *)0x0;
  local_798 = (undefined8 *)CONCAT71(local_798._1_7_,1);
  local_1490 = 0;
  uStack_1488 = 0;
  local_1480 = 1;
  local_790 = (undefined8 *)0x0;
  uStack_788 = 0;
  if (local_1470 == 0) {
LAB_140a4cd63:
    if (local_1478 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1478 != (undefined8 *)0x0) {
    (**(code **)*local_1478)(local_1478,0);
    FUN_1446efa72(&local_1478,0,0,0x10);
    local_1470 = 0;
    goto LAB_140a4cd63;
  }
  local_1478 = (undefined8 *)0x0;
  local_1470 = 0;
  if ((int)uStack_788 == 0) {
LAB_140a4cda1:
    if (local_790 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_790 != (undefined8 *)0x0) {
    (**(code **)*local_790)(local_790,0);
    FUN_1446efa72(&local_790,0,0,0x10);
    uStack_788 = uStack_788 & 0xffffffff00000000;
    goto LAB_140a4cda1;
  }
  local_1ed0 = CONCAT11(1,DAT_14c96b23c);
  local_15e0 = local_1ed0;
  local_1ec8 = (undefined8 *)0x0;
  uStack_1ec0 = 0;
  if (local_15d0 == 0) {
LAB_140a4cde8:
    if (local_15d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_15d8 != (undefined8 *)0x0) {
    (**(code **)*local_15d8)(local_15d8,0);
    FUN_1446efa72(&local_15d8,0,0,0x10);
    local_15d0 = 0;
    goto LAB_140a4cde8;
  }
  local_15d8 = (undefined8 *)0x0;
  local_15d0 = 0;
  if ((int)uStack_1ec0 == 0) {
LAB_140a4ce26:
    if (local_1ec8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1ec8 != (undefined8 *)0x0) {
    (**(code **)*local_1ec8)(local_1ec8,0);
    FUN_1446efa72(&local_1ec8,0,0,0x10);
    uStack_1ec0 = uStack_1ec0 & 0xffffffff00000000;
    goto LAB_140a4ce26;
  }
  local_7a8 = FUN_1469b86c8;
  plStack_7a0 = (longlong *)((ulonglong)plStack_7a0 & 0xffffffff00000000);
  FUN_140a569b0(&local_338,param_1,&local_7a8);
  local_7a8 = (code *)0x0;
  plStack_7a0 = (longlong *)CONCAT71(plStack_7a0._1_7_,1);
  local_798 = (undefined8 *)0x0;
  local_790 = (undefined8 *)((ulonglong)local_790 & 0xffffffff00000000);
  FUN_140a5c3e8(&local_798,&local_338);
  puVar12 = local_798;
  local_1420 = plStack_7a0._0_1_;
  local_1428 = local_7a8;
  local_798 = (undefined8 *)0x0;
  uVar27 = (int)local_790;
  local_790 = (undefined8 *)((ulonglong)local_790 & 0xffffffff00000000);
  if (local_1410 == 0) {
LAB_140a4ceb0:
    if (local_1418 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1418 != (undefined8 *)0x0) {
    (**(code **)*local_1418)(local_1418,0);
    FUN_1446efa72(&local_1418,0,0,0x10);
    local_1410 = 0;
    goto LAB_140a4ceb0;
  }
  local_1418 = puVar12;
  local_1410 = uVar27;
  if ((int)local_790 == 0) {
LAB_140a4cee6:
    if (local_798 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_798 != (undefined8 *)0x0) {
    (**(code **)*local_798)(local_798,0);
    FUN_1446efa72(&local_798,0,0,0x10);
    local_790 = (undefined8 *)((ulonglong)local_790 & 0xffffffff00000000);
    goto LAB_140a4cee6;
  }
  if (local_330 == 0) {
LAB_140a4cefd:
    if (local_338 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_338 != (undefined8 *)0x0) {
    (**(code **)*local_338)(local_338,0);
    FUN_1446efa72(&local_338,0,0,0x10);
    local_330 = 0;
    goto LAB_140a4cefd;
  }
  FUN_140a504fe(local_1808);
  local_1ee8 = CONCAT11(1,DAT_14c96b23c);
  local_1798 = local_1ee8;
  local_1ee0 = (undefined8 *)0x0;
  uStack_1ed8 = 0;
  if (local_1788 == 0) {
LAB_140a4cf57:
    if (local_1790 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1790 != (undefined8 *)0x0) {
    (**(code **)*local_1790)(local_1790,0);
    FUN_1446efa72(&local_1790,0,0,0x10);
    local_1788 = 0;
    goto LAB_140a4cf57;
  }
  local_1790 = (undefined8 *)0x0;
  local_1788 = 0;
  if ((int)uStack_1ed8 == 0) {
LAB_140a4cf95:
    if (local_1ee0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1ee0 != (undefined8 *)0x0) {
    (**(code **)*local_1ee0)(local_1ee0,0);
    FUN_1446efa72(&local_1ee0,0,0,0x10);
    uStack_1ed8 = uStack_1ed8 & 0xffffffff00000000;
    goto LAB_140a4cf95;
  }
  FUN_140a4fdf2(local_1b48,0);
  FUN_140a53334(local_1a40);
  local_338 = (undefined8 *)0x0;
  local_330 = 0;
  FUN_1446efa72(&local_338,0,4,0x10);
  local_330 = 4;
  plVar22 = (longlong *)param_1[2];
  if (plVar22 == (longlong *)0x0) {
LAB_140a4f30d:
    *local_338 = &PTR_LAB_149f055c0;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar20 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar20 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar20;
    local_338[2] = lVar18;
    *local_338 = &PTR_FUN_149f01d30;
    local_338[3] = 0;
    local_338[4] = 0;
    local_338[5] = FUN_1469b8794;
    *(undefined4 *)(local_338 + 6) = 0;
  }
  else {
    iVar15 = (int)plVar22[1];
    do {
      if (iVar15 == 0) goto LAB_140a4f30d;
      LOCK();
      iVar13 = (int)plVar22[1];
      bVar26 = iVar15 == iVar13;
      if (bVar26) {
        *(int *)(plVar22 + 1) = iVar15 + 1;
        iVar13 = iVar15;
      }
      iVar15 = iVar13;
      UNLOCK();
    } while (!bVar26);
    lVar20 = param_1[1];
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    *local_338 = &PTR_LAB_149f055c0;
    LOCK();
    UNLOCK();
    lVar25 = DAT_14c758608 + 1;
    lVar18 = DAT_14c758608 + 1;
    if (lVar25 == 0) {
      LOCK();
      UNLOCK();
      lVar25 = DAT_14c758608 + 2;
      lVar18 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar18;
    local_338[2] = lVar25;
    *local_338 = &PTR_FUN_149f01d30;
    local_338[3] = lVar20;
    local_338[4] = plVar22;
    LOCK();
    *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
    UNLOCK();
    local_338[5] = FUN_1469b8794;
    *(undefined4 *)(local_338 + 6) = 0;
    LOCK();
    plVar24 = plVar22 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar3 = (int *)((longlong)plVar22 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
    LOCK();
    plVar24 = plVar22 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar3 = (int *)((longlong)plVar22 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
    LOCK();
    plVar24 = plVar22 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar3 = (int *)((longlong)plVar22 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  local_7a8 = (code *)CONCAT62(local_7a8._2_6_,0x119);
  plStack_7a0 = (longlong *)0x0;
  local_798 = (undefined8 *)((ulonglong)local_798 & 0xffffffff00000000);
  FUN_140fe25fc(&plStack_7a0,&local_338);
  plVar22 = plStack_7a0;
  local_19d0 = local_7a8._0_2_;
  plStack_7a0 = (longlong *)0x0;
  uVar27 = (int)local_798;
  local_798 = (undefined8 *)((ulonglong)local_798 & 0xffffffff00000000);
  if (local_19c0 == 0) {
LAB_140a4d0de:
    if (local_19c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_19c8 != (longlong *)0x0) {
    (**(code **)*local_19c8)(local_19c8,0);
    FUN_1446efa72(&local_19c8,0,0,0x10);
    local_19c0 = 0;
    goto LAB_140a4d0de;
  }
  local_19c8 = plVar22;
  local_19c0 = uVar27;
  if ((int)local_798 == 0) {
LAB_140a4d114:
    if (plStack_7a0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (plStack_7a0 != (longlong *)0x0) {
    (**(code **)*plStack_7a0)(plStack_7a0,0);
    FUN_1446efa72(&plStack_7a0,0,0,0x10);
    local_798 = (undefined8 *)((ulonglong)local_798 & 0xffffffff00000000);
    goto LAB_140a4d114;
  }
  if (local_330 == 0) {
LAB_140a4d12b:
    if (local_338 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_338 != (undefined8 *)0x0) {
    (**(code **)*local_338)(local_338,0);
    FUN_1446efa72(&local_338,0,0,0x10);
    local_330 = 0;
    goto LAB_140a4d12b;
  }
  local_1f28 = param_1[0x50] + 0x1210;
  local_1f20 = 1;
  local_1890 = 1;
  local_1f18 = (undefined8 *)0x0;
  uStack_1f10 = 0;
  local_1898 = local_1f28;
  if (local_1880 == 0) {
LAB_140a4d178:
    if (local_1888 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1888 != (undefined8 *)0x0) {
    (**(code **)*local_1888)(local_1888,0);
    FUN_1446efa72(&local_1888,0,0,0x10);
    local_1880 = 0;
    goto LAB_140a4d178;
  }
  local_1888 = (undefined8 *)0x0;
  local_1880 = 0;
  if ((int)uStack_1f10 == 0) {
LAB_140a4d1b0:
    if (local_1f18 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1f18 != (undefined8 *)0x0) {
    (**(code **)*local_1f18)(local_1f18,0);
    FUN_1446efa72(&local_1f18,0,0,0x10);
    uStack_1f10 = uStack_1f10 & 0xffffffff00000000;
    goto LAB_140a4d1b0;
  }
  local_7a8 = FUN_1469b87ca;
  plStack_7a0 = (longlong *)((ulonglong)plStack_7a0 & 0xffffffff00000000);
  FUN_140a56d08(local_1a40,param_1);
  local_1f68 = (undefined8 *)&local_1f41;
  FUN_140a554b8(local_1f40,"SImage",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x21);
  FUN_140a52c70(local_1f40,&local_1f08,local_1a40);
  local_1ef8 = local_1f08;
  local_1ef0 = local_1f00;
  if (local_1f00 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f00 + 1) = (int)local_1f00[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fd40(local_1b48,&local_1ef8);
  local_1f60 = FUN_140a5058c(local_1808,uVar16);
  FUN_140a4fdf2(local_1ba0,0);
  lVar20 = *param_4;
  plVar22 = (longlong *)param_4[1];
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
  }
  local_1bb8 = 0;
  plStack_1bb0 = (longlong *)0x0;
  local_1bc8 = 0;
  plStack_1bc0 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x240))(param_1);
  if (lVar20 == 0) {
    FUN_140a53a96(&local_338);
    local_190 = (double)CONCAT44(local_190._4_4_,2);
    local_1be0 = CONCAT11(1,DAT_14c96b23c);
    local_2c8 = local_1be0;
    local_1bd8 = (undefined8 *)0x0;
    uStack_1bd0 = 0;
    if (local_2b8 == 0) {
LAB_140a4d314:
      if (local_2c0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_2c0 != (undefined8 *)0x0) {
      (**(code **)*local_2c0)(local_2c0,0);
      FUN_1446efa72(&local_2c0,0,0,0x10);
      local_2b8 = 0;
      goto LAB_140a4d314;
    }
    local_2c0 = (undefined8 *)0x0;
    local_2b8 = 0;
    if ((int)uStack_1bd0 == 0) {
LAB_140a4d352:
      if (local_1bd8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1bd8 != (undefined8 *)0x0) {
      (**(code **)*local_1bd8)(local_1bd8,0);
      FUN_1446efa72(&local_1bd8,0,0,0x10);
      uStack_1bd0 = uStack_1bd0 & 0xffffffff00000000;
      goto LAB_140a4d352;
    }
    local_1c08 = 0x4000000040a00000;
    uStack_1c00 = 0x4000000040a00000;
    local_1bf8 = 1;
    local_178 = (undefined8 *)CONCAT71(local_178._1_7_,1);
    dStack_188 = 2.000000481493771;
    uStack_180 = 0x4000000040a00000;
    local_1bf0 = (undefined8 *)0x0;
    uStack_1be8 = 0;
    if (local_168 == 0) {
LAB_140a4d3a3:
      if (local_170 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_170 != (undefined8 *)0x0) {
      (**(code **)*local_170)(local_170,0);
      FUN_1446efa72(&local_170,0,0,0x10);
      local_168 = 0;
      goto LAB_140a4d3a3;
    }
    local_170 = (undefined8 *)0x0;
    local_168 = 0;
    if ((int)uStack_1be8 == 0) {
LAB_140a4d3e1:
      if (local_1bf0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1bf0 != (undefined8 *)0x0) {
      (**(code **)*local_1bf0)(local_1bf0,0);
      FUN_1446efa72(&local_1bf0,0,0,0x10);
      uStack_1be8 = uStack_1be8 & 0xffffffff00000000;
      goto LAB_140a4d3e1;
    }
    FUN_140a570d8(&local_7a8);
    local_1c20 = CONCAT11(1,DAT_14c96b23c);
    local_738 = local_1c20;
    local_1c18 = (undefined8 *)0x0;
    uStack_1c10 = 0;
    if (local_728 == 0) {
LAB_140a4d435:
      if (local_730 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_730 != (undefined8 *)0x0) {
      (**(code **)*local_730)(local_730,0);
      FUN_1446efa72(&local_730,0,0,0x10);
      local_728 = 0;
      goto LAB_140a4d435;
    }
    local_730 = (undefined8 *)0x0;
    local_728 = 0;
    if ((int)uStack_1c10 == 0) {
LAB_140a4d473:
      if (local_1c18 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1c18 != (undefined8 *)0x0) {
      (**(code **)*local_1c18)(local_1c18,0);
      FUN_1446efa72(&local_1c18,0,0,0x10);
      uStack_1c10 = uStack_1c10 & 0xffffffff00000000;
      goto LAB_140a4d473;
    }
    local_5d8 = param_1[0x50] + 0xdd0;
    local_1c48 = (longlong *)param_1[0x67];
    if (local_1c48 != (longlong *)0x0) {
      (**(code **)(*local_1c48 + 8))();
    }
    local_1c40 = (undefined4)param_1[0x68];
    local_1c38 = (undefined1)param_1[0x69];
    local_1c30 = 0;
    local_1c28 = 0;
    FUN_1413a4324(&local_1c30,plVar7);
    uVar16 = FUN_140a54906(&local_7a8,&local_1c48);
    local_1f68 = (undefined8 *)local_bd8;
    FUN_140a54526(&local_f28,"STextBlock",
                  ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x127);
    FUN_140a52852(&local_f28,&local_10e0,uVar16);
    plVar24 = local_158;
    plVar7 = local_10d8;
    if (local_10d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10d8 + 1) = (int)local_10d8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_10d8 + 1) = (int)local_10d8[1] + 1;
      UNLOCK();
    }
    local_160 = local_10e0;
    local_158 = local_10d8;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar24 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar3 = (int *)((longlong)plVar24 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    local_1f68 = (undefined8 *)local_c98;
    FUN_140a53d66(&local_960,&DAT_149efe19f,
                  ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x120);
    FUN_140a50bf4(&local_960,&local_b18,&local_338);
    plVar1 = local_b10;
    lVar20 = local_b18;
    plVar24 = local_b10;
    if (local_b10 == (longlong *)0x0) {
      if (plVar22 != (longlong *)0x0) {
LAB_140a4f6fa:
        LOCK();
        plVar2 = plVar22 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar3 = (int *)((longlong)plVar22 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar15 = *piVar3;
          UNLOCK();
          plVar24 = plVar1;
joined_r0x000140a4f73f:
          if (iVar15 == 0) {
            (**(code **)(*plVar22 + 0x10))();
          }
        }
        goto LAB_140a4d5ec;
      }
      plVar24 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_b10 + 1) = (int)local_b10[1] + 1;
      UNLOCK();
      if (local_b10 == plVar22) {
        LOCK();
        plVar2 = local_b10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        plVar24 = plVar22;
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b10)(local_b10);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar15 = *piVar3;
          UNLOCK();
          plVar22 = plVar1;
          goto joined_r0x000140a4f73f;
        }
      }
      else if (plVar22 != (longlong *)0x0) goto LAB_140a4f6fa;
LAB_140a4d5ec:
      plVar22 = local_b10;
      if (local_b10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b10)(local_b10);
          LOCK();
          piVar3 = (int *)((longlong)plVar22 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
    }
    plVar22 = local_958;
    if (local_958 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_958 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_958)(local_958);
        LOCK();
        piVar3 = (int *)((longlong)plVar22 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar7 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_10d8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_10d8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_10d8)(local_10d8);
        LOCK();
        piVar3 = (int *)((longlong)local_10d8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_10d8 + 0x10))(local_10d8);
        }
      }
    }
    if (local_f20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_f20 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_f20)(local_f20);
        LOCK();
        piVar3 = (int *)((longlong)local_f20 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_f20 + 0x10))(local_f20);
        }
      }
    }
    FUN_140a59ae6(&local_7a8);
    FUN_140a5660c(&local_338);
    plVar22 = plVar24;
  }
  lVar18 = local_1bb8;
  if ((local_1bb8 != 0) && (local_1bb8 == DAT_14c98dec8)) {
    iVar15 = 2;
    if (local_1bc8 != local_1bb8) {
      iVar15 = param_5;
    }
    if (param_5 == 1) {
      param_5 = iVar15;
    }
  }
  uVar27 = (**(code **)(*DAT_14c968098 + 0x58))();
  FUN_1405d299c(lVar18,uVar27);
  lVar18 = local_1bc8;
  uVar27 = (**(code **)(*DAT_14c968098 + 0x58))();
  FUN_1405d299c(lVar18,uVar27);
  pfVar17 = (float *)(local_1bb8 + 0x168);
  if ((*(byte *)(local_1bb8 + 0x31) & 0x20) == 0) {
    pfVar17 = (float *)&DAT_14c84635c;
  }
  fVar4 = pfVar17[1];
  pfVar23 = (float *)(local_1bc8 + 0x168);
  dVar10 = (double)*pfVar17;
  if ((*(byte *)(local_1bc8 + 0x31) & 0x20) == 0) {
    pfVar23 = (float *)&DAT_14c84635c;
  }
  fVar5 = pfVar23[1];
  dVar9 = (double)*pfVar23;
  dVar11 = dVar9;
  if (param_5 == 2) {
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = fVar4;
    dVar11 = dVar10;
    fVar4 = fVar5;
    if (*pfVar17 <= *pfVar23) {
      dVar10 = dVar9;
      dVar11 = dVar9;
    }
  }
  FUN_140a53a96(&local_7a8);
  local_1c70 = CONCAT11(1,DAT_14c96b23c);
  local_738 = local_1c70;
  local_1c68 = (undefined8 *)0x0;
  uStack_1c60 = 0;
  if (local_728 == 0) {
LAB_140a4d783:
    if (local_730 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_730 != (undefined8 *)0x0) {
    (**(code **)*local_730)(local_730,0);
    FUN_1446efa72(&local_730,0,0,0x10);
    local_728 = 0;
    goto LAB_140a4d783;
  }
  local_730 = (undefined8 *)0x0;
  local_728 = 0;
  if ((int)uStack_1c60 == 0) {
LAB_140a4d7c1:
    if (local_1c68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1c68 != (undefined8 *)0x0) {
    (**(code **)*local_1c68)(local_1c68,0);
    FUN_1446efa72(&local_1c68,0,0,0x10);
    uStack_1c60 = uStack_1c60 & 0xffffffff00000000;
    goto LAB_140a4d7c1;
  }
  FUN_140a504fe(&local_960);
  local_1c98 = CONCAT11(1,DAT_14c96b23c);
  local_8f0 = local_1c98;
  local_1c90 = (undefined8 *)0x0;
  uStack_1c88 = 0;
  if (local_8e0 == 0) {
LAB_140a4d815:
    if (local_8e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_8e8 != (undefined8 *)0x0) {
    (**(code **)*local_8e8)(local_8e8,0);
    FUN_1446efa72(&local_8e8,0,0,0x10);
    local_8e0 = 0;
    goto LAB_140a4d815;
  }
  local_8e8 = (undefined8 *)0x0;
  local_8e0 = 0;
  if ((int)uStack_1c88 == 0) {
LAB_140a4d853:
    if (local_1c90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1c90 != (undefined8 *)0x0) {
    (**(code **)*local_1c90)(local_1c90,0);
    FUN_1446efa72(&local_1c90,0,0,0x10);
    uStack_1c88 = uStack_1c88 & 0xffffffff00000000;
    goto LAB_140a4d853;
  }
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  FUN_140a4fdf2(local_1a98,0);
  FUN_140a5296a(&local_b18);
  local_1cd0 = CONCAT11(1,DAT_14c96b23c);
  local_aa8 = local_1cd0;
  local_1cc8 = (undefined8 *)0x0;
  uStack_1cc0 = 0;
  if (local_a98 == 0) {
LAB_140a4d8bb:
    if (local_aa0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_aa0 != (undefined8 *)0x0) {
    (**(code **)*local_aa0)(local_aa0,0);
    FUN_1446efa72(&local_aa0,0,0,0x10);
    local_a98 = 0;
    goto LAB_140a4d8bb;
  }
  local_aa0 = (undefined8 *)0x0;
  local_a98 = 0;
  if ((int)uStack_1cc0 == 0) {
LAB_140a4d8fe:
    if (local_1cc8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1cc8 != (undefined8 *)0x0) {
    (**(code **)*local_1cc8)(local_1cc8,0);
    FUN_1446efa72(&local_1cc8,0,0,0x10);
    uStack_1cc0 = uStack_1cc0 & 0xffffffff00000000;
    goto LAB_140a4d8fe;
  }
  FUN_140a50426(local_bd8);
  lVar18 = FUN_140a52578(local_bd8);
  *(undefined4 *)(lVar18 + 0x40) = 1;
  *(undefined1 *)(lVar18 + 0x44) = 1;
  *(undefined4 *)(lVar18 + 0x48) = 1;
  *(undefined1 *)(lVar18 + 0x4c) = 1;
  FUN_140a50678(&local_338);
  dVar9 = (double)fVar4;
  local_1d08 = 1;
  uStack_180 = CONCAT71(uStack_180._1_7_,1);
  local_1d00 = (undefined8 *)0x0;
  uStack_1cf8 = 0;
  local_1d18 = dVar10;
  dStack_1d10 = dVar9;
  local_190 = dVar10;
  dStack_188 = dVar9;
  if ((int)local_170 == 0) {
LAB_140a4d99f:
    if (local_178 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_178 != (undefined8 *)0x0) {
    (**(code **)*local_178)(local_178,0);
    FUN_1446efa72(&local_178,0,0,0x10);
    local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
    goto LAB_140a4d99f;
  }
  local_178 = (undefined8 *)0x0;
  local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
  if ((int)uStack_1cf8 == 0) {
LAB_140a4d9dd:
    if (local_1d00 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1d00 != (undefined8 *)0x0) {
    (**(code **)*local_1d00)(local_1d00,0);
    FUN_1446efa72(&local_1d00,0,0,0x10);
    uStack_1cf8 = uStack_1cf8 & 0xffffffff00000000;
    goto LAB_140a4d9dd;
  }
  local_1f68 = (undefined8 *)&local_1d31;
  FUN_140a52ce6(local_1d30,"SSpacer",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x154);
  FUN_140a50c6a(local_1d30,&local_1cf0,&local_338);
  local_1ce0 = local_1cf0;
  local_1cd8 = local_1ce8;
  if (local_1ce8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ce8 + 1) = (int)local_1ce8[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fe8e(lVar18,&local_1ce0);
  uVar16 = FUN_140a52392(&local_b18,uVar16);
  FUN_140a50426(local_c98);
  local_c54 = 1;
  local_c50 = 2;
  local_c4c = 1;
  local_1d50 = 0x3f800000;
  local_1d4c = 1;
  local_1d48 = 0;
  uStack_1d40 = 0;
  local_c58 = param_5;
  uVar19 = FUN_140a5475a(local_c98);
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
  }
  local_1d60 = lVar20;
  local_1d58 = plVar22;
  uVar19 = FUN_140a4fe8e(uVar19,&local_1d60);
  uVar16 = FUN_140a52392(uVar16,uVar19);
  FUN_140a50426(local_d58);
  lVar20 = FUN_140a52578(local_d58);
  *(undefined4 *)(lVar20 + 0x40) = 3;
  *(undefined1 *)(lVar20 + 0x44) = 1;
  *(undefined4 *)(lVar20 + 0x48) = 1;
  *(undefined1 *)(lVar20 + 0x4c) = 1;
  FUN_140a50678(&local_f28);
  local_1d98 = 1;
  local_d70 = 1;
  local_1da8._0_4_ = SUB84(dVar11,0);
  local_1da8._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
  local_d80 = (undefined4)local_1da8;
  uStack_d7c = local_1da8._4_4_;
  local_1d90 = (undefined8 *)0x0;
  uStack_1d88 = 0;
  local_1da8 = dVar11;
  dStack_1da0 = dVar9;
  dStack_d78 = dVar9;
  if (local_d60 == 0) {
LAB_140a4db87:
    dVar9 = dStack_d78;
    if (local_d68 != (undefined8 *)0x0) {
      FUN_1400020a8();
      dVar9 = dStack_d78;
    }
  }
  else if (local_d68 != (undefined8 *)0x0) {
    (**(code **)*local_d68)(local_d68,0);
    FUN_1446efa72(&local_d68,0,0,0x10);
    local_d60 = 0;
    goto LAB_140a4db87;
  }
  local_d68 = (undefined8 *)0x0;
  local_d60 = 0;
  dStack_d78 = dVar9;
  if ((int)uStack_1d88 == 0) {
LAB_140a4dbc5:
    dVar9 = dStack_d78;
    if (local_1d90 != (undefined8 *)0x0) {
      FUN_1400020a8();
      dVar9 = dStack_d78;
    }
  }
  else if (local_1d90 != (undefined8 *)0x0) {
    (**(code **)*local_1d90)(local_1d90,0);
    FUN_1446efa72(&local_1d90,0,0,0x10);
    uStack_1d88 = uStack_1d88 & 0xffffffff00000000;
    goto LAB_140a4dbc5;
  }
  local_1f68 = (undefined8 *)&local_1dc1;
  dStack_d78 = dVar9;
  FUN_140a52ce6(local_1dc0,"SSpacer",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x164);
  FUN_140a50c6a(local_1dc0,&local_1d80,&local_f28);
  local_1d70 = local_1d80;
  local_1d68 = local_1d78;
  if (local_1d78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d78 + 1) = (int)local_1d78[1] + 1;
    UNLOCK();
  }
  uVar19 = FUN_140a4fe8e(lVar20,&local_1d70);
  uVar16 = FUN_140a52392(uVar16,uVar19);
  local_1f68 = (undefined8 *)&local_1de1;
  FUN_140a541dc(local_1de0,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x14c);
  FUN_140a50ec6(local_1de0,&local_1cb8,uVar16);
  local_1ca8 = local_1cb8;
  local_1ca0 = local_1cb0;
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1cb0 + 1) = (int)local_1cb0[1] + 1;
    UNLOCK();
  }
  uVar16 = FUN_140a4fd40(local_1a98,&local_1ca8);
  uVar16 = FUN_140a5058c(&local_960,uVar16);
  FUN_140a4fdf2(local_1af0,0);
  FUN_140a5296a(&local_10e0);
  local_1e20 = CONCAT11(1,DAT_14c96b23c);
  local_1070 = local_1e20;
  local_1e18 = (undefined8 *)0x0;
  uStack_1e10 = 0;
  if (local_1060 == 0) {
LAB_140a4dd40:
    if (local_1068 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1068 != (undefined8 *)0x0) {
    (**(code **)*local_1068)(local_1068,0);
    FUN_1446efa72(&local_1068,0,0,0x10);
    local_1060 = 0;
    goto LAB_140a4dd40;
  }
  local_1068 = (undefined8 *)0x0;
  local_1060 = 0;
  if ((int)uStack_1e10 == 0) {
LAB_140a4dd7e:
    if (local_1e18 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1e18 != (undefined8 *)0x0) {
    (**(code **)*local_1e18)(local_1e18,0);
    FUN_1446efa72(&local_1e18,0,0,0x10);
    uStack_1e10 = uStack_1e10 & 0xffffffff00000000;
    goto LAB_140a4dd7e;
  }
  FUN_140a50426(local_11a0);
  lVar20 = FUN_140a52578(local_11a0);
  *(undefined4 *)(lVar20 + 0x40) = 1;
  *(undefined1 *)(lVar20 + 0x44) = 1;
  *(undefined4 *)(lVar20 + 0x48) = 1;
  *(undefined1 *)(lVar20 + 0x4c) = 1;
  local_1e30 = local_1bb8;
  local_1e28 = plStack_1bb0;
  if (plStack_1bb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1bb0 + 1) = (int)plStack_1bb0[1] + 1;
    UNLOCK();
  }
  uVar19 = FUN_140a4fe8e(lVar20,&local_1e30);
  uVar19 = FUN_140a52392(&local_10e0,uVar19);
  FUN_140a50426(local_1260);
  local_1e48 = 0x3f800000;
  local_1e44 = 1;
  local_1e40 = 0;
  uStack_1e38 = 0;
  uVar21 = FUN_140a5475a(local_1260);
  uVar19 = FUN_140a52392(uVar19,uVar21);
  FUN_140a50426(local_1320);
  lVar20 = FUN_140a52578(local_1320);
  *(undefined4 *)(lVar20 + 0x40) = 3;
  *(undefined1 *)(lVar20 + 0x44) = 1;
  *(undefined4 *)(lVar20 + 0x48) = 1;
  *(undefined1 *)(lVar20 + 0x4c) = 1;
  local_1e58 = local_1bc8;
  local_1e50 = plStack_1bc0;
  if (plStack_1bc0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1bc0 + 1) = (int)plStack_1bc0[1] + 1;
    UNLOCK();
  }
  uVar21 = FUN_140a4fe8e(lVar20,&local_1e58);
  uVar19 = FUN_140a52392(uVar19,uVar21);
  local_1f68 = (undefined8 *)&local_1e71;
  FUN_140a541dc(local_1e70,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x16a);
  FUN_140a50ec6(local_1e70,&local_1e08,uVar19);
  local_1df8 = local_1e08;
  local_1df0 = local_1e00;
  if (local_1e00 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e00 + 1) = (int)local_1e00[1] + 1;
    UNLOCK();
  }
  uVar19 = FUN_140a4fd40(local_1af0,&local_1df8);
  uVar16 = FUN_140a5058c(uVar16,uVar19);
  local_1f68 = (undefined8 *)&local_1e91;
  FUN_140a536a8(local_1e90,"SOverlay",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x148);
  FUN_140a4ff16(local_1e90,&local_1c80,uVar16);
  plVar24 = local_5c8;
  plVar7 = local_1c78;
  if (local_1c78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c78 + 1) = (int)local_1c78[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1c78 + 1) = (int)local_1c78[1] + 1;
    UNLOCK();
  }
  local_5d0 = local_1c80;
  local_5c8 = local_1c78;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar24 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar3 = (int *)((longlong)plVar24 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  local_1f68 = (undefined8 *)&local_1eb1;
  FUN_140a53d66(local_1eb0,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x145);
  uVar16 = FUN_140a534e6(local_1eb0,param_1 + 0x51);
  FUN_140a50bf4(uVar16,&local_1c58,&local_7a8);
  local_1f58 = local_1c58;
  local_1f50 = local_1c50;
  if (local_1c50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c50 + 1) = (int)local_1c50[1] + 1;
    UNLOCK();
    if (local_1c50 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_1c50 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*local_1c50)(local_1c50);
        LOCK();
        piVar3 = (int *)((longlong)local_1c50 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_1c50 + 0x10))(local_1c50);
        }
      }
    }
  }
  if (local_1ea8 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1ea8 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1ea8)(local_1ea8);
      LOCK();
      piVar3 = (int *)((longlong)local_1ea8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1ea8 + 0x10))(local_1ea8);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar24 = plVar7 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1c78 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1c78 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1c78)(local_1c78);
      LOCK();
      piVar3 = (int *)((longlong)local_1c78 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1c78 + 0x10))(local_1c78);
      }
    }
  }
  if (local_1e88 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1e88 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1e88)(local_1e88);
      LOCK();
      piVar3 = (int *)((longlong)local_1e88 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1e88 + 0x10))(local_1e88);
      }
    }
  }
  plVar7 = local_1df0;
  if (local_1df0 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1df0 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1df0)(local_1df0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1e00 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1e00 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1e00)(local_1e00);
      LOCK();
      piVar3 = (int *)((longlong)local_1e00 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1e00 + 0x10))(local_1e00);
      }
    }
  }
  if (local_1e68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1e68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1e68)(local_1e68);
      LOCK();
      piVar3 = (int *)((longlong)local_1e68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1e68 + 0x10))(local_1e68);
      }
    }
  }
  plVar7 = local_1e50;
  if (local_1e50 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1e50 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1e50)(local_1e50);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a509a6(local_1320);
  FUN_140a509a6(local_1260);
  plVar7 = local_1e28;
  if (local_1e28 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1e28 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1e28)(local_1e28);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a509a6(local_11a0);
  FUN_140a4fdc8(local_f38,local_f30);
  if (local_f38 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_10e0);
  if (local_1a9c == '\x01') {
    local_1a9c = '\0';
  }
  if (local_1aa4 == '\x01') {
    local_1aa4 = '\0';
  }
  if (cStack_1aac == '\x01') {
    cStack_1aac = '\0';
  }
  if (local_1ab8 == 0) {
LAB_140a4e1ab:
    if (local_1ac0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1ac0 != (undefined8 *)0x0) {
    (**(code **)*local_1ac0)(local_1ac0,0);
    FUN_1446efa72(&local_1ac0,0,0,0x10);
    local_1ab8 = 0;
    goto LAB_140a4e1ab;
  }
  if (local_1ae0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1ae0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1ae0)(local_1ae0);
      LOCK();
      piVar3 = (int *)((longlong)local_1ae0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1ae0 + 0x10))(local_1ae0);
      }
    }
  }
  if (local_1af0[0] != (undefined8 *)0x0) {
    (**(code **)*local_1af0[0])(local_1af0[0],1);
  }
  plVar7 = local_1ca0;
  if (local_1ca0 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1ca0 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1ca0)(local_1ca0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1cb0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1cb0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1cb0)(local_1cb0);
      LOCK();
      piVar3 = (int *)((longlong)local_1cb0 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1cb0 + 0x10))(local_1cb0);
      }
    }
  }
  if (local_1dd8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1dd8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1dd8)(local_1dd8);
      LOCK();
      piVar3 = (int *)((longlong)local_1dd8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1dd8 + 0x10))(local_1dd8);
      }
    }
  }
  plVar7 = local_1d68;
  if (local_1d68 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1d68 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1d68)(local_1d68);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1d78 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1d78 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1d78)(local_1d78);
      LOCK();
      piVar3 = (int *)((longlong)local_1d78 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1d78 + 0x10))(local_1d78);
      }
    }
  }
  if (local_1db8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1db8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1db8)(local_1db8);
      LOCK();
      piVar3 = (int *)((longlong)local_1db8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1db8 + 0x10))(local_1db8);
      }
    }
  }
  if (local_d60 == 0) {
LAB_140a4e275:
    if (local_d68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d68 != (undefined8 *)0x0) {
    (**(code **)*local_d68)(local_d68,0);
    FUN_1446efa72(&local_d68,0,0,0x10);
    local_d60 = 0;
    goto LAB_140a4e275;
  }
  FUN_140a4ff8c(&local_f28);
  FUN_140a509a6(local_d58);
  plVar7 = local_1d58;
  if (local_1d58 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1d58 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1d58)(local_1d58);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a509a6(local_c98);
  plVar7 = local_1cd8;
  if (local_1cd8 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_1cd8 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_1cd8)(local_1cd8);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1ce8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1ce8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1ce8)(local_1ce8);
      LOCK();
      piVar3 = (int *)((longlong)local_1ce8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1ce8 + 0x10))(local_1ce8);
      }
    }
  }
  if (local_1d28 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1d28 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1d28)(local_1d28);
      LOCK();
      piVar3 = (int *)((longlong)local_1d28 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1d28 + 0x10))(local_1d28);
      }
    }
  }
  if ((int)local_170 == 0) {
LAB_140a4e314:
    if (local_178 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_178 != (undefined8 *)0x0) {
    (**(code **)*local_178)(local_178,0);
    FUN_1446efa72(&local_178,0,0,0x10);
    local_170 = (undefined8 *)((ulonglong)local_170 & 0xffffffff00000000);
    goto LAB_140a4e314;
  }
  FUN_140a4ff8c(&local_338);
  FUN_140a509a6(local_bd8);
  FUN_140a4fdc8(local_970,local_968);
  if (local_970 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_b18);
  if (local_1a44 == '\x01') {
    local_1a44 = '\0';
  }
  if (local_1a4c == '\x01') {
    local_1a4c = '\0';
  }
  if (local_1a54 == '\x01') {
    local_1a54 = '\0';
  }
  if (local_1a60 == 0) {
LAB_140a4e3ad:
    if (local_1a68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1a68 != (undefined8 *)0x0) {
    (**(code **)*local_1a68)(local_1a68,0);
    FUN_1446efa72(&local_1a68,0,0,0x10);
    local_1a60 = 0;
    goto LAB_140a4e3ad;
  }
  if (local_1a88 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1a88 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1a88)(local_1a88);
      LOCK();
      piVar3 = (int *)((longlong)local_1a88 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1a88 + 0x10))(local_1a88);
      }
    }
  }
  if (local_1a98[0] != (undefined8 *)0x0) {
    (**(code **)*local_1a98[0])(local_1a98[0],1);
  }
  FUN_140a54e77(local_7b8,local_7b0);
  if (local_7b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_960);
  FUN_140a5660c(&local_7a8);
  plVar7 = plStack_1bc0;
  if (plStack_1bc0 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_1bc0 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_1bc0)(plStack_1bc0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = plStack_1bb0;
  if (plStack_1bb0 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_1bb0 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_1bb0)(plStack_1bb0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar22 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar3 = (int *)((longlong)plVar22 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  uVar16 = FUN_140a4fd40(local_1ba0,&local_1f58);
  uVar16 = FUN_140a5058c(local_1f60,uVar16);
  local_1f68 = &local_10e0;
  FUN_140a536a8(&local_7a8,"SOverlay",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x1d);
  FUN_140a4ff16(&local_7a8,&local_b18,uVar16);
  plVar22 = local_b10;
  plVar7 = local_14a0;
  if (local_b10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b10 + 1) = (int)local_b10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_b10 + 1) = (int)local_b10[1] + 1;
    UNLOCK();
  }
  local_14a8 = local_b18;
  local_14a0 = local_b10;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar24 = plVar7 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_1f68 = (undefined8 *)local_bd8;
  FUN_140a55c32(&local_338,"SBorder",
                ".\\Runtime/Slate/Private/Framework/Application/SWindowTitleBar.cpp",0x18);
  FUN_140a530e4(&local_338,&local_960,&local_1650);
  local_f28 = local_960;
  local_f20 = local_958;
  if (local_958 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_958 + 1) = (int)local_958[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3c,&local_f28);
  plVar7 = local_f20;
  if (local_f20 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_f20 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_f20)(local_f20);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_958 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_958 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_958)(local_958);
      LOCK();
      piVar3 = (int *)((longlong)local_958 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_958 + 0x10))(local_958);
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_32c,local_330);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar24 = plVar7 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar22 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar3 = (int *)((longlong)plVar22 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (local_b10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_b10)(local_b10);
      LOCK();
      piVar3 = (int *)((longlong)local_b10 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_b10 + 0x10))(local_b10);
      }
    }
  }
  plVar7 = plStack_7a0;
  if (plStack_7a0 != (longlong *)0x0) {
    LOCK();
    plVar22 = plStack_7a0 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*plStack_7a0)(plStack_7a0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_1f50;
  if (local_1f50 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_1f50 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_1f50)(local_1f50);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1b4c == '\x01') {
    local_1b4c = '\0';
  }
  if (local_1b54 == '\x01') {
    local_1b54 = '\0';
  }
  if (local_1b5c == '\x01') {
    local_1b5c = '\0';
  }
  if (local_1b68 == 0) {
LAB_140a4e63d:
    if (local_1b70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1b70 != (undefined8 *)0x0) {
    (**(code **)*local_1b70)(local_1b70,0);
    FUN_1446efa72(&local_1b70,0,0,0x10);
    local_1b68 = 0;
    goto LAB_140a4e63d;
  }
  if (local_1b90 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1b90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1b90)(local_1b90);
      LOCK();
      piVar3 = (int *)((longlong)local_1b90 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1b90 + 0x10))(local_1b90);
      }
    }
  }
  if (local_1ba0[0] != (undefined8 *)0x0) {
    (**(code **)*local_1ba0[0])(local_1ba0[0],1);
  }
  plVar7 = local_1ef0;
  if (local_1ef0 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_1ef0 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_1ef0)(local_1ef0);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1f00 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1f00 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1f00)(local_1f00);
      LOCK();
      piVar3 = (int *)((longlong)local_1f00 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1f00 + 0x10))(local_1f00);
      }
    }
  }
  if (local_1f38 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1f38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1f38)(local_1f38);
      LOCK();
      piVar3 = (int *)((longlong)local_1f38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_1f38 + 0x10))(local_1f38);
      }
    }
  }
  FUN_140a55a86(local_1a40);
  if (local_1af4 == '\x01') {
    local_1af4 = '\0';
  }
  if (local_1afc == '\x01') {
    local_1afc = '\0';
  }
  if (local_1b04 == '\x01') {
    local_1b04 = '\0';
  }
  if (local_1b10 != 0) {
    if (local_1b18 == (undefined8 *)0x0) goto LAB_140a4e708;
    (**(code **)*local_1b18)(local_1b18,0);
    FUN_1446efa72(&local_1b18,0,0,0x10);
    local_1b10 = 0;
  }
  if (local_1b18 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a4e708:
  if (plStack_1b38 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_1b38 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_1b38)(plStack_1b38);
      LOCK();
      piVar3 = (int *)((longlong)plStack_1b38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plStack_1b38 + 0x10))(plStack_1b38);
      }
    }
  }
  if (local_1b48[0] != (undefined8 *)0x0) {
    (**(code **)*local_1b48[0])(local_1b48[0],1);
  }
  FUN_140a54e77(local_1660,local_1658);
  if (local_1660 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(local_1808);
  FUN_140a59028(&local_1650);
  if ((local_90 ^ (ulonglong)auStack_1f88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a4fd40 FUN_140a4fd40 body=136 status=ok
// SIG undefined FUN_140a4fd40(void)

longlong FUN_140a4fd40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000140a4fda2;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000140a4fda2:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 140a4fdc8 FUN_140a4fdc8 body=41 status=ok
// SIG undefined FUN_140a4fdc8(void)

void FUN_140a4fdc8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140a509a6(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 140a4fdf2 FUN_140a4fdf2 body=155 status=ok
// SIG undefined FUN_140a4fdf2(void)

undefined8 * FUN_140a4fdf2(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_149ef0310;
  puVar3[4] = &PTR_LAB_149ef0320;
  *(undefined4 *)(puVar3 + 8) = param_2;
  *param_1 = puVar3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 140a4fe8e FUN_140a4fe8e body=136 status=ok
// SIG undefined FUN_140a4fe8e(void)

longlong FUN_140a4fe8e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000140a4fef0;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000140a4fef0:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 140a4ff16 FUN_140a4ff16 body=117 status=ok
// SIG undefined FUN_140a4ff16(void)

longlong * FUN_140a4ff16(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a54a0c(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140a4ff8c FUN_140a4ff8c body=969 status=ok
// SIG undefined FUN_140a4ff8c(void)

void FUN_140a4ff8c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_140a50355(param_1[0x33],(int)param_1[0x34]);
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + 0x31;
  if ((int)param_1[0x32] == 0) {
LAB_140a4ffcb:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x32) = 0;
      goto LAB_140a4ffcb;
    }
  }
  if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2e] + 0x10))();
  }
  if ((char)param_1[0x2d] == '\x01') {
    FUN_145766a5a(param_1 + 0x22);
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  plVar3 = param_1 + 0x1f;
  if ((int)param_1[0x20] == 0) {
LAB_140a5000a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x20) = 0;
      goto LAB_140a5000a;
    }
  }
  plVar3 = param_1 + 0x1a;
  if ((int)param_1[0x1b] == 0) {
LAB_140a5002a:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1b) = 0;
      goto LAB_140a5002a;
    }
  }
  if ((char)param_1[0x19] == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  plVar3 = param_1 + 0x12;
  if ((int)param_1[0x13] == 0) {
LAB_140a50057:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x13) = 0;
      goto LAB_140a50057;
    }
  }
  plVar3 = param_1 + 0xf;
  if ((int)param_1[0x10] == 0) {
LAB_140a50074:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x10) = 0;
      goto LAB_140a50074;
    }
  }
  plVar3 = param_1 + 0xc;
  if ((int)param_1[0xd] == 0) {
LAB_140a5008e:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0xd) = 0;
      goto LAB_140a5008e;
    }
  }
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  plVar3 = param_1 + 8;
  if ((int)param_1[9] == 0) {
LAB_140a500b2:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 9) = 0;
      goto LAB_140a500b2;
    }
  }
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = param_1 + 3;
  if ((int)param_1[4] != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a500e5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140a500e5:
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a500fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140a50355 FUN_140a50355 body=75 status=ok
// SIG undefined FUN_140a50355(void)

void FUN_140a50355(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a503a0 FUN_140a503a0 body=20 status=ok
// SIG undefined FUN_140a503a0(void)

void FUN_140a503a0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef0008;
  FUN_140a503b4(param_1 + 0x18);
  return;
}



// FUNCTION 140a503b4 FUN_140a503b4 body=61 status=ok
// SIG undefined FUN_140a503b4(void)

void FUN_140a503b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  FUN_140a503f1(lVar1,*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a503f1 FUN_140a503f1 body=53 status=ok
// SIG undefined FUN_140a503f1(void)

void FUN_140a503f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,1);
      }
      plVar2 = plVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a50426 FUN_140a50426 body=215 status=ok
// SIG undefined FUN_140a50426(void)

undefined8 * FUN_140a50426(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined4 *)(puVar3 + 8) = 1;
  *(undefined1 **)((longlong)puVar3 + 0x44) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *puVar3 = &PTR_FUN_149f050f0;
  puVar3[4] = &PTR_LAB_149f05100;
  *param_1 = puVar3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 140a504fe FUN_140a504fe body=142 status=ok
// SIG undefined FUN_140a504fe(void)

longlong FUN_140a504fe(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a5053b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a5053b:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140a5058c FUN_140a5058c body=235 status=ok
// SIG undefined FUN_140a5058c(void)

longlong FUN_140a5058c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar4 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar4 + 1U) {
    FUN_140a531c2((longlong *)(param_1 + 0x1a8),iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  lVar7 = (longlong)iVar4 * 0x58;
  lVar1 = lVar5 + lVar7;
  *(undefined8 *)(lVar5 + lVar7) = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar5 + 8 + lVar7) = param_2[1];
  *(undefined8 *)(lVar5 + 0x10 + lVar7) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(lVar5 + 0x28 + lVar7) = *(undefined1 *)(param_2 + 5);
  uVar6 = param_2[4];
  puVar2 = (undefined8 *)(lVar5 + 0x18 + lVar7);
  *puVar2 = param_2[3];
  puVar2[1] = uVar6;
  *(undefined8 *)(lVar5 + 0x30 + lVar7) = 0;
  *(undefined4 *)(lVar5 + 0x38 + lVar7) = 0;
  *(undefined8 *)(lVar5 + 0x30 + lVar7) = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(lVar5 + 0x38 + lVar7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_2 + 7) = 0;
  cVar3 = *(char *)((longlong)param_2 + 0x44);
  *(char *)(lVar5 + 0x44 + lVar7) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 8);
  }
  cVar3 = *(char *)((longlong)param_2 + 0x4c);
  *(char *)(lVar1 + 0x4c) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 9);
  }
  cVar3 = *(char *)((longlong)param_2 + 0x54);
  *(char *)(lVar1 + 0x54) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_2 + 10);
  }
  return param_1;
}



// FUNCTION 140a50678 FUN_140a50678 body=163 status=ok
// SIG undefined FUN_140a50678(void)

longlong FUN_140a50678(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_140a5071c();
  uVar3 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar1 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140a506ca;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a506ca:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 140a5071c FUN_140a5071c body=650 status=ok
// SIG undefined FUN_140a5071c(void)

undefined8 * FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 140a509a6 FUN_140a509a6 body=589 status=ok
// SIG undefined FUN_140a509a6(void)

void FUN_140a509a6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = param_1 + 0x16;
  if ((int)param_1[0x17] == 0) {
LAB_140a509c3:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x17) = 0;
      goto LAB_140a509c3;
    }
  }
  plVar3 = param_1 + 0x13;
  if ((int)param_1[0x14] == 0) {
LAB_140a509e3:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_140a509e3;
    }
  }
  if ((char)param_1[0x11] == '\x01') {
    plVar3 = param_1 + 0xf;
    if ((int)param_1[0x10] == 0) {
LAB_140a50a09:
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar4 = (undefined8 *)*plVar3;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
        goto LAB_140a50a09;
      }
    }
    plVar3 = param_1 + 0xc;
    if ((int)param_1[0xd] == 0) {
LAB_140a50a23:
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar4 = (undefined8 *)*plVar3;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,0);
        FUN_1446efa72(plVar3,0,0,0x10);
        *(undefined4 *)(param_1 + 0xd) = 0;
        goto LAB_140a50a23;
      }
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  plVar3 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140a50a64;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140a50a64:
  plVar3 = (longlong *)param_1[2];
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a50b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,1);
  return;
}



// FUNCTION 140a50bf4 FUN_140a50bf4 body=117 status=ok
// SIG undefined FUN_140a50bf4(void)

longlong * FUN_140a50bf4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a58268(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 140a50c6a FUN_140a50c6a body=217 status=ok
// SIG undefined FUN_140a50c6a(void)

longlong * FUN_140a50c6a(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  local_48 = *(undefined1 *)(param_3 + 0x1b8);
  local_58 = *(undefined4 *)(param_3 + 0x1a8);
  uStack_54 = *(undefined4 *)(param_3 + 0x1ac);
  uStack_50 = *(undefined4 *)(param_3 + 0x1b0);
  uStack_4c = *(undefined4 *)(param_3 + 0x1b4);
  local_40 = 0;
  local_38 = 0;
  FUN_140a51be2(&local_40,param_3 + 0x1c0);
  FUN_140a50d48(lVar1,&local_58);
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  else {
    bVar4 = 0x20;
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a50d44 FUN_140a50d44 body=3 status=ok
// SIG undefined FUN_140a50d44(void)

undefined8 FUN_140a50d44(void)

{
  return 0;
}



// FUNCTION 140a50d48 FUN_140a50d48 body=140 status=ok
// SIG undefined FUN_140a50d48(void)

void FUN_140a50d48(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  
  if ((*(int *)(param_2 + 0x20) == 0) || (*(longlong **)(param_2 + 0x18) == (longlong *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x30))();
  }
  *(undefined1 *)(param_1 + 0x1f0) = uVar3;
  FUN_140a50dd4(param_1 + 0x1e0,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a50dd4 FUN_140a50dd4 body=129 status=ok
// SIG undefined FUN_140a50dd4(void)

undefined8 FUN_140a50dd4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      uVar2 = FUN_146a763d6(param_1,param_2,param_3 + 0x18);
      return uVar2;
    }
  }
  if (*(char *)(param_3 + 0x10) == '\x01') {
    uVar2 = FUN_140133f12(param_3);
    uVar2 = FUN_140a50e56(param_1,param_2,uVar2);
    return uVar2;
  }
  FUN_1400b73c8(param_2,param_1);
  return 0;
}



// FUNCTION 140a50e56 FUN_140a50e56 body=112 status=ok
// SIG undefined FUN_140a50e56(void)

ulonglong FUN_140a50e56(double *param_1,undefined8 param_2,double *param_3)

{
  ulonglong uVar1;
  double dVar2;
  
  FUN_1400b73c8(param_2,param_1);
  uVar1 = -(ulonglong)(param_3[1] != param_1[1] || *param_1 != *param_3);
  if ((uVar1 & 1) != 0) {
    dVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = dVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 140a50ec6 FUN_140a50ec6 body=117 status=ok
// SIG undefined FUN_140a50ec6(void)

longlong * FUN_140a50ec6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_140a50f3c(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}


