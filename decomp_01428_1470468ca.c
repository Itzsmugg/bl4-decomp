// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470468ca FUN_1470468ca body=21 status=ok
// SIG undefined FUN_1470468ca(void)

undefined8 FUN_1470468ca(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1470468e0 FUN_1470468e0 body=34 status=ok
// SIG undefined FUN_1470468e0(void)

undefined8 FUN_1470468e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147046902 FUN_147046902 body=48 status=ok
// SIG undefined FUN_147046902(void)

void FUN_147046902(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147046932 FUN_147046932 body=132 status=ok
// SIG undefined FUN_147046932(void)

void FUN_147046932(longlong param_1,int param_2)

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



// FUNCTION 1470469b8 FUN_1470469b8 body=342 status=ok
// SIG undefined FUN_1470469b8(void)

undefined4 * FUN_1470469b8(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[4] = param_2[4];
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_2 + 0x14) = 0;
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x1c) = 0;
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined8 *)(param_2 + 0x1e) = 0;
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_2 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  *(undefined8 *)(param_2 + 0x26) = 0;
  return param_1;
}



// FUNCTION 147046b0e FUN_147046b0e body=147 status=ok
// SIG undefined FUN_147046b0e(void)

void FUN_147046b0e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147046ba2 FUN_147046ba2 body=132 status=ok
// SIG undefined FUN_147046ba2(void)

void FUN_147046ba2(longlong param_1,int param_2)

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



// FUNCTION 147046c60 FUN_147046c60 body=34 status=ok
// SIG undefined FUN_147046c60(void)

undefined8 FUN_147046c60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147046cb6 FUN_147046cb6 body=34 status=ok
// SIG undefined FUN_147046cb6(void)

undefined8 FUN_147046cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147046cd8 FUN_147046cd8 body=43 status=ok
// SIG undefined FUN_147046cd8(void)

undefined8 FUN_147046cd8(undefined8 param_1,int param_2)

{
  FUN_147046f92();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 147046d04 FUN_147046d04 body=324 status=ok
// SIG undefined FUN_147046d04(void)

void FUN_147046d04(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)(param_1 + 0x10);
  lVar1 = param_1 + 0x20;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar1;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar3;
  if ((iStack_3c != iVar2) || (uStack_48 != lVar1)) {
    do {
      local_88 = *(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18);
      local_80 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      FUN_147047176(param_2,&local_88);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar3 || (CONCAT44(uStack_64,uStack_68) != lVar1 || iStack_5c != iVar2));
  }
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147046e4a FUN_147046e4a body=160 status=ok
// SIG undefined FUN_147046e4a(void)

void FUN_147046e4a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  uVar9 = *param_2;
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar13 = param_2[4];
  uVar14 = param_2[5];
  uVar15 = param_2[7];
  *(undefined8 *)(param_1 + 0x90) = param_2[6];
  *(undefined8 *)(param_1 + 0x98) = uVar15;
  *(undefined8 *)(param_1 + 0x80) = uVar13;
  *(undefined8 *)(param_1 + 0x88) = uVar14;
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  *(undefined8 *)(param_1 + 0x78) = uVar12;
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_28._0_4_ = (undefined4)uVar5;
  local_28._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar6;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_18._0_4_ = (undefined4)uVar7;
  local_18._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar8;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_18._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_10._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
  local_48 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  local_18 = uVar7;
  uStack_10 = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147046eec FUN_147046eec body=163 status=ok
// SIG undefined FUN_147046eec(void)

void FUN_147046eec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147047232(param_1 + 0x10,local_1c,param_2);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1470471d4(param_1 + 0x60,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147046f92 FUN_147046f92 body=87 status=ok
// SIG undefined FUN_147046f92(void)

void FUN_147046f92(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a13e020;
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147046fea(param_1 + 2);
  return;
}



// FUNCTION 147046fea FUN_147046fea body=52 status=ok
// SIG undefined FUN_147046fea(void)

void FUN_147046fea(longlong *param_1)

{
  FUN_14704701e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14704701e FUN_14704701e body=343 status=ok
// SIG undefined FUN_14704701e(void)

void FUN_14704701e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 147047176 FUN_147047176 body=94 status=ok
// SIG undefined FUN_147047176(void)

void FUN_147047176(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar3 = (code *)*param_1;
  plVar5 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,param_2);
  plVar5 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001470471c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1470471d4 FUN_1470471d4 body=94 status=ok
// SIG undefined FUN_1470471d4(void)

void FUN_1470471d4(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar3 = (code *)*param_1;
  plVar5 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(uVar4,param_2);
  plVar5 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147047226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147047232 FUN_147047232 body=413 status=ok
// SIG undefined FUN_147047232(void)

undefined4 * FUN_147047232(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470473d0(param_1,local_48);
  uVar9 = *param_3;
  *local_40 = uVar9;
  uVar3 = param_3[1];
  local_40[1] = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
  }
  else {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)local_40[1];
    *(undefined4 *)(local_40 + 2) = 0xffffffff;
    local_4c = local_48[0];
    uVar9 = *local_40;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
  }
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  cVar6 = FUN_1470474b6(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_147047720(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470473d0 FUN_1470473d0 body=230 status=ok
// SIG undefined FUN_1470473d0(void)

int * FUN_1470473d0(longlong *param_1,int *param_2)

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



// FUNCTION 1470474b6 FUN_1470474b6 body=274 status=ok
// SIG undefined FUN_1470474b6(void)

undefined8 FUN_1470474b6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar8 = FUN_1470475ca(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar8 = FUN_1470475ca(param_1);
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
    }
    if (iVar8 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x18);
      plVar4 = *(longlong **)(puVar3 + 2);
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
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      *puVar3 = *(undefined4 *)param_3;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_1470476ae(param_1,*param_4);
      *param_4 = iVar8;
      uVar9 = 1;
      goto LAB_1470474de;
    }
  }
  uVar9 = 0;
LAB_1470474de:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470475ca FUN_1470475ca body=228 status=ok
// SIG undefined FUN_1470475ca(void)

int FUN_1470475ca(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 1470476ae FUN_1470476ae body=114 status=ok
// SIG undefined FUN_1470476ae(void)

void FUN_1470476ae(longlong *param_1,int param_2)

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



// FUNCTION 147047720 FUN_147047720 body=527 status=ok
// SIG undefined FUN_147047720(void)

void FUN_147047720(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar8 != uVar11);
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
        lVar4 = *local_90;
        lVar6 = (longlong)iVar12;
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x18);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x18);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        lVar4 = lVar4 + lVar6 * 0x18;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147047930 FUN_147047930 body=113 status=ok
// SIG undefined FUN_147047930(void)

void FUN_147047930(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 1470479a2 FUN_1470479a2 body=132 status=ok
// SIG undefined FUN_1470479a2(void)

void FUN_1470479a2(longlong param_1,int param_2)

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



// FUNCTION 147047a28 FUN_147047a28 body=132 status=ok
// SIG undefined FUN_147047a28(void)

void FUN_147047a28(longlong param_1,int param_2)

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



// FUNCTION 147047abc FUN_147047abc body=331 status=ok
// SIG undefined FUN_147047abc(void)

void FUN_147047abc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar3 == *plVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_38,0x10);
    }
  }
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_30,0x10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147047c0e FUN_147047c0e body=210 status=ok
// SIG undefined FUN_147047c0e(void)

void FUN_147047c0e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  plVar2 = &local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong *)*plVar2 == (longlong *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(longlong *)*plVar2 != 0;
  }
  *param_3 = bVar3;
  if (local_20 != 0) {
    piVar1 = (int *)(local_20 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_20,0x10);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147047ce8 FUN_147047ce8 body=331 status=ok
// SIG undefined FUN_147047ce8(void)

void FUN_147047ce8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = *plVar3 != *plVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_38,0x10);
    }
  }
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_30,0x10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147047e34 FUN_147047e34 body=186 status=ok
// SIG undefined FUN_147047e34(void)

void FUN_147047e34(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_20;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14704bf6a(plVar2);
  if (local_20 != 0) {
    piVar1 = (int *)(local_20 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_20,0x10);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147047ef8 FUN_147047ef8 body=336 status=ok
// SIG undefined FUN_147047ef8(void)

void FUN_147047ef8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar4 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_14704804a(&local_40,plVar4);
  *param_3 = uVar3;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_30,0x10);
    }
  }
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704804a FUN_14704804a body=212 status=ok
// SIG undefined FUN_14704804a(void)

undefined4 FUN_14704804a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    if (local_30 != 0) {
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    }
    uVar5 = FUN_147050a0c(lVar3,&local_30);
    if (local_30 != 0) {
      piVar1 = (int *)(local_30 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        thunk_FUN_1400020a8(local_30,0x10);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147048120 FUN_147048120 body=329 status=ok
// SIG undefined FUN_147048120(void)

void FUN_147048120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
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
  plVar3 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14704826a(&local_48,plVar3);
  FUN_14704c977(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704826a FUN_14704826a body=176 status=ok
// SIG undefined FUN_14704826a(void)

void FUN_14704826a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    local_28 = *param_2;
    local_20 = *(undefined4 *)(param_2 + 1);
    FUN_14704c5f4(lVar3,&local_28);
  }
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
  plVar4 = (longlong *)param_1[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704831c FUN_14704831c body=358 status=ok
// SIG undefined FUN_14704831c(void)

void FUN_14704831c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
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
  local_48 = local_38;
  local_40 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_58 = local_28;
  local_50 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_147048484(&local_58,&local_48);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147048484 FUN_147048484 body=384 status=ok
// SIG undefined FUN_147048484(void)

void FUN_147048484(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    if (lVar4 == 0 || lVar6 == 0) goto LAB_147048512;
    local_38 = (longlong *)0x0;
LAB_1470485b2:
    local_40 = lVar6;
    FUN_14704c79e(lVar4,&local_40);
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_147048512;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (lVar4 != 0 && lVar6 != 0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_38 = plVar7;
      goto LAB_1470485b2;
    }
  }
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
LAB_147048512:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147048606 FUN_147048606 body=277 status=ok
// SIG undefined FUN_147048606(void)

void FUN_147048606(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14704871c(local_38,&local_48);
  FUN_147048810(param_3,local_38);
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
  plVar1 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704871c FUN_14704871c body=243 status=ok
// SIG undefined FUN_14704871c(void)

undefined8 * FUN_14704871c(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1470503ca(lVar3,&local_38);
    *param_1 = local_38;
    param_1[1] = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
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
  plVar4 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147048810 FUN_147048810 body=96 status=ok
// SIG undefined FUN_147048810(void)

undefined8 * FUN_147048810(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
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
      }
    }
  }
  return param_1;
}



// FUNCTION 147048876 FUN_147048876 body=336 status=ok
// SIG undefined FUN_147048876(void)

void FUN_147048876(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar4 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_1470489c8(&local_40,plVar4);
  *param_3 = uVar3;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_30,0x10);
    }
  }
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470489c8 FUN_1470489c8 body=162 status=ok
// SIG undefined FUN_1470489c8(void)

undefined4 FUN_1470489c8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if ((longlong *)*param_2 == (longlong *)0x0) {
      puVar7 = &DAT_14c99f64c;
    }
    else {
      lVar5 = *(longlong *)*param_2;
      puVar7 = &DAT_14c99f64c;
      if (lVar5 != 0) {
        puVar7 = (undefined4 *)(lVar5 + 8);
      }
    }
    uVar6 = FUN_1470509b0(lVar3,puVar7);
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar6;
}



// FUNCTION 147048a6a FUN_147048a6a body=327 status=ok
// SIG undefined FUN_147048a6a(void)

void FUN_147048a6a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147048bb2(&local_48,&local_38);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147048bb2 FUN_147048bb2 body=124 status=ok
// SIG undefined FUN_147048bb2(void)

undefined4 FUN_147048bb2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_14705075e();
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5;
}



// FUNCTION 147048c2e FUN_147048c2e body=298 status=ok
// SIG undefined FUN_147048c2e(void)

void FUN_147048c2e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147048d5a(&local_40,local_30);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147048d5a FUN_147048d5a body=124 status=ok
// SIG undefined FUN_147048d5a(void)

undefined4 FUN_147048d5a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_14705081a();
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5;
}



// FUNCTION 147048dd6 FUN_147048dd6 body=210 status=ok
// SIG undefined FUN_147048dd6(void)

void FUN_147048dd6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147048eaa(local_30,local_20);
  FUN_147048810(param_3,local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147048eaa FUN_147048eaa body=131 status=ok
// SIG undefined FUN_147048eaa(void)

undefined8 * FUN_147048eaa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147050476(&local_28);
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



// FUNCTION 147048f2e FUN_147048f2e body=289 status=ok
// SIG undefined FUN_147048f2e(void)

void FUN_147048f2e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_147049050(&local_40,local_2c);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049050 FUN_147049050 body=292 status=ok
// SIG undefined FUN_147049050(void)

void FUN_147049050(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0x70);
    if (iVar3 != 0) {
      FUN_147050938(lVar4);
    }
    FUN_1403d43ee(lVar4 + 0x18,param_2);
    FUN_14704c932(lVar4 + 0x68,param_2);
    FUN_14704f264(lVar4 + 0x78);
    if (iVar3 != 0) {
      FUN_14704f264(lVar4 + 0x78);
      local_40 = 0;
      FUN_147050948(lVar4,2,&local_40);
      if (local_40 != 0) {
        piVar2 = (int *)(local_40 + 8);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          thunk_FUN_1400020a8(local_40,0x10);
        }
      }
    }
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
  plVar5 = (longlong *)param_1[1];
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049176 FUN_147049176 body=309 status=ok
// SIG undefined FUN_147049176(void)

