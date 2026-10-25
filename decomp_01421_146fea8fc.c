// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fea8fc FUN_146fea8fc body=57 status=ok
// SIG undefined FUN_146fea8fc(void)

void FUN_146fea8fc(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x157) != '\0') {
    *(undefined4 *)(param_1 + 0x155) = 0x1000000;
  }
                    /* WARNING: Could not recover jumptable at 0x000146fea92e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 146fea936 FUN_146fea936 body=62 status=ok
// SIG undefined FUN_146fea936(void)

void FUN_146fea936(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  FUN_146ffb142(lVar1);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 146fea974 FUN_146fea974 body=940 status=ok
// SIG undefined FUN_146fea974(void)

void FUN_146fea974(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0;
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
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1470004e0(param_2,0);
  }
  iVar10 = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1b4);
  iVar11 = *(int *)(param_1 + 0x1d8) - *(int *)(param_1 + 0x204);
  if (iVar11 < iVar10) {
    iVar11 = iVar10;
  }
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
    FUN_1470004e0(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x1d0);
  lVar2 = param_1 + 0x1e0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x1f8) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x1f8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar11) || (uStack_60 != lVar2)) {
    do {
      puVar12 = (undefined4 *)((longlong)iStack_74 * 0x18 + *local_90);
      iVar10 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
        FUN_147000540(param_2,iVar10);
      }
      uVar7 = puVar12[1];
      uVar8 = puVar12[2];
      uVar9 = puVar12[3];
      puVar4 = (undefined4 *)(*param_2 + (longlong)iVar10 * 0x10);
      *puVar4 = *puVar12;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar11));
  }
  plVar3 = (longlong *)(param_1 + 0x180);
  lVar2 = param_1 + 400;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x1a8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar3;
  if ((iStack_54 != iVar11) || (uStack_60 != lVar2)) {
    local_98 = param_1 + 0x208;
    local_a0 = param_1;
    do {
      if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
        lVar5 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x18);
        uVar6 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar14 = (uint)lVar5 & 0xffff;
        lVar13 = *(longlong *)(param_1 + 0x210);
        if (*(longlong *)(param_1 + 0x210) == 0) {
          lVar13 = local_98;
        }
        iVar10 = *(int *)(lVar13 + (ulonglong)
                                   (*(int *)(param_1 + 0x218) - 1U &
                                   (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar14)
                                   + (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar14 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            if (*(longlong *)(*plVar1 + (longlong)iVar10 * 0x18) == lVar5) goto LAB_146feac10;
            iVar10 = *(int *)(*plVar1 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      puVar12 = (undefined4 *)(*local_90 + (longlong)iStack_74 * 0x18);
      if ((*(char *)(param_1 + 0x159) != '\x01') ||
         (*(longlong *)(param_1 + 0x70) - *(longlong *)(*(longlong *)(puVar12 + 2) + 8) <
          DAT_14c99d648)) {
        iVar10 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
          FUN_147000540(param_2,iVar10);
        }
        uVar7 = puVar12[1];
        uVar8 = puVar12[2];
        uVar9 = puVar12[3];
        puVar4 = (undefined4 *)(*param_2 + (longlong)iVar10 * 0x10);
        *puVar4 = *puVar12;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        param_1 = local_a0;
      }
LAB_146feac10:
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar3 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fead22 FUN_146fead22 body=333 status=ok
// SIG undefined FUN_146fead22(void)

void FUN_146fead22(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408383eb(param_2,param_1);
  FUN_1408383eb(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x10);
  local_3c = *(int *)(param_1 + 0x20);
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_147001bd0((longlong *)(param_1 + 0x18));
  }
  if (0 < local_3c) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      FUN_1407de492(*(longlong *)(param_1 + 0x18) + lVar4,param_2,&LAB_147001d96);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x70;
    } while (lVar3 < local_3c);
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x28);
  FUN_1468583ba(param_1 + 0x30,param_2);
  FUN_147001d9c(param_2,param_1 + 0xe8);
  FUN_1470020fa(param_2,param_1 + 0xf8);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feae70 FUN_146feae70 body=333 status=ok
// SIG undefined FUN_146feae70(void)

void FUN_146feae70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408383eb(param_2,param_1);
  FUN_1408383eb(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x10);
  local_3c = *(int *)(param_1 + 0x20);
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    }
    else {
      FUN_14572512c(param_2,&local_3c);
    }
  }
  else {
    local_3c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_147001bd0((longlong *)(param_1 + 0x18));
  }
  if (0 < local_3c) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      FUN_1407de492(*(longlong *)(param_1 + 0x18) + lVar4,param_2,&LAB_140208388);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x70;
    } while (lVar3 < local_3c);
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x28);
  FUN_1468583ba(param_1 + 0x30,param_2);
  FUN_147001d9c(param_2,param_1 + 0xe8);
  FUN_1470020fa(param_2,param_1 + 0xf8);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feafbe FUN_146feafbe body=66 status=ok
// SIG undefined FUN_146feafbe(void)

void FUN_146feafbe(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147002472(param_1,iVar1);
  }
  FUN_147002457((longlong)iVar1 * 0x18 + *param_1,param_2);
  return;
}



// FUNCTION 146feb000 FUN_146feb000 body=1200 status=ok
// SIG undefined FUN_146feb000(void)

longlong FUN_146feb000(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  LPCRITICAL_SECTION local_e8;
  LPCRITICAL_SECTION local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar10 = 0x38;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar10 = 0;
  }
  lVar6 = FUN_146fe7c2e(*(undefined8 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    UNLOCK();
  }
  local_e0 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_e0);
  local_e8 = (LPCRITICAL_SECTION)(param_1 + 0x30);
  EnterCriticalSection(local_e8);
  lVar7 = FUN_146feb4b2(*(undefined8 *)(param_1 + 0x98));
  lVar10 = lVar6 + lVar10 + lVar7 + (longlong)*(int *)(param_1 + 0xac) * 8 + 0x220;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  iVar9 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar9 != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa0);
    lVar7 = 0;
    do {
      lVar10 = lVar10 + 0x70;
      FUN_14685b510(&local_a8,*(longlong *)(lVar6 + lVar7) + 0x40);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar9 * 8 != lVar7);
  }
  lVar6 = thunk_FUN_146858244();
  local_f0 = FUN_14685b5a6(&local_a8);
  local_108 = local_58;
  local_b8 = 0;
  local_b0 = *(int *)(param_1 + 200);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  if (local_b0 == 0) {
    local_ac = 0;
    lVar7 = 0;
    iVar9 = 0;
  }
  else {
    FUN_147002776(&local_b8,local_b0);
    FUN_1470027db(local_b8,uVar5);
    lVar7 = (longlong)local_ac * 0xe8;
    iVar9 = 0;
    if ((longlong)local_b0 != 0) {
      lVar8 = 0;
      do {
        lVar7 = lVar7 + (longlong)*(int *)(local_b8 + 0xcc + lVar8) * 0xc +
                (longlong)*(int *)(local_b8 + 0xdc + lVar8) * 0x20 +
                (longlong)*(int *)(local_b8 + 0x8c + lVar8) * 8;
        lVar8 = lVar8 + 0xe8;
        iVar9 = local_b0;
      } while ((longlong)local_b0 * 0xe8 - lVar8 != 0);
    }
  }
  FUN_146ffe131(local_b8,iVar9);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_c8 = 0;
  local_c0 = *(int *)(param_1 + 0xe8);
  uVar5 = *(undefined8 *)(param_1 + 0xe0);
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    FUN_140b856de(&local_c8,local_c0,0);
    FUN_140b8566a(local_c8,uVar5);
  }
  local_f8 = FUN_142acbe90(&local_c8);
  local_100 = (longlong)*(int *)(param_1 + 0xfc);
  iVar9 = *(int *)(param_1 + 0x10c);
  iVar1 = *(int *)(param_1 + 0x11c);
  local_d8 = 0;
  local_d0 = *(int *)(param_1 + 0x130);
  uVar5 = *(undefined8 *)(param_1 + 0x128);
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    FUN_140b856de(&local_d8,local_d0,0);
    FUN_140b8566a(local_d8,uVar5);
  }
  lVar8 = FUN_142acbe90(&local_d8);
  lVar10 = lVar6 + lVar10 + local_f0 + local_108 + local_f8 + (longlong)iVar9 * 0x10 + lVar8 + lVar7
           + (longlong)DAT_14c99d68c * 2 +
           (iVar1 + local_100 + (longlong)*(int *)(param_1 + 0x16c)) * 8;
  if ((longlong)*(int *)(param_1 + 0x168) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x160) + lVar6);
      lVar10 = (longlong)*(int *)(lVar7 + 0x24) * 0x70 + lVar10 +
               (longlong)*(int *)(lVar7 + 0xf4) * 0xc + (longlong)*(int *)(lVar7 + 0x104) * 0x20 +
               (longlong)*(int *)(lVar7 + 0xb4) * 8 + 0x110;
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(param_1 + 0x168) * 8 != lVar6);
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x17c) * 0x10 + lVar10;
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    lVar6 = 0;
    do {
      lVar10 = lVar10 + (longlong)*(int *)(*(longlong *)(param_1 + 0x170) + lVar6) * 0x110;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != lVar6);
  }
  local_108 = (longlong)*(int *)(param_1 + 0x18c);
  iVar9 = *(int *)(param_1 + 0x1ac);
  iVar1 = *(int *)(param_1 + 0x1fc);
  uVar2 = *(uint *)(param_1 + 0x1c8);
  iVar3 = *(int *)(param_1 + 0x1dc);
  uVar4 = *(uint *)(param_1 + 0x218);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_a8);
  LeaveCriticalSection(local_e8);
  LeaveCriticalSection(local_e0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    UNLOCK();
  }
  lVar6 = (longlong)(int)uVar2 << 2;
  if (uVar2 < 2) {
    lVar6 = 0;
  }
  lVar7 = (longlong)(int)uVar4 << 2;
  if (uVar4 < 2) {
    lVar7 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10 + (ulonglong)(iVar9 + 0x1fU >> 5) * 4 + lVar6 + (iVar3 + local_108) * 0x18 +
         (ulonglong)(iVar1 + 0x1fU >> 5) * 4 + lVar7;
}



// FUNCTION 146feb4b2 FUN_146feb4b2 body=172 status=ok
// SIG undefined FUN_146feb4b2(void)

longlong FUN_146feb4b2(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *(uint *)(param_1 + 0x3c);
  lVar1 = (longlong)(int)(*(uint *)(param_1 + 0x38) + 1) * 0x30;
  if (*(uint *)(param_1 + 0x40) != uVar2) {
    do {
      lVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 0x38)) * 0x30;
      lVar1 = lVar1 + ((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x1c + lVar3) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc + lVar3)) * 2;
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_1 + 0x40) != uVar2);
  }
  lVar3 = FUN_146fec6b2(param_1);
  uVar2 = *(uint *)(param_1 + 0x54);
  lVar1 = (longlong)(int)(*(uint *)(param_1 + 0x50) + 1) * 0x30 + lVar3 + lVar1;
  if (*(uint *)(param_1 + 0x58) != uVar2) {
    do {
      lVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 0x50)) * 0x30;
      lVar1 = lVar1 + ((longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x1c + lVar3) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0xc + lVar3)) * 2;
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_1 + 0x58) != uVar2);
  }
  return lVar1;
}



// FUNCTION 146feb55e FUN_146feb55e body=358 status=ok
// SIG undefined FUN_146feb55e(void)

void FUN_146feb55e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0xffffffff;
  local_58 = local_58 & 0xffffffff00000000;
  iVar7 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c);
  if (iVar7 != 0) {
    uVar1 = (ulonglong)(iVar7 + -1 + (uint)(iVar7 == 0)) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    FUN_147002a7a(&local_68,1 << ((byte)lVar4 & 0x1f));
    iVar7 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar7 != iVar2) {
      iVar8 = 0;
      do {
        FUN_146febf1e(&local_68,
                      (ulonglong)(*(int *)(param_1 + 0x3c) + iVar8 & *(uint *)(param_1 + 0x38)) *
                      0x30 + *(longlong *)(param_1 + 0x30));
        iVar8 = iVar8 + 1;
      } while (iVar7 - iVar2 != iVar8);
    }
  }
  local_38 = local_58;
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x34) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x3c) = uStack_60._4_4_;
  *(ulonglong *)(param_1 + 0x40) = local_58;
  local_68 = uVar5;
  uStack_60 = uVar6;
  local_58 = uVar3;
  FUN_146fec5a2(&local_68,*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54));
  iVar7 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar7 != iVar2) {
    iVar8 = 0;
    do {
      FUN_146febf1e(&local_68,
                    (ulonglong)(*(int *)(param_1 + 0x54) + iVar8 & *(uint *)(param_1 + 0x50)) * 0x30
                    + *(longlong *)(param_1 + 0x48));
      iVar8 = iVar8 + 1;
    } while (iVar7 - iVar2 != iVar8);
  }
  local_38 = local_58;
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x4c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_60;
  *(undefined4 *)(param_1 + 0x54) = uStack_60._4_4_;
  *(ulonglong *)(param_1 + 0x58) = local_58;
  local_68 = uVar5;
  uStack_60 = uVar6;
  local_58 = uVar3;
  FUN_146fec5f0(param_1);
  FUN_146fec652(&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feb6c6 FUN_146feb6c6 body=205 status=ok
// SIG undefined FUN_146feb6c6(void)

void FUN_146feb6c6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *param_3;
  local_30 = (int)param_3[1];
  local_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  if (0 < (longlong)local_30) {
    local_30 = local_30 - (uint)(*(short *)(local_38 + -2 + (longlong)local_30 * 2) == 0x2f);
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fea266(local_48);
  FUN_146fe80d2(uVar1,local_48,&local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x157) != '\0') {
    *(undefined4 *)(param_1 + 0x155) = 0x1000000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feb794 FUN_146feb794 body=105 status=ok
// SIG undefined FUN_146feb794(void)

void FUN_146feb794(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fea266(local_28);
  FUN_146fe862c(uVar1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feb7fe FUN_146feb7fe body=675 status=ok
// SIG undefined FUN_146feb7fe(void)

void FUN_146feb7fe(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_448 [32];
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_410;
  undefined8 local_408;
  undefined1 *local_400;
  undefined4 local_3f8;
  longlong local_3f0 [2];
  undefined1 *local_3e0;
  int local_3d8;
  undefined8 local_3d0;
  int local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  undefined1 **local_3b0;
  char local_3a8;
  undefined1 local_3a0 [256];
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 **local_290;
  char local_288;
  undefined1 local_280 [256];
  undefined1 *local_180;
  undefined1 *local_178;
  ulonglong *local_170;
  char local_168;
  undefined1 local_160 [256];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_180 = local_160;
  local_168 = '\0';
  local_170 = local_60;
  local_2a0 = local_280;
  local_288 = '\0';
  local_290 = &local_180;
  local_3c0 = local_3a0;
  local_3a8 = '\0';
  local_3b0 = &local_2a0;
  local_410 = param_1;
  local_3b8 = local_3c0;
  local_298 = local_2a0;
  local_178 = local_180;
  if ((longlong)(int)param_2[1] != 0) {
    puVar4 = (undefined8 *)*param_2 + (longlong)(int)param_2[1] * 2;
    bVar5 = true;
    puVar7 = (undefined8 *)*param_2;
    do {
      while( true ) {
        puVar6 = puVar7 + 2;
        local_3d0 = *puVar7;
        local_3c8 = *(int *)(puVar7 + 1) + -1;
        if (*(int *)(puVar7 + 1) == 0) {
          local_3c8 = 0;
        }
        local_428 = 0;
        uStack_420 = 0;
        cVar2 = FUN_1411bb394(&local_3d0,&local_180,&local_2a0,&local_3c0);
        if (cVar2 != '\0') break;
        puVar3 = puVar7 + 2;
        puVar7 = puVar6;
        if (puVar3 == puVar4) {
          if (bVar5) goto LAB_146feb962;
          goto LAB_146feb934;
        }
      }
      local_3d8 = (int)((ulonglong)((longlong)local_178 - (longlong)local_180) >> 1);
      if (0 < local_3d8) {
        local_3d8 = local_3d8 -
                    (uint)(*(short *)(local_180 + ((ulonglong)(uint)(local_3d8 * 2) - 2)) == 0x2f);
      }
      local_408 = *(undefined8 *)(local_410 + 0x88);
      local_3e0 = local_180;
      local_400 = local_2a0;
      local_3f8 = (undefined4)((ulonglong)((longlong)local_298 - (longlong)local_2a0) >> 1);
      FUN_146fea266(local_3f0,&local_400);
      FUN_146fe80d2(local_408,local_3f0,&local_3e0);
      if (local_3f0[0] != 0) {
        FUN_1400020a8();
      }
      bVar5 = false;
      puVar7 = puVar6;
    } while (puVar6 != puVar4);
LAB_146feb934:
    lVar1 = local_410;
    lpCriticalSection = (LPCRITICAL_SECTION)(local_410 + 0x30);
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)(lVar1 + 0x157) != '\0') {
      *(undefined4 *)(lVar1 + 0x155) = 0x1000000;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_146feb962:
  if (local_3a8 == '\x01') {
    FUN_1400020a8(local_3c0);
  }
  if (local_288 == '\x01') {
    FUN_1400020a8(local_2a0);
  }
  if (local_168 == '\x01') {
    FUN_1400020a8(local_180);
  }
  if ((local_60[0] ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146febaa2 FUN_146febaa2 body=422 status=ok
// SIG undefined FUN_146febaa2(void)

void FUN_146febaa2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  uint local_68;
  undefined4 local_64;
  undefined1 local_4c [4];
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140056680(&local_70,&DAT_149dfb77a);
  cVar1 = FUN_1404d3cb6(param_2,&local_38,&local_70);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    local_48 = local_38;
    local_40 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      local_40 = 0;
    }
    FUN_146fea266(&local_70);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_38 = local_70;
    uStack_30 = CONCAT44(local_64,local_68);
    if (1 < local_68) {
      FUN_142ac87da(*(undefined8 *)(param_1 + 0x88),&local_38);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      if (*(char *)(param_1 + 0x157) != '\0') {
        *(undefined4 *)(param_1 + 0x155) = 0x1000000;
      }
      local_80 = local_38;
      local_78 = (int)uStack_30 + -1;
      if ((int)uStack_30 == 0) {
        local_78 = 0;
      }
      FUN_146fe7788(&local_70);
      local_88 = 1;
      local_90 = &local_70;
      FUN_146fea804(param_1,&local_90,1,local_4c);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146febc4a FUN_146febc4a body=166 status=ok
// SIG undefined FUN_146febc4a(void)

void FUN_146febc4a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_146fea266(&local_30);
  if (1 < local_28) {
    FUN_146fe7ae4(*(undefined8 *)(param_1 + 0x88),&local_30,param_3);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    if (*(char *)(param_1 + 0x157) != '\0') {
      *(undefined4 *)(param_1 + 0x155) = 0x1000000;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146febcf2 FUN_146febcf2 body=114 status=ok
// SIG undefined FUN_146febcf2(void)

void FUN_146febcf2(undefined8 param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146fe8f9c();
  if (param_3 == '\0') {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    lVar1 = FUN_146fec20c(param_1);
    if (lVar1 != 0) {
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



// FUNCTION 146febd78 FUN_146febd78 body=131 status=ok
// SIG undefined FUN_146febd78(void)

void FUN_146febd78(longlong param_1,undefined4 *param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146fe8f9c();
  if (param_3 == '\0') {
    FUN_1412a5ca6(local_30,param_2);
    lVar1 = FUN_146fec20c(param_1,local_30);
    if (lVar1 != 0) {
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      FUN_146fec448(lVar1,param_1 + 0x30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146febdfc FUN_146febdfc body=133 status=ok
// SIG undefined FUN_146febdfc(void)

undefined4 FUN_146febdfc(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146fea266();
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  uVar2 = FUN_146fe7b92(uVar1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146febe82 FUN_146febe82 body=156 status=ok
// SIG undefined FUN_146febe82(void)

ulonglong FUN_146febe82(longlong *param_1)

{
  uint uVar1;
  wchar_t *_Str;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar7 = 0;
  do {
    _Str = *(wchar_t **)((longlong)&PTR_u__verse_149fc4080 + lVar7);
    uVar2 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar4 = wcslen(_Str);
      uVar2 = (uint)sVar4;
    }
    uVar5 = uVar1;
    if ((int)uVar2 < (int)uVar1) {
      uVar5 = uVar2;
    }
    uVar6 = 0;
    if (0 < (int)uVar5) {
      uVar6 = uVar5;
    }
    if (uVar2 == uVar6) {
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      if ((uVar2 == 0) || ((int)uVar5 < 1)) goto LAB_146febf0b;
      iVar3 = FUN_144a54874(_Str,*param_1 + (longlong)(int)uVar1 * 2 + (ulonglong)uVar2 * -2);
      if (iVar3 == 0) goto LAB_146febf0b;
    }
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x10);
  unaff_RBX = 0;
LAB_146febf0b:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 146febf1e FUN_146febf1e body=143 status=ok
// SIG undefined FUN_146febf1e(void)

void FUN_146febf1e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_147002812();
  uVar1 = *(uint *)(param_1 + 2);
  *(uint *)(param_1 + 2) = uVar1 + 1;
  lVar2 = *param_1;
  lVar3 = (ulonglong)(uVar1 & *(uint *)(param_1 + 1)) * 0x30;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar2 + 0x1c + lVar3) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined2 *)(lVar2 + 0x28 + lVar3) = *(undefined2 *)(param_2 + 5);
  *(undefined8 *)(lVar2 + 0x20 + lVar3) = param_2[4];
  return;
}



// FUNCTION 146febfae FUN_146febfae body=159 status=ok
// SIG undefined FUN_146febfae(void)

undefined8 FUN_146febfae(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2[2] != 0) {
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_144907528(&local_58,&local_30,&local_40);
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
    uVar1 = FUN_146fec7da(param_1);
    local_78 = (undefined4)local_40;
    uStack_74 = local_40._4_4_;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    param_1 = FUN_146febfae(uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fec04e FUN_146fec04e body=142 status=ok
// SIG undefined FUN_146fec04e(void)

void FUN_146fec04e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_147002812();
  uVar2 = *(int *)((longlong)param_1 + 0xc) - 1;
  *(uint *)((longlong)param_1 + 0xc) = uVar2;
  lVar1 = *param_1;
  lVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 1)) * 0x30;
  *(undefined8 *)(lVar1 + lVar3) = 0;
  *(undefined8 *)(lVar1 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar1 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar1 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar1 + 0x1c + lVar3) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined2 *)(lVar1 + 0x28 + lVar3) = *(undefined2 *)(param_2 + 5);
  *(undefined8 *)(lVar1 + 0x20 + lVar3) = param_2[4];
  return;
}



// FUNCTION 146fec0dc FUN_146fec0dc body=148 status=ok
// SIG undefined FUN_146fec0dc(void)

undefined8 * FUN_146fec0dc(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (ulonglong)(*(uint *)(param_1 + 1) & *(uint *)((longlong)param_1 + 0xc)) * 0x30;
  *param_2 = *(undefined8 *)(lVar1 + lVar2);
  *(undefined8 *)(lVar1 + lVar2) = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 8 + lVar2);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0xc + lVar2);
  *(undefined8 *)(lVar1 + 8 + lVar2) = 0;
  param_2[2] = *(undefined8 *)(lVar1 + 0x10 + lVar2);
  *(undefined8 *)(lVar1 + 0x10 + lVar2) = 0;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar1 + 0x18 + lVar2);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(lVar1 + 0x1c + lVar2);
  *(undefined8 *)(lVar1 + 0x18 + lVar2) = 0;
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(lVar1 + 0x28 + lVar2);
  param_2[4] = *(undefined8 *)(lVar1 + 0x20 + lVar2);
  FUN_147002908(param_1,*(int *)((longlong)param_1 + 0xc),*(int *)((longlong)param_1 + 0xc) + 1);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return param_2;
}



// FUNCTION 146fec170 FUN_146fec170 body=156 status=ok
// SIG undefined FUN_146fec170(void)

void FUN_146fec170(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar3 = iVar1 + 1;
  *(uint *)(param_1 + 0x18) = uVar3;
  if (*(uint *)(param_1 + 0x1c) < uVar3) {
    FUN_146fffeea((longlong *)(param_1 + 0x10));
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar4) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(lVar2 + 0x18 + lVar4) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(lVar2 + 0x1c + lVar4) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(undefined2 *)(lVar2 + 0x28 + lVar4) = *(undefined2 *)(param_2 + 5);
  *(undefined8 *)(lVar2 + 0x20 + lVar4) = param_2[4];
  return;
}



// FUNCTION 146fec20c FUN_146fec20c body=169 status=ok
// SIG undefined FUN_146fec20c(void)

undefined8 FUN_146fec20c(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_1;
  if (param_2[2] != 0) {
    uVar2 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_144907528(&local_58,&local_30);
    local_68 = (undefined4)local_30;
    uStack_64 = local_30._4_4_;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
    lVar1 = FUN_146fec8f8(param_1);
    if (lVar1 != 0) {
      local_78 = (undefined4)local_40;
      uStack_74 = local_40._4_4_;
      uStack_70 = uStack_38;
      uStack_6c = uStack_34;
      uVar2 = FUN_146fec20c(lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146fec2b6 FUN_146fec2b6 body=363 status=ok
// SIG undefined FUN_146fec2b6(void)

void FUN_146fec2b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined2 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar9 = (longlong)iVar8 * 0x30;
      puVar1 = (undefined8 *)(lVar3 + -0x30 + lVar9);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + -0x20 + lVar9);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + -0x30 + lVar9);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar3 + -0x20 + lVar9);
      *puVar1 = 0;
      puVar1[1] = 0;
      local_68 = *(undefined2 *)(lVar3 + -8 + lVar9);
      local_70 = *(undefined8 *)(lVar3 + -0x10 + lVar9);
      FUN_147000894(param_1 + 0x10,*(int *)(param_1 + 0x18) + -1);
      FUN_147002812(param_2);
      uVar2 = *(uint *)(param_2 + 2);
      *(uint *)(param_2 + 2) = uVar2 + 1;
      lVar3 = *param_2;
      lVar9 = (ulonglong)(uVar2 & *(uint *)(param_2 + 1)) * 0x30;
      *(undefined8 *)(lVar3 + lVar9) = uVar4;
      ((undefined8 *)(lVar3 + lVar9))[1] = uVar5;
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(lVar3 + 0x20 + lVar9) = local_70;
      *(undefined2 *)(lVar3 + 0x28 + lVar9) = local_68;
      iVar8 = *(int *)(param_1 + 0x18);
    } while (iVar8 != 0);
  }
  uVar10 = (ulonglong)*(int *)(param_1 + 0x28);
  if (0 < (longlong)uVar10) {
    uVar10 = uVar10 + 1;
    do {
      lVar3 = *(longlong *)(param_1 + 0x20);
      FUN_146fec2b6(*(undefined8 *)(lVar3 + -0x10 + uVar10 * 8),param_2);
      if (*(longlong *)(lVar3 + -0x10 + uVar10 * 8) != 0) {
        *(undefined8 *)(lVar3 + -0x10 + uVar10 * 8) = 0;
        FUN_1470029b8();
      }
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x28);
  }
  FUN_14700000d(*(undefined8 *)(param_1 + 0x20),uVar10 & 0xffffffff);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
}



// FUNCTION 146fec448 FUN_146fec448 body=344 status=ok
// SIG undefined FUN_146fec448(void)

void FUN_146fec448(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_68;
  int local_60;
  undefined1 local_58 [8];
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  FUN_140fede38(local_58,param_3,1);
  iVar5 = *(int *)(param_3 + 1);
  iVar6 = iVar5 - local_50;
  if (iVar5 <= iVar5 - local_50) {
    iVar6 = iVar5;
  }
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  local_9c = *(int *)(param_1 + 0x18);
  if (0 < local_9c) {
    local_90 = *param_3;
    plVar7 = (longlong *)(param_1 + 0x10);
    iVar5 = 0;
    do {
      lVar2 = *plVar7;
      lVar8 = (longlong)iVar5 * 0x30;
      local_68 = local_90;
      uVar3 = *(undefined8 *)(lVar2 + lVar8);
      iVar1 = *(int *)(lVar2 + 8 + lVar8);
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      local_88 = uVar3;
      local_80 = iVar9;
      local_60 = iVar6;
      FUN_140fede38(local_58,&local_88,1);
      local_70 = iVar9 - local_50;
      if (iVar9 <= iVar9 - local_50) {
        local_70 = iVar9;
      }
      if (local_70 < 1) {
        local_70 = 0;
      }
      local_78 = uVar3;
      cVar4 = FUN_146819142(&local_78,&local_68);
      if (cVar4 == '\0') {
        iVar5 = iVar5 + 1;
      }
      else {
        FUN_146febf1e(local_98,lVar2 + lVar8);
        FUN_147000894(plVar7,iVar5);
        FUN_1470008fe(plVar7);
        local_9c = local_9c + -1;
      }
    } while (iVar5 < local_9c);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fec5a2 FUN_146fec5a2 body=77 status=ok
// SIG undefined FUN_146fec5a2(void)

void FUN_146fec5a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_147002908(param_1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0xc) = 0;
  uVar1 = (ulonglong)(param_2 + -1 + (uint)(param_2 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (param_2 == 0) {
    iVar3 = 0;
  }
  FUN_147002a7a(param_1,iVar3);
  return;
}



// FUNCTION 146fec5f0 FUN_146fec5f0 body=98 status=ok
// SIG undefined FUN_146fec5f0(void)

void FUN_146fec5f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
    FUN_146fffb7a(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != *(int *)(param_1 + 0x28)) {
    FUN_147002a1a((longlong *)(param_1 + 0x20));
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      FUN_146fec5f0(*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 146fec652 FUN_146fec652 body=96 status=ok
// SIG undefined FUN_146fec652(void)

void FUN_146fec652(longlong *param_1)

{
  FUN_147002908(param_1,*(undefined4 *)((longlong)param_1 + 0xc),(int)param_1[2]);
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  FUN_1446f8d3c(param_1,0,0,0x30,8);
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fec6b2 FUN_146fec6b2 body=144 status=ok
// SIG undefined FUN_146fec6b2(void)

longlong FUN_146fec6b2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x1c) * 0x30;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar4 = 0;
    do {
      lVar3 = lVar3 + ((longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x1c + lVar4) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0xc + lVar4)) * 2;
      lVar4 = lVar4 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x30 != lVar4);
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x28);
  lVar3 = lVar3 + (longlong)*(int *)(param_1 + 0x2c) * 8 + lVar4 * 0x30;
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    do {
      lVar2 = FUN_146fec6b2(*(undefined8 *)(lVar1 + lVar5));
      lVar3 = lVar3 + lVar2;
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  return lVar3;
}



// FUNCTION 146fec742 FUN_146fec742 body=150 status=ok
// SIG undefined FUN_146fec742(void)

longlong * FUN_146fec742(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14006620a(&local_28,*param_2,*(undefined4 *)(param_2 + 1));
  if (&local_28 == param_1) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fec7da FUN_146fec7da body=284 status=ok
// SIG undefined FUN_146fec7da(void)

undefined8 * FUN_146fec7da(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  uVar4 = FUN_146fec986();
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar6 = (ulonglong)uVar4;
  if (uVar4 != *(uint *)(param_1 + 0x28)) {
    local_68 = *param_2;
    uStack_64 = param_2[1];
    uStack_60 = param_2[2];
    uStack_5c = param_2[3];
    puVar5 = *(undefined8 **)(*plVar1 + uVar6 * 8);
    local_78 = *puVar5;
    local_70 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      local_70 = 0;
    }
    cVar3 = FUN_146819142();
    if (cVar3 != '\0') goto LAB_146fec883;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_146fec742(puVar5);
  iVar2 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  if (*(int *)(param_1 + 0x2c) == iVar2) {
    FUN_147002d5a(plVar1,iVar2);
  }
  memmove((void *)(*plVar1 + uVar6 * 8 + 8),(void *)(*plVar1 + uVar6 * 8),
          (ulonglong)(iVar2 - uVar4) << 3);
  *(undefined8 **)(*plVar1 + uVar6 * 8) = puVar5;
LAB_146fec883:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 146fec8f8 FUN_146fec8f8 body=141 status=ok
// SIG undefined FUN_146fec8f8(void)

undefined8 * FUN_146fec8f8(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar3 = FUN_146fec986();
  puVar4 = (undefined8 *)0x0;
  if (uVar3 != *(uint *)(param_1 + 0x28)) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar3 * 8);
    local_58 = *puVar1;
    local_50 = *(int *)(puVar1 + 1) + -1;
    if (*(int *)(puVar1 + 1) == 0) {
      local_50 = 0;
    }
    cVar2 = FUN_146819142();
    if (cVar2 != '\0') {
      puVar4 = puVar1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 146fec986 FUN_146fec986 body=188 status=ok
// SIG undefined FUN_146fec986(void)

int FUN_146fec986(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)*(uint *)(param_1 + 0x28) < 1) {
    iVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x20);
    iVar7 = 0;
    uVar8 = *(uint *)(param_1 + 0x28);
    do {
      uVar1 = (uVar8 >> 1) + iVar7;
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      puVar4 = *(undefined8 **)(lVar3 + (ulonglong)uVar1 * 8);
      local_68 = *puVar4;
      iVar2 = *(int *)(puVar4 + 1);
      local_60 = 0;
      if (iVar2 != 0) {
        local_60 = iVar2 + -1;
      }
      cVar6 = FUN_14490770e(&local_68,&local_58);
      if (cVar6 != '\0') {
        iVar7 = uVar1 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fecafa FUN_146fecafa body=82 status=ok
// SIG undefined FUN_146fecafa(void)

void FUN_146fecafa(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  FUN_1470029b8(*(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8));
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_147002de0(param_1);
  return;
}



// FUNCTION 146fecb4c FUN_146fecb4c body=279 status=ok
// SIG undefined FUN_146fecb4c(void)

void FUN_146fecb4c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  FUN_146feccf4(param_2,param_1 + 0x60);
  lVar1 = param_1 + 8;
  lVar2 = param_1 + 0x28;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_144a81a4c(&local_50);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = lVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(local_78 + 0x10);
      if (*(longlong *)(local_78 + 0x10) == 0) {
        lVar3 = local_78;
      }
      FUN_146fecb4c(*(undefined8 *)(lVar3 + (longlong)iStack_5c * 0x10),param_2);
      local_60 = local_60 & ~uStack_6c;
      FUN_144a81a4c(&local_70);
    } while (local_78 != lVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fecc64 FUN_146fecc64 body=143 status=ok
// SIG undefined FUN_146fecc64(void)

void FUN_146fecc64(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar3 + ((longlong)
                              (int)(((uint)param_2 << 0x10 | uVar4) +
                                    (int)((ulonglong)param_2 >> 0x20) +
                                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = param_1;
      }
      do {
        if (**(longlong **)(lVar3 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_147002e7c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + lVar3 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 146feccf4 FUN_146feccf4 body=358 status=ok
// SIG undefined FUN_146feccf4(void)

void FUN_146feccf4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
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
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar5 = (*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x3c)) + uVar2;
  if (uVar2 < uVar5) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_144732142(param_1,uVar5);
    iVar3 = 1;
    if (3 < uVar5) {
      uVar2 = (uVar5 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_144869b4a(param_1);
    }
  }
  lVar1 = param_2 + 0x20;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar1;
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_144a81a4c(&local_50);
    iVar3 = *(int *)(param_2 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar1)) {
    do {
      lVar4 = *(longlong *)(local_78 + 0x10);
      if (*(longlong *)(local_78 + 0x10) == 0) {
        lVar4 = local_78;
      }
      FUN_144a13f80(param_1,&local_50,(longlong)iStack_5c * 0x10 + lVar4,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_144a81a4c(&local_70);
    } while (local_78 != param_2 || (CONCAT44(uStack_64,uStack_68) != lVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fece5c FUN_146fece5c body=63 status=ok
// SIG undefined FUN_146fece5c(void)

void FUN_146fece5c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x50)) {
    FUN_145c17b74(param_1);
    *(undefined4 *)(param_1 + 0x50) = 1;
    FUN_147003072(param_1);
    return;
  }
  FUN_147002f26(param_1);
  FUN_145c17b74(param_1);
  return;
}



// FUNCTION 146fece9c FUN_146fece9c body=63 status=ok
// SIG undefined FUN_146fece9c(void)

void FUN_146fece9c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x50)) {
    FUN_145c17c12(param_1);
    *(undefined4 *)(param_1 + 0x50) = 1;
    FUN_146ffba50(param_1);
    return;
  }
  FUN_147003258(param_1);
  FUN_145c17c12(param_1);
  return;
}



// FUNCTION 146fecedc FUN_146fecedc body=204 status=ok
// SIG undefined FUN_146fecedc(void)

void FUN_146fecedc(longlong *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  void *_Src;
  
  FUN_1470033d6(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14700348c(param_1,iVar2);
      }
      lVar3 = *param_1;
      lVar4 = (longlong)iVar2 * 0x90;
      pvVar1 = (void *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + 0x80 + lVar4) = 0;
      iVar2 = *(int *)((longlong)param_2 + 0x88);
      _Src = *(void **)((longlong)param_2 + 0x80);
      *(int *)(lVar3 + 0x88 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)pvVar1 + 0x8c) = 0x10;
      }
      else {
        if (_Src == (void *)0x0) {
          _Src = param_2;
        }
        FUN_147003520(pvVar1,iVar2,0);
        _Dst = *(void **)((longlong)pvVar1 + 0x80);
        if (*(void **)((longlong)pvVar1 + 0x80) == (void *)0x0) {
          _Dst = pvVar1;
        }
        memcpy(_Dst,_Src,(longlong)iVar2 << 3);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146fecfa8 FUN_146fecfa8 body=181 status=ok
// SIG undefined FUN_146fecfa8(void)

void FUN_146fecfa8(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1402ac1b3(param_2,&local_38);
  if (((((int)local_38 == DAT_14c99d6b8) && (local_38._4_4_ == DAT_14c99d6bc)) &&
      ((int)uStack_30 == DAT_14c99d6c0)) && (uStack_30._4_4_ == DAT_14c99d6c4)) {
    FUN_146ffa660(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1470039b0(param_1,0);
    }
    FUN_147004402(param_2,param_1);
  }
  else {
    FUN_14572541c(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fed05e FUN_146fed05e body=251 status=ok
// SIG undefined FUN_146fed05e(void)

void FUN_146fed05e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  if (1 < *(int *)(param_1 + 0x58)) {
    lVar4 = 0;
    while( true ) {
      uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x50) + lVar4);
      uVar7 = (ulonglong)uVar6;
      uVar8 = *(ushort *)((longlong)L"<EmptyVolume>" + lVar4);
      if (uVar6 != uVar8) break;
      if (uVar6 == 0) goto LAB_146fed06d;
LAB_146fed0b5:
      lVar4 = lVar4 + 2;
    }
    if ((uVar8 | uVar6) < 0x80) {
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar9 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_146fed0b5;
    }
    if (uVar6 != uVar8) {
      plVar2 = (longlong *)FUN_1400dbadc();
      plVar3 = (longlong *)*plVar2;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_140e92164();
        *plVar2 = (longlong)plVar3;
      }
      if (*(int *)(param_1 + 0x58) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x50);
      }
      iVar1 = (**(code **)(*plVar3 + 0x150))
                        (plVar3,puVar5,param_1 + 0x90,param_1 + 0x98,param_1 + 0x80);
      *(bool *)(param_1 + 0xa0) = iVar1 == 0;
      if (*(longlong *)(param_1 + 0x68) != -1) {
        return;
      }
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x98);
      return;
    }
  }
LAB_146fed06d:
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  return;
}



// FUNCTION 146fed15a FUN_146fed15a body=140 status=ok
// SIG undefined FUN_146fed15a(void)

ulonglong FUN_146fed15a(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [56];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147004f64(param_1,local_70);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_28);
  uVar1 = uVar2 & 0xffffffff;
  if (local_28 == 1) {
    FUN_147005040(param_2,local_70);
    uVar1 = (ulonglong)local_28;
  }
  if ((uVar1 & 1) != 0) {
    FUN_146fedb88(local_60);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fed1e8 FUN_146fed1e8 body=153 status=ok
// SIG undefined FUN_146fed1e8(void)

/* WARNING: Removing unreachable block (ram,0x000146fed25c) */

