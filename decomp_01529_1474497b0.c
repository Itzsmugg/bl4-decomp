// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474497b0 FUN_1474497b0 body=474 status=ok
// SIG undefined FUN_1474497b0(void)

void FUN_1474497b0(longlong *param_1)

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



// FUNCTION 14744998c FUN_14744998c body=207 status=ok
// SIG undefined FUN_14744998c(void)

int FUN_14744998c(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 147449a5c FUN_147449a5c body=132 status=ok
// SIG undefined FUN_147449a5c(void)

void FUN_147449a5c(longlong param_1,int param_2)

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



// FUNCTION 147449ae2 FUN_147449ae2 body=204 status=ok
// SIG undefined FUN_147449ae2(void)

void FUN_147449ae2(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
      goto LAB_147449b35;
    }
  }
  lVar2 = 0;
LAB_147449b35:
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
  FUN_147449d2e(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147449bc4 FUN_147449bc4 body=48 status=ok
// SIG undefined FUN_147449bc4(void)

void FUN_147449bc4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147449d2e FUN_147449d2e body=442 status=ok
// SIG undefined FUN_147449d2e(void)

void FUN_147449d2e(longlong param_1,longlong *param_2,longlong *param_3)

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
LAB_147449e46:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_147449e5e;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147449e46;
LAB_147449e5e:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_147449eea(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
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



// FUNCTION 147449eea FUN_147449eea body=132 status=ok
// SIG undefined FUN_147449eea(void)

void FUN_147449eea(longlong param_1,int param_2)

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



// FUNCTION 147449f76 FUN_147449f76 body=710 status=ok
// SIG undefined FUN_147449f76(void)

void FUN_147449f76(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined1 local_160;
  undefined1 *local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_40 = 0;
  FUN_1446f4b16();
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
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_a4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  local_158 = local_148;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_158 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_160 = iVar1 != 0;
  local_168 = local_44;
  FUN_147445e28(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744a244 FUN_14744a244 body=200 status=ok
// SIG undefined FUN_14744a244(void)

void FUN_14744a244(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar7 = 2;
  do {
    lVar2 = *(longlong *)(param_1 + lVar7 * 8);
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x68);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      *(undefined4 *)(puVar6 + 0xd) = uVar1;
      *(undefined1 *)((longlong)puVar6 + 0x6c) = 0;
      *(undefined8 **)(param_2 + lVar7 * 8) = puVar6;
      FUN_14744a244(lVar2,puVar6);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 6);
  FUN_14744d236(param_2,param_1);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x48) = uVar5;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = uVar3;
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
  return;
}



// FUNCTION 14744a30c FUN_14744a30c body=117 status=ok
// SIG undefined FUN_14744a30c(void)

undefined8 FUN_14744a30c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  fVar5 = *(float *)(lVar1 + 0x34c) * *(float *)(param_2 + 0x58);
  fVar3 = *(float *)(param_2 + 0x58) * *(float *)(lVar1 + 0x350);
  if (fVar5 <= fVar3) {
    fVar5 = fVar3;
  }
  dVar4 = (double)fVar5;
  dVar6 = *(double *)(param_2 + 0x20) - dVar4;
  if ((((*(double *)(param_1 + 0x40) <= dVar6 && dVar6 != *(double *)(param_1 + 0x40)) ||
       (*(double *)(param_2 + 0x20) + dVar4 < *(double *)(param_1 + 0x30))) ||
      (dVar6 = *(double *)(param_2 + 0x28) - dVar4,
      *(double *)(param_1 + 0x48) <= dVar6 && dVar6 != *(double *)(param_1 + 0x48))) ||
     (*(double *)(param_2 + 0x28) + dVar4 < *(double *)(param_1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 14744a382 FUN_14744a382 body=168 status=ok
// SIG undefined FUN_14744a382(void)

void FUN_14744a382(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined1 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar2 = *(float *)(*(longlong *)(param_2 + 0x60) + 0x34c) * *(float *)(param_2 + 0x58);
  fVar1 = *(float *)(param_2 + 0x58) * *(float *)(*(longlong *)(param_2 + 0x60) + 0x350);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  local_38 = (double)fVar2;
  local_20 = *(double *)(param_2 + 0x28) + local_38;
  local_28 = *(double *)(param_2 + 0x20) + local_38;
  local_30 = *(double *)(param_2 + 0x28) - local_38;
  local_38 = *(double *)(param_2 + 0x20) - local_38;
  local_18 = 1;
  local_10 = param_2;
  FUN_14324261c(local_38,&local_10);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744a42c FUN_14744a42c body=549 status=ok
// SIG undefined FUN_14744a42c(void)

void FUN_14744a42c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  fVar12 = *(float *)(*(longlong *)(param_2 + 0x60) + 0x350) * *(float *)(param_2 + 0x58);
  fVar11 = *(float *)(param_2 + 0x58) * *(float *)(*(longlong *)(param_2 + 0x60) + 0x34c);
  local_98 = 0;
  uStack_90 = 0;
  fVar9 = fVar11;
  if (fVar11 <= fVar12) {
    fVar9 = fVar12;
  }
  dVar3 = (double)fVar9;
  local_a8 = *(double *)(param_2 + 0x28) + dVar3;
  local_b0 = *(double *)(param_2 + 0x20) + dVar3;
  local_b8 = *(double *)(param_2 + 0x28) - dVar3;
  local_c0 = *(double *)(param_2 + 0x20) - dVar3;
  local_a0 = 1;
  FUN_14744a654(SUB84(dVar3,0),&local_c0,&local_98);
  iVar5 = (int)param_3[1] + (int)uStack_90;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
    FUN_14744d952(param_3);
  }
  lVar4 = local_98;
  if ((int)uStack_90 != 0) {
    lVar8 = (longlong)(int)uStack_90;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + lVar6);
      if (lVar1 != param_2) {
        dVar10 = *(double *)(param_2 + 0x28) - *(double *)(lVar1 + 0x28);
        dVar3 = *(double *)(param_2 + 0x20) - *(double *)(lVar1 + 0x20);
        dVar3 = dVar3 * dVar3 + dVar10 * dVar10;
        fVar9 = *(float *)(*(longlong *)(lVar1 + 0x60) + 0x34c) * *(float *)(lVar1 + 0x58) + fVar11;
        dVar10 = (double)(fVar9 * fVar9);
        if ((dVar3 <= dVar10) ||
           (fVar9 = *(float *)(lVar1 + 0x58) * *(float *)(*(longlong *)(lVar1 + 0x60) + 0x350) +
                    fVar12, dVar3 <= (double)(fVar9 * fVar9))) {
          iVar5 = (int)param_3[1];
          lVar7 = (longlong)iVar5;
          *(uint *)(param_3 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
            FUN_14744d9c2(param_3,iVar5);
          }
          lVar2 = *param_3;
          *(longlong *)(lVar2 + lVar7 * 0x18) = param_2;
          *(longlong *)(lVar2 + 8 + lVar7 * 0x18) = lVar1;
          *(uint *)(lVar2 + 0x10 + lVar7 * 0x18) = (uint)(dVar10 < dVar3);
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 != lVar6);
  }
  if (local_98 != 0) {
    FUN_1400020a8(local_98);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14744a654 FUN_14744a654 body=124 status=ok
// SIG undefined FUN_14744a654(void)

void FUN_14744a654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14744d304(param_1,param_2,local_48);
  FUN_14744d882(param_1,param_2,param_3);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_14744a654(local_48[uVar2],param_2,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744a6d2 FUN_14744a6d2 body=168 status=ok
// SIG undefined FUN_14744a6d2(void)

void FUN_14744a6d2(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined1 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar2 = *(float *)(*(longlong *)(param_2 + 0x60) + 0x34c) * *(float *)(param_2 + 0x58);
  fVar1 = *(float *)(param_2 + 0x58) * *(float *)(*(longlong *)(param_2 + 0x60) + 0x350);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  local_38 = (double)fVar2;
  local_20 = *(double *)(param_2 + 0x28) + local_38;
  local_28 = *(double *)(param_2 + 0x20) + local_38;
  local_30 = *(double *)(param_2 + 0x28) - local_38;
  local_38 = *(double *)(param_2 + 0x20) - local_38;
  local_18 = 1;
  local_10 = param_2;
  FUN_14744a77c(local_38,&local_10);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744a77c FUN_14744a77c body=139 status=ok
// SIG undefined FUN_14744a77c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14744a77c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [5];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14744d304(param_1,param_3,auStack_50 + 1);
  cVar1 = FUN_14744da56(param_1,param_2);
  if (uVar2 != 0 && cVar1 == '\0') {
    uVar3 = 1;
    do {
      cVar1 = FUN_14744a77c(auStack_50[uVar3],param_2,param_3);
      bVar4 = uVar3 < uVar2;
      uVar3 = uVar3 + 1;
    } while (bVar4 && cVar1 == '\0');
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744a80c FUN_14744a80c body=289 status=ok
// SIG undefined FUN_14744a80c(void)

double * FUN_14744a80c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((*(longlong *)(param_1 + 0x120) == 0) ||
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 0x3a8), lVar7 == 0)) {
    if ((*(longlong *)(param_1 + 0xa8) != 0) &&
       ((lVar7 = FUN_144a79cc8(), lVar7 != 0 &&
        (plVar8 = (longlong *)FUN_14479d2ce(lVar7 + 0x280), plVar8 != (longlong *)0x0)))) {
      (**(code **)(*plVar8 + 0x520))(plVar8,param_2,0,0);
      return param_2;
    }
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
  }
  else {
    dVar1 = *(double *)(lVar7 + 0x170);
    dVar2 = *(double *)(lVar7 + 0x188);
    dVar3 = *(double *)(lVar7 + 0x160);
    dVar4 = *(double *)(lVar7 + 0x168);
    dVar5 = *(double *)(lVar7 + 0x180);
    dVar6 = *(double *)(lVar7 + 0x178);
    *param_2 = dVar3 - dVar6;
    param_2[1] = dVar4 - dVar5;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar6;
    param_2[4] = dVar4 + dVar5;
    param_2[5] = dVar1 + dVar2;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  return param_2;
}



// FUNCTION 14744a92e FUN_14744a92e body=76 status=ok
// SIG undefined FUN_14744a92e(void)

void FUN_14744a92e(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412e3d1e(&local_28);
  *(undefined4 *)(param_1 + 0x128) = local_28;
  *(undefined4 *)(param_1 + 300) = uStack_24;
  *(undefined4 *)(param_1 + 0x130) = uStack_20;
  *(undefined4 *)(param_1 + 0x134) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744a97c FUN_14744a97c body=110 status=ok
// SIG undefined FUN_14744a97c(void)

longlong FUN_14744a97c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_2;
  if ((*(char *)(param_1 + 0x70) != '\0') || (lVar1 = param_1, *(char *)(param_2 + 0x70) != '\0'))
  goto LAB_14744a985;
  fVar4 = *(float *)(*(longlong *)(param_1 + 0x60) + 0x37c);
  fVar5 = *(float *)(*(longlong *)(param_2 + 0x60) + 0x37c);
  if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) {
LAB_14744a9e1:
    bVar3 = fVar5 == fVar4;
    bVar2 = fVar5 < fVar4;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x38);
    fVar5 = *(float *)(param_2 + 0x38);
    if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) goto LAB_14744a9e1;
    bVar3 = *(float *)(param_2 + 0x58) == *(float *)(param_1 + 0x58);
    bVar2 = *(float *)(param_2 + 0x58) < *(float *)(param_1 + 0x58);
  }
  lVar1 = param_2;
  if (!bVar2 && !bVar3) {
    lVar1 = param_1;
  }
LAB_14744a985:
  if ((param_3 == 1) && (*(char *)(*(longlong *)(lVar1 + 0x60) + 0x370) != '\0')) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14744a9ea FUN_14744a9ea body=154 status=ok
// SIG undefined FUN_14744a9ea(void)

void FUN_14744a9ea(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14744aa86(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744aa86 FUN_14744aa86 body=1616 status=ok
// SIG undefined FUN_14744aa86(void)

void FUN_14744aa86(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong *plVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  longlong local_138;
  undefined8 uStack_130;
  longlong *local_128;
  longlong *plStack_120;
  undefined1 local_118;
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x28);
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar16 = *(longlong *)(param_1 + 0x40);
    lVar15 = (longlong)*(int *)(param_1 + 0x48) << 5;
    do {
      FUN_1474479a8(lVar16);
      lVar16 = lVar16 + 0x20;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != 0);
  }
  LOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  UNLOCK();
  local_158 = (longlong *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_14744daf4(local_158);
  }
  local_138 = 0;
  uStack_130 = 0;
  local_150 = param_1;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar18 = 0;
    do {
      lVar16 = local_150;
      lVar15 = FUN_14744b16d(local_150);
      uVar11 = *(int *)(lVar16 + 0x7c) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar16 + 0x7c) = uVar11;
      uVar3 = *(undefined4 *)(lVar16 + 0x38);
      local_108[0] = 0;
      local_f8 = (longlong *)0x0;
      local_c8 = (code *)0x0;
      local_b8 = (longlong *)0x0;
      local_b8 = (longlong *)FUN_14001cc68(0x28,8);
      *local_b8 = (longlong)&PTR_LAB_14a3a6d90;
      local_b8[1] = lVar16;
      local_b8[2] = lVar15;
      *(int *)(local_b8 + 3) = (int)(((float)(uVar11 >> 9 | 0x3f800000) + -1.0) * 32767.0);
      *(undefined4 *)((longlong)local_b8 + 0x1c) = param_2;
      *(undefined4 *)(local_b8 + 4) = uVar3;
      if (local_b8 + 1 != (longlong *)0x0) {
        local_c8 = FUN_1432427ce;
      }
      FUN_14744db6e(&local_128,local_108);
      plVar7 = plStack_120;
      plVar4 = local_128;
      local_118 = 1;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      cVar9 = FUN_144a53f06();
      pcVar8 = local_c8;
      plVar14 = DAT_14c8442c0;
      if (cVar9 == '\0') {
        plVar14 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar14 = &local_a8;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        lVar16 = (*pcVar8)(uVar13);
        local_128[0x10] = lVar16;
        FUN_140b576f0();
      }
      else {
        puVar12 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar12[1] = 0;
        *puVar12 = &PTR_FUN_14a3a6dd0;
        puVar12[2] = local_c8;
        puVar12[4] = local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(puVar12 + 8) = local_98;
        *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_94;
        *(undefined4 *)(puVar12 + 9) = uStack_90;
        *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_8c;
        puVar12[6] = local_a8;
        puVar12[7] = uStack_a0;
        if (local_c8 != (code *)0x0) {
          local_c8 = (code *)0x0;
        }
        puVar12[10] = local_128;
        puVar12[0xb] = plStack_120;
        local_128 = (longlong *)0x0;
        plStack_120 = (longlong *)0x0;
        *(undefined1 *)(puVar12 + 0xc) = local_118;
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,3);
      }
      plVar14 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_120 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (local_c8 != (code *)0x0) {
        plVar14 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar14 = &local_a8;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_108[0] != 0) {
        plVar14 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar14 = local_e8;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar6 = uStack_130;
      lVar16 = (longlong)(int)uStack_130;
      uVar11 = (int)uStack_130 + 1;
      uStack_130 = CONCAT44(uStack_130._4_4_,uVar11);
      if (uStack_130._4_4_ < uVar11) {
        FUN_14744dd2c(&local_138,uVar6 & 0xffffffff);
      }
      *(longlong **)(local_138 + lVar16 * 0x10) = plVar4;
      *(longlong **)(local_138 + 8 + lVar16 * 0x10) = plVar7;
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(local_150 + 0x30));
  }
  lVar16 = local_150;
  local_c8 = (code *)0x14a3a5e7e;
  local_c0 = 0x19;
  FUN_1446e940c(local_13c,&local_c8);
  local_c8 = (code *)0x149e858ce;
  local_c0 = 0x11;
  FUN_1446e940c(local_140,&local_c8);
  FUN_140208bae(&local_128,local_140,local_13c,L"Simulate ProceduralFoliage...");
  FUN_146810a92(DAT_14c872be8,&local_128,1,1);
  uVar6 = uStack_130;
  if (0 < (int)uStack_130) {
    uVar17 = 0;
    auVar19 = roundpd(ZEXT816(0x412e848100000000),ZEXT816(0x412e848100000000),1);
    local_148 = (longlong)auVar19._0_8_;
    bVar5 = false;
LAB_14744ae55:
LAB_14744af12:
    lVar16 = *(longlong *)(local_138 + uVar17 * 0x10);
    if (lVar16 != 0) {
      plVar4 = *(longlong **)(lVar16 + 0x70);
      lVar16 = local_148 / 10000;
      if (0xfffffffe < lVar16) {
        lVar16 = 0xffffffff;
      }
      if (lVar16 < 1) {
        lVar16 = 0;
      }
      cVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,lVar16,0);
      if (cVar9 != '\0') goto code_r0x00014744af6f;
    }
    plVar4 = DAT_14c872be8;
    local_c8 = (code *)0x14a3a5e7e;
    local_c0 = 0x19;
    FUN_1446e940c(local_13c,&local_c8);
    local_c8 = (code *)0x149e858ce;
    local_c0 = 0x11;
    FUN_1446e940c(local_140,&local_c8);
    FUN_140208bae(&local_c8,local_140,local_13c,L"Simulate ProceduralFoliage...");
    FUN_146810bda(plVar4,uVar17 & 0xffffffff,uVar6 & 0xffffffff,&local_c8);
    if (local_c8 != (code *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 0x10))();
    }
    bVar10 = (**(code **)(*DAT_14c872be8 + 0x60))();
    if ((bVar10 & !bVar5) == 1) {
      LOCK();
      *(int *)(local_150 + 0x38) = *(int *)(local_150 + 0x38) + 1;
      UNLOCK();
      bVar5 = true;
    }
    goto LAB_14744af12;
  }
  FUN_146810c80(DAT_14c872be8);
LAB_14744b008:
  if ((longlong)*(int *)(lVar16 + 0x48) != 0) {
    lVar15 = *(longlong *)(lVar16 + 0x40);
    lVar16 = (longlong)*(int *)(lVar16 + 0x48) << 5;
    do {
      FUN_147447b92(lVar15);
      lVar15 = lVar15 + 0x20;
      lVar16 = lVar16 + -0x20;
    } while (lVar16 != 0);
  }
LAB_14744b02b:
  if (local_128 != (longlong *)0x0) {
    (**(code **)(*local_128 + 0x10))();
  }
  FUN_14744db24(local_138,uStack_130 & 0xffffffff);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014744af6f:
  lVar16 = *(longlong *)(local_138 + uVar17 * 0x10);
  while ((*(byte *)(lVar16 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar16 + 0x70) + 0x20))(*(longlong **)(lVar16 + 0x70),0xffffffff);
  }
  local_c8 = (code *)0x0;
  FUN_14485c47a(&local_c8,*(undefined8 *)(lVar16 + 0x80));
  lVar16 = local_150;
  iVar18 = *(int *)(local_150 + 0x70);
  *(uint *)(local_150 + 0x70) = iVar18 + 1U;
  if (*(uint *)(local_150 + 0x74) < iVar18 + 1U) {
    FUN_14744ddb2(local_158,iVar18);
  }
  *(code **)(*local_158 + (longlong)iVar18 * 8) = local_c8;
  uVar17 = uVar17 + 1;
  if ((longlong)(int)uStack_130 <= (longlong)uVar17) goto LAB_14744b099;
  goto LAB_14744ae55;
LAB_14744b099:
  FUN_146810c80(DAT_14c872be8);
  if (bVar5) {
    *(undefined4 *)(lVar16 + 0x70) = 0;
    if (*(int *)(lVar16 + 0x74) != 0) {
      FUN_14744daf4(local_158);
    }
    goto LAB_14744b02b;
  }
  goto LAB_14744b008;
}