void FUN_147049176(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1470492ac(&local_38,&local_48,local_2c);
  plVar3 = plStack_20;
  *param_3 = local_38;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470492ac FUN_1470492ac body=148 status=ok
// SIG undefined FUN_1470492ac(void)

longlong * FUN_1470492ac(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    *param_1 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x68) + (longlong)param_3 * 8);
    *param_1 = lVar3;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    }
  }
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
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 147049340 FUN_147049340 body=368 status=ok
// SIG undefined FUN_147049340(void)

void FUN_147049340(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
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
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_58 = local_28;
  local_50 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1470494b2(&local_40,&local_58,&local_48);
  FUN_147049538(param_3,&local_40);
  FUN_14704c977(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 1470494b2 FUN_1470494b2 body=133 status=ok
// SIG undefined FUN_1470494b2(void)

undefined8 * FUN_1470494b2(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1470508ae(lVar3,param_1);
  }
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
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 147049538 FUN_147049538 body=80 status=ok
// SIG undefined FUN_147049538(void)

longlong * FUN_147049538(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14704c977(*param_1,(int)param_1[1]);
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



// FUNCTION 147049588 FUN_147049588 body=447 status=ok
// SIG undefined FUN_147049588(void)

void FUN_147049588(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  plVar4 = &local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_48;
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_147049748(&local_60,plVar4,&local_50);
  *param_3 = uVar3;
  if (local_40 != 0) {
    piVar1 = (int *)(local_40 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_40,0x10);
    }
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049748 FUN_147049748 body=126 status=ok
// SIG undefined FUN_147049748(void)

undefined8 FUN_147049748(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_147050564();
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5;
}



// FUNCTION 1470497cc FUN_1470497cc body=327 status=ok
// SIG undefined FUN_1470497cc(void)

void FUN_1470497cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  local_48 = local_28;
  local_40 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147049914(&local_48,&local_38);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049914 FUN_147049914 body=124 status=ok
// SIG undefined FUN_147049914(void)

undefined4 FUN_147049914(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_147050616();
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5;
}



// FUNCTION 147049996 FUN_147049996 body=298 status=ok
// SIG undefined FUN_147049996(void)

void FUN_147049996(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147049ac2(&local_40,local_30);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049ac2 FUN_147049ac2 body=124 status=ok
// SIG undefined FUN_147049ac2(void)

undefined4 FUN_147049ac2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_147050806();
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5;
}



// FUNCTION 147049b44 FUN_147049b44 body=296 status=ok
// SIG undefined FUN_147049b44(void)

void FUN_147049b44(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147049c6e(&local_40,local_2c);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049c6e FUN_147049c6e body=136 status=ok
// SIG undefined FUN_147049c6e(void)

ulonglong FUN_147049c6e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (param_2 < 0 || lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_2 < *(int *)(lVar3 + 0x70));
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 147049cf6 FUN_147049cf6 body=222 status=ok
// SIG undefined FUN_147049cf6(void)

void FUN_147049cf6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  local_30 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147049dd6(&local_38);
  plVar3 = plStack_20;
  *param_3 = uVar4;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 147049dd6 FUN_147049dd6 body=120 status=ok
// SIG undefined FUN_147049dd6(void)

undefined4 FUN_147049dd6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(lVar3 + 0x70);
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar5;
}



// FUNCTION 147049e54 FUN_147049e54 body=336 status=ok
// SIG undefined FUN_147049e54(void)

void FUN_147049e54(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar4 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_147049fa6(&local_40,plVar4);
  *param_3 = uVar3;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_30,0x10);
    }
  }
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147049fa6 FUN_147049fa6 body=162 status=ok
// SIG undefined FUN_147049fa6(void)

undefined4 FUN_147049fa6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if ((longlong *)*param_2 == (longlong *)0x0) {
      puVar7 = &DAT_14c99f64c;
    }
    else {
      lVar5 = *(longlong *)*param_2;
      puVar7 = &DAT_14c99f64c;
      if (lVar5 != 0) {
        puVar7 = (undefined4 *)(lVar5 + 8);
      }
    }
    uVar6 = FUN_147050b9e(lVar3,puVar7);
  }
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
  plVar4 = (longlong *)param_1[1];
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
  return uVar6;
}



// FUNCTION 14704a048 FUN_14704a048 body=289 status=ok
// SIG undefined FUN_14704a048(void)

void FUN_14704a048(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_28;
  local_38 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14704a16a(&local_40,local_2c);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704a16a FUN_14704a16a body=277 status=ok
// SIG undefined FUN_14704a16a(void)

void FUN_14704a16a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    if ((uint)(*(int *)(lVar3 + 0x20) - *(int *)(lVar3 + 0x4c)) < param_2) {
      if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)param_2);
      }
      FUN_146b7f620(lVar3 + 0x18,param_2);
      iVar6 = 1;
      if (3 < param_2) {
        uVar5 = (param_2 | 1) + 0xe;
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 1 << ((byte)iVar6 & 0x1f);
      }
      if ((*(int *)(lVar3 + 0x60) == 0) || (*(int *)(lVar3 + 0x60) < iVar6)) {
        *(int *)(lVar3 + 0x60) = iVar6;
        FUN_1449809d4(lVar3 + 0x18);
      }
    }
    else if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (*(int *)(lVar3 + 0x74) < (int)param_2) {
      FUN_14704c73e(lVar3 + 0x68,param_2);
    }
  }
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
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014704a1fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14704a280 FUN_14704a280 body=215 status=ok
// SIG undefined FUN_14704a280(void)

void FUN_14704a280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  local_30 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14704a358(&local_38);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704a358 FUN_14704a358 body=292 status=ok
// SIG undefined FUN_14704a358(void)

void FUN_14704a358(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_1;
  plVar5 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x70) != 0)) {
    FUN_147050938(lVar4);
    FUN_146f44312(lVar4 + 0x18);
    iVar3 = *(int *)(lVar4 + 0x74);
    FUN_14704c977(*(undefined8 *)(lVar4 + 0x68),*(undefined4 *)(lVar4 + 0x70));
    *(undefined4 *)(lVar4 + 0x70) = 0;
    if ((iVar3 < 0) && (*(int *)(lVar4 + 0x74) != 0)) {
      FUN_14704c73e(lVar4 + 0x68,0);
    }
    FUN_14704f264(lVar4 + 0x78);
    local_38 = 0;
    FUN_147050948(lVar4,2,&local_38);
    if (local_38 != 0) {
      piVar2 = (int *)(local_38 + 8);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        thunk_FUN_1400020a8(local_38,0x10);
      }
    }
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
  plVar5 = (longlong *)param_1[1];
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704a47e FUN_14704a47e body=215 status=ok
// SIG undefined FUN_14704a47e(void)

void FUN_14704a47e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  local_30 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_14704a556(&local_38);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704a556 FUN_14704a556 body=184 status=ok
// SIG undefined FUN_14704a556(void)

void FUN_14704a556(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    FUN_14704c9ca(lVar3 + 0x18);
    FUN_14704ca8e(lVar3 + 0x18,*(int *)(lVar3 + 0x20) - *(int *)(lVar3 + 0x4c),1);
    if (*(int *)(lVar3 + 0x74) != *(int *)(lVar3 + 0x70)) {
      FUN_14704c73e(lVar3 + 0x68);
    }
  }
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
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014704a5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14704a66a FUN_14704a66a body=121 status=ok
// SIG undefined FUN_14704a66a(void)

undefined8 FUN_14704a66a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(param_3 + lVar4);
      plVar3 = *(longlong **)(param_2 + lVar4);
      if (plVar3 != plVar2) {
        *(longlong **)(param_2 + lVar4) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      lVar1 = param_3 + lVar4;
      *(undefined4 *)(param_2 + 8 + lVar4) = *(undefined4 *)(lVar1 + 8);
      *(undefined8 *)(param_2 + 0x10 + lVar4) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined1 *)(param_2 + 0x18 + lVar4) = *(undefined1 *)(lVar1 + 0x18);
      lVar4 = lVar4 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14704a70c FUN_14704a70c body=59 status=ok
// SIG undefined FUN_14704a70c(void)

undefined8 FUN_14704a70c(longlong *param_1)

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



// FUNCTION 14704a752 FUN_14704a752 body=38 status=ok
// SIG undefined FUN_14704a752(void)