ulonglong FUN_146fed1e8(undefined8 param_1,longlong *param_2)

{
  undefined8 unaff_RBX;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470050ae(param_1,&local_50);
  if (local_28 == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_50;
    local_50 = 0;
    *(undefined4 *)(param_2 + 1) = local_48;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
    *(undefined4 *)(param_2 + 4) = local_30;
    *(undefined4 *)(param_2 + 2) = local_40;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
    *(undefined4 *)(param_2 + 3) = uStack_38;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_34;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_28) & 0xffffffff;
}



// FUNCTION 146fed282 FUN_146fed282 body=627 status=ok
// SIG undefined FUN_146fed282(void)

longlong FUN_146fed282(longlong *param_1,undefined4 *param_2)

{
  undefined2 **ppuVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar7 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_140a8f91e(&local_88,&local_68);
  FUN_14006620a(&local_58,local_68);
  local_98 = local_58;
  local_90 = local_50;
  local_8c = local_4c;
  if (local_50 < 2) {
    FUN_14020fad6(&local_98,L"<EmptyVolume>");
  }
  uVar12 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  if (0 < (int)uVar12) {
    puVar6 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar6 = local_98;
    }
    uVar7 = 0;
    uVar11 = (ulonglong)uVar12;
    uVar14 = uVar12;
    do {
      uVar11 = uVar11 >> 1;
      uVar13 = (uint)uVar11 + (int)uVar7;
      lVar17 = (ulonglong)uVar13 * 0xb8;
      puVar15 = &DAT_149dfb77a;
      if (*(int *)(lVar9 + 8 + lVar17) != 0) {
        puVar15 = *(undefined2 **)(lVar9 + lVar17);
      }
      lVar17 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar15 + lVar17);
        uVar16 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)puVar6 + lVar17);
        uVar8 = (uint)uVar3;
        if (uVar2 != uVar3) break;
        if (uVar2 == 0) goto LAB_146fed3b0;
LAB_146fed381:
        lVar17 = lVar17 + 2;
      }
      if ((uVar3 | uVar2) < 0x80) {
        uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_146fed381;
      }
      if ((int)(uVar16 - uVar8) < 0) {
        uVar7 = (ulonglong)(uVar13 + (uVar14 & 1));
      }
LAB_146fed3b0:
      bVar4 = 1 < uVar14;
      uVar14 = (uint)uVar11;
    } while (bVar4);
  }
  if ((int)uVar7 < (int)uVar12) {
    lVar17 = uVar7 * 0xb8;
    puVar6 = &DAT_149dfb77a;
    if (*(int *)(lVar9 + 8 + lVar17) != 0) {
      puVar6 = *(undefined2 **)(lVar9 + lVar17);
    }
    puVar15 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar15 = local_98;
    }
    lVar10 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)puVar15 + lVar10);
      uVar12 = (uint)uVar2;
      uVar3 = *(ushort *)((longlong)puVar6 + lVar10);
      uVar14 = (uint)uVar3;
      if (uVar2 != uVar3) {
        if ((uVar3 | uVar2) < 0x80) {
          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_146fed40a;
        }
        if (((int)(uVar12 - uVar14) < 0) || (lVar9 = lVar9 + lVar17 + 0x10, lVar9 == 0))
        goto LAB_146fed441;
        goto LAB_146fed45c;
      }
      if (uVar2 == 0) break;
LAB_146fed40a:
      lVar10 = lVar10 + 2;
    }
    lVar9 = lVar9 + lVar17 + 0x10;
    if (lVar9 != 0) goto LAB_146fed45c;
  }
LAB_146fed441:
  lVar9 = FUN_147005114(param_1,&local_98);
