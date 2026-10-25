// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476e2da6 FUN_1476e2da6 body=455 status=ok
// SIG undefined FUN_1476e2da6(void)

void FUN_1476e2da6(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  double local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    puVar4 = param_8;
    puVar6 = param_7;
    puVar7 = param_6;
    do {
      puVar9 = puVar4;
      if (param_8 == (undefined8 *)0x0) {
        puVar9 = param_8;
      }
      puVar10 = puVar6;
      if (param_7 == (undefined8 *)0x0) {
        puVar10 = param_7;
      }
      puVar11 = puVar7;
      if (param_6 == (undefined8 *)0x0) {
        puVar11 = param_6;
      }
      uVar8 = (ulonglong)*(ushort *)(param_4 + uVar5 * 2);
      lVar2 = *(longlong *)(param_3 + uVar5 * 8);
      local_68[1] = (double)*(float *)(lVar2 + 4 + uVar8);
      local_68[2] = (double)*(float *)(lVar2 + 8 + uVar8);
      local_68[3] = (double)*(float *)(lVar2 + 0xc + uVar8);
      local_68[0] = (double)*(float *)(lVar2 + uVar8);
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_5 + uVar5 * 8);
      }
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar11;
      }
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar10;
      }
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_68 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar9;
      }
      *(float *)(lVar2 + 4 + uVar8) = (float)local_68[1];
      *(float *)(lVar2 + 8 + uVar8) = (float)local_68[2];
      *(float *)(lVar2 + 0xc + uVar8) = (float)local_68[3];
      *(float *)(lVar2 + uVar8) = (float)local_68[0];
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar1 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e2f6e FUN_1476e2f6e body=448 status=ok
// SIG undefined FUN_1476e2f6e(void)

void FUN_1476e2f6e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  double local_78 [4];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_88 = param_1;
  local_80 = param_4;
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(local_80 + lVar6 * 2);
      FUN_1476e3130(uVar2,&local_58,*(undefined8 *)(param_3 + lVar6));
      puVar4 = (undefined8 *)(lVar6 + param_8);
      if (param_8 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(lVar6 + param_7);
      if (param_7 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)(param_6 + lVar6);
      if (param_6 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      local_78[1] = (double)local_54;
      local_78[2] = (double)local_50;
      local_78[3] = (double)local_4c;
      local_78[0] = (double)local_58;
      lVar3 = *(longlong *)(local_88 + 0x18);
      if (param_5 != 0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_5 + lVar6);
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar7;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_78 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar4;
      }
      local_54 = (float)local_78[1];
      local_50 = (float)local_78[2];
      local_4c = (float)local_78[3];
      local_58 = (float)local_78[0];
      FUN_1476e246a(uVar2,*(undefined8 *)(param_3 + lVar6),&local_58);
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e3130 FUN_1476e3130 body=120 status=ok
// SIG undefined FUN_1476e3130(void)

undefined8 * FUN_1476e3130(undefined8 param_1,undefined8 *param_2)

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
  FUN_1406f9c46(0,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
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



// FUNCTION 1476e31aa FUN_1476e31aa body=135 status=ok
// SIG undefined FUN_1476e31aa(void)

undefined4 * FUN_1476e31aa(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 1476e3232 FUN_1476e3232 body=1116 status=ok
// SIG undefined FUN_1476e3232(void)

void FUN_1476e3232(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

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
  undefined8 *puVar12;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[7]) goto LAB_1476e3282;
      puVar12 = puVar12 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1476e3282:
  local_1b4 = *(int *)(lVar2 + 0x14);
  if (local_1b4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[6]) goto LAB_1476e32bc;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476e32bc:
  local_190 = *puVar12;
  local_1b8 = *(int *)(lVar2 + 0x14);
  if (local_1b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[5]) goto LAB_1476e32fd;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476e32fd:
  uVar3 = *puVar10;
  local_1bc = *(int *)(lVar2 + 0x14);
  if (local_1bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[4]) goto LAB_1476e333f;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1476e333f:
  local_1a0 = *puVar8;
  local_1c0 = *(int *)(lVar2 + 0x14);
  local_198 = uVar3;
  if (local_1c0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_1b0 = *puVar9;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_158,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == *param_4) goto LAB_1476e33cb;
      puVar11 = puVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1476e33cb:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_188 = param_2;
  local_180 = param_1;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  lVar6 = local_118;
  lVar7 = local_130;
  lVar2 = local_148;
  uVar5 = local_190;
  uVar4 = local_198;
  uVar3 = local_1a0;
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  local_1a8 = *puVar11;
  local_f8 = local_158;
  local_f0 = local_150;
  local_158 = 0;
  local_e8 = local_148;
  local_148 = 0;
  local_e0 = local_140;
  local_d8 = local_138;
  local_140 = 0;
  local_d0 = local_130;
  local_130 = 0;
  local_c8 = local_128;
  local_c0 = local_120;
  local_128 = 0;
  local_b8 = local_118;
  local_a8 = local_1c0;
  local_a0 = local_1b0;
  local_90 = local_1bc;
  local_88 = local_1a0;
  local_78 = local_1b8;
  local_70 = local_198;
  local_60 = local_1b4;
  local_118 = 0;
  local_58 = local_190;
  local_110 = puVar11;
  local_108 = iVar1;
  local_100 = local_1a8;
  local_b0 = puVar9;
  local_98 = puVar8;
  local_80 = puVar10;
  local_68 = puVar12;
  FUN_1432f59b8();
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  if (lVar2 != 0) {
    local_178 = lVar2;
  }
  if (lVar7 != 0) {
    lStack_170 = lVar7;
  }
  if (lVar6 != 0) {
    local_168 = lVar6;
  }
  local_1d0 = uVar5;
  local_1d8 = uVar4;
  local_1e0 = uVar3;
  local_1e8 = local_1b0;
  FUN_1476e225c(local_180,
                *(undefined8 *)(*(longlong *)(*local_188 + 0x60) + (longlong)(int)local_188[1] * 8),
                local_1a8,&local_178);
  FUN_1475edd24(&local_110);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e3690 FUN_1476e3690 body=118 status=ok
// SIG undefined FUN_1476e3690(void)

longlong FUN_1476e3690(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476e31aa();
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



// FUNCTION 1476e3708 FUN_1476e3708 body=135 status=ok
// SIG undefined FUN_1476e3708(void)

undefined4 * FUN_1476e3708(undefined4 *param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 1476e3790 FUN_1476e3790 body=1100 status=ok
// SIG undefined FUN_1476e3790(void)

void FUN_1476e3790(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  int local_150;
  undefined8 local_148;
  longlong local_140;
  int local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_110,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_128,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_140,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_158,param_4[4]);
  local_34 = param_4[3];
  local_38 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_1a0,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_38,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_1476e3890;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1476e3890:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_e8 = *puVar4;
  local_e0 = local_1a0;
  local_d8 = local_198;
  local_1a0 = 0;
  local_d0 = local_190;
  uStack_c8 = uStack_188;
  local_190 = 0;
  uStack_188 = 0;
  local_c0 = local_180;
  local_b8 = local_178;
  local_178 = 0;
  local_b0 = local_170;
  local_a8 = local_168;
  local_170 = 0;
  local_a0 = local_160;
  local_160 = 0;
  local_98 = local_158;
  local_90 = local_150;
  local_158 = 0;
  local_88 = local_148;
  local_148 = 0;
  local_80 = local_140;
  local_78 = local_138;
  local_140 = 0;
  local_70 = local_130;
  local_130 = 0;
  local_68 = local_128;
  local_60 = local_120;
  local_128 = 0;
  local_58 = local_118;
  local_118 = 0;
  local_50 = local_110;
  local_48 = local_108;
  local_110 = 0;
  local_40 = local_100;
  local_100 = 0;
  local_f8 = puVar4;
  local_f0 = iVar1;
  FUN_1432f59b8();
  if (local_158 != 0) {
    LOCK();
    *(int *)(local_158 + 0x18) = *(int *)(local_158 + 0x18) + -1;
    UNLOCK();
    if (local_150 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_158 + 8));
    }
  }
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 0x18) = *(int *)(local_140 + 0x18) + -1;
    UNLOCK();
    if (local_138 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_140 + 8));
    }
  }
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
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1a8 = 0;
  if (local_d0 != 0) {
    local_1b8 = local_d0;
  }
  if (local_b8 != 0) {
    lStack_1b0 = local_b8;
  }
  if (local_a0 != 0) {
    local_1a8 = local_a0;
  }
  local_1c0 = local_40;
  local_1c8 = local_58;
  local_1d0 = local_70;
  local_1d8 = local_88;
  FUN_1476e2b78(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_e8,
                &local_1b8);
  FUN_1475ee4b0(&local_f8);
  if ((local_30 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e3bde FUN_1476e3bde body=146 status=ok
// SIG undefined FUN_1476e3bde(void)

longlong FUN_1476e3bde(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
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
  FUN_1476e3708();
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



// FUNCTION 1476e3c72 FUN_1476e3c72 body=179 status=ok
// SIG undefined FUN_1476e3c72(void)

undefined8 * FUN_1476e3c72(longlong param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_1476e3ccc;
    }
  }
  uVar6 = 0;
LAB_1476e3ccc:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476e3d26 FUN_1476e3d26 body=184 status=ok
// SIG undefined FUN_1476e3d26(void)

void FUN_1476e3d26(longlong param_1,undefined4 param_2,undefined8 *param_3)

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



// FUNCTION 1476e3de0 FUN_1476e3de0 body=241 status=ok
// SIG undefined FUN_1476e3de0(void)

undefined8 * FUN_1476e3de0(undefined8 *param_1,longlong *param_2)

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
  *param_1 = &PTR_FUN_14a5083e0;
  param_1[0x1b] = &PTR_FUN_14a508428;
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



// FUNCTION 1476e3ed2 FUN_1476e3ed2 body=9 status=ok
// SIG undefined FUN_1476e3ed2(void)

void FUN_1476e3ed2(longlong param_1)

{
  FUN_1476e4b8a(param_1 + 0x10);
  return;
}



// FUNCTION 1476e3edc FUN_1476e3edc body=29 status=ok
// SIG undefined FUN_1476e3edc(void)

undefined8 FUN_1476e3edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e3efa FUN_1476e3efa body=38 status=ok
// SIG undefined FUN_1476e3efa(void)

undefined8 FUN_1476e3efa(undefined8 param_1,int param_2)

{
  FUN_1476e4b8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e3f46 FUN_1476e3f46 body=86 status=ok
// SIG undefined FUN_1476e3f46(void)

void FUN_1476e3f46(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1476e4c38();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e3f9e FUN_1476e3f9e body=1097 status=ok
// SIG undefined FUN_1476e3f9e(void)

ulonglong FUN_1476e3f9e(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  byte local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_1476e401b;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      local_98 = *puVar7;
      uStack_90 = puVar7[1];
      local_88 = *(undefined4 *)(puVar7 + 2);
      uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x14);
      uStack_80 = *(undefined4 *)(puVar7 + 3);
      uStack_7c = *(undefined4 *)((longlong)puVar7 + 0x1c);
      local_78 = *(undefined4 *)(puVar7 + 4);
      uStack_74 = *(undefined4 *)((longlong)puVar7 + 0x24);
      uStack_70 = *(undefined4 *)(puVar7 + 5);
      uStack_6c = *(undefined4 *)((longlong)puVar7 + 0x2c);
      local_58 = *(byte *)(puVar7 + 8);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_58])(local_68,puVar7 + 6);
      local_50 = *(byte *)(puVar7 + 9);
      FUN_1410d7556(param_1 + 0x18,&local_98);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50 + 0x40)])();
      FUN_1476e4dda(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x40) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
        FUN_1476e4e54(param_1 + 0xa0);
      }
      if ((local_50 & 1) != 0) {
        FUN_1476e4cc6(&local_98,&local_88);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(local_68);
LAB_1476e4217:
      unaff_RBP = 0;
      goto LAB_1476e401b;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50) & 1) == 0)
    goto LAB_1476e401b;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    uVar11 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x40) < param_2) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if ((((int)uVar12 < (int)uVar3) && (*(int *)(lVar13 + (ulonglong)uVar12 * 0x40) <= param_2)) &&
       (lVar13 + (ulonglong)uVar12 * 0x40 != -8)) {
      FUN_1476e4cc6((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x40) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
        FUN_1476e4e54(param_1 + 0xa0);
      }
      goto LAB_1476e401b;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      if ((bVar2 & 1) == 0) goto LAB_1476e401b;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      *(byte *)(puVar7 + 9) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476e401b;
      lVar13 = (longlong)param_2 * 0x50;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + lVar13);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13);
      if ((bVar2 & 2) == 0) {
        local_98 = *puVar7;
        uStack_90 = puVar7[1];
        local_88 = *(undefined4 *)(puVar7 + 2);
        uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x14);
        uStack_80 = *(undefined4 *)(puVar7 + 3);
        uStack_7c = *(undefined4 *)((longlong)puVar7 + 0x1c);
        local_78 = *(undefined4 *)(puVar7 + 4);
        uStack_74 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uStack_70 = *(undefined4 *)(puVar7 + 5);
        uStack_6c = *(undefined4 *)((longlong)puVar7 + 0x2c);
        local_58 = *(byte *)(puVar7 + 8);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_58])(local_68,puVar7 + 6);
        local_50 = *(byte *)(puVar7 + 9);
        FUN_1410d7556(param_1 + 0x18,&local_98);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar13 + 0x40)])();
        FUN_1476e4dda(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar8 = 0;
        if (0 < (int)uVar3) {
          uVar10 = (ulonglong)uVar3;
          uVar11 = uVar3;
          do {
            uVar10 = uVar10 >> 1;
            uVar12 = (uint)uVar10 + (int)uVar8;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x40) < param_2) {
              uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
            }
            bVar5 = 1 < uVar11;
            uVar11 = (uint)uVar10;
          } while (bVar5);
        }
        if (((int)uVar8 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
          FUN_1476e4e54(param_1 + 0xa0);
        }
        if ((local_50 & 1) != 0) {
          FUN_1476e4cc6(&local_98,&local_88);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(local_68);
        goto LAB_1476e4217;
      }
      if ((bVar2 & 1) == 0) goto LAB_1476e401b;
    }
  }
  FUN_1476e4cc6(puVar7,puVar7 + 2);
LAB_1476e401b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1476e43e8 FUN_1476e43e8 body=417 status=ok
// SIG undefined FUN_1476e43e8(void)

