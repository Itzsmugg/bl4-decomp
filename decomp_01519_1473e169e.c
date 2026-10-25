// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473e169e FUN_1473e169e body=533 status=ok
// SIG undefined FUN_1473e169e(void)

void FUN_1473e169e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
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
  if (DAT_14ca78b20 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca78b20,0,0,4);
  }
  uVar7 = DAT_14ca78b28;
  uVar2 = local_50;
  if (DAT_14ca78b28 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14ca78b18,0,DAT_14ca78b28,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14ca78b20;
        if (DAT_14ca78b20 == (undefined *)0x0) {
          puVar4 = &DAT_14ca78b18;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14ca78b28 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca78af0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca78b08 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca78ae0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x20;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)
                (int)(*(int *)(lVar1 + 0xc + lVar5) << 8 ^ uVar7 ^
                     (*(int *)(lVar1 + 8 + lVar5) << 0x10 | uVar7 >> 0x10)) &
                (longlong)(int)DAT_14ca78b28 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar5) = iVar8;
        puVar4 = DAT_14ca78b20;
        if (DAT_14ca78b20 == (undefined *)0x0) {
          puVar4 = &DAT_14ca78b18;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14ca78b28 - 1U & uVar9) * 4);
        puVar4 = DAT_14ca78b20;
        if (DAT_14ca78b20 == (undefined *)0x0) {
          puVar4 = &DAT_14ca78b18;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14ca78b28 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
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



// FUNCTION 1473e18b4 FUN_1473e18b4 body=96 status=ok
// SIG undefined FUN_1473e18b4(void)

void FUN_1473e18b4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14ca78b18;
  if (DAT_14ca78b20 != (undefined *)0x0) {
    puVar3 = DAT_14ca78b20;
  }
  lVar4 = (longlong)*(int *)(DAT_14ca78ae0 + 0x1c + (longlong)param_1 * 0x20);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14ca78ae0 + 0x18 + lVar4 * 0x20);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14ca78ae0 + lVar4 * 0x20 + 0x18);
  }
  *puVar1 = *(undefined4 *)(DAT_14ca78ae0 + (longlong)param_1 * 0x20 + 0x18);
  FUN_1473e161e();
  return;
}



// FUNCTION 1473e1914 FUN_1473e1914 body=125 status=ok
// SIG undefined FUN_1473e1914(void)

