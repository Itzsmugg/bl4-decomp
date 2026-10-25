// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498fce4a FUN_1498fce4a body=117 status=ok
// SIG undefined FUN_1498fce4a(void)

undefined8 FUN_1498fce4a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1498fcb98(), iVar2 != -1)) {
    lVar1 = *param_1;
    FUN_1498f89b8((longlong)iVar2 * 0x1f0 + lVar1 + 0x10);
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x1f0),param_3,0x1e8);
    FUN_1498fd582(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1498fcec0 FUN_1498fcec0 body=372 status=ok
// SIG undefined FUN_1498fcec0(void)

undefined4 * FUN_1498fcec0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1498fd034(param_1 + 10,param_2 + 10);
  FUN_1498fd254(param_1 + 0x1e,param_2 + 0x1e);
  param_1[0x32] = param_2[0x32];
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x34) = 0;
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  *(undefined8 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_2 + 0x3a) = 0;
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  *(undefined8 *)(param_2 + 0x3c) = 0;
  uVar1 = param_2[0x3f];
  uVar2 = param_2[0x40];
  uVar3 = param_2[0x41];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar1;
  param_1[0x40] = uVar2;
  param_1[0x41] = uVar3;
  FUN_1498fd474(param_1 + 0x42,param_2 + 0x42);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_2 + 0x5a);
  puVar10 = (undefined8 *)(param_2 + 0x5c);
  puVar11 = (undefined8 *)(param_1 + 0x5c);
  for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x72) = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_2 + 0x72) = 0;
  param_1[0x74] = param_2[0x74];
  param_1[0x75] = param_2[0x75];
  *(undefined8 *)(param_2 + 0x74) = 0;
  return param_1;
}



// FUNCTION 1498fd034 FUN_1498fd034 body=123 status=ok
// SIG undefined FUN_1498fd034(void)

undefined8 * FUN_1498fd034(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1498fd0b0();
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



// FUNCTION 1498fd0b0 FUN_1498fd0b0 body=419 status=ok
// SIG undefined FUN_1498fd0b0(void)

longlong * FUN_1498fd0b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x10 + (longlong)iVar9 * 0x20);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fd254 FUN_1498fd254 body=123 status=ok
// SIG undefined FUN_1498fd254(void)

undefined8 * FUN_1498fd254(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1498fd2d0();
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



// FUNCTION 1498fd2d0 FUN_1498fd2d0 body=419 status=ok
// SIG undefined FUN_1498fd2d0(void)

longlong * FUN_1498fd2d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x10 + (longlong)iVar9 * 0x20);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fd474 FUN_1498fd474 body=123 status=ok
// SIG undefined FUN_1498fd474(void)