void FUN_14704a752(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14704a816 FUN_14704a816 body=59 status=ok
// SIG undefined FUN_14704a816(void)

undefined8 FUN_14704a816(longlong *param_1)

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



// FUNCTION 14704a90c FUN_14704a90c body=54 status=ok
// SIG undefined FUN_14704a90c(void)

undefined1 FUN_14704a90c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14704aa32(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14704a96a FUN_14704a96a body=59 status=ok
// SIG undefined FUN_14704a96a(void)

undefined8 FUN_14704a96a(longlong *param_1)

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



// FUNCTION 14704a9b0 FUN_14704a9b0 body=51 status=ok
// SIG undefined FUN_14704a9b0(void)

void FUN_14704a9b0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((char)param_2[8] == '\x01') {
    if (*param_2 != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14704aa32 FUN_14704aa32 body=290 status=ok
// SIG undefined FUN_14704aa32(void)

longlong * FUN_14704aa32(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704ab9e FUN_14704ab9e body=59 status=ok
// SIG undefined FUN_14704ab9e(void)

undefined8 FUN_14704ab9e(longlong *param_1)

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



// FUNCTION 14704ac88 FUN_14704ac88 body=59 status=ok
// SIG undefined FUN_14704ac88(void)

undefined8 FUN_14704ac88(longlong *param_1)

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



// FUNCTION 14704ad96 FUN_14704ad96 body=59 status=ok
// SIG undefined FUN_14704ad96(void)

undefined8 FUN_14704ad96(longlong *param_1)

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



// FUNCTION 14704ae86 FUN_14704ae86 body=59 status=ok
// SIG undefined FUN_14704ae86(void)

undefined8 FUN_14704ae86(longlong *param_1)

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



// FUNCTION 14704af76 FUN_14704af76 body=59 status=ok
// SIG undefined FUN_14704af76(void)

undefined8 FUN_14704af76(longlong *param_1)

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



// FUNCTION 14704b060 FUN_14704b060 body=59 status=ok
// SIG undefined FUN_14704b060(void)

undefined8 FUN_14704b060(longlong *param_1)

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



// FUNCTION 14704b14a FUN_14704b14a body=59 status=ok
// SIG undefined FUN_14704b14a(void)

undefined8 FUN_14704b14a(longlong *param_1)

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



// FUNCTION 14704b258 FUN_14704b258 body=59 status=ok
// SIG undefined FUN_14704b258(void)

undefined8 FUN_14704b258(longlong *param_1)

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



// FUNCTION 14704b342 FUN_14704b342 body=59 status=ok
// SIG undefined FUN_14704b342(void)

undefined8 FUN_14704b342(longlong *param_1)

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



// FUNCTION 14704b42c FUN_14704b42c body=59 status=ok
// SIG undefined FUN_14704b42c(void)

undefined8 FUN_14704b42c(longlong *param_1)

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



// FUNCTION 14704b53a FUN_14704b53a body=59 status=ok
// SIG undefined FUN_14704b53a(void)

undefined8 FUN_14704b53a(longlong *param_1)

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



// FUNCTION 14704b62a FUN_14704b62a body=59 status=ok
// SIG undefined FUN_14704b62a(void)

undefined8 FUN_14704b62a(longlong *param_1)

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



// FUNCTION 14704b71a FUN_14704b71a body=59 status=ok
// SIG undefined FUN_14704b71a(void)

undefined8 FUN_14704b71a(longlong *param_1)

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



// FUNCTION 14704b80a FUN_14704b80a body=59 status=ok
// SIG undefined FUN_14704b80a(void)

undefined8 FUN_14704b80a(longlong *param_1)

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



// FUNCTION 14704b8fc FUN_14704b8fc body=93 status=ok
// SIG undefined FUN_14704b8fc(void)

undefined1 FUN_14704b8fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_14704ba84(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14704b982 FUN_14704b982 body=59 status=ok
// SIG undefined FUN_14704b982(void)

undefined8 FUN_14704b982(longlong *param_1)

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



// FUNCTION 14704b9c8 FUN_14704b9c8 body=48 status=ok
// SIG undefined FUN_14704b9c8(void)

void FUN_14704b9c8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a148f00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14704ba46 FUN_14704ba46 body=62 status=ok
// SIG undefined FUN_14704ba46(void)

undefined8 * FUN_14704ba46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a148f00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14704ba84 FUN_14704ba84 body=88 status=ok
// SIG undefined FUN_14704ba84(void)

undefined8 * FUN_14704ba84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14574b796(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14704bb12 FUN_14704bb12 body=93 status=ok
// SIG undefined FUN_14704bb12(void)

undefined1 FUN_14704bb12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      FUN_14704ba84(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14704bb98 FUN_14704bb98 body=59 status=ok
// SIG undefined FUN_14704bb98(void)

undefined8 FUN_14704bb98(longlong *param_1)

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



// FUNCTION 14704bbde FUN_14704bbde body=48 status=ok
// SIG undefined FUN_14704bbde(void)

void FUN_14704bbde(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a148f00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14704bc5c FUN_14704bc5c body=84 status=ok
// SIG undefined FUN_14704bc5c(void)

undefined8 * FUN_14704bc5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c99ed38 == 0) {
    uVar1 = FUN_140cd1756();
    DAT_14c99ed38 = FUN_140002ddd(FUN_146297fcb,uVar1,L"SimpleWidgetConstructor");
  }
  FUN_147051dde(param_1,DAT_14c99ed38);
  *param_1 = &PTR_FUN_14a148f70;
  return param_1;
}



// FUNCTION 14704bcb0 FUN_14704bcb0 body=62 status=ok
// SIG undefined FUN_14704bcb0(void)

undefined8 * FUN_14704bcb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a148f00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14704bd38 FUN_14704bd38 body=59 status=ok
// SIG undefined FUN_14704bd38(void)

undefined8 FUN_14704bd38(longlong *param_1)

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



// FUNCTION 14704bdea FUN_14704bdea body=58 status=ok
// SIG undefined FUN_14704bdea(void)

void FUN_14704bdea(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 8);
    *piVar1 = *piVar1 + -1;
    lVar2 = *param_2;
    if (*(int *)(lVar2 + 8) == 0) {
      if (lVar2 != 0) {
        thunk_FUN_1400020a8(lVar2,0x10);
      }
      *param_2 = 0;
    }
  }
  return;
}



// FUNCTION 14704be88 FUN_14704be88 body=59 status=ok
// SIG undefined FUN_14704be88(void)

undefined8 FUN_14704be88(longlong *param_1)

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



// FUNCTION 14704bf26 FUN_14704bf26 body=68 status=ok
// SIG undefined FUN_14704bf26(void)

void FUN_14704bf26(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if ((char)param_1[1] == '\x01') {
    if (*param_1 != 0) {
      piVar1 = (int *)(*param_1 + 8);
      *piVar1 = *piVar1 + -1;
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 8) == 0) {
        if (lVar2 != 0) {
          thunk_FUN_1400020a8(lVar2,0x10);
        }
        *param_1 = 0;
      }
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14704bf6a FUN_14704bf6a body=56 status=ok
// SIG undefined FUN_14704bf6a(void)

void FUN_14704bf6a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 8);
    *piVar1 = *piVar1 + -1;
    lVar2 = *param_1;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 0)) {
      thunk_FUN_1400020a8(lVar2,0x10);
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 14704c00e FUN_14704c00e body=82 status=ok
// SIG undefined FUN_14704c00e(void)

int FUN_14704c00e(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704c116 FUN_14704c116 body=59 status=ok
// SIG undefined FUN_14704c116(void)

undefined8 FUN_14704c116(longlong *param_1)

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



// FUNCTION 14704c206 FUN_14704c206 body=59 status=ok
// SIG undefined FUN_14704c206(void)

undefined8 FUN_14704c206(longlong *param_1)

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



// FUNCTION 14704c314 FUN_14704c314 body=59 status=ok
// SIG undefined FUN_14704c314(void)

undefined8 FUN_14704c314(longlong *param_1)

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



// FUNCTION 14704c3ea FUN_14704c3ea body=54 status=ok
// SIG undefined FUN_14704c3ea(void)

undefined1 FUN_14704c3ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14704c448 FUN_14704c448 body=59 status=ok
// SIG undefined FUN_14704c448(void)

undefined8 FUN_14704c448(longlong *param_1)

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



// FUNCTION 14704c48e FUN_14704c48e body=37 status=ok
// SIG undefined FUN_14704c48e(void)

void FUN_14704c48e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14704c552 FUN_14704c552 body=59 status=ok
// SIG undefined FUN_14704c552(void)

undefined8 FUN_14704c552(longlong *param_1)

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



// FUNCTION 14704c5f4 FUN_14704c5f4 body=328 status=ok
// SIG undefined FUN_14704c5f4(void)

void FUN_14704c5f4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147050b70(local_40,param_1,1);
  uVar7 = (longlong)(int)param_2[1] + (longlong)*(int *)(param_1 + 0x70);
  uVar6 = (uint)uVar7;
  if ((uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c)) < uVar6) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar7);
    }
    FUN_146b7f620(param_1 + 0x18,uVar7 & 0xffffffff);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar4 = (uVar6 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x60) == 0) || (*(int *)(param_1 + 0x60) < iVar5)) {
      *(int *)(param_1 + 0x60) = iVar5;
      FUN_1449809d4(param_1 + 0x18);
    }
  }
  else if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7 & 0xffffffff);
  }
  if (*(int *)(param_1 + 0x74) < (int)uVar6) {
    FUN_14704c73e(param_1 + 0x68,uVar7 & 0xffffffff);
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar8 = 0;
    do {
      local_48 = *(longlong *)(lVar2 + lVar8);
      if (local_48 != 0) {
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      }
      FUN_147050a0c(param_1,&local_48);
      if (local_48 != 0) {
        piVar1 = (int *)(local_48 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          thunk_FUN_1400020a8(local_48,0x10);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar8);
  }
  FUN_147050b8a(local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704c73e FUN_14704c73e body=96 status=ok
// SIG undefined FUN_14704c73e(void)

void FUN_14704c73e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14704c79e FUN_14704c79e body=289 status=ok
// SIG undefined FUN_14704c79e(void)

void FUN_14704c79e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 != param_1) {
    FUN_147050b70(local_38,param_1,1);
    uVar4 = (longlong)*(int *)(*param_2 + 0x70) + (longlong)*(int *)(param_1 + 0x70);
    uVar3 = (uint)uVar4;
    if ((uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c)) < uVar3) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar4);
      }
      FUN_146b7f620(param_1 + 0x18,uVar4 & 0xffffffff);
      iVar2 = 1;
      if (3 < uVar3) {
        uVar1 = (uVar3 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x60) == 0) || (*(int *)(param_1 + 0x60) < iVar2)) {
        *(int *)(param_1 + 0x60) = iVar2;
        FUN_1449809d4(param_1 + 0x18);
      }
    }
    else if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0x74) < (int)uVar3) {
      FUN_14704c73e(param_1 + 0x68,uVar4 & 0xffffffff);
    }
    local_40 = 0;
    local_48 = &local_58;
    local_50 = &LAB_14704c8c2;
    local_58 = param_1;
    FUN_1470506be(*param_2);
    FUN_147050b8a(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704c8c8 FUN_14704c8c8 body=105 status=ok
// SIG undefined FUN_14704c8c8(void)

undefined8 FUN_14704c8c8(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *param_1;
  local_18 = *param_2;
  if (local_18 != 0) {
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
  }
  FUN_147050a0c(uVar2,&local_18);
  if (local_18 != 0) {
    piVar1 = (int *)(local_18 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_FUN_1400020a8(local_18,0x10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704c932 FUN_14704c932 body=68 status=ok
// SIG undefined FUN_14704c932(void)

void FUN_14704c932(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14704c977(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14704c73e(param_1,param_2);
  return;
}



// FUNCTION 14704c977 FUN_14704c977 body=82 status=ok
// SIG undefined FUN_14704c977(void)

void FUN_14704c977(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + lVar3 * 8);
      if (lVar2 != 0) {
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + -1;
        lVar2 = *(longlong *)(param_1 + lVar3 * 8);
        if (*(int *)(lVar2 + 8) == 0) {
          if (lVar2 != 0) {
            thunk_FUN_1400020a8(lVar2,0x10);
          }
          *(undefined8 *)(param_1 + lVar3 * 8) = 0;
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 14704c9ca FUN_14704c9ca body=196 status=ok
// SIG undefined FUN_14704c9ca(void)

void FUN_14704c9ca(longlong *param_1)

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
          iVar5 = *(int *)(lVar2 + lVar6 * 0xc);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0xc);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0xc) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xc) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0xc);
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
  FUN_1447a08a2(param_1,iVar5);
  return;
}



// FUNCTION 14704ca8e FUN_14704ca8e body=79 status=ok
// SIG undefined FUN_14704ca8e(void)

undefined8 FUN_14704ca8e(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_1449809d4(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14704caee FUN_14704caee body=56 status=ok
// SIG undefined FUN_14704caee(void)

void FUN_14704caee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014704cb1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14704cb3c FUN_14704cb3c body=54 status=ok
// SIG undefined FUN_14704cb3c(void)

undefined1 FUN_14704cb3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14704cc6e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14704cb9a FUN_14704cb9a body=59 status=ok
// SIG undefined FUN_14704cb9a(void)

undefined8 FUN_14704cb9a(longlong *param_1)

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



// FUNCTION 14704cbe0 FUN_14704cbe0 body=64 status=ok
// SIG undefined FUN_14704cbe0(void)

void FUN_14704cbe0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14704cc6e FUN_14704cc6e body=80 status=ok
// SIG undefined FUN_14704cc6e(void)

undefined8 * FUN_14704cc6e(undefined8 *param_1,undefined8 *param_2)

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
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  return param_1;
}



// FUNCTION 14704cd08 FUN_14704cd08 body=59 status=ok
// SIG undefined FUN_14704cd08(void)

undefined8 FUN_14704cd08(longlong *param_1)

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



// FUNCTION 14704cdf2 FUN_14704cdf2 body=59 status=ok
// SIG undefined FUN_14704cdf2(void)

undefined8 FUN_14704cdf2(longlong *param_1)

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



// FUNCTION 14704cedc FUN_14704cedc body=59 status=ok
// SIG undefined FUN_14704cedc(void)

undefined8 FUN_14704cedc(longlong *param_1)

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



// FUNCTION 14704cfcc FUN_14704cfcc body=59 status=ok
// SIG undefined FUN_14704cfcc(void)

undefined8 FUN_14704cfcc(longlong *param_1)

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



// FUNCTION 14704d0da FUN_14704d0da body=59 status=ok
// SIG undefined FUN_14704d0da(void)

undefined8 FUN_14704d0da(longlong *param_1)

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



// FUNCTION 14704d1c6 FUN_14704d1c6 body=59 status=ok
// SIG undefined FUN_14704d1c6(void)

undefined8 FUN_14704d1c6(longlong *param_1)

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



// FUNCTION 14704d2a4 FUN_14704d2a4 body=62 status=ok
// SIG undefined FUN_14704d2a4(void)

undefined8 FUN_14704d2a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14704d30a FUN_14704d30a body=59 status=ok
// SIG undefined FUN_14704d30a(void)

undefined8 FUN_14704d30a(longlong *param_1)

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



// FUNCTION 14704d350 FUN_14704d350 body=37 status=ok
// SIG undefined FUN_14704d350(void)

void FUN_14704d350(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14704d414 FUN_14704d414 body=59 status=ok
// SIG undefined FUN_14704d414(void)

undefined8 FUN_14704d414(longlong *param_1)

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



// FUNCTION 14704d4fe FUN_14704d4fe body=59 status=ok
// SIG undefined FUN_14704d4fe(void)

undefined8 FUN_14704d4fe(longlong *param_1)

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



// FUNCTION 14704d5d4 FUN_14704d5d4 body=54 status=ok
// SIG undefined FUN_14704d5d4(void)

undefined1 FUN_14704d5d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14704d632 FUN_14704d632 body=94 status=ok
// SIG undefined FUN_14704d632(void)

void FUN_14704d632(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_144a49b4a(iVar2,puVar3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704d69c FUN_14704d69c body=37 status=ok
// SIG undefined FUN_14704d69c(void)

void FUN_14704d69c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14704d746 FUN_14704d746 body=54 status=ok
// SIG undefined FUN_14704d746(void)

undefined1 FUN_14704d746(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1427b9478(param_2,param_3);
    param_3 = param_3 + 0xc;
    param_2 = param_2 + 0xc;
  }
  return 1;
}



// FUNCTION 14704d7a4 FUN_14704d7a4 body=59 status=ok
// SIG undefined FUN_14704d7a4(void)

undefined8 FUN_14704d7a4(longlong *param_1)

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



// FUNCTION 14704d89c FUN_14704d89c body=59 status=ok
// SIG undefined FUN_14704d89c(void)

undefined8 FUN_14704d89c(longlong *param_1)

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



// FUNCTION 14704d986 FUN_14704d986 body=59 status=ok
// SIG undefined FUN_14704d986(void)

undefined8 FUN_14704d986(longlong *param_1)

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



// FUNCTION 14704da70 FUN_14704da70 body=59 status=ok
// SIG undefined FUN_14704da70(void)

undefined8 FUN_14704da70(longlong *param_1)

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



// FUNCTION 14704db5a FUN_14704db5a body=59 status=ok
// SIG undefined FUN_14704db5a(void)

undefined8 FUN_14704db5a(longlong *param_1)

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



// FUNCTION 14704dc44 FUN_14704dc44 body=59 status=ok
// SIG undefined FUN_14704dc44(void)

undefined8 FUN_14704dc44(longlong *param_1)

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



// FUNCTION 14704dd2e FUN_14704dd2e body=59 status=ok
// SIG undefined FUN_14704dd2e(void)

undefined8 FUN_14704dd2e(longlong *param_1)

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



// FUNCTION 14704de3c FUN_14704de3c body=59 status=ok
// SIG undefined FUN_14704de3c(void)

undefined8 FUN_14704de3c(longlong *param_1)

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



// FUNCTION 14704df60 FUN_14704df60 body=59 status=ok
// SIG undefined FUN_14704df60(void)

undefined8 FUN_14704df60(longlong *param_1)

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



// FUNCTION 14704e084 FUN_14704e084 body=59 status=ok
// SIG undefined FUN_14704e084(void)

undefined8 FUN_14704e084(longlong *param_1)

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



// FUNCTION 14704e1a8 FUN_14704e1a8 body=59 status=ok
// SIG undefined FUN_14704e1a8(void)

undefined8 FUN_14704e1a8(longlong *param_1)

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



// FUNCTION 14704e27e FUN_14704e27e body=54 status=ok
// SIG undefined FUN_14704e27e(void)

undefined1 FUN_14704e27e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14704e2dc FUN_14704e2dc body=59 status=ok
// SIG undefined FUN_14704e2dc(void)

undefined8 FUN_14704e2dc(longlong *param_1)

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



// FUNCTION 14704e322 FUN_14704e322 body=37 status=ok
// SIG undefined FUN_14704e322(void)

void FUN_14704e322(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14704e3cc FUN_14704e3cc body=54 status=ok
// SIG undefined FUN_14704e3cc(void)

undefined1 FUN_14704e3cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14704e42a FUN_14704e42a body=59 status=ok
// SIG undefined FUN_14704e42a(void)

undefined8 FUN_14704e42a(longlong *param_1)

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



// FUNCTION 14704e470 FUN_14704e470 body=37 status=ok
// SIG undefined FUN_14704e470(void)

void FUN_14704e470(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14704e552 FUN_14704e552 body=59 status=ok
// SIG undefined FUN_14704e552(void)

undefined8 FUN_14704e552(longlong *param_1)

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



// FUNCTION 14704e632 FUN_14704e632 body=54 status=ok
// SIG undefined FUN_14704e632(void)

undefined1 FUN_14704e632(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14704e79a(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14704e690 FUN_14704e690 body=59 status=ok
// SIG undefined FUN_14704e690(void)

undefined8 FUN_14704e690(longlong *param_1)

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



// FUNCTION 14704e6d6 FUN_14704e6d6 body=34 status=ok
// SIG undefined FUN_14704e6d6(void)

void FUN_14704e6d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14704e746(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14704e746 FUN_14704e746 body=84 status=ok
// SIG undefined FUN_14704e746(void)

void FUN_14704e746(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014704e78f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14704e79a FUN_14704e79a body=158 status=ok
// SIG undefined FUN_14704e79a(void)

undefined8 * FUN_14704e79a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[2];
  lVar3 = param_2[3];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[3];
  param_1[2] = uVar2;
  param_1[3] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[4];
  lVar3 = param_2[5];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[5];
  param_1[4] = uVar2;
  param_1[5] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 14704e882 FUN_14704e882 body=59 status=ok
// SIG undefined FUN_14704e882(void)

undefined8 FUN_14704e882(longlong *param_1)

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



// FUNCTION 14704e960 FUN_14704e960 body=102 status=ok
// SIG undefined FUN_14704e960(void)

undefined8 FUN_14704e960(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14704e9ee FUN_14704e9ee body=59 status=ok
// SIG undefined FUN_14704e9ee(void)

undefined8 FUN_14704e9ee(longlong *param_1)

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



// FUNCTION 14704ea34 FUN_14704ea34 body=38 status=ok
// SIG undefined FUN_14704ea34(void)

void FUN_14704ea34(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14704eae6 FUN_14704eae6 body=102 status=ok
// SIG undefined FUN_14704eae6(void)

undefined8 FUN_14704eae6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14704eb74 FUN_14704eb74 body=59 status=ok
// SIG undefined FUN_14704eb74(void)

undefined8 FUN_14704eb74(longlong *param_1)

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



// FUNCTION 14704ebba FUN_14704ebba body=38 status=ok
// SIG undefined FUN_14704ebba(void)

void FUN_14704ebba(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14704ecba FUN_14704ecba body=59 status=ok
// SIG undefined FUN_14704ecba(void)

undefined8 FUN_14704ecba(longlong *param_1)

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



// FUNCTION 14704ed5b FUN_14704ed5b body=65 status=ok
// SIG undefined FUN_14704ed5b(void)

longlong FUN_14704ed5b(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1,0);
    lVar3 = lVar3 + -8;
  }
  return lVar3;
}



// FUNCTION 14704eda0 FUN_14704eda0 body=264 status=ok
// SIG undefined FUN_14704eda0(void)

void FUN_14704eda0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce();
  if (*param_2 != 0 && lVar1 != 0) {
    local_58 = CONCAT71(local_58._1_7_,*(undefined1 *)(*param_2 + 0xb));
    FUN_14704f00e(&local_40);
    FUN_14704eeaa(param_1,local_40,&local_58);
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_38 = FUN_1458f058c();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_38);
    }
    FUN_147057634(lVar1,param_2,&local_38,&local_58);
    if (plStack_50 != (longlong *)0x0 && local_58 != 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50,&local_58,param_1);
    }
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704eeaa FUN_14704eeaa body=354 status=ok
// SIG undefined FUN_14704eeaa(void)

void FUN_14704eeaa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  iVar10 = (int)((ulonglong)param_2 >> 0x20);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    uVar11 = (ulonglong)uVar1;
    do {
      uVar5 = (int)(uVar11 >> 1) + uVar6;
      lVar12 = (ulonglong)uVar5 * 0x10;
      iVar7 = *(int *)(lVar2 + lVar12) - (int)param_2;
      if (iVar7 == 0) {
        iVar7 = *(int *)(lVar2 + 4 + lVar12) - iVar10;
      }
      uVar8 = (uint)uVar11;
      if (iVar7 < 0) {
        uVar6 = uVar5 + (uVar8 & 1);
      }
      uVar11 = uVar11 >> 1;
    } while (1 < uVar8);
  }
  local_40 = param_2;
  if ((int)uVar6 < (int)uVar1) {
    lVar12 = (ulonglong)uVar6 * 0x10;
    iVar7 = (int)param_2 - *(int *)(lVar2 + lVar12);
    if (iVar7 == 0) {
      iVar7 = iVar10 - *(int *)(lVar2 + 4 + lVar12);
    }
    if ((-1 < iVar7) && (plVar9 = (longlong *)(lVar2 + lVar12 + 8), plVar9 != (longlong *)0x0))
    goto LAB_14704ef62;
  }
  plVar9 = (longlong *)FUN_1470569d0(param_1 + 8,&local_40);
LAB_14704ef62:
  plVar4 = (longlong *)*plVar9;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
    *plVar4 = (longlong)&PTR_FUN_14a14f730;
    FUN_147056b53(plVar4 + 1);
    plVar4[6] = 0;
    *(undefined4 *)(plVar4 + 7) = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)plVar4 + 0x44) = 0;
    plVar4[10] = 0;
    *(undefined4 *)(plVar4 + 0xb) = 0;
    puVar3 = (undefined8 *)*plVar9;
    *plVar9 = (longlong)plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
      plVar4 = (longlong *)*plVar9;
    }
  }
  FUN_147056b53(&local_38);
  (**(code **)(*plVar4 + 0x18))(plVar4,param_3,local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704f00e FUN_14704f00e body=120 status=ok
// SIG undefined FUN_14704f00e(void)

undefined8 * FUN_14704f00e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f4e0) {
    FUN_144b3d300(&DAT_14c99f4e0);
    if (DAT_14c99f4e0 == -1) {
      FUN_1446ddc76(&DAT_14c99f4d8,"ElementType",1);
      _Init_thread_footer(&DAT_14c99f4e0);
    }
  }
  *param_1 = DAT_14c99f4d8;
  return param_1;
}



// FUNCTION 14704f086 FUN_14704f086 body=264 status=ok
// SIG undefined FUN_14704f086(void)

void FUN_14704f086(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce();
  if (*param_2 != 0 && lVar1 != 0) {
    local_58 = CONCAT71(local_58._1_7_,*(undefined1 *)(*param_2 + 0xb));
    FUN_14704f00e(&local_40);
    FUN_14704f190(param_1,local_40,&local_58);
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_38 = FUN_1458f058c();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_38);
    }
    FUN_147057634(lVar1,param_2,&local_38,&local_58);
    if (plStack_50 != (longlong *)0x0 && local_58 != 0) {
      (**(code **)(*plStack_50 + 0x18))(plStack_50,&local_58,param_1);
    }
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704f190 FUN_14704f190 body=210 status=ok
// SIG undefined FUN_14704f190(void)

void FUN_14704f190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 8);
  uVar9 = 0;
  iVar10 = (int)((ulonglong)param_2 >> 0x20);
  uVar11 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar11 >> 1) + uVar9;
      lVar7 = (ulonglong)uVar1 * 0x10;
      iVar8 = *(int *)(lVar3 + lVar7) - (int)param_2;
      if (iVar8 == 0) {
        iVar8 = *(int *)(lVar3 + 4 + lVar7) - iVar10;
      }
      if (iVar8 < 0) {
        uVar9 = uVar1 + (uVar11 & 1);
      }
      bVar5 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar5);
  }
  if ((int)uVar9 < (int)uVar2) {
    lVar7 = (ulonglong)uVar9 * 0x10;
    iVar8 = (int)param_2 - *(int *)(lVar3 + lVar7);
    if (iVar8 == 0) {
      iVar8 = iVar10 - *(int *)(lVar3 + 4 + lVar7);
    }
    if ((-1 < iVar8) && (puVar6 = (undefined8 *)(lVar3 + lVar7 + 8), puVar6 != (undefined8 *)0x0)) {
      plVar4 = (longlong *)*puVar6;
      FUN_147056b53(&local_30);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_3,local_30);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14704f264 FUN_14704f264 body=66 status=ok
// SIG undefined FUN_14704f264(void)

void FUN_14704f264(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_147055ade(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_1470577a6(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 14704f2a6 FUN_14704f2a6 body=213 status=ok
// SIG undefined FUN_14704f2a6(void)

void FUN_14704f2a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2 + 0x1a8);
  *(longlong *)(param_1 + 0x268) = lVar3;
  if (lVar3 == 0) {
    local_30 = *(undefined8 *)(param_2 + 0x1b0);
    plVar4 = *(longlong **)(param_2 + 0x1b8);
    local_28 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_14704f37c(param_1,&local_30);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_14704f37c(param_1);
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140a58896(param_1 + 0x1e0,param_2 + 0x1b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704f37c FUN_14704f37c body=411 status=ok
// SIG undefined FUN_14704f37c(void)

void FUN_14704f37c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)FUN_14704ed5b(DAT_14c99f498);
  if (plVar5 != (longlong *)0x0) {
    FUN_1446f470e(&local_40,L"Editor_WidgetTable",1);
    lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
    if (lVar6 != -1) {
      uVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,lVar6);
      *(undefined8 *)(param_1 + 0x268) = uVar7;
      uVar8 = FUN_1462997f0();
      puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0xd0))(plVar5,uVar7,uVar8);
      if (puVar9 != (undefined8 *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x10);
        bVar2 = true;
        if (plVar5 == (longlong *)0x0) {
LAB_14704f46c:
          uVar7 = 0;
          plVar5 = (longlong *)0x0;
        }
        else {
          iVar4 = (int)plVar5[1];
          do {
            if (iVar4 == 0) goto LAB_14704f46c;
            LOCK();
            iVar3 = (int)plVar5[1];
            bVar11 = iVar4 == iVar3;
            if (bVar11) {
              *(int *)(plVar5 + 1) = iVar4 + 1;
              iVar3 = iVar4;
            }
            iVar4 = iVar3;
            UNLOCK();
          } while (!bVar11);
          uVar7 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
          bVar2 = false;
        }
        puVar9[2] = uVar7;
        plVar10 = (longlong *)puVar9[3];
        if (plVar10 != plVar5) {
          if (!bVar2) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)puVar9[3];
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
          puVar9[3] = plVar5;
        }
        if (!bVar2) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        *puVar9 = *param_2;
        plVar5 = (longlong *)param_2[1];
        plVar10 = (longlong *)puVar9[1];
        if (plVar10 != plVar5) {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
            plVar10 = (longlong *)puVar9[1];
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
          }
          puVar9[1] = plVar5;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14704f518 FUN_14704f518 body=29 status=ok
// SIG undefined FUN_14704f518(void)

void FUN_14704f518(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  if (param_1 == 0) {
    if (*param_4 != 0) {
      LOCK();
      piVar1 = (int *)(*param_4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    *param_4 = 0;
    param_4[1] = 0;
    return;
  }
  if (*param_4 != 0) {
    LOCK();
    piVar1 = (int *)(*param_4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *param_4 = 0;
  param_4[1] = 0;
  if (*param_2 != 0) {
    uVar13 = *(uint *)(*param_2 + 8);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    if (uVar13 < 0x1000000) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x30 + (ulonglong)((uVar13 >> 0x18) - 1) * 8);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar14 = *param_3;
    uVar13 = 0;
    if ((((lVar14 == 0) || (lVar5 = FUN_144a8d392(), lVar5 == 0)) ||
        (*(int *)(lVar14 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar14 = 0;
    }
    else {
      lVar14 = *param_3;
    }
    uVar3 = *(uint *)(lVar8 + 0x20);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    iVar10 = (int)((ulonglong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
    iVar9 = (int)*(undefined8 *)(lVar14 + 0x18);
    if (0 < (int)uVar3) {
      uVar13 = 0;
      uVar12 = uVar3;
      do {
        uVar2 = (uVar12 >> 1) + uVar13;
        lVar14 = (ulonglong)uVar2 * 0x10;
        iVar11 = *(int *)(lVar8 + lVar14) - iVar9;
        if (iVar11 == 0) {
          iVar11 = *(int *)(lVar8 + 4 + lVar14) - iVar10;
        }
        if (iVar11 < 0) {
          uVar13 = uVar2 + (uVar12 & 1);
        }
        bVar4 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar4);
    }
    if ((int)uVar13 < (int)uVar3) {
      lVar14 = (ulonglong)uVar13 * 0x10;
      iVar9 = iVar9 - *(int *)(lVar8 + lVar14);
      if (iVar9 == 0) {
        iVar9 = iVar10 - *(int *)(lVar8 + 4 + lVar14);
      }
      if ((-1 < iVar9) && (plVar6 = (longlong *)(lVar8 + lVar14 + 8), plVar6 != (longlong *)0x0)) {
        lVar8 = *plVar6;
        if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
          FUN_14689c22e(lVar8);
        }
        else if (lVar8 == 0) {
          return;
        }
        lVar14 = *param_2;
        lVar5 = *param_3;
        if (((lVar5 == 0) || (lVar7 = FUN_144a8d392(), lVar7 == 0)) ||
           ((*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
             lVar7 + 0x30)))) {
          lVar5 = 0;
        }
        else {
          lVar5 = *param_3;
        }
        lVar8 = FUN_144718840(lVar8,lVar5);
        *param_4 = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
          UNLOCK();
        }
        param_4[1] = lVar8;
      }
    }
  }
  return;
}



// FUNCTION 14704f536 FUN_14704f536 body=509 status=ok
// SIG undefined FUN_14704f536(void)

void FUN_14704f536(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 != 0) {
    FUN_14705797e(param_1 + 0x90,param_1);
  }
  FUN_1403d43ee(param_1 + 0x18,0);
  FUN_147057811(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_14705784a(param_1 + 0x68,0);
  }
  FUN_14704f264(param_1 + 0x78);
  if (iVar2 != 0) {
    FUN_14704f264(param_1 + 0x78);
    local_30 = 0;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    puVar3 = *(undefined8 **)(param_1 + 200);
    if (puVar3 != (undefined8 *)0x0) {
      *(byte *)((longlong)puVar3 + 0x24) =
           *(byte *)((longlong)puVar3 + 0x24) | 0 < *(int *)(puVar3 + 4);
      local_38 = 0 < *(int *)(puVar3 + 4);
      FUN_147057a22(puVar3 + 1,*puVar3,3,&local_30);
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + -1;
        UNLOCK();
      }
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_1470577d6();
  }
  lVar5 = FUN_14479d2ce(param_1 + 0x10);
  if (lVar5 != 0) {
    FUN_14704f734(lVar5,param_1);
    local_30 = 0;
    FUN_14485c47a(&local_30,0);
    *(longlong *)(param_1 + 0x10) = local_30;
  }
  FUN_1470577d6(*(undefined8 *)(param_1 + 200));
  FUN_144760e21(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_147055ade(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_147057811(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704f734 FUN_14704f734 body=64 status=ok
// SIG undefined FUN_14704f734(void)

void FUN_14704f734(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
  FUN_14705598e(param_1 + 0x858,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014704f76d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
  return;
}



// FUNCTION 14704f774 FUN_14704f774 body=238 status=ok
// SIG undefined FUN_14704f774(void)

undefined8 * FUN_14704f774(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_147050098(plVar2,param_2);
  *param_1 = plVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a14f770;
  plVar3[2] = (longlong)plVar2;
  param_1[1] = plVar3;
  if (plVar2 == (longlong *)0x0) {
    return param_1;
  }
  if (((*plVar2 != 0) && (plVar2[1] != 0)) && (0 < *(int *)(plVar2[1] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *plVar2 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *plVar2 = (longlong)plVar2;
    if ((longlong *)plVar2[1] == plVar3) goto LAB_14704f83a;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)plVar2[1];
    if (plVar4 == (longlong *)0x0) {
      plVar2[1] = (longlong)plVar3;
      goto LAB_14704f83a;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar2[1] = (longlong)plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_14704f83a:
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
  return param_1;
}



// FUNCTION 14704f862 FUN_14704f862 body=159 status=ok
// SIG undefined FUN_14704f862(void)

undefined8 FUN_14704f862(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x10);
    local_28 = *param_3;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    puVar3 = &DAT_14c99f64c;
    if (*param_2 != 0) {
      puVar3 = (undefined4 *)(*param_2 + 8);
    }
    uVar2 = FUN_147051a0c(uVar2,*(undefined1 *)((longlong)puVar3 + 3),&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704f902 FUN_14704f902 body=166 status=ok
// SIG undefined FUN_14704f902(void)

ulonglong FUN_14704f902(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = 0;
  lVar2 = *param_2;
  local_20 = uVar4;
  if (lVar2 != 0) {
    uVar4 = FUN_144a8d392();
    if ((((uVar4 != 0) && (piVar1 = (int *)(uVar4 + 0x38), *piVar1 <= *(int *)(lVar2 + 0x38))) &&
        (uVar4 = uVar4 + 0x30,
        *(ulonglong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*piVar1 * 8) == uVar4)) &&
       (*param_2 != 0)) {
      local_40 = &local_21;
      local_30 = &local_40;
      local_38 = &LAB_147057838;
      uVar5 = FUN_14704f9aa(param_1,&local_38,param_2);
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      uVar3 = local_21;
      goto LAB_14704f959;
    }
  }
  uVar6 = (undefined7)(uVar4 >> 8);
  uVar3 = 0 < *(int *)(param_1 + 0x70);
LAB_14704f959:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar6,uVar3) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704f9aa FUN_14704f9aa body=154 status=ok
// SIG undefined FUN_14704f9aa(void)

void FUN_14704f9aa(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x68);
    plVar1 = plVar5 + *(int *)(param_1 + 0x70);
    do {
      if (((*plVar5 != 0) &&
          ((((lVar4 = *param_3, lVar4 == 0 || (lVar3 = FUN_144a8d392(), lVar3 == 0)) ||
            (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30 || (*param_3 == 0)) ||
            (lVar4 = FUN_14704f862(param_1,plVar5,param_3), lVar4 != 0)))))) &&
         (cVar2 = (*(code *)*param_2)(param_2[1],plVar5), cVar2 == '\0')) {
        return;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 14704fa44 FUN_14704fa44 body=167 status=ok
// SIG undefined FUN_14704fa44(void)

undefined4 FUN_14704fa44(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined1 *local_38;
  undefined4 **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_144a8d392();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (*param_2 != 0)) {
      puVar3 = &local_24;
      local_30 = &local_40;
      local_38 = &LAB_147057842;
      local_40 = puVar3;
      FUN_14704f9aa(param_1,&local_38,param_2);
      goto LAB_14704fa9b;
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x70);
LAB_14704fa9b:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704faec FUN_14704faec body=222 status=ok
// SIG undefined FUN_14704faec(void)

undefined8 FUN_14704faec(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar8 = (ulonglong)uVar1;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  iVar7 = (int)((ulonglong)param_2 >> 0x20);
  if (0 < (int)uVar1) {
    do {
      uVar5 = (int)(uVar8 >> 1) + uVar6;
      lVar3 = (ulonglong)uVar5 * 0x10;
      iVar4 = *(int *)(lVar2 + lVar3) - (int)param_2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar2 + 4 + lVar3) - iVar7;
      }
      uVar9 = (uint)uVar8;
      if (iVar4 < 0) {
        uVar6 = uVar5 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if ((int)uVar6 < (int)uVar1) {
    lVar3 = (ulonglong)uVar6 * 0x10;
    iVar4 = (int)param_2 - *(int *)(lVar2 + lVar3);
    if (iVar4 == 0) {
      iVar4 = iVar7 - *(int *)(lVar2 + 4 + lVar3);
    }
    if ((-1 < iVar4) && (lVar2 + lVar3 != -8)) {
      FUN_147056b53(local_38);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14704fbe4 FUN_14704fbe4 body=136 status=ok
// SIG undefined FUN_14704fbe4(void)

undefined8 * FUN_14704fbe4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14705784a(param_2);
  }
  local_28 = &local_38;
  local_30 = FUN_147057930;
  local_38 = param_2;
  FUN_14704f9aa(param_1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704fc6e FUN_14704fc6e body=15 status=ok
// SIG undefined FUN_14704fc6e(void)

void FUN_14704fc6e(longlong param_1)

{
  FUN_14705797e(param_1 + 0x90,param_1);
  return;
}



// FUNCTION 14704fc7e FUN_14704fc7e body=103 status=ok
// SIG undefined FUN_14704fc7e(void)

void FUN_14704fc7e(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0xc0) = 1;
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != (undefined8 *)0x0) {
    *(byte *)((longlong)puVar1 + 0x24) =
         *(byte *)((longlong)puVar1 + 0x24) | 0 < *(int *)(puVar1 + 4);
    uVar2 = 2;
    if (param_2 < 3) {
      uVar2 = 0x30100 >> (param_2 * '\b' & 0x1f);
    }
    FUN_147057a22(puVar1 + 1,*puVar1,uVar2,param_3,0 < *(int *)(puVar1 + 4));
  }
  return;
}



// FUNCTION 14704fce6 FUN_14704fce6 body=92 status=ok
// SIG undefined FUN_14704fce6(void)

undefined8 FUN_14704fce6(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = *param_2;
  if ((0xffffff < uVar1) && (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c))) {
    lVar2 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0xc) == uVar1;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14704fd42 FUN_14704fd42 body=266 status=ok
// SIG undefined FUN_14704fd42(void)

ulonglong FUN_14704fd42(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_2c [4];
  undefined4 local_28;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_14705797e(param_1 + 0x90,param_1);
    local_21 = '\0';
    puVar4 = &DAT_14c99f64c;
    if (*param_2 != 0) {
      puVar4 = (undefined4 *)(*param_2 + 8);
    }
    local_28 = *puVar4;
    uVar5 = FUN_140db0a94(param_1 + 0x18,local_2c,&local_28,&local_21);
    if (local_21 == '\0') {
      iVar2 = *(int *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
        FUN_1470578aa(param_1 + 0x68,iVar2);
      }
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 8);
      *plVar1 = *param_2;
      *param_2 = 0;
      uVar5 = FUN_14704eda0(param_1 + 0x78,plVar1);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      puVar3 = *(undefined8 **)(param_1 + 200);
      if (puVar3 != (undefined8 *)0x0) {
        *(byte *)((longlong)puVar3 + 0x24) =
             *(byte *)((longlong)puVar3 + 0x24) | 0 < *(int *)(puVar3 + 4);
        local_38 = 0 < *(int *)(puVar3 + 4);
        uVar5 = FUN_147057a22(puVar3 + 1,*puVar3,0,plVar1);
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_21) ^ 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14704fe4e FUN_14704fe4e body=26 status=ok
// SIG undefined FUN_14704fe4e(void)

void FUN_14704fe4e(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 200);
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
  return;
}



// FUNCTION 14704fe68 FUN_14704fe68 body=20 status=ok
// SIG undefined FUN_14704fe68(void)

void FUN_14704fe68(longlong *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_14704ffec(*param_1,(char)param_1[1]);
  return;
}



// FUNCTION 14704fe7c FUN_14704fe7c body=351 status=ok
// SIG undefined FUN_14704fe7c(void)

undefined8 FUN_14704fe7c(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  size_t local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0xffffff < *param_2) {
    FUN_14705797e(param_1 + 0x90,param_1);
    iVar5 = FUN_144b016d0(param_1 + 0x18,*param_2);
    if (0 < iVar5) {
      lVar2 = *(longlong *)(param_1 + 0x68);
      uVar6 = 0xffffffff;
      if ((longlong)*(int *)(param_1 + 0x70) != 0) {
        lVar8 = (longlong)*(int *)(param_1 + 0x70) << 3;
        lVar10 = 0;
        do {
          lVar4 = *(longlong *)(lVar2 + lVar10 * 8);
          puVar9 = (uint *)(lVar4 + 8);
          if (lVar4 == 0) {
            puVar9 = &DAT_14c99f64c;
          }
          if (*puVar9 == *param_2) {
            uVar6 = (uint)lVar10;
            break;
          }
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      lVar8 = (longlong)(int)uVar6;
      local_20 = *(size_t *)(lVar2 + lVar8 * 8);
      *(undefined8 *)(lVar2 + lVar8 * 8) = 0;
      _Dst = (longlong *)(*(longlong *)(param_1 + 0x68) + lVar8 * 8);
      if (*_Dst != 0) {
        LOCK();
        piVar1 = (int *)(*_Dst + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      *_Dst = 0;
      iVar5 = *(int *)(param_1 + 0x70);
      if (~uVar6 + iVar5 != 0) {
        memmove(_Dst,_Dst + 1,(longlong)(int)(~uVar6 + iVar5) << 3);
        iVar5 = *(int *)(param_1 + 0x70);
      }
      *(int *)(param_1 + 0x70) = iVar5 + -1;
      FUN_14704f086(param_1 + 0x78,&local_20);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      puVar3 = *(undefined8 **)(param_1 + 200);
      if (puVar3 != (undefined8 *)0x0) {
        *(byte *)((longlong)puVar3 + 0x24) =
             *(byte *)((longlong)puVar3 + 0x24) | 0 < *(int *)(puVar3 + 4);
        local_28 = 0 < *(int *)(puVar3 + 4);
        FUN_147057a22(puVar3 + 1,*puVar3,1,&local_20);
      }
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + -1;
        UNLOCK();
      }
      uVar7 = 1;
      goto LAB_14704fe9b;
    }
  }
  uVar7 = 0;
LAB_14704fe9b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14704ffdc FUN_14704ffdc body=16 status=ok
// SIG undefined FUN_14704ffdc(void)

void FUN_14704ffdc(longlong *param_1)

{
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14704ffec FUN_14704ffec body=118 status=ok
// SIG undefined FUN_14704ffec(void)

void FUN_14704ffec(undefined8 *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) &&
     (bVar2 = *(byte *)((longlong)param_1 + 0x24), *(undefined1 *)((longlong)param_1 + 0x24) = 0,
     (param_2 & bVar2) == 1)) {
    local_18 = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    local_28 = 0;
    FUN_147057a22(param_1 + 1,*param_1,4,&local_18);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + -1;
      UNLOCK();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050064 FUN_147050064 body=52 status=ok
// SIG undefined FUN_147050064(void)

void FUN_147050064(longlong param_1,longlong *param_2)

{
  *param_2 = 0;
  if (*(longlong *)(param_1 + 200) == 0) {
    if (*(char *)(param_1 + 0xc0) != '\0') {
      return;
    }
  }
  else if (0 < *(int *)(*(longlong *)(param_1 + 200) + 0x20) || *(char *)(param_1 + 0xc0) != '\0') {
    return;
  }
  *param_2 = param_1;
  return;
}



// FUNCTION 147050098 FUN_147050098 body=183 status=ok
// SIG undefined FUN_147050098(void)

undefined8 * FUN_147050098(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 2;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  FUN_14485c47a(param_1 + 0xf,param_2);
  FUN_147050150(param_2,param_1);
  return param_1;
}



// FUNCTION 147050150 FUN_147050150 body=111 status=ok
// SIG undefined FUN_147050150(void)

void FUN_147050150(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
  FUN_147055b12(param_1 + 0x858,local_2c,&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001470501b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470501c0 FUN_1470501c0 body=521 status=ok
// SIG undefined FUN_1470501c0(void)

void FUN_1470501c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 != 0) {
    FUN_147057c64(param_1 + 0x90,param_1);
  }
  FUN_1403d43ee(param_1 + 0x18,0);
  FUN_14704c977(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_14704c73e(param_1 + 0x68,0);
  }
  FUN_14704f264(param_1 + 0x78);
  if (iVar2 != 0) {
    FUN_14704f264(param_1 + 0x78);
    local_30 = 0;
    *(undefined1 *)(param_1 + 0xc0) = 1;
    puVar3 = *(undefined8 **)(param_1 + 200);
    if (puVar3 != (undefined8 *)0x0) {
      *(byte *)((longlong)puVar3 + 0x24) =
           *(byte *)((longlong)puVar3 + 0x24) | 0 < *(int *)(puVar3 + 4);
      local_38 = 0 < *(int *)(puVar3 + 4);
      FUN_147057d08(puVar3 + 1,*puVar3,3,&local_30);
      if (local_30 != 0) {
        piVar1 = (int *)(local_30 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_147057b3e();
  }
  lVar5 = FUN_14479d2ce(param_1 + 0x10);
  if (lVar5 != 0) {
    FUN_147055f8c(lVar5 + 0x8a8,param_1);
    local_30 = 0;
    FUN_14485c47a(&local_30,0);
    *(longlong *)(param_1 + 0x10) = local_30;
  }
  FUN_147057b3e(*(undefined8 *)(param_1 + 200));
  FUN_144760e21(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_147055ade(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_14704c977(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470503ca FUN_1470503ca body=171 status=ok
// SIG undefined FUN_1470503ca(void)

undefined8 * FUN_1470503ca(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14479d2ce(param_1 + 0x10);
  FUN_147050476(param_2,uVar4);
  iVar2 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x68);
    lVar5 = 0;
    do {
      uVar4 = *param_2;
      local_38 = *(longlong *)(lVar3 + lVar5);
      if (local_38 != 0) {
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      }
      FUN_147050a0c(uVar4,&local_38);
      if (local_38 != 0) {
        piVar1 = (int *)(local_38 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1400020a8();
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050476 FUN_147050476 body=238 status=ok
// SIG undefined FUN_147050476(void)

undefined8 * FUN_147050476(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_14001cc68(0xd0,0x10);
  FUN_147050d9a(plVar2,param_2);
  *param_1 = plVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a14f790;
  plVar3[2] = (longlong)plVar2;
  param_1[1] = plVar3;
  if (plVar2 == (longlong *)0x0) {
    return param_1;
  }
  if (((*plVar2 != 0) && (plVar2[1] != 0)) && (0 < *(int *)(plVar2[1] + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *plVar2 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *plVar2 = (longlong)plVar2;
    if ((longlong *)plVar2[1] == plVar3) goto LAB_14705053c;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)plVar2[1];
    if (plVar4 == (longlong *)0x0) {
      plVar2[1] = (longlong)plVar3;
      goto LAB_14705053c;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar2[1] = (longlong)plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_14705053c:
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
  return param_1;
}



// FUNCTION 147050564 FUN_147050564 body=176 status=ok
// SIG undefined FUN_147050564(void)

undefined8 FUN_147050564(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14479d2ce(param_1 + 0x10);
    local_28 = *param_3;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    if ((longlong *)*param_2 == (longlong *)0x0) {
      puVar3 = &DAT_14c99f64c;
    }
    else {
      lVar1 = *(longlong *)*param_2;
      puVar3 = &DAT_14c99f64c;
      if (lVar1 != 0) {
        puVar3 = (undefined4 *)(lVar1 + 8);
      }
    }
    uVar2 = FUN_147051a0c(uVar2,*(undefined1 *)((longlong)puVar3 + 3),&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050616 FUN_147050616 body=166 status=ok
// SIG undefined FUN_147050616(void)

ulonglong FUN_147050616(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = 0;
  lVar2 = *param_2;
  local_20 = uVar4;
  if (lVar2 != 0) {
    uVar4 = FUN_144a8d392();
    if ((((uVar4 != 0) && (piVar1 = (int *)(uVar4 + 0x38), *piVar1 <= *(int *)(lVar2 + 0x38))) &&
        (uVar4 = uVar4 + 0x30,
        *(ulonglong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*piVar1 * 8) == uVar4)) &&
       (*param_2 != 0)) {
      local_40 = &local_21;
      local_30 = &local_40;
      local_38 = &LAB_147057b7a;
      uVar5 = FUN_1470506be(param_1,&local_38,param_2);
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      uVar3 = local_21;
      goto LAB_14705066d;
    }
  }
  uVar6 = (undefined7)(uVar4 >> 8);
  uVar3 = 0 < *(int *)(param_1 + 0x70);
LAB_14705066d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar6,uVar3) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470506be FUN_1470506be body=160 status=ok
// SIG undefined FUN_1470506be(void)

void FUN_1470506be(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x68);
    plVar1 = plVar5 + *(int *)(param_1 + 0x70);
    do {
      if (((((longlong *)*plVar5 != (longlong *)0x0) && (*(longlong *)*plVar5 != 0)) &&
          (((lVar4 = *param_3, lVar4 == 0 ||
            (((lVar3 = FUN_144a8d392(), lVar3 == 0 ||
              (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)))) ||
           ((*param_3 == 0 || (lVar4 = FUN_147050564(param_1,plVar5,param_3), lVar4 != 0)))))) &&
         (cVar2 = (*(code *)*param_2)(param_2[1],plVar5), cVar2 == '\0')) {
        return;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 14705075e FUN_14705075e body=167 status=ok
// SIG undefined FUN_14705075e(void)

undefined4 FUN_14705075e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined1 *local_38;
  undefined4 **local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = FUN_144a8d392();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (*param_2 != 0)) {
      puVar3 = &local_24;
      local_30 = &local_40;
      local_38 = &LAB_147057b84;
      local_40 = puVar3;
      FUN_1470506be(param_1,&local_38,param_2);
      goto LAB_1470507b5;
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x70);
LAB_1470507b5:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050806 FUN_147050806 body=19 status=ok
// SIG undefined FUN_147050806(void)

bool FUN_147050806(void)

{
  int iVar1;
  
  iVar1 = FUN_14705081a();
  return 0 < iVar1;
}



// FUNCTION 14705081a FUN_14705081a body=146 status=ok
// SIG undefined FUN_14705081a(void)

undefined4 FUN_14705081a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x10);
  uVar1 = 0;
  if (lVar2 != 0) {
    local_30 = param_2;
    lVar2 = FUN_142af9074(lVar2);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 8) != '\0')) {
      local_21 = *(char *)(lVar2 + 8);
      FUN_14704f00e(&local_30);
      uVar1 = FUN_14704faec(param_1 + 0x78,local_30,&local_21);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470508ae FUN_1470508ae body=136 status=ok
// SIG undefined FUN_1470508ae(void)

undefined8 * FUN_1470508ae(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14704c73e(param_2);
  }
  local_28 = &local_38;
  local_30 = FUN_147057b8c;
  local_38 = param_2;
  FUN_1470506be(param_1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050938 FUN_147050938 body=15 status=ok
// SIG undefined FUN_147050938(void)

void FUN_147050938(longlong param_1)

{
  FUN_147057c64(param_1 + 0x90,param_1);
  return;
}



// FUNCTION 147050948 FUN_147050948 body=103 status=ok
// SIG undefined FUN_147050948(void)

void FUN_147050948(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0xc0) = 1;
  puVar1 = *(undefined8 **)(param_1 + 200);
  if (puVar1 != (undefined8 *)0x0) {
    *(byte *)((longlong)puVar1 + 0x24) =
         *(byte *)((longlong)puVar1 + 0x24) | 0 < *(int *)(puVar1 + 4);
    uVar2 = 2;
    if (param_2 < 3) {
      uVar2 = 0x30100 >> (param_2 * '\b' & 0x1f);
    }
    FUN_147057d08(puVar1 + 1,*puVar1,uVar2,param_3,0 < *(int *)(puVar1 + 4));
  }
  return;
}



// FUNCTION 1470509b0 FUN_1470509b0 body=92 status=ok
// SIG undefined FUN_1470509b0(void)

undefined8 FUN_1470509b0(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = *param_2;
  if ((0xffffff < uVar1) && (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c))) {
    lVar2 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0xc) == uVar1;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0xc + 4);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147050a0c FUN_147050a0c body=354 status=ok
// SIG undefined FUN_147050a0c(void)

ulonglong FUN_147050a0c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  undefined1 local_30 [7];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((longlong *)*param_2 == (longlong *)0x0) || (*(longlong *)*param_2 == 0)) {
    uVar7 = 0;
  }
  else {
    FUN_147057c64(param_1 + 0x90,param_1);
    local_29 = '\0';
    if ((longlong *)*param_2 == (longlong *)0x0) {
      puVar8 = &DAT_14c99f64c;
    }
    else {
      lVar9 = *(longlong *)*param_2;
      puVar8 = &DAT_14c99f64c;
      if (lVar9 != 0) {
        puVar8 = (undefined4 *)(lVar9 + 8);
      }
    }
    local_38 = CONCAT44(local_38._4_4_,*puVar8);
    uVar6 = FUN_140db0a94(param_1 + 0x18,local_30,&local_38,&local_29);
    if (local_29 == '\0') {
      iVar1 = *(int *)(param_1 + 0x70);
      lVar9 = (longlong)iVar1;
      *(uint *)(param_1 + 0x70) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
        FUN_147057bde(param_1 + 0x68,iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x68);
      *(longlong *)(lVar2 + lVar9 * 8) = *param_2;
      *param_2 = 0;
      local_38 = 0;
      plVar3 = *(longlong **)(lVar2 + lVar9 * 8);
      if ((plVar3 == (longlong *)0x0) || (lVar4 = *plVar3, lVar4 == 0)) {
        uVar6 = FUN_14704eda0(param_1 + 0x78,&local_38);
      }
      else {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
        local_38 = lVar4;
        uVar6 = FUN_14704eda0(param_1 + 0x78);
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + -1;
          UNLOCK();
        }
      }
      *(undefined1 *)(param_1 + 0xc0) = 1;
      puVar5 = *(undefined8 **)(param_1 + 200);
      if (puVar5 != (undefined8 *)0x0) {
        *(byte *)((longlong)puVar5 + 0x24) =
             *(byte *)((longlong)puVar5 + 0x24) | 0 < *(int *)(puVar5 + 4);
        local_48 = 0 < *(int *)(puVar5 + 4);
        uVar6 = FUN_147057d08(puVar5 + 1,*puVar5,0,lVar2 + lVar9 * 8);
      }
    }
    uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),local_29) ^ 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050b70 FUN_147050b70 body=26 status=ok
// SIG undefined FUN_147050b70(void)

void FUN_147050b70(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 200);
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
  return;
}



// FUNCTION 147050b8a FUN_147050b8a body=20 status=ok
// SIG undefined FUN_147050b8a(void)

void FUN_147050b8a(longlong *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  FUN_147050d1c(*param_1,(char)param_1[1]);
  return;
}



// FUNCTION 147050b9e FUN_147050b9e body=380 status=ok
// SIG undefined FUN_147050b9e(void)

undefined8 FUN_147050b9e(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0xffffff < *param_2) {
    FUN_147057c64(param_1 + 0x90,param_1);
    iVar5 = FUN_144b016d0(param_1 + 0x18,*param_2);
    if (0 < iVar5) {
      lVar1 = *(longlong *)(param_1 + 0x68);
      iVar5 = -1;
      if ((longlong)*(int *)(param_1 + 0x70) != 0) {
        lVar8 = (longlong)*(int *)(param_1 + 0x70) << 3;
        lVar9 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + lVar9 * 8);
          puVar7 = &DAT_14c99f64c;
          if ((plVar2 != (longlong *)0x0) &&
             (lVar4 = *plVar2, puVar7 = (uint *)(lVar4 + 8), lVar4 == 0)) {
            puVar7 = &DAT_14c99f64c;
          }
          if (*puVar7 == *param_2) {
            iVar5 = (int)lVar9;
            break;
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      plVar2 = *(longlong **)(lVar1 + (longlong)iVar5 * 8);
      *(undefined8 *)(lVar1 + (longlong)iVar5 * 8) = 0;
      local_28 = plVar2;
      FUN_147057e24(param_1 + 0x68);
      local_30 = 0;
      if ((plVar2 == (longlong *)0x0) || (lVar1 = *plVar2, lVar1 == 0)) {
        FUN_14704f086(param_1 + 0x78,&local_30);
      }
      else {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
        local_30 = lVar1;
        FUN_14704f086(param_1 + 0x78);
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + -1;
          UNLOCK();
        }
      }
      *(undefined1 *)(param_1 + 0xc0) = 1;
      puVar3 = *(undefined8 **)(param_1 + 200);
      if (puVar3 != (undefined8 *)0x0) {
        *(byte *)((longlong)puVar3 + 0x24) =
             *(byte *)((longlong)puVar3 + 0x24) | 0 < *(int *)(puVar3 + 4);
        local_38 = 0 < *(int *)(puVar3 + 4);
        FUN_147057d08(puVar3 + 1,*puVar3,1,&local_28);
      }
      if (local_28 != (longlong *)0x0) {
        plVar2 = local_28 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          FUN_1400020a8();
        }
      }
      uVar6 = 1;
      goto LAB_147050bbe;
    }
  }
  uVar6 = 0;
LAB_147050bbe:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147050d1c FUN_147050d1c body=124 status=ok
// SIG undefined FUN_147050d1c(void)

void FUN_147050d1c(undefined8 *param_1,byte param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) &&
     (bVar2 = *(byte *)((longlong)param_1 + 0x24), *(undefined1 *)((longlong)param_1 + 0x24) = 0,
     (param_2 & bVar2) == 1)) {
    local_18 = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    local_28 = 0;
    FUN_147057d08(param_1 + 1,*param_1,4,&local_18);
    if (local_18 != 0) {
      piVar1 = (int *)(local_18 + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050d9a FUN_147050d9a body=237 status=ok
// SIG undefined FUN_147050d9a(void)

undefined8 * FUN_147050d9a(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 2;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  FUN_14485c47a(param_1 + 0xf,param_2);
  local_38 = param_1;
  FUN_1470560dc(param_2 + 0x8a8,local_3c);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147050e88 FUN_147050e88 body=380 status=ok
// SIG undefined FUN_147050e88(void)

longlong * FUN_147050e88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_50;
  longlong **local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 != 0) {
    lVar6 = FUN_14479d2ce(*param_2 + 0x10);
    if (lVar6 != 0) {
      FUN_14704f774(&local_40,lVar6);
      *param_1 = local_40;
      param_1[1] = (longlong)local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)local_38 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
      }
      lVar6 = *param_1;
      local_40 = 0;
      uVar3 = FUN_14705075e(*param_2);
      if ((uint)(*(int *)(lVar6 + 0x20) - *(int *)(lVar6 + 0x4c)) < uVar3) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar3);
        }
        FUN_146b7f620(lVar6 + 0x18,uVar3);
        iVar5 = 1;
        if (3 < uVar3) {
          uVar4 = (uVar3 | 1) + 0xe;
          iVar5 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          iVar5 = 1 << ((byte)iVar5 & 0x1f);
        }
        if ((*(int *)(lVar6 + 0x60) == 0) || (*(int *)(lVar6 + 0x60) < iVar5)) {
          *(int *)(lVar6 + 0x60) = iVar5;
          FUN_1449809d4(lVar6 + 0x18);
        }
      }
      else if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar3);
      }
      if (*(int *)(lVar6 + 0x74) < (int)uVar3) {
        FUN_14705784a(lVar6 + 0x68,uVar3);
      }
      local_40 = 0;
      local_48 = &local_58;
      local_50 = FUN_142af9430;
      local_58 = param_1;
      FUN_1470506be(*param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14705100b FUN_14705100b body=404 status=ok
// SIG undefined FUN_14705100b(void)

longlong * FUN_14705100b(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  code *local_68;
  longlong **local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    local_40 = FUN_14479d2ce(*param_2 + 0x10);
    if (local_40 != 0) {
      FUN_147050476(&local_50,local_40);
      *param_1 = (longlong)local_50;
      param_1[1] = (longlong)local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
      lVar3 = *param_1;
      local_50 = (longlong *)0x0;
      uVar4 = FUN_14704fa44(*param_2,&local_50);
      if ((uint)(*(int *)(lVar3 + 0x20) - *(int *)(lVar3 + 0x4c)) < uVar4) {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar4);
        }
        FUN_146b7f620(lVar3 + 0x18,uVar4);
        iVar6 = 1;
        if (3 < uVar4) {
          uVar5 = (uVar4 | 1) + 0xe;
          iVar6 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 1 << ((byte)iVar6 & 0x1f);
        }
        if ((*(int *)(lVar3 + 0x60) == 0) || (*(int *)(lVar3 + 0x60) < iVar6)) {
          *(int *)(lVar3 + 0x60) = iVar6;
          FUN_1449809d4(lVar3 + 0x18);
        }
      }
      else if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar4);
      }
      if (*(int *)(lVar3 + 0x74) < (int)uVar4) {
        FUN_14704c73e(lVar3 + 0x68,uVar4);
      }
      local_58 = 0;
      local_48 = &local_40;
      local_68 = FUN_142af94a6;
      local_60 = &local_50;
      local_50 = param_1;
      FUN_14704f9aa(*param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470511a6 FUN_1470511a6 body=343 status=ok
// SIG undefined FUN_1470511a6(void)

longlong FUN_1470511a6(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_144a788f7(param_3 & 0xffffffff);
  iVar3 = (int)(param_3 >> 0x20);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & iVar1 + iVar3) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x28);
        if (*puVar2 == param_3) {
          if (puVar2 != (ulonglong *)&DAT_fffffffffffffff8 && puVar2 != (ulonglong *)0x0)
          goto LAB_1470512be;
          break;
        }
        iVar1 = (int)puVar2[4];
      } while (iVar1 != -1);
    }
  }
  iVar1 = FUN_144a788f7(param_3 & 0xffffffff);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar4 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x98);
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & iVar1 + iVar3) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 0x28);
        if (*puVar2 == param_3) {
          if (puVar2 != (ulonglong *)&DAT_fffffffffffffff8 && puVar2 != (ulonglong *)0x0)
          goto LAB_1470512be;
          break;
        }
        iVar1 = (int)puVar2[4];
      } while (iVar1 != -1);
    }
  }
  *(undefined1 *)(param_2 + 8) = 0;
LAB_1470511ea:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_1470512be:
  *(undefined1 *)(param_2 + 8) = 0;
  local_30 = param_2;
  local_28 = param_2;
  (*(code *)(&PTR_FUN_14a14f640)[(byte)puVar2[3]])();
  goto LAB_1470511ea;
}



// FUNCTION 1470512fe FUN_1470512fe body=70 status=ok
// SIG undefined FUN_1470512fe(void)

void FUN_1470512fe(longlong param_1)

{
  FUN_147057e8e(param_1 + 8);
  FUN_147057f52(param_1 + 8,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c));
  FUN_147057e8e(param_1 + 0x58);
  FUN_147057f52(param_1 + 0x58,*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c));
  return;
}



// FUNCTION 147051344 FUN_147051344 body=69 status=ok
// SIG undefined FUN_147051344(void)

byte * FUN_147051344(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  
  if (DAT_14c99f4b0 == param_3) {
    bVar1 = *(byte *)(param_1 + 0xb0);
  }
  else {
    if (DAT_14c99f4b8 != param_3) {
      FUN_1470511a6(param_1,param_2);
      return param_2;
    }
    bVar1 = ~*(byte *)(param_1 + 0xb0);
  }
  *param_2 = bVar1 & 1;
  param_2[8] = 1;
  return param_2;
}



// FUNCTION 14705138a FUN_14705138a body=143 status=ok
// SIG undefined FUN_14705138a(void)

int FUN_14705138a(longlong *param_1,void *param_2,uint param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_14479d316(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_4 * 8);
  memmove((void *)((longlong)_Src + (longlong)(int)param_3 * 8),_Src,
          (ulonglong)(uint)(iVar1 - param_4) << 3);
  if (param_3 != 0) {
    memcpy((void *)((longlong)param_4 * 8 + *param_1),param_2,(longlong)(int)param_3 << 3);
  }
  return param_4;
}



// FUNCTION 14705141a FUN_14705141a body=195 status=ok
// SIG undefined FUN_14705141a(void)

longlong * FUN_14705141a(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x700);
    *(uint *)(lVar3 + 0x700) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x704) < iVar2 + 1U) {
      FUN_14705837c(lVar3 + 0x6e8,iVar2);
    }
    lVar4 = lVar3 + 0x6e8;
    if (*(longlong *)(lVar3 + 0x6f8) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x6f8);
    }
    *(undefined2 *)(lVar4 + (longlong)iVar2 * 2) = 0;
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x750);
    *(uint *)(lVar3 + 0x750) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x754) < iVar2 + 1U) {
      FUN_14705846c(lVar3 + 0x708,iVar2);
    }
    lVar4 = lVar3 + 0x708;
    if (*(longlong *)(lVar3 + 0x748) != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x748);
    }
    puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,param_2);
  }
  return param_1;
}



// FUNCTION 1470514de FUN_1470514de body=547 status=ok
// SIG undefined FUN_1470514de(void)

longlong FUN_1470514de(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x1c) != *(int *)(lVar2 + 0x18)) {
    FUN_140254dde();
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x3c) != *(int *)(lVar2 + 0x38)) {
    FUN_140254dde(lVar2 + 0x20);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0xfc) != *(int *)(lVar2 + 0xf8)) {
    FUN_14705861e(lVar2 + 0xb0);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x114) != *(int *)(lVar2 + 0x110)) {
    FUN_147058702(lVar2 + 0x100);
    lVar2 = *param_1;
  }
  lVar3 = lVar2 + 0x118;
  if (*(longlong *)(lVar2 + 0x6d8) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x6d8);
  }
  iVar1 = 0;
  if ((longlong)*(int *)(lVar2 + 0x6e0) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0x6e0) * 0xb8;
    do {
      FUN_1470512fe(lVar3);
      lVar3 = lVar3 + 0xb8;
      lVar2 = lVar2 + -0xb8;
    } while (lVar2 != 0);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0x6e0);
  }
  if (*(int *)(lVar2 + 0x6e4) != iVar1) {
    FUN_1470587d6(lVar2 + 0x118);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x704) != *(int *)(lVar2 + 0x700)) {
    FUN_147058560(lVar2 + 0x6e8);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x754) != *(int *)(lVar2 + 0x750)) {
    FUN_1470585be(lVar2 + 0x708);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x8dc) != *(int *)(lVar2 + 0x8d8)) {
    FUN_1470588e6(lVar2 + 0x850);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x84c) != *(int *)(lVar2 + 0x848)) {
    FUN_147058560(lVar2 + 0x830);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x7fc) != *(int *)(lVar2 + 0x7f8)) {
    FUN_147058702(lVar2 + 0x7e8);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x82c) != *(int *)(lVar2 + 0x828)) {
    FUN_1470589dc(lVar2 + 0x800);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x7e4) != *(int *)(lVar2 + 0x7e0)) {
    FUN_1470588e6(lVar2 + 0x758);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x90c) != *(int *)(lVar2 + 0x908)) {
    FUN_14705825e(lVar2 + 0x8f0);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x924) != *(int *)(lVar2 + 0x920)) {
    FUN_147058324(lVar2 + 0x910);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x944) != *(int *)(lVar2 + 0x940)) {
    FUN_1470582be(lVar2 + 0x928);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 0x954) != *(int *)(lVar2 + 0x950)) {
    FUN_1448f21ac(lVar2 + 0x948);
    lVar2 = *param_1;
  }
  FUN_1470512fe(lVar2 + 0x958);
  return *param_1;
}