LAB_146fed45c:
  iVar5 = local_90;
  puVar6 = local_98;
  if (*(int *)(lVar9 + 0x58) < 2) {
    ppuVar1 = (undefined2 **)(lVar9 + 0x50);
    if (ppuVar1 != &local_98) {
      lVar17 = (longlong)local_90;
      *(int *)(lVar9 + 0x58) = local_90;
      if (local_90 == 0 && *(int *)(lVar9 + 0x5c) == 0) {
        *(undefined4 *)(lVar9 + 0x5c) = 0;
      }
      else {
        FUN_1446dd670(ppuVar1,local_90);
        if (iVar5 != 0) {
          memcpy(*ppuVar1,puVar6,lVar17 * 2);
        }
      }
    }
    FUN_146fed05e(lVar9);
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fed4f6 FUN_146fed4f6 body=183 status=ok
// SIG undefined FUN_146fed4f6(void)

longlong FUN_146fed4f6(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar2 = FUN_1470056e0(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    if (*param_1 + (longlong)iVar2 * 0x50 != 0) {
      lVar3 = *param_1 + (longlong)iVar2 * 0x50 + 0x10;
      goto LAB_146fed54e;
    }
  }
  FUN_14006620a(&local_30,*param_2,*(undefined4 *)(param_2 + 1));
  local_40 = local_30;
  uStack_3c = uStack_2c;
  uStack_38 = uStack_28;
  uStack_34 = uStack_24;
  lVar3 = FUN_14700578c(param_1,uVar1,&local_40);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
LAB_146fed54e:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fed5ae FUN_146fed5ae body=648 status=ok
// SIG undefined FUN_146fed5ae(void)

/* WARNING: Removing unreachable block (ram,0x000146fed7ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146fed5ae(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar5 = (int)param_2[1];
  local_f0 = param_1;
  if (iVar5 != 0) {
    do {
      lVar8 = *param_2;
      lVar6 = (longlong)iVar5 * 0x10;
      puVar1 = *(undefined2 **)(lVar8 + -0x10 + lVar6);
      *(undefined8 *)(lVar8 + -0x10 + lVar6) = 0;
      iVar5 = *(int *)(lVar8 + -8 + lVar6);
      local_cc = *(undefined4 *)(lVar8 + -4 + lVar6);
      *(undefined8 *)(lVar8 + -8 + lVar6) = 0;
      local_d8 = puVar1;
      local_d0 = iVar5;
      FUN_14101da94(param_2,(int)param_2[1] + -1);
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      uStack_98 = DAT_14c83e2e8;
      local_a8 = _DAT_14c83e2d8;
      uStack_a4 = uRam000000014c83e2dc;
      uStack_a0 = _DAT_14c83e2e0;
      uStack_9c = uRam000000014c83e2e4;
      puVar7 = puVar1;
      if (iVar5 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      uStack_94 = 0;
      iVar11 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar11 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar11,puVar7);
      iVar5 = FUN_147004332(local_f0,uVar4,&local_d8);
      if (iVar5 != -1) {
        lVar8 = *local_f0;
        FUN_1410e5bda(&local_c8,lVar8 + (longlong)iVar5 * 0x50 + 0x10);
        lVar8 = lVar8 + (longlong)iVar5 * 0x50;
        FUN_146ffbebe(&local_b8,lVar8 + 0x20);
        local_a8 = *(undefined4 *)(lVar8 + 0x30);
        uStack_a4 = *(undefined4 *)(lVar8 + 0x34);
        uStack_a0 = *(undefined4 *)(lVar8 + 0x38);
        uVar2 = *(undefined8 *)(lVar8 + 0x3d);
        uStack_9c._0_1_ = (undefined1)*(undefined4 *)(lVar8 + 0x3c);
        uStack_9c._1_3_ = (undefined3)uVar2;
        uStack_98 = (undefined4)((ulonglong)uVar2 >> 0x18);
        uStack_94 = (undefined1)((ulonglong)uVar2 >> 0x38);
        FUN_147005bd0(local_f0,iVar5);
        if ((longlong)(int)uStack_c0 != 0) {
          puVar9 = local_c8 + (longlong)(int)uStack_c0 * 2;
          puVar10 = local_c8;
          uVar2 = local_e8;
          uVar3 = local_e0;
          do {
            local_e0 = uVar3;
            local_e8 = uVar2;
            local_78 = *puVar10;
            local_70 = *(int *)(puVar10 + 1) + -1;
            if (*(int *)(puVar10 + 1) == 0) {
              local_70 = 0;
            }
            local_88 = puVar1;
            local_80 = iVar11;
            FUN_140bee87a(&local_e8,&local_88,2);
            iVar5 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
              FUN_1447a1bd6(param_2,iVar5);
            }
            lVar8 = *param_2;
            lVar6 = (longlong)iVar5 * 0x10;
            *(undefined8 *)(lVar8 + lVar6) = 0;
            *(undefined8 *)(lVar8 + lVar6) = local_e8;
            local_e8 = 0;
            uVar2 = local_e8;
            *(undefined4 *)(lVar8 + 8 + lVar6) = (undefined4)local_e0;
            *(undefined4 *)(lVar8 + 0xc + lVar6) = local_e0._4_4_;
            local_e0 = 0;
            uVar3 = local_e0;
            local_e0 = 0;
            local_e8 = 0;
            puVar10 = puVar10 + 2;
          } while (puVar10 != puVar9);
        }
      }
      FUN_146fedb88(&local_c8);
      if (puVar1 != (undefined2 *)0x0) {
        FUN_1400020a8(puVar1);
      }
      iVar5 = (int)param_2[1];
    } while (iVar5 != 0);
  }
  FUN_1447a1747(*param_2,0);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_1408be2c4(param_2,0);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fed838 FUN_146fed838 body=455 status=ok
// SIG undefined FUN_146fed838(void)

longlong FUN_146fed838(longlong *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined1 auStack_b8 [44];
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_140a8f91e(&local_88,&local_68);
  FUN_14006620a(&local_58,local_68,local_60);
  local_8c = local_50;
  uVar5 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if (0 < (int)uVar5) {
    puVar9 = local_58;
    if (local_50 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    uVar4 = 0;
    uVar8 = (ulonglong)uVar5;
    do {
      uVar12 = (int)(uVar8 >> 1) + (int)uVar4;
      lVar11 = (ulonglong)uVar12 * 0xb8;
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar6 + 8 + lVar11) != 0) {
        puVar13 = *(undefined2 **)(lVar6 + lVar11);
      }
      uVar7 = (uint)uVar8;
      lVar11 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar13 + lVar11);
        uVar2 = *(ushort *)((longlong)puVar9 + lVar11);
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_146fed941;
LAB_146fed912:
        lVar11 = lVar11 + 2;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_146fed912;
        iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      }
      else {
        iVar10 = (uint)uVar1 - (uint)uVar2;
      }
      if (iVar10 < 0) {
        uVar4 = (ulonglong)(uVar12 + (uVar7 & 1));
      }
LAB_146fed941:
      uVar8 = uVar8 >> 1;
    } while (1 < uVar7);
  }
  if ((int)uVar4 < (int)uVar5) {
    lVar11 = uVar4 * 0xb8;
    puVar9 = &DAT_149dfb77a;
    if (*(int *)(lVar6 + 8 + lVar11) != 0) {
      puVar9 = *(undefined2 **)(lVar6 + lVar11);
    }
    puVar13 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar13 = local_58;
    }
    lVar3 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar13 + lVar3);
      uVar5 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar9 + lVar3);
      uVar12 = (uint)uVar2;
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) goto LAB_146fed9b7;
LAB_146fed991:
      lVar3 = lVar3 + 2;
    }
    if ((uVar2 | uVar1) < 0x80) {
      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146fed991;
    }
    if ((int)(uVar5 - uVar12) < 0) goto LAB_146fed9c1;
LAB_146fed9b7:
    lVar6 = lVar6 + lVar11 + 0x10;
  }
  else {
LAB_146fed9c1:
    lVar6 = 0;
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feda00 FUN_146feda00 body=76 status=ok
// SIG undefined FUN_146feda00(void)

longlong FUN_146feda00(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar2 = FUN_1470056e0(param_1,uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x50 + *param_1;
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 146feda4c FUN_146feda4c body=314 status=ok
// SIG undefined FUN_146feda4c(void)

void FUN_146feda4c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined5 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x31) != '\0') {
    lVar2 = *param_2;
    local_98 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    uVar5 = param_3[2];
    local_a0 = param_3[3];
    param_3[2] = 0;
    param_3[3] = 0;
    uStack_50 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x2d) >> 0x18);
    local_60 = *(undefined4 *)(param_3 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_58 = *(undefined4 *)(param_3 + 5);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x2c);
    puVar6 = (undefined8 *)FUN_14001cc68(0x50,8);
    *puVar6 = 0;
    puVar6[1] = lVar2;
    local_90 = 0;
    puVar6[2] = local_98;
    local_88 = 0;
    puVar6[3] = uVar3;
    local_80 = 0;
    puVar6[4] = uVar4;
    local_78 = 0;
    puVar6[5] = uVar5;
    local_70 = 0;
    puVar6[6] = local_a0;
    local_68 = 0;
    *(ulonglong *)((longlong)puVar6 + 0x45) = CONCAT53(uStack_50,uStack_54._1_3_);
    *(undefined4 *)(puVar6 + 7) = local_60;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uStack_5c;
    *(undefined4 *)(puVar6 + 8) = uStack_58;
    *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_54;
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    UNLOCK();
    *puVar1 = puVar6;
    FUN_146fedb88(&local_80);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_146fedb88(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fedb88 FUN_146fedb88 body=70 status=ok
// SIG undefined FUN_146fedb88(void)

void FUN_146fedb88(longlong *param_1)

{
  FUN_146ffbf0e(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fedbce FUN_146fedbce body=171 status=ok
// SIG undefined FUN_146fedbce(void)

void FUN_146fedbce(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x31) != '\0') {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    local_38 = param_3[4];
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
    *puVar4 = 0;
    puVar4[1] = lVar2;
    puVar4[2] = lVar3;
    *(undefined4 *)(puVar4 + 3) = local_48;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_44;
    *(undefined4 *)(puVar4 + 4) = uStack_40;
    *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_3c;
    *(undefined4 *)(puVar4 + 5) = local_38;
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar4;
    UNLOCK();
    *puVar1 = puVar4;
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fedc8d FUN_146fedc8d body=187 status=ok
// SIG undefined FUN_146fedc8d(void)

longlong * FUN_146fedc8d(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_147005c7a();
  FUN_14021219d(param_1,param_2 + 0x50);
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined8 *)(param_2 + 0x60),8);
    }
    else {
      FUN_146821949(param_1);
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x60) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = (undefined8 *)(param_2 + 0x68);
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,8);
    }
    else {
      FUN_146821949(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 146fedd48 FUN_146fedd48 body=196 status=ok
// SIG undefined FUN_146fedd48(void)

longlong * FUN_146fedd48(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x20,0x14);
  FUN_1405d0c38(param_1,param_2);
  FUN_147005fae(param_1,param_2 + 0x10);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x34);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x34) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x34) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fede36 FUN_146fede36 body=305 status=ok
// SIG undefined FUN_146fede36(void)

void FUN_146fede36(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 200))(param_1,plVar2,local_3c != 0);
  *param_3 = uVar1;
  FUN_140195631(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fedf68 FUN_146fedf68 body=198 status=ok
// SIG undefined FUN_146fedf68(void)

void FUN_146fedf68(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  (**(code **)(*param_1 + 0x170))(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fee036 FUN_146fee036 body=290 status=ok
// SIG undefined FUN_146fee036(void)

void FUN_146fee036(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uVar1 = (**(code **)(*param_1 + 0x160))(param_1,&local_58,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fee160 FUN_146fee160 body=297 status=ok
// SIG undefined FUN_146fee160(void)

void FUN_146fee160(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined1 local_90 [112];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa0))(param_1,local_90,local_98,local_9c != 0);
  FUN_14128b194(param_3,local_90);
  FUN_14128b0c2(local_90);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fee29a FUN_146fee29a body=646 status=ok
// SIG undefined FUN_146fee29a(void)

void FUN_146fee29a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_1c8 [44];
  int local_19c;
  longlong local_198;
  ulonglong uStack_190;
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
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_118 = 0;
  local_110 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_46 = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  puVar2 = &local_188;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_198 = 0;
  uStack_190 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  plVar3 = &local_198;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_19c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,puVar2,plVar3,local_19c != 0);
  *param_3 = uVar1;
  FUN_140195631(local_198,uStack_190 & 0xffffffff);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_188);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fee52e FUN_146fee52e body=392 status=ok
// SIG undefined FUN_146fee52e(void)

void FUN_146fee52e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,&local_68,plVar2,local_4c != 0);
  *param_3 = uVar1;
  FUN_140195631(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fee6ca FUN_146fee6ca body=476 status=ok
// SIG undefined FUN_146fee6ca(void)

void FUN_146fee6ca(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
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
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_38,plVar3,iVar1 != 0);
  *param_3 = uVar2;
  FUN_140195631(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fee8ba FUN_146fee8ba body=476 status=ok
// SIG undefined FUN_146fee8ba(void)

void FUN_146fee8ba(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar3 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
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
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_38,plVar3,iVar1 != 0);
  *param_3 = uVar2;
  FUN_140195631(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feeaaa FUN_146feeaaa body=586 status=ok
// SIG undefined FUN_146feeaaa(void)

void FUN_146feeaaa(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  longlong local_68;
  ulonglong uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  plVar5 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar2 = local_6c;
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  _Src = local_58;
  iVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_50;
  local_78 = (int)uStack_50;
  if (lVar4 == 0) {
    local_74 = 0;
  }
  else {
    FUN_1401b309e(&local_80,uStack_50 & 0xffffffff,0);
    memcpy(local_80,_Src,lVar4 << 3);
  }
  local_88 = iVar1 != 0;
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1,&local_80,plVar5,iVar2 != 0);
  *param_3 = uVar3;
  FUN_140195631(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feecf6 FUN_146feecf6 body=581 status=ok
// SIG undefined FUN_146feecf6(void)

void FUN_146feecf6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  longlong local_e8 [6];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8[0] = 0;
  local_e8[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  plVar1 = local_e8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar3 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8 + 2);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_e8 + 2;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x168))(param_1,plVar1,puVar3,plVar2);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(local_e8 + 2);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1403950f6(&local_88);
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146feef4c FUN_146feef4c body=646 status=ok
// SIG undefined FUN_146feef4c(void)

void FUN_146feef4c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_1c8 [44];
  int local_19c;
  longlong local_198;
  ulonglong uStack_190;
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
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_118 = 0;
  local_110 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_46 = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  puVar2 = &local_188;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_198 = 0;
  uStack_190 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  plVar3 = &local_198;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_19c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1,puVar2,plVar3,local_19c != 0);
  *param_3 = uVar1;
  FUN_140195631(local_198,uStack_190 & 0xffffffff);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_188);
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fef1da FUN_146fef1da body=393 status=ok
// SIG undefined FUN_146fef1da(void)

void FUN_146fef1da(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar1 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  (**(code **)(*param_1 + 400))(param_1,local_38,plVar1,local_4c != 0);
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fef370 FUN_146fef370 body=249 status=ok
// SIG undefined FUN_146fef370(void)

void FUN_146fef370(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fef46e FUN_146fef46e body=41 status=ok
// SIG undefined FUN_146fef46e(void)

void FUN_146fef46e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 146fef49c FUN_146fef49c body=41 status=ok
// SIG undefined FUN_146fef49c(void)

void FUN_146fef49c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x260))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 146fef4ca FUN_146fef4ca body=41 status=ok
// SIG undefined FUN_146fef4ca(void)

void FUN_146fef4ca(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x268))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 146fef500 FUN_146fef500 body=425 status=ok
// SIG undefined FUN_146fef500(void)

void FUN_146fef500(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [112];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar2 = &local_c8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  iVar1 = local_cc;
  local_d0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = local_d0 != 0;
  (**(code **)(*param_1 + 0xa8))(param_1,local_a0,puVar2,iVar1 != 0);
  FUN_14128b194(param_3,local_a0);
  FUN_14128b0c2(local_a0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fef6b0 FUN_146fef6b0 body=394 status=ok
// SIG undefined FUN_146fef6b0(void)

void FUN_146fef6b0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined4 local_3d;
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3d = 0x101;
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar3 = &local_3d;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x110))(param_1,local_38,puVar3,plVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fef842 FUN_146fef842 body=394 status=ok
// SIG undefined FUN_146fef842(void)

void FUN_146fef842(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined4 local_3d;
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3d = 0x101;
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar3 = &local_3d;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x130))(param_1,local_38,puVar3,plVar2);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fef9ce FUN_146fef9ce body=175 status=ok
// SIG undefined FUN_146fef9ce(void)

void FUN_146fef9ce(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x290))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fefa7e FUN_146fefa7e body=546 status=ok
// SIG undefined FUN_146fefa7e(void)

void FUN_146fefa7e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  ulonglong uStack_180;
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
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188 = 0;
  uStack_180 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  plVar1 = &local_188;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_108 = 0;
  local_100 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_178;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1a8))(param_1,plVar1,puVar2);
  FUN_14019571a(&local_178);
  FUN_140195631(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fefca8 FUN_146fefca8 body=296 status=ok
// SIG undefined FUN_146fefca8(void)

void FUN_146fefca8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar1 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x248))(param_1,plVar1,local_3c != 0);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fefdd2 FUN_146fefdd2 body=198 status=ok
// SIG undefined FUN_146fefdd2(void)

void FUN_146fefdd2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  (**(code **)(*param_1 + 0x2a0))(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fefea6 FUN_146fefea6 body=385 status=ok
// SIG undefined FUN_146fefea6(void)

void FUN_146fefea6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x240))(param_1,plVar2,iVar1 != 0,local_40 != 0);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff002c FUN_146ff002c body=162 status=ok
// SIG undefined FUN_146ff002c(void)

void FUN_146ff002c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 600))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff00d0 FUN_146ff00d0 body=546 status=ok
// SIG undefined FUN_146ff00d0(void)

void FUN_146ff00d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  ulonglong uStack_180;
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
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188 = 0;
  uStack_180 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_188);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_188);
  }
  plVar1 = &local_188;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_108 = 0;
  local_100 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_178;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1b8))(param_1,plVar1,puVar2);
  FUN_14019571a(&local_178);
  FUN_140195631(local_188,uStack_180 & 0xffffffff);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff030e FUN_146ff030e body=175 status=ok
// SIG undefined FUN_146ff030e(void)

void FUN_146ff030e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  (**(code **)(*param_1 + 0x288))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff03c6 FUN_146ff03c6 body=75 status=ok
// SIG undefined FUN_146ff03c6(void)

void FUN_146ff03c6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_142acc4a2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff0412 FUN_146ff0412 body=79 status=ok
// SIG undefined FUN_146ff0412(void)

void FUN_146ff0412(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_142acc4a2(param_1 + -0x28,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff0462 FUN_146ff0462 body=611 status=ok
// SIG undefined FUN_146ff0462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ff0462(void)

{
  _DAT_14c99d880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d888,1);
  _DAT_14c99d870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d878,1);
  _DAT_14c99d860 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d868,1);
  _DAT_14c99d850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d858,1);
  _DAT_14c99d840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d848,1);
  _DAT_14c99d830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d838,1);
  _DAT_14c99d820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d828,1);
  _DAT_14c99d810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d818,1);
  _DAT_14c99d800 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d808,1);
  _DAT_14c99d7f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000146ff0618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99d7f8,1);
  return;
}



// FUNCTION 146ff06c6 FUN_146ff06c6 body=95 status=ok
// SIG undefined FUN_146ff06c6(void)

void FUN_146ff06c6(int *param_1,longlong param_2)

{
  if (*param_1 != 0) {
    *param_1 = *param_1 + 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_2 + 0xe68));
    (**(code **)(**(longlong **)(param_1 + 2) + 0x20))(*(longlong **)(param_1 + 2),0xffffffff,0);
    AcquireSRWLockExclusive((PSRWLOCK)(param_2 + 0xe68));
    *param_1 = *param_1 + -1;
    if (*param_1 == 0) {
      FUN_14018802a(*(undefined8 *)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  return;
}



// FUNCTION 146ff0726 FUN_146ff0726 body=99 status=ok
// SIG undefined FUN_146ff0726(void)

void FUN_146ff0726(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_48 = (longlong *)0x0;
  FUN_14166ea34(param_1,local_58);
  if (local_58[0] != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff078a FUN_146ff078a body=35 status=ok
// SIG undefined FUN_146ff078a(void)

undefined8 FUN_146ff078a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x98))();
  return param_2;
}



// FUNCTION 146ff07ae FUN_146ff07ae body=138 status=ok
// SIG undefined FUN_146ff07ae(void)

bool FUN_146ff07ae(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *_Str;
  size_t sVar2;
  bool bVar3;
  
  iVar1 = FUN_1447ee042(param_2,L"__ExternalActors__",0x12,1,0,0xffffffff);
  bVar3 = true;
  if (iVar1 == -1) {
    _Str = (wchar_t *)FUN_146875082();
    if (_Str == (wchar_t *)0x0) {
      bVar3 = false;
    }
    else {
      sVar2 = wcslen(_Str);
      iVar1 = FUN_1447ee042(param_2,_Str,sVar2 & 0xffffffff,1,0,0xffffffff);
      bVar3 = iVar1 != -1;
    }
  }
  return bVar3;
}



// FUNCTION 146ff0838 FUN_146ff0838 body=372 status=ok
// SIG undefined FUN_146ff0838(void)

ulonglong FUN_146ff0838(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0x970) == 0) {
    if (DAT_14c872bd8 == '\0') {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar2 = FUN_141348652(DAT_14c872ce0,&DAT_14c872ce8);
      if (lVar2 != 0) {
        FUN_14105ab36(lVar2,L"AssetRegistry",L"BlacklistPackagePathScanFilters",&local_38);
        FUN_14105ab36(lVar2,L"AssetRegistry",L"BlacklistContentSubPathScanFilters",&local_48);
      }
      uVar3 = FUN_14001cc68(0x230,0x10);
      FUN_142ac8a5a(uVar3,&local_38,&local_48,param_1);
      plVar4 = *(longlong **)(param_1 + 0x970);
      *(undefined8 *)(param_1 + 0x970) = uVar3;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
      }
      *(undefined4 *)(param_1 + 0xdc4) = DAT_14c75f4cc;
      plVar4 = (longlong *)FUN_144a8054c();
      iVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
      if (7 < iVar1 && iVar1 != 9) {
        FUN_146ff1020(param_1);
      }
      FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar5 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff09ae FUN_146ff09ae body=89 status=ok
// SIG undefined FUN_146ff09ae(void)

undefined4 FUN_146ff09ae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe68));
  LOCK();
  *(int *)(param_1 + 0xe70) = *(int *)(param_1 + 0xe70) + -1;
  UNLOCK();
  uVar1 = FUN_146ff0a08(param_1 + 0x30,param_2,param_3);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe68));
  return uVar1;
}



// FUNCTION 146ff0a08 FUN_146ff0a08 body=486 status=ok
// SIG undefined FUN_146ff0a08(void)

ulonglong FUN_146ff0a08(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  wchar_t *_Str1;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  wchar_t *_Str2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined4 local_78 [2];
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  local_90 = 0xffffffff;
  iVar3 = FUN_1447ee042(param_2,&DAT_149e0635c,1,0);
  local_60 = 0;
  local_78[0] = 0;
  if (iVar3 == -1) {
    plVar5 = param_2 + 1;
    plVar10 = param_2;
  }
  else {
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_149dfb77a;
      iVar4 = 0;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    if (iVar3 < iVar4) {
      iVar4 = iVar3;
    }
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    FUN_14006620a(&local_58,puVar9,iVar4);
    local_60 = local_58;
    plVar5 = (longlong *)local_78;
    local_78[0] = local_50;
    plVar10 = &local_60;
  }
  iVar3 = *(int *)(param_1 + 0xe20);
  if ((longlong)iVar3 == 0) {
    uVar7 = 0;
    lVar8 = local_60;
  }
  else {
    local_70 = param_2;
    local_68 = param_3;
    lVar1 = *(longlong *)(param_1 + 0xe18);
    lVar2 = *plVar5;
    lVar6 = 0;
    local_80 = local_60;
    do {
      _Str2 = L"";
      if (*(int *)(lVar1 + 8 + lVar6) != 0) {
        _Str2 = *(wchar_t **)(lVar1 + lVar6);
      }
      _Str1 = L"";
      if ((int)lVar2 != 0) {
        _Str1 = (wchar_t *)*plVar10;
      }
      iVar4 = wcscmp(_Str1,_Str2);
      plVar5 = local_68;
      lVar8 = local_80;
      if (iVar4 == 0) {
        if (*(int *)(lVar1 + 0x18 + lVar6) == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        else {
          puVar9 = *(undefined2 **)(lVar1 + 0x10 + lVar6);
        }
        local_98 = 1;
        FUN_140807d8e(local_70,&local_58,_Str2,puVar9);
        if (&local_58 == plVar5) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*plVar5 != 0) {
            FUN_1400020a8();
          }
          *plVar5 = local_58;
          local_58 = 0;
          *(undefined4 *)(plVar5 + 1) = local_50;
          *(undefined4 *)((longlong)plVar5 + 0xc) = local_4c;
        }
        uVar7 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        goto LAB_146ff0b31;
      }
      lVar6 = lVar6 + 0x20;
    } while ((longlong)iVar3 * 0x20 != lVar6);
    uVar7 = 0;
  }
LAB_146ff0b31:
  if (lVar8 != 0) {
    FUN_1400020a8(lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146ff0bf0 FUN_146ff0bf0 body=148 status=ok
// SIG undefined FUN_146ff0bf0(void)

void FUN_146ff0bf0(longlong *param_1)

{
  FUN_1447a1747(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ff0c84 FUN_146ff0c84 body=923 status=ok
// SIG undefined FUN_146ff0c84(void)

void FUN_146ff0c84(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  undefined1 *local_480;
  undefined8 **local_478;
  char local_469;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined2 local_458;
  undefined8 *local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  longlong local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined4 local_3b4;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_36c;
  undefined4 local_364;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_31c;
  undefined4 local_314;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  ushort local_67;
  undefined8 local_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (param_2 != 0) {
    local_138 = 0;
    local_130 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = (longlong *)0x0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_67 = 0;
    local_64 = 0;
    local_68 = 1;
    uStack_190 = 1;
    FUN_1446f84a2(&local_198,0);
    *local_198 = param_2;
    local_67 = local_67 & 0xff;
    local_458 = 0;
    local_468 = 0;
    uStack_460 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3bc = 0xffffffff00000080;
    local_3b4 = 0;
    local_3a8 = 0;
    local_3a0 = 0;
    local_378 = 0;
    local_370 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_36c = 0xffffffff00000080;
    local_364 = 0;
    local_358 = 0;
    local_350 = 0;
    local_328 = 0;
    local_320 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_31c = 0xffffffff00000080;
    local_314 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2cc = 0xffffffff00000080;
    local_2c4 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_288 = 0;
    local_280 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_27c = 0xffffffff00000080;
    local_274 = 0;
    local_268 = 0;
    local_260 = 0;
    local_238 = 0;
    local_230 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_22c = 0xffffffff00000080;
    local_224 = 0;
    local_218 = 0;
    local_210 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1dc = 0xffffffff00000080;
    local_1d4 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    FUN_140be70e2(param_1,&local_468,&local_1a8,&local_3e8);
    local_418 = 0;
    local_410 = 0;
    local_438 = 0;
    uStack_430 = 0;
    local_40c = 0xffffffff00000080;
    local_404 = 0;
    local_3f8 = 0;
    local_3f0 = 0;
    local_478 = &local_448;
    local_480 = &LAB_142addd60;
    local_488 = CONCAT31(local_488._1_3_,1);
    local_448 = param_3;
    FUN_140be772a(&local_3e8,&local_438,&local_469);
    if (local_469 == '\0') {
      puVar1 = (undefined8 *)*param_3;
      uVar2 = param_3[1];
      FUN_144731a98(&local_438,param_1 + 0x768);
      local_488 = 0;
      local_448 = puVar1;
      uStack_440 = uVar2;
      FUN_140be894c(param_1,&local_3e8,&local_438);
    }
    local_3f0 = 0;
    if (local_3f8 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_438);
    FUN_140be6d8c(&local_3e8);
    FUN_14019571a(&local_1a8);
  }
  if ((local_50 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff1020 FUN_146ff1020 body=344 status=ok
// SIG undefined FUN_146ff1020(void)

void FUN_146ff1020(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_78;
  longlong local_70;
  int local_68;
  longlong local_60;
  int local_58;
  uint local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146fea8fc(*(undefined8 *)(param_1 + 0x970));
  if (*(char *)(*(longlong *)(param_1 + 0x970) + 0x6e) == '\x01') {
    FUN_146ff117a(&local_60,0x10,1,0);
    uVar3 = (ulonglong)local_50;
    if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
      do {
        lVar1 = *(longlong *)(local_60 + (uVar3 & 0xffffffff) * 8);
        if (lVar1 != 0) {
          local_48 = *(undefined8 *)(lVar1 + 0x18);
          FUN_1400021e4(&local_48,&local_80);
          local_70 = local_80;
          local_68 = local_78 + -1;
          if (local_78 == 0) {
            local_68 = 0;
          }
          cVar2 = FUN_14475c62c(&local_70);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (cVar2 != '\0') {
            FUN_14700eea0(param_1,*(undefined8 *)(lVar1 + 0x18));
          }
        }
        uVar3 = (longlong)(int)local_50;
        do {
          uVar4 = uVar3;
          uVar3 = uVar4 + 1;
          local_50 = (uint)uVar3;
          if ((longlong)local_58 <= (longlong)uVar3) break;
        } while (*(longlong *)(local_60 + uVar3 * 8) == 0);
      } while ((-2 < (longlong)uVar4) && ((int)local_50 < local_58));
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff117a FUN_146ff117a body=126 status=ok
// SIG undefined FUN_146ff117a(void)

longlong * FUN_146ff117a(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a7a812();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
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



// FUNCTION 146ff11f8 FUN_146ff11f8 body=115 status=ok
// SIG undefined FUN_146ff11f8(void)

void FUN_146ff11f8(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  if (1 < *(int *)(param_3 + 8)) {
    FUN_1416aa601(param_2,param_3,param_4);
    return;
  }
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  FUN_146ff126c(param_1 + 8,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x000146ff1264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return;
}



// FUNCTION 146ff126c FUN_146ff126c body=123 status=ok
// SIG undefined FUN_146ff126c(void)

void FUN_146ff126c(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)(param_3 != '\0') * 0x100;
  lVar1 = param_1 + lVar2;
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar1 + 0x570);
  *param_2 = *(undefined8 *)(lVar1 + 0x568);
  FUN_146ffc87a(param_2 + 2,lVar1 + 0x578);
  FUN_144881636(param_2 + 0xc,param_1 + lVar2 + 0x5c8);
  FUN_144881636(param_2 + 0x16,param_1 + lVar2 + 0x618);
  return;
}



// FUNCTION 146ff12e8 FUN_146ff12e8 body=547 status=ok
// SIG undefined FUN_146ff12e8(void)

void FUN_146ff12e8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
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
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    uVar13 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar12 = (uint)lVar2 & 0xffff;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    uVar13 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar12) +
             (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar12 >> 4);
    lVar11 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x130);
    }
    iVar9 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0x138) - 1U &
                              ((uVar13 >> 2) +
                               ((uint)lVar3 << 0x10 | uVar8) + (int)((ulonglong)lVar3 >> 0x20) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4) + uVar13 * 0x40 +
                               0x9e3779b9 ^ uVar13)) * 4);
    if (iVar9 != -1) {
      lVar11 = *(longlong *)(param_1 + 0xf0);
      do {
        lVar10 = (longlong)iVar9 * 0x68;
        lVar1 = lVar11 + lVar10;
        if ((*(longlong *)(lVar11 + lVar10) == lVar2) &&
           (*(longlong *)(lVar11 + 8 + lVar10) == lVar3)) {
          plVar7 = (longlong *)(lVar1 + 0x10);
          if (plVar7 != (longlong *)0x0 && lVar1 != 0) {
            lVar2 = lVar1 + 0x20;
            local_58 = 0x100000000;
            local_48 = 0xffffffff;
            uStack_40 = 0;
            uStack_50 = lVar2;
            if (*(int *)(lVar1 + 0x38) == 0) {
              iVar9 = 0;
            }
            else {
              FUN_1449c0562(&local_58);
              iVar9 = *(int *)(lVar1 + 0x38);
            }
            local_78 = (undefined4)local_58;
            uStack_74 = local_58._4_4_;
            uStack_70 = (undefined4)uStack_50;
            uStack_6c = uStack_50._4_4_;
            uStack_60 = CONCAT44(uStack_3c,uStack_40);
            local_68 = local_48;
            uVar5 = local_68;
            local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
            iVar6 = local_68._4_4_;
            local_80 = plVar7;
            if ((local_68._4_4_ != iVar9) || (local_68 = local_48, uStack_50 != lVar2)) {
              do {
                local_68 = uVar5;
                local_58 = *(undefined8 *)(*local_80 + (longlong)iVar6 * 0x10);
                (*(code *)*param_3)(param_3[1]);
                local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
                FUN_1449c0562(&local_78);
                iVar6 = local_68._4_4_;
                uVar5 = local_68;
              } while (local_80 != plVar7 ||
                       (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar9));
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x60);
      } while (iVar9 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff150c FUN_146ff150c body=12 status=ok
// SIG undefined FUN_146ff150c(void)

longlong FUN_146ff150c(void)

{
  return DAT_14c9485b8 + -0x28;
}



// FUNCTION 146ff1518 FUN_146ff1518 body=49 status=ok
// SIG undefined FUN_146ff1518(void)

void FUN_146ff1518(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 0xdbc);
  if (cVar1 != '\x01') {
    bVar2 = DAT_14c75f4d4 | DAT_14c99d8e0;
    *(undefined1 *)(param_1 + 0xdbc) = 1;
    if ((cVar1 != '\0') || ((bVar2 & 1) != 0)) {
      FUN_14576f8ee(param_1,1,1);
      return;
    }
  }
  return;
}



// FUNCTION 146ff154a FUN_146ff154a body=65 status=ok
// SIG undefined FUN_146ff154a(void)

ulonglong FUN_146ff154a(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = *(undefined1 *)(param_1 + 0xdc6);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}



// FUNCTION 146ff158c FUN_146ff158c body=65 status=ok
// SIG undefined FUN_146ff158c(void)

ulonglong FUN_146ff158c(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = *(undefined1 *)(param_1 + 0xdc0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}



// FUNCTION 146ff15ce FUN_146ff15ce body=685 status=ok
// SIG undefined FUN_146ff15ce(void)

void FUN_146ff15ce(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  LARGE_INTEGER LVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_128 [40];
  LARGE_INTEGER *local_100;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  double *local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  LARGE_INTEGER local_88 [2];
  undefined1 local_78 [24];
  int local_60;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x970) != 0) {
    local_b8 = *param_4;
    local_b0 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      local_b0 = 0;
    }
    FUN_146fea156();
    local_d0 = &local_c0;
    local_c0 = -1.0;
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(local_88,iVar3,*param_3,1);
    LVar1 = local_88[0];
    FUN_146fe9bec(*(undefined8 *)(param_1 + 0x970),param_1 + 0x978,1);
    local_d8 = param_1;
    local_c8 = param_2;
    if (LVar1.QuadPart == 0) {
      FUN_140b1a4cc(&local_100,param_4);
      FUN_142acbee6(param_1 + 0xb10,local_88,&local_100);
      if (local_100 != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = 0x100000000;
      local_98 = 0xffffffff;
      uStack_90 = 0;
      uStack_a0 = local_78;
      if (local_60 == 0) {
        local_60 = 0;
      }
      else {
        FUN_1449c0562(&local_a8);
      }
      uStack_e0 = CONCAT44(uStack_8c,uStack_90);
      local_e8 = local_98;
      uVar2 = local_e8;
      local_f8 = (undefined4)local_a8;
      uStack_f4 = local_a8._4_4_;
      uStack_f0 = (undefined4)uStack_a0;
      uStack_ec = uStack_a0._4_4_;
      local_e8._4_4_ = (int)((ulonglong)local_98 >> 0x20);
      local_100 = local_88;
      if ((local_e8._4_4_ != local_60) || (uStack_a0 != local_78)) {
        iVar3 = local_e8._4_4_;
        local_e8 = uVar2;
        do {
          FUN_142ad3cd4(&local_d8,*(undefined8 *)(local_100->QuadPart + (longlong)iVar3 * 0x10));
          local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~uStack_f4);
          FUN_1449c0562(&local_f8);
          iVar3 = local_e8._4_4_;
          uVar2 = local_e8;
        } while (local_100 != local_88 ||
                 ((undefined1 *)CONCAT44(uStack_ec,uStack_f0) != local_78 ||
                 local_e8._4_4_ != local_60));
      }
      local_e8 = uVar2;
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(local_88);
    }
    else {
      FUN_144a8b5fe(param_1 + 0xbc8,LVar1.QuadPart);
      FUN_142ad3cd4(&local_d8,LVar1.QuadPart);
    }
    if (0.0 < local_c0) {
      QueryPerformanceCounter(local_88);
      *(float *)(param_1 + 0xda8) =
           (float)(((double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0) - local_c0) +
           *(float *)(param_1 + 0xda8);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff187c FUN_146ff187c body=89 status=ok
// SIG undefined FUN_146ff187c(void)

undefined4 FUN_146ff187c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = FUN_146ff18d6(param_1 + 8,param_2,param_3);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return uVar1;
}



// FUNCTION 146ff18d6 FUN_146ff18d6 body=141 status=ok
// SIG undefined FUN_146ff18d6(void)

ulonglong FUN_146ff18d6(longlong param_1,undefined8 param_2,char param_3)

{
  char extraout_AL;
  undefined7 extraout_var;
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  char *local_40;
  code *local_38;
  longlong *local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14701050c(param_1,param_2,1);
  uVar2 = extraout_var;
  local_21 = extraout_AL;
  if (param_3 == '\x01' && extraout_AL == '\0') {
    local_30 = &local_48;
    local_40 = &local_21;
    local_38 = FUN_142addd36;
    local_48 = param_1;
    uVar1 = FUN_140e3dee2(param_1 + 0x8d0,param_2,&local_38,1);
    uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71(uVar2,local_21) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff1964 FUN_146ff1964 body=361 status=ok
// SIG undefined FUN_146ff1964(void)

undefined4
FUN_146ff1964(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
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
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_118 = 0;
  local_110 = 0;
  local_188 = (undefined8 *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_46 = 0;
  local_44 = 0;
  uStack_180 = 1;
  FUN_1446f84a2(&local_188,0);
  *local_188 = param_2;
  local_46 = param_4;
  uVar1 = (**(code **)(*param_1 + 0x50))
                    (param_1,&local_188,param_3,
                     CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  FUN_14019571a(&local_188);
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff1ace FUN_146ff1ace body=356 status=ok
// SIG undefined FUN_146ff1ace(void)

undefined4
FUN_146ff1ace(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined8 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_118 = 0;
  local_110 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = (undefined8 *)0x0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_47 = 0;
  local_44 = 0;
  uStack_170 = 1;
  local_48 = param_4;
  FUN_1446f84a2(&local_178,0);
  *local_178 = param_2;
  local_47 = CONCAT11(param_5,(undefined1)local_47);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_188,param_3,1);
  FUN_14019571a(&local_188);
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff1c34 FUN_146ff1c34 body=412 status=ok
// SIG undefined FUN_146ff1c34(void)

undefined4 FUN_146ff1c34(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined1 local_19c [4];
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
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_128 = 0;
  local_120 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar2 = (longlong)(int)param_2[1] << 3;
    do {
      local_1a8 = lVar3;
      FUN_147006bd4(&local_148,local_19c,&local_1a8,0);
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_198,param_3,1);
  FUN_14019571a(&local_198);
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff1dd2 FUN_146ff1dd2 body=754 status=ok
// SIG undefined FUN_146ff1dd2(void)

undefined4 FUN_146ff1dd2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  void **ppvVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_228 [40];
  void **local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  void **local_1e8;
  uint local_1e0;
  int iStack_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_1d0;
  void **local_1c8;
  uint local_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 local_1ac [4];
  void *local_1a8;
  int local_1a0;
  int local_19c;
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
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_128 = 0;
  iVar6 = 0;
  local_120 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  ppvVar1 = (void **)(param_2 + 2);
  local_1d0 = 0x100000000;
  local_1c0 = 0xffffffff;
  iStack_1bc = 0;
  local_1b8 = 0;
  local_1c8 = ppvVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_1d0);
    iVar6 = (int)param_2[5];
  }
  local_1e0 = local_1c0;
  iStack_1dc = iStack_1bc;
  local_1d8 = local_1b8;
  local_1d4 = local_1b4;
  local_1f0 = local_1d0;
  local_1e8 = local_1c8;
  local_200 = ppvVar1;
  local_1f8 = param_2;
  if ((iStack_1bc != iVar6) || (local_1c8 != ppvVar1)) {
    do {
      lVar2 = *local_1f8;
      lVar4 = (longlong)iStack_1dc * 0x20;
      local_1a8 = (void *)0x0;
      local_1a0 = *(int *)(lVar2 + 0x10 + lVar4);
      lVar5 = (longlong)local_1a0;
      _Src = *(void **)(lVar2 + 8 + lVar4);
      if (lVar5 == 0) {
        local_19c = 0;
      }
      else {
        FUN_1446dd670(&local_1a8,local_1a0,0);
        memcpy(local_1a8,_Src,lVar5 * 2);
      }
      local_1d0 = lVar2 + lVar4;
      local_1c8 = &local_1a8;
      FUN_147006d1c(&local_148,local_1ac,&local_1d0,0);
      if ((local_19c != -1) && (local_1a8 != (void *)0x0)) {
        FUN_1400020a8();
      }
      local_1e0 = local_1e0 & ~local_1f0._4_4_;
      FUN_1449c0562(&local_1f0);
    } while (local_1f8 != param_2 || (local_1e8 != local_200 || iStack_1dc != iVar6));
  }
  uVar3 = (**(code **)(*param_1 + 0x50))(param_1,&local_198,param_3,1);
  FUN_14019571a(&local_198);
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff20c6 FUN_146ff20c6 body=565 status=ok
// SIG undefined FUN_146ff20c6(void)

undefined4 FUN_146ff20c6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  int local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  int local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  int local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  uVar2 = 0;
  local_258 = 0;
  local_250 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_24c = 0xffffffff00000080;
  local_244 = 0;
  local_238 = 0;
  local_230 = 0;
  local_208 = 0;
  local_200 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_1fc = 0xffffffff00000080;
  local_1f4 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x1d0))(0,param_2,&local_278);
  if (((int)uStack_270 + (int)uStack_220 + (int)uStack_180 + (int)uStack_e0) -
      (local_244 + local_1f4 + local_154 + local_b4) != local_64 - (int)uStack_90) {
    cVar1 = FUN_140be6714(&local_278);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1,&local_278,param_3,param_4);
    }
  }
  FUN_140be6d8c(&local_278);
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff22fc FUN_146ff22fc body=304 status=ok
// SIG undefined FUN_146ff22fc(void)

undefined8 FUN_146ff22fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e8;
  code *local_e0;
  undefined8 *local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  code **local_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_d8 = &local_e8;
  local_e0 = FUN_142adddf0;
  local_e8 = param_3;
  (**(code **)(*DAT_14c9485b8 + 0x440))();
  local_a0 = &local_c8;
  local_a8 = FUN_142ade05a;
  local_f8 = param_4;
  local_c8 = param_2;
  local_c0 = &local_e0;
  local_b8 = param_1 + 0xe40;
  local_b0 = param_1 + 8;
  FUN_140be772a(param_2,&local_98,&local_c9);
  (**(code **)(*DAT_14c9485b8 + 0x448))();
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff242e FUN_146ff242e body=463 status=ok
// SIG undefined FUN_146ff242e(void)

undefined4
FUN_146ff242e(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_248 = 0;
  local_240 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_23c = 0xffffffff00000080;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 0xffffffff00000080;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x1d0))(param_1,param_2,&local_268);
  local_278 = *param_3;
  local_270 = param_3[1];
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1,&local_268,&local_278,param_4);
  FUN_140be6d8c(&local_268);
  if ((local_28 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff25fe FUN_146ff25fe body=87 status=ok
// SIG undefined FUN_146ff25fe(void)

void FUN_146ff25fe(longlong *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = param_3[1];
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_18,(ulonglong)(param_4 ^ 1) << 2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff2656 FUN_146ff2656 body=453 status=ok
// SIG undefined FUN_146ff2656(void)

undefined4 FUN_146ff2656(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_248 = 0;
  local_240 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_23c = 0xffffffff00000080;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 0xffffffff00000080;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x1d0))(param_1,param_2,&local_268);
  local_278 = *param_3;
  local_270 = param_3[1];
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_268,&local_278,0);
  FUN_140be6d8c(&local_268);
  if ((local_20 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff281c FUN_146ff281c body=78 status=ok
// SIG undefined FUN_146ff281c(void)

void FUN_146ff281c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = param_3[1];
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff286c FUN_146ff286c body=460 status=ok
// SIG undefined FUN_146ff286c(void)

undefined4
FUN_146ff286c(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_248 = 0;
  local_240 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_23c = 0xffffffff00000080;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 0xffffffff00000080;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_158 = 0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0xffffffff00000080;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x1d0))(param_1,param_2,&local_268);
  local_278 = *param_3;
  local_270 = param_3[1];
  uVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_268,&local_278,param_4);
  FUN_140be6d8c(&local_268);
  if ((local_28 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff2a3a FUN_146ff2a3a body=686 status=ok
// SIG undefined FUN_146ff2a3a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_146ff2a3a(longlong param_1,undefined8 **param_2,longlong **param_3,uint param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong **pplVar4;
  undefined1 auStack_3908 [32];
  uint local_38e8;
  undefined8 **local_38d8;
  undefined1 *local_38d0;
  longlong **local_38c8;
  char local_38b9;
  code *local_38b8;
  longlong **local_38b0;
  longlong *local_38a8;
  undefined1 **local_38a0;
  longlong local_3898;
  longlong local_3890;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3908;
  if ((*(int *)(param_2 + 1) + *(int *)(param_2 + 0xb) + *(int *)(param_2 + 0x1f) +
      *(int *)(param_2 + 0x33)) -
      (*(int *)((longlong)param_2 + 0x34) + *(int *)((longlong)param_2 + 0x84) +
       *(int *)((longlong)param_2 + 0x124) + *(int *)((longlong)param_2 + 0x1c4)) ==
      *(int *)((longlong)param_2 + 0x214) - *(int *)(param_2 + 0x3d)) {
    uVar2 = 0;
    goto LAB_146ff2aa6;
  }
  cVar1 = FUN_140be6714(param_2);
  uVar2 = 0;
  if (cVar1 == '\0') goto LAB_146ff2aa6;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (*(char *)(param_2 + 0x47) == '\0') {
    local_38c8 = (longlong **)&local_38d8;
    local_38d0 = &LAB_142adde30;
    local_38d8 = param_3;
    (**(code **)(*DAT_14c9485b8 + 0x440))();
    local_38b0 = &local_38a8;
    local_38b8 = FUN_142ade05a;
    local_38e8 = CONCAT31(local_38e8._1_3_,(param_4 & 4) == 0);
    local_38a8 = (longlong *)param_2;
    local_38a0 = &local_38d0;
    local_3898 = param_1 + 0xe40;
    local_3890 = param_1 + 8;
    FUN_140be772a(param_2,&local_98,&local_38b9);
    (**(code **)(*DAT_14c9485b8 + 0x448))();
    if (local_38b9 == '\0') goto LAB_146ff2c01;
  }
  else {
LAB_146ff2c01:
    local_a8 = (longlong **)0x0;
    local_a0 = 0x8000000000;
    LOCK();
    *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
    UNLOCK();
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
    LOCK();
    *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
    UNLOCK();
    local_38d8 = &local_38a8;
    FUN_144731a98(&local_98,param_1 + 0x770);
    local_38b8 = FUN_142adde3e;
    local_38e8 = param_4;
    local_38b0 = (longlong **)&local_38d8;
    FUN_140be894c(param_1 + 8,param_2,&local_98);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
    pplVar4 = local_a8;
    if (local_a8 == (longlong **)0x0) {
      pplVar4 = &local_38a8;
    }
    if ((longlong)(int)local_a0 != 0) {
      lVar3 = (longlong)(int)local_a0 * 0x70;
      do {
        lVar3 = lVar3 + -0x70;
        cVar1 = (*(code *)*param_3)(param_3[1],pplVar4);
        if (cVar1 == '\0') break;
        pplVar4 = pplVar4 + 0xe;
      } while (lVar3 != 0);
    }
    FUN_146ff2cea(&local_38a8);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  uVar2 = 1;
LAB_146ff2aa6:
  if ((local_48 ^ (ulonglong)auStack_3908) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146ff2cea FUN_146ff2cea body=62 status=ok
// SIG undefined FUN_146ff2cea(void)

void FUN_146ff2cea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3800);
  if (*(longlong *)(param_1 + 0x3800) == 0) {
    lVar1 = param_1;
  }
  FUN_140195631(lVar1,*(undefined4 *)(param_1 + 0x3808));
  if (*(longlong *)(param_1 + 0x3800) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ff2d28 FUN_146ff2d28 body=205 status=ok
// SIG undefined FUN_146ff2d28(void)

undefined8 FUN_146ff2d28(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = param_3;
  FUN_1400021e4(&local_48,&local_78);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = local_78;
  local_38 = local_70 + -1;
  if (local_70 == 0) {
    local_38 = 0;
  }
  FUN_14475bf92(&local_68);
  local_88 = 1;
  (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_68,param_4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff2df6 FUN_146ff2df6 body=205 status=ok
// SIG undefined FUN_146ff2df6(void)

char FUN_146ff2df6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  cVar2 = '\x02';
  if (*(char *)(param_1 + 0xdc0) == '\x01') {
    cVar2 = (~*(byte *)(param_1 + 0xdc1) & 1) * '\x02';
  }
  FUN_1400e7e08(local_48,param_2);
  lVar1 = FUN_141734322(param_1 + 8,local_48);
  if (lVar1 != 0) {
    FUN_146863b7e(param_3,lVar1);
    cVar2 = '\x01';
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff2ec4 FUN_146ff2ec4 body=67 status=ok
// SIG undefined FUN_146ff2ec4(void)

void FUN_146ff2ec4(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0xb8))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff2f08 FUN_146ff2f08 body=232 status=ok
// SIG undefined FUN_146ff2f08(void)

char FUN_146ff2f08(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  char cVar13;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  cVar13 = '\x02';
  if (*(char *)(param_1 + 0xdc0) == '\x01') {
    cVar13 = (~*(byte *)(param_1 + 0xdc1) & 1) * '\x02';
  }
  puVar12 = (undefined4 *)FUN_1470138cc(param_1 + 8,param_2,param_4);
  if (puVar12 != (undefined4 *)0x0) {
    *(undefined1 *)(param_3 + 8) = *(undefined1 *)(puVar12 + 8);
    uVar1 = *puVar12;
    uVar2 = puVar12[1];
    uVar3 = puVar12[2];
    uVar4 = puVar12[3];
    uVar5 = puVar12[5];
    uVar6 = puVar12[6];
    uVar7 = puVar12[7];
    param_3[4] = puVar12[4];
    param_3[5] = uVar5;
    param_3[6] = uVar6;
    param_3[7] = uVar7;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    FUN_146ffcaac(param_3 + 10,puVar12 + 10);
    FUN_1406fa324(param_3 + 0x1e,puVar12 + 0x1e);
    uVar1 = puVar12[0x23];
    uVar2 = puVar12[0x24];
    uVar3 = puVar12[0x25];
    uVar8 = *(undefined8 *)(puVar12 + 0x26);
    uVar9 = *(undefined8 *)(puVar12 + 0x28);
    uVar10 = *(undefined8 *)((longlong)puVar12 + 0xa5);
    uVar11 = *(undefined8 *)((longlong)puVar12 + 0xad);
    param_3[0x22] = puVar12[0x22];
    param_3[0x23] = uVar1;
    param_3[0x24] = uVar2;
    param_3[0x25] = uVar3;
    *(undefined8 *)(param_3 + 0x26) = uVar8;
    *(undefined8 *)(param_3 + 0x28) = uVar9;
    *(undefined8 *)((longlong)param_3 + 0xa5) = uVar10;
    *(undefined8 *)((longlong)param_3 + 0xad) = uVar11;
    cVar13 = '\x01';
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return cVar13;
}



// FUNCTION 146ff2ff0 FUN_146ff2ff0 body=310 status=ok
// SIG undefined FUN_146ff2ff0(void)

void FUN_146ff2ff0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_d4 [4];
  longlong local_d0 [2];
  undefined8 *local_c0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  uVar2 = FUN_1446f8646();
  local_e8 = 0;
  FUN_146123bc0(local_d0,uVar2,0,0);
  if (local_c0 != (undefined8 *)0x0) {
    do {
      cVar1 = (**(code **)(*(longlong *)*local_c0 + 0x1c0))();
      if (cVar1 != '\0') {
        if (local_c0 == (undefined8 *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *local_c0;
        }
        cVar1 = FUN_1427b4e5e(uVar2);
        if (cVar1 == '\0') {
          if (local_c0 == (undefined8 *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *local_c0;
          }
          thunk_FUN_146857ca8(local_a8,uVar2,2);
          FUN_144a13f80(param_1,local_d4,local_a8,0);
          cVar1 = (*(code *)*param_3)(param_3[1]);
          if (cVar1 == '\0') {
            *param_2 = 1;
            FUN_14128b0c2(local_a8);
            break;
          }
          FUN_14128b0c2(local_a8);
        }
      }
      FUN_1427b9a5c(local_d0);
    } while (local_c0 != (undefined8 *)0x0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_d0[0] + 0x30));
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff3128 FUN_146ff3128 body=81 status=ok
// SIG undefined FUN_146ff3128(void)

void FUN_146ff3128(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  (**(code **)(*param_1 + 0xd0))(param_1,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff317a FUN_146ff317a body=82 status=ok
// SIG undefined FUN_146ff317a(void)

void FUN_146ff317a(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = param_2[1];
  (**(code **)(*param_1 + 0xd0))(param_1,&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff31ce FUN_146ff31ce body=537 status=ok
// SIG undefined FUN_146ff31ce(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_146ff31ce(longlong param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 **ppuVar3;
  undefined1 auStack_3928 [40];
  undefined8 **local_3900;
  undefined1 *local_38f8;
  undefined8 **local_38f0;
  code *local_38e8;
  undefined8 ***local_38e0;
  undefined8 *local_38d8;
  code **local_38d0;
  uint local_38c8;
  longlong local_38c0;
  code *local_38b8;
  undefined8 **local_38b0;
  undefined8 *local_38a8 [1792];
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3928;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((param_3 & 1) == 0) {
    local_38f8 = &LAB_142ade71a;
    local_38f0 = local_38a8;
    local_38a8[0] = param_2;
    FUN_146ff2ff0(&local_98,&local_38d8);
    if ((char)local_38d8 != '\0') goto LAB_146ff3364;
  }
  local_a8 = (undefined8 **)0x0;
  local_a0 = 0x8000000000;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_3900 = local_38a8;
  FUN_144731a98(&local_98,param_1 + 0x770);
  local_38d0 = &local_38e8;
  local_38e8 = FUN_142ade728;
  local_38b0 = &local_38d8;
  local_38b8 = FUN_142aea36e;
  local_38e0 = &local_3900;
  local_38d8 = &local_98;
  local_38c8 = param_3;
  local_38c0 = param_1 + 8;
  FUN_1415625f6(param_1 + 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  ppuVar3 = local_a8;
  if (local_a8 == (undefined8 **)0x0) {
    ppuVar3 = local_38a8;
  }
  if ((longlong)(int)local_a0 != 0) {
    lVar2 = (longlong)(int)local_a0 * 0x70;
    do {
      lVar2 = lVar2 + -0x70;
      cVar1 = (*(code *)*param_2)(param_2[1],ppuVar3);
      if (cVar1 == '\0') break;
      ppuVar3 = ppuVar3 + 0xe;
    } while (lVar2 != 0);
  }
  FUN_146ff2cea(local_38a8);
LAB_146ff3364:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_3928) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 146ff33e8 FUN_146ff33e8 body=142 status=ok
// SIG undefined FUN_146ff33e8(void)

byte FUN_146ff33e8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  bVar1 = FUN_147010eba(param_1 + 8,param_2,param_3,param_4,param_5);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  bVar2 = FUN_146ff3476(param_2,param_3,param_4,param_5,1);
  return bVar2 | bVar1;
}



// FUNCTION 146ff3476 FUN_146ff3476 body=197 status=ok
// SIG undefined FUN_146ff3476(void)

bool FUN_146ff3476(undefined4 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e8 [47];
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b9 = param_5;
  iVar1 = *(int *)(param_2 + 8);
  local_b8 = *param_1;
  uStack_b4 = param_1[1];
  uStack_b0 = param_1[2];
  uStack_ac = param_1[3];
  local_a8 = param_1[4];
  uStack_a4 = param_1[5];
  uStack_a0 = param_1[6];
  uStack_9c = param_1[7];
  local_98 = param_3;
  FUN_14700700a(local_90,param_4);
  local_58 = 0;
  local_48 = &PTR_LAB_149fca140;
  local_38 = &local_b8;
  local_68 = FUN_147007150;
  local_40 = &local_b9;
  local_30 = param_2;
  FUN_14700dee2();
  iVar2 = *(int *)(param_2 + 8);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return iVar1 != iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff353c FUN_146ff353c body=142 status=ok
// SIG undefined FUN_146ff353c(void)

byte FUN_146ff353c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  bVar1 = FUN_147010fb0(param_1 + 8,param_2,param_3,param_4,param_5);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  bVar2 = FUN_146ff35ca(param_2,param_3,param_4,param_5,1);
  return bVar2 | bVar1;
}



// FUNCTION 146ff35ca FUN_146ff35ca body=197 status=ok
// SIG undefined FUN_146ff35ca(void)

bool FUN_146ff35ca(undefined4 *param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e8 [47];
  undefined1 local_b9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b9 = param_5;
  iVar1 = *(int *)(param_2 + 8);
  local_b8 = *param_1;
  uStack_b4 = param_1[1];
  uStack_b0 = param_1[2];
  uStack_ac = param_1[3];
  local_a8 = param_1[4];
  uStack_a4 = param_1[5];
  uStack_a0 = param_1[6];
  uStack_9c = param_1[7];
  local_98 = param_3;
  FUN_14700700a(local_90,param_4);
  local_58 = 0;
  local_48 = &PTR_LAB_149fca160;
  local_38 = &local_b8;
  local_68 = FUN_147007256;
  local_40 = &local_b9;
  local_30 = param_2;
  FUN_14700dee2();
  iVar2 = *(int *)(param_2 + 8);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return iVar1 != iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3690 FUN_146ff3690 body=147 status=ok
// SIG undefined FUN_146ff3690(void)

undefined4
FUN_146ff3690(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28[0] = 0;
  local_28[1] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_58 = param_5;
  local_48 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x108))(0,&local_48);
  if ((char)uVar1 != '\0') {
    FUN_142ad1306(local_28,param_3);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3724 FUN_146ff3724 body=299 status=ok
// SIG undefined FUN_146ff3724(void)

ulonglong FUN_146ff3724(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 local_60 [8];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  local_48 = 0x100000000;
  local_60[0] = 0;
  cVar1 = FUN_146ff3850(param_3,local_60);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    local_68 = local_60;
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,1);
    uVar4 = (ulonglong)uVar3;
  }
  local_60[0] = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  local_48 = 0x100000000;
  if (*(char *)(param_3 + 2) == '\x01') {
    local_68 = local_60;
    bVar2 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,4);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
  }
  cVar1 = FUN_146ff38ac(param_3,local_60);
  if (cVar1 != '\0') {
    local_68 = local_60;
    bVar2 = (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_4,2);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3850 FUN_146ff3850 body=92 status=ok
// SIG undefined FUN_146ff3850(void)

undefined1 * FUN_146ff3850(char *param_1,byte *param_2)

{
  param_2[0] = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 1;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  if (*param_1 == '\0') {
    if (param_1[1] != '\x01') {
      return (undefined1 *)0x0;
    }
    *param_2 = *param_2 | 1;
  }
  if (param_1[1] == '\0') {
    param_2[1] = param_2[1] | 1;
  }
  return &DAT_100000001;
}



// FUNCTION 146ff38ac FUN_146ff38ac body=93 status=ok
// SIG undefined FUN_146ff38ac(void)

undefined1 * FUN_146ff38ac(longlong param_1,byte *param_2)

{
  param_2[0] = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 1;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    if (*(char *)(param_1 + 4) != '\x01') {
      return (undefined1 *)0x0;
    }
    *param_2 = *param_2 | 8;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    param_2[1] = param_2[1] | 8;
  }
  return &DAT_100000001;
}



// FUNCTION 146ff390a FUN_146ff390a body=142 status=ok
// SIG undefined FUN_146ff390a(void)

byte FUN_146ff390a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar3 = param_5;
  bVar1 = FUN_1470110a6(param_1 + 8,param_2,param_3,param_4,param_5);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  bVar2 = FUN_146ff3476(param_2,param_3,param_4,param_5,uVar3 & 0xffffffffffffff00);
  return bVar2 | bVar1;
}



// FUNCTION 146ff3998 FUN_146ff3998 body=142 status=ok
// SIG undefined FUN_146ff3998(void)

byte FUN_146ff3998(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar3 = param_5;
  bVar1 = FUN_14701133e(param_1 + 8,param_2,param_3,param_4,param_5);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  bVar2 = FUN_146ff35ca(param_2,param_3,param_4,param_5,uVar3 & 0xffffffffffffff00);
  return bVar2 | bVar1;
}



// FUNCTION 146ff3a26 FUN_146ff3a26 body=147 status=ok
// SIG undefined FUN_146ff3a26(void)

undefined4
FUN_146ff3a26(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28[0] = 0;
  local_28[1] = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_58 = param_5;
  local_48 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x128))(0,&local_48);
  if ((char)uVar1 != '\0') {
    FUN_142ad1306(local_28,param_3);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3aba FUN_146ff3aba body=299 status=ok
// SIG undefined FUN_146ff3aba(void)

ulonglong FUN_146ff3aba(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 local_60 [8];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  local_48 = 0x100000000;
  local_60[0] = 0;
  cVar1 = FUN_146ff3850(param_3,local_60);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    local_68 = local_60;
    uVar3 = (**(code **)(*param_1 + 0x118))(param_1,param_2,param_4,1);
    uVar4 = (ulonglong)uVar3;
  }
  local_60[0] = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  local_48 = 0x100000000;
  if (*(char *)(param_3 + 2) == '\x01') {
    local_68 = local_60;
    bVar2 = (**(code **)(*param_1 + 0x118))(param_1,param_2,param_4,4);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
  }
  cVar1 = FUN_146ff38ac(param_3,local_60);
  if (cVar1 != '\0') {
    local_68 = local_60;
    bVar2 = (**(code **)(*param_1 + 0x118))(param_1,param_2,param_4,2);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 | bVar2);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3be6 FUN_146ff3be6 body=114 status=ok
// SIG undefined FUN_146ff3be6(void)

longlong FUN_146ff3be6(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar1 = FUN_147013822(param_1 + 8,param_3);
  if (lVar1 != 0) {
    FUN_146ffd52e(param_2,lVar1);
  }
  *(bool *)(param_2 + 0xb8) = lVar1 != 0;
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return param_2;
}



// FUNCTION 146ff3c58 FUN_146ff3c58 body=400 status=ok
// SIG undefined FUN_146ff3c58(void)

longlong * FUN_146ff3c58(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  PSRWLOCK SRWLock;
  longlong lVar6;
  undefined1 auStack_138 [40];
  PSRWLOCK local_110;
  undefined1 local_108 [184];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_3[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14700735c(param_2);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0xe40);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared(SRWLock);
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_3;
    lVar6 = 0;
    local_110 = SRWLock;
    do {
      lVar5 = FUN_147013822(param_1 + 8,*(undefined8 *)(lVar2 + lVar6));
      if (lVar5 == 0) {
        local_50 = '\0';
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1470073c4(param_2,iVar1);
        }
        FUN_147007458((longlong)iVar1 * 0xc0 + *param_2,local_108);
        if (local_50 == '\x01') {
          FUN_146ffe382(local_108);
        }
      }
      else {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1470073c4(param_2,iVar1);
        }
        lVar3 = *param_2;
        FUN_146ffd52e((longlong)iVar1 * 0xc0 + lVar3,lVar5);
        *(undefined1 *)(lVar3 + 0xb8 + (longlong)iVar1 * 0xc0) = 1;
        SRWLock = local_110;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3dea FUN_146ff3dea body=325 status=ok
// SIG undefined FUN_146ff3dea(void)

void FUN_146ff3dea(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  plVar1 = (longlong *)(param_1 + 0x1e8);
  lVar2 = param_1 + 0x1f8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x210) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x210);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      local_58 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x18);
      (*(code *)*param_2)(param_2[1],&local_58,
                          *(undefined8 *)(*local_80 + 8 + (longlong)iStack_64 * 0x18));
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff3f30 FUN_146ff3f30 body=632 status=ok
// SIG undefined FUN_146ff3f30(void)

bool FUN_146ff3f30(longlong *param_1,undefined8 param_2,longlong param_3,void **param_4)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  void *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  longlong local_50;
  longlong local_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_b8 = 1;
  local_78 = param_2;
  (**(code **)(*param_1 + 0x18))(0,param_2,&local_88,1);
  iVar3 = (int)uStack_80;
  if ((int)uStack_80 == 0) {
    uVar8 = 0;
    goto LAB_146ff40d2;
  }
  FUN_1400021e4(&local_78);
  if (param_3 != 0) {
    iVar1 = local_90 + -1;
    if (local_90 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_3,local_98,iVar1);
  }
  lVar2 = local_88;
  if (param_4 != (void **)0x0) {
    lVar9 = (longlong)(int)uStack_80;
    FUN_1427b4e9f(&local_50);
    if (lVar9 == 0) {
LAB_146ff415e:
      puVar6 = (undefined8 *)FUN_146872264();
LAB_146ff4045:
      local_a8 = (void *)0x0;
      uVar5 = *(uint *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        uStack_a0 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&local_a8,uVar5,0);
        memcpy(local_a8,_Src,(longlong)(int)uVar5 * 2);
      }
    }
    else {
      lVar10 = 0;
      uVar5 = 0;
      bVar7 = 0;
      do {
        if (*(longlong *)(lVar2 + 0x20 + lVar10) == local_50) {
          bVar11 = *(longlong *)(lVar2 + 0x28 + lVar10) == local_48;
        }
        else {
          bVar11 = false;
        }
        bVar7 = bVar7 | bVar11;
        uVar5 = uVar5 | *(uint *)(lVar2 + 0x3c + lVar10) >> 0x11 & 1;
        lVar10 = lVar10 + 0x70;
      } while (lVar9 * 0x70 - lVar10 != 0);
      if ((uVar5 != 0) || ((bool)(bVar7 ^ 1))) {
        if (uVar5 == 0) goto LAB_146ff415e;
        puVar6 = (undefined8 *)FUN_141538082();
        goto LAB_146ff4045;
      }
      local_58 = 0;
      local_60 = 0;
      cVar4 = FUN_1427b6ea4(&local_98,0xff,0);
      if (cVar4 == '\0') goto LAB_146ff415e;
      FUN_1468751e0(&local_60,&local_70,0);
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      FUN_14006620a(&local_40,local_70,local_68);
      local_a8 = local_40;
      uStack_a0 = uStack_38;
    }
    if (&local_a8 == param_4) {
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_4 = local_a8;
      local_a8 = (void *)0x0;
      *(undefined4 *)(param_4 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)param_4 + 0xc) = uStack_a0._4_4_;
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  uVar8 = uStack_80 & 0xffffffff;
LAB_146ff40d2:
  FUN_140195631(local_88,uVar8);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff41aa FUN_146ff41aa body=1941 status=ok
// SIG undefined FUN_146ff41aa(void)

longlong *
FUN_146ff41aa(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  void **ppvVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  byte local_1c9;
  void **local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  void *local_198;
  ulonglong uStack_190;
  longlong *local_180;
  ulonglong *local_178;
  undefined8 local_170;
  longlong *local_168;
  void **local_160;
  void *local_158;
  ulonglong uStack_150;
  longlong local_148 [2];
  longlong local_138;
  undefined4 local_130;
  longlong *local_f8;
  uint local_f0;
  uint local_ec;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)param_2 = *param_3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  ppvVar1 = (void **)(param_2 + 2);
  param_2[2] = 0;
  iVar3 = param_3[6];
  pvVar4 = *(void **)(param_3 + 4);
  *(int *)(param_2 + 3) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(ppvVar1,iVar3,0);
    memcpy(*ppvVar1,pvVar4,(longlong)iVar3 * 2);
  }
  lVar12 = FUN_140007850(param_3);
  if (lVar12 != 0) {
    FUN_1400bbfc4(&local_e8,lVar12);
    *(undefined4 *)param_2 = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_2 + 4) = local_e8._4_4_;
    *(int *)(param_2 + 1) = iStack_e0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_dc;
    if (&local_e8 == param_2) {
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = (longlong)local_d8;
      local_d8 = (void *)0x0;
      *(int *)(param_2 + 3) = local_d0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = local_cc;
    }
    lVar13 = FUN_140007dea();
    if (((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) ||
       (*(longlong *)(lVar12 + 0x28) == 0)) goto LAB_146ff42c6;
    FUN_1400bbfc4(&local_e8);
    *(undefined4 *)param_2 = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_2 + 4) = local_e8._4_4_;
    *(int *)(param_2 + 1) = iStack_e0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_dc;
    if (&local_e8 == param_2) {
      if (local_d8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[2] != 0) {
        FUN_1400020a8();
      }
      param_2[2] = (longlong)local_d8;
      local_d8 = (void *)0x0;
      *(int *)(param_2 + 3) = local_d0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = local_cc;
    }
  }
  local_160 = &local_158;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  local_170 = param_1;
  local_168 = param_2;
  lVar12 = FUN_142ad172c();
  local_1c9 = param_6 ^ 1;
  if (lVar12 == 0 && local_1c9 == 0) {
    FUN_14475cc44(param_2,&local_70);
    local_178 = local_60;
    local_180 = &local_70;
    FUN_141469cae(&local_138);
    local_198 = (void *)0x0;
    uStack_190 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = &local_138;
    FUN_142accb5c(&local_e8,param_4,param_5,&local_198);
    pvVar4 = local_198;
    FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
    if (pvVar4 != (void *)0x0) {
      FUN_1400020a8(pvVar4);
    }
    FUN_1447a1747(local_138,local_130);
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_142acd1a2(param_1,&local_e8);
    lVar12 = FUN_142ad172c(&local_170);
    FUN_146ff0bf0(&local_e8);
  }
  local_e8 = (void *)*param_2;
  iStack_e0 = (int)param_2[1];
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0xc);
  local_d8 = (void *)0x0;
  local_d0 = (int)param_2[3];
  lVar13 = (longlong)local_d0;
  pvVar4 = (void *)param_2[2];
  local_1c8 = ppvVar1;
  local_1c0 = param_4;
  if (lVar13 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar4,lVar13 * 2);
  }
  local_f8 = (longlong *)0x0;
  FUN_147007500(&local_138,&local_e8);
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  do {
    if (lVar12 == 0) break;
    local_e8 = *(void **)(lVar12 + 0x20);
    iStack_e0 = *(int *)(lVar12 + 0x28);
    uStack_dc = *(undefined4 *)(lVar12 + 0x2c);
    cVar11 = FUN_1427b1a8c(&local_e8);
    if (cVar11 == '\0') break;
    local_198 = (void *)0x0;
    uStack_190 = 0;
    cVar11 = FUN_146ff4940(lVar12,DAT_14c99d908,&local_198);
    if (cVar11 == '\0') {
LAB_146ff47b5:
      bVar8 = false;
    }
    else {
      local_e8 = local_198;
      iStack_e0 = (int)uStack_190 + -1;
      if ((int)uStack_190 == 0) {
        iStack_e0 = 0;
      }
      FUN_14475bf92(param_2,&local_e8);
      plVar14 = local_f8;
      if (local_f8 == (longlong *)0x0) {
        plVar14 = &local_138;
      }
      if ((longlong)(int)local_f0 != 0) {
        lVar13 = (longlong)(int)local_f0 << 5;
        do {
          cVar11 = FUN_144a7afa6(plVar14,param_2);
          if (cVar11 != '\0') goto LAB_146ff47b5;
          plVar14 = plVar14 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      FUN_1400e7e08(&local_e8,param_2);
      lVar12 = FUN_141734322(param_1,&local_e8);
      if (lVar12 == 0 && local_1c9 == 0) {
        FUN_14475cc44(param_2,local_148);
        local_1a0 = &local_138;
        local_1a8 = local_148;
        FUN_141469cae(&local_70,&local_1a8);
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        local_1e8 = &local_70;
        FUN_142accb5c(&local_e8,local_1c0,param_5,&local_1b8);
        lVar12 = local_1b8;
        FUN_1447a1747(local_1b8,uStack_1b0 & 0xffffffff);
        if (lVar12 != 0) {
          FUN_1400020a8(lVar12);
        }
        FUN_1447a1747(local_70,local_68);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_148[0] != 0) {
          FUN_1400020a8();
        }
        FUN_142acd1a2(param_1,&local_e8);
        FUN_1400e7e08(&local_70,param_2);
        lVar12 = FUN_141734322(param_1,&local_70);
        FUN_146ff0bf0(&local_e8);
      }
      uVar10 = local_f0;
      lVar13 = (longlong)(int)local_f0;
      local_f0 = local_f0 + 1;
      if (local_ec < local_f0) {
        FUN_1470075ec(&local_138,uVar10);
      }
      plVar14 = local_f8;
      if (local_f8 == (longlong *)0x0) {
        plVar14 = &local_138;
      }
      uVar5 = *(undefined4 *)((longlong)param_2 + 4);
      lVar9 = param_2[1];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
      plVar2 = plVar14 + lVar13 * 4;
      *(int *)plVar2 = (int)*param_2;
      *(undefined4 *)((longlong)plVar2 + 4) = uVar5;
      *(int *)(plVar2 + 1) = (int)lVar9;
      *(undefined4 *)((longlong)plVar2 + 0xc) = uVar6;
      plVar14[lVar13 * 4 + 2] = 0;
      iVar3 = (int)param_2[3];
      pvVar4 = (void *)param_2[2];
      *(int *)(plVar14 + lVar13 * 4 + 3) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)plVar14 + lVar13 * 0x20 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(plVar14 + lVar13 * 4 + 2,iVar3,0);
        memcpy((void *)plVar14[lVar13 * 4 + 2],pvVar4,(longlong)iVar3 * 2);
      }
      bVar8 = true;
    }
    if (local_198 != (void *)0x0) {
      FUN_1400020a8();
    }
  } while (bVar8);
  pvVar4 = local_158;
  ppvVar1 = local_1c8;
  uVar15 = uStack_150 & 0xffffffff;
  if (1 < (int)uStack_150) {
    if ((*param_2 == 0) || ((int)param_2[3] < 2)) {
      if (local_1c8 != &local_158) {
        *(int *)(param_2 + 3) = (int)uStack_150;
        FUN_1446dd670(local_1c8,uVar15,*(undefined4 *)((longlong)param_2 + 0x1c));
        memcpy((void *)param_2[2],pvVar4,uVar15 * 2);
      }
    }
    else {
      FUN_1449b8608(&local_70,local_1c8,&DAT_149e0635c);
      FUN_144a7dea0(&local_e8,&local_70,&local_158);
      iVar3 = iStack_e0;
      pvVar4 = local_e8;
      if (ppvVar1 != (void **)&local_e8) {
        lVar12 = (longlong)iStack_e0;
        *(int *)(param_2 + 3) = iStack_e0;
        if (iStack_e0 == 0 && *(int *)((longlong)param_2 + 0x1c) == 0) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          FUN_1446dd670(ppvVar1,iStack_e0);
          if (iVar3 != 0) {
            memcpy(*ppvVar1,pvVar4,lVar12 * 2);
          }
        }
      }
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_146ff49e6(&local_138);
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_146ff42c6:
  if ((local_60[0] ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ff4940 FUN_146ff4940 body=164 status=ok
// SIG undefined FUN_146ff4940(void)

bool FUN_146ff4940(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447c126c(param_1 + 0x40,&local_28,param_2);
  if (local_28 != 0) {
    FUN_14685b22e(&local_28,&local_38);
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff49e6 FUN_146ff49e6 body=53 status=ok
// SIG undefined FUN_146ff49e6(void)

void FUN_146ff49e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_140861e20(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ff4a1c FUN_146ff4a1c body=404 status=ok
// SIG undefined FUN_146ff4a1c(void)

undefined4 FUN_146ff4a1c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  longlong local_110;
  PSRWLOCK local_108;
  int local_100;
  char local_f8;
  char local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 1;
  local_110 = param_1 + 0xe40;
  local_f8 = '\0';
  local_f0 = '\x01';
  local_ec = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  FUN_140be6ad2(&local_108,local_110,&local_ec);
  if (local_f0 == '\x01') {
    LOCK();
    *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + -1;
    UNLOCK();
  }
  FUN_145782bfa(param_1 + -0x28,&local_110,&local_128,&local_e8);
  local_138 = *param_2;
  uStack_134 = param_2[1];
  uStack_130 = param_2[2];
  uStack_12c = param_2[3];
  uVar1 = FUN_142ad19c4(&local_128,&local_138,param_3);
  if (local_f8 == '\x01') {
    if (local_100 == 0) {
      ReleaseSRWLockShared(local_108);
    }
    else {
      ReleaseSRWLockExclusive(local_108);
    }
  }
  FUN_140cb5226(&local_e8);
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff4bb2 FUN_146ff4bb2 body=402 status=ok
// SIG undefined FUN_146ff4bb2(void)

void FUN_146ff4bb2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  longlong local_120;
  PSRWLOCK local_118;
  int local_110;
  char local_108;
  char local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 1;
  local_120 = param_1 + 0xe40;
  local_108 = '\0';
  local_100 = '\x01';
  local_fc = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  FUN_140be6ad2(&local_118,local_120,&local_fc);
  if (local_100 == '\x01') {
    LOCK();
    *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + -1;
    UNLOCK();
  }
  FUN_145782bfa(param_1 + -0x28,&local_120,&local_138,&local_f8);
  FUN_14624a5f4(&local_138,param_2,param_3,param_4);
  if (local_108 == '\x01') {
    if (local_110 == 0) {
      ReleaseSRWLockShared(local_118);
    }
    else {
      ReleaseSRWLockExclusive(local_118);
    }
  }
  FUN_140cb5226(&local_f8);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff4d46 FUN_146ff4d46 body=176 status=ok
// SIG undefined FUN_146ff4d46(void)

void FUN_146ff4d46(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  iVar1 = (*(int *)(param_1 + 0x8e0) - *(int *)(param_1 + 0x90c)) + *(int *)(param_2 + 8);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_2 + 0xc) < iVar1) {
    FUN_1408be2c4(param_2);
  }
  local_28 = &local_38;
  local_30 = FUN_142ade77e;
  local_38 = param_2;
  FUN_1470238dc(param_1 + 0x8d8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff4df8 FUN_146ff4df8 body=82 status=ok
// SIG undefined FUN_146ff4df8(void)

void FUN_146ff4df8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_142ade826;
  local_20 = param_2;
  (**(code **)(*param_1 + 0x178))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff4e4c FUN_146ff4e4c body=281 status=ok
// SIG undefined FUN_146ff4e4c(void)

void FUN_146ff4e4c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  code *local_58;
  longlong **local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  iVar4 = *(int *)(param_1 + 0x8e0) - *(int *)(param_1 + 0x90c);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (uStack_40._4_4_ < iVar4) {
    FUN_1402191ca(&local_48);
  }
  local_38 = &local_48;
  local_50 = &local_38;
  local_58 = FUN_142ade894;
  FUN_1470238dc(param_1 + 0x8d8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  lVar1 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      local_38 = *(longlong **)(lVar1 + lVar5);
      cVar2 = (*(code *)*param_2)(param_2[1],&local_38);
      if (cVar2 == '\0') break;
      bVar6 = lVar3 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff4f68 FUN_146ff4f68 body=200 status=ok
// SIG undefined FUN_146ff4f68(void)

void FUN_146ff4f68(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_38 = &local_48;
  local_40 = FUN_142ade8cc;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  local_48 = param_3;
  FUN_1446f470e(&local_50,puVar1,1);
  FUN_140e3dee2(param_1 + 0x8d8,local_50,&local_40,param_4);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff5032 FUN_146ff5032 body=160 status=ok
// SIG undefined FUN_146ff5032(void)

void FUN_146ff5032(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_38 = &local_48;
  local_40 = FUN_142ade974;
  local_48 = param_3;
  FUN_140e3dee2(param_1 + 0x8d8,*param_2,&local_40,param_4);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff50d4 FUN_146ff50d4 body=381 status=ok
// SIG undefined FUN_146ff50d4(void)

void FUN_146ff50d4(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_2a8 [40];
  longlong local_280 [2];
  undefined8 local_270;
  undefined1 *local_268;
  code *local_260;
  undefined1 **local_258;
  undefined1 local_250 [512];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x4000000000;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_258 = &local_268;
  local_260 = FUN_142ade9ac;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  local_268 = local_250;
  FUN_1446f470e(&local_270,puVar3,1);
  FUN_140e3dee2(param_1 + 0x8d8,local_270,&local_260,param_4);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  puVar4 = local_250;
  if (local_50 != (undefined1 *)0x0) {
    puVar4 = local_50;
  }
  lVar2 = (longlong)(int)local_48;
  if (lVar2 != 0) {
    lVar5 = 0;
    do {
      local_268 = *(undefined1 **)(puVar4 + lVar5);
      FUN_1400021e4(&local_268,local_280);
      bVar1 = (*(code *)*param_3)(param_3[1],local_280);
      if (local_280[0] != 0) {
        FUN_1400020a8();
      }
      bVar6 = lVar2 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while ((bVar1 & bVar6) != 0);
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff5252 FUN_146ff5252 body=310 status=ok
// SIG undefined FUN_146ff5252(void)

void FUN_146ff5252(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_288 [40];
  code *local_260;
  undefined1 **local_258;
  undefined1 *local_250;
  undefined1 local_248 [512];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x4000000000;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_258 = &local_250;
  local_260 = FUN_142ade9f8;
  local_250 = local_248;
  FUN_140e3dee2(param_1 + 0x8d8,param_2,&local_260,param_4);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  puVar3 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar3 = local_248;
  }
  lVar2 = (longlong)(int)local_40;
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      local_250 = *(undefined1 **)(puVar3 + lVar4);
      cVar1 = (*(code *)*param_3)(param_3[1],&local_250);
      if (cVar1 == '\0') break;
      bVar5 = lVar2 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff538a FUN_146ff538a body=472 status=ok
// SIG undefined FUN_146ff538a(void)

void FUN_146ff538a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (((*(int *)(param_3 + 0x18) + *(int *)(param_3 + 8) + *(int *)(param_3 + 0x28) +
        *(int *)(param_3 + 0x48) + *(int *)(param_3 + 0x58)) - *(int *)(param_3 + 0x84)) +
      *(int *)(param_3 + 0x144) + *(int *)(param_3 + 0x148) != 0) {
    local_238 = 0;
    local_230 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_22c = 0xffffffff00000080;
    local_224 = 0;
    local_218 = 0;
    local_210 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1dc = 0xffffffff00000080;
    local_1d4 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_18c = 0xffffffff00000080;
    local_184 = 0;
    local_178 = 0;
    local_170 = 0;
    local_148 = 0;
    local_140 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_13c = 0xffffffff00000080;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    (**(code **)(*param_1 + 0x1d0))(0,param_3,&local_258);
    FUN_146ff5563(param_2,&local_258,0);
    FUN_140be6d8c(&local_258);
  }
  if ((local_18 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff5563 FUN_146ff5563 body=380 status=ok
// SIG undefined FUN_146ff5563(void)

void FUN_146ff5563(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 unaff_RBP;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong unaff_R14;
  int local_68;
  
  cVar3 = FUN_140be6714(param_2);
  if (cVar3 != '\0') {
    iVar1 = (int)param_1[1];
    lVar10 = (longlong)iVar1;
    if (lVar10 != 0) {
      lVar2 = *param_1;
      bVar4 = FUN_146ff5958(lVar2,param_2,
                            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_3 == '\0') & 0xffffffff
                           );
      local_68 = 0;
      bVar4 = bVar4 ^ param_3 == '\0';
      iVar7 = 0;
      do {
        lVar6 = (longlong)iVar7;
        iVar12 = iVar7 + 1;
        if (iVar7 + 1 < iVar1) {
          iVar12 = iVar1;
        }
        lVar11 = lVar6 * 0x70;
        lVar13 = lVar2 + 0x70 + lVar11;
        iVar8 = iVar7;
        do {
          lVar6 = lVar6 + 1;
          iVar9 = iVar12;
          if (lVar10 <= lVar6) break;
          unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),param_3 == '\0');
          bVar5 = FUN_146ff5958(lVar13,param_2,unaff_R14 & 0xffffffff);
          iVar8 = iVar8 + 1;
          lVar13 = lVar13 + 0x70;
          iVar9 = iVar8;
        } while ((bVar4 & 1) == (bVar5 ^ param_3 == '\0'));
        iVar12 = iVar9 - iVar7;
        if ((bVar4 & 1) == 0) {
          if (local_68 != iVar7) {
            memmove((void *)((longlong)local_68 * 0x70 + lVar2),(void *)(lVar11 + lVar2),
                    (longlong)iVar12 * 0x70);
          }
          local_68 = local_68 + iVar12;
        }
        else {
          FUN_140195631(lVar11 + lVar2,iVar12);
        }
        bVar4 = bVar4 ^ 1;
        iVar7 = iVar9;
      } while (lVar6 < lVar10);
      *(int *)(param_1 + 1) = local_68;
      if ((local_68 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != local_68)) {
        FUN_147000e7a();
        return;
      }
    }
  }
  return;
}



// FUNCTION 146ff56e0 FUN_146ff56e0 body=483 status=ok
// SIG undefined FUN_146ff56e0(void)

void FUN_146ff56e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (((*(int *)(param_3 + 0x18) + *(int *)(param_3 + 8) + *(int *)(param_3 + 0x28) +
        *(int *)(param_3 + 0x48) + *(int *)(param_3 + 0x58)) - *(int *)(param_3 + 0x84)) +
      *(int *)(param_3 + 0x144) + *(int *)(param_3 + 0x148) != 0) {
    local_248 = 0;
    local_240 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_23c = 0xffffffff00000080;
    local_234 = 0;
    local_228 = 0;
    local_220 = 0;
    local_1f8 = 0;
    local_1f0 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_1ec = 0xffffffff00000080;
    local_1e4 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_19c = 0xffffffff00000080;
    local_194 = 0;
    local_188 = 0;
    local_180 = 0;
    local_158 = 0;
    local_150 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_14c = 0xffffffff00000080;
    local_144 = 0;
    local_138 = 0;
    local_130 = 0;
    local_108 = 0;
    local_100 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    (**(code **)(*param_1 + 0x1d0))(param_1,param_3,&local_268);
    (**(code **)(*param_1 + 0x1b0))(param_1,param_2,&local_268);
    FUN_140be6d8c(&local_268);
  }
  if ((local_20 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff58e0 FUN_146ff58e0 body=106 status=ok
// SIG undefined FUN_146ff58e0(void)

byte FUN_146ff58e0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 unaff_RBX;
  byte bVar1;
  
  bVar1 = param_3 == '\0';
  if ((*(int *)(param_2 + 8) + *(int *)(param_2 + 0x58) + *(int *)(param_2 + 0xf8) +
      *(int *)(param_2 + 0x198)) -
      (*(int *)(param_2 + 0x34) + *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x124) +
      *(int *)(param_2 + 0x1c4)) != *(int *)(param_2 + 0x214) - *(int *)(param_2 + 0x1e8)) {
    bVar1 = FUN_146ff5958(param_1,param_2,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3 == '\0') & 0xffffffff);
    bVar1 = bVar1 ^ param_3 == '\0' ^ 1;
  }
  return bVar1;
}



// FUNCTION 146ff5958 FUN_146ff5958 body=1315 status=ok
// SIG undefined FUN_146ff5958(void)

byte FUN_146ff5958(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_c8 [47];
  byte local_99;
  longlong *local_98;
  uint local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_2 + 0x34) < (int)param_2[1]) {
    lVar3 = *param_1;
    uVar19 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar9 = (uint)lVar3 & 0xffff;
    plVar14 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_2[8];
    }
    iVar12 = *(int *)((longlong)plVar14 +
                     (ulonglong)
                     ((int)param_2[9] - 1U &
                     (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                     (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        if (*(longlong *)(*param_2 + (longlong)iVar12 * 0x10) == lVar3) {
          bVar7 = 1;
          if (param_3 != 0) goto LAB_146ff5a37;
          goto LAB_146ff5a02;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x10 + *param_2 + 8);
      } while (iVar12 != -1);
    }
    if (param_3 == 0) goto LAB_146ff5a37;
LAB_146ff5a00:
    bVar7 = 0;
  }
  else {
LAB_146ff5a37:
    if (*(int *)((longlong)param_2 + 0x84) < (int)param_2[0xb]) {
      lVar3 = param_1[1];
      uVar19 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar9 = (uint)lVar3 & 0xffff;
      plVar14 = param_2 + 0x11;
      if ((longlong *)param_2[0x12] != (longlong *)0x0) {
        plVar14 = (longlong *)param_2[0x12];
      }
      iVar12 = *(int *)((longlong)plVar14 +
                       (ulonglong)
                       ((int)param_2[0x13] - 1U &
                       (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                       (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar12 != -1) {
        do {
          if (*(longlong *)(param_2[10] + (longlong)iVar12 * 0x10) == lVar3) {
            bVar7 = 1;
            if (param_3 != 0) goto LAB_146ff5ac7;
            goto LAB_146ff5a02;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x10 + param_2[10] + 8);
        } while (iVar12 != -1);
      }
      if (param_3 != 0) goto LAB_146ff5a00;
    }
LAB_146ff5ac7:
    if (*(int *)((longlong)param_2 + 0x124) < (int)param_2[0x1f]) {
      FUN_1468fc08c(&local_98,*param_1,param_1[2]);
      uVar19 = (uint)(CONCAT44(uStack_8c,local_90) >> 0x10);
      uVar9 = (uint)((ulonglong)local_98 >> 0x10);
      uVar17 = (uint)local_98 & 0xffff;
      uVar9 = ((uint)local_98 << 0x10 | uVar17) + (int)((ulonglong)local_98 >> 0x20) +
              (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar17 >> 4);
      iVar12 = 0;
      uVar10 = FUN_144a78877(0,(uVar9 >> 2) +
                               (local_90 << 0x10 | local_90 & 0xffff) + uStack_8c +
                               (uVar19 << 0x13 | uVar19 & 0xffff) + ((local_90 & 0xffff) >> 4) +
                               uVar9 * 0x40 + 0x9e3779b9 ^ uVar9);
      if ((uint)local_80 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)CONCAT44(uStack_84,uStack_88);
        iVar12 = (uint)local_80 + -1;
      }
      uVar11 = FUN_144a49b4a(iVar12,puVar15);
      uVar10 = FUN_144a78877(uVar10,uVar11);
      iVar12 = FUN_1403af82c(param_2 + 0x1e,uVar10,&local_98);
      if (CONCAT44(uStack_84,uStack_88) != 0) {
        FUN_1400020a8();
      }
      if ((iVar12 != -1) == (bool)param_3) goto LAB_146ff5bdf;
      param_3 = param_3 ^ 1;
    }
    else {
LAB_146ff5bdf:
      if (*(int *)((longlong)param_2 + 0x1c4) < (int)param_2[0x33]) {
        lVar3 = param_1[4];
        lVar4 = param_1[5];
        uVar19 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar18 = (uint)lVar3 & 0xffff;
        uVar9 = (uint)((ulonglong)lVar4 >> 0x10);
        uVar17 = (uint)lVar4 & 0xffff;
        uVar19 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar18) +
                 (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar18 >> 4);
        plVar14 = param_2 + 0x39;
        if ((longlong *)param_2[0x3a] != (longlong *)0x0) {
          plVar14 = (longlong *)param_2[0x3a];
        }
        iVar12 = *(int *)((longlong)plVar14 +
                         (ulonglong)
                         ((int)param_2[0x3b] - 1U &
                         ((uVar19 >> 2) +
                          ((uint)lVar4 << 0x10 | uVar17) + (int)((ulonglong)lVar4 >> 0x20) +
                          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar17 >> 4) + uVar19 * 0x40 +
                          0x9e3779b9 ^ uVar19)) * 4);
        if (iVar12 != -1) {
          lVar5 = param_2[0x32];
          do {
            lVar16 = (longlong)iVar12;
            if ((*(longlong *)(lVar5 + lVar16 * 0x18) == lVar3) &&
               (*(longlong *)(lVar5 + 8 + lVar16 * 0x18) == lVar4)) {
              bVar7 = 1;
              if (param_3 != 0) goto LAB_146ff5ce2;
              goto LAB_146ff5a02;
            }
            iVar12 = *(int *)(lVar5 + lVar16 * 0x18 + 0x10);
          } while (iVar12 != -1);
        }
        if (param_3 != 0) goto LAB_146ff5a00;
      }
LAB_146ff5ce2:
      if (*(int *)((longlong)param_2 + 0x214) < (int)param_2[0x3d]) {
        plVar14 = param_2 + 0x3c;
        plVar1 = param_2 + 0x3e;
        local_70 = 0x100000000;
        local_60 = 0xffffffff;
        uStack_58 = 0;
        local_99 = param_3;
        uStack_68 = plVar1;
        if ((int)param_2[0x41] == 0) {
          iVar12 = 0;
        }
        else {
          FUN_1449c0562(&local_70);
          iVar12 = (int)param_2[0x41];
        }
        uStack_78 = CONCAT44(uStack_54,uStack_58);
        local_80 = local_60;
        uVar6 = local_80;
        local_90 = (uint)local_70;
        uStack_8c = local_70._4_4_;
        uStack_88 = (undefined4)uStack_68;
        uStack_84 = uStack_68._4_4_;
        local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
        local_98 = plVar14;
        if ((local_80._4_4_ != iVar12) || (uStack_68 != plVar1)) {
          iVar13 = local_80._4_4_;
          local_80 = uVar6;
          do {
            puVar2 = (undefined8 *)(*local_98 + (longlong)iVar13 * 0x20);
            if (*(int *)(*local_98 + 0x14 + (longlong)iVar13 * 0x20) == -1) {
              FUN_1447c126c(param_1 + 8,&local_70,*puVar2);
              if (local_70 != 0) goto LAB_146ff5e50;
            }
            else {
              FUN_1447c126c(param_1 + 8,local_50,*puVar2);
              local_70 = puVar2[1];
              iVar13 = *(int *)(puVar2 + 2) + -1;
              if (*(int *)(puVar2 + 2) == 0) {
                iVar13 = 0;
              }
              uStack_68 = (longlong *)CONCAT44(uStack_68._4_4_,iVar13);
              cVar8 = FUN_140c20914(local_50,&local_70);
              if (cVar8 != '\0') {
LAB_146ff5e50:
                bVar7 = 1;
                param_3 = local_99;
                if (local_99 != 0) goto LAB_146ff5d80;
                goto LAB_146ff5a02;
              }
            }
            local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
            FUN_1449c0562(&local_90);
            iVar13 = local_80._4_4_;
            uVar6 = local_80;
          } while (local_98 != plVar14 ||
                   ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar1 || local_80._4_4_ != iVar12)
                  );
        }
        local_80 = uVar6;
        param_3 = 0;
        if (local_99 != 0) goto LAB_146ff5a00;
      }
    }
LAB_146ff5d80:
    bVar7 = param_3;
  }
LAB_146ff5a02:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff5e84 FUN_146ff5e84 body=170 status=ok
// SIG undefined FUN_146ff5e84(void)

uint FUN_146ff5e84(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_140d57cf8();
  FUN_1468581d0(&DAT_14c927a10,&local_40,*(undefined4 *)(param_1 + 0x30));
  if ((longlong)local_38 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)(local_40 + lVar4));
      if (uVar1 == 3) {
        uVar1 = 3;
        goto LAB_146ff5f06;
      }
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = lVar4 + 4;
    } while ((longlong)local_38 * 4 != lVar4);
    uVar1 = 3;
    if (uVar3 < 3) {
      uVar1 = uVar3;
    }
  }
LAB_146ff5f06:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 146ff5f44 FUN_146ff5f44 body=110 status=ok
// SIG undefined FUN_146ff5f44(void)

void FUN_146ff5f44(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_140d57cf8();
  FUN_1468581d0(&DAT_14c927a10,&local_28,*(undefined4 *)(param_1 + 0x30));
  if (local_20 != 0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,*local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff5fb4 FUN_146ff5fb4 body=92 status=ok
// SIG undefined FUN_146ff5fb4(void)

undefined4 FUN_146ff5fb4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = FUN_146ff6010(param_1 + 8,param_2,0,param_3);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return uVar1;
}



// FUNCTION 146ff6010 FUN_146ff6010 body=794 status=ok
// SIG undefined FUN_146ff6010(void)

ulonglong FUN_146ff6010(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  size_t _Size;
  ulonglong uVar7;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f0 = param_3;
  local_c0 = param_2;
  FUN_144732142(local_98,0x20);
  if (local_50 < 0x20) {
    local_50 = 0x20;
    FUN_144869b4a();
  }
  FUN_144a13f80(local_98,&local_e8,&local_c0,0);
  if (param_4 != '\0') {
    FUN_140e3de74(param_1 + 0x8d0,local_c0,local_98,1);
  }
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar6 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar6 = local_70;
  }
  local_d0 = local_a8;
  iStack_cc = iStack_a4;
  local_c8 = local_a0;
  local_c4 = local_9c;
  local_e0 = local_b8;
  local_d8 = local_b0;
  local_e8 = local_98;
  if ((iStack_a4 == iVar6) && (local_b0 == local_88)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      if (*(int *)(param_1 + 0x520) != *(int *)(param_1 + 0x54c)) {
        lVar2 = *(longlong *)(*local_e8 + (longlong)iStack_cc * 0x10);
        uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar5 = (uint)lVar2 & 0xffff;
        lVar4 = *(longlong *)(param_1 + 0x558);
        if (*(longlong *)(param_1 + 0x558) == 0) {
          lVar4 = param_1 + 0x550;
        }
        iVar3 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x560) - 1U &
                                 (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
        if (iVar3 != -1) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x518) + (longlong)iVar3 * 0x20;
            if (*(longlong *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar3 * 0x20) == lVar2) {
              if ((undefined8 *)(lVar4 + 8) != (undefined8 *)0x0 && lVar4 != 0) {
                if (local_f0 == (longlong *)0x0) {
                  uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
                  goto LAB_146ff6168;
                }
                uVar1 = *(uint *)(lVar4 + 0x10);
                _Size = 0;
                if ((longlong)(int)uVar1 != 0) {
                  iVar3 = (int)local_f0[1];
                  *(uint *)(local_f0 + 1) = iVar3 + uVar1;
                  if ((uint)(*(int *)((longlong)local_f0 + 0xc) - iVar3) < uVar1) {
                    FUN_1446f84a2(local_f0,iVar3);
                  }
                  _Size = (longlong)(int)uVar1 << 3;
                  memcpy((void *)((longlong)iVar3 * 8 + *local_f0),*(void **)(lVar4 + 8),_Size);
                }
                uVar7 = CONCAT71((int7)(_Size >> 8),1);
              }
              break;
            }
            iVar3 = *(int *)(lVar4 + 0x18);
          } while (iVar3 != -1);
        }
      }
      local_d0 = local_d0 & ~local_e0._4_4_;
      FUN_1449c0562(&local_e0);
    } while (local_e8 != local_98 || (local_d8 != local_88 || iStack_cc != iVar6));
  }
LAB_146ff6168:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffff01;
}



// FUNCTION 146ff632c FUN_146ff632c body=100 status=ok
// SIG undefined FUN_146ff632c(void)

undefined4 FUN_146ff632c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = FUN_146ff6010(param_1 + 8,param_2,param_3,param_4);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return uVar1;
}



// FUNCTION 146ff6390 FUN_146ff6390 body=319 status=ok
// SIG undefined FUN_146ff6390(void)

bool FUN_146ff6390(char *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  code *local_58;
  char **local_50;
  undefined1 *local_48;
  char **local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &local_31;
  local_31 = '\0';
  local_48 = &LAB_142adfa08;
  local_40 = &local_68;
  FUN_146ff0c84(param_1,param_3);
  cVar3 = local_31;
  if (*(int *)(param_1 + 0x520) != *(int *)(param_1 + 0x54c)) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    pcVar4 = param_1 + 0x550;
    if (*(char **)(param_1 + 0x558) != (char *)0x0) {
      pcVar4 = *(char **)(param_1 + 0x558);
    }
    iVar6 = *(int *)(pcVar4 + (ulonglong)
                              (*(int *)(param_1 + 0x560) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                              (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar6 * 0x20) == param_3) {
          bVar2 = true;
          goto LAB_146ff63ed;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x518) + (longlong)iVar6 * 0x20 + 0x18);
      } while (iVar6 != -1);
    }
  }
  bVar2 = false;
LAB_146ff63ed:
  if (!bVar2 && local_31 == '\0') {
    local_58 = FUN_142adfa12;
    local_68 = param_1;
    local_60 = param_2;
    local_50 = &local_68;
    FUN_147022d12(param_1 + 0x8d0,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return !bVar2 && cVar3 == '\0';
}



// FUNCTION 146ff64d0 FUN_146ff64d0 body=105 status=ok
// SIG undefined FUN_146ff64d0(void)

void FUN_146ff64d0(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_20,puVar1,1);
  (**(code **)(*param_1 + 0x230))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff653a FUN_146ff653a body=82 status=ok
// SIG undefined FUN_146ff653a(void)

undefined4 FUN_146ff653a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = FUN_1470236e6(param_1 + 0x8d8,param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return uVar1;
}



// FUNCTION 146ff658c FUN_146ff658c body=91 status=ok
// SIG undefined FUN_146ff658c(void)

void FUN_146ff658c(longlong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ad20ee(param_1 + -0x28,param_2,&local_18,(uint)param_3 + (uint)param_4 * 2 + 4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1447a1747(0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff65e8 FUN_146ff65e8 body=88 status=ok
// SIG undefined FUN_146ff65e8(void)

void FUN_146ff65e8(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ad20ee(param_1 + -0x28,&local_18,param_2,param_3 | 4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1447a1747(0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff6672 FUN_146ff6672 body=522 status=ok
// SIG undefined FUN_146ff6672(void)

void FUN_146ff6672(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_2c8 [40];
  undefined1 *local_2a0;
  undefined4 local_298;
  undefined1 *local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined1 local_270 [15];
  char local_261;
  undefined8 local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_261 = '\0';
  local_260 = param_3;
  FUN_144a13f80(param_1 + 0x4c8,&local_258,&local_260,&local_261);
  if (local_261 == '\0') {
    local_240 = '\0';
    local_258 = local_238;
    local_250 = local_238;
    local_248 = &local_38;
    FUN_14005eb5c(&local_260,&local_258);
    local_290 = local_258;
    local_288 = (undefined4)((ulonglong)((longlong)local_250 - (longlong)local_258) >> 1);
    FUN_1412a5ca6(&local_280);
    FUN_1446f82e2(local_270,local_278,local_280,1);
    if (local_240 == '\x01') {
      FUN_1400020a8(local_258);
    }
    local_240 = '\0';
    local_258 = local_238;
    local_250 = local_238;
    local_248 = &local_38;
    FUN_14005eb5c(local_270,&local_258);
    local_2a0 = local_258;
    local_298 = (undefined4)((ulonglong)((longlong)local_250 - (longlong)local_258) >> 1);
    FUN_140a8f1ea(param_1,param_2);
    if (local_240 == '\x01') {
      FUN_1400020a8(local_258);
    }
    uVar4 = (uint)local_270._0_8_ & 0xffff;
    plVar3 = (longlong *)
             FUN_140e6d7e2(param_1 + 0x518,
                           ((uint)local_270._0_8_ << 0x10 | uVar4) + SUB84(local_270._0_8_,4) +
                           (SUB84(local_270._0_8_,2) << 0x13 | SUB84(local_270._0_8_,2) & 0xffff) +
                           (uVar4 >> 4));
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar3,iVar1);
    }
    *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = local_260;
    iVar1 = *(int *)(param_2 + 0x40);
    *(uint *)(param_2 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x44) < iVar1 + 1U) {
      FUN_147008fda((longlong *)(param_2 + 0x38),iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x38);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = local_260;
    *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff687e FUN_146ff687e body=537 status=ok
// SIG undefined FUN_146ff687e(void)

void FUN_146ff687e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined8 local_238 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_268 = param_3;
  iVar3 = FUN_144a8b5fe(param_1 + 0x4c8,param_3);
  if (iVar3 != 0) {
    local_258 = local_238;
    local_240 = '\0';
    local_248 = &local_38;
    local_250 = local_258;
    FUN_14005eb5c(&local_268,&local_258);
    local_288 = local_258;
    local_280 = (undefined4)((ulonglong)((longlong)local_250 - (longlong)local_258) >> 1);
    FUN_1412a5ca6(&local_278);
    FUN_1446f82e2(&local_260,local_270,local_278,1);
    if (local_240 == '\x01') {
      FUN_1400020a8(local_258);
    }
    if (*(int *)(param_1 + 0x520) != *(int *)(param_1 + 0x54c)) {
      uVar2 = (uint)((ulonglong)local_260 >> 0x10);
      uVar5 = (uint)local_260 & 0xffff;
      lVar4 = param_1 + 0x550;
      if (*(longlong *)(param_1 + 0x558) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x558);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x560) - 1U &
                               (int)((ulonglong)local_260 >> 0x20) +
                               ((uint)local_260 << 0x10 | uVar5) + (uVar2 << 0x13 | uVar2 & 0xffff)
                               + (uVar5 >> 4)) * 4);
      if (iVar3 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x518);
        do {
          lVar1 = lVar4 + (longlong)iVar3 * 0x20;
          if (*(longlong *)(lVar4 + (longlong)iVar3 * 0x20) == local_260) {
            if ((lVar1 != -8 && lVar1 != 0) &&
               (local_258 = &local_268, FUN_1408ff3be(), *(int *)(lVar1 + 0x10) == 0)) {
              FUN_14681be7e((longlong *)(param_1 + 0x518),local_260);
              FUN_146ff6390(param_1,param_2,local_260);
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x18);
        } while (iVar3 != -1);
      }
    }
    iVar3 = *(int *)(param_2 + 0x40);
    *(uint *)(param_2 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x44) < iVar3 + 1U) {
      FUN_147008fda((longlong *)(param_2 + 0x38),iVar3);
    }
    lVar4 = *(longlong *)(param_2 + 0x38);
    *(undefined8 *)(lVar4 + (longlong)iVar3 * 0xc) = local_268;
    *(undefined4 *)(lVar4 + 8 + (longlong)iVar3 * 0xc) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff6a98 FUN_146ff6a98 body=525 status=ok
// SIG undefined FUN_146ff6a98(void)

void FUN_146ff6a98(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  code *local_78;
  undefined1 **local_70;
  undefined1 local_68 [8];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x100000000;
  local_70 = &local_98;
  local_78 = FUN_142adfacc;
  local_98 = local_68;
  FUN_146ff8c62(param_1,param_3);
  if (0 < (int)local_58) {
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = param_3;
    uVar1 = FUN_147008ecb(&local_98);
    iVar2 = FUN_147008e62((longlong *)(param_1 + 400),uVar1,&local_98);
    if (((iVar2 != -1) &&
        (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 400),
        plVar4 = (longlong *)(lVar3 + 0x20), plVar4 != (longlong *)0x0 && lVar3 != 0)) &&
       (lVar3 = *plVar4, lVar3 != 0)) {
      FUN_1470145a0(lVar3,&local_a8);
    }
    puVar8 = local_68;
    if (local_60 != (undefined1 *)0x0) {
      puVar8 = local_60;
    }
    lVar3 = (longlong)(int)local_58;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        FUN_146ff7e66(param_1,param_2,*(undefined8 *)(puVar8 + lVar7));
        lVar7 = lVar7 + 8;
      } while (lVar3 * 8 != lVar7);
    }
    if ((int)uStack_a0 != 0) {
      lVar3 = FUN_14700ef9c(param_1,&local_98);
      if ((longlong)(int)uStack_a0 != 0) {
        lVar7 = (longlong)(int)uStack_a0 * 0x24;
        lVar6 = local_a8;
        do {
          lVar5 = FUN_14700ef9c(param_1,lVar6);
          if (lVar5 != 0) {
            FUN_1470149f0(lVar5,lVar3,lVar6 + 0x20);
            local_c8 = 0;
            uStack_c0 = 0;
            local_b8 = (undefined1)((*(uint *)(lVar3 + 0xc0) & 8) >> 3);
            FUN_147014b4c(lVar5,0,0,lVar3 + 0x50);
          }
          lVar6 = lVar6 + 0x24;
          lVar7 = lVar7 + -0x24;
        } while (lVar7 != 0);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8(local_a8);
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff6cb2 FUN_146ff6cb2 body=164 status=ok
// SIG undefined FUN_146ff6cb2(void)

undefined1 FUN_146ff6cb2(double *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (code *)param_1[2];
  if (pcVar1 == (code *)0x0) {
LAB_146ff6d10:
    if (*param_1 <= 0.0) goto LAB_146ff6cf5;
    QueryPerformanceCounter(&local_20);
    dVar5 = ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *param_1;
    if (dVar5 < param_1[1] || dVar5 == param_1[1]) goto LAB_146ff6cf5;
  }
  else {
    pdVar4 = param_1 + 6;
    if ((double *)param_1[4] != (double *)0x0) {
      pdVar4 = (double *)param_1[4];
    }
    uVar3 = (**(code **)((longlong)*pdVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3);
    if (cVar2 == '\0') goto LAB_146ff6d10;
  }
  *(undefined1 *)(param_1 + 10) = 1;
LAB_146ff6cf5:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined1 *)(param_1 + 10);
}



// FUNCTION 146ff6d58 FUN_146ff6d58 body=408 status=ok
// SIG undefined FUN_146ff6d58(void)

void FUN_146ff6d58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146ffd7bc(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146ffd958(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x18;
      uStack_50 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x18 + 8);
      FUN_147007996(param_1,local_34);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    FUN_147007ace(param_2);
    FUN_147007c12(param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff6ef2 FUN_146ff6ef2 body=410 status=ok
// SIG undefined FUN_146ff6ef2(void)

void FUN_146ff6ef2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146ffe1ca(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146ffdf4e(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0xf8;
      uStack_50 = (longlong *)((longlong)iStack_64 * 0xf8 + *local_80 + 8);
      FUN_147007d3e(param_1,local_34);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    FUN_147007e76(param_2);
    FUN_147007fc0(param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff708e FUN_146ff708e body=165 status=ok
// SIG undefined FUN_146ff708e(void)

void FUN_146ff708e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1408d9e0e(param_1 + 0xbc8,0);
  FUN_146fece5c(param_1 + 0xb70);
  FUN_146fece9c(param_1 + 0xb18);
  FUN_146ff1518(param_1);
  FUN_142ad3b7c(param_1,*(undefined8 *)(param_1 + 0xdb0));
  lVar1 = *(longlong *)(param_1 + 0x970);
  lVar2 = *(longlong *)(lVar1 + 0x88);
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x180;
    FUN_142ac6e74(lVar2);
    FUN_146fe6748(lVar2);
  }
  *(undefined1 *)(lVar1 + 0x15a) = 1;
  *(undefined1 *)(param_2 + 0x68) = 1;
  *(undefined1 *)(param_1 + 0xdb9) = 1;
  *(undefined4 *)(param_1 + 0xdc4) = DAT_14c75f4cc;
  return;
}



// FUNCTION 146ff7134 FUN_146ff7134 body=357 status=ok
// SIG undefined FUN_146ff7134(void)

void FUN_146ff7134(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  FUN_146ffecfa();
  FUN_146ffedbe(param_1,*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34));
  FUN_146ffecfa(param_1 + 0x50);
  FUN_146ffedbe(param_1 + 0x50,*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84));
  iVar3 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac);
  uVar1 = (ulonglong)(iVar3 + -1 + (uint)(iVar3 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 0;
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xac)) {
    iVar3 = iVar4;
  }
  FUN_146ffad10(param_1 + 0xa0,iVar3);
  FUN_146ffee02(param_1 + 0xb8);
  FUN_146ffdf0a(param_1 + 0xb8,*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec));
  FUN_146ffee02(param_1 + 0x108);
  FUN_146ffdf0a(param_1 + 0x108,*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x13c));
  iVar3 = *(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x164);
  uVar1 = (ulonglong)(iVar3 + -1 + (uint)(iVar3 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (*(int *)(param_1 + 0x168) == *(int *)(param_1 + 0x164)) {
    iVar3 = iVar4;
  }
  FUN_146ffad10(param_1 + 0x158,iVar3);
  iVar3 = *(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x17c);
  uVar1 = (ulonglong)(iVar3 + -1 + (uint)(iVar3 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if (*(int *)(param_1 + 0x180) == *(int *)(param_1 + 0x17c)) {
    iVar3 = iVar4;
  }
  FUN_146ffaff6(param_1 + 0x170,iVar3);
  if (*(int *)(param_1 + 0x194) == *(int *)(param_1 + 400)) {
    return;
  }
  FUN_1408be2c4(param_1 + 0x188);
  return;
}



// FUNCTION 146ff729a FUN_146ff729a body=230 status=ok
// SIG undefined FUN_146ff729a(void)

void FUN_146ff729a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_538 [32];
  undefined1 local_518;
  undefined8 local_510;
  code *local_508;
  undefined8 *local_500;
  undefined1 local_4f8 [1224];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_538;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_538);
    }
  }
  else {
    FUN_145c80432(local_4f8);
    local_508 = (code *)0x101;
    FUN_1415d7ad8(local_4f8,param_2,&local_508,0);
    local_518 = 0;
    FUN_14576f24a(param_1,param_3,local_4f8,2);
    local_500 = &local_510;
    local_508 = FUN_142adfb86;
    local_510 = param_1;
    FUN_141734b78(param_1,&local_508);
    FUN_145969a1a(local_4f8);
  }
  if ((local_30 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff73a8 FUN_146ff73a8 body=288 status=ok
// SIG undefined FUN_146ff73a8(void)

longlong FUN_146ff73a8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x48) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x48) < 2) {
    lVar3 = lVar2;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x98) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x98) < 2) {
    lVar4 = lVar2;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x100) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x100) < 2) {
    lVar5 = lVar2;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x150) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x150) < 2) {
    lVar1 = lVar2;
  }
  return lVar3 + (ulonglong)(*(int *)(param_1 + 0x2c) + 0x1fU >> 5) * 4 +
         ((longlong)*(int *)(param_1 + 0x5c) + (longlong)*(int *)(param_1 + 0xc)) * 0x18 +
         (ulonglong)(*(int *)(param_1 + 0x7c) + 0x1fU >> 5) * 4 + lVar4 +
         (ulonglong)(*(int *)(param_1 + 0xe4) + 0x1fU >> 5) * 4 +
         ((longlong)*(int *)(param_1 + 0x114) + (longlong)*(int *)(param_1 + 0xc4)) * 0xf8 + lVar5 +
         (ulonglong)(*(int *)(param_1 + 0x134) + 0x1fU >> 5) * 4 + lVar1 +
         (longlong)(*(int *)(param_1 + 0x178) + 1) * 8 +
         ((longlong)*(int *)(param_1 + 0x194) +
         (longlong)(*(int *)(param_1 + 0x160) + 1) + (longlong)(*(int *)(param_1 + 0xa8) + 1)) *
         0x10;
}



// FUNCTION 146ff74c8 FUN_146ff74c8 body=422 status=ok
// SIG undefined FUN_146ff74c8(void)

longlong FUN_146ff74c8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  iVar4 = *(int *)((longlong)param_1 + 0x7c);
  iVar11 = 0;
  lVar9 = (longlong)(int)param_1[9] * 4;
  if ((ulonglong)(longlong)(int)param_1[9] < 2) {
    lVar9 = 0;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x5c);
  lVar8 = (longlong)(int)param_1[0x13] * 4;
  if ((ulonglong)(longlong)(int)param_1[0x13] < 2) {
    lVar8 = 0;
  }
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
    iVar11 = (int)param_1[5];
  }
  lVar8 = (longlong)iVar2 * 0x60 + (ulonglong)(iVar3 + 0x1fU >> 5) * 4 + lVar9 +
          (longlong)iVar5 * 0x18 + (ulonglong)(iVar4 + 0x1fU >> 5) * 4 + lVar8;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if ((iStack_3c != iVar11) || (local_48 != plVar1)) {
    do {
      lVar9 = *local_78;
      lVar6 = (longlong)iStack_5c * 0x60;
      uVar7 = (ulonglong)*(int *)(lVar9 + 0x50 + lVar6);
      lVar10 = 0;
      if (1 < uVar7) {
        lVar10 = uVar7 * 4;
      }
      lVar8 = (longlong)*(int *)(lVar9 + 0x14 + lVar6) * 0x10 + lVar8 +
              (ulonglong)(*(int *)(lVar9 + 0x34 + lVar6) + 0x1fU >> 5) * 4 + lVar10;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 || (local_68 != plVar1 || iStack_5c != iVar11));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff7670 FUN_146ff7670 body=124 status=ok
// SIG undefined FUN_146ff7670(void)

void FUN_146ff7670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [648];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_147017cf6(local_2a8);
  cVar1 = FUN_147017fbc(local_2a8,param_2,0);
  if (cVar1 != '\0') {
    FUN_146ff76ed(local_2a8,param_3);
  }
  FUN_147017d8a(local_2a8);
  if ((local_20 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff76ed FUN_146ff76ed body=585 status=ok
// SIG undefined FUN_146ff76ed(void)

void FUN_146ff76ed(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_178 [32];
  int local_158;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 uStack_117;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_11f = 0;
  uStack_118 = 0;
  uStack_117 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xffffffff;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_158 = (uint)*(byte *)(param_2 + 4) * 2;
  cVar6 = FUN_146fe98e8();
  if (cVar6 != '\0') {
    FUN_146ff7a48(param_2,uStack_130 & 0xffffffff);
    lVar5 = local_138;
    lVar8 = (longlong)(int)uStack_130;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14171b750(param_2,iVar2);
        }
        FUN_1400e7d28((longlong)iVar2 * 0x70 + *param_2,uVar3);
        lVar7 = lVar7 + 8;
      } while (lVar8 * 8 != lVar7);
    }
    bVar9 = (longlong)uStack_130 < 0;
    uStack_130 = uStack_130 & 0xffffffff00000000;
    if (bVar9) {
      FUN_140944cba(&local_138,0);
    }
    if ((char)param_2[4] != '\0') {
      plVar1 = param_2 + 2;
      FUN_140ee6e62(plVar1,uStack_60 & 0xffffffff);
      lVar5 = local_68;
      lVar8 = (longlong)(int)uStack_60;
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          iVar2 = (int)param_2[3];
          *(uint *)(param_2 + 3) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0x1c) < iVar2 + 1U) {
            FUN_1446f84a2(plVar1,iVar2);
          }
          *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar5 + lVar7);
          lVar7 = lVar7 + 0xc;
        } while (lVar8 * 0xc != lVar7);
      }
    }
  }
  lVar5 = local_138;
  lVar8 = (longlong)(int)uStack_130;
  if (lVar8 != 0) {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + lVar7);
      if (lVar4 != 0) {
        FUN_14128b0c2(lVar4);
        FUN_1400020a8(lVar4);
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  FUN_146ff7a86(&local_128);
  FUN_1447a1747(local_148,uStack_140 & 0xffffffff);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff7938 FUN_146ff7938 body=146 status=ok
// SIG undefined FUN_146ff7938(void)

void FUN_146ff7938(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  int local_2b0;
  undefined1 local_2a8 [648];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_147017cf6();
  local_2b8 = *param_2;
  local_2b0 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_2b0 = 0;
  }
  cVar1 = FUN_147017eb4(local_2a8,&local_2b8,0);
  if (cVar1 != '\0') {
    FUN_146ff76ed(local_2a8,param_3);
  }
  FUN_147017d8a(local_2a8);
  if ((local_20 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff79cc FUN_146ff79cc body=124 status=ok
// SIG undefined FUN_146ff79cc(void)

void FUN_146ff79cc(undefined8 *param_1)

{
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 146ff7a48 FUN_146ff7a48 body=61 status=ok
// SIG undefined FUN_146ff7a48(void)

void FUN_146ff7a48(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_140195631(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1470080e0(param_1);
  return;
}



// FUNCTION 146ff7a86 FUN_146ff7a86 body=77 status=ok
// SIG undefined FUN_146ff7a86(void)

void FUN_146ff7a86(longlong param_1)

{
  FUN_146ffaaf5(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_146ffe382(param_1 + 8);
  return;
}



// FUNCTION 146ff7ad4 FUN_146ff7ad4 body=492 status=ok
// SIG undefined FUN_146ff7ad4(void)

void FUN_146ff7ad4(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  lVar1 = param_1 + 8;
  local_100 = param_3;
  if ((*(int *)(param_5 + 8) == *(int *)(param_5 + 0x34)) &&
     (*(int *)(param_6 + 8) == *(int *)(param_6 + 0x34))) {
    local_f8 = (uint)param_4;
    local_108 = (undefined8 *)(param_1 + 0x278);
    local_f0 = 0;
    FUN_140af4bdc(param_2,lVar1,param_1 + 0x198,param_1 + 0x1e8);
  }
  else if (param_4 == 0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_145c3f772(&local_e8,&local_98);
    local_108 = &local_e8;
    FUN_14700e24e(param_2,lVar1,param_5,param_6);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  else {
    local_108 = (undefined8 *)(param_1 + 0x278);
    local_f0 = 0;
    local_f8 = 1;
    FUN_140af4bdc(param_2,lVar1,param_1 + 0x198,param_1 + 0x1e8);
    FUN_147010026(param_2,param_5,param_6,param_3);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff7cc2 FUN_146ff7cc2 body=120 status=ok
// SIG undefined FUN_146ff7cc2(void)

undefined8 * FUN_146ff7cc2(longlong param_1,undefined8 *param_2)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_144881636(param_2,param_1 + 0x770);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return param_2;
}



// FUNCTION 146ff7d3a FUN_146ff7d3a body=65 status=ok
// SIG undefined FUN_146ff7d3a(void)

longlong FUN_146ff7d3a(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return param_1 + 0x770;
}



// FUNCTION 146ff7d7c FUN_146ff7d7c body=79 status=ok
// SIG undefined FUN_146ff7d7c(void)

undefined4 FUN_146ff7d7c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = FUN_146ff7dcc(param_1 + 8,param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return uVar1;
}



// FUNCTION 146ff7dcc FUN_146ff7dcc body=153 status=ok
// SIG undefined FUN_146ff7dcc(void)

undefined8 FUN_146ff7dcc(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x180);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x188) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar4 * 0x60) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x140) + 0x58);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 146ff7e66 FUN_146ff7e66 body=622 status=ok
// SIG undefined FUN_146ff7e66(void)

void FUN_146ff7e66(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78;
  int local_70;
  longlong local_68 [3];
  int local_50;
  undefined1 local_41;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_41 = 0;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x34) < iVar3 + 1U) {
      FUN_147006258((longlong *)(param_2 + 0x28),iVar3);
    }
    lVar5 = *(longlong *)(param_2 + 0x28);
    FUN_1400e7d28(lVar5 + (longlong)iVar3 * 0x78,param_3);
    *(undefined4 *)(lVar5 + 0x70 + (longlong)iVar3 * 0x78) = 1;
    if (*(int *)(param_1 + 0xdd0) != *(int *)(param_1 + 0xdfc)) {
      lVar5 = *(longlong *)(param_3 + 0x20);
      lVar1 = *(longlong *)(param_3 + 0x28);
      uVar9 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar8 = (uint)lVar5 & 0xffff;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar4 = (uint)lVar1 & 0xffff;
      uVar9 = (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
              (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar8 >> 4);
      lVar6 = param_1 + 0xe00;
      if (*(longlong *)(param_1 + 0xe08) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xe08);
      }
      iVar3 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(param_1 + 0xe10) - 1U &
                               ((uVar9 >> 2) +
                                ((uint)lVar1 << 0x10 | uVar4) + (int)((ulonglong)lVar1 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4) + uVar9 * 0x40 +
                                0x9e3779b9 ^ uVar9)) * 4);
      if (iVar3 != -1) {
        lVar6 = *(longlong *)(param_1 + 0xdc8);
        do {
          lVar7 = (longlong)iVar3;
          if ((*(longlong *)(lVar6 + lVar7 * 0x18) == lVar5) &&
             (*(longlong *)(lVar6 + 8 + lVar7 * 0x18) == lVar1)) {
            FUN_146ff8bfc(param_3,local_68 + 2);
            lVar5 = local_68[2];
            if (1 < local_50) {
              if (local_50 == 5) {
                iVar3 = FUN_144a54874(local_68[2],&DAT_149e01fe8);
                if (iVar3 == 0) goto LAB_146ff8030;
              }
              FUN_1459853a0(&local_78,local_68 + 2);
              local_68[0] = 0;
              local_68[1] = 0;
              local_40 = local_78;
              local_38 = local_70 + -1;
              if (local_70 == 0) {
                local_38 = 0;
              }
              FUN_1468fe3e4();
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              lVar5 = local_68[2];
              if (local_68[0] != 0) {
                FUN_147008d18(param_1 + 0x7b8,local_68);
                *(undefined1 *)(param_1 + 0x8b8) = 1;
                lVar5 = local_68[2];
              }
            }
LAB_146ff8030:
            if (lVar5 != 0) {
              FUN_1400020a8(lVar5);
            }
            break;
          }
          iVar3 = *(int *)(lVar6 + lVar7 * 0x18 + 0x10);
        } while (iVar3 != -1);
      }
    }
    local_88 = &local_40;
    FUN_142ae13a4(param_1,param_3,1,&local_41);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff80d5 FUN_146ff80d5 body=226 status=ok
// SIG undefined FUN_146ff80d5(void)

bool FUN_146ff80d5(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 - 3U < 0x7ffffffe) {
    iVar2 = FUN_1447ee042(param_1,&DAT_149e065c6,1,0,0,1);
    if (iVar2 != -1) {
      FUN_1446f8bcc(param_3,iVar2);
      puVar5 = &DAT_149dfb77a;
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 1) != 0) {
        puVar4 = (undefined2 *)*param_1;
      }
      FUN_1400020e8(param_3,puVar4,iVar2);
      iVar2 = *(int *)(param_3 + 1);
      if (iVar2 != 0) {
        puVar5 = (undefined2 *)*param_3;
      }
      iVar1 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar1,puVar5);
      param_1 = param_3;
      goto LAB_146ff819c;
    }
    iVar2 = *(int *)(param_1 + 1);
  }
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
LAB_146ff819c:
  iVar2 = FUN_1456cf568(param_2,uVar3,param_1);
  return iVar2 != -1;
}



// FUNCTION 146ff81b8 FUN_146ff81b8 body=1236 status=ok
// SIG undefined FUN_146ff81b8(void)

void FUN_146ff81b8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  int local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0xdd0) != *(int *)(param_1 + 0xdfc)) {
    lVar8 = *(longlong *)(param_3 + 0x20);
    lVar1 = *(longlong *)(param_3 + 0x28);
    uVar16 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar14 = (uint)lVar8 & 0xffff;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    uVar16 = (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar14) +
             (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar14 >> 4);
    lVar9 = param_1 + 0xe00;
    if (*(longlong *)(param_1 + 0xe08) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xe08);
    }
    iVar6 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0xe10) - 1U &
                             ((uVar16 >> 2) +
                              ((uint)lVar1 << 0x10 | uVar7) + (int)((ulonglong)lVar1 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4) + uVar16 * 0x40 +
                              0x9e3779b9 ^ uVar16)) * 4);
    if (iVar6 != -1) {
      lVar9 = *(longlong *)(param_1 + 0xdc8);
      do {
        lVar10 = (longlong)iVar6;
        if ((*(longlong *)(lVar9 + lVar10 * 0x18) == lVar8) &&
           (*(longlong *)(lVar9 + 8 + lVar10 * 0x18) == lVar1)) {
          FUN_146ff8bfc(param_3,&local_98,DAT_14c947b10);
          FUN_146ff8bfc(param_3,&local_a8,DAT_14c947d08);
          FUN_146ff8bfc(param_4,&local_b8,DAT_14c947b10);
          FUN_146ff8bfc(param_4,&local_c8,DAT_14c947d08);
          plVar3 = local_98;
          iVar6 = local_b0;
          if (local_90 != local_b0) {
            if (local_b0 + local_90 != 1) goto LAB_146ff84b3;
            goto LAB_146ff8445;
          }
          if (local_90 < 2) goto LAB_146ff8445;
          lVar8 = 0;
          goto LAB_146ff83f8;
        }
        iVar6 = *(int *)(lVar9 + lVar10 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_146ff82eb;
LAB_146ff83f8:
  uVar11 = *(ushort *)((longlong)local_98 + lVar8);
  uVar12 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)local_b8 + lVar8);
  if (uVar11 == uVar13) {
    if (uVar11 == 0) goto LAB_146ff8445;
LAB_146ff840d:
    lVar8 = lVar8 + 2;
    goto LAB_146ff83f8;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    uVar15 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
    if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_146ff840d;
  }
  if (uVar11 != uVar13) goto LAB_146ff84b3;
LAB_146ff8445:
  plVar17 = local_c8;
  if (local_a0 == local_c0) {
    if (1 < local_a0) {
      lVar8 = 0;
      while( true ) {
        uVar11 = *(ushort *)(local_a8 + lVar8);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)((longlong)local_c8 + lVar8);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_146ff84d0;
LAB_146ff847e:
        lVar8 = lVar8 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar15 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_146ff847e;
      }
      if (uVar11 != uVar13) goto LAB_146ff84b3;
    }
  }
  else if (local_c0 + local_a0 != 1) {
LAB_146ff84b3:
    if ((1 < local_90) &&
       ((local_90 != 5 || (iVar5 = FUN_144a54874(local_98,&DAT_149e01fe8,4), iVar5 != 0)))) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = plVar3;
      local_70 = (longlong *)CONCAT44(local_70._4_4_,local_90 + -1);
      FUN_1468fe3e4(&local_88);
      iVar6 = local_b0;
      if (local_88 != 0) {
        FUN_147008d18(param_1 + 0x7b8,&local_88);
        *(undefined1 *)(param_1 + 0x8b8) = 1;
        iVar6 = local_b0;
      }
    }
    iVar5 = local_c0;
    plVar17 = local_c8;
    if ((((1 < iVar6) && (1 < local_c0)) &&
        ((iVar6 != 5 ||
         (iVar4 = FUN_144a54874(local_b8,&DAT_149e01fe8,4), plVar17 = local_c8, iVar4 != 0)))) &&
       ((plVar17 = local_c8, iVar5 != 5 ||
        (iVar5 = FUN_144a54874(local_c8,&DAT_149e01fe8,4), iVar5 != 0)))) {
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_78 = local_b8;
      local_70._0_4_ = iVar6 + -1;
      FUN_1468fe3e4(local_d8);
      local_e8 = 0;
      uStack_e0 = 0;
      local_78 = local_c8;
      iVar6 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar6 = 0;
      }
      local_70 = (longlong *)CONCAT44(local_70._4_4_,iVar6);
      FUN_1468fe3e4(&local_e8,&local_78);
      if ((local_d8[0] != 0) && (local_e8 != 0)) {
        local_70 = &local_88;
        local_88 = local_e8;
        uStack_80 = uStack_e0;
        local_78 = local_d8;
        FUN_1408b7084(param_1 + 0x7b8,local_64);
      }
      *(undefined1 *)(param_1 + 0x8b8) = 1;
      plVar17 = local_c8;
    }
  }
LAB_146ff84d0:
  if (plVar17 != (longlong *)0x0) {
    FUN_1400020a8(plVar17);
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146ff82eb:
  FUN_140af6df6(param_1,param_3,param_4,&local_78);
  if ((char)local_78 == '\x01') {
    iVar6 = *(int *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x34) < iVar6 + 1U) {
      FUN_147006258((longlong *)(param_2 + 0x28),iVar6);
    }
    lVar8 = *(longlong *)(param_2 + 0x28);
    FUN_1400e7d28(lVar8 + (longlong)iVar6 * 0x78,param_3);
    *(undefined4 *)(lVar8 + 0x70 + (longlong)iVar6 * 0x78) = 2;
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff868e FUN_146ff868e body=775 status=ok
// SIG undefined FUN_146ff868e(void)

void FUN_146ff868e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140af5ea4(param_1,param_3);
  iVar5 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar5 + 1U) {
    FUN_147006258((longlong *)(param_2 + 0x28),iVar5);
  }
  lVar1 = *(longlong *)(param_2 + 0x28);
  FUN_1400e7d28(lVar1 + (longlong)iVar5 * 0x78,param_3);
  *(undefined4 *)(lVar1 + 0x70 + (longlong)iVar5 * 0x78) = 0;
  if (*(int *)(param_1 + 0xdd0) != *(int *)(param_1 + 0xdfc)) {
    lVar1 = param_3[4];
    lVar2 = param_3[5];
    uVar11 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar10 = (uint)lVar1 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    uVar11 = (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar10) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar10 >> 4);
    lVar8 = param_1 + 0xe00;
    if (*(longlong *)(param_1 + 0xe08) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe08);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0xe10) - 1U &
                             ((uVar11 >> 2) +
                              ((uint)lVar2 << 0x10 | uVar6) + (int)((ulonglong)lVar2 >> 0x20) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4) + uVar11 * 0x40 +
                              0x9e3779b9 ^ uVar11)) * 4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)(param_1 + 0xdc8);
      do {
        lVar9 = (longlong)iVar5;
        if ((*(longlong *)(lVar8 + lVar9 * 0x18) == lVar1) &&
           (*(longlong *)(lVar8 + 8 + lVar9 * 0x18) == lVar2)) {
          FUN_146ff8bfc(param_3,&local_88,DAT_14c947b10);
          FUN_146ff8bfc(param_3,&local_98,DAT_14c947d08);
          iVar5 = local_90;
          plVar7 = local_98;
          if ((((1 < local_80) && (1 < local_90)) &&
              ((local_80 != 5 ||
               (iVar4 = FUN_144a54874(local_88,&DAT_149e01fe8,4), plVar7 = local_98, iVar4 != 0))))
             && ((plVar7 = local_98, iVar5 != 5 ||
                 (iVar5 = FUN_144a54874(local_98,&DAT_149e01fe8,4), iVar5 != 0)))) {
            local_a8 = 0;
            uStack_a0 = 0;
            local_68 = local_88;
            local_60._0_4_ = local_80 + -1;
            FUN_1468fe3e4(&local_a8);
            lVar1 = *param_3;
            local_b0 = uStack_a0;
            local_c8 = 0;
            uStack_c0 = 0;
            local_68 = local_98;
            iVar5 = local_90 + -1;
            if (local_90 == 0) {
              iVar5 = 0;
            }
            local_60 = (undefined4 *)CONCAT44(local_60._4_4_,iVar5);
            local_b8 = lVar1;
            FUN_1468fe3e4(&local_c8,&local_68);
            plVar7 = local_98;
            if ((lVar1 != 0) && (local_c8 != 0)) {
              local_60 = &local_78;
              local_78 = (undefined4)local_c8;
              uStack_74 = local_c8._4_4_;
              uStack_70 = (undefined4)uStack_c0;
              uStack_6c = uStack_c0._4_4_;
              local_68 = &local_b8;
              FUN_1408b7084(param_1 + 0x7b8,local_54);
              *(undefined1 *)(param_1 + 0x8b8) = 1;
              plVar7 = local_98;
            }
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_1400020a8(plVar7);
          }
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        iVar5 = *(int *)(lVar8 + lVar9 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff8996 FUN_146ff8996 body=298 status=ok
// SIG undefined FUN_146ff8996(void)

undefined8 * FUN_146ff8996(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_146ffe438(param_1 + 6,param_2 + 6);
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  uVar8 = param_2[0x12];
  uVar9 = param_2[0x13];
  uVar10 = param_2[0x14];
  uVar11 = param_2[0x15];
  uVar12 = *(undefined8 *)((longlong)param_2 + 0xb5);
  *(undefined8 *)((longlong)param_1 + 0xad) = *(undefined8 *)((longlong)param_2 + 0xad);
  *(undefined8 *)((longlong)param_1 + 0xb5) = uVar12;
  param_1[0x14] = uVar10;
  param_1[0x15] = uVar11;
  param_1[0x12] = uVar8;
  param_1[0x13] = uVar9;
  param_1[0x18] = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_2[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 146ff8ac0 FUN_146ff8ac0 body=314 status=ok
// SIG undefined FUN_146ff8ac0(void)

void FUN_146ff8ac0(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_48 [36];
  uint local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_1;
  if ((ulonglong)uVar1 < 8) {
    puVar2 = &DAT_14c75f4e0 + (ulonglong)uVar1 * 4;
    lVar3 = 1;
  }
  else {
    uVar1 = uVar1 - 9;
    if (uVar1 < 10) {
      puVar2 = (&PTR_DAT_149fca2c8)[uVar1];
      lVar3 = *(longlong *)(&DAT_149fca318 + (ulonglong)uVar1 * 8);
    }
    else {
      lVar3 = 2;
      puVar2 = &DAT_14c75f500;
    }
  }
  lVar5 = 0;
  bVar7 = false;
  iVar4 = 0;
  do {
    uVar1 = *(uint *)(puVar2 + lVar5);
    if ((uVar1 & param_2) == param_2) goto LAB_146ff8bcb;
    if ((param_2 < uVar1) && (!bVar7)) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      local_24[lVar6] = param_2;
      bVar7 = true;
    }
    if ((uVar1 & param_2) != uVar1) {
      lVar6 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      local_24[lVar6] = uVar1;
    }
    lVar5 = lVar5 + 4;
  } while (lVar3 * 4 != lVar5);
  if (!bVar7) {
    lVar3 = (longlong)iVar4;
    iVar4 = iVar4 + 1;
    local_24[lVar3] = param_2;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      if (local_24[0] == 3) {
        local_24[0] = local_24[1] + 9;
      }
      else if (local_24[0] == 2) {
        local_24[0] = local_24[1] + 7;
      }
      else {
        bVar7 = local_24[0] == 1;
        local_24[0] = 0x10;
        if (bVar7) {
          local_24[0] = (local_24[1] - 2 >> 1) + 8;
        }
      }
    }
    else {
      local_24[0] = (local_24[0] != 1) + 0x11;
    }
  }
  *param_1 = local_24[0];
LAB_146ff8bcb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff8bfc FUN_146ff8bfc body=100 status=ok
// SIG undefined FUN_146ff8bfc(void)

undefined8 * FUN_146ff8bfc(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1447c126c(param_1 + 0x40,&local_20);
  if (local_20 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14685b22e(&local_20,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff8c62 FUN_146ff8c62 body=307 status=ok
// SIG undefined FUN_146ff8c62(void)

void FUN_146ff8c62(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar5 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x28);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            plVar6 = plVar1 + 1;
            if ((longlong *)plVar1[2] != (longlong *)0x0) {
              plVar6 = (longlong *)plVar1[2];
            }
            lVar5 = plVar1[3];
            if ((longlong)(int)lVar5 != 0) {
              lVar8 = 0;
              goto LAB_146ff8d6b;
            }
          }
          break;
        }
        iVar4 = (int)plVar1[4];
      } while (iVar4 != -1);
    }
  }
  goto LAB_146ff8c87;
  while (bVar9 = (longlong)(int)lVar5 * 8 + -8 != lVar8, lVar8 = lVar8 + 8, bVar9) {
LAB_146ff8d6b:
    local_38 = *(undefined8 *)((longlong)plVar6 + lVar8);
    cVar3 = (*(code *)*param_3)(param_3[1],&local_38);
    if (cVar3 == '\0') break;
  }
LAB_146ff8c87:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff8da6 FUN_146ff8da6 body=1458 status=ok
// SIG undefined FUN_146ff8da6(void)

/* WARNING: Removing unreachable block (ram,0x000146ff91fc) */
/* WARNING: Removing unreachable block (ram,0x000146ff9028) */

void FUN_146ff8da6(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  uint param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  code ***pppcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  code **ppcVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_198 [32];
  longlong *local_178;
  uint local_170;
  code ***local_168;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  code **local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  code *local_a8;
  longlong **local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (0 < (int)param_4[1]) {
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_158 = param_2;
    local_148 = param_3;
    FUN_1408be2c4();
    pcVar4 = local_138;
    pppcVar5 = uStack_130;
    if ((longlong)(int)param_4[1] == 0) {
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      lVar10 = *param_4;
      lVar17 = (longlong)(int)param_4[1] << 4;
      do {
        uStack_130 = pppcVar5;
        local_138 = pcVar4;
        FUN_140b1a4cc(&local_138,lVar10);
        uVar3 = uStack_80;
        lVar11 = (longlong)(int)uStack_80;
        uVar9 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
        if (uStack_80._4_4_ < uVar9) {
          FUN_1447a1bd6(&local_88,uVar3 & 0xffffffff);
        }
        local_88[lVar11 * 2] = 0;
        local_88[lVar11 * 2] = local_138;
        local_138 = (code *)0x0;
        pcVar4 = local_138;
        *(undefined4 *)(local_88 + lVar11 * 2 + 1) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)local_88 + lVar11 * 0x10 + 0xc) = uStack_130._4_4_;
        uStack_130 = (code ***)0x0;
        pppcVar5 = uStack_130;
        uStack_130 = (code ***)0x0;
        local_138 = (code *)0x0;
        lVar10 = lVar10 + 0x10;
        lVar17 = lVar17 + -0x10;
      } while (lVar17 != 0);
      iVar12 = (int)param_4[1];
      local_98 = 0;
      uStack_90 = 0;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar12);
      }
      if (iVar12 != 0) {
        FUN_1403539de(&local_98);
        pcVar4 = local_138;
        pppcVar5 = uStack_130;
      }
    }
    uStack_130 = pppcVar5;
    local_138 = pcVar4;
    local_150 = param_4;
    if ((longlong)(int)uStack_80 != 0) {
      local_140 = local_88 + (longlong)(int)uStack_80 * 2;
      puVar14 = local_88;
      do {
        plStack_70 = (longlong *)0x0;
        local_68 = 0x100000000;
        local_b0 = &local_78;
        local_a0 = &local_b0;
        local_a8 = FUN_142adfb0c;
        puVar13 = &DAT_149dfb77a;
        if (*(int *)(puVar14 + 1) != 0) {
          puVar13 = (undefined2 *)*puVar14;
        }
        FUN_1446f470e(&local_b8,puVar13,1);
        local_c8 = &local_a8;
        uStack_130 = &local_c8;
        local_138 = FUN_146ffe3f4;
        FUN_146ff8c62(param_1,local_b8,&local_138);
        lVar10 = (longlong)(int)local_68;
        if (0 < lVar10) {
          iVar12 = (int)uStack_90 + (int)local_68;
          if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar12);
          }
          if ((int)uStack_90._4_4_ < iVar12) {
            FUN_1403539de(&local_98);
            lVar10 = (longlong)(int)local_68;
            plVar18 = plStack_70;
            if (plStack_70 == (longlong *)0x0) {
              plVar18 = &local_78;
            }
            if (lVar10 == 0) goto LAB_146ff903a;
          }
          else {
            plVar18 = plStack_70;
            if (plStack_70 == (longlong *)0x0) {
              plVar18 = &local_78;
            }
          }
          plVar1 = plVar18 + lVar10;
          uVar6 = local_128;
          uVar7 = local_120;
          do {
            local_120 = uVar7;
            local_128 = uVar6;
            FUN_1468fc08c(&local_138,*(undefined8 *)*plVar18,((undefined8 *)*plVar18)[2]);
            uVar3 = uStack_90;
            lVar10 = (longlong)(int)uStack_90;
            uVar9 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
            if (uStack_90._4_4_ < uVar9) {
              FUN_1406f071e(&local_98,uVar3 & 0xffffffff);
            }
            lVar10 = lVar10 * 0x20;
            puVar2 = (undefined4 *)(local_98 + lVar10);
            *puVar2 = (undefined4)local_138;
            puVar2[1] = local_138._4_4_;
            puVar2[2] = (undefined4)uStack_130;
            puVar2[3] = uStack_130._4_4_;
            *(undefined8 *)(local_98 + 0x10 + lVar10) = 0;
            *(undefined8 *)(local_98 + 0x10 + lVar10) = local_128;
            local_128 = 0;
            uVar6 = local_128;
            *(undefined4 *)(local_98 + 0x18 + lVar10) = (undefined4)local_120;
            *(undefined4 *)(local_98 + 0x1c + lVar10) = local_120._4_4_;
            local_120 = 0;
            uVar7 = local_120;
            local_120 = 0;
            local_128 = 0;
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar1);
        }