undefined8 * FUN_1498fd474(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1498fd4f0();
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



// FUNCTION 1498fd4f0 FUN_1498fd4f0 body=146 status=ok
// SIG undefined FUN_1498fd4f0(void)

longlong * FUN_1498fd4f0(longlong *param_1,longlong *param_2)

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



// FUNCTION 1498fd582 FUN_1498fd582 body=122 status=ok
// SIG undefined FUN_1498fd582(void)

void FUN_1498fd582(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1f0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1f0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1f0 + 4) = uVar5;
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



// FUNCTION 1498fd5fc FUN_1498fd5fc body=132 status=ok
// SIG undefined FUN_1498fd5fc(void)

void FUN_1498fd5fc(longlong param_1,int param_2)

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



// FUNCTION 1498fd681 FUN_1498fd681 body=131 status=ok
// SIG undefined FUN_1498fd681(void)

void FUN_1498fd681(undefined8 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x80);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14befd560;
  uVar1 = *param_2;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0x8000000000;
  puVar3[9] = 0;
  puVar3[10] = 0x8000000000;
  *(undefined2 *)(puVar3 + 0xc) = uVar1;
  *(undefined2 *)((longlong)puVar3 + 0x62) = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = *param_1;
  lVar2 = param_1[1];
  puVar3[0xf] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1498fd70e FUN_1498fd70e body=29 status=ok
// SIG undefined FUN_1498fd70e(void)

undefined8 FUN_1498fd70e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fd72c FUN_1498fd72c body=303 status=ok
// SIG undefined FUN_1498fd72c(void)

undefined4 * FUN_1498fd72c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1498fd85c(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_38 = uVar5;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar3 = FUN_1498fd942(param_1,uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_38[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1498fda00(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fd85c FUN_1498fd85c body=229 status=ok
// SIG undefined FUN_1498fd85c(void)

int * FUN_1498fd85c(longlong *param_1,int *param_2)

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



// FUNCTION 1498fd942 FUN_1498fd942 body=189 status=ok
// SIG undefined FUN_1498fd942(void)

undefined8 FUN_1498fd942(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1498faf42(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498fda00 FUN_1498fda00 body=422 status=ok
// SIG undefined FUN_1498fda00(void)

void FUN_1498fda00(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1498fdba8 FUN_1498fdba8 body=151 status=ok
// SIG undefined FUN_1498fdba8(void)

undefined8 * FUN_1498fdba8(undefined8 *param_1,undefined8 *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1498fdc40 FUN_1498fdc40 body=129 status=ok
// SIG undefined FUN_1498fdc40(void)

undefined8 * FUN_1498fdc40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1417246d8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 << 4);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1498fdcc2 FUN_1498fdcc2 body=181 status=ok
// SIG undefined FUN_1498fdcc2(void)

longlong FUN_1498fdcc2(longlong *param_1,uint param_2,int *param_3)

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
          if (lVar3 != 0) goto LAB_1498fdd5a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1498fdd78(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1498fdd5a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1498fdd78 FUN_1498fdd78 body=275 status=ok
// SIG undefined FUN_1498fdd78(void)

undefined4 * FUN_1498fdd78(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1498fde8c(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_1498fdf72(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_1498fe0a2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fde8c FUN_1498fde8c body=229 status=ok
// SIG undefined FUN_1498fde8c(void)

int * FUN_1498fde8c(longlong *param_1,int *param_2)

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



// FUNCTION 1498fdf72 FUN_1498fdf72 body=189 status=ok
// SIG undefined FUN_1498fdf72(void)

undefined8 FUN_1498fdf72(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1498fe030(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498fe030 FUN_1498fe030 body=114 status=ok
// SIG undefined FUN_1498fe030(void)

void FUN_1498fe030(longlong *param_1,int param_2)

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



// FUNCTION 1498fe0a2 FUN_1498fe0a2 body=422 status=ok
// SIG undefined FUN_1498fe0a2(void)

void FUN_1498fe0a2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 1498fe24a FUN_1498fe24a body=9 status=ok
// SIG undefined FUN_1498fe24a(void)

void FUN_1498fe24a(longlong param_1)

{
  FUN_1498fe272(param_1 + 0x10);
  return;
}



// FUNCTION 1498fe254 FUN_1498fe254 body=29 status=ok
// SIG undefined FUN_1498fe254(void)

undefined8 FUN_1498fe254(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498fe272 FUN_1498fe272 body=62 status=ok
// SIG undefined FUN_1498fe272(void)

void FUN_1498fe272(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498fe2b0 FUN_1498fe2b0 body=81 status=ok
// SIG undefined FUN_1498fe2b0(void)

void FUN_1498fe2b0(longlong *param_1,int param_2)

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
          FUN_1498fe302(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1498fe302 FUN_1498fe302 body=90 status=ok
// SIG undefined FUN_1498fe302(void)

void FUN_1498fe302(longlong *param_1,int param_2)

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
  FUN_1498fe35c();
  return;
}



// FUNCTION 1498fe35c FUN_1498fe35c body=78 status=ok
// SIG undefined FUN_1498fe35c(void)

void FUN_1498fe35c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_1498fe030(param_1,param_2);
  return;
}



// FUNCTION 1498fe3aa FUN_1498fe3aa body=276 status=ok
// SIG undefined FUN_1498fe3aa(void)

void FUN_1498fe3aa(undefined4 *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
  uVar4 = (ulonglong)DAT_14cc323d0;
  if (0 < (longlong)uVar4) {
    bVar5 = false;
    DAT_14cc323dc = DAT_14cc323dc + 1;
    do {
      lVar6 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while ((*(int *)(DAT_14cc323c8 + lVar6) != 0 &&
             (plVar1 = *(longlong **)(DAT_14cc323c8 + -8 + lVar6), plVar1 != (longlong *)0x0))) {
        local_38 = *(undefined8 *)(param_1 + 8);
        local_58 = *param_1;
        uStack_54 = param_1[1];
        uStack_50 = param_1[2];
        uStack_4c = param_1[3];
        local_48 = param_1[4];
        uStack_44 = param_1[5];
        uStack_40 = param_1[6];
        uStack_3c = param_1[7];
        cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_58);
        if (cVar3 == '\0') break;
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          DAT_14cc323dc = DAT_14cc323dc + -1;
          if (!bVar5) goto LAB_1498fe48f;
          goto LAB_1498fe479;
        }
      }
      uVar4 = uVar7 - 1;
      bVar5 = true;
    } while (1 < uVar7);
    DAT_14cc323dc = DAT_14cc323dc + -1;
LAB_1498fe479:
    FUN_14109be94(&DAT_14cc323a0,0);
  }
LAB_1498fe48f:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc323a0);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498fe4c0 FUN_1498fe4c0 body=203 status=ok
// SIG undefined FUN_1498fe4c0(void)

int FUN_1498fe4c0(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1498fe50a:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1498fe580;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1498fe580;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1498fe571;
    }
  }
  return -1;
LAB_1498fe580:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1498fe571:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1498fe50a;
}



// FUNCTION 1498fe58c FUN_1498fe58c body=315 status=ok
// SIG undefined FUN_1498fe58c(void)

undefined4 * FUN_1498fe58c(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_1498fe6c8(param_1,local_48);
  FUN_1498fe820(param_3,local_40);
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
  cVar3 = FUN_1498fe7ae(param_1,uVar4,local_40,&local_4c);
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
      FUN_1498fe8f6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498fe6c8 FUN_1498fe6c8 body=229 status=ok
// SIG undefined FUN_1498fe6c8(void)

int * FUN_1498fe6c8(longlong *param_1,int *param_2)

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



// FUNCTION 1498fe7ae FUN_1498fe7ae body=114 status=ok
// SIG undefined FUN_1498fe7ae(void)

undefined8 FUN_1498fe7ae(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1498fe4c0(), iVar6 != -1)) {
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
    FUN_1498fe884(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1498fe820 FUN_1498fe820 body=100 status=ok
// SIG undefined FUN_1498fe820(void)

undefined8 * FUN_1498fe820(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 1498fe884 FUN_1498fe884 body=114 status=ok
// SIG undefined FUN_1498fe884(void)

void FUN_1498fe884(longlong *param_1,int param_2)

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



// FUNCTION 1498fe8f6 FUN_1498fe8f6 body=476 status=ok
// SIG undefined FUN_1498fe8f6(void)

void FUN_1498fe8f6(longlong *param_1)

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



// FUNCTION 1498fead4 FUN_1498fead4 body=158 status=ok
// SIG undefined FUN_1498fead4(void)

void FUN_1498fead4(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x1f0;
        if ((((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1]))
            && (*(int *)(lVar1 + 8 + lVar4) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4) == param_2[3])) {
          FUN_1498feb72(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x1e8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1498feb72 FUN_1498feb72 body=138 status=ok
// SIG undefined FUN_1498feb72(void)

void FUN_1498feb72(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x1f0;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1ec + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x1e8 + lVar6 * 0x1f0);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x1f0 + 0x1e8);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x1e8);
  FUN_1498f89b8(*param_1 + lVar2 + 0x10);
  FUN_1498fd582(param_1,param_2);
  return;
}



// FUNCTION 1498febfc FUN_1498febfc body=399 status=ok
// SIG undefined FUN_1498febfc(void)

longlong * FUN_1498febfc(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1498fedf4(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1498fed8c(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1498fedf4(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1498eebce(param_2,iVar2);
        }
        FUN_1498fed8c(param_1,(longlong)iVar2 * 8 + *param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1498fed8c FUN_1498fed8c body=104 status=ok
// SIG undefined FUN_1498fed8c(void)

longlong * FUN_1498fed8c(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  FUN_1498fee53();
  puVar2 = (undefined2 *)(param_2 + 4);
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 1498fedf4 FUN_1498fedf4 body=95 status=ok
// SIG undefined FUN_1498fedf4(void)

void FUN_1498fedf4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1498fee53 FUN_1498fee53 body=82 status=ok
// SIG undefined FUN_1498fee53(void)

longlong * FUN_1498fee53(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1498feea6 FUN_1498feea6 body=42 status=ok
// SIG undefined FUN_1498feea6(void)

void FUN_1498feea6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1 + 0x10);
  return;
}



// FUNCTION 1498feed0 FUN_1498feed0 body=29 status=ok
// SIG undefined FUN_1498feed0(void)

undefined8 FUN_1498feed0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498feeee FUN_1498feeee body=314 status=ok
// SIG undefined FUN_1498feeee(void)

undefined4 * FUN_1498feeee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498ff02a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar15 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar10 = FUN_1498ff118(param_1,uVar15,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar10 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar11) {
      uVar12 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_40 + 0x2c) = uVar15;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1498f93e8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ff02a FUN_1498ff02a body=238 status=ok
// SIG undefined FUN_1498ff02a(void)

int * FUN_1498ff02a(longlong *param_1,int *param_2)

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



// FUNCTION 1498ff118 FUN_1498ff118 body=151 status=ok
// SIG undefined FUN_1498ff118(void)

undefined8 FUN_1498ff118(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1498f932a((int)lVar6,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498ff1b0 FUN_1498ff1b0 body=63 status=ok
// SIG undefined FUN_1498ff1b0(void)

void FUN_1498ff1b0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1498f8e46(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1498ff33a(param_1);
    return;
  }
  FUN_1498ff1f0(param_1);
  FUN_1498f8e46(param_1);
  return;
}



// FUNCTION 1498ff1f0 FUN_1498ff1f0 body=329 status=ok
// SIG undefined FUN_1498ff1f0(void)

void FUN_1498ff1f0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 1498ff33a FUN_1498ff33a body=453 status=ok
// SIG undefined FUN_1498ff33a(void)

void FUN_1498ff33a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = FUN_1447addd0(lVar3 + lVar4,0x10);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
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



// FUNCTION 1498ff500 FUN_1498ff500 body=303 status=ok
// SIG undefined FUN_1498ff500(void)

undefined4 * FUN_1498ff500(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498ff630(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined1 *)(local_40 + 4) = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_1498ff72c(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
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
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1498ff33a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ff630 FUN_1498ff630 body=251 status=ok
// SIG undefined FUN_1498ff630(void)

int * FUN_1498ff630(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1498ff72c FUN_1498ff72c body=98 status=ok
// SIG undefined FUN_1498ff72c(void)

undefined8 FUN_1498ff72c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1498fbb68(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1498ff78e(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1498ff78e FUN_1498ff78e body=128 status=ok
// SIG undefined FUN_1498ff78e(void)

void FUN_1498ff78e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1498ff80e FUN_1498ff80e body=226 status=ok
// SIG undefined FUN_1498ff80e(void)

void FUN_1498ff80e(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1498ff908(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_1498ffaa6(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_1498ffc6a(param_1,local_34,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (-1 < *(int *)((longlong)param_2 + 0xc)) {
    if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1498ff908 FUN_1498ff908 body=413 status=ok
// SIG undefined FUN_1498ff908(void)

void FUN_1498ff908(longlong *param_1,uint param_2)

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



// FUNCTION 1498ffaa6 FUN_1498ffaa6 body=450 status=ok
// SIG undefined FUN_1498ffaa6(void)

void FUN_1498ffaa6(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x10;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined2 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0xc + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar10) =
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



// FUNCTION 1498ffc6a FUN_1498ffc6a body=301 status=ok
// SIG undefined FUN_1498ffc6a(void)

undefined4 * FUN_1498ffc6a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498ffd98(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_144a78877(uVar5,uVar5 >> 0x20 & 0xffff);
  local_58 = 0;
  cVar2 = FUN_1498ffe7e(param_1,uVar3,local_40,&local_4c);
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
      FUN_1498ffaa6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498ffd98 FUN_1498ffd98 body=229 status=ok
// SIG undefined FUN_1498ffd98(void)

int * FUN_1498ffd98(longlong *param_1,int *param_2)

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



// FUNCTION 1498ffe7e FUN_1498ffe7e body=151 status=ok
// SIG undefined FUN_1498ffe7e(void)

void FUN_1498ffe7e(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x10;
        if ((*(int *)(lVar1 + lVar5) == *param_3) &&
           (*(short *)(lVar1 + 4 + lVar5) == (short)param_3[1])) {
          *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)param_3;
          FUN_1498fff16(param_1,*param_4);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_1498ffef3;
        }
        iVar4 = *(int *)((undefined8 *)(lVar1 + lVar5) + 1);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_1498ffef3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1498fff16 FUN_1498fff16 body=114 status=ok
// SIG undefined FUN_1498fff16(void)

void FUN_1498fff16(longlong *param_1,int param_2)

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



// FUNCTION 1498fff88 FUN_1498fff88 body=306 status=ok
// SIG undefined FUN_1498fff88(void)

undefined4 *
FUN_1498fff88(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1498ffd98(param_1,local_50);
  uVar5 = *param_3;
  *local_48 = uVar5;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = FUN_144a78877(uVar5,uVar5 >> 0x20 & 0xffff);
  local_68 = param_4;
  cVar2 = FUN_1498ffe7e(param_1,uVar3,local_48,&local_54);
  uVar1 = local_54;
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
      *(uint *)((longlong)local_48 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1498ffaa6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499000bc FUN_1499000bc body=90 status=ok
// SIG undefined FUN_1499000bc(void)

void FUN_1499000bc(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1498fff16();
  return;
}



// FUNCTION 149900116 FUN_149900116 body=29 status=ok
// SIG undefined FUN_149900116(void)

undefined8 FUN_149900116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990015c FUN_14990015c body=101 status=ok
// SIG undefined FUN_14990015c(void)

void FUN_14990015c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1499001c2 FUN_1499001c2 body=101 status=ok
// SIG undefined FUN_1499001c2(void)

void FUN_1499001c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd630;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900228 FUN_149900228 body=134 status=ok
// SIG undefined FUN_149900228(void)

void FUN_149900228(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befd630;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd5c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014990029f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1499002c0 FUN_1499002c0 body=25 status=ok
// SIG undefined FUN_1499002c0(void)

undefined8 FUN_1499002c0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499002dc FUN_1499002dc body=29 status=ok
// SIG undefined FUN_1499002dc(void)

undefined8 FUN_1499002dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149900322 FUN_149900322 body=101 status=ok
// SIG undefined FUN_149900322(void)

void FUN_149900322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900388 FUN_149900388 body=101 status=ok
// SIG undefined FUN_149900388(void)

void FUN_149900388(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd6a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1499003ee FUN_1499003ee body=134 status=ok
// SIG undefined FUN_1499003ee(void)

void FUN_1499003ee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befd710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd6a0;
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
                    /* WARNING: Could not recover jumptable at 0x000149900465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149900486 FUN_149900486 body=25 status=ok
// SIG undefined FUN_149900486(void)

undefined8 FUN_149900486(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499004a2 FUN_1499004a2 body=29 status=ok
// SIG undefined FUN_1499004a2(void)

undefined8 FUN_1499004a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1499004dc FUN_1499004dc body=101 status=ok
// SIG undefined FUN_1499004dc(void)

void FUN_1499004dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befd780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900542 FUN_149900542 body=101 status=ok
// SIG undefined FUN_149900542(void)

void FUN_149900542(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befd780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1499005a8 FUN_1499005a8 body=134 status=ok
// SIG undefined FUN_1499005a8(void)

void FUN_1499005a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14befd780;
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
                    /* WARNING: Could not recover jumptable at 0x00014990061f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14990063e FUN_14990063e body=25 status=ok
// SIG undefined FUN_14990063e(void)

undefined8 FUN_14990063e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149900658 FUN_149900658 body=29 status=ok
// SIG undefined FUN_149900658(void)

undefined8 FUN_149900658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990069e FUN_14990069e body=101 status=ok
// SIG undefined FUN_14990069e(void)

void FUN_14990069e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900704 FUN_149900704 body=101 status=ok
// SIG undefined FUN_149900704(void)

void FUN_149900704(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14990076a FUN_14990076a body=134 status=ok
// SIG undefined FUN_14990076a(void)

void FUN_14990076a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befd860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd7f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001499007e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149900802 FUN_149900802 body=25 status=ok
// SIG undefined FUN_149900802(void)

undefined8 FUN_149900802(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14990081e FUN_14990081e body=29 status=ok
// SIG undefined FUN_14990081e(void)

undefined8 FUN_14990081e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149900864 FUN_149900864 body=101 status=ok
// SIG undefined FUN_149900864(void)

void FUN_149900864(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1499008ca FUN_1499008ca body=101 status=ok
// SIG undefined FUN_1499008ca(void)

void FUN_1499008ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befd940;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900930 FUN_149900930 body=134 status=ok
// SIG undefined FUN_149900930(void)

void FUN_149900930(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befd940;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd8d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001499009a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1499009c8 FUN_1499009c8 body=25 status=ok
// SIG undefined FUN_1499009c8(void)

undefined8 FUN_1499009c8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1499009e4 FUN_1499009e4 body=29 status=ok
// SIG undefined FUN_1499009e4(void)

undefined8 FUN_1499009e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149900a2a FUN_149900a2a body=101 status=ok
// SIG undefined FUN_149900a2a(void)

void FUN_149900a2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befda20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd9b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900a90 FUN_149900a90 body=101 status=ok
// SIG undefined FUN_149900a90(void)

void FUN_149900a90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befda20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befd9b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900af6 FUN_149900af6 body=134 status=ok
// SIG undefined FUN_149900af6(void)

void FUN_149900af6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befda20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befd9b0;
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
                    /* WARNING: Could not recover jumptable at 0x000149900b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149900b8e FUN_149900b8e body=25 status=ok
// SIG undefined FUN_149900b8e(void)

undefined8 FUN_149900b8e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149900baa FUN_149900baa body=9 status=ok
// SIG undefined FUN_149900baa(void)

void FUN_149900baa(longlong param_1)

{
  FUN_1498f05b2(param_1 + 0x10);
  return;
}



// FUNCTION 149900bb4 FUN_149900bb4 body=29 status=ok
// SIG undefined FUN_149900bb4(void)

undefined8 FUN_149900bb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149900bd1 FUN_149900bd1 body=73 status=ok
// SIG undefined FUN_149900bd1(void)

void FUN_149900bd1(longlong param_1,int param_2)

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



// FUNCTION 149900c1a FUN_149900c1a body=25 status=ok
// SIG undefined FUN_149900c1a(void)

void FUN_149900c1a(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149900c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 149900c34 FUN_149900c34 body=29 status=ok
// SIG undefined FUN_149900c34(void)

undefined8 FUN_149900c34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149900c52 FUN_149900c52 body=132 status=ok
// SIG undefined FUN_149900c52(void)

void FUN_149900c52(longlong param_1,int param_2)

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



// FUNCTION 149900cd8 FUN_149900cd8 body=29 status=ok
// SIG undefined FUN_149900cd8(void)

undefined8 FUN_149900cd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149900d12 FUN_149900d12 body=101 status=ok
// SIG undefined FUN_149900d12(void)

void FUN_149900d12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befae50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befdb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900d78 FUN_149900d78 body=101 status=ok
// SIG undefined FUN_149900d78(void)

void FUN_149900d78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14befae50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14befdb60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149900dde FUN_149900dde body=134 status=ok
// SIG undefined FUN_149900dde(void)

void FUN_149900dde(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14befae50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14befdb60;
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
                    /* WARNING: Could not recover jumptable at 0x000149900e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149900e76 FUN_149900e76 body=25 status=ok
// SIG undefined FUN_149900e76(void)

undefined8 FUN_149900e76(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149900e90 FUN_149900e90 body=68 status=ok
// SIG undefined FUN_149900e90(void)

void FUN_149900e90(longlong param_1,uint param_2)

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
  FUN_149900ed4(param_1);
  return;
}



// FUNCTION 149900ed4 FUN_149900ed4 body=446 status=ok
// SIG undefined FUN_149900ed4(void)

void FUN_149900ed4(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x38;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar10) =
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



// FUNCTION 149901094 FUN_149901094 body=87 status=ok
// SIG undefined FUN_149901094(void)

void FUN_149901094(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1499010ec();
  return;
}



// FUNCTION 1499010ec FUN_1499010ec body=78 status=ok
// SIG undefined FUN_1499010ec(void)

void FUN_1499010ec(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)param_2 * 0x38);
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
  FUN_14990113a(param_1,param_2);
  return;
}



// FUNCTION 14990113a FUN_14990113a body=116 status=ok
// SIG undefined FUN_14990113a(void)

void FUN_14990113a(longlong *param_1,int param_2)

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



// FUNCTION 1499011ae FUN_1499011ae body=133 status=ok
// SIG undefined FUN_1499011ae(void)

longlong FUN_1499011ae(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_149901234();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x38;
    if (lVar3 + lVar2 != 0) goto LAB_1499011e7;
  }
  local_30 = param_3;
  FUN_1499012a8(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x38;
LAB_1499011e7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149901234 FUN_149901234 body=115 status=ok
// SIG undefined FUN_149901234(void)

int FUN_149901234(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x38;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1499012a8 FUN_1499012a8 body=281 status=ok
// SIG undefined FUN_1499012a8(void)

undefined4 * FUN_1499012a8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1499013c2(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar2 = FUN_1499014a4(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_149900ed4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499013c2 FUN_1499013c2 body=226 status=ok
// SIG undefined FUN_1499013c2(void)

int * FUN_1499013c2(longlong *param_1,int *param_2)

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



// FUNCTION 1499014a4 FUN_1499014a4 body=158 status=ok
// SIG undefined FUN_1499014a4(void)

undefined8 FUN_1499014a4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar16 = FUN_149901234(), iVar16 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x38);
    plVar4 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar16 * 0x38);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    uVar13 = param_3[9];
    uVar14 = param_3[10];
    uVar15 = param_3[0xb];
    puVar3[8] = param_3[8];
    puVar3[9] = uVar13;
    puVar3[10] = uVar14;
    puVar3[0xb] = uVar15;
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    puVar3[6] = uVar11;
    puVar3[7] = uVar12;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_14990113a(param_1,*param_4);
    *param_4 = iVar16;
    return 1;
  }
  return 0;
}



// FUNCTION 149901542 FUN_149901542 body=136 status=ok
// SIG undefined FUN_149901542(void)

void FUN_149901542(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1499015ca FUN_1499015ca body=62 status=ok
// SIG undefined FUN_1499015ca(void)

void FUN_1499015ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149901608(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149901608 FUN_149901608 body=93 status=ok
// SIG undefined FUN_149901608(void)

ulonglong FUN_149901608(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 149901666 FUN_149901666 body=132 status=ok
// SIG undefined FUN_149901666(void)

void FUN_149901666(longlong param_1,int param_2)

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



// FUNCTION 1499016ec FUN_1499016ec body=31 status=ok
// SIG undefined FUN_1499016ec(void)

undefined8 FUN_1499016ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149901728 FUN_149901728 body=93 status=ok
// SIG undefined FUN_149901728(void)

void FUN_149901728(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befdbd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149901786 FUN_149901786 body=126 status=ok
// SIG undefined FUN_149901786(void)

void FUN_149901786(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14befdbd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001499017f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149901804 FUN_149901804 body=21 status=ok
// SIG undefined FUN_149901804(void)

undefined8 FUN_149901804(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14990181a FUN_14990181a body=38 status=ok
// SIG undefined FUN_14990181a(void)

undefined8 FUN_14990181a(undefined8 param_1,int param_2)

{
  FUN_145ceb12a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990184e FUN_14990184e body=116 status=ok
// SIG undefined FUN_14990184e(void)

void FUN_14990184e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_145b17d02();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  param_1 = param_1 + -8;
  if (*(char *)(lVar2 + 0x29) == '\x01') {
    FUN_1446b3b30(param_1);
  }
  else {
    FUN_145d3590e(param_1);
  }
  if (*(char *)(lVar2 + 0x81) == '\x01') {
    FUN_1446b40e6(param_1);
    return;
  }
  FUN_145d358a6(param_1);
  return;
}



// FUNCTION 1499018c2 FUN_1499018c2 body=339 status=ok
// SIG undefined FUN_1499018c2(void)

/* WARNING: Removing unreachable block (ram,0x0001499019ec) */

longlong * FUN_1499018c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_149901929;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar13 = iVar9 == iVar6;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      *param_2 = 0;
      param_2[1] = 0;
      FUN_1498f4fe8(lVar4,&local_58);
      if ((longlong)local_50 != 0) {
        lVar11 = (longlong)local_50 << 3;
        lVar12 = local_58;
        uVar7 = local_68;
        uVar8 = local_60;
        do {
          local_60 = uVar8;
          local_68 = uVar7;
          FUN_146b13724(lVar12,&local_68);
          iVar9 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
            FUN_1447a1bd6(param_2,iVar9);
          }
          lVar5 = *param_2;
          lVar10 = (longlong)iVar9 * 0x10;
          *(undefined8 *)(lVar5 + lVar10) = 0;
          *(undefined8 *)(lVar5 + lVar10) = local_68;
          local_68 = 0;
          uVar7 = local_68;
          *(undefined4 *)(lVar5 + 8 + lVar10) = (undefined4)local_60;
          *(undefined4 *)(lVar5 + 0xc + lVar10) = local_60._4_4_;
          local_60 = 0;
          uVar8 = local_60;
          local_60 = 0;
          local_68 = 0;
          lVar12 = lVar12 + 8;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
    }
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
    if (lVar4 != 0) goto LAB_14990192f;
  }
LAB_149901929:
  *param_2 = 0;
  param_2[1] = 0;
LAB_14990192f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149901a1a FUN_149901a1a body=231 status=ok
// SIG undefined FUN_149901a1a(void)

undefined8 * FUN_149901a1a(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_149901aa7;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
        *(undefined8 *)((longlong)param_2 + 0x44) = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = 0;
        param_2[1] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
      }
      else {
        local_38 = *param_3;
        uStack_34 = param_3[1];
        uStack_30 = param_3[2];
        uStack_2c = param_3[3];
        FUN_1498f2abc(*(longlong *)(lVar4 + 0x38),param_2);
      }
    }
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
    if (lVar4 != 0) goto LAB_149901ac9;
  }
LAB_149901aa7:
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
LAB_149901ac9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149901b02 FUN_149901b02 body=27 status=ok
// SIG undefined FUN_149901b02(void)

undefined8 FUN_149901b02(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  return param_2;
}



// FUNCTION 149901b1e FUN_149901b1e body=21 status=ok
// SIG undefined FUN_149901b1e(void)

undefined * FUN_149901b1e(void)

{
  FUN_1498f1992();
  return &DAT_14cc32358;
}



// FUNCTION 149901b34 FUN_149901b34 body=21 status=ok
// SIG undefined FUN_149901b34(void)

undefined * FUN_149901b34(void)

{
  FUN_1498f1a23();
  return &DAT_14cc323a0;
}



// FUNCTION 149901b4a FUN_149901b4a body=47 status=ok
// SIG undefined FUN_149901b4a(void)

void FUN_149901b4a(longlong param_1)

{
  FUN_145d3590e(param_1 + -8);
  FUN_145d358a6(param_1 + -8);
  FUN_149901fa6(param_1 + 0x58);
  return;
}



// FUNCTION 149901b7a FUN_149901b7a body=347 status=ok
// SIG undefined FUN_149901b7a(void)

/* WARNING: Removing unreachable block (ram,0x000149901cac) */

longlong * FUN_149901b7a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_149901bf1;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar13 = iVar9 == iVar6;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        FUN_1498f256c(*(longlong *)(lVar4 + 0x38),&local_58);
        *param_2 = 0;
        param_2[1] = 0;
        if ((longlong)local_50 != 0) {
          lVar11 = (longlong)local_50 << 3;
          lVar10 = local_58;
          uVar7 = local_68;
          uVar8 = local_60;
          do {
            local_60 = uVar8;
            local_68 = uVar7;
            FUN_146b13724(lVar10,&local_68);
            iVar9 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
              FUN_1447a1bd6(param_2,iVar9);
            }
            lVar5 = *param_2;
            lVar12 = (longlong)iVar9 * 0x10;
            *(undefined8 *)(lVar5 + lVar12) = 0;
            *(undefined8 *)(lVar5 + lVar12) = local_68;
            local_68 = 0;
            uVar7 = local_68;
            *(undefined4 *)(lVar5 + 8 + lVar12) = (undefined4)local_60;
            *(undefined4 *)(lVar5 + 0xc + lVar12) = local_60._4_4_;
            local_60 = 0;
            uVar8 = local_60;
            local_60 = 0;
            local_68 = 0;
            lVar10 = lVar10 + 8;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        if (local_58 != 0) {
          FUN_1400020a8(local_58);
        }
      }
    }
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
    if (lVar4 != 0) goto LAB_149901bf7;
  }
LAB_149901bf1:
  *param_2 = 0;
  param_2[1] = 0;
LAB_149901bf7:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149901cd9 FUN_149901cd9 body=73 status=ok
// SIG undefined FUN_149901cd9(void)

void FUN_149901cd9(longlong param_1,int param_2)

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



// FUNCTION 149901d22 FUN_149901d22 body=323 status=ok
// SIG undefined FUN_149901d22(void)

longlong * FUN_149901d22(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1498fedf4(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1498eebce(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149901e68 FUN_149901e68 body=260 status=ok
// SIG undefined FUN_149901e68(void)

undefined8 *
FUN_149901e68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14befcff0;
  uVar1 = *param_6;
  local_58 = 0;
  iVar2 = *(int *)(param_5 + 1);
  uVar3 = *param_5;
  local_50 = iVar2;
  if (iVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_140b856de(&local_58,iVar2,0);
    FUN_140b8566a(local_58,uVar3,iVar2);
  }
  local_68 = *param_4;
  *param_4 = 0;
  local_60 = *(undefined4 *)(param_4 + 1);
  local_5c = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_78 = &local_58;
  local_70 = uVar1;
  FUN_1498f4d08(param_1 + 2,param_2,param_3);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149901f6e FUN_149901f6e body=25 status=ok
// SIG undefined FUN_149901f6e(void)

void FUN_149901f6e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149901f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 149901f88 FUN_149901f88 body=29 status=ok
// SIG undefined FUN_149901f88(void)

undefined8 FUN_149901f88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149901fa6 FUN_149901fa6 body=63 status=ok
// SIG undefined FUN_149901fa6(void)

void FUN_149901fa6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145ceb234(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1498ffaa6(param_1);
    return;
  }
  FUN_149901fe6(param_1);
  FUN_145ceb234(param_1);
  return;
}



// FUNCTION 149901fe6 FUN_149901fe6 body=322 status=ok
// SIG undefined FUN_149901fe6(void)

void FUN_149901fe6(longlong *param_1)

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



// FUNCTION 14990212a FUN_14990212a body=237 status=ok
// SIG undefined FUN_14990212a(void)

undefined8
FUN_14990212a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14befe390;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149902230 FUN_149902230 body=29 status=ok
// SIG undefined FUN_149902230(void)

undefined8 FUN_149902230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14990226a FUN_14990226a body=101 status=ok
// SIG undefined FUN_14990226a(void)

void FUN_14990226a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befe390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1499022d0 FUN_1499022d0 body=101 status=ok
// SIG undefined FUN_1499022d0(void)

void FUN_1499022d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14befe390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149902336 FUN_149902336 body=134 status=ok
// SIG undefined FUN_149902336(void)

void FUN_149902336(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14befe390;
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
                    /* WARNING: Could not recover jumptable at 0x0001499023ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1499023cc FUN_1499023cc body=25 status=ok
// SIG undefined FUN_1499023cc(void)

undefined8 FUN_1499023cc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149902456 FUN_149902456 body=234 status=ok
// SIG undefined FUN_149902456(void)

void FUN_149902456(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_144a6c4d8();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) goto LAB_1499024c1;
      FUN_14990263c(local_58,param_3,param_4);
      FUN_149902542(param_1 + 0x70,param_2,local_58);
    }
    else {
      FUN_1499025b4(local_58,param_3);
      FUN_149902542(param_1 + 0x70,param_2,local_58);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1499024c1:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149902542 FUN_149902542 body=113 status=ok
// SIG undefined FUN_149902542(void)

void FUN_149902542(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = FUN_1491faebc();
  if (iVar5 == -1) {
    iVar5 = (int)param_1[1];
    lVar6 = (longlong)iVar5;
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_140c60952(param_1,iVar5);
    }
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    puVar1 = (undefined4 *)(*param_1 + lVar6 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_149902dae(param_1 + 2);
  }
  else {
    lVar6 = (longlong)iVar5;
  }
  FUN_149903712(lVar6 * 0x10 + param_1[2],param_3);
  return;
}



// FUNCTION 1499025b4 FUN_1499025b4 body=135 status=ok
// SIG undefined FUN_1499025b4(void)

undefined1 * FUN_1499025b4(undefined1 *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = 2;
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_14010318a(param_2,&local_30);
    if ((undefined4 *)(param_1 + 0x18) == &local_30) {
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = local_30;
      *(undefined4 *)(param_1 + 0x1c) = uStack_2c;
      *(undefined4 *)(param_1 + 0x20) = uStack_28;
      *(undefined4 *)(param_1 + 0x24) = uStack_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990263c FUN_14990263c body=221 status=ok
// SIG undefined FUN_14990263c(void)

undefined1 * FUN_14990263c(undefined1 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_1 + 4);
  if (param_2 == param_3) {
    *param_1 = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *param_1 = 1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1468b526e();
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  if (cVar3 != '\0') {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) goto LAB_1499026fc;
  }
  FUN_14485c47a(&local_48,param_2);
LAB_1499026fc:
  *(undefined4 *)puVar1 = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 8) = uStack_40._4_4_;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x10) = local_38._4_4_;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14990271a FUN_14990271a body=159 status=ok
// SIG undefined FUN_14990271a(void)

undefined8 FUN_14990271a(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      if (param_2 == param_3) {
        uVar4 = (undefined7)((ulonglong)(lVar2 + 0x30) >> 8);
        bVar1 = 1;
        bVar5 = 1;
        goto LAB_149902772;
      }
LAB_149902784:
      lVar2 = FUN_144a79cc8(param_2);
      lVar3 = FUN_144a79cc8(param_3);
      bVar5 = lVar2 == lVar3;
      uVar4 = (undefined7)((ulonglong)lVar3 >> 8);
      bVar1 = 1;
      goto LAB_149902772;
    }
    lVar2 = FUN_144a78d6a();
    param_1 = *(longlong *)(param_2 + 0x10);
    if (*(int *)(lVar2 + 0x38) <= *(int *)(param_1 + 0x38)) {
      param_1 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30) {
        param_2 = *(longlong *)(param_2 + 0xa8);
        if (param_2 == 0) {
          uVar4 = (undefined7)((ulonglong)(lVar2 + 0x30) >> 8);
          bVar1 = 1;
          bVar5 = 0;
          goto LAB_149902772;
        }
        goto LAB_149902784;
      }
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_149902772:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 1499027ca FUN_1499027ca body=151 status=ok
// SIG undefined FUN_1499027ca(void)

void FUN_1499027ca(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = FUN_1491faebc();
  if (iVar1 != -1) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)iVar1 * 0x10);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 0x10);
      lVar4 = lVar4 * 0x28;
      do {
        lVar2 = FUN_149902c10(lVar5,param_3);
        if (lVar2 != 0) {
          iVar1 = *(int *)(param_4 + 0x10);
          *(uint *)(param_4 + 0x10) = iVar1 + 1U;
          if (*(uint *)(param_4 + 0x14) < iVar1 + 1U) {
            FUN_14571f162(param_4,iVar1);
          }
          lVar3 = *(longlong *)(param_4 + 8);
          if (*(longlong *)(param_4 + 8) == 0) {
            lVar3 = param_4;
          }
          *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
        }
        lVar5 = lVar5 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 149902868 FUN_149902868 body=62 status=ok
// SIG undefined FUN_149902868(void)

undefined8 FUN_149902868(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return *(undefined8 *)(param_2 + 0xa8);
    }
  }
  return 0;
}



// FUNCTION 1499028b0 FUN_1499028b0 body=117 status=ok
// SIG undefined FUN_1499028b0(void)

void FUN_1499028b0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_1491faebc();
  if (uVar1 == 0xffffffff) {
    return;
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~uVar1 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)uVar1 * 0x10 + *param_1),
            (void *)((longlong)(iVar2 - iVar4) * 0x10 + *param_1),(longlong)iVar4 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_14990360e(param_1 + 2,uVar1);
  return;
}



// FUNCTION 149902926 FUN_149902926 body=202 status=ok
// SIG undefined FUN_149902926(void)

longlong FUN_149902926(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = FUN_14479d2ce(*param_2 + 0x18);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar5 = FUN_14043ab18();
    lVar6 = FUN_144a78ede(param_1,uVar5);
    if (lVar6 == 0) {
      uVar5 = FUN_145a986bc();
      uVar5 = FUN_144a78ede(param_1,uVar5);
      lVar7 = FUN_144938c96(uVar5);
      lVar8 = FUN_145a986bc();
      lVar6 = *(longlong *)(lVar8 + 0x110);
      if (lVar6 == 0) {
        FUN_140aa6c08(lVar8);
        lVar6 = *(longlong *)(lVar8 + 0x110);
      }
      if (lVar7 == lVar6) {
        uVar5 = FUN_144a79cc8(lVar4);
        lVar4 = FUN_143552474(uVar5);
      }
    }
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
  return lVar4;
}



// FUNCTION 1499029f0 FUN_1499029f0 body=290 status=ok
// SIG undefined FUN_1499029f0(void)

void FUN_1499029f0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401c3ca6();
  if (*(longlong *)(param_1 + 0x138) == 0) goto LAB_149902a17;
  FUN_1446ddc76(&local_20,"SequencePlayer",1);
  lVar2 = FUN_149902b13(param_1,local_20);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x140) = lVar2;
  local_30 = param_1;
  if ((param_1 == 0) || ((bVar1 & 1) == 0)) {
    if (param_1 != 0) goto LAB_149902a9d;
    local_28 = 0;
  }
  else {
    FUN_14689c22e(param_1);
LAB_149902a9d:
    uVar3 = FUN_145957486();
    local_28 = FUN_144718840(param_1,uVar3);
  }
  FUN_141581688(lVar2);
  FUN_140d63f24(*(undefined8 *)(param_1 + 0x140),param_1);
  FUN_1475780a0(*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x138),param_1 + 0x110);
  if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
    FUN_140ef5ee2(*(undefined8 *)(param_1 + 0x140));
  }
LAB_149902a17:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149902b13 FUN_149902b13 body=183 status=ok
// SIG undefined FUN_149902b13(void)

undefined8 FUN_149902b13(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459fdbae();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 149902bcc FUN_149902bcc body=56 status=ok
// SIG undefined FUN_149902bcc(void)

void FUN_149902bcc(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_140c7df0a();
    FUN_140873278(*(undefined8 *)(param_1 + 0x140));
  }
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 149902c10 FUN_149902c10 body=389 status=ok
// SIG undefined FUN_149902c10(void)

longlong FUN_149902c10(char *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = *param_1;
  lVar3 = param_2;
  if (cVar2 == '\0') goto LAB_149902cc1;
  if (cVar2 == '\x02') {
    if (1 < *(int *)(param_1 + 0x20)) {
      FUN_144a78d6a();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else if ((cVar2 == '\x01') &&
          (((*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 4) != 0) ||
           *(int *)(param_1 + 0xc) != 0) || *(int *)(param_1 + 0x10) != 0)) {
    FUN_144a79778(param_2);
    local_38 = 0;
    local_30 = *(int *)(param_1 + 4);
    iStack_2c = *(int *)(param_1 + 8);
    iStack_28 = *(int *)(param_1 + 0xc);
    iStack_24 = *(int *)(param_1 + 0x10);
    lVar3 = FUN_14479d2ce();
    if (lVar3 == 0) {
      if (((iStack_2c != 0 || local_30 != 0) || iStack_28 != 0) || iStack_24 != 0) {
        lVar3 = thunk_FUN_140971090();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar3 == 0) || (cVar2 == '\0')) {
          FUN_14485c47a(&local_38,lVar3);
          if (lVar3 == 0) goto LAB_149902cbf;
        }
        else {
          uVar1 = *(uint *)(lVar3 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(&local_38,lVar3);
          }
        }
        if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_149902c7f;
      }
    }
    else {
LAB_149902c7f:
      lVar4 = FUN_144a6c4d8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar4 = FUN_144a79cc8(lVar3);
        lVar5 = FUN_144a79cc8(param_2);
        if (lVar4 == lVar5) goto LAB_149902cc1;
      }
    }
  }
LAB_149902cbf:
  lVar3 = 0;
LAB_149902cc1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 149902dae FUN_149902dae body=55 status=ok
// SIG undefined FUN_149902dae(void)

void FUN_149902dae(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14990368c(param_1,iVar1);
  }
  FUN_149903685((longlong)iVar1 * 0x10 + *param_1);
  return;
}



// FUNCTION 149902de6 FUN_149902de6 body=46 status=ok
// SIG undefined FUN_149902de6(void)

longlong FUN_149902de6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x270);
  if (lVar2 != 0) {
    uVar1 = FUN_144a6c4d8();
    lVar2 = FUN_144a78ede(lVar2,uVar1);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 149902e14 FUN_149902e14 body=62 status=ok
// SIG undefined FUN_149902e14(void)

undefined8 * FUN_149902e14(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = (**(code **)(*param_1 + 0x78))();
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_1447f76d2(param_2,0);
    *(longlong *)*param_2 = lVar1;
  }
  return param_2;
}



// FUNCTION 149902e56 FUN_149902e56 body=45 status=ok
// SIG undefined FUN_149902e56(void)

longlong FUN_149902e56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149902e84 FUN_149902e84 body=45 status=ok
// SIG undefined FUN_149902e84(void)

longlong FUN_149902e84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140a07204(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149902eb2 FUN_149902eb2 body=48 status=ok
// SIG undefined FUN_149902eb2(void)

longlong FUN_149902eb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x210;
  FUN_140a07204(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149902ee2 FUN_149902ee2 body=47 status=ok
// SIG undefined FUN_149902ee2(void)

void FUN_149902ee2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149902f56 FUN_149902f56 body=78 status=ok
// SIG undefined FUN_149902f56(void)

undefined8 FUN_149902f56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149902fcc FUN_149902fcc body=59 status=ok
// SIG undefined FUN_149902fcc(void)

undefined8 FUN_149902fcc(longlong *param_1)

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



// FUNCTION 149903012 FUN_149903012 body=38 status=ok
// SIG undefined FUN_149903012(void)

void FUN_149903012(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149903098 FUN_149903098 body=44 status=ok
// SIG undefined FUN_149903098(void)

void FUN_149903098(undefined8 param_1,longlong *param_2)

{
  FUN_149902ee2(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1499030da FUN_1499030da body=54 status=ok
// SIG undefined FUN_1499030da(void)

undefined1 FUN_1499030da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1499031d4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149903138 FUN_149903138 body=59 status=ok
// SIG undefined FUN_149903138(void)

undefined8 FUN_149903138(longlong *param_1)

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



// FUNCTION 1499031d4 FUN_1499031d4 body=95 status=ok
// SIG undefined FUN_1499031d4(void)

undefined8 * FUN_1499031d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149902ee2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149903234(param_1,iVar1);
      FUN_1499032a7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149903234 FUN_149903234 body=115 status=ok
// SIG undefined FUN_149903234(void)

void FUN_149903234(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1499032a7 FUN_1499032a7 body=132 status=ok
// SIG undefined FUN_1499032a7(void)

void FUN_1499032a7(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      *(undefined4 *)(puVar5 + -1) = param_2[4];
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -3) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0x14) = uVar2;
      *(undefined4 *)(puVar5 + -2) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[8];
      _Src = *(void **)(param_2 + 6);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 10;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14990332c FUN_14990332c body=50 status=ok
// SIG undefined FUN_14990332c(void)

void FUN_14990332c(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_149902ee2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149903394 FUN_149903394 body=87 status=ok
// SIG undefined FUN_149903394(void)

undefined1 FUN_149903394(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403fbf4e(param_2,param_3);
    FUN_1499034ca(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 149903414 FUN_149903414 body=59 status=ok
// SIG undefined FUN_149903414(void)

undefined8 FUN_149903414(longlong *param_1)

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



// FUNCTION 14990345a FUN_14990345a body=34 status=ok
// SIG undefined FUN_14990345a(void)

void FUN_14990345a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1459cbd0a(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1499034ca FUN_1499034ca body=95 status=ok
// SIG undefined FUN_1499034ca(void)

undefined8 * FUN_1499034ca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459cbd46(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14990352a(param_1,iVar1);
      FUN_14990358c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14990352a FUN_14990352a body=98 status=ok
// SIG undefined FUN_14990352a(void)

void FUN_14990352a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14990358c FUN_14990358c body=52 status=ok
// SIG undefined FUN_14990358c(void)

void FUN_14990358c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1499035c0(param_1,param_2);
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return;
}



// FUNCTION 1499035c0 FUN_1499035c0 body=77 status=ok
// SIG undefined FUN_1499035c0(void)

undefined8 * FUN_1499035c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_149903234(param_1,iVar1,0);
    FUN_1499032a7(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14990360e FUN_14990360e body=119 status=ok
// SIG undefined FUN_14990360e(void)

void FUN_14990360e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = (longlong)(int)param_2 * 0x10;
  FUN_149902ee2(*(undefined8 *)(lVar1 + lVar5),*(undefined4 *)(lVar1 + 8 + lVar5));
  if (*(longlong *)(lVar1 + lVar5) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)(lVar5 + lVar1),(void *)((longlong)(iVar2 - iVar3) * 0x10 + lVar1),
            (longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 149903685 FUN_149903685 body=7 status=ok
// SIG undefined FUN_149903685(void)

void FUN_149903685(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14990368c FUN_14990368c body=132 status=ok
// SIG undefined FUN_14990368c(void)

void FUN_14990368c(longlong param_1,int param_2)

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



// FUNCTION 149903712 FUN_149903712 body=238 status=ok
// SIG undefined FUN_149903712(void)

void FUN_149903712(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar9 = param_1[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar3 = *param_1;
    uVar8 = 0;
    do {
      cVar7 = FUN_149903800(lVar3 + uVar8,param_2);
      if (cVar7 != '\0') {
        if ((int)(uVar8 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar8 = uVar8 + 0x28;
    } while ((longlong)(int)lVar9 * 0x28 != uVar8);
  }
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_149903862(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x10 + lVar9 * 0x28) = param_2[4];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar1 = (undefined4 *)(lVar3 + lVar9 * 0x28);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x18 + lVar9 * 0x28) = 0;
  iVar2 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  *(int *)(lVar3 + 0x20 + lVar9 * 0x28) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar3 + lVar9 * 0x28 + 0x24) = 0;
    return;
  }
  puVar10 = (undefined8 *)(lVar3 + lVar9 * 0x28 + 0x18);
  FUN_1446dd670(puVar10,iVar2,0);
  memcpy((void *)*puVar10,_Src,(longlong)iVar2 * 2);
  return;
}



// FUNCTION 149903800 FUN_149903800 body=97 status=ok
// SIG undefined FUN_149903800(void)

bool FUN_149903800(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
       (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (bVar2 = false, *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == *(int *)(param_2 + 0x20)) {
      if (iVar1 < 2) {
        return true;
      }
      iVar1 = FUN_144a80a00(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = *(int *)(param_2 + 0x20) + iVar1 == 1;
    }
  }
  return bVar2;
}



// FUNCTION 149903862 FUN_149903862 body=147 status=ok
// SIG undefined FUN_149903862(void)

void FUN_149903862(longlong param_1,int param_2)

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



// FUNCTION 1499038f6 FUN_1499038f6 body=120 status=ok
// SIG undefined FUN_1499038f6(void)

void FUN_1499038f6(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14bf006d0;
  param_1[4] = param_2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}



// FUNCTION 14990396e FUN_14990396e body=132 status=ok
// SIG undefined FUN_14990396e(void)

ulonglong FUN_14990396e(longlong param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(int *)(param_1 + 0xd0) < 1) {
    FUN_1499039f4(local_40);
    uVar1 = FUN_149903a5e(local_40,param_1 + 200);
    uVar2 = (ulonglong)uVar1;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499039f4 FUN_1499039f4 body=105 status=ok
// SIG undefined FUN_1499039f4(void)

undefined8 * FUN_1499039f4(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = DAT_14c872cf0;
  _Src = DAT_14c872ce8;
  lVar2 = (longlong)DAT_14c872cf0;
  *(int *)(param_1 + 1) = DAT_14c872cf0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  FUN_140056680(param_1 + 2,L"OnlineSubsystemNull");
  return param_1;
}



// FUNCTION 149903a5e FUN_149903a5e body=1091 status=ok
// SIG undefined FUN_149903a5e(void)

undefined4 FUN_149903a5e(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong *local_e8;
  int local_e0;
  longlong local_d8 [4];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined8 local_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14990b910(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_14990b936(param_2);
  }
  iVar6 = 0;
  do {
    iVar4 = iVar6;
    FUN_140002266(local_d8,L"Achievement_%d_Id",iVar4);
    FUN_14990b80e(param_1,&local_70,local_d8);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    iVar3 = local_68;
    if (1 < local_68) {
      local_d8[3] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      FUN_144a5dc74(local_b8);
      FUN_144a5dc74(local_a8);
      FUN_144a5dc74(local_98);
      local_80 = 0;
      iVar6 = local_68 + -1;
      if (local_68 == 0) {
        iVar6 = 0;
      }
      FUN_1402980a2(local_d8,local_70,iVar6);
      local_d8[2] = 0;
      FUN_140002266(local_f8,L"Achievement_%d_bIsHidden",iVar4);
      FUN_14990b80e(param_1,&local_e8);
      plVar7 = local_e8;
      if (local_e0 == 0) {
        plVar7 = (longlong *)&DAT_149dfb77a;
      }
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)plVar7 + lVar8);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)&DAT_149e06346 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149903d9f;
          }
          iVar6 = uVar5 - uVar9;
          goto LAB_149903b28;
        }
        if (uVar1 == 0) break;
LAB_149903d9f:
        lVar8 = lVar8 + 2;
      }
      iVar6 = 0;
LAB_149903b28:
      local_88 = iVar6 == 0;
      if (local_e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(local_108,L"Achievement_%d_Title",iVar4);
      FUN_14990b80e(param_1,local_f8,local_108);
      FUN_140233b1a(&local_e8,local_f8);
      FUN_140008f88(local_b8,&local_e8);
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_108[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(local_108,L"Achievement_%d_LockedDesc",iVar4);
      FUN_14990b80e(param_1,local_f8,local_108);
      FUN_140233b1a(&local_e8,local_f8);
      FUN_140008f88(local_a8,&local_e8);
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_108[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(local_108,L"Achievement_%d_UnlockedDesc",iVar4);
      FUN_14990b80e(param_1,local_f8,local_108);
      FUN_140233b1a(&local_e8,local_f8);
      FUN_140008f88(local_98,&local_e8);
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_108[0] != 0) {
        FUN_1400020a8();
      }
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_14990b9d8(param_2,iVar6);
      }
      FUN_14990b966((longlong)iVar6 * 0x60 + *param_2,local_d8);
      FUN_14990b8c2(local_d8);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    iVar6 = iVar4 + 1;
    if (iVar3 < 2) {
      if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
        return CONCAT31((int3)((uint)(iVar4 + 1) >> 8),iVar4 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 149903ea2 FUN_149903ea2 body=966 status=ok
// SIG undefined FUN_149903ea2(void)

void FUN_149903ea2(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *_Src;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar7 = FUN_14990396e();
  if (cVar7 == '\0') {
    *(undefined4 *)(*param_3 + 0x58) = 3;
    if (*param_4 != 0 && (int)param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
  }
  else {
    uStack_90 = *(longlong **)(param_2 + 0x10);
    if (uStack_90 == (longlong *)0x0) {
LAB_149903f80:
      local_98 = (longlong *)0x0;
      uStack_90 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      iVar9 = (int)uStack_90[1];
      do {
        if (iVar9 == 0) goto LAB_149903f80;
        LOCK();
        iVar6 = (int)uStack_90[1];
        bVar19 = iVar9 == iVar6;
        if (bVar19) {
          *(int *)(uStack_90 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar19);
      local_98 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(uStack_90 + 1) = (int)uStack_90[1] + 1;
      UNLOCK();
      bVar19 = false;
    }
    plVar10 = uStack_90;
    local_a8 = param_3;
    local_a0 = param_4;
    uVar8 = (**(code **)(*local_98 + 0x40))();
    iVar9 = FUN_14152c858(param_1 + 5,uVar8);
    plVar1 = uStack_90;
    if (iVar9 == -1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)iVar9 * 0x28 + param_1[5];
    }
    if (uStack_90 != (longlong *)0x0) {
      LOCK();
      plVar2 = uStack_90 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*uStack_90)(uStack_90);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar19) {
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (lVar11 == 0) {
      *(undefined4 *)(*local_a8 + 0x58) = 3;
      plVar10 = (longlong *)*local_a0;
      if (plVar10 == (longlong *)0x0 || (int)local_a0[1] == 0) goto LAB_149904223;
      lVar11 = *plVar10;
      uVar14 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar11 + 0x18);
      lVar17 = *local_a8;
      local_60 = lVar17 + 0x18;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      if (*(int *)(lVar17 + 0x30) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_80 = local_58;
      uVar14 = local_80;
      local_78 = local_50;
      local_74 = local_4c;
      uStack_90 = local_68;
      local_88 = local_60;
      local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_98 = (longlong *)(lVar17 + 8);
      if (local_80._4_4_ < *(int *)(local_60 + 0x18)) {
        iVar9 = local_80._4_4_;
        local_80 = uVar14;
        do {
          local_68 = (longlong *)0x0;
          uVar5 = *(uint *)(*local_98 + 8 + (longlong)iVar9 * 0x38);
          _Src = *(void **)(*local_98 + (longlong)iVar9 * 0x38);
          local_60 = CONCAT44(local_60._4_4_,uVar5);
          if ((longlong)(int)uVar5 == 0) {
            local_60 = (ulonglong)uVar5;
          }
          else {
            FUN_1446dd670(&local_68,uVar5,0);
            memcpy(local_68,_Src,(longlong)(int)uVar5 * 2);
          }
          if (0 < (int)uVar4) {
            uVar13 = 0;
LAB_14990411a:
            iVar9 = *(int *)(*(longlong *)(lVar11 + 0x10) + 8 + uVar13 * 0x20);
            if (iVar9 != (int)local_60) {
              if (iVar9 + (int)local_60 == 1) goto LAB_1499041ad;
              goto LAB_14990418c;
            }
            if (1 < (int)local_60) {
              lVar17 = 0;
              do {
                uVar15 = *(ushort *)
                          (*(longlong *)(uVar13 * 0x20 + *(longlong *)(lVar11 + 0x10)) + lVar17);
                uVar16 = (ulonglong)uVar15;
                uVar12 = *(ushort *)((longlong)local_68 + lVar17);
                if (uVar15 == uVar12) {
                  if (uVar15 == 0) break;
                }
                else {
                  if (0x7f < (uVar12 | uVar15)) goto LAB_1499041a5;
                  uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                  uVar18 = (ulonglong)uVar12;
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
                  if ((&DAT_149e05da0)[uVar16] != (&DAT_149e05da0)[uVar18]) goto LAB_1499041a5;
                }
                lVar17 = lVar17 + 2;
              } while( true );
            }
            goto LAB_1499041ad;
          }
LAB_1499041c1:
          if (local_68 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
          FUN_1449c0562(&uStack_90);
          iVar9 = local_80._4_4_;
          uVar14 = local_80;
        } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
      }
      local_80 = uVar14;
      *(undefined4 *)(*local_a8 + 0x58) = 2;
      plVar10 = (longlong *)*local_a0;
      if (plVar10 == (longlong *)0x0 || (int)local_a0[1] == 0) goto LAB_149904223;
      lVar11 = *plVar10;
      uVar14 = 1;
    }
    (**(code **)(lVar11 + 0x60))(plVar10,param_2,uVar14);
  }
LAB_149904223:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1499041a5:
  if (uVar15 == uVar12) {
LAB_1499041ad:
    (**(code **)(*param_1 + 0x50))(param_1,param_2);
    goto LAB_1499041c1;
  }
LAB_14990418c:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar4) goto LAB_1499041c1;
  goto LAB_14990411a;
}



// FUNCTION 14990428c FUN_14990428c body=790 status=ok
// SIG undefined FUN_14990428c(void)

void FUN_14990428c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  void *_Src;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar12 = FUN_14990396e();
  if (cVar12 == '\0') {
    if (*param_3 != 0 && (int)param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x28);
    plStack_60 = *(longlong **)(param_2 + 0x10);
    if (plStack_60 == (longlong *)0x0) {
LAB_149904354:
      local_68 = (longlong *)0x0;
      plStack_60 = (longlong *)0x0;
      bVar18 = true;
    }
    else {
      iVar14 = (int)plStack_60[1];
      do {
        if (iVar14 == 0) goto LAB_149904354;
        LOCK();
        iVar6 = (int)plStack_60[1];
        bVar18 = iVar14 == iVar6;
        if (bVar18) {
          *(int *)(plStack_60 + 1) = iVar14 + 1;
          iVar6 = iVar14;
        }
        iVar14 = iVar6;
        UNLOCK();
      } while (!bVar18);
      local_68 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
      bVar18 = false;
    }
    plVar2 = plStack_60;
    uVar13 = (**(code **)(*local_68 + 0x40))();
    iVar14 = FUN_14152c858(plVar1,uVar13,&local_68);
    plVar11 = plStack_60;
    if (iVar14 == -1) {
      bVar19 = true;
    }
    else {
      bVar19 = (longlong)iVar14 * 0x28 + *plVar1 == 0;
    }
    local_98 = plVar1;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar4 = (int *)((longlong)plVar11 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (!bVar18) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar4 = (int *)((longlong)plVar2 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (bVar19) {
      local_78 = 0;
      uStack_70 = 0;
      iVar14 = *(int *)(param_1 + 0xd0);
      local_a0 = param_2;
      local_90 = param_3;
      if (0 < (longlong)iVar14) {
        lVar16 = 0;
        do {
          uVar10 = uStack_70;
          lVar7 = *(longlong *)(param_1 + 200);
          lVar17 = (longlong)(int)uStack_70;
          uVar15 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar15);
          if (uStack_70._4_4_ < uVar15) {
            FUN_14666f9fc(&local_78,uVar10 & 0xffffffff);
          }
          lVar17 = lVar17 * 0x20;
          puVar3 = (undefined8 *)(local_78 + lVar17);
          *(undefined8 *)(local_78 + lVar17) = 0;
          iVar6 = *(int *)(lVar7 + 8 + lVar16);
          _Src = *(void **)(lVar7 + lVar16);
          *(int *)(local_78 + 8 + lVar17) = iVar6;
          if ((longlong)iVar6 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar3,iVar6,0);
            memcpy((void *)*puVar3,_Src,(longlong)iVar6 * 2);
          }
          puVar5 = (undefined4 *)(lVar7 + 0x10 + lVar16);
          uVar13 = puVar5[1];
          uVar8 = puVar5[2];
          uVar9 = puVar5[3];
          *(undefined4 *)(puVar3 + 2) = *puVar5;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uVar13;
          *(undefined4 *)(puVar3 + 3) = uVar8;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar9;
          lVar16 = lVar16 + 0x60;
        } while ((longlong)iVar14 * 0x60 != lVar16);
      }
      local_80 = *(longlong **)(local_a0 + 0x10);
      if (local_80 == (longlong *)0x0) {
        local_80 = (longlong *)0x0;
      }
      else {
        iVar14 = (int)local_80[1];
        do {
          if (iVar14 == 0) {
            local_80 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar6 = (int)local_80[1];
          bVar18 = iVar14 == iVar6;
          if (bVar18) {
            *(int *)(local_80 + 1) = iVar14 + 1;
            iVar6 = iVar14;
          }
          iVar14 = iVar6;
          UNLOCK();
        } while (!bVar18);
      }
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        local_88 = *(longlong *)(local_a0 + 8);
      }
      local_68 = &local_88;
      plStack_60 = &local_78;
      FUN_14613fb08(local_98,local_4c,&local_68,0);
      plVar1 = local_80;
      param_3 = local_90;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_140f5addd(local_78,uStack_70 & 0xffffffff);
      param_2 = local_a0;
      if (local_78 != 0) {
        FUN_1400020a8();
        param_2 = local_a0;
      }
    }
    plVar1 = (longlong *)*param_3;
    if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1499045c6 FUN_1499045c6 body=270 status=ok
// SIG undefined FUN_1499045c6(void)

void FUN_1499045c6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_14990396e();
  if (cVar3 == '\0') {
    if (*param_3 != 0 && (int)param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) &&
       (iVar1 = *(int *)(param_1 + 0xd0), 0 < (longlong)iVar1)) {
      lVar4 = 0;
      do {
        local_58 = *(longlong *)(param_1 + 200) + lVar4 + 0x20;
        local_60 = *(longlong *)(param_1 + 200) + lVar4;
        FUN_141263be8(param_1 + 0x78,local_4c,&local_60,0);
        lVar4 = lVar4 + 0x60;
      } while ((longlong)iVar1 * 0x60 != lVar4);
    }
    plVar2 = (longlong *)*param_3;
    if (plVar2 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499046f4 FUN_1499046f4 body=509 status=ok
// SIG undefined FUN_1499046f4(void)

bool FUN_1499046f4(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar7 = FUN_14990396e();
  bVar18 = true;
  if (cVar7 != '\0') {
    plStack_50 = *(longlong **)(param_2 + 0x10);
    if (plStack_50 == (longlong *)0x0) {
LAB_14990476f:
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
      bVar19 = true;
    }
    else {
      iVar9 = (int)plStack_50[1];
      do {
        if (iVar9 == 0) goto LAB_14990476f;
        LOCK();
        iVar5 = (int)plStack_50[1];
        bVar19 = iVar9 == iVar5;
        if (bVar19) {
          *(int *)(plStack_50 + 1) = iVar9 + 1;
          iVar5 = iVar9;
        }
        iVar9 = iVar5;
        UNLOCK();
      } while (!bVar19);
      local_58 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      bVar19 = false;
    }
    plVar4 = plStack_50;
    uVar8 = (**(code **)(*local_58 + 0x40))();
    iVar9 = FUN_14152c858((longlong *)(param_1 + 0x28),uVar8);
    plVar3 = plStack_50;
    if (iVar9 == -1) {
      lVar13 = 0;
    }
    else {
      lVar13 = (longlong)iVar9 * 0x28 + *(longlong *)(param_1 + 0x28);
    }
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar19) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar13 != 0) {
      uVar10 = (ulonglong)*(int *)(lVar13 + 0x18);
      if (0 < (longlong)uVar10) {
        iVar9 = (int)param_3[1];
        uVar12 = 0;
        bVar18 = false;
LAB_149904823:
        plVar4 = (longlong *)(*(longlong *)(lVar13 + 0x10) + uVar12 * 0x20);
        iVar5 = *(int *)(*(longlong *)(lVar13 + 0x10) + 8 + uVar12 * 0x20);
        if (iVar5 != iVar9) {
          if (iVar5 + iVar9 == 1) goto LAB_1499048ae;
          goto LAB_14990488b;
        }
        if (1 < iVar9) {
          lVar14 = 0;
          do {
            uVar16 = *(ushort *)(*plVar4 + lVar14);
            uVar17 = (ulonglong)uVar16;
            uVar11 = *(ushort *)(*param_3 + lVar14);
            if (uVar16 == uVar11) {
              if (uVar16 == 0) break;
            }
            else {
              if (0x7f < (uVar11 | uVar16)) goto LAB_1499048a6;
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              uVar15 = (ulonglong)uVar11;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar17] != (&DAT_149e05da0)[uVar15]) goto LAB_1499048a6;
            }
            lVar14 = lVar14 + 2;
          } while( true );
        }
        goto LAB_1499048ae;
      }
      bVar18 = true;
    }
  }
LAB_1499048c8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar18;
LAB_1499048a6:
  if (uVar16 == uVar11) {
LAB_1499048ae:
    FUN_144a787a6(param_4,plVar4);
    uVar8 = *(undefined4 *)((longlong)plVar4 + 0x14);
    lVar13 = plVar4[3];
    uVar6 = *(undefined4 *)((longlong)plVar4 + 0x1c);
    *(int *)(param_4 + 0x10) = (int)plVar4[2];
    *(undefined4 *)(param_4 + 0x14) = uVar8;
    *(int *)(param_4 + 0x18) = (int)lVar13;
    *(undefined4 *)(param_4 + 0x1c) = uVar6;
    goto LAB_1499048c8;
  }
LAB_14990488b:
  uVar12 = uVar12 + 1;
  bVar18 = uVar10 <= uVar12;
  if (uVar12 == uVar10) goto LAB_1499048c8;
  goto LAB_149904823;
}



// FUNCTION 1499048f2 FUN_1499048f2 body=311 status=ok
// SIG undefined FUN_1499048f2(void)

undefined8 FUN_1499048f2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_14990396e();
  uVar9 = 1;
  if (cVar6 != '\0') {
    plStack_40 = *(longlong **)(param_2 + 0x10);
    if (plStack_40 == (longlong *)0x0) {
LAB_149904961:
      local_48 = (longlong *)0x0;
      plStack_40 = (longlong *)0x0;
      bVar11 = true;
    }
    else {
      iVar8 = (int)plStack_40[1];
      do {
        if (iVar8 == 0) goto LAB_149904961;
        LOCK();
        iVar5 = (int)plStack_40[1];
        bVar11 = iVar8 == iVar5;
        if (bVar11) {
          *(int *)(plStack_40 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
      } while (!bVar11);
      local_48 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
      bVar11 = false;
    }
    plVar4 = plStack_40;
    uVar7 = (**(code **)(*local_48 + 0x40))();
    iVar8 = FUN_14152c858((longlong *)(param_1 + 0x28),uVar7,&local_48);
    plVar3 = plStack_40;
    if (iVar8 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar8 * 0x28 + *(longlong *)(param_1 + 0x28);
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (!bVar11) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar10 != 0) {
      FUN_140f5ad80(param_3,lVar10 + 0x10);
      uVar9 = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149904a2a FUN_149904a2a body=148 status=ok
// SIG undefined FUN_149904a2a(void)

undefined8 FUN_149904a2a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  cVar2 = FUN_14990396e();
  uVar7 = 1;
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac))) {
    iVar4 = *(int *)(param_2 + 1);
    if (iVar4 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    iVar1 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    uVar3 = FUN_144a49b4a(iVar1,puVar5);
    iVar4 = FUN_141263ed8((longlong *)(param_1 + 0x78),uVar3,param_2);
    if ((iVar4 != -1) &&
       (lVar6 = (longlong)iVar4 * 0x58 + *(longlong *)(param_1 + 0x78), lVar6 != -0x10 && lVar6 != 0
       )) {
      FUN_148fab174(param_3);
      uVar7 = 0;
    }
  }
  return uVar7;
}



// FUNCTION 149904ac0 FUN_149904ac0 body=290 status=ok
// SIG undefined FUN_149904ac0(void)

undefined8
FUN_149904ac0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  local_48 = 0;
  local_40 = 0;
  local_58 = param_1;
  local_50 = param_2;
  FUN_14990ce40(&local_48,param_5);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  local_30 = 4;
  *local_38 = &PTR_LAB_149e020b0;
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
  *local_38 = &PTR_FUN_14bf02850;
  local_38[3] = local_58;
  *(undefined4 *)(local_38 + 4) = local_50;
  local_38[5] = 0;
  *(undefined4 *)(local_38 + 6) = 0;
  FUN_14990ce40(local_38 + 5,&local_48);
  FUN_145c398c4(uVar1,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(&local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149904be4 FUN_149904be4 body=498 status=ok
// SIG undefined FUN_149904be4(void)

void FUN_149904be4(longlong param_1,undefined4 param_2,undefined1 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_4 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_149904c21:
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_149904c21;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    uVar4 = *(undefined8 *)(param_4 + 8);
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
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar10 = false;
    local_88 = uVar4;
    plStack_80 = plVar3;
  }
  plVar3 = plStack_80;
  local_70 = 0;
  local_68 = 0;
  local_78 = param_2;
  local_74 = param_3;
  FUN_14990ce40(&local_70,param_6);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  *local_58 = &PTR_LAB_149e020b0;
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
  local_58[2] = lVar8;
  *local_58 = &PTR_FUN_14bf029a0;
  local_58[3] = local_88;
  local_58[4] = plStack_80;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  *(undefined1 *)((longlong)local_58 + 0x2c) = local_74;
  *(undefined4 *)(local_58 + 5) = local_78;
  local_58[6] = local_70;
  local_70 = 0;
  *(undefined4 *)(local_58 + 7) = local_68;
  local_68 = 0;
  FUN_145c398c4(uVar9,&local_58);
  FUN_1449db362(&local_58);
  FUN_1446b4cdc(&local_88);
  if (!bVar10) {
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
  FUN_1449db362(param_6);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149904e04 FUN_149904e04 body=130 status=ok
// SIG undefined FUN_149904e04(void)

bool FUN_149904e04(longlong param_1,undefined8 *param_2,undefined8 param_3)

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
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x18),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x18);
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    FUN_144a787a6(param_3,lVar5);
  }
  return lVar5 != 0;
}



// FUNCTION 149904e86 FUN_149904e86 body=130 status=ok
// SIG undefined FUN_149904e86(void)

bool FUN_149904e86(longlong param_1,undefined8 *param_2,undefined8 param_3)

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
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x68),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x68);
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    FUN_144a787a6(param_3,lVar5);
  }
  return lVar5 != 0;
}



// FUNCTION 149904f08 FUN_149904f08 body=299 status=ok
// SIG undefined FUN_149904f08(void)

undefined8 FUN_149904f08(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)(param_1 + 0x68);
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_1457511aa(plVar8,uVar3,param_2);
  if (iVar4 != -1) {
    lVar1 = *plVar8 + (longlong)iVar4 * 0x28;
    if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0 && lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + 0x18);
      if (iVar4 == (int)param_3[1]) {
        if (1 < iVar4) {
          lVar7 = 0;
          while( true ) {
            uVar9 = *(ushort *)(*(longlong *)(lVar1 + 0x10) + lVar7);
            uVar10 = (ulonglong)uVar9;
            uVar11 = *(ushort *)(*param_3 + lVar7);
            if (uVar9 != uVar11) break;
            if (uVar9 == 0) goto LAB_14990502d;
LAB_149904ff0:
            lVar7 = lVar7 + 2;
          }
          if ((uVar11 | uVar9) < 0x80) {
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar12 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_149904ff0;
          }
          if (uVar9 != uVar11) goto LAB_149904f80;
        }
      }
      else if ((int)param_3[1] + iVar4 != 1) goto LAB_149904f80;
LAB_14990502d:
      uVar5 = 0;
      goto LAB_149904f9e;
    }
  }
LAB_149904f80:
  local_38 = param_2;
  local_30 = param_3;
  FUN_140ac5c08(plVar8,local_24,&local_38,0);
  uVar5 = 1;
LAB_149904f9e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 149905034 FUN_149905034 body=689 status=ok
// SIG undefined FUN_149905034(void)

undefined8 FUN_149905034(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_78 [2];
  longlong *local_68;
  longlong *plStack_60;
  undefined1 local_49;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  FUN_1446f470e(&local_68,L"WINDOWS",1);
  plVar4 = (longlong *)FUN_140272950(&local_68);
  cVar2 = (**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  if (cVar2 == '\0') {
    FUN_1446f470e(local_78,L"WINDOWS",1);
    plVar4 = (longlong *)FUN_140272950(local_78);
    uVar5 = FUN_144a82cde();
    (**(code **)(*plVar4 + 0xe0))(plVar4,&local_68,uVar5,&local_49);
    plVar7 = plStack_60;
    plVar4 = local_68;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_60 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_68,0);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_68;
    plStack_40 = plStack_60;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  cVar2 = DAT_14cc32638;
  if (DAT_14cc32639 == '\x01') {
    FUN_140002266(&local_68,&DAT_14bf00840,param_2);
    plVar4 = local_68;
    local_88 = (longlong *)&DAT_149dfb77a;
    if ((int)plStack_60 != 0) {
      local_88 = local_68;
    }
  }
  else {
    plVar4 = (longlong *)0x0;
    local_88 = (longlong *)&DAT_149dfb77a;
  }
  cVar3 = FUN_146119f02();
  if ((cVar3 == '\0') && (cVar2 == '\0')) {
    FUN_1412e3d1e(local_78);
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
    FUN_1407c869a(local_78,&local_68,0);
    plVar7 = (longlong *)&DAT_149dfb77a;
    if ((int)plStack_60 != 0) {
      plVar7 = local_68;
    }
    plVar6 = (longlong *)&DAT_149dfb77a;
    if ((int)plStack_40 != 0) {
      plVar6 = local_48;
    }
    FUN_140002266(param_1,L"%s-%s%s",plVar6,plVar7);
    local_78[0] = local_68;
  }
  else {
    FUN_145fce9ea(local_78);
    FUN_1467ac9bc(local_78,&local_68);
    plVar7 = (longlong *)&DAT_149dfb77a;
    if ((int)plStack_60 != 0) {
      plVar7 = local_68;
    }
    plVar6 = (longlong *)&DAT_149dfb77a;
    if ((int)plStack_40 != 0) {
      plVar6 = local_48;
    }
    FUN_140002266(param_1,L"%s-%s%s",plVar6,plVar7);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_1400020a8(plVar4);
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1499052e6 FUN_1499052e6 body=219 status=ok
// SIG undefined FUN_1499052e6(void)

undefined4 FUN_1499052e6(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14b438870;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14bf02a10;
  local_38[3] = param_1;
  uVar2 = FUN_1446b4d5c(param_1,param_2,param_3,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499053c2 FUN_1499053c2 body=245 status=ok
// SIG undefined FUN_1499053c2(void)

longlong * FUN_1499053c2(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x30,0x10);
  FUN_14990cdba(lVar2,param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bf01f70;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_14990548f;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_14990548f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_14990548f:
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



// FUNCTION 1499054b8 FUN_1499054b8 body=225 status=ok
// SIG undefined FUN_1499054b8(void)

undefined8 * FUN_1499054b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bf01e70;
  FUN_149905b18(&local_28);
  param_1[1] = local_28;
  param_1[2] = local_20;
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
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
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
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990559a FUN_14990559a body=103 status=ok
// SIG undefined FUN_14990559a(void)

void FUN_14990559a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc32700) {
    FUN_144b3d300(&DAT_14cc32700);
    if (DAT_14cc32700 == -1) {
      FUN_14990a2c4(&DAT_14cc326f0);
      atexit(FUN_1446b8adf);
      _Init_thread_footer(&DAT_14cc32700);
      return;
    }
  }
  return;
}



// FUNCTION 149905602 FUN_149905602 body=475 status=ok
// SIG undefined FUN_149905602(void)

undefined8 * FUN_149905602(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  plStack_40 = *(longlong **)(param_3 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_14990563b:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar7 = (int)plStack_40[1];
    do {
      if (iVar7 == 0) goto LAB_14990563b;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plStack_40 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    local_48 = *(longlong **)(param_3 + 8);
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar8 = plStack_40;
  uVar6 = (**(code **)(*local_48 + 0x40))();
  iVar7 = FUN_14990d5fc((longlong *)(param_1 + 0x1e0),uVar6,&local_48);
  plVar4 = plStack_40;
  if (iVar7 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x1e0);
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (lVar9 == 0) goto LAB_1499057bb;
  uVar3 = *(undefined8 *)(lVar9 + 0x10);
  plVar8 = *(longlong **)(lVar9 + 0x18);
  if (plVar8 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar8 = (longlong *)param_2[1];
    if (plVar8 == (longlong *)0x0) goto LAB_1499057bb;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar4 = (longlong *)param_2[1];
    if (plVar8 == plVar4) {
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) goto LAB_1499057bb;
        goto LAB_14990578c;
      }
      goto LAB_1499057bb;
    }
    param_2[1] = plVar8;
    plVar8 = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_1499057bb;
  }
  LOCK();
  plVar4 = plVar8 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
LAB_14990578c:
      (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
LAB_1499057bb:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1499057e0 FUN_1499057e0 body=320 status=ok
// SIG undefined FUN_1499057e0(void)

longlong * FUN_1499057e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = param_1 + 0x1f0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = (longlong *)(param_1 + 0x1e0);
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar2 = *(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x28);
      lVar3 = *(longlong *)(*local_78 + 0x18 + (longlong)iStack_5c * 0x28);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1411a7576(param_2,iVar1);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
      *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499059ae FUN_1499059ae body=205 status=ok
// SIG undefined FUN_1499059ae(void)

undefined8 * FUN_1499059ae(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < param_4 && param_3 != 0) {
    FUN_14006620a(local_30,param_3,param_4);
    FUN_1499053c2(&local_40,local_30);
    *param_2 = local_40;
    param_2[1] = local_38;
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
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149905a82 FUN_149905a82 body=147 status=ok
// SIG undefined FUN_149905a82(void)

undefined8 * FUN_149905a82(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_149905b18(&local_28,param_3);
  *param_2 = local_28;
  param_2[1] = local_20;
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
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



// FUNCTION 149905b18 FUN_149905b18 body=245 status=ok
// SIG undefined FUN_149905b18(void)

longlong * FUN_149905b18(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x30,0x10);
  FUN_14990cdba(lVar2,param_2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bf01f70;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_149905be5;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_149905be5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_149905be5:
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



// FUNCTION 149905c0e FUN_149905c0e body=140 status=ok
// SIG undefined FUN_149905c0e(void)

undefined4 FUN_149905c0e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x110))(param_1,&local_28,param_2);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x130))(param_1);
  }
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



// FUNCTION 149905c9c FUN_149905c9c body=353 status=ok
// SIG undefined FUN_149905c9c(void)

undefined8 FUN_149905c9c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  wchar_t *_Str;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  wchar_t *local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x100))(param_1,&local_38,param_2);
  uVar6 = 0;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 8))(local_38,&local_48);
    cVar4 = (**(code **)(*(longlong *)local_48 + 0x28))();
    plVar3 = (longlong *)CONCAT44(uStack_3c,local_40);
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
    if ((cVar4 != '\0') && (uVar6 = 1, DAT_14cc3263c == '\0')) {
      if (DAT_14cc3263d == '\x01') {
        FUN_140056680(&local_48,&DAT_149e25dfc);
        FUN_140056680(local_58,L"null:logincount");
        (**(code **)(*local_38 + 0x20))(local_38,local_58,&local_48);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        _Str = local_48;
        if (local_40 == 0) {
          _Str = L"";
        }
        iVar5 = _wtoi(_Str);
        if (local_48 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar5 < 2) goto LAB_149905d23;
      }
      uVar6 = 2;
    }
  }
LAB_149905d23:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 149905dfe FUN_149905dfe body=146 status=ok
// SIG undefined FUN_149905dfe(void)

undefined8 FUN_149905dfe(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x110))(param_1,&local_28);
  if (local_28 == (longlong *)0x0) {
    FUN_140056680(param_2,L"NullUser");
  }
  else {
    (**(code **)(*local_28 + 0x30))(local_28,param_2);
  }
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
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149905e92 FUN_149905e92 body=26 status=ok
// SIG undefined FUN_149905e92(void)

undefined8 FUN_149905e92(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  (**(code **)(*param_3 + 0x30))(param_3);
  return param_2;
}



// FUNCTION 149905eac FUN_149905eac body=248 status=ok
// SIG undefined FUN_149905eac(void)

undefined8 * FUN_149905eac(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x110))(param_1,&local_30);
  if (local_30 != 0) {
    (**(code **)(*param_1 + 0x100))(param_1,&local_40);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x30))(local_40,param_2);
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
      goto LAB_149905f5c;
    }
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
  *param_2 = 0;
  param_2[1] = 0;
LAB_149905f5c:
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149905fa6 FUN_149905fa6 body=383 status=ok
// SIG undefined FUN_149905fa6(void)

longlong * FUN_149905fa6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1460d08f8();
  *param_1 = (longlong)&PTR_FUN_14bf00950;
  param_1[0x31] = param_2;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (DAT_14c767fd0 == '\x01') {
    FUN_140056680(local_78,L"DummyId");
    FUN_140056680(local_88,L"DummyUser");
    FUN_140056680(local_98,L"DummyType");
    local_a8 = 0;
    FUN_1489ba396(local_68,local_98,local_88,local_78);
    (**(code **)(*param_1 + 0x88))(param_1,0,local_68);
    FUN_1418b4fc2(local_68);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149906126 FUN_149906126 body=114 status=ok
// SIG undefined FUN_149906126(void)

void FUN_149906126(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bf00950;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_14990bb9e(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_14990bd6a(param_1 + 0x32);
  FUN_1458580d0(param_1);
  return;
}



// FUNCTION 149906198 FUN_149906198 body=126 status=ok
// SIG undefined FUN_149906198(void)

void FUN_149906198(undefined8 param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_4;
  if (((param_3 == 1) && (DAT_14cc3263c != '\0')) &&
     (plVar1 != (longlong *)0x0 && (int)param_4[1] != 0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,1,0x400);
    plVar1 = (longlong *)*param_4;
  }
  if (plVar1 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000149906213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_3,0);
  return;
}



// FUNCTION 149906216 FUN_149906216 body=234 status=ok
// SIG undefined FUN_149906216(void)

undefined4 * FUN_149906216(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = 0;
  do {
    (**(code **)(*param_1 + 0x110))(param_1,&local_48,iVar5);
    if (local_48 != (undefined8 *)0x0) {
      cVar4 = (**(code **)*local_48)(local_48,param_3);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x180))(param_1,param_2,iVar5);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        goto LAB_14990629f;
      }
    }
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  *param_2 = 0xffffffff;
LAB_14990629f:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149906302 FUN_149906302 body=32 status=ok
// SIG undefined FUN_149906302(void)

undefined8 FUN_149906302(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 149906322 FUN_149906322 body=865 status=ok
// SIG undefined FUN_149906322(void)

undefined8 FUN_149906322(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  undefined1 local_c0 [32];
  undefined4 local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(*param_3 + 0x40) = 3;
  lVar14 = *param_3;
  local_f8 = param_1;
  FUN_148a44753(*(undefined8 *)(lVar14 + 0x30),*(undefined4 *)(lVar14 + 0x38));
  *(undefined4 *)(lVar14 + 0x38) = 0;
  if (*(int *)(lVar14 + 0x3c) != 0) {
    FUN_148fb9d4e(lVar14 + 0x30,0);
  }
  local_108 = (ulonglong)*(uint *)(param_2 + 1);
  if (local_108 != 0) {
    *(undefined4 *)(*param_3 + 0x40) = 2;
    plVar3 = local_f8 + 8;
    puVar2 = (undefined8 *)*param_3;
    iVar9 = *(int *)(puVar2 + 1);
    if (iVar9 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar2;
    }
    iVar6 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar6 = 0;
    }
    uVar8 = FUN_144a49b4a(iVar6,puVar10);
    iVar9 = FUN_14990e136(plVar3,uVar8,puVar2);
    local_100 = param_3;
    if (iVar9 != -1) {
      lVar14 = *plVar3;
      if ((((longlong)iVar9 * 0x60 + lVar14 + 0x10U & 0xffffffffffffffef) != 0) &&
         (lVar14 = lVar14 + (longlong)iVar9 * 0x60, 0 < *(int *)(lVar14 + 0x48))) {
        lVar12 = local_108 << 4;
        lVar16 = 0;
        local_e8 = lVar14;
        do {
          local_e0 = lVar16 * 0x78;
          lVar17 = *(longlong *)(*(longlong *)(lVar14 + 0x40) + 0x10 + local_e0);
          local_d8 = *(longlong **)(*(longlong *)(lVar14 + 0x40) + 0x18 + local_e0);
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
            UNLOCK();
          }
          if (0 < (int)local_108) {
            lVar13 = 0;
            do {
              puVar2 = *(undefined8 **)(*param_2 + lVar13);
              plVar3 = *(longlong **)(*param_2 + 8 + lVar13);
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                UNLOCK();
              }
              if (((puVar2 != (undefined8 *)0x0) && (lVar17 != 0)) &&
                 (cVar7 = (**(code **)*puVar2)(puVar2,lVar17), cVar7 != '\0')) {
                lVar4 = *param_3;
                plVar11 = (longlong *)(lVar4 + 0x30);
                lVar14 = *(longlong *)(lVar14 + 0x40) + local_e0;
                iVar9 = *(int *)(lVar4 + 0x38);
                *(uint *)(lVar4 + 0x38) = iVar9 + 1U;
                if (*(uint *)(lVar4 + 0x3c) < iVar9 + 1U) {
                  local_f0 = plVar11;
                  FUN_148fb5bce(plVar11,iVar9);
                  plVar11 = local_f0;
                }
                FUN_14990e082((longlong)iVar9 * 0x78 + *plVar11,lVar14);
                param_3 = local_100;
                lVar14 = local_e8;
              }
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar3 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
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
              lVar13 = lVar13 + 0x10;
            } while (lVar12 != lVar13);
          }
          plVar3 = local_d8;
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_d8 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_d8)(local_d8);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar14 + 0x48));
      }
    }
    if (0 < (int)local_108) {
      uVar15 = 0;
      do {
        lVar14 = *param_3;
        lVar12 = uVar15 * 0x10;
        if (0 < *(int *)(lVar14 + 0x38)) {
          uVar5 = *(undefined8 *)(*param_2 + lVar12);
          lVar16 = 0;
          lVar17 = 0;
          do {
            puVar2 = *(undefined8 **)(*(longlong *)(lVar14 + 0x30) + 0x10 + lVar16);
            cVar7 = (**(code **)*puVar2)(puVar2,uVar5);
            if (cVar7 != '\0') {
              if (lVar16 + *(longlong *)(lVar14 + 0x30) != 0) goto LAB_14990666c;
              break;
            }
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + 0x78;
          } while (lVar17 < *(int *)(lVar14 + 0x38));
        }
        lVar14 = *param_2;
        plVar3 = *(longlong **)(lVar14 + lVar12);
        (**(code **)(*plVar3 + 0x30))(plVar3,local_d0);
        FUN_148fb5b34(local_c0,local_d0,lVar14 + lVar12);
        if (local_d0[0] != 0) {
          FUN_1400020a8();
        }
        local_a0 = 0xffffffff;
        lVar14 = *local_100;
        iVar9 = *(int *)(lVar14 + 0x38);
        *(uint *)(lVar14 + 0x38) = iVar9 + 1U;
        if (*(uint *)(lVar14 + 0x3c) < iVar9 + 1U) {
          FUN_148fb5bce((longlong *)(lVar14 + 0x30),iVar9);
        }
        FUN_14990e082((longlong)iVar9 * 0x78 + *(longlong *)(lVar14 + 0x30),local_c0);
        FUN_148a4477a(local_c0);
LAB_14990666c:
        uVar15 = uVar15 + 1;
        param_3 = local_100;
      } while (uVar15 != local_108);
    }
  }
  (**(code **)(*local_f8 + 0x40))(local_f8,*(int *)(*param_3 + 0x40) == 2);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 149906684 FUN_149906684 body=705 status=ok
// SIG undefined FUN_149906684(void)

undefined4 FUN_149906684(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*(longlong *)param_1[7] + 0x80))((longlong *)param_1[7],&local_68);
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x110))(local_68,&local_78,param_2);
    plVar2 = plStack_70;
    lVar13 = local_78;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (lVar13 != 0) {
      (**(code **)(*local_68 + 0x110))(local_68,&local_78,param_2);
      uVar7 = uStack_50;
      plVar2 = plStack_70;
      lVar13 = local_78;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      lVar12 = (longlong)(int)uStack_50;
      uVar8 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
      if (uStack_50._4_4_ < uVar8) {
        FUN_1413eac7e(&local_58,uVar7 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar12 * 0x10) = lVar13;
      *(longlong **)(local_58 + 8 + lVar12 * 0x10) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  puVar4 = (undefined8 *)*param_3;
  iVar10 = *(int *)(puVar4 + 1);
  if (iVar10 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*puVar4;
  }
  iVar6 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar6 = 0;
  }
  uVar9 = FUN_144a49b4a(iVar6,puVar11);
  iVar10 = FUN_14990e136(param_1 + 8,uVar9,puVar4);
  if (iVar10 != -1) {
    lVar13 = param_1[8];
    if ((lVar13 + (longlong)iVar10 * 0x60 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar13 = lVar13 + (longlong)iVar10 * 0x60;
      iVar10 = *(int *)(lVar13 + 0x48);
      if (0 < iVar10) {
        lVar14 = 0x18;
        lVar12 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar13 + 0x40) + -8 + lVar14);
          if (lVar5 != 0) {
            plStack_70 = *(longlong **)(*(longlong *)(lVar13 + 0x40) + lVar14);
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            local_78 = lVar5;
            FUN_14662f1ea(&local_58,&local_78);
            plVar2 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_70 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_70)(plStack_70);
                LOCK();
                piVar3 = (int *)((longlong)plVar2 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                }
              }
            }
            iVar10 = *(int *)(lVar13 + 0x48);
          }
          lVar12 = lVar12 + 1;
          lVar14 = lVar14 + 0x78;
        } while (lVar12 < iVar10);
      }
    }
  }
  uVar9 = (**(code **)(*param_1 + 8))(param_1,&local_58,param_3);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)local_60 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  FUN_14127b1cd(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149906948 FUN_149906948 body=637 status=ok
// SIG undefined FUN_149906948(void)

undefined8 FUN_149906948(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  char *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar5 = (ulonglong)*(int *)(param_4 + 0x70);
  local_b0 = uVar5;
  local_a8 = param_1;
  local_a0 = param_3;
  if (0 < (longlong)uVar5) {
    local_b8 = (longlong *)(param_4 + 8);
    local_c0 = (char *)(param_4 + 0x18);
    uVar13 = 0;
    local_c8 = param_4;
    do {
      lVar1 = local_c8;
      uVar6 = FUN_149906bc6(local_a8,uVar13 * 0x10 + *(longlong *)(local_c8 + 0x68));
      lVar7 = FUN_149906cf6(uVar6,local_a0);
      local_70 = 0x100000000;
      local_68 = local_c0;
      local_60 = 0xffffffff;
      local_58 = 0;
      if (*(int *)(lVar1 + 0x30) != 0) {
        FUN_1449c0562(&local_70);
      }
      local_80 = local_60;
      uVar6 = local_80;
      local_78 = local_58;
      local_74 = local_54;
      local_90 = local_70;
      local_88 = local_68;
      local_98 = local_b8;
      local_80._4_4_ = (uint)((ulonglong)local_60 >> 0x20);
      uVar5 = (ulonglong)local_80._4_4_;
      bVar2 = (int)local_80._4_4_ < *(int *)(local_68 + 0x18);
      local_80 = uVar6;
      if (bVar2) {
        plVar14 = (longlong *)(lVar7 + 0x28);
        do {
          lVar1 = *local_98;
          lVar7 = (longlong)(int)uVar5 * 0x38;
          iVar4 = *(int *)(lVar1 + 8 + lVar7);
          puVar9 = &DAT_149dfb77a;
          if (iVar4 != 0) {
            puVar9 = *(undefined2 **)(lVar1 + lVar7);
          }
          pcVar10 = (char *)(lVar1 + lVar7 + 0x10);
          iVar8 = iVar4 + -1;
          if (iVar4 == 0) {
            iVar8 = 0;
          }
          uVar3 = FUN_144a49b4a(iVar8,puVar9);
          iVar4 = FUN_140dfa800(plVar14,uVar3,lVar1 + lVar7);
          if ((iVar4 == -1) ||
             (lVar11 = (longlong)iVar4 * 0x38 + *plVar14, pcVar12 = (char *)(lVar11 + 0x10),
             pcVar12 == (char *)0x0 || lVar11 == 0)) {
            local_70 = lVar1 + lVar7;
            local_68 = pcVar10;
            FUN_140dfa58e(plVar14,&local_4c,&local_70,0);
            goto LAB_149906af7;
          }
          if ((*pcVar12 == '\x01') && (*pcVar10 == '\x01')) {
            FUN_143e6b7be(pcVar10,&local_70);
            FUN_143e6b7be(pcVar12,&local_4c);
            if (*(int *)(local_c8 + 0x58) == 1) {
              if ((int)local_70 < local_4c) goto LAB_149906b73;
            }
            else if ((*(int *)(local_c8 + 0x58) != 2) || (local_4c < (int)local_70))
            goto LAB_149906b73;
          }
          else {
LAB_149906b73:
            FUN_1489b74b6(pcVar12,pcVar10);
          }
LAB_149906af7:
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
          FUN_1449c0562(&local_90);
          uVar5 = (ulonglong)local_80._4_4_;
        } while ((int)local_80._4_4_ < *(int *)(local_88 + 0x18));
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_b0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 149906bc6 FUN_149906bc6 body=303 status=ok
// SIG undefined FUN_149906bc6(void)

longlong FUN_149906bc6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = (longlong *)(param_1 + 0x40);
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar6);
  iVar3 = FUN_14990e136(plVar8,uVar2,param_2);
  if ((iVar3 == -1) || (((longlong)iVar3 * 0x60 + *plVar8 + 0x10U & 0xffffffffffffffef) == 0)) {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_48 = 0;
    FUN_144a787a6(&local_88,param_2);
    local_38 = param_2;
    local_30 = &local_88;
    FUN_14990e206(plVar8,local_24);
    FUN_148a446f0(&local_88);
  }
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar5 = uVar7;
  }
  uVar2 = FUN_144a49b4a(uVar5,puVar6);
  iVar3 = FUN_14990e136(plVar8,uVar2,param_2);
  if (iVar3 != -1) {
    uVar7 = (longlong)iVar3 * 0x60 + *plVar8;
  }
  lVar4 = uVar7 + 0x10;
  if (uVar7 == 0) {
    lVar4 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149906cf6 FUN_149906cf6 body=451 status=ok
// SIG undefined FUN_149906cf6(void)

longlong FUN_149906cf6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [40];
  longlong local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0 [32];
  undefined4 local_90;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      puVar6 = *(undefined8 **)(*plVar1 + 0x10 + lVar8);
      cVar7 = (**(code **)*puVar6)(puVar6,param_2);
      if (cVar7 != '\0') {
        if (lVar8 + *plVar1 != 0) goto LAB_149906e4c;
        break;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x78;
    } while (lVar9 < *(int *)(param_1 + 0x38));
  }
  FUN_14990bef6(&local_d0,param_2);
  local_c0 = local_d0;
  local_b8 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_2 + 0x30))(param_2,local_e0);
  FUN_148fb5b34(local_b0,local_e0,&local_c0);
  if (local_e0[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
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
      piVar3 = (int *)((longlong)local_c8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
    }
  }
  local_90 = 0xffffffff;
  iVar5 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar5 + 1U) {
    FUN_148fb5bce(plVar1,iVar5);
  }
  FUN_14990e082((longlong)iVar5 * 0x78 + *plVar1,local_b0);
  FUN_148a4477a(local_b0);
LAB_149906e4c:
  if (*(int *)(param_1 + 0x38) < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar10 = 0;
    lVar9 = 0;
    do {
      puVar6 = *(undefined8 **)(*plVar1 + 0x10 + lVar10);
      cVar7 = (**(code **)*puVar6)(puVar6,param_2);
      if (cVar7 != '\0') {
        lVar8 = lVar10 + *plVar1;
        break;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x78;
    } while (lVar9 < *(int *)(param_1 + 0x38));
  }
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 149906eba FUN_149906eba body=20 status=ok
// SIG undefined FUN_149906eba(void)

undefined8 FUN_149906eba(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  return 1;
}



// FUNCTION 149906ed2 FUN_149906ed2 body=401 status=ok
// SIG undefined FUN_149906ed2(void)

void FUN_149906ed2(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14bf00b30;
  plVar4 = param_1 + 6;
  puVar1 = param_1 + 8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  local_58 = puVar1;
  if (*(int *)(param_1 + 0xb) != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0xb);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar4;
  if ((iStack_4c != iVar5) || (local_58 != puVar1)) {
    do {
      lVar3 = *local_88;
      lVar6 = (longlong)iStack_6c;
      FUN_1401cb356();
      local_98 = *(undefined8 *)(lVar3 + 8 + lVar6 * 0x20);
      local_90 = *(longlong *)(lVar3 + 0x10 + lVar6 * 0x20);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0xc) = *(int *)(local_90 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_98);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar4 || (local_78 != puVar1 || iStack_6c != iVar5));
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14990c09e(plVar4);
  *param_1 = &PTR_LAB_14bf01f90;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149907064 FUN_149907064 body=588 status=ok
// SIG undefined FUN_149907064(void)

void FUN_149907064(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int *local_98;
  undefined1 *local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  int local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar3 + 1;
  local_44 = iVar3;
  uVar5 = FUN_1401cb356();
  local_90 = (undefined1 *)0x0;
  local_88 = *(int *)(param_2 + 1);
  lVar7 = (longlong)local_88;
  _Src = (void *)*param_2;
  local_98 = (int *)param_1;
  if (lVar7 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_88,0);
    memcpy(local_90,_Src,lVar7 * 2);
  }
  local_80 = 0;
  local_78 = 0;
  FUN_147ca3f96(&local_80,param_3);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_70 = iVar3;
  FUN_1446efa72(&local_68,0,5,0x10);
  puVar4 = local_68;
  _Src_00 = local_90;
  local_60 = 5;
  *local_68 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_68[2] = lVar6;
  *local_68 = &PTR_FUN_14bf02b10;
  local_68[3] = local_98;
  local_68[4] = 0;
  lVar7 = (longlong)local_88;
  *(int *)(local_68 + 5) = local_88;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)local_68 + 0x2c) = 0;
  }
  else {
    puVar1 = local_68 + 4;
    FUN_1446dd670(puVar1,local_88,0);
    memcpy((void *)*puVar1,_Src_00,lVar7 * 2);
  }
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  FUN_147ca3f96(puVar4 + 6,&local_80);
  *(int *)(puVar4 + 8) = local_70;
  local_a8 = 0x40400000;
  FUN_1405f67fc(uVar5,local_58,&local_68,L"FMessageSanitizerNull_SanitizeDisplayName_Lambda");
  FUN_1449db362(&local_68);
  FUN_1449db362(&local_80);
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_98 = &local_44;
  local_90 = local_58;
  FUN_14990eb74(param_1 + 0x30,&local_68);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499072b2 FUN_1499072b2 body=571 status=ok
// SIG undefined FUN_1499072b2(void)

void FUN_1499072b2(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int *local_a0;
  undefined1 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  int local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = param_1[10];
  param_1[10] = iVar3 + 1;
  local_4c = iVar3;
  uVar9 = FUN_1401cb356();
  local_98 = (undefined1 *)0x0;
  iVar4 = *(int *)(param_2 + 1);
  uVar5 = *param_2;
  local_a0 = param_1;
  local_90 = iVar4;
  if (iVar4 == 0) {
    local_8c = 0;
  }
  else {
    FUN_140b856de(&local_98,iVar4,0);
    FUN_140b8566a(local_98,uVar5,iVar4);
  }
  local_88 = 0;
  local_80 = 0;
  FUN_14990efd8(&local_88,param_3);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_78 = iVar3;
  FUN_1446efa72(&local_70,0,5,0x10);
  puVar7 = local_70;
  iVar3 = local_90;
  puVar6 = local_98;
  local_68 = 5;
  *local_70 = &PTR_LAB_149e02020;
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
  local_70[2] = lVar10;
  *local_70 = &PTR_FUN_14bf02b80;
  local_70[3] = local_a0;
  local_70[4] = 0;
  *(int *)(local_70 + 5) = local_90;
  if (local_90 == 0) {
    *(undefined4 *)((longlong)local_70 + 0x2c) = 0;
  }
  else {
    puVar2 = local_70 + 4;
    FUN_140b856de(puVar2,local_90,0);
    FUN_140b8566a(*puVar2,puVar6,iVar3);
  }
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 7) = 0;
  FUN_14990efd8(puVar7 + 6,&local_88);
  *(int *)(puVar7 + 8) = local_78;
  local_a8 = 0x40400000;
  FUN_1405f67fc(uVar9,local_60,&local_70,L"FMessageSanitizerNull_SanitizeDisplayNames_Lambda");
  FUN_1449db362(&local_70);
  FUN_1446b59bc(&local_a0);
  local_a0 = &local_4c;
  local_98 = local_60;
  FUN_14990eb74(param_1 + 0xc,&local_70,&local_a0);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1499074ee FUN_1499074ee body=145 status=ok
// SIG undefined FUN_1499074ee(void)

void FUN_1499074ee(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 1;
  FUN_140807d8e(param_1,&local_28,L"dirty",L"d***y");
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149907580 FUN_149907580 body=136 status=ok
// SIG undefined FUN_149907580(void)

void FUN_149907580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  ushort local_30 [4];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28,param_3);
  local_30[0] = local_30[0] & 0xff00;
  plVar1 = (longlong *)*param_5;
  if (plVar1 != (longlong *)0x0 && (int)param_5[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_30);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990760c FUN_14990760c body=150 status=ok
// SIG undefined FUN_14990760c(void)

void FUN_14990760c(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *param_1 = &PTR_FUN_14bf00c30;
  param_1[0xf] = param_2;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  return;
}



// FUNCTION 1499076a2 FUN_1499076a2 body=140 status=ok
// SIG undefined FUN_1499076a2(void)

void FUN_1499076a2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bf00c30;
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    FUN_1449db362(param_1 + 0x1a);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14990c214(param_1 + 0x10);
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145cc0c5a(param_1);
  return;
}



// FUNCTION 149907732 FUN_149907732 body=1017 status=ok
// SIG undefined FUN_149907732(void)

void FUN_149907732(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [3];
  void *local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = param_1;
  local_60 = param_4;
  if ((int)param_3[1] == 1) {
    lVar4 = *param_3;
    if (*(int *)(lVar4 + 0x20) == 1) {
      if (1 < *(int *)(lVar4 + 0x18)) {
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))
                  (*(longlong **)(param_1 + 0x78),&local_78);
        (**(code **)(*local_78 + 0x50))(local_78,&local_88,lVar4 + 0x10);
        if (local_88 == 0) {
          pwVar11 = L"FOnlinePurchaseNull::Checkout failed, Could not find corresponding offer.";
LAB_149907856:
          FUN_140056680(local_d8,pwVar11);
          FUN_1446b5a30(&local_68,local_d8);
          if (local_d8[0] != (undefined **)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(char *)(param_1 + 0xe0) == '\x01') {
            pwVar11 = 
            L"FOnlinePurchaseNull::Checkout failed, there was another purchase in progress.";
            goto LAB_149907856;
          }
          if (param_1 + 0xd0 != param_4) {
            *(undefined8 *)(param_1 + 0xd0) = 0;
            *(undefined4 *)(param_1 + 0xd8) = 0;
            FUN_148fba690(param_1 + 0xd0,param_4);
            *(undefined1 *)(param_1 + 0xe0) = 1;
          }
          plVar12 = *(longlong **)(param_1 + 0x70);
          bVar6 = true;
          if (plVar12 == (longlong *)0x0) {
LAB_149907931:
            uVar13 = 0;
            plVar12 = (longlong *)0x0;
          }
          else {
            iVar9 = (int)plVar12[1];
            do {
              if (iVar9 == 0) goto LAB_149907931;
              LOCK();
              iVar8 = (int)plVar12[1];
              bVar14 = iVar9 == iVar8;
              if (bVar14) {
                *(int *)(plVar12 + 1) = iVar9 + 1;
                iVar8 = iVar9;
              }
              iVar9 = iVar8;
              UNLOCK();
            } while (!bVar14);
            uVar13 = *(undefined8 *)(param_1 + 0x68);
            LOCK();
            *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar12 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            bVar6 = false;
          }
          uVar5 = *(undefined8 *)(param_1 + 0x78);
          FUN_14990c3da(local_d8,param_2);
          local_d8[0] = &PTR_FUN_14bf01f20;
          local_a8 = local_88;
          plStack_a0 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
          }
          if (!bVar6) {
            LOCK();
            *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
            UNLOCK();
          }
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          local_98 = uVar13;
          plStack_90 = plVar12;
          FUN_1446efa72(&local_58,0,7,0x10);
          puVar7 = local_58;
          local_50 = 7;
          *local_58 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_58[2] = lVar10;
          *local_58 = &PTR_FUN_14bf02bf0;
          local_58[4] = 0;
          local_58[5] = 0;
          local_58[3] = &PTR_FUN_14b4ce010;
          local_58[6] = 0;
          *(int *)(local_58 + 7) = local_b8;
          if ((longlong)local_b8 == 0) {
            *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
          }
          else {
            puVar3 = local_58 + 6;
            FUN_1446dd670(puVar3,local_b8,0);
            memcpy((void *)*puVar3,local_c0,(longlong)local_b8 * 2);
          }
          puVar7[8] = local_b0;
          puVar7[3] = &PTR_FUN_14bf01f20;
          puVar7[9] = local_a8;
          puVar7[10] = plStack_a0;
          local_a8 = 0;
          plStack_a0 = (longlong *)0x0;
          puVar7[0xb] = local_98;
          puVar7[0xc] = plStack_90;
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          FUN_145c398c4(uVar5,&local_58);
          FUN_1449db362(&local_58);
          FUN_1446b5c0c(local_d8);
          if (!bVar6) {
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_80 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_70 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
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
        goto LAB_1499077c8;
      }
      pwVar11 = L"FOnlinePurchaseNull::Checkout failed, OfferId is blank.";
    }
    else {
      pwVar11 = 
      L"FOnlinePurchaseNull::Checkout failed, purchase quantity not set to one. We currently only support one."
      ;
    }
  }
  else if ((int)param_3[1] == 0) {
    pwVar11 = L"FOnlinePurchaseNull::Checkout failed, there were no entries passed to purchase";
  }
  else {
    pwVar11 = 
    L"FOnlinePurchaseNull::Checkout failed, there were more than one entry passed to purchase. We currently only support one."
    ;
  }
  FUN_140056680(local_d8,pwVar11);
  FUN_1446b5a30(&local_68,local_d8);
  if (local_d8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_1499077c8:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149907b2c FUN_149907b2c body=581 status=ok
// SIG undefined FUN_149907b2c(void)

void FUN_149907b2c(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  int local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar3 = *(int *)(param_2 + 0x20);
  if (iVar3 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = *(undefined2 **)(param_2 + 0x18);
  }
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar11);
  plVar7 = (longlong *)FUN_14990f05c(param_1 + 0x80,uVar6,param_2);
  iVar3 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
    FUN_14666fb5a(plVar7,iVar3);
  }
  lVar4 = *plVar7;
  lVar10 = (longlong)iVar3 * 0x30;
  *(undefined ***)(lVar4 + lVar10) = &PTR_FUN_14b438d60;
  puVar2 = (undefined8 *)(lVar4 + 8 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar4 + 0x18 + lVar10) = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar8 = FUN_1447a1f4a(*param_3 + 0x18);
  FUN_1446b5c8c(local_78,*param_3 + 8,uVar8);
  FUN_149907d72(lVar4 + lVar10,local_78);
  FUN_1418b5280(local_78);
  plVar7 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  iVar3 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  local_88 = plVar7;
  local_80 = iVar3;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    FUN_1449db362(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b4c2410;
  FUN_14584247e(plVar9 + 2,lVar4 + lVar10);
  local_78[0] = 1;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_98 = plVar9 + 2;
  local_90 = plVar9;
  FUN_144a5dc74(local_50);
  local_40 = 0x13;
  if (plVar7 != (longlong *)0x0 && iVar3 != 0) {
    (**(code **)(*plVar7 + 0x60))(plVar7,local_78,&local_98);
  }
  FUN_145c8db80(local_78);
  plVar7 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1449db362(&local_88);
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149907d72 FUN_149907d72 body=64 status=ok
// SIG undefined FUN_149907d72(void)

void FUN_149907d72(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_1465644b8((longlong *)(param_1 + 0x20),iVar1);
  }
  FUN_14990c456((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 149907db2 FUN_149907db2 body=1024 status=ok
// SIG undefined FUN_149907db2(void)

void FUN_149907db2(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 unaff_R13;
  bool bVar14;
  undefined1 auStack_108 [44];
  undefined4 local_dc;
  undefined **local_d8 [3];
  void *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = param_1;
  local_60 = param_4;
  if ((int)param_3[1] == 1) {
    lVar4 = *param_3;
    if (*(int *)(lVar4 + 0x20) == 1) {
      if (1 < *(int *)(lVar4 + 0x18)) {
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))
                  (*(longlong **)(param_1 + 0x78),&local_78);
        (**(code **)(*local_78 + 0x50))(local_78,&local_88,lVar4 + 0x10);
        if (local_88 == 0) {
          pwVar10 = L"FOnlinePurchaseNull::Checkout failed, Could not find corresponding offer.";
LAB_149907ed8:
          FUN_140056680(local_d8,pwVar10);
          FUN_1446b5e58(&local_68,local_d8);
          if (local_d8[0] != (undefined **)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0xf8) != 0) {
            pwVar10 = 
            L"FOnlinePurchaseNull::Checkout failed, there was another purchase in progress.";
            goto LAB_149907ed8;
          }
          plVar11 = (longlong *)*param_4;
          if (plVar11 == (longlong *)0x0 || (int)param_4[1] == 0) {
            local_d8[0] = (undefined **)0x0;
          }
          else {
            (**(code **)(*plVar11 + 0x38))(plVar11,local_d8);
          }
          *(undefined ***)(param_1 + 0xf8) = local_d8[0];
          plVar11 = *(longlong **)(param_1 + 0x70);
          uVar13 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          if (plVar11 == (longlong *)0x0) {
LAB_149907fb6:
            uVar12 = 0;
            plVar11 = (longlong *)0x0;
          }
          else {
            iVar8 = (int)plVar11[1];
            do {
              if (iVar8 == 0) goto LAB_149907fb6;
              LOCK();
              iVar7 = (int)plVar11[1];
              bVar14 = iVar8 == iVar7;
              if (bVar14) {
                *(int *)(plVar11 + 1) = iVar8 + 1;
                iVar7 = iVar8;
              }
              iVar8 = iVar7;
              UNLOCK();
            } while (!bVar14);
            uVar12 = *(undefined8 *)(param_1 + 0x68);
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar11 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            uVar13 = 0;
          }
          uVar5 = *(undefined8 *)(param_1 + 0x78);
          FUN_14990c3da(local_d8,param_2);
          local_d8[0] = &PTR_FUN_14bf01f20;
          if ((char)uVar13 == '\0') {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
          }
          local_98 = 0;
          local_90 = 0;
          local_dc = uVar13;
          local_a8 = uVar12;
          plStack_a0 = plVar11;
          FUN_14666fadc(&local_98,param_4);
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,7,0x10);
          puVar6 = local_58;
          local_50 = 7;
          *local_58 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar9 == 0) {
            LOCK();
            UNLOCK();
            lVar9 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_58[2] = lVar9;
          *local_58 = &PTR_FUN_14bf02c60;
          local_58[4] = 0;
          local_58[5] = 0;
          local_58[3] = &PTR_FUN_14b4ce010;
          local_58[6] = 0;
          *(int *)(local_58 + 7) = local_b8;
          if ((longlong)local_b8 == 0) {
            *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
          }
          else {
            puVar3 = local_58 + 6;
            FUN_1446dd670(puVar3,local_b8,0);
            memcpy((void *)*puVar3,local_c0,(longlong)local_b8 * 2);
          }
          puVar6[8] = local_b0;
          puVar6[3] = &PTR_FUN_14bf01f20;
          puVar6[9] = local_a8;
          puVar6[10] = plStack_a0;
          local_a8 = 0;
          plStack_a0 = (longlong *)0x0;
          puVar6[0xb] = 0;
          *(undefined4 *)(puVar6 + 0xc) = 0;
          FUN_14666fadc(puVar6 + 0xb,&local_98);
          FUN_145c398c4(uVar5,&local_58);
          FUN_1449db362(&local_58);
          FUN_1446b6034(local_d8);
          if ((char)local_dc == '\0') {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_80 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_70 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        goto LAB_149907e46;
      }
      pwVar10 = L"FOnlinePurchaseNull::Checkout failed, OfferId is blank.";
    }
    else {
      pwVar10 = 
      L"FOnlinePurchaseNull::Checkout failed, purchase quantity not set to one. We currently only support one."
      ;
    }
  }
  else if ((int)param_3[1] == 0) {
    pwVar10 = L"FOnlinePurchaseNull::Checkout failed, there were no entries passed to purchase";
  }
  else {
    pwVar10 = 
    L"FOnlinePurchaseNull::Checkout failed, there were more than one entry passed to purchase. We currently only support one."
    ;
  }
  FUN_140056680(local_d8,pwVar10);
  FUN_1446b5e58(&local_68,local_d8);
  if (local_d8[0] != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_149907e46:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1499081b4 FUN_1499081b4 body=117 status=ok
// SIG undefined FUN_1499081b4(void)

void FUN_1499081b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_145c8dbc0(local_50,0);
  if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,local_50);
  }
  FUN_145c8db80(local_50);
  FUN_1449db362(param_2);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14990822a FUN_14990822a body=654 status=ok
// SIG undefined FUN_14990822a(void)

void FUN_14990822a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8 [3];
  void *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [48];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar10 = *(longlong **)(param_1 + 0x70);
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14990826e:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14990826e;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar12 = iVar8 == iVar6;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    bVar4 = false;
  }
  local_e0 = *(undefined8 *)(param_1 + 0x78);
  FUN_14990c3da(local_d8,param_2);
  local_d8[0] = &PTR_FUN_14bf01f20;
  if (!bVar4) {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = uVar11;
  plStack_a0 = plVar10;
  FUN_1499084ba(local_98,param_3);
  local_68 = 0;
  local_60 = 0;
  FUN_148fba690(&local_68,param_4);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,10,0x10);
  puVar5 = local_58;
  local_50 = 10;
  *local_58 = &PTR_LAB_149e020b0;
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
  local_58[2] = lVar9;
  *local_58 = &PTR_FUN_14bf02cd0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[3] = &PTR_FUN_14b4ce010;
  local_58[6] = 0;
  *(int *)(local_58 + 7) = local_b8;
  if ((longlong)local_b8 == 0) {
    *(undefined4 *)((longlong)local_58 + 0x3c) = 0;
  }
  else {
    puVar2 = local_58 + 6;
    FUN_1446dd670(puVar2,local_b8,0);
    memcpy((void *)*puVar2,local_c0,(longlong)local_b8 * 2);
  }
  uVar11 = local_e0;
  puVar5[8] = local_b0;
  puVar5[3] = &PTR_FUN_14bf01f20;
  puVar5[9] = local_a8;
  puVar5[10] = plStack_a0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_1499084ba(puVar5 + 0xb,local_98);
  puVar5[0x11] = 0;
  *(undefined4 *)(puVar5 + 0x12) = 0;
  FUN_148fba690(puVar5 + 0x11,&local_68);
  FUN_145c398c4(uVar11,&local_58);
  FUN_1449db362(&local_58);
  FUN_1446b62bc(local_d8);
  if (!bVar4) {
    LOCK();
    piVar3 = (int *)((longlong)plVar10 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1499084ba FUN_1499084ba body=234 status=ok
// SIG undefined FUN_1499084ba(void)

undefined8 * FUN_1499084ba(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 1499085a4 FUN_1499085a4 body=403 status=ok
// SIG undefined FUN_1499085a4(void)

void FUN_1499085a4(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  if (cVar3 == '\0') {
    local_40 = 0;
    local_38 = 0;
    FUN_14666fadc(&local_40,param_4);
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14bf02d40;
  }
  else {
    local_40 = 0;
    local_38 = 0;
    FUN_14666fadc(&local_40,param_4);
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    *local_30 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14bf02dd0;
  }
  local_28 = 3;
  *local_30 = ppuVar4;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0;
  FUN_14666fadc(local_30 + 3,&local_40);
  FUN_145c398c4(uVar1,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149908738 FUN_149908738 body=244 status=ok
// SIG undefined FUN_149908738(void)

void FUN_149908738(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar6;
  
  iVar5 = *(int *)(param_2 + 0x20);
  if (iVar5 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *(undefined2 **)(param_2 + 0x18);
  }
  iVar2 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar2 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar2,puVar8);
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar7 = param_1 + 0xb8;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xc0);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x80);
      do {
        lVar6 = (longlong)iVar5;
        puVar1 = (undefined8 *)(lVar7 + lVar6 * 0x48);
        cVar3 = (**(code **)*puVar1)(puVar1,param_2);
        lVar7 = *(longlong *)(param_1 + 0x80);
        if (cVar3 != '\0') {
          lVar7 = lVar7 + lVar6 * 0x48;
          if (lVar7 != -0x30 && lVar7 != 0) {
            FUN_14584230c(param_3);
            return;
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x40 + lVar6 * 0x48);
      } while (iVar5 != -1);
    }
  }
  FUN_145842369(*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14990f662(param_3);
    return;
  }
  return;
}



// FUNCTION 14990882e FUN_14990882e body=583 status=ok
// SIG undefined FUN_14990882e(void)

void FUN_14990882e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  GUID local_78;
  undefined8 local_68;
  uint local_60;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446f470e(&local_78,L"WINDOWS",1);
  plVar4 = (longlong *)FUN_140272950(&local_78);
  uVar5 = FUN_144a82cde();
  (**(code **)(*plVar4 + 0xe0))(plVar4,&local_58,uVar5,&local_59);
  plVar4 = uStack_50;
  if (uStack_50 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = local_58;
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_1499088c5;
    *(undefined8 *)(param_1 + 0x10) = 0;
LAB_149908a3d:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1499088c5;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = local_58;
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (uStack_50 != plVar6) {
      *(longlong **)(param_1 + 0x10) = uStack_50;
      if (plVar6 == (longlong *)0x0) goto LAB_1499088c5;
      goto LAB_149908a3d;
    }
    LOCK();
    plVar6 = uStack_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1499088c5;
    (**(code **)*uStack_50)(uStack_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1499088c5:
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar1 = (int *)((longlong)uStack_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*uStack_50 + 0x10))(uStack_50);
      }
    }
  }
  local_60 = 0;
  plVar4 = *(longlong **)(param_1 + 8);
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
  if (local_60 >> 0x18 == 0x7f) {
    plVar4 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar4 + 0x18))(plVar4,0x7f000001);
  }
  plVar4 = *(longlong **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2,&local_68);
  uVar3 = FUN_148a3eb84(local_68);
  (**(code **)(*plVar4 + 0x28))(plVar4,uVar3);
  local_78.Data1 = 0;
  local_78.Data2 = 0;
  local_78.Data3 = 0;
  local_78.Data4[0] = '\0';
  local_78.Data4[1] = '\0';
  local_78.Data4[2] = '\0';
  local_78.Data4[3] = '\0';
  local_78.Data4[4] = '\0';
  local_78.Data4[5] = '\0';
  local_78.Data4[6] = '\0';
  local_78.Data4[7] = '\0';
  CoCreateGuid(&local_78);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_1407c869a(&local_78,local_98,0);
  FUN_149908a76(&local_88,local_98);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_7c,uStack_80);
  local_58._0_4_ = (undefined4)uVar5;
  local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_50._0_4_ = SUB84(plVar4,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_88 = (undefined4)local_58;
  uStack_84 = local_58._4_4_;
  uStack_80 = (undefined4)uStack_50;
  uStack_7c = uStack_50._4_4_;
  local_58 = uVar5;
  uStack_50 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149908a76 FUN_149908a76 body=239 status=ok
// SIG undefined FUN_149908a76(void)

undefined8 * FUN_149908a76(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar3 = DAT_14cb8e198;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar4[5] = uVar3;
  *puVar4 = &PTR_FUN_14bf01f20;
  *param_1 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bf01f70;
  plVar5[2] = (longlong)puVar4;
  param_1[1] = plVar5;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar4[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar4[2] = plVar5;
      }
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
  }
  return param_1;
}



// FUNCTION 149908b66 FUN_149908b66 body=308 status=ok
// SIG undefined FUN_149908b66(void)

undefined8 FUN_149908b66(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_149908d4a();
  uVar4 = 0;
  if (cVar2 == '\0') {
    if (*(int *)(param_1 + 0x2a8) != 2) {
      FUN_145e3ad82(param_1 + 0x280);
    }
  }
  else if (*(int *)(param_1 + 0x2a8) == 0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    uVar4 = 0;
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = 3;
    *local_38 = &PTR_LAB_14ba3a100;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_38[2] = lVar3;
    *local_38 = &PTR_FUN_14bf02e60;
    local_38[3] = param_1;
    local_38[4] = FUN_1446b67b2;
    cVar2 = FUN_143e6a4aa(param_1 + 0x280,&local_38);
    if (cVar2 == '\0') {
      FUN_145e3ad82(param_1 + 0x280);
      uVar4 = 0xffffffff;
    }
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149908c9c FUN_149908c9c body=161 status=ok
// SIG undefined FUN_149908c9c(void)

void FUN_149908c9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  longlong *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x120))();
  if (cVar3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x278) + 0x68))
              (*(longlong **)(param_1 + 0x278),&local_20);
    if (local_20 != (longlong *)0x0) {
      iVar4 = 0;
      do {
        (**(code **)(*local_20 + 0x38))(local_20,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_18 + 0x10))(local_18);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