// FUNCTION 147051702 FUN_147051702 body=381 status=ok
// SIG undefined FUN_147051702(void)

longlong FUN_147051702(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar2 + 1U) {
    FUN_147058ac0(param_1 + 0xb0,iVar2);
  }
  lVar4 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xf0);
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 8);
  *puVar1 = 0;
  FUN_14485c47a(puVar1,param_2);
  iVar2 = *(int *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x110) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x114) < iVar2 + 1U) {
    FUN_147058b30(param_1 + 0x100,iVar2);
  }
  lVar4 = param_1 + 0x100;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x108);
  }
  *(undefined1 *)(lVar4 + iVar2) = 2;
  iVar2 = *(int *)(param_1 + 0x6e0);
  *(uint *)(param_1 + 0x6e0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x6e4) < iVar2 + 1U) {
    FUN_147058b98(param_1 + 0x118,iVar2);
  }
  lVar4 = param_1 + 0x118;
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x6d8);
  }
  lVar3 = (longlong)iVar2 * 0xb8;
  *(undefined8 *)(lVar4 + 0x28 + lVar3) = 0;
  *(undefined4 *)(lVar4 + 0x30 + lVar3) = 0;
  puVar1 = (undefined8 *)(lVar4 + 8 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x34 + lVar3) = 0xffffffff00000080;
  *(undefined4 *)(lVar4 + 0x3c + lVar3) = 0;
  *(undefined8 *)(lVar4 + 0x48 + lVar3) = 0;
  *(undefined4 *)(lVar4 + 0x50 + lVar3) = 0;
  *(undefined8 *)(lVar4 + 0x78 + lVar3) = 0;
  *(undefined4 *)(lVar4 + 0x80 + lVar3) = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x58 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x84 + lVar3) = 0xffffffff00000080;
  *(undefined4 *)(lVar4 + 0x8c + lVar3) = 0;
  *(undefined8 *)(lVar4 + 0x98 + lVar3) = 0;
  *(undefined4 *)(lVar4 + 0xa0 + lVar3) = 0;
  *(undefined ***)(lVar4 + lVar3) = &PTR_FUN_14a14ac50;
  *(undefined8 *)(lVar4 + 0xa8 + lVar3) = param_2;
  *(undefined4 *)(lVar4 + 0xb0 + lVar3) = 1;
  return param_1;
}