int FUN_1473e1914(uint param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  
  if (DAT_14ca78b48 != DAT_14ca78b74) {
    puVar3 = &DAT_14ca78b78;
    if (DAT_14ca78b80 != (undefined *)0x0) {
      puVar3 = DAT_14ca78b80;
    }
    for (iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14ca78b88 - 1U & param_1) * 4); iVar1 != -1;
        iVar1 = *(int *)(DAT_14ca78b40 + 0x50 + (longlong)iVar1 * 0x58)) {
      cVar2 = FUN_14024386e(DAT_14ca78b40 + (longlong)iVar1 * 0x58,param_2);
      if (cVar2 != '\0') {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1473e1992 FUN_1473e1992 body=273 status=ok
// SIG undefined FUN_1473e1992(void)

undefined4 * FUN_1473e1992(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined *puVar11;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473e1aa4(local_40);
  puVar1 = (undefined4 *)param_2[1];
  FUN_144a8af26(local_38,*param_2);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_38 + 0x38) = *puVar1;
  *(undefined4 *)(local_38 + 0x3c) = uVar3;
  *(undefined4 *)(local_38 + 0x40) = uVar4;
  *(undefined4 *)(local_38 + 0x44) = uVar5;
  *(undefined8 *)(local_38 + 0x48) = *(undefined8 *)(puVar1 + 4);
  *(undefined4 *)(local_38 + 0x50) = 0xffffffff;
  local_44 = local_40[0];
  uVar7 = FUN_144847bd5(local_38);
  cVar6 = FUN_1473e1bae(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar6 == '\0') {
    uVar8 = DAT_14ca78b48 - DAT_14ca78b74;
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= DAT_14ca78b88)) {
      uVar7 = DAT_14ca78b88 - 1U & uVar7;
      *(uint *)(local_38 + 0x54) = uVar7;
      puVar11 = &DAT_14ca78b78;
      if (DAT_14ca78b80 != (undefined *)0x0) {
        puVar11 = DAT_14ca78b80;
      }
      *(undefined4 *)(local_38 + 0x50) = *(undefined4 *)(puVar11 + (longlong)(int)uVar7 * 4);
      *(undefined4 *)(puVar11 + (longlong)(int)uVar7 * 4) = local_44;
    }
    else {
      DAT_14ca78b88 = iVar10;
      FUN_1473e1c8a();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e1aa4 FUN_1473e1aa4 body=266 status=ok
// SIG undefined FUN_1473e1aa4(void)

int * FUN_1473e1aa4(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca78b70;
  iVar4 = DAT_14ca78b48;
  if (DAT_14ca78b74 == 0) {
    iVar2 = DAT_14ca78b48 + 1;
    bVar7 = DAT_14ca78b4c == DAT_14ca78b48;
    DAT_14ca78b48 = iVar2;
    if (bVar7) {
      FUN_1403e7a24(&DAT_14ca78b40,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca78b50,1);
    puVar3 = DAT_14ca78b60;
    if (DAT_14ca78b60 == (undefined *)0x0) {
      puVar3 = &DAT_14ca78b50;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca78b70;
    DAT_14ca78b70 = *(int *)(DAT_14ca78b40 + 4 + lVar6 * 0x58);
    DAT_14ca78b74 = DAT_14ca78b74 + -1;
    iVar4 = iVar2;
    if (DAT_14ca78b74 != 0) {
      *(undefined4 *)(DAT_14ca78b40 + (longlong)DAT_14ca78b70 * 0x58) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca78b50;
  if (DAT_14ca78b60 != (undefined *)0x0) {
    puVar3 = DAT_14ca78b60;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x58 + DAT_14ca78b40;
  return param_1;
}



// FUNCTION 1473e1bae FUN_1473e1bae body=92 status=ok
// SIG undefined FUN_1473e1bae(void)

undefined8 FUN_1473e1bae(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  
  if ((DAT_14ca78b48 - DAT_14ca78b74 != 1) && (iVar1 = FUN_1473e1914(), iVar1 != -1)) {
    memmove((void *)((longlong)iVar1 * 0x58 + DAT_14ca78b40),param_2,0x50);
    FUN_1473e1c0a(*param_3);
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1473e1c0a FUN_1473e1c0a body=128 status=ok
// SIG undefined FUN_1473e1c0a(void)

void FUN_1473e1c0a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca78b40;
  if (DAT_14ca78b74 != 0) {
    *(int *)(DAT_14ca78b40 + (longlong)DAT_14ca78b70 * 0x58) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x58) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca78b74) {
    iVar4 = DAT_14ca78b70;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x58) = iVar4;
  DAT_14ca78b74 = DAT_14ca78b74 + 1;
  puVar3 = &DAT_14ca78b50;
  if (DAT_14ca78b60 != (undefined *)0x0) {
    puVar3 = DAT_14ca78b60;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca78b70 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473e1c8a FUN_1473e1c8a body=477 status=ok
// SIG undefined FUN_1473e1c8a(void)

void FUN_1473e1c8a(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14ca78b80 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca78b80,0,0,4);
  }
  uVar2 = DAT_14ca78b88;
  uVar3 = local_60;
  if (DAT_14ca78b88 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14ca78b78,0,DAT_14ca78b88,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14ca78b80;
        if (DAT_14ca78b80 == (undefined *)0x0) {
          puVar7 = &DAT_14ca78b78;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14ca78b88 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14ca78b50;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14ca78b68 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14ca78b40;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x58;
        iVar5 = FUN_144847bd5(lVar1 + lVar9);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14ca78b88 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x54 + lVar9) = iVar5;
        puVar7 = DAT_14ca78b80;
        if (DAT_14ca78b80 == (undefined *)0x0) {
          puVar7 = &DAT_14ca78b78;
        }
        *(undefined4 *)(lVar1 + 0x50 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14ca78b88 - 1U & uVar6) * 4);
        puVar7 = DAT_14ca78b80;
        if (DAT_14ca78b80 == (undefined *)0x0) {
          puVar7 = &DAT_14ca78b78;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14ca78b88 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473e1e72 FUN_1473e1e72 body=52 status=ok
// SIG undefined FUN_1473e1e72(void)

void FUN_1473e1e72(longlong *param_1)

{
  FUN_1473e1ea6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473e1ea6 FUN_1473e1ea6 body=89 status=ok
// SIG undefined FUN_1473e1ea6(void)

void FUN_1473e1ea6(longlong param_1)

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



// FUNCTION 1473e1f00 FUN_1473e1f00 body=132 status=ok
// SIG undefined FUN_1473e1f00(void)

void FUN_1473e1f00(longlong param_1,int param_2)

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



// FUNCTION 1473e1f86 FUN_1473e1f86 body=312 status=ok
// SIG undefined FUN_1473e1f86(void)

undefined4 * FUN_1473e1f86(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1473e20c0(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1473e21a6(param_1,uVar3,local_40,&local_4c);
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
      FUN_1473e2294(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e20c0 FUN_1473e20c0 body=229 status=ok
// SIG undefined FUN_1473e20c0(void)

int * FUN_1473e20c0(longlong *param_1,int *param_2)

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



// FUNCTION 1473e21a6 FUN_1473e21a6 body=124 status=ok
// SIG undefined FUN_1473e21a6(void)

undefined8 FUN_1473e21a6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1473e2222(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473e2222 FUN_1473e2222 body=114 status=ok
// SIG undefined FUN_1473e2222(void)

void FUN_1473e2222(longlong *param_1,int param_2)

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



// FUNCTION 1473e2294 FUN_1473e2294 body=477 status=ok
// SIG undefined FUN_1473e2294(void)

void FUN_1473e2294(longlong *param_1)

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



// FUNCTION 1473e2472 FUN_1473e2472 body=147 status=ok
// SIG undefined FUN_1473e2472(void)

void FUN_1473e2472(longlong param_1,int param_2)

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



// FUNCTION 1473e2506 FUN_1473e2506 body=62 status=ok
// SIG undefined FUN_1473e2506(void)

void FUN_1473e2506(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473e2544(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1473e2544 FUN_1473e2544 body=112 status=ok
// SIG undefined FUN_1473e2544(void)

ulonglong FUN_1473e2544(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473e257e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1473e257e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473e25b4 FUN_1473e25b4 body=146 status=ok
// SIG undefined FUN_1473e25b4(void)

void FUN_1473e25b4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473e2648 FUN_1473e2648 body=62 status=ok
// SIG undefined FUN_1473e2648(void)

void FUN_1473e2648(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473e2686(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,8);
  }
  return;
}



// FUNCTION 1473e2686 FUN_1473e2686 body=110 status=ok
// SIG undefined FUN_1473e2686(void)

ulonglong FUN_1473e2686(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x110) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473e26bf;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x110,8);
      param_2 = param_2 / 0x110;
    }
  }
LAB_1473e26bf:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473e26f4 FUN_1473e26f4 body=52 status=ok
// SIG undefined FUN_1473e26f4(void)

void FUN_1473e26f4(void)

{
  if (1 < DAT_14ca78c58) {
    FUN_146196dfc();
    DAT_14ca78c58 = 1;
    FUN_1473e289c();
    return;
  }
  FUN_1473e2728();
  FUN_146196dfc();
  return;
}



// FUNCTION 1473e2728 FUN_1473e2728 body=370 status=ok
// SIG undefined FUN_1473e2728(void)

void FUN_1473e2728(void)

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
  puVar5 = &DAT_14ca78c48;
  if (DAT_14ca78c50 != (undefined *)0x0) {
    puVar5 = DAT_14ca78c50;
  }
  iVar4 = DAT_14ca78c58 + 3;
  if (-1 < DAT_14ca78c58) {
    iVar4 = DAT_14ca78c58;
  }
  if (DAT_14ca78c18 - DAT_14ca78c44 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca78c20;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca78c38 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca78c38;
    }
    local_78 = &DAT_14ca78c10;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca78c20)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0xa4 + (longlong)iVar2 * 0xa8) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca78c10 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca78c20 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca78c58) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca78c58);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473e289c FUN_1473e289c body=477 status=ok
// SIG undefined FUN_1473e289c(void)

void FUN_1473e289c(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
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
  if (DAT_14ca78c50 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca78c50,0,0,4);
  }
  uVar2 = DAT_14ca78c58;
  uVar3 = local_50;
  if (DAT_14ca78c58 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14ca78c48,0,DAT_14ca78c58,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14ca78c50;
        if (DAT_14ca78c50 == (undefined *)0x0) {
          puVar5 = &DAT_14ca78c48;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14ca78c58 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca78c20;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca78c38 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca78c10;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0xa8;
        uVar9 = (longlong)(int)DAT_14ca78c58 - 1U & (longlong)*(int *)(lVar1 + 0x90 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0xa4 + lVar6) = iVar8;
        puVar5 = DAT_14ca78c50;
        if (DAT_14ca78c50 == (undefined *)0x0) {
          puVar5 = &DAT_14ca78c48;
        }
        *(undefined4 *)(lVar1 + 0xa0 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14ca78c58 - 1U & uVar9) * 4);
        puVar5 = DAT_14ca78c50;
        if (DAT_14ca78c50 == (undefined *)0x0) {
          puVar5 = &DAT_14ca78c48;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14ca78c58 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473e2a7a FUN_1473e2a7a body=168 status=ok
// SIG undefined FUN_1473e2a7a(void)

int FUN_1473e2a7a(uint param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  lVar3 = DAT_14ca78c10;
  if (DAT_14ca78c18 != DAT_14ca78c44) {
    puVar5 = &DAT_14ca78c48;
    if (DAT_14ca78c50 != (undefined *)0x0) {
      puVar5 = DAT_14ca78c50;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14ca78c58 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = *(int *)((longlong)param_2 + 0x88);
      do {
        lVar6 = (longlong)iVar1 * 0xa8;
        if ((*(int *)(lVar3 + 0x88 + lVar6) == iVar2) &&
           (iVar4 = memcmp((void *)(lVar3 + lVar6),param_2,(longlong)iVar2 << 3), iVar4 == 0)) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + 0xa0 + lVar6);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1473e2b22 FUN_1473e2b22 body=262 status=ok
// SIG undefined FUN_1473e2b22(void)

undefined4 * FUN_1473e2b22(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473e2c2a(local_40);
  FUN_1473e2dd0(param_2,local_38);
  *(undefined4 *)(local_38 + 0xa0) = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = *(uint *)(local_38 + 0x90);
  cVar3 = FUN_1473e2d3e(uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = DAT_14ca78c18 - DAT_14ca78c44;
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14ca78c58)) {
      uVar5 = DAT_14ca78c58 - 1U & uVar5;
      *(uint *)(local_38 + 0xa4) = uVar5;
      puVar8 = &DAT_14ca78c48;
      if (DAT_14ca78c50 != (undefined *)0x0) {
        puVar8 = DAT_14ca78c50;
      }
      *(undefined4 *)(local_38 + 0xa0) = *(undefined4 *)(puVar8 + (longlong)(int)uVar5 * 4);
      *(undefined4 *)(puVar8 + (longlong)(int)uVar5 * 4) = local_44;
    }
    else {
      DAT_14ca78c58 = iVar7;
      FUN_1473e289c();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e2c2a FUN_1473e2c2a body=275 status=ok
// SIG undefined FUN_1473e2c2a(void)

int * FUN_1473e2c2a(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca78c40;
  iVar4 = DAT_14ca78c18;
  if (DAT_14ca78c44 == 0) {
    iVar2 = DAT_14ca78c18 + 1;
    bVar7 = DAT_14ca78c1c == DAT_14ca78c18;
    DAT_14ca78c18 = iVar2;
    if (bVar7) {
      FUN_140727bdc(&DAT_14ca78c10,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca78c20,1);
    puVar3 = DAT_14ca78c30;
    if (DAT_14ca78c30 == (undefined *)0x0) {
      puVar3 = &DAT_14ca78c20;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca78c40;
    DAT_14ca78c40 = *(int *)(DAT_14ca78c10 + 4 + lVar6 * 0xa8);
    DAT_14ca78c44 = DAT_14ca78c44 + -1;
    iVar4 = iVar2;
    if (DAT_14ca78c44 != 0) {
      *(undefined4 *)(DAT_14ca78c10 + (longlong)DAT_14ca78c40 * 0xa8) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca78c20;
  if (DAT_14ca78c30 != (undefined *)0x0) {
    puVar3 = DAT_14ca78c30;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0xa8 + DAT_14ca78c10;
  return param_1;
}



// FUNCTION 1473e2d3e FUN_1473e2d3e body=145 status=ok
// SIG undefined FUN_1473e2d3e(void)

undefined8 FUN_1473e2d3e(undefined8 param_1,void *param_2,int *param_3)

{
  uint *puVar1;
  void *_Dst;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((DAT_14ca78c18 - DAT_14ca78c44 != 1) && (iVar4 = FUN_1473e2a7a(), iVar4 != -1)) {
    _Dst = (void *)(DAT_14ca78c10 + (longlong)iVar4 * 0xa8);
    lVar3 = *(longlong *)(DAT_14ca78c10 + 0x98 + (longlong)iVar4 * 0xa8);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    memmove(_Dst,param_2,0xa0);
    FUN_1473e2e4c(*param_3);
    *param_3 = iVar4;
    return 1;
  }
  return 0;
}



// FUNCTION 1473e2dd0 FUN_1473e2dd0 body=124 status=ok
// SIG undefined FUN_1473e2dd0(void)

void * FUN_1473e2dd0(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  _Src = (void *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  iVar1 = *(int *)((longlong)_Src + 0x88);
  *(int *)((longlong)param_2 + 0x88) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x8c) = 0x11;
  }
  else {
    FUN_145f89ee8(param_2,iVar1,0);
    memcpy(param_2,_Src,(longlong)iVar1 << 3);
  }
  *(undefined8 *)((longlong)param_2 + 0x90) = *(undefined8 *)((longlong)_Src + 0x90);
  *(undefined8 *)((longlong)param_2 + 0x98) = *puVar2;
  *puVar2 = 0;
  return param_2;
}



// FUNCTION 1473e2e4c FUN_1473e2e4c body=134 status=ok
// SIG undefined FUN_1473e2e4c(void)

void FUN_1473e2e4c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca78c10;
  if (DAT_14ca78c44 != 0) {
    *(int *)(DAT_14ca78c10 + (longlong)DAT_14ca78c40 * 0xa8) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0xa8) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca78c44) {
    iVar4 = DAT_14ca78c40;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0xa8) = iVar4;
  DAT_14ca78c44 = DAT_14ca78c44 + 1;
  puVar3 = &DAT_14ca78c20;
  if (DAT_14ca78c30 != (undefined *)0x0) {
    puVar3 = DAT_14ca78c30;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca78c40 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1473e2ed2 FUN_1473e2ed2 body=66 status=ok
// SIG undefined FUN_1473e2ed2(void)

void FUN_1473e2ed2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14008014e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1473e2f14 FUN_1473e2f14 body=293 status=ok
// SIG undefined FUN_1473e2f14(void)

undefined4 * FUN_1473e2f14(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
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
  FUN_144a49c02(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_144b079a6(param_1,uVar4,local_40);
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
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
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
      FUN_14499e768(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e303a FUN_1473e303a body=67 status=ok
// SIG undefined FUN_1473e303a(void)

void FUN_1473e303a(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 1473e307e FUN_1473e307e body=132 status=ok
// SIG undefined FUN_1473e307e(void)

void FUN_1473e307e(longlong param_1,int param_2)

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



// FUNCTION 1473e3104 FUN_1473e3104 body=29 status=ok
// SIG undefined FUN_1473e3104(void)

undefined8 FUN_1473e3104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473e313e FUN_1473e313e body=68 status=ok
// SIG undefined FUN_1473e313e(void)

void FUN_1473e313e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149ec9790;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a36bca0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1473e3182 FUN_1473e3182 body=68 status=ok
// SIG undefined FUN_1473e3182(void)

void FUN_1473e3182(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149ec9790;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a36bca0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1473e31c6 FUN_1473e31c6 body=108 status=ok
// SIG undefined FUN_1473e31c6(void)

void FUN_1473e31c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149ec9790;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a36bca0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473e3223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1473e3244 FUN_1473e3244 body=25 status=ok
// SIG undefined FUN_1473e3244(void)

undefined8 FUN_1473e3244(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1473e325e FUN_1473e325e body=78 status=ok
// SIG undefined FUN_1473e325e(void)

void FUN_1473e325e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar3 = param_1;
    }
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1473d787a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while (iVar1 != (int)lVar4);
  }
  return;
}



// FUNCTION 1473e32ac FUN_1473e32ac body=75 status=ok
// SIG undefined FUN_1473e32ac(void)

void FUN_1473e32ac(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x30),
              (longlong)*(int *)((longlong)param_1 + 0x38) << 3);
      FUN_1446efa72((longlong)param_1 + 0x30,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1473e32f8 FUN_1473e32f8 body=132 status=ok
// SIG undefined FUN_1473e32f8(void)

void FUN_1473e32f8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,8);
  return;
}



// FUNCTION 1473e337c FUN_1473e337c body=201 status=ok
// SIG undefined FUN_1473e337c(void)

void FUN_1473e337c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 1473e3446 FUN_1473e3446 body=70 status=ok
// SIG undefined FUN_1473e3446(void)

void FUN_1473e3446(longlong *param_1)

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
        FUN_1473d787a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1473e348c FUN_1473e348c body=86 status=ok
// SIG undefined FUN_1473e348c(void)

void FUN_1473e348c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1473e34e2 FUN_1473e34e2 body=86 status=ok
// SIG undefined FUN_1473e34e2(void)

void FUN_1473e34e2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1473e3538 FUN_1473e3538 body=132 status=ok
// SIG undefined FUN_1473e3538(void)

void FUN_1473e3538(longlong param_1,int param_2)

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



// FUNCTION 1473e35bd FUN_1473e35bd body=19 status=ok
// SIG undefined FUN_1473e35bd(void)

void FUN_1473e35bd(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1473e35d0 FUN_1473e35d0 body=110 status=ok
// SIG undefined FUN_1473e35d0(void)

void FUN_1473e35d0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 6;
    if (6 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x3c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1473e3640(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473e3640 FUN_1473e3640 body=132 status=ok
// SIG undefined FUN_1473e3640(void)

void FUN_1473e3640(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,8);
  return;
}



// FUNCTION 1473e36c4 FUN_1473e36c4 body=94 status=ok
// SIG undefined FUN_1473e36c4(void)

void FUN_1473e36c4(longlong param_1,uint param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (ulonglong)param_2 * 8);
  FUN_1473e303a(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar1 - param_3;
  return;
}



// FUNCTION 1473e3722 FUN_1473e3722 body=52 status=ok
// SIG undefined FUN_1473e3722(void)

void FUN_1473e3722(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473e3756(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_1473e3640(param_1,*(undefined4 *)(param_1 + 0x38),iVar1);
  return;
}



// FUNCTION 1473e3756 FUN_1473e3756 body=108 status=ok
// SIG undefined FUN_1473e3756(void)

ulonglong FUN_1473e3756(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 6;
  if (6 < param_1) {
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



// FUNCTION 1473e37c2 FUN_1473e37c2 body=110 status=ok
// SIG undefined FUN_1473e37c2(void)

void FUN_1473e37c2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 6;
    if (6 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x3c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1473e3832(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473e3832 FUN_1473e3832 body=132 status=ok
// SIG undefined FUN_1473e3832(void)

void FUN_1473e3832(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,8);
  return;
}



// FUNCTION 1473e38b6 FUN_1473e38b6 body=52 status=ok
// SIG undefined FUN_1473e38b6(void)

void FUN_1473e38b6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473e38ea(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_1473e3832(param_1,*(undefined4 *)(param_1 + 0x38),iVar1);
  return;
}



// FUNCTION 1473e38ea FUN_1473e38ea body=108 status=ok
// SIG undefined FUN_1473e38ea(void)

ulonglong FUN_1473e38ea(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 6;
  if (6 < param_1) {
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



// FUNCTION 1473e3956 FUN_1473e3956 body=110 status=ok
// SIG undefined FUN_1473e3956(void)

void FUN_1473e3956(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 6;
    if (6 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x3c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1473e32f8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473e39c6 FUN_1473e39c6 body=79 status=ok
// SIG undefined FUN_1473e39c6(void)

void FUN_1473e39c6(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_14a36ba18;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x40) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1473d787a(param_1 + 0x30);
  FUN_144aa9b48(param_1);
  return;
}



// FUNCTION 1473e3a16 FUN_1473e3a16 body=79 status=ok
// SIG undefined FUN_1473e3a16(void)

void FUN_1473e3a16(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_14a36ba18;
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 0x60) + 0x40) = puVar1;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1473d787a(param_1 + 0x30);
  FUN_144aa9b48(param_1);
  return;
}



// FUNCTION 1473e3a66 FUN_1473e3a66 body=214 status=ok
// SIG undefined FUN_1473e3a66(void)

undefined8 *
FUN_1473e3a66(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14a343270;
  FUN_140056680(param_1 + 9);
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14a36be10;
  param_1[0xe] = param_5;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x15] = puVar1;
  param_1[0x14] = puVar1;
  param_1[0x16] = param_4;
  param_1[0x17] = 0;
  FUN_1473d9c6e(param_1 + 0xe,8);
  return param_1;
}



// FUNCTION 1473e3b3c FUN_1473e3b3c body=38 status=ok
// SIG undefined FUN_1473e3b3c(void)

undefined8 FUN_1473e3b3c(undefined8 param_1,int param_2)

{
  FUN_1473e3b7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473e3b7a FUN_1473e3b7a body=69 status=ok
// SIG undefined FUN_1473e3b7a(void)

void FUN_1473e3b7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a36be10;
  FUN_1473d9d2e(param_1 + 0xe);
  while ((undefined8 *)param_1[0x15] != (undefined8 *)0x0) {
    param_1[0x15] = *(undefined8 *)param_1[0x15];
    FUN_1400020a8();
  }
  FUN_147365ce2(param_1);
  return;
}



// FUNCTION 1473e3bc0 FUN_1473e3bc0 body=159 status=ok
// SIG undefined FUN_1473e3bc0(void)

void FUN_1473e3bc0(void)

{
  DAT_14c760d10 = 0;
  (*DAT_14ca7fb40)(0x8b4a,&DAT_14c760d10);
  DAT_14c760d14 = 0;
  (*DAT_14ca7fb40)(0x8b49,&DAT_14c760d14);
  DAT_14c760d18 = 0;
  (*DAT_14ca7fb40)(0x8ddf,&DAT_14c760d18);
  DAT_14c760cb4 = 0;
  (*DAT_14ca7fb40)(0x8c29,&DAT_14c760cb4);
  DAT_14c760cb8 = 0;
  (*DAT_14ca7fb40)(0x8dfc,&DAT_14c760cb8);
                    /* WARNING: Could not recover jumptable at 0x0001473e3c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fb48)(0x8e28,0x8864,&DAT_14ca79450);
  return;
}



// FUNCTION 1473e3c60 FUN_1473e3c60 body=655 status=ok
// SIG undefined FUN_1473e3c60(void)

void FUN_1473e3c60(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  wchar_t *local_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  wchar_t *local_148;
  undefined8 uStack_140;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar4 = (*DAT_14ca7fb50)(0x1f02);
  FUN_144a81018(&local_148,uVar4);
  FUN_140056680(local_158,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_148 = (wchar_t *)0x0;
  uStack_140 = 0;
  local_168 = (wchar_t *)0x0;
  uStack_160 = 0;
  FUN_140056680(&local_178,&DAT_149e0635c);
  cVar1 = FUN_1407cdba6(local_158,&local_178,&local_148,&local_168);
  if (CONCAT44(uStack_174,local_178) != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    pwVar5 = L"";
    if ((int)uStack_140 != 0) {
      pwVar5 = local_148;
    }
    _wtoi(pwVar5);
    pwVar5 = L"";
    if ((int)uStack_160 != 0) {
      pwVar5 = local_168;
    }
    _wtoi(pwVar5);
  }
  FUN_1473e3bc0();
  FUN_1431c27bc(param_1);
  (*DAT_14ca7fb58)(1,&local_178);
  (*DAT_14ca7fb60)(0x8ca9,local_178);
  (*DAT_14ca7fb68)(1,&local_17c);
  (*DAT_14ca7fb70)(0x806f,local_17c);
  local_1a8 = 0;
  local_1b0 = 0x100;
  local_1b8 = 0x100;
  local_190 = 0;
  local_198 = 0x1401;
  local_1a0 = 0x1908;
  (*DAT_14ca7fb78)(0x806f,0,0x8058,0x100);
  (*DAT_14ca7fb80)(0x8ca9,0x8ce0,local_17c,0);
  iVar3 = (*DAT_14ca7fb88)(0x8ca9);
  DAT_14ca79454 = iVar3 == 0x8cd5;
  (*DAT_14ca7fb90)(1,&local_17c);
  (*DAT_14ca7fb98)(1,&local_178);
  local_1b8 = 0;
  local_1b0 = 0xffffffff;
  iVar3 = FUN_1447ee042(param_1,L"GL_ARB_ES3_1_compatibility",0x1a,1);
  uVar2 = 0;
  if (iVar3 != -1) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    uVar2 = FUN_14054d46e(&DAT_14c846b20,L"GLESCompat");
  }
  DAT_14ca7c3e0 = uVar2;
  if (local_168 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e3ef0 FUN_1473e3ef0 body=263 status=ok
// SIG undefined FUN_1473e3ef0(void)

void FUN_1473e3ef0(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14ca79458 = 0;
  (*DAT_14ca7fb40)(0x90cf,&DAT_14ca79458);
  DAT_14c760cc0 = 0;
  (*DAT_14ca7fb40)(0x90ce,&DAT_14c760cc0);
  DAT_14c760cc4 = 0;
  (*DAT_14ca7fb40)(0x919f,&DAT_14c760cc4);
  DAT_14c760d1c = 0;
  (*DAT_14ca7fb40)(0x8263,&DAT_14c760d1c);
  DAT_14c760cbc = 0;
  (*DAT_14ca7fb40)(0x91bd,&DAT_14c760cbc);
  local_1c = 0;
  (*DAT_14ca7fb40)(0x90dc,&local_1c);
  if (DAT_14ca79458 < local_1c) {
    DAT_14ca79458 = local_1c;
  }
  if (0xf < DAT_14ca79458) {
    DAT_14ca79458 = 0x10;
  }
  iVar1 = 0x10;
  if (DAT_14c760cbc < 0x10) {
    iVar1 = DAT_14c760cbc;
  }
  DAT_14c760cbc = iVar1;
  iVar2 = 4;
  if (DAT_14c760cc0 < 4) {
    iVar2 = DAT_14c760cc0;
  }
  DAT_14c760cc0 = iVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e3ff8 FUN_1473e3ff8 body=368 status=ok
// SIG undefined FUN_1473e3ff8(void)

void FUN_1473e3ff8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  longlong local_178 [2];
  wchar_t *local_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  wchar_t *local_148;
  undefined8 uStack_140;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar3 = (*DAT_14ca7fb50)(0x1f02);
  FUN_144a81018(&local_148,uVar3);
  FUN_140056680(local_158,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_148 = (wchar_t *)0x0;
  uStack_140 = 0;
  local_168 = (wchar_t *)0x0;
  uStack_160 = 0;
  FUN_140056680(local_178,&DAT_149e0635c);
  cVar1 = FUN_1407cdba6(local_158,local_178,&local_148,&local_168);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    pwVar4 = L"";
    if ((int)uStack_140 != 0) {
      pwVar4 = local_148;
    }
    _wtoi(pwVar4);
    pwVar4 = L"";
    if ((int)uStack_160 != 0) {
      pwVar4 = local_168;
    }
    _wtoi(pwVar4);
  }
  local_180 = 0xffffffff;
  local_188 = 0;
  iVar2 = FUN_1447ee042(param_1,L"GL_NVX_gpu_memory_info",0x16,1);
  DAT_14ca7945c = iVar2 != -1;
  FUN_1473e3ef0();
  FUN_1473e3c60(param_1);
  if (local_168 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e4169 FUN_1473e4169 body=222 status=ok
// SIG undefined FUN_1473e4169(void)

undefined8 FUN_1473e4169(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong _Size;
  
  if (4 < *(uint *)(param_1 + 1)) {
    puVar3 = (uint *)*param_1;
    uVar1 = *puVar3;
    if (uVar1 == 0xffffffff) {
      _Size = (ulonglong)(*(uint *)(param_1 + 1) - 4);
      FUN_140393c76(param_2,_Size,1);
      memcpy((void *)*param_2,(void *)(*param_1 + 4),_Size);
      return 1;
    }
    iVar2 = *(int *)(param_2 + 1);
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1447403be(param_2);
    }
    if (*puVar3 != 0) {
      lVar6 = param_1[1];
      lVar4 = *param_1;
      iVar2 = *(int *)(param_2 + 1);
      uVar5 = *param_2;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      cVar7 = FUN_140aa9920(DAT_14c892f44,uVar5,(longlong)iVar2,lVar4 + 4,(longlong)(int)lVar6 + -4,
                            0,0);
      if (cVar7 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1473e4247 FUN_1473e4247 body=135 status=ok
// SIG undefined FUN_1473e4247(void)

bool FUN_1473e4247(ulonglong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = -1;
  (*DAT_14ca7fba0)(param_1,0x8741,&local_24);
  iVar1 = local_24;
  if (0 < local_24) {
    FUN_140393c76(param_2,local_24 + 4,1);
    local_38 = *param_2 + 4;
    (*DAT_14ca7fd08)(param_1 & 0xffffffff,local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e42cf FUN_1473e42cf body=114 status=ok
// SIG undefined FUN_1473e42cf(void)

void FUN_1473e42cf(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  cVar1 = FUN_1473e4247();
  if (cVar1 != '\0') {
    local_38 = local_28;
    local_30 = (undefined4)uStack_20;
    FUN_1431c2d73(&local_38,param_2);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e4342 FUN_1473e4342 body=181 status=ok
// SIG undefined FUN_1473e4342(void)

undefined8 * FUN_1473e4342(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  lVar1 = DAT_14ca79470;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar3 * 4) == 0) {
    FUN_1473e4247(param_2,&local_38);
  }
  else {
    FUN_1473e42cf(param_2,&local_38);
  }
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
  param_1[2] = local_38;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e43f8 FUN_1473e43f8 body=773 status=ok
// SIG undefined FUN_1473e43f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1473e43f8(undefined8 param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [36];
  uint local_74;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  uVar8 = DAT_14c760d28;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = 0;
  local_68 = param_1;
  if ((DAT_14ca7fd10 != (code *)0x0) && (DAT_14c760cc8 != 0)) {
    if (DAT_14ca794e8 == 0) {
      lVar3 = (longlong)(int)DAT_14c760d28;
      if (lVar3 < 0x3ff) {
        DAT_14ca794e8 = (&DAT_14ca7b3e0)[lVar3];
        uVar8 = DAT_14c760d28 + 1;
      }
      else {
        iVar5 = 0x400 - DAT_14c760d28;
        memcpy(&DAT_14ca794e8,&DAT_14ca7b3e0 + lVar3,(longlong)iVar5 * 4);
        (*DAT_14ca7fc70)(0x400,&DAT_14ca7b3e0);
        uVar8 = uVar8 - 0x3ff;
        memcpy(&DAT_14ca794e8 + iVar5,&DAT_14ca7b3e0,(ulonglong)uVar8 * 4);
      }
      DAT_14c760d28 = uVar8;
      (*DAT_14ca7fba8)(0x8f36,DAT_14ca794e8);
      (*DAT_14ca7fd10)(0x8f36,0x1000000,0,0xc2);
      DAT_14ca794f0 = (*DAT_14ca7fd18)(0x8f36,0,0x1000000,0xc2);
      DAT_14ca794f8 = 0x1000000;
    }
    uVar8 = DAT_14ca794f8;
    lVar3 = DAT_14ca794f0;
    uVar6 = (ulonglong)DAT_14ca794fc;
    iVar5 = (int)DAT_14ca794f0 + DAT_14ca794fc;
    iVar5 = (iVar5 + 0xfU & 0xfffffff0) - iVar5;
    uVar7 = iVar5 + param_2;
    if (uVar7 <= DAT_14ca794f8 && uVar7 <= 0x400000U - _DAT_14ca79500) {
      uVar4 = 0x1000000 - DAT_14ca794fc;
      if (uVar4 < uVar7) {
        local_74 = param_3;
        puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar1 = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        *(uint *)(puVar1 + 1) = uVar4;
        *(undefined4 *)(puVar1 + 2) = DAT_14c7590b0;
        uVar7 = DAT_14ca79490;
        lVar9 = (longlong)(int)DAT_14ca79490;
        DAT_14ca79490 = DAT_14ca79490 + 1;
        if (DAT_14ca79494 < DAT_14ca79490) {
          FUN_1473f4636(uVar7);
          lVar3 = DAT_14ca794f0;
          uVar8 = DAT_14ca794f8;
        }
        *(undefined8 **)(DAT_14ca79488 + lVar9 * 8) = puVar1;
        DAT_14ca794fc = 0;
        DAT_14ca794f8 = uVar8 - uVar4;
        iVar5 = ((int)lVar3 + 0xfU & 0xfffffff0) - (int)lVar3;
        uVar7 = iVar5 + param_2;
        uVar6 = 0;
        param_3 = local_74;
      }
      if (uVar7 <= DAT_14ca794f8) {
        plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar2 = lVar3 + uVar6;
        *(uint *)((longlong)plVar2 + 0xc) = iVar5 << 0x18 | param_3 & 0xffffff;
        *(int *)(plVar2 + 1) = param_2;
        *(undefined4 *)(plVar2 + 2) = 0xffffffff;
        uVar8 = DAT_14ca79490;
        lVar3 = (longlong)(int)DAT_14ca79490;
        DAT_14ca79490 = DAT_14ca79490 + 1;
        local_70 = plVar2;
        if (DAT_14ca79494 < DAT_14ca79490) {
          FUN_1473f4636(uVar8);
        }
        *(longlong **)(DAT_14ca79488 + lVar3 * 8) = plVar2;
        local_60 = &local_68;
        local_58 = &local_70;
        FUN_1473f46c4(local_4c);
        DAT_14ca794fc = DAT_14ca794fc + uVar7;
        DAT_14ca794f8 = DAT_14ca794f8 - uVar7;
        _DAT_14ca79500 = _DAT_14ca79500 + uVar7;
        lVar3 = (ulonglong)*(byte *)((longlong)local_70 + 0xf) + *local_70;
        goto LAB_1473e4487;
      }
    }
    lVar3 = 0;
  }
LAB_1473e4487:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1473e46fe FUN_1473e46fe body=328 status=ok
// SIG undefined FUN_1473e46fe(void)

void FUN_1473e46fe(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  HGLRC pHVar3;
  longlong lVar4;
  
  lVar2 = DAT_14ca79650;
  if (param_1 == 0x90d2) {
    lVar4 = *(longlong *)(DAT_14ca79650 + 0x14fa0);
    if (lVar4 == 0) {
      lVar1 = *(longlong *)(DAT_14ca79650 + 0x15008);
      pHVar3 = wglGetCurrentContext();
      lVar4 = lVar2 + 0x14200;
      if (pHVar3 == *(HGLRC *)(lVar1 + 0x40)) {
        lVar4 = lVar2 + 0x148d0;
      }
      *(longlong *)(lVar2 + 0x14fa0) = lVar4;
    }
    if (*(int *)(lVar4 + 0x448) != param_2) {
      (*DAT_14ca7fba8)(0x90d2,param_2);
      *(int *)(lVar4 + 0x448) = param_2;
    }
  }
  else if (param_1 == 0x8893) {
    lVar4 = *(longlong *)(DAT_14ca79650 + 0x14fa0);
    if (lVar4 == 0) {
      lVar1 = *(longlong *)(DAT_14ca79650 + 0x15008);
      pHVar3 = wglGetCurrentContext();
      lVar4 = lVar2 + 0x14200;
      if (pHVar3 == *(HGLRC *)(lVar1 + 0x40)) {
        lVar4 = lVar2 + 0x148d0;
      }
      *(longlong *)(lVar2 + 0x14fa0) = lVar4;
    }
    if (*(int *)(lVar4 + 0x444) != param_2) {
      (*DAT_14ca7fba8)(0x8893,param_2);
      *(int *)(lVar4 + 0x444) = param_2;
    }
  }
  else if (param_1 == 0x8892) {
    lVar4 = *(longlong *)(DAT_14ca79650 + 0x14fa0);
    if (lVar4 == 0) {
      lVar1 = *(longlong *)(DAT_14ca79650 + 0x15008);
      pHVar3 = wglGetCurrentContext();
      lVar4 = lVar2 + 0x14200;
      if (pHVar3 == *(HGLRC *)(lVar1 + 0x40)) {
        lVar4 = lVar2 + 0x148d0;
      }
      *(longlong *)(lVar2 + 0x14fa0) = lVar4;
    }
    if (*(int *)(lVar4 + 0x440) != param_2) {
      (*DAT_14ca7fba8)(0x8892,param_2);
      *(int *)(lVar4 + 0x440) = param_2;
    }
  }
  return;
}



// FUNCTION 1473e4846 FUN_1473e4846 body=203 status=ok
// SIG undefined FUN_1473e4846(void)

undefined8 FUN_1473e4846(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0;
  if ((DAT_14ca7fd10 != 0) && (DAT_14c760cc8 != 0)) {
    FUN_1473f4c3a(&local_1c,param_1);
    if ((longlong)local_1c == -1) {
      uVar3 = 0;
    }
    else {
      plVar1 = *(longlong **)(DAT_14ca79498 + 8 + (longlong)local_1c * 0x18);
      FUN_1473f4cd4();
      FUN_1473e46fe(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
      local_28 = (ulonglong)*(uint *)(plVar1 + 1);
      (*DAT_14ca7fd20)(0x8f36,0x8892,
                       ((ulonglong)(*(uint *)((longlong)plVar1 + 0xc) >> 0x18) + *plVar1) -
                       DAT_14ca794f0,*(uint *)((longlong)plVar1 + 0xc) & 0xffffff);
      uVar2 = DAT_14c7590b0;
      *(undefined4 *)(plVar1 + 2) = DAT_14c7590b0;
      uVar3 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e4912 FUN_1473e4912 body=176 status=ok
// SIG undefined FUN_1473e4912(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473e4912(void)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (2 < DAT_14c7590b0) {
    if (0 < DAT_14ca79490) {
      iVar4 = DAT_14c7590b0 - 3;
      uVar3 = 0;
      _Dst = DAT_14ca79488;
      iVar2 = DAT_14ca79490;
      do {
        lVar1 = *(longlong *)((longlong)_Dst + uVar3 * 8);
        if ((*(int *)(lVar1 + 0x10) < 0) || (iVar4 < *(int *)(lVar1 + 0x10))) break;
        DAT_14ca794f8 = DAT_14ca794f8 + (uint)*(byte *)(lVar1 + 0xf) + *(int *)(lVar1 + 8);
        if (lVar1 != 0) {
          FUN_1400020a8(lVar1);
          _Dst = DAT_14ca79488;
          iVar2 = DAT_14ca79490;
        }
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)iVar2);
      iVar4 = (int)uVar3;
      if (iVar4 != 0) {
        if (iVar2 - iVar4 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (uVar3 & 0xffffffff) * 8),
                  (longlong)(iVar2 - iVar4) << 3);
          iVar2 = DAT_14ca79490;
        }
        DAT_14ca79490 = iVar2 - iVar4;
        FUN_1473f4d32();
      }
    }
    _DAT_14ca79500 = 0;
  }
  return;
}



// FUNCTION 1473e49c2 FUN_1473e49c2 body=196 status=ok
// SIG undefined FUN_1473e49c2(void)

longlong *
FUN_1473e49c2(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,longlong param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_4 + 8);
  if ((uVar1 >> 0x14 & 1) == 0) {
    if (*(longlong **)(param_6 + 8) == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_6 + 8) + 8))();
      uVar1 = *(uint *)(param_4 + 8);
    }
    uVar4 = 0x90d2;
    if ((uVar1 >> 0x10 & 1) == 0) {
      uVar4 = -1 < (short)uVar1 ^ 0x8893;
    }
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
  }
  lVar2 = FUN_14001cc68(0x68,0x10);
  FUN_1473e4a86(lVar2,param_3,uVar4,param_4,uVar3);
  if (*(longlong **)(param_6 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_6 + 8) + 0x18))();
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473e4a86 FUN_1473e4a86 body=454 status=ok
// SIG undefined FUN_1473e4a86(void)

undefined8 *
FUN_1473e4a86(undefined8 *param_1,ulonglong *param_2,undefined4 param_3,undefined8 *param_4,
             void *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  void *local_60;
  undefined8 *local_50;
  void *pvStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x13;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14a1e4968;
  param_1[4] = *param_4;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 1);
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14a371220;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_50 = param_1;
  if (param_2 == (ulonglong *)0x0) {
    pvStack_48 = param_5;
    if ((*(byte *)((longlong)param_4 + 10) & 0x10) != 0) goto LAB_1473e4c10;
    ppuVar4 = &local_50;
  }
  else {
    pvStack_48 = param_5;
    if ((param_5 != (void *)0x0) && (*(char *)((longlong)param_2 + 100) == '\0')) {
      uVar1 = *(uint *)(param_1 + 4);
      pvStack_48 = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
      uVar5 = (longlong)pvStack_48 + (ulonglong)uVar1;
      if (param_2[1] < uVar5) {
        FUN_140023dd8(param_2,uVar1 + 0x10);
        pvStack_48 = (void *)(*param_2 + 0xf & 0xfffffffffffffff0);
        uVar5 = (ulonglong)uVar1 + (longlong)pvStack_48;
      }
      *param_2 = uVar5;
      memcpy(pvStack_48,param_5,(ulonglong)*(uint *)(param_1 + 4));
    }
    if ((*(byte *)((longlong)param_4 + 10) & 0x10) != 0) goto LAB_1473e4c10;
    local_68 = param_1;
    local_60 = pvStack_48;
    if (*(char *)((longlong)param_2 + 100) != '\x01') {
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 4;
      if ((undefined8 *)param_2[1] < puVar3) {
        FUN_140023dd8(param_2,0x28);
        puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar2 + 4;
      }
      *param_2 = (ulonglong)puVar3;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar2;
      param_2[6] = (ulonglong)(puVar2 + 1);
      puVar2[1] = 0;
      *puVar2 = &PTR_LAB_14a371230;
      puVar2[2] = local_50;
      puVar2[3] = pvStack_48;
      goto LAB_1473e4c10;
    }
    ppuVar4 = &local_68;
  }
  FUN_1473f4ddc(ppuVar4);
LAB_1473e4c10:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e4c4e FUN_1473e4c4e body=87 status=ok
// SIG undefined FUN_1473e4c4e(void)

void FUN_1473e4c4e(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,int param_6)

{
  longlong lVar1;
  
  if (((param_6 == 1) && ((*(uint *)(param_3 + 0x28) & 6) != 0)) &&
     (lVar1 = FUN_1473e43f8(param_3,param_5,param_4), lVar1 != 0)) {
    return;
  }
  FUN_1473e4ca6(param_3,param_4,param_5,param_6 == 0,param_6 != 0);
  return;
}



// FUNCTION 1473e4ca6 FUN_1473e4ca6 body=384 status=ok
// SIG undefined FUN_1473e4ca6(void)

longlong FUN_1473e4ca6(longlong param_1,undefined4 param_2,uint param_3,byte param_4,char param_5)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  FUN_1473e46fe(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
  *(uint *)(param_1 + 0x40) = (*(uint *)(param_1 + 0x40) & 0xfffffffc) + (uint)param_4 * 2 + 1;
  if (param_5 == '\0') {
    if (param_4 == 0) {
      if (*(uint *)(param_1 + 0x20) == param_3) goto LAB_1473e4cec;
      if (DAT_14ca7c3e4 != 0) goto LAB_1473e4d2c;
      goto LAB_1473e4dcd;
    }
  }
  else {
LAB_1473e4cec:
    bVar6 = DAT_14ca7c3e4 == 0;
    if (DAT_14c760d30 != 0) {
      (*DAT_14ca7fc78)(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x20),0,
                       (uint)((*(byte *)(param_1 + 0x28) & 6) != 0) * 4 + 0x88e4);
    }
    if (bVar6 && param_4 == 0) {
LAB_1473e4dcd:
      *(undefined4 *)(param_1 + 0x48) = param_2;
      *(uint *)(param_1 + 0x44) = param_3;
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (lVar3 == 0) {
LAB_1473e4df8:
        lVar3 = FUN_14001cc68(param_3,0);
        *(longlong *)(param_1 + 0x50) = lVar3;
        *(uint *)(param_1 + 0x60) = param_3;
      }
      else {
        if (*(uint *)(param_1 + 0x60) < param_3) {
          FUN_1400020a8(lVar3);
          *(undefined8 *)(param_1 + 0x58) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0;
          goto LAB_1473e4df8;
        }
        *(longlong *)(param_1 + 0x50) = lVar3;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      uVar1 = *(uint *)(param_1 + 0x40) | 4;
      uVar4 = 0;
      goto LAB_1473e4d5f;
    }
  }
LAB_1473e4d2c:
  uVar4 = 1;
  uVar5 = 0x2a;
  if (param_4 != 0) {
    uVar5 = 1;
  }
  lVar3 = (*DAT_14ca7fd18)(*(undefined4 *)(param_1 + 0x3c),param_2,param_3,uVar5);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(uint *)(param_1 + 0x44) = param_3;
  *(longlong *)(param_1 + 0x50) = lVar3;
  uVar1 = *(uint *)(param_1 + 0x40) & 0xfffffffb;
LAB_1473e4d5f:
  *(uint *)(param_1 + 0x40) = uVar1;
  if (lVar3 == 0) {
    uVar2 = (*DAT_14ca7fcd0)();
    FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLResources.h",0x12d,
                  L"Failed to lock buffer: Resource %u, Size %u, Offset %u, bReadOnly %d, bUseMapBuffer %d, glError (0x%x)"
                  ,*(undefined4 *)(param_1 + 0x38),param_3,param_2,(uint)param_4,uVar4,uVar2);
  }
  return lVar3;
}



// FUNCTION 1473e4e26 FUN_1473e4e26 body=39 status=ok
// SIG undefined FUN_1473e4e26(void)

void FUN_1473e4e26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1473e4846(param_3);
  if (cVar1 != '\0') {
    return;
  }
  FUN_1473e4e4e(param_3);
  return;
}



// FUNCTION 1473e4e4e FUN_1473e4e4e body=254 status=ok
// SIG undefined FUN_1473e4e4e(void)

void FUN_1473e4e4e(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    FUN_1473e46fe(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
    uVar1 = DAT_14c760d2c;
    if ((DAT_14ca7c3e4 == 0) && ((*(byte *)(param_1 + 0x40) & 2) == 0)) {
      lVar4 = *(longlong *)(param_1 + 0x50);
      uVar2 = *(uint *)(param_1 + 0x44);
      uVar3 = (ulonglong)uVar2;
      iVar5 = *(int *)(param_1 + 0x48);
      if (DAT_14c760d2c == 0) {
        (*DAT_14ca7ff50)(*(undefined4 *)(param_1 + 0x3c),iVar5,uVar3,lVar4);
      }
      else {
        while (uVar2 != 0) {
          uVar2 = (uint)uVar3;
          if (uVar1 < uVar2) {
            uVar3 = (ulonglong)uVar1;
          }
          (*DAT_14ca7ff50)(*(undefined4 *)(param_1 + 0x3c),iVar5,uVar3,lVar4);
          iVar5 = iVar5 + (int)uVar3;
          lVar4 = lVar4 + uVar3;
          uVar2 = uVar2 - (int)uVar3;
          uVar3 = (ulonglong)uVar2;
        }
      }
      if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
        FUN_1400020a8(*(undefined8 *)(param_1 + 0x50));
      }
      else {
        if (*(longlong *)(param_1 + 0x58) == 0) {
          uVar1 = *(uint *)(param_1 + 0x60);
        }
        else {
          FUN_1400020a8();
          uVar1 = 0;
        }
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
        if (uVar1 < *(uint *)(param_1 + 0x44)) {
          uVar1 = *(uint *)(param_1 + 0x44);
        }
        *(uint *)(param_1 + 0x60) = uVar1;
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
      uVar1 = *(uint *)(param_1 + 0x40) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    else {
      (*DAT_14ca7fe10)(*(undefined4 *)(param_1 + 0x3c));
      *(undefined8 *)(param_1 + 0x50) = 0;
      uVar1 = *(uint *)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0x40) = uVar1 & 0xfffffffe;
  }
  return;
}



// FUNCTION 1473e4f4c FUN_1473e4f4c body=120 status=ok
// SIG undefined FUN_1473e4f4c(void)

void FUN_1473e4f4c(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (*DAT_14ca7fba8)(0x8f36,*(undefined4 *)(param_4 + 0x38));
  (*DAT_14ca7fba8)(0x8f37,*(undefined4 *)(param_2 + 0x38));
  (*DAT_14ca7fd20)(0x8f36,0x8f37,param_5,param_3,param_6);
  (*DAT_14ca7fba8)(0x8f36,0);
                    /* WARNING: Could not recover jumptable at 0x0001473e4fc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fba8)(0x8f37,0);
  return;
}



// FUNCTION 1473e4fc4 FUN_1473e4fc4 body=86 status=ok
// SIG undefined FUN_1473e4fc4(void)

undefined8 * FUN_1473e4fc4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0x23;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14a370e20;
  FUN_1431c2fa0(puVar1);
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473e501a FUN_1473e501a body=208 status=ok
// SIG undefined FUN_1473e501a(void)

void FUN_1473e501a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((DAT_14ca7fd10 == 0) || (DAT_14c760ccc == 0)) {
    if (DAT_14ca85164 == '\x01') {
      (*DAT_14ca7fe10)(0x8f37);
      *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001473e506a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_14ca7fba8)(0x8f37,0);
      return;
    }
    puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar1 + 3;
    if (DAT_14ca85108 < puVar2) {
      FUN_140023dd8(&DAT_14ca85100,0x20);
      puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar2 = puVar1 + 3;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar2;
    *DAT_14ca85130 = puVar1;
    DAT_14ca85130 = puVar1 + 1;
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_14a371248;
    puVar1[2] = param_1;
  }
  return;
}



// FUNCTION 1473e515a FUN_1473e515a body=392 status=ok
// SIG undefined FUN_1473e515a(void)

void FUN_1473e515a(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  
  if (*(int *)(param_2 + 0x38) != *(int *)(param_1 + 0x160)) {
    (*DAT_14ca7fd28)(0x408);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x160);
  }
  iVar2 = *(int *)(param_1 + 0x164);
  if (*(int *)(param_2 + 0x3c) != iVar2) {
    if (iVar2 == 0) {
      iVar2 = 0xb44;
      puVar3 = &DAT_14ca7fbc8;
    }
    else {
      puVar3 = &DAT_14ca7fbc0;
      if (*(int *)(param_2 + 0x3c) == 0) {
        (*DAT_14ca7fbb8)(0xb44);
        iVar2 = *(int *)(param_1 + 0x164);
      }
    }
    (*(code *)*puVar3)(iVar2);
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x164);
  }
  if (*(char *)(param_2 + 0x48) != *(char *)(param_1 + 0x170)) {
    puVar3 = &DAT_14ca7fbc8;
    if (*(char *)(param_1 + 0x170) == '\x01') {
      puVar3 = &DAT_14ca7fbb8;
    }
    (*(code *)*puVar3)(0x864f);
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_1 + 0x170);
  }
  fVar4 = *(float *)(param_1 + 0x168);
  fVar1 = *(float *)(param_2 + 0x40);
  if ((fVar1 == fVar4) && (!NAN(fVar1) && !NAN(fVar4))) {
    if ((*(float *)(param_2 + 0x44) == *(float *)(param_1 + 0x16c)) &&
       (!NAN(*(float *)(param_2 + 0x44)) && !NAN(*(float *)(param_1 + 0x16c)))) {
      return;
    }
  }
  fVar4 = fVar4 * 16777215.0;
  if ((((fVar4 != 0.0) || (NAN(fVar4))) || (*(float *)(param_1 + 0x16c) != 0.0)) ||
     (NAN(*(float *)(param_1 + 0x16c)))) {
    if (((fVar1 == 0.0) && (!NAN(fVar1))) &&
       ((*(float *)(param_2 + 0x44) == 0.0 && (!NAN(*(float *)(param_2 + 0x44)))))) {
      (*DAT_14ca7fbb8)(0x8037);
      (*DAT_14ca7fbb8)(0x2a02);
      (*DAT_14ca7fbb8)(0x2a01);
    }
    (*DAT_14ca7fbd0)(*(undefined4 *)(param_1 + 0x16c),fVar4);
  }
  else {
    (*DAT_14ca7fbc8)(0x8037);
    (*DAT_14ca7fbc8)(0x2a02);
    (*DAT_14ca7fbc8)(0x2a01);
  }
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x16c);
  return;
}



// FUNCTION 1473e52e2 FUN_1473e52e2 body=256 status=ok
// SIG undefined FUN_1473e52e2(void)

void FUN_1473e52e2(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar2 = *(int *)(param_1 + 0x2e8);
  if (*(int *)(param_2 + 0x428) == iVar2) {
    iVar3 = *(int *)(param_2 + 0x42c);
    iVar4 = *(int *)(param_1 + 0x2ec);
    if (((iVar3 == *(int *)(param_1 + 0x2ec)) &&
        (iVar4 = iVar3, *(int *)(param_2 + 0x430) == *(int *)(param_1 + 0x2f0))) &&
       (*(int *)(param_2 + 0x434) == *(int *)(param_1 + 0x2f4))) goto LAB_1473e536e;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2ec);
  }
  (*DAT_14ca7fbd8)(iVar2,iVar4,*(int *)(param_1 + 0x2f0) - iVar2,*(int *)(param_1 + 0x2f4) - iVar4);
  *(undefined8 *)(param_2 + 0x428) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_2 + 0x430) = *(undefined8 *)(param_1 + 0x2f0);
LAB_1473e536e:
  fVar1 = *(float *)(param_1 + 0x2f8);
  if ((*(float *)(param_2 + 0x438) != fVar1) || (NAN(*(float *)(param_2 + 0x438)) || NAN(fVar1))) {
    fVar5 = *(float *)(param_1 + 0x2fc);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x2fc);
    if ((*(float *)(param_2 + 0x43c) == fVar5) && (!NAN(*(float *)(param_2 + 0x43c)) && !NAN(fVar5))
       ) {
      return;
    }
  }
  (*DAT_14ca7fd30)((double)fVar1,(double)fVar5);
  *(undefined4 *)(param_2 + 0x438) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(param_2 + 0x43c) = *(undefined4 *)(param_1 + 0x2fc);
  return;
}



// FUNCTION 1473e5466 FUN_1473e5466 body=239 status=ok
// SIG undefined FUN_1473e5466(void)

void FUN_1473e5466(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x4d0);
  if (lVar3 != param_2) {
    *(longlong *)(param_1 + 0x4d0) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (DAT_14ca84f1f == '\x01') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x141c0));
  }
  lVar3 = *(longlong *)(param_1 + 0x938 + (ulonglong)*(uint *)(param_1 + 0x141b8) * 8);
  if (lVar3 != param_2) {
    *(longlong *)(param_1 + 0x938 + (ulonglong)*(uint *)(param_1 + 0x141b8) * 8) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(uint *)(param_1 + 0x141b8) =
       *(int *)(param_1 + 0x141b8) + ((*(int *)(param_1 + 0x141b8) + 1U) / 10000) * -10000 + 1;
  if (DAT_14ca84f1f == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001473e5546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x141c0));
    return;
  }
  return;
}



// FUNCTION 1473e5556 FUN_1473e5556 body=608 status=ok
// SIG undefined FUN_1473e5556(void)

void FUN_1473e5556(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  uint param_6,int param_7)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  uint local_80;
  uint local_7c;
  longlong *local_78;
  ulonglong local_70;
  uint local_68;
  uint local_64;
  undefined4 *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  uVar2 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = (longlong)param_3 * 0x28 + *(longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x410) != param_3) {
    (*DAT_14ca7fbe0)(param_3 + 0x84c0);
    *(int *)(param_2 + 0x410) = param_3;
  }
  iVar10 = *(int *)(lVar9 + 0x10);
  if (iVar10 == param_4) {
LAB_1473e55c0:
    (*DAT_14ca7fb70)(param_4,uVar2);
    if ((param_4 != 0) && (param_4 != 0x8c2a)) {
      iVar10 = 0;
      uVar3 = 0;
      if (param_4 != 0x8d65) {
        local_78 = (longlong *)(param_1 + 0x14fb8);
        uVar8 = 0;
        uVar7 = 0;
        if (*(int *)(param_1 + 0x14fc0) != *(int *)(param_1 + 0x14fec)) {
          lVar11 = param_1 + 86000;
          if (*(longlong *)(param_1 + 0x14ff8) != 0) {
            lVar11 = *(longlong *)(param_1 + 0x14ff8);
          }
          uVar3 = *(uint *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x15000) - 1U & uVar2) * 4);
          if (uVar3 != 0xffffffff) {
            do {
              puVar4 = (uint *)(*local_78 + (longlong)(int)uVar3 * 0x14);
              if (*puVar4 == uVar2) goto LAB_1473e5626;
              uVar3 = puVar4[3];
            } while (uVar3 != 0xffffffff);
          }
        }
        puVar4 = (uint *)0x0;
LAB_1473e5626:
        puVar6 = puVar4 + 1;
        if (puVar4 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        uVar5 = param_7 - 1;
        if (param_6 != 0xffffffff) {
          uVar5 = param_6;
          uVar7 = param_6;
        }
        uVar3 = param_6;
        if (((puVar6 == (uint *)0x0) || (uVar8 = (ulonglong)(*puVar6 == uVar7), *puVar6 != uVar7))
           || (iVar10 = param_7, puVar6[1] != uVar5)) {
          lVar11 = 0;
          local_80 = uVar5;
          local_7c = uVar7;
          local_70 = uVar8;
          do {
            lVar1 = *(longlong *)(param_1 + 0x318 + lVar11 * 8);
            if (lVar1 == 0) break;
            if ((*(longlong *)(lVar1 + 0x78) != 0) &&
               ((*(byte *)(*(longlong *)(lVar1 + 0x78) + 0x10) & 1) == 0)) {
              FUN_1431cefae(lVar1,1);
            }
            if (*(uint *)(lVar1 + 0x68) == uVar2) goto LAB_1473e56ef;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 8);
          uVar2 = local_7c;
          if ((char)local_70 == '\0') {
            (*DAT_14ca7fd38)(param_4,0x813c,local_7c);
          }
          iVar10 = param_7;
          if (puVar6 == (uint *)0x0) {
            local_58 = &local_68;
            local_68 = uVar2;
            local_64 = local_80;
            local_60 = &param_5;
            FUN_1473f4f46(local_78,local_4c,&local_60,0);
          }
          else {
            *puVar6 = uVar2;
            puVar6[1] = local_80;
          }
        }
      }
      goto LAB_1473e56f2;
    }
  }
  else {
    if (iVar10 != 0) {
      (*DAT_14ca7fb70)(iVar10,0);
    }
    if (param_4 != 0) goto LAB_1473e55c0;
  }
LAB_1473e56ef:
  uVar3 = 0;
  iVar10 = 0;
LAB_1473e56f2:
  *(uint *)(lVar9 + 0x18) = uVar3;
  *(int *)(lVar9 + 0x20) = iVar10;
  *(int *)(lVar9 + 0x10) = param_4;
  *(uint *)(lVar9 + 0x14) = param_5;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e57b8 FUN_1473e57b8 body=496 status=ok
// SIG undefined FUN_1473e57b8(void)

void FUN_1473e57b8(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(*param_3 + 0x78);
  uVar6 = *(uint *)(lVar4 + 0xb8);
  if ((int)uVar6 < 0) {
    uVar7 = (ulonglong)(uVar6 + 1);
  }
  else {
    uVar7 = (ulonglong)uVar6 + 1;
    lVar3 = 0;
    uVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + 0x88);
      if (*(longlong *)(lVar4 + 0x88) == 0) {
        lVar2 = lVar4 + 0x78;
      }
      if ((*(uint *)(lVar2 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
        if (*(int *)(*(longlong *)(param_2 + 8) + 0x14 + lVar3) != 0 ||
            *(int *)(*(longlong *)(param_2 + 8) + 0x10 + lVar3) != 0) {
          FUN_1473e5556(param_1,param_2,uVar8 & 0xffffffff,0,0,0xffffffff,1);
        }
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x130);
        iVar5 = *(int *)(lVar2 + 0x10 + lVar3);
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
        if ((*(int *)(*(longlong *)(param_2 + 8) + 0x10 + lVar3) != iVar5) ||
           (*(int *)(*(longlong *)(param_2 + 8) + 0x14 + lVar3) != iVar1)) {
          FUN_1473e5556(param_1,param_2,uVar8 & 0xffffffff,iVar5,iVar1,
                        *(undefined4 *)(lVar2 + 0x18 + lVar3),*(undefined4 *)(lVar2 + 0x20 + lVar3))
          ;
          iVar5 = *(int *)(lVar2 + 0x10 + lVar3);
        }
        if (iVar5 == 0x8d65) {
          (*DAT_14ca7ff58)(uVar8 & 0xffffffff,0);
          *(undefined8 *)(*(longlong *)(param_2 + 0x18) + uVar8 * 8) = 0;
          FUN_1473f5428(param_2,uVar8 & 0xffffffff,lVar2 + lVar3);
        }
        else {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x140) + uVar8 * 8);
          if (*(longlong *)(*(longlong *)(param_2 + 0x18) + uVar8 * 8) != lVar2) {
            (*DAT_14ca7ff58)(uVar8 & 0xffffffff);
            *(longlong *)(*(longlong *)(param_2 + 0x18) + uVar8 * 8) = lVar2;
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar7 != uVar8);
  }
  if ((int)uVar7 < (int)param_4) {
    lVar4 = (longlong)(int)uVar7 * 0x28 + 0x14;
    do {
      if (*(int *)(*(longlong *)(param_2 + 8) + lVar4) != 0 ||
          *(int *)(*(longlong *)(param_2 + 8) + -4 + lVar4) != 0) {
        FUN_1473e5556(param_1,param_2,uVar7 & 0xffffffff,0,0,0xffffffff,1);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      lVar4 = lVar4 + 0x28;
    } while (param_4 != uVar6);
  }
  return;
}



// FUNCTION 1473e59a8 FUN_1473e59a8 body=289 status=ok
// SIG undefined FUN_1473e59a8(void)

void FUN_1473e59a8(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = *(uint *)(param_2 + 0x6c8);
  if (-1 < param_4 || uVar1 != 0) {
    if (param_4 < 0) {
      uVar4 = (ulonglong)(param_4 + 1);
    }
    else {
      uVar4 = (ulonglong)(param_4 + 1);
      lVar7 = 0x10;
      uVar8 = 0;
      do {
        lVar2 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar2 = param_3;
        }
        if ((*(uint *)(lVar2 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
          uVar11 = 0x88ba;
          uVar10 = 0;
          uVar9 = 0;
          uVar5 = 0;
          uVar6 = 0;
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x150);
          uVar11 = *(undefined4 *)(lVar2 + -8 + lVar7);
          uVar10 = *(undefined4 *)(lVar2 + -4 + lVar7);
          uVar9 = *(undefined1 *)(lVar2 + lVar7);
          uVar5 = *(undefined4 *)(lVar2 + -0x10 + lVar7);
          uVar6 = *(undefined4 *)(lVar2 + -0xc + lVar7);
        }
        FUN_1473e5aca(param_2,uVar8 & 0xffffffff,uVar5,uVar6,uVar9,uVar10,uVar11);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x14;
      } while (uVar4 != uVar8);
      uVar1 = *(uint *)(param_2 + 0x6c8);
    }
    if ((uVar1 >> ((byte)uVar4 & 0x1f) != 0) &&
       (uVar1 = *(uint *)(param_2 + 0x30), (int)uVar4 < (int)uVar1)) {
      do {
        FUN_1473e5aca(param_2,uVar4,0,0,0,0,0x88ba);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar1 != uVar3);
    }
  }
  return;
}



// FUNCTION 1473e5aca FUN_1473e5aca body=459 status=ok
// SIG undefined FUN_1473e5aca(void)

void FUN_1473e5aca(longlong param_1,int param_2,int param_3,int param_4,char param_5,int param_6,
                  int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 unaff_R14;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar6 = (longlong)param_2;
  piVar1 = (int *)(lVar4 + lVar6 * 0x14);
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  if ((((iVar2 != param_3) || (iVar3 != param_4)) || (*(int *)(lVar4 + 8 + lVar6 * 0x14) != param_7)
      ) || ((*(int *)(lVar4 + 0xc + lVar6 * 0x14) != param_6 || ((char)piVar1[4] != param_5)))) {
    if (param_4 == 0) {
      if (iVar3 != 0) {
        if (iVar2 == 0) {
          (*DAT_14ca7fd40)(0x90d2,param_2,0);
          *(undefined4 *)(param_1 + 0x448) = 0;
        }
        else {
          (*DAT_14ca7fd48)(param_2,0,0,0,0,0x88ba,0x822e);
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar1[2] = 0x88ba;
        piVar1[3] = 0;
        *(undefined1 *)(piVar1 + 4) = 0;
      }
      bVar5 = (byte)param_2 & 0x1f;
      *(uint *)(param_1 + 0x6c8) =
           *(uint *)(param_1 + 0x6c8) & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    }
    else {
      if (param_3 == 0) {
        if (iVar3 != 0 && iVar2 != 0) {
          (*DAT_14ca7fd48)(param_2,0,0,0,0,0x88ba,0x822e);
        }
        (*DAT_14ca7fd40)(0x90d2,param_2,param_4);
        *piVar1 = 0;
        piVar1[1] = param_4;
        piVar1[2] = 0x88ba;
        piVar1[3] = 0;
        *(undefined1 *)(piVar1 + 4) = 0;
        *(int *)(param_1 + 0x448) = param_4;
      }
      else {
        if (iVar3 != 0 && iVar2 == 0) {
          (*DAT_14ca7fd40)(0x90d2,param_2,0);
          *(undefined4 *)(param_1 + 0x448) = 0;
        }
        (*DAT_14ca7fd48)(param_2,param_4,0,
                         CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_5) & 0xffffffff,param_6,
                         param_7,param_3);
        *piVar1 = param_3;
        piVar1[1] = param_4;
        piVar1[2] = param_7;
        piVar1[3] = param_6;
        *(char *)(piVar1 + 4) = param_5;
      }
      *(uint *)(param_1 + 0x6c8) = *(uint *)(param_1 + 0x6c8) | 1 << ((byte)param_2 & 0x1f);
    }
  }
  return;
}



// FUNCTION 1473e5c95 FUN_1473e5c95 body=109 status=ok
// SIG undefined FUN_1473e5c95(void)

void FUN_1473e5c95(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  HGLRC pHVar3;
  longlong lVar4;
  
  lVar2 = DAT_14ca79650;
  lVar4 = *(longlong *)(DAT_14ca79650 + 0x14fa0);
  if (lVar4 == 0) {
    lVar1 = *(longlong *)(DAT_14ca79650 + 0x15008);
    pHVar3 = wglGetCurrentContext();
    lVar4 = lVar2 + 0x14200;
    if (pHVar3 == *(HGLRC *)(lVar1 + 0x40)) {
      lVar4 = lVar2 + 0x148d0;
    }
    *(longlong *)(lVar2 + 0x14fa0) = lVar4;
  }
  if (*(int *)(lVar4 + 0x44c) != param_2) {
    (*DAT_14ca7fba8)(0x88ec,param_2);
    *(int *)(lVar4 + 0x44c) = param_2;
  }
  return;
}



// FUNCTION 1473e5d02 FUN_1473e5d02 body=33 status=ok
// SIG undefined FUN_1473e5d02(void)

void FUN_1473e5d02(void)

{
  FUN_1473e71bc();
  return;
}



// FUNCTION 1473e5d24 FUN_1473e5d24 body=109 status=ok
// SIG undefined FUN_1473e5d24(void)

void FUN_1473e5d24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  memset(*(void **)(param_1 + 0x14f90),0,(longlong)*(int *)(param_1 + 0x14f98) << 3);
  if (0 < *(int *)(param_2 + 0x60)) {
    lVar1 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x58);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        lVar3 = param_2 + 0x18;
      }
      lVar2 = *(longlong *)(param_2 + 8);
      if (*(longlong *)(param_2 + 8) == 0) {
        lVar2 = param_2;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x14f90) + (ulonglong)*(byte *)(lVar2 + lVar1) * 8) =
           *(undefined8 *)(lVar3 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 1473e5da2 FUN_1473e5da2 body=160 status=ok
// SIG undefined FUN_1473e5da2(void)

void FUN_1473e5da2(longlong param_1,char param_2,undefined4 param_3)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x90);
  lVar5 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4d0) + 0x88);
  bVar6 = true;
  do {
    if ((lVar4 != 0) && (0 < (longlong)*(int *)(lVar4 + 0x80))) {
      uVar3 = (ulonglong)(byte)(&DAT_14a36d036)[lVar5];
      lVar5 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar4 + 0x78) + lVar5) == param_2) {
          if (*(longlong *)(uVar3 * 0x70 + param_1 + 0x4e0 + lVar5 * 8) != 0) {
            *(undefined4 *)(uVar3 * 0x38 + param_1 + 0x780 + lVar5 * 4) = param_3;
            *(undefined1 *)(param_1 + 0x8d0 + uVar3) = 1;
          }
          break;
        }
        lVar5 = lVar5 + 1;
      } while (*(int *)(lVar4 + 0x80) != lVar5);
    }
    lVar5 = 1;
    bVar2 = !bVar6;
    lVar4 = lVar1;
    bVar6 = false;
    if (bVar2) {
      return;
    }
  } while( true );
}



// FUNCTION 1473e5e42 FUN_1473e5e42 body=708 status=ok
// SIG undefined FUN_1473e5e42(void)

void FUN_1473e5e42(longlong param_1,byte param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong local_78;
  longlong local_70;
  byte local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong lStack_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_64 = 6;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  lVar5 = 6;
  uVar7 = 0;
  local_78 = (ulonglong)param_2;
  uVar6 = DAT_14c760cc0;
  switch(local_78) {
  case 0:
    local_64 = 0;
    local_60 = CONCAT44(DAT_14c760ce8,DAT_14c760ce0);
    lVar5 = 0;
    uVar7 = DAT_14c760ce0;
    break;
  default:
    goto switchD_1473e5ea8_caseD_1;
  case 3:
    local_64 = 1;
    local_60 = (ulonglong)DAT_14c760ce0 << 0x20;
    lVar5 = 1;
    uVar7 = 0;
    break;
  case 4:
    local_64 = 2;
    local_60 = CONCAT44(DAT_14c760cb4,DAT_14c760ce8 + DAT_14c760ce0);
    lVar5 = 2;
    uVar6 = 0;
    uVar7 = DAT_14c760ce8 + DAT_14c760ce0;
    break;
  case 5:
    local_64 = 5;
    local_60 = (ulonglong)DAT_14c760ce4 << 0x20;
    lVar5 = 5;
    uVar7 = 0;
    uVar6 = DAT_14c760cbc;
  }
  lStack_58 = (ulonglong)uVar6 << 0x20;
switchD_1473e5ea8_caseD_1:
  lVar4 = param_4[1];
  local_70 = param_1;
  local_68 = param_2;
  if ((longlong)(int)lVar4 != 0) {
    lVar10 = *param_4;
    lVar9 = 0;
    do {
      local_88 = (ulonglong)*(ushort *)(lVar10 + 4 + lVar9) + *param_3;
      FUN_1473e6108(*(longlong *)(param_1 + 0x4e0) + lVar5 * 0xb0,*(undefined2 *)(lVar10 + lVar9),
                    *(undefined2 *)(lVar10 + 2 + lVar9),*(undefined2 *)(lVar10 + 6 + lVar9));
      *(undefined8 *)(param_1 + 0x4d8) = 0;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  lVar5 = param_5[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_5;
    lVar10 = 0;
    uVar8 = local_78;
    do {
      if (*(char *)(lVar4 + 10 + lVar10) == '\x02') {
        FUN_1473e617a(&local_70,*(undefined8 *)(lVar4 + lVar10),*(undefined1 *)(lVar4 + 8 + lVar10))
        ;
        uVar8 = local_78;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar10);
    lVar5 = param_5[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar4 = *param_5;
      lVar11 = 0;
      lVar9 = uVar8 * 0x70;
      lVar10 = uVar8 * 0x38;
      do {
        switch(*(undefined1 *)(lVar4 + 10 + lVar11)) {
        case 0:
          FUN_1473e6264(&local_70,*(undefined8 *)(lVar4 + lVar11),
                        *(undefined1 *)(lVar4 + 8 + lVar11));
          uVar8 = local_78;
          break;
        case 1:
          FUN_1473e635a(&local_70,*(undefined8 *)(lVar4 + lVar11),
                        *(undefined1 *)(lVar4 + 8 + lVar11));
          uVar8 = local_78;
          break;
        case 3:
          *(undefined8 *)
           (*(longlong *)(param_1 + 0x140) +
           ((ulonglong)*(byte *)(lVar4 + 8 + lVar11) + (longlong)(int)uVar7) * 8) =
               *(undefined8 *)(lVar4 + lVar11);
          break;
        case 4:
          lVar3 = *(longlong *)(lVar4 + lVar11);
          uVar2 = *(ushort *)(lVar4 + 8 + lVar11);
          *(longlong *)(lVar9 + param_1 + 0x4f8 + (ulonglong)uVar2 * 8) = lVar3;
          *(undefined4 *)(lVar10 + param_1 + 0x798 + (ulonglong)uVar2 * 4) = 0;
          puVar1 = (ushort *)(param_1 + 0x8f0 + uVar8 * 2);
          *puVar1 = *puVar1 | (ushort)(1 << ((byte)uVar2 & 0x1f));
          *(undefined1 *)(param_1 + 0x8ee) = 1;
          if ((DAT_14ca7a384 != '\x01') || (*(char *)(lVar3 + 0x5d) == '\0')) {
            *(undefined1 *)(param_1 + 0x8e8 + uVar8) = 1;
          }
        }
        lVar11 = lVar11 + 0x10;
      } while ((longlong)(int)lVar5 * 0x10 != lVar11);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e6108 FUN_1473e6108 body=114 status=ok
// SIG undefined FUN_1473e6108(void)

void FUN_1473e6108(longlong param_1,char param_2,uint param_3,uint param_4,void *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((byte)(param_2 + 0x99U) < 0xf) {
    lVar6 = *(longlong *)(&DAT_14a371608 + (ulonglong)(byte)(param_2 + 0x99U) * 8);
  }
  else {
    lVar6 = 0;
  }
  uVar4 = param_4 + 0xf >> 4;
  uVar7 = param_3 >> 4;
  iVar1 = *(int *)(param_1 + 0x3c + lVar6 * 8);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x38 + lVar6 * 8);
    uVar5 = iVar1 + uVar2;
    uVar3 = uVar4 + uVar7;
    if (uVar4 + uVar7 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar2 < uVar7) {
      uVar7 = uVar2;
    }
    uVar4 = (uVar3 - uVar7) + 1;
  }
  *(uint *)(param_1 + 0x38 + lVar6 * 8) = uVar7;
  *(uint *)(param_1 + 0x3c + lVar6 * 8) = uVar4;
  memcpy((void *)((ulonglong)param_3 + *(longlong *)(param_1 + lVar6 * 8)),param_5,
         (ulonglong)param_4);
  return;
}



// FUNCTION 1473e617a FUN_1473e617a body=233 status=ok
// SIG undefined FUN_1473e617a(void)

void FUN_1473e617a(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar1 = param_1[3];
  if (param_2 == 0) {
    lVar7 = *param_1;
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x40) != 0) {
      lVar2 = param_1[1];
      lVar7 = *param_1;
      if (*(byte *)(param_2 + 0x18) < 2) {
        bVar8 = false;
      }
      else {
        lVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
        bVar8 = true;
        if (*(char *)(lVar4 + 0x32) != '\x02') {
          lVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
          bVar8 = *(char *)(lVar4 + 0x32) == '\x01';
        }
      }
      iVar6 = ((char)lVar2 == '\x05') + 0x88b9;
      uVar3 = *(undefined4 *)(param_2 + 0x40);
      uVar5 = *(undefined4 *)(param_2 + 0x48);
      goto LAB_1473e61eb;
    }
    lVar7 = *param_1;
    uVar3 = *(undefined4 *)(param_2 + 0x44);
  }
  uVar5 = 0;
  iVar6 = 0x88ba;
  bVar8 = false;
LAB_1473e61eb:
  lVar1 = ((longlong)(int)lVar1 + (param_3 & 0xff)) * 0x14;
  *(undefined4 *)(*(longlong *)(lVar7 + 0x150) + lVar1) = uVar5;
  *(undefined4 *)(*(longlong *)(lVar7 + 0x150) + 4 + lVar1) = uVar3;
  *(int *)(*(longlong *)(lVar7 + 0x150) + 8 + lVar1) = iVar6;
  *(undefined4 *)(*(longlong *)(lVar7 + 0x150) + 0xc + lVar1) = 0;
  *(bool *)(*(longlong *)(lVar7 + 0x150) + 0x10 + lVar1) = bVar8;
  return;
}



// FUNCTION 1473e6264 FUN_1473e6264 body=246 status=ok
// SIG undefined FUN_1473e6264(void)

void FUN_1473e6264(longlong *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  if (param_2 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
    if (plVar4 != (longlong *)0x0) {
      lVar2 = *param_1;
      lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
      bVar1 = *(byte *)(lVar5 + 0x30);
      uVar7 = (uint)bVar1;
      if ((plVar4[0xf] != 0) && ((*(byte *)(plVar4[0xf] + 0x10) & 1) == 0)) {
        FUN_1431cefae(plVar4,1);
      }
      uVar3 = plVar4[0xd];
      puVar6 = (undefined8 *)
               (*(longlong *)(lVar2 + 0x130) +
               ((ulonglong)(param_3 & 0xff) + (longlong)(int)param_1[2]) * 0x28);
      *puVar6 = plVar4;
      puVar6[1] = 0;
      puVar6[2] = uVar3 << 0x20 | uVar3 >> 0x20;
      *(undefined4 *)(puVar6 + 3) = 0xffffffff;
      *(bool *)((longlong)puVar6 + 0x1c) = bVar1 != 1;
      goto LAB_1473e632a;
    }
  }
  puVar6 = (undefined8 *)
           (*(longlong *)(*param_1 + 0x130) +
           ((ulonglong)(param_3 & 0xff) + (longlong)(int)param_1[2]) * 0x28);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x1c) = 1;
  uVar7 = 0;
LAB_1473e632a:
  *(uint *)(puVar6 + 4) = uVar7;
  if ((char)param_1[4] == '\x01') {
    *(undefined8 *)
     (*(longlong *)(*param_1 + 0x140) +
     ((ulonglong)(param_3 & 0xff) + (longlong)(int)param_1[2]) * 8) = 0;
  }
  return;
}



// FUNCTION 1473e635a FUN_1473e635a body=282 status=ok
// SIG undefined FUN_1473e635a(void)

void FUN_1473e635a(longlong *param_1,longlong param_2,byte param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    lVar6 = (longlong)(int)param_1[2] + (ulonglong)param_3;
    lVar5 = *(longlong *)(*param_1 + 0x130);
    puVar1 = (undefined8 *)(lVar5 + lVar6 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x28) = 0x8c2a;
    *(undefined4 *)(lVar5 + 0x18 + lVar6 * 0x28) = 0xffffffff;
    *(undefined1 *)(lVar5 + 0x1c + lVar6 * 0x28) = 1;
    *(undefined4 *)(lVar5 + 0x20 + lVar6 * 0x28) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x44);
    lVar5 = *param_1;
    if (iVar2 == 0x90d2) {
      uVar3 = *(undefined4 *)(param_2 + 0x40);
      lVar6 = ((ulonglong)param_3 + (longlong)(int)param_1[3]) * 0x14;
      *(undefined4 *)(*(longlong *)(lVar5 + 0x150) + lVar6) = 0;
      *(undefined4 *)(*(longlong *)(lVar5 + 0x150) + 4 + lVar6) = uVar3;
      *(undefined4 *)(*(longlong *)(lVar5 + 0x150) + 8 + lVar6) = 0x88ba;
      *(undefined4 *)(*(longlong *)(lVar5 + 0x150) + 0xc + lVar6) = 0;
      *(undefined1 *)(*(longlong *)(lVar5 + 0x150) + 0x10 + lVar6) = 0;
      return;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    uVar4 = *(undefined4 *)(param_2 + 0x48);
    lVar6 = (longlong)(int)param_1[2] + (ulonglong)param_3;
    lVar5 = *(longlong *)(lVar5 + 0x130);
    *(undefined8 *)(lVar5 + lVar6 * 0x28) = 0;
    *(longlong *)(lVar5 + 8 + lVar6 * 0x28) = param_2;
    *(int *)(lVar5 + 0x10 + lVar6 * 0x28) = iVar2;
    *(undefined4 *)(lVar5 + 0x14 + lVar6 * 0x28) = uVar3;
    *(undefined4 *)(lVar5 + 0x18 + lVar6 * 0x28) = uVar4;
    *(undefined1 *)(lVar5 + 0x1c + lVar6 * 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x20 + lVar6 * 0x28) = 1;
  }
  *(undefined8 *)
   (*(longlong *)(*param_1 + 0x140) + ((longlong)(int)param_1[2] + (ulonglong)param_3) * 8) =
       *(undefined8 *)(*param_1 + 0x918);
  return;
}



// FUNCTION 1473e6474 FUN_1473e6474 body=129 status=ok
// SIG undefined FUN_1473e6474(void)

void FUN_1473e6474(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x9c) < 5) && ((0x19U >> (*(byte *)(param_2 + 0x9c) & 0x1f) & 1) != 0)) {
    local_18 = *param_5;
    uStack_10 = param_5[1];
    local_48 = &local_18;
    local_28 = *param_4;
    uStack_20 = param_4[1];
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_1473e5e42(param_1 + -0x18);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e64f6 FUN_1473e64f6 body=107 status=ok
// SIG undefined FUN_1473e64f6(void)

void FUN_1473e64f6(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_5;
  uStack_10 = param_5[1];
  local_48 = &local_18;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1473e5e42(param_1 + -0x18,CONCAT71((int7)(local_8 >> 8),5));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e6562 FUN_1473e6562 body=259 status=ok
// SIG undefined FUN_1473e6562(void)

void FUN_1473e6562(longlong param_1,char param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 == '\x04') {
    iVar6 = DAT_14c760ce8 + DAT_14c760ce0;
  }
  else {
    iVar6 = 0;
    if (param_2 == '\0') {
      iVar6 = DAT_14c760ce0;
    }
  }
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_3;
    lVar7 = 0;
    do {
      cVar2 = *(char *)(lVar3 + 2 + lVar7);
      if (cVar2 == '\x01') {
        lVar4 = (ulonglong)*(byte *)(lVar3 + lVar7) * 0x14;
        *(undefined4 *)(*(longlong *)(param_1 + 0x150) + lVar4) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 4 + lVar4) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 8 + lVar4) = 0x88ba;
        *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0xc + lVar4) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x150) + 0x10 + lVar4) = 0;
      }
      else if (cVar2 == '\0') {
        lVar8 = (ulonglong)*(byte *)(lVar3 + lVar7) + (longlong)iVar6;
        lVar4 = *(longlong *)(param_1 + 0x130);
        puVar1 = (undefined8 *)(lVar4 + lVar8 * 0x28);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar4 + 0x10 + lVar8 * 0x28) = 0x8c2a;
        *(undefined4 *)(lVar4 + 0x18 + lVar8 * 0x28) = 0xffffffff;
        *(undefined1 *)(lVar4 + 0x1c + lVar8 * 0x28) = 1;
        *(undefined4 *)(lVar4 + 0x20 + lVar8 * 0x28) = 0;
        *(undefined8 *)(*(longlong *)(param_1 + 0x140) + lVar8 * 8) =
             *(undefined8 *)(param_1 + 0x918);
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar7);
  }
  return;
}



// FUNCTION 1473e6666 FUN_1473e6666 body=70 status=ok
// SIG undefined FUN_1473e6666(void)

void FUN_1473e6666(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  FUN_1473e6562(param_1 + -0x18,5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e66ae FUN_1473e66ae body=92 status=ok
// SIG undefined FUN_1473e66ae(void)

void FUN_1473e66ae(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_2 + 0x9c) < 5) && ((0x19U >> (*(byte *)(param_2 + 0x9c) & 0x1f) & 1) != 0)) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    FUN_1473e6562(param_1 + -0x18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e6746 FUN_1473e6746 body=833 status=ok
// SIG undefined FUN_1473e6746(void)

void FUN_1473e6746(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_2 + 0x4c);
  if (bVar1 != *(byte *)(param_1 + 0x174)) {
    puVar3 = &DAT_14ca7fbc8;
    if (*(byte *)(param_1 + 0x174) != 0) {
      puVar3 = &DAT_14ca7fbb8;
    }
    (*(code *)*puVar3)(0xb71);
    bVar1 = *(byte *)(param_1 + 0x174);
    *(byte *)(param_2 + 0x4c) = bVar1;
  }
  if (*(char *)(param_2 + 0x4d) != *(char *)(param_1 + 0x175)) {
    (*DAT_14ca7fbf8)();
    *(undefined1 *)(param_2 + 0x4d) = *(undefined1 *)(param_1 + 0x175);
    bVar1 = *(byte *)(param_1 + 0x174);
  }
  if (((bVar1 & 1) != 0) && (*(int *)(param_2 + 0x50) != *(int *)(param_1 + 0x178))) {
    (*DAT_14ca7fc00)();
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x178);
  }
  bVar1 = *(byte *)(param_2 + 0x54);
  if (bVar1 != *(byte *)(param_1 + 0x17c)) {
    puVar3 = &DAT_14ca7fbc8;
    if (*(byte *)(param_1 + 0x17c) != 0) {
      puVar3 = &DAT_14ca7fbb8;
    }
    (*(code *)*puVar3)(0xb90);
    bVar1 = *(byte *)(param_1 + 0x17c);
    *(byte *)(param_2 + 0x54) = bVar1;
  }
  cVar2 = *(char *)(param_2 + 0x55);
  if (cVar2 != *(char *)(param_1 + 0x17d)) {
    *(undefined4 *)(param_2 + 0x58) = 0xffff;
    *(undefined4 *)(param_2 + 0x5c) = 0xffff;
    *(undefined4 *)(param_2 + 0x60) = 0xffff;
    *(undefined4 *)(param_2 + 100) = 0xffff;
    *(undefined4 *)(param_2 + 0x68) = 0xffff;
    *(undefined4 *)(param_2 + 0x6c) = 0xffff;
    *(undefined4 *)(param_2 + 0x70) = 0xffff;
    *(undefined4 *)(param_2 + 0x74) = 0xffff;
    *(undefined4 *)(param_2 + 0x78) = 0xffff;
    cVar2 = *(char *)(param_1 + 0x17d);
    *(char *)(param_2 + 0x55) = cVar2;
    bVar1 = *(byte *)(param_1 + 0x17c);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x180);
  if (cVar2 == '\0') {
    if (*(int *)(param_2 + 0x58) == iVar5) {
      iVar4 = *(int *)(param_1 + 0x1a8);
      if ((*(int *)(param_2 + 0x80) != *(int *)(param_1 + 0x1a8)) ||
         (iVar4 = *(int *)(param_2 + 0x80), *(int *)(param_2 + 0x78) != *(int *)(param_1 + 0x1a0)))
      goto LAB_1473e68e0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1a8);
LAB_1473e68e0:
      (*DAT_14ca7fc18)(iVar5,iVar4,*(undefined4 *)(param_1 + 0x1a0));
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x1a8);
    }
    if (*(int *)(param_2 + 0x5c) == *(int *)(param_1 + 0x184)) {
      iVar5 = *(int *)(param_1 + 0x188);
      if ((*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x188)) &&
         (iVar5 = *(int *)(param_2 + 0x60), *(int *)(param_2 + 100) == *(int *)(param_1 + 0x18c)))
      goto LAB_1473e6a66;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x188);
    }
    (*DAT_14ca7fc20)(*(int *)(param_1 + 0x184),iVar5,*(undefined4 *)(param_1 + 0x18c));
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x18c);
    goto LAB_1473e6a66;
  }
  if (*(int *)(param_2 + 0x58) == iVar5) {
    iVar4 = *(int *)(param_1 + 0x1a8);
    if ((*(int *)(param_2 + 0x80) != *(int *)(param_1 + 0x1a8)) ||
       (iVar4 = *(int *)(param_2 + 0x80), *(int *)(param_2 + 0x78) != *(int *)(param_1 + 0x1a0)))
    goto LAB_1473e688c;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x1a8);
LAB_1473e688c:
    (*DAT_14ca7fc08)(0x405,iVar5,iVar4,*(undefined4 *)(param_1 + 0x1a0));
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x180);
  }
  if (*(int *)(param_2 + 0x5c) == *(int *)(param_1 + 0x184)) {
    iVar5 = *(int *)(param_1 + 0x188);
    if ((*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x188)) ||
       (iVar5 = *(int *)(param_2 + 0x60), *(int *)(param_2 + 100) != *(int *)(param_1 + 0x18c)))
    goto LAB_1473e6944;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x188);
LAB_1473e6944:
    (*DAT_14ca7fc10)(0x405,*(int *)(param_1 + 0x184),iVar5,*(undefined4 *)(param_1 + 0x18c));
    *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x18c);
  }
  if (*(int *)(param_2 + 0x68) == *(int *)(param_1 + 400)) {
    iVar5 = *(int *)(param_1 + 0x1a8);
    if ((*(int *)(param_2 + 0x80) != *(int *)(param_1 + 0x1a8)) ||
       (iVar5 = *(int *)(param_2 + 0x80), *(int *)(param_2 + 0x78) != *(int *)(param_1 + 0x1a0)))
    goto LAB_1473e69d8;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1a8);
LAB_1473e69d8:
    (*DAT_14ca7fc08)(0x404,*(int *)(param_1 + 400),iVar5,*(undefined4 *)(param_1 + 0x1a0));
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 400);
  }
  if (*(int *)(param_2 + 0x6c) == *(int *)(param_1 + 0x194)) {
    iVar5 = *(int *)(param_1 + 0x198);
    if ((*(int *)(param_2 + 0x70) != *(int *)(param_1 + 0x198)) ||
       (iVar5 = *(int *)(param_2 + 0x70), *(int *)(param_2 + 0x74) != *(int *)(param_1 + 0x19c)))
    goto LAB_1473e6a24;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x198);
LAB_1473e6a24:
    (*DAT_14ca7fc10)(0x404,*(int *)(param_1 + 0x194),iVar5,*(undefined4 *)(param_1 + 0x19c));
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x198);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x19c);
  }
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x1a8);
LAB_1473e6a66:
  if (*(int *)(param_2 + 0x7c) != *(int *)(param_1 + 0x1a4)) {
    (*DAT_14ca7fc28)();
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x1a4);
  }
  return;
}



// FUNCTION 1473e6a88 FUN_1473e6a88 body=1215 status=ok
// SIG undefined FUN_1473e6a88(void)

void FUN_1473e6a88(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined3 uVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  uint in_stack_ffffffffffffffa8;
  
  uVar18 = 0;
  bVar20 = false;
  bVar21 = false;
  do {
    plVar8 = *(longlong **)(param_1 + 0x318 + uVar18 * 8);
    if (plVar8 != (longlong *)0x0) {
      if ((uVar18 == 0) && (bVar21 = true, *(int *)(param_1 + 0x310) < 2)) {
        lVar16 = (**(code **)(*plVar8 + 8))();
        bVar21 = 1 < *(byte *)(lVar16 + 0x31);
      }
      lVar16 = uVar18 * 0x24;
      pcVar1 = (char *)(param_1 + 0x1ac + lVar16);
      pcVar2 = (char *)(lVar16 + param_2 + 0x84);
      cVar10 = *(char *)(param_2 + 0x84 + lVar16);
      cVar3 = *(char *)(param_1 + 0x1ac + lVar16);
      if (cVar10 != cVar3) {
        puVar15 = (undefined8 *)&DAT_14ca7fd58;
        if (cVar3 != '\0') {
          puVar15 = &DAT_14ca7fd50;
        }
        (*(code *)*puVar15)(0xbe2,uVar18 & 0xffffffff);
        cVar10 = *pcVar1;
        *pcVar2 = cVar10;
      }
      if (cVar10 != '\0') {
        if (DAT_14ca7968b == '\x01') {
          iVar4 = *(int *)(pcVar1 + 8);
          if (pcVar1[0x10] == '\x01') {
            if (*(int *)(pcVar2 + 8) == iVar4) {
              iVar5 = *(int *)(pcVar2 + 0xc);
              iVar19 = *(int *)(pcVar1 + 0xc);
              if (((iVar5 != *(int *)(pcVar1 + 0xc)) ||
                  (iVar19 = iVar5, *(int *)(pcVar2 + 0x18) != *(int *)(pcVar1 + 0x18))) ||
                 (*(int *)(pcVar2 + 0x1c) != *(int *)(pcVar1 + 0x1c))) goto LAB_1473e6c59;
            }
            else {
              iVar19 = *(int *)(pcVar1 + 0xc);
LAB_1473e6c59:
              in_stack_ffffffffffffffa8 = *(uint *)(pcVar1 + 0x1c);
              (*DAT_14ca7fd60)(uVar18 & 0xffffffff,iVar4,iVar19,*(undefined4 *)(pcVar1 + 0x18),
                               in_stack_ffffffffffffffa8);
            }
            if (*(int *)(pcVar2 + 4) == *(int *)(pcVar1 + 4)) {
              iVar4 = *(int *)(pcVar1 + 0x14);
              if (*(int *)(pcVar2 + 0x14) == iVar4) goto LAB_1473e6cd6;
            }
            else {
              iVar4 = *(int *)(pcVar1 + 0x14);
            }
            (*DAT_14ca7fd68)(uVar18 & 0xffffffff,*(int *)(pcVar1 + 4),iVar4);
          }
          else {
            if (*(int *)(pcVar2 + 8) == iVar4) {
              iVar5 = *(int *)(pcVar2 + 0xc);
              iVar19 = *(int *)(pcVar1 + 0xc);
              if (((iVar5 != *(int *)(pcVar1 + 0xc)) ||
                  (iVar19 = iVar5, *(int *)(pcVar2 + 0x18) != *(int *)(pcVar1 + 0x18))) ||
                 (*(int *)(pcVar2 + 0x1c) != *(int *)(pcVar1 + 0x1c))) goto LAB_1473e6c86;
            }
            else {
              iVar19 = *(int *)(pcVar1 + 0xc);
LAB_1473e6c86:
              (*DAT_14ca7fd70)(uVar18 & 0xffffffff,iVar4,iVar19);
            }
            if (*(int *)(pcVar2 + 4) != *(int *)(pcVar1 + 4)) {
              (*DAT_14ca7fd78)(uVar18 & 0xffffffff);
            }
          }
LAB_1473e6cd6:
          pcVar2[0x10] = pcVar1[0x10];
          *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(pcVar1 + 4);
          *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(pcVar1 + 8);
          *(undefined4 *)(pcVar2 + 0xc) = *(undefined4 *)(pcVar1 + 0xc);
          if (pcVar1[0x10] == '\x01') {
            *(undefined4 *)(pcVar2 + 0x18) = *(undefined4 *)(pcVar1 + 0x18);
            uVar12 = *(undefined4 *)(pcVar1 + 0x1c);
          }
          else {
            *(undefined4 *)(pcVar2 + 0x18) = *(undefined4 *)(pcVar1 + 8);
            uVar12 = *(undefined4 *)(pcVar1 + 0xc);
          }
          *(undefined4 *)(pcVar2 + 0x1c) = uVar12;
        }
        else {
          if (bVar20) {
            if (((((pcVar2[0x10] == pcVar1[0x10]) && (*(int *)(pcVar2 + 4) == *(int *)(pcVar1 + 4)))
                 && (*(int *)(pcVar2 + 8) == *(int *)(pcVar1 + 8))) &&
                (*(int *)(pcVar2 + 0xc) == *(int *)(pcVar1 + 0xc))) &&
               ((bVar20 = true, pcVar1[0x10] == '\0' ||
                ((*(int *)(pcVar2 + 0x18) == *(int *)(pcVar1 + 0x18) &&
                 (*(int *)(pcVar2 + 0x1c) == *(int *)(pcVar1 + 0x1c))))))) goto LAB_1473e6dc8;
            FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLCommands.cpp",0x5d1,
                          L"OpenGL state on draw requires setting different blend operation or factors to different render targets. This is not supported on Mac OS X!"
                         );
          }
          else {
            iVar4 = *(int *)(pcVar1 + 8);
            if (pcVar1[0x10] == '\x01') {
              if (*(int *)(pcVar2 + 8) == iVar4) {
                iVar5 = *(int *)(pcVar2 + 0xc);
                iVar19 = *(int *)(pcVar1 + 0xc);
                if (((iVar5 != *(int *)(pcVar1 + 0xc)) ||
                    (iVar19 = iVar5, *(int *)(pcVar2 + 0x18) != *(int *)(pcVar1 + 0x18))) ||
                   (*(int *)(pcVar2 + 0x1c) != *(int *)(pcVar1 + 0x1c))) goto LAB_1473e6d1d;
              }
              else {
                iVar19 = *(int *)(pcVar1 + 0xc);
LAB_1473e6d1d:
                (*DAT_14ca7fc30)(iVar4,iVar19,*(undefined4 *)(pcVar1 + 0x18),
                                 *(undefined4 *)(pcVar1 + 0x1c));
              }
              if (*(int *)(pcVar2 + 4) == *(int *)(pcVar1 + 4)) {
                iVar4 = *(int *)(pcVar1 + 0x14);
                if (*(int *)(pcVar2 + 0x14) == iVar4) goto LAB_1473e6d69;
              }
              else {
                iVar4 = *(int *)(pcVar1 + 0x14);
              }
              (*DAT_14ca7fc38)(*(int *)(pcVar1 + 4),iVar4);
            }
            else {
              if (*(int *)(pcVar2 + 8) == iVar4) {
                iVar5 = *(int *)(pcVar2 + 0xc);
                iVar19 = *(int *)(pcVar1 + 0xc);
                if (((iVar5 != *(int *)(pcVar1 + 0xc)) ||
                    (iVar19 = iVar5, *(int *)(pcVar2 + 0x18) != *(int *)(pcVar1 + 0x18))) ||
                   (*(int *)(pcVar2 + 0x1c) != *(int *)(pcVar1 + 0x1c))) goto LAB_1473e6d43;
              }
              else {
                iVar19 = *(int *)(pcVar1 + 0xc);
LAB_1473e6d43:
                (*DAT_14ca7fc40)(iVar4,iVar19);
              }
              if ((*(int *)(pcVar2 + 4) != *(int *)(pcVar1 + 4)) ||
                 (*(int *)(pcVar2 + 0x14) != *(int *)(pcVar1 + 4))) {
                (*DAT_14ca7fc48)();
              }
            }
LAB_1473e6d69:
            lVar16 = 0xa0;
            do {
              *(char *)(param_2 + -0xc + lVar16) = pcVar1[0x10];
              *(undefined4 *)(param_2 + -0x18 + lVar16) = *(undefined4 *)(pcVar1 + 4);
              *(undefined4 *)(param_2 + -0x14 + lVar16) = *(undefined4 *)(pcVar1 + 8);
              *(undefined4 *)(param_2 + -0x10 + lVar16) = *(undefined4 *)(pcVar1 + 0xc);
              lVar17 = (ulonglong)(byte)pcVar1[0x10] * 0x10;
              *(undefined4 *)(param_2 + -8 + lVar16) = *(undefined4 *)(pcVar1 + lVar17 + 4);
              *(undefined4 *)(param_2 + -4 + lVar16) = *(undefined4 *)(pcVar1 + lVar17 + 8);
              *(undefined4 *)(param_2 + lVar16) = *(undefined4 *)(pcVar1 + lVar17 + 0xc);
              *(undefined4 *)(param_2 + -8 + lVar16) = *(undefined4 *)(pcVar1 + lVar17 + 4);
              lVar16 = lVar16 + 0x24;
            } while (lVar16 != 0x1c0);
          }
          bVar20 = true;
        }
      }
LAB_1473e6dc8:
      pcVar2[0x10] = pcVar1[0x10];
      uVar6 = *(uint *)(pcVar1 + 0x20);
      if (((*(uint *)(pcVar2 + 0x20) ^ uVar6) & 0xf) != 0) {
        bVar11 = (byte)uVar6;
        uVar9 = (undefined3)(uVar6 >> 8);
        in_stack_ffffffffffffffa8 =
             CONCAT31((int3)(in_stack_ffffffffffffffa8 >> 8),bVar11 >> 3) & 0xffffff01;
        (*DAT_14ca7fd80)(uVar18 & 0xffffffff,uVar6 & 0xffffff01,
                         CONCAT31(uVar9,bVar11 >> 1) & 0xffffff01,
                         CONCAT31(uVar9,bVar11 >> 2) & 0xffffff01,in_stack_ffffffffffffffa8);
        uVar13 = *(uint *)(pcVar1 + 0x20) & 1;
        uVar6 = *(uint *)(pcVar2 + 0x20);
        *(uint *)(pcVar2 + 0x20) = uVar6 & 0xfffffffe | uVar13;
        uVar14 = *(uint *)(pcVar1 + 0x20) & 2;
        *(uint *)(pcVar2 + 0x20) = uVar6 & 0xfffffffc | uVar13 | uVar14;
        uVar7 = *(uint *)(pcVar1 + 0x20);
        *(uint *)(pcVar2 + 0x20) = uVar6 & 0xfffffff8 | uVar13 | uVar14 | uVar7 & 4;
        *(uint *)(pcVar2 + 0x20) =
             uVar6 & 0xfffffff0 | uVar13 | uVar14 | uVar7 & 4 | *(uint *)(pcVar1 + 0x20) & 8;
      }
    }
    uVar18 = uVar18 + 1;
    if (uVar18 == 8) {
      if (bVar21) {
        cVar10 = *(char *)(param_1 + 0x2cc);
        *(char *)(param_1 + 0x30c) = cVar10;
        if (*(char *)(param_2 + 0x470) == cVar10) {
          return;
        }
        puVar15 = &DAT_14ca7fbc8;
        if (cVar10 != '\0') {
          puVar15 = &DAT_14ca7fbb8;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x30c) = 0;
        if (*(char *)(param_2 + 0x470) == '\0') {
          return;
        }
        puVar15 = &DAT_14ca7fbc8;
      }
      (*(code *)*puVar15)(0x809e);
      *(undefined1 *)(param_2 + 0x470) = *(undefined1 *)(param_1 + 0x30c);
      return;
    }
  } while( true );
}



// FUNCTION 1473e6f5e FUN_1473e6f5e body=605 status=ok
// SIG undefined FUN_1473e6f5e(void)

void FUN_1473e6f5e(longlong param_1,int param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  lVar10 = param_1 + 0x318;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x314) = 0xffffffff;
  uVar4 = param_2 - 1;
  if (-1 < (int)uVar4) {
    puVar13 = (undefined4 *)(param_3 + (ulonglong)uVar4 * 0x18 + 0xc);
    uVar12 = (ulonglong)uVar4;
    do {
      if (*(longlong **)(puVar13 + -3) == (longlong *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(puVar13 + -3) + 0x30))();
      }
      *(undefined8 *)(lVar10 + uVar12 * 8) = uVar7;
      *(undefined4 *)(param_1 + 0x358 + uVar12 * 4) = puVar13[-1];
      *(undefined4 *)(param_1 + 0x378 + uVar12 * 4) = *puVar13;
      if (*(longlong *)(lVar10 + uVar12 * 8) != 0) {
        *(int *)(param_1 + 0x314) = (int)uVar12;
      }
      puVar13 = puVar13 + -6;
      bVar2 = 0 < (longlong)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar2);
  }
  if (param_4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x398) = 0;
    uVar3 = 0;
LAB_1473e7088:
    *(undefined1 *)(param_1 + 0x3a0) = uVar3;
  }
  else {
    if ((longlong *)*param_4 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x398) = 0;
      uVar3 = *(undefined1 *)((longlong)param_4 + 0xb);
      goto LAB_1473e7088;
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)*param_4 + 0x30))();
    *(longlong **)(param_1 + 0x398) = plVar8;
    *(undefined1 *)(param_1 + 0x3a0) = *(undefined1 *)((longlong)param_4 + 0xb);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 8))(plVar8);
      *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(lVar9 + 0x24);
      lVar9 = (**(code **)(*plVar8 + 8))(plVar8);
      uVar5 = *(undefined4 *)(lVar9 + 0x28);
      goto LAB_1473e709a;
    }
  }
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  uVar5 = 0;
LAB_1473e709a:
  *(undefined4 *)(param_1 + 0x3a8) = uVar5;
  if ((*(int *)(param_1 + 0x314) == -1) && (*(longlong *)(param_1 + 0x398) == 0)) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    *(undefined1 *)(param_1 + 0x3ac) = 1;
  }
  else {
    uVar5 = FUN_1473e71bc(param_1,param_2,lVar10,param_1 + 0x378,param_1 + 0x358,
                          *(longlong *)(param_1 + 0x398),*(undefined4 *)(param_1 + 0x310));
    *(undefined4 *)(param_1 + 0x2d0) = uVar5;
    *(undefined1 *)(param_1 + 0x3ac) = 0;
    if ((longlong)*(int *)(param_1 + 0x314) == -1) {
      if (param_4 == (longlong *)0x0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      lVar10 = (**(code **)(*(longlong *)*param_4 + 8))();
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(lVar10 + 0x24);
      lVar10 = (**(code **)(*(longlong *)*param_4 + 8))();
      iVar6 = *(int *)(lVar10 + 0x28);
    }
    else {
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      lVar10 = (**(code **)(**(longlong **)(param_3 + (longlong)*(int *)(param_1 + 0x314) * 0x18) +
                           8))();
      bVar1 = *(byte *)(param_3 + 8 + (longlong)*(int *)(param_1 + 0x314) * 0x18);
      iVar11 = *(int *)(lVar10 + 0x24) >> (bVar1 & 0x1f);
      iVar11 = iVar11 + (uint)(iVar11 == 0);
      iVar6 = *(int *)(lVar10 + 0x28) >> (bVar1 & 0x1f);
      iVar6 = iVar6 + (uint)(iVar6 == 0);
      *(int *)(param_1 + 0x304) = iVar11;
      *(int *)(param_1 + 0x2f0) = iVar11;
      *(int *)(param_1 + 0x308) = iVar6;
    }
    *(int *)(param_1 + 0x2f4) = iVar6;
  }
  return;
}



// FUNCTION 1473e71bc FUN_1473e71bc body=2380 status=ok
// SIG undefined FUN_1473e71bc(void)

int FUN_1473e71bc(longlong param_1,uint param_2,longlong *param_3,longlong param_4,ulonglong param_5
                 ,longlong param_6,int param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  HGLRC pHVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_1f8 [32];
  ulonglong local_1d8;
  longlong local_1d0;
  int local_1c8;
  byte local_1c0;
  longlong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong local_188;
  int local_180;
  int local_17c;
  undefined1 *local_178;
  int *local_170;
  undefined1 local_164 [4];
  undefined1 local_160 [192];
  ulonglong local_a0;
  uint local_98;
  char local_94;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  uVar10 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1a8 = param_4;
  FUN_1431c98f3();
  lVar7 = *(longlong *)(param_1 + 0x15008);
  pHVar6 = wglGetCurrentContext();
  local_1c0 = 1;
  if (pHVar6 != *(HGLRC *)(lVar7 + 0x40)) {
    if (pHVar6 == *(HGLRC *)(lVar7 + 0x10)) {
      local_1c0 = 0;
    }
    else {
      local_1c0 = pHVar6 == (HGLRC)0x0 | 0xfe;
    }
  }
  local_1c8 = param_7;
  local_1d0 = param_6;
  local_1d8 = param_5;
  FUN_1473ec6b2(local_160,uVar10,param_3,local_1a8);
  uVar4 = FUN_1448eb174(local_160,0xc0,0);
  uVar9 = ((uint)(local_a0 >> 0x14) & 0xffff ^ (uint)(local_a0 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  iVar5 = FUN_1473f7c3e(uVar9 >> 0x10 ^ (int)local_94 ^ uVar4 ^ local_98 ^ uVar9,local_160);
  lVar7 = (longlong)iVar5 * 0xe0 + DAT_14ca79a10;
  if ((lVar7 != 0 && iVar5 != -1) && (iVar5 = *(int *)(lVar7 + 0xd0), iVar5 != 0)) {
    iVar5 = iVar5 + -1;
    goto LAB_1473e730d;
  }
  if (param_3 == (longlong *)0x0) {
    bVar16 = false;
  }
  else {
    lVar7 = *param_3;
    bVar16 = lVar7 != 0;
    if ((param_2 != 0) && (lVar7 != 0)) {
      if ((*(longlong *)(lVar7 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(lVar7 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(lVar7,1);
      }
      iVar5 = 0;
      if (*(int *)(lVar7 + 0x68) == 0) goto LAB_1473e730d;
      bVar16 = true;
    }
  }
  (*DAT_14ca7fb58)(1,&local_17c);
  (*DAT_14ca7fb60)(0x8d40,local_17c);
  local_198 = param_3;
  local_188 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca79820) && (FUN_144b3d300(&DAT_14ca79820), DAT_14ca79820 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"vr.MobileMultiView",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14ca79818 = 0;
    }
    else {
      DAT_14ca79818 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14ca79820);
  }
  if ((DAT_14ca79818 != 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002)) {
    FUN_144a61b4f();
  }
  plVar8 = local_198;
  iVar5 = -1;
  local_1a0 = uVar10;
  if ((bool)(-1 < (int)(param_2 - 1) & bVar16)) {
    uVar10 = (ulonglong)(param_2 - 1);
    local_1b0 = param_5 + uVar10 * 4;
    local_190 = local_1a8 + uVar10 * 4;
    iVar12 = param_2 + 0x8cdf;
    lVar7 = 0xffffffff;
    lVar11 = 0;
    do {
      lVar2 = plVar8[uVar10 + lVar11];
      if (lVar2 != 0) {
        lVar7 = uVar10 + lVar11;
        iVar5 = (int)lVar11;
        if ((local_1a8 == 0) || (iVar14 = *(int *)(local_190 + lVar11 * 4), iVar14 == -1)) {
          iVar15 = *(int *)(lVar2 + 0x6c);
          if (iVar15 < 0x8d41) {
            if (iVar15 < 0x8513) {
              if (iVar15 == 0xde1) goto LAB_1473e759b;
              if (iVar15 == 0x806f) goto LAB_1473e760a;
            }
            else if ((iVar15 == 0x8513) || (iVar15 == 0x8c1a)) goto LAB_1473e760a;
            goto LAB_1473e772c;
          }
          if (iVar15 < 0x9009) goto LAB_1473e7534;
          if (iVar15 != 0x9009) goto LAB_1473e758e;
LAB_1473e760a:
          uVar1 = *(undefined4 *)(local_1b0 + lVar11 * 4);
          if ((*(longlong *)(lVar2 + 0x78) != 0) &&
             ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
            FUN_1431cefae(lVar2,1);
          }
          (*DAT_14ca7fb80)(0x8d40,iVar12 + iVar5,*(undefined4 *)(lVar2 + 0x68),uVar1);
        }
        else {
          iVar15 = *(int *)(lVar2 + 0x6c);
          if (iVar15 < 0x8d41) {
            if (iVar15 < 0x8513) {
              if (iVar15 == 0xde1) {
LAB_1473e759b:
                if (1 < param_7) {
                  if ((*(longlong *)(lVar2 + 0x78) != 0) &&
                     ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
                    FUN_1431cefae(lVar2,1);
                  }
                  FUN_144a81018(local_160,"static FOpenGLBase::FramebufferTexture2DMultisample");
                  FUN_140033559(".\\Runtime/OpenGLDrv/Private\\OpenGLBase.h",200,
                                L"%s is not supported.",local_58);
                  if (local_60 != 0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1473e7640;
                }
                uVar1 = *(undefined4 *)(local_1b0 + lVar11 * 4);
                if ((*(longlong *)(lVar2 + 0x78) != 0) &&
                   ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
                  FUN_1431cefae(lVar2,1);
                  iVar15 = *(int *)(lVar2 + 0x6c);
                }
                uVar13 = *(undefined4 *)(lVar2 + 0x68);
                local_1d8 = CONCAT44(local_1d8._4_4_,uVar1);
LAB_1473e7690:
                (*DAT_14ca7fea8)(0x8d40,iVar12 + iVar5,iVar15,uVar13);
                goto LAB_1473e7640;
              }
              if (iVar15 == 0x806f) {
                uVar1 = *(undefined4 *)(local_1b0 + lVar11 * 4);
                uVar13 = 0x806f;
                if ((*(longlong *)(lVar2 + 0x78) != 0) &&
                   ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
                  FUN_1431cefae(lVar2,1,0x806f);
                  uVar13 = *(undefined4 *)(lVar2 + 0x6c);
                }
                local_1d0 = CONCAT44(local_1d0._4_4_,iVar14);
                local_1d8 = CONCAT44(local_1d8._4_4_,uVar1);
                (*DAT_14ca7feb0)(0x8d40,iVar12 + iVar5,uVar13,*(undefined4 *)(lVar2 + 0x68));
                goto LAB_1473e7640;
              }
            }
            else {
              if (iVar15 == 0x8513) {
                uVar1 = *(undefined4 *)(local_1b0 + lVar11 * 4);
                if ((*(longlong *)(lVar2 + 0x78) != 0) &&
                   ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
                  FUN_1431cefae(lVar2,1);
                  iVar14 = *(int *)(local_190 + lVar11 * 4);
                }
                uVar13 = *(undefined4 *)(lVar2 + 0x68);
                iVar15 = iVar14 + 0x8515;
                local_1d8 = CONCAT44(local_1d8._4_4_,uVar1);
                goto LAB_1473e7690;
              }
              if (iVar15 == 0x8c1a) goto LAB_1473e76ec;
            }
LAB_1473e772c:
            if ((*(longlong *)(lVar2 + 0x78) != 0) &&
               ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
              FUN_1431cefae(lVar2,1);
            }
            (*DAT_14ca7fcb0)(0x8d40,iVar12 + iVar5,0x8d41,*(undefined4 *)(lVar2 + 0x68));
          }
          else if (iVar15 < 0x9009) {
LAB_1473e7534:
            if (iVar15 != 0x8d41) {
              if (iVar15 == 0x8d65) goto LAB_1473e759b;
              goto LAB_1473e772c;
            }
            FUN_1431c998b(lVar2);
            pcVar3 = DAT_14ca7fcb0;
            if ((*(longlong *)(lVar2 + 0x78) != 0) &&
               ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
              FUN_1431cefae(lVar2,1);
            }
            (*pcVar3)(0x8d40,iVar12 + iVar5,0x8d41,*(undefined4 *)(lVar2 + 0x68));
          }
          else {
            if (iVar15 != 0x9009) {
LAB_1473e758e:
              if (iVar15 != 0x9100) goto LAB_1473e772c;
              goto LAB_1473e759b;
            }
LAB_1473e76ec:
            uVar1 = *(undefined4 *)(local_1b0 + lVar11 * 4);
            if ((*(longlong *)(lVar2 + 0x78) != 0) &&
               ((*(byte *)(*(longlong *)(lVar2 + 0x78) + 0x10) & 1) == 0)) {
              FUN_1431cefae(lVar2,1);
            }
            local_1d8 = CONCAT44(local_1d8._4_4_,iVar14);
            (*DAT_14ca7feb8)(0x8d40,iVar12 + iVar5,*(undefined4 *)(lVar2 + 0x68),uVar1);
          }
        }
      }
LAB_1473e7640:
      iVar5 = (int)lVar7;
      lVar2 = uVar10 + lVar11;
      lVar11 = lVar11 + -1;
    } while (0 < lVar2);
  }
  plVar8 = local_198;
  uVar10 = local_1a0;
  if (param_6 == 0) goto LAB_1473e77ca;
  iVar12 = *(int *)(param_6 + 0x6c);
  if (iVar12 < 0x8d41) {
    if (iVar12 < 0x8513) {
      if (iVar12 == 0xde1) goto LAB_1473e796c;
      if (iVar12 == 0x806f) goto LAB_1473e79ad;
    }
    else if ((iVar12 == 0x8513) || (iVar12 == 0x8c1a)) {
LAB_1473e79ad:
      if ((*(longlong *)(param_6 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(param_6 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(param_6,1);
      }
      (*DAT_14ca7fb80)(0x8d40,*(undefined4 *)(param_6 + 0x70),*(undefined4 *)(param_6 + 0x68),0);
      goto LAB_1473e77ca;
    }
LAB_1473e7a61:
    if ((*(longlong *)(param_6 + 0x78) != 0) &&
       ((*(byte *)(*(longlong *)(param_6 + 0x78) + 0x10) & 1) == 0)) {
      FUN_1431cefae(param_6,1);
    }
    (*DAT_14ca7fcb0)(0x8d40,*(undefined4 *)(param_6 + 0x70),0x8d41,*(undefined4 *)(param_6 + 0x68));
  }
  else {
    if (0x9008 < iVar12) {
      if (iVar12 == 0x9009) goto LAB_1473e79ad;
      if (iVar12 == 0x9100) goto LAB_1473e796c;
      goto LAB_1473e7a61;
    }
    if (iVar12 == 0x8d41) {
      FUN_1431c998b(param_6);
      pcVar3 = DAT_14ca7fcb0;
      if ((*(longlong *)(param_6 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(param_6 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(param_6,1);
      }
      (*pcVar3)(0x8d40,0x8d00,0x8d41,*(undefined4 *)(param_6 + 0x68));
      pcVar3 = DAT_14ca7fcb0;
      if ((*(longlong *)(param_6 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(param_6 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(param_6,1);
      }
      (*pcVar3)(0x8d40,0x8d20,0x8d41,*(undefined4 *)(param_6 + 0x68));
    }
    else {
      if (iVar12 != 0x8d65) goto LAB_1473e7a61;
LAB_1473e796c:
      if ((*(longlong *)(param_6 + 0x78) != 0) &&
         ((*(byte *)(*(longlong *)(param_6 + 0x78) + 0x10) & 1) == 0)) {
        FUN_1431cefae(param_6,1);
        iVar12 = *(int *)(param_6 + 0x6c);
      }
      local_1d8 = local_1d8 & 0xffffffff00000000;
      (*DAT_14ca7fea8)(0x8d40,*(undefined4 *)(param_6 + 0x70),iVar12,*(undefined4 *)(param_6 + 0x68)
                      );
    }
  }
LAB_1473e77ca:
  if (iVar5 == -1) {
    (*DAT_14ca7fe98)(0);
    (*DAT_14ca7fea0)(0);
    if (param_6 == 0) {
      (*DAT_14ca7fb98)(1,&local_17c);
      local_17c = 0;
      (*DAT_14ca7fb60)(0x8d40,0);
    }
  }
  else {
    (*DAT_14ca7fe98)(iVar5 + 0x8ce0);
    (*DAT_14ca7fea0)(iVar5 + 0x8ce0);
  }
  FUN_1431c98f3();
  local_180 = local_17c + 1;
  lVar7 = *(longlong *)(local_188 + 0x15008);
  pHVar6 = wglGetCurrentContext();
  local_1c0 = 1;
  if (pHVar6 != *(HGLRC *)(lVar7 + 0x40)) {
    if (pHVar6 == *(HGLRC *)(lVar7 + 0x10)) {
      local_1c0 = 0;
    }
    else {
      local_1c0 = pHVar6 == (HGLRC)0x0 | 0xfe;
    }
  }
  local_1c8 = param_7;
  local_1d0 = param_6;
  local_1d8 = param_5;
  FUN_1473ec6b2(local_160,uVar10 & 0xffffffff,plVar8,local_1a8);
  local_170 = &local_180;
  local_178 = local_160;
  FUN_1473f7d0e(local_164);
  iVar5 = local_17c;
LAB_1473e730d:
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1473e7b0c FUN_1473e7b0c body=574 status=ok
// SIG undefined FUN_1473e7b0c(void)

void FUN_1473e7b0c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  undefined4 *puVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_148 [32];
  byte local_128;
  undefined4 local_120;
  byte local_118;
  undefined4 local_110;
  byte local_102;
  byte local_101;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_f0 [8];
  undefined4 local_e8 [34];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8 = (longlong *)(param_2 + 400);
  local_100 = param_1;
  FUN_1473e6f5e(param_1,*(undefined4 *)(param_2 + 0xc0),param_2);
  iVar2 = *(int *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85072 * 0x3c);
  bVar12 = *(byte *)(param_2 + 0xc4);
  local_101 = *(byte *)(param_2 + 0x1b0);
  local_102 = *(byte *)(param_2 + 0x1b1);
  if (0 < *(int *)(param_2 + 0xc0)) {
    puVar11 = local_e8 + 3;
    pcVar8 = (char *)(param_2 + 0x10);
    lVar7 = 0;
    do {
      cVar1 = *pcVar8;
      local_f0[lVar7] = cVar1 == '\x02';
      if (*(longlong **)(pcVar8 + -0x10) != (longlong *)0x0) {
        lVar4 = (**(code **)(**(longlong **)(pcVar8 + -0x10) + 8))();
        uVar13 = *(undefined4 *)(lVar4 + 0xc);
        uVar5 = *(undefined4 *)(lVar4 + 0x10);
        uVar14 = *(undefined4 *)(lVar4 + 0x14);
        uVar15 = *(undefined4 *)(lVar4 + 0x18);
        if (iVar2 < 0) {
          iVar3 = *(int *)(lVar4 + 8);
          bVar12 = bVar12 | *pcVar8 == '\0';
          local_f0[lVar7] = cVar1 == '\x02' || *pcVar8 == '\0';
          if (iVar3 != 1) {
            uVar13 = 0;
            uVar5 = 0;
            uVar14 = 0;
            uVar15 = 0x3f800000;
          }
        }
        else if (cVar1 != '\x02') goto LAB_1473e7c27;
        puVar11[-3] = uVar13;
        puVar11[-2] = uVar5;
        puVar11[-1] = uVar14;
        *puVar11 = uVar15;
      }
LAB_1473e7c27:
      lVar7 = lVar7 + 1;
      puVar11 = puVar11 + 4;
      pcVar8 = pcVar8 + 0x18;
    } while (lVar7 < *(int *)(param_2 + 0xc0));
  }
  if ((longlong *)*local_f8 == (longlong *)0x0) {
    uVar5 = 0;
    uVar13 = 0;
    bVar9 = local_102;
    bVar10 = local_101;
  }
  else {
    lVar7 = (**(code **)(*(longlong *)*local_f8 + 8))();
    uVar13 = *(undefined4 *)(lVar7 + 0xc);
    uVar5 = *(undefined4 *)(lVar7 + 0x10);
    if (iVar2 < 0) {
      bVar9 = local_102 | *(char *)(param_2 + 0x19a) == '\0';
      bVar10 = local_101 | *(char *)(param_2 + 0x198) == '\0';
      if (*(int *)(lVar7 + 8) != 2) goto LAB_1473e7cf1;
    }
    else {
      bVar9 = local_102;
      bVar10 = local_101;
      if (((local_101 | local_102) & 1) == 0) {
LAB_1473e7cf1:
        uVar5 = 0;
        uVar13 = 0;
      }
    }
  }
  if (((bVar12 & 1) == 0) && (bVar9 == 0)) {
    if (bVar10 == 0) goto LAB_1473e7c9b;
    bVar10 = 1;
    local_118 = 0;
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = local_f0;
    if ((bVar12 & 1) == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    local_118 = bVar12 ^ 1 | bVar9;
  }
  local_118 = local_118 & 1;
  local_128 = bVar10;
  local_120 = uVar13;
  local_110 = uVar5;
  FUN_1473e7d4c(local_100,puVar6,*(undefined4 *)(param_2 + 0xc0),local_e8);
LAB_1473e7c9b:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473e7d4c FUN_1473e7d4c body=593 status=ok
// SIG undefined FUN_1473e7d4c(void)

void FUN_1473e7d4c(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,char param_5,
                  undefined4 param_6,char param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  HGLRC pHVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 unaff_R15;
  ulonglong uVar11;
  
  uVar3 = *(undefined8 *)(param_1 + 0x2d8);
  uVar4 = *(undefined8 *)(param_1 + 0x2e0);
  cVar2 = *(char *)(param_1 + 0x2d4);
  if ((*(char *)(param_1 + 0x15018) == '\x01') && (*(longlong *)(param_1 + 0x15030) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15030) + 0x10);
    *piVar1 = *piVar1 + 1;
  }
  lVar10 = *(longlong *)(param_1 + 0x14fa0);
  if (lVar10 == 0) {
    lVar5 = *(longlong *)(param_1 + 0x15008);
    pHVar7 = wglGetCurrentContext();
    lVar10 = param_1 + 0x14200;
    if (pHVar7 == *(HGLRC *)(lVar5 + 0x40)) {
      lVar10 = param_1 + 0x148d0;
    }
    *(longlong *)(param_1 + 0x14fa0) = lVar10;
  }
  FUN_1473e84b6(param_1,lVar10);
  if ((((cVar2 == '\0') && (*(int *)(param_1 + 0x2e8) == 0)) && (*(int *)(param_1 + 0x2ec) == 0)) &&
     ((*(int *)(param_1 + 0x2f0) == *(int *)(param_1 + 0x304) &&
      (*(int *)(param_1 + 0x2f4) == *(int *)(param_1 + 0x308))))) {
    bVar6 = false;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d4) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    bVar6 = true;
  }
  FUN_1473e858a(param_1,lVar10);
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),4);
    if (0 < (int)param_3) {
      puVar8 = (uint *)(lVar10 + 0xa4);
      uVar9 = 0;
      do {
        if ((*(char *)(param_2 + uVar9) == '\x01') && ((~*puVar8 & 0xf) != 0)) {
          (*DAT_14ca7fd80)(uVar9 & 0xffffffff,1,1,1,1);
          *(byte *)puVar8 = (byte)*puVar8 | 0xf;
        }
        uVar9 = uVar9 + 1;
        puVar8 = puVar8 + 9;
      } while (param_3 != uVar9);
    }
  }
  if (((param_5 != '\0') && (*(longlong *)(param_1 + 0x398) != 0)) &&
     (uVar11 = uVar11 | 1, *(char *)(lVar10 + 0x4d) == '\0')) {
    (*DAT_14ca7fbf8)(1);
    *(undefined1 *)(lVar10 + 0x4d) = 1;
  }
  if (((param_7 != '\0') && (*(longlong *)(param_1 + 0x398) != 0)) &&
     (uVar11 = uVar11 | 2, *(int *)(lVar10 + 0x7c) != -1)) {
    (*DAT_14ca7fc28)(0xffffffff);
    *(undefined4 *)(lVar10 + 0x7c) = 0xffffffff;
  }
  FUN_1473e8892(uVar11 & 0xffffffff,(ulonglong)param_3,param_2,param_4,param_6,param_8);
  if (bVar6) {
    *(char *)(param_1 + 0x2d4) = cVar2;
    *(int *)(param_1 + 0x2d8) = (int)uVar3;
    *(int *)(param_1 + 0x2dc) = (int)((ulonglong)uVar3 >> 0x20);
    *(int *)(param_1 + 0x2e0) = (int)uVar4;
    *(int *)(param_1 + 0x2e4) = (int)((ulonglong)uVar4 >> 0x20);
  }
  return;
}



// FUNCTION 1473e7f9e FUN_1473e7f9e body=366 status=ok
// SIG undefined FUN_1473e7f9e(void)

void FUN_1473e7f9e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x14640) == param_2) {
    *(undefined4 *)(param_1 + 0x14640) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14d10) == param_2) {
    *(undefined4 *)(param_1 + 0x14d10) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14648) == param_2) {
    *(undefined4 *)(param_1 + 0x14648) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14d18) == param_2) {
    *(undefined4 *)(param_1 + 0x14d18) = 0xffffffff;
  }
  if (*(uint *)(param_1 + 0x148c0) != 0) {
    piVar7 = (int *)(param_1 + 0x147c0);
    uVar5 = 0;
    uVar6 = *(uint *)(param_1 + 0x148c0);
    do {
      if (((uVar6 & 1) != 0) && (*piVar7 == param_2)) {
        (*DAT_14ca7fda0)(uVar5 & 0xffffffff,0,0,0);
        piVar7[0] = 0;
        piVar7[1] = 0;
        piVar7[2] = 0;
      }
      if (0xe < uVar5) break;
      uVar5 = uVar5 + 1;
      piVar7 = piVar7 + 4;
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
  }
  if (*(uint *)(param_1 + 0x14f90) != 0) {
    piVar7 = (int *)(param_1 + 0x14e90);
    uVar5 = 0;
    uVar6 = *(uint *)(param_1 + 0x14f90);
    do {
      if (((uVar6 & 1) != 0) && (*piVar7 == param_2)) {
        (*DAT_14ca7fda0)(uVar5 & 0xffffffff,0,0,0);
        piVar7[0] = 0;
        piVar7[1] = 0;
        piVar7[2] = 0;
      }
      if (0xe < uVar5) break;
      uVar5 = uVar5 + 1;
      piVar7 = piVar7 + 4;
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
  }
  iVar1 = *(int *)(param_1 + 0x158);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x150);
      if ((*(int *)(lVar2 + lVar4) == 0) && (*(int *)(lVar2 + 4 + lVar4) == param_2)) {
        *(undefined4 *)(lVar2 + 4 + lVar4) = 0;
      }
      lVar4 = lVar4 + 0x14;
    } while ((longlong)iVar1 * 0x14 != lVar4);
  }
  if (*(int *)(param_1 + 0x14644) == param_2) {
    *(undefined4 *)(param_1 + 0x14644) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x14d14) == param_2) {
    *(undefined4 *)(param_1 + 0x14d14) = 0xffffffff;
  }
  return;
}



// FUNCTION 1473e810c FUN_1473e810c body=305 status=ok
// SIG undefined FUN_1473e810c(void)

void FUN_1473e810c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x78);
  if (DAT_14ca7a384 == '\x01') {
    FUN_1431c391e(*(undefined8 *)(param_1 + 0x4e0),lVar1,0,param_1 + 0x4f8,
                  *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x88) + 0x108);
    FUN_1431c391e(*(longlong *)(param_1 + 0x4e0) + 0xb0,lVar1,1,param_1 + 0x648,
                  *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x90) + 0x108);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x98);
    if (lVar2 != 0) {
      FUN_1431c391e(*(longlong *)(param_1 + 0x4e0) + 0x160,lVar1,2,param_1 + 0x6b8,lVar2 + 0x108);
    }
  }
  if (lVar1 != *(longlong *)(param_1 + 0x4d8)) {
    FUN_1431c3bfc(*(undefined8 *)(param_1 + 0x4e0),lVar1,0);
    FUN_1431c3bfc(*(longlong *)(param_1 + 0x4e0) + 0xb0,lVar1,1);
    if (*(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x98) != 0) {
      FUN_1431c3bfc(*(longlong *)(param_1 + 0x4e0) + 0x160,lVar1,2);
    }
    *(longlong *)(param_1 + 0x4d8) = lVar1;
  }
  return;
}



// FUNCTION 1473e823e FUN_1473e823e body=403 status=ok
// SIG undefined FUN_1473e823e(void)

void FUN_1473e823e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_2c;
  uint local_24;
  longlong local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(short *)(param_1 + 0x8f0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x88), lVar1 != 0)) {
    local_30 = 0;
    local_18 = 1;
    local_2c = (ulonglong)DAT_14c760ce0 << 0x20;
    local_24 = DAT_14c760ce8;
    local_20 = (ulonglong)DAT_14c760cc0 << 0x20;
    local_38 = param_1;
    FUN_1473f557d(&local_38,lVar1,param_1 + 0x8f0,param_1 + 0x4f8);
  }
  if ((*(short *)(param_1 + 0x8f6) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x90), lVar1 != 0)) {
    local_30 = 3;
    local_18 = 1;
    local_2c = 1;
    local_24 = DAT_14c760ce0;
    local_20 = (ulonglong)DAT_14c760cc0 << 0x20;
    local_38 = param_1;
    FUN_1473f557d(&local_38,lVar1,param_1 + 0x8f6,param_1 + 0x648);
  }
  if ((*(short *)(param_1 + 0x8f8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x98), lVar1 != 0)) {
    local_30 = 4;
    local_18 = 1;
    local_2c = CONCAT44(DAT_14c760ce8 + DAT_14c760ce0,2);
    local_24 = DAT_14c760cb4;
    local_20 = 0;
    local_38 = param_1;
    FUN_1473f557d(&local_38,lVar1,param_1 + 0x8f8,param_1 + 0x6b8);
  }
  *(undefined1 *)(param_1 + 0x8ee) = 0;
  *(undefined2 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8f6) = 0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e83d2 FUN_1473e83d2 body=128 status=ok
// SIG undefined FUN_1473e83d2(void)

void FUN_1473e83d2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 5;
  local_18 = 1;
  local_2c = 5;
  local_24 = DAT_14c760ce4;
  local_20 = 0;
  local_1c = DAT_14c760cbc;
  local_38 = param_1;
  FUN_1473f557d(&local_38,param_2,param_1 + 0x8fa,param_1 + 0x728);
  *(undefined2 *)(param_1 + 0x8fa) = 0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e8454 FUN_1473e8454 body=98 status=ok
// SIG undefined FUN_1473e8454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473e8454(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_14ca795c0;
  lVar3 = (longlong)DAT_14ca795c8;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      (*DAT_14ca7fe80)(*(undefined8 *)(lVar1 + lVar2));
      lVar2 = lVar2 + 8;
    } while (lVar3 * 8 != lVar2);
  }
  DAT_14ca795c8 = 0;
  if (DAT_14ca795cc < 0) {
    FUN_1473ef64e();
  }
  _DAT_14ca795d0 = 0;
  return;
}



// FUNCTION 1473e84b6 FUN_1473e84b6 body=210 status=ok
// SIG undefined FUN_1473e84b6(void)

void FUN_1473e84b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  int local_48 [10];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 0x1a8) != *(int *)(param_1 + 0x2d0)) {
    if (*(int *)(param_1 + 0x2d0) == 0) {
      (*DAT_14ca7fb60)(0x8d40,0);
      (*DAT_14ca7fe98)(0x405);
      (*DAT_14ca7fea0)(0x405);
    }
    else {
      (*DAT_14ca7fb60)();
      iVar3 = *(int *)(param_1 + 0x314) + 0x8ce0;
      if (*(int *)(param_1 + 0x314) < 0) {
        iVar3 = 0;
      }
      (*DAT_14ca7fe98)(iVar3);
      lVar2 = (longlong)DAT_14ca79810;
      if (0 < lVar2) {
        lVar1 = 0;
        do {
          iVar3 = (int)lVar1 + 0x8ce0;
          if (*(longlong *)(param_1 + 0x318 + lVar1 * 8) == 0) {
            iVar3 = 0;
          }
          local_48[lVar1] = iVar3;
          lVar1 = lVar1 + 1;
        } while (lVar2 != lVar1);
      }
      (*DAT_14ca7fec8)(lVar2,local_48);
    }
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_1 + 0x2d0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e858a FUN_1473e858a body=206 status=ok
// SIG undefined FUN_1473e858a(void)

void FUN_1473e858a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  
  cVar3 = *(char *)(param_2 + 0x414);
  if (cVar3 != *(char *)(param_1 + 0x2d4)) {
    puVar5 = &DAT_14ca7fbc8;
    if (*(char *)(param_1 + 0x2d4) != '\0') {
      puVar5 = &DAT_14ca7fbb8;
    }
    (*(code *)*puVar5)(0xc11);
    cVar3 = *(char *)(param_1 + 0x2d4);
    *(char *)(param_2 + 0x414) = cVar3;
  }
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 0x2d8);
    if (*(int *)(param_2 + 0x418) == iVar1) {
      iVar2 = *(int *)(param_2 + 0x41c);
      iVar4 = *(int *)(param_1 + 0x2dc);
      if (((iVar2 == *(int *)(param_1 + 0x2dc)) &&
          (iVar4 = iVar2, *(int *)(param_2 + 0x420) == *(int *)(param_1 + 0x2e0))) &&
         (*(int *)(param_2 + 0x424) == *(int *)(param_1 + 0x2e4))) {
        return;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2dc);
    }
    (*DAT_14ca7fc80)(iVar1,iVar4,*(int *)(param_1 + 0x2e0) - iVar1,*(int *)(param_1 + 0x2e4) - iVar4
                    );
    *(undefined8 *)(param_2 + 0x418) = *(undefined8 *)(param_1 + 0x2d8);
    *(undefined8 *)(param_2 + 0x420) = *(undefined8 *)(param_1 + 0x2e0);
  }
  return;
}



// FUNCTION 1473e8658 FUN_1473e8658 body=435 status=ok
// SIG undefined FUN_1473e8658(void)

void FUN_1473e8658(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4e8) + 0x78) + 0xc0);
  if (*(int *)(param_2 + 0x1b8) != iVar3) {
    (*DAT_14ca7fe18)(iVar3);
    *(int *)(param_2 + 0x1b8) = iVar3;
    lVar4 = *(longlong *)(param_1 + 0x4e0);
    lVar5 = lVar4 + 0x3c;
    lVar6 = 0;
    do {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar5 + -4 + lVar8 * 8) = 0;
        *(uint *)(lVar5 + lVar8 * 8) = *(uint *)(lVar6 * 0xb0 + lVar4 + 0xa8) >> 4;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 7);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xb0;
    } while (lVar6 != 5);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
  }
  if (((*(char *)(param_1 + 0x8e8) != '\0') || (*(char *)(param_1 + 0x8eb) != '\0')) ||
     (*(char *)(param_1 + 0x8ec) == '\x01')) {
    lVar5 = *(longlong *)(param_1 + 0x4e8);
    if (*(longlong *)(lVar5 + 0x98) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)*(byte *)(*(longlong *)(lVar5 + 0x98) + 0xed);
    }
    bVar1 = *(byte *)(*(longlong *)(lVar5 + 0x88) + 0xed);
    bVar2 = *(byte *)(*(longlong *)(lVar5 + 0x90) + 0xed);
    if (*(char *)(param_1 + 0x8e8) != '\0') {
      FUN_1473ee1fe(param_1,param_2,bVar1,param_1 + 0x4f8,param_1 + 0x798,0,0);
    }
    if (*(char *)(param_1 + 0x8eb) == '\x01') {
      FUN_1473ee1fe(param_1,param_2,bVar2,param_1 + 0x648,param_1 + 0x840,(uint)bVar1,0);
    }
    if ((-1 < (int)uVar7) && (*(char *)(param_1 + 0x8ec) == '\x01')) {
      FUN_1473ee1fe(param_1,param_2,uVar7,param_1 + 0x6b8,param_1 + 0x878,(uint)bVar2 + (uint)bVar1,
                    0);
    }
    *(undefined1 *)(param_1 + 0x8e8) = 0;
    *(undefined2 *)(param_1 + 0x8eb) = 0;
  }
  return;
}



// FUNCTION 1473e880c FUN_1473e880c body=133 status=ok
// SIG undefined FUN_1473e880c(void)

void FUN_1473e880c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (DAT_14ca79598 != 0) {
    iVar2 = *(int *)(param_1 + 0x1a8);
    if (*(int *)(param_1 + 0x1a8) == DAT_14ca795d4) {
      DAT_14ca795d0 = DAT_14ca795d0 + 1;
      if (DAT_14ca795d0 < DAT_14ca79598) {
        return;
      }
      uVar3 = (*DAT_14ca7fe88)(0x9117,0);
      uVar1 = DAT_14ca795c8;
      lVar4 = (longlong)(int)DAT_14ca795c8;
      DAT_14ca795c8 = DAT_14ca795c8 + 1;
      if (DAT_14ca795cc < DAT_14ca795c8) {
        FUN_1473ef68e(uVar1);
      }
      *(undefined8 *)(DAT_14ca795c0 + lVar4 * 8) = uVar3;
      iVar2 = DAT_14ca795d4;
    }
    DAT_14ca795d4 = iVar2;
    DAT_14ca795d0 = 0;
  }
  return;
}



// FUNCTION 1473e8892 FUN_1473e8892 body=218 status=ok
// SIG undefined FUN_1473e8892(void)

void FUN_1473e8892(byte param_1,uint param_2,longlong param_3,longlong param_4,undefined4 param_5,
                  undefined4 param_6)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((0 < (int)param_2) && ((param_1 & 4) != 0)) && (param_3 != 0)) {
    uVar1 = 0;
    do {
      if (*(char *)(param_3 + uVar1) == '\x01') {
        (*DAT_14ca7fdd8)(0x1800,uVar1 & 0xffffffff,param_4);
      }
      uVar1 = uVar1 + 1;
      param_4 = param_4 + 0x10;
    } while (param_2 != uVar1);
  }
  if ((param_1 & 3) != 0) {
    local_34 = param_6;
    local_38 = param_5;
    if ((param_1 & 3) == 1) {
      (*DAT_14ca7fdd8)(0x1801,0,&local_38);
    }
    else if ((param_1 & 3) == 2) {
      (*DAT_14ca7fde8)(0x1802,0,&local_34);
    }
    else {
      (*DAT_14ca7fde0)(0x84f9,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e896e FUN_1473e896e body=145 status=ok
// SIG undefined FUN_1473e896e(void)

void FUN_1473e896e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_14ca85164 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001473e897f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca7fe30)();
    return;
  }
  puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar2 = puVar1 + 3;
  if (DAT_14ca85108 < puVar2) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar1 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar2 = puVar1 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar2;
  *DAT_14ca85130 = puVar1;
  DAT_14ca85130 = puVar1 + 1;
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a371250;
  return;
}



// FUNCTION 1473e8a08 FUN_1473e8a08 body=473 status=ok
// SIG undefined FUN_1473e8a08(void)

void FUN_1473e8a08(longlong param_1,longlong param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_2 + 0xe3) & 0x10) == 0) {
    lVar1 = param_1 + -0x18;
    local_50 = *(undefined8 *)(param_2 + 0x40);
    local_58 = *(undefined8 *)(param_2 + 0x28);
    FUN_1431c478e(lVar1,&local_48,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
    lVar4 = local_48;
    FUN_1473e5466(param_1,local_48);
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar4);
      }
    }
    lVar4 = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(lVar4 + 0x40);
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar9 = *(undefined8 *)(lVar4 + 0x38);
    *(undefined8 *)(param_1 + 0x17c) = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(param_1 + 0x184) = uVar9;
    *(undefined8 *)(param_1 + 0x16c) = uVar7;
    *(undefined8 *)(param_1 + 0x174) = uVar8;
    *(undefined8 *)(param_1 + 0x15c) = uVar5;
    *(undefined8 *)(param_1 + 0x164) = uVar6;
    *(undefined4 *)(param_1 + 400) = param_3;
    lVar4 = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar4 + 0x20);
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x150) = uVar5;
    memcpy((void *)(param_1 + 0x194),(void *)(*(longlong *)(param_2 + 0x48) + 0x4c),0x124);
    if ((DAT_14ca84e1e == '\x01') && (DAT_14ca7fe08 != 0)) {
      puVar10 = &DAT_14ca7fbc8;
      if (*(char *)(param_2 + 0xdd) != '\0') {
        puVar10 = &DAT_14ca7fbb8;
      }
      (*(code *)*puVar10)(0x8890);
    }
    if (param_4 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x20);
      if (lVar4 != 0) {
        local_40 = *(undefined1 *)(lVar4 + 0x9c);
        local_48 = lVar1;
        FUN_1473f5845(lVar4,param_1 + 0x14f90);
      }
      lVar4 = *(longlong *)(param_2 + 0x40);
      if (lVar4 != 0) {
        local_40 = *(undefined1 *)(lVar4 + 0x9c);
        local_48 = lVar1;
        FUN_1473f5913(lVar4,param_1 + 0x14f90);
      }
      lVar4 = *(longlong *)(param_2 + 0x28);
      if (lVar4 != 0) {
        local_40 = *(undefined1 *)(lVar4 + 0x9c);
        local_48 = lVar1;
        FUN_1473f59e1(lVar4,param_1 + 0x14f90);
      }
    }
    *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_2 + 0x70);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e8c0a FUN_1473e8c0a body=173 status=ok
// SIG undefined FUN_1473e8c0a(void)

void FUN_1473e8c0a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca79518 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x4d8);
    if (lVar3 != param_2) {
      *(longlong *)(param_1 + 0x4d8) = param_2;
      if (param_2 != 0) {
        LOCK();
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    if (param_2 != 0) {
      local_28 = param_1 + -0x18;
      local_20 = *(undefined1 *)(param_2 + 0x9c);
      FUN_1473f5aaf(param_2,param_1 + 0x14f90);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e8cb8 FUN_1473e8cb8 body=419 status=ok
// SIG undefined FUN_1473e8cb8(void)

void FUN_1473e8cb8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  HGLRC pHVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca79518 == 0) {
    lVar5 = param_1 + -0x18;
    lVar2 = *(longlong *)(param_1 + 0x4d8);
    local_50 = lVar2;
    FUN_1473e8e5c(lVar5,lVar2);
    lVar6 = *(longlong *)(param_1 + 0x14f88);
    if (lVar6 == 0) {
      lVar3 = *(longlong *)(param_1 + 86000);
      pHVar4 = wglGetCurrentContext();
      lVar6 = param_1 + 0x141e8;
      if (pHVar4 == *(HGLRC *)(lVar3 + 0x40)) {
        lVar6 = param_1 + 0x148b8;
      }
      *(longlong *)(param_1 + 0x14f88) = lVar6;
    }
    if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x1c);
      *piVar1 = *piVar1 + 1;
      lVar3 = *(longlong *)(param_1 + 0x15018);
      *(undefined4 *)(lVar3 + 0x20) = param_2;
      *(undefined4 *)(lVar3 + 0x24) = param_3;
      *(undefined4 *)(lVar3 + 0x28) = param_4;
    }
    FUN_1473e8ffe(lVar5,lVar6,lVar2);
    FUN_1473e83d2(lVar5,lVar2);
    FUN_1473e9112(lVar5,lVar6,&local_50,DAT_14c760ce4);
    FUN_1473e59a8(lVar5,lVar6,*(longlong *)(lVar2 + 0x130) + 0x98,
                  *(undefined4 *)(*(longlong *)(lVar2 + 0x130) + 0xbc));
    lVar5 = *(longlong *)(param_1 + 0x4c8) + 0x370;
    local_58 = lVar2 + 0x110;
    FUN_1431c391e(lVar5,*(undefined8 *)(lVar2 + 0x130),5,param_1 + 0x710);
    FUN_1431c3bfc(lVar5,*(undefined8 *)(lVar2 + 0x130),5);
    *(undefined8 *)(param_1 + 0x4c0) = 0;
    (*DAT_14ca7fdf0)(0xffffffff);
    (*DAT_14ca7fdf8)(param_2,param_3,param_4);
    (*DAT_14ca7fdf0)(0xffffffff);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e8e5c FUN_1473e8e5c body=416 status=ok
// SIG undefined FUN_1473e8e5c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1473e8e5c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  HGLRC pHVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0 [13];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0[0] = param_2;
  if (*(longlong *)(param_2 + 0x130) == 0) {
    local_a0[0xb] = 0;
    local_a0[0xc] = 0;
    local_a0[9] = 0;
    local_a0[10] = 0;
    local_a0[7] = 0;
    local_a0[8] = 0;
    local_a0[5] = 0;
    local_a0[6] = 0;
    local_a0[3] = 0;
    local_a0[4] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_38 = 0;
    local_34 = *(undefined4 *)(param_2 + 0x88);
    uStack_30 = *(undefined4 *)(param_2 + 0x8c);
    uStack_2c = *(undefined4 *)(param_2 + 0x90);
    uStack_28 = *(undefined4 *)(param_2 + 0x94);
    local_24 = *(undefined4 *)(param_2 + 0x98);
    FUN_1431cbefb();
    lVar2 = FUN_1473eea30(local_a0 + 1,1);
    *(longlong *)(param_2 + 0x130) = lVar2;
    if (lVar2 == 0) {
      cVar1 = FUN_1473ebafa(local_a0 + 1);
      if (cVar1 == '\0') {
        lVar2 = *(longlong *)(param_2 + 0x130);
      }
      else {
        FUN_1431cbefb();
        lVar2 = FUN_1473eea30(local_a0 + 1,1);
        *(longlong *)(param_2 + 0x130) = lVar2;
      }
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x14fa0);
        if (lVar2 == 0) {
          lVar5 = *(longlong *)(param_1 + 0x15008);
          pHVar3 = wglGetCurrentContext();
          lVar2 = param_1 + 0x14200;
          if (pHVar3 == *(HGLRC *)(lVar5 + 0x40)) {
            lVar2 = param_1 + 0x148d0;
          }
          *(longlong *)(param_1 + 0x14fa0) = lVar2;
        }
        *(undefined4 *)(lVar2 + 0x1b8) = 0xffffffff;
        lVar2 = *(longlong *)(param_1 + 0x4e0);
        lVar5 = 0;
        do {
          *(undefined4 *)(lVar2 + 0x3a8 + lVar5 * 8) = 0;
          *(uint *)(lVar2 + 0x3ac + lVar5 * 8) = *(uint *)(lVar2 + 0x418) >> 4;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 7);
        *(undefined8 *)(param_1 + 0x4d8) = 0;
        uVar4 = FUN_14001cc68(0x2a8,0x10);
        FUN_1431cbfa0(uVar4,param_2);
        *(undefined8 *)(param_2 + 0x130) = uVar4;
        goto LAB_1473e8e87;
      }
    }
    FUN_1473eeaac(lVar2,local_a0);
  }
LAB_1473e8e87:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e8ffe FUN_1473e8ffe body=274 status=ok
// SIG undefined FUN_1473e8ffe(void)

void FUN_1473e8ffe(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined1 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_3;
  FUN_1431cbefb();
  FUN_1473eec1a(*(undefined8 *)(param_3 + 0x130));
  FUN_1473eeaac(*(undefined8 *)(param_3 + 0x130),&local_38);
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x130) + 0xc0);
  iVar2 = *(int *)(param_2 + 0x1b8);
  if (iVar2 != iVar1) {
    (*DAT_14ca7fe18)();
    *(int *)(param_2 + 0x1b8) = iVar1;
    lVar3 = *(longlong *)(param_1 + 0x4e0);
    lVar4 = 0;
    do {
      *(undefined4 *)(lVar3 + 0x3a8 + lVar4 * 8) = 0;
      *(uint *)(lVar3 + 0x3ac + lVar4 * 8) = *(uint *)(lVar3 + 0x418) >> 4;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 7);
    *(undefined8 *)(param_1 + 0x4d8) = 0;
  }
  if (*(char *)(param_1 + 0x8ed) == '\x01') {
    local_58 = param_1 + 0x8b0;
    local_48 = iVar2 != iVar1;
    local_50 = 0;
    FUN_1473ee1fe(param_1,param_2,*(undefined1 *)(param_3 + 0xf5),param_1 + 0x728);
    *(undefined1 *)(param_1 + 0x8ed) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e9112 FUN_1473e9112 body=499 status=ok
// SIG undefined FUN_1473e9112(void)

void FUN_1473e9112(longlong param_1,longlong param_2,longlong *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(*param_3 + 0x130);
  uVar6 = *(uint *)(lVar4 + 0xb8);
  if ((int)uVar6 < 0) {
    uVar7 = (ulonglong)(uVar6 + 1);
  }
  else {
    uVar7 = (ulonglong)uVar6 + 1;
    lVar3 = 0;
    uVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + 0x88);
      if (*(longlong *)(lVar4 + 0x88) == 0) {
        lVar2 = lVar4 + 0x78;
      }
      if ((*(uint *)(lVar2 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
        if (*(int *)(*(longlong *)(param_2 + 8) + 0x14 + lVar3) != 0 ||
            *(int *)(*(longlong *)(param_2 + 8) + 0x10 + lVar3) != 0) {
          FUN_1473e5556(param_1,param_2,uVar8 & 0xffffffff,0,0,0xffffffff,1);
        }
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x130);
        iVar5 = *(int *)(lVar2 + 0x10 + lVar3);
        iVar1 = *(int *)(lVar2 + 0x14 + lVar3);
        if ((*(int *)(*(longlong *)(param_2 + 8) + 0x10 + lVar3) != iVar5) ||
           (*(int *)(*(longlong *)(param_2 + 8) + 0x14 + lVar3) != iVar1)) {
          FUN_1473e5556(param_1,param_2,uVar8 & 0xffffffff,iVar5,iVar1,
                        *(undefined4 *)(lVar2 + 0x18 + lVar3),*(undefined4 *)(lVar2 + 0x20 + lVar3))
          ;
          iVar5 = *(int *)(lVar2 + 0x10 + lVar3);
        }
        if (iVar5 == 0x8d65) {
          (*DAT_14ca7ff58)(uVar8 & 0xffffffff,0);
          *(undefined8 *)(*(longlong *)(param_2 + 0x18) + uVar8 * 8) = 0;
          FUN_1473f5428(param_2,uVar8 & 0xffffffff,lVar2 + lVar3);
        }
        else {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x140) + uVar8 * 8);
          if (*(longlong *)(*(longlong *)(param_2 + 0x18) + uVar8 * 8) != lVar2) {
            (*DAT_14ca7ff58)(uVar8 & 0xffffffff);
            *(longlong *)(*(longlong *)(param_2 + 0x18) + uVar8 * 8) = lVar2;
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar7 != uVar8);
  }
  if ((int)uVar7 < (int)param_4) {
    lVar4 = (longlong)(int)uVar7 * 0x28 + 0x14;
    do {
      if (*(int *)(*(longlong *)(param_2 + 8) + lVar4) != 0 ||
          *(int *)(*(longlong *)(param_2 + 8) + -4 + lVar4) != 0) {
        FUN_1473e5556(param_1,param_2,uVar7 & 0xffffffff,0,0,0xffffffff,1);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      lVar4 = lVar4 + 0x28;
    } while (param_4 != uVar6);
  }
  return;
}



// FUNCTION 1473e9306 FUN_1473e9306 body=435 status=ok
// SIG undefined FUN_1473e9306(void)

void FUN_1473e9306(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  HGLRC pHVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = param_1 + -0x18;
  lVar2 = *(longlong *)(param_1 + 0x4d8);
  local_48 = lVar2;
  FUN_1473e8e5c(lVar6,lVar2);
  lVar5 = *(longlong *)(param_1 + 0x14f88);
  if (lVar5 == 0) {
    lVar3 = *(longlong *)(param_1 + 86000);
    pHVar4 = wglGetCurrentContext();
    lVar5 = param_1 + 0x141e8;
    if (pHVar4 == *(HGLRC *)(lVar3 + 0x40)) {
      lVar5 = param_1 + 0x148b8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar5;
  }
  if ((*(char *)(param_1 + 0x15000) == '\x01') && (*(longlong *)(param_1 + 0x15018) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x15018) + 0x1c);
    *piVar1 = *piVar1 + 1;
    lVar3 = *(longlong *)(param_1 + 0x15018);
    *(undefined1 **)(lVar3 + 0x20) = &DAT_100000001;
    *(undefined4 *)(lVar3 + 0x28) = 1;
  }
  FUN_1473e8ffe(lVar6,lVar5,lVar2);
  FUN_1473e83d2(lVar6,lVar2);
  FUN_1473e9112(lVar6,lVar5,&local_48,DAT_14c760ce4);
  FUN_1473e59a8(lVar6,lVar5,*(longlong *)(lVar2 + 0x130) + 0x98,
                *(undefined4 *)(*(longlong *)(lVar2 + 0x130) + 0xbc));
  lVar6 = *(longlong *)(param_1 + 0x4c8) + 0x370;
  local_58 = lVar2 + 0x110;
  FUN_1431c391e(lVar6,*(undefined8 *)(lVar2 + 0x130),5,param_1 + 0x710);
  FUN_1431c3bfc(lVar6,*(undefined8 *)(lVar2 + 0x130),5);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  (*DAT_14ca7fba8)(0x90ee,*(undefined4 *)(param_2 + 0x38));
  (*DAT_14ca7fdf0)(0xffffffff);
  (*DAT_14ca7fe00)(param_3);
  (*DAT_14ca7fdf0)(0xffffffff);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001473e94b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca7fba8)(0x90ee,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e94ba FUN_1473e94ba body=34 status=ok
// SIG undefined FUN_1473e94ba(void)

void FUN_1473e94ba(void)

{
  FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLCommands.cpp",0xb44,
                L"OpenGL Render path does not support multiple Viewports!");
  return;
}



// FUNCTION 1473e94fe FUN_1473e94fe body=35 status=ok
// SIG undefined FUN_1473e94fe(void)

undefined8 FUN_1473e94fe(void)

{
  FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLCommands.cpp",0xb65,
                L"FOpenGLDynamicRHI::RHIGetCommandContext should never be called. OpenGL RHI does not implement parallel command list execution."
               );
  return 0;
}



// FUNCTION 1473e9536 FUN_1473e9536 body=304 status=ok
// SIG undefined FUN_1473e9536(void)

void FUN_1473e9536(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  uint param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  (*DAT_14ca7fba8)(0x8f37,*(undefined4 *)(param_3 + 0x18));
  if (*(uint *)(param_3 + 0x1c) < param_5) {
    if ((DAT_14ca7fd10 == (code *)0x0) || (DAT_14c760ccc == 0)) {
      (*DAT_14ca7fc78)(0x8f37,param_5,0,0x88e1);
    }
    else {
      if (*(longlong *)(param_3 + 0x20) != 0) {
        puVar1 = (undefined4 *)(param_3 + 0x18);
        (*DAT_14ca7fe10)(0x8f37);
        (*DAT_14ca7fbb0)(1,puVar1);
        (*DAT_14ca7fc70)(1,puVar1);
        (*DAT_14ca7fba8)(0x8f37,*puVar1);
      }
      (*DAT_14ca7fd10)(0x8f37,param_5,0,0xc1);
      uVar2 = (*DAT_14ca7fd18)(0x8f37,0,param_5,0xc1);
      *(undefined8 *)(param_3 + 0x20) = uVar2;
    }
    *(uint *)(param_3 + 0x1c) = param_5;
  }
  (*DAT_14ca7fba8)(0x8f36,*(undefined4 *)(param_2 + 0x38));
  (*DAT_14ca7fd20)(0x8f36,0x8f37,param_4,0,param_5);
  (*DAT_14ca7fba8)(0x8f36,0);
                    /* WARNING: Could not recover jumptable at 0x0001473e9663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fba8)(0x8f37,0);
  return;
}



// FUNCTION 1473e9666 FUN_1473e9666 body=791 status=ok
// SIG undefined FUN_1473e9666(void)

void FUN_1473e9666(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_178 [12];
  undefined1 auStack_16c [4];
  undefined1 auStack_168 [16];
  undefined4 local_158 [2];
  undefined4 uStack_150;
  byte local_14c [288];
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (-1 < *(int *)(param_1 + 0x14a70)) {
    (*DAT_14ca7fe18)();
  }
  (*DAT_14ca7fbd8)(*(int *)(param_1 + 0x14ce0),*(int *)(param_1 + 0x14ce4),
                   *(int *)(param_1 + 0x14ce8) - *(int *)(param_1 + 0x14ce0),
                   *(int *)(param_1 + 0x14cec) - *(int *)(param_1 + 0x14ce4));
  (*DAT_14ca7fd30)((double)*(float *)(param_1 + 0x14cf0),(double)*(float *)(param_1 + 0x14cf4));
  puVar4 = &DAT_14ca7fbc8;
  if (*(char *)(param_1 + 0x14ccc) != '\0') {
    puVar4 = &DAT_14ca7fbb8;
  }
  (*(code *)*puVar4)(0xc11);
  (*DAT_14ca7fc80)(*(int *)(param_1 + 0x14cd0),*(int *)(param_1 + 0x14cd4),
                   *(int *)(param_1 + 0x14cd8) - *(int *)(param_1 + 0x14cd0),
                   *(int *)(param_1 + 0x14cdc) - *(int *)(param_1 + 0x14cd4));
  if (-1 < *(int *)(param_1 + 0x14a60)) {
    (*DAT_14ca7fb60)(0x8d40);
  }
  if (-1 < *(int *)(param_1 + 0x14cf8)) {
    (*DAT_14ca7fba8)(0x8892);
  }
  if (-1 < *(int *)(param_1 + 0x14cfc)) {
    (*DAT_14ca7fba8)(0x8893);
  }
  lVar2 = param_1 + 0x148b8;
  (*DAT_14ca7fba8)(0x88ec,*(undefined4 *)(param_1 + 0x14d04));
  (*DAT_14ca7fba8)(0x8a11,*(undefined4 *)(param_1 + 0x14d08));
  local_2c = 0;
  lVar1 = 0x20;
  do {
    auStack_16c[lVar1] = 0;
    *(undefined8 *)((longlong)local_158 + lVar1) = 0;
    *(undefined4 *)((longlong)&uStack_150 + lVar1) = 0;
    *(undefined8 *)(auStack_168 + lVar1) = 0;
    *(undefined8 *)(auStack_168 + lVar1 + 5) = 0;
    local_14c[lVar1] = local_14c[lVar1] & 0xf0;
    lVar1 = lVar1 + 0x24;
  } while (lVar1 != 0x140);
  memcpy((void *)(param_1 + 0x1493c),local_14c,0x124);
  memcpy((void *)(param_1 + 0x1426c),local_14c,0x124);
  (*DAT_14ca7fbe0)(0x84c0);
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x14cc8) = 0;
  *(undefined4 *)(param_1 + 0x145f8) = 0;
  *(undefined4 *)(param_1 + 0x148f0) = 0x1b02;
  *(undefined8 *)(param_1 + 0x148f4) = 0;
  *(undefined8 *)(param_1 + 0x148f9) = 0;
  *(undefined4 *)(param_1 + 0x14220) = *(undefined4 *)(param_1 + 0x148f0);
  *(undefined8 *)(param_1 + 0x14224) = *(undefined8 *)(param_1 + 0x148f4);
  *(undefined4 *)(param_1 + 0x1422c) = *(undefined4 *)(param_1 + 0x148fc);
  *(undefined4 *)(param_1 + 0x14230) = *(undefined4 *)(param_1 + 0x14900);
  FUN_1473e515a(param_1 + -0x18,lVar2);
  *(undefined4 *)(param_1 + 0x14f78) = 0;
  *(undefined4 *)(param_1 + 0x148a8) = 0;
  uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),0xff);
  memset((void *)(param_1 + 0x143a4),(int)uVar5,0x120);
  memset((void *)(param_1 + 0x14a74),(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff),0x120);
  puVar9 = (undefined4 *)(param_1 + 0x14e80);
  do {
    iVar3 = puVar9[-2];
    if (iVar3 == 0) {
      iVar3 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = puVar9[-1];
      uVar7 = *puVar9;
    }
    (*DAT_14ca7fda0)(uVar6 & 0xffffffff,iVar3,uVar7,uVar8);
    uVar6 = uVar6 + 1;
    puVar9 = puVar9 + 4;
  } while (uVar6 != 0x10);
  puVar9 = (undefined4 *)(param_1 + 0x14d38);
  uVar6 = 0;
  do {
    if ((((*(uint *)(param_1 + 0x14f7c) >> ((uint)uVar6 & 0x1f) & 1) != 0) &&
        ((ulonglong)(uint)puVar9[3] < 0x10)) &&
       (lVar2 = (ulonglong)(uint)puVar9[3] * 0x10, *(int *)(param_1 + 0x14e78 + lVar2) != 0)) {
      if (*(char *)((longlong)puVar9 + 0x11) == '\0') {
        (*DAT_14ca7fd88)(uVar6 & 0xffffffff,*puVar9,puVar9[1]);
      }
      else {
        local_158[0] = puVar9[2];
        (*DAT_14ca7fd90)(uVar6 & 0xffffffff,*puVar9,puVar9[1],
                         CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(puVar9 + 4)) &
                         0xffffffff);
      }
      (*DAT_14ca7fd98)(uVar6 & 0xffffffff,puVar9[3]);
      (*DAT_14ca7fc50)(uVar6 & 0xffffffff);
    }
    uVar6 = uVar6 + 1;
    puVar9 = puVar9 + 5;
  } while (uVar6 != 0x10);
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473e997e FUN_1473e997e body=109 status=ok
// SIG undefined FUN_1473e997e(void)

void FUN_1473e997e(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  HGLRC pHVar3;
  longlong lVar4;
  
  lVar2 = DAT_14ca79650;
  lVar4 = *(longlong *)(DAT_14ca79650 + 0x14fa0);
  if (lVar4 == 0) {
    lVar1 = *(longlong *)(DAT_14ca79650 + 0x15008);
    pHVar3 = wglGetCurrentContext();
    lVar4 = lVar2 + 0x14200;
    if (pHVar3 == *(HGLRC *)(lVar1 + 0x40)) {
      lVar4 = lVar2 + 0x148d0;
    }
    *(longlong *)(lVar2 + 0x14fa0) = lVar4;
  }
  if (*(int *)(lVar4 + 0x450) != param_1) {
    (*DAT_14ca7fba8)(0x8a11,param_1);
    *(int *)(lVar4 + 0x450) = param_1;
  }
  return;
}



// FUNCTION 1473e99ec FUN_1473e99ec body=51 status=ok
// SIG undefined FUN_1473e99ec(void)

void FUN_1473e99ec(longlong param_1)

{
  FUN_1431c4b26(param_1 + 0x15010);
  FUN_1473e8454();
  FUN_1431d1880();
  FUN_1473e4912();
  FUN_1473e9a20(param_1 + 0x15010);
  return;
}



// FUNCTION 1473e9a20 FUN_1473e9a20 body=248 status=ok
// SIG undefined FUN_1473e9a20(void)

void FUN_1473e9a20(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xb4) = iVar4 + 1;
  if (0 < iVar4) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  cVar1 = DAT_14ca84e99;
  *(char *)(param_1 + 10) = DAT_14ca84e99;
  cVar2 = DAT_14ca84e9a;
  *(char *)(param_1 + 0xb) = DAT_14ca84e9a;
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0xc) == '\x01') {
        FUN_1473ea72e(param_1 + 0xc0);
        DAT_14c867d1c = *(undefined1 *)(param_1 + 0xd);
      }
      goto LAB_1473e9a80;
    }
    *(undefined1 *)(param_1 + 0xd) = DAT_14c867d1c;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 0;
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = DAT_14c867d1c;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      goto LAB_1473e9a80;
    }
  }
  DAT_14c867d1c = 1;
  *(undefined1 *)(param_1 + 8) = 1;
  plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1473ea6ae(plVar3);
  *(longlong **)(param_1 + 0x18) = plVar3;
  (**(code **)(*plVar3 + 8))(plVar3);
LAB_1473e9a80:
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xb);
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0x68) == '\0')) {
    iVar4 = (*(int *)(param_1 + 0x3c) + 1) % *(int *)(param_1 + 0x38);
    FUN_1473ebe22(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar4 * 8));
    *(int *)(param_1 + 0x3c) = iVar4;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



// FUNCTION 1473e9b18 FUN_1473e9b18 body=31 status=ok
// SIG undefined FUN_1473e9b18(void)

void FUN_1473e9b18(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x153b0,0x10);
  FUN_1431c4ff8(uVar1);
  return;
}



// FUNCTION 1473e9b38 FUN_1473e9b38 body=403 status=ok
// SIG undefined FUN_1473e9b38(void)

undefined8 * FUN_1473e9b38(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a370eb0;
  *(undefined4 *)(param_1 + 7) = 0x1b02;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 10) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0x1e0000000207;
  param_1[0xc] = 0x1e0000001e00;
  param_1[0xd] = 0x1e0000000207;
  param_1[0xe] = 0x1e0000001e00;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  lVar1 = 0xa4;
  do {
    *(undefined1 *)((longlong)param_1 + lVar1 + -0x20) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0xc) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -4) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0x17) = 0;
    *(byte *)((longlong)param_1 + lVar1) = *(byte *)((longlong)param_1 + lVar1) & 0xf0;
    lVar1 = lVar1 + 0x24;
  } while (lVar1 != 0x1c4);
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x3a] = 0x3f80000000000000;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dd) = 0;
  param_1[0x3d] = 0xffffffff00000001;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x284) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  memset(param_1 + 0x51,0,0x124);
  memset(param_1 + 0x76,0,0x410);
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  return param_1;
}



// FUNCTION 1473e9ccc FUN_1473e9ccc body=408 status=ok
// SIG undefined FUN_1473e9ccc(void)

undefined8 * FUN_1473e9ccc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a370ef0;
  *(undefined4 *)(param_1 + 7) = 0x1b02;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 10) = 0x201;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0x1e0000000207;
  param_1[0xc] = 0x1e0000001e00;
  param_1[0xd] = 0x1e0000000207;
  param_1[0xe] = 0x1e0000001e00;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  lVar2 = 0xa4;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xc) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -4) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x17) = 0;
    *(byte *)((longlong)param_1 + lVar2) = *(byte *)((longlong)param_1 + lVar2) & 0xf0;
    lVar2 = lVar2 + 0x24;
  } while (lVar2 != 0x1c4);
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x84c0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0x3f80000000000000;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xbf800000bf800000;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xbf800000bf800000;
  *(undefined2 *)((longlong)param_1 + 0x464) = 0xffff;
  param_1[0x8d] = 0xbf800000;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x8f] = 0;
  lVar2 = 0x491;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x11);
    *puVar1 = 0;
    puVar1[1] = 0xffffffff00000000;
    *(undefined2 *)((longlong)param_1 + lVar2 + -1) = 0;
    lVar2 = lVar2 + 0x14;
  } while (lVar2 != 0x5d1);
  memset((void *)((longlong)param_1 + 0x1bc),0,0x240);
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  memset(param_1 + 0xb8,0,0x10c);
  return param_1;
}



// FUNCTION 1473e9e64 FUN_1473e9e64 body=91 status=ok
// SIG undefined FUN_1473e9e64(void)

void FUN_1473e9e64(longlong param_1)

{
  FUN_1473eaa64(param_1 + 0x14200,DAT_14c760d20,DAT_14ca79458);
  FUN_1473eaa64(param_1 + 0x148d0,DAT_14c760d20,DAT_14ca79458);
  FUN_1473f9f14(param_1 + 0x128,DAT_14c760d20,DAT_14ca79458);
  return;
}



// FUNCTION 1473e9ec0 FUN_1473e9ec0 body=52 status=ok
// SIG undefined FUN_1473e9ec0(void)

void FUN_1473e9ec0(longlong param_1)

{
  FUN_1473e9ef4();
  FUN_1473ea050();
  FUN_1473ea0f5();
  FUN_14740060a(*(undefined8 *)(param_1 + 0x15008));
  DAT_14ca79650 = 0;
  return;
}



// FUNCTION 1473e9ef4 FUN_1473e9ef4 body=347 status=ok
// SIG undefined FUN_1473e9ef4(void)

void FUN_1473e9ef4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = DAT_14ca79780;
  if (DAT_14ca84d88 == '\x01') {
    if (DAT_14ca79780 != 0) {
      FUN_1473eae86(DAT_14ca79780);
      FUN_1400020a8(lVar3);
      DAT_14ca79780 = 0;
    }
    DAT_14ca84d88 = '\0';
    FUN_1473ea260(param_1 + 0x15010);
    FUN_145bcc89c();
  }
  lVar3 = *(longlong *)(param_1 + 0x918);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x918) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1473f92fe();
  if (*(int *)(param_1 + 0x300) != 0) {
    (*DAT_14ca7fbb0)(1,(undefined4 *)(param_1 + 0x300));
    *(undefined4 *)(param_1 + 0x300) = 0;
    FUN_1431d279e(0x10000,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x4e8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1473ea2c4(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x14608) = 0;
  if (*(int *)(param_1 + 0x1460c) != 0) {
    FUN_1473efd68(param_1 + 0x14600,0);
  }
  FUN_1473ef7c2(param_1 + 0x14200);
  *(undefined4 *)(param_1 + 0x14cd8) = 0;
  if (*(int *)(param_1 + 0x14cdc) != 0) {
    FUN_1473efd68(param_1 + 0x14cd0,0);
  }
  FUN_1473ef7c2(param_1 + 0x148d0);
  return;
}



// FUNCTION 1473ea050 FUN_1473ea050 body=164 status=ok
// SIG undefined FUN_1473ea050(void)

void FUN_1473ea050(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = 0;
  do {
    iVar1 = *(int *)((longlong)&DAT_14ca797c8 + lVar3);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)((longlong)&DAT_14ca797c0 + lVar3);
      lVar4 = 0;
      do {
        local_3c = *(undefined4 *)(lVar2 + lVar4);
        (*DAT_14ca7fe50)(1,&local_3c);
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
    }
    *(undefined4 *)((longlong)&DAT_14ca797c8 + lVar3) = 0;
    if (*(int *)((longlong)&DAT_14ca797cc + lVar3) < 0) {
      FUN_14480809c((longlong)&DAT_14ca797c0 + lVar3,0);
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x30);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ea0f5 FUN_1473ea0f5 body=362 status=ok
// SIG undefined FUN_1473ea0f5(void)

void FUN_1473ea0f5(void)

{
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1431cbefb();
  FUN_1473eee5e();
  DAT_14ca799a4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
  FUN_1431ca9d4();
  local_30 = 0x100000000;
  local_28 = &DAT_14ca79a78;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca79a90 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_70 = &DAT_14ca79a68;
  local_48 = &DAT_14ca79a68;
  local_40 = &DAT_14ca79a68;
  local_38 = 0;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      (*DAT_14ca7ff30)(*(undefined4 *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x40));
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_1473f87d4(local_40,*(int *)(local_40 + 1) - *(int *)((longlong)local_40 + 0x34));
    }
  }
  FUN_1473f8e50();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ea260 FUN_1473ea260 body=100 status=ok
// SIG undefined FUN_1473ea260(void)

void FUN_1473ea260(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1473ea7de(param_1 + 0x38);
  FUN_1473ea72e(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x78 + lVar2);
    if (lVar1 != 0) {
      FUN_1473ebb46(lVar1);
      FUN_1400020a8(lVar1);
    }
    *(undefined8 *)(param_1 + 0x78 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  return;
}



// FUNCTION 1473ea2c4 FUN_1473ea2c4 body=140 status=ok
// SIG undefined FUN_1473ea2c4(void)

void FUN_1473ea2c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3b8);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) * 0xb0;
      do {
        FUN_1473ef422(lVar1 + -0xb0 + lVar2);
        lVar2 = lVar2 + -0xb0;
      } while (lVar2 != 0);
    }
    thunk_FUN_1400020a8(lVar1 + -8);
  }
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  memset((void *)(param_1 + 0x3d0),0,0x3f0);
  FUN_1473ef7c2(param_1);
  return;
}



// FUNCTION 1473ea350 FUN_1473ea350 body=54 status=ok
// SIG undefined FUN_1473ea350(void)

void FUN_1473ea350(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_1473efd68(param_1 + 0x400,0);
  }
  FUN_1473ef7c2(param_1);
  return;
}



// FUNCTION 1473ea38c FUN_1473ea38c body=44 status=ok
// SIG undefined FUN_1473ea38c(void)

void FUN_1473ea38c(longlong param_1)

{
  FUN_14740015b(*(undefined8 *)(param_1 + 0x15008));
  *(undefined8 *)(param_1 + 0x14fa0) = 0;
  *(undefined1 *)(param_1 + 0x939) = 1;
  return;
}



// FUNCTION 1473ea3b8 FUN_1473ea3b8 body=37 status=ok
// SIG undefined FUN_1473ea3b8(void)

void FUN_1473ea3b8(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x939) = 0;
  FUN_1474008e9();
  *(undefined8 *)(param_1 + 0x14fa0) = 0;
  return;
}



// FUNCTION 1473ea3f6 FUN_1473ea3f6 body=75 status=ok
// SIG undefined FUN_1473ea3f6(void)

undefined4 FUN_1473ea3f6(void)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  (*DAT_14ca7fb40)(0x821b,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ea442 FUN_1473ea442 body=75 status=ok
// SIG undefined FUN_1473ea442(void)

undefined4 FUN_1473ea442(void)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  (*DAT_14ca7fb40)(0x821c,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ea492 FUN_1473ea492 body=60 status=ok
// SIG undefined FUN_1473ea492(void)

undefined4 FUN_1473ea492(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 == (longlong *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  }
  if ((*(longlong *)(lVar1 + 0x78) != 0) &&
     ((*(byte *)(*(longlong *)(lVar1 + 0x78) + 0x10) & 1) == 0)) {
    FUN_1431cefae(lVar1,1);
  }
  return *(undefined4 *)(lVar1 + 0x68);
}



// FUNCTION 1473ea4ce FUN_1473ea4ce body=22 status=ok
// SIG undefined FUN_1473ea4ce(void)

bool FUN_1473ea4ce(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (*DAT_14ca7fc98)(param_2);
  return cVar1 == '\x01';
}



// FUNCTION 1473ea4ec FUN_1473ea4ec body=397 status=ok
// SIG undefined FUN_1473ea4ec(void)

void FUN_1473ea4ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    local_68 = *(undefined4 *)(lVar1 + 0x98);
    local_78 = *(undefined8 *)(lVar1 + 0x88);
    uStack_70 = *(undefined8 *)(lVar1 + 0x90);
  }
  local_48 = local_68;
  local_58 = local_78;
  uStack_50 = uStack_70;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    local_68 = *(undefined4 *)(lVar1 + 0x98);
    local_78 = *(undefined8 *)(lVar1 + 0x88);
    uStack_70 = *(undefined8 *)(lVar1 + 0x90);
  }
  local_34 = local_68;
  local_44 = local_78;
  uStack_3c = uStack_70;
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    local_68 = *(undefined4 *)(lVar1 + 0x98);
    local_78 = *(undefined8 *)(lVar1 + 0x88);
    uStack_70 = *(undefined8 *)(lVar1 + 0x90);
  }
  uVar2 = local_68;
  local_30 = local_78;
  uStack_28 = uStack_70;
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (lVar1 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    local_68 = *(undefined4 *)(lVar1 + 0x98);
    local_78 = *(undefined8 *)(lVar1 + 0x88);
    uStack_70 = *(undefined8 *)(lVar1 + 0x90);
  }
  _local_20 = CONCAT44((undefined4)local_78,uVar2);
  _uStack_18 = CONCAT44((undefined4)uStack_70,local_78._4_4_);
  _local_10 = CONCAT44(local_68,uStack_70._4_4_);
  FUN_1447addd0(&local_58,0x50);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ea68c FUN_1473ea68c body=33 status=ok
// SIG undefined FUN_1473ea68c(void)

bool FUN_1473ea68c(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = memcmp((void *)(param_2 + 8),(void *)(param_3 + 8),0x28);
  return iVar1 == 0;
}



// FUNCTION 1473ea6ae FUN_1473ea6ae body=128 status=ok
// SIG undefined FUN_1473ea6ae(void)

undefined8 * FUN_1473ea6ae(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a370f80;
  param_1[3] = 0xffffffff00000001;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 4;
  param_1[0xb] = puVar1;
  FUN_1473ec0e0(param_1 + 3);
  return param_1;
}



// FUNCTION 1473ea72e FUN_1473ea72e body=96 status=ok
// SIG undefined FUN_1473ea72e(void)

void FUN_1473ea72e(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + lVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1473ea78e FUN_1473ea78e body=80 status=ok
// SIG undefined FUN_1473ea78e(void)

void FUN_1473ea78e(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar2 = 0;
  }
  else {
    memmove((void *)*param_1,(void *)((longlong)*param_1 + 8),
            (longlong)(*(int *)(param_1 + 1) + -1) << 3);
    iVar2 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 1473ea7de FUN_1473ea7de body=280 status=ok
// SIG undefined FUN_1473ea7de(void)

void FUN_1473ea7de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      uVar4 = DAT_14ca797f8;
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      lVar5 = (longlong)(int)DAT_14ca797f8;
      DAT_14ca797f8 = DAT_14ca797f8 + 1;
      if (DAT_14ca797fc < DAT_14ca797f8) {
        FUN_1473f7bb8(&DAT_14ca797f0,uVar4);
      }
      *(undefined8 *)(DAT_14ca797f0 + lVar5 * 8) = uVar3;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      uVar4 = DAT_14ca797f8;
      uVar3 = *(undefined8 *)(lVar2 + lVar6);
      lVar5 = (longlong)(int)DAT_14ca797f8;
      DAT_14ca797f8 = DAT_14ca797f8 + 1;
      if (DAT_14ca797fc < DAT_14ca797f8) {
        FUN_1473f7bb8(&DAT_14ca797f0,uVar4);
      }
      *(undefined8 *)(DAT_14ca797f0 + lVar5 * 8) = uVar3;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_1473f7b58(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_1473f7b58(param_1 + 0x20,0);
    return;
  }
  return;
}



// FUNCTION 1473ea8f6 FUN_1473ea8f6 body=110 status=ok
// SIG undefined FUN_1473ea8f6(void)

void FUN_1473ea8f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_147365bf9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_14736903a(param_1 + 8,0);
  }
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0x48) == '\0')) {
    iVar1 = (*(int *)(param_1 + 0x1c) + 1) % *(int *)(param_1 + 0x18);
    FUN_1473ebe22(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8));
    *(int *)(param_1 + 0x1c) = iVar1;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



// FUNCTION 1473ea964 FUN_1473ea964 body=68 status=ok
// SIG undefined FUN_1473ea964(void)

void FUN_1473ea964(longlong param_1)

{
  int iVar1;
  
  if ((DAT_14ca813bc == '\x01') && (*(char *)(param_1 + 0x48) == '\x01')) {
    FUN_1473ebe22(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x1c) * 8));
    iVar1 = *(int *)(param_1 + 0x20) + 1;
    if (*(int *)(param_1 + 0x18) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x20) = iVar1;
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1473ea9a8 FUN_1473ea9a8 body=93 status=ok
// SIG undefined FUN_1473ea9a8(void)

void FUN_1473ea9a8(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_1431c7cba(param_1 + 0x18,1);
  }
  return;
}



// FUNCTION 1473eaa06 FUN_1473eaa06 body=93 status=ok
// SIG undefined FUN_1473eaa06(void)

void FUN_1473eaa06(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_1431c7cba(param_1 + 0x70,1);
  }
  return;
}



// FUNCTION 1473eaa64 FUN_1473eaa64 body=148 status=ok
// SIG undefined FUN_1473eaa64(void)

void FUN_1473eaa64(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  FUN_1473ef768();
  if (-1 < (int)param_2) {
    plVar1 = (longlong *)(param_1 + 0x400);
    *(undefined4 *)(param_1 + 0x408) = 0;
    iVar3 = 0;
    uVar2 = param_2;
    if (*(uint *)(param_1 + 0x40c) != param_2) {
      FUN_1473efd68(plVar1);
      iVar3 = *(int *)(param_1 + 0x408);
      uVar2 = *(uint *)(param_1 + 0x40c);
    }
    *(uint *)(param_1 + 0x408) = iVar3 + param_2;
    if (uVar2 - iVar3 < param_2) {
      FUN_1473efb20(plVar1);
    }
    memset((void *)((longlong)iVar3 * 8 + *plVar1),0,(ulonglong)param_2 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473eaaf9 FUN_1473eaaf9 body=240 status=ok
// SIG undefined FUN_1473eaaf9(void)

void FUN_1473eaaf9(undefined8 param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  size_t sVar3;
  int iVar4;
  undefined1 auStack_178 [36];
  int local_154;
  undefined1 local_150 [256];
  longlong local_50;
  wchar_t *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_154 = 0;
  FUN_14020fad6(param_1,&DAT_149dfb77a);
  (*DAT_14ca7fb40)(0x821d,&local_154);
  if (0 < local_154) {
    iVar4 = 0;
    do {
      uVar2 = (*DAT_14ca7fe38)(0x1f03,iVar4);
      FUN_1400020e8(param_1,&DAT_149e001d8,1);
      FUN_144a81018(local_150,uVar2);
      pwVar1 = local_48;
      sVar3 = wcslen(local_48);
      FUN_1400020e8(param_1,pwVar1,sVar3 & 0xffffffff);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_154);
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eabea FUN_1473eabea body=254 status=ok
// SIG undefined FUN_1473eabea(void)

void FUN_1473eabea(void)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1473eaaf9(local_28);
  (*DAT_14ca7fbc8)(0xbd0);
  (*DAT_14ca7fbb8)(0x8db9);
  local_30 = 0xffffffff;
  local_38 = 0;
  iVar1 = FUN_1447ee042(local_28,L"GL_ARB_seamless_cube_map",0x18,1);
  if (iVar1 != -1) {
    (*DAT_14ca7fbb8)(0x884f);
  }
  if (DAT_14c760cec != 0) {
    local_30 = 0xffffffff;
    local_38 = 0;
    iVar1 = FUN_1447ee042(local_28,L"GL_ARB_clip_control",0x13,1);
    if ((iVar1 != -1) && (DAT_14ca7c3e0 == '\0')) {
      DAT_14ca7a390 = 1;
      (*DAT_14ca7fca8)(0x8ca2,0x935f);
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eacea FUN_1473eacea body=262 status=ok
// SIG undefined FUN_1473eacea(void)

void FUN_1473eacea(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_3;
  *param_3 = 0;
  uVar2 = (undefined4)param_3[1];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_38 = lVar4;
  local_30 = uVar2;
  local_2c = uVar3;
  if (*(char *)((longlong)param_2 + 100) == '\0') {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar5 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar5 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a371368;
    puVar5[2] = lVar4;
    *(undefined4 *)(puVar5 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
  }
  else {
    FUN_1431cd442(&local_38);
    if (lVar4 != 0) {
      FUN_1400020a8(lVar4);
    }
  }
  FUN_14494c7ac(param_2,&local_40,1);
  if (local_40 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_40 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eadf1 FUN_1473eadf1 body=148 status=ok
// SIG undefined FUN_1473eadf1(void)

bool FUN_1473eadf1(void)

{
  int iVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca79728) {
    FUN_144b3d300(&DAT_14ca79728);
    if (DAT_14ca79728 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca79720 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.OpenGL.StoreCompressedProgramBinaries",1);
      _Init_thread_footer(&DAT_14ca79728);
    }
  }
  iVar1 = (**(code **)(*DAT_14ca79720 + 0xb0))();
  return iVar1 != 0;
}



// FUNCTION 1473eae86 FUN_1473eae86 body=299 status=ok
// SIG undefined FUN_1473eae86(void)

void FUN_1473eae86(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x2b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x15] != 0) {
    FUN_14480f766(&DAT_14ca9f2a8);
  }
  if (param_1[0x16] != 0) {
    FUN_14480f766(&DAT_14ca9f2f0);
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1473eff24(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1473f009e(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1473f6016(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1473f00d2(param_1 + 0xb);
  if (param_1[6] != 0) {
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



// FUNCTION 1473eafb1 FUN_1473eafb1 body=157 status=ok
// SIG undefined FUN_1473eafb1(void)

bool FUN_1473eafb1(void)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca798f8) {
    FUN_144b3d300(&DAT_14ca798f8);
    if (DAT_14ca798f8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca798f0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PSOPrecaching",1);
      _Init_thread_footer(&DAT_14ca798f8);
    }
  }
  if (DAT_14ca798f0 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*DAT_14ca798f0 + 0xb0))();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 1473eb04e FUN_1473eb04e body=223 status=ok
// SIG undefined FUN_1473eb04e(void)

undefined8 FUN_1473eb04e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a369560;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a371370;
  local_30[3] = param_2;
  local_30[4] = FUN_1431c80d0;
  FUN_1473c8e46(&DAT_14ca9f2a8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eb12e FUN_1473eb12e body=223 status=ok
// SIG undefined FUN_1473eb12e(void)

undefined8 FUN_1473eb12e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a369640;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a3713e0;
  local_30[3] = param_2;
  local_30[4] = FUN_1431c818e;
  FUN_1473c90de(&DAT_14ca9f2f0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eb20e FUN_1473eb20e body=83 status=ok
// SIG undefined FUN_1473eb20e(void)

bool FUN_1473eb20e(int *param_1,int *param_2)

{
  char cVar1;
  
  if ((*param_1 != 6) || (cVar1 = FUN_1473eadf1(), (char)param_1[5] != cVar1)) {
    return false;
  }
  if (param_2 != (int *)0x0) {
    if (*param_2 != param_1[1]) {
      return false;
    }
    if (param_2[1] != param_1[2]) {
      return false;
    }
    if (param_2[2] != param_1[3]) {
      return false;
    }
    if (param_2[3] != param_1[4]) {
      return false;
    }
  }
  return param_1[6] != 0;
}



// FUNCTION 1473eb262 FUN_1473eb262 body=198 status=ok
// SIG undefined FUN_1473eb262(void)

undefined8 FUN_1473eb262(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 3) + -1;
  if (*(int *)(param_1 + 3) == 0) {
    iVar1 = 0;
  }
  local_48 = iVar1 + 1 + (uint)(*(int *)(param_1 + 1) == 0);
  local_40 = 0;
  FUN_14125bce8(&local_40,*param_1,*(int *)(param_1 + 1),0);
  FUN_1401aebe8(&local_40,param_1[2],iVar1);
  iVar1 = *(int *)(param_1 + 7) + -1;
  if (*(int *)(param_1 + 7) == 0) {
    iVar1 = 0;
  }
  FUN_1412cfe60(param_2,&local_40,iVar1 + 1 + (uint)(local_38 == 0));
  FUN_1401aebe8(param_2,param_1[6],iVar1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eb32a FUN_1473eb32a body=63 status=ok
// SIG undefined FUN_1473eb32a(void)

void FUN_1473eb32a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1473f604a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1473f62b6(param_1);
    return;
  }
  FUN_1473f6bbe(param_1);
  FUN_1473f604a(param_1);
  return;
}



// FUNCTION 1473eb36a FUN_1473eb36a body=438 status=ok
// SIG undefined FUN_1473eb36a(void)

bool FUN_1473eb36a(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  byte bVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 0x158);
  bVar6 = 1;
  if ((*(byte *)((longlong)plVar4 + 0x29) & 6) == 0) {
    (**(code **)(*plVar4 + 0x1a0))(plVar4,0);
    uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
    local_50 = 6;
    uStack_4c = *(undefined4 *)(param_1 + 0x20);
    iStack_48 = *(int *)(param_1 + 0x24);
    uStack_44 = *(undefined4 *)(param_1 + 0x28);
    uStack_40 = *(undefined4 *)(param_1 + 0x2c);
    local_3c = FUN_1473eadf1();
    local_38 = param_2;
    local_34 = uVar2;
    FUN_1473eb7c4(plVar4,&local_50);
    plVar4 = *(longlong **)(param_1 + 0x158);
    bVar6 = 2;
    if ((*(byte *)((longlong)plVar4 + 0x29) & 2) == 0) {
      bVar6 = *(byte *)((longlong)plVar4 + 0x29) >> 1 & 2;
    }
  }
  (**(code **)(*plVar4 + 0x1f8))(plVar4);
  puVar1 = *(undefined8 **)(param_1 + 0x158);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_1473eb262(param_1,&local_50);
  plVar3 = (longlong *)FUN_1400dbadc();
  plVar4 = (longlong *)*plVar3;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e92164();
    *plVar3 = (longlong)plVar4;
  }
  if (bVar6 != 0) {
    FUN_1446ddc76(local_58,"FailedBinaryProgramArchiveWrite",1);
    if (DAT_14ca83b80 != (longlong *)0x0 && DAT_14ca83b88 != 0) {
      (**(code **)(*DAT_14ca83b80 + 0x60))(DAT_14ca83b80,local_58);
    }
    FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLProgramBinaryFileCache.cpp",0x385,
                  L"CloseCacheWriteHandle - FArchive error bit set, failed to write binary cache. %d"
                  ,bVar6);
  }
  if (param_2 == 0) {
    if (iStack_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)CONCAT44(uStack_4c,local_50);
    }
    (**(code **)(*plVar4 + 0x88))(plVar4,puVar5);
  }
  if (CONCAT44(uStack_4c,local_50) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 != 0;
}



// FUNCTION 1473eb522 FUN_1473eb522 body=466 status=ok
// SIG undefined FUN_1473eb522(void)

longlong *
FUN_1473eb522(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  if ((DAT_14c760cf0 & 1) == 0) goto LAB_1473eb550;
  plVar1 = (longlong *)(param_1 + 0x168);
  param_1 = param_1 + 0x20;
  uVar2 = FUN_1447addd0(param_1,0x10);
  iVar3 = FUN_1473f6d02(plVar1,uVar2,param_1);
  if (iVar3 == -1) {
LAB_1473eb644:
    if ((DAT_14c760cf0 & 1) == 0) {
      local_58 = 0;
    }
    else {
      plVar6 = (longlong *)FUN_1400dbadc();
      plVar4 = (longlong *)*plVar6;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_140e92164();
        *plVar6 = (longlong)plVar4;
      }
      if (*(int *)(param_3 + 1) == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      local_58 = (**(code **)(*plVar4 + 0x188))(plVar4,puVar8);
    }
    lVar7 = FUN_14001cc68(0x80,0x10);
    FUN_1473eb6f6(lVar7,&local_58,param_4);
    if (lVar7 != 0) {
      *param_2 = lVar7;
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    local_50 = param_1;
    local_48 = param_2;
    FUN_1473f6d76(plVar1,local_3c);
  }
  else {
    if ((*plVar1 + (longlong)iVar3 * 0x20 == 0) ||
       (plVar4 = (longlong *)((longlong)iVar3 * 0x20 + *plVar1 + 0x10), plVar4 == (longlong *)0x0))
    goto LAB_1473eb644;
    lVar7 = *plVar4;
    if (lVar7 != 0) {
      *param_2 = lVar7;
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
  }
  if (((DAT_14c760cf0 & 1) != 0) &&
     (plVar1 = *(longlong **)(*param_2 + 0x10), plVar1 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar1 + 8))(plVar1,param_5,param_6,0);
    lVar7 = *param_2;
    *(int *)(lVar7 + 0x28) = (int)param_5;
    iVar3 = *(int *)(lVar7 + 0x20);
    *(uint *)(lVar7 + 0x20) = iVar3 + 1U;
    if (*(uint *)(lVar7 + 0x24) < iVar3 + 1U) {
      FUN_1473f030c((longlong *)(lVar7 + 0x18),iVar3);
    }
    *(undefined8 *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar3 * 8) = uVar5;
  }
LAB_1473eb550:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eb6f6 FUN_1473eb6f6 body=205 status=ok
// SIG undefined FUN_1473eb6f6(void)

undefined8 * FUN_1473eb6f6(undefined8 *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_149e002e8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a370fb0;
  param_1[2] = *param_2;
  *param_2 = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_3 != 0) {
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)param_3);
    }
    FUN_1473f6106(param_1 + 6,param_3);
    iVar2 = 1;
    if (3 < param_3) {
      uVar3 = (param_3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 0xf) == 0) || (*(int *)(param_1 + 0xf) < iVar2)) {
      *(int *)(param_1 + 0xf) = iVar2;
      FUN_1473f62b6(param_1 + 6);
    }
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 1473eb7c4 FUN_1473eb7c4 body=411 status=ok
// SIG undefined FUN_1473eb7c4(void)

longlong * FUN_1473eb7c4(longlong *param_1,int *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *piVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (*param_2 == 6) {
    FUN_1402ac1b3(param_1,param_2 + 1);
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      local_24 = (uint)*(byte *)(param_2 + 5);
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      if (1 < local_24) {
        FUN_14572541c(param_1);
      }
      *(bool *)(param_2 + 5) = local_24 != 0;
    }
    else {
      *(bool *)(param_2 + 5) = *piVar1 != 0;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      param_2[6] = *piVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    param_2 = param_2 + 7;
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
      }
      else {
        FUN_14572512c(param_1,param_2);
      }
    }
    else {
      *param_2 = *piVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eb960 FUN_1473eb960 body=152 status=ok
// SIG undefined FUN_1473eb960(void)

void FUN_1473eb960(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  if (DAT_14ca79780 == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  lVar4 = DAT_14ca79780 + 0xb8;
  uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1,0x78,0);
  iVar3 = FUN_1473f6778(lVar4,uVar2,param_1);
  if (iVar3 == -1) {
    FUN_1431c8f3a(DAT_14ca79780,param_1,*param_2);
    cVar1 = FUN_1473eafb1();
    if (cVar1 != '\0') {
      FUN_1473eb9f8(param_1,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001473eb9c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  return;
}



// FUNCTION 1473eb9f8 FUN_1473eb9f8 body=131 status=ok
// SIG undefined FUN_1473eb9f8(void)

void FUN_1473eb9f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14ca79780 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
    local_38 = param_1;
    local_30 = param_2;
    FUN_1473f796c(DAT_14ca79780 + 0x108,local_24);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eba8e FUN_1473eba8e body=108 status=ok
// SIG undefined FUN_1473eba8e(void)

ulonglong FUN_1473eba8e(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (DAT_14ca79780 == 0) {
    uVar4 = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
    lVar3 = DAT_14ca79780 + 0xb8;
    uVar1 = (*(code *)PTR_FUN_14c75b148)(param_1,0x78,0);
    iVar2 = FUN_1473f6778(lVar3,uVar1,param_1);
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),iVar2 == -1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79730);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1473ebafa FUN_1473ebafa body=76 status=ok
// SIG undefined FUN_1473ebafa(void)

undefined4 FUN_1473ebafa(undefined8 param_1)

{
  undefined4 uVar1;
  
  if (DAT_14ca79780 == 0) {
    uVar1 = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
    uVar1 = FUN_1431c9764(DAT_14ca79780,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79758);
  }
  return uVar1;
}



// FUNCTION 1473ebb46 FUN_1473ebb46 body=139 status=ok
// SIG undefined FUN_1473ebb46(void)

void FUN_1473ebb46(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    DAT_14ca797b8 = DAT_14ca797b8 + -1;
    uVar2 = (ulonglong)(*(byte *)(param_1 + 0x1c) & 6);
    iVar1 = (&DAT_14ca797c8)[uVar2 * 2];
    (&DAT_14ca797c8)[uVar2 * 2] = iVar1 + 1U;
    if ((uint)(&DAT_14ca797cc)[uVar2 * 2] < iVar1 + 1U) {
      FUN_1447808da(&DAT_14ca797c0 + uVar2,iVar1);
    }
    *(undefined4 *)((&DAT_14ca797c0)[uVar2] + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x18)
    ;
  }
  else {
    (*DAT_14ca7fe50)(1,(undefined4 *)(param_1 + 0x18));
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1473ebbd2(param_1);
  return;
}



// FUNCTION 1473ebbd2 FUN_1473ebbd2 body=79 status=ok
// SIG undefined FUN_1473ebbd2(void)

void FUN_1473ebbd2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (DAT_14ca797b0 == param_1) {
      DAT_14ca797b0 = (undefined8 *)0x0;
      if (puVar1 != &DAT_14ca797a8) {
        DAT_14ca797b0 = puVar1 + -1;
      }
      puVar1 = (undefined8 *)*param_1;
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_1[1] = puVar1;
    }
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1[1];
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1473ebc22 FUN_1473ebc22 body=185 status=ok
// SIG undefined FUN_1473ebc22(void)

void FUN_1473ebc22(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  HGLRC pHVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  lVar3 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
  pHVar4 = wglGetCurrentContext();
  if ((pHVar4 == *(HGLRC *)(lVar3 + 0x40)) || (pHVar4 != *(HGLRC *)(lVar3 + 0x10))) {
    while ((DAT_14ca797a8 != 0 && (DAT_14ca84e10 <= DAT_14ca797b8))) {
      FUN_1473ebcdc(DAT_14ca797a8,1);
    }
    DAT_14ca797b8 = DAT_14ca797b8 + 1;
    uVar5 = (ulonglong)(*(byte *)(param_1 + 0x1c) & 6);
    iVar1 = (&DAT_14ca797c8)[uVar5 * 2];
    if ((longlong)iVar1 != 0) {
      uVar2 = *(undefined4 *)((&DAT_14ca797c0)[uVar5] + -4 + (longlong)iVar1 * 4);
      (&DAT_14ca797c8)[uVar5 * 2] = iVar1 + -1;
      FUN_144780a3c();
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473ebcd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fe48)(1,(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1473ebcdc FUN_1473ebcdc body=250 status=ok
// SIG undefined FUN_1473ebcdc(void)

ulonglong FUN_1473ebcdc(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x1e) != *(char *)(param_1 + 0x1d)) {
    if (param_2 == '\0') {
      local_28 = local_28 & 0xffffffff00000000;
      (*DAT_14ca7fe70)(*(undefined4 *)(param_1 + 0x18),0x8867,&local_28);
      if ((int)local_28 == 0) {
        uVar2 = 0;
        goto LAB_1473ebcfd;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x1c) >> 1 & 3;
    if (uVar1 != 3) {
      if ((uVar1 == 0) || (uVar1 == 2)) {
        local_28 = 0;
        (*DAT_14ca7fe78)(*(undefined4 *)(param_1 + 0x18),0x8866,&local_28);
        *(ulonglong *)(param_1 + 0x10) = local_28 / 1000;
      }
      else {
        local_28 = local_28 & 0xffffffff00000000;
        (*DAT_14ca7fe70)(*(undefined4 *)(param_1 + 0x18),0x8866,&local_28);
        *(ulonglong *)(param_1 + 0x10) = local_28 & 0xffffffff;
      }
      FUN_1473ebb46(param_1);
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1e);
    }
  }
LAB_1473ebcfd:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ebdd8 FUN_1473ebdd8 body=73 status=ok
// SIG undefined FUN_1473ebdd8(void)

void FUN_1473ebdd8(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1473ebc22();
  switch(*(uint *)(param_1 + 0x1c) >> 1 & 3) {
  default:
    return;
  case 1:
    uVar1 = 0x8914;
    break;
  case 2:
    uVar1 = 0x88bf;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473ebe1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fe58)(uVar1,*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1473ebe22 FUN_1473ebe22 body=146 status=ok
// SIG undefined FUN_1473ebe22(void)

void FUN_1473ebe22(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_1473ebc22();
  switch(*(uint *)((longlong)param_1 + 0x1c) >> 1 & 3) {
  case 0:
    (*DAT_14ca7fe68)(*(undefined4 *)(param_1 + 3),0x8e28);
    goto switchD_1473ebe45_caseD_3;
  case 1:
    uVar2 = 0x8914;
    break;
  case 2:
    uVar2 = 0x88bf;
    break;
  case 3:
    goto switchD_1473ebe45_caseD_3;
  }
  (*DAT_14ca7fe60)(uVar2);
switchD_1473ebe45_caseD_3:
  *(char *)((longlong)param_1 + 0x1e) = *(char *)((longlong)param_1 + 0x1e) + '\x01';
  FUN_1473ebbd2(param_1);
  if (DAT_14ca797a8 == (undefined8 *)0x0) {
    puVar1 = &DAT_14ca797a8;
    DAT_14ca797a8 = param_1;
  }
  else {
    *(undefined8 **)((longlong)DAT_14ca797b0 + 8) = param_1;
    puVar1 = (undefined8 *)((longlong)DAT_14ca797b0 + 8);
  }
  *param_1 = puVar1;
  DAT_14ca797b0 = param_1;
  return;
}



// FUNCTION 1473ebeb4 FUN_1473ebeb4 body=287 status=ok
// SIG undefined FUN_1473ebeb4(void)

undefined8 FUN_1473ebeb4(longlong param_1,char param_2,undefined8 *param_3)

{
  char cVar1;
  undefined7 uVar4;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (undefined7)(local_20 >> 8);
  if (*(char *)(param_1 + 0x2f) != *(char *)(param_1 + 0x2d)) {
    if (param_2 == '\0') {
      uVar5 = 0;
      uVar2 = 0;
      goto LAB_1473ebede;
    }
    cVar1 = *(char *)(param_1 + 0x2f);
    if (DAT_14ca85164 == '\x01') {
      if (*(char *)(param_1 + 0x2e) != cVar1) {
        FUN_1473ebcdc(param_1 + 0x10,1);
      }
    }
    else {
      puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar3 + 4;
      if (DAT_14ca85108 < puVar6) {
        FUN_140023dd8(&DAT_14ca85100,0x28);
        puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar6 = puVar3 + 4;
      }
      DAT_14ca85160 = DAT_14ca85160 + 1;
      DAT_14ca85100 = puVar6;
      *DAT_14ca85130 = puVar3;
      DAT_14ca85130 = puVar3 + 1;
      puVar3[1] = 0;
      *puVar3 = &PTR_LAB_14a371448;
      *(char *)(puVar3 + 2) = cVar1;
      puVar3[3] = param_1;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,5);
    uVar4 = extraout_var;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = CONCAT71(uVar4,1);
LAB_1473ebede:
  *param_3 = uVar5;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ebfd4 FUN_1473ebfd4 body=138 status=ok
// SIG undefined FUN_1473ebfd4(void)

undefined8 * FUN_1473ebfd4(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if ((param_3 == 2) && (DAT_14ca79450 < 1)) {
    *param_2 = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1c;
    *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    *(byte *)((longlong)puVar1 + 0x2c) =
         *(byte *)((longlong)puVar1 + 0x2c) & 0xf8 | (param_3 == 1) * '\x02';
    *(undefined2 *)((longlong)puVar1 + 0x2d) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f) = 0;
    *puVar1 = &PTR_FUN_14a370fb8;
    *param_2 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 1473ec0a6 FUN_1473ec0a6 body=57 status=ok
// SIG undefined FUN_1473ec0a6(void)

void FUN_1473ec0a6(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    (*DAT_14ca7fe80)();
    *param_1 = 0;
  }
  lVar1 = (*DAT_14ca7fe88)(0x9117,0);
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0001473ec0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca7fe30)();
  return;
}



// FUNCTION 1473ec0e0 FUN_1473ec0e0 body=269 status=ok
// SIG undefined FUN_1473ec0e0(void)

void FUN_1473ec0e0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = DAT_14ca79450;
  if (DAT_14ca813bd == '\0') {
    DAT_14ca813c0 = 1000000000;
    DAT_14ca813bd = '\x01';
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  DAT_14ca813bc = 0 < iVar3;
  if (0 < iVar3) {
    iVar3 = *param_1;
    if (iVar3 < 0) {
LAB_1473ec1d6:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (param_1[7] < iVar3) {
      FUN_1473f7b58(param_1 + 4);
      iVar3 = *param_1;
      if (iVar3 < 0) goto LAB_1473ec1d6;
    }
    if (param_1[0xb] < iVar3) {
      FUN_1473f7b58(param_1 + 8);
      iVar3 = *param_1;
    }
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        uVar2 = FUN_1431c98a0();
        iVar1 = param_1[6];
        param_1[6] = iVar1 + 1U;
        if ((uint)param_1[7] < iVar1 + 1U) {
          FUN_1473f7bb8(param_1 + 4,iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar1 * 8) = uVar2;
        uVar2 = FUN_1431c98a0();
        iVar1 = param_1[10];
        param_1[10] = iVar1 + 1U;
        if ((uint)param_1[0xb] < iVar1 + 1U) {
          FUN_1473f7bb8(param_1 + 8,iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = uVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
  }
  return;
}



// FUNCTION 1473ec22e FUN_1473ec22e body=293 status=ok
// SIG undefined FUN_1473ec22e(void)

void FUN_1473ec22e(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0xa0) & 1) == 0)) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      if ((*(byte *)(puVar2 + 0x14) & 1) == 0) {
        FUN_1473ec364(puVar2);
      }
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    else {
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar4;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a371450;
      puVar3[2] = puVar2;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ec364 FUN_1473ec364 body=305 status=ok
// SIG undefined FUN_1473ec364(void)

void FUN_1473ec364(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  HGLRC pHVar5;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(DAT_14ca7a3c8 + 0x15008);
  pHVar5 = wglGetCurrentContext();
  if ((param_1 != 0) || (pHVar5 == *(HGLRC *)(lVar1 + 0x40))) {
    while (*DAT_14ca79808 != 0) {
      lVar1 = *DAT_14ca79808;
      if (lVar1 + 8 == 0) break;
      lVar2 = *(longlong *)(lVar1 + 8);
      iVar4 = (*DAT_14ca7fe90)(*(undefined8 *)(lVar1 + 0x10),0,-(ulonglong)(lVar2 == param_1));
      if ((iVar4 != 0x911a) && (iVar4 != 0x911c)) {
        if (iVar4 != 0x911b) {
          FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLQuery.cpp",0x34e,
                        L"Waiting on FGLSync fence 0x%p failed.",lVar1 + 8);
        }
        break;
      }
      lVar3 = *(longlong *)(lVar1 + 8);
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      FUN_144a23f14(*(ulonglong *)(lVar3 + 0x80) >> 0x3b & 0xffffffffffffff07,
                    *(undefined4 *)(lVar3 + 0x1c));
      local_31 = 1;
      FUN_1447439e4(lVar3);
      (*DAT_14ca7fe80)(*(undefined8 *)(lVar1 + 0x10));
      FUN_1473ec496();
      if (lVar2 == param_1) break;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473ec496 FUN_1473ec496 body=128 status=ok
// SIG undefined FUN_1473ec496(void)

void FUN_1473ec496(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14ca79808;
  plVar2 = (longlong *)*DAT_14ca79808;
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)plVar2[1];
    DAT_14ca79808 = plVar2;
    plVar2[1] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    plVar2[2] = 0;
    if (plVar4 != (longlong *)0x0) {
      puVar3 = (undefined8 *)plVar4[1];
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      FUN_1400020a8(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1473ec516 FUN_1473ec516 body=296 status=ok
// SIG undefined FUN_1473ec516(void)

void FUN_1473ec516(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)FUN_1446fac86(0xa8);
  FUN_1447247dc(puVar2,0);
  *puVar2 = &PTR_FUN_149e00300;
  FUN_144a24082(puVar2,L"GraphEvent",1,2,0);
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar2;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x20);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    uVar3 = (*DAT_14ca7fe88)(0x9117,0);
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = 0;
    puVar4[1] = puVar2;
    puVar4[2] = uVar3;
    if (puVar4 != (undefined8 *)0x0) {
      *DAT_14ca79800 = puVar4;
      DAT_14ca79800 = puVar4;
    }
  }
  else {
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 3;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x20);
      puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 3;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar5;
    param_2[6] = (ulonglong)(puVar5 + 1);
    puVar5[1] = 0;
    *puVar5 = &PTR_FUN_14a371458;
    puVar5[2] = puVar2;
  }
  return;
}



// FUNCTION 1473ec648 FUN_1473ec648 body=106 status=ok
// SIG undefined FUN_1473ec648(void)

undefined8 * FUN_1473ec648(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  uVar1 = *param_3;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0x1b;
  *(byte *)((longlong)puVar2 + 0xd) = *(byte *)((longlong)puVar2 + 0xd) | 3;
  *puVar2 = &PTR_LAB_14a1e4900;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
  *puVar2 = &PTR_FUN_14a36f510;
  puVar2[4] = 0;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473ec6b2 FUN_1473ec6b2 body=293 status=ok
// SIG undefined FUN_1473ec6b2(void)

longlong *
FUN_1473ec6b2(longlong *param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6,undefined4 param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  param_1[0x18] = param_6;
  *(undefined4 *)(param_1 + 0x19) = param_7;
  *(undefined1 *)((longlong)param_1 + 0xcc) = param_8;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulonglong)param_2;
    uVar4 = 0;
    plVar3 = param_1;
    do {
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      lVar1 = *(longlong *)(param_3 + uVar4 * 8);
      *plVar3 = lVar1;
      uVar2 = 0;
      if (lVar1 != 0) {
        if ((*(longlong *)(lVar1 + 0x78) != 0) &&
           ((*(byte *)(*(longlong *)(lVar1 + 0x78) + 0x10) & 1) == 0)) {
          FUN_1431cefae(lVar1,1);
        }
        uVar2 = *(undefined4 *)(lVar1 + 0x68);
      }
      *(undefined4 *)(plVar3 + 1) = uVar2;
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)(param_5 + uVar4 * 4);
      if (param_4 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *(undefined4 *)(param_4 + uVar4 * 4);
      }
      *(undefined4 *)(plVar3 + 2) = uVar2;
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 3;
    } while (uVar5 != uVar4);
    if (7 < param_2) {
      return param_1;
    }
  }
  plVar3 = param_1 + uVar5 * 3 + 2;
  do {
    uVar5 = uVar5 + 1;
    plVar3[-2] = 0;
    plVar3[-1] = 0;
    *plVar3 = 0;
    *(undefined4 *)plVar3 = 0xffffffff;
    plVar3 = plVar3 + 3;
  } while ((int)uVar5 != 8);
  return param_1;
}



// FUNCTION 1473ec7d7 FUN_1473ec7d7 body=615 status=ok
// SIG undefined FUN_1473ec7d7(void)

void FUN_1473ec7d7(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_178 [36];
  int local_154;
  longlong *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined2 local_118;
  longlong local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar4 = local_138;
  if (param_1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x30))();
    uVar4 = local_138;
    if (lVar5 != 0) {
      FUN_1431c98f3();
      local_110 = 0x100000000;
      local_108 = &DAT_14ca79a20;
      local_100 = 0xffffffff;
      local_f8 = 0;
      if (DAT_14ca79a38 != 0) {
        FUN_1449c0562(&local_110);
      }
      local_138 = local_100;
      uVar4 = local_138;
      local_130 = local_f8;
      local_12c = local_f4;
      local_148 = local_110;
      local_140 = local_108;
      local_150 = &DAT_14ca79a10;
      local_128 = &DAT_14ca79a10;
      local_120 = &DAT_14ca79a10;
      local_118 = 0;
      local_138._4_4_ = (int)((ulonglong)local_100 >> 0x20);
      if (local_138._4_4_ < *(int *)(local_108 + 0x18)) {
        iVar7 = local_138._4_4_;
        local_138 = uVar4;
        do {
          lVar1 = *local_150;
          memcpy(&local_110,(void *)(lVar1 + (longlong)iVar7 * 0xe0),0xd0);
          lVar3 = DAT_14ca7a3c8;
          if (((local_50 == 0) || (*(int *)(local_50 + 0x6c) != *(int *)(lVar5 + 0x6c))) ||
             (*(int *)(local_50 + 0x68) != *(int *)(lVar5 + 0x68))) {
            lVar6 = 0;
            do {
              lVar2 = *(longlong *)((longlong)&local_110 + lVar6);
              if (((lVar2 != 0) && (*(int *)(lVar2 + 0x6c) == *(int *)(lVar5 + 0x6c))) &&
                 (*(int *)(lVar2 + 0x68) == *(int *)(lVar5 + 0x68))) goto LAB_1473ec960;
              lVar6 = lVar6 + 0x18;
            } while (lVar6 != 0xc0);
          }
          else {
LAB_1473ec960:
            iVar7 = *(int *)(lVar1 + 0xd0 + (longlong)iVar7 * 0xe0) + -1;
            local_154 = iVar7;
            if (*(int *)(DAT_14ca7a3c8 + 0x2d0) == iVar7) {
              *(undefined4 *)(DAT_14ca7a3c8 + 0x2d0) = 0;
              memset((void *)(lVar3 + 0x318),0,0x88);
              *(undefined1 *)(lVar3 + 0x3ac) = 1;
            }
            if (*(int *)(lVar3 + 0x143a8) == iVar7) {
              *(undefined4 *)(lVar3 + 0x143a8) = 0xffffffff;
            }
            if (*(int *)(lVar3 + 0x14a78) == iVar7) {
              *(undefined4 *)(lVar3 + 0x14a78) = 0xffffffff;
            }
            (*DAT_14ca7fb98)(1,&local_154);
            FUN_1473f82c2(local_128,local_138._4_4_);
            local_118 = CONCAT11(local_118._1_1_,1);
          }
          local_138 = CONCAT44(local_138._4_4_,(uint)local_138 & ~local_148._4_4_);
          FUN_1449c0562(&local_148);
          iVar7 = local_138._4_4_;
        } while (local_138._4_4_ < *(int *)(local_140 + 0x18));
        uVar4 = local_138;
        if (((local_118 & 1) != 0) && (local_118._1_1_ == '\x01')) {
          FUN_1473f8070(local_120,*(int *)(local_120 + 1) - *(int *)((longlong)local_120 + 0x34));
          uVar4 = local_138;
        }
      }
    }
  }
  local_138 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eca40 FUN_1473eca40 body=2433 status=ok
// SIG undefined FUN_1473eca40(void)

void FUN_1473eca40(undefined8 param_1,longlong param_2,longlong *param_3,int *param_4,
                  longlong *param_5,longlong param_6)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined7 uVar12;
  undefined4 *puVar11;
  undefined4 uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  char cVar19;
  int iVar20;
  byte bVar21;
  longlong **pplVar22;
  float *pfVar23;
  int iVar24;
  undefined4 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  longlong *local_190;
  undefined4 *local_188;
  undefined4 local_180;
  uint local_178;
  undefined4 local_170;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  longlong local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  uint local_12c;
  int local_128;
  int local_124;
  longlong *local_120;
  float local_118 [10];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((param_3 == (longlong *)0x0) ||
     (plVar9 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3), local_120 = plVar9,
     plVar9 == (longlong *)0x0)) goto switchD_1473ecb2a_caseD_5;
  local_124 = 0;
  local_128 = 0;
  lVar10 = (**(code **)(*param_3 + 8))(param_3);
  bVar2 = *(byte *)(lVar10 + 0x33);
  lVar10 = (**(code **)(*param_3 + 8))(param_3);
  uVar12 = (undefined7)
           ((ulonglong)
            ((longlong)&switchD_1473ecb2a::switchdataD_14a371750 +
            (longlong)(int)(&switchD_1473ecb2a::switchdataD_14a371750)[*(byte *)(lVar10 + 0x33) - 1]
            ) >> 8);
  switch((uint)*(byte *)(lVar10 + 0x33)) {
  case 1:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x15:
  case 0x16:
  case 0x1a:
    local_158 = 0x8ce0;
    local_154 = (undefined4)CONCAT71(uVar12,1);
    bVar21 = 0;
    local_15c = 0;
    break;
  default:
    local_158 = 0x8ce0;
    local_15c = 0;
    goto LAB_1473ed322;
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x17:
  case 0x1e:
  case 0x1f:
  case 0x29:
  case 0x2a:
  case 0x2b:
    goto switchD_1473ecb2a_caseD_5;
  case 0xb:
    local_158 = 0x821a;
    bVar21 = 1;
    local_154 = 0;
    local_15c = (undefined4)CONCAT71(uVar12,1);
    break;
  case 0xc:
  case 0x14:
    local_158 = 0x8d00;
    local_15c = (undefined4)CONCAT71(uVar12,1);
LAB_1473ed322:
    bVar21 = 0;
    local_154 = 0;
  }
  local_12c = (uint)*(byte *)(param_6 + 0x11);
  if (((int)plVar9[0xe] == 0x8ce0) || ((int)plVar9[0xe] == 0)) {
    local_198 = &local_12c;
    local_190 = (longlong *)0x0;
    pplVar22 = &local_120;
    uVar17 = 1;
  }
  else {
    local_198 = (uint *)0x0;
    uVar17 = 0;
    pplVar22 = (longlong **)0x0;
    local_190 = plVar9;
  }
  local_188._0_4_ = 1;
  iVar6 = FUN_1473e71bc(param_1,uVar17,pplVar22,0);
  lVar10 = (**(code **)(*param_3 + 8))(param_3);
  if (1 < *(byte *)(lVar10 + 0x31)) {
    (*DAT_14ca7fb58)(1,&local_124);
    (*DAT_14ca7fb60)(0x8d40,local_124);
    (*DAT_14ca7fcb8)(1,&local_128);
    (*DAT_14ca7fcc0)(0x8d41,local_128);
    pcVar5 = DAT_14ca7fcc8;
    lVar10 = (**(code **)(*local_120 + 8))();
    uVar13 = *(undefined4 *)(lVar10 + 0x28);
    lVar10 = (**(code **)(*local_120 + 8))();
    (*pcVar5)(0x8d41,*(undefined4 *)(&DAT_14ca79c40 + (ulonglong)bVar2 * 0x14),
              *(undefined4 *)(lVar10 + 0x24),uVar13);
    (*DAT_14ca7fcc0)(0x8d41,0);
    (*DAT_14ca7fcb0)(0x8d40,local_158,0x8d41,local_128);
    (*DAT_14ca7fb60)(0x8ca8,iVar6);
    local_178 = 0x4000;
    if ((char)local_15c != '\0') {
      local_178 = (uint)bVar21 << 10 | 0x100;
    }
    lVar10 = (**(code **)(*local_120 + 8))();
    uVar13 = *(undefined4 *)(lVar10 + 0x28);
    lVar10 = (**(code **)(*local_120 + 8))();
    uVar3 = *(undefined4 *)(lVar10 + 0x24);
    lVar10 = (**(code **)(*local_120 + 8))();
    uVar4 = *(undefined4 *)(lVar10 + 0x28);
    lVar10 = (**(code **)(*local_120 + 8))();
    local_190 = (longlong *)((ulonglong)local_190 & 0xffffffff00000000);
    local_198 = (uint *)((ulonglong)local_198 & 0xffffffff00000000);
    local_170 = 0x2600;
    local_180 = uVar13;
    local_188._0_4_ = uVar3;
    (*DAT_14ca7fec0)(0,0,*(undefined4 *)(lVar10 + 0x24),uVar4);
    iVar6 = local_124;
  }
  local_14c = param_4[2] - *param_4;
  local_150 = param_4[3] - param_4[1];
  iVar24 = local_150 * local_14c;
  uVar1 = iVar24 * 4;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  iVar20 = 0;
  uVar7 = uVar1;
  local_148 = param_2;
  if (*(uint *)((longlong)param_5 + 0xc) != uVar1) {
    FUN_144893a1c(param_5,uVar1);
    iVar20 = (int)param_5[1];
    uVar7 = *(uint *)((longlong)param_5 + 0xc);
  }
  *(uint *)(param_5 + 1) = iVar20 + uVar1;
  if (uVar7 - iVar20 < uVar1) {
    FUN_1447403be(param_5,iVar20);
  }
  puVar25 = (undefined4 *)((longlong)iVar20 + *param_5);
  (*DAT_14ca7fb60)(0x8ca8,iVar6);
  uVar13 = 0x405;
  if (iVar6 != 0) {
    uVar13 = local_158;
  }
  cVar19 = (char)local_15c;
  if (cVar19 != '\0') {
    uVar13 = local_158;
  }
  if (bVar21 != 0) {
    uVar13 = local_158;
  }
  (*DAT_14ca7fe98)(uVar13);
  (*DAT_14ca7fbe8)(0xd05,1);
  lVar10 = local_148;
  iVar6 = local_14c;
  if (cVar19 == '\0') {
    if ((char)local_154 != '\0') {
      cVar19 = *(char *)(param_6 + 8);
      iVar20 = iVar24 * 4;
      puVar11 = (undefined4 *)FUN_14001cc68((longlong)(iVar24 * 0x10),0);
      iVar24 = local_150;
      local_190 = (longlong *)CONCAT44(local_190._4_4_,0x1406);
      local_198 = (uint *)CONCAT44(local_198._4_4_,0x80e1);
      local_188 = puVar11;
      (*DAT_14ca7fbf0)(*param_4,param_4[1],iVar6,local_150);
      iVar8 = (*DAT_14ca7fcd0)();
      if (iVar8 != 0) {
        local_190 = (longlong *)CONCAT44(local_190._4_4_,0x1406);
        local_198 = (uint *)CONCAT44(local_198._4_4_,0x1908);
        local_188 = puVar11;
        (*DAT_14ca7fbf0)(*param_4,param_4[1],iVar6,iVar24);
        iVar6 = (*DAT_14ca7fcd0)();
        if (iVar6 == 0) {
          if (iVar20 == 0) goto LAB_1473ecf62;
          puVar15 = puVar11;
          do {
            uVar13 = *puVar15;
            *puVar15 = puVar15[2];
            puVar15[2] = uVar13;
            puVar15 = puVar15 + 4;
          } while (puVar15 != puVar11 + iVar20);
        }
      }
      local_118[4] = 0.0;
      local_118[5] = 0.0;
      local_118[6] = 0.0;
      local_118[7] = 0.0;
      local_118[0] = 1.0;
      local_118[1] = 1.0;
      local_118[2] = 1.0;
      local_118[3] = 1.0;
      if (iVar20 < 1) {
        fVar30 = 0.0;
        fVar31 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
      }
      else {
        lVar14 = 0;
        do {
          uVar18 = (ulonglong)(((uint)lVar14 & 3) << 2);
          fVar30 = (float)puVar11[lVar14];
          fVar31 = *(float *)((longlong)local_118 + uVar18 + 0x10);
          fVar36 = fVar30;
          if (fVar31 <= fVar30) {
            fVar36 = fVar31;
          }
          if (fVar30 <= *(float *)((longlong)local_118 + uVar18)) {
            fVar30 = *(float *)((longlong)local_118 + uVar18);
          }
          *(float *)((longlong)local_118 + uVar18 + 0x10) = fVar36;
          *(float *)((longlong)local_118 + uVar18) = fVar30;
          lVar14 = lVar14 + 1;
        } while (iVar20 != (int)lVar14);
        fVar30 = local_118[7];
        fVar31 = local_118[6];
        fVar36 = local_118[5];
        fVar37 = local_118[4];
      }
      if (0 < iVar20 >> 2) {
        fVar34 = local_118[0] - fVar37;
        fVar33 = local_118[1] - fVar36;
        fVar35 = local_118[2] - fVar31;
        fVar32 = local_118[3] - fVar30;
        pfVar23 = (float *)(puVar11 + 3);
        lVar14 = 0;
        do {
          local_140 = (pfVar23[-1] - fVar31) / fVar35;
          local_13c = (pfVar23[-2] - fVar36) / fVar33;
          local_138 = (pfVar23[-3] - fVar37) / fVar34;
          local_134 = (*pfVar23 - fVar30) / fVar32;
          if (cVar19 == '\0') {
            fVar29 = local_134;
            if (local_134 <= 0.0) {
              fVar29 = 0.0;
            }
            if (1.0 <= fVar29) {
              fVar29 = 1.0;
            }
            fVar28 = local_138;
            if (local_138 <= 0.0) {
              fVar28 = 0.0;
            }
            if (1.0 <= fVar28) {
              fVar28 = 1.0;
            }
            fVar27 = local_13c;
            if (local_13c <= 0.0) {
              fVar27 = 0.0;
            }
            if (1.0 <= fVar27) {
              fVar27 = 1.0;
            }
            fVar26 = local_140;
            if (local_140 <= 0.0) {
              fVar26 = 0.0;
            }
            if (1.0 <= fVar26) {
              fVar26 = 1.0;
            }
            local_130 = CONCAT13((char)(int)(fVar29 * 255.0 + 0.5),
                                 CONCAT12((char)(int)(fVar26 * 255.0 + 0.5),
                                          CONCAT11((char)(int)(fVar27 * 255.0 + 0.5),
                                                   (char)(int)(fVar28 * 255.0 + 0.5))));
          }
          else {
            FUN_1411ab38a(&local_140,&local_130);
          }
          puVar25[lVar14] = local_130;
          lVar14 = lVar14 + 1;
          pfVar23 = pfVar23 + 4;
        } while (iVar20 >> 2 != (int)lVar14);
      }
      goto LAB_1473ecf62;
    }
    local_190 = (longlong *)CONCAT44(local_190._4_4_,0x8367);
    local_198 = (uint *)CONCAT44(local_198._4_4_,0x80e1);
    local_188 = puVar25;
    (*DAT_14ca7fbf0)(*param_4,param_4[1],local_14c,local_150);
  }
  else {
    puVar11 = (undefined4 *)FUN_14001cc68(uVar1,0);
    local_190 = (longlong *)CONCAT44(local_190._4_4_,0x1406);
    local_198 = (uint *)CONCAT44(local_198._4_4_,0x1902);
    local_188 = puVar11;
    (*DAT_14ca7fbf0)(*param_4,param_4[1],local_14c,local_150);
    lVar10 = local_148;
    if (0 < iVar24) {
      lVar14 = 0;
      fVar30 = 1.1754944e-38;
      fVar31 = 3.4028235e+38;
      do {
        fVar36 = (float)puVar11[lVar14];
        fVar37 = fVar36;
        if (fVar31 <= fVar36) {
          fVar37 = fVar31;
        }
        if (fVar36 <= fVar30) {
          fVar36 = fVar30;
        }
        lVar14 = lVar14 + 1;
        fVar30 = fVar36;
        fVar31 = fVar37;
      } while (iVar24 != (int)lVar14);
      if ((fVar37 < 0.0) || (1.0 < fVar36)) {
        lVar14 = 0;
        do {
          puVar11[lVar14] = ((float)puVar11[lVar14] - fVar37) / (fVar36 - fVar37);
          lVar14 = lVar14 + 1;
        } while (iVar24 != (int)lVar14);
      }
      lVar14 = 0;
      do {
        fVar30 = (float)puVar11[lVar14];
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        if (1.0 <= fVar30) {
          fVar30 = 1.0;
        }
        uVar16 = (undefined1)(int)(fVar30 * 255.0 + 0.5);
        *(undefined1 *)(puVar25 + lVar14) = uVar16;
        *(undefined1 *)((longlong)puVar25 + lVar14 * 4 + 1) = uVar16;
        *(undefined1 *)((longlong)puVar25 + lVar14 * 4 + 2) = uVar16;
        *(undefined1 *)((longlong)puVar25 + lVar14 * 4 + 3) = 0xff;
        lVar14 = lVar14 + 1;
      } while (iVar24 != (int)lVar14);
    }
LAB_1473ecf62:
    FUN_1400020a8(puVar11);
  }
  (*DAT_14ca7fbe8)(0xd05,4);
  if (local_124 != 0) {
    (*DAT_14ca7fb60)(0x8d40,0);
    (*DAT_14ca7fb98)(1,&local_124);
  }
  if (local_128 != 0) {
    (*DAT_14ca7fcd8)(1,&local_128);
  }
  *(undefined4 *)(lVar10 + 0x1a8) = 0xffffffff;
switchD_1473ecb2a_caseD_5:
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ed3c4 FUN_1473ed3c4 body=158 status=ok
// SIG undefined FUN_1473ed3c4(void)

void FUN_1473ed3c4(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)((longlong)param_2 + 100) == '\x01') {
    uVar1 = 0;
    if ((param_3 != (longlong *)0x0) && (*(char *)((longlong)param_3 + 0x52) == '\0')) {
      uVar1 = (**(code **)(*param_3 + 0x30))(param_3);
    }
    FUN_1431cfc0a(uVar1,0,0);
    return;
  }
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a371478;
  puVar2[2] = param_3;
  return;
}



// FUNCTION 1473ed466 FUN_1473ed466 body=138 status=ok
// SIG undefined FUN_1473ed466(void)

void FUN_1473ed466(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_218 [40];
  undefined1 local_1f0 [456];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_144b19e5e(local_1f0);
  FUN_144b1bd80(param_2,local_1f0);
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  FUN_1473e7b0c(param_1 + -0x18,local_1f0);
  FUN_144b19efc(param_1 + 0x10,param_2);
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ed4f2 FUN_1473ed4f2 body=123 status=ok
// SIG undefined FUN_1473ed4f2(void)

void FUN_1473ed4f2(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  local_20 = 0;
  local_18 = 0xffffffff00000000;
  local_10 = 0x100;
  local_30 = 0;
  local_28 = 0x2200000000;
  FUN_1473e6f5e(param_1 + -0x18,1);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ed56e FUN_1473ed56e body=86 status=ok
// SIG undefined FUN_1473ed56e(void)

void FUN_1473ed56e(longlong param_1)

{
  longlong lVar1;
  HGLRC pHVar2;
  longlong lVar3;
  
  if (((byte)(*(char *)(param_1 + 0x10a) - 1U) < 2) && (*(longlong *)(param_1 + 0x14f88) == 0)) {
    lVar1 = *(longlong *)(param_1 + 86000);
    pHVar2 = wglGetCurrentContext();
    lVar3 = param_1 + 0x148b8;
    if (pHVar2 != *(HGLRC *)(lVar1 + 0x40)) {
      lVar3 = param_1 + 0x141e8;
    }
    *(longlong *)(param_1 + 0x14f88) = lVar3;
  }
  return;
}



// FUNCTION 1473ed5c7 FUN_1473ed5c7 body=627 status=ok
// SIG undefined FUN_1473ed5c7(void)

void FUN_1473ed5c7(undefined8 *param_1,int param_2,longlong param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_3 + 0xc) < iVar1) {
    FUN_141701710(param_3);
  }
  pcVar4 = (char *)*param_1;
  pcVar2 = strstr(pcVar4,"gl_ViewID_OVR");
  pcVar3 = strstr(pcVar4,"samplerExternalOES");
  if (DAT_14ca79b18 == 2) {
    pcVar4 = strstr(pcVar4,"#version 320 es");
    pcVar5 = "#version 310 es";
    if (pcVar4 != (char *)0x0) {
      pcVar5 = "#version 320 es";
    }
    FUN_1431ca4d5(param_3,pcVar5);
    FUN_1431ca4d5(param_3,&DAT_149dfc0af);
    FUN_1431ca597(param_1,pcVar5,&DAT_149e02088);
    FUN_1431ca4d5(param_3,"#define fma(A, B, C) ((A) * (B) + (C))\n");
  }
  if (DAT_14ca79b26 == '\x01') {
    FUN_1431ca4d5(param_3,"#define precise\n");
  }
  if (DAT_14ca79b25 == '\x01') {
    FUN_1431ca597(param_1,"readonly buffer","buffer");
  }
  if ((param_2 == 0x8b30) && (DAT_14ca79b24 == '\x01')) {
    FUN_1431ca597(param_1,"layout(early_fragment_tests) in;",&DAT_149e02088);
  }
  if (pcVar3 != (char *)0x0) {
    FUN_1431ca597(param_1,"// Uses samplerExternalOES",&DAT_149e02088);
    FUN_1431caa6c(param_3,param_1);
    if (DAT_14ca84e1c == '\x01') {
      pcVar4 = "\n\n";
      FUN_1431ca4d5(param_3,&DAT_14a370a31);
      FUN_1431ca4d5(param_3,"#extension GL_OES_EGL_image_external : require\n");
    }
    else {
      pcVar4 = "#define samplerExternalOES sampler2D\n";
    }
    FUN_1431ca4d5(param_3,pcVar4);
  }
  FUN_1431caa6c(param_3,param_1);
  if (pcVar2 == (char *)0x0) {
LAB_1473ed7e0:
    if (param_2 == 0x91b9) goto LAB_1473ed809;
  }
  else {
    if (DAT_14ca84e1b == '\x01') {
      pcVar4 = "\n\n";
      FUN_1431ca4d5(param_3,&DAT_14a370a31);
      FUN_1431ca4d5(param_3,"#extension GL_OVR_multiview2 : enable\n");
    }
    else {
      pcVar4 = "#define gl_ViewID_OVR 0\n";
    }
    FUN_1431ca4d5(param_3,pcVar4);
    FUN_1431caa6c(param_3,param_1);
    if ((param_2 != 0x8b31) || (DAT_14ca84e1b == '\0')) goto LAB_1473ed7e0;
    FUN_1431ca4d5(param_3,&DAT_14a370a31);
    FUN_1431ca4d5(param_3,"layout(num_views = 2) in;\n");
    FUN_1431ca4d5(param_3,&DAT_14a370a31);
  }
  pcVar4 = "#define HLSLCC_DX11ClipSpace 1 \n";
  if (DAT_14ca7a390 != '\0') {
    pcVar4 = "#define HLSLCC_DX11ClipSpace 0 \n";
  }
  FUN_1431ca4d5(param_3,pcVar4);
LAB_1473ed809:
  FUN_1431ca4d5(param_3,&DAT_14a370a31);
  FUN_1431ca4d5(param_3,*param_1);
  return;
}



// FUNCTION 1473ed83c FUN_1473ed83c body=881 status=ok
// SIG undefined FUN_1473ed83c(void)

int * FUN_1473ed83c(int *param_1,longlong *param_2,int param_3,undefined8 param_4,longlong param_5)

{
  void **ppvVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  longlong local_1b8 [3];
  ulonglong uStack_1a0;
  undefined **local_198 [18];
  undefined8 local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  int local_e8;
  ushort local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d) = 0;
  lVar5 = *param_2;
  lVar2 = param_2[1];
  uVar6 = (ulonglong)(int)lVar2;
  iVar4 = 0;
  memset(local_198,0,0x90);
  FUN_144869430(local_198);
  local_108 = 0;
  local_198[0] = &PTR_FUN_149e1ddc0;
  local_f0 = 0x7fffffffffffffff;
  local_100 = lVar5;
  local_f8 = uVar6;
  FUN_140996f94(local_198,1);
  (*(code *)local_198[0][0x1e])(local_198,1);
  if (3 < uVar6) {
    iVar4 = *(int *)(lVar5 + -4 + uVar6);
  }
  local_f0 = (ulonglong)(uint)((int)lVar2 - iVar4);
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (void *)0x0;
  uStack_68 = 0;
  FUN_1473edbae(&local_e8,local_198,param_4);
  uVar3 = (uint)local_e4;
  if ((((local_e8 == 0x474c534c) && ((param_3 != 0x8b31 || (uVar3 == 0x5653)))) &&
      ((param_3 != 0x8b30 || (uVar3 == 0x5053)))) &&
     (((param_3 != 0x8dd9 || (uVar3 == 0x4753)) && ((param_3 != 0x91b9 || (uVar3 == 0x4353)))))) {
    ppvVar1 = (void **)(param_1 + 0x1a);
    FUN_1473eddec(param_1 + 2,&local_e0);
    _Src = local_70;
    if (ppvVar1 != &local_70) {
      iVar4 = (int)uStack_68;
      lVar5 = (longlong)(int)uStack_68;
      param_1[0x1c] = (int)uStack_68;
      if ((int)uStack_68 == 0 && param_1[0x1d] == 0) {
        param_1[0x1d] = 0;
      }
      else {
        FUN_1473f89d0(ppvVar1,uStack_68 & 0xffffffff);
        if (iVar4 != 0) {
          memcpy(*ppvVar1,_Src,lVar5 * 10);
        }
      }
    }
    lVar5 = param_5 + 0x10;
    if (param_5 == 0) {
      lVar5 = 0;
    }
    FUN_1402eea41(lVar5);
    local_1b8[2] = 0;
    uStack_1a0 = 0;
    FUN_1431ca4d5(local_1b8 + 2,(longlong)(int)local_108 + *param_2);
    iVar4 = (*(code *)PTR_FUN_14c75b148)(local_1b8[2],uStack_1a0 & 0xffffffff,0);
    param_1[0x1e] = param_3;
    param_1[0x1f] = (int)uStack_1a0;
    param_1[0x20] = iVar4;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
    FUN_1431ca9d4();
    lVar5 = FUN_1473f832a(param_1[0x1f] ^ param_1[0x1e] ^ param_1[0x20],param_1 + 0x1e);
    iVar4 = *(int *)(lVar5 + 8);
    *param_1 = iVar4;
    if (iVar4 == 0 && *(int *)(lVar5 + 0x18) == 0) {
      FUN_1431cac54(param_3,local_1b8 + 2,local_1b8);
      FUN_1473ede3e(lVar5,local_1b8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca79918);
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1b8[2] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_1c8 = uVar3;
    FUN_140033559(".\\Runtime/OpenGLDrv/Private/OpenGLShaders.cpp",0x3e1,
                  L"Corrupt shader bytecode. GlslMarker=0x%08x FrequencyMarker=0x%04x");
  }
  FUN_1473edf4e(&local_e8);
  FUN_144a7fc42(local_198);
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473edbae FUN_1473edbae body=571 status=ok
// SIG undefined FUN_1473edbae(void)

longlong * FUN_1473edbae(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [34];
  undefined8 local_46;
  undefined2 local_3e;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 1) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  FUN_1473f0b3c(param_1 + 2,param_2,param_3);
  FUN_14021219d(param_2,param_1 + 0x1a);
  local_3c = param_1[0x20];
  puVar6 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  plVar2 = (longlong *)(param_1 + 0x1e);
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (local_3c < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_3c);
      }
      param_1[0x20] = 0;
      if (param_1[0x21] != local_3c) {
        FUN_1473f1ab0(plVar2);
      }
      if (0 < local_3c) {
        iVar7 = 0;
        do {
          FUN_1473f0d73(param_2,&local_46);
          iVar3 = param_1[0x20];
          param_1[0x20] = iVar3 + 1U;
          if ((uint)param_1[0x21] < iVar3 + 1U) {
            FUN_1473f1b20(plVar2,iVar3);
          }
          lVar8 = *plVar2;
          *(undefined2 *)(lVar8 + 8 + (longlong)iVar3 * 10) = local_3e;
          *(undefined8 *)(lVar8 + (longlong)iVar3 * 10) = local_46;
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_3c);
      }
    }
  }
  else if (0 < local_3c) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      FUN_1473f0d73(param_2,*plVar2 + lVar8);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 10;
    } while (lVar9 < local_3c);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473eddec FUN_1473eddec body=82 status=ok
// SIG undefined FUN_1473eddec(void)

longlong FUN_1473eddec(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1473f1bb4();
  FUN_1473f1c14(param_1 + 0x10,param_2 + 0x10);
  FUN_1473f1c6c(param_1 + 0x20,param_2 + 0x20);
  FUN_1473f1c6c(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x4c);
  uVar3 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x4c) = uVar2;
  *(undefined8 *)(param_1 + 0x54) = uVar3;
  return param_1;
}



// FUNCTION 1473ede3e FUN_1473ede3e body=269 status=ok
// SIG undefined FUN_1473ede3e(void)

void FUN_1473ede3e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar4 = FUN_1410fe39e(*param_1,uVar2,0,0);
  uVar6 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  puVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(uint *)((longlong)param_1 + 0x1c) != uVar4) {
    FUN_141701710(puVar1,uVar6);
  }
  FUN_1410fe350(puVar1,uVar6,1);
  local_58 = (longlong)*(int *)(param_1 + 4);
  local_48 = 0;
  local_50 = 0x20;
  local_38 = uVar6;
  cVar3 = FUN_1410fe780(*param_1,param_1[2],&local_38,*param_2);
  if (((longlong)(int)local_38 == local_38) && (cVar3 != '\0')) {
    FUN_14626819e(puVar1,local_38,1);
  }
  else {
    FUN_14681b27a(puVar1,param_2);
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  LOCK();
  DAT_14ca79910 = DAT_14ca79910 + *(int *)(param_1 + 3);
  UNLOCK();
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 3);
  }
  LOCK();
  DAT_14ca79914 = DAT_14ca79914 + iVar5;
  UNLOCK();
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473edf4e FUN_1473edf4e body=53 status=ok
// SIG undefined FUN_1473edf4e(void)

void FUN_1473edf4e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1473f1ef4(param_1 + 8);
  return;
}



// FUNCTION 1473edf84 FUN_1473edf84 body=205 status=ok
// SIG undefined FUN_1473edf84(void)

undefined8 * FUN_1473edf84(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x128);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 6;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x85);
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a370be0;
  local_58 = puVar1;
  FUN_1473ed83c(puVar1 + 0x14,&local_48,0x8b31,puVar1 + 2);
  *puVar1 = &PTR_FUN_14a370be0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ee052 FUN_1473ee052 body=212 status=ok
// SIG undefined FUN_1473ee052(void)

undefined8 * FUN_1473ee052(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x128);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 9;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 3;
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a370be8;
  local_58 = puVar1;
  FUN_1473ed83c(puVar1 + 0x14,&local_48,0x8b30,puVar1 + 2);
  *puVar1 = &PTR_FUN_14a370be8;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ee128 FUN_1473ee128 body=212 status=ok
// SIG undefined FUN_1473ee128(void)

undefined8 * FUN_1473ee128(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x128);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 10;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 4;
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a370bf0;
  local_58 = puVar1;
  FUN_1473ed83c(puVar1 + 0x14,&local_48,0x8dd9,puVar1 + 2);
  *puVar1 = &PTR_FUN_14a370bf0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ee1fe FUN_1473ee1fe body=478 status=ok
// SIG undefined FUN_1473ee1fe(void)

void FUN_1473ee1fe(longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
                  uint param_6,char param_7)

{
  undefined4 uVar1;
  int iVar2;
  void *_Dst;
  int *piVar3;
  int *_Dst_00;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  if (0 < (int)param_3) {
    _Dst_00 = (int *)(param_1 + 0x300);
    uVar4 = 0;
    do {
      lVar6 = *(longlong *)(param_4 + uVar4 * 8);
      if (lVar6 == 0) {
        iVar2 = *_Dst_00;
        if (iVar2 == 0) {
          _Dst = (void *)FUN_14001cc68(0x10000);
          memset(_Dst,0,0x10000);
          uVar5 = DAT_14c760d28;
          lVar6 = (longlong)(int)DAT_14c760d28;
          if (lVar6 < 0x3ff) {
            iVar2 = (&DAT_14ca7b3e0)[lVar6];
            *_Dst_00 = iVar2;
            uVar5 = DAT_14c760d28 + 1;
          }
          else {
            iVar2 = 0x400 - DAT_14c760d28;
            memcpy(_Dst_00,&DAT_14ca7b3e0 + lVar6,(longlong)iVar2 * 4);
            (*DAT_14ca7fc70)(0x400,&DAT_14ca7b3e0);
            uVar5 = uVar5 - 0x3ff;
            memcpy(_Dst_00 + iVar2,&DAT_14ca7b3e0,(ulonglong)uVar5 * 4);
            iVar2 = *_Dst_00;
          }
          DAT_14c760d28 = uVar5;
          if (*(int *)(param_2 + 0x450) != iVar2) {
            (*DAT_14ca7fba8)(0x8a11,iVar2);
            *(int *)(param_2 + 0x450) = iVar2;
          }
          (*DAT_14ca7fc78)(0x8a11,0x10000,_Dst,0x88e4);
          FUN_1400020a8(_Dst);
          FUN_1431d279e(0x10000,1);
          iVar7 = 0;
          uVar1 = 0x10000;
          piVar3 = _Dst_00;
          goto LAB_1473ee253;
        }
        iVar7 = 0;
        uVar1 = 0x10000;
LAB_1473ee255:
        lVar6 = (longlong)(int)(param_6 + uVar4);
        if ((param_7 != '\0') ||
           (((iVar2 != 0 && (*(int *)(param_2 + 0x1bc + lVar6 * 4) != iVar2)) ||
            (*(int *)(param_2 + 0x2dc + lVar6 * 4) != iVar7)))) {
          (*DAT_14ca7fee8)(0x8a11,param_6 + uVar4,iVar2,iVar7,uVar1);
          *(int *)(param_2 + 0x1bc + lVar6 * 4) = iVar2;
          *(int *)(param_2 + 0x2dc + lVar6 * 4) = iVar7;
          *(int *)(param_2 + 0x450) = iVar2;
        }
      }
      else if (*(char *)(lVar6 + 0x5d) == '\0') {
        uVar1 = *(undefined4 *)(lVar6 + 0x38);
        iVar7 = *(int *)(param_5 + uVar4 * 4) + *(int *)(lVar6 + 0x34);
        piVar3 = (int *)(lVar6 + 0x30);
LAB_1473ee253:
        iVar2 = *piVar3;
        goto LAB_1473ee255;
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  return;
}



// FUNCTION 1473ee3dc FUN_1473ee3dc body=324 status=ok
// SIG undefined FUN_1473ee3dc(void)

undefined8 * FUN_1473ee3dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1473f1ccc(param_1,iVar1,0);
    FUN_1473f1d2e(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1473f1da6(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 << 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1473f1e08(param_1 + 4,iVar1,0);
    FUN_1473f1e7b(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1473f1e08(param_1 + 6,iVar1,0);
    FUN_1473f1e7b(param_1[6],uVar2,iVar1);
  }
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar4;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  return param_1;
}



// FUNCTION 1473ee520 FUN_1473ee520 body=119 status=ok
// SIG undefined FUN_1473ee520(void)

void FUN_1473ee520(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473f8c1c(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_1473f8ca2(param_1,param_2,iVar1 - param_2);
  FUN_1473f8cfc(param_1);
  return;
}



// FUNCTION 1473ee598 FUN_1473ee598 body=488 status=ok
// SIG undefined FUN_1473ee598(void)

undefined4 * FUN_1473ee598(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar6 = param_1;
  for (lVar4 = 0x1e; iVar1 = DAT_14c760d20, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x25] = 0x80;
  param_1[0x24] = iVar1;
  uVar7 = iVar1 + 0x1f;
  if (0x1f < uVar7) {
    puVar6 = param_1 + 0x1e;
    puVar5 = puVar6;
    if (uVar7 < 0xa0) {
LAB_1473ee6e2:
      uVar7 = uVar7 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(puVar6,0,uVar7 >> 5,4);
      param_1[0x25] = uVar7 & 0xffffffe0;
      puVar5 = *(undefined4 **)(param_1 + 0x22);
      if (*(undefined4 **)(param_1 + 0x22) == (undefined4 *)0x0) {
        puVar5 = puVar6;
      }
      if (uVar7 < 0x120) goto LAB_1473ee6e2;
      uVar7 = (uVar7 >> 5) << 2;
    }
    memset(puVar5,0,(ulonglong)uVar7);
    iVar1 = param_1[0x24];
    iVar2 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar1 % 0x20 != 0) {
      if (*(undefined4 **)(param_1 + 0x22) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(param_1 + 0x22);
      }
      bVar3 = -(char)(iVar1 % 0x20);
      puVar6[iVar2 >> 5] = (uint)(puVar6[iVar2 >> 5] << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
    }
  }
  iVar1 = DAT_14ca79458;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2d] = 0x80;
  param_1[0x2c] = iVar1;
  uVar7 = iVar1 + 0x1f;
  if (uVar7 < 0x20) goto LAB_1473ee607;
  puVar6 = param_1 + 0x26;
  puVar5 = puVar6;
  if (uVar7 < 0xa0) {
LAB_1473ee731:
    uVar7 = uVar7 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(puVar6,0,uVar7 >> 5,4);
    param_1[0x2d] = uVar7 & 0xffffffe0;
    puVar5 = *(undefined4 **)(param_1 + 0x2a);
    if (*(undefined4 **)(param_1 + 0x2a) == (undefined4 *)0x0) {
      puVar5 = puVar6;
    }
    if (uVar7 < 0x120) goto LAB_1473ee731;
    uVar7 = (uVar7 >> 5) << 2;
  }
  memset(puVar5,0,(ulonglong)uVar7);
  iVar1 = param_1[0x2c];
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    if (*(undefined4 **)(param_1 + 0x2a) != (undefined4 *)0x0) {
      puVar6 = *(undefined4 **)(param_1 + 0x2a);
    }
    bVar3 = -(char)(iVar1 % 0x20);
    puVar6[iVar2 >> 5] = (uint)(puVar6[iVar2 >> 5] << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
LAB_1473ee607:
  *(undefined8 *)(param_1 + 0x2e) = 0xffffffffffffffff;
  param_1[0x30] = param_3;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 1473ee780 FUN_1473ee780 body=553 status=ok
// SIG undefined FUN_1473ee780(void)

undefined1 (*) [16] FUN_1473ee780(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  if (*(int *)param_1[1] == 0 && *param_1 == (undefined1  [16])0x0) {
    local_48 = (undefined1  [16])0x0;
    local_38 = 0;
    if (*(int *)(param_1[7] + 4) == 0 &&
        *(undefined1 (*) [16])(param_1[6] + 4) == (undefined1  [16])0x0) {
      FUN_14020fad6(param_2,L"Program with unset key");
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    local_58 = (undefined1  [16])0x0;
    FUN_1407c8a86(param_1[6] + 4,0x14,local_58);
    FUN_140ba7826(&local_48,L"Program C_",local_58);
    if (&local_48 != param_2) {
      if (*(longlong *)*param_2 != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)*param_2 = local_48._0_8_;
      *(undefined4 *)(*param_2 + 8) = local_48._8_4_;
      *(undefined4 *)(*param_2 + 0xc) = local_48._12_4_;
      local_48 = ZEXT816(0);
      goto LAB_1473ee8a1;
    }
  }
  else {
    local_58 = (undefined1  [16])0x0;
    FUN_1407c8a86(param_1,0x14,local_58);
    FUN_140ba7826(&local_48,L"Program V_",local_58);
    if (&local_48 == param_2) {
      if (local_48._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)*param_2 != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)*param_2 = local_48._0_8_;
      *(undefined4 *)(*param_2 + 8) = local_48._8_4_;
      *(undefined4 *)(*param_2 + 0xc) = local_48._12_4_;
      local_48 = ZEXT816(0);
    }
    if (local_58._0_8_ != 0) {
      FUN_1400020a8();
    }
    local_58 = (undefined1  [16])0x0;
    FUN_1407c8a86(param_1[1] + 4,0x14,local_58);
    FUN_140ba7826(local_48,&DAT_14a3710d4,local_58);
    iVar1 = local_48._8_4_ + -1;
    if (local_48._8_4_ == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_48._0_8_,iVar1);
  }
  if (local_48._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_1473ee8a1:
  if (local_58._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ee9b0 FUN_1473ee9b0 body=110 status=ok
// SIG undefined FUN_1473ee9b0(void)

void FUN_1473ee9b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  cVar1 = FUN_1431cbd16();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_28 = &local_38;
  local_30 = param_1;
  FUN_1473f35e2(local_1c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eea30 FUN_1473eea30 body=124 status=ok
// SIG undefined FUN_1473eea30(void)

undefined8 FUN_1473eea30(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  cVar1 = FUN_1431cbd16();
  if (cVar1 != '\0') {
    uVar4 = FUN_1473f3bf4(param_1,param_2);
    return uVar4;
  }
  uVar4 = 0;
  uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1,0x78,0);
  iVar3 = FUN_1473f38b8(uVar2,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x88 + DAT_14ca79be8;
    puVar6 = (undefined8 *)(lVar5 + 0x78);
    if (puVar6 == (undefined8 *)0x0 || lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar6;
    }
  }
  return uVar4;
}



// FUNCTION 1473eeaac FUN_1473eeaac body=132 status=ok
// SIG undefined FUN_1473eeaac(void)

void FUN_1473eeaac(longlong param_1,longlong *param_2)

{
  if ((&DAT_14a371490)[*(byte *)(param_1 + 0x288)] == '\x01') {
    FUN_1431cbdf3(*(undefined4 *)(param_1 + 0xc0));
    (*DAT_14ca7fe18)(*(undefined4 *)(param_1 + 0xc0));
    (*(code *)(&PTR_FUN_14a371120)[*(byte *)(param_1 + 0x288)])(param_1 + 200);
    FUN_1431cae2e(param_1 + 200,param_1,*param_2 + 0xa8,5,0);
    *(undefined1 *)(param_1 + 0x288) = 2;
  }
  return;
}



// FUNCTION 1473eeb30 FUN_1473eeb30 body=233 status=ok
// SIG undefined FUN_1473eeb30(void)

undefined8 * FUN_1473eeb30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x138);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0xc;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 5;
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  puVar1[0x14] = 0;
  *puVar1 = &PTR_FUN_14a370bf8;
  local_58 = puVar1;
  FUN_1473ed83c(puVar1 + 0x15,&local_48,0x91b9,puVar1 + 2);
  *puVar1 = &PTR_FUN_14a370bf8;
  puVar1[0x26] = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eec1a FUN_1473eec1a body=195 status=ok
// SIG undefined FUN_1473eec1a(void)

void FUN_1473eec1a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_1431cbd16();
  if (cVar3 != '\0') {
    if ((longlong)*(int *)(param_1 + 0x290) == -1) {
      FUN_1431ccf08(param_1);
      lVar2 = DAT_14ca79b88;
    }
    else {
      lVar1 = *(longlong *)(DAT_14ca79b30 + (longlong)*(int *)(param_1 + 0x290) * 0x10);
      if ((DAT_14ca79b80 == lVar1) && (*(longlong *)(DAT_14ca79b80 + 0x80) != 0)) {
        DAT_14ca79b80 = *(longlong *)(DAT_14ca79b80 + 0x80);
      }
      lVar2 = DAT_14ca79b88;
      if (DAT_14ca79b88 != lVar1) {
        lVar2 = *(longlong *)(lVar1 + 0x80);
        if (*(longlong *)(lVar1 + 0x78) != 0) {
          *(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x80) = lVar2;
        }
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
        }
        *(undefined8 *)(lVar1 + 0x80) = 0;
        *(longlong *)(lVar1 + 0x78) = DAT_14ca79b88;
        lVar2 = lVar1;
        if (DAT_14ca79b88 != 0) {
          *(longlong *)(DAT_14ca79b88 + 0x80) = lVar1;
        }
      }
    }
    DAT_14ca79b88 = lVar2;
    *(undefined4 *)(param_1 + 0x2a0) = DAT_14c75b13c;
  }
  return;
}



// FUNCTION 1473eecde FUN_1473eecde body=139 status=ok
// SIG undefined FUN_1473eecde(void)

void FUN_1473eecde(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if ((&DAT_14a371490)[*(byte *)(param_1 + 0x288)] == '\x01') {
    FUN_1431cbdf3(*(undefined4 *)(param_1 + 0xc0));
    (*DAT_14ca7fe18)(*(undefined4 *)(param_1 + 0xc0));
    (*(code *)(&PTR_FUN_14a371120)[*(byte *)(param_1 + 0x288)])(param_1 + 200);
    FUN_1473f8d98(param_1 + 200,param_1,*param_2,*param_3,*param_4);
    *(undefined1 *)(param_1 + 0x288) = 1;
  }
  return;
}



// FUNCTION 1473eed6a FUN_1473eed6a body=243 status=ok
// SIG undefined FUN_1473eed6a(void)

undefined8 *
FUN_1473eed6a(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x10;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  *param_1 = &PTR_FUN_14a370d30;
  FUN_147403b22(param_1 + 2,param_2,param_3,param_4,param_5,param_1,1);
  uVar4 = FUN_1473eefd4(param_3,param_4,param_5);
  param_1[0xf] = uVar4;
  param_1[0x10] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  param_1[0x11] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x12] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = param_5;
  if (param_5 != 0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_1[0x10];
  if (lVar1 == 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(lVar1 + 0x214);
    uVar4 = *(undefined8 *)(lVar1 + 500);
    uVar2 = *(undefined8 *)(lVar1 + 0x1fc);
    uVar3 = *(undefined8 *)(lVar1 + 0x20c);
    param_1[0xc] = *(undefined8 *)(lVar1 + 0x204);
    param_1[0xd] = uVar3;
    param_1[10] = uVar4;
    param_1[0xb] = uVar2;
  }
  return param_1;
}



// FUNCTION 1473eee5e FUN_1473eee5e body=355 status=ok
// SIG undefined FUN_1473eee5e(void)

void FUN_1473eee5e(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_1431cbd16();
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  local_50 = 0x100000000;
  local_48 = &DAT_14ca79bf8;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar3 = 0;
  if (DAT_14ca79c10 != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = DAT_14ca79c10;
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = &DAT_14ca79be8;
  if ((iStack_3c != iVar3) || (local_48 != &DAT_14ca79bf8)) {
    do {
      lVar1 = *(longlong *)(*local_78 + 0x78 + (longlong)iStack_5c * 0x88);
      if (lVar1 != 0) {
        FUN_1431cd20c(lVar1);
        FUN_1400020a8(lVar1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != &DAT_14ca79be8 || (local_68 != &DAT_14ca79bf8 || iStack_5c != iVar3));
  }
  FUN_1473f415e();
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473eefd4 FUN_1473eefd4 body=521 status=ok
// SIG undefined FUN_1473eefd4(void)

undefined1 (*) [16] FUN_1473eefd4(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined1 local_a4 [16];
  undefined4 local_94;
  undefined1 local_90 [16];
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = *(undefined4 *)(param_1 + 0x98);
  local_b8[0] = *(undefined8 *)(param_1 + 0x88);
  local_b8[1] = *(undefined8 *)(param_1 + 0x90);
  local_90 = ZEXT816(0);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_a4 = *(undefined1 (*) [16])(param_2 + 0x88);
  local_94 = *(undefined4 *)(param_2 + 0x98);
  if (param_3 != 0) {
    local_80 = (ulonglong)*(uint *)(param_3 + 0x98);
    local_90 = *(undefined1 (*) [16])(param_3 + 0x88);
  }
  iVar5 = 0;
  iVar7 = DAT_14ca799a4;
  do {
    pauVar6 = *(undefined1 (**) [16])(&DAT_14ca799b0 + (longlong)iVar7 * 8);
    local_d0 = param_1;
    local_c8 = param_2;
    local_c0 = param_3;
    if (pauVar6 != (undefined1 (*) [16])0x0) {
      uVar10 = 0;
      pauVar8 = (undefined1 (*) [16])local_b8;
      pauVar9 = pauVar6;
      do {
        auVar1 = *pauVar9;
        auVar2 = *pauVar8;
        bVar3 = *(int *)pauVar8[1] == *(int *)pauVar9[1];
        if (4 < uVar10) break;
        uVar10 = uVar10 + 1;
        pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 4);
        pauVar8 = (undefined1 (*) [16])(pauVar8[1] + 4);
      } while (bVar3 && auVar2 == auVar1);
      if (bVar3 && auVar2 == auVar1) {
        *(undefined8 *)(&DAT_14ca799b0 + (longlong)iVar7 * 8) = 0;
        FUN_1431cbefb();
        FUN_1473eec1a(pauVar6);
        goto LAB_1473ef17f;
      }
    }
    iVar5 = iVar5 + 1;
    iVar7 = (iVar7 + 1) % 10;
  } while (iVar5 != 10);
  FUN_1431cbefb();
  pauVar6 = (undefined1 (*) [16])FUN_1473eea30(local_b8,1);
  if (pauVar6 == (undefined1 (*) [16])0x0) {
    cVar4 = FUN_1473ebafa(local_b8);
    if (cVar4 != '\0') {
      FUN_1431cbefb();
      pauVar6 = (undefined1 (*) [16])FUN_1473eea30(local_b8,1);
      if (pauVar6 != (undefined1 (*) [16])0x0) goto LAB_1473ef1c2;
    }
    pauVar6 = (undefined1 (*) [16])FUN_14001cc68(0x2a8,0x10);
    FUN_1431cb94c(pauVar6,param_1,param_2,param_3);
  }
  else {
LAB_1473ef1c2:
    FUN_1473eecde(pauVar6,&local_d0,&local_c8,&local_c0);
  }
LAB_1473ef17f:
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return pauVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ef1de FUN_1473ef1de body=358 status=ok
// SIG undefined FUN_1473ef1de(void)

void FUN_1473ef1de(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  
  *param_1 = &PTR_FUN_14a370d30;
  cVar5 = FUN_1431cbd16();
  if (cVar5 != '\0') {
    FUN_1431cbefb();
    uVar4 = param_1[0xf];
    uVar6 = (*(code *)PTR_FUN_14c75b148)(uVar4,0x78,0);
    iVar8 = FUN_1473f2ee2(&DAT_14ca79b98,uVar6,uVar4);
    if (iVar8 != -1) goto LAB_1473ef25d;
  }
  lVar3 = param_1[0xf];
  lVar7 = (longlong)DAT_14ca799a4;
  iVar8 = DAT_14ca799a4 + 1;
  DAT_14ca799a4 = iVar8;
  *(longlong *)(&DAT_14ca799b0 + lVar7 * 8) = lVar3;
  lVar7 = DAT_14ca79650;
  if (iVar8 == 10) {
    DAT_14ca799a4 = 0;
  }
  iVar8 = *(int *)(lVar3 + 0xc0);
  if (*(int *)(DAT_14ca79650 + 0x143b8) == iVar8) {
    *(undefined4 *)(DAT_14ca79650 + 0x143b8) = 0xffffffff;
  }
  if (*(int *)(lVar7 + 0x14a88) == iVar8) {
    *(undefined4 *)(lVar7 + 0x14a88) = 0xffffffff;
  }
LAB_1473ef25d:
  if (param_1[0x13] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x13] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x12] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x11] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x11] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x10] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x10] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147403c1e(param_1 + 2);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473ef344 FUN_1473ef344 body=37 status=ok
// SIG undefined FUN_1473ef344(void)

longlong FUN_1473ef344(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 1473ef36a FUN_1473ef36a body=183 status=ok
// SIG undefined FUN_1473ef36a(void)

void FUN_1473ef36a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  size_t _Size;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = param_2 + 0xfU & 0xfffffff0;
  _Size = (size_t)(int)(uVar3 * 7);
  lVar4 = 0;
  lVar1 = FUN_14001cc68(_Size);
  *param_1 = lVar1;
  lVar1 = FUN_14001cc68(_Size);
  param_1[0xe] = lVar1;
  memset((void *)*param_1,0,_Size);
  memset((void *)param_1[0xe],0,_Size);
  lVar1 = param_1[0xe];
  lVar2 = *param_1;
  do {
    lVar2 = lVar2 + (int)uVar3;
    lVar1 = lVar1 + (int)uVar3;
    param_1[lVar4 + 1] = lVar2;
    param_1[lVar4 + 0xf] = lVar1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 6);
  *(uint *)(param_1 + 0x15) = uVar3;
  lVar1 = 0;
  do {
    *(undefined4 *)(param_1 + lVar1 + 7) = 0;
    *(uint *)((longlong)param_1 + lVar1 * 8 + 0x3c) = param_2 + 0xfU >> 4;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 7);
  return;
}



// FUNCTION 1473ef422 FUN_1473ef422 body=95 status=ok
// SIG undefined FUN_1473ef422(void)

void FUN_1473ef422(undefined8 *param_1)

{
  if (0 < *(int *)(param_1 + 0x15)) {
    FUN_1400020a8(param_1[0xe]);
    FUN_1400020a8(*param_1);
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  return;
}



// FUNCTION 1473ef482 FUN_1473ef482 body=38 status=ok
// SIG undefined FUN_1473ef482(void)

undefined8 FUN_1473ef482(undefined8 param_1,int param_2)

{
  FUN_1473f8ffa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef4de FUN_1473ef4de body=45 status=ok
// SIG undefined FUN_1473ef4de(void)

longlong FUN_1473ef4de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_1473f8ffa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef50e FUN_1473ef50e body=68 status=ok
// SIG undefined FUN_1473ef50e(void)

undefined8 * FUN_1473ef50e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef552 FUN_1473ef552 body=38 status=ok
// SIG undefined FUN_1473ef552(void)

undefined8 FUN_1473ef552(undefined8 param_1,int param_2)

{
  FUN_1473f9236();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef578 FUN_1473ef578 body=38 status=ok
// SIG undefined FUN_1473ef578(void)

undefined8 FUN_1473ef578(undefined8 param_1,int param_2)

{
  FUN_1473f9268();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef59e FUN_1473ef59e body=38 status=ok
// SIG undefined FUN_1473ef59e(void)

undefined8 FUN_1473ef59e(undefined8 param_1,int param_2)

{
  FUN_1473f929a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef5c4 FUN_1473ef5c4 body=38 status=ok
// SIG undefined FUN_1473ef5c4(void)

undefined8 FUN_1473ef5c4(undefined8 param_1,int param_2)

{
  FUN_1473f92cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef5ea FUN_1473ef5ea body=38 status=ok
// SIG undefined FUN_1473ef5ea(void)

undefined8 FUN_1473ef5ea(undefined8 param_1,int param_2)

{
  FUN_1473ef1de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef610 FUN_1473ef610 body=58 status=ok
// SIG undefined FUN_1473ef610(void)

undefined8 * FUN_1473ef610(undefined8 *param_1,int param_2)

{
  (*DAT_14ca7fbb0)(1,param_1 + 3);
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef64e FUN_1473ef64e body=64 status=ok
// SIG undefined FUN_1473ef64e(void)

void FUN_1473ef64e(void)

{
  if (DAT_14ca795cc != 0) {
    DAT_14ca795cc = 0;
    FUN_1446f8d3c(&DAT_14ca795c0,DAT_14ca795c8,0,8,8);
  }
  return;
}



// FUNCTION 1473ef68e FUN_1473ef68e body=140 status=ok
// SIG undefined FUN_1473ef68e(void)

void FUN_1473ef68e(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14ca795c8;
  if (param_1 <= (int)DAT_14ca795c8) {
    if (DAT_14ca795cc == 0) {
      uVar2 = 4;
      if (4 < DAT_14ca795c8) {
        uVar2 = DAT_14ca795c8;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14ca795c8 + ((ulonglong)((longlong)(int)DAT_14ca795c8 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14ca795cc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14ca795c0,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ef71c FUN_1473ef71c body=38 status=ok
// SIG undefined FUN_1473ef71c(void)

undefined8 FUN_1473ef71c(undefined8 param_1,int param_2)

{
  FUN_1473efdf8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef742 FUN_1473ef742 body=38 status=ok
// SIG undefined FUN_1473ef742(void)

undefined8 FUN_1473ef742(undefined8 param_1,int param_2)

{
  FUN_1473ef822();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ef768 FUN_1473ef768 body=88 status=ok
// SIG undefined FUN_1473ef768(void)

void FUN_1473ef768(longlong param_1,ulonglong param_2,int param_3)

{
  FUN_1473ef870(param_1 + 8,param_2,1);
  FUN_1473ef8e6(param_1 + 0x18,param_2 & 0xffffffff,1);
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x34) < param_3) {
      FUN_1473efc48(param_1 + 0x28,param_3);
    }
    FUN_1473ef964(param_1 + 0x28,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 1473ef7c2 FUN_1473ef7c2 body=96 status=ok
// SIG undefined FUN_1473ef7c2(void)

void FUN_1473ef7c2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1473efd68(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1473efdc8(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  FUN_1473efc48(param_1 + 0x28,0);
  return;
}



// FUNCTION 1473ef822 FUN_1473ef822 body=77 status=ok
// SIG undefined FUN_1473ef822(void)

void FUN_1473ef822(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a370ed0;
  FUN_1473ef7c2();
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473ef870 FUN_1473ef870 body=116 status=ok
// SIG undefined FUN_1473ef870(void)

void FUN_1473ef870(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473ef9d6(param_1,iVar1);
    }
    FUN_1473ef9a9((longlong)iVar1 * 0x28 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1473efa6a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