// FUNCTION 14744b0e0 FUN_14744b0e0 body=99 status=ok
// SIG undefined FUN_14744b0e0(void)

void FUN_14744b0e0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14a3a5e08);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744b144 FUN_14744b144 body=41 status=ok
// SIG undefined FUN_14744b144(void)

void FUN_14744b144(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x00014744b16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a3a5e08);
  return;
}



// FUNCTION 14744b16d FUN_14744b16d body=148 status=ok
// SIG undefined FUN_14744b16d(void)

undefined8 FUN_14744b16d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b0b788();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744b202 FUN_14744b202 body=259 status=ok
// SIG undefined FUN_14744b202(void)

void FUN_14744b202(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  double local_30;
  double local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x158) = param_3;
  *(undefined4 *)(param_1 + 0x15c) = param_3;
  *(undefined4 *)(param_1 + 0x160) = param_3;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  fVar1 = *(float *)(param_2 + 0x2c);
  local_20 = *(undefined4 *)(param_2 + 0x34);
  local_58 = (double)(fVar1 * -2.0);
  local_48 = (double)(fVar1 + fVar1);
  local_88 = 0;
  uStack_80 = 0;
  local_30 = (local_58 + local_48) * 0.5;
  local_38 = 1;
  local_1c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = local_58;
  local_40 = local_48;
  local_28 = local_30;
  FUN_14744a244(&local_88,param_1 + 0xe8);
  FUN_145a5c30e(&local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744b30a FUN_14744b30a body=241 status=ok
// SIG undefined FUN_14744b30a(void)

ulonglong FUN_14744b30a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14744a42c(param_1 + 0xe8,param_2,plVar4);
  lVar2 = local_48;
  if ((longlong)(int)uStack_40 == 0) {
    plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
  }
  else {
    lVar1 = (longlong)(int)uStack_40 * 0x18;
    lVar5 = 0;
    do {
      lVar3 = FUN_14744a97c(*(undefined8 *)(lVar2 + lVar5),*(undefined8 *)(lVar2 + 8 + lVar5),
                            *(undefined4 *)(lVar2 + 0x10 + lVar5));
      plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),lVar3 != param_2);
      if (lVar3 == param_2) {
        FUN_14744b3fc(param_1,param_2);
        goto LAB_14744b3c8;
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar1 != lVar5);
    lVar5 = 0;
    do {
      lVar3 = FUN_14744a97c(*(undefined8 *)(lVar2 + lVar5),*(undefined8 *)(lVar2 + 8 + lVar5),
                            *(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (lVar3 != 0) {
        FUN_14744b3fc(param_1,lVar3);
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar1 != lVar5);
  }
LAB_14744b3c8:
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar4 & 0xffffffff;
}



// FUNCTION 14744b3fc FUN_14744b3fc body=107 status=ok
// SIG undefined FUN_14744b3fc(void)

void FUN_14744b3fc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (*(char *)(param_2 + 0x71) == '\x01') {
    FUN_14744a6d2(param_1 + 0xe8);
    *(undefined1 *)(param_2 + 0x71) = 0;
    FUN_14744debe(param_1 + 0x30,local_24,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744b468 FUN_14744b468 body=475 status=ok
// SIG undefined FUN_14744b468(void)

undefined4 *
FUN_14744b468(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147447c3a(param_4);
  puVar4 = (undefined4 *)FUN_14001cc68(0x80);
  *(undefined8 *)(puVar4 + 0x1a) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x71) = 1;
  uVar2 = param_2[1];
  *(undefined8 *)(puVar4 + 8) = *param_2;
  *(undefined8 *)(puVar4 + 10) = uVar2;
  *(undefined8 *)(puVar4 + 0xc) = param_2[2];
  iVar1 = *(int *)(param_1 + 0x160);
  uVar6 = iVar1 * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x160) = uVar6;
  local_58 = 0;
  local_60 = (double)((float)(uVar6 >> 9 | 0x3f800000) + -1.0) *
             (double)(-(*(uint *)(param_4 + 0xb4) & 1) & 0x168) + 0.0;
  local_68 = (double)((float)(iVar1 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) *
             (double)*(float *)(param_4 + 0xb8) + 0.0;
  FUN_144a7484c(&local_68,&local_88);
  *(undefined8 *)(puVar4 + 4) = local_78;
  *(undefined8 *)(puVar4 + 6) = uStack_70;
  *puVar4 = local_88;
  puVar4[1] = uStack_84;
  puVar4[2] = uStack_80;
  puVar4[3] = uStack_7c;
  puVar4[0xe] = param_5;
  if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  *(longlong *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = 0x3ff0000000000000;
  puVar4[0x16] = param_3;
  *(undefined1 *)(puVar4 + 0x1c) = 0;
  cVar3 = FUN_14744a30c(param_1 + 0xe8,puVar4);
  if (cVar3 == '\0') {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_14744a382(param_1 + 0xe8,puVar4);
    cVar3 = FUN_14744b30a(param_1,puVar4);
    puVar5 = (undefined4 *)0x0;
    if (cVar3 != '\0') {
      puVar5 = puVar4;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 14744b644 FUN_14744b644 body=174 status=ok
// SIG undefined FUN_14744b644(void)

float FUN_14744b644(longlong param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  iVar2 = (int)(*(float *)(lVar1 + 0x378) - (float)param_3);
  uVar3 = FUN_147447cfe(lVar1,*(undefined4 *)(param_1 + 0x38),iVar2);
  uVar4 = FUN_147447cfe(lVar1,param_2,iVar2);
  fVar5 = (float)FUN_147447c4c(lVar1,uVar3);
  fVar6 = (float)FUN_147447c4c(lVar1,uVar4);
  fVar7 = (float)FUN_147447c3a(lVar1);
  fVar8 = (float)FUN_147447c3a(lVar1);
  return fVar8 * fVar6 + fVar7 * fVar5;
}



// FUNCTION 14744b6f2 FUN_14744b6f2 body=415 status=ok
// SIG undefined FUN_14744b6f2(void)

double * FUN_14744b6f2(longlong param_1,double *param_2,longlong param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = (float)(*(int *)(param_1 + 0x160) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
  if (fVar3 <= 1e-08) {
    fVar3 = 1e-08;
  }
  uVar2 = *(int *)(param_1 + 0x160) * -0x4b9b4d07 + 0x9d6f2492;
  *(uint *)(param_1 + 0x160) = uVar2;
  fVar5 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
  if (fVar5 <= 1e-08) {
    fVar5 = 1e-08;
  }
  fVar3 = logf(fVar3);
  fVar3 = fVar3 * -2.0;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  fVar5 = cosf((fVar5 + fVar5) * 3.1415927);
  fVar5 = fVar5 * fVar3;
  if (1.64 <= fVar5) {
    fVar5 = 1.64;
  }
  if (fVar5 <= -1.64) {
    fVar5 = -1.64;
  }
  fVar3 = *(float *)(param_3 + 0x360);
  fVar1 = *(float *)(param_3 + 0x35c);
  uVar2 = *(int *)(param_1 + 0x160) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x160) = uVar2;
  fVar6 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
  if (fVar6 <= 1e-08) {
    fVar6 = 1e-08;
  }
  fVar7 = fVar6 * 3.1415927 + fVar6 * 3.1415927;
  fVar6 = sinf(fVar7);
  fVar7 = cosf(fVar7);
  dVar4 = (double)(param_4 + fVar1 + (fVar5 * fVar3) / 1.64);
  *param_2 = (double)fVar7 * dVar4;
  param_2[1] = (double)fVar6 * dVar4;
  param_2[2] = dVar4 * 0.0;
  return param_2;
}



// FUNCTION 14744b892 FUN_14744b892 body=661 status=ok
// SIG undefined FUN_14744b892(void)

void FUN_14744b892(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x80);
  local_a8 = 0;
  uStack_a0 = 0;
  lVar10 = param_1 + 0x90;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  uStack_80 = 0;
  uStack_90 = lVar10;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar9 = *(int *)(param_1 + 0xa8);
  }
  uStack_b0 = CONCAT44(uStack_7c,uStack_80);
  local_b8 = local_88;
  uVar3 = local_b8;
  local_c8 = (undefined4)local_98;
  uStack_c4 = local_98._4_4_;
  uStack_c0 = (undefined4)uStack_90;
  uStack_bc = uStack_90._4_4_;
  local_b8._4_4_ = (int)((ulonglong)local_88 >> 0x20);
  local_d0 = plVar1;
  if ((local_b8._4_4_ != iVar9) || (uStack_90 != lVar10)) {
    iVar5 = local_b8._4_4_;
    local_b8 = uVar3;
    do {
      lVar7 = *(longlong *)(*local_d0 + (longlong)iVar5 * 0x10);
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) != *(int *)(param_1 + 0x168))
      goto LAB_14744bac9;
      if ((*(char *)(lVar7 + 0x71) == '\x01') &&
         (lVar8 = *(longlong *)(lVar7 + 0x60), *(int *)(param_1 + 0xe0) <= *(int *)(lVar8 + 0x354)))
      {
        cVar4 = FUN_147447d2c(lVar8);
        if (*(char *)(param_1 + 0x164) == cVar4) {
          uVar11 = FUN_147447cfe(lVar8,*(undefined4 *)(lVar7 + 0x38),1);
          uVar12 = FUN_147447c4c(lVar8,uVar11);
          local_88 = *(undefined8 *)(lVar7 + 0x30);
          local_98 = *(undefined8 *)(lVar7 + 0x20);
          uStack_90 = *(longlong *)(lVar7 + 0x28);
          FUN_14744b3fc(param_1,lVar7);
          local_d8 = uVar11;
          lVar7 = FUN_14744b468(param_1,&local_98,uVar12,lVar8);
          uVar2 = uStack_a0;
          if (lVar7 != 0) {
            lVar8 = (longlong)(int)uStack_a0;
            uVar6 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
            if (uStack_a0._4_4_ < uVar6) {
              FUN_14744de38(&local_a8,uVar2 & 0xffffffff);
            }
            *(longlong *)(local_a8 + lVar8 * 8) = lVar7;
          }
        }
      }
      local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~uStack_c4);
      FUN_1449c0562(&local_c8);
      lVar7 = local_a8;
      iVar5 = local_b8._4_4_;
    } while (local_d0 != plVar1 ||
             (CONCAT44(uStack_bc,uStack_c0) != lVar10 || local_b8._4_4_ != iVar9));
    lVar10 = (longlong)(int)uStack_a0;
    uVar3 = local_b8;
    if (lVar10 != 0) {
      lVar8 = 0;
      do {
        local_d0 = *(longlong **)(lVar7 + lVar8);
        FUN_14744debe(plVar1,&local_98,&local_d0);
        lVar8 = lVar8 + 8;
        uVar3 = local_b8;
      } while (lVar10 * 8 != lVar8);
    }
  }
  local_b8 = uVar3;
  FUN_146021726(param_1);
LAB_14744bac9:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744bb28 FUN_14744bb28 body=810 status=ok
// SIG undefined FUN_14744bb28(void)

void FUN_14744bb28(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar1 = (longlong *)(param_1 + 0x80);
  dVar2 = (double)(param_1 + 0x90);
  local_b0 = 2.12199579096527e-314;
  local_a0 = 2.12199579047121e-314;
  uStack_98 = 0;
  local_110 = param_2;
  uStack_a8 = dVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_b0);
    iVar11 = *(int *)(param_1 + 0xa8);
  }
  uStack_b8 = CONCAT44(uStack_94,uStack_98);
  local_c0 = local_a0;
  dVar6 = local_c0;
  local_d0 = (undefined4)local_b0;
  uStack_cc = local_b0._4_4_;
  uStack_c8 = (undefined4)uStack_a8;
  uStack_c4 = uStack_a8._4_4_;
  local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
  local_d8 = plVar1;
  if ((local_c0._4_4_ != iVar11) || (uStack_a8 != dVar2)) {
    local_f8 = param_1 + 0x15c;
    iVar10 = local_c0._4_4_;
    local_c0 = dVar6;
    do {
      lVar4 = *(longlong *)(*local_d8 + (longlong)iVar10 * 0x10);
      dVar6 = local_c0;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) != *(int *)(param_1 + 0x168)) break;
      if ((((*(char *)(lVar4 + 0x71) == '\x01') &&
           (lVar5 = *(longlong *)(lVar4 + 0x60), *(int *)(param_1 + 0xe0) <= *(int *)(lVar5 + 0x354)
           )) && (cVar7 = FUN_147447d2c(lVar5), *(char *)(param_1 + 0x164) == cVar7)) &&
         (0 < *(int *)(lVar5 + 0x364))) {
        iVar10 = 0;
        do {
          uVar12 = FUN_147447cca(lVar5,local_f8);
          uVar14 = FUN_147447c4c(lVar5,uVar12);
          uVar13 = FUN_14744b644(lVar4,uVar12,*(undefined4 *)(param_1 + 0xe0));
          FUN_14744b6f2(param_1,&local_b0,lVar5,uVar13);
          if ((double)((float)uVar13 * (float)uVar13) <
              local_b0 * local_b0 + uStack_a8 * uStack_a8 + 9.99999993922529e-09) {
            local_e0 = local_a0 + *(double *)(lVar4 + 0x30);
            local_e8 = uStack_a8 + *(double *)(lVar4 + 0x28);
            local_f0 = local_b0 + *(double *)(lVar4 + 0x20);
            local_118 = uVar12;
            lVar8 = FUN_14744b468(param_1,&local_f0,uVar14,lVar5);
            if (lVar8 != 0) {
              iVar3 = (int)local_110[1];
              *(uint *)(local_110 + 1) = iVar3 + 1U;
              lVar9 = (longlong)iVar3;
              if (*(uint *)((longlong)local_110 + 0xc) < iVar3 + 1U) {
                local_108 = (longlong)iVar3;
                local_100 = lVar8;
                FUN_14744de38();
                lVar8 = local_100;
                lVar9 = local_108;
              }
              *(longlong *)(*local_110 + lVar9 * 8) = lVar8;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar5 + 0x364));
      }
      local_c0 = (double)CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_cc);
      FUN_1449c0562(&local_d0);
      iVar10 = local_c0._4_4_;
      dVar6 = local_c0;
    } while (local_d8 != plVar1 ||
             ((double)CONCAT44(uStack_c4,uStack_c8) != dVar2 || local_c0._4_4_ != iVar11));
  }
  local_c0 = dVar6;
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14744be54 FUN_14744be54 body=2640 status=ok
// SIG undefined FUN_14744be54(void)