LAB_146ff903a:
        if (plStack_70 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        puVar14 = puVar14 + 2;
      } while (puVar14 != local_140);
    }
    lVar10 = local_158;
    local_170 = param_5 | 1;
    local_168 = &local_c8;
    local_c8 = (code **)0x0;
    uStack_c0 = 0;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    local_178 = local_150;
    FUN_142accb5c(&local_138,local_158,local_148,&local_78);
    FUN_1447a1747(0,0);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_142acd1a2(param_1,&local_138);
    if ((longlong)(int)uStack_90 != 0) {
      lVar11 = (longlong)(int)uStack_90 * 0x20 + local_98;
      lVar17 = local_98;
      do {
        if ((longlong)(int)uStack_c0 != 0) {
          lVar16 = (longlong)(int)uStack_c0 << 5;
          ppcVar15 = local_c8;
          do {
            cVar8 = FUN_144a7afa6(ppcVar15,lVar17);
            if (cVar8 != '\0') goto LAB_146ff92a4;
            ppcVar15 = ppcVar15 + 4;
            lVar16 = lVar16 + -0x20;
          } while (lVar16 != 0);
        }
        FUN_1400e7e08(&local_78,lVar17);
        lVar16 = FUN_141734322(param_1,&local_78);
        if (lVar16 != 0) {
          FUN_146ff7e66(param_1,lVar10,lVar16);
        }
LAB_146ff92a4:
        lVar17 = lVar17 + 0x20;
      } while (lVar17 != lVar11);
    }
    if ((longlong)(int)uStack_c0 != 0) {
      plVar18 = (longlong *)(lVar10 + 0x28);
      lVar17 = (longlong)(int)uStack_c0 << 5;
      ppcVar15 = local_c8;
      do {
        FUN_1400e7e08(&local_78,ppcVar15);
        lVar11 = FUN_141734322(param_1,&local_78);
        if (lVar11 != 0) {
          iVar12 = *(int *)(lVar10 + 0x30);
          *(uint *)(lVar10 + 0x30) = iVar12 + 1U;
          if (*(uint *)(lVar10 + 0x34) < iVar12 + 1U) {
            FUN_147006258(plVar18,iVar12);
          }
          lVar10 = *plVar18;
          FUN_1400e7d28(lVar10 + (longlong)iVar12 * 0x78,lVar11);
          *(undefined4 *)(lVar10 + 0x70 + (longlong)iVar12 * 0x78) = 3;
          lVar10 = local_158;
        }
        ppcVar15 = ppcVar15 + 4;
        lVar17 = lVar17 + -0x20;
      } while (lVar17 != 0);
    }
    FUN_146ff0bf0(&local_138);
    FUN_140861e20(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != (code **)0x0) {
      FUN_1400020a8();
    }
    FUN_140861e20(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff935a FUN_146ff935a body=652 status=ok
// SIG undefined FUN_146ff935a(void)

void FUN_146ff935a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_138;
  int local_130;
  undefined8 local_128;
  int local_120;
  void **local_118;
  ulonglong *local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  int local_f0;
  undefined8 local_88;
  int local_80;
  undefined2 *local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  ulonglong uStack_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_78 = &DAT_149e065c6;
  local_70 = 1;
  local_88 = *param_5;
  local_80 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    local_80 = 0;
  }
  FUN_142ad1f40(local_68);
  FUN_140a8f1ea(param_1,param_2,local_68);
  if ((*(longlong *)(param_1 + 0x970) != 0) && (*(char *)(param_1 + 0xdbe) == '\x01')) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x970) + 0x60) == 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = (void *)0x0;
      local_40 = *(int *)(param_6 + 1);
      lVar3 = (longlong)local_40;
      _Src = (void *)*param_6;
      if (lVar3 == 0) {
        local_3c = 0;
      }
      else {
        FUN_1446dd670(&local_48,local_40,0);
        memcpy(local_48,_Src,lVar3 * 2);
      }
      local_118 = &local_48;
      local_110 = &local_38;
      FUN_141469cae(&local_108);
      local_158 = &local_58;
      local_148 = 0;
      local_150 = 0;
      FUN_142accb5c(&local_f8,param_2,param_3,&local_108);
      FUN_1447a1747(local_108,local_100);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar3 = local_58;
      FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      FUN_142acd1a2(param_1,&local_f8);
      FUN_146ff0bf0(&local_f8);
    }
    else {
      local_128 = *param_4;
      local_120 = *(int *)(param_4 + 1) + -1;
      if (*(int *)(param_4 + 1) == 0) {
        local_120 = 0;
      }
      local_138 = *param_6;
      local_130 = *(int *)(param_6 + 1) + -1;
      if (*(int *)(param_6 + 1) == 0) {
        local_130 = 0;
      }
      FUN_146feb6c6();
      lVar3 = local_58;
      local_f8 = *param_6;
      local_f0 = *(int *)(param_6 + 1) + -1;
      if (*(int *)(param_6 + 1) == 0) {
        local_f0 = 0;
      }
      local_58._0_4_ = (uint)(uint3)local_58;
      uVar2 = local_58;
      local_58._6_2_ = SUB82(lVar3,6);
      local_58._0_6_ = (uint6)(uint5)uVar2;
      uVar1 = (ulonglong)local_58 >> 0x10;
      local_58 = CONCAT62((uint6)uVar1 & 0xffffffffff,0x101);
      FUN_146febc4a(*(undefined8 *)(param_1 + 0x970));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff95e8 FUN_146ff95e8 body=1302 status=ok
// SIG undefined FUN_146ff95e8(void)

void FUN_146ff95e8(code **param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  code **ppcVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  code **local_148;
  code **local_140;
  code **local_138;
  undefined8 local_130;
  undefined8 local_128;
  code *local_120;
  longlong **local_118;
  code **local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  code ***pppcStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_1[0x12e] != (code *)0x0) {
    local_c8 = *param_4;
    local_c0 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      local_c0 = 0;
    }
    FUN_146feb794();
  }
  iVar8 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar8 = 0;
  }
  FUN_1446f82e2(&local_98,iVar8,*param_3,1);
  if (*(int *)(param_1 + 0x1ac) != *(int *)((longlong)param_1 + 0xd8c)) {
    uVar3 = (uint)((ulonglong)local_98 >> 0x10);
    uVar7 = (uint)local_98 & 0xffff;
    ppcVar6 = param_1 + 0x1b2;
    if ((code **)param_1[0x1b3] != (code **)0x0) {
      ppcVar6 = (code **)param_1[0x1b3];
    }
    iVar8 = *(int *)((longlong)ppcVar6 +
                    (ulonglong)
                    (*(int *)(param_1 + 0x1b4) - 1U &
                    (int)((ulonglong)local_98 >> 0x20) + ((uint)local_98 << 0x10 | uVar7) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        if (*(code **)(param_1[0x1ab] + (longlong)iVar8 * 0x10) == local_98) goto LAB_146ff9a99;
        iVar8 = *(int *)(param_1[0x1ab] + (longlong)iVar8 * 0x10 + 8);
      } while (iVar8 != -1);
    }
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_3;
  }
  local_130 = param_2;
  FUN_1446f470e(&local_d0,puVar9,1);
  local_e8 = 0;
  uStack_e0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = (code *)0x0;
  pppcStack_90 = (code ***)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_138 = param_1 + 0x11a;
  FUN_140e3de74(local_138,local_d0,&local_98,1);
  FUN_144a13f80(&local_98,&local_110,&local_d0,0);
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  iVar8 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar8 = local_70;
  }
  local_f8 = local_a8;
  uVar4 = local_f8;
  local_f0 = local_a0;
  local_ec = local_9c;
  local_108 = local_b8;
  local_100 = local_b0;
  local_f8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_110 = &local_98;
  if ((local_f8._4_4_ != iVar8) || (local_b0 != local_88)) {
    local_140 = param_1 + 0xaa;
    local_148 = param_1 + 0xa3;
    iVar5 = local_f8._4_4_;
    local_f8 = uVar4;
    do {
      lVar1 = *(longlong *)(*local_110 + (longlong)iVar5 * 0x10);
      local_b8 = &local_e8;
      local_118 = &local_b8;
      local_120 = FUN_142adfb4e;
      FUN_146ff9b00(param_1,lVar1,&local_120);
      if (*(int *)(param_1 + 0xa4) != *(int *)((longlong)param_1 + 0x54c)) {
        uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar7 = (uint)lVar1 & 0xffff;
        ppcVar6 = (code **)param_1[0xab];
        if ((code **)param_1[0xab] == (code **)0x0) {
          ppcVar6 = local_140;
        }
        iVar5 = *(int *)((longlong)ppcVar6 +
                        (ulonglong)
                        (*(int *)(param_1 + 0xac) - 1U &
                        (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar5 != -1) {
          pcVar2 = param_1[0xa3];
          do {
            lVar10 = (longlong)iVar5 * 0x20;
            if (*(longlong *)(pcVar2 + lVar10) == lVar1) {
              if (((ulonglong)(pcVar2 + lVar10 + 8) & 0xfffffffffffffff7) != 0) {
                iVar5 = *(int *)(pcVar2 + lVar10 + 0x10);
                local_150 = param_3;
                if ((longlong)iVar5 != 0) {
                  lVar10 = *(longlong *)(pcVar2 + lVar10 + 8);
                  lVar11 = 0;
                  do {
                    FUN_144a8b5fe(param_1 + 0x99,*(undefined8 *)(lVar10 + lVar11));
                    lVar11 = lVar11 + 8;
                  } while ((longlong)iVar5 << 3 != lVar11);
                }
                FUN_14681be7e(local_148,lVar1);
                param_3 = local_150;
              }
              break;
            }
            iVar5 = *(int *)(pcVar2 + lVar10 + 0x18);
          } while (iVar5 != -1);
        }
      }
      local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
      FUN_1449c0562(&local_108);
      iVar5 = local_f8._4_4_;
      uVar4 = local_f8;
    } while (local_110 != &local_98 || (local_100 != local_88 || local_f8._4_4_ != iVar8));
  }
  local_f8 = uVar4;
  lVar1 = local_e8;
  uVar4 = local_130;
  lVar10 = (longlong)(int)uStack_e0;
  if (lVar10 != 0) {
    lVar11 = 0;
    do {
      FUN_146ff7e66(param_1,uVar4,*(undefined8 *)(lVar1 + lVar11));
      lVar11 = lVar11 + 8;
    } while (lVar10 * 8 != lVar11);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(&local_128,puVar9,1);
  local_108 = (longlong *)uVar4;
  pppcStack_90 = &local_110;
  local_98 = FUN_142adfa12;
  local_110 = param_1;
  FUN_147022d12(local_138,local_128);
LAB_146ff9a99:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff9b00 FUN_146ff9b00 body=303 status=ok
// SIG undefined FUN_146ff9b00(void)

void FUN_146ff9b00(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xe8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x20) == param_2) {
          if (((lVar3 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar5 = *(int *)(lVar3 + 0x10), (longlong)iVar5 != 0)) {
            lVar3 = *(longlong *)(lVar3 + 8);
            lVar6 = 0;
            goto LAB_146ff9c05;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x18);
      } while (iVar5 != -1);
    }
  }
  goto LAB_146ff9b28;
  while (bVar7 = (longlong)iVar5 * 8 + -8 != lVar6, lVar6 = lVar6 + 8, bVar7) {
LAB_146ff9c05:
    local_38 = *(undefined8 *)(lVar3 + lVar6);
    cVar2 = (*(code *)*param_3)(param_3[1],&local_38);
    if (cVar2 == '\0') break;
  }
LAB_146ff9b28:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff9c30 FUN_146ff9c30 body=65 status=ok
// SIG undefined FUN_146ff9c30(void)

ulonglong FUN_146ff9c30(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x810);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}



