// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14761e91a FUN_14761e91a body=483 status=ok
// SIG undefined FUN_14761e91a(void)

undefined8 FUN_14761e91a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14761ea48;
        }
        else {
LAB_14761ea48:
          FUN_14761ecec(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14761edb8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_14761eafe(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761eafe FUN_14761eafe body=493 status=ok
// SIG undefined FUN_14761eafe(void)

undefined2 * FUN_14761eafe(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14761ec30;
        }
        else {
LAB_14761ec30:
          FUN_14761ecec(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_14761edb8(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_14761efcc((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761ecec FUN_14761ecec body=90 status=ok
// SIG undefined FUN_14761ecec(void)

void FUN_14761ecec(longlong *param_1,int param_2)

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
  FUN_14761ed46();
  return;
}



// FUNCTION 14761ed46 FUN_14761ed46 body=114 status=ok
// SIG undefined FUN_14761ed46(void)

void FUN_14761ed46(longlong *param_1,int param_2)

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



// FUNCTION 14761edb8 FUN_14761edb8 body=68 status=ok
// SIG undefined FUN_14761edb8(void)

void FUN_14761edb8(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14761edfc(param_1);
  return;
}



// FUNCTION 14761edfc FUN_14761edfc body=462 status=ok
// SIG undefined FUN_14761edfc(void)

void FUN_14761edfc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14761efcc FUN_14761efcc body=107 status=ok
// SIG undefined FUN_14761efcc(void)

int FUN_14761efcc(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14761f037(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14761f037 FUN_14761f037 body=76 status=ok
// SIG undefined FUN_14761f037(void)

undefined8 FUN_14761f037(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14761f084 FUN_14761f084 body=481 status=ok
// SIG undefined FUN_14761f084(void)

undefined8 FUN_14761f084(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14761f1b2;
        }
        else {
LAB_14761f1b2:
          FUN_14761ecec(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14761edb8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_14761eafe(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f266 FUN_14761f266 body=481 status=ok
// SIG undefined FUN_14761f266(void)

undefined8 FUN_14761f266(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14761f394;
        }
        else {
LAB_14761f394:
          FUN_14761ecec(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14761edb8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_14761eafe(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f448 FUN_14761f448 body=163 status=ok
// SIG undefined FUN_14761f448(void)

undefined4 * FUN_14761f448(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar15 = FUN_1406f977c(local_48);
  if ((lVar15 == 0) ||
     (puVar16 = (undefined4 *)(*(int *)(lVar15 + 0x44) + local_20), puVar16 == (undefined4 *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar1 = puVar16[1];
    uVar2 = puVar16[2];
    uVar3 = puVar16[3];
    uVar4 = *(undefined8 *)(puVar16 + 4);
    uVar5 = *(undefined8 *)(puVar16 + 6);
    uVar6 = *(undefined8 *)(puVar16 + 8);
    uVar7 = *(undefined8 *)(puVar16 + 10);
    uVar8 = *(undefined8 *)(puVar16 + 0xc);
    uVar9 = *(undefined8 *)(puVar16 + 0xe);
    uVar10 = *(undefined8 *)(puVar16 + 0x10);
    uVar11 = *(undefined8 *)(puVar16 + 0x12);
    uVar12 = *(undefined8 *)(puVar16 + 0x14);
    uVar13 = *(undefined8 *)(puVar16 + 0x16);
    *param_1 = *puVar16;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)(param_1 + 6) = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)(param_1 + 10) = uVar7;
    *(undefined8 *)(param_1 + 0xc) = uVar8;
    *(undefined8 *)(param_1 + 0xe) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = uVar10;
    *(undefined8 *)(param_1 + 0x12) = uVar11;
    *(undefined8 *)(param_1 + 0x14) = uVar12;
    *(undefined8 *)(param_1 + 0x16) = uVar13;
    uVar14 = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar14;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f4ec FUN_14761f4ec body=224 status=ok
// SIG undefined FUN_14761f4ec(void)

undefined2 *
FUN_14761f4ec(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [42];
  undefined2 local_6e;
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_54;
  undefined2 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_68 = (undefined8 *)0x0;
    FUN_14485c47a(&local_68,param_3);
    local_54 = local_68;
  }
  local_4c = param_5;
  local_44 = 1;
  FUN_147607aa4(param_1 + 8,&local_68);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *local_60 = *param_4;
    param_4 = param_4 + 1;
    local_60 = local_60 + 1;
  }
  local_60 = (undefined8 *)&local_6e;
  local_6e = local_68._0_2_;
  local_68 = &local_54;
  FUN_14761f7a6(param_1 + 0x40,local_6c,&local_68);
  *param_2 = local_6e;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f5ce FUN_14761f5ce body=224 status=ok
// SIG undefined FUN_14761f5ce(void)

undefined2 *
FUN_14761f5ce(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [42];
  undefined2 local_6e;
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_54;
  undefined2 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_68 = (undefined8 *)0x0;
    FUN_14485c47a(&local_68,param_3);
    local_54 = local_68;
  }
  local_4c = param_5;
  local_44 = 0;
  FUN_147607aa4(param_1 + 8,&local_68);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *local_60 = *param_4;
    param_4 = param_4 + 1;
    local_60 = local_60 + 1;
  }
  local_60 = (undefined8 *)&local_6e;
  local_6e = local_68._0_2_;
  local_68 = &local_54;
  FUN_14761f7a6(param_1 + 0x40,local_6c,&local_68);
  *param_2 = local_6e;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f6b0 FUN_14761f6b0 body=245 status=ok
// SIG undefined FUN_14761f6b0(void)

undefined2 *
FUN_14761f6b0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_147607aa4(param_1 + 8,&local_58);
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *local_50 = *param_4;
    param_4 = param_4 + 1;
    local_50 = local_50 + 1;
  }
  local_50 = (undefined8 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_14761f7a6(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f7a6 FUN_14761f7a6 body=339 status=ok
// SIG undefined FUN_14761f7a6(void)

undefined4 * FUN_14761f7a6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14761f8fa(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_14761f9e0(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14761edfc(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761f8fa FUN_14761f8fa body=229 status=ok
// SIG undefined FUN_14761f8fa(void)

int * FUN_14761f8fa(longlong *param_1,int *param_2)

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



// FUNCTION 14761f9e0 FUN_14761f9e0 body=93 status=ok
// SIG undefined FUN_14761f9e0(void)

undefined8 FUN_14761f9e0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14761efcc(), iVar7 != -1)) {
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
    FUN_14761ed46(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14761fa3e FUN_14761fa3e body=31 status=ok
// SIG undefined FUN_14761fa3e(void)

undefined8 FUN_14761fa3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761fa5e FUN_14761fa5e body=790 status=ok
// SIG undefined FUN_14761fa5e(void)

void FUN_14761fa5e(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_1d8 [32];
  ushort *local_1b8;
  code **local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  ushort local_18c [2];
  ushort *local_188;
  undefined8 *local_180;
  undefined2 local_174;
  ushort local_172;
  undefined8 local_170;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined1 local_13f;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118;
  byte bStack_117;
  uint local_114;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = FUN_14009d2a0();
  local_150 = *(undefined2 *)(lVar2 + 0x4a);
  local_14a = *(undefined2 *)(lVar2 + 0x108);
  local_14e = *(undefined4 *)(lVar2 + 0x104);
  puVar5 = (undefined2 *)*param_3;
  local_144 = puVar5[4];
  local_148 = *puVar5;
  local_146 = puVar5[2];
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = 0;
  local_172 = *(ushort *)(param_2 + 0x14);
  local_188 = &local_172;
  local_180 = &local_170;
  FUN_147620758(&local_150,local_128);
  local_114 = *(uint *)(param_6 + 0x290);
  bVar3 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
  _local_118 = CONCAT11(bVar3,local_118);
  local_1b8 = local_18c;
  local_18c[0] = CONCAT11(bVar3,local_118) & 0xfdff;
  local_1b0 = (code **)&local_170;
  local_170 = FUN_147620adc;
  local_168 = CONCAT11(local_168._1_1_,3);
  local_1a8 = param_2;
  FUN_1476208c0(local_128,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_130 = 0x10000000000;
    puVar5 = (undefined2 *)*param_3;
    iVar1 = *(int *)(param_3 + 1);
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        FUN_140dba9e6(&local_150,*(undefined2 *)((longlong)puVar5 + lVar4));
        lVar4 = lVar4 + 4;
      } while ((longlong)iVar1 * 4 != lVar4);
      puVar5 = (undefined2 *)*param_3;
    }
    local_164 = puVar5[4];
    local_168 = *puVar5;
    local_166 = puVar5[2];
    local_170 = (code *)CONCAT26(*(undefined2 *)(lVar2 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar2 + 0x104),
                                          *(undefined2 *)(lVar2 + 0x4a)));
    local_15f = 0;
    local_15c = 0x6ff;
    local_158 = 0;
    FUN_147621440(local_128);
    FUN_140dad9c2(local_108,&local_150,2);
    local_174 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_172;
    local_58 = (code *)&local_174;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_150,0x84);
    local_114 = *(uint *)(param_6 + 0x290);
    bVar3 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
    _local_118 = CONCAT11(bVar3,local_118);
    local_172 = CONCAT11(bVar3,local_118) & 0xfdff;
    local_58 = FUN_147621708;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1b8 = &local_172;
    local_1b0 = &local_58;
    local_1a8 = param_2;
    local_1a0 = param_3;
    FUN_1476214e4(local_128,local_18c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761fd76 FUN_14761fd76 body=787 status=ok
// SIG undefined FUN_14761fd76(void)

void FUN_14761fd76(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined2 *local_188;
  uint *local_180;
  undefined8 *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 local_15e;
  undefined2 local_15c;
  uint local_15a;
  undefined2 local_156;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined1 local_14b;
  undefined4 local_148;
  undefined1 local_144;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118 [17];
  byte local_107;
  uint local_104;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = FUN_14009d2a0();
  local_140 = *(undefined2 *)(lVar4 + 0x4a);
  local_13a = *(undefined2 *)(lVar4 + 0x108);
  local_13e = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_134 = puVar6[4];
  local_138 = *puVar6;
  local_136 = puVar6[2];
  local_12f = 0;
  local_12c = 0x6ff;
  local_128 = 0;
  local_15c = *(undefined2 *)(param_2 + 0x14);
  local_188 = &local_15c;
  local_180 = &local_15a;
  local_198 = param_3;
  FUN_147620758(&local_140,local_118);
  local_104 = *(uint *)(param_7 + 0x290);
  local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
  local_1b8 = param_6;
  local_1b0 = param_2;
  FUN_1432fd630(local_118,&local_178,param_7 + 0x28,param_5);
  if (local_178 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_178 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_178)(local_178,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_4 + 4)) {
    local_120 = 0x10000000000;
    puVar6 = (undefined2 *)*local_198;
    iVar2 = *(int *)(local_198 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_140,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_198;
    }
    puVar3 = local_198;
    local_15c = *(undefined2 *)(lVar4 + 0x4a);
    local_156 = *(undefined2 *)(lVar4 + 0x108);
    local_15a = *(uint *)(lVar4 + 0x104);
    local_150 = puVar6[4];
    local_154 = *puVar6;
    local_152 = puVar6[2];
    local_14b = 0;
    local_148 = 0x6ff;
    local_144 = 0;
    FUN_147621440(local_118);
    FUN_140dad9c2(local_f8,&local_140,2);
    local_15e = *(undefined2 *)(param_2 + 0x14);
    local_168 = &local_15c;
    local_170 = &local_15e;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_140,0x84);
    local_104 = *(uint *)(param_7 + 0x290);
    local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
    local_1a8 = puVar3;
    local_1b8 = param_6;
    local_1b0 = param_2;
    FUN_1432fdae0(local_118,&local_190,param_7 + 0x28,param_5);
    if (local_190 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_190 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_190)(local_190,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762008a FUN_14762008a body=520 status=ok
// SIG undefined FUN_14762008a(void)

longlong * FUN_14762008a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147622da6(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1476200ce;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c6330;
  plVar5 = plVar4 + 2;
  FUN_147622f14(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_14762482a(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_147620259:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000147620248:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x000147620248;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_147620259;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_147622e5a(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1476200ce:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147620296 FUN_147620296 body=130 status=ok
// SIG undefined FUN_147620296(void)

void FUN_147620296(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1476248d2(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762031a FUN_14762031a body=616 status=ok
// SIG undefined FUN_14762031a(void)

void FUN_14762031a(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_147624c5c(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147620584 FUN_147620584 body=466 status=ok
// SIG undefined FUN_147620584(void)

void FUN_147620584(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = (int)param_4[1];
  if (0 < iVar3) {
    lVar5 = *param_6;
    local_98 = param_5 + 0x28;
    lVar8 = 0;
    do {
      if (*(short *)(*param_4 + lVar8 * 2) != -1) {
        FUN_1432d4ca4(local_98,&local_60);
        lVar2 = local_60;
        lVar7 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*param_3 + 8));
        puVar6 = (undefined8 *)(local_50 + lVar7 * 8);
        if (local_50 == 0) {
          puVar6 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_78,*(undefined2 *)(*param_3 + 4));
        puVar4 = (undefined8 *)(local_68 + lVar7 * 8);
        if (local_68 == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_90,*(undefined2 *)*param_3);
        lVar2 = *param_3;
        if ((local_80 != 0) &&
           (puVar1 = (undefined8 *)(local_80 + lVar7 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)(lVar5 + (ulonglong)*(ushort *)(lVar2 + 2)) = *puVar1;
        }
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar5 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar4;
        }
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar5 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar6;
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar8 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147620758 FUN_147620758 body=148 status=ok
// SIG undefined FUN_147620758(void)

undefined8 * FUN_147620758(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  FUN_1476207ee(param_2,param_2 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476207ee FUN_1476207ee body=209 status=ok
// SIG undefined FUN_1476207ee(void)

void FUN_1476207ee(undefined2 *param_1,undefined8 param_2)

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
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[5];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[6];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476208c0 FUN_1476208c0 body=539 status=ok
// SIG undefined FUN_1476208c0(void)

int * FUN_1476208c0(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     ((param_1[6] == -1 || (cVar4 = FUN_147620b2e(param_1,param_3), cVar4 == '\0')))) {
    *param_2 = -1;
    goto LAB_14762090e;
  }
  plVar5 = (longlong *)FUN_147620c71(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_147620c0e(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_147620d64;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147620a68;
    }
  }
  else {
LAB_147620a68:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_14762090e:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147620adc FUN_147620adc body=80 status=ok
// SIG undefined FUN_147620adc(void)

void FUN_147620adc(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147620f18(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147620b2e FUN_147620b2e body=223 status=ok
// SIG undefined FUN_147620b2e(void)

undefined8 FUN_147620b2e(ushort *param_1,undefined8 param_2)

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
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[6];
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



// FUNCTION 147620c0e FUN_147620c0e body=99 status=ok
// SIG undefined FUN_147620c0e(void)

void FUN_147620c0e(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  FUN_140dba9e6(param_2,param_1[5]);
  FUN_140dba9e6(param_2,param_1[6]);
  return;
}



// FUNCTION 147620c71 FUN_147620c71 body=180 status=ok
// SIG undefined FUN_147620c71(void)

undefined8 * FUN_147620c71(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c62d0;
  puVar8[2] = &PTR_FUN_14a4c62e8;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  *(undefined4 *)((longlong)puVar8 + 0x3c) = param_1[3];
  *(undefined4 *)(puVar8 + 8) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar6;
  *(undefined4 *)(puVar8 + 9) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147620d28 FUN_147620d28 body=29 status=ok
// SIG undefined FUN_147620d28(void)

undefined8 FUN_147620d28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147620d46 FUN_147620d46 body=29 status=ok
// SIG undefined FUN_147620d46(void)

undefined8 FUN_147620d46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147620d7c FUN_147620d7c body=411 status=ok
// SIG undefined FUN_147620d7c(void)

void FUN_147620d7c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,7);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_147620dc4;
      puVar1 = puVar1 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_147620dc4:
  lVar3 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar3 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar3 = *param_3;
  }
  lVar4 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar4 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar3 + lVar9 * 4 + 4 + lVar4 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar6 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar6;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar3 = (ulonglong)uVar6 << 5;
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[4]) goto LAB_147620e60;
      puVar7 = puVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_147620e60:
  lVar3 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar3 + 0x10 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar3 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar6;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar2 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[5]) goto LAB_147620eb5;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_147620eb5:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar3 + 0x14 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar3 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[6]) goto LAB_147620efa;
      puVar1 = puVar1 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_147620efa:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar3 + 0x18 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147620f18 FUN_147620f18 body=232 status=ok
// SIG undefined FUN_147620f18(void)

void FUN_147620f18(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar4 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar4;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar4;
  }
  lVar5 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar5 = lVar4;
  }
  local_68 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_68 = lVar4;
  }
  local_60 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    local_58 = lVar4;
  }
  FUN_147621002(param_1,lVar1,lVar5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147621002 FUN_147621002 body=420 status=ok
// SIG undefined FUN_147621002(void)

void FUN_147621002(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)(param_2 + 0xe);
  uVar6 = (ulonglong)uVar3;
  lVar4 = *param_4;
  if (lVar4 == 0) {
    lVar4 = param_4[1];
    if (lVar4 == 0) {
      lVar4 = param_4[2];
      if (uVar3 != 0 && lVar4 != 0) {
        lVar8 = 0;
        do {
          local_50 = *(undefined8 *)(param_7 + lVar8);
          local_58 = *(undefined8 *)(param_6 + lVar8);
          local_60 = *(undefined8 *)(param_5 + lVar8);
          FUN_1476211a8(*(undefined8 *)(lVar4 + lVar8 * 2),*(undefined8 *)(param_3 + lVar8),
                        &local_60);
          lVar8 = lVar8 + 8;
        } while ((ulonglong)uVar3 * 8 != lVar8);
      }
    }
    else if (uVar6 != 0) {
      uVar7 = 0;
      do {
        uVar5 = (ulonglong)*(ushort *)(lVar4 + uVar7 * 2);
        if (uVar5 != 0) {
          lVar8 = *(longlong *)(param_3 + uVar7 * 8);
          uVar1 = *(undefined8 *)(param_6 + uVar7 * 8);
          uVar2 = *(undefined8 *)(param_7 + uVar7 * 8);
          *(undefined8 *)(lVar8 + uVar5) = *(undefined8 *)(param_5 + uVar7 * 8);
          *(undefined8 *)(lVar8 + 8 + uVar5) = uVar1;
          *(undefined8 *)(lVar8 + 0x10 + uVar5) = uVar2;
        }
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
  }
  else if (uVar6 != 0) {
    uVar7 = 0;
    do {
      local_50 = *(undefined8 *)(param_7 + uVar7 * 8);
      local_58 = *(undefined8 *)(param_6 + uVar7 * 8);
      local_60 = *(undefined8 *)(param_5 + uVar7 * 8);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar4 + uVar7 * 2)))
                (*(undefined8 *)(param_3 + uVar7 * 8),&local_60);
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476211a8 FUN_1476211a8 body=255 status=ok
// SIG undefined FUN_1476211a8(void)

void FUN_1476211a8(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_147621209;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_3 + 4);
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1476212a8(param_2,lVar6,param_3);
  }
LAB_147621209:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476212a8 FUN_1476212a8 body=402 status=ok
// SIG undefined FUN_1476212a8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1476212a8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x147621347;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14762135e;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x18) goto LAB_1476213f9;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476213af;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476213c8;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x18);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476213f5;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1476213f9:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_147621423;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147621440 FUN_147621440 body=162 status=ok
// SIG undefined FUN_147621440(void)

undefined8 * FUN_147621440(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  ulonglong *local_28;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[8] = 0x10000000000;
  param_1[0xd] = 0x10000000000;
  param_1[0x14] = 0x10000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0x10000000000;
  local_1a = *(undefined2 *)param_1;
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 4);
  FUN_140dad887((undefined2 *)((longlong)param_1 + 2),param_1 + 4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476214e4 FUN_1476214e4 body=546 status=ok
// SIG undefined FUN_1476214e4(void)

int * FUN_1476214e4(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*param_1 == -1) || (cVar4 = FUN_14762175a(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_147621518;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_14762180e(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_147621790(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476218fe;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147621693;
    }
  }
  else {
LAB_147621693:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147621518:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147621708 FUN_147621708 body=80 status=ok
// SIG undefined FUN_147621708(void)

void FUN_147621708(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_147621ab4(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762175a FUN_14762175a body=53 status=ok
// SIG undefined FUN_14762175a(void)

undefined4 FUN_14762175a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 147621790 FUN_147621790 body=126 status=ok
// SIG undefined FUN_147621790(void)

void FUN_147621790(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[5] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[6] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 14762180e FUN_14762180e body=177 status=ok
// SIG undefined FUN_14762180e(void)

undefined8 *
FUN_14762180e(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c62f0;
  param_1[2] = &PTR_FUN_14a4c6308;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2[3];
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476218c2 FUN_1476218c2 body=29 status=ok
// SIG undefined FUN_1476218c2(void)

undefined8 FUN_1476218c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476218e0 FUN_1476218e0 body=29 status=ok
// SIG undefined FUN_1476218e0(void)

undefined8 FUN_1476218e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147621916 FUN_147621916 body=414 status=ok
// SIG undefined FUN_147621916(void)

void FUN_147621916(short *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,7);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar2 = *(ulonglong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == *param_1) goto LAB_14762195e;
      puVar2 = puVar2 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_14762195e:
  lVar4 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar4 + lVar8 * 4) = (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar4 = *param_3;
  }
  lVar5 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar2 = *(ulonglong **)(param_2 + 0x28);
      lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar2 + 0x1e) == param_1[lVar5 + 1]) {
          if (puVar2 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
              *(int *)(lVar4 + lVar8 * 4 + 4 + lVar5 * 4) =
                   (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar2 = puVar2 + 4;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  uVar1 = *(ushort *)(param_2 + 0xc);
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    lVar4 = *param_3;
    puVar2 = *(ulonglong **)(param_2 + 0x28);
    lVar5 = 0;
    do {
      if (*(short *)((longlong)puVar2 + lVar5 + 0x1e) == param_1[4]) {
        if ((longlong)puVar2 + lVar5 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar2 + lVar5)) {
            *(int *)(lVar4 + 0x10 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar2 + lVar5) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar2 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
    } while ((ulonglong)uVar1 << 5 != lVar5);
    puVar6 = puVar2;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == param_1[5]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 0x14 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar3 = (uint)*(ushort *)(param_2 + 0xc);
            if (uVar3 == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar2 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar2));
    puVar6 = (ulonglong *)((ulonglong)(uVar3 << 5) + (longlong)puVar2);
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[6]) {
        if (puVar2 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar2 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar4 + 0x18 + lVar8 * 4) = (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != puVar6);
  }
  return;
}



// FUNCTION 147621ab4 FUN_147621ab4 body=232 status=ok
// SIG undefined FUN_147621ab4(void)

void FUN_147621ab4(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar4 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar4;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar4;
  }
  lVar5 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar5 = lVar4;
  }
  local_68 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_68 = lVar4;
  }
  local_60 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    local_58 = lVar4;
  }
  FUN_147621b9e(param_1,lVar1,lVar5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147621b9e FUN_147621b9e body=115 status=ok
// SIG undefined FUN_147621b9e(void)

void FUN_147621b9e(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_147621e98();
      }
    }
    else {
      FUN_147621d76();
    }
    return;
  }
  FUN_147621c12();
  return;
}



// FUNCTION 147621c12 FUN_147621c12 body=355 status=ok
// SIG undefined FUN_147621c12(void)

void FUN_147621c12(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 *param_7)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98 [4];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_a0 = param_4;
  if ((ulonglong)uVar1 != 0) {
    uVar8 = 0;
    puVar5 = param_6;
    puVar6 = param_7;
    do {
      uVar7 = (ulonglong)*(ushort *)(local_a0 + uVar8 * 2);
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (local_78,*(undefined8 *)(param_3 + uVar8 * 8));
      puVar3 = puVar6;
      if (param_7 == (undefined8 *)0x0) {
        puVar3 = param_7;
      }
      puVar4 = puVar5;
      if (param_6 == (undefined8 *)0x0) {
        puVar4 = param_6;
      }
      local_98[2] = local_68;
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_98 + (ulonglong)*(ushort *)(lVar2 + 2)) =
             *(undefined8 *)(param_5 + uVar8 * 8);
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_98 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar4;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_98 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar3;
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (*(undefined8 *)(param_3 + uVar8 * 8),local_98);
      uVar8 = uVar8 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar1 != uVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147621d76 FUN_147621d76 body=288 status=ok
// SIG undefined FUN_147621d76(void)

void FUN_147621d76(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 *param_7)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    puVar4 = param_6;
    puVar6 = param_7;
    do {
      uVar10 = (ulonglong)*(ushort *)(param_4 + uVar5 * 2);
      lVar2 = *(longlong *)(param_3 + uVar5 * 8);
      puVar7 = puVar6;
      if (param_7 == (undefined8 *)0x0) {
        puVar7 = param_7;
      }
      puVar8 = puVar4;
      if (param_6 == (undefined8 *)0x0) {
        puVar8 = param_6;
      }
      local_58 = *(undefined8 *)(lVar2 + 0x10 + uVar10);
      local_68 = *(undefined8 *)(lVar2 + uVar10);
      uStack_60 = ((undefined8 *)(lVar2 + uVar10))[1];
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_5 + uVar5 * 8);
      }
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar8;
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar7;
      }
      puVar9 = (undefined4 *)(lVar2 + uVar10);
      *(undefined8 *)(puVar9 + 4) = local_58;
      *puVar9 = (undefined4)local_68;
      puVar9[1] = local_68._4_4_;
      puVar9[2] = (undefined4)uStack_60;
      puVar9[3] = uStack_60._4_4_;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar1 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
  local_70 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147621e98 FUN_147621e98 body=317 status=ok
// SIG undefined FUN_147621e98(void)

void FUN_147621e98(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(param_4 + lVar6 * 2);
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      FUN_147621fd6(uVar2,local_78,*(undefined8 *)(param_3 + lVar6));
      puVar4 = (undefined8 *)(lVar6 + param_7);
      if (param_7 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(param_6 + lVar6);
      if (param_6 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      local_98[2] = local_68;
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_98 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_5 + lVar6);
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_98 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_98 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar4;
      }
      FUN_1476211a8(uVar2,*(undefined8 *)(param_3 + lVar6),local_98);
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147621fd6 FUN_147621fd6 body=136 status=ok
// SIG undefined FUN_147621fd6(void)

undefined8 * FUN_147621fd6(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1406f9c46(0,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
    param_2[2] = *(undefined8 *)(puVar5 + 4);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)param_2 = *puVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147622060 FUN_147622060 body=135 status=ok
// SIG undefined FUN_147622060(void)

undefined4 * FUN_147622060(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476220e8 FUN_1476220e8 body=308 status=ok
// SIG undefined FUN_1476220e8(void)

void FUN_1476220e8(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[6];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762221e FUN_14762221e body=933 status=ok
// SIG undefined FUN_14762221e(void)

void FUN_14762221e(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  int local_18c;
  int local_188;
  int local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[6]) goto LAB_14762226e;
      puVar11 = puVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_14762226e:
  local_184 = *(int *)(lVar2 + 0x14);
  if (local_184 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[5]) goto LAB_1476222a8;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1476222a8:
  local_168 = *puVar11;
  local_188 = *(int *)(lVar2 + 0x14);
  if (local_188 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[4]) goto LAB_1476222e9;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476222e9:
  local_170 = *puVar9;
  local_18c = *(int *)(lVar2 + 0x14);
  if (local_18c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_178 = *puVar8;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_140,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == *param_4) goto LAB_14762236f;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_14762236f:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_160 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  lVar6 = local_100;
  lVar7 = local_118;
  lVar2 = local_130;
  uVar5 = local_168;
  uVar4 = local_170;
  uVar3 = local_178;
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  local_180 = *puVar10;
  local_e0 = local_140;
  local_d8 = local_138;
  local_140 = 0;
  local_d0 = local_130;
  local_130 = 0;
  local_c8 = local_128;
  local_c0 = local_120;
  local_128 = 0;
  local_b8 = local_118;
  local_118 = 0;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_90 = local_18c;
  local_88 = local_178;
  local_78 = local_188;
  local_70 = local_170;
  local_60 = local_184;
  local_58 = local_168;
  local_f8 = puVar10;
  local_f0 = iVar1;
  local_e8 = local_180;
  local_98 = puVar8;
  local_80 = puVar9;
  local_68 = puVar11;
  FUN_1432f59b8();
  local_158 = 0;
  lStack_150 = 0;
  local_148 = 0;
  if (lVar2 != 0) {
    local_158 = lVar2;
  }
  if (lVar7 != 0) {
    lStack_150 = lVar7;
  }
  if (lVar6 != 0) {
    local_148 = lVar6;
  }
  local_198 = uVar5;
  local_1a0 = uVar4;
  local_1a8 = uVar3;
  FUN_147621002(local_160,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                local_180,&local_158);
  FUN_1476225c4(&local_f8);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476225c4 FUN_1476225c4 body=172 status=ok
// SIG undefined FUN_1476225c4(void)

void FUN_1476225c4(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147622662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147622670 FUN_147622670 body=118 status=ok
// SIG undefined FUN_147622670(void)

longlong FUN_147622670(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147622060();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476226e8 FUN_1476226e8 body=135 status=ok
// SIG undefined FUN_1476226e8(void)

undefined4 * FUN_1476226e8(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147622770 FUN_147622770 body=320 status=ok
// SIG undefined FUN_147622770(void)

void FUN_147622770(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476228b2 FUN_1476228b2 body=947 status=ok
// SIG undefined FUN_1476228b2(void)

void FUN_1476228b2(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  short local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_f8,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_110,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_128,param_4[4]);
  local_34 = param_4[3];
  local_38 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_170,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_38,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_147622991;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_147622991:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_d0 = *puVar4;
  local_c8 = local_170;
  local_c0 = local_168;
  local_170 = 0;
  local_b8 = local_160;
  uStack_b0 = uStack_158;
  local_160 = 0;
  uStack_158 = 0;
  local_a8 = local_150;
  local_a0 = local_148;
  local_148 = 0;
  local_98 = local_140;
  local_90 = local_138;
  local_140 = 0;
  local_88 = local_130;
  local_130 = 0;
  local_80 = local_128;
  local_78 = local_120;
  local_128 = 0;
  local_70 = local_118;
  local_118 = 0;
  local_68 = local_110;
  local_60 = local_108;
  local_110 = 0;
  local_58 = local_100;
  local_100 = 0;
  local_50 = local_f8;
  local_48 = local_f0;
  local_f8 = 0;
  local_40 = local_e8;
  local_e8 = 0;
  local_e0 = puVar4;
  local_d8 = iVar1;
  FUN_1432f59b8();
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 0x18) = *(int *)(local_128 + 0x18) + -1;
    UNLOCK();
    if (local_120 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_128 + 8));
    }
  }
  if (local_110 != 0) {
    LOCK();
    *(int *)(local_110 + 0x18) = *(int *)(local_110 + 0x18) + -1;
    UNLOCK();
    if (local_108 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_110 + 8));
    }
  }
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 0x18) = *(int *)(local_f8 + 0x18) + -1;
    UNLOCK();
    if (local_f0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_f8 + 8));
    }
  }
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  if (local_b8 != 0) {
    local_188 = local_b8;
  }
  if (local_a0 != 0) {
    lStack_180 = local_a0;
  }
  if (local_88 != 0) {
    local_178 = local_88;
  }
  local_198 = local_40;
  local_1a0 = local_58;
  local_1a8 = local_70;
  FUN_147621b9e(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_d0,
                &local_188);
  FUN_147622c66(&local_e0);
  if ((local_30 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147622c66 FUN_147622c66 body=172 status=ok
// SIG undefined FUN_147622c66(void)

void FUN_147622c66(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147622d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147622d12 FUN_147622d12 body=146 status=ok
// SIG undefined FUN_147622d12(void)

longlong FUN_147622d12(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1476226e8();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xfc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x104) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147622da6 FUN_147622da6 body=179 status=ok
// SIG undefined FUN_147622da6(void)

undefined8 * FUN_147622da6(longlong param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_147622e00;
    }
  }
  uVar6 = 0;
LAB_147622e00:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147622e5a FUN_147622e5a body=184 status=ok
// SIG undefined FUN_147622e5a(void)

void FUN_147622e5a(longlong param_1,undefined4 param_2,undefined8 *param_3)

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



// FUNCTION 147622f14 FUN_147622f14 body=241 status=ok
// SIG undefined FUN_147622f14(void)

undefined8 * FUN_147622f14(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_1 = &PTR_FUN_14a4c6350;
  param_1[0x1b] = &PTR_FUN_14a4c6398;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147623006 FUN_147623006 body=9 status=ok
// SIG undefined FUN_147623006(void)

void FUN_147623006(longlong param_1)

{
  FUN_147623c28(param_1 + 0x10);
  return;
}



// FUNCTION 147623010 FUN_147623010 body=29 status=ok
// SIG undefined FUN_147623010(void)

undefined8 FUN_147623010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762302e FUN_14762302e body=38 status=ok
// SIG undefined FUN_14762302e(void)

undefined8 FUN_14762302e(undefined8 param_1,int param_2)

{
  FUN_147623c28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762307a FUN_14762307a body=82 status=ok
// SIG undefined FUN_14762307a(void)

void FUN_14762307a(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_147623cd6();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476230ce FUN_1476230ce body=1073 status=ok
// SIG undefined FUN_1476230ce(void)

ulonglong FUN_1476230ce(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong unaff_RBP;
  undefined7 uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar7 == '\0') goto LAB_147623147;
  }
  uVar10 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
      local_98 = *puVar8;
      uStack_90 = puVar8[1];
      local_88 = *(undefined4 *)(puVar8 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uStack_80 = *(undefined4 *)(puVar8 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar8 + 0x1c);
      local_78 = puVar8[4];
      local_60 = *(byte *)(puVar8 + 7);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar8 + 5);
      local_58 = *(byte *)(puVar8 + 8);
      FUN_1410d7556(param_1 + 0x18,&local_98);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48 + 0x38)])();
      FUN_147623e3a(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar11 = (ulonglong)uVar3;
        uVar12 = uVar3;
        do {
          uVar11 = uVar11 >> 1;
          uVar13 = (uint)uVar11 + (int)uVar9;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar13 * 0x38) < param_2) {
            uVar9 = (ulonglong)(uVar13 + (uVar12 & 1));
          }
          bVar6 = 1 < uVar12;
          uVar12 = (uint)uVar11;
        } while (bVar6);
      }
      if (((int)uVar9 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 0x38) <= param_2)) {
        FUN_147623eac(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_147623d60(&local_98,&local_88);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_147623336:
      unaff_RBP = 0;
      goto LAB_147623147;
    }
    unaff_RBP = CONCAT71(uVar10,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48) & 1) == 0)
    goto LAB_147623147;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0xa0);
    uVar13 = 0;
    uVar12 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar12 >> 1) + uVar13;
        if (*(int *)(lVar5 + (ulonglong)uVar1 * 0x38) < param_2) {
          uVar13 = uVar1 + (uVar12 & 1);
        }
        bVar6 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar6);
    }
    if ((((int)uVar13 < (int)uVar3) && (*(int *)(lVar5 + (ulonglong)uVar13 * 0x38) <= param_2)) &&
       (lVar5 + (ulonglong)uVar13 * 0x38 != -8)) {
      FUN_147623d60((longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar9 = 0;
      if (0 < (int)uVar3) {
        uVar11 = (ulonglong)uVar3;
        uVar12 = uVar3;
        do {
          uVar11 = uVar11 >> 1;
          uVar13 = (uint)uVar11 + (int)uVar9;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar13 * 0x38) < param_2) {
            uVar9 = (ulonglong)(uVar13 + (uVar12 & 1));
          }
          bVar6 = 1 < uVar12;
          uVar12 = (uint)uVar11;
        } while (bVar6);
      }
      unaff_RBP = CONCAT71(uVar10,1);
      if (((int)uVar9 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 0x38) <= param_2)) {
        FUN_147623eac(param_1 + 0xa0);
      }
      goto LAB_147623147;
    }
    unaff_RBP = CONCAT71(uVar10,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48);
      if ((bVar2 & 1) == 0) goto LAB_147623147;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
      *(byte *)(puVar8 + 8) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_147623147;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
      if ((*(byte *)(puVar8 + 8) & 2) == 0) {
        local_98 = *puVar8;
        uStack_90 = puVar8[1];
        local_88 = *(undefined4 *)(puVar8 + 2);
        uStack_84 = *(undefined4 *)((longlong)puVar8 + 0x14);
        uStack_80 = *(undefined4 *)(puVar8 + 3);
        uStack_7c = *(undefined4 *)((longlong)puVar8 + 0x1c);
        local_78 = puVar8[4];
        local_60 = *(byte *)(puVar8 + 7);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar8 + 5);
        local_58 = *(byte *)(puVar8 + 8);
        FUN_1410d7556(param_1 + 0x18,&local_98);
        (*(code *)(&PTR_LAB_14a4c7e10)
                  [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48 + 0x38)])();
        FUN_147623e3a(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar9 = 0;
        if (0 < (int)uVar3) {
          uVar11 = (ulonglong)uVar3;
          uVar12 = uVar3;
          do {
            uVar11 = uVar11 >> 1;
            uVar13 = (uint)uVar11 + (int)uVar9;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar13 * 0x38) < param_2) {
              uVar9 = (ulonglong)(uVar13 + (uVar12 & 1));
            }
            bVar6 = 1 < uVar12;
            uVar12 = (uint)uVar11;
          } while (bVar6);
        }
        if (((int)uVar9 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar9 * 0x38) <= param_2)) {
          FUN_147623eac(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_147623d60(&local_98,&local_88);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_147623336;
      }
      if ((*(byte *)(puVar8 + 8) & 1) == 0) goto LAB_147623147;
    }
  }
  FUN_147623d60(puVar8,puVar8 + 2);
LAB_147623147:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147623500 FUN_147623500 body=407 status=ok
// SIG undefined FUN_147623500(void)

undefined8 FUN_147623500(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar7 = 3;
    if (cVar6 == '\0') goto LAB_1476235b3;
  }
  if (param_3 == '\x01') {
    lVar5 = (longlong)param_2 * 0x48;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar5);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar5 + 0x38)])();
    FUN_147623e3a(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x38) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x38) <= param_2)) {
      FUN_147623eac(param_1 + 0xa0);
    }
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x38) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x38) <= param_2)) {
      FUN_147623eac(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x40 + (longlong)param_2 * 0x48);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar7 = 1;
  }
LAB_1476235b3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476236a2 FUN_1476236a2 body=266 status=ok
// SIG undefined FUN_1476236a2(void)

void FUN_1476236a2(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_147623fb8(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476237ae FUN_1476237ae body=672 status=ok
// SIG undefined FUN_1476237ae(void)

void FUN_1476237ae(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  char *local_b0;
  undefined1 local_a4 [8];
  int local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_b0 = param_2;
  if (uVar4 != 0) {
    lVar1 = param_1 + -0xd8;
    local_c0 = *param_6;
    local_b8 = param_6[1];
    local_c8 = param_6[2];
    param_5 = param_5 + 8;
    uVar10 = 0;
    do {
      local_98 = *(longlong *)(param_4 + uVar10 * 4);
      if ((local_98 != 0) && (cVar6 = FUN_147624296(lVar1,&local_98,param_5), cVar6 != '\0')) {
        FUN_147623fb8(lVar1,local_a4,&local_98,param_5);
        piVar8 = *(int **)(param_1 + -0x28);
        if (*piVar8 != 0) {
          FUN_140adeba6(piVar8,local_a4);
          piVar8 = *(int **)(param_1 + -0x28);
        }
        lVar7 = FUN_1400e4054(piVar8,local_a4);
        if (lVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = CONCAT71((int7)((ulonglong)local_a4 >> 8),'\x02' - (*(short *)(lVar7 + 0xe) == 0)
                           );
        }
        cVar6 = FUN_14762431c(lVar1,local_9c,uVar11 & 0xffffffff);
        if (cVar6 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          if (local_b8 == 0) {
            if (local_c0 != 0) {
              lVar7 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_c0 + uVar10)
              ;
              uStack_60 = *(longlong *)(param_1 + 0x18) + lVar7;
              (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar7))
                        (&local_90,*(undefined8 *)(param_4 + uVar10 * 4));
LAB_147623a31:
              local_68 = local_80;
              uVar12 = local_90;
              uVar13 = uStack_8c;
              uVar14 = uStack_88;
              uVar15 = uStack_84;
              goto LAB_1476239cb;
            }
            if (local_c8 != 0) {
              uStack_60 = *(ulonglong *)(local_c8 + uVar10 * 8);
              local_58 = *(longlong *)(local_c8 + 8 + uVar10 * 8);
              uVar9 = uStack_60;
              if (local_58 != 0) {
                LOCK();
                *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                UNLOCK();
                uVar9 = *(ulonglong *)(local_c8 + uVar10 * 8);
              }
              uStack_50 = 2;
              FUN_147621fd6(uVar9,&local_90,*(undefined8 *)(param_4 + uVar10 * 4));
              goto LAB_147623a31;
            }
          }
          else {
            uVar5 = *(ushort *)(local_b8 + uVar10);
            uStack_60 = (ulonglong)uVar5;
            uStack_50 = 1;
            lVar7 = *(longlong *)(param_4 + uVar10 * 4);
            local_68 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)uVar5);
            puVar2 = (undefined4 *)(lVar7 + (ulonglong)uVar5);
            uVar12 = *puVar2;
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
LAB_1476239cb:
            local_78 = CONCAT44(uVar13,uVar12);
            uStack_70 = CONCAT44(uVar15,uVar14);
          }
          FUN_1476243b6(lVar1,local_9c,uVar11 & 0xffffffff,&local_78);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_50 & 0xff])(&uStack_60);
        }
        if (*local_b0 == '\x01') {
          pbVar3 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x40 + (longlong)local_9c * 0x48);
          *pbVar3 = *pbVar3 | 2;
        }
      }
      uVar10 = uVar10 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar4 * 2 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147623a50 FUN_147623a50 body=38 status=ok
// SIG undefined FUN_147623a50(void)

undefined8 FUN_147623a50(undefined8 param_1,int param_2)

{
  FUN_147623c28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147623a76 FUN_147623a76 body=52 status=ok
// SIG undefined FUN_147623a76(void)

void FUN_147623a76(longlong *param_1)

{
  FUN_147623ae0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147623aaa FUN_147623aaa body=53 status=ok
// SIG undefined FUN_147623aaa(void)

void FUN_147623aaa(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147623ae0 FUN_147623ae0 body=327 status=ok
// SIG undefined FUN_147623ae0(void)

void FUN_147623ae0(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x48 + 0x38)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147623c28 FUN_147623c28 body=173 status=ok
// SIG undefined FUN_147623c28(void)

void FUN_147623c28(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c63b0;
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
  FUN_147623aaa(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147623a76(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147623cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147623cd6 FUN_147623cd6 body=136 status=ok
// SIG undefined FUN_147623cd6(void)

void FUN_147623cd6(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x48);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147623d60 FUN_147623d60 body=177 status=ok
// SIG undefined FUN_147623d60(void)

void FUN_147623d60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_24 = param_1[1];
  lVar6 = FUN_14479d2ce(&local_28);
  if (lVar6 != 0) {
    if (*(char *)(param_2 + 10) == '\x01') {
      uVar2 = *(ushort *)(param_2 + 6);
      *(undefined8 *)(lVar6 + 0x10 + (ulonglong)uVar2) = *(undefined8 *)(param_2 + 4);
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      puVar1 = (undefined4 *)(lVar6 + (ulonglong)uVar2);
      *puVar1 = *param_2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    if (*(char *)(param_2 + 10) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    if (*(longlong *)(param_2 + 6) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147623e3a FUN_147623e3a body=114 status=ok
// SIG undefined FUN_147623e3a(void)

void FUN_147623e3a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 147623eac FUN_147623eac body=101 status=ok
// SIG undefined FUN_147623eac(void)

void FUN_147623eac(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x38 + 0x30)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x38);
    memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(int)(~param_2 + iVar2) * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_147623f12(param_1);
  return;
}



// FUNCTION 147623f12 FUN_147623f12 body=62 status=ok
// SIG undefined FUN_147623f12(void)

void FUN_147623f12(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147623f50(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 147623f50 FUN_147623f50 body=104 status=ok
// SIG undefined FUN_147623f50(void)

ulonglong FUN_147623f50(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147623f86;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_147623f86:
  return param_2 & 0xffffffff;
}



// FUNCTION 147623fb8 FUN_147623fb8 body=189 status=ok
// SIG undefined FUN_147623fb8(void)

longlong FUN_147623fb8(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_147624076(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147624076 FUN_147624076 body=313 status=ok
// SIG undefined FUN_147624076(void)

int * FUN_147624076(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_68._0_4_ = *param_3;
    local_68._4_4_ = param_3[1];
    uStack_60._0_4_ = param_3[2];
    uStack_60._4_4_ = param_3[3];
    FUN_1476241b0(param_1 + 0x68,local_78);
    *local_70 = (undefined4)local_68;
    local_70[1] = local_68._4_4_;
    local_70[2] = (undefined4)uStack_60;
    local_70[3] = uStack_60._4_4_;
    *(undefined1 *)(local_70 + 0xe) = 0;
    *(undefined8 *)(local_70 + 10) = 0;
    *(undefined1 *)(local_70 + 0x10) = 0;
    *param_2 = local_78[0];
    local_68 = param_3;
    uStack_60 = param_2;
    FUN_140bf3cbe(plVar1,local_78,&local_68,0);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476241b0 FUN_1476241b0 body=230 status=ok
// SIG undefined FUN_1476241b0(void)

int * FUN_1476241b0(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 147624296 FUN_147624296 body=132 status=ok
// SIG undefined FUN_147624296(void)

byte FUN_147624296(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_14762452c(param_1,local_24,param_2,param_3);
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



// FUNCTION 14762431c FUN_14762431c body=154 status=ok
// SIG undefined FUN_14762431c(void)

ulonglong FUN_14762431c(longlong param_1,int param_2,char param_3)

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
  
  lVar7 = (longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x40);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x38) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x38) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x38;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x40));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476243b6 FUN_1476243b6 body=373 status=ok
// SIG undefined FUN_1476243b6(void)

void FUN_1476243b6(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2 * 0x48 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar6 = *(byte *)(lVar7 + 0x40);
    if ((bVar6 & 1) == 0) {
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(param_4 + 4);
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *(undefined4 *)(lVar7 + 0x10) = *param_4;
      *(undefined4 *)(lVar7 + 0x14) = uVar2;
      *(undefined4 *)(lVar7 + 0x18) = uVar3;
      *(undefined4 *)(lVar7 + 0x1c) = uVar4;
      if ((undefined4 *)(lVar7 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 10));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 10)])
                  (&local_58,param_4 + 6);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar7 + 0x38);
        uVar2 = *(undefined4 *)(lVar7 + 0x28);
        uVar3 = *(undefined4 *)(lVar7 + 0x2c);
        uVar4 = *(undefined4 *)(lVar7 + 0x30);
        uVar5 = *(undefined4 *)(lVar7 + 0x34);
        *(undefined4 *)(lVar7 + 0x28) = local_58;
        *(undefined4 *)(lVar7 + 0x2c) = uStack_54;
        *(undefined4 *)(lVar7 + 0x30) = uStack_50;
        *(undefined4 *)(lVar7 + 0x34) = uStack_4c;
        *(ulonglong *)(lVar7 + 0x38) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar6 = *(byte *)(lVar7 + 0x40);
      }
      *(byte *)(lVar7 + 0x40) = bVar6 | 1;
    }
    else {
      FUN_147624692(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(param_4 + 4);
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *(undefined4 *)(lVar7 + 0x10) = *param_4;
    *(undefined4 *)(lVar7 + 0x14) = uVar2;
    *(undefined4 *)(lVar7 + 0x18) = uVar3;
    *(undefined4 *)(lVar7 + 0x1c) = uVar4;
    if ((undefined4 *)(lVar7 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 10));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 10)])
                (&local_58,param_4 + 6);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar7 + 0x38);
      uVar2 = *(undefined4 *)(lVar7 + 0x28);
      uVar3 = *(undefined4 *)(lVar7 + 0x2c);
      uVar4 = *(undefined4 *)(lVar7 + 0x30);
      uVar5 = *(undefined4 *)(lVar7 + 0x34);
      *(undefined4 *)(lVar7 + 0x28) = local_58;
      *(undefined4 *)(lVar7 + 0x2c) = uStack_54;
      *(undefined4 *)(lVar7 + 0x30) = uStack_50;
      *(undefined4 *)(lVar7 + 0x34) = uStack_4c;
      *(ulonglong *)(lVar7 + 0x38) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar7 + 0x40) = *(byte *)(lVar7 + 0x40) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762452c FUN_14762452c body=189 status=ok
// SIG undefined FUN_14762452c(void)

longlong FUN_14762452c(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1476245ea(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476245ea FUN_1476245ea body=167 status=ok
// SIG undefined FUN_1476245ea(void)

undefined4 * FUN_1476245ea(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 147624692 FUN_147624692 body=263 status=ok
// SIG undefined FUN_147624692(void)

void FUN_147624692(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar12 = *param_1;
  if ((int)uVar3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x38) < *param_2) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar8 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar8 * 0x38) <= *param_2)) {
      piVar11 = (int *)(lVar12 + (ulonglong)uVar8 * 0x38);
      FUN_147623aaa(piVar11,1);
      goto LAB_147624740;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_14762479a(param_1,uVar3);
    lVar12 = *param_1;
  }
  lVar9 = (ulonglong)uVar8 * 0x38;
  memmove((void *)(lVar12 + lVar9 + 0x38),(void *)(lVar12 + lVar9),(ulonglong)(uVar3 - uVar8) * 0x38
         );
  piVar11 = (int *)(lVar9 + *param_1);
LAB_147624740:
  *piVar11 = *param_2;
  uVar5 = param_3[1];
  *(undefined8 *)(piVar11 + 2) = *param_3;
  *(undefined8 *)(piVar11 + 4) = uVar5;
  *(undefined8 *)(piVar11 + 6) = param_3[2];
  uVar2 = *(undefined1 *)(param_3 + 5);
  puVar7 = param_3 + 3;
  *(undefined1 *)(piVar11 + 0xc) = uVar2;
  piVar10 = piVar11 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar10 = *puVar7;
    return;
  case 1:
    *(undefined2 *)piVar10 = *(undefined2 *)puVar7;
    return;
  case 2:
    *(undefined8 *)piVar10 = *puVar7;
    *(undefined8 *)(piVar11 + 10) = param_3[4];
    *puVar7 = 0;
    param_3[4] = 0;
    return;
  }
}



// FUNCTION 14762479a FUN_14762479a body=143 status=ok
// SIG undefined FUN_14762479a(void)

void FUN_14762479a(longlong param_1,int param_2)

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



// FUNCTION 14762482a FUN_14762482a body=167 status=ok
// SIG undefined FUN_14762482a(void)

void FUN_14762482a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476248a5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476248a5;
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
LAB_1476248a5:
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
                    /* WARNING: Could not recover jumptable at 0x0001476248c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476248d2 FUN_1476248d2 body=905 status=ok
// SIG undefined FUN_1476248d2(void)

void FUN_1476248d2(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte local_299;
  undefined8 *local_278;
  int local_270;
  longlong local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238 [8];
  undefined1 local_230 [32];
  undefined1 *local_210;
  undefined8 local_208;
  undefined8 local_200 [54];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_238;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar9 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_210 + lVar5) = 0;
        *(undefined4 *)((longlong)local_200 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_200 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 400);
      local_240 = *(undefined8 *)(param_3 + 8);
      local_260 = *param_3;
      uStack_25c = param_3[1];
      iStack_258 = param_3[2];
      uStack_254 = param_3[3];
      local_250 = *(undefined8 *)(param_3 + 4);
      uStack_248 = *(undefined8 *)(param_3 + 6);
      local_210 = (undefined1 *)0x0;
      local_208 = 0x400000000;
      puVar13 = local_200;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_240._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_240);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_278,&local_260,puVar13);
          uVar12 = local_208;
          if (local_278 != (undefined8 *)0x0) {
            lVar11 = (longlong)(int)local_208;
            uVar6 = (int)local_208 + 1;
            local_208 = CONCAT44(local_208._4_4_,uVar6);
            if (local_208._4_4_ < uVar6) {
              FUN_14476a5c8(local_230,uVar12 & 0xffffffff);
              puVar7 = local_210;
              if (local_210 == (undefined1 *)0x0) {
                puVar7 = local_230;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_278;
              if (local_278 == (undefined8 *)0x0) goto LAB_147624ab4;
            }
            else {
              puVar7 = local_210;
              if (local_210 == (undefined1 *)0x0) {
                puVar7 = local_230;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_278;
            }
            LOCK();
            *(int *)(local_278 + 1) = *(int *)(local_278 + 1) + 1;
            UNLOCK();
            if (local_278 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_278 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_278)(local_278,1);
              }
            }
          }
        }
LAB_147624ab4:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 3);
      if ((int)local_208 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_230,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_278 = (undefined8 *)0x0;
        local_268 = 0;
      }
      else {
        FUN_147624c5c(lVar9 + 0x28,&local_278,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_299 = local_270 == 1;
      }
      if (0 < iStack_258) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_25c,local_260) + lVar5 * 2);
          lVar11 = *param_6;
          puVar13 = local_200;
          lVar8 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar8 & 0x1f) & 1) != 0) {
              uVar12 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar8 * 4);
              lVar10 = uVar12 + local_268;
              if (local_268 == 0) {
                lVar10 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar12),lVar10);
              *(undefined8 *)(lVar5 * 0x18 + lVar11 + uVar12) = uVar3;
            }
            lVar8 = lVar8 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar8 != 3);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_258);
      }
      *(undefined4 *)(lVar9 + 0x29c) = 1;
      if (local_278 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_278 + 3) = *(int *)(local_278 + 3) + -1;
        UNLOCK();
        if ((local_299 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_278 + 1));
        }
      }
      FUN_14588b8d6(local_230);
      lVar9 = 0x100;
      do {
        FUN_1475d7c02((longlong)local_200 + lVar9);
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147624c5c FUN_147624c5c body=185 status=ok
// SIG undefined FUN_147624c5c(void)

undefined8 * FUN_147624c5c(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_147624d16(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 147624d16 FUN_147624d16 body=120 status=ok
// SIG undefined FUN_147624d16(void)

longlong * FUN_147624d16(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 * 0x18 + *param_2;
  }
  return param_1;
}



// FUNCTION 147624d8e FUN_147624d8e body=57 status=ok
// SIG undefined FUN_147624d8e(void)

undefined8 * FUN_147624d8e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6420;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147624dc8 FUN_147624dc8 body=152 status=ok
// SIG undefined FUN_147624dc8(void)

void FUN_147624dc8(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_147624f18(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147624ea6 FUN_147624ea6 body=55 status=ok
// SIG undefined FUN_147624ea6(void)

void FUN_147624ea6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_14762749c(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 147624ede FUN_147624ede body=57 status=ok
// SIG undefined FUN_147624ede(void)

undefined8 * FUN_147624ede(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c6420;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147624f18 FUN_147624f18 body=232 status=ok
// SIG undefined FUN_147624f18(void)

undefined8 * FUN_147624f18(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_147625002();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c6440;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147625002 FUN_147625002 body=104 status=ok
// SIG undefined FUN_147625002(void)

undefined8 FUN_147625002(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14762506a FUN_14762506a body=38 status=ok
// SIG undefined FUN_14762506a(void)

undefined8 FUN_14762506a(undefined8 param_1,int param_2)

{
  FUN_147625106();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147625090 FUN_147625090 body=118 status=ok
// SIG undefined FUN_147625090(void)

void FUN_147625090(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_14762526a(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 147625106 FUN_147625106 body=71 status=ok
// SIG undefined FUN_147625106(void)

void FUN_147625106(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c6440;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_147625182(param_1 + 8);
  FUN_14762514e(param_1 + 1);
  return;
}



// FUNCTION 14762514e FUN_14762514e body=52 status=ok
// SIG undefined FUN_14762514e(void)

void FUN_14762514e(longlong *param_1)

{
  FUN_147625210();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147625182 FUN_147625182 body=52 status=ok
// SIG undefined FUN_147625182(void)

void FUN_147625182(longlong *param_1)

{
  FUN_1476251b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476251b6 FUN_1476251b6 body=89 status=ok
// SIG undefined FUN_1476251b6(void)

void FUN_1476251b6(longlong param_1)

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



// FUNCTION 147625210 FUN_147625210 body=89 status=ok
// SIG undefined FUN_147625210(void)

void FUN_147625210(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14762526a FUN_14762526a body=104 status=ok
// SIG undefined FUN_14762526a(void)

void FUN_14762526a(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1476252d2 FUN_1476252d2 body=1035 status=ok
// SIG undefined FUN_1476252d2(void)

void FUN_1476252d2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_94;
  ushort local_8e;
  char local_8c;
  char local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762532f;
      plVar13 = plVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_14762532f:
  uVar2 = *(ushort *)(param_2 + 0xe);
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_c4 = *(int *)(param_2 + 0x14);
  if (local_c4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_147625386;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147625386:
  lVar9 = *plVar13;
  local_c8 = *(int *)(param_2 + 0x14);
  if (local_c8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  lVar4 = *plVar12;
  local_b0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar2 != 0) {
    local_c0 = param_1 + 8;
    uVar19 = 0;
    do {
      local_94 = *(int *)(lVar4 + uVar19 * 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar10 = *(longlong *)(param_1 + 8);
      uVar14 = 0;
      if (0 < (int)uVar3) {
        uVar14 = 0;
        uVar16 = (ulonglong)uVar3;
        uVar17 = uVar3;
        do {
          uVar16 = uVar16 >> 1;
          uVar18 = (uint)uVar16 + (int)uVar14;
          if (*(int *)(lVar10 + (ulonglong)uVar18 * 0x20) < local_94) {
            uVar14 = (ulonglong)(uVar18 + (uVar17 & 1));
          }
          bVar5 = 1 < uVar17;
          uVar17 = (uint)uVar16;
        } while (bVar5);
      }
      if (((int)uVar14 < (int)uVar3) && (*(int *)(lVar10 + uVar14 * 0x20) <= local_94)) {
        lVar10 = lVar10 + uVar14 * 0x20;
        if ((undefined4 *)(lVar10 + 8) == (undefined4 *)0x0) goto LAB_147625460;
        *(undefined8 *)(lVar9 + 0x10 + uVar19 * 0x18) = *(undefined8 *)(lVar10 + 0x18);
        uVar6 = *(undefined4 *)(lVar10 + 0xc);
        uVar7 = *(undefined4 *)(lVar10 + 0x10);
        uVar8 = *(undefined4 *)(lVar10 + 0x14);
        puVar1 = (undefined4 *)(lVar9 + uVar19 * 0x18);
        *puVar1 = *(undefined4 *)(lVar10 + 8);
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
      }
      else {
LAB_147625460:
        lVar10 = FUN_1475b443c(local_b0);
        if (((lVar10 != 0) && (lVar11 = FUN_14479d2ce(lVar10), lVar11 != 0)) &&
           (*(longlong *)(lVar10 + 8) != 0)) {
          local_a8 = *(undefined4 *)(param_1 + 0x30);
          uStack_a4 = *(undefined4 *)(param_1 + 0x34);
          uStack_a0 = *(undefined4 *)(param_1 + 0x38);
          uStack_9c = *(undefined4 *)(param_1 + 0x3c);
          local_d8 = lVar11;
          FUN_140d4d2ba(&local_8e,lVar11,lVar10 + 8,&local_a8);
          lVar11 = *(longlong *)(param_1 + 0x48);
          if (lVar11 == 0) {
LAB_1476254b9:
            if (local_8a == '\0') {
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 1;
              FUN_147625fd6(local_d8,lVar10 + 0x10,&local_88);
            }
            else if (local_8c == '\x01') {
              local_70 = 1;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_8e))
                        (&local_88,local_d8);
            }
            else {
              local_70 = 1;
              local_78 = *(undefined8 *)(local_d8 + 0x10 + (ulonglong)local_8e);
              puVar15 = (undefined8 *)(local_d8 + (ulonglong)local_8e);
              local_88 = *puVar15;
              uStack_80 = puVar15[1];
            }
            puVar15 = &local_88;
            *(undefined8 *)(lVar9 + 0x10 + uVar19 * 0x18) = local_78;
            puVar1 = (undefined4 *)(lVar9 + uVar19 * 0x18);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
          }
          else {
            local_d0 = lVar11;
            if (local_8a == '\0') {
              FUN_147626086(lVar11,&local_88,local_d8,lVar10 + 0x10);
            }
            else if (local_8c == '\x01') {
              FUN_1476268b4();
            }
            else {
              FUN_147626a96(lVar11,&local_88,local_d8,local_8e);
            }
            if (local_88._2_1_ == '\x01') {
              puVar15 = (undefined8 *)
                        ((ulonglong)((uint)(ushort)local_88 * 0x18) + *(longlong *)(local_d0 + 8));
            }
            else {
              puVar15 = (undefined8 *)0x0;
            }
            if (puVar15 == (undefined8 *)0x0) goto LAB_1476254b9;
            *(undefined8 *)(lVar9 + 0x10 + uVar19 * 0x18) = puVar15[2];
            uVar6 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar7 = *(undefined4 *)(puVar15 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar15 + 0xc);
            puVar1 = (undefined4 *)(lVar9 + uVar19 * 0x18);
            *puVar1 = *(undefined4 *)puVar15;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
          }
          FUN_147626c78(local_c0,&local_94,puVar15);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar2);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar13 != (longlong *)0x0) {
    uVar19 = plVar13[2];
    if ((ulonglong)plVar13[2] < local_b8) {
      uVar19 = local_b8;
    }
    plVar13[2] = uVar19;
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (local_c4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar13 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476256de FUN_1476256de body=1517 status=ok
// SIG undefined FUN_1476256de(void)

void FUN_1476256de(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined2 local_ba;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ushort local_6c;
  char local_6a;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_147625733;
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_147625733:
  local_f8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_c8 = *(ulonglong *)(param_1 + 0x40);
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762578c;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_14762578c:
  local_e8 = *plVar12;
  local_d0 = *(ulonglong *)(param_1 + 0x40);
  local_d8 = *(int *)(param_2 + 0x14);
  if (local_d8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar13 + 1));
  }
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476257e5;
      plVar16 = plVar16 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_1476257e5:
  puVar15 = (undefined4 *)*puVar13;
  local_dc = *(int *)(param_2 + 0x14);
  if (local_dc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  local_100 = *plVar16;
  FUN_140b325e4(param_2,&local_a0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_90 == 0) {
    FUN_1410bd96e(param_2,&local_b8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar9 = local_a8;
    if (local_a8 == 0) {
      FUN_1410bd9c4(param_2,&local_68,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_f0 = local_58;
      if ((short)local_f8 != 0 && local_58 != 0) {
        local_f8 = (ulonglong)(uint)((int)local_f8 * 2);
        uVar14 = 0;
        do {
          lVar9 = *(longlong *)(local_f0 + uVar14 * 8);
          puVar11 = &DAT_149dfb77a;
          if (*(int *)(lVar9 + 0x58) != 0) {
            puVar11 = *(undefined2 **)(lVar9 + 0x50);
          }
          uVar4 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_88,puVar11,1);
          FUN_147626086(uVar4,&local_6c,*(undefined8 *)(local_100 + uVar14 * 4),&local_88);
          lVar9 = local_100;
          if (local_6a == '\x01') {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            *(undefined8 *)(puVar15 + 4) =
                 *(undefined8 *)(lVar9 + 0x10 + (ulonglong)local_6c * 0x18);
            puVar2 = (undefined4 *)(lVar9 + (ulonglong)local_6c * 0x18);
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            *puVar15 = *puVar2;
            puVar15[1] = uVar5;
            puVar15[2] = uVar6;
            puVar15[3] = uVar7;
          }
          else {
            FUN_147621fd6(*(undefined8 *)(local_f0 + uVar14 * 8),&local_88,
                          *(undefined8 *)(local_100 + uVar14 * 4));
            *(undefined8 *)(puVar15 + 4) = local_78;
            *puVar15 = local_88;
            puVar15[1] = uStack_84;
            puVar15[2] = uStack_80;
            puVar15[3] = uStack_7c;
            local_108 = *(undefined8 *)(local_f0 + uVar14 * 8);
            FUN_147627020(*(undefined8 *)(param_1 + 0x48),&local_ba,
                          *(undefined8 *)(lVar9 + uVar14 * 4),&local_88);
            *(undefined2 *)(local_e8 + uVar14) = local_ba;
          }
          uVar14 = uVar14 + 2;
          puVar15 = puVar15 + 6;
        } while (local_f8 != uVar14);
      }
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + -1;
        UNLOCK();
        if ((int)uStack_60 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_68 + 8));
        }
      }
    }
    else if (local_f8 != 0) {
      uVar14 = 0;
      do {
        FUN_147626a96(*(undefined8 *)(param_1 + 0x48),&local_88,
                      *(undefined8 *)(local_100 + uVar14 * 8),*(undefined2 *)(local_a8 + uVar14 * 2)
                     );
        if (local_88._2_1_ == '\x01') {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
          *(undefined8 *)(puVar15 + 4) =
               *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(ushort)local_88 * 0x18);
          puVar2 = (undefined4 *)(lVar3 + (ulonglong)(ushort)local_88 * 0x18);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *puVar15 = *puVar2;
          puVar15[1] = uVar5;
          puVar15[2] = uVar6;
          puVar15[3] = uVar7;
        }
        else {
          uVar10 = (ulonglong)*(ushort *)(lVar9 + uVar14 * 2);
          lVar3 = *(longlong *)(local_100 + uVar14 * 8);
          local_58 = *(longlong *)(lVar3 + 0x10 + uVar10);
          local_68 = *(ulonglong *)(lVar3 + uVar10);
          uStack_60 = ((ulonglong *)(lVar3 + uVar10))[1];
          puVar2 = (undefined4 *)(lVar3 + uVar10);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(lVar3 + 0x10 + uVar10);
          *puVar15 = uVar5;
          puVar15[1] = uVar6;
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          local_108 = CONCAT62(local_108._2_6_,*(undefined2 *)(lVar9 + uVar14 * 2));
          FUN_147626f3e(*(undefined8 *)(param_1 + 0x48),&local_6c,
                        *(undefined8 *)(local_100 + uVar14 * 8),&local_68);
          *(ushort *)(local_e8 + uVar14 * 2) = local_6c;
        }
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 6;
      } while (local_f8 != uVar14);
    }
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_b4,local_b8) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iStack_b0 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT44(uStack_b4,local_b8) + 8));
      }
    }
  }
  else if (local_f8 != 0) {
    uVar14 = 0;
    do {
      FUN_1476268b4(*(undefined8 *)(param_1 + 0x48),&local_68,
                    *(undefined8 *)(local_100 + uVar14 * 8),*(undefined2 *)(local_90 + uVar14 * 2));
      if (local_68._2_1_ == '\x01') {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(lVar9 + 0x10 + (local_68 & 0xffff) * 0x18);
        puVar2 = (undefined4 *)(lVar9 + (local_68 & 0xffff) * 0x18);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *puVar15 = *puVar2;
        puVar15[1] = uVar5;
        puVar15[2] = uVar6;
        puVar15[3] = uVar7;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_90 + uVar14 * 2)))
                  (&local_b8,*(undefined8 *)(local_100 + uVar14 * 8));
        *(longlong *)(puVar15 + 4) = local_a8;
        *puVar15 = local_b8;
        puVar15[1] = uStack_b4;
        puVar15[2] = iStack_b0;
        puVar15[3] = uStack_ac;
        local_108 = CONCAT62(local_108._2_6_,*(undefined2 *)(local_90 + uVar14 * 2));
        FUN_147626e5c(*(undefined8 *)(param_1 + 0x48),&local_88,
                      *(undefined8 *)(local_100 + uVar14 * 8),&local_b8);
        *(ushort *)(local_e8 + uVar14 * 2) = (ushort)local_88;
      }
      uVar14 = uVar14 + 1;
      puVar15 = puVar15 + 6;
    } while (local_f8 != uVar14);
  }
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 0x18) = *(int *)(local_a0 + 0x18) + -1;
    UNLOCK();
    if (local_98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a0 + 8));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_dc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    uVar14 = puVar13[2];
    if ((ulonglong)puVar13[2] < local_d0) {
      uVar14 = local_d0;
    }
    puVar13[2] = uVar14;
    LOCK();
    *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + -1;
    UNLOCK();
    if (local_d8 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar13 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    uVar14 = plVar12[2];
    if ((ulonglong)plVar12[2] < local_c8) {
      uVar14 = local_c8;
    }
    plVar12[2] = uVar14;
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar12 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147625ccc FUN_147625ccc body=776 status=ok
// SIG undefined FUN_147625ccc(void)

void FUN_147625ccc(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147625d21;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147625d21:
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar7 = (ulonglong)uVar2;
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_147625d75;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147625d75:
  puVar9 = (undefined4 *)*puVar10;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar6 = *plVar11;
  FUN_140b325e4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_68 == 0) {
    FUN_1410bd96e(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_80 == 0) {
      FUN_1410bd9c4(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar2 != 0 && local_98 != 0) {
        lVar13 = 0;
        do {
          FUN_147621fd6(*(undefined8 *)(local_98 + lVar13 * 2),&local_60,
                        *(undefined8 *)(lVar6 + lVar13));
          *(undefined8 *)(puVar9 + 4) = local_50;
          *puVar9 = local_60;
          puVar9[1] = uStack_5c;
          puVar9[2] = uStack_58;
          puVar9[3] = uStack_54;
          lVar13 = lVar13 + 8;
          puVar9 = puVar9 + 6;
        } while ((ulonglong)uVar2 * 8 != lVar13);
      }
      if (local_a8 != 0) {
        LOCK();
        *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
        UNLOCK();
        if (local_a0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
        }
      }
    }
    else if (uVar7 != 0) {
      uVar12 = 0;
      do {
        uVar8 = (ulonglong)*(ushort *)(local_80 + uVar12 * 2);
        lVar13 = *(longlong *)(lVar6 + uVar12 * 8);
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(lVar13 + 0x10 + uVar8);
        puVar1 = (undefined4 *)(lVar13 + uVar8);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar12 = uVar12 + 1;
        puVar9 = puVar9 + 6;
      } while (uVar7 != uVar12);
    }
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
      UNLOCK();
      if (local_88 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
      }
    }
  }
  else if (uVar7 != 0) {
    uVar12 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_68 + uVar12 * 2)
                  ))(&local_60,*(undefined8 *)(lVar6 + uVar12 * 8));
      *(undefined8 *)(puVar9 + 4) = local_50;
      *puVar9 = local_60;
      puVar9[1] = uStack_5c;
      puVar9[2] = uStack_58;
      puVar9[3] = uStack_54;
      uVar12 = uVar12 + 1;
      puVar9 = puVar9 + 6;
    } while (uVar7 != uVar12);
  }
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
    UNLOCK();
    if (local_70 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar7 = puVar10[2];
    if ((ulonglong)puVar10[2] < local_b0) {
      uVar7 = local_b0;
    }
    puVar10[2] = uVar7;
    LOCK();
    *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar10 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147625fd6 FUN_147625fd6 body=175 status=ok
// SIG undefined FUN_147625fd6(void)

void FUN_147625fd6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,&local_60);
  puVar1 = local_60;
  if (local_58 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar1);
  FUN_147626dd8(&local_40,param_1,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    *(undefined8 *)(param_3 + 4) = local_30;
    *param_3 = local_40;
    param_3[1] = uStack_3c;
    param_3[2] = uStack_38;
    param_3[3] = uStack_34;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147626086 FUN_147626086 body=483 status=ok
// SIG undefined FUN_147626086(void)

undefined8 FUN_147626086(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1476261b4;
        }
        else {
LAB_1476261b4:
          FUN_14762651c(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476265e8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147626458(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_14762626a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762626a FUN_14762626a body=493 status=ok
// SIG undefined FUN_14762626a(void)

undefined2 * FUN_14762626a(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14762639c;
        }
        else {
LAB_14762639c:
          FUN_14762651c(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1476265e8(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_147626458(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1476267fc((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147626458 FUN_147626458 body=196 status=ok
// SIG undefined FUN_147626458(void)

void FUN_147626458(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x18);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x18);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x18) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x18) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x18);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_144727cd0(param_1,iVar5);
  return;
}



// FUNCTION 14762651c FUN_14762651c body=90 status=ok
// SIG undefined FUN_14762651c(void)

void FUN_14762651c(longlong *param_1,int param_2)

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
  FUN_147626576();
  return;
}



// FUNCTION 147626576 FUN_147626576 body=114 status=ok
// SIG undefined FUN_147626576(void)

void FUN_147626576(longlong *param_1,int param_2)

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



// FUNCTION 1476265e8 FUN_1476265e8 body=68 status=ok
// SIG undefined FUN_1476265e8(void)

void FUN_1476265e8(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14762662c(param_1);
  return;
}



// FUNCTION 14762662c FUN_14762662c body=462 status=ok
// SIG undefined FUN_14762662c(void)

void FUN_14762662c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1476267fc FUN_1476267fc body=107 status=ok
// SIG undefined FUN_1476267fc(void)

int FUN_1476267fc(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_147626867(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147626867 FUN_147626867 body=76 status=ok
// SIG undefined FUN_147626867(void)

undefined8 FUN_147626867(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1476268b4 FUN_1476268b4 body=481 status=ok
// SIG undefined FUN_1476268b4(void)

undefined8 FUN_1476268b4(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_1476269e2;
        }
        else {
LAB_1476269e2:
          FUN_14762651c(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476265e8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147626458(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_14762626a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147626a96 FUN_147626a96 body=481 status=ok
// SIG undefined FUN_147626a96(void)

undefined8 FUN_147626a96(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147626bc4;
        }
        else {
LAB_147626bc4:
          FUN_14762651c(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476265e8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147626458(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_14762626a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147626c78 FUN_147626c78 body=217 status=ok
// SIG undefined FUN_147626c78(void)

void FUN_147626c78(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar9 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x20) < iVar5) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar9 < (int)uVar2) && (*(int *)(lVar8 + (ulonglong)uVar9 * 0x20) <= iVar5)) {
      piVar7 = (int *)(lVar8 + (ulonglong)uVar9 * 0x20);
      goto LAB_147626d1d;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147626d52(param_1,uVar2);
    lVar8 = *param_1;
  }
  lVar10 = (ulonglong)uVar9 * 0x20;
  memmove((void *)(lVar8 + lVar10 + 0x20),(void *)(lVar8 + lVar10),(ulonglong)(uVar2 - uVar9) << 5);
  piVar7 = (int *)(lVar10 + *param_1);
  iVar5 = *param_2;
LAB_147626d1d:
  *piVar7 = iVar5;
  uVar4 = param_3[1];
  *(undefined8 *)(piVar7 + 2) = *param_3;
  *(undefined8 *)(piVar7 + 4) = uVar4;
  *(undefined8 *)(piVar7 + 6) = param_3[2];
  return;
}



// FUNCTION 147626d52 FUN_147626d52 body=132 status=ok
// SIG undefined FUN_147626d52(void)

void FUN_147626d52(longlong param_1,int param_2)

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



// FUNCTION 147626dd8 FUN_147626dd8 body=131 status=ok
// SIG undefined FUN_147626dd8(void)

undefined4 * FUN_147626dd8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar5 = FUN_1406f977c(local_48);
  if ((lVar5 == 0) ||
     (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_20), puVar6 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar6 + 4);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147626e5c FUN_147626e5c body=224 status=ok
// SIG undefined FUN_147626e5c(void)

undefined2 *
FUN_147626e5c(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_14762711e(param_1 + 8,&local_60);
  *(undefined8 *)(local_58 + 4) = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *local_58 = *param_4;
  local_58[1] = uVar1;
  local_58[2] = uVar2;
  local_58[3] = uVar3;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_147627204(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147626f3e FUN_147626f3e body=224 status=ok
// SIG undefined FUN_147626f3e(void)

undefined2 *
FUN_147626f3e(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_14762711e(param_1 + 8,&local_60);
  *(undefined8 *)(local_58 + 4) = *(undefined8 *)(param_4 + 4);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *local_58 = *param_4;
  local_58[1] = uVar1;
  local_58[2] = uVar2;
  local_58[3] = uVar3;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_147627204(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147627020 FUN_147627020 body=252 status=ok
// SIG undefined FUN_147627020(void)

undefined2 *
FUN_147627020(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_14762711e(param_1 + 8,&local_58);
  *(undefined8 *)(local_50 + 4) = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *local_50 = *param_4;
  local_50[1] = uVar2;
  local_50[2] = uVar3;
  local_50[3] = uVar4;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_147627204(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762711e FUN_14762711e body=230 status=ok
// SIG undefined FUN_14762711e(void)

int * FUN_14762711e(longlong *param_1,int *param_2)

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



// FUNCTION 147627204 FUN_147627204 body=339 status=ok
// SIG undefined FUN_147627204(void)

undefined4 * FUN_147627204(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147627358(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_14762743e(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14762662c(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147627358 FUN_147627358 body=229 status=ok
// SIG undefined FUN_147627358(void)

int * FUN_147627358(longlong *param_1,int *param_2)

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



// FUNCTION 14762743e FUN_14762743e body=93 status=ok
// SIG undefined FUN_14762743e(void)

undefined8 FUN_14762743e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1476267fc(), iVar7 != -1)) {
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
    FUN_147626576(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14762749c FUN_14762749c body=48 status=ok
// SIG undefined FUN_14762749c(void)

void FUN_14762749c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1476274cc FUN_1476274cc body=31 status=ok
// SIG undefined FUN_1476274cc(void)

undefined8 FUN_1476274cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476274ec FUN_1476274ec body=322 status=ok
// SIG undefined FUN_1476274ec(void)

void FUN_1476274ec(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_14110d870(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432fe50c(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147627630 FUN_147627630 body=520 status=ok
// SIG undefined FUN_147627630(void)

longlong * FUN_147627630(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147628102(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_147627674;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c64d0;
  plVar5 = plVar4 + 2;
  FUN_147628270(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_147629ad2(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1476277ff:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001476277ee:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x0001476277ee;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1476277ff;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1476281b6(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_147627674:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762783c FUN_14762783c body=130 status=ok
// SIG undefined FUN_14762783c(void)

void FUN_14762783c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_147629b7a(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476278c0 FUN_1476278c0 body=616 status=ok
// SIG undefined FUN_1476278c0(void)

void FUN_1476278c0(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_147629e80(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147627b2a FUN_147627b2a body=259 status=ok
// SIG undefined FUN_147627b2a(void)

void FUN_147627b2a(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = (int)param_4[1];
  if (0 < iVar2) {
    lVar1 = *param_6;
    lVar4 = 0;
    do {
      if (*(short *)(*param_4 + lVar4 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar3 = (longlong)local_58;
        FUN_147629faa(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) && ((undefined1 *)(local_50 + lVar3) != (undefined1 *)0x0)) {
          *(undefined1 *)(lVar4 + (ulonglong)*(ushort *)(*param_3 + 2) + lVar1) =
               *(undefined1 *)(local_50 + lVar3);
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar2 = (int)param_4[1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147627c2e FUN_147627c2e body=29 status=ok
// SIG undefined FUN_147627c2e(void)

undefined8 FUN_147627c2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147627c4c FUN_147627c4c body=127 status=ok
// SIG undefined FUN_147627c4c(void)

undefined4 * FUN_147627c4c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
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



// FUNCTION 147627ccc FUN_147627ccc body=238 status=ok
// SIG undefined FUN_147627ccc(void)

void FUN_147627ccc(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147627dbc FUN_147627dbc body=622 status=ok
// SIG undefined FUN_147627dbc(void)

void FUN_147627dbc(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_147627e0f;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147627e0f:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_130 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_138 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_110,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_147627e80;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147627e80:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d0;
  lVar7 = local_e8;
  lVar3 = local_100;
  uVar5 = local_138;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_80 = local_e0;
  local_78 = local_d8;
  local_e0 = 0;
  local_70 = local_d0;
  local_d0 = 0;
  local_58 = local_138;
  local_c8 = puVar8;
  local_c0 = iVar2;
  local_b8 = uVar4;
  local_68 = puVar9;
  local_60 = iVar1;
  FUN_1432f59b8();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  if (lVar3 != 0) {
    local_128 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_120 = lVar7;
  }
  if (lVar6 != 0) {
    local_118 = lVar6;
  }
  local_148 = uVar5;
  FUN_140f081b6(local_130,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_128);
  FUN_14762802c(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762802c FUN_14762802c body=94 status=ok
// SIG undefined FUN_14762802c(void)

void FUN_14762802c(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014762807c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14762808a FUN_14762808a body=118 status=ok
// SIG undefined FUN_14762808a(void)

longlong FUN_14762808a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147627c4c();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147628102 FUN_147628102 body=179 status=ok
// SIG undefined FUN_147628102(void)

undefined8 * FUN_147628102(longlong param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_14762815c;
    }
  }
  uVar6 = 0;
LAB_14762815c:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476281b6 FUN_1476281b6 body=184 status=ok
// SIG undefined FUN_1476281b6(void)

void FUN_1476281b6(longlong param_1,undefined4 param_2,undefined8 *param_3)

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



// FUNCTION 147628270 FUN_147628270 body=241 status=ok
// SIG undefined FUN_147628270(void)

undefined8 * FUN_147628270(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_1 = &PTR_FUN_14a4c64f0;
  param_1[0x1b] = &PTR_FUN_14a4c6538;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147628362 FUN_147628362 body=9 status=ok
// SIG undefined FUN_147628362(void)

void FUN_147628362(longlong param_1)

{
  FUN_147628f06(param_1 + 0x10);
  return;
}



// FUNCTION 14762836c FUN_14762836c body=29 status=ok
// SIG undefined FUN_14762836c(void)

undefined8 FUN_14762836c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762838a FUN_14762838a body=38 status=ok
// SIG undefined FUN_14762838a(void)

undefined8 FUN_14762838a(undefined8 param_1,int param_2)

{
  FUN_147628f06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476283d6 FUN_1476283d6 body=82 status=ok
// SIG undefined FUN_1476283d6(void)

void FUN_1476283d6(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_147628fb4();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762842a FUN_14762842a body=1036 status=ok
// SIG undefined FUN_14762842a(void)

ulonglong FUN_14762842a(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14762849f;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      local_78[0] = *(undefined1 *)(puVar6 + 4);
      local_60 = *(byte *)(puVar6 + 10);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 6);
      local_58 = *(byte *)(puVar6 + 0xc);
      FUN_1410d7556(param_1 + 0x18,&local_88);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38 + 0x28)])();
      FUN_147629102(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_147629176(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_14762903e(&local_88,local_78);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_14762867d:
      unaff_RBP = 0;
      goto LAB_14762849f;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38) & 1) == 0)
    goto LAB_14762849f;
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x28) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar11 * 0x28) <= param_2)) &&
       (lVar12 + (ulonglong)uVar11 * 0x28 != -8)) {
      FUN_14762903e((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
        FUN_147629176(param_1 + 0xa0);
      }
      goto LAB_14762849f;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      if ((bVar2 & 1) == 0) goto LAB_14762849f;
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
      *(byte *)(puVar6 + 0xc) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14762849f;
      lVar12 = (longlong)param_2 * 0x38;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + lVar12);
      puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_88 = *puVar6;
        uStack_84 = puVar6[1];
        uStack_80 = puVar6[2];
        uStack_7c = puVar6[3];
        local_78[0] = *(undefined1 *)(puVar6 + 4);
        local_60 = *(byte *)(puVar6 + 10);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar6 + 6);
        local_58 = *(byte *)(puVar6 + 0xc);
        FUN_1410d7556(param_1 + 0x18,&local_88);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x28)])();
        FUN_147629102(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x28) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar4 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
          FUN_147629176(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_14762903e(&local_88,local_78);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_14762867d;
      }
      if ((bVar2 & 1) == 0) goto LAB_14762849f;
    }
  }
  FUN_14762903e(puVar6,puVar6 + 4);
LAB_14762849f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147628838 FUN_147628838 body=399 status=ok
// SIG undefined FUN_147628838(void)

undefined8 FUN_147628838(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1476288e7;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x38;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x28)])();
    FUN_147629102(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_147629176(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x28) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x28) <= param_2)) {
      FUN_147629176(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1476288e7:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476289d2 FUN_1476289d2 body=266 status=ok
// SIG undefined FUN_1476289d2(void)

void FUN_1476289d2(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_14762928c(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147628ade FUN_147628ade body=592 status=ok
// SIG undefined FUN_147628ade(void)

void FUN_147628ade(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  char *local_88;
  undefined1 local_7c [8];
  int local_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_88 = param_2;
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_98 = *param_6;
    local_90 = param_6[1];
    local_a0 = param_6[2];
    param_5 = param_5 + 8;
    uVar9 = 0;
    do {
      local_70 = *(longlong *)(param_4 + uVar9 * 4);
      if ((local_70 != 0) && (cVar4 = FUN_147629566(lVar1,&local_70,param_5), cVar4 != '\0')) {
        FUN_14762928c(lVar1,local_7c,&local_70,param_5);
        piVar7 = *(int **)(param_1 + -0x28);
        if (*piVar7 != 0) {
          FUN_140adeba6(piVar7,local_7c);
          piVar7 = *(int **)(param_1 + -0x28);
        }
        lVar6 = FUN_1400e4054(piVar7,local_7c);
        if (lVar6 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = CONCAT71((int7)((ulonglong)local_7c >> 8),'\x02' - (*(short *)(lVar6 + 0xe) == 0)
                           );
        }
        cVar4 = FUN_1476295ec(lVar1,local_74,uVar10 & 0xffffffff);
        if (cVar4 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          if (local_90 == 0) {
            if (local_98 != 0) {
              lVar6 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_98 + uVar9);
              uStack_60 = *(longlong *)(param_1 + 0x18) + lVar6;
              uVar5 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar6))
                                (*(undefined8 *)(param_4 + uVar9 * 4));
              goto LAB_147628ccb;
            }
            if (local_a0 != 0) {
              uStack_60 = *(ulonglong *)(local_a0 + uVar9 * 8);
              local_58 = *(longlong *)(local_a0 + 8 + uVar9 * 8);
              uVar8 = uStack_60;
              if (local_58 != 0) {
                LOCK();
                *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                UNLOCK();
                uVar8 = *(ulonglong *)(local_a0 + uVar9 * 8);
              }
              uStack_50 = 2;
              uVar5 = FUN_141028f10(uVar8,*(undefined8 *)(param_4 + uVar9 * 4));
              goto LAB_147628ccb;
            }
          }
          else {
            uStack_60 = (ulonglong)*(ushort *)(local_90 + uVar9);
            uStack_50 = 1;
            uVar5 = *(undefined1 *)
                     (*(longlong *)(param_4 + uVar9 * 4) + (ulonglong)*(ushort *)(local_90 + uVar9))
            ;
LAB_147628ccb:
            local_68 = CONCAT71(local_68._1_7_,uVar5);
          }
          FUN_147629684(lVar1,local_74,uVar10 & 0xffffffff,&local_68);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_50 & 0xff])(&uStack_60);
        }
        if (*local_88 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x30 + (longlong)local_74 * 0x38);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar9 = uVar9 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147628d30 FUN_147628d30 body=38 status=ok
// SIG undefined FUN_147628d30(void)

undefined8 FUN_147628d30(undefined8 param_1,int param_2)

{
  FUN_147628f06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147628d56 FUN_147628d56 body=52 status=ok
// SIG undefined FUN_147628d56(void)

void FUN_147628d56(longlong *param_1)

{
  FUN_147628dc0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147628d8a FUN_147628d8a body=53 status=ok
// SIG undefined FUN_147628d8a(void)

void FUN_147628d8a(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147628dc0 FUN_147628dc0 body=324 status=ok
// SIG undefined FUN_147628dc0(void)

void FUN_147628dc0(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x38 + 0x28)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147628f06 FUN_147628f06 body=173 status=ok
// SIG undefined FUN_147628f06(void)

void FUN_147628f06(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c6550;
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
  FUN_147628d8a(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_147628d56(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147628fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147628fb4 FUN_147628fb4 body=136 status=ok
// SIG undefined FUN_147628fb4(void)

void FUN_147628fb4(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x38);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762903e FUN_14762903e body=156 status=ok
// SIG undefined FUN_14762903e(void)

void FUN_14762903e(undefined4 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_24 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_28);
  if (lVar1 != 0) {
    if (param_2[0x18] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    if (param_2[0x18] == '\x01') {
      *(undefined1 *)(lVar1 + (ulonglong)*(ushort *)(param_2 + 8)) = *param_2;
    }
    else if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147629102 FUN_147629102 body=116 status=ok
// SIG undefined FUN_147629102(void)

void FUN_147629102(longlong *param_1,int param_2)

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



// FUNCTION 147629176 FUN_147629176 body=103 status=ok
// SIG undefined FUN_147629176(void)

void FUN_147629176(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x28 + 0x20)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1476291de(param_1);
  return;
}



// FUNCTION 1476291de FUN_1476291de body=62 status=ok
// SIG undefined FUN_1476291de(void)

void FUN_1476291de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14762921c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 14762921c FUN_14762921c body=112 status=ok
// SIG undefined FUN_14762921c(void)

ulonglong FUN_14762921c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147629256;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147629256:
  return param_2 & 0xffffffff;
}



// FUNCTION 14762928c FUN_14762928c body=189 status=ok
// SIG undefined FUN_14762928c(void)

longlong FUN_14762928c(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14762934a(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762934a FUN_14762934a body=313 status=ok
// SIG undefined FUN_14762934a(void)

int * FUN_14762934a(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_58._0_4_ = *param_3;
    local_58._4_4_ = param_3[1];
    uStack_50._0_4_ = param_3[2];
    uStack_50._4_4_ = param_3[3];
    FUN_147629484(param_1 + 0x68,local_68);
    *local_60 = (undefined4)local_58;
    local_60[1] = local_58._4_4_;
    local_60[2] = (undefined4)uStack_50;
    local_60[3] = uStack_50._4_4_;
    *(undefined1 *)(local_60 + 10) = 0;
    *(undefined8 *)(local_60 + 6) = 0;
    *(undefined1 *)(local_60 + 0xc) = 0;
    *param_2 = local_68[0];
    local_58 = param_3;
    uStack_50 = param_2;
    FUN_140bf3cbe(plVar1,local_68,&local_58,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147629484 FUN_147629484 body=226 status=ok
// SIG undefined FUN_147629484(void)

int * FUN_147629484(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 147629566 FUN_147629566 body=132 status=ok
// SIG undefined FUN_147629566(void)

byte FUN_147629566(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1476297de(param_1,local_24,param_2,param_3);
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



// FUNCTION 1476295ec FUN_1476295ec body=151 status=ok
// SIG undefined FUN_1476295ec(void)

ulonglong FUN_1476295ec(longlong param_1,int param_2,char param_3)

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
  
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x30);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x28;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x30));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 147629684 FUN_147629684 body=345 status=ok
// SIG undefined FUN_147629684(void)

void FUN_147629684(longlong param_1,int param_2,char param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar6 = *(byte *)(lVar7 + 0x30);
    if ((bVar6 & 1) == 0) {
      *(undefined1 *)(lVar7 + 0x10) = *param_4;
      if ((undefined1 *)(lVar7 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,param_4[0x18]);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[(byte)param_4[0x18]])
                  (&local_58,param_4 + 8);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar7 + 0x28);
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        uVar3 = *(undefined4 *)(lVar7 + 0x1c);
        uVar4 = *(undefined4 *)(lVar7 + 0x20);
        uVar5 = *(undefined4 *)(lVar7 + 0x24);
        *(undefined4 *)(lVar7 + 0x18) = local_58;
        *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
        *(undefined4 *)(lVar7 + 0x20) = uStack_50;
        *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
        *(ulonglong *)(lVar7 + 0x28) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar6 = *(byte *)(lVar7 + 0x30);
      }
      *(byte *)(lVar7 + 0x30) = bVar6 | 1;
    }
    else {
      FUN_147629944(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(lVar7 + 0x10) = *param_4;
    if ((undefined1 *)(lVar7 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,param_4[0x18]);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[(byte)param_4[0x18]])
                (&local_58,param_4 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar7 + 0x28);
      uVar2 = *(undefined4 *)(lVar7 + 0x18);
      uVar3 = *(undefined4 *)(lVar7 + 0x1c);
      uVar4 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(lVar7 + 0x18) = local_58;
      *(undefined4 *)(lVar7 + 0x1c) = uStack_54;
      *(undefined4 *)(lVar7 + 0x20) = uStack_50;
      *(undefined4 *)(lVar7 + 0x24) = uStack_4c;
      *(ulonglong *)(lVar7 + 0x28) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476297de FUN_1476297de body=189 status=ok
// SIG undefined FUN_1476297de(void)

longlong FUN_1476297de(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14762989c(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762989c FUN_14762989c body=167 status=ok
// SIG undefined FUN_14762989c(void)

undefined4 * FUN_14762989c(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 147629944 FUN_147629944 body=249 status=ok
// SIG undefined FUN_147629944(void)

void FUN_147629944(longlong *param_1,int *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar3 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x28) < *param_2) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x28) <= *param_2)) {
      piVar10 = (int *)(lVar7 + (ulonglong)uVar9 * 0x28);
      FUN_147628d8a(piVar10,1);
      goto LAB_1476299f4;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_147629a3e(param_1,uVar3);
    lVar7 = *param_1;
  }
  lVar5 = (ulonglong)uVar9 * 0x28;
  memmove((void *)(lVar7 + lVar5 + 0x28),(void *)(lVar7 + lVar5),(ulonglong)(uVar3 - uVar9) * 0x28);
  piVar10 = (int *)(lVar5 + *param_1);
LAB_1476299f4:
  *piVar10 = *param_2;
  *(undefined1 *)(piVar10 + 2) = *param_3;
  uVar2 = param_3[0x18];
  puVar8 = (undefined8 *)(param_3 + 8);
  *(undefined1 *)(piVar10 + 8) = uVar2;
  piVar11 = piVar10 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar11 = *puVar8;
    return;
  case 1:
    *(undefined2 *)piVar11 = *(undefined2 *)puVar8;
    return;
  case 2:
    *(undefined8 *)piVar11 = *puVar8;
    *(undefined8 *)(piVar10 + 6) = *(undefined8 *)(param_3 + 0x10);
    *puVar8 = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    return;
  }
}



// FUNCTION 147629a3e FUN_147629a3e body=147 status=ok
// SIG undefined FUN_147629a3e(void)

void FUN_147629a3e(longlong param_1,int param_2)

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



// FUNCTION 147629ad2 FUN_147629ad2 body=167 status=ok
// SIG undefined FUN_147629ad2(void)

void FUN_147629ad2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147629b4d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147629b4d;
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
LAB_147629b4d:
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
                    /* WARNING: Could not recover jumptable at 0x000147629b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147629b7a FUN_147629b7a body=772 status=ok
// SIG undefined FUN_147629b7a(void)

void FUN_147629b7a(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte local_191;
  undefined8 *local_190;
  undefined8 *local_178;
  int local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [32];
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_138;
  if (param_4 == 0) goto LAB_147629bd3;
  uVar5 = FUN_145990612();
  plVar6 = (longlong *)FUN_144718840(param_4,uVar5);
  if (plVar6 == (longlong *)0x0) goto LAB_147629bd3;
  lVar2 = *(longlong *)(param_4 + 0x28);
  *(undefined4 *)(lVar2 + 0x29c) = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  local_160 = *param_3;
  uStack_15c = param_3[1];
  iStack_158 = param_3[2];
  uStack_154 = param_3[3];
  local_150 = param_3[4];
  uStack_14c = param_3[5];
  uStack_148 = param_3[6];
  uStack_144 = param_3[7];
  local_110 = (undefined1 *)0x0;
  local_108 = 0x400000000;
  local_140 = uVar5;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    local_140._6_2_ = (undefined2)((ulonglong)uVar5 >> 0x30);
    local_140._0_6_ = CONCAT24(*(undefined2 *)*param_2,(int)uVar5);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_178,&local_160,&local_100);
    uVar10 = local_108;
    if (local_178 != (undefined8 *)0x0) {
      lVar9 = (longlong)(int)local_108;
      uVar7 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,uVar7);
      if (local_108._4_4_ < uVar7) {
        FUN_14476a5c8(local_130,uVar10 & 0xffffffff);
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
        if (local_178 == (undefined8 *)0x0) goto LAB_147629ce1;
      }
      else {
        puVar8 = local_110;
        if (local_110 == (undefined1 *)0x0) {
          puVar8 = local_130;
        }
        *(undefined8 **)(puVar8 + lVar9 * 8) = local_178;
      }
      LOCK();
      *(int *)(local_178 + 1) = *(int *)(local_178 + 1) + 1;
      UNLOCK();
      if (local_178 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_178 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_178)(local_178,1);
        }
      }
    }
LAB_147629ce1:
    if ((int)local_108 != 0) {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_130,1);
    }
  }
  if (*(short *)((longlong)param_3 + 0x22) == -1) {
    local_190 = (undefined8 *)0x0;
    local_168 = 0;
  }
  else {
    FUN_147629e80(lVar2 + 0x28,&local_178,*(short *)((longlong)param_3 + 0x22),
                  *(undefined2 *)(param_1 + 0x16));
    local_190 = local_178;
    local_191 = local_170 == 1;
  }
  if (0 < iStack_158) {
    lVar9 = 0;
    iVar4 = iStack_158;
    do {
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        uVar10 = (ulonglong)*(ushort *)(*param_2 + 2);
        lVar11 = uVar10 + local_168;
        if (local_168 == 0) {
          lVar11 = 0;
        }
        lVar3 = *param_6;
        uVar5 = FUN_147546472(&local_100,*(undefined2 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 2)
                              ,*(undefined8 *)(param_5 + uVar10),lVar11);
        *(undefined8 *)(lVar9 + uVar10 + lVar3) = uVar5;
        iVar4 = iStack_158;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  *(undefined4 *)(lVar2 + 0x29c) = 1;
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_190 + 3) = *(int *)(local_190 + 3) + -1;
    UNLOCK();
    if ((local_191 & 1) != 0) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 1));
    }
  }
  FUN_14588b8d6(local_130);
  FUN_1475d7c02(&local_100);
LAB_147629bd3:
  if ((local_50 ^ (ulonglong)local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147629e80 FUN_147629e80 body=185 status=ok
// SIG undefined FUN_147629e80(void)

undefined8 * FUN_147629e80(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_147629f3a(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 147629f3a FUN_147629f3a body=112 status=ok
// SIG undefined FUN_147629f3a(void)

longlong * FUN_147629f3a(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 + *param_2;
  }
  return param_1;
}



// FUNCTION 147629faa FUN_147629faa body=88 status=ok
// SIG undefined FUN_147629faa(void)

undefined8 * FUN_147629faa(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_147629f3a(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14762a002 FUN_14762a002 body=57 status=ok
// SIG undefined FUN_14762a002(void)

undefined8 * FUN_14762a002(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c65c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762a03c FUN_14762a03c body=57 status=ok
// SIG undefined FUN_14762a03c(void)

undefined8 * FUN_14762a03c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c65c0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762a076 FUN_14762a076 body=232 status=ok
// SIG undefined FUN_14762a076(void)

undefined8 * FUN_14762a076(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_14762a160();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c65e0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762a160 FUN_14762a160 body=104 status=ok
// SIG undefined FUN_14762a160(void)

undefined8 FUN_14762a160(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14762a1c8 FUN_14762a1c8 body=38 status=ok
// SIG undefined FUN_14762a1c8(void)

undefined8 FUN_14762a1c8(undefined8 param_1,int param_2)

{
  FUN_14762a264();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762a1ee FUN_14762a1ee body=118 status=ok
// SIG undefined FUN_14762a1ee(void)

void FUN_14762a1ee(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_14762a3ca(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 14762a264 FUN_14762a264 body=71 status=ok
// SIG undefined FUN_14762a264(void)

void FUN_14762a264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c65e0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14762a2e0(param_1 + 8);
  FUN_14762a2ac(param_1 + 1);
  return;
}



// FUNCTION 14762a2ac FUN_14762a2ac body=52 status=ok
// SIG undefined FUN_14762a2ac(void)

void FUN_14762a2ac(longlong *param_1)

{
  FUN_14762a36e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14762a2e0 FUN_14762a2e0 body=52 status=ok
// SIG undefined FUN_14762a2e0(void)

void FUN_14762a2e0(longlong *param_1)

{
  FUN_14762a314();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14762a314 FUN_14762a314 body=89 status=ok
// SIG undefined FUN_14762a314(void)

void FUN_14762a314(longlong param_1)

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



// FUNCTION 14762a36e FUN_14762a36e body=91 status=ok
// SIG undefined FUN_14762a36e(void)

void FUN_14762a36e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1475d80a6(param_1,0);
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



// FUNCTION 14762a3ca FUN_14762a3ca body=95 status=ok
// SIG undefined FUN_14762a3ca(void)

void FUN_14762a3ca(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (ulonglong)param_2 * 8) = uVar5;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14762a42a FUN_14762a42a body=823 status=ok
// SIG undefined FUN_14762a42a(void)

void FUN_14762a42a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_84;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  ushort local_52;
  char local_50;
  char local_4e;
  undefined2 local_4c;
  char local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762a479;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14762a479:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_78 = *(ulonglong *)(param_1 + 0x40);
  local_84 = *(int *)(param_2 + 0x14);
  if (local_84 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_14762a4d0;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14762a4d0:
  lVar6 = *plVar11;
  local_88 = *(int *)(param_2 + 0x14);
  if (local_88 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar3 = *plVar10;
  local_70 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar1 != 0) {
    local_80 = param_1 + 8;
    uVar17 = 0;
    do {
      local_58 = *(int *)(lVar3 + uVar17 * 8);
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar8 = *(longlong *)(param_1 + 8);
      uVar12 = 0;
      if (0 < (int)uVar2) {
        uVar12 = 0;
        uVar14 = (ulonglong)uVar2;
        uVar15 = uVar2;
        do {
          uVar14 = uVar14 >> 1;
          uVar16 = (uint)uVar14 + (int)uVar12;
          if (*(int *)(lVar8 + (ulonglong)uVar16 * 8) < local_58) {
            uVar12 = (ulonglong)(uVar16 + (uVar15 & 1));
          }
          bVar4 = 1 < uVar15;
          uVar15 = (uint)uVar14;
        } while (bVar4);
      }
      if ((((int)uVar12 < (int)uVar2) && (*(int *)(lVar8 + uVar12 * 8) <= local_58)) &&
         (puVar7 = (undefined1 *)(lVar8 + uVar12 * 8 + 4), puVar7 != (undefined1 *)0x0)) {
        *(undefined1 *)(lVar6 + uVar17) = *puVar7;
      }
      else {
        lVar8 = FUN_1475b443c(local_70);
        if (((lVar8 != 0) && (lVar9 = FUN_14479d2ce(lVar8), lVar9 != 0)) &&
           (*(longlong *)(lVar8 + 8) != 0)) {
          local_68 = *(undefined4 *)(param_1 + 0x30);
          uStack_64 = *(undefined4 *)(param_1 + 0x34);
          uStack_60 = *(undefined4 *)(param_1 + 0x38);
          uStack_5c = *(undefined4 *)(param_1 + 0x3c);
          local_98 = lVar9;
          FUN_140d4d2ba(&local_52,lVar9,lVar8 + 8,&local_68);
          lVar9 = *(longlong *)(param_1 + 0x48);
          if (lVar9 == 0) {
LAB_14762a5da:
            if (local_4e == '\0') {
              local_4c = 0x100;
              puVar13 = &local_4c;
              FUN_14762ac92(local_98,lVar8 + 0x10,puVar13);
              uVar5 = (undefined1)local_4c;
            }
            else {
              if (local_50 == '\x01') {
                local_4c = CONCAT11(1,(undefined1)local_4c);
                uVar5 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                                    (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_52))
                                  (local_98);
              }
              else {
                local_4c = 0x100;
                uVar5 = *(undefined1 *)(local_98 + (ulonglong)local_52);
              }
              local_4c = CONCAT11(local_4c._1_1_,uVar5);
              puVar13 = &local_4c;
            }
          }
          else {
            local_90 = lVar9;
            if (local_4e == '\0') {
              FUN_14762ad38(lVar9,&local_4c,local_98,lVar8 + 0x10);
            }
            else if (local_50 == '\x01') {
              FUN_14762b55a();
            }
            else {
              FUN_14762b73c(lVar9,&local_4c,local_98,local_52);
            }
            if (local_4a == '\x01') {
              puVar13 = (undefined2 *)((ulonglong)local_4c * 8 + *(longlong *)(local_90 + 8));
            }
            else {
              puVar13 = (undefined2 *)0x0;
            }
            if (puVar13 == (undefined2 *)0x0) goto LAB_14762a5da;
            uVar5 = *(undefined1 *)puVar13;
          }
          *(undefined1 *)(lVar6 + uVar17) = uVar5;
          FUN_14762b91e(local_80,&local_58,puVar13);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar1);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    uVar17 = plVar11[2];
    if ((ulonglong)plVar11[2] < local_78) {
      uVar17 = local_78;
    }
    plVar11[2] = uVar17;
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_84 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762a762 FUN_14762a762 body=1327 status=ok
// SIG undefined FUN_14762a762(void)

void FUN_14762a762(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  int local_c4;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a1;
  undefined2 local_a0 [4];
  longlong local_98;
  int local_90;
  longlong local_88;
  ushort local_7c;
  char local_7a;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong *local_68;
  ushort local_60;
  char cStack_5e;
  undefined5 uStack_5d;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_14762a7b7;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14762a7b7:
  local_d8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_bc = *(int *)(param_2 + 0x14);
  if (local_bc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_14762a810;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14762a810:
  local_d0 = *plVar8;
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_c0 = *(int *)(param_2 + 0x14);
  if (local_c0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14762a869;
      plVar11 = plVar11 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14762a869:
  local_e0 = *plVar9;
  local_c4 = *(int *)(param_2 + 0x14);
  if (local_c4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar5 = *plVar11;
  FUN_140b325e4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_88 == 0) {
    FUN_1410bd96e(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar3 = local_50;
    if (local_50 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if ((short)local_d8 != 0 && local_68 != (longlong *)0x0) {
        uVar7 = 0;
        plVar10 = local_68;
        do {
          puVar6 = &DAT_149dfb77a;
          if (*(int *)(*plVar10 + 0x58) != 0) {
            puVar6 = *(undefined2 **)(*plVar10 + 0x50);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(local_a0,puVar6,1);
          FUN_14762ad38(uVar2,&local_7c,*(undefined8 *)(lVar5 + uVar7 * 8),local_a0);
          if (local_7a == '\x01') {
            *(undefined1 *)(local_e0 + uVar7) =
                 *(undefined1 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_7c * 8);
          }
          else {
            local_a1 = FUN_141028f10(*plVar10,*(undefined8 *)(lVar5 + uVar7 * 8));
            *(undefined1 *)(local_e0 + uVar7) = local_a1;
            local_e8 = *plVar10;
            FUN_14762bc90(*(undefined8 *)(param_1 + 0x48),local_a0,
                          *(undefined8 *)(lVar5 + uVar7 * 8),&local_a1);
            *(undefined2 *)(local_d0 + uVar7 * 2) = local_a0[0];
          }
          uVar7 = uVar7 + 1;
          plVar10 = plVar10 + 2;
        } while (local_d8 != uVar7);
      }
      lVar5 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_70 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
        }
      }
    }
    else if (local_d8 != 0) {
      uVar7 = 0;
      do {
        FUN_14762b73c(*(undefined8 *)(param_1 + 0x48),&local_78,*(undefined8 *)(lVar5 + uVar7 * 8),
                      *(undefined2 *)(local_50 + uVar7 * 2));
        if (cStack_76 == '\x01') {
          *(undefined1 *)(local_e0 + uVar7) =
               *(undefined1 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_78 * 8);
        }
        else {
          uVar4 = *(undefined1 *)
                   (*(longlong *)(lVar5 + uVar7 * 8) + (ulonglong)*(ushort *)(lVar3 + uVar7 * 2));
          local_7c = CONCAT11(local_7c._1_1_,uVar4);
          *(undefined1 *)(local_e0 + uVar7) = uVar4;
          local_e8 = CONCAT62(local_e8._2_6_,*(undefined2 *)(lVar3 + uVar7 * 2));
          FUN_14762bbb8(*(undefined8 *)(param_1 + 0x48),local_a0,*(undefined8 *)(lVar5 + uVar7 * 8),
                        &local_7c);
          *(undefined2 *)(local_d0 + uVar7 * 2) = local_a0[0];
        }
        uVar7 = uVar7 + 1;
      } while (local_d8 != uVar7);
    }
    lVar5 = CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60));
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_58 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60)) + 8));
      }
    }
  }
  else if (local_d8 != 0) {
    uVar7 = 0;
    do {
      FUN_14762b55a(*(undefined8 *)(param_1 + 0x48),&local_60,*(undefined8 *)(lVar5 + uVar7 * 8),
                    *(undefined2 *)(local_88 + uVar7 * 2));
      if (cStack_5e == '\x01') {
        *(undefined1 *)(local_e0 + uVar7) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + (ulonglong)local_60 * 8);
      }
      else {
        uVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                            (longlong)*(int *)(param_1 + 0x3c) *
                            (ulonglong)*(ushort *)(local_88 + uVar7 * 2)))
                          (*(undefined8 *)(lVar5 + uVar7 * 8));
        local_a0[0] = CONCAT11(local_a0[0]._1_1_,uVar4);
        *(undefined1 *)(local_e0 + uVar7) = uVar4;
        local_e8 = CONCAT62(local_e8._2_6_,*(undefined2 *)(local_88 + uVar7 * 2));
        FUN_14762bae0(*(undefined8 *)(param_1 + 0x48),&local_78,*(undefined8 *)(lVar5 + uVar7 * 8),
                      local_a0);
        *(ushort *)(local_d0 + uVar7 * 2) = local_78;
      }
      uVar7 = uVar7 + 1;
    } while (local_d8 != uVar7);
  }
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
    UNLOCK();
    if (local_90 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_c4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    uVar7 = plVar9[2];
    if ((ulonglong)plVar9[2] < local_b8) {
      uVar7 = local_b8;
    }
    plVar9[2] = uVar7;
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_c0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar7 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b0) {
      uVar7 = local_b0;
    }
    plVar8[2] = uVar7;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762ac92 FUN_14762ac92 body=164 status=ok
// SIG undefined FUN_14762ac92(void)

void FUN_14762ac92(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  undefined1 local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_48);
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_38,puVar1);
  FUN_14762ba66(&local_22,param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_21 == '\x01') {
    *param_3 = local_22;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762ad38 FUN_14762ad38 body=483 status=ok
// SIG undefined FUN_14762ad38(void)

undefined8 FUN_14762ad38(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14762ae66;
        }
        else {
LAB_14762ae66:
          FUN_14762b1c2(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14762b28e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_14762b10a(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_14762af1c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762af1c FUN_14762af1c body=493 status=ok
// SIG undefined FUN_14762af1c(void)

undefined2 * FUN_14762af1c(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14762b04e;
        }
        else {
LAB_14762b04e:
          FUN_14762b1c2(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_14762b28e(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_14762b10a(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_14762b4a2((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762b10a FUN_14762b10a body=184 status=ok
// SIG undefined FUN_14762b10a(void)

void FUN_14762b10a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7 * 8);
          iVar1 = *(int *)(lVar2 + 4 + lVar7 * 8);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 8) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 8) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7 * 8);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1475d80a6(param_1,iVar5);
  return;
}



// FUNCTION 14762b1c2 FUN_14762b1c2 body=90 status=ok
// SIG undefined FUN_14762b1c2(void)

void FUN_14762b1c2(longlong *param_1,int param_2)

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
  FUN_14762b21c();
  return;
}



// FUNCTION 14762b21c FUN_14762b21c body=114 status=ok
// SIG undefined FUN_14762b21c(void)

void FUN_14762b21c(longlong *param_1,int param_2)

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



// FUNCTION 14762b28e FUN_14762b28e body=68 status=ok
// SIG undefined FUN_14762b28e(void)

void FUN_14762b28e(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_14762b2d2(param_1);
  return;
}



// FUNCTION 14762b2d2 FUN_14762b2d2 body=462 status=ok
// SIG undefined FUN_14762b2d2(void)

void FUN_14762b2d2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14762b4a2 FUN_14762b4a2 body=107 status=ok
// SIG undefined FUN_14762b4a2(void)

int FUN_14762b4a2(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_14762b50d(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14762b50d FUN_14762b50d body=76 status=ok
// SIG undefined FUN_14762b50d(void)

undefined8 FUN_14762b50d(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14762b55a FUN_14762b55a body=481 status=ok
// SIG undefined FUN_14762b55a(void)

undefined8 FUN_14762b55a(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14762b688;
        }
        else {
LAB_14762b688:
          FUN_14762b1c2(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14762b28e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_14762b10a(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_14762af1c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762b73c FUN_14762b73c body=481 status=ok
// SIG undefined FUN_14762b73c(void)

undefined8 FUN_14762b73c(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14762b86a;
        }
        else {
LAB_14762b86a:
          FUN_14762b1c2(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_14762b28e(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_14762b10a(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_14762af1c(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762b91e FUN_14762b91e body=194 status=ok
// SIG undefined FUN_14762b91e(void)

void FUN_14762b91e(longlong *param_1,int *param_2,undefined1 *param_3)

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
      goto LAB_14762b9b7;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14762b9e0(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_14762b9b7:
  *piVar9 = iVar5;
  *(undefined1 *)(piVar9 + 1) = *param_3;
  return;
}



// FUNCTION 14762b9e0 FUN_14762b9e0 body=132 status=ok
// SIG undefined FUN_14762b9e0(void)

void FUN_14762b9e0(longlong param_1,int param_2)

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



// FUNCTION 14762ba66 FUN_14762ba66 body=121 status=ok
// SIG undefined FUN_14762ba66(void)

undefined1 * FUN_14762ba66(undefined1 *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar2 = FUN_1406f977c(local_48);
  if ((lVar2 == 0) ||
     (puVar3 = (undefined1 *)(*(int *)(lVar2 + 0x44) + local_20), puVar3 == (undefined1 *)0x0)) {
    uVar1 = 0;
  }
  else {
    *param_1 = *puVar3;
    uVar1 = 1;
  }
  param_1[1] = uVar1;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762bae0 FUN_14762bae0 body=214 status=ok
// SIG undefined FUN_14762bae0(void)

undefined2 *
FUN_14762bae0(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined2 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_14762bd84(param_1 + 8,&local_60);
  *(undefined1 *)local_58 = *param_4;
  local_58 = &local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_14762be60(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762bbb8 FUN_14762bbb8 body=214 status=ok
// SIG undefined FUN_14762bbb8(void)

undefined2 *
FUN_14762bbb8(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 *param_4,
             undefined2 param_5)

{
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined2 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_14762bd84(param_1 + 8,&local_60);
  *(undefined1 *)local_58 = *param_4;
  local_58 = &local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_14762be60(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762bc90 FUN_14762bc90 body=242 status=ok
// SIG undefined FUN_14762bc90(void)

undefined2 *
FUN_14762bc90(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined2 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_14762bd84(param_1 + 8,&local_58);
  *(undefined1 *)local_50 = *param_4;
  local_50 = &local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_14762be60(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762bd84 FUN_14762bd84 body=220 status=ok
// SIG undefined FUN_14762bd84(void)

int * FUN_14762bd84(longlong *param_1,int *param_2)

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
      FUN_1475da262(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 8 + *param_1;
  return param_2;
}



// FUNCTION 14762be60 FUN_14762be60 body=339 status=ok
// SIG undefined FUN_14762be60(void)

undefined4 * FUN_14762be60(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14762bfb4(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_14762c09a(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14762b2d2(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762bfb4 FUN_14762bfb4 body=229 status=ok
// SIG undefined FUN_14762bfb4(void)

int * FUN_14762bfb4(longlong *param_1,int *param_2)

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



// FUNCTION 14762c09a FUN_14762c09a body=93 status=ok
// SIG undefined FUN_14762c09a(void)

undefined8 FUN_14762c09a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14762b4a2(), iVar7 != -1)) {
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
    FUN_14762b21c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14762c0f8 FUN_14762c0f8 body=96 status=ok
// SIG undefined FUN_14762c0f8(void)

void FUN_14762c0f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14762c158 FUN_14762c158 body=31 status=ok
// SIG undefined FUN_14762c158(void)

undefined8 FUN_14762c158(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762c178 FUN_14762c178 body=327 status=ok
// SIG undefined FUN_14762c178(void)

void FUN_14762c178(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  longlong local_148;
  undefined1 local_134 [4];
  undefined2 *local_130;
  undefined2 *local_128;
  ushort local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined4 local_116;
  undefined2 local_112;
  undefined2 local_110;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [12];
  undefined1 local_f4;
  byte bStack_f3;
  uint local_f0;
  longlong local_98;
  code *local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  local_118 = *(undefined2 *)(lVar1 + 0x4a);
  local_112 = *(undefined2 *)(lVar1 + 0x108);
  local_116 = *(undefined4 *)(lVar1 + 0x104);
  local_110 = *(undefined2 *)*param_3;
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_11a = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_11a;
  local_128 = &local_118;
  FUN_14762c7fa(&local_118,local_100);
  local_f0 = *(uint *)(param_6 + 0x290);
  bVar2 = bStack_f3 & 0xfe | (local_f0 & 0xfffffeff) == 1;
  _local_f4 = CONCAT11(bVar2,local_f4);
  local_158 = &local_11c;
  local_11c = CONCAT11(bVar2,local_f4) & 0xfdff;
  local_150 = &local_38;
  local_38 = FUN_14762cb2e;
  local_30 = 3;
  local_148 = param_2;
  FUN_14762c924(local_100,local_134,param_6 + 0x28,param_5);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762c2c0 FUN_14762c2c0 body=322 status=ok
// SIG undefined FUN_14762c2c0(void)

void FUN_14762c2c0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_130;
  undefined2 *local_128;
  undefined8 *local_120;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined2 local_10a;
  undefined2 local_108;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [13];
  byte local_eb;
  uint local_e8;
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = FUN_14009d2a0();
  local_110 = *(undefined2 *)(lVar2 + 0x4a);
  local_10a = *(undefined2 *)(lVar2 + 0x108);
  local_10e = *(undefined4 *)(lVar2 + 0x104);
  local_108 = *(undefined2 *)*param_3;
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_112 = *(undefined2 *)(param_2 + 0x14);
  local_130 = &local_112;
  local_128 = &local_110;
  FUN_14762c7fa(&local_110,local_f8);
  local_e8 = *(uint *)(param_7 + 0x290);
  local_eb = local_eb & 0xfe | (local_e8 & 0xfffffeff) == 1;
  local_148 = param_6;
  local_140 = param_2;
  FUN_1432fecb2(local_f8,&local_120,param_7 + 0x28,param_5);
  if (local_120 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_120 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_120)(local_120,1);
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762c404 FUN_14762c404 body=130 status=ok
// SIG undefined FUN_14762c404(void)

void FUN_14762c404(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_14762ec58(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762c488 FUN_14762c488 body=616 status=ok
// SIG undefined FUN_14762c488(void)

void FUN_14762c488(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_14762ef5e(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762c6f2 FUN_14762c6f2 body=263 status=ok
// SIG undefined FUN_14762c6f2(void)

void FUN_14762c6f2(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = (int)param_4[1];
  if (0 < iVar3) {
    lVar2 = *param_6;
    lVar5 = 0;
    do {
      if (*(short *)(*param_4 + lVar5 * 2) != -1) {
        FUN_1432d4ca4(param_5 + 0x28,&local_60);
        lVar4 = (longlong)local_58;
        FUN_14762f08e(local_60,&local_60,*(undefined2 *)*param_3);
        if ((local_50 != 0) &&
           (puVar1 = (undefined4 *)(local_50 + lVar4 * 4), puVar1 != (undefined4 *)0x0)) {
          *(undefined4 *)((ulonglong)*(ushort *)(*param_3 + 2) + lVar2 + lVar5 * 4) = *puVar1;
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762c7fa FUN_14762c7fa body=148 status=ok
// SIG undefined FUN_14762c7fa(void)

undefined8 * FUN_14762c7fa(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_14762c890(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762c890 FUN_14762c890 body=147 status=ok
// SIG undefined FUN_14762c890(void)

void FUN_14762c890(undefined2 *param_1,undefined8 param_2)

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
  FUN_140dad887(param_1 + 1,param_2);
  local_32 = param_1[4];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762c924 FUN_14762c924 body=520 status=ok
// SIG undefined FUN_14762c924(void)

int * FUN_14762c924(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_14762cb80(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_14762c962;
  }
  plVar5 = (longlong *)FUN_14762cc3b(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_14762cbf0(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_14762cd2e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14762cab9;
    }
  }
  else {
LAB_14762cab9:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_14762c962:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14762cb2e FUN_14762cb2e body=80 status=ok
// SIG undefined FUN_14762cb2e(void)

void FUN_14762cb2e(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_14762ce42(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762cb80 FUN_14762cb80 body=112 status=ok
// SIG undefined FUN_14762cb80(void)

undefined8 FUN_14762cb80(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
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
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 14762cbf0 FUN_14762cbf0 body=75 status=ok
// SIG undefined FUN_14762cbf0(void)

void FUN_14762cbf0(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  FUN_140dba9e6(param_2,param_1[4]);
  return;
}



// FUNCTION 14762cc3b FUN_14762cc3b body=180 status=ok
// SIG undefined FUN_14762cc3b(void)

undefined8 * FUN_14762cc3b(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14a4c6640;
  puVar4[2] = &PTR_FUN_14a4c6658;
  param_2 = (longlong *)*param_2;
  puVar4[3] = param_2;
  puVar4[4] = 0;
  puVar4[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar4[4] = local_38;
    puVar4[5] = uStack_30;
  }
  puVar4[8] = *(undefined8 *)(param_1 + 4);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(puVar4 + 6) = *param_1;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uVar1;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762ccf2 FUN_14762ccf2 body=29 status=ok
// SIG undefined FUN_14762ccf2(void)

undefined8 FUN_14762ccf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762cd10 FUN_14762cd10 body=29 status=ok
// SIG undefined FUN_14762cd10(void)

undefined8 FUN_14762cd10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14762cd46 FUN_14762cd46 body=251 status=ok
// SIG undefined FUN_14762cd46(void)

void FUN_14762cd46(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,5);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_14762cd8e;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14762cd8e:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar5 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[4]) goto LAB_14762ce21;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14762ce21:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(*param_3 + 0x10 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14762ce42 FUN_14762ce42 body=194 status=ok
// SIG undefined FUN_14762ce42(void)

void FUN_14762ce42(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar5 = 0;
  local_50 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    local_40 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_58 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    local_58 = lVar5;
  }
  FUN_14762cf06(param_1,lVar1,lVar4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762cf06 FUN_14762cf06 body=205 status=ok
// SIG undefined FUN_14762cf06(void)

void FUN_14762cf06(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_4;
  if (lVar2 == 0) {
    lVar2 = param_4[1];
    if (lVar2 == 0) {
      lVar2 = param_4[2];
      if (uVar1 != 0 && lVar2 != 0) {
        uVar5 = 0;
        do {
          FUN_14762cfd4(*(undefined8 *)(lVar2 + uVar5 * 8),*(undefined8 *)(param_3 + uVar5 * 4),
                        *(undefined4 *)(param_5 + uVar5 * 2));
          uVar5 = uVar5 + 2;
        } while ((uint)uVar1 * 2 != uVar5);
      }
    }
    else if (uVar5 != 0) {
      uVar4 = 0;
      do {
        uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar4 * 2);
        if (uVar3 != 0) {
          *(undefined4 *)(*(longlong *)(param_3 + uVar4 * 8) + uVar3) =
               *(undefined4 *)(param_5 + uVar4 * 4);
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else if (uVar5 != 0) {
    uVar4 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar2 + uVar4 * 2)))
                (*(undefined8 *)(param_3 + uVar4 * 8),*(undefined4 *)(param_5 + uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 14762cfd4 FUN_14762cfd4 body=248 status=ok
// SIG undefined FUN_14762cfd4(void)

void FUN_14762cfd4(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [12];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_1c = param_3;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,&local_1c);
      goto LAB_14762d038;
    }
  }
  lVar3 = FUN_14479d2ce(local_30);
  if (lVar3 == 0) {
    lVar3 = FUN_1406f977c(local_60);
    if ((lVar3 != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined4 *)0x0)) {
      *puVar4 = local_1c;
    }
  }
  else {
    FUN_14762d0ce(param_2,lVar3,&local_1c);
  }
LAB_14762d038:
  lVar3 = FUN_14479d2ce(local_28);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar3,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762d0ce FUN_14762d0ce body=401 status=ok
// SIG undefined FUN_14762d0ce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14762d0ce(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14762d16d;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14762d184;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 4) goto LAB_14762d21e;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14762d1d5;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14762d1ed;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 2);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x14762d21a;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_14762d21e:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_14762d248;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762d264 FUN_14762d264 body=127 status=ok
// SIG undefined FUN_14762d264(void)

undefined4 * FUN_14762d264(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
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



// FUNCTION 14762d2e4 FUN_14762d2e4 body=238 status=ok
// SIG undefined FUN_14762d2e4(void)

void FUN_14762d2e4(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14762d3d4 FUN_14762d3d4 body=622 status=ok
// SIG undefined FUN_14762d3d4(void)

void FUN_14762d3d4(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_14762d427;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_14762d427:
  iVar1 = *(int *)(lVar3 + 0x14);
  local_130 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_138 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_110,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_14762d498;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_14762d498:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  lVar6 = local_d0;
  lVar7 = local_e8;
  lVar3 = local_100;
  uVar5 = local_138;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar8;
  local_b0 = local_110;
  local_a8 = local_108;
  local_110 = 0;
  local_a0 = local_100;
  local_100 = 0;
  local_98 = local_f8;
  local_90 = local_f0;
  local_f8 = 0;
  local_88 = local_e8;
  local_e8 = 0;
  local_80 = local_e0;
  local_78 = local_d8;
  local_e0 = 0;
  local_70 = local_d0;
  local_d0 = 0;
  local_58 = local_138;
  local_c8 = puVar8;
  local_c0 = iVar2;
  local_b8 = uVar4;
  local_68 = puVar9;
  local_60 = iVar1;
  FUN_1432f59b8();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  if (lVar3 != 0) {
    local_128 = lVar3;
  }
  if (lVar7 != 0) {
    lStack_120 = lVar7;
  }
  if (lVar6 != 0) {
    local_118 = lVar6;
  }
  local_148 = uVar5;
  FUN_14762cf06(local_130,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar4,&local_128);
  FUN_14762d644(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14762d644 FUN_14762d644 body=94 status=ok
// SIG undefined FUN_14762d644(void)

void FUN_14762d644(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014762d694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14762d6a2 FUN_14762d6a2 body=118 status=ok
// SIG undefined FUN_14762d6a2(void)

longlong FUN_14762d6a2(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14762d264();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xd8) = param_4;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe0) = local_30;
    *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_28;
    *(undefined4 *)(param_1 + 0xec) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