void FUN_14744be54(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  int local_29c;
  longlong *local_298;
  longlong local_290;
  uint *local_288;
  float *local_280;
  undefined8 local_278;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  longlong local_260;
  longlong local_258;
  undefined8 uStack_250;
  uint local_23c;
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  int local_204;
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  int local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  int local_1b4;
  undefined1 local_1b0 [8];
  undefined1 *local_1a8;
  int local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar18 = *(longlong *)(param_1 + 0x28);
  fVar25 = *(float *)(lVar18 + 0x2c);
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_218 = 0;
  local_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_20c = 0xffffffff00000080;
  local_204 = 0;
  local_1f8 = (undefined1 *)0x0;
  local_1f0 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_298 = param_2;
  if ((longlong)*(int *)(lVar18 + 0x48) != 0) {
    lVar14 = *(longlong *)(lVar18 + 0x40);
    lVar18 = (longlong)*(int *)(lVar18 + 0x48) * 0x20 + lVar14;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) != *(int *)(param_1 + 0x168))
      goto LAB_14744bfdb;
      local_260 = FUN_147447b8c(lVar14);
      if ((local_260 != 0) &&
         (cVar8 = FUN_147447d2c(local_260), *(char *)(param_1 + 0x164) == cVar8)) {
        fVar20 = *(float *)(local_260 + 0x358) * *(float *)(local_260 + 0x358) *
                 ((fVar25 * fVar25) / 1e+06);
        local_23c = (int)ROUND(fVar20 + fVar20 + 0.5) >> 1;
        local_288 = (uint *)&local_260;
        local_280 = (float *)&local_23c;
        FUN_14744e3aa(&local_1e8,&local_268,&local_288);
        uVar7 = uStack_250;
        if (0 < (int)local_23c) {
          lVar16 = (longlong)(int)uStack_250;
          uVar9 = (int)uStack_250 + 1;
          uStack_250 = CONCAT44(uStack_250._4_4_,uVar9);
          if (uStack_250._4_4_ < uVar9) {
            FUN_147449a5c(&local_258,uVar7 & 0xffffffff);
          }
          *(longlong *)(local_258 + lVar16 * 8) = local_260;
        }
        local_268 = (float)(*(int *)(*(longlong *)(param_1 + 0x28) + 0x28) +
                            *(int *)(local_260 + 0x368) + *(int *)(param_1 + 0x158));
        local_288 = (uint *)&local_260;
        local_280 = &local_268;
        local_264 = local_268;
        FUN_14744e8a4(&local_238,&local_23c,&local_288);
        local_23c = *(uint *)(local_260 + 0x368);
        fVar20 = (float)FUN_147447c4c();
        local_26c = *(float *)(local_260 + 0x34c) * fVar20;
        if ((int)uStack_190 != local_164) {
          puVar10 = local_158;
          if (local_158 == (undefined1 *)0x0) {
            puVar10 = local_160;
          }
          iVar5 = *(int *)(puVar10 + (ulonglong)(local_150 - 1U & local_23c) * 4);
          while (iVar5 != -1) {
            lVar16 = local_198 + (longlong)iVar5 * 0x10;
            if (*(uint *)(local_198 + (longlong)iVar5 * 0x10) == local_23c) {
              pfVar12 = (float *)(lVar16 + 4);
              if (pfVar12 != (float *)0x0 && lVar16 != 0) {
                fVar1 = *pfVar12;
                if (*pfVar12 <= local_26c) {
                  fVar1 = local_26c;
                }
                *pfVar12 = fVar1;
                goto LAB_14744c2db;
              }
              break;
            }
            iVar5 = *(int *)(lVar16 + 8);
          }
        }
        local_280 = &local_26c;
        local_288 = &local_23c;
        FUN_14172c3b4(&local_198,&local_268,&local_288,0);
LAB_14744c2db:
        local_270 = fVar20 * *(float *)(local_260 + 0x350);
        if ((int)uStack_140 != local_114) {
          puVar10 = local_108;
          if (local_108 == (undefined1 *)0x0) {
            puVar10 = local_110;
          }
          iVar5 = *(int *)(puVar10 + (ulonglong)(local_100 - 1U & local_23c) * 4);
          while (iVar5 != -1) {
            lVar16 = local_148 + (longlong)iVar5 * 0x10;
            if (*(uint *)(local_148 + (longlong)iVar5 * 0x10) == local_23c) {
              pfVar12 = (float *)(lVar16 + 4);
              if (pfVar12 != (float *)0x0 && lVar16 != 0) {
                fVar20 = *pfVar12;
                if (*pfVar12 <= local_270) {
                  fVar20 = local_270;
                }
                *pfVar12 = fVar20;
                goto LAB_14744c18a;
              }
              break;
            }
            iVar5 = *(int *)(lVar16 + 8);
          }
        }
        local_280 = &local_270;
        local_288 = &local_23c;
        FUN_14172c3b4(&local_148,&local_268,&local_288,0);
      }