// FUNCTION 147051880 FUN_147051880 body=347 status=ok
// SIG undefined FUN_147051880(void)

void FUN_147051880(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar5 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
  }
  if ((longlong *)*plVar5 == (longlong *)0x0) {
    puVar3 = &DAT_14c99f64c;
  }
  else {
    lVar2 = *(longlong *)*plVar5;
    puVar3 = &DAT_14c99f64c;
    if (lVar2 != 0) {
      puVar3 = (undefined4 *)(lVar2 + 8);
    }
  }
  uVar4 = FUN_147051a0c(param_1,*(undefined1 *)((longlong)puVar3 + 3),&local_40);
  *param_3 = uVar4;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470519dc FUN_1470519dc body=45 status=ok
// SIG undefined FUN_1470519dc(void)

void FUN_1470519dc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c635f9();
  *param_3 = DAT_14c99f510;
  return;
}



// FUNCTION 147051a0c FUN_147051a0c body=275 status=ok
// SIG undefined FUN_147051a0c(void)

longlong FUN_147051a0c(longlong param_1,byte param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_2 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar3 = *(longlong *)(param_1 + 0x30 + (ulonglong)(param_2 - 1) * 8);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar10 = *param_3;
    uVar12 = 0;
    if ((((lVar10 == 0) || (lVar5 = FUN_144a8d392(), lVar5 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar10 = 0;
    }
    else {
      lVar10 = *param_3;
    }
    uVar2 = *(uint *)(lVar3 + 0x20);
    lVar3 = *(longlong *)(lVar3 + 0x18);
    iVar8 = (int)((ulonglong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
    iVar7 = (int)*(undefined8 *)(lVar10 + 0x18);
    if (0 < (int)uVar2) {
      uVar12 = 0;
      uVar11 = uVar2;
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        lVar10 = (ulonglong)uVar1 * 0x10;
        iVar9 = *(int *)(lVar3 + lVar10) - iVar7;
        if (iVar9 == 0) {
          iVar9 = *(int *)(lVar3 + 4 + lVar10) - iVar8;
        }
        if (iVar9 < 0) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar4 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar4);
    }
    if ((int)uVar12 < (int)uVar2) {
      lVar10 = (ulonglong)uVar12 * 0x10;
      iVar7 = iVar7 - *(int *)(lVar3 + lVar10);
      if (iVar7 == 0) {
        iVar7 = iVar8 - *(int *)(lVar3 + 4 + lVar10);
      }
      if ((-1 < iVar7) && (plVar6 = (longlong *)(lVar3 + lVar10 + 8), plVar6 != (longlong *)0x0)) {
        lVar3 = *plVar6;
        if (DAT_14c950c29 != '\x01') {
          return lVar3;
        }
        if (lVar3 == 0) {
          return 0;
        }
        FUN_14689c22e(lVar3);
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147051b1f FUN_147051b1f body=165 status=ok
// SIG undefined FUN_147051b1f(void)

void FUN_147051b1f(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 8) != *(int *)(param_2 + 0x34)) {
    FUN_14705927e(param_2);
    FUN_1470593c2(param_2);
  }
  local_20 = 0;
  local_28 = &local_38;
  local_30 = FUN_142af965a;
  local_38 = param_2;
  FUN_14704f9aa(*param_1);
  plVar3 = (longlong *)param_1[1];
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



// FUNCTION 147051bc5 FUN_147051bc5 body=376 status=ok
// SIG undefined FUN_147051bc5(void)

longlong * FUN_147051bc5(longlong *param_1,longlong *param_2,longlong param_3)

{
  PSRWLOCK SRWLock;
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14704c73e(param_1);
    lVar5 = param_2[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar3 = *param_2;
      SRWLock = (PSRWLOCK)(param_3 + 0x28);
      lVar8 = 0;
      do {
        puVar7 = (uint *)(*(longlong *)(lVar3 + lVar8) + 8);
        if (*(longlong *)(lVar3 + lVar8) == 0) {
          puVar7 = &DAT_14c99f64c;
        }
        uVar2 = *puVar7;
        if (uVar2 == DAT_14c99f64c) {
LAB_147051c70:
          lVar6 = 0;
        }
        else {
          AcquireSRWLockShared(SRWLock);
          if (uVar2 < 0x1000000) {
            ReleaseSRWLockShared(SRWLock);
LAB_147051cb7:
            FUN_1415b7ec4(L"Element type ID has not been registered to this registry!",2,0);
            goto LAB_147051c70;
          }
          plVar4 = *(longlong **)(param_3 + 0x30 + (ulonglong)((uVar2 >> 0x18) - 1) * 8);
          ReleaseSRWLockShared(SRWLock);
          if (plVar4 == (longlong *)0x0) goto LAB_147051cb7;
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_50,*puVar7 & 0xffffff);
          lVar6 = local_50;
          if ((local_50 != 0) && (*(int *)(local_50 + 8) == 0)) {
            FUN_1400020a8(local_50);
          }
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_147057bde(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar6;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147051d3f FUN_147051d3f body=157 status=ok
// SIG undefined FUN_147051d3f(void)

longlong * FUN_147051d3f(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14705784a(param_1);
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        if ((*(longlong **)(lVar2 + lVar5) != (longlong *)0x0) &&
           (lVar3 = **(longlong **)(lVar2 + lVar5), lVar3 != 0)) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_1470578aa(param_1,iVar1);
          }
          *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar3;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar5);
    }
  }
  return param_1;
}



// FUNCTION 147051dde FUN_147051dde body=33 status=ok
// SIG undefined FUN_147051dde(void)

void FUN_147051dde(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14a148f00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  return;
}



// FUNCTION 147051e00 FUN_147051e00 body=94 status=ok
// SIG undefined FUN_147051e00(void)

undefined8 FUN_147051e00(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  if ((longlong *)(param_1 + 8) != param_3) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 0x10) = (int)param_3[1];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = param_4;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 147051e82 FUN_147051e82 body=524 status=ok
// SIG undefined FUN_147051e82(void)

longlong * FUN_147051e82(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[2] == 1) {
    uVar7 = FUN_14479d2ce(param_1[1]);
    (**(code **)(*param_1 + 0x60))(param_1,param_2,uVar7);
  }
  else {
    if ((int)param_1[2] != 0) {
      uVar7 = FUN_14479d2ce(param_1[1]);
      (**(code **)(*param_1 + 0x60))(param_1,&local_68,uVar7);
      lVar4 = local_68;
      uVar9 = (int)local_60 - 1;
      if ((int)local_60 == 0) {
        uVar9 = 0;
      }
      lVar11 = param_1[1];
      lVar1 = lVar11 + (longlong)(int)param_1[2] * 8;
      do {
        lVar11 = lVar11 + 8;
        if (lVar11 == lVar1) {
          *param_2 = 0;
          param_2[1] = 0;
          FUN_14006620a(&local_58,lVar4,uVar9);
          if (&local_58 == param_2) {
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_2 != 0) {
              FUN_1400020a8();
            }
            *param_2 = local_58;
            local_58 = 0;
            *(uint *)(param_2 + 1) = local_50;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
          }
          break;
        }
        uVar7 = FUN_14479d2ce(lVar11);
        (**(code **)(*param_1 + 0x60))(param_1,&local_58,uVar7);
        iVar5 = local_50 - 1;
        if (local_50 == 0) {
          iVar5 = 0;
        }
        if (local_50 < 2 || uVar9 == 0) {
LAB_147051f83:
          *param_2 = local_68;
          bVar3 = false;
          local_68 = 0;
          *(int *)(param_2 + 1) = (int)local_60;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_60._4_4_;
          local_60 = 0;
        }
        else {
          lVar8 = 0;
          lVar10 = -2;
          do {
            if ((*(short *)(lVar4 + lVar8 * 2) != *(short *)(local_58 + lVar8 * 2)) ||
               (lVar8 = lVar8 + 1, (longlong)(int)uVar9 * -2 - lVar10 == 0)) break;
            lVar2 = (longlong)iVar5 * -2 - lVar10;
            lVar10 = lVar10 + -2;
          } while (lVar2 != 0);
          uVar6 = (uint)lVar8;
          if (uVar6 < 3) goto LAB_147051f83;
          if ((int)uVar6 < (int)uVar9) {
            uVar9 = uVar6;
          }
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          bVar3 = true;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      } while (bVar3);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140056680(param_2,L"TEDS Column");
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 147052090 FUN_147052090 body=1062 status=ok
// SIG undefined FUN_147052090(void)

undefined8 *
FUN_147052090(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_241;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined8 local_228;
  longlong *local_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  plVar9 = DAT_14c98ded0;
  uVar7 = DAT_14c98dec8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (DAT_14c98ded0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x28))(param_1,local_218);
  (**(code **)(*param_4 + 0x98))(param_4,param_3,local_218);
  uVar5 = FUN_146298bc6();
  puVar6 = (undefined8 *)(**(code **)(*param_4 + 0xd0))(param_4,param_3,uVar5);
  plVar10 = plVar9;
  if (puVar6 == (undefined8 *)0x0) {
    local_250 = param_6;
    local_258 = param_5;
    (**(code **)(*param_1 + 0x40))(param_1,&local_208,param_3,param_4);
    plVar11 = local_200;
    uVar7 = local_208;
    local_208 = 0;
    if (local_200 != plVar9) {
      local_200 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) goto LAB_1470521d2;
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar10 = plVar11;
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
  }
  else {
    bVar3 = (**(code **)(*param_4 + 0x78))(param_4,*puVar6);
    lVar8 = (**(code **)(*param_1 + 0x20))(param_1);
    if (lVar8 != 0) {
      bVar4 = (**(code **)(*param_4 + 0xf8))(param_4,*puVar6,lVar8);
      bVar3 = bVar3 & bVar4;
    }
    plVar11 = plVar9;
    if (bVar3 == 0) goto LAB_1470521d2;
    local_250 = param_6;
    local_258 = param_5;
    (**(code **)(*param_1 + 0x40))(param_1,&local_208,param_3,param_4);
    plVar11 = local_200;
    uVar7 = local_208;
    local_208 = 0;
    if (local_200 != plVar9) {
      local_200 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) goto LAB_1470521d2;
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar10 = plVar11;
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
  }
  plVar9 = local_200;
  plVar11 = plVar10;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_200 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_1470521d2:
  FUN_1470524b8(&local_208);
  plVar9 = local_50;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_60 = param_3;
  local_58 = uVar7;
  plVar10 = plVar11;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar6 = (undefined8 *)*local_50;
      local_50 = plVar11;
      (*(code *)*puVar6)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar10 = local_50;
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        plVar10 = local_50;
      }
    }
  }
  local_50 = plVar10;
  FUN_147059a66(local_240,&local_241);
  FUN_1470524fe(local_240,&local_228,&local_208);
  if (local_220 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_220 + 1) = (int)local_220[1] + 1;
    UNLOCK();
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_220 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar1 = (int *)((longlong)local_220 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_220 + 0x10))(local_220);
        }
      }
    }
  }
  if (local_238 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_238 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar1 = (int *)((longlong)local_238 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_238 + 0x10))(local_238);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_147052572(&local_208);
  uVar7 = FUN_1462997f0();
  lVar8 = (**(code **)(*param_4 + 0xd0))(param_4,param_3,uVar7);
  *(undefined8 *)(lVar8 + 0x10) = local_228;
  plVar9 = *(longlong **)(lVar8 + 0x18);
  if (plVar9 != local_220) {
    if (local_220 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_220 + 0xc) = *(int *)((longlong)local_220 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(lVar8 + 0x18);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(longlong **)(lVar8 + 0x18) = local_220;
  }
  *param_2 = local_228;
  param_2[1] = local_220;
  if (local_220 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_220 + 1) = (int)local_220[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = local_220 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470524b8 FUN_1470524b8 body=70 status=ok
// SIG undefined FUN_1470524b8(void)

longlong FUN_1470524b8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1470524fe FUN_1470524fe body=115 status=ok
// SIG undefined FUN_1470524fe(void)

longlong * FUN_1470524fe(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14704f2a6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147052572 FUN_147052572 body=64 status=ok
// SIG undefined FUN_147052572(void)

void FUN_147052572(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1470525b2 FUN_1470525b2 body=402 status=ok
// SIG undefined FUN_1470525b2(void)

longlong *
FUN_1470525b2(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_146298bc6();
  local_78 = (longlong *)(**(code **)(*param_4 + 0xd0))(param_4,param_3,uVar4);
  if (local_78 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
  }
  else {
    local_78 = (longlong *)*local_78;
  }
  local_68 = param_6;
  local_70 = param_3;
  (**(code **)(*param_1 + 0x48))(param_1,&local_58,param_4,param_5);
  if (local_58 != 0) {
    uVar4 = FUN_1462997f0();
    plVar5 = (longlong *)(**(code **)(*param_4 + 0xd0))(param_4,param_3,uVar4);
    plVar2 = local_50;
    *plVar5 = local_58;
    plVar6 = (longlong *)plVar5[1];
    if (plVar6 != local_50) {
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      plVar5[1] = (longlong)plVar2;
    }
    cVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_4,param_3);
    if (cVar3 != '\0') {
      local_78 = &local_58;
      cVar3 = (**(code **)(*param_1 + 0x68))(param_1,param_4,param_5,param_3);
      if (cVar3 != '\0') {
        FUN_147052746(param_1,param_3,param_4);
        *param_2 = local_58;
        param_2[1] = (longlong)local_50;
        goto LAB_1470526f2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
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
LAB_1470526f2:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