undefined8 FUN_1476e43e8(longlong param_1,int param_2,char param_3)

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
    if (cVar6 == '\0') goto LAB_1476e44a2;
  }
  if (param_3 == '\x01') {
    lVar5 = (longlong)param_2 * 0x50;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar5);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar5 + 0x40)])();
    FUN_1476e4dda(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      uVar9 = (ulonglong)uVar3;
      uVar10 = uVar3;
      do {
        uVar9 = uVar9 >> 1;
        uVar11 = (uint)uVar9 + (int)uVar8;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
      FUN_1476e4e54(param_1 + 0xa0);
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
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x40) < param_2) {
          uVar8 = (ulonglong)(uVar11 + (uVar10 & 1));
        }
        bVar4 = 1 < uVar10;
        uVar10 = (uint)uVar9;
      } while (bVar4);
    }
    if (((int)uVar8 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x40) <= param_2)) {
      FUN_1476e4e54(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar7 = 1;
  }
LAB_1476e44a2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e4594 FUN_1476e4594 body=244 status=ok
// SIG undefined FUN_1476e4594(void)

void FUN_1476e4594(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_5c [12];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_2[1];
  local_68 = param_4;
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_70 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_50 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_50 != 0) {
          FUN_1476e4f56(param_1 + -0xd8,local_5c,&local_50,param_6);
          local_78 = (byte)uVar2 & 1;
          FUN_14052d442(local_70,local_5c,*(undefined2 *)(param_3 + uVar3 * 2),
                        *(undefined4 *)(local_68 + uVar3 * 4));
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e468a FUN_1476e468a body=804 status=ok
// SIG undefined FUN_1476e468a(void)

void FUN_1476e468a(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  int *piVar8;
  char cVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  char *local_c8;
  undefined1 local_bc [8];
  int local_b4;
  longlong local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar7 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_c8 = param_2;
  if (uVar7 != 0) {
    lVar1 = param_1 + -0xd8;
    local_d8 = *param_6;
    local_d0 = param_6[1];
    local_e0 = param_6[2];
    param_5 = param_5 + 8;
    uVar13 = 0;
    do {
      local_b0 = *(longlong *)(param_4 + uVar13 * 4);
      if ((local_b0 != 0) && (cVar9 = FUN_1476e523c(lVar1,&local_b0,param_5), cVar9 != '\0')) {
        FUN_1476e4f56(lVar1,local_bc,&local_b0,param_5);
        piVar8 = *(int **)(param_1 + -0x28);
        if (*piVar8 == 0) {
          if (local_b4 != -1) {
            FUN_14179e8d0(piVar8,local_bc);
          }
        }
        else {
          thunk_FUN_140adeba6(piVar8,local_bc);
        }
        uVar10 = FUN_1400e4034(*(undefined8 *)(param_1 + -0x28),local_bc);
        cVar9 = FUN_1476e52be(lVar1,local_b4,uVar10);
        if (cVar9 == '\0') {
          local_68 = 0;
          lStack_60 = 0;
          local_78 = 0.0;
          dStack_70 = 0.0;
          local_88 = 0.0;
          uStack_80 = 0.0;
          local_58 = 0;
          if (local_d0 == 0) {
            if (local_d8 == 0) {
              if (local_e0 != 0) {
                local_68 = *(ulonglong *)(local_e0 + uVar13 * 8);
                lStack_60 = *(longlong *)(local_e0 + 8 + uVar13 * 8);
                uVar11 = local_68;
                if (lStack_60 != 0) {
                  LOCK();
                  *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
                  UNLOCK();
                  uVar11 = *(ulonglong *)(local_e0 + uVar13 * 8);
                }
                local_58 = 2;
                FUN_1476e3130(uVar11,&local_a8,*(undefined8 *)(param_4 + uVar13 * 4));
                fVar6 = local_a8;
                fVar3 = fStack_a4;
                fVar4 = fStack_a0;
                fVar5 = fStack_9c;
                goto LAB_1476e4920;
              }
            }
            else {
              lVar12 = (longlong)*(int *)(param_1 + 0x24) *
                       (ulonglong)*(ushort *)(local_d8 + uVar13);
              local_68 = *(longlong *)(param_1 + 0x18) + lVar12;
              (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar12))
                        (&local_a8,*(undefined8 *)(param_4 + uVar13 * 4));
              local_78 = local_98;
              dStack_70 = dStack_90;
              local_88 = (double)CONCAT44(fStack_a4,local_a8);
              uStack_80 = (double)CONCAT44(fStack_9c,fStack_a0);
            }
          }
          else {
            uVar11 = (ulonglong)*(ushort *)(local_d0 + uVar13);
            local_68 = (ulonglong)*(ushort *)(local_d0 + uVar13);
            local_58 = 1;
            lVar12 = *(longlong *)(param_4 + uVar13 * 4);
            fVar3 = *(float *)(lVar12 + 4 + uVar11);
            fVar4 = *(float *)(lVar12 + 8 + uVar11);
            fVar5 = *(float *)(lVar12 + 0xc + uVar11);
            fVar6 = *(float *)(lVar12 + uVar11);
LAB_1476e4920:
            dStack_70 = (double)fVar5;
            local_78 = (double)fVar4;
            uStack_80 = (double)fVar3;
            local_88 = (double)fVar6;
          }
          FUN_1476e535c(lVar1,local_b4,uVar10,&local_88);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_58 & 0xff])(&local_68);
        }
        if (*local_c8 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x48 + (longlong)local_b4 * 0x50);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar13 = uVar13 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar7 * 2 != uVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e49b0 FUN_1476e49b0 body=38 status=ok
// SIG undefined FUN_1476e49b0(void)

undefined8 FUN_1476e49b0(undefined8 param_1,int param_2)

{
  FUN_1476e4b8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e49d6 FUN_1476e49d6 body=52 status=ok
// SIG undefined FUN_1476e49d6(void)

void FUN_1476e49d6(longlong *param_1)

{
  FUN_1476e4a40();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476e4a0a FUN_1476e4a0a body=53 status=ok
// SIG undefined FUN_1476e4a0a(void)

void FUN_1476e4a0a(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1476e4a40 FUN_1476e4a40 body=328 status=ok
// SIG undefined FUN_1476e4a40(void)

void FUN_1476e4a40(longlong *param_1)

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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x50 + 0x40)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 1476e4b8a FUN_1476e4b8a body=173 status=ok
// SIG undefined FUN_1476e4b8a(void)

void FUN_1476e4b8a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a508440;
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
  FUN_1476e4a0a(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1476e49d6(param_1 + 0xd);
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
                    /* WARNING: Could not recover jumptable at 0x0001476e4c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476e4c38 FUN_1476e4c38 body=140 status=ok
// SIG undefined FUN_1476e4c38(void)

void FUN_1476e4c38(longlong param_1,int param_2,undefined4 *param_3)

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
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
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



// FUNCTION 1476e4cc6 FUN_1476e4cc6 body=255 status=ok
// SIG undefined FUN_1476e4cc6(void)

void FUN_1476e4cc6(float *param_1,double *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  local_2c = param_1[1];
  lVar1 = FUN_14479d2ce(&local_30);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 6) == '\x01') {
      uVar2 = (ulonglong)*(ushort *)(param_2 + 4);
      *(float *)(lVar1 + 4 + uVar2) = (float)param_2[1];
      *(float *)(lVar1 + 8 + uVar2) = (float)param_2[2];
      *(float *)(lVar1 + 0xc + uVar2) = (float)param_2[3];
      *(float *)(lVar1 + uVar2) = (float)*param_2;
    }
    else if (*(char *)(param_2 + 6) == '\x02') {
      local_2c = (float)param_2[1];
      local_28 = (float)param_2[2];
      local_24 = (float)param_2[3];
      local_30 = (float)*param_2;
      FUN_1476e246a(param_2[4],lVar1);
    }
    else if (param_2[4] != 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e4dda FUN_1476e4dda body=122 status=ok
// SIG undefined FUN_1476e4dda(void)

void FUN_1476e4dda(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1476e4e54 FUN_1476e4e54 body=102 status=ok
// SIG undefined FUN_1476e4e54(void)

void FUN_1476e4e54(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x40 + 0x38)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x40);
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar2) << 6);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1476e4eba(param_1);
  return;
}



// FUNCTION 1476e4eba FUN_1476e4eba body=62 status=ok
// SIG undefined FUN_1476e4eba(void)

void FUN_1476e4eba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476e4ef8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1476e4ef8 FUN_1476e4ef8 body=93 status=ok
// SIG undefined FUN_1476e4ef8(void)

ulonglong FUN_1476e4ef8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1476e4f56 FUN_1476e4f56 body=189 status=ok
// SIG undefined FUN_1476e4f56(void)

longlong FUN_1476e4f56(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1476e5014(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e5014 FUN_1476e5014 body=313 status=ok
// SIG undefined FUN_1476e5014(void)

int * FUN_1476e5014(longlong param_1,int *param_2,undefined4 *param_3)

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
    FUN_1476e514e(param_1 + 0x68,local_78);
    *local_70 = (undefined4)local_68;
    local_70[1] = local_68._4_4_;
    local_70[2] = (undefined4)uStack_60;
    local_70[3] = uStack_60._4_4_;
    *(undefined1 *)(local_70 + 0x10) = 0;
    *(undefined8 *)(local_70 + 0xc) = 0;
    *(undefined1 *)(local_70 + 0x12) = 0;
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



// FUNCTION 1476e514e FUN_1476e514e body=238 status=ok
// SIG undefined FUN_1476e514e(void)

int * FUN_1476e514e(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 1476e523c FUN_1476e523c body=128 status=ok
// SIG undefined FUN_1476e523c(void)

byte FUN_1476e523c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar2 = param_1;
    FUN_1476e54d4(param_1,local_24,param_2,param_3);
    bVar1 = (byte)lVar2;
    if (local_1c != -1) {
      bVar1 = FUN_14179e8d0(*(undefined8 *)(param_1 + 0xb0),local_24);
    }
    bVar1 = local_1c != -1 & bVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 1476e52be FUN_1476e52be body=157 status=ok
// SIG undefined FUN_1476e52be(void)

ulonglong FUN_1476e52be(longlong param_1,int param_2,char param_3)

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
  
  lVar7 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x48);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x40) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x40) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x40;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x48));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476e535c FUN_1476e535c body=375 status=ok
// SIG undefined FUN_1476e535c(void)

void FUN_1476e535c(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong lVar10;
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
  lVar10 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar9 = *(byte *)(lVar10 + 0x48);
    if ((bVar9 & 1) == 0) {
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = param_4[5];
      uVar7 = param_4[6];
      uVar8 = param_4[7];
      *(undefined4 *)(lVar10 + 0x20) = param_4[4];
      *(undefined4 *)(lVar10 + 0x24) = uVar6;
      *(undefined4 *)(lVar10 + 0x28) = uVar7;
      *(undefined4 *)(lVar10 + 0x2c) = uVar8;
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar3;
      *(undefined4 *)(lVar10 + 0x18) = uVar4;
      *(undefined4 *)(lVar10 + 0x1c) = uVar5;
      if ((undefined4 *)(lVar10 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                  (&local_58,param_4 + 8);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar10 + 0x40);
        uVar2 = *(undefined4 *)(lVar10 + 0x30);
        uVar3 = *(undefined4 *)(lVar10 + 0x34);
        uVar4 = *(undefined4 *)(lVar10 + 0x38);
        uVar5 = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined4 *)(lVar10 + 0x30) = local_58;
        *(undefined4 *)(lVar10 + 0x34) = uStack_54;
        *(undefined4 *)(lVar10 + 0x38) = uStack_50;
        *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
        *(ulonglong *)(lVar10 + 0x40) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar9 = *(byte *)(lVar10 + 0x48);
      }
      *(byte *)(lVar10 + 0x48) = bVar9 | 1;
    }
    else {
      FUN_1476e563a(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    *(undefined4 *)(lVar10 + 0x20) = param_4[4];
    *(undefined4 *)(lVar10 + 0x24) = uVar6;
    *(undefined4 *)(lVar10 + 0x28) = uVar7;
    *(undefined4 *)(lVar10 + 0x2c) = uVar8;
    *(undefined4 *)(lVar10 + 0x10) = uVar2;
    *(undefined4 *)(lVar10 + 0x14) = uVar3;
    *(undefined4 *)(lVar10 + 0x18) = uVar4;
    *(undefined4 *)(lVar10 + 0x1c) = uVar5;
    if ((undefined4 *)(lVar10 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                (&local_58,param_4 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar10 + 0x40);
      uVar2 = *(undefined4 *)(lVar10 + 0x30);
      uVar3 = *(undefined4 *)(lVar10 + 0x34);
      uVar4 = *(undefined4 *)(lVar10 + 0x38);
      uVar5 = *(undefined4 *)(lVar10 + 0x3c);
      *(undefined4 *)(lVar10 + 0x30) = local_58;
      *(undefined4 *)(lVar10 + 0x34) = uStack_54;
      *(undefined4 *)(lVar10 + 0x38) = uStack_50;
      *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
      *(ulonglong *)(lVar10 + 0x40) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e54d4 FUN_1476e54d4 body=189 status=ok
// SIG undefined FUN_1476e54d4(void)

longlong FUN_1476e54d4(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1476e5592(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e5592 FUN_1476e5592 body=167 status=ok
// SIG undefined FUN_1476e5592(void)

undefined4 * FUN_1476e5592(longlong param_1,undefined4 *param_2,undefined4 *param_3)

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



// FUNCTION 1476e563a FUN_1476e563a body=273 status=ok
// SIG undefined FUN_1476e563a(void)

void FUN_1476e563a(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar14 = *param_1;
  if ((int)uVar3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar8 = uVar3;
    do {
      uVar1 = (uVar8 >> 1) + uVar10;
      if (*(int *)(lVar14 + (ulonglong)uVar1 * 0x40) < *param_2) {
        uVar10 = uVar1 + (uVar8 & 1);
      }
      bVar4 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar4);
    if (((int)uVar10 < (int)uVar3) && (*(int *)(lVar14 + (ulonglong)uVar10 * 0x40) <= *param_2)) {
      piVar13 = (int *)(lVar14 + (ulonglong)uVar10 * 0x40);
      FUN_1476e4a0a(piVar13,1);
      goto LAB_1476e56ee;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1476e574c(param_1,uVar3);
    lVar14 = *param_1;
  }
  lVar11 = (ulonglong)uVar10 * 0x40;
  memmove((void *)(lVar14 + lVar11 + 0x40),(void *)(lVar14 + lVar11),
          (ulonglong)(uVar3 - uVar10) << 6);
  piVar13 = (int *)(lVar11 + *param_1);
LAB_1476e56ee:
  *piVar13 = *param_2;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar13 + 2) = *param_3;
  *(undefined8 *)(piVar13 + 4) = uVar5;
  *(undefined8 *)(piVar13 + 6) = uVar6;
  *(undefined8 *)(piVar13 + 8) = uVar7;
  uVar2 = *(undefined1 *)(param_3 + 6);
  puVar9 = param_3 + 4;
  *(undefined1 *)(piVar13 + 0xe) = uVar2;
  piVar12 = piVar13 + 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar12 = *puVar9;
    return;
  case 1:
    *(undefined2 *)piVar12 = *(undefined2 *)puVar9;
    return;
  case 2:
    *(undefined8 *)piVar12 = *puVar9;
    *(undefined8 *)(piVar13 + 0xc) = param_3[5];
    *puVar9 = 0;
    param_3[5] = 0;
    return;
  }
}



// FUNCTION 1476e574c FUN_1476e574c body=132 status=ok
// SIG undefined FUN_1476e574c(void)

void FUN_1476e574c(longlong param_1,int param_2)

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



// FUNCTION 1476e57d2 FUN_1476e57d2 body=167 status=ok
// SIG undefined FUN_1476e57d2(void)

void FUN_1476e57d2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476e584d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476e584d;
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
LAB_1476e584d:
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
                    /* WARNING: Could not recover jumptable at 0x0001476e586d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476e587a FUN_1476e587a body=900 status=ok
// SIG undefined FUN_1476e587a(void)

void FUN_1476e587a(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte local_319;
  undefined8 *local_2f8;
  int local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [32];
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 local_280 [70];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_2b8;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar10 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar10 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_290 + lVar5) = 0;
        *(undefined4 *)((longlong)local_280 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x210);
      local_2c0 = *(undefined8 *)(param_3 + 8);
      local_2e0 = *param_3;
      uStack_2dc = param_3[1];
      iStack_2d8 = param_3[2];
      uStack_2d4 = param_3[3];
      local_2d0 = *(undefined8 *)(param_3 + 4);
      uStack_2c8 = *(undefined8 *)(param_3 + 6);
      local_290 = (undefined1 *)0x0;
      local_288 = 0x400000000;
      puVar13 = local_280;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_2c0._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_2c0);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_2f8,&local_2e0,puVar13);
          uVar8 = local_288;
          if (local_2f8 != (undefined8 *)0x0) {
            lVar12 = (longlong)(int)local_288;
            uVar6 = (int)local_288 + 1;
            local_288 = CONCAT44(local_288._4_4_,uVar6);
            if (local_288._4_4_ < uVar6) {
              FUN_14476a5c8(local_2b0,uVar8 & 0xffffffff);
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
              if (local_2f8 == (undefined8 *)0x0) goto LAB_1476e5a5c;
            }
            else {
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
            }
            LOCK();
            *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
            UNLOCK();
            if (local_2f8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_2f8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_2f8)(local_2f8,1);
              }
            }
          }
        }
LAB_1476e5a5c:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 4);
      if ((int)local_288 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_2b0,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_2f8 = (undefined8 *)0x0;
        local_2e8 = 0;
      }
      else {
        FUN_1476e5c00(lVar10 + 0x28,&local_2f8,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_319 = local_2f0 == 1;
      }
      if (0 < iStack_2d8) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_2dc,local_2e0) + lVar5 * 2);
          lVar12 = *param_6;
          puVar13 = local_280;
          lVar9 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar9 & 0x1f) & 1) != 0) {
              uVar8 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar9 * 4);
              lVar11 = uVar8 + local_2e8;
              if (local_2e8 == 0) {
                lVar11 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar8),lVar11);
              *(undefined8 *)(lVar5 * 0x20 + lVar12 + uVar8) = uVar3;
            }
            lVar9 = lVar9 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar9 != 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_2d8);
      }
      *(undefined4 *)(lVar10 + 0x29c) = 1;
      if (local_2f8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 3) = *(int *)(local_2f8 + 3) + -1;
        UNLOCK();
        if ((local_319 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_2f8 + 1));
        }
      }
      FUN_14588b8d6(local_2b0);
      lVar10 = 0x180;
      do {
        FUN_1475d7c02((longlong)local_280 + lVar10);
        lVar10 = lVar10 + -0x80;
      } while (lVar10 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e5c00 FUN_1476e5c00 body=185 status=ok
// SIG undefined FUN_1476e5c00(void)

undefined8 * FUN_1476e5c00(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

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
            FUN_1476e5cba(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
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



// FUNCTION 1476e5cba FUN_1476e5cba body=116 status=ok
// SIG undefined FUN_1476e5cba(void)

longlong * FUN_1476e5cba(longlong *param_1,longlong *param_2,int param_3,uint param_4)

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
    param_1[2] = (ulonglong)param_4 * 0x20 + *param_2;
  }
  return param_1;
}



// FUNCTION 1476e5d2e FUN_1476e5d2e body=57 status=ok
// SIG undefined FUN_1476e5d2e(void)

undefined8 * FUN_1476e5d2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5084b0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e5d68 FUN_1476e5d68 body=152 status=ok
// SIG undefined FUN_1476e5d68(void)

void FUN_1476e5d68(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

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
    uVar2 = FUN_1476e5eb8(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e5e46 FUN_1476e5e46 body=55 status=ok
// SIG undefined FUN_1476e5e46(void)

void FUN_1476e5e46(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1476e8572(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1476e5e7e FUN_1476e5e7e body=57 status=ok
// SIG undefined FUN_1476e5e7e(void)

undefined8 * FUN_1476e5e7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5084b0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e5eb8 FUN_1476e5eb8 body=232 status=ok
// SIG undefined FUN_1476e5eb8(void)

undefined8 * FUN_1476e5eb8(undefined8 param_1,undefined2 param_2)

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
  puVar1 = (undefined8 *)FUN_1476e5fa2();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a5084d0;
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



// FUNCTION 1476e5fa2 FUN_1476e5fa2 body=104 status=ok
// SIG undefined FUN_1476e5fa2(void)

undefined8 FUN_1476e5fa2(longlong *param_1,ushort param_2)

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



// FUNCTION 1476e600a FUN_1476e600a body=38 status=ok
// SIG undefined FUN_1476e600a(void)

undefined8 FUN_1476e600a(undefined8 param_1,int param_2)

{
  FUN_1476e60a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e6030 FUN_1476e6030 body=118 status=ok
// SIG undefined FUN_1476e6030(void)

void FUN_1476e6030(longlong param_1,longlong *param_2)

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
          FUN_1476e620a(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1476e60a6 FUN_1476e60a6 body=71 status=ok
// SIG undefined FUN_1476e60a6(void)

void FUN_1476e60a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5084d0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1476e6122(param_1 + 8);
  FUN_1476e60ee(param_1 + 1);
  return;
}



// FUNCTION 1476e60ee FUN_1476e60ee body=52 status=ok
// SIG undefined FUN_1476e60ee(void)

void FUN_1476e60ee(longlong *param_1)

{
  FUN_1476e61b0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476e6122 FUN_1476e6122 body=52 status=ok
// SIG undefined FUN_1476e6122(void)

void FUN_1476e6122(longlong *param_1)

{
  FUN_1476e6156();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476e6156 FUN_1476e6156 body=89 status=ok
// SIG undefined FUN_1476e6156(void)

void FUN_1476e6156(longlong param_1)

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



// FUNCTION 1476e61b0 FUN_1476e61b0 body=89 status=ok
// SIG undefined FUN_1476e61b0(void)

void FUN_1476e61b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1476e620a FUN_1476e620a body=104 status=ok
// SIG undefined FUN_1476e620a(void)

void FUN_1476e620a(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476e6272 FUN_1476e6272 body=1054 status=ok
// SIG undefined FUN_1476e6272(void)

void FUN_1476e6272(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
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
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar14 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476e62cf;
      plVar18 = plVar18 + 4;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1476e62cf:
  uVar2 = *(ushort *)(param_2 + 0xe);
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_c4 = *(int *)(param_2 + 0x14);
  if (local_c4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar14 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1476e6326;
      plVar17 = plVar17 + 4;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1476e6326:
  lVar14 = *plVar18;
  local_c8 = *(int *)(param_2 + 0x14);
  if (local_c8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  lVar4 = *plVar17;
  local_b0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar2 != 0) {
    local_c0 = param_1 + 8;
    uVar24 = 0;
    do {
      local_94 = *(int *)(lVar4 + uVar24 * 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar15 = *(longlong *)(param_1 + 8);
      uVar19 = 0;
      if (0 < (int)uVar3) {
        uVar19 = 0;
        uVar21 = (ulonglong)uVar3;
        uVar22 = uVar3;
        do {
          uVar21 = uVar21 >> 1;
          uVar23 = (uint)uVar21 + (int)uVar19;
          if (*(int *)(lVar15 + (ulonglong)uVar23 * 0x28) < local_94) {
            uVar19 = (ulonglong)(uVar23 + (uVar22 & 1));
          }
          bVar5 = 1 < uVar22;
          uVar22 = (uint)uVar21;
        } while (bVar5);
      }
      if (((int)uVar19 < (int)uVar3) && (*(int *)(lVar15 + uVar19 * 0x28) <= local_94)) {
        lVar15 = lVar15 + uVar19 * 0x28;
        if ((undefined4 *)(lVar15 + 8) == (undefined4 *)0x0) goto LAB_1476e63fb;
        uVar6 = *(undefined4 *)(lVar15 + 8);
        uVar7 = *(undefined4 *)(lVar15 + 0xc);
        uVar8 = *(undefined4 *)(lVar15 + 0x10);
        uVar9 = *(undefined4 *)(lVar15 + 0x14);
        uVar13 = *(undefined8 *)(lVar15 + 0x20);
        puVar20 = (undefined8 *)(lVar14 + 0x10 + uVar24 * 0x20);
        *puVar20 = *(undefined8 *)(lVar15 + 0x18);
        puVar20[1] = uVar13;
        puVar1 = (undefined4 *)(lVar14 + uVar24 * 0x20);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
      }
      else {
LAB_1476e63fb:
        lVar15 = FUN_1475b443c(local_b0);
        if (((lVar15 != 0) && (lVar16 = FUN_14479d2ce(lVar15), lVar16 != 0)) &&
           (*(longlong *)(lVar15 + 8) != 0)) {
          local_a8 = *(undefined4 *)(param_1 + 0x30);
          uStack_a4 = *(undefined4 *)(param_1 + 0x34);
          uStack_a0 = *(undefined4 *)(param_1 + 0x38);
          uStack_9c = *(undefined4 *)(param_1 + 0x3c);
          local_d8 = lVar16;
          FUN_140d4d2ba(&local_8e,lVar16,lVar15 + 8,&local_a8);
          lVar16 = *(longlong *)(param_1 + 0x48);
          if (lVar16 == 0) {
LAB_1476e6454:
            if (local_8a == '\0') {
              local_78 = 0.0;
              uStack_70 = 0.0;
              local_88 = 0.0;
              uStack_80 = 0.0;
              local_68 = 1;
              FUN_1476e707a(local_d8,lVar15 + 0x10,&local_88);
            }
            else if (local_8c == '\x01') {
              local_68 = 1;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_8e))
                        (&local_88,local_d8);
            }
            else {
              uVar19 = (ulonglong)local_8e;
              local_68 = 1;
              uStack_80 = (double)*(float *)(local_d8 + 4 + uVar19);
              local_78 = (double)*(float *)(local_d8 + 8 + uVar19);
              uStack_70 = (double)*(float *)(local_d8 + 0xc + uVar19);
              local_88 = (double)*(float *)(local_d8 + uVar19);
            }
            puVar20 = &local_88;
            puVar1 = (undefined4 *)(lVar14 + 0x10 + uVar24 * 0x20);
            *puVar1 = (undefined4)local_78;
            puVar1[1] = local_78._4_4_;
            puVar1[2] = (undefined4)uStack_70;
            puVar1[3] = uStack_70._4_4_;
            puVar1 = (undefined4 *)(lVar14 + uVar24 * 0x20);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
          }
          else {
            local_d0 = lVar16;
            if (local_8a == '\0') {
              FUN_1476e714e(lVar16,&local_88,local_d8,lVar15 + 0x10);
            }
            else if (local_8c == '\x01') {
              FUN_1476e7984();
            }
            else {
              FUN_1476e7b66(lVar16,&local_88,local_d8,local_8e);
            }
            if (local_88._2_1_ == '\x01') {
              puVar20 = (undefined8 *)
                        (((ulonglong)local_88 & 0xffff) * 0x20 + *(longlong *)(local_d0 + 8));
            }
            else {
              puVar20 = (undefined8 *)0x0;
            }
            if (puVar20 == (undefined8 *)0x0) goto LAB_1476e6454;
            uVar6 = *(undefined4 *)puVar20;
            uVar7 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar8 = *(undefined4 *)(puVar20 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar10 = *(undefined4 *)((longlong)puVar20 + 0x14);
            uVar11 = *(undefined4 *)(puVar20 + 3);
            uVar12 = *(undefined4 *)((longlong)puVar20 + 0x1c);
            puVar1 = (undefined4 *)(lVar14 + 0x10 + uVar24 * 0x20);
            *puVar1 = *(undefined4 *)(puVar20 + 2);
            puVar1[1] = uVar10;
            puVar1[2] = uVar11;
            puVar1[3] = uVar12;
            puVar1 = (undefined4 *)(lVar14 + uVar24 * 0x20);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
          }
          FUN_1476e7d48(local_c0,&local_94,puVar20);
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar2);
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar18 != (longlong *)0x0) {
    uVar24 = plVar18[2];
    if ((ulonglong)plVar18[2] < local_b8) {
      uVar24 = local_b8;
    }
    plVar18[2] = uVar24;
    LOCK();
    *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
    UNLOCK();
    if (local_c4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar18 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e6692 FUN_1476e6692 body=1656 status=ok
// SIG undefined FUN_1476e6692(void)

void FUN_1476e6692(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  double *pdVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  double *pdVar17;
  longlong *plVar18;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_108;
  ulonglong local_100;
  undefined2 *local_f8;
  longlong local_f0;
  int local_e4;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  ushort local_7c;
  char local_7a;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong local_68;
  ushort local_60;
  char cStack_5e;
  undefined5 uStack_5d;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1476e66e7;
      plVar14 = plVar14 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_1476e66e7:
  local_100 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_d0 = *(ulonglong *)(param_1 + 0x40);
  local_dc = *(int *)(param_2 + 0x14);
  if (local_dc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar15 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476e6740;
      plVar15 = plVar15 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar15 = (longlong *)0x0;
LAB_1476e6740:
  local_f8 = (undefined2 *)*plVar14;
  local_d8 = *(ulonglong *)(param_1 + 0x40);
  local_e0 = *(int *)(param_2 + 0x14);
  if (local_e0 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
  }
  LOCK();
  *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar11 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476e6799;
      plVar18 = plVar18 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_1476e6799:
  pdVar17 = (double *)*plVar15;
  local_e4 = *(int *)(param_2 + 0x14);
  if (local_e4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  local_108 = *plVar18;
  FUN_140b325e4(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_98 == 0) {
    FUN_1410bd96e(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar11 = local_50;
    if (local_50 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_f0 = local_68;
      if ((short)local_100 != 0 && local_68 != 0) {
        local_100 = (ulonglong)(uint)((int)local_100 << 2);
        uVar16 = 0;
        do {
          lVar11 = *(longlong *)(local_f0 + uVar16 * 4);
          puVar13 = &DAT_149dfb77a;
          if (*(int *)(lVar11 + 0x58) != 0) {
            puVar13 = *(undefined2 **)(lVar11 + 0x50);
          }
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_c8,puVar13,1);
          FUN_1476e714e(uVar5,&local_7c,*(undefined8 *)(local_108 + uVar16 * 2),&local_c8);
          lVar11 = local_108;
          if (local_7a == '\x01') {
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            puVar2 = (undefined4 *)(lVar11 + (ulonglong)local_7c * 0x20);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            pdVar3 = (double *)(lVar11 + 0x10 + (ulonglong)local_7c * 0x20);
            dVar10 = pdVar3[1];
            pdVar17[uVar16 + 2] = *pdVar3;
            (pdVar17 + uVar16 + 2)[1] = dVar10;
            pdVar3 = pdVar17 + uVar16;
            *(undefined4 *)pdVar3 = uVar6;
            *(undefined4 *)((longlong)pdVar3 + 4) = uVar7;
            *(undefined4 *)(pdVar3 + 1) = uVar8;
            *(undefined4 *)((longlong)pdVar3 + 0xc) = uVar9;
          }
          else {
            FUN_1476e3130(*(undefined8 *)(local_f0 + uVar16 * 4),&local_8c,
                          *(undefined8 *)(local_108 + uVar16 * 2));
            uStack_c0 = (double)local_88;
            local_b8 = (double)local_84;
            uStack_b0 = (double)local_80;
            local_c8 = (double)local_8c;
            pdVar17[uVar16 + 2] = local_b8;
            (pdVar17 + uVar16 + 2)[1] = uStack_b0;
            pdVar17[uVar16] = local_c8;
            (pdVar17 + uVar16)[1] = uStack_c0;
            local_118 = *(undefined8 *)(local_f0 + uVar16 * 4);
            FUN_1476e80f6(*(undefined8 *)(param_1 + 0x48),&local_8c,
                          *(undefined8 *)(lVar11 + uVar16 * 2),&local_c8);
            *local_f8 = local_8c._0_2_;
          }
          uVar16 = uVar16 + 4;
          local_f8 = local_f8 + 1;
        } while (local_100 != uVar16);
      }
      lVar11 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
      if (lVar11 != 0) {
        LOCK();
        piVar1 = (int *)(lVar11 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_70 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
        }
      }
    }
    else if (local_100 != 0) {
      uVar16 = 0;
      do {
        FUN_1476e7b66(*(undefined8 *)(param_1 + 0x48),&local_78,
                      *(undefined8 *)(local_108 + uVar16 * 8),*(undefined2 *)(local_50 + uVar16 * 2)
                     );
        if (cStack_76 == '\x01') {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
          puVar2 = (undefined4 *)(lVar4 + (ulonglong)local_78 * 0x20);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          pdVar3 = (double *)(lVar4 + 0x10 + (ulonglong)local_78 * 0x20);
          dVar10 = pdVar3[1];
          pdVar17[2] = *pdVar3;
          pdVar17[3] = dVar10;
          *(undefined4 *)pdVar17 = uVar6;
          *(undefined4 *)((longlong)pdVar17 + 4) = uVar7;
          *(undefined4 *)(pdVar17 + 1) = uVar8;
          *(undefined4 *)((longlong)pdVar17 + 0xc) = uVar9;
        }
        else {
          uVar12 = (ulonglong)*(ushort *)(lVar11 + uVar16 * 2);
          lVar4 = *(longlong *)(local_108 + uVar16 * 8);
          uStack_c0 = (double)*(float *)(lVar4 + 4 + uVar12);
          local_b8 = (double)*(float *)(lVar4 + 8 + uVar12);
          uStack_b0 = (double)*(float *)(lVar4 + 0xc + uVar12);
          local_c8 = (double)*(float *)(lVar4 + uVar12);
          pdVar17[2] = local_b8;
          pdVar17[3] = uStack_b0;
          *pdVar17 = local_c8;
          pdVar17[1] = uStack_c0;
          local_118 = CONCAT62(local_118._2_6_,*(undefined2 *)(lVar11 + uVar16 * 2));
          FUN_1476e8014(*(undefined8 *)(param_1 + 0x48),&local_8c,
                        *(undefined8 *)(local_108 + uVar16 * 8),&local_c8);
          local_f8[uVar16] = local_8c._0_2_;
        }
        uVar16 = uVar16 + 1;
        pdVar17 = pdVar17 + 4;
      } while (local_100 != uVar16);
    }
    lVar11 = CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60));
    if (lVar11 != 0) {
      LOCK();
      piVar1 = (int *)(lVar11 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_58 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60)) + 8));
      }
    }
  }
  else if (local_100 != 0) {
    uVar16 = 0;
    do {
      FUN_1476e7984(*(undefined8 *)(param_1 + 0x48),&local_60,
                    *(undefined8 *)(local_108 + uVar16 * 8),*(undefined2 *)(local_98 + uVar16 * 2));
      if (cStack_5e == '\x01') {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        puVar2 = (undefined4 *)(lVar11 + (ulonglong)local_60 * 0x20);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        pdVar3 = (double *)(lVar11 + 0x10 + (ulonglong)local_60 * 0x20);
        dVar10 = pdVar3[1];
        pdVar17[2] = *pdVar3;
        pdVar17[3] = dVar10;
        *(undefined4 *)pdVar17 = uVar6;
        *(undefined4 *)((longlong)pdVar17 + 4) = uVar7;
        *(undefined4 *)(pdVar17 + 1) = uVar8;
        *(undefined4 *)((longlong)pdVar17 + 0xc) = uVar9;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_98 + uVar16 * 2)))
                  (&local_c8,*(undefined8 *)(local_108 + uVar16 * 8));
        *(undefined4 *)(pdVar17 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)pdVar17 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(pdVar17 + 3) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_b0._4_4_;
        *(undefined4 *)pdVar17 = (undefined4)local_c8;
        *(undefined4 *)((longlong)pdVar17 + 4) = local_c8._4_4_;
        *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_c0._4_4_;
        local_118 = CONCAT62(local_118._2_6_,*(undefined2 *)(local_98 + uVar16 * 2));
        FUN_1476e7f32(*(undefined8 *)(param_1 + 0x48),&local_78,
                      *(undefined8 *)(local_108 + uVar16 * 8),&local_c8);
        local_f8[uVar16] = local_78;
      }
      uVar16 = uVar16 + 1;
      pdVar17 = pdVar17 + 4;
    } while (local_100 != uVar16);
  }
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
    UNLOCK();
    if (local_e4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar18 + 1));
    }
  }
  if (plVar15 != (longlong *)0x0) {
    uVar16 = plVar15[2];
    if ((ulonglong)plVar15[2] < local_d8) {
      uVar16 = local_d8;
    }
    plVar15[2] = uVar16;
    LOCK();
    *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
    UNLOCK();
    if (local_e0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar15 + 1));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    uVar16 = plVar14[2];
    if ((ulonglong)plVar14[2] < local_d0) {
      uVar16 = local_d0;
    }
    plVar14[2] = uVar16;
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (local_dc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e6d0c FUN_1476e6d0c body=876 status=ok
// SIG undefined FUN_1476e6d0c(void)

void FUN_1476e6d0c(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  double *pdVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
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
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476e6d61;
      plVar8 = plVar8 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476e6d61:
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar4 = (ulonglong)uVar2;
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476e6db5;
      plVar9 = plVar9 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476e6db5:
  puVar6 = (undefined4 *)*plVar8;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar3 = *plVar9;
  FUN_140b325e4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_80 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar2 != 0 && local_98 != 0) {
        lVar11 = 0;
        do {
          FUN_1476e3130(*(undefined8 *)(local_98 + lVar11 * 4),&local_58,
                        *(undefined8 *)(lVar3 + lVar11 * 2));
          *(double *)(puVar6 + lVar11 * 2 + 2) = (double)local_54;
          *(double *)(puVar6 + lVar11 * 2 + 4) = (double)local_50;
          *(double *)(puVar6 + lVar11 * 2 + 6) = (double)local_4c;
          *(double *)(puVar6 + lVar11 * 2) = (double)local_58;
          lVar11 = lVar11 + 4;
        } while ((ulonglong)uVar2 * 4 != lVar11);
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
    else if (uVar4 != 0) {
      pdVar7 = (double *)(puVar6 + 6);
      uVar10 = 0;
      do {
        uVar5 = (ulonglong)*(ushort *)(local_68 + uVar10 * 2);
        lVar11 = *(longlong *)(lVar3 + uVar10 * 8);
        pdVar7[-2] = (double)*(float *)(lVar11 + 4 + uVar5);
        pdVar7[-1] = (double)*(float *)(lVar11 + 8 + uVar5);
        *pdVar7 = (double)*(float *)(lVar11 + 0xc + uVar5);
        pdVar7[-3] = (double)*(float *)(lVar11 + uVar5);
        uVar10 = uVar10 + 1;
        pdVar7 = pdVar7 + 4;
      } while (uVar4 != uVar10);
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_74,local_78) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iStack_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT44(uStack_74,local_78) + 8));
      }
    }
  }
  else if (uVar4 != 0) {
    uVar10 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_80 + uVar10 * 2)
                  ))(&local_78,*(undefined8 *)(lVar3 + uVar10 * 8));
      *(longlong *)(puVar6 + 4) = local_68;
      *(undefined8 *)(puVar6 + 6) = uStack_60;
      *puVar6 = local_78;
      puVar6[1] = uStack_74;
      puVar6[2] = iStack_70;
      puVar6[3] = uStack_6c;
      uVar10 = uVar10 + 1;
      puVar6 = puVar6 + 8;
    } while (uVar4 != uVar10);
  }
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar4 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b0) {
      uVar4 = local_b0;
    }
    plVar8[2] = uVar4;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e707a FUN_1476e707a body=210 status=ok
// SIG undefined FUN_1476e707a(void)

void FUN_1476e707a(undefined8 param_1,undefined8 param_2,double *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_58);
  puVar1 = local_58;
  if (local_50 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_48,puVar1);
  FUN_1476e7eb6(&local_34,param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_24 == '\x01') {
    param_3[1] = (double)local_30;
    param_3[2] = (double)local_2c;
    param_3[3] = (double)local_28;
    *param_3 = (double)local_34;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e714e FUN_1476e714e body=483 status=ok
// SIG undefined FUN_1476e714e(void)

undefined8 FUN_1476e714e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

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
          goto LAB_1476e727c;
        }
        else {
LAB_1476e727c:
          FUN_1476e75ec(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476e76b8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476e7520(param_1 + 8);
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
  FUN_1476e7332(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e7332 FUN_1476e7332 body=493 status=ok
// SIG undefined FUN_1476e7332(void)

undefined2 * FUN_1476e7332(longlong param_1,undefined2 *param_2,undefined4 *param_3)

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
          goto LAB_1476e7464;
        }
        else {
LAB_1476e7464:
          FUN_1476e75ec(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1476e76b8(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1476e7520(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1476e78cc((longlong *)(param_1 + 0x40),uVar5,param_3);
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



// FUNCTION 1476e7520 FUN_1476e7520 body=203 status=ok
// SIG undefined FUN_1476e7520(void)

void FUN_1476e7520(longlong *param_1)

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
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
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
  FUN_1446f4a44(param_1,iVar5);
  return;
}



// FUNCTION 1476e75ec FUN_1476e75ec body=90 status=ok
// SIG undefined FUN_1476e75ec(void)

void FUN_1476e75ec(longlong *param_1,int param_2)

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
  FUN_1476e7646();
  return;
}



// FUNCTION 1476e7646 FUN_1476e7646 body=114 status=ok
// SIG undefined FUN_1476e7646(void)

void FUN_1476e7646(longlong *param_1,int param_2)

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



// FUNCTION 1476e76b8 FUN_1476e76b8 body=68 status=ok
// SIG undefined FUN_1476e76b8(void)

void FUN_1476e76b8(longlong param_1,uint param_2)

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
  FUN_1476e76fc(param_1);
  return;
}



// FUNCTION 1476e76fc FUN_1476e76fc body=462 status=ok
// SIG undefined FUN_1476e76fc(void)

void FUN_1476e76fc(longlong *param_1)

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



// FUNCTION 1476e78cc FUN_1476e78cc body=107 status=ok
// SIG undefined FUN_1476e78cc(void)

int FUN_1476e78cc(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_1476e7937(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476e7937 FUN_1476e7937 body=76 status=ok
// SIG undefined FUN_1476e7937(void)

undefined8 FUN_1476e7937(int *param_1,int *param_2)

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



// FUNCTION 1476e7984 FUN_1476e7984 body=481 status=ok
// SIG undefined FUN_1476e7984(void)

undefined8 FUN_1476e7984(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

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
          goto LAB_1476e7ab2;
        }
        else {
LAB_1476e7ab2:
          FUN_1476e75ec(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476e76b8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476e7520(param_1 + 8);
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
  FUN_1476e7332(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e7b66 FUN_1476e7b66 body=481 status=ok
// SIG undefined FUN_1476e7b66(void)

undefined8 FUN_1476e7b66(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

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
          goto LAB_1476e7c94;
        }
        else {
LAB_1476e7c94:
          FUN_1476e75ec(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476e76b8(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476e7520(param_1 + 8);
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
  FUN_1476e7332(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e7d48 FUN_1476e7d48 body=218 status=ok
// SIG undefined FUN_1476e7d48(void)

void FUN_1476e7d48(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar11 = 0;
  }
  else {
    iVar8 = *param_2;
    uVar11 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar11;
      if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x28) < iVar8) {
        uVar11 = uVar1 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar10 + (ulonglong)uVar11 * 0x28) <= iVar8)) {
      piVar12 = (int *)(lVar10 + (ulonglong)uVar11 * 0x28);
      goto LAB_1476e7ded;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476e7e22(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar4 = (ulonglong)uVar11 * 0x28;
  memmove((void *)(lVar10 + lVar4 + 0x28),(void *)(lVar10 + lVar4),
          (ulonglong)(uVar2 - uVar11) * 0x28);
  piVar12 = (int *)(lVar4 + *param_1);
  iVar8 = *param_2;
LAB_1476e7ded:
  *piVar12 = iVar8;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar12 + 2) = *param_3;
  *(undefined8 *)(piVar12 + 4) = uVar5;
  *(undefined8 *)(piVar12 + 6) = uVar6;
  *(undefined8 *)(piVar12 + 8) = uVar7;
  return;
}



// FUNCTION 1476e7e22 FUN_1476e7e22 body=147 status=ok
// SIG undefined FUN_1476e7e22(void)

void FUN_1476e7e22(longlong param_1,int param_2)

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



// FUNCTION 1476e7eb6 FUN_1476e7eb6 body=123 status=ok
// SIG undefined FUN_1476e7eb6(void)

undefined4 * FUN_1476e7eb6(undefined4 *param_1)

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
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e7f32 FUN_1476e7f32 body=224 status=ok
// SIG undefined FUN_1476e7f32(void)

undefined2 *
FUN_1476e7f32(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  FUN_1476e81f4(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476e82da(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e8014 FUN_1476e8014 body=224 status=ok
// SIG undefined FUN_1476e8014(void)

undefined2 *
FUN_1476e8014(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  FUN_1476e81f4(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476e82da(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e80f6 FUN_1476e80f6 body=252 status=ok
// SIG undefined FUN_1476e80f6(void)

undefined2 *
FUN_1476e80f6(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  FUN_1476e81f4(param_1 + 8,&local_58);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  local_50[4] = param_4[4];
  local_50[5] = uVar6;
  local_50[6] = uVar7;
  local_50[7] = uVar8;
  *local_50 = uVar2;
  local_50[1] = uVar3;
  local_50[2] = uVar4;
  local_50[3] = uVar5;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1476e82da(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e81f4 FUN_1476e81f4 body=229 status=ok
// SIG undefined FUN_1476e81f4(void)

int * FUN_1476e81f4(longlong *param_1,int *param_2)

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



// FUNCTION 1476e82da FUN_1476e82da body=339 status=ok
// SIG undefined FUN_1476e82da(void)

undefined4 * FUN_1476e82da(longlong param_1,undefined4 *param_2,longlong *param_3)

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
  FUN_1476e842e(param_1,local_48);
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
  cVar4 = FUN_1476e8514(param_1,uVar6,local_40,&local_4c);
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
      FUN_1476e76fc(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e842e FUN_1476e842e body=229 status=ok
// SIG undefined FUN_1476e842e(void)

int * FUN_1476e842e(longlong *param_1,int *param_2)

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



// FUNCTION 1476e8514 FUN_1476e8514 body=93 status=ok
// SIG undefined FUN_1476e8514(void)

undefined8 FUN_1476e8514(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1476e78cc(), iVar7 != -1)) {
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
    FUN_1476e7646(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1476e8572 FUN_1476e8572 body=48 status=ok
// SIG undefined FUN_1476e8572(void)

void FUN_1476e8572(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1476e85a2 FUN_1476e85a2 body=31 status=ok
// SIG undefined FUN_1476e85a2(void)

undefined8 FUN_1476e85a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e85c2 FUN_1476e85c2 body=871 status=ok
// SIG undefined FUN_1476e85c2(void)

void FUN_1476e85c2(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1e8 [32];
  ushort *local_1c8;
  code **local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  ushort local_19c [2];
  ushort *local_198;
  undefined8 *local_190;
  undefined2 local_184;
  ushort local_182;
  undefined8 local_180;
  undefined2 local_178;
  undefined2 local_176;
  undefined2 local_174;
  undefined2 local_172;
  undefined2 local_170;
  undefined2 local_16e;
  undefined2 local_16c;
  undefined1 local_167;
  undefined4 local_164;
  undefined1 local_160;
  undefined2 local_158;
  undefined4 local_156;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined2 local_148;
  undefined2 local_146;
  undefined2 local_144;
  undefined1 local_13f;
  undefined4 local_13c;
  ulonglong local_138;
  undefined1 local_130 [24];
  undefined1 local_118;
  byte bStack_117;
  uint local_114;
  undefined1 local_108 [80];
  longlong local_b8;
  code *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar3 = FUN_14009d2a0();
  local_158 = *(undefined2 *)(lVar3 + 0x4a);
  local_152 = *(undefined2 *)(lVar3 + 0x108);
  local_156 = *(undefined4 *)(lVar3 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_144 = puVar6[0xc];
  local_146 = puVar6[10];
  local_148 = puVar6[8];
  local_14a = puVar6[6];
  local_14c = puVar6[4];
  local_150 = *puVar6;
  local_14e = puVar6[2];
  local_13f = 0;
  local_13c = 0x6ff;
  local_138 = local_138 & 0xffffffffffffff00;
  local_182 = *(ushort *)(param_2 + 0x14);
  local_198 = &local_182;
  local_190 = &local_180;
  local_1a8 = param_3;
  FUN_1476e9524(&local_158,local_130);
  local_114 = *(uint *)(param_6 + 0x290);
  bVar4 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
  _local_118 = CONCAT11(bVar4,local_118);
  local_1c8 = local_19c;
  local_19c[0] = CONCAT11(bVar4,local_118) & 0xfdff;
  local_1c0 = (code **)&local_180;
  local_180 = FUN_1476e991a;
  local_178 = CONCAT11(local_178._1_1_,3);
  local_1b8 = param_2;
  FUN_1476e970e(local_130,&local_58,param_6 + 0x28,param_5);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  puVar2 = local_1a8;
  if (0 < *(int *)(param_4 + 4)) {
    local_138 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1a8;
    iVar1 = *(int *)(local_1a8 + 1);
    if ((longlong)iVar1 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_158,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar1 * 4 != lVar5);
      puVar6 = (undefined2 *)*puVar2;
    }
    local_16c = puVar6[0xc];
    local_16e = puVar6[10];
    local_170 = puVar6[8];
    local_172 = puVar6[6];
    local_174 = puVar6[4];
    local_178 = *puVar6;
    local_176 = puVar6[2];
    local_180 = (code *)CONCAT26(*(undefined2 *)(lVar3 + 0x108),
                                 CONCAT42(*(undefined4 *)(lVar3 + 0x104),
                                          *(undefined2 *)(lVar3 + 0x4a)));
    local_167 = 0;
    local_164 = 0x6ff;
    local_160 = 0;
    FUN_1476ea712(local_130);
    FUN_140dad9c2(local_108,&local_158,2);
    local_184 = *(undefined2 *)(param_2 + 0x14);
    local_50 = &local_182;
    local_58 = (code *)&local_184;
    FUN_1447c44f6(local_108,&local_58);
    FUN_140dad9c2(local_108,&local_158,0x84);
    local_114 = *(uint *)(param_6 + 0x290);
    bVar4 = bStack_117 & 0xfe | (local_114 & 0xfffffeff) == 1;
    _local_118 = CONCAT11(bVar4,local_118);
    local_182 = CONCAT11(bVar4,local_118) & 0xfdff;
    local_58 = FUN_1476ea9e0;
    local_50 = (ushort *)CONCAT71(local_50._1_7_,3);
    local_1b0 = puVar2;
    local_1c8 = &local_182;
    local_1c0 = &local_58;
    local_1b8 = param_2;
    FUN_1476ea7bc(local_130,local_19c,param_6 + 0x28,param_5);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e892a FUN_1476e892a body=887 status=ok
// SIG undefined FUN_1476e892a(void)

void FUN_1476e892a(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  undefined2 *local_198;
  uint *local_190;
  undefined8 *local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 local_16e;
  undefined2 local_16c;
  uint local_16a;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined1 local_153;
  undefined4 local_150;
  undefined1 local_14c;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined1 local_12f;
  undefined4 local_12c;
  ulonglong local_128;
  undefined1 local_120 [25];
  byte local_107;
  uint local_104;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1a8 = param_4;
  lVar4 = FUN_14009d2a0();
  local_148 = *(undefined2 *)(lVar4 + 0x4a);
  local_142 = *(undefined2 *)(lVar4 + 0x108);
  local_146 = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_134 = puVar6[0xc];
  local_136 = puVar6[10];
  local_138 = puVar6[8];
  local_13a = puVar6[6];
  local_13c = puVar6[4];
  local_140 = *puVar6;
  local_13e = puVar6[2];
  local_12f = 0;
  local_12c = 0x6ff;
  local_128 = local_128 & 0xffffffffffffff00;
  local_16c = *(undefined2 *)(param_2 + 0x14);
  local_198 = &local_16c;
  local_190 = &local_16a;
  local_1b8 = param_3;
  FUN_1476e9524(&local_148,local_120);
  local_104 = *(uint *)(param_7 + 0x290);
  local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
  local_1d8 = param_6;
  local_1d0 = param_2;
  local_1b0 = param_2;
  FUN_1433303c2(local_120,&local_188,param_7 + 0x28,param_5);
  if (local_188 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_188 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_188)(local_188,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(local_1a8 + 4)) {
    local_128 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1b8;
    iVar2 = *(int *)(local_1b8 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_148,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*local_1b8;
    }
    puVar3 = local_1b8;
    local_16c = *(undefined2 *)(lVar4 + 0x4a);
    local_166 = *(undefined2 *)(lVar4 + 0x108);
    local_16a = *(uint *)(lVar4 + 0x104);
    local_158 = puVar6[0xc];
    local_15a = puVar6[10];
    local_15c = puVar6[8];
    local_15e = puVar6[6];
    local_160 = puVar6[4];
    local_164 = *puVar6;
    local_162 = puVar6[2];
    local_153 = 0;
    local_150 = 0x6ff;
    local_14c = 0;
    FUN_1476ea712(local_120);
    FUN_140dad9c2(local_f8,&local_148,2);
    lVar4 = local_1b0;
    local_16e = *(undefined2 *)(local_1b0 + 0x14);
    local_178 = &local_16c;
    local_180 = &local_16e;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_148,0x84);
    local_104 = *(uint *)(param_7 + 0x290);
    local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
    local_1c8 = puVar3;
    local_1d0 = lVar4;
    local_1d8 = param_6;
    FUN_143330860(local_120,&local_1a0,param_7 + 0x28,param_5);
    if (local_1a0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1a0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1a0)(local_1a0,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e8ca2 FUN_1476e8ca2 body=520 status=ok
// SIG undefined FUN_1476e8ca2(void)

longlong * FUN_1476e8ca2(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1476ecfe8(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1476e8ce6;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a508590;
  plVar5 = plVar4 + 2;
  FUN_1476ed156(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_1476eebea(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1476e8e71:
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
joined_r0x0001476e8e60:
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
        goto joined_r0x0001476e8e60;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1476e8e71;
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
  FUN_1476ed09c(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1476e8ce6:
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



// FUNCTION 1476e8eae FUN_1476e8eae body=130 status=ok
// SIG undefined FUN_1476e8eae(void)

void FUN_1476e8eae(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
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
  FUN_1476eec92(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e8f32 FUN_1476e8f32 body=616 status=ok
// SIG undefined FUN_1476e8f32(void)

void FUN_1476e8f32(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
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
        FUN_1476ef018(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
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



// FUNCTION 1476e919c FUN_1476e919c body=902 status=ok
// SIG undefined FUN_1476e919c(void)

void FUN_1476e919c(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar2 = (int)param_4[1];
  local_130 = param_3;
  if (0 < iVar2) {
    lVar7 = *param_6;
    local_138 = param_5 + 0x28;
    lVar6 = 0;
    do {
      if (*(short *)(*param_4 + lVar6 * 2) != -1) {
        FUN_1432d4ca4(local_138,&local_60);
        lVar5 = local_60;
        plVar1 = local_130;
        lVar8 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*local_130 + 0x18));
        local_110 = local_50 + lVar8 * 8;
        if (local_50 == 0) {
          local_110 = 0;
        }
        FUN_1475b4978(lVar5,&local_78,*(undefined2 *)(*plVar1 + 0x14));
        local_118 = local_68 + lVar8 * 8;
        if (local_68 == 0) {
          local_118 = 0;
        }
        FUN_1475b4978(lVar5,&local_90,*(undefined2 *)(*plVar1 + 0x10));
        local_120 = local_80 + lVar8 * 8;
        if (local_80 == 0) {
          local_120 = 0;
        }
        FUN_1475b4978(lVar5,&local_a8,*(undefined2 *)(*plVar1 + 0xc));
        local_128 = local_98 + lVar8 * 8;
        if (local_98 == 0) {
          local_128 = 0;
        }
        FUN_1475b4978(lVar5,&local_c0,*(undefined2 *)(*plVar1 + 8));
        lVar3 = local_b0 + lVar8 * 8;
        if (local_b0 == 0) {
          lVar3 = 0;
        }
        FUN_1475b4978(lVar5,&local_d8,*(undefined2 *)(*plVar1 + 4));
        lVar4 = local_c8 + lVar8 * 8;
        if (local_c8 == 0) {
          lVar4 = 0;
        }
        FUN_1475b4978(lVar5,&local_f0,*(undefined2 *)*plVar1);
        lVar5 = local_e0 + lVar8 * 8;
        if (local_e0 == 0) {
          lVar5 = 0;
        }
        local_108 = (undefined4)*plVar1;
        uStack_104 = *(undefined4 *)((longlong)plVar1 + 4);
        uStack_100 = (undefined4)plVar1[1];
        uStack_fc = *(undefined4 *)((longlong)plVar1 + 0xc);
        local_148 = local_110;
        local_150 = local_118;
        local_158 = local_120;
        local_160 = local_128;
        local_168 = lVar3;
        FUN_1476eb970(&local_108,lVar7,lVar5,lVar4);
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 0x18) = *(int *)(local_f0 + 0x18) + -1;
          UNLOCK();
          if (local_e8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_f0 + 8));
          }
        }
        if (local_d8 != 0) {
          LOCK();
          *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
          UNLOCK();
          if (local_d0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
          }
        }
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + -1;
          UNLOCK();
          if (local_b8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_c0 + 8));
          }
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
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
        iVar2 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x38;
    } while (lVar6 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476e9524 FUN_1476e9524 body=154 status=ok
// SIG undefined FUN_1476e9524(void)

undefined8 * FUN_1476e9524(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[9] = 0x10000000000;
  param_2[0xe] = 0x10000000000;
  param_2[0x15] = 0x10000000000;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x1a] = 0x10000000000;
  FUN_1476e95c0(param_2,param_2 + 5);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 5);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e95c0 FUN_1476e95c0 body=333 status=ok
// SIG undefined FUN_1476e95c0(void)

void FUN_1476e95c0(undefined2 *param_1,undefined8 param_2)

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
  local_32 = param_1[7];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[8];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[9];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[10];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e970e FUN_1476e970e body=522 status=ok
// SIG undefined FUN_1476e970e(void)

int * FUN_1476e970e(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
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
  longlong local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar4 = FUN_1476e996c();
  if ((cVar4 == '\0') || (cVar4 = FUN_1476e99c2(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1476e974e;
  }
  plVar5 = (longlong *)FUN_1476e9c09(param_1,param_7);
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
  FUN_1400abb7c(local_70,param_1 + 0x88);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0xb0);
  FUN_1476e9b76(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476e9d02;
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
  local_f8 = param_1 + 0x28;
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
      if (local_d4 != -1) goto LAB_1476e98a5;
    }
  }
  else {
LAB_1476e98a5:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476e974e:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476e991a FUN_1476e991a body=80 status=ok
// SIG undefined FUN_1476e991a(void)

void FUN_1476e991a(undefined4 *param_1,undefined8 *param_2,longlong param_3)

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
  FUN_1476e9fea(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476e996c FUN_1476e996c body=85 status=ok
// SIG undefined FUN_1476e996c(void)

bool FUN_1476e996c(short *param_1)

{
  return param_1[10] != -1 &&
         ((param_1[9] != -1 && (param_1[8] != -1 && param_1[7] != -1)) &&
         ((param_1[6] != -1 && param_1[5] != -1) && (param_1[4] != -1 && *param_1 != -1)));
}



// FUNCTION 1476e99c2 FUN_1476e99c2 body=435 status=ok
// SIG undefined FUN_1476e99c2(void)

undefined8 FUN_1476e99c2(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[4];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[5];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[6];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[7];
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
  uVar1 = param_1[8];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar8 = false;
  }
  else {
    bVar8 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[9];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar9 = false;
  }
  else {
    bVar9 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[10];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar10 = false;
  }
  else {
    bVar10 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),
                  (byte)uVar3 & bVar8 & bVar9 & bVar6 & bVar7 & bVar4 & bVar5 & bVar10);
}



// FUNCTION 1476e9b76 FUN_1476e9b76 body=147 status=ok
// SIG undefined FUN_1476e9b76(void)

void FUN_1476e9b76(undefined2 *param_1,undefined8 param_2)

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
  FUN_140dba9e6(param_2,param_1[7]);
  FUN_140dba9e6(param_2,param_1[8]);
  FUN_140dba9e6(param_2,param_1[9]);
  FUN_140dba9e6(param_2,param_1[10]);
  return;
}



// FUNCTION 1476e9c09 FUN_1476e9c09 body=186 status=ok
// SIG undefined FUN_1476e9c09(void)

undefined8 * FUN_1476e9c09(undefined4 *param_1,longlong *param_2)

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
  puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a508530;
  puVar8[2] = &PTR_FUN_14a508548;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  *(undefined4 *)(puVar8 + 10) = param_1[8];
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(puVar8 + 8) = param_1[4];
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
  *(undefined4 *)(puVar8 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar7;
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



// FUNCTION 1476e9cc6 FUN_1476e9cc6 body=29 status=ok
// SIG undefined FUN_1476e9cc6(void)

undefined8 FUN_1476e9cc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e9ce4 FUN_1476e9ce4 body=29 status=ok
// SIG undefined FUN_1476e9ce4(void)

undefined8 FUN_1476e9ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476e9d1a FUN_1476e9d1a body=719 status=ok
// SIG undefined FUN_1476e9d1a(void)

void FUN_1476e9d1a(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xb);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1476e9d62;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476e9d62:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar9 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar4 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[4]) goto LAB_1476e9dfe;
      puVar7 = puVar7 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1476e9dfe:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x10 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[5]) goto LAB_1476e9e53;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1476e9e53:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x14 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[6]) goto LAB_1476e9ea0;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1476e9ea0:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x18 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[7]) goto LAB_1476e9eed;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1476e9eed:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x1c + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar4 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar6 = (ushort)uVar4;
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[8]) goto LAB_1476e9f3a;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1476e9f3a:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x20 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar1;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_1[9]) goto LAB_1476e9f87;
      puVar7 = puVar7 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1476e9f87:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar7) {
    *(int *)(lVar2 + 0x24 + lVar9 * 4) = (int)*puVar7 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar6 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar4 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar8 = (ulonglong)(uVar4 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[10]) goto LAB_1476e9fcc;
      puVar1 = puVar1 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476e9fcc:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + 0x28 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476e9fea FUN_1476e9fea body=404 status=ok
// SIG undefined FUN_1476e9fea(void)

void FUN_1476e9fea(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_80 = (ulonglong)puVar1[10];
  local_88 = (ulonglong)puVar1[9];
  local_90 = (ulonglong)puVar1[8];
  local_70 = (ulonglong)puVar1[4];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  local_78 = lVar2 + local_80;
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_c8 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_c8 = lVar3;
  }
  local_c0 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_c0 = lVar3;
  }
  local_b8 = lVar2 + (ulonglong)puVar1[6];
  if ((ulonglong)puVar1[6] == 0xffffffff) {
    local_b8 = lVar3;
  }
  local_b0 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_b0 = lVar3;
  }
  local_a8 = lVar2 + local_90;
  if (local_90 == 0xffffffff) {
    local_a8 = lVar3;
  }
  local_a0 = lVar2 + local_88;
  if (local_88 == 0xffffffff) {
    local_a0 = lVar3;
  }
  local_98 = local_78;
  if (local_80 == 0xffffffff) {
    local_98 = lVar3;
  }
  FUN_1476ea180(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ea180 FUN_1476ea180 body=749 status=ok
// SIG undefined FUN_1476ea180(void)

void FUN_1476ea180(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *(ushort *)(param_2 + 0xe);
  lVar8 = *param_4;
  if (lVar8 == 0) {
    lVar8 = param_4[1];
    if (lVar8 == 0) {
      if (uVar7 != 0 && param_4[2] != 0) {
        local_a8 = (ulonglong)((uint)uVar7 * 8);
        uVar10 = 0;
        local_a0 = param_4[2];
        do {
          local_70 = *(undefined8 *)(param_11 + uVar10);
          local_78 = *(undefined8 *)(param_10 + uVar10);
          local_80 = *(undefined8 *)(param_9 + uVar10);
          local_88 = *(undefined8 *)(param_8 + uVar10);
          local_90 = *(undefined8 *)(param_6 + uVar10);
          local_98 = *(undefined8 *)(param_5 + uVar10);
          local_68 = CONCAT44(local_68._4_4_,(float)*(double *)(param_7 + uVar10));
          FUN_1476ea46e(*(undefined8 *)(local_a0 + uVar10 * 2),*(undefined8 *)(param_3 + uVar10),
                        &local_98);
          uVar10 = uVar10 + 8;
        } while (local_a8 != uVar10);
      }
    }
    else if (uVar7 != 0) {
      uVar10 = 0;
      do {
        uVar11 = (ulonglong)*(ushort *)(lVar8 + uVar10);
        if (uVar11 != 0) {
          lVar9 = *(longlong *)(param_3 + uVar10 * 4);
          uVar1 = *(undefined8 *)(param_6 + uVar10 * 4);
          uVar2 = *(undefined8 *)(param_8 + uVar10 * 4);
          uVar3 = *(undefined8 *)(param_9 + uVar10 * 4);
          uVar4 = *(undefined8 *)(param_10 + uVar10 * 4);
          dVar5 = *(double *)(param_7 + uVar10 * 4);
          uVar6 = *(undefined8 *)(param_11 + uVar10 * 4);
          *(undefined8 *)(lVar9 + uVar11) = *(undefined8 *)(param_5 + uVar10 * 4);
          *(undefined8 *)(lVar9 + 8 + uVar11) = uVar1;
          *(float *)(lVar9 + 0x30 + uVar11) = (float)dVar5;
          *(undefined8 *)(lVar9 + 0x10 + uVar11) = uVar2;
          *(undefined8 *)(lVar9 + 0x18 + uVar11) = uVar3;
          *(undefined8 *)(lVar9 + 0x20 + uVar11) = uVar4;
          *(undefined8 *)(lVar9 + 0x28 + uVar11) = uVar6;
        }
        uVar10 = uVar10 + 2;
      } while ((uint)uVar7 * 2 != uVar10);
    }
  }
  else if (uVar7 != 0) {
    local_a8 = (ulonglong)((uint)uVar7 * 2);
    uVar10 = 0;
    local_a0 = param_1;
    do {
      local_68 = *(undefined8 *)(param_11 + uVar10 * 4);
      local_70 = *(undefined8 *)(param_10 + uVar10 * 4);
      local_78 = *(undefined8 *)(param_9 + uVar10 * 4);
      local_80 = *(undefined8 *)(param_8 + uVar10 * 4);
      local_88 = *(undefined8 *)(param_7 + uVar10 * 4);
      local_90 = *(undefined8 *)(param_6 + uVar10 * 4);
      local_98 = *(undefined8 *)(param_5 + uVar10 * 4);
      (**(code **)(*(longlong *)(local_a0 + 8) + 0x20 +
                  (longlong)*(int *)(local_a0 + 0x14) * (ulonglong)*(ushort *)(lVar8 + uVar10)))
                (*(undefined8 *)(param_3 + uVar10 * 4),&local_98);
      uVar10 = uVar10 + 2;
    } while (local_a8 != uVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ea46e FUN_1476ea46e body=271 status=ok
// SIG undefined FUN_1476ea46e(void)

void FUN_1476ea46e(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar9 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar9 != (longlong *)0x0) {
    cVar8 = (**(code **)(*plVar9 + 0x80))(plVar9);
    if (cVar8 != '\0') {
      (**(code **)(*plVar9 + 0x98))(plVar9,param_2,param_3);
      goto LAB_1476ea4cf;
    }
  }
  lVar10 = FUN_14479d2ce(local_30);
  if (lVar10 == 0) {
    lVar10 = FUN_1406f977c(local_60);
    if ((lVar10 != 0) &&
       (puVar11 = (undefined4 *)(*(int *)(lVar10 + 0x44) + local_38), puVar11 != (undefined4 *)0x0))
    {
      *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      uVar5 = *(undefined8 *)(param_3 + 4);
      uVar6 = *(undefined8 *)(param_3 + 6);
      uVar7 = *(undefined8 *)(param_3 + 10);
      *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_3 + 8);
      *(undefined8 *)(puVar11 + 10) = uVar7;
      *(undefined8 *)(puVar11 + 4) = uVar5;
      *(undefined8 *)(puVar11 + 6) = uVar6;
      *puVar11 = uVar1;
      puVar11[1] = uVar2;
      puVar11[2] = uVar3;
      puVar11[3] = uVar4;
    }
  }
  else {
    FUN_1476ea57e(param_2,lVar10,param_3);
  }
LAB_1476ea4cf:
  lVar10 = FUN_14479d2ce(local_28);
  if (lVar10 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar10,0);
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



// FUNCTION 1476ea57e FUN_1476ea57e body=398 status=ok
// SIG undefined FUN_1476ea57e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1476ea57e(longlong *param_1,longlong param_2,undefined1 *param_3)

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
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476ea61d;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476ea634;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x38) goto LAB_1476ea6cb;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476ea685;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476ea69a;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x38);
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
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1476ea6c7;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1476ea6cb:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1476ea6f5;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ea712 FUN_1476ea712 body=168 status=ok
// SIG undefined FUN_1476ea712(void)

undefined8 * FUN_1476ea712(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[9] = 0x10000000000;
  param_1[0xe] = 0x10000000000;
  param_1[0x15] = 0x10000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x1a] = 0x10000000000;
  local_1a = *(undefined2 *)param_1;
  local_28 = &local_18;
  local_30 = &local_1a;
  FUN_1447c44f6(param_1 + 5);
  FUN_140dad887((undefined2 *)((longlong)param_1 + 2),param_1 + 5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ea7bc FUN_1476ea7bc body=546 status=ok
// SIG undefined FUN_1476ea7bc(void)

int * FUN_1476ea7bc(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
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
  if ((*param_1 == -1) || (cVar4 = FUN_1476eaa32(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1476ea7f0;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x68,0x10);
  FUN_1476eab2e(plVar5,param_1,param_7,param_8);
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
  FUN_1400abb7c(local_70,param_1 + 0x44);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x58);
  FUN_1476eaa68(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476eac24;
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
  local_f8 = param_1 + 0x14;
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
      if (local_d4 != -1) goto LAB_1476ea96b;
    }
  }
  else {
LAB_1476ea96b:
    thunk_FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    thunk_FUN_1407cdf34(param_4,*param_2,0xffffffff);
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
LAB_1476ea7f0:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476ea9e0 FUN_1476ea9e0 body=80 status=ok
// SIG undefined FUN_1476ea9e0(void)

void FUN_1476ea9e0(undefined4 *param_1,undefined8 *param_2,longlong param_3)

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
  FUN_1476eaf88(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476eaa32 FUN_1476eaa32 body=53 status=ok
// SIG undefined FUN_1476eaa32(void)

undefined4 FUN_1476eaa32(ushort *param_1,undefined8 param_2)

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



// FUNCTION 1476eaa68 FUN_1476eaa68 body=198 status=ok
// SIG undefined FUN_1476eaa68(void)

void FUN_1476eaa68(undefined2 *param_1,undefined8 param_2)

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
  }
  if (param_1[7] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[8] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[9] != -1) {
    FUN_140dba9e6(param_2);
  }
  if (param_1[10] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 1476eab2e FUN_1476eab2e body=183 status=ok
// SIG undefined FUN_1476eab2e(void)

undefined8 *
FUN_1476eab2e(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

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
  *param_1 = &PTR_LAB_14a508550;
  param_1[2] = &PTR_FUN_14a508568;
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
  *(undefined4 *)(param_1 + 0xc) = param_2[8];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
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



// FUNCTION 1476eabe8 FUN_1476eabe8 body=29 status=ok
// SIG undefined FUN_1476eabe8(void)

undefined8 FUN_1476eabe8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476eac06 FUN_1476eac06 body=29 status=ok
// SIG undefined FUN_1476eac06(void)

undefined8 FUN_1476eac06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476eac3c FUN_1476eac3c body=843 status=ok
// SIG undefined FUN_1476eac3c(void)

void FUN_1476eac3c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xb);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1476eac84;
      puVar1 = puVar1 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476eac84:
  lVar3 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar3 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar3 = *param_3;
  }
  lVar4 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar4 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar3 + lVar7 * 4 + 4 + lVar4 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  if (uVar2 != 0) {
    lVar3 = *param_3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar4 = 0;
    do {
      if (*(short *)((longlong)puVar1 + lVar4 + 0x1e) == param_1[4]) {
        if ((longlong)puVar1 + lVar4 != 0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *(ulonglong *)((longlong)puVar1 + lVar4)) {
            *(int *)(lVar3 + 0x10 + lVar7 * 4) =
                 (int)*(ulonglong *)((longlong)puVar1 + lVar4) - (int)*(ulonglong *)(param_2 + 0x20)
            ;
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while ((ulonglong)*(ushort *)(param_2 + 0xc) << 5 != lVar4);
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[5]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x14 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[6]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x18 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[7]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x1c + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[8]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x20 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (*(ushort *)(param_2 + 0xc) == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = puVar1;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == param_1[9]) {
        if (puVar5 != (ulonglong *)0x0) {
          if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
            *(int *)(lVar3 + 0x24 + lVar7 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
            uVar2 = (uint)*(ushort *)(param_2 + 0xc);
            if (uVar2 == 0) {
              return;
            }
            lVar3 = *param_3;
            puVar1 = *(ulonglong **)(param_2 + 0x28);
          }
        }
        break;
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 != (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1));
    puVar5 = (ulonglong *)((ulonglong)(uVar2 << 5) + (longlong)puVar1);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[10]) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar3 + 0x28 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != puVar5);
  }
  return;
}



// FUNCTION 1476eaf88 FUN_1476eaf88 body=404 status=ok
// SIG undefined FUN_1476eaf88(void)

void FUN_1476eaf88(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_80 = (ulonglong)puVar1[10];
  local_88 = (ulonglong)puVar1[9];
  local_90 = (ulonglong)puVar1[8];
  local_70 = (ulonglong)puVar1[4];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  local_78 = lVar2 + local_80;
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_c8 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_c8 = lVar3;
  }
  local_c0 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_c0 = lVar3;
  }
  local_b8 = lVar2 + (ulonglong)puVar1[6];
  if ((ulonglong)puVar1[6] == 0xffffffff) {
    local_b8 = lVar3;
  }
  local_b0 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_b0 = lVar3;
  }
  local_a8 = lVar2 + local_90;
  if (local_90 == 0xffffffff) {
    local_a8 = lVar3;
  }
  local_a0 = lVar2 + local_88;
  if (local_88 == 0xffffffff) {
    local_a0 = lVar3;
  }
  local_98 = local_78;
  if (local_80 == 0xffffffff) {
    local_98 = lVar3;
  }
  FUN_1476eb11e(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476eb11e FUN_1476eb11e body=211 status=ok
// SIG undefined FUN_1476eb11e(void)

void FUN_1476eb11e(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1476eb79a();
      }
    }
    else {
      FUN_1476eb4e4();
    }
    return;
  }
  FUN_1476eb1f2();
  return;
}



// FUNCTION 1476eb1f2 FUN_1476eb1f2 body=752 status=ok
// SIG undefined FUN_1476eb1f2(void)

void FUN_1476eb1f2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined4 *local_118;
  ulonglong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
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
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_148 = param_1;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    local_118 = (undefined4 *)(param_1 + 0x18);
    uVar8 = 0;
    local_128 = param_8;
    local_130 = param_7;
    local_138 = param_6;
    local_140 = param_5;
    lVar9 = param_9;
    lVar7 = param_11;
    lVar10 = param_10;
    local_120 = param_3;
    local_110 = (ulonglong)*(ushort *)(param_2 + 0xe);
    local_108 = param_4;
    do {
      local_100 = (ulonglong)*(ushort *)(local_108 + uVar8 * 2);
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_a8 = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x14) * local_100))
                (&local_98,*(undefined8 *)(local_120 + uVar8 * 8));
      lVar4 = local_128;
      lVar3 = local_130;
      lVar2 = local_138;
      lVar1 = local_140;
      local_158 = lVar7;
      if (param_11 == 0) {
        local_158 = param_11;
      }
      local_160 = lVar10;
      if (param_10 == 0) {
        local_160 = param_10;
      }
      local_168 = lVar9;
      if (param_9 == 0) {
        local_168 = param_9;
      }
      local_170 = local_128;
      if (param_8 == 0) {
        local_170 = param_8;
      }
      local_178 = local_130;
      if (param_7 == 0) {
        local_178 = param_7;
      }
      lVar6 = local_138;
      if (param_6 == 0) {
        lVar6 = param_6;
      }
      local_a8 = local_68;
      local_d8 = local_98;
      uStack_d0 = uStack_90;
      lVar5 = local_140;
      if (param_5 == 0) {
        lVar5 = param_5;
      }
      local_e8 = *local_118;
      uStack_e4 = local_118[1];
      uStack_e0 = local_118[2];
      uStack_dc = local_118[3];
      local_f8 = lVar10;
      local_f0 = lVar7;
      FUN_1476eb970(&local_e8,&local_d8,lVar5,lVar6);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * local_100))
                (*(undefined8 *)(local_120 + uVar8 * 8),&local_d8);
      uVar8 = uVar8 + 1;
      local_140 = lVar1 + 8;
      local_138 = lVar2 + 8;
      local_130 = lVar3 + 8;
      local_128 = lVar4 + 8;
      lVar9 = lVar9 + 8;
      lVar10 = local_f8 + 8;
      lVar7 = local_f0 + 8;
    } while (local_110 != uVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476eb4e4 FUN_1476eb4e4 body=693 status=ok
// SIG undefined FUN_1476eb4e4(void)

void FUN_1476eb4e4(undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d0 = param_1;
  if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
    local_d0 = param_1 + 6;
    uVar12 = 0;
    lVar2 = param_5;
    lVar3 = param_8;
    lVar4 = param_7;
    lVar7 = param_9;
    lVar8 = param_11;
    lVar9 = param_6;
    lVar11 = param_10;
    local_c8 = (ulonglong)*(ushort *)(param_2 + 0xe);
    local_c0 = param_3;
    local_b8 = param_4;
    do {
      local_d8 = lVar8;
      if (param_11 == 0) {
        local_d8 = param_11;
      }
      local_e0 = lVar11;
      if (param_10 == 0) {
        local_e0 = param_10;
      }
      local_e8 = lVar7;
      if (param_9 == 0) {
        local_e8 = param_9;
      }
      local_f0 = lVar3;
      if (param_8 == 0) {
        local_f0 = param_8;
      }
      local_f8 = lVar4;
      if (param_7 == 0) {
        local_f8 = param_7;
      }
      lVar6 = lVar9;
      if (param_6 == 0) {
        lVar6 = param_6;
      }
      uVar10 = (ulonglong)*(ushort *)(local_b8 + uVar12 * 2);
      lVar1 = *(longlong *)(local_c0 + uVar12 * 8);
      local_80 = *(undefined8 *)(lVar1 + uVar10);
      local_78 = *(undefined8 *)(lVar1 + 8 + uVar10);
      local_70 = (double)*(float *)(lVar1 + 0x30 + uVar10);
      local_68 = *(undefined8 *)(lVar1 + 0x10 + uVar10);
      local_60 = *(undefined8 *)(lVar1 + 0x18 + uVar10);
      local_58 = *(undefined8 *)(lVar1 + 0x20 + uVar10);
      local_50 = *(undefined8 *)(lVar1 + 0x28 + uVar10);
      lVar5 = lVar2;
      if (param_5 == 0) {
        lVar5 = param_5;
      }
      local_98 = *local_d0;
      uStack_94 = local_d0[1];
      uStack_90 = local_d0[2];
      uStack_8c = local_d0[3];
      local_b0 = lVar7;
      local_a8 = lVar11;
      local_a0 = lVar8;
      FUN_1476eb970(&local_98,&local_80,lVar5,lVar6);
      *(undefined8 *)(lVar1 + uVar10) = local_80;
      *(undefined8 *)(lVar1 + 8 + uVar10) = local_78;
      *(float *)(lVar1 + 0x30 + uVar10) = (float)local_70;
      *(undefined8 *)(lVar1 + 0x10 + uVar10) = local_68;
      *(undefined8 *)(lVar1 + 0x18 + uVar10) = local_60;
      *(undefined8 *)(lVar1 + 0x20 + uVar10) = local_58;
      uVar12 = uVar12 + 1;
      lVar2 = lVar2 + 8;
      lVar9 = lVar9 + 8;
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + 8;
      *(undefined8 *)(lVar1 + 0x28 + uVar10) = local_50;
      lVar7 = local_b0 + 8;
      lVar11 = lVar11 + 8;
      lVar8 = local_a0 + 8;
    } while (local_c8 != uVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476eb79a FUN_1476eb79a body=469 status=ok
// SIG undefined FUN_1476eb79a(void)

void FUN_1476eb79a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (uVar1 != 0) {
    lVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(param_4 + lVar3 * 2);
      FUN_1476eba1a(uVar2,&local_80,*(undefined8 *)(param_3 + lVar3));
      local_d8 = param_11 + lVar3;
      if (param_11 == 0) {
        local_d8 = 0;
      }
      local_e0 = param_10 + lVar3;
      if (param_10 == 0) {
        local_e0 = 0;
      }
      local_e8 = param_9 + lVar3;
      if (param_9 == 0) {
        local_e8 = 0;
      }
      local_f0 = param_8 + lVar3;
      if (param_8 == 0) {
        local_f0 = 0;
      }
      local_f8 = param_7 + lVar3;
      if (param_7 == 0) {
        local_f8 = 0;
      }
      lVar5 = param_6 + lVar3;
      if (param_6 == 0) {
        lVar5 = 0;
      }
      lVar4 = param_5 + lVar3;
      local_b8 = local_80;
      uStack_b0 = uStack_78;
      local_a8 = (double)local_50;
      local_a0 = local_70;
      uStack_9c = uStack_6c;
      uStack_98 = uStack_68;
      uStack_94 = uStack_64;
      local_90 = local_60;
      uStack_8c = uStack_5c;
      uStack_88 = uStack_58;
      uStack_84 = uStack_54;
      if (param_5 == 0) {
        lVar4 = 0;
      }
      local_c8 = *(undefined4 *)(param_1 + 0x18);
      uStack_c4 = *(undefined4 *)(param_1 + 0x1c);
      uStack_c0 = *(undefined4 *)(param_1 + 0x20);
      uStack_bc = *(undefined4 *)(param_1 + 0x24);
      FUN_1476eb970(&local_c8,&local_b8,lVar4,lVar5);
      local_80 = local_b8;
      uStack_78 = uStack_b0;
      local_50 = (float)local_a8;
      local_70 = local_a0;
      uStack_6c = uStack_9c;
      uStack_68 = uStack_98;
      uStack_64 = uStack_94;
      local_60 = local_90;
      uStack_5c = uStack_8c;
      uStack_58 = uStack_88;
      uStack_54 = uStack_84;
      FUN_1476ea46e(uVar2,*(undefined8 *)(param_3 + lVar3),&local_80);
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476eb970 FUN_1476eb970 body=169 status=ok
// SIG undefined FUN_1476eb970(void)

void FUN_1476eb970(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 2)) = *param_3;
  }
  if (param_4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 6)) = *param_4;
  }
  if (param_5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 10)) = *param_5;
  }
  if (param_6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *param_6;
  }
  if (param_7 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x12)) = *param_7;
  }
  if (param_8 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x16)) = *param_8;
  }
  if (param_9 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x1a)) = *param_9;
  }
  return;
}



// FUNCTION 1476eba1a FUN_1476eba1a body=177 status=ok
// SIG undefined FUN_1476eba1a(void)

undefined8 * FUN_1476eba1a(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  *param_2 = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_2[1] = uVar5;
  uVar5 = DAT_14c846328;
  param_2[2] = DAT_14c846320;
  param_2[3] = uVar5;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  uVar1 = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_2 + 4) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 5) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
  *(undefined4 *)(param_2 + 6) = 0;
  FUN_1406f9c46(uVar1,local_58);
  lVar8 = FUN_1406f977c(local_58);
  if ((lVar8 != 0) &&
     (puVar9 = (undefined4 *)(*(int *)(lVar8 + 0x44) + local_30), puVar9 != (undefined4 *)0x0)) {
    param_2[6] = *(undefined8 *)(puVar9 + 0xc);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    uVar5 = *(undefined8 *)(puVar9 + 4);
    uVar6 = *(undefined8 *)(puVar9 + 6);
    uVar7 = *(undefined8 *)(puVar9 + 10);
    param_2[4] = *(undefined8 *)(puVar9 + 8);
    param_2[5] = uVar7;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
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



// FUNCTION 1476ebacc FUN_1476ebacc body=142 status=ok
// SIG undefined FUN_1476ebacc(void)

undefined4 * FUN_1476ebacc(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[8] = param_3[8];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476ebb5a FUN_1476ebb5a body=448 status=ok
// SIG undefined FUN_1476ebb5a(void)

void FUN_1476ebb5a(short *param_1,undefined8 param_2,undefined8 param_3)

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
  local_42 = param_1[7];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[8];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[9];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[10];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ebd1c FUN_1476ebd1c body=1677 status=ok
// SIG undefined FUN_1476ebd1c(void)

void FUN_1476ebd1c(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  short *local_240;
  longlong local_238;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 *local_158;
  int local_150;
  undefined8 local_148;
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
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar15 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar15 + 0x1e) == param_4[10]) goto LAB_1476ebd71;
      puVar15 = puVar15 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar15 = (undefined8 *)0x0;
LAB_1476ebd71:
  local_214 = *(int *)(lVar1 + 0x14);
  local_1c0 = param_1;
  if (local_214 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
  }
  LOCK();
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[9]) goto LAB_1476ebdb3;
      puVar13 = puVar13 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_1476ebdb3:
  uVar2 = *puVar15;
  local_218 = *(int *)(lVar1 + 0x14);
  local_238 = param_3;
  if (local_218 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[8]) goto LAB_1476ebdf2;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1476ebdf2:
  local_1d0 = *puVar13;
  local_21c = *(int *)(lVar1 + 0x14);
  if (local_21c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar14 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar14 + 0x1e) == param_4[7]) goto LAB_1476ebe37;
      puVar14 = puVar14 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_1476ebe37:
  local_1d8 = *puVar9;
  local_220 = *(int *)(lVar1 + 0x14);
  if (local_220 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar14 + 1));
  }
  LOCK();
  *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[6]) goto LAB_1476ebe7d;
      puVar12 = puVar12 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1476ebe7d:
  local_1e0 = *puVar14;
  local_224 = *(int *)(lVar1 + 0x14);
  if (local_224 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[5]) goto LAB_1476ebecb;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476ebecb:
  local_200 = *puVar12;
  local_228 = *(int *)(lVar1 + 0x14);
  local_1c8 = uVar2;
  if (local_228 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[4]) goto LAB_1476ebf14;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476ebf14:
  local_208 = *puVar10;
  local_22c = *(int *)(lVar1 + 0x14);
  local_240 = param_4;
  local_1f8 = param_2;
  if (local_22c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  plVar3 = local_1f8;
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_210 = *puVar8;
  local_4c = local_240[3];
  local_50 = *(undefined4 *)(local_240 + 1);
  FUN_1410bd8a8(&local_1a0,
                *(undefined8 *)(*(longlong *)(*local_1f8 + 0x60) + (longlong)(int)local_1f8[1] * 8),
                &local_50,local_238);
  lVar1 = *(longlong *)(*(longlong *)(*plVar3 + 0x60) + (longlong)(int)plVar3[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == *local_240) goto LAB_1476ebfaf;
      puVar11 = puVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1476ebfaf:
  local_150 = *(int *)(lVar1 + 0x14);
  if (*(int *)(lVar1 + 0x14) == 1) {
    local_240 = (short *)CONCAT44(local_240._4_4_,1);
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
    local_150 = (int)local_240;
  }
  uVar6 = local_1c8;
  uVar5 = local_1d0;
  uVar4 = local_1d8;
  uVar2 = local_1e0;
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  local_240 = (short *)*puVar11;
  local_140 = local_1a0;
  local_138 = local_198;
  local_1a0 = 0;
  local_1f0 = local_190;
  local_130 = local_190;
  local_190 = 0;
  local_128 = local_188;
  local_120 = local_180;
  local_188 = 0;
  local_238 = local_178;
  local_118 = local_178;
  local_178 = 0;
  local_110 = local_170;
  local_108 = local_168;
  local_170 = 0;
  local_1e8 = local_160;
  local_100 = local_160;
  local_f0 = local_22c;
  local_e8 = local_210;
  local_d8 = local_228;
  local_d0 = local_208;
  local_c0 = local_224;
  local_b8 = local_200;
  local_a8 = local_220;
  local_a0 = local_1e0;
  local_90 = local_21c;
  local_88 = local_1d8;
  local_78 = local_218;
  local_70 = local_1d0;
  local_60 = local_214;
  local_160 = 0;
  local_58 = local_1c8;
  local_158 = puVar11;
  local_148 = local_240;
  local_f8 = puVar8;
  local_e0 = puVar10;
  local_c8 = puVar12;
  local_b0 = puVar14;
  local_98 = puVar9;
  local_80 = puVar13;
  local_68 = puVar15;
  FUN_1432f59b8();
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1a8 = 0;
  if (local_1f0 != 0) {
    local_1b8 = local_1f0;
  }
  if (local_238 != 0) {
    lStack_1b0 = local_238;
  }
  if (local_1e8 != 0) {
    local_1a8 = local_1e8;
  }
  local_248 = uVar6;
  local_250 = uVar5;
  local_258 = uVar4;
  local_260 = uVar2;
  local_268 = local_200;
  local_270 = local_208;
  local_278 = local_210;
  FUN_1476ea180(local_1c0,
                *(undefined8 *)(*(longlong *)(*local_1f8 + 0x60) + (longlong)(int)local_1f8[1] * 8),
                local_240,&local_1b8);
  FUN_1476ec3aa(&local_158);
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ec3aa FUN_1476ec3aa body=340 status=ok
// SIG undefined FUN_1476ec3aa(void)

void FUN_1476ec3aa(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x1e] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1e] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1f] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001476ec4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476ec4fe FUN_1476ec4fe body=118 status=ok
// SIG undefined FUN_1476ec4fe(void)

longlong FUN_1476ec4fe(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1476ebacc();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ec576 FUN_1476ec576 body=142 status=ok
// SIG undefined FUN_1476ec576(void)

undefined4 * FUN_1476ec576(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[8] = param_3[8];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476ec604 FUN_1476ec604 body=472 status=ok
// SIG undefined FUN_1476ec604(void)

void FUN_1476ec604(short *param_1,undefined8 param_2,undefined8 param_3)

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
  if (param_1[7] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[8] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[8];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[9] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[9];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[10] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[10];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ec7de FUN_1476ec7de body=1569 status=ok
// SIG undefined FUN_1476ec7de(void)

void FUN_1476ec7de(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_258;
  longlong lStack_250;
  longlong local_248;
  undefined8 local_238;
  undefined4 local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined4 local_200;
  longlong local_1f8;
  longlong local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  int local_1a0;
  undefined8 local_198;
  longlong local_190;
  int local_188;
  undefined8 local_180;
  longlong local_178;
  int local_170;
  undefined8 local_168;
  longlong local_160;
  int local_158;
  undefined8 local_150;
  undefined8 *local_148;
  int local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  longlong local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  longlong local_88;
  int local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  short local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_160,param_4[10]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_178,param_4[9]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_190,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1a8,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1c0,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1d8,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1f0,param_4[4]);
  local_3c = param_4[3];
  local_40 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_238,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_40,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_1476ec946;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1476ec946:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_138 = *puVar4;
  local_130 = local_238;
  local_128 = local_230;
  local_238 = 0;
  local_120 = local_228;
  uStack_118 = uStack_220;
  local_228 = 0;
  uStack_220 = 0;
  local_110 = local_218;
  local_108 = local_210;
  local_210 = 0;
  local_100 = local_208;
  local_f8 = local_200;
  local_208 = 0;
  local_f0 = local_1f8;
  local_1f8 = 0;
  local_e8 = local_1f0;
  local_e0 = local_1e8;
  local_1f0 = 0;
  local_d8 = local_1e0;
  local_1e0 = 0;
  local_d0 = local_1d8;
  local_c8 = local_1d0;
  local_1d8 = 0;
  local_c0 = local_1c8;
  local_1c8 = 0;
  local_b8 = local_1c0;
  local_b0 = local_1b8;
  local_1c0 = 0;
  local_a8 = local_1b0;
  local_1b0 = 0;
  local_a0 = local_1a8;
  local_98 = local_1a0;
  local_1a8 = 0;
  local_90 = local_198;
  local_198 = 0;
  local_88 = local_190;
  local_80 = local_188;
  local_190 = 0;
  local_78 = local_180;
  local_180 = 0;
  local_70 = local_178;
  local_68 = local_170;
  local_178 = 0;
  local_60 = local_168;
  local_168 = 0;
  local_58 = local_160;
  local_50 = local_158;
  local_160 = 0;
  local_48 = local_150;
  local_150 = 0;
  local_148 = puVar4;
  local_140 = iVar1;
  FUN_1432f59b8();
  if (local_1f0 != 0) {
    LOCK();
    *(int *)(local_1f0 + 0x18) = *(int *)(local_1f0 + 0x18) + -1;
    UNLOCK();
    if (local_1e8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1f0 + 8));
    }
  }
  if (local_1d8 != 0) {
    LOCK();
    *(int *)(local_1d8 + 0x18) = *(int *)(local_1d8 + 0x18) + -1;
    UNLOCK();
    if (local_1d0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1d8 + 8));
    }
  }
  if (local_1c0 != 0) {
    LOCK();
    *(int *)(local_1c0 + 0x18) = *(int *)(local_1c0 + 0x18) + -1;
    UNLOCK();
    if (local_1b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1c0 + 8));
    }
  }
  if (local_1a8 != 0) {
    LOCK();
    *(int *)(local_1a8 + 0x18) = *(int *)(local_1a8 + 0x18) + -1;
    UNLOCK();
    if (local_1a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1a8 + 8));
    }
  }
  if (local_190 != 0) {
    LOCK();
    *(int *)(local_190 + 0x18) = *(int *)(local_190 + 0x18) + -1;
    UNLOCK();
    if (local_188 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_190 + 8));
    }
  }
  if (local_178 != 0) {
    LOCK();
    *(int *)(local_178 + 0x18) = *(int *)(local_178 + 0x18) + -1;
    UNLOCK();
    if (local_170 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_178 + 8));
    }
  }
  if (local_160 != 0) {
    LOCK();
    *(int *)(local_160 + 0x18) = *(int *)(local_160 + 0x18) + -1;
    UNLOCK();
    if (local_158 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_160 + 8));
    }
  }
  local_258 = 0;
  lStack_250 = 0;
  local_248 = 0;
  if (local_120 != 0) {
    local_258 = local_120;
  }
  if (local_108 != 0) {
    lStack_250 = local_108;
  }
  if (local_f0 != 0) {
    local_248 = local_f0;
  }
  local_268 = local_48;
  local_270 = local_60;
  local_278 = local_78;
  local_280 = local_90;
  local_288 = local_a8;
  local_290 = local_c0;
  local_298 = local_d8;
  FUN_1476eb11e(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_138,
                &local_258);
  FUN_1476ece00(&local_148);
  if ((local_38 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ece00 FUN_1476ece00 body=340 status=ok
// SIG undefined FUN_1476ece00(void)

void FUN_1476ece00(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x1e] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1e] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1f] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001476ecf46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476ecf54 FUN_1476ecf54 body=146 status=ok
// SIG undefined FUN_1476ecf54(void)

longlong FUN_1476ecf54(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
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
  FUN_1476ec576();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x100) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x104) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x108) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x10c) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ecfe8 FUN_1476ecfe8 body=179 status=ok
// SIG undefined FUN_1476ecfe8(void)

undefined8 * FUN_1476ecfe8(longlong param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_1476ed042;
    }
  }
  uVar6 = 0;
LAB_1476ed042:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476ed09c FUN_1476ed09c body=184 status=ok
// SIG undefined FUN_1476ed09c(void)

void FUN_1476ed09c(longlong param_1,undefined4 param_2,undefined8 *param_3)

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



// FUNCTION 1476ed156 FUN_1476ed156 body=241 status=ok
// SIG undefined FUN_1476ed156(void)

undefined8 * FUN_1476ed156(undefined8 *param_1,longlong *param_2)

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
  *param_1 = &PTR_FUN_14a5085b0;
  param_1[0x1b] = &PTR_FUN_14a5085f8;
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



// FUNCTION 1476ed248 FUN_1476ed248 body=9 status=ok
// SIG undefined FUN_1476ed248(void)

void FUN_1476ed248(longlong param_1)

{
  FUN_1476edf34(param_1 + 0x10);
  return;
}



// FUNCTION 1476ed252 FUN_1476ed252 body=29 status=ok
// SIG undefined FUN_1476ed252(void)

undefined8 FUN_1476ed252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ed270 FUN_1476ed270 body=38 status=ok
// SIG undefined FUN_1476ed270(void)

undefined8 FUN_1476ed270(undefined8 param_1,int param_2)

{
  FUN_1476edf34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ed2bc FUN_1476ed2bc body=82 status=ok
// SIG undefined FUN_1476ed2bc(void)

void FUN_1476ed2bc(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1476edfe2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ed310 FUN_1476ed310 body=1114 status=ok
// SIG undefined FUN_1476ed310(void)

ulonglong FUN_1476ed310(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [16];
  byte local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar4 + 8))
                      (plVar4,(longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x68));
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar6 == '\0') goto LAB_1476ed38b;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68);
      local_b8 = *puVar7;
      uStack_b0 = puVar7[1];
      local_a8 = *(undefined4 *)(puVar7 + 2);
      uStack_a4 = *(undefined4 *)((longlong)puVar7 + 0x14);
      uStack_a0 = *(undefined4 *)(puVar7 + 3);
      uStack_9c = *(undefined4 *)((longlong)puVar7 + 0x1c);
      local_98 = *(undefined4 *)(puVar7 + 4);
      uStack_94 = *(undefined4 *)((longlong)puVar7 + 0x24);
      uStack_90 = *(undefined4 *)(puVar7 + 5);
      uStack_8c = *(undefined4 *)((longlong)puVar7 + 0x2c);
      local_88 = *(undefined4 *)(puVar7 + 6);
      uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x34);
      uStack_80 = *(undefined4 *)(puVar7 + 7);
      uStack_7c = *(undefined4 *)((longlong)puVar7 + 0x3c);
      local_78 = puVar7[8];
      local_60 = *(byte *)(puVar7 + 0xb);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar7 + 9);
      local_58 = *(byte *)(puVar7 + 0xc);
      FUN_1410d7556(param_1 + 0x18,&local_b8);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68 + 0x58)])();
      FUN_1476ee1ba(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x58) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x58) <= param_2)) {
        FUN_1476ee22e(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_1476ee06c(&local_b8,&local_a8);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
LAB_1476ed58d:
      unaff_RBP = 0;
      goto LAB_1476ed38b;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x60 + (longlong)param_2 * 0x68) & 1) == 0)
    goto LAB_1476ed38b;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    uVar11 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar13 + (ulonglong)uVar1 * 0x58) < param_2) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if ((((int)uVar12 < (int)uVar3) && (*(int *)(lVar13 + (ulonglong)uVar12 * 0x58) <= param_2)) &&
       (lVar13 + (ulonglong)uVar12 * 0x58 != -8)) {
      FUN_1476ee06c((longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar8 = 0;
      if (0 < (int)uVar3) {
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar3;
        do {
          uVar10 = uVar10 >> 1;
          uVar12 = (uint)uVar10 + (int)uVar8;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x58) < param_2) {
            uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
          }
          bVar5 = 1 < uVar11;
          uVar11 = (uint)uVar10;
        } while (bVar5);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar8 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x58) <= param_2)) {
        FUN_1476ee22e(param_1 + 0xa0);
      }
      goto LAB_1476ed38b;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x60 + (longlong)param_2 * 0x68);
      if ((bVar2 & 1) == 0) goto LAB_1476ed38b;
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68);
      *(byte *)(puVar7 + 0xc) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476ed38b;
      lVar13 = (longlong)param_2 * 0x68;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x60 + lVar13);
      puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13);
      if ((bVar2 & 2) == 0) {
        local_b8 = *puVar7;
        uStack_b0 = puVar7[1];
        local_a8 = *(undefined4 *)(puVar7 + 2);
        uStack_a4 = *(undefined4 *)((longlong)puVar7 + 0x14);
        uStack_a0 = *(undefined4 *)(puVar7 + 3);
        uStack_9c = *(undefined4 *)((longlong)puVar7 + 0x1c);
        local_98 = *(undefined4 *)(puVar7 + 4);
        uStack_94 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uStack_90 = *(undefined4 *)(puVar7 + 5);
        uStack_8c = *(undefined4 *)((longlong)puVar7 + 0x2c);
        local_88 = *(undefined4 *)(puVar7 + 6);
        uStack_84 = *(undefined4 *)((longlong)puVar7 + 0x34);
        uStack_80 = *(undefined4 *)(puVar7 + 7);
        uStack_7c = *(undefined4 *)((longlong)puVar7 + 0x3c);
        local_78 = puVar7[8];
        local_60 = *(byte *)(puVar7 + 0xb);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_60])(local_70,puVar7 + 9);
        local_58 = *(byte *)(puVar7 + 0xc);
        FUN_1410d7556(param_1 + 0x18,&local_b8);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar13 + 0x58)])();
        FUN_1476ee1ba(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar8 = 0;
        if (0 < (int)uVar3) {
          uVar10 = (ulonglong)uVar3;
          uVar11 = uVar3;
          do {
            uVar10 = uVar10 >> 1;
            uVar12 = (uint)uVar10 + (int)uVar8;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar12 * 0x58) < param_2) {
              uVar8 = (ulonglong)(uVar12 + (uVar11 & 1));
            }
            bVar5 = 1 < uVar11;
            uVar11 = (uint)uVar10;
          } while (bVar5);
        }
        if (((int)uVar8 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 0x58) <= param_2)) {
          FUN_1476ee22e(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_1476ee06c(&local_b8,&local_a8);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_60])(local_70);
        goto LAB_1476ed58d;
      }
      if ((bVar2 & 1) == 0) goto LAB_1476ed38b;
    }
  }
  FUN_1476ee06c(puVar7,puVar7 + 2);
LAB_1476ed38b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1476ed76c FUN_1476ed76c body=399 status=ok
// SIG undefined FUN_1476ed76c(void)

undefined8 FUN_1476ed76c(longlong param_1,int param_2,char param_3)

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
    if (cVar5 == '\0') goto LAB_1476ed81b;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x68;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x58)])();
    FUN_1476ee1ba(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x58) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x58) <= param_2)) {
      FUN_1476ee22e(param_1 + 0xa0);
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
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x58) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x58) <= param_2)) {
      FUN_1476ee22e(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x60 + (longlong)param_2 * 0x68);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1476ed81b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ed906 FUN_1476ed906 body=244 status=ok
// SIG undefined FUN_1476ed906(void)

void FUN_1476ed906(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  byte local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_5c [12];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_2[1];
  local_68 = param_4;
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_70 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_50 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_50 != 0) {
          FUN_1476ee33a(param_1 + -0xd8,local_5c,&local_50,param_6);
          local_78 = (byte)uVar2 & 1;
          FUN_14052d442(local_70,local_5c,*(undefined2 *)(param_3 + uVar3 * 2),
                        *(undefined4 *)(local_68 + uVar3 * 4));
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ed9fc FUN_1476ed9fc body=864 status=ok
// SIG undefined FUN_1476ed9fc(void)

void FUN_1476ed9fc(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  longlong lVar1;
  byte *pbVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  char *local_f0;
  undefined1 local_e4 [8];
  int local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  float local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *(ushort *)
           (*(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8) + 0xe);
  local_f0 = param_2;
  if (uVar3 != 0) {
    lVar1 = param_1 + -0xd8;
    local_100 = *param_6;
    local_f8 = param_6[1];
    local_108 = param_6[2];
    param_5 = param_5 + 8;
    uVar9 = 0;
    do {
      local_d8 = *(longlong *)(param_4 + uVar9 * 4);
      if ((local_d8 != 0) && (cVar5 = FUN_1476ee620(lVar1,&local_d8,param_5), cVar5 != '\0')) {
        FUN_1476ee33a(lVar1,local_e4,&local_d8,param_5);
        piVar4 = *(int **)(param_1 + -0x28);
        if (*piVar4 == 0) {
          if (local_dc != -1) {
            FUN_14179e8d0(piVar4,local_e4);
          }
        }
        else {
          thunk_FUN_140adeba6(piVar4,local_e4);
        }
        uVar6 = FUN_1400e4034(*(undefined8 *)(param_1 + -0x28),local_e4);
        cVar5 = FUN_1476ee6a2(lVar1,local_dc,uVar6);
        if (cVar5 == '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0.0;
          uStack_60 = 0;
          local_78 = 0.0;
          dStack_70 = 0.0;
          local_88 = 0.0;
          dStack_80 = 0.0;
          local_98 = 0;
          uStack_90 = 0;
          if (local_f8 == 0) {
            if (local_100 == 0) {
              if (local_108 != 0) {
                uStack_60 = *(ulonglong *)(local_108 + uVar9 * 8);
                local_58 = *(longlong *)(local_108 + 8 + uVar9 * 8);
                uVar7 = uStack_60;
                if (local_58 != 0) {
                  LOCK();
                  *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                  UNLOCK();
                  uVar7 = *(ulonglong *)(local_108 + uVar9 * 8);
                }
                uStack_50 = 2;
                FUN_1476eba1a(uVar7,&local_d0,*(undefined8 *)(param_4 + uVar9 * 4));
                local_98 = CONCAT44(uStack_cc,local_d0);
                uStack_90 = CONCAT44(uStack_c4,uStack_c8);
                local_88 = (double)local_a0;
                dStack_80 = local_c0;
                local_78 = dStack_b8;
                dStack_70 = local_b0;
                local_68 = dStack_a8;
              }
            }
            else {
              lVar8 = (longlong)*(int *)(param_1 + 0x24) * (ulonglong)*(ushort *)(local_100 + uVar9)
              ;
              uStack_60 = *(longlong *)(param_1 + 0x18) + lVar8;
              (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18 + lVar8))
                        (&local_d0,*(undefined8 *)(param_4 + uVar9 * 4));
              local_68 = (double)CONCAT44(uStack_9c,local_a0);
              dStack_80 = dStack_b8;
              local_78 = local_b0;
              dStack_70 = dStack_a8;
              local_88 = local_c0;
              local_98 = CONCAT44(uStack_cc,local_d0);
              uStack_90 = CONCAT44(uStack_c4,uStack_c8);
            }
          }
          else {
            uVar7 = (ulonglong)*(ushort *)(local_f8 + uVar9);
            uStack_60 = (ulonglong)*(ushort *)(local_f8 + uVar9);
            uStack_50 = 1;
            lVar8 = *(longlong *)(param_4 + uVar9 * 4);
            local_98 = *(undefined8 *)(lVar8 + uVar7);
            uStack_90 = *(undefined8 *)(lVar8 + 8 + uVar7);
            local_88 = (double)*(float *)(lVar8 + 0x30 + uVar7);
            dStack_80 = *(double *)(lVar8 + 0x10 + uVar7);
            local_78 = *(double *)(lVar8 + 0x18 + uVar7);
            dStack_70 = *(double *)(lVar8 + 0x20 + uVar7);
            local_68 = *(double *)(lVar8 + 0x28 + uVar7);
          }
          FUN_1476ee738(lVar1,local_dc,uVar6,&local_98);
          (*(code *)(&PTR_LAB_14a4c7e10)[uStack_50 & 0xff])(&uStack_60);
        }
        if (*local_f0 == '\x01') {
          pbVar2 = (byte *)(*(longlong *)(param_1 + -0x70) + 0x60 + (longlong)local_dc * 0x68);
          *pbVar2 = *pbVar2 | 2;
        }
      }
      uVar9 = uVar9 + 2;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476edd5e FUN_1476edd5e body=38 status=ok
// SIG undefined FUN_1476edd5e(void)

undefined8 FUN_1476edd5e(undefined8 param_1,int param_2)

{
  FUN_1476edf34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476edd84 FUN_1476edd84 body=52 status=ok
// SIG undefined FUN_1476edd84(void)

void FUN_1476edd84(longlong *param_1)

{
  FUN_1476eddee();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476eddb8 FUN_1476eddb8 body=53 status=ok
// SIG undefined FUN_1476eddb8(void)

void FUN_1476eddb8(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1476eddee FUN_1476eddee body=324 status=ok
// SIG undefined FUN_1476eddee(void)

void FUN_1476eddee(longlong *param_1)

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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x68 + 0x58)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14059f004(param_1,0);
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



// FUNCTION 1476edf34 FUN_1476edf34 body=173 status=ok
// SIG undefined FUN_1476edf34(void)

void FUN_1476edf34(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a508610;
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
  FUN_1476eddb8(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1476edd84(param_1 + 0xd);
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
                    /* WARNING: Could not recover jumptable at 0x0001476edfd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476edfe2 FUN_1476edfe2 body=136 status=ok
// SIG undefined FUN_1476edfe2(void)

void FUN_1476edfe2(longlong param_1,int param_2,undefined4 *param_3)

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
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x68);
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



// FUNCTION 1476ee06c FUN_1476ee06c body=313 status=ok
// SIG undefined FUN_1476ee06c(void)

void FUN_1476ee06c(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_1;
  lVar1 = FUN_14479d2ce(&local_58);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 9) == '\x01') {
      uVar2 = (ulonglong)*(ushort *)(param_2 + 7);
      *(undefined8 *)(lVar1 + uVar2) = *param_2;
      *(undefined8 *)(lVar1 + 8 + uVar2) = param_2[1];
      *(float *)(lVar1 + 0x30 + uVar2) = (float)(double)param_2[2];
      *(undefined8 *)(lVar1 + 0x10 + uVar2) = param_2[3];
      *(undefined8 *)(lVar1 + 0x18 + uVar2) = param_2[4];
      *(undefined8 *)(lVar1 + 0x20 + uVar2) = param_2[5];
      *(undefined8 *)(lVar1 + 0x28 + uVar2) = param_2[6];
    }
    else if (*(char *)(param_2 + 9) == '\x02') {
      local_58 = *param_2;
      local_50 = param_2[1];
      local_28 = (float)(double)param_2[2];
      local_48 = param_2[3];
      local_40 = param_2[4];
      local_38 = param_2[5];
      local_30 = param_2[6];
      FUN_1476ea46e(param_2[7],lVar1);
    }
    else if (param_2[7] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ee1ba FUN_1476ee1ba body=116 status=ok
// SIG undefined FUN_1476ee1ba(void)

void FUN_1476ee1ba(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 1476ee22e FUN_1476ee22e body=101 status=ok
// SIG undefined FUN_1476ee22e(void)

void FUN_1476ee22e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x58 + 0x50)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x58);
    memmove(_Dst,(void *)((longlong)_Dst + 0x58),(longlong)(int)(~param_2 + iVar2) * 0x58);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1476ee294(param_1);
  return;
}



// FUNCTION 1476ee294 FUN_1476ee294 body=62 status=ok
// SIG undefined FUN_1476ee294(void)

void FUN_1476ee294(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476ee2d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 1476ee2d2 FUN_1476ee2d2 body=104 status=ok
// SIG undefined FUN_1476ee2d2(void)

ulonglong FUN_1476ee2d2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1476ee308;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_1476ee308:
  return param_2 & 0xffffffff;
}



// FUNCTION 1476ee33a FUN_1476ee33a body=189 status=ok
// SIG undefined FUN_1476ee33a(void)

longlong FUN_1476ee33a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1476ee3f8(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ee3f8 FUN_1476ee3f8 body=325 status=ok
// SIG undefined FUN_1476ee3f8(void)

int * FUN_1476ee3f8(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  undefined4 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
    local_88._0_4_ = *param_3;
    local_88._4_4_ = param_3[1];
    uStack_80._0_4_ = param_3[2];
    uStack_80._4_4_ = param_3[3];
    FUN_1476ee53e(param_1 + 0x68,local_98);
    *local_90 = (undefined4)local_88;
    local_90[1] = local_88._4_4_;
    local_90[2] = (undefined4)uStack_80;
    local_90[3] = uStack_80._4_4_;
    *(undefined1 *)(local_90 + 0x16) = 0;
    *(undefined8 *)(local_90 + 0x12) = 0;
    *(undefined1 *)(local_90 + 0x18) = 0;
    *param_2 = local_98[0];
    local_88 = param_3;
    uStack_80 = param_2;
    FUN_140bf3cbe(plVar1,local_98,&local_88,0);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ee53e FUN_1476ee53e body=226 status=ok
// SIG undefined FUN_1476ee53e(void)

int * FUN_1476ee53e(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 1476ee620 FUN_1476ee620 body=128 status=ok
// SIG undefined FUN_1476ee620(void)

byte FUN_1476ee620(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar2 = param_1;
    FUN_1476ee8d2(param_1,local_24,param_2,param_3);
    bVar1 = (byte)lVar2;
    if (local_1c != -1) {
      bVar1 = FUN_14179e8d0(*(undefined8 *)(param_1 + 0xb0),local_24);
    }
    bVar1 = local_1c != -1 & bVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 1476ee6a2 FUN_1476ee6a2 body=150 status=ok
// SIG undefined FUN_1476ee6a2(void)

ulonglong FUN_1476ee6a2(longlong param_1,int param_2,char param_3)

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
  
  lVar7 = (longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x60);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x58) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x58) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x58;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x60));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1476ee738 FUN_1476ee738 body=409 status=ok
// SIG undefined FUN_1476ee738(void)

void FUN_1476ee738(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
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
  byte bVar13;
  longlong lVar14;
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
  lVar14 = (longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar13 = *(byte *)(lVar14 + 0x60);
    if ((bVar13 & 1) == 0) {
      *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(param_4 + 0xc);
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = param_4[4];
      uVar7 = param_4[5];
      uVar8 = param_4[6];
      uVar9 = param_4[7];
      uVar10 = param_4[9];
      uVar11 = param_4[10];
      uVar12 = param_4[0xb];
      *(undefined4 *)(lVar14 + 0x30) = param_4[8];
      *(undefined4 *)(lVar14 + 0x34) = uVar10;
      *(undefined4 *)(lVar14 + 0x38) = uVar11;
      *(undefined4 *)(lVar14 + 0x3c) = uVar12;
      *(undefined4 *)(lVar14 + 0x20) = uVar6;
      *(undefined4 *)(lVar14 + 0x24) = uVar7;
      *(undefined4 *)(lVar14 + 0x28) = uVar8;
      *(undefined4 *)(lVar14 + 0x2c) = uVar9;
      *(undefined4 *)(lVar14 + 0x10) = uVar2;
      *(undefined4 *)(lVar14 + 0x14) = uVar3;
      *(undefined4 *)(lVar14 + 0x18) = uVar4;
      *(undefined4 *)(lVar14 + 0x1c) = uVar5;
      if ((undefined4 *)(lVar14 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0x12));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0x12)])
                  (&local_58,param_4 + 0xe);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar14 + 0x58);
        uVar2 = *(undefined4 *)(lVar14 + 0x48);
        uVar3 = *(undefined4 *)(lVar14 + 0x4c);
        uVar4 = *(undefined4 *)(lVar14 + 0x50);
        uVar5 = *(undefined4 *)(lVar14 + 0x54);
        *(undefined4 *)(lVar14 + 0x48) = local_58;
        *(undefined4 *)(lVar14 + 0x4c) = uStack_54;
        *(undefined4 *)(lVar14 + 0x50) = uStack_50;
        *(undefined4 *)(lVar14 + 0x54) = uStack_4c;
        *(ulonglong *)(lVar14 + 0x58) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar13 = *(byte *)(lVar14 + 0x60);
      }
      *(byte *)(lVar14 + 0x60) = bVar13 | 1;
    }
    else {
      FUN_1476eea38(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(param_4 + 0xc);
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    uVar6 = param_4[4];
    uVar7 = param_4[5];
    uVar8 = param_4[6];
    uVar9 = param_4[7];
    uVar10 = param_4[9];
    uVar11 = param_4[10];
    uVar12 = param_4[0xb];
    *(undefined4 *)(lVar14 + 0x30) = param_4[8];
    *(undefined4 *)(lVar14 + 0x34) = uVar10;
    *(undefined4 *)(lVar14 + 0x38) = uVar11;
    *(undefined4 *)(lVar14 + 0x3c) = uVar12;
    *(undefined4 *)(lVar14 + 0x20) = uVar6;
    *(undefined4 *)(lVar14 + 0x24) = uVar7;
    *(undefined4 *)(lVar14 + 0x28) = uVar8;
    *(undefined4 *)(lVar14 + 0x2c) = uVar9;
    *(undefined4 *)(lVar14 + 0x10) = uVar2;
    *(undefined4 *)(lVar14 + 0x14) = uVar3;
    *(undefined4 *)(lVar14 + 0x18) = uVar4;
    *(undefined4 *)(lVar14 + 0x1c) = uVar5;
    if ((undefined4 *)(lVar14 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0x12));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0x12)])
                (&local_58,param_4 + 0xe);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar14 + 0x58);
      uVar2 = *(undefined4 *)(lVar14 + 0x48);
      uVar3 = *(undefined4 *)(lVar14 + 0x4c);
      uVar4 = *(undefined4 *)(lVar14 + 0x50);
      uVar5 = *(undefined4 *)(lVar14 + 0x54);
      *(undefined4 *)(lVar14 + 0x48) = local_58;
      *(undefined4 *)(lVar14 + 0x4c) = uStack_54;
      *(undefined4 *)(lVar14 + 0x50) = uStack_50;
      *(undefined4 *)(lVar14 + 0x54) = uStack_4c;
      *(ulonglong *)(lVar14 + 0x58) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(byte *)(lVar14 + 0x60) = *(byte *)(lVar14 + 0x60) | 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ee8d2 FUN_1476ee8d2 body=189 status=ok
// SIG undefined FUN_1476ee8d2(void)

longlong FUN_1476ee8d2(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

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
  FUN_1476ee990(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ee990 FUN_1476ee990 body=167 status=ok
// SIG undefined FUN_1476ee990(void)

undefined4 * FUN_1476ee990(longlong param_1,undefined4 *param_2,undefined4 *param_3)

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



// FUNCTION 1476eea38 FUN_1476eea38 body=290 status=ok
// SIG undefined FUN_1476eea38(void)

void FUN_1476eea38(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar16 = *param_1;
  if ((int)uVar3 < 1) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    uVar10 = uVar3;
    do {
      uVar1 = (uVar10 >> 1) + uVar12;
      if (*(int *)(lVar16 + (ulonglong)uVar1 * 0x58) < *param_2) {
        uVar12 = uVar1 + (uVar10 & 1);
      }
      bVar4 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar4);
    if (((int)uVar12 < (int)uVar3) && (*(int *)(lVar16 + (ulonglong)uVar12 * 0x58) <= *param_2)) {
      piVar15 = (int *)(lVar16 + (ulonglong)uVar12 * 0x58);
      FUN_1476eddb8(piVar15,1);
      goto LAB_1476eeaea;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1476eeb5a(param_1,uVar3);
    lVar16 = *param_1;
  }
  lVar13 = (ulonglong)uVar12 * 0x58;
  memmove((void *)(lVar16 + lVar13 + 0x58),(void *)(lVar16 + lVar13),
          (ulonglong)(uVar3 - uVar12) * 0x58);
  piVar15 = (int *)(lVar13 + *param_1);
LAB_1476eeaea:
  *piVar15 = *param_2;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  *(undefined8 *)(piVar15 + 2) = *param_3;
  *(undefined8 *)(piVar15 + 4) = uVar5;
  *(undefined8 *)(piVar15 + 6) = uVar6;
  *(undefined8 *)(piVar15 + 8) = uVar7;
  *(undefined8 *)(piVar15 + 10) = uVar8;
  *(undefined8 *)(piVar15 + 0xc) = uVar9;
  *(undefined8 *)(piVar15 + 0xe) = param_3[6];
  uVar2 = *(undefined1 *)(param_3 + 9);
  puVar11 = param_3 + 7;
  *(undefined1 *)(piVar15 + 0x14) = uVar2;
  piVar14 = piVar15 + 0x10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar14 = *puVar11;
    return;
  case 1:
    *(undefined2 *)piVar14 = *(undefined2 *)puVar11;
    return;
  case 2:
    *(undefined8 *)piVar14 = *puVar11;
    *(undefined8 *)(piVar15 + 0x12) = param_3[8];
    *puVar11 = 0;
    param_3[8] = 0;
    return;
  }
}



// FUNCTION 1476eeb5a FUN_1476eeb5a body=143 status=ok
// SIG undefined FUN_1476eeb5a(void)

void FUN_1476eeb5a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476eebea FUN_1476eebea body=167 status=ok
// SIG undefined FUN_1476eebea(void)

void FUN_1476eebea(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476eec65;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476eec65;
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
LAB_1476eec65:
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
                    /* WARNING: Could not recover jumptable at 0x0001476eec85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476eec92 FUN_1476eec92 body=901 status=ok
// SIG undefined FUN_1476eec92(void)

void FUN_1476eec92(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
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
  byte local_499;
  undefined8 *local_478;
  int local_470;
  longlong local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  int iStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined1 local_438 [8];
  undefined1 local_430 [32];
  undefined1 *local_410;
  undefined8 local_408;
  undefined8 local_400 [118];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_438;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar9 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_410 + lVar5) = 0;
        *(undefined4 *)((longlong)local_400 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_400 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x390);
      local_440 = *(undefined8 *)(param_3 + 8);
      local_460 = *param_3;
      uStack_45c = param_3[1];
      iStack_458 = param_3[2];
      uStack_454 = param_3[3];
      local_450 = *(undefined8 *)(param_3 + 4);
      uStack_448 = *(undefined8 *)(param_3 + 6);
      local_410 = (undefined1 *)0x0;
      local_408 = 0x400000000;
      puVar13 = local_400;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_440._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_440);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_478,&local_460,puVar13);
          uVar12 = local_408;
          if (local_478 != (undefined8 *)0x0) {
            lVar11 = (longlong)(int)local_408;
            uVar6 = (int)local_408 + 1;
            local_408 = CONCAT44(local_408._4_4_,uVar6);
            if (local_408._4_4_ < uVar6) {
              FUN_14476a5c8(local_430,uVar12 & 0xffffffff);
              puVar7 = local_410;
              if (local_410 == (undefined1 *)0x0) {
                puVar7 = local_430;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_478;
              if (local_478 == (undefined8 *)0x0) goto LAB_1476eee74;
            }
            else {
              puVar7 = local_410;
              if (local_410 == (undefined1 *)0x0) {
                puVar7 = local_430;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_478;
            }
            LOCK();
            *(int *)(local_478 + 1) = *(int *)(local_478 + 1) + 1;
            UNLOCK();
            if (local_478 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_478 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_478)(local_478,1);
              }
            }
          }
        }
LAB_1476eee74:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 7);
      if ((int)local_408 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_430,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_478 = (undefined8 *)0x0;
        local_468 = 0;
      }
      else {
        FUN_1476ef018(lVar9 + 0x28,&local_478,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_499 = local_470 == 1;
      }
      if (0 < iStack_458) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_45c,local_460) + lVar5 * 2);
          lVar11 = *param_6;
          puVar13 = local_400;
          lVar8 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar8 & 0x1f) & 1) != 0) {
              uVar12 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar8 * 4);
              lVar10 = uVar12 + local_468;
              if (local_468 == 0) {
                lVar10 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar12),lVar10);
              *(undefined8 *)(lVar5 * 0x38 + lVar11 + uVar12) = uVar3;
            }
            lVar8 = lVar8 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar8 != 7);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_458);
      }
      *(undefined4 *)(lVar9 + 0x29c) = 1;
      if (local_478 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_478 + 3) = *(int *)(local_478 + 3) + -1;
        UNLOCK();
        if ((local_499 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_478 + 1));
        }
      }
      FUN_14588b8d6(local_430);
      lVar9 = 0x300;
      do {
        FUN_1475d7c02((longlong)local_400 + lVar9);
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476ef018 FUN_1476ef018 body=185 status=ok
// SIG undefined FUN_1476ef018(void)

undefined8 * FUN_1476ef018(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

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
            FUN_1476ef0d2(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
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



// FUNCTION 1476ef0d2 FUN_1476ef0d2 body=116 status=ok
// SIG undefined FUN_1476ef0d2(void)

longlong * FUN_1476ef0d2(longlong *param_1,longlong *param_2,int param_3,uint param_4)

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
    param_1[2] = (ulonglong)param_4 * 0x38 + *param_2;
  }
  return param_1;
}



// FUNCTION 1476ef146 FUN_1476ef146 body=57 status=ok
// SIG undefined FUN_1476ef146(void)

undefined8 * FUN_1476ef146(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a508680;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ef180 FUN_1476ef180 body=152 status=ok
// SIG undefined FUN_1476ef180(void)

void FUN_1476ef180(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

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
    uVar2 = FUN_1476ef2d0(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476ef25e FUN_1476ef25e body=55 status=ok
// SIG undefined FUN_1476ef25e(void)

void FUN_1476ef25e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1476f1af0(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1476ef296 FUN_1476ef296 body=57 status=ok
// SIG undefined FUN_1476ef296(void)

undefined8 * FUN_1476ef296(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a508680;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ef2d0 FUN_1476ef2d0 body=232 status=ok
// SIG undefined FUN_1476ef2d0(void)

undefined8 * FUN_1476ef2d0(undefined8 param_1,undefined2 param_2)

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
  puVar1 = (undefined8 *)FUN_1476ef3ba();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a5086a0;
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



// FUNCTION 1476ef3ba FUN_1476ef3ba body=104 status=ok
// SIG undefined FUN_1476ef3ba(void)

undefined8 FUN_1476ef3ba(longlong *param_1,ushort param_2)

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



// FUNCTION 1476ef422 FUN_1476ef422 body=38 status=ok
// SIG undefined FUN_1476ef422(void)

undefined8 FUN_1476ef422(undefined8 param_1,int param_2)

{
  FUN_1476ef4be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476ef448 FUN_1476ef448 body=118 status=ok
// SIG undefined FUN_1476ef448(void)

void FUN_1476ef448(longlong param_1,longlong *param_2)

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
          FUN_1476ef622(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1476ef4be FUN_1476ef4be body=71 status=ok
// SIG undefined FUN_1476ef4be(void)

void FUN_1476ef4be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5086a0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1476ef53a(param_1 + 8);
  FUN_1476ef506(param_1 + 1);
  return;
}



// FUNCTION 1476ef506 FUN_1476ef506 body=52 status=ok
// SIG undefined FUN_1476ef506(void)

void FUN_1476ef506(longlong *param_1)

{
  FUN_1476ef5c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476ef53a FUN_1476ef53a body=52 status=ok
// SIG undefined FUN_1476ef53a(void)

void FUN_1476ef53a(longlong *param_1)

{
  FUN_1476ef56e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476ef56e FUN_1476ef56e body=89 status=ok
// SIG undefined FUN_1476ef56e(void)

void FUN_1476ef56e(longlong param_1)

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



// FUNCTION 1476ef5c8 FUN_1476ef5c8 body=89 status=ok
// SIG undefined FUN_1476ef5c8(void)

void FUN_1476ef5c8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
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



// FUNCTION 1476ef622 FUN_1476ef622 body=105 status=ok
// SIG undefined FUN_1476ef622(void)

void FUN_1476ef622(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1476ef68c FUN_1476ef68c body=1191 status=ok
// SIG undefined FUN_1476ef68c(void)

void FUN_1476ef68c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
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
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b4;
  ushort local_ae;
  char local_ac;
  char local_aa;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar24 = *(longlong **)(param_2 + 0x28);
    lVar20 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar24 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476ef6e9;
      plVar24 = plVar24 + 4;
      lVar20 = lVar20 + -0x20;
    } while (lVar20 != 0);
  }
  plVar24 = (longlong *)0x0;
LAB_1476ef6e9:
  uVar2 = *(ushort *)(param_2 + 0xe);
  local_d8 = *(ulonglong *)(param_1 + 0x40);
  local_e4 = *(int *)(param_2 + 0x14);
  if (local_e4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar24 + 1));
  }
  LOCK();
  *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar23 = *(longlong **)(param_2 + 0x28);
    lVar20 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar23 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_1476ef740;
      plVar23 = plVar23 + 4;
      lVar20 = lVar20 + -0x20;
    } while (lVar20 != 0);
  }
  plVar23 = (longlong *)0x0;
LAB_1476ef740:
  lVar20 = *plVar24;
  local_e8 = *(int *)(param_2 + 0x14);
  if (local_e8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar23 + 1));
  }
  LOCK();
  *(int *)(plVar23 + 3) = (int)plVar23[3] + 1;
  UNLOCK();
  lVar4 = *plVar23;
  local_d0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar2 != 0) {
    local_e0 = param_1 + 8;
    uVar30 = 0;
    do {
      local_b4 = *(int *)(lVar4 + uVar30 * 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar21 = *(longlong *)(param_1 + 8);
      uVar25 = 0;
      if (0 < (int)uVar3) {
        uVar25 = 0;
        uVar27 = (ulonglong)uVar3;
        uVar28 = uVar3;
        do {
          uVar27 = uVar27 >> 1;
          uVar29 = (uint)uVar27 + (int)uVar25;
          if (*(int *)(lVar21 + (ulonglong)uVar29 * 0x40) < local_b4) {
            uVar25 = (ulonglong)(uVar29 + (uVar28 & 1));
          }
          bVar5 = 1 < uVar28;
          uVar28 = (uint)uVar27;
        } while (bVar5);
      }
      if (((int)uVar25 < (int)uVar3) && (*(int *)(lVar21 + uVar25 * 0x40) <= local_b4)) {
        lVar21 = lVar21 + uVar25 * 0x40;
        if ((undefined4 *)(lVar21 + 8) == (undefined4 *)0x0) goto LAB_1476ef827;
        lVar22 = uVar30 * 0x38;
        *(undefined8 *)(lVar20 + 0x30 + lVar22) = *(undefined8 *)(lVar21 + 0x38);
        uVar6 = *(undefined4 *)(lVar21 + 8);
        uVar7 = *(undefined4 *)(lVar21 + 0xc);
        uVar8 = *(undefined4 *)(lVar21 + 0x10);
        uVar9 = *(undefined4 *)(lVar21 + 0x14);
        uVar17 = *(undefined8 *)(lVar21 + 0x18);
        uVar18 = *(undefined8 *)(lVar21 + 0x20);
        uVar19 = *(undefined8 *)(lVar21 + 0x30);
        puVar26 = (undefined8 *)(lVar20 + 0x20 + lVar22);
        *puVar26 = *(undefined8 *)(lVar21 + 0x28);
        puVar26[1] = uVar19;
        puVar26 = (undefined8 *)(lVar20 + 0x10 + lVar22);
        *puVar26 = uVar17;
        puVar26[1] = uVar18;
        puVar1 = (undefined4 *)(lVar20 + lVar22);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
      }
      else {
LAB_1476ef827:
        lVar21 = FUN_1475b443c(local_d0);
        if (((lVar21 != 0) && (lVar22 = FUN_14479d2ce(lVar21), lVar22 != 0)) &&
           (*(longlong *)(lVar21 + 8) != 0)) {
          local_c8 = *(undefined4 *)(param_1 + 0x30);
          uStack_c4 = *(undefined4 *)(param_1 + 0x34);
          uStack_c0 = *(undefined4 *)(param_1 + 0x38);
          uStack_bc = *(undefined4 *)(param_1 + 0x3c);
          local_f8 = lVar22;
          FUN_140d4d2ba(&local_ae,lVar22,lVar21 + 8,&local_c8);
          lVar22 = *(longlong *)(param_1 + 0x48);
          if (lVar22 == 0) {
LAB_1476ef880:
            if (local_aa == '\0') {
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0.0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_78 = 0;
              local_70 = 1;
              FUN_1476f0618(local_f8,lVar21 + 0x10,&local_a8);
            }
            else if (local_ac == '\x01') {
              local_70 = 1;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_ae))
                        (&local_a8,local_f8);
            }
            else {
              uVar25 = (ulonglong)local_ae;
              local_70 = 1;
              local_a8 = *(ulonglong *)(local_f8 + uVar25);
              uStack_a0 = *(undefined8 *)(local_f8 + 8 + uVar25);
              local_98 = (double)*(float *)(local_f8 + 0x30 + uVar25);
              uStack_90 = *(undefined8 *)(local_f8 + 0x10 + uVar25);
              local_88 = *(undefined8 *)(local_f8 + 0x18 + uVar25);
              uStack_80 = *(undefined8 *)(local_f8 + 0x20 + uVar25);
              local_78 = *(undefined8 *)(local_f8 + 0x28 + uVar25);
            }
            puVar26 = &local_a8;
            lVar21 = uVar30 * 0x38;
            *(undefined8 *)(lVar20 + 0x30 + lVar21) = local_78;
            puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar21);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
            puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar21);
            *puVar1 = (undefined4)local_98;
            puVar1[1] = local_98._4_4_;
            puVar1[2] = (undefined4)uStack_90;
            puVar1[3] = uStack_90._4_4_;
            puVar1 = (undefined4 *)(lVar20 + lVar21);
            *puVar1 = (undefined4)local_a8;
            puVar1[1] = local_a8._4_4_;
            puVar1[2] = (undefined4)uStack_a0;
            puVar1[3] = uStack_a0._4_4_;
          }
          else {
            local_f0 = lVar22;
            if (local_aa == '\0') {
              FUN_1476f0716(lVar22,&local_a8,local_f8,lVar21 + 0x10);
            }
            else if (local_ac == '\x01') {
              FUN_1476f0f4c();
            }
            else {
              FUN_1476f112e(lVar22,&local_a8,local_f8,local_ae);
            }
            if (local_a8._2_1_ == '\x01') {
              puVar26 = (undefined8 *)((local_a8 & 0xffff) * 0x38 + *(longlong *)(local_f0 + 8));
            }
            else {
              puVar26 = (undefined8 *)0x0;
            }
            if (puVar26 == (undefined8 *)0x0) goto LAB_1476ef880;
            lVar21 = uVar30 * 0x38;
            *(undefined8 *)(lVar20 + 0x30 + lVar21) = puVar26[6];
            uVar6 = *(undefined4 *)puVar26;
            uVar7 = *(undefined4 *)((longlong)puVar26 + 4);
            uVar8 = *(undefined4 *)(puVar26 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar26 + 0xc);
            uVar10 = *(undefined4 *)(puVar26 + 2);
            uVar11 = *(undefined4 *)((longlong)puVar26 + 0x14);
            uVar12 = *(undefined4 *)(puVar26 + 3);
            uVar13 = *(undefined4 *)((longlong)puVar26 + 0x1c);
            uVar14 = *(undefined4 *)((longlong)puVar26 + 0x24);
            uVar15 = *(undefined4 *)(puVar26 + 5);
            uVar16 = *(undefined4 *)((longlong)puVar26 + 0x2c);
            puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar21);
            *puVar1 = *(undefined4 *)(puVar26 + 4);
            puVar1[1] = uVar14;
            puVar1[2] = uVar15;
            puVar1[3] = uVar16;
            puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar21);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            puVar1[2] = uVar12;
            puVar1[3] = uVar13;
            puVar1 = (undefined4 *)(lVar20 + lVar21);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
          }
          FUN_1476f1310(local_e0,&local_b4,puVar26);
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar2);
  }
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar23 + 3) = (int)plVar23[3] + -1;
    UNLOCK();
    if (local_e8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar23 + 1));
    }
  }
  if (plVar24 != (longlong *)0x0) {
    uVar30 = plVar24[2];
    if ((ulonglong)plVar24[2] < local_d8) {
      uVar30 = local_d8;
    }
    plVar24[2] = uVar30;
    LOCK();
    *(int *)(plVar24 + 3) = (int)plVar24[3] + -1;
    UNLOCK();
    if (local_e4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar24 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476efb34 FUN_1476efb34 body=1825 status=ok
// SIG undefined FUN_1476efb34(void)

void FUN_1476efb34(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong local_130;
  int local_124;
  int local_120;
  int local_11c;
  ulonglong local_118;
  ulonglong local_110;
  undefined2 local_108;
  undefined6 uStack_106;
  int local_100;
  longlong local_f8;
  undefined2 local_f0;
  undefined6 uStack_ee;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ushort local_4c;
  char local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1476efb89;
      plVar17 = plVar17 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1476efb89:
  local_140 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_110 = *(ulonglong *)(param_1 + 0x40);
  local_11c = *(int *)(param_2 + 0x14);
  if (local_11c == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar18 = *(undefined8 **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar18 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476efbe2;
      puVar18 = puVar18 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  puVar18 = (undefined8 *)0x0;
LAB_1476efbe2:
  local_130 = *plVar17;
  local_118 = *(ulonglong *)(param_1 + 0x40);
  local_120 = *(int *)(param_2 + 0x14);
  if (local_120 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar18 + 1));
  }
  LOCK();
  *(int *)(puVar18 + 3) = *(int *)(puVar18 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar21 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar21 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476efc3b;
      plVar21 = plVar21 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar21 = (longlong *)0x0;
LAB_1476efc3b:
  puVar20 = (undefined4 *)*puVar18;
  local_124 = *(int *)(param_2 + 0x14);
  if (local_124 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar21 + 1));
  }
  LOCK();
  *(int *)(plVar21 + 3) = (int)plVar21[3] + 1;
  UNLOCK();
  local_148 = *plVar21;
  FUN_140b325e4(param_2,&local_d8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_c8 == 0) {
    FUN_1410bd96e(param_2,&local_f0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar12 = local_e0;
    if (local_e0 == 0) {
      FUN_1410bd9c4(param_2,&local_108,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_138 = local_f8;
      if ((short)local_140 != 0 && local_f8 != 0) {
        local_140 = (ulonglong)(uint)((int)local_140 * 2);
        uVar19 = 0;
        do {
          lVar12 = *(longlong *)(local_138 + uVar19 * 8);
          puVar16 = &DAT_149dfb77a;
          if (*(int *)(lVar12 + 0x58) != 0) {
            puVar16 = *(undefined2 **)(lVar12 + 0x50);
          }
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_c0,puVar16,1);
          FUN_1476f0716(uVar5,&local_4c,*(undefined8 *)(local_148 + uVar19 * 4),&local_c0);
          lVar12 = local_148;
          if (local_4a == '\x01') {
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            lVar14 = (ulonglong)local_4c * 0x38;
            *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(lVar12 + 0x30 + lVar14);
            puVar2 = (undefined4 *)(lVar12 + lVar14);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar14);
            uVar5 = *puVar3;
            uVar10 = puVar3[1];
            puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar14);
            uVar11 = puVar3[1];
            *(undefined8 *)(puVar20 + 8) = *puVar3;
            *(undefined8 *)(puVar20 + 10) = uVar11;
            *(undefined8 *)(puVar20 + 4) = uVar5;
            *(undefined8 *)(puVar20 + 6) = uVar10;
            *puVar20 = uVar6;
            puVar20[1] = uVar7;
            puVar20[2] = uVar8;
            puVar20[3] = uVar9;
          }
          else {
            FUN_1476eba1a(*(undefined8 *)(local_138 + uVar19 * 8),&local_c0,
                          *(undefined8 *)(local_148 + uVar19 * 4));
            local_88 = local_c0;
            uVar4 = local_88;
            uStack_80 = uStack_b8;
            uVar5 = uStack_80;
            local_78 = (double)(float)local_90;
            uStack_70 = (undefined4)local_b0;
            uStack_6c = local_b0._4_4_;
            uStack_68 = (undefined4)uStack_a8;
            uStack_64 = uStack_a8._4_4_;
            local_60 = (undefined4)local_a0;
            uStack_5c = local_a0._4_4_;
            uStack_58 = (undefined4)uStack_98;
            uStack_54 = uStack_98._4_4_;
            *(undefined8 *)(puVar20 + 0xc) = uStack_98;
            *(undefined8 *)(puVar20 + 8) = uStack_a8;
            *(undefined8 *)(puVar20 + 10) = local_a0;
            *(double *)(puVar20 + 4) = local_78;
            *(double *)(puVar20 + 6) = local_b0;
            local_88._0_4_ = (undefined4)local_c0;
            local_88._4_4_ = (undefined4)(local_c0 >> 0x20);
            uStack_80._0_4_ = (undefined4)uStack_b8;
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_b8 >> 0x20);
            *puVar20 = (undefined4)local_88;
            puVar20[1] = local_88._4_4_;
            puVar20[2] = (undefined4)uStack_80;
            puVar20[3] = uStack_80._4_4_;
            local_158 = *(undefined8 *)(local_138 + uVar19 * 8);
            local_88 = uVar4;
            uStack_80 = uVar5;
            FUN_1476f1668(*(undefined8 *)(param_1 + 0x48),&local_c0,
                          *(undefined8 *)(lVar12 + uVar19 * 4),&local_88);
            *(undefined2 *)(local_130 + uVar19) = (undefined2)local_c0;
          }
          uVar19 = uVar19 + 2;
          puVar20 = puVar20 + 0xe;
        } while (local_140 != uVar19);
      }
      if (CONCAT62(uStack_106,local_108) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT62(uStack_106,local_108) + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_100 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT62(uStack_106,local_108) + 8));
        }
      }
    }
    else if (local_140 != 0) {
      uVar19 = 0;
      do {
        FUN_1476f112e(*(undefined8 *)(param_1 + 0x48),&local_88,
                      *(undefined8 *)(local_148 + uVar19 * 8),*(undefined2 *)(local_e0 + uVar19 * 2)
                     );
        if (local_88._2_1_ == '\x01') {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
          lVar15 = (local_88 & 0xffff) * 0x38;
          *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(lVar14 + 0x30 + lVar15);
          puVar2 = (undefined4 *)(lVar14 + lVar15);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar3 = (undefined8 *)(lVar14 + 0x10 + lVar15);
          uVar5 = *puVar3;
          uVar10 = puVar3[1];
          puVar3 = (undefined8 *)(lVar14 + 0x20 + lVar15);
          uVar11 = puVar3[1];
          *(undefined8 *)(puVar20 + 8) = *puVar3;
          *(undefined8 *)(puVar20 + 10) = uVar11;
          *(undefined8 *)(puVar20 + 4) = uVar5;
          *(undefined8 *)(puVar20 + 6) = uVar10;
          *puVar20 = uVar6;
          puVar20[1] = uVar7;
          puVar20[2] = uVar8;
          puVar20[3] = uVar9;
        }
        else {
          uVar13 = (ulonglong)*(ushort *)(lVar12 + uVar19 * 2);
          lVar14 = *(longlong *)(local_148 + uVar19 * 8);
          uVar4 = *(ulonglong *)(lVar14 + uVar13);
          uVar5 = *(undefined8 *)(lVar14 + 8 + uVar13);
          local_b0 = (double)*(float *)(lVar14 + 0x30 + uVar13);
          uStack_a8 = *(undefined8 *)(lVar14 + 0x10 + uVar13);
          local_a0 = *(undefined8 *)(lVar14 + 0x18 + uVar13);
          uStack_98 = *(undefined8 *)(lVar14 + 0x20 + uVar13);
          local_90 = *(undefined8 *)(lVar14 + 0x28 + uVar13);
          *(undefined8 *)(puVar20 + 8) = local_a0;
          *(undefined8 *)(puVar20 + 10) = uStack_98;
          *(double *)(puVar20 + 4) = local_b0;
          *(undefined8 *)(puVar20 + 6) = uStack_a8;
          local_c0._0_4_ = (undefined4)uVar4;
          local_c0._4_4_ = (undefined4)(uVar4 >> 0x20);
          uStack_b8._0_4_ = (undefined4)uVar5;
          uStack_b8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *puVar20 = (undefined4)local_c0;
          puVar20[1] = local_c0._4_4_;
          puVar20[2] = (undefined4)uStack_b8;
          puVar20[3] = uStack_b8._4_4_;
          *(undefined8 *)(puVar20 + 0xc) = local_90;
          local_158 = CONCAT62(local_158._2_6_,*(undefined2 *)(lVar12 + uVar19 * 2));
          local_c0 = uVar4;
          uStack_b8 = uVar5;
          FUN_1476f1576(*(undefined8 *)(param_1 + 0x48),&local_108,
                        *(undefined8 *)(local_148 + uVar19 * 8),&local_c0);
          *(undefined2 *)(local_130 + uVar19 * 2) = local_108;
        }
        uVar19 = uVar19 + 1;
        puVar20 = puVar20 + 0xe;
      } while (local_140 != uVar19);
    }
    if (CONCAT62(uStack_ee,local_f0) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT62(uStack_ee,local_f0) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_e8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT62(uStack_ee,local_f0) + 8));
      }
    }
  }
  else if (local_140 != 0) {
    uVar19 = 0;
    do {
      FUN_1476f0f4c(*(undefined8 *)(param_1 + 0x48),&local_88,
                    *(undefined8 *)(local_148 + uVar19 * 8),*(undefined2 *)(local_c8 + uVar19 * 2));
      if (local_88._2_1_ == '\x01') {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        lVar14 = (local_88 & 0xffff) * 0x38;
        *(undefined8 *)(puVar20 + 0xc) = *(undefined8 *)(lVar12 + 0x30 + lVar14);
        puVar2 = (undefined4 *)(lVar12 + lVar14);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (undefined8 *)(lVar12 + 0x10 + lVar14);
        uVar5 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (undefined8 *)(lVar12 + 0x20 + lVar14);
        uVar11 = puVar3[1];
        *(undefined8 *)(puVar20 + 8) = *puVar3;
        *(undefined8 *)(puVar20 + 10) = uVar11;
        *(undefined8 *)(puVar20 + 4) = uVar5;
        *(undefined8 *)(puVar20 + 6) = uVar10;
        *puVar20 = uVar6;
        puVar20[1] = uVar7;
        puVar20[2] = uVar8;
        puVar20[3] = uVar9;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_c8 + uVar19 * 2)))
                  (&local_c0,*(undefined8 *)(local_148 + uVar19 * 8));
        *(undefined8 *)(puVar20 + 0xc) = local_90;
        puVar20[8] = (undefined4)local_a0;
        puVar20[9] = local_a0._4_4_;
        puVar20[10] = (undefined4)uStack_98;
        puVar20[0xb] = uStack_98._4_4_;
        puVar20[4] = (undefined4)local_b0;
        puVar20[5] = local_b0._4_4_;
        puVar20[6] = (undefined4)uStack_a8;
        puVar20[7] = uStack_a8._4_4_;
        *puVar20 = (undefined4)local_c0;
        puVar20[1] = local_c0._4_4_;
        puVar20[2] = (undefined4)uStack_b8;
        puVar20[3] = uStack_b8._4_4_;
        local_158 = CONCAT62(local_158._2_6_,*(undefined2 *)(local_c8 + uVar19 * 2));
        FUN_1476f1484(*(undefined8 *)(param_1 + 0x48),&local_f0,
                      *(undefined8 *)(local_148 + uVar19 * 8),&local_c0);
        *(undefined2 *)(local_130 + uVar19 * 2) = local_f0;
      }
      uVar19 = uVar19 + 1;
      puVar20 = puVar20 + 0xe;
    } while (local_140 != uVar19);
  }
  if (local_d8 != 0) {
    LOCK();
    *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 3) = (int)plVar21[3] + -1;
    UNLOCK();
    if (local_124 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar21 + 1));
    }
  }
  if (puVar18 != (undefined8 *)0x0) {
    uVar19 = puVar18[2];
    if ((ulonglong)puVar18[2] < local_118) {
      uVar19 = local_118;
    }
    puVar18[2] = uVar19;
    LOCK();
    *(int *)(puVar18 + 3) = *(int *)(puVar18 + 3) + -1;
    UNLOCK();
    if (local_120 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar18 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    uVar19 = plVar17[2];
    if ((ulonglong)plVar17[2] < local_110) {
      uVar19 = local_110;
    }
    plVar17[2] = uVar19;
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_11c == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f0256 FUN_1476f0256 body=961 status=ok
// SIG undefined FUN_1476f0256(void)

void FUN_1476f0256(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476f02ab;
      plVar7 = plVar7 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1476f02ab:
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar3 = (ulonglong)uVar1;
  local_d0 = *(ulonglong *)(param_1 + 0x40);
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476f02ff;
      plVar8 = plVar8 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476f02ff:
  puVar5 = (undefined4 *)*plVar7;
  local_d8 = *(int *)(param_2 + 0x14);
  if (local_d8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar2 = *plVar8;
  FUN_140b325e4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_88 == 0) {
    FUN_1410bd96e(param_2,&local_b0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_a0 == 0) {
      FUN_1410bd9c4(param_2,&local_c8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if (uVar1 != 0 && local_b8 != 0) {
        puVar6 = (undefined8 *)(puVar5 + 0xc);
        lVar10 = 0;
        do {
          FUN_1476eba1a(*(undefined8 *)(local_b8 + lVar10 * 2),&local_80,
                        *(undefined8 *)(lVar2 + lVar10));
          puVar6[-6] = CONCAT44(uStack_7c,local_80);
          puVar6[-5] = CONCAT44(uStack_74,uStack_78);
          puVar6[-4] = (double)local_50;
          puVar6[-3] = local_70;
          puVar6[-2] = uStack_68;
          puVar6[-1] = local_60;
          *puVar6 = uStack_58;
          lVar10 = lVar10 + 8;
          puVar6 = puVar6 + 7;
        } while ((ulonglong)uVar1 * 8 != lVar10);
      }
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + -1;
        UNLOCK();
        if (local_c0 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_c8 + 8));
        }
      }
    }
    else if (uVar3 != 0) {
      puVar6 = (undefined8 *)(puVar5 + 0xc);
      uVar9 = 0;
      do {
        uVar4 = (ulonglong)*(ushort *)(local_a0 + uVar9 * 2);
        lVar10 = *(longlong *)(lVar2 + uVar9 * 8);
        puVar6[-6] = *(undefined8 *)(lVar10 + uVar4);
        puVar6[-5] = *(undefined8 *)(lVar10 + 8 + uVar4);
        puVar6[-4] = (double)*(float *)(lVar10 + 0x30 + uVar4);
        puVar6[-3] = *(undefined8 *)(lVar10 + 0x10 + uVar4);
        puVar6[-2] = *(undefined8 *)(lVar10 + 0x18 + uVar4);
        puVar6[-1] = *(undefined8 *)(lVar10 + 0x20 + uVar4);
        *puVar6 = *(undefined8 *)(lVar10 + 0x28 + uVar4);
        uVar9 = uVar9 + 1;
        puVar6 = puVar6 + 7;
      } while (uVar3 != uVar9);
    }
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + -1;
      UNLOCK();
      if (local_a8 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_b0 + 8));
      }
    }
  }
  else if (uVar3 != 0) {
    uVar9 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_88 + uVar9 * 2))
      )(&local_80,*(undefined8 *)(lVar2 + uVar9 * 8));
      *(ulonglong *)(puVar5 + 0xc) = CONCAT44(uStack_4c,local_50);
      *(undefined8 *)(puVar5 + 8) = local_60;
      *(undefined8 *)(puVar5 + 10) = uStack_58;
      *(undefined8 *)(puVar5 + 4) = local_70;
      *(undefined8 *)(puVar5 + 6) = uStack_68;
      *puVar5 = local_80;
      puVar5[1] = uStack_7c;
      puVar5[2] = uStack_78;
      puVar5[3] = uStack_74;
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 0xe;
    } while (uVar3 != uVar9);
  }
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
    UNLOCK();
    if (local_90 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_d8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    uVar3 = plVar7[2];
    if ((ulonglong)plVar7[2] < local_d0) {
      uVar3 = local_d0;
    }
    plVar7[2] = uVar3;
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f0618 FUN_1476f0618 body=252 status=ok
// SIG undefined FUN_1476f0618(void)

void FUN_1476f0618(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400021e4(param_2,&local_80);
  puVar1 = local_80;
  if (local_78 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_70,puVar1);
  FUN_1476dfc50(&local_60,param_1,local_70);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    *param_3 = local_60;
    param_3[1] = local_58;
    param_3[2] = (double)local_30;
    param_3[3] = local_50;
    param_3[4] = local_48;
    param_3[5] = local_40;
    param_3[6] = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f0716 FUN_1476f0716 body=483 status=ok
// SIG undefined FUN_1476f0716(void)

undefined8 FUN_1476f0716(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

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
          goto LAB_1476f0844;
        }
        else {
LAB_1476f0844:
          FUN_1476f0bb4(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476f0c80(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476f0ae8(param_1 + 8);
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
  FUN_1476f08fa(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f08fa FUN_1476f08fa body=493 status=ok
// SIG undefined FUN_1476f08fa(void)

undefined2 * FUN_1476f08fa(longlong param_1,undefined2 *param_2,undefined4 *param_3)

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
          goto LAB_1476f0a2c;
        }
        else {
LAB_1476f0a2c:
          FUN_1476f0bb4(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_1476f0c80(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1476f0ae8(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_1476f0e94((longlong *)(param_1 + 0x40),uVar5,param_3);
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



// FUNCTION 1476f0ae8 FUN_1476f0ae8 body=204 status=ok
// SIG undefined FUN_1476f0ae8(void)

void FUN_1476f0ae8(longlong *param_1)

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
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0x38;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x38) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x38) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0x38);
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
  FUN_144748838(param_1,iVar5);
  return;
}



// FUNCTION 1476f0bb4 FUN_1476f0bb4 body=90 status=ok
// SIG undefined FUN_1476f0bb4(void)

void FUN_1476f0bb4(longlong *param_1,int param_2)

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
  FUN_1476f0c0e();
  return;
}



// FUNCTION 1476f0c0e FUN_1476f0c0e body=114 status=ok
// SIG undefined FUN_1476f0c0e(void)

void FUN_1476f0c0e(longlong *param_1,int param_2)

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



// FUNCTION 1476f0c80 FUN_1476f0c80 body=68 status=ok
// SIG undefined FUN_1476f0c80(void)

void FUN_1476f0c80(longlong param_1,uint param_2)

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
  FUN_1476f0cc4(param_1);
  return;
}



// FUNCTION 1476f0cc4 FUN_1476f0cc4 body=462 status=ok
// SIG undefined FUN_1476f0cc4(void)

void FUN_1476f0cc4(longlong *param_1)

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



// FUNCTION 1476f0e94 FUN_1476f0e94 body=107 status=ok
// SIG undefined FUN_1476f0e94(void)

int FUN_1476f0e94(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar2 = FUN_1476f0eff(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476f0eff FUN_1476f0eff body=76 status=ok
// SIG undefined FUN_1476f0eff(void)

undefined8 FUN_1476f0eff(int *param_1,int *param_2)

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



// FUNCTION 1476f0f4c FUN_1476f0f4c body=481 status=ok
// SIG undefined FUN_1476f0f4c(void)

undefined8 FUN_1476f0f4c(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

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
          goto LAB_1476f107a;
        }
        else {
LAB_1476f107a:
          FUN_1476f0bb4(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476f0c80(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476f0ae8(param_1 + 8);
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
  FUN_1476f08fa(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f112e FUN_1476f112e body=481 status=ok
// SIG undefined FUN_1476f112e(void)

undefined8 FUN_1476f112e(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

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
          goto LAB_1476f125c;
        }
        else {
LAB_1476f125c:
          FUN_1476f0bb4(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_1476f0c80(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476f0ae8(param_1 + 8);
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
  FUN_1476f08fa(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f1310 FUN_1476f1310 body=237 status=ok
// SIG undefined FUN_1476f1310(void)

void FUN_1476f1310(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar12 = *param_1;
  if ((int)uVar2 < 1) {
    uVar13 = 0;
  }
  else {
    iVar9 = *param_2;
    uVar13 = 0;
    uVar10 = uVar2;
    do {
      uVar1 = (uVar10 >> 1) + uVar13;
      if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x40) < iVar9) {
        uVar13 = uVar1 + (uVar10 & 1);
      }
      bVar3 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar3);
    if (((int)uVar13 < (int)uVar2) && (*(int *)(lVar12 + (ulonglong)uVar13 * 0x40) <= iVar9)) {
      piVar11 = (int *)(lVar12 + (ulonglong)uVar13 * 0x40);
      goto LAB_1476f13b5;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476f13fe(param_1,uVar2);
    lVar12 = *param_1;
  }
  lVar14 = (ulonglong)uVar13 * 0x40;
  memmove((void *)(lVar12 + lVar14 + 0x40),(void *)(lVar12 + lVar14),
          (ulonglong)(uVar2 - uVar13) << 6);
  piVar11 = (int *)(lVar14 + *param_1);
  iVar9 = *param_2;
LAB_1476f13b5:
  *piVar11 = iVar9;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  *(undefined8 *)(piVar11 + 2) = *param_3;
  *(undefined8 *)(piVar11 + 4) = uVar4;
  *(undefined8 *)(piVar11 + 6) = uVar5;
  *(undefined8 *)(piVar11 + 8) = uVar6;
  *(undefined8 *)(piVar11 + 10) = uVar7;
  *(undefined8 *)(piVar11 + 0xc) = uVar8;
  *(undefined8 *)(piVar11 + 0xe) = param_3[6];
  return;
}



// FUNCTION 1476f13fe FUN_1476f13fe body=132 status=ok
// SIG undefined FUN_1476f13fe(void)

void FUN_1476f13fe(longlong param_1,int param_2)

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



// FUNCTION 1476f1484 FUN_1476f1484 body=240 status=ok
// SIG undefined FUN_1476f1484(void)

undefined2 *
FUN_1476f1484(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

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
  FUN_1476f1776(param_1 + 8,&local_60);
  *(undefined8 *)(local_58 + 0xc) = *(undefined8 *)(param_4 + 0xc);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[9];
  uVar10 = param_4[10];
  uVar11 = param_4[0xb];
  local_58[8] = param_4[8];
  local_58[9] = uVar9;
  local_58[10] = uVar10;
  local_58[0xb] = uVar11;
  local_58[4] = uVar5;
  local_58[5] = uVar6;
  local_58[6] = uVar7;
  local_58[7] = uVar8;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476f1858(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f1576 FUN_1476f1576 body=240 status=ok
// SIG undefined FUN_1476f1576(void)

undefined2 *
FUN_1476f1576(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

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
  FUN_1476f1776(param_1 + 8,&local_60);
  *(undefined8 *)(local_58 + 0xc) = *(undefined8 *)(param_4 + 0xc);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[9];
  uVar10 = param_4[10];
  uVar11 = param_4[0xb];
  local_58[8] = param_4[8];
  local_58[9] = uVar9;
  local_58[10] = uVar10;
  local_58[0xb] = uVar11;
  local_58[4] = uVar5;
  local_58[5] = uVar6;
  local_58[6] = uVar7;
  local_58[7] = uVar8;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476f1858(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f1668 FUN_1476f1668 body=268 status=ok
// SIG undefined FUN_1476f1668(void)

undefined2 *
FUN_1476f1668(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
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
  FUN_1476f1776(param_1 + 8,&local_58);
  *(undefined8 *)(local_50 + 0xc) = *(undefined8 *)(param_4 + 0xc);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[4];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  local_50[8] = param_4[8];
  local_50[9] = uVar10;
  local_50[10] = uVar11;
  local_50[0xb] = uVar12;
  local_50[4] = uVar6;
  local_50[5] = uVar7;
  local_50[6] = uVar8;
  local_50[7] = uVar9;
  *local_50 = uVar2;
  local_50[1] = uVar3;
  local_50[2] = uVar4;
  local_50[3] = uVar5;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1476f1858(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f1776 FUN_1476f1776 body=226 status=ok
// SIG undefined FUN_1476f1776(void)

int * FUN_1476f1776(longlong *param_1,int *param_2)

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



// FUNCTION 1476f1858 FUN_1476f1858 body=339 status=ok
// SIG undefined FUN_1476f1858(void)

undefined4 * FUN_1476f1858(longlong param_1,undefined4 *param_2,longlong *param_3)

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
  FUN_1476f19ac(param_1,local_48);
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
  cVar4 = FUN_1476f1a92(param_1,uVar6,local_40,&local_4c);
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
      FUN_1476f0cc4(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f19ac FUN_1476f19ac body=229 status=ok
// SIG undefined FUN_1476f19ac(void)

int * FUN_1476f19ac(longlong *param_1,int *param_2)

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



// FUNCTION 1476f1a92 FUN_1476f1a92 body=93 status=ok
// SIG undefined FUN_1476f1a92(void)

undefined8 FUN_1476f1a92(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1476f0e94(), iVar7 != -1)) {
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
    FUN_1476f0c0e(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1476f1af0 FUN_1476f1af0 body=48 status=ok
// SIG undefined FUN_1476f1af0(void)

void FUN_1476f1af0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1476f1b20 FUN_1476f1b20 body=410 status=ok
// SIG undefined FUN_1476f1b20(void)

longlong * FUN_1476f1b20(undefined8 param_1,longlong *param_2,undefined4 param_3)

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
  FUN_1476f1cbc();
  if (*param_2 != 0) goto LAB_1476f1b4e;
  plVar3 = (longlong *)FUN_14001cc68(0xe8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a5086b0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0xd8);
  FUN_1476f1e2a(plVar4);
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1476f3180(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1476f1c80:
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
joined_r0x0001476f1c70:
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
        goto joined_r0x0001476f1c70;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1476f1c80;
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
  FUN_1476f1d70(param_1,param_3,&local_50);
LAB_1476f1b4e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f1cbc FUN_1476f1cbc body=179 status=ok
// SIG undefined FUN_1476f1cbc(void)

undefined8 * FUN_1476f1cbc(longlong param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_1476f1d16;
    }
  }
  uVar6 = 0;
LAB_1476f1d16:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476f1d70 FUN_1476f1d70 body=184 status=ok
// SIG undefined FUN_1476f1d70(void)

void FUN_1476f1d70(longlong param_1,undefined4 param_2,undefined8 *param_3)

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



// FUNCTION 1476f1e2a FUN_1476f1e2a body=120 status=ok
// SIG undefined FUN_1476f1e2a(void)

void FUN_1476f1e2a(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a5086d0;
  return;
}



// FUNCTION 1476f1ea2 FUN_1476f1ea2 body=9 status=ok
// SIG undefined FUN_1476f1ea2(void)

void FUN_1476f1ea2(longlong param_1)

{
  FUN_1476f35f8(param_1 + 0x10);
  return;
}



// FUNCTION 1476f1eac FUN_1476f1eac body=29 status=ok
// SIG undefined FUN_1476f1eac(void)

undefined8 FUN_1476f1eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f1eca FUN_1476f1eca body=38 status=ok
// SIG undefined FUN_1476f1eca(void)

undefined8 FUN_1476f1eca(undefined8 param_1,int param_2)

{
  FUN_1476f35f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f1f16 FUN_1476f1f16 body=95 status=ok
// SIG undefined FUN_1476f1f16(void)

void FUN_1476f1f16(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

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
  FUN_1476f2910();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f1f76 FUN_1476f1f76 body=1169 status=ok
// SIG undefined FUN_1476f1f76(void)

ulonglong FUN_1476f1f76(longlong param_1,int param_2,char param_3,char param_4)

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
    if (cVar7 == '\0') goto LAB_1476f1ff3;
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
      FUN_1476f29ac(param_1 + 0x18);
      FUN_1476f302a(param_1 + 0x68,param_2);
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
        FUN_1476f3062(&local_98,&local_80);
        lVar5 = local_60;
      }
joined_r0x0001476f230b:
      if (lVar5 != 0) {
        FUN_1400020a8(lVar5);
      }
      unaff_RBP = 0;
      goto LAB_1476f1ff3;
    }
    unaff_RBP = CONCAT71(uVar12,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50) & 1) == 0)
    goto LAB_1476f1ff3;
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
      FUN_1476f3062((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x68));
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
      goto LAB_1476f1ff3;
    }
    unaff_RBP = CONCAT71(uVar12,1);
    if (param_4 == '\x01') {
      bVar15 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      if ((bVar15 & 1) == 0) goto LAB_1476f1ff3;
      puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
      *(byte *)(puVar9 + 0x12) = bVar15 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1476f1ff3;
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
        FUN_1476f29ac(param_1 + 0x18);
        FUN_1476f302a(param_1 + 0x68,param_2);
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
          FUN_1476f3062(&local_98,&local_80);
          lVar5 = local_60;
        }
        goto joined_r0x0001476f230b;
      }
      if ((bVar15 & 1) == 0) goto LAB_1476f1ff3;
    }
  }
  FUN_1476f3062(puVar9,puVar9 + 6);
LAB_1476f1ff3:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1476f2408 FUN_1476f2408 body=409 status=ok
// SIG undefined FUN_1476f2408(void)

undefined8 FUN_1476f2408(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1476f24bf;
  }
  if (param_3 == '\x01') {
    lVar7 = (longlong)param_2 * 0x50;
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar7);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar7);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_1476f29ac(param_1 + 0x18);
    FUN_1476f302a(param_1 + 0x68);
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
      FUN_14767cf40(param_1 + 0xa0);
      FUN_14767cf98(param_1 + 0xa0);
    }
    uVar6 = 0;
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
      FUN_14767cf40(param_1 + 0xa0);
      FUN_14767cf98(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1476f24bf:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f25a2 FUN_1476f25a2 body=326 status=ok
// SIG undefined FUN_1476f25a2(void)

void FUN_1476f25a2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x68);
  lVar3 = param_1 + 0x78;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar3;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar2 = *(int *)(param_1 + 0x90);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_80 = plVar1;
  if ((iStack_44 != iVar2) || (uStack_50 != lVar3)) {
    do {
      FUN_14590ac66(param_2,*local_80 + (longlong)iStack_64 * 0x50 + 0x18);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar3 || iStack_64 != iVar2));
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    iVar2 = 0;
    lVar3 = 8;
    do {
      FUN_14590ac66(param_2,*(longlong *)(param_1 + 0xa0) + lVar3);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x38;
    } while (iVar2 < *(int *)(param_1 + 0xa8));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f26ea FUN_1476f26ea body=38 status=ok
// SIG undefined FUN_1476f26ea(void)

undefined8 FUN_1476f26ea(undefined8 param_1,int param_2)

{
  FUN_1476f35f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f2710 FUN_1476f2710 body=52 status=ok
// SIG undefined FUN_1476f2710(void)

void FUN_1476f2710(longlong *param_1)

{
  FUN_1476f2744();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476f2744 FUN_1476f2744 body=317 status=ok
// SIG undefined FUN_1476f2744(void)

void FUN_1476f2744(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x38 + (longlong)iStack_4c * 0x50) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
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



// FUNCTION 1476f2882 FUN_1476f2882 body=52 status=ok
// SIG undefined FUN_1476f2882(void)

void FUN_1476f2882(longlong *param_1)

{
  FUN_1476f28b6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476f28b6 FUN_1476f28b6 body=89 status=ok
// SIG undefined FUN_1476f28b6(void)

void FUN_1476f28b6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 1476f2910 FUN_1476f2910 body=154 status=ok
// SIG undefined FUN_1476f2910(void)

void FUN_1476f2910(longlong param_1,int param_2,undefined4 *param_3)

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
  FUN_1476f29ac(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_1476f2b88(param_1 + 0x18,local_24);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f29ac FUN_1476f29ac body=147 status=ok
// SIG undefined FUN_1476f29ac(void)

void FUN_1476f29ac(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1476f2b0a(param_2);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if ((((*piVar1 == *param_2) &&
             (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x28) == param_2[1])) &&
            (*(longlong *)(piVar1 + 2) == *(longlong *)(param_2 + 2))) &&
           (*(longlong *)(piVar1 + 4) == *(longlong *)(param_2 + 4))) {
          FUN_1476f2a40(param_1);
          return;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1476f2a40 FUN_1476f2a40 body=87 status=ok
// SIG undefined FUN_1476f2a40(void)

void FUN_1476f2a40(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1476f2a98();
  return;
}



// FUNCTION 1476f2a98 FUN_1476f2a98 body=114 status=ok
// SIG undefined FUN_1476f2a98(void)

void FUN_1476f2a98(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1476f2b0a FUN_1476f2b0a body=126 status=ok
// SIG undefined FUN_1476f2b0a(void)

uint FUN_1476f2b0a(undefined4 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_144a78877(*param_1,param_1[1]);
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar3 = ((uint)(*(ulonglong *)(param_1 + 4) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_1 + 4) >> 4)) * -0x7a143595;
  uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar3 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4),uVar4 >> 0x10 ^ uVar4);
  return uVar3 ^ uVar2;
}



// FUNCTION 1476f2b88 FUN_1476f2b88 body=305 status=ok
// SIG undefined FUN_1476f2b88(void)

undefined4 * FUN_1476f2b88(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  FUN_1476f2cba(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *puVar2;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1476f2b0a(local_40);
  cVar6 = FUN_1476f2da0(param_1,uVar7,local_40,&local_4c);
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
      local_40[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
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
      FUN_1476f2e72(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f2cba FUN_1476f2cba body=230 status=ok
// SIG undefined FUN_1476f2cba(void)

int * FUN_1476f2cba(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1476f2da0 FUN_1476f2da0 body=93 status=ok
// SIG undefined FUN_1476f2da0(void)

undefined8 FUN_1476f2da0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1476f2dfe(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1476f2a98(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1476f2dfe FUN_1476f2dfe body=116 status=ok
// SIG undefined FUN_1476f2dfe(void)

int FUN_1476f2dfe(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if ((((*(int *)(lVar3 + lVar5 * 0x28) == *param_3) &&
             (*(int *)(lVar3 + 4 + lVar5 * 0x28) == param_3[1])) &&
            (lVar1 = lVar3 + lVar5 * 0x28, *(longlong *)(lVar1 + 8) == *(longlong *)(param_3 + 2)))
           && (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_3 + 4))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x20 + lVar5 * 0x28);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476f2e72 FUN_1476f2e72 body=438 status=ok
// SIG undefined FUN_1476f2e72(void)

void FUN_1476f2e72(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1476f2b0a(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476f302a FUN_1476f302a body=56 status=ok
// SIG undefined FUN_1476f302a(void)

void FUN_1476f302a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x38 + (longlong)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1476f3106(param_1,param_2);
  return;
}



// FUNCTION 1476f3062 FUN_1476f3062 body=162 status=ok
// SIG undefined FUN_1476f3062(void)

void FUN_1476f3062(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  lVar1 = FUN_14479d2ce(&local_40);
  local_40 = lVar1;
  if (lVar1 != 0) {
    local_38 = (undefined4)param_1[1];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_30 = (undefined4)param_1[2];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x14);
    lVar2 = FUN_14765e9da(param_2);
    if (lVar2 != 0) {
      uVar3 = FUN_14765e9da(param_2);
      if ((CONCAT44(uStack_34,local_38) != 0) && (CONCAT44(uStack_2c,uStack_30) != 0)) {
        FUN_1476c546c(&local_38,uVar3,lVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f3106 FUN_1476f3106 body=122 status=ok
// SIG undefined FUN_1476f3106(void)

void FUN_1476f3106(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1476f3180 FUN_1476f3180 body=167 status=ok
// SIG undefined FUN_1476f3180(void)

void FUN_1476f3180(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476f31fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476f31fb;
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
LAB_1476f31fb:
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
                    /* WARNING: Could not recover jumptable at 0x0001476f321b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476f3228 FUN_1476f3228 body=410 status=ok
// SIG undefined FUN_1476f3228(void)

longlong * FUN_1476f3228(undefined8 param_1,longlong *param_2,undefined4 param_3)

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
  FUN_1476f33c4();
  if (*param_2 != 0) goto LAB_1476f3256;
  plVar3 = (longlong *)FUN_14001cc68(0xe8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a508770;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0xd8);
  FUN_1476f3532(plVar4);
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_1476f36a6(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1476f3388:
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
joined_r0x0001476f3378:
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
        goto joined_r0x0001476f3378;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1476f3388;
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
  FUN_1476f3478(param_1,param_3,&local_50);
LAB_1476f3256:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f33c4 FUN_1476f33c4 body=179 status=ok
// SIG undefined FUN_1476f33c4(void)

undefined8 * FUN_1476f33c4(longlong param_1,undefined8 *param_2,uint param_3)

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
      goto LAB_1476f341e;
    }
  }
  uVar6 = 0;
LAB_1476f341e:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1476f3478 FUN_1476f3478 body=184 status=ok
// SIG undefined FUN_1476f3478(void)

void FUN_1476f3478(longlong param_1,undefined4 param_2,undefined8 *param_3)

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



// FUNCTION 1476f3532 FUN_1476f3532 body=120 status=ok
// SIG undefined FUN_1476f3532(void)

void FUN_1476f3532(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a508790;
  return;
}



// FUNCTION 1476f35aa FUN_1476f35aa body=9 status=ok
// SIG undefined FUN_1476f35aa(void)

void FUN_1476f35aa(longlong param_1)

{
  FUN_1476f35f8(param_1 + 0x10);
  return;
}



// FUNCTION 1476f35b4 FUN_1476f35b4 body=29 status=ok
// SIG undefined FUN_1476f35b4(void)

undefined8 FUN_1476f35b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f35d2 FUN_1476f35d2 body=38 status=ok
// SIG undefined FUN_1476f35d2(void)

undefined8 FUN_1476f35d2(undefined8 param_1,int param_2)

{
  FUN_1476f35f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476f35f8 FUN_1476f35f8 body=173 status=ok
// SIG undefined FUN_1476f35f8(void)

void FUN_1476f35f8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a508720;
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
  FUN_141029f75(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1476f2710(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1476f2882(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001476f3699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1476f36a6 FUN_1476f36a6 body=167 status=ok
// SIG undefined FUN_1476f36a6(void)

void FUN_1476f36a6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1476f3721;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1476f3721;
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
LAB_1476f3721:
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
                    /* WARNING: Could not recover jumptable at 0x0001476f3741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1476f374e FUN_1476f374e body=433 status=ok
// SIG undefined FUN_1476f374e(void)

void FUN_1476f374e(longlong param_1,int *param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  int *local_90;
  undefined2 *local_88;
  int *local_80;
  undefined2 local_74;
  undefined2 local_72;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  FUN_1409ee236(param_1 + 0xb0);
  _Dst = (void *)CONCAT44(uStack_64,uStack_68);
  memset(_Dst,0,0x128);
  iVar3 = local_70;
  *(undefined1 *)((longlong)_Dst + 0x100) = 2;
  *(undefined8 *)((longlong)_Dst + 0x128) = 0x10000000000;
  lVar5 = (longlong)local_70;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lVar1 = lVar2 + lVar5 * 0x130;
  FUN_1409ee0a6(lVar1);
  puVar4 = (undefined8 *)(lVar2 + lVar5 * 0x130);
  *(byte *)(puVar4 + 0x20) = *(byte *)(puVar4 + 0x20) | 3;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0x8000000000;
  *(undefined2 *)((longlong)puVar4 + 0x7a) = param_3;
  *(undefined2 *)((longlong)puVar4 + 0x7c) = param_4;
  *puVar4 = &PTR_FUN_14a5087e0;
  local_80 = &local_70;
  local_50 = 0x10000000000;
  local_88 = &local_74;
  local_74 = param_3;
  local_72 = param_4;
  FUN_1447c44f6(&local_70);
  if ((int *)(puVar4 + 0x21) != &local_70) {
    puVar4[0x23] = local_60;
    puVar4[0x24] = uStack_58;
    *(int *)(puVar4 + 0x21) = local_70;
    *(undefined4 *)((longlong)puVar4 + 0x10c) = uStack_6c;
    *(undefined4 *)(puVar4 + 0x22) = uStack_68;
    *(undefined4 *)((longlong)puVar4 + 0x114) = uStack_64;
    *(undefined4 *)(lVar1 + 0x128) = (undefined4)local_50;
    *(undefined4 *)(lVar1 + 300) = local_50._4_4_;
  }
  *local_90 = iVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f3900 FUN_1476f3900 body=264 status=ok
// SIG undefined FUN_1476f3900(void)

undefined8
FUN_1476f3900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4,
             undefined2 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a508870;
  *(undefined2 *)(local_48 + 1) = *param_4;
  *(undefined2 *)((longlong)local_48 + 10) = *param_5;
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
  local_48[2] = lVar2;
  *local_48 = &PTR_FUN_14a508800;
  local_48[3] = param_3;
  local_48[4] = FUN_14333128c;
  FUN_1409960cc(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476f3a0a FUN_1476f3a0a body=42 status=ok
// SIG undefined FUN_1476f3a0a(void)

longlong FUN_1476f3a0a(longlong param_1,int param_2)

{
  FUN_1476f3e32(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