LAB_14744c18a:
      lVar14 = lVar14 + 0x20;
    } while (lVar14 != lVar18);
    iVar5 = (int)uStack_250;
    if (0 < (int)uStack_250) {
      local_29c = *(int *)(param_1 + 0xd8);
      local_290 = param_1 + 0x15c;
      fVar25 = (float)local_29c;
      iVar13 = -1;
      iVar17 = (int)uStack_250;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) != *(int *)(param_1 + 0x168)) break;
        iVar13 = (iVar13 + 1) % iVar5;
        uVar7 = *(ulonglong *)(local_258 + (longlong)iVar13 * 8);
        if (uVar7 != 0) {
          if ((int)uStack_1e0 != local_1b4) {
            uVar9 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            puVar10 = local_1a8;
            if (local_1a8 == (undefined1 *)0x0) {
              puVar10 = local_1b0;
            }
            iVar6 = *(int *)(puVar10 + (ulonglong)(local_1a0 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            while (iVar6 != -1) {
              puVar15 = (ulonglong *)(local_1e8 + (longlong)iVar6 * 0x18);
              if (*puVar15 == uVar7) goto LAB_14744c4c1;
              iVar6 = (int)puVar15[2];
            }
          }
          puVar15 = (ulonglong *)0x0;
LAB_14744c4c1:
          if ((int)puVar15[1] != 0) {
            uVar19 = FUN_147447cca(uVar7,local_290);
            fVar20 = (float)FUN_147447c4c(uVar7);
            if ((int)uStack_230 != local_204) {
              uVar9 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              puVar10 = local_1f8;
              if (local_1f8 == (undefined1 *)0x0) {
                puVar10 = local_200;
              }
              iVar6 = *(int *)(puVar10 + (ulonglong)(local_1f0 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
              while (iVar6 != -1) {
                puVar11 = (ulonglong *)(local_238 + (longlong)iVar6 * 0x18);
                if (*puVar11 == uVar7) goto LAB_14744c5c3;
                iVar6 = (int)puVar11[2];
              }
            }
            puVar11 = (ulonglong *)0x0;
LAB_14744c5c3:
            if ((local_29c < 1) || (*(char *)(param_1 + 0x164) == '\0')) {
              fVar20 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x2c);
              iVar6 = *(int *)((longlong)puVar11 + 0xc);
              uVar9 = iVar6 * 0xbb38435 + 0x3619636b;
              *(uint *)((longlong)puVar11 + 0xc) = uVar9;
              dVar3 = (double)((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * (double)fVar20 + 0.0;
              fVar20 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x2c);
              uVar9 = iVar6 * -0x4b9b4d07 + 0x9d6f2492;
              *(uint *)((longlong)puVar11 + 0xc) = uVar9;
              dVar4 = (double)((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * (double)fVar20 + 0.0;
              fVar20 = 0.0;
              if ((int)uStack_140 != local_114) {
                puVar10 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar10 = local_110;
                }
                iVar6 = *(int *)(puVar10 +
                                (ulonglong)(local_100 - 1U & *(uint *)(uVar7 + 0x368)) * 4);
                while (iVar6 != -1) {
                  lVar18 = local_148 + (longlong)iVar6 * 0x10;
                  if (*(uint *)(local_148 + (longlong)iVar6 * 0x10) == *(uint *)(uVar7 + 0x368)) {
                    if (lVar18 != 0) {
                      fVar20 = *(float *)(lVar18 + 4);
                    }
                    break;
                  }
                  iVar6 = *(int *)(lVar18 + 8);
                }
              }
            }
            else {
              uVar9 = *(int *)((longlong)puVar11 + 0xc) * 0xbb38435 + 0x3619636b;
              *(uint *)((longlong)puVar11 + 0xc) = uVar9;
              lVar18 = *(longlong *)(param_1 + 0xd0);
              lVar14 = (longlong)(int)(((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * fVar25) * 0x80;
              dVar3 = *(double *)(lVar18 + 0x20 + lVar14);
              dVar4 = *(double *)(lVar18 + 0x28 + lVar14);
              fVar1 = *(float *)(*(longlong *)(lVar18 + 0x60 + lVar14) + 0x34c);
              fVar2 = *(float *)(lVar18 + 0x58 + lVar14);
              fVar21 = (float)FUN_147447c4c();
              fVar20 = (fVar21 + fVar20) * fVar1 * fVar2;
            }
            uVar9 = *(int *)(param_1 + 0x160) * 0xbb38435 + 0x3619636b;
            *(uint *)(param_1 + 0x160) = uVar9;
            dVar23 = (double)((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * 6.2831854820251465 + 0.0;
            dVar22 = sin(dVar23);
            dVar23 = cos(dVar23);
            fVar1 = *(float *)(uVar7 + 0x36c);
            uVar9 = *(int *)(param_1 + 0x160) * 0xbb38435 + 0x3619636b;
            *(uint *)(param_1 + 0x160) = uVar9;
            dVar24 = (double)fVar20 +
                     (double)((float)(uVar9 >> 9 | 0x3f800000) + -1.0) * (double)fVar1 + 0.0;
            local_280 = (float *)(dVar22 * dVar24 + dVar4);
            local_288 = (uint *)(dVar24 * dVar23 + dVar3);
            local_278 = 0;
            local_2a8 = uVar19;
            lVar18 = FUN_14744b468(param_1,&local_288);
            if (lVar18 != 0) {
              iVar6 = (int)local_298[1];
              *(uint *)(local_298 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)local_298 + 0xc) < iVar6 + 1U) {
                FUN_14744de38(local_298,iVar6);
              }
              *(longlong *)(*local_298 + (longlong)iVar6 * 8) = lVar18;
            }
            puVar15 = puVar15 + 1;
            *(int *)puVar15 = (int)*puVar15 + -1;
            iVar17 = iVar17 - (uint)((int)*puVar15 == 0);
          }
        }
      } while (0 < iVar17);
    }
  }
LAB_14744bfdb:
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  local_1f0 = 0;
  if (local_1f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14744d11a(&local_238);
  local_1a0 = 0;
  if (local_1a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14744d1a8(&local_1e8);
  local_150 = 0;
  if (local_158 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(&local_198);
  local_100 = 0;
  if (local_108 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(&local_148);
  if ((local_f0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744c8a6 FUN_14744c8a6 body=534 status=ok
// SIG undefined FUN_14744c8a6(void)

void FUN_14744c8a6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  local_a0 = (longlong *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != iVar8) {
    FUN_14744eda0(local_a0);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar2 = param_1 + 0x90;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0xa8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_98 = param_1;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      puVar6 = *(undefined8 **)(*local_90 + (longlong)iStack_74 * 0x10);
      if (*(char *)(puVar6 + 0xe) == '\0') {
        iVar4 = *(int *)(local_98 + 0xd8);
        *(uint *)(local_98 + 0xd8) = iVar4 + 1U;
        if (*(uint *)(local_98 + 0xdc) < iVar4 + 1U) {
          FUN_14744ee00(local_a0,iVar4);
        }
        lVar5 = *local_a0;
        lVar11 = (longlong)iVar4 * 0x80;
        puVar3 = (undefined8 *)(lVar5 + lVar11);
        *(undefined4 *)(lVar5 + 0x58 + lVar11) = *(undefined4 *)(puVar6 + 0xb);
        puVar9 = puVar6;
        puVar10 = puVar3;
        for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        lVar7 = puVar6[0xc];
        *(longlong *)(lVar5 + 0x60 + lVar11) = lVar7;
        if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
          FUN_1456cec3c();
        }
        *(undefined2 *)(puVar3 + 0xe) = *(undefined2 *)(puVar6 + 0xe);
        puVar3[0xd] = puVar6[0xd];
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14744cabe FUN_14744cabe body=79 status=ok
// SIG undefined FUN_14744cabe(void)

void FUN_14744cabe(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x71) == '\x01') {
    FUN_14744a6d2(param_1 + 0xe8,param_2);
    *(undefined1 *)(param_2 + 0x71) = 0;
  }
  FUN_14744cb0e(param_1 + 0x80,param_2);
  if (param_2 != 0) {
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 14744cb0e FUN_14744cb0e body=132 status=ok
// SIG undefined FUN_14744cb0e(void)

void FUN_14744cb0e(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14744ee86(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14744cb92 FUN_14744cb92 body=183 status=ok
// SIG undefined FUN_14744cb92(void)

void FUN_14744cb92(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) == *(int *)(param_1 + 0x168)) {
    local_28 = 0;
    uStack_20 = 0;
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_14744be54(param_1,&local_28);
    }
    else {
      FUN_14744b892(param_1);
      FUN_14744bb28(param_1,&local_28);
    }
    local_38 = local_28;
    local_30 = (undefined4)uStack_20;
    FUN_14744cc4a(param_1 + 0x80);
    FUN_146021726(param_1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744cc4a FUN_14744cc4a body=193 status=ok
// SIG undefined FUN_14744cc4a(void)

void FUN_14744cc4a(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_14744eee0(param_1,uVar3);
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
      FUN_14744e1cc(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_14744debe(param_1,local_2c,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744cd0e FUN_14744cd0e body=176 status=ok
// SIG undefined FUN_14744cd0e(void)

void FUN_14744cd0e(longlong param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x48);
  iVar4 = 0;
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40);
    lVar5 = lVar5 << 5;
    iVar4 = 0;
    do {
      lVar3 = FUN_147447b8c(lVar6);
      if (lVar3 != 0) {
        cVar1 = FUN_147447d2c(lVar3);
        if (cVar1 == param_3) {
          iVar2 = *(int *)(lVar3 + 0x354) + 1;
          if (iVar4 < iVar2) {
            iVar4 = iVar2;
          }
        }
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  iVar2 = param_2;
  if (iVar4 < param_2) {
    iVar2 = iVar4;
  }
  if (param_2 < 0) {
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(char *)(param_1 + 0x164) = param_3;
  if (0 < iVar2) {
    do {
      FUN_14744cb92(param_1);
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_14744c8a6(param_1);
  return;
}



// FUNCTION 14744cdbe FUN_14744cdbe body=243 status=ok
// SIG undefined FUN_14744cdbe(void)

void FUN_14744cdbe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  switchD_143c3d4dc::caseD_38();
  lVar1 = param_1 + 0x80;
  lVar2 = param_1 + 0x90;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0xa8);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = lVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      do {
        FUN_14484255c(param_2,0x80);
        local_60 = local_60 & ~uStack_6c;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar3);
    } while ((CONCAT44(uStack_64,uStack_68) != lVar2) || (local_78 != lVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744ced4 FUN_14744ced4 body=45 status=ok
// SIG undefined FUN_14744ced4(void)

longlong FUN_14744ced4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744cfa0 FUN_14744cfa0 body=164 status=ok
// SIG undefined FUN_14744cfa0(void)

undefined8 FUN_14744cfa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = param_3 + 0x68 + lVar7;
      puVar1 = (undefined8 *)(param_2 + lVar7);
      *(undefined4 *)(param_2 + 0x58 + lVar7) = *(undefined4 *)(lVar3 + -0x10);
      puVar5 = (undefined8 *)(lVar3 + -0x68);
      puVar6 = puVar1;
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar3 = *(longlong *)(lVar3 + -8);
      if ((bVar4 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + 0x60 + lVar7);
          bVar4 = DAT_14c950c29;
        }
      }
      puVar1[0xc] = lVar3;
      puVar1[0xd] = *(undefined8 *)(param_3 + 0x68 + lVar7);
      *(undefined2 *)(puVar1 + 0xe) = *(undefined2 *)(param_3 + 0x70 + lVar7);
      lVar7 = lVar7 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14744d06c FUN_14744d06c body=59 status=ok
// SIG undefined FUN_14744d06c(void)

undefined8 FUN_14744d06c(longlong *param_1)

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



// FUNCTION 14744d11a FUN_14744d11a body=52 status=ok
// SIG undefined FUN_14744d11a(void)

void FUN_14744d11a(longlong *param_1)

{
  FUN_14744d14e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14744d14e FUN_14744d14e body=89 status=ok
// SIG undefined FUN_14744d14e(void)

void FUN_14744d14e(longlong param_1)

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



// FUNCTION 14744d1a8 FUN_14744d1a8 body=52 status=ok
// SIG undefined FUN_14744d1a8(void)

void FUN_14744d1a8(longlong *param_1)

{
  FUN_14744d1dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14744d1dc FUN_14744d1dc body=89 status=ok
// SIG undefined FUN_14744d1dc(void)

void FUN_14744d1dc(longlong param_1)

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



// FUNCTION 14744d236 FUN_14744d236 body=89 status=ok
// SIG undefined FUN_14744d236(void)

undefined8 * FUN_14744d236(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14744d290(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 14744d290 FUN_14744d290 body=115 status=ok
// SIG undefined FUN_14744d290(void)

void FUN_14744d290(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14744d304 FUN_14744d304 body=142 status=ok
// SIG undefined FUN_14744d304(void)

ulonglong FUN_14744d304(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar9 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar9 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar7 = uVar9;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar9 + 1);
      param_3[uVar9] = *(undefined8 *)(param_1 + 0x18);
    }
  }
  return uVar7;
}



// FUNCTION 14744d392 FUN_14744d392 body=1115 status=ok
// SIG undefined FUN_14744d392(void)

void FUN_14744d392(void **param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  void **ppvVar22;
  longlong lVar23;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  void *local_118;
  undefined8 uStack_110;
  void **local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pvVar4 = param_1[9];
  pvVar5 = param_1[6];
  pvVar6 = param_1[7];
  pvVar7 = param_1[8];
  local_120 = ((double)pvVar4 - (double)pvVar6) * 0.5;
  dVar10 = ((double)pvVar7 - (double)pvVar5) * 0.5;
  pvVar8 = param_1[0xb];
  pvVar9 = param_1[0xc];
  dVar11 = local_120 + (double)pvVar9;
  dVar12 = (double)pvVar8 - dVar10;
  dVar10 = dVar10 + (double)pvVar8;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xd);
  local_128 = (double)pvVar9 + 0.0;
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = dVar12;
  puVar20[7] = pvVar9;
  puVar20[8] = (double)pvVar8 + 0.0;
  puVar20[9] = dVar11;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = ((double)pvVar8 + 0.0 + dVar12) * 0.5;
  puVar20[0xc] = (dVar11 + (double)pvVar9) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  param_1[2] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = pvVar8;
  puVar20[7] = pvVar9;
  puVar20[8] = pvVar7;
  puVar20[9] = pvVar4;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = ((double)pvVar7 + (double)pvVar8) * 0.5;
  puVar20[0xc] = ((double)pvVar4 + (double)pvVar9) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[3] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = pvVar5;
  puVar20[7] = pvVar6;
  puVar20[8] = pvVar8;
  puVar20[9] = pvVar9;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = ((double)pvVar5 + (double)pvVar8) * 0.5;
  puVar20[0xc] = ((double)pvVar6 + (double)pvVar9) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[4] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = pvVar8;
  puVar20[7] = (double)pvVar9 - local_120;
  puVar20[8] = dVar10;
  puVar20[9] = local_128;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = (dVar10 + (double)pvVar8) * 0.5;
  puVar20[0xc] = (((double)pvVar9 - local_120) + local_128) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[5] = puVar20;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  local_118 = (void *)0x0;
  uStack_110 = 0;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar20 = *param_1;
    lVar23 = (longlong)*(int *)(param_1 + 1) * 0x30;
    do {
      iVar19 = FUN_14744d304(param_1,puVar20,local_108);
      ppvVar22 = local_108[0];
      uVar18 = uStack_110;
      if (iVar19 == 1) {
        iVar19 = *(int *)(local_108[0] + 1);
        *(uint *)(local_108[0] + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)local_108[0] + 0xc) < iVar19 + 1U) {
          FUN_14744d7ee(local_108[0],iVar19);
        }
      }
      else {
        iVar19 = (int)uStack_110;
        uVar1 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar1);
        ppvVar22 = &local_118;
        if (uStack_110._4_4_ < uVar1) {
          FUN_14744d7ee(&local_118,uVar18 & 0xffffffff);
        }
      }
      pvVar4 = *ppvVar22;
      lVar21 = (longlong)iVar19 * 0x30;
      uVar13 = *puVar20;
      uVar14 = puVar20[1];
      uVar15 = puVar20[2];
      uVar16 = puVar20[3];
      uVar17 = puVar20[5];
      puVar2 = (undefined8 *)((longlong)pvVar4 + lVar21 + 0x20);
      *puVar2 = puVar20[4];
      puVar2[1] = uVar17;
      puVar2 = (undefined8 *)((longlong)pvVar4 + lVar21 + 0x10);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      *(undefined8 *)((longlong)pvVar4 + lVar21) = uVar13;
      ((undefined8 *)((longlong)pvVar4 + lVar21))[1] = uVar14;
      puVar20 = puVar20 + 6;
      lVar23 = lVar23 + -0x30;
    } while (lVar23 != 0);
  }
  pvVar4 = local_118;
  if (&local_118 != param_1) {
    iVar19 = (int)uStack_110;
    lVar23 = (longlong)(int)uStack_110;
    *(int *)(param_1 + 1) = (int)uStack_110;
    if ((int)uStack_110 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14744d290(param_1,uStack_110 & 0xffffffff);
      if (iVar19 != 0) {
        memcpy(*param_1,pvVar4,lVar23 * 0x30);
      }
    }
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14744d7ee FUN_14744d7ee body=147 status=ok
// SIG undefined FUN_14744d7ee(void)

void FUN_14744d7ee(longlong param_1,int param_2)

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



// FUNCTION 14744d882 FUN_14744d882 body=206 status=ok
// SIG undefined FUN_14744d882(void)

void FUN_14744d882(longlong *param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = (int)param_1[1];
  iVar5 = (int)param_3[1] + iVar4;
  if (-1 < iVar5) {
    if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
      FUN_14744f07e(param_3);
      iVar4 = (int)param_1[1];
    }
    if (iVar4 != 0) {
      lVar3 = *param_1;
      lVar6 = 0;
      do {
        pdVar1 = (double *)(lVar3 + 0x10 + lVar6);
        if ((((*param_2 < *pdVar1 || *param_2 == *pdVar1) &&
             (*(double *)(lVar3 + lVar6) < param_2[2] || *(double *)(lVar3 + lVar6) == param_2[2]))
            && (pdVar1 = (double *)(lVar3 + 0x18 + lVar6),
               param_2[1] < *pdVar1 || param_2[1] == *pdVar1)) &&
           (dVar2 = *(double *)(lVar3 + 8 + lVar6), dVar2 < param_2[3] || dVar2 == param_2[3])) {
          iVar5 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
            FUN_14744de38(param_3,iVar5);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 + 0x28 + lVar6);
        }
        lVar6 = lVar6 + 0x30;
      } while ((longlong)iVar4 * 0x30 != lVar6);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 14744d952 FUN_14744d952 body=112 status=ok
// SIG undefined FUN_14744d952(void)

void FUN_14744d952(longlong param_1,uint param_2)

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



// FUNCTION 14744d9c2 FUN_14744d9c2 body=147 status=ok
// SIG undefined FUN_14744d9c2(void)

void FUN_14744d9c2(longlong param_1,int param_2)

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



// FUNCTION 14744da56 FUN_14744da56 body=158 status=ok
// SIG undefined FUN_14744da56(void)

ulonglong FUN_14744da56(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  int iVar8;
  longlong *plVar9;
  
  iVar3 = (int)param_1[1];
  uVar4 = (ulonglong)iVar3;
  if ((longlong)uVar4 < 1) {
LAB_14744da9b:
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*(longlong *)(lVar1 + 0x28) == *param_2) {
      uVar4 = CONCAT71(uVar7,1);
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      plVar9 = (longlong *)(lVar1 + 0x58);
      do {
        if (uVar4 - 1 == uVar5) goto LAB_14744da9b;
        uVar5 = uVar5 + 1;
        lVar2 = *plVar9;
        plVar9 = plVar9 + 6;
      } while (lVar2 != *param_2);
      uVar4 = CONCAT71(uVar7,uVar5 < uVar4);
    }
    iVar6 = ~(uint)uVar5 + iVar3;
    if (iVar6 != 0) {
      iVar8 = 1;
      if (iVar6 < 1) {
        iVar8 = iVar6;
      }
      memmove((void *)((uVar5 & 0xffffffff) * 0x30 + lVar1),
              (void *)((ulonglong)(uint)(iVar3 - iVar8) * 0x30 + lVar1),(longlong)iVar8 * 0x30);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14744daf4 FUN_14744daf4 body=48 status=ok
// SIG undefined FUN_14744daf4(void)

void FUN_14744daf4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14744db24 FUN_14744db24 body=73 status=ok
// SIG undefined FUN_14744db24(void)

void FUN_14744db24(longlong param_1,int param_2)

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



// FUNCTION 14744db6e FUN_14744db6e body=130 status=ok
// SIG undefined FUN_14744db6e(void)

longlong * FUN_14744db6e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a3a6db0;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
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
  return param_1;
}



// FUNCTION 14744dbf0 FUN_14744dbf0 body=15 status=ok
// SIG undefined FUN_14744dbf0(void)

void FUN_14744dbf0(longlong param_1)

{
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 14744dc00 FUN_14744dc00 body=29 status=ok
// SIG undefined FUN_14744dc00(void)

undefined8 FUN_14744dc00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744dc1e FUN_14744dc1e body=92 status=ok
// SIG undefined FUN_14744dc1e(void)

void FUN_14744dc1e(longlong *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  uVar2 = (*pcVar1)(uVar2);
  *(undefined8 *)(param_1[10] + 0x80) = uVar2;
  FUN_140b576f0();
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014744dc6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14744dc7c FUN_14744dc7c body=38 status=ok
// SIG undefined FUN_14744dc7c(void)

undefined8 FUN_14744dc7c(undefined8 param_1,int param_2)

{
  FUN_14744dca2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744dca2 FUN_14744dca2 body=138 status=ok
// SIG undefined FUN_14744dca2(void)

void FUN_14744dca2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a3a6dd0;
  plVar4 = (longlong *)param_1[0xb];
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014744dd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 14744dd2c FUN_14744dd2c body=132 status=ok
// SIG undefined FUN_14744dd2c(void)

void FUN_14744dd2c(longlong param_1,int param_2)

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



// FUNCTION 14744ddb2 FUN_14744ddb2 body=132 status=ok
// SIG undefined FUN_14744ddb2(void)

void FUN_14744ddb2(longlong param_1,int param_2)

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



// FUNCTION 14744de38 FUN_14744de38 body=132 status=ok
// SIG undefined FUN_14744de38(void)

void FUN_14744de38(longlong param_1,int param_2)

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



// FUNCTION 14744debe FUN_14744debe body=312 status=ok
// SIG undefined FUN_14744debe(void)

undefined4 * FUN_14744debe(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14744dff8(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14744e0de(param_1,uVar3,local_40,&local_4c);
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
      FUN_14744e1cc(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744dff8 FUN_14744dff8 body=229 status=ok
// SIG undefined FUN_14744dff8(void)

int * FUN_14744dff8(longlong *param_1,int *param_2)

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



// FUNCTION 14744e0de FUN_14744e0de body=124 status=ok
// SIG undefined FUN_14744e0de(void)

undefined8 FUN_14744e0de(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14744e15a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14744e15a FUN_14744e15a body=114 status=ok
// SIG undefined FUN_14744e15a(void)

void FUN_14744e15a(longlong *param_1,int param_2)

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



// FUNCTION 14744e1cc FUN_14744e1cc body=477 status=ok
// SIG undefined FUN_14744e1cc(void)

void FUN_14744e1cc(longlong *param_1)

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



// FUNCTION 14744e3aa FUN_14744e3aa body=324 status=ok
// SIG undefined FUN_14744e3aa(void)

undefined4 * FUN_14744e3aa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_14744e4f0(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14744e5d6(param_1,uVar4,local_40,&local_4c);
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
      FUN_14744e6c8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744e4f0 FUN_14744e4f0 body=230 status=ok
// SIG undefined FUN_14744e4f0(void)

int * FUN_14744e4f0(longlong *param_1,int *param_2)

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



// FUNCTION 14744e5d6 FUN_14744e5d6 body=128 status=ok
// SIG undefined FUN_14744e5d6(void)

undefined8 FUN_14744e5d6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14744e656((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14744e656 FUN_14744e656 body=114 status=ok
// SIG undefined FUN_14744e656(void)

void FUN_14744e656(longlong *param_1,int param_2)

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



// FUNCTION 14744e6c8 FUN_14744e6c8 body=474 status=ok
// SIG undefined FUN_14744e6c8(void)

void FUN_14744e6c8(longlong *param_1)

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



// FUNCTION 14744e8a4 FUN_14744e8a4 body=326 status=ok
// SIG undefined FUN_14744e8a4(void)

undefined4 * FUN_14744e8a4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14744e9ec(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14744ead2(param_1,uVar4,local_40,&local_4c);
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
      FUN_14744ebc4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744e9ec FUN_14744e9ec body=230 status=ok
// SIG undefined FUN_14744e9ec(void)

int * FUN_14744e9ec(longlong *param_1,int *param_2)

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



// FUNCTION 14744ead2 FUN_14744ead2 body=128 status=ok
// SIG undefined FUN_14744ead2(void)

undefined8 FUN_14744ead2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14744eb52((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14744eb52 FUN_14744eb52 body=114 status=ok
// SIG undefined FUN_14744eb52(void)

void FUN_14744eb52(longlong *param_1,int param_2)

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



// FUNCTION 14744ebc4 FUN_14744ebc4 body=474 status=ok
// SIG undefined FUN_14744ebc4(void)

void FUN_14744ebc4(longlong *param_1)

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



// FUNCTION 14744eda0 FUN_14744eda0 body=95 status=ok
// SIG undefined FUN_14744eda0(void)

void FUN_14744eda0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 14744ee00 FUN_14744ee00 body=132 status=ok
// SIG undefined FUN_14744ee00(void)

void FUN_14744ee00(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14744ee86 FUN_14744ee86 body=90 status=ok
// SIG undefined FUN_14744ee86(void)

void FUN_14744ee86(longlong *param_1,int param_2)

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
  FUN_14744e15a();
  return;
}



// FUNCTION 14744eee0 FUN_14744eee0 body=413 status=ok
// SIG undefined FUN_14744eee0(void)

void FUN_14744eee0(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
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



// FUNCTION 14744f07e FUN_14744f07e body=95 status=ok
// SIG undefined FUN_14744f07e(void)

void FUN_14744f07e(longlong param_1,uint param_2)

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



// FUNCTION 14744f0fa FUN_14744f0fa body=236 status=ok
// SIG undefined FUN_14744f0fa(void)

void FUN_14744f0fa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14745c1de(param_1,&local_38,local_24 != 0);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744f1f0 FUN_14744f1f0 body=493 status=ok
// SIG undefined FUN_14744f1f0(void)

void FUN_14744f1f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_168 [32];
  undefined8 local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  uVar1 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = local_b0;
  uStack_e4 = uStack_ac;
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  local_d8 = local_a0;
  uStack_d4 = uStack_9c;
  uStack_d0 = uStack_98;
  uStack_cc = uStack_94;
  local_c8 = local_90;
  puVar4 = local_88;
  puVar5 = local_148;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_147454b98(param_1,local_148,&local_e8,uVar1);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744f3e6 FUN_14744f3e6 body=593 status=ok
// SIG undefined FUN_14744f3e6(void)

void FUN_14744f3e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_148 [12];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  uVar1 = local_b8;
  local_158 = local_c0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = local_b0;
  uStack_e4 = uStack_ac;
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  local_d8 = local_a0;
  uStack_d4 = uStack_9c;
  uStack_d0 = uStack_98;
  uStack_cc = uStack_94;
  local_c8 = local_90;
  puVar4 = local_88;
  puVar5 = local_148;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar2 = FUN_147454be0(param_1,local_148,&local_e8,uVar1);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744f640 FUN_14744f640 body=627 status=ok
// SIG undefined FUN_14744f640(void)

void FUN_14744f640(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168 [12];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8 [3];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  plVar5 = local_d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_178 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = local_c0;
  uStack_104 = uStack_bc;
  uStack_100 = uStack_b8;
  uStack_fc = uStack_b4;
  local_f8 = local_b0;
  uStack_f4 = uStack_ac;
  uStack_f0 = uStack_a8;
  uStack_ec = uStack_a4;
  local_e8 = local_a0;
  puVar3 = local_98;
  puVar4 = local_168;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = thunk_FUN_143244f94(param_1,local_168,&local_108,plVar5);
  *param_3 = uVar1;
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744f8bc FUN_14744f8bc body=263 status=ok
// SIG undefined FUN_14744f8bc(void)

void FUN_14744f8bc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147455ad2(param_1,puVar2,local_48);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744f9c4 FUN_14744f9c4 body=263 status=ok
// SIG undefined FUN_14744f9c4(void)

void FUN_14744f9c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147455ace(param_1,puVar2,local_48);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744facc FUN_14744facc body=162 status=ok
// SIG undefined FUN_14744facc(void)

void FUN_14744facc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1474534e2(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744fb70 FUN_14744fb70 body=154 status=ok
// SIG undefined FUN_14744fb70(void)

void FUN_14744fb70(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_147453518(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744fc0c FUN_14744fc0c body=154 status=ok
// SIG undefined FUN_14744fc0c(void)

void FUN_14744fc0c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14745357e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744fcba FUN_14744fcba body=75 status=ok
// SIG undefined FUN_14744fcba(void)

void FUN_14744fcba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_143243612(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14744fda8 FUN_14744fda8 body=45 status=ok
// SIG undefined FUN_14744fda8(void)

longlong FUN_14744fda8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744fdd6 FUN_14744fdd6 body=48 status=ok
// SIG undefined FUN_14744fdd6(void)

longlong FUN_14744fdd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744fe06 FUN_14744fe06 body=48 status=ok
// SIG undefined FUN_14744fe06(void)

longlong FUN_14744fe06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744fe36 FUN_14744fe36 body=48 status=ok
// SIG undefined FUN_14744fe36(void)

longlong FUN_14744fe36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744fe78 FUN_14744fe78 body=45 status=ok
// SIG undefined FUN_14744fe78(void)

undefined8 FUN_14744fe78(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/StreamableRenderAsset.h",0x35,
                L"UStreamableRenderAsset::%s has no default implementation",L"CalcCumulativeLODSize"
               );
  return 0xffffffff;
}



// FUNCTION 14744fea6 FUN_14744fea6 body=42 status=ok
// SIG undefined FUN_14744fea6(void)

undefined8 FUN_14744fea6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/StreamableRenderAsset.h",0x3b,
                L"UStreamableRenderAsset::%s has no default implementation",L"GetMipIoFilenameHash")
  ;
  return 0;
}



// FUNCTION 14744fed0 FUN_14744fed0 body=42 status=ok
// SIG undefined FUN_14744fed0(void)

undefined8 FUN_14744fed0(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/StreamableRenderAsset.h",0x41,
                L"UStreamableRenderAsset::%s has no default implementation",L"DoesMipDataExist");
  return 0;
}



// FUNCTION 14744fefa FUN_14744fefa body=42 status=ok
// SIG undefined FUN_14744fefa(void)

undefined8 FUN_14744fefa(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/StreamableRenderAsset.h",0x56,
                L"UStreamableRenderAsset::%s has no default implementation",L"StreamOut");
  return 0;
}



// FUNCTION 14744ff24 FUN_14744ff24 body=42 status=ok
// SIG undefined FUN_14744ff24(void)

undefined8 FUN_14744ff24(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/StreamableRenderAsset.h",99,
                L"UStreamableRenderAsset::%s has no default implementation",L"StreamIn");
  return 0;
}



// FUNCTION 14744ff56 FUN_14744ff56 body=45 status=ok
// SIG undefined FUN_14744ff56(void)

longlong FUN_14744ff56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c853e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744ff84 FUN_14744ff84 body=48 status=ok
// SIG undefined FUN_14744ff84(void)

longlong FUN_14744ff84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140c853e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744ffb4 FUN_14744ffb4 body=48 status=ok
// SIG undefined FUN_14744ffb4(void)

longlong FUN_14744ffb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140c853e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14744ffe4 FUN_14744ffe4 body=48 status=ok
// SIG undefined FUN_14744ffe4(void)

longlong FUN_14744ffe4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140c853e8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147450014 FUN_147450014 body=42 status=ok
// SIG undefined FUN_147450014(void)

undefined1 FUN_147450014(void)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",0x5e,
                L"Pure virtual not implemented (%s)",L"ULandscapeEditLayerBase::SupportsTargetType")
  ;
  return 1;
}



// FUNCTION 14745003e FUN_14745003e body=42 status=ok
// SIG undefined FUN_14745003e(void)

undefined8 FUN_14745003e(void)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",100,
                L"Pure virtual not implemented (%s)",
                L"ULandscapeEditLayerBase::NeedsPersistentTextures");
  return 0;
}



// FUNCTION 147450068 FUN_147450068 body=42 status=ok
// SIG undefined FUN_147450068(void)

undefined1 FUN_147450068(void)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",0x6a,
                L"Pure virtual not implemented (%s)",
                L"ULandscapeEditLayerBase::SupportsEditingTools");
  return 1;
}



// FUNCTION 147450092 FUN_147450092 body=42 status=ok
// SIG undefined FUN_147450092(void)

undefined1 FUN_147450092(void)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",0x70,
                L"Pure virtual not implemented (%s)",L"ULandscapeEditLayerBase::SupportsMultiple");
  return 1;
}



// FUNCTION 1474500bc FUN_1474500bc body=42 status=ok
// SIG undefined FUN_1474500bc(void)

undefined1 FUN_1474500bc(void)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",0x76,
                L"Pure virtual not implemented (%s)",
                L"ULandscapeEditLayerBase::SupportsBeingCollapsedAway");
  return 1;
}



// FUNCTION 1474500e6 FUN_1474500e6 body=42 status=ok
// SIG undefined FUN_1474500e6(void)

undefined1 FUN_1474500e6(void)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",0x7c,
                L"Pure virtual not implemented (%s)",
                L"ULandscapeEditLayerBase::SupportsCollapsingTo");
  return 1;
}



// FUNCTION 147450110 FUN_147450110 body=54 status=ok
// SIG undefined FUN_147450110(void)

undefined8 * FUN_147450110(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/Landscape/Classes/LandscapeEditLayer.h",0x82,
                L"Pure virtual not implemented (%s)",L"ULandscapeEditLayerBase::GetDefaultName");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14745015e FUN_14745015e body=45 status=ok
// SIG undefined FUN_14745015e(void)

longlong FUN_14745015e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745019e FUN_14745019e body=32 status=ok
// SIG undefined FUN_14745019e(void)

undefined8 FUN_14745019e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Layer");
  return param_2;
}



// FUNCTION 1474501be FUN_1474501be body=45 status=ok
// SIG undefined FUN_1474501be(void)

longlong FUN_1474501be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147450208 FUN_147450208 body=32 status=ok
// SIG undefined FUN_147450208(void)

undefined8 FUN_147450208(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Splines");
  return param_2;
}



// FUNCTION 147450228 FUN_147450228 body=45 status=ok
// SIG undefined FUN_147450228(void)

longlong FUN_147450228(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745025a FUN_14745025a body=45 status=ok
// SIG undefined FUN_14745025a(void)

longlong FUN_14745025a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147450288 FUN_147450288 body=48 status=ok
// SIG undefined FUN_147450288(void)

longlong FUN_147450288(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474502b8 FUN_1474502b8 body=48 status=ok
// SIG undefined FUN_1474502b8(void)

longlong FUN_1474502b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474502e8 FUN_1474502e8 body=48 status=ok
// SIG undefined FUN_1474502e8(void)

longlong FUN_1474502e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147450380 FUN_147450380 body=59 status=ok
// SIG undefined FUN_147450380(void)

undefined8 FUN_147450380(longlong *param_1)

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



// FUNCTION 147450420 FUN_147450420 body=29 status=ok
// SIG undefined FUN_147450420(void)

undefined8 FUN_147450420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745043e FUN_14745043e body=118 status=ok
// SIG undefined FUN_14745043e(void)

void FUN_14745043e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a3ae840;
  FUN_1412e3d1e(param_2 + 1);
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 1;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1474504b4 FUN_1474504b4 body=118 status=ok
// SIG undefined FUN_1474504b4(void)

void FUN_1474504b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a3ae840;
  FUN_1412e3d1e(param_2 + 1);
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 1;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_2 + 0x2c) = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x74) = 0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 14745054e FUN_14745054e body=63 status=ok
// SIG undefined FUN_14745054e(void)

undefined1 FUN_14745054e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474507ac(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1474505b6 FUN_1474505b6 body=59 status=ok
// SIG undefined FUN_1474505b6(void)

undefined8 FUN_1474505b6(longlong *param_1)

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



// FUNCTION 147450602 FUN_147450602 body=40 status=ok
// SIG undefined FUN_147450602(void)

void FUN_147450602(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_14745069e(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 147450678 FUN_147450678 body=38 status=ok
// SIG undefined FUN_147450678(void)

undefined8 FUN_147450678(undefined8 param_1,int param_2)

{
  FUN_14745069e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745069e FUN_14745069e body=86 status=ok
// SIG undefined FUN_14745069e(void)

void FUN_14745069e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3ae840;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1474506f4(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474506f4 FUN_1474506f4 body=54 status=ok
// SIG undefined FUN_1474506f4(void)

void FUN_1474506f4(longlong *param_1)

{
  FUN_14745072a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14745072a FUN_14745072a body=128 status=ok
// SIG undefined FUN_14745072a(void)

void FUN_14745072a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1474507ac FUN_1474507ac body=116 status=ok
// SIG undefined FUN_1474507ac(void)

longlong FUN_1474507ac(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_147450820(param_1 + 0x30,param_2 + 0x30);
  FUN_147450960(param_1 + 0x40,param_2 + 0x40);
  lVar8 = *(longlong *)(param_2 + 0x90);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x90);
    }
  }
  *(longlong *)(param_1 + 0x90) = lVar8;
  return param_1;
}



// FUNCTION 147450820 FUN_147450820 body=70 status=ok
// SIG undefined FUN_147450820(void)

undefined8 * FUN_147450820(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147450866(param_1,iVar1);
      FUN_1474508c8(*param_1,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147450866 FUN_147450866 body=98 status=ok
// SIG undefined FUN_147450866(void)

void FUN_147450866(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474508c8 FUN_1474508c8 body=151 status=ok
// SIG undefined FUN_1474508c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474508c8(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar2 = (ulonglong)param_2 - 1;
    auVar4._8_4_ = (int)lVar2;
    auVar4._0_8_ = lVar2;
    auVar4._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = 0;
    auVar5 = pmovsxbq(in_XMM1,0x100);
    auVar4 = auVar4 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar4._0_8_ < (longlong)(uVar3 ^ auVar1._0_8_)) & 1)) {
        *(undefined ***)(param_1 + uVar3 * 8) = &PTR_FUN_14a3ae680;
      }
      auVar6._8_4_ = (int)uVar3;
      auVar6._0_8_ = uVar3;
      auVar6._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar6._8_8_ | auVar5._8_8_) ^ auVar1._8_8_) <= auVar4._8_8_) {
        *(undefined ***)(param_1 + 8 + uVar3 * 8) = &PTR_FUN_14a3ae680;
      }
      uVar3 = uVar3 + 2;
    } while (((ulonglong)param_2 + 1 & 0xfffffffffffffffe) != uVar3);
  }
  return;
}



// FUNCTION 147450960 FUN_147450960 body=122 status=ok
// SIG undefined FUN_147450960(void)

longlong FUN_147450960(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1474509da(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1474509da FUN_1474509da body=239 status=ok
// SIG undefined FUN_1474509da(void)

longlong * FUN_1474509da(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14745072a(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e();
          }
          *(undefined1 *)(lVar4 + 8 + lVar7) = *(undefined1 *)(lVar2 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147450b1e FUN_147450b1e body=54 status=ok
// SIG undefined FUN_147450b1e(void)

undefined1 FUN_147450b1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147450c1c(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147450b7c FUN_147450b7c body=59 status=ok
// SIG undefined FUN_147450b7c(void)

undefined8 FUN_147450b7c(longlong *param_1)

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



// FUNCTION 147450c1c FUN_147450c1c body=218 status=ok
// SIG undefined FUN_147450c1c(void)

longlong * FUN_147450c1c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar4;
  lVar4 = param_2[1];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = param_2[1];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  lVar4 = param_2[4];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = param_2[4];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar4;
  lVar4 = param_2[5];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = param_2[5];
      bVar3 = DAT_14c950c29;
    }
  }
  param_1[5] = lVar4;
  lVar4 = param_2[6];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = param_2[6];
    }
  }
  param_1[6] = lVar4;
  return param_1;
}



// FUNCTION 147450d1e FUN_147450d1e body=102 status=ok
// SIG undefined FUN_147450d1e(void)

undefined1 FUN_147450d1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined2 *)(param_2 + 8 + lVar3) = *(undefined2 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147450dac FUN_147450dac body=70 status=ok
// SIG undefined FUN_147450dac(void)

void FUN_147450dac(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14745b2aa(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147450e8a FUN_147450e8a body=101 status=ok
// SIG undefined FUN_147450e8a(void)

undefined1 FUN_147450e8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_14689c22e();
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



// FUNCTION 147450f18 FUN_147450f18 body=59 status=ok
// SIG undefined FUN_147450f18(void)

undefined8 FUN_147450f18(longlong *param_1)

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



// FUNCTION 147450fea FUN_147450fea body=101 status=ok
// SIG undefined FUN_147450fea(void)

undefined1 FUN_147450fea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_14689c22e();
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



// FUNCTION 147451078 FUN_147451078 body=59 status=ok
// SIG undefined FUN_147451078(void)

undefined8 FUN_147451078(longlong *param_1)

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



// FUNCTION 147451158 FUN_147451158 body=100 status=ok
// SIG undefined FUN_147451158(void)

undefined1 FUN_147451158(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474512d8(param_2,param_3);
    FUN_147451328(param_2 + 0x10,param_3 + 0x10);
    FUN_147451378(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1474511e4 FUN_1474511e4 body=59 status=ok
// SIG undefined FUN_1474511e4(void)

undefined8 FUN_1474511e4(longlong *param_1)

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



// FUNCTION 14745122a FUN_14745122a body=34 status=ok
// SIG undefined FUN_14745122a(void)

void FUN_14745122a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14745129a(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 14745129a FUN_14745129a body=61 status=ok
// SIG undefined FUN_14745129a(void)

void FUN_14745129a(longlong *param_1)

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



// FUNCTION 1474512d8 FUN_1474512d8 body=79 status=ok
// SIG undefined FUN_1474512d8(void)

undefined8 * FUN_1474512d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474513c8(param_1,iVar1);
      FUN_14745142a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147451328 FUN_147451328 body=79 status=ok
// SIG undefined FUN_147451328(void)

undefined8 * FUN_147451328(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147451478(param_1,iVar1);
      FUN_1474514da(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147451378 FUN_147451378 body=79 status=ok
// SIG undefined FUN_147451378(void)

undefined8 * FUN_147451378(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147451538(param_1,iVar1);
      FUN_14745159a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1474513c8 FUN_1474513c8 body=98 status=ok
// SIG undefined FUN_1474513c8(void)

void FUN_1474513c8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14745142a FUN_14745142a body=78 status=ok
// SIG undefined FUN_14745142a(void)

void FUN_14745142a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147451478 FUN_147451478 body=98 status=ok
// SIG undefined FUN_147451478(void)

void FUN_147451478(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1474514da FUN_1474514da body=94 status=ok
// SIG undefined FUN_1474514da(void)

void FUN_1474514da(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      *(undefined2 *)(param_1 + 8 + lVar3) = *(undefined2 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147451538 FUN_147451538 body=98 status=ok
// SIG undefined FUN_147451538(void)

void FUN_147451538(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14745159a FUN_14745159a body=78 status=ok
// SIG undefined FUN_14745159a(void)

void FUN_14745159a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147451612 FUN_147451612 body=90 status=ok
// SIG undefined FUN_147451612(void)

undefined1 FUN_147451612(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
          FUN_14689c22e();
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



// FUNCTION 147451694 FUN_147451694 body=59 status=ok
// SIG undefined FUN_147451694(void)

undefined8 FUN_147451694(longlong *param_1)

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



// FUNCTION 147451786 FUN_147451786 body=54 status=ok
// SIG undefined FUN_147451786(void)

undefined1 FUN_147451786(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14745189c(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1474517e4 FUN_1474517e4 body=59 status=ok
// SIG undefined FUN_1474517e4(void)

undefined8 FUN_1474517e4(longlong *param_1)

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



// FUNCTION 14745182a FUN_14745182a body=35 status=ok
// SIG undefined FUN_14745182a(void)

void FUN_14745182a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14745129a(param_2 + 8);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14745189c FUN_14745189c body=96 status=ok
// SIG undefined FUN_14745189c(void)

longlong * FUN_14745189c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_1474512d8(param_1 + 1,param_2 + 1);
  FUN_147451328(param_1 + 3,param_2 + 3);
  FUN_147451378(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 14745194e FUN_14745194e body=42 status=ok
// SIG undefined FUN_14745194e(void)

void FUN_14745194e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147451ab8(param_2);
  return;
}



// FUNCTION 14745198e FUN_14745198e body=54 status=ok
// SIG undefined FUN_14745198e(void)

undefined1 FUN_14745198e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147451b70(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1474519ec FUN_1474519ec body=59 status=ok
// SIG undefined FUN_1474519ec(void)

undefined8 FUN_1474519ec(longlong *param_1)

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



// FUNCTION 147451a32 FUN_147451a32 body=55 status=ok
// SIG undefined FUN_147451a32(void)

void FUN_147451a32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147451ab8(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147451ab8 FUN_147451ab8 body=54 status=ok
// SIG undefined FUN_147451ab8(void)

void FUN_147451ab8(longlong *param_1)

{
  FUN_147451aee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147451aee FUN_147451aee body=128 status=ok
// SIG undefined FUN_147451aee(void)

void FUN_147451aee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147451b70 FUN_147451b70 body=122 status=ok
// SIG undefined FUN_147451b70(void)

longlong FUN_147451b70(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147451bea(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147451bea FUN_147451bea body=121 status=ok
// SIG undefined FUN_147451bea(void)

undefined8 * FUN_147451bea(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147451aee(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 147451c8a FUN_147451c8a body=63 status=ok
// SIG undefined FUN_147451c8a(void)

undefined1 FUN_147451c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147451e24(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 147451cf2 FUN_147451cf2 body=59 status=ok
// SIG undefined FUN_147451cf2(void)

undefined8 FUN_147451cf2(longlong *param_1)

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



// FUNCTION 147451d3e FUN_147451d3e body=38 status=ok
// SIG undefined FUN_147451d3e(void)

void FUN_147451d3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_147451db2(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 147451db2 FUN_147451db2 body=114 status=ok
// SIG undefined FUN_147451db2(void)

void FUN_147451db2(longlong param_1)

{
  FUN_141491f98(param_1 + 0x108);
  FUN_141491f98(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1407b1382(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147451e24 FUN_147451e24 body=261 status=ok
// SIG undefined FUN_147451e24(void)

longlong * FUN_147451e24(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_140c99494(param_1 + 1,param_2 + 1);
  *(int *)(param_1 + 3) = (int)param_2[3];
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(int *)(param_1 + 6) = (int)param_2[6];
  FUN_146def7b8(param_1 + 7,param_2 + 7);
  param_1[0x11] = param_2[0x11];
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  FUN_144a787a6(param_1 + 0x13,param_2 + 0x13);
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  FUN_140cae46a(param_1 + 0x16,param_2 + 0x16);
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  FUN_144a787a6(param_1 + 0x21,param_2 + 0x21);
  *(int *)(param_1 + 0x23) = (int)param_2[0x23];
  FUN_140cae46a(param_1 + 0x24,param_2 + 0x24);
  plVar2 = param_2 + 0x2e;
  plVar3 = param_1 + 0x2e;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  return param_1;
}



// FUNCTION 147451f2a FUN_147451f2a body=38 status=ok
// SIG undefined FUN_147451f2a(void)

void FUN_147451f2a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147456b70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147451f54 FUN_147451f54 body=75 status=ok
// SIG undefined FUN_147451f54(void)

void FUN_147451f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_143248aa6(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147451fcc FUN_147451fcc body=75 status=ok
// SIG undefined FUN_147451fcc(void)

void FUN_147451fcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_143248bca(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745204a FUN_14745204a body=75 status=ok
// SIG undefined FUN_14745204a(void)

void FUN_14745204a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_141793bc8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147452096 FUN_147452096 body=139 status=ok
// SIG undefined FUN_147452096(void)

void FUN_147452096(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14746e31a(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147452126 FUN_147452126 body=75 status=ok
// SIG undefined FUN_147452126(void)

void FUN_147452126(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  thunk_FUN_1448284b2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14745218e FUN_14745218e body=75 status=ok
// SIG undefined FUN_14745218e(void)

void FUN_14745218e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1408193b6(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474521ea FUN_1474521ea body=115 status=ok
// SIG undefined FUN_1474521ea(void)

void FUN_1474521ea(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_14747428a(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147452262 FUN_147452262 body=65 status=ok
// SIG undefined FUN_147452262(void)

void FUN_147452262(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1403ed31e(param_1,param_2,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_14);
}



// FUNCTION 1474522c8 FUN_1474522c8 body=45 status=ok
// SIG undefined FUN_1474522c8(void)

longlong FUN_1474522c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145da170c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474522f6 FUN_1474522f6 body=48 status=ok
// SIG undefined FUN_1474522f6(void)

longlong FUN_1474522f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145da170c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745232a FUN_14745232a body=48 status=ok
// SIG undefined FUN_14745232a(void)

longlong FUN_14745232a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145da170c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745235a FUN_14745235a body=48 status=ok
// SIG undefined FUN_14745235a(void)

longlong FUN_14745235a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145da170c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745238a FUN_14745238a body=45 status=ok
// SIG undefined FUN_14745238a(void)

longlong FUN_14745238a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c01842(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474523b8 FUN_1474523b8 body=48 status=ok
// SIG undefined FUN_1474523b8(void)

longlong FUN_1474523b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145c01842(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474523e8 FUN_1474523e8 body=48 status=ok
// SIG undefined FUN_1474523e8(void)

longlong FUN_1474523e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145c01842(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147452418 FUN_147452418 body=48 status=ok
// SIG undefined FUN_147452418(void)

longlong FUN_147452418(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145c01842(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147452448 FUN_147452448 body=45 status=ok
// SIG undefined FUN_147452448(void)

longlong FUN_147452448(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bbd66c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147452476 FUN_147452476 body=48 status=ok
// SIG undefined FUN_147452476(void)

longlong FUN_147452476(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140bbd66c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474524a6 FUN_1474524a6 body=48 status=ok
// SIG undefined FUN_1474524a6(void)

longlong FUN_1474524a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140bbd66c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474524d6 FUN_1474524d6 body=48 status=ok
// SIG undefined FUN_1474524d6(void)

longlong FUN_1474524d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140bbd66c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14745250c FUN_14745250c body=96 status=ok
// SIG undefined FUN_14745250c(void)

undefined8 FUN_14745250c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (**(code **)(*param_1 + 0x2a8))();
  local_28 = &local_18;
  local_20 = &local_10;
  FUN_14745332a(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147452594 FUN_147452594 body=32 status=ok
// SIG undefined FUN_147452594(void)

undefined8 FUN_147452594(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetGrassWeight");
  return param_2;
}



// FUNCTION 1474525b4 FUN_1474525b4 body=26 status=ok
// SIG undefined FUN_1474525b4(void)

undefined8 FUN_1474525b4(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2e8))();
  return param_2;
}



// FUNCTION 147452656 FUN_147452656 body=59 status=ok
// SIG undefined FUN_147452656(void)

undefined8 FUN_147452656(longlong *param_1)

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



// FUNCTION 14745271c FUN_14745271c body=113 status=ok
// SIG undefined FUN_14745271c(void)

undefined1 FUN_14745271c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(uint *)(param_2 + 8 + lVar3) =
           *(uint *)(param_2 + 8 + lVar3) & 0xfffffffe | *(uint *)(param_3 + 8 + lVar3) & 1;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474527b6 FUN_1474527b6 body=59 status=ok
// SIG undefined FUN_1474527b6(void)

undefined8 FUN_1474527b6(longlong *param_1)

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



// FUNCTION 1474528a0 FUN_1474528a0 body=59 status=ok
// SIG undefined FUN_1474528a0(void)

undefined8 FUN_1474528a0(longlong *param_1)

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



// FUNCTION 14745298a FUN_14745298a body=59 status=ok
// SIG undefined FUN_14745298a(void)

undefined8 FUN_14745298a(longlong *param_1)

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



// FUNCTION 147452a74 FUN_147452a74 body=59 status=ok
// SIG undefined FUN_147452a74(void)

undefined8 FUN_147452a74(longlong *param_1)

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



// FUNCTION 147452b3e FUN_147452b3e body=68 status=ok
// SIG undefined FUN_147452b3e(void)

undefined8 FUN_147452b3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147452baa FUN_147452baa body=59 status=ok
// SIG undefined FUN_147452baa(void)

undefined8 FUN_147452baa(longlong *param_1)

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



// FUNCTION 147452c8c FUN_147452c8c body=110 status=ok
// SIG undefined FUN_147452c8c(void)

undefined1 FUN_147452c8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_14689c22e();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147452d22 FUN_147452d22 body=59 status=ok
// SIG undefined FUN_147452d22(void)

undefined8 FUN_147452d22(longlong *param_1)

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



// FUNCTION 147452e78 FUN_147452e78 body=54 status=ok
// SIG undefined FUN_147452e78(void)

undefined1 FUN_147452e78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147452f90(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147452ed6 FUN_147452ed6 body=59 status=ok
// SIG undefined FUN_147452ed6(void)

undefined8 FUN_147452ed6(longlong *param_1)

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



// FUNCTION 147452f1c FUN_147452f1c body=38 status=ok
// SIG undefined FUN_147452f1c(void)

void FUN_147452f1c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147452f90 FUN_147452f90 body=103 status=ok
// SIG undefined FUN_147452f90(void)

longlong * FUN_147452f90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_140c99494(param_1 + 1,param_2 + 1);
  plVar2 = param_2 + 3;
  plVar3 = param_1 + 3;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  return param_1;
}



// FUNCTION 147453040 FUN_147453040 body=137 status=ok
// SIG undefined FUN_147453040(void)

undefined1 FUN_147453040(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar13) = *(undefined8 *)(param_3 + lVar13);
      lVar12 = *(longlong *)(param_3 + 8 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_14689c22e();
          lVar12 = *(longlong *)(param_3 + 8 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      lVar1 = param_2 + lVar13;
      *(longlong *)(lVar1 + 8) = lVar12;
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(lVar1 + 0x10) = *puVar2;
      *(undefined4 *)(lVar1 + 0x14) = uVar4;
      *(undefined4 *)(lVar1 + 0x18) = uVar5;
      *(undefined4 *)(lVar1 + 0x1c) = uVar6;
      *(undefined4 *)(lVar1 + 0x20) = uVar7;
      *(undefined4 *)(lVar1 + 0x24) = uVar8;
      *(undefined4 *)(lVar1 + 0x28) = uVar9;
      *(undefined4 *)(lVar1 + 0x2c) = uVar10;
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_3 + 0x30 + lVar13);
      lVar13 = lVar13 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474530f2 FUN_1474530f2 body=59 status=ok
// SIG undefined FUN_1474530f2(void)

undefined8 FUN_1474530f2(longlong *param_1)

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



// FUNCTION 147453210 FUN_147453210 body=68 status=ok
// SIG undefined FUN_147453210(void)

undefined8 FUN_147453210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14745327c FUN_14745327c body=59 status=ok
// SIG undefined FUN_14745327c(void)

undefined8 FUN_14745327c(longlong *param_1)

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



// FUNCTION 14745332a FUN_14745332a body=107 status=ok
// SIG undefined FUN_14745332a(void)

void * FUN_14745332a(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  _Src = (void *)*param_2;
  uVar3 = param_2[1] - (longlong)_Src;
  uVar2 = uVar3 >> 3;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  }
  else {
    FUN_147453396(param_1,uVar2,0);
    _Dst = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)(uVar3 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
  }
  return param_1;
}



// FUNCTION 147453396 FUN_147453396 body=101 status=ok
// SIG undefined FUN_147453396(void)

void FUN_147453396(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_146874124(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 147453400 FUN_147453400 body=30 status=ok
// SIG undefined FUN_147453400(void)

undefined8 FUN_147453400(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x390) + 0x48))();
  return param_2;
}



// FUNCTION 14745341e FUN_14745341e body=80 status=ok
// SIG undefined FUN_14745341e(void)

undefined4 FUN_14745341e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = FUN_1447210f0(lVar1);
  lVar3 = 0x7c8;
  if ((*(char *)(lVar2 + 0x150) != '\x01') &&
     ((*(longlong *)(param_1 + 0x20) == 0 ||
      (lVar3 = 0x660,
      (*(byte *)(lVar1 + 0x84d) & *(byte *)(*(longlong *)(param_1 + 0x20) + 0x84d)) == 0)))) {
    lVar3 = 0x650;
  }
  return *(undefined4 *)(param_1 + lVar3);
}



// FUNCTION 14745346e FUN_14745346e body=115 status=ok
// SIG undefined FUN_14745346e(void)

undefined8 FUN_14745346e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = FUN_1447210f0(lVar1);
  if (*(char *)(lVar2 + 0x150) == '\x01') {
    puVar3 = (undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x7c0));
  }
  else if ((*(longlong *)(param_1 + 0x20) == 0) ||
          ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x84d) & *(byte *)(lVar1 + 0x84d)) != 1)) {
    puVar3 = (undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x648));
  }
  else {
    puVar3 = (undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x658));
  }
  return *puVar3;
}



// FUNCTION 1474534e2 FUN_1474534e2 body=47 status=ok
// SIG undefined FUN_1474534e2(void)

undefined8 FUN_1474534e2(longlong param_1,uint param_2)

{
  if ((((*(longlong *)(param_1 + 0x20) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x20) + 0x84d) == '\x01')) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0x660))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x658) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 147453512 thunk_FUN_147453518 body=5 status=ok
// SIG undefined thunk_FUN_147453518(void)

void thunk_FUN_147453518(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0) {
    iVar3 = -1;
  }
  else {
    uVar1 = (ulonglong)
            (*(int *)((longlong)param_1 + 0x62c) + (uint)(*(int *)((longlong)param_1 + 0x62c) == -1)
            ) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar4 = ((uint)lVar2 ^ 0xffffffc0) + 0x3f;
    if (param_2 < iVar4) {
      iVar4 = param_2;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
  }
  *(int *)((longlong)param_1 + 0x7a4) = iVar3;
  (**(code **)(*param_1 + 0x3c8))(param_1,1,0);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147453518 FUN_147453518 body=102 status=ok
// SIG undefined FUN_147453518(void)

void FUN_147453518(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 0) {
    iVar3 = -1;
  }
  else {
    uVar1 = (ulonglong)
            (*(int *)((longlong)param_1 + 0x62c) + (uint)(*(int *)((longlong)param_1 + 0x62c) == -1)
            ) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar4 = ((uint)lVar2 ^ 0xffffffc0) + 0x3f;
    if (param_2 < iVar4) {
      iVar4 = param_2;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
  }
  *(int *)((longlong)param_1 + 0x7a4) = iVar3;
  (**(code **)(*param_1 + 0x3c8))(param_1,1,0);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 14745357e FUN_14745357e body=96 status=ok
// SIG undefined FUN_14745357e(void)

void FUN_14745357e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (ulonglong)
          (*(int *)((longlong)param_1 + 0x62c) + (uint)(*(int *)((longlong)param_1 + 0x62c) == -1))
          * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar3 = (uint)lVar2 ^ 0x3f;
  iVar5 = 0x3e - uVar3;
  iVar4 = uVar3 - 0x3e;
  if (param_2 < iVar5) {
    iVar5 = param_2;
  }
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0xf5) = iVar5;
  (**(code **)(*param_1 + 0x3c8))(param_1,1,0);
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1474535de FUN_1474535de body=46 status=ok
// SIG undefined FUN_1474535de(void)

void FUN_1474535de(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1479f20c4();
  uVar1 = FUN_147460b66(*(undefined8 *)(param_1 + 0x7f8));
  FUN_14484255c(param_2,uVar1);
  return;
}



// FUNCTION 147453620 FUN_147453620 body=197 status=ok
// SIG undefined FUN_147453620(void)

longlong FUN_147453620(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
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
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1406c3de4();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1474536f4 FUN_1474536f4 body=114 status=ok
// SIG undefined FUN_1474536f4(void)

void FUN_1474536f4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    (**(code **)(*param_1 + 0x340))();
    local_28 = param_1;
    FUN_1405edac7(param_1,0);
  }
  FUN_1405ed516(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147453778 FUN_147453778 body=133 status=ok
// SIG undefined FUN_147453778(void)

void FUN_147453778(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    local_30 = param_1;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_28 = &local_30;
    FUN_1474589e0(lVar1 + 0x590);
  }
  FUN_14067484e(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474537fe FUN_1474537fe body=74 status=ok
// SIG undefined FUN_1474537fe(void)

undefined8 * FUN_1474537fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474513c8(param_1,iVar1);
    FUN_147458b13(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147453848 FUN_147453848 body=99 status=ok
// SIG undefined FUN_147453848(void)

void FUN_147453848(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474538ac FUN_1474538ac body=796 status=ok
// SIG undefined FUN_1474538ac(void)

undefined8 * FUN_1474538ac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_128 [36];
  undefined1 local_104 [4];
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  cVar2 = FUN_144729dda(param_1 + 0x28);
  if (cVar2 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x28);
    FUN_147454f10(uVar3,param_2);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_d0 = (undefined1 *)(param_1 + 0x60);
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_d8);
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = local_d8;
  local_f0 = local_d0;
  if (iStack_c4 < *(int *)((longlong)local_d0 + 0x18)) {
    local_100 = (longlong *)(param_1 + 0x50);
    do {
      lVar1 = *(longlong *)(*local_100 + 8 + (longlong)iStack_e4 * 0x18);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0xa8), lVar1 != 0)) {
        lVar4 = FUN_144a7ce84();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_d8 = lVar1;
          FUN_14745a32a(local_b8,local_104,&local_d8);
        }
      }
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (iStack_e4 < *(int *)((longlong)local_f0 + 0x18));
    local_d0 = local_a8;
    local_d8 = 0x100000000;
    local_c8 = 0xffffffff;
    iStack_c4 = 0;
    local_c0 = 0;
    iVar5 = 0;
    if (local_90 != 0) {
      FUN_1449c0562(&local_d8);
      iVar5 = local_90;
    }
  }
  else {
    local_d0 = local_a8;
    local_d8 = 0x100000000;
    local_c8 = 0xffffffff;
    iStack_c4 = 0;
    local_c0 = 0;
    iVar5 = 0;
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = local_d8;
  local_f0 = local_d0;
  local_100 = local_b8;
  if ((iStack_c4 != iVar5) || (local_d0 != local_a8)) {
    do {
      FUN_147454f10(*(undefined8 *)(*local_100 + (longlong)iStack_e4 * 0x10),param_2);
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (local_100 != local_b8 || (local_f0 != local_a8 || iStack_e4 != iVar5));
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14745a29c(local_b8);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147453bca FUN_147453bca body=42 status=ok
// SIG undefined FUN_147453bca(void)

void FUN_147453bca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147453c00 FUN_147453c00 body=96 status=ok
// SIG undefined FUN_147453c00(void)

undefined8 FUN_147453c00(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e990c8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa2338,1);
  return uVar3;
}



// FUNCTION 147453c60 FUN_147453c60 body=52 status=ok
// SIG undefined FUN_147453c60(void)

void FUN_147453c60(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147453c94 FUN_147453c94 body=42 status=ok
// SIG undefined FUN_147453c94(void)

void FUN_147453c94(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147453cf2 FUN_147453cf2 body=96 status=ok
// SIG undefined FUN_147453cf2(void)

undefined8 FUN_147453cf2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0a5e6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa23c0,1);
  return uVar3;
}



// FUNCTION 147453d52 FUN_147453d52 body=52 status=ok
// SIG undefined FUN_147453d52(void)

void FUN_147453d52(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147453d86 FUN_147453d86 body=42 status=ok
// SIG undefined FUN_147453d86(void)

void FUN_147453d86(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147453dbc FUN_147453dbc body=96 status=ok
// SIG undefined FUN_147453dbc(void)

undefined8 FUN_147453dbc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e604fa();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caa2448,1);
  return uVar3;
}



// FUNCTION 147453e1c FUN_147453e1c body=52 status=ok
// SIG undefined FUN_147453e1c(void)

void FUN_147453e1c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}