// FUNCTION 146ff9c72 FUN_146ff9c72 body=67 status=ok
// SIG undefined FUN_146ff9c72(void)

void FUN_146ff9c72(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147009b60(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14700983e(param_1);
    return;
  }
  FUN_147009a1c(param_1);
  FUN_147009b60(param_1,0);
  return;
}



// FUNCTION 146ff9cb6 FUN_146ff9cb6 body=68 status=ok
// SIG undefined FUN_146ff9cb6(void)

void FUN_146ff9cb6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147009a1c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146ff9cfa FUN_146ff9cfa body=438 status=ok
// SIG undefined FUN_146ff9cfa(void)

bool FUN_146ff9cfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b0 [8];
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400e7e08(local_b0,param_3);
  lVar2 = FUN_141734322(param_1,local_b0);
  if (lVar2 != 0) {
    FUN_1458f7ff0(lVar2 + 0x40,&local_c8);
    FUN_1400021e4(param_4,local_b0);
    FUN_140af67e0(&local_c8,&DAT_14c951750,local_b0);
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(param_4 + 8,local_b0);
    FUN_140af67e0(&local_c8,&DAT_14c951758,local_b0);
    if (local_b0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1400e7d28(local_b0,lVar2);
    local_d0 = (longlong *)0x0;
    iVar1 = (int)local_c0;
    if ((int)local_c0 != 0) {
      local_d0 = (longlong *)FUN_14001cc68(0x18,0x10);
      *local_d0 = local_c8;
      local_c8 = 0;
      *(int *)(local_d0 + 1) = iVar1;
      *(undefined4 *)((longlong)local_d0 + 0xc) = local_c0._4_4_;
      local_c0 = 0;
      *(undefined4 *)(local_d0 + 2) = 0;
      LOCK();
      *(undefined4 *)(local_d0 + 2) = 1;
      UNLOCK();
    }
    FUN_14020871a(local_70,&local_d0);
    FUN_1400b4210(&local_d0);
    FUN_146ff81b8(param_1,param_2,lVar2,local_b0);
    FUN_14128b0c2(local_b0);
    FUN_140958ed1(local_c8,local_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ff9eb2 FUN_146ff9eb2 body=304 status=ok
// SIG undefined FUN_146ff9eb2(void)

void FUN_146ff9eb2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
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
  plVar1 = (longlong *)(param_1 + 0x140);
  lVar2 = param_1 + 0x150;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x168) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x168);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uStack_50 != lVar2)) {
    do {
      local_58 = *(undefined8 *)(*local_80 + (longlong)iStack_64 * 0x60);
      cVar3 = (*(code *)*param_2)(param_2[1],&local_58);
      if (cVar3 == '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ff9fe4 FUN_146ff9fe4 body=128 status=ok
// SIG undefined FUN_146ff9fe4(void)

void FUN_146ff9fe4(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  LOCK();
  *(int *)(param_1 + 0xe48) = *(int *)(param_1 + 0xe48) + -1;
  UNLOCK();
  local_30 = *param_2;
  local_28 = param_2[1];
  FUN_147013d3c(param_1 + 8);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe40));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffa11a FUN_146ffa11a body=46 status=ok
// SIG undefined FUN_146ffa11a(void)

void FUN_146ffa11a(longlong *param_1)

{
  if (DAT_14c99deb8 != '\0') {
    return;
  }
  DAT_14c99deb8 = 1;
  (**(code **)(*param_1 + 600))(param_1,1);
  FUN_1467b17a2();
  return;
}



// FUNCTION 146ffa148 FUN_146ffa148 body=38 status=ok
// SIG undefined FUN_146ffa148(void)

undefined8 FUN_146ffa148(undefined8 param_1,int param_2)

{
  FUN_146fe415e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffa16e FUN_146ffa16e body=38 status=ok
// SIG undefined FUN_146ffa16e(void)

undefined8 FUN_146ffa16e(undefined8 param_1,int param_2)

{
  FUN_146fe642c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffa194 FUN_146ffa194 body=38 status=ok
// SIG undefined FUN_146ffa194(void)

undefined8 FUN_146ffa194(undefined8 param_1,int param_2)

{
  FUN_146fe8a8e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffa1ba FUN_146ffa1ba body=45 status=ok
// SIG undefined FUN_146ffa1ba(void)

longlong FUN_146ffa1ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14598a2ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffa236 FUN_146ffa236 body=75 status=ok
// SIG undefined FUN_146ffa236(void)

undefined8 FUN_146ffa236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146ffa2aa FUN_146ffa2aa body=59 status=ok
// SIG undefined FUN_146ffa2aa(void)

undefined8 FUN_146ffa2aa(longlong *param_1)

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



// FUNCTION 146ffa2f0 FUN_146ffa2f0 body=38 status=ok
// SIG undefined FUN_146ffa2f0(void)

void FUN_146ffa2f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146ffa366 FUN_146ffa366 body=91 status=ok
// SIG undefined FUN_146ffa366(void)

longlong FUN_146ffa366(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_140f8a9fc(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146ffa3c2 FUN_146ffa3c2 body=93 status=ok
// SIG undefined FUN_146ffa3c2(void)

longlong FUN_146ffa3c2(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146ffa420(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146ffa420 FUN_146ffa420 body=425 status=ok
// SIG undefined FUN_146ffa420(void)

longlong * FUN_146ffa420(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
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
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar4 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar5 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar6) || (local_68 = uVar4, uStack_50 != plVar1)) {
      do {
        local_68 = uVar4;
        if (*(int *)(*local_80 + 0x14 + (longlong)iVar5 * 0x20) != -1) {
          lVar7 = *local_80 + (longlong)iVar5 * 0x20;
          if (*(longlong *)(lVar7 + 8) != 0) {
            FUN_1400020a8();
          }
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined8 *)(lVar7 + 0x10) = 0xffffffff00000000;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
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
      lVar7 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar7;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffa5ca FUN_146ffa5ca body=76 status=ok
// SIG undefined FUN_146ffa5ca(void)

void FUN_146ffa5ca(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  FUN_1400020a8();
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8) = puVar2;
    puVar1 = (undefined8 *)*puVar2;
    if (puVar2[1] != 0) {
      FUN_1400020a8();
      puVar2 = *(undefined8 **)(param_1 + 8);
    }
    FUN_1400020a8(puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 146ffa616 FUN_146ffa616 body=74 status=ok
// SIG undefined FUN_146ffa616(void)

void FUN_146ffa616(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar2;
  while( true ) {
    FUN_1400020a8(puVar2);
    if (puVar3 == (undefined8 *)0x0) break;
    *(undefined8 **)(param_1 + 8) = puVar3;
    puVar1 = (undefined8 *)*puVar3;
    FUN_146fedb88(puVar3 + 3);
    if (puVar3[1] != 0) {
      FUN_1400020a8();
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    puVar3 = puVar1;
  }
  return;
}



// FUNCTION 146ffa660 FUN_146ffa660 body=59 status=ok
// SIG undefined FUN_146ffa660(void)

void FUN_146ffa660(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_146ffa69c(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xb8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ffa69c FUN_146ffa69c body=99 status=ok
// SIG undefined FUN_146ffa69c(void)

void FUN_146ffa69c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146ffa700(param_1);
  return;
}



// FUNCTION 146ffa700 FUN_146ffa700 body=54 status=ok
// SIG undefined FUN_146ffa700(void)

void FUN_146ffa700(longlong *param_1)

{
  FUN_146ffa736(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffa736 FUN_146ffa736 body=379 status=ok
// SIG undefined FUN_146ffa736(void)

void FUN_146ffa736(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0x50);
      FUN_146fedb88(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140e9549c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ffa8b4 FUN_146ffa8b4 body=132 status=ok
// SIG undefined FUN_146ffa8b4(void)

void FUN_146ffa8b4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ffa93a FUN_146ffa93a body=52 status=ok
// SIG undefined FUN_146ffa93a(void)

void FUN_146ffa93a(longlong *param_1)

{
  FUN_146ffa96e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ffa96e FUN_146ffa96e body=89 status=ok
// SIG undefined FUN_146ffa96e(void)

void FUN_146ffa96e(longlong param_1)

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



// FUNCTION 146ffa9c8 FUN_146ffa9c8 body=89 status=ok
// SIG undefined FUN_146ffa9c8(void)

undefined8 * FUN_146ffa9c8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ffaa82(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ffaa22 FUN_146ffaa22 body=95 status=ok
// SIG undefined FUN_146ffaa22(void)

undefined8 * FUN_146ffaa22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146ffaaf5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146ffab24(param_1,iVar1);
      FUN_146ffab86(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146ffaa82 FUN_146ffaa82 body=115 status=ok
// SIG undefined FUN_146ffaa82(void)

void FUN_146ffaa82(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ffaaf5 FUN_146ffaaf5 body=47 status=ok
// SIG undefined FUN_146ffaaf5(void)

void FUN_146ffaaf5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ffab24 FUN_146ffab24 body=98 status=ok
// SIG undefined FUN_146ffab24(void)

void FUN_146ffab24(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ffab86 FUN_146ffab86 body=127 status=ok
// SIG undefined FUN_146ffab86(void)

void FUN_146ffab86(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x10);
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -2) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1401b309e(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 << 3);
      }
      param_2 = param_2 + 8;
      puVar5 = puVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ffac06 FUN_146ffac06 body=204 status=ok
// SIG undefined FUN_146ffac06(void)

void FUN_146ffac06(longlong *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_1 + 1);
    uVar3 = *(uint *)(param_1 + 2);
    iVar1 = uVar3 - *(int *)((longlong)param_1 + 0xc);
    iVar4 = iVar1 + param_3;
    uVar6 = (ulonglong)((iVar1 + param_3 + (uint)(iVar4 == 0)) - 1) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar2 = 1 << ((byte)lVar7 & 0x1f);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    if (uVar5 + 1 < uVar2) {
      FUN_146ffad10(param_1);
      uVar5 = *(uint *)(param_1 + 1);
      uVar3 = *(uint *)(param_1 + 2);
    }
    uVar2 = uVar5 & uVar3;
    uVar3 = uVar3 + param_3 & uVar5;
    lVar7 = *param_1;
    if (uVar2 < uVar3) {
      lVar7 = lVar7 + (ulonglong)uVar2 * 0x10;
      uVar3 = param_3;
    }
    else {
      uVar6 = (ulonglong)((uVar5 - uVar2) + 1);
      FUN_146ffacd2((ulonglong)uVar2 * 0x10 + lVar7,param_2,uVar6);
      param_2 = uVar6 * 0x10 + param_2;
    }
    FUN_146ffacd2(lVar7,param_2,uVar3);
    *(uint *)(param_1 + 2) = (int)param_1[2] + param_3;
  }
  return;
}



// FUNCTION 146ffacd2 FUN_146ffacd2 body=61 status=ok
// SIG undefined FUN_146ffacd2(void)

void FUN_146ffacd2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = 0;
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_2 + lVar1) = 0;
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0xc + lVar1) = *(undefined4 *)(param_2 + 0xc + lVar1);
      *(undefined8 *)(param_2 + 8 + lVar1) = 0;
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ffad10 FUN_146ffad10 body=493 status=ok
// SIG undefined FUN_146ffad10(void)

void FUN_146ffad10(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar12 = (int)param_1[2] - *(int *)((longlong)param_1 + 0xc);
  if (iVar12 == 0 || param_2 == 0) {
    local_58 = 8;
    FUN_1446f8d3c(param_1,0,param_2,0x10);
  }
  else {
    lVar3 = *param_1;
    lVar9 = param_1[1];
    local_50 = 0;
    local_58 = 8;
    FUN_1446f8d3c(&local_50,0);
    lVar1 = local_50;
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & *(uint *)(param_1 + 1);
    uVar5 = *(uint *)(param_1 + 1) & *(uint *)(param_1 + 2);
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar6 = (int)lVar9 + 1;
      uVar2 = uVar6 - uVar4;
      uVar11 = 0;
      if (uVar4 <= uVar6 && uVar2 != 0) {
        lVar9 = (ulonglong)uVar4 * 0x10 + lVar3;
        lVar10 = 0;
        uVar8 = uVar2;
        do {
          *(undefined8 *)(local_50 + lVar10) = 0;
          *(undefined8 *)(local_50 + lVar10) = *(undefined8 *)(lVar9 + lVar10);
          *(undefined8 *)(lVar9 + lVar10) = 0;
          *(undefined4 *)(local_50 + 8 + lVar10) = *(undefined4 *)(lVar9 + 8 + lVar10);
          *(undefined4 *)(local_50 + 0xc + lVar10) = *(undefined4 *)(lVar9 + 0xc + lVar10);
          *(undefined8 *)(lVar9 + 8 + lVar10) = 0;
          lVar10 = lVar10 + 0x10;
          uVar8 = uVar8 - 1;
          uVar11 = uVar2;
        } while (uVar8 != 0);
      }
      FUN_145c176fe(param_1,uVar4,uVar6);
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = 0;
        lVar9 = 0;
        do {
          uVar7 = (ulonglong)uVar11;
          uVar11 = uVar11 + 1;
          lVar10 = uVar7 * 0x10;
          *(undefined8 *)(lVar1 + lVar10) = 0;
          *(undefined8 *)(lVar1 + lVar10) = *(undefined8 *)(lVar3 + lVar9);
          *(undefined8 *)(lVar3 + lVar9) = 0;
          *(undefined4 *)(lVar1 + 8 + lVar10) = *(undefined4 *)(lVar3 + 8 + lVar9);
          *(undefined4 *)(lVar1 + 0xc + lVar10) = *(undefined4 *)(lVar3 + 0xc + lVar9);
          *(undefined8 *)(lVar3 + 8 + lVar9) = 0;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)uVar5 << 4 != lVar9);
      }
    }
    else {
      lVar3 = (ulonglong)uVar4 * 0x10 + lVar3;
      lVar9 = 0;
      do {
        *(undefined8 *)(local_50 + lVar9) = 0;
        *(undefined8 *)(local_50 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar3 + lVar9) = 0;
        *(undefined4 *)(local_50 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar9);
        *(undefined4 *)(local_50 + 0xc + lVar9) = *(undefined4 *)(lVar3 + 0xc + lVar9);
        *(undefined8 *)(lVar3 + 8 + lVar9) = 0;
        lVar9 = lVar9 + 0x10;
      } while ((ulonglong)(uVar5 - uVar4) << 4 != lVar9);
    }
    FUN_145c176fe(param_1,uVar4,uVar5);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_50;
  }
  *(int *)(param_1 + 1) = param_2 + -1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = iVar12;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ffaefe FUN_146ffaefe body=43 status=ok
// SIG undefined FUN_146ffaefe(void)

void FUN_146ffaefe(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146ffaf2a FUN_146ffaf2a body=203 status=ok
// SIG undefined FUN_146ffaf2a(void)

void FUN_146ffaf2a(longlong *param_1,void *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    uVar6 = *(uint *)(param_1 + 1);
    uVar4 = *(uint *)(param_1 + 2);
    iVar2 = uVar4 - *(int *)((longlong)param_1 + 0xc);
    iVar5 = iVar2 + param_3;
    uVar7 = (ulonglong)((iVar2 + param_3 + (uint)(iVar5 == 0)) - 1) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar3 = 1 << ((byte)lVar1 & 0x1f);
    if (iVar5 == 0) {
      uVar3 = 0;
    }
    if (uVar6 + 1 < uVar3) {
      FUN_146ffaff6(param_1);
      uVar6 = *(uint *)(param_1 + 1);
      uVar4 = *(uint *)(param_1 + 2);
    }
    uVar3 = uVar6 & uVar4;
    uVar4 = uVar4 + param_3 & uVar6;
    _Dst = (void *)*param_1;
    if (uVar3 < uVar4) {
      _Dst = (void *)((longlong)_Dst + (ulonglong)uVar3 * 8);
      uVar4 = param_3;
    }
    else {
      uVar7 = (ulonglong)((uVar6 - uVar3) + 1);
      memmove((void *)((longlong)_Dst + (ulonglong)uVar3 * 8),param_2,uVar7 * 8);
      param_2 = (void *)((longlong)param_2 + uVar7 * 8);
    }
    memmove(_Dst,param_2,(ulonglong)uVar4 << 3);
    *(uint *)(param_1 + 2) = (int)param_1[2] + param_3;
  }
  return;
}



// FUNCTION 146ffaff6 FUN_146ffaff6 body=331 status=ok
// SIG undefined FUN_146ffaff6(void)

void FUN_146ffaff6(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = (int)param_1[2] - *(int *)((longlong)param_1 + 0xc);
  if (iVar3 == 0 || param_2 == 0) {
    local_58 = 4;
    FUN_1446f8d3c(param_1,0,param_2,8);
  }
  else {
    lVar1 = *param_1;
    lVar5 = param_1[1];
    local_48 = 0;
    local_58 = 4;
    FUN_1446f8d3c(&local_48,0,param_2,8);
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & *(uint *)(param_1 + 1);
    uVar2 = *(uint *)(param_1 + 1) & *(uint *)(param_1 + 2);
    if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
      uVar8 = (int)lVar5 + 1;
      iVar9 = uVar8 - uVar4;
      iVar7 = 0;
      if (uVar4 <= uVar8 && iVar9 != 0) {
        lVar5 = 0;
        do {
          *(undefined8 *)(local_48 + lVar5 * 8) =
               *(undefined8 *)(lVar1 + (ulonglong)uVar4 * 8 + lVar5 * 8);
          lVar5 = lVar5 + 1;
          iVar7 = iVar9;
        } while (iVar9 != (int)lVar5);
      }
      if (uVar2 != 0) {
        uVar6 = 0;
        do {
          *(undefined8 *)(local_48 + (ulonglong)(uint)(iVar7 + (int)uVar6) * 8) =
               *(undefined8 *)(lVar1 + uVar6 * 8);
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
    }
    else {
      uVar6 = 0;
      do {
        *(undefined8 *)(local_48 + uVar6 * 8) =
             *(undefined8 *)(lVar1 + (ulonglong)uVar4 * 8 + uVar6 * 8);
        uVar6 = uVar6 + 1;
      } while (uVar2 - uVar4 != uVar6);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_48;
  }
  *(int *)(param_1 + 1) = param_2 + -1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) = iVar3;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ffb142 FUN_146ffb142 body=101 status=ok
// SIG undefined FUN_146ffb142(void)

void FUN_146ffb142(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * 0x110;
      do {
        FUN_146fe8e20(param_1 + -0x110 + lVar2);
        lVar2 = lVar2 + -0x110;
      } while (lVar2 != 0);
    }
    thunk_FUN_1400020a8(param_1 + -8,lVar1 * 0x110 | 8);
    return;
  }
  return;
}



// FUNCTION 146ffb1a8 FUN_146ffb1a8 body=38 status=ok
// SIG undefined FUN_146ffb1a8(void)

undefined8 FUN_146ffb1a8(undefined8 param_1,int param_2)

{
  FUN_1470026c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffb1ce FUN_146ffb1ce body=41 status=ok
// SIG undefined FUN_146ffb1ce(void)

longlong FUN_146ffb1ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  return (lVar1 + *(longlong *)(param_1 + 0xa0)) - *(longlong *)(param_1 + 0x98);
}



// FUNCTION 146ffb21e FUN_146ffb21e body=66 status=ok
// SIG undefined FUN_146ffb21e(void)

void FUN_146ffb21e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_146ffb4a0(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffb262 FUN_146ffb262 body=95 status=ok
// SIG undefined FUN_146ffb262(void)

void FUN_146ffb262(longlong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 + 7;
  uVar2 = param_3 + 0xe;
  if (-1 < (longlong)uVar3) {
    uVar2 = uVar3;
  }
  (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)uVar2 >> 3);
  if (((param_3 & 7) != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
    if (-1 < (longlong)param_3) {
      uVar3 = param_3;
    }
    pbVar1 = (byte *)(param_2 + ((longlong)uVar3 >> 3));
    *pbVar1 = *pbVar1 & ~(-1 << ((byte)param_3 & 7));
  }
  return;
}



// FUNCTION 146ffb2e8 FUN_146ffb2e8 body=38 status=ok
// SIG undefined FUN_146ffb2e8(void)

undefined8 FUN_146ffb2e8(undefined8 param_1,int param_2)

{
  FUN_1470026c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ffb30e FUN_146ffb30e body=400 status=ok
// SIG undefined FUN_146ffb30e(void)

void FUN_146ffb30e(longlong param_1)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0xb1a3;
  lVar5 = *(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98);
  local_24 = (undefined4)lVar5;
  local_30 = &LAB_142760e05;
  local_38 = 0xc0;
  local_20 = FUN_140ab9477(*(longlong *)(param_1 + 0x98),lVar5,0,&DAT_149e18840);
  plVar2 = *(longlong **)(param_1 + 0x90);
  puVar3 = (ulonglong *)plVar2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_28,4);
    }
    else {
      FUN_14572512c(plVar2,&local_28);
    }
  }
  else {
    local_28 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  plVar4 = (longlong *)plVar2[1];
  if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_24,4);
    }
    else {
      FUN_14572512c(plVar2,&local_24);
    }
  }
  else {
    local_24 = *(undefined4 *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = (longlong *)plVar2[1];
  if ((undefined8 *)plVar4[1] < (undefined8 *)*plVar4 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_20,8);
    }
    else {
      FUN_146821949(plVar2,&local_20);
    }
  }
  else {
    local_20 = *(undefined8 *)*plVar4;
    *plVar4 = *plVar4 + 8;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x170))
            (*(longlong **)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),local_24);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ffb4a0 FUN_146ffb4a0 body=169 status=ok
// SIG undefined FUN_146ffb4a0(void)

void FUN_146ffb4a0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  ulonglong _Size;
  ulonglong uVar1;
  
  _Dst = *(void **)(param_1 + 0xa0);
  uVar1 = param_2[1];
  _Size = *(longlong *)(param_1 + 0xa8) - (longlong)_Dst;
  while (_Size < uVar1) {
    if (_Size != 0) {
      memcpy(_Dst,(void *)*param_2,_Size);
      _Dst = *(void **)(param_1 + 0xa0);
    }
    *(ulonglong *)(param_1 + 0xa0) = (longlong)_Dst + _Size;
    uVar1 = param_2[1];
    if (uVar1 < _Size) {
      _Size = uVar1;
    }
    *param_2 = *param_2 + _Size;
    param_2[1] = uVar1 - _Size;
    FUN_146ffb30e(param_1);
    _Dst = *(void **)(param_1 + 0xa0);
    uVar1 = param_2[1];
    _Size = *(longlong *)(param_1 + 0xa8) - (longlong)_Dst;
  }
  if (uVar1 != 0) {
    memcpy(_Dst,(void *)*param_2,uVar1);
    _Dst = *(void **)(param_1 + 0xa0);
  }
  *(ulonglong *)(param_1 + 0xa0) = (longlong)_Dst + uVar1;
  return;
}


