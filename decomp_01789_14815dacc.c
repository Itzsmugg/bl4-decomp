// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14815dacc FUN_14815dacc body=1705 status=ok
// SIG undefined FUN_14815dacc(void)

void FUN_14815dacc(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar9;
  float fVar10;
  undefined1 auStack_208 [44];
  int local_1dc;
  undefined **local_1d8;
  ulonglong local_1d0;
  int *local_1c8;
  LPCRITICAL_SECTION local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined8 local_e0;
  int local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  int local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined **local_a0;
  uint local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x208);
  EnterCriticalSection(lpCriticalSection);
  iVar2 = FUN_14811f530(param_1);
  fVar9 = (float)FUN_14811f8d8(param_1);
  if (((iVar2 != *(int *)(param_1 + 0x138)) || (fVar9 != *(float *)(param_1 + 0x13c))) ||
     (NAN(fVar9) || NAN(*(float *)(param_1 + 0x13c)))) {
    FUN_14815d528(param_1,iVar2,fVar9);
    iVar2 = *(int *)(param_1 + 0x138);
  }
  if ((iVar2 == 0) || (ABS(*(float *)(param_1 + 0x13c)) <= 1e-08)) {
    iVar2 = *(int *)(param_1 + 0x168);
    if (0 < iVar2) {
      lVar6 = 8;
      lVar8 = 0;
      do {
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x160) + lVar6);
        if (0 < lVar7) {
          memset(*(void **)(*(longlong *)(param_1 + 0x160) + -8 + lVar6),0,lVar7 << 2);
          iVar2 = *(int *)(param_1 + 0x168);
        }
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar8 < iVar2);
    }
  }
  else {
    iVar2 = FUN_14811f9de(param_1);
    uVar4 = iVar2 - iVar2 % *(int *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (*(int *)(param_1 + 0x154) < 0) {
      FUN_1470345fa(param_1 + 0x148,0);
    }
    if (0 < (int)uVar4) {
      iVar2 = *(int *)(param_1 + 0x150);
      *(uint *)(param_1 + 0x150) = iVar2 + uVar4;
      if ((uint)(*(int *)(param_1 + 0x154) - iVar2) < uVar4) {
        FUN_145ca0cd4(param_1 + 0x148);
      }
      FUN_14811f9d4(param_1,*(undefined8 *)(param_1 + 0x148),uVar4,0);
    }
    if ((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x170) != 0)) {
      local_98 = *(uint *)(param_1 + 0x150);
      local_1d0 = (ulonglong)local_98;
      local_1c8 = *(int **)(param_1 + 0x158);
      local_a8 = local_1c8[4];
      local_90 = *local_1c8;
      local_84 = local_1c8[6];
      iVar2 = (local_a8 + local_98) - local_90;
      local_88 = -1;
      if (-1 < iVar2) {
        local_88 = iVar2;
      }
      local_78 = local_84;
      if (local_88 < local_84) {
        local_78 = -1;
      }
      local_8c = local_1c8[1];
      local_1d8 = *(undefined ***)(param_1 + 0x148);
      local_b0 = *(undefined8 *)(local_1c8 + 2);
      local_b8 = &PTR_FUN_14adcc250;
      if (iVar2 < 0) {
        local_78 = -1;
      }
      local_80 = param_1 + 0x180;
      local_1c0 = lpCriticalSection;
      local_a0 = local_1d8;
      if (local_78 != -1) {
        local_1b0 = param_1 + 400;
        local_1a8 = param_1 + 0x1d0;
        iVar2 = 0;
        do {
          puVar3 = (undefined8 *)FUN_14815e176(&local_b8);
          iVar5 = *(int *)(param_1 + 0x138);
          local_1dc = iVar2;
          if (0 < iVar5 && iVar2 == 0) {
            lVar6 = 0;
            lVar8 = 0;
            local_1b8 = puVar3;
            do {
              memset(*(void **)(*(longlong *)(param_1 + 0x160) + lVar6),0,
                     (longlong)*(int *)(param_1 + 0x130) << 2);
              lVar8 = lVar8 + 1;
              iVar5 = *(int *)(param_1 + 0x138);
              lVar6 = lVar6 + 0x10;
              puVar3 = local_1b8;
            } while (lVar8 < iVar5);
          }
          local_d8 = *(int *)(puVar3 + 1);
          local_cc = local_d8 / iVar5;
          local_c0 = -(uint)(iVar5 < 1);
          local_e0 = *puVar3;
          local_c8 = local_1b0;
          local_d0 = iVar5;
          if (0 < iVar5) {
            iVar2 = 1;
            do {
              FUN_14815e286(&local_e0,&local_f0);
              puVar3 = local_f0;
              local_100 = *local_f0;
              local_f8 = *(undefined4 *)(local_f0 + 1);
              local_110 = *(undefined8 *)(param_1 + 0x1e0);
              local_108 = *(undefined4 *)(param_1 + 0x1e8);
              FUN_142af1da7(&local_110,&local_100);
              memcpy(*(void **)(param_1 + 0x1a0),(void *)*puVar3,(longlong)*(int *)(puVar3 + 1) << 2
                    );
              (**(code **)(**(longlong **)(param_1 + 0x178) + 0x20))
                        (*(longlong **)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x1a0),
                         *(undefined8 *)(param_1 + 0x1b0));
              local_120 = *(undefined8 *)(param_1 + 0x1c0);
              local_118 = *(undefined4 *)(param_1 + 0x1c8);
              local_130 = *(undefined8 *)(param_1 + 0x1b0);
              local_128 = *(undefined4 *)(param_1 + 0x1b8);
              FUN_142af4188(&local_130,&local_120);
              local_140 = *(undefined8 *)(param_1 + 0x1c0);
              local_138 = *(undefined4 *)(param_1 + 0x1c8);
              FUN_142af4276(*(undefined8 *)(param_1 + 0x170),&local_140,local_1a8);
              local_150 = *(undefined8 *)
                           (*(longlong *)(param_1 + 0x160) + (longlong)local_e8 * 0x10);
              local_148 = *(undefined4 *)
                           (*(longlong *)(param_1 + 0x160) + 8 + (longlong)local_e8 * 0x10);
              local_160 = *(undefined8 *)(param_1 + 0x1d0);
              local_158 = *(undefined4 *)(param_1 + 0x1d8);
              FUN_142af4152(&local_160);
              bVar1 = iVar2 < iVar5;
              local_c0 = iVar2;
              iVar2 = iVar2 + 1;
            } while (bVar1);
            local_c0 = -1;
          }
          iVar2 = local_1dc + 1;
          if (local_78 == -1) break;
          local_78 = local_78 + local_8c;
          if (local_88 < local_78) {
            local_78 = -1;
          }
        } while (local_78 != -1);
        if (0 < *(int *)(param_1 + 0x138)) {
          fVar9 = *(float *)(param_1 + 0x140);
          fVar10 = 1.0;
          if (1.0 <= -*(float *)(param_1 + 0x134)) {
            fVar10 = -*(float *)(param_1 + 0x134);
          }
          lVar8 = 8;
          lVar6 = 0;
          do {
            lVar7 = *(longlong *)(param_1 + 0x160);
            local_170 = *(undefined8 *)(lVar7 + -8 + lVar8);
            local_168 = *(undefined4 *)(lVar7 + lVar8);
            FUN_142af1db6(&local_170,fVar9 / (float)iVar2);
            local_180 = *(undefined8 *)(lVar7 + -8 + lVar8);
            local_178 = *(undefined4 *)(lVar7 + lVar8);
            FUN_142af417c(&local_180,*(undefined4 *)(param_1 + 0x134));
            local_190 = *(undefined8 *)(lVar7 + -8 + lVar8);
            local_188 = *(undefined4 *)(lVar7 + lVar8);
            FUN_142af4170(&local_190,*(undefined4 *)(param_1 + 0x134));
            local_1a0 = *(undefined8 *)(lVar7 + -8 + lVar8);
            local_198 = *(undefined4 *)(lVar7 + lVar8);
            FUN_142af1db6(&local_1a0,1.0 / fVar10);
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + 0x10;
          } while (lVar6 < *(int *)(param_1 + 0x138));
        }
      }
      local_b8 = local_1d8;
      local_b0 = CONCAT44(local_b0._4_4_,(int)local_1d0);
      FUN_14816ab76(local_1c8);
      lpCriticalSection = local_1c0;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_70 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815e176 FUN_14815e176 body=271 status=ok
// SIG undefined FUN_14815e176(void)

undefined8 FUN_14815e176(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x40) == -1) {
    *(undefined4 *)(lVar1 + 8) = 0;
    if (*(int *)(lVar1 + 0xc) < 0) {
      FUN_1470345fa(lVar1,0);
    }
  }
  else {
    FUN_14702dc6a(lVar1,*(undefined4 *)(param_1 + 0x28));
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar4 = *(uint *)(param_1 + 0x28);
    iVar2 = *(int *)(lVar1 + 8);
    *(uint *)(lVar1 + 8) = iVar2 + uVar4;
    if ((uint)(*(int *)(lVar1 + 0xc) - iVar2) < uVar4) {
      FUN_145ca0cd4();
    }
    iVar2 = *(int *)(param_1 + 0x40);
    iVar5 = 0;
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      iVar5 = *(int *)(param_1 + 0x10) - iVar2;
      memcpy((void *)**(undefined8 **)(param_1 + 0x38),
             (void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 8)),(longlong)iVar5 << 2);
    }
    iVar2 = *(int *)(param_1 + 0x28);
    uVar4 = iVar2 - iVar5;
    if (uVar4 != 0 && iVar5 <= iVar2) {
      iVar3 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x10)) + iVar5;
      uVar6 = *(int *)(param_1 + 0x20) - iVar3;
      if ((int)uVar4 < (int)uVar6) {
        uVar6 = uVar4;
      }
      if (0 < (int)uVar6) {
        memcpy((void *)((longlong)iVar5 * 4 + **(longlong **)(param_1 + 0x38)),
               (void *)((longlong)iVar3 * 4 + *(longlong *)(param_1 + 0x18)),(ulonglong)uVar6 << 2);
        iVar5 = iVar5 + uVar6;
        iVar2 = *(int *)(param_1 + 0x28);
      }
    }
    if (iVar2 - iVar5 != 0 && iVar5 <= iVar2) {
      memset((void *)((longlong)iVar5 * 4 + **(longlong **)(param_1 + 0x38)),0,
             (longlong)(iVar2 - iVar5) << 2);
    }
  }
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 14815e286 FUN_14815e286 body=149 status=ok
// SIG undefined FUN_14815e286(void)

longlong * FUN_14815e286(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar3 = param_1[4];
  FUN_14702dc6a(param_1[3],*(undefined4 *)((longlong)param_1 + 0x14));
  if (((int)lVar3 != -1) && (uVar1 = *(uint *)((longlong)param_1 + 0x14), 0 < (int)uVar1)) {
    lVar3 = param_1[3];
    iVar4 = *(int *)(lVar3 + 8);
    *(uint *)(lVar3 + 8) = iVar4 + uVar1;
    if ((uint)(*(int *)(lVar3 + 0xc) - iVar4) < uVar1) {
      FUN_145ca0cd4();
    }
    if (0 < *(int *)((longlong)param_1 + 0x14)) {
      lVar3 = *param_1;
      lVar2 = *(longlong *)param_1[3];
      iVar4 = (int)param_1[4];
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar2 + lVar5 * 4) = *(undefined4 *)(lVar3 + (longlong)iVar4 * 4);
        lVar5 = lVar5 + 1;
        iVar4 = iVar4 + (int)param_1[2];
      } while (lVar5 < *(int *)((longlong)param_1 + 0x14));
    }
  }
  lVar3 = param_1[4];
  *param_2 = param_1[3];
  *(int *)(param_2 + 1) = (int)lVar3;
  return param_2;
}



// FUNCTION 14815e31c FUN_14815e31c body=290 status=ok
// SIG undefined FUN_14815e31c(void)

void FUN_14815e31c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined4 *local_58;
  undefined8 uStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14815dacc(*(undefined8 *)(param_1 + 0x28));
  iVar3 = 0;
  local_48 = 0;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  FUN_144a98dce(&local_58,param_2);
  local_68 = 0;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 0;
  FUN_144a98d08(&local_78,param_2);
  FUN_144a76c20(&local_88,param_2);
  piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar2 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar2) {
    do {
      puVar1 = local_88;
      uVar4 = FUN_14815d830(*(undefined8 *)(param_1 + 0x28),*local_58,*local_78);
      *puVar1 = uVar4;
      local_58 = local_58 + local_48;
      local_78 = local_78 + local_68;
      local_88 = local_88 + local_80;
      iVar3 = iVar3 + 1;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar2 = (int *)(param_2 + 0x3c);
      }
    } while (iVar3 < *piVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14815e440 FUN_14815e440 body=153 status=ok
// SIG undefined FUN_14815e440(void)

void FUN_14815e440(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a76cd4(&local_38);
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar4 = 0;
    do {
      uVar2 = FUN_14811f530(*(undefined8 *)(param_1 + 0x28));
      puVar1 = local_38 + local_30;
      *local_38 = uVar2;
      iVar4 = iVar4 + 1;
      piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar3 = (int *)(param_2 + 0x3c);
      }
      local_38 = puVar1;
    } while (iVar4 < *piVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815e500 FUN_14815e500 body=202 status=ok
// SIG undefined FUN_14815e500(void)

void FUN_14815e500(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcad00;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815e5cc FUN_14815e5cc body=202 status=ok
// SIG undefined FUN_14815e5cc(void)

void FUN_14815e5cc(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcad70;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815e6ba FUN_14815e6ba body=104 status=ok
// SIG undefined FUN_14815e6ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14815e6ba(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  FUN_143a2ebe2(lVar1);
  uVar5 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  uVar6 = (ulonglong)uVar5;
  FUN_14816f4a0();
  *(uint *)(param_2 + 0x50) = uVar5 + _DAT_14cb3bb44;
  lVar2 = *(longlong *)(param_2 + 0x38);
  uVar3 = FUN_14811f530(lVar1);
  *(undefined4 *)(lVar2 + uVar6) = uVar3;
  *(undefined4 *)(lVar2 + 4 + uVar6) = *(undefined4 *)(lVar1 + 0x130);
  lVar4 = *(longlong *)(lVar1 + 0x1f8);
  if (*(longlong *)(lVar1 + 0x1f8) == 0) {
    lVar4 = DAT_14cb427b0;
  }
  *(longlong *)(lVar2 + 8 + uVar6) = lVar4;
  return;
}



// FUNCTION 14815e722 FUN_14815e722 body=96 status=ok
// SIG undefined FUN_14815e722(void)

byte FUN_14815e722(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14811f9ec();
  return bVar1 & *(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x40) &
         *(float *)(param_2 + 0x44) == *(float *)(param_1 + 0x44) &
         (*(float *)(param_2 + 0x4c) == *(float *)(param_1 + 0x4c) &&
         *(float *)(param_2 + 0x48) == *(float *)(param_1 + 0x48));
}



// FUNCTION 14815e782 FUN_14815e782 body=69 status=ok
// SIG undefined FUN_14815e782(void)

void FUN_14815e782(longlong param_1)

{
  FUN_14811fa3e();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_143a2dc9c(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x44),
                  *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40));
    FUN_143a2e712(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x4c));
    return;
  }
  return;
}



// FUNCTION 14815e7c8 FUN_14815e7c8 body=156 status=ok
// SIG undefined FUN_14815e7c8(void)

undefined4 FUN_14815e7c8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14811fa70();
  if (param_2 != 0 && (char)uVar1 == '\x01') {
    lVar2 = FUN_145b6d704();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
        FUN_143a2dc9c(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x44),
                      *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40));
        FUN_143a2e712(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x4c));
      }
    }
  }
  return uVar1;
}



// FUNCTION 14815ea06 FUN_14815ea06 body=732 status=ok
// SIG undefined FUN_14815ea06(void)

void FUN_14815ea06(byte *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_148 [44];
  undefined1 local_11c [4];
  undefined4 *local_118;
  int local_110;
  uint *local_108;
  undefined8 uStack_100;
  int local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14064c898(local_b8,param_1);
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_1);
  local_c0 = 0;
  local_d0 = (int *)0x0;
  uStack_c8 = 0;
  FUN_144a98d08(&local_d0,param_1);
  local_f8 = 0;
  local_108 = (uint *)0x0;
  uStack_100 = 0;
  FUN_144a98d08(&local_108,param_1);
  FUN_140126e42(&local_118,param_1);
  bVar4 = *param_1;
  pbVar1 = param_1 + 0x3c;
  lVar13 = *(longlong *)(param_1 + 0x80);
  pbVar9 = (byte *)(lVar13 + 0x40);
  if (bVar4 != 0) {
    pbVar9 = pbVar1;
  }
  if (0 < *(int *)pbVar9) {
    puVar2 = local_108 + local_f8;
    uVar8 = *local_108;
    local_108 = puVar2;
    if (((ulonglong)uVar8 == 0) || (*(int *)(local_b0 + 0x68) == 0)) {
      iVar7 = 0;
      do {
        puVar3 = local_118 + local_110;
        *local_118 = 0;
        iVar7 = iVar7 + 1;
        pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar9 = pbVar1;
        }
        local_118 = puVar3;
      } while (iVar7 < *(int *)pbVar9);
    }
    else {
      local_88 = 0;
      local_80 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_7c = 0xffffffff00000080;
      local_74 = 0;
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      if (0 < (int)uVar8) {
        lVar13 = 0;
        do {
          FUN_14816f962(&local_a8,local_11c,*(longlong *)(local_b0 + 0x60) + lVar13);
          lVar13 = lVar13 + 0x10;
        } while ((ulonglong)uVar8 << 4 != lVar13);
        bVar4 = *param_1;
        lVar13 = *(longlong *)(param_1 + 0x80);
      }
      pbVar9 = (byte *)(lVar13 + 0x40);
      if ((bVar4 & 1) != 0) {
        pbVar9 = pbVar1;
      }
      if (0 < *(int *)pbVar9) {
        iVar7 = 0;
        do {
          iVar5 = *local_d0;
          iVar6 = *local_e8;
          local_e8 = local_e8 + local_d8;
          local_d0 = local_d0 + local_c0;
          uVar8 = FUN_144a78877(iVar6,iVar5);
          uVar10 = 0;
          if ((int)uStack_a0 != local_74) {
            puVar11 = local_68;
            if (local_68 == (undefined1 *)0x0) {
              puVar11 = local_70;
            }
            iVar12 = *(int *)(puVar11 + (ulonglong)(local_60 - 1U & uVar8) * 4);
            uVar10 = 0;
            if (iVar12 != -1) {
              do {
                lVar13 = (longlong)iVar12 * 0x10;
                if ((*(int *)(local_a8 + lVar13) == iVar6) &&
                   (*(int *)(local_a8 + 4 + lVar13) == iVar5)) {
                  uVar10 = 0xffffffff;
                  goto LAB_14815ec2b;
                }
                iVar12 = *(int *)(lVar13 + local_a8 + 8);
              } while (iVar12 != -1);
              uVar10 = 0;
            }
          }
LAB_14815ec2b:
          puVar3 = local_118 + local_110;
          *local_118 = uVar10;
          iVar7 = iVar7 + 1;
          pbVar9 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != 0) {
            pbVar9 = pbVar1;
          }
          local_118 = puVar3;
        } while (iVar7 < *(int *)pbVar9);
      }
      local_60 = 0;
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14816f8d4(&local_a8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14815ece4 FUN_14815ece4 body=545 status=ok
// SIG undefined FUN_14815ece4(void)

void FUN_14815ece4(byte *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_148 [40];
  float *local_120 [2];
  int local_110;
  float *local_108;
  int local_f8;
  float *local_f0;
  int local_e0;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined1 local_a0 [8];
  float *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14064c898(local_a0,param_1);
  iVar14 = 0;
  local_c8 = 0;
  local_d8 = (undefined4 *)0x0;
  uStack_d0 = 0;
  FUN_144a98d08(&local_d8,param_1);
  local_b0 = 0;
  local_c0 = (undefined4 *)0x0;
  uStack_b8 = 0;
  FUN_144a98d08(&local_c0,param_1);
  FUN_1405f76c0(local_120,param_1);
  bVar13 = *param_1;
  lVar15 = *(longlong *)(param_1 + 0x80);
  pbVar12 = (byte *)(lVar15 + 0x40);
  if (bVar13 != 0) {
    pbVar12 = param_1 + 0x3c;
  }
  if (0 < *(int *)pbVar12) {
    fVar1 = *local_98;
    fVar2 = local_98[1];
    fVar3 = local_98[2];
    do {
      pfVar10 = local_98;
      fVar4 = *local_f0;
      fVar5 = *local_108;
      fVar6 = *local_120[0];
      uVar8 = *local_c0;
      uVar9 = *local_d8;
      local_120[0] = local_120[0] + local_110;
      local_108 = local_108 + local_f8;
      local_f0 = local_f0 + local_e0;
      local_d8 = local_d8 + local_c8;
      local_c0 = local_c0 + local_b0;
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = CONCAT44(uVar8,uVar9);
      puVar11[2] = (double)((fVar4 - fVar3) * (fVar4 - fVar3) +
                           (fVar6 - fVar1) * (fVar6 - fVar1) + (fVar5 - fVar2) * (fVar5 - fVar2));
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        puVar7 = *(undefined8 **)(pfVar10 + 0x14);
        *(undefined8 **)(pfVar10 + 0x14) = puVar11;
        UNLOCK();
        LOCK();
        *puVar7 = puVar11;
        UNLOCK();
        bVar13 = *param_1;
        lVar15 = *(longlong *)(param_1 + 0x80);
      }
      iVar14 = iVar14 + 1;
      pbVar12 = (byte *)(lVar15 + 0x40);
      if ((bVar13 & 1) != 0) {
        pbVar12 = param_1 + 0x3c;
      }
    } while (iVar14 < *(int *)pbVar12);
  }
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815ef06 FUN_14815ef06 body=49 status=ok
// SIG undefined FUN_14815ef06(void)

undefined4 FUN_14815ef06(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if ((cVar1 == '\0') || (*(int *)(param_2 + 0x38) != *(int *)(param_1 + 0x38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x38) >> 8),
                     *(char *)(param_2 + 0x3c) == *(char *)(param_1 + 0x3c));
  }
  return uVar2;
}



// FUNCTION 14815ef3c FUN_14815ef3c body=74 status=ok
// SIG undefined FUN_14815ef3c(void)

void FUN_14815ef3c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = param_5;
  uStack_20 = param_6;
  FUN_14811919e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815ef98 FUN_14815ef98 body=582 status=ok
// SIG undefined FUN_14815ef98(void)

void FUN_14815ef98(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_a8 [44];
  undefined1 local_7c [4];
  float local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0xe8) < 1) {
    iVar1 = *(int *)(param_1 + 0x168);
    if (((iVar1 < 1) && (*(int *)(param_1 + 0x1e8) < 1)) && (*(int *)(param_1 + 0x268) < 1)) {
      *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
      fVar3 = 1.0;
      goto LAB_14815f15a;
    }
    fVar3 = 3.4028235e+38;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0x7f7fffff;
    FUN_147a4117c(param_1 + 0x70,local_7c);
    iVar1 = *(int *)(param_1 + 0x168);
    fVar3 = local_78;
  }
  if (3.4028235e+38 <= fVar3) {
    fVar3 = 3.4028235e+38;
  }
  *(float *)(param_1 + 0x48) = fVar3;
  fVar2 = fVar3;
  if (0 < iVar1) {
    FUN_147a4117c(param_1 + 0xf0,local_7c);
    fVar2 = local_78;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  fVar3 = fVar2;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    FUN_147a4117c(param_1 + 0x170,local_7c);
    fVar3 = local_78;
  }
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x48) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x268)) {
    FUN_147a4117c(param_1 + 0x1f0,local_7c);
    fVar2 = local_78;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x48) = fVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0xff7fffff;
  if (*(int *)(param_1 + 0xe8) < 1) {
    fVar3 = -3.4028235e+38;
  }
  else {
    FUN_1413dd74e(param_1 + 0x70,local_7c);
    fVar3 = local_78;
  }
  if (fVar3 <= -3.4028235e+38) {
    fVar3 = -3.4028235e+38;
  }
  *(float *)(param_1 + 0x4c) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x168)) {
    FUN_1413dd74e(param_1 + 0xf0,local_7c);
    fVar2 = local_78;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar3 = fVar2;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    FUN_1413dd74e(param_1 + 0x170,local_7c);
    fVar3 = local_78;
  }
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x4c) = fVar3;
  fVar2 = fVar3;
  if (0 < *(int *)(param_1 + 0x268)) {
    FUN_1413dd74e(param_1 + 0x1f0,local_7c);
    fVar2 = local_78;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)(param_1 + 0x4c) = fVar2;
  fVar3 = 1.0 / (fVar2 - *(float *)(param_1 + 0x48));
LAB_14815f15a:
  *(float *)(param_1 + 0x50) = fVar3;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815f1e0 FUN_14815f1e0 body=469 status=ok
// SIG undefined FUN_14815f1e0(void)

longlong * FUN_14815f1e0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 < 2) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = 1.0 / ((float)param_3 + -1.0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < param_3) {
    if (param_3 != 0) {
      FUN_14482f6fa(param_2);
      iVar2 = 0;
      do {
        fVar7 = ((float)iVar2 * fVar8) / *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x48);
        uVar3 = FUN_1448c9f94(param_1 + 0x1f0,fVar7,0);
        uVar4 = FUN_1448c9f94(param_1 + 0x170,fVar7);
        uVar5 = FUN_1448c9f94(param_1 + 0xf0,fVar7);
        uVar6 = FUN_1448c9f94(param_1 + 0x70,fVar7);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar6;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar5;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar4;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar2 = iVar2 + 1;
      } while (param_3 != iVar2);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3 * 4);
}



// FUNCTION 14815f3b6 FUN_14815f3b6 body=117 status=ok
// SIG undefined FUN_14815f3b6(void)

undefined8 FUN_14815f3b6(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14815f42c();
  if (cVar1 != '\0') {
    cVar1 = FUN_147a3e954(param_2 + 0x70,param_1 + 0x70);
    if (cVar1 != '\0') {
      cVar1 = FUN_147a3e954(param_2 + 0xf0,param_1 + 0xf0);
      if (cVar1 != '\0') {
        cVar1 = FUN_147a3e954(param_2 + 0x170,param_1 + 0x170);
        if (cVar1 != '\0') {
          uVar2 = FUN_147a3e954(param_2 + 0x1f0,param_1 + 0x1f0);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14815f42c FUN_14815f42c body=101 status=ok
// SIG undefined FUN_14815f42c(void)

undefined8 FUN_14815f42c(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  
  cVar1 = FUN_1481192e4();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_2 + 0x60) != *(longlong *)(param_1 + 0x60)) {
      return 0;
    }
    if (((*(uint *)(param_2 + 0x5c) ^ *(uint *)(param_1 + 0x5c)) & 3) != 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x5c) & 1) == 0) {
      return 1;
    }
    iVar2 = *(int *)(param_2 + 0x40);
    if (iVar2 == *(int *)(param_1 + 0x40)) {
      if (iVar2 == 0) {
        return 1;
      }
      iVar2 = memcmp(*(void **)(param_2 + 0x38),*(void **)(param_1 + 0x38),(longlong)iVar2 << 2);
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
    }
  }
  return 0;
}



// FUNCTION 14815f492 FUN_14815f492 body=448 status=ok
// SIG undefined FUN_14815f492(void)

void FUN_14815f492(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_38,&DAT_149f207ec,1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x70;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_38;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3d4ccccd;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_40,L"Green",1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0xf0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_40;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3d4ccccd;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3d4ccccd;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_48,L"Blue",1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x170;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_48;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3dcccccd;
  puVar1[1] = 0x3e4ccccd;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  FUN_1446f470e(&local_50,L"Alpha",1);
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x1f0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_50;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3e4ccccd;
  puVar1[1] = 0x3e4ccccd;
  puVar1[2] = 0x3e4ccccd;
  puVar1[3] = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815f658 FUN_14815f658 body=108 status=ok
// SIG undefined FUN_14815f658(void)

undefined8 FUN_14815f658(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_14689c22e();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14815f6c4 FUN_14815f6c4 body=87 status=ok
// SIG undefined FUN_14815f6c4(void)

undefined4 FUN_14815f6c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x38) == lVar1) &&
       (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                      *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48));
    }
  }
  return 0;
}



// FUNCTION 14815f71c FUN_14815f71c body=278 status=ok
// SIG undefined FUN_14815f71c(void)

void FUN_14815f71c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cb3b2a0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (*param_2 == DAT_14cb3b2a8) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
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
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14adcc3b0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_14815f912;
    FUN_144a450dc(param_4,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815f912 FUN_14815f912 body=200 status=ok
// SIG undefined FUN_14815f912(void)

void FUN_14815f912(undefined8 param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14815fa6e(local_20);
  FUN_144a76cd4(&local_30,param_2);
  FUN_144a76cd4(&local_40,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_30 + local_28;
      *local_30 = *(undefined4 *)(local_18 + 8);
      puVar2 = local_40 + local_38;
      *local_40 = *(undefined4 *)(local_18 + 0xc);
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_40 = puVar2;
      local_30 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815f9e2 FUN_14815f9e2 body=140 status=ok
// SIG undefined FUN_14815f9e2(void)

undefined8 FUN_14815f9e2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  param_2[1] = DAT_14c967818;
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  param_2[3] = 0;
  param_2[4] = 0;
  uVar1 = FUN_144830b78(param_2 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 5) = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  FUN_1404e5848(param_2 + 2,param_3 + 0x1e8,param_1 + 0x40);
  return 1;
}



// FUNCTION 14815fa6e FUN_14815fa6e body=148 status=ok
// SIG undefined FUN_14815fa6e(void)

void FUN_14815fa6e(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14815fb02 FUN_14815fb02 body=324 status=ok
// SIG undefined FUN_14815fb02(void)

void FUN_14815fb02(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_68 [72];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14815fa6e(local_20,param_1);
  FUN_1448a432c(local_68,param_1);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  FUN_144a98dce(&local_88,param_1);
  FUN_144a76c20(&local_c8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_98,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    iVar5 = 0;
    do {
      puVar1 = local_c8 + local_c0;
      *local_c8 = 0x3f800000;
      puVar2 = local_b8 + local_b0;
      *local_b8 = 0;
      puVar3 = local_a8 + local_a0;
      *local_a8 = 0x3f800000;
      puVar4 = local_98 + local_90;
      *local_98 = 0x3f800000;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_c8 = puVar1;
      local_b8 = puVar2;
      local_a8 = puVar3;
      local_98 = puVar4;
    } while (iVar5 < *piVar6);
  }
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815fc6e FUN_14815fc6e body=551 status=ok
// SIG undefined FUN_14815fc6e(void)

float * FUN_14815fc6e(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *param_2;
  fVar9 = param_2[1];
  fVar6 = fVar3 / 3.0;
  fVar4 = param_2[2];
  fVar10 = fVar9 / 3.0;
  fVar8 = fVar4 / 3.0;
  auVar11 = roundss(ZEXT816(0),ZEXT416((uint)(fVar4 + fVar6 + fVar10 + fVar8)),9);
  auVar12 = roundss(ZEXT816(0),ZEXT416((uint)(fVar6 + fVar9 + fVar10 + fVar8)),9);
  auVar5 = roundss(ZEXT816(0),ZEXT416((uint)(fVar8 + fVar10 + fVar3 + fVar6)),9);
  fVar13 = auVar5._0_4_ / 6.0;
  fVar6 = auVar12._0_4_ / 6.0;
  fVar8 = auVar11._0_4_ / 6.0;
  fVar7 = ((auVar11._0_4_ - fVar13) - fVar6) - fVar8;
  fVar10 = ((auVar12._0_4_ - fVar13) - fVar6) - fVar8;
  fVar8 = ((auVar5._0_4_ - fVar13) - fVar6) - fVar8;
  fVar6 = (float)(-(uint)(fVar3 - fVar8 <= fVar4 - fVar7) & 0x3f800000);
  fVar4 = (float)(-(uint)(fVar4 - fVar7 <= fVar9 - fVar10) & 0x3f800000);
  fVar3 = (float)(-(uint)(fVar9 - fVar10 <= fVar3 - fVar8) & 0x3f800000);
  fVar14 = 1.0 - fVar4;
  fVar15 = 1.0 - fVar3;
  fVar13 = 1.0 - fVar6;
  fVar9 = fVar6;
  if (fVar14 <= fVar6) {
    fVar9 = fVar14;
  }
  fVar1 = fVar4;
  if (fVar15 <= fVar4) {
    fVar1 = fVar15;
  }
  fVar2 = fVar3;
  if (fVar13 <= fVar3) {
    fVar2 = fVar13;
  }
  if (fVar6 <= fVar14) {
    fVar6 = fVar14;
  }
  if (fVar4 <= fVar15) {
    fVar4 = fVar15;
  }
  if (fVar3 <= fVar13) {
    fVar3 = fVar13;
  }
  *param_1 = fVar8;
  param_1[1] = fVar10;
  param_1[2] = fVar7;
  param_1[3] = fVar2 + -0.16666667 + fVar8;
  param_1[4] = fVar1 + -0.16666667 + fVar10;
  param_1[5] = fVar9 + -0.16666667 + fVar7;
  param_1[6] = fVar3 + -0.33333334 + fVar8;
  param_1[7] = fVar4 + -0.33333334 + fVar10;
  param_1[8] = fVar6 + -0.33333334 + fVar7;
  param_1[9] = fVar8 + 0.5;
  param_1[10] = fVar10 + 0.5;
  param_1[0xb] = fVar7 + 0.5;
  return param_1;
}



// FUNCTION 14815fe95 FUN_14815fe95 body=412 status=ok
// SIG undefined FUN_14815fe95(void)

float * FUN_14815fe95(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[0xb] * param_2[0xb] + param_2[9] * param_2[9] + param_2[10] * param_2[10];
  fVar2 = param_2[8] * param_2[8] + param_2[6] * param_2[6] + param_2[7] * param_2[7];
  fVar3 = param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4];
  fVar4 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *param_1 = (((3.0 - fVar4) * fVar4 + -3.0) * fVar4 + 1.0) * 2.7306666;
  param_1[1] = (((3.0 - fVar3) * fVar3 + -3.0) * fVar3 + 1.0) * 2.7306666;
  param_1[2] = (((3.0 - fVar2) * fVar2 + -3.0) * fVar2 + 1.0) * 2.7306666;
  param_1[3] = (((3.0 - fVar1) * fVar1 + -3.0) * fVar1 + 1.0) * 2.7306666;
  return param_1;
}



// FUNCTION 148160031 FUN_148160031 body=725 status=ok
// SIG undefined FUN_148160031(void)

float * FUN_148160031(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar16 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  fVar14 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar15 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar17 = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar16 = fVar16 + fVar16;
  fVar14 = fVar14 + fVar14;
  fVar15 = fVar15 + fVar15;
  fVar17 = fVar17 + fVar17;
  if (1.0 <= fVar16) {
    fVar16 = 1.0;
  }
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (1.0 <= fVar17) {
    fVar17 = 1.0;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar13 = (65.535995 - fVar16 * 12.0 * 2.7306666) * fVar16 + -32.767998;
  fVar16 = (65.535995 - fVar14 * 12.0 * 2.7306666) * fVar14 + -32.767998;
  fVar15 = (65.535995 - fVar15 * 12.0 * 2.7306666) * fVar15 + -32.767998;
  fVar14 = (65.535995 - fVar17 * 12.0 * 2.7306666) * fVar17 + -32.767998;
  *param_1 = fVar14 * fVar10;
  param_1[1] = fVar15 * fVar7;
  param_1[2] = fVar16 * fVar4;
  param_1[3] = fVar13 * fVar1;
  param_1[4] = fVar11 * fVar14;
  param_1[5] = fVar8 * fVar15;
  param_1[6] = fVar5 * fVar16;
  param_1[7] = fVar2 * fVar13;
  param_1[8] = fVar12 * fVar14;
  param_1[9] = fVar9 * fVar15;
  param_1[10] = fVar6 * fVar16;
  param_1[0xb] = fVar3 * fVar13;
  return param_1;
}



// FUNCTION 148160306 FUN_148160306 body=5126 status=ok
// SIG undefined FUN_148160306(void)

void FUN_148160306(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2f8 [44];
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float *local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 local_130;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_130 = *(undefined8 *)param_2;
  local_128 = param_2[2];
  local_1e0 = param_1;
  FUN_14815fc6e(&local_120);
  local_2c4 = param_2[2];
  fVar16 = local_2c4 - local_118;
  local_2cc = *param_2;
  local_2c8 = param_2[1];
  fVar13 = local_2c8 - local_11c;
  fVar14 = local_2cc - local_120;
  fVar15 = local_118 * 6.0 + 0.5;
  fVar12 = local_11c * 6.0 + 0.5;
  fVar11 = local_120 * 6.0 + 0.5;
  iVar3 = ((int)fVar12 - (uint)(fVar12 < (float)(int)fVar12)) * 0x19660d;
  iVar1 = ((int)fVar15 - (uint)(fVar15 < (float)(int)fVar15)) * 0x19660d;
  iVar2 = iVar1 + 0x3c6ef35f;
  iVar6 = (iVar3 + 0x3c6ef35f) * iVar2 +
          ((int)fVar11 - (uint)(fVar11 < (float)(int)fVar11)) * 0x19660d;
  iVar4 = iVar6 + 0x3c6ef35f;
  iVar3 = iVar3 + iVar2 * iVar4 + 0x3c6ef35f;
  iVar2 = iVar1 + iVar4 * iVar3 + 0x3c6ef35f;
  uVar5 = iVar2 * iVar3 + iVar6 + 0x3c6ef35f;
  uVar8 = uVar5 * iVar2 + iVar3;
  uVar7 = uVar8 * uVar5 + iVar2 >> 0x10;
  uVar8 = uVar8 >> 0x10;
  uVar5 = uVar5 >> 0x10;
  fVar11 = local_2c4 - local_10c;
  fVar12 = local_10c * 6.0 + 0.5;
  fVar22 = local_2c8 - local_110;
  fVar15 = local_110 * 6.0 + 0.5;
  local_2a4 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_2a0 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  local_2a8 = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_200 = local_2a8 * fVar16 + local_2a0 * fVar14 + fVar13 * local_2a4;
  local_1e8 = (float)(uVar8 & 0x4000) * 0.00012207031 + -1.0;
  local_1e4 = (float)(uVar8 & 0x8000) * 6.1035156e-05 + -1.0;
  fVar21 = local_2cc - local_114;
  fVar17 = local_114 * 6.0 + 0.5;
  iVar1 = ((int)fVar15 - (uint)(fVar15 < (float)(int)fVar15)) * 0x19660d;
  iVar3 = ((int)fVar12 - (uint)(fVar12 < (float)(int)fVar12)) * 0x19660d;
  iVar2 = iVar3 + 0x3c6ef35f;
  iVar6 = (iVar1 + 0x3c6ef35f) * iVar2 +
          ((int)fVar17 - (uint)(fVar17 < (float)(int)fVar17)) * 0x19660d;
  iVar4 = iVar6 + 0x3c6ef35f;
  iVar1 = iVar1 + iVar2 * iVar4 + 0x3c6ef35f;
  iVar2 = iVar4 * iVar1 + iVar3 + 0x3c6ef35f;
  uVar10 = iVar2 * iVar1 + iVar6 + 0x3c6ef35f;
  uVar9 = uVar10 * iVar2 + iVar1;
  uVar5 = uVar9 * uVar10 + iVar2 >> 0x10;
  uVar9 = uVar9 >> 0x10;
  uVar10 = uVar10 >> 0x10;
  fVar20 = local_2c4 - local_100;
  fVar18 = local_100 * 6.0 + 0.5;
  fVar12 = local_2c8 - local_104;
  fVar19 = local_104 * 6.0 + 0.5;
  local_208 = (float)(uVar8 & 0x2000) * 0.00024414062 + -1.0;
  local_210 = local_208 * fVar16 + local_1e4 * fVar14 + fVar13 * local_1e8;
  local_1ec = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_298 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_1f8 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_29c = local_1f8 * fVar16 + local_298 * fVar14 + fVar13 * local_1ec;
  local_234 = (float)(uVar10 & 0x4000) * 0.00012207031 + -1.0;
  local_230 = (float)(uVar10 & 0x8000) * 6.1035156e-05 + -1.0;
  local_238 = (float)(uVar10 & 0x2000) * 0.00024414062 + -1.0;
  local_23c = local_238 * fVar11 + local_230 * fVar21 + fVar22 * local_234;
  local_214 = (float)(uVar9 & 0x4000) * 0.00012207031 + -1.0;
  local_20c = (float)(uVar9 & 0x8000) * 6.1035156e-05 + -1.0;
  local_218 = (float)(uVar9 & 0x2000) * 0.00024414062 + -1.0;
  local_21c = local_218 * fVar11 + local_20c * fVar21 + fVar22 * local_214;
  local_1f4 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_1f0 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  local_1fc = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_204 = local_1fc * fVar11 + local_1f0 * fVar21 + fVar22 * local_1f4;
  fVar15 = local_2cc - local_108;
  fVar17 = local_108 * 6.0 + 0.5;
  iVar3 = ((int)fVar19 - (uint)(fVar19 < (float)(int)fVar19)) * 0x19660d;
  iVar1 = ((int)fVar18 - (uint)(fVar18 < (float)(int)fVar18)) * 0x19660d;
  iVar2 = iVar1 + 0x3c6ef35f;
  iVar6 = (iVar3 + 0x3c6ef35f) * iVar2 +
          ((int)fVar17 - (uint)(fVar17 < (float)(int)fVar17)) * 0x19660d;
  iVar4 = iVar6 + 0x3c6ef35f;
  iVar3 = iVar2 * iVar4 + iVar3 + 0x3c6ef35f;
  iVar2 = iVar1 + iVar4 * iVar3 + 0x3c6ef35f;
  uVar8 = iVar6 + iVar2 * iVar3 + 0x3c6ef35f;
  uVar5 = uVar8 * iVar2 + iVar3;
  uVar7 = uVar8 >> 0x10;
  local_25c = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_258 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_270 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_274 = local_270 * fVar20 + local_258 * fVar15 + fVar12 * local_25c;
  uVar7 = uVar5 >> 0x10;
  local_24c = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_244 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_250 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_254 = local_250 * fVar20 + local_244 * fVar15 + fVar12 * local_24c;
  uVar5 = uVar5 * uVar8 + iVar2 >> 0x10;
  local_224 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_220 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  local_22c = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_228 = local_22c * fVar20 + local_220 * fVar15 + fVar12 * local_224;
  local_2c4 = local_2c4 - local_f4;
  local_2c8 = local_2c8 - local_f8;
  local_2cc = local_2cc - local_fc;
  fVar19 = local_f4 * 6.0 + 0.5;
  fVar18 = local_f8 * 6.0 + 0.5;
  fVar17 = local_fc * 6.0 + 0.5;
  iVar1 = ((int)fVar18 - (uint)(fVar18 < (float)(int)fVar18)) * 0x19660d;
  iVar4 = ((int)fVar19 - (uint)(fVar19 < (float)(int)fVar19)) * 0x19660d;
  iVar2 = iVar4 + 0x3c6ef35f;
  iVar6 = (iVar1 + 0x3c6ef35f) * iVar2 +
          ((int)fVar17 - (uint)(fVar17 < (float)(int)fVar17)) * 0x19660d;
  iVar3 = iVar6 + 0x3c6ef35f;
  iVar2 = iVar2 * iVar3 + iVar1 + 0x3c6ef35f;
  iVar4 = iVar4 + iVar3 * iVar2 + 0x3c6ef35f;
  uVar8 = iVar4 * iVar2 + iVar6 + 0x3c6ef35f;
  uVar7 = uVar8 * iVar4 + iVar2;
  uVar5 = uVar7 * uVar8 + iVar4 >> 0x10;
  uVar7 = uVar7 >> 0x10;
  uVar8 = uVar8 >> 0x10;
  local_294 = (float)(uVar8 & 0x2000) * 0.00024414062 + -1.0;
  local_290 = (float)(uVar8 & 0x4000) * 0.00012207031 + -1.0;
  local_28c = (float)(uVar8 & 0x8000) * 6.1035156e-05 + -1.0;
  local_284 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_27c = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_278 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_26c = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_264 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_260 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  fVar17 = local_294 * local_2c4 + local_28c * local_2cc + local_2c8 * local_290;
  local_288 = local_284 * local_2c4 + local_278 * local_2cc + local_2c8 * local_27c;
  local_268 = local_26c * local_2c4 + local_260 * local_2cc + local_2c8 * local_264;
  local_2c0 = fVar12;
  local_2bc = fVar20;
  local_2b8 = fVar21;
  local_2b4 = fVar11;
  local_2b0 = fVar22;
  local_2ac = fVar16;
  local_280 = fVar15;
  local_248 = fVar14;
  local_240 = fVar13;
  local_178 = fVar14;
  local_174 = fVar13;
  local_170 = fVar16;
  local_16c = fVar21;
  local_168 = fVar22;
  local_164 = fVar11;
  local_160 = fVar15;
  local_15c = fVar12;
  local_158 = fVar20;
  local_154 = local_2cc;
  local_150 = local_2c8;
  local_14c = local_2c4;
  FUN_14815fe95(&local_148);
  local_1b4 = local_2cc;
  local_1b0 = local_2c8;
  local_1ac = local_2c4;
  local_1d8 = fVar14;
  local_1d4 = fVar13;
  local_1d0 = fVar16;
  local_1cc = fVar21;
  local_1c8 = fVar22;
  local_1c4 = fVar11;
  local_1c0 = fVar15;
  local_1bc = fVar12;
  local_1b8 = fVar20;
  FUN_148160031(&local_1a8);
  fVar11 = local_2a8 * local_148;
  fVar12 = local_2a4 * local_148;
  fVar15 = local_2a0 * local_148;
  local_2ac = local_184;
  local_2c4 = local_188;
  local_2c8 = local_180;
  local_2cc = local_17c;
  local_2bc = local_194;
  local_2b0 = local_198;
  local_2b4 = local_190;
  local_2b8 = local_18c;
  local_2a4 = local_1a4;
  local_2a8 = local_1a8;
  local_2c0 = local_1a0;
  local_2a0 = local_19c;
  *local_1e0 = fVar17 * local_19c +
               local_274 * local_1a0 + local_200 * local_1a8 + local_23c * local_1a4 +
               local_28c * local_13c + local_258 * local_140 + fVar15 + local_230 * local_144;
  local_1e0[1] = local_18c * fVar17 +
                 local_190 * local_274 + local_198 * local_200 + local_23c * local_194 +
                 local_290 * local_13c + local_25c * local_140 + fVar12 + local_234 * local_144;
  local_1e0[2] = local_17c * fVar17 +
                 local_180 * local_274 + local_188 * local_200 + local_23c * local_184 +
                 local_294 * local_13c + local_270 * local_140 + fVar11 + local_238 * local_144;
  local_1e0[3] = local_13c * fVar17 +
                 local_140 * local_274 + local_148 * local_200 + local_23c * local_144;
  local_1e0[4] = local_288 * local_19c +
                 local_254 * local_1a0 + local_210 * local_1a8 + local_21c * local_1a4 +
                 local_278 * local_13c +
                 local_244 * local_140 + local_1e4 * local_148 + local_20c * local_144;
  local_1e0[5] = local_18c * local_288 +
                 local_190 * local_254 + local_198 * local_210 + local_21c * local_194 +
                 local_27c * local_13c +
                 local_24c * local_140 + local_1e8 * local_148 + local_214 * local_144;
  local_1e0[6] = local_17c * local_288 +
                 local_180 * local_254 + local_188 * local_210 + local_21c * local_184 +
                 local_284 * local_13c +
                 local_250 * local_140 + local_208 * local_148 + local_218 * local_144;
  local_1e0[7] = local_13c * local_288 +
                 local_140 * local_254 + local_148 * local_210 + local_21c * local_144;
  local_1e0[8] = local_268 * local_19c +
                 local_228 * local_1a0 + local_29c * local_1a8 + local_204 * local_1a4 +
                 local_260 * local_13c +
                 local_220 * local_140 + local_298 * local_148 + local_1f0 * local_144;
  local_1e0[9] = local_18c * local_268 +
                 local_190 * local_228 + local_198 * local_29c + local_194 * local_204 +
                 local_264 * local_13c +
                 local_224 * local_140 + local_1ec * local_148 + local_1f4 * local_144;
  local_1e0[10] =
       local_17c * local_268 + local_180 * local_228 + local_188 * local_29c + local_184 * local_204
       + local_26c * local_13c +
         local_22c * local_140 + local_1f8 * local_148 + local_1fc * local_144;
  local_1e0[0xb] =
       local_13c * local_268 + local_140 * local_228 + local_148 * local_29c + local_204 * local_144
  ;
  if ((local_f0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14816170e FUN_14816170e body=93 status=ok
// SIG undefined FUN_14816170e(void)

ulonglong FUN_14816170e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  
  if ((param_2 == (longlong *)0x0) || (param_2[2] != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined8 *)((longlong)param_2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
    *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    uVar1 = *(uint *)(param_2 + 6);
    *(uint *)(param_2 + 6) = uVar1 | 1;
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((~uVar1 & 4) == 0) {
      (**(code **)(*param_2 + 0x428))(param_2);
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfe;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14816176c FUN_14816176c body=41 status=ok
// SIG undefined FUN_14816176c(void)

undefined4 FUN_14816176c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1481192e4();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_2 + 0x38) >> 8),
                     *(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x38));
  }
  return uVar2;
}



// FUNCTION 148161796 FUN_148161796 body=528 status=ok
// SIG undefined FUN_148161796(void)

void FUN_148161796(longlong param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_138 [36];
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [4];
  float local_104;
  float local_100;
  float local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float *local_d8;
  int local_d0;
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  undefined8 uStack_a0;
  int local_98;
  float *local_88;
  undefined8 uStack_80;
  int local_78;
  float *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar5 = 0;
  local_58 = 0;
  local_68 = (float *)0x0;
  uStack_60 = 0;
  FUN_144a98dce();
  local_78 = 0;
  local_88 = (float *)0x0;
  uStack_80 = 0;
  FUN_144a98dce(&local_88,param_2);
  local_98 = 0;
  local_a8 = (float *)0x0;
  uStack_a0 = 0;
  FUN_144a98dce(&local_a8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    do {
      local_10c = *local_a8 + *(float *)(param_1 + 0x44);
      local_110 = *local_88 + *(float *)(param_1 + 0x40);
      local_114 = *local_68 + *(float *)(param_1 + 0x3c);
      local_a8 = local_a8 + local_98;
      local_88 = local_88 + local_78;
      local_68 = local_68 + local_58;
      FUN_148160306(local_108,&local_114);
      pfVar1 = local_b8 + local_b0;
      *local_b8 = local_f0 - local_e4;
      pfVar2 = local_c8 + local_c0;
      *local_c8 = local_e8 - local_100;
      pfVar3 = local_d8 + local_d0;
      *local_d8 = local_104 - local_f8;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_d8 = pfVar3;
      local_c8 = pfVar2;
      local_b8 = pfVar1;
    } while (iVar5 < *piVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481619b8 FUN_1481619b8 body=82 status=ok
// SIG undefined FUN_1481619b8(void)

undefined4 FUN_1481619b8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140db9faa();
  if ((char)uVar1 != '\0') {
    *(undefined2 *)(param_2 + 0xdc) = *(undefined2 *)(param_1 + 0xdc);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
    FUN_14093c00e(param_2 + 0xe0,param_1 + 0xe0);
  }
  return uVar1;
}



// FUNCTION 148161a0a FUN_148161a0a body=55 status=ok
// SIG undefined FUN_148161a0a(void)

undefined8 FUN_148161a0a(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14815f42c();
  if (cVar1 != '\0') {
    uVar2 = FUN_147a3e954(param_2 + 0x70,param_1 + 0x70);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148161a42 FUN_148161a42 body=84 status=ok
// SIG undefined FUN_148161a42(void)

void FUN_148161a42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14816fe26(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar2 * 0x20;
  *(longlong *)(lVar3 + lVar4) = param_1 + 0x70;
  *(undefined8 *)(lVar3 + 8 + lVar4) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0x3d4ccccd3f800000;
  puVar1[1] = 0x3f8000003d4ccccd;
  return;
}



// FUNCTION 148161a96 FUN_148161a96 body=165 status=ok
// SIG undefined FUN_148161a96(void)

void FUN_148161a96(longlong param_1)

{
  float fVar1;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  float local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xe8) < 1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    local_38 = 1.0;
    fVar1 = local_38;
  }
  else {
    FUN_147a4117c(param_1 + 0x70,local_3c);
    *(float *)(param_1 + 0x48) = local_38;
    FUN_1413dd74e(param_1 + 0x70,local_3c);
    fVar1 = 1.0 / (local_38 - *(float *)(param_1 + 0x48));
  }
  *(float *)(param_1 + 0x4c) = local_38;
  *(float *)(param_1 + 0x50) = fVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148161b3c FUN_148161b3c body=204 status=ok
// SIG undefined FUN_148161b3c(void)

longlong * FUN_148161b3c(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (param_3 < 2) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 1.0 / ((float)param_3 + -1.0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < param_3) {
    if (param_3 != 0) {
      FUN_14482f6fa(param_2,param_3);
      iVar2 = 0;
      do {
        uVar3 = FUN_1448c9f94(param_1 + 0x70,
                              ((float)iVar2 * fVar4) / *(float *)(param_1 + 0x50) +
                              *(float *)(param_1 + 0x48),0);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14475e4ac(param_2,iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = uVar3;
        iVar2 = iVar2 + 1;
      } while (param_3 != iVar2);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 148161c28 FUN_148161c28 body=179 status=ok
// SIG undefined FUN_148161c28(void)

void FUN_148161c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x5c) & 2) != 0) {
    local_30 = FUN_144a7937e();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_30);
    }
    local_28 = 1;
    local_26 = 0;
    local_24 = 0xffffffff;
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_14024cd4c(param_2,iVar2);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0xc);
    puVar4 = puVar1 + 1;
    *puVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = FUN_144830b78(puVar4,&local_30);
    *(undefined4 *)puVar4 = uVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148161cdc FUN_148161cdc body=360 status=ok
// SIG undefined FUN_148161cdc(void)

longlong FUN_148161cdc(int *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  undefined1 auStack_8a8 [40];
  undefined1 *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  char local_868;
  undefined1 local_860 [2070];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if (*param_1 != 0) {
    if ((*param_1 == 1) && (*(longlong *)(param_1 + 1) != 0)) {
      local_880 = local_860;
      local_868 = '\0';
      local_870 = local_4a;
      local_878 = local_880;
      FUN_14005eb5c(param_1 + 1,&local_880);
      puVar4 = local_878;
      puVar3 = local_880;
      plVar5 = (longlong *)FUN_1481f4a7c(param_2);
      if ((longlong)(int)plVar5[1] != 0) {
        param_3 = *plVar5;
        iVar9 = (int)((ulonglong)((longlong)puVar4 - (longlong)puVar3) >> 1);
        lVar7 = (longlong)(int)plVar5[1] * 0x48;
        bVar8 = DAT_14c950c29;
        do {
          lVar2 = *(longlong *)(param_3 + 0x28);
          if (((bVar8 & 1) == 0) || (lVar2 == 0)) {
            if (lVar2 != 0) goto LAB_148161da0;
          }
          else {
            FUN_14689c22e(lVar2);
            bVar8 = DAT_14c950c29;
LAB_148161da0:
            uVar1 = *(uint *)(lVar2 + 0x68);
            iVar6 = uVar1 - 1;
            if (uVar1 == 0) {
              iVar6 = 0;
            }
            if (iVar6 == iVar9) {
              if ((iVar9 != 0) && (1 < uVar1)) {
                iVar6 = FUN_144a54874(puVar3,*(undefined8 *)(lVar2 + 0x60),(longlong)iVar9);
                if (iVar6 != 0) goto LAB_148161dce;
              }
              if (local_868 == '\x01') {
                FUN_1400020a8(local_880);
              }
              goto LAB_148161de1;
            }
          }
LAB_148161dce:
          param_3 = param_3 + 0x48;
          lVar7 = lVar7 + -0x48;
        } while (lVar7 != 0);
      }
      if (local_868 == '\x01') {
        FUN_1400020a8(local_880);
      }
    }
    param_3 = 0;
  }
LAB_148161de1:
  if ((local_48 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148161e46 FUN_148161e46 body=218 status=ok
// SIG undefined FUN_148161e46(void)

void FUN_148161e46(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_68[1] = 0;
  lVar1 = FUN_14171b860(0,DAT_14cb3b378);
  if (lVar1 == 0) {
    uVar2 = FUN_145a79354();
    lVar1 = FUN_1468ff240(param_1,uVar2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
  }
  else {
    FUN_148161f40(local_68,param_2);
    local_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = param_4[2];
    uStack_44 = param_4[3];
    local_40 = *(undefined8 *)(param_4 + 4);
    local_68[2] = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,lVar1,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148161f40 FUN_148161f40 body=85 status=ok
// SIG undefined FUN_148161f40(void)

undefined8 * FUN_148161f40(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1481716ca(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 148161f96 FUN_148161f96 body=370 status=ok
// SIG undefined FUN_148161f96(void)

void FUN_148161f96(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)*param_1)(param_1,plVar1,local_40,puVar2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162110 FUN_148162110 body=249 status=ok
// SIG undefined FUN_148162110(void)

void FUN_148162110(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_80 = (undefined4)param_4[1];
  local_88 = *param_4;
  local_78[0] = (code *)0x0;
  local_68 = (longlong *)FUN_14001cc68(0x38,8);
  *local_68 = (longlong)&PTR_FUN_14adcc6c0;
  local_68[1] = param_1;
  local_68[2] = lVar1;
  local_68[3] = lVar2;
  local_68[4] = param_3;
  *(undefined4 *)(local_68 + 6) = local_80;
  local_68[5] = local_88;
  if (local_68 + 1 != (longlong *)0x0) {
    local_78[0] = FUN_143a3de90;
  }
  thunk_FUN_1481fbf94(local_78);
  if (local_78[0] != (code *)0x0) {
    plVar3 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar3 = local_58;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162210 FUN_148162210 body=104 status=ok
// SIG undefined FUN_148162210(void)

bool FUN_148162210(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    param_2[6] = *(undefined8 *)(lVar1 + 0x38);
    uVar10 = *(undefined8 *)(lVar1 + 8);
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined4 *)(lVar1 + 0x18);
    uVar4 = *(undefined4 *)(lVar1 + 0x1c);
    uVar5 = *(undefined4 *)(lVar1 + 0x20);
    uVar6 = *(undefined4 *)(lVar1 + 0x24);
    uVar7 = *(undefined4 *)(lVar1 + 0x2c);
    uVar8 = *(undefined4 *)(lVar1 + 0x30);
    uVar9 = *(undefined4 *)(lVar1 + 0x34);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 0x28);
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
    *(undefined4 *)(param_2 + 5) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar9;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
    *param_2 = uVar10;
    param_2[1] = uVar11;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 148162278 FUN_148162278 body=84 status=ok
// SIG undefined FUN_148162278(void)

byte FUN_148162278(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_1481192e4();
  if ((((cVar1 == '\0') || (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38))) ||
      (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) ||
     ((*(char *)(param_2 + 0x58) != *(char *)(param_1 + 0x58) ||
      (*(int *)(param_2 + 0x5c) != *(int *)(param_1 + 0x5c))))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(float *)(param_1 + 0x60) == *(float *)(param_2 + 0x60)) & 1;
  }
  return bVar2;
}



// FUNCTION 1481622cc FUN_1481622cc body=202 status=ok
// SIG undefined FUN_1481622cc(void)

void FUN_1481622cc(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcb830;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162398 FUN_148162398 body=202 status=ok
// SIG undefined FUN_148162398(void)

void FUN_148162398(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcb8a0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162464 FUN_148162464 body=790 status=ok
// SIG undefined FUN_148162464(void)

void FUN_148162464(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  byte bVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined4 uVar22;
  int iVar23;
  undefined1 auStack_1a8 [40];
  undefined4 *local_180;
  int local_178;
  float *local_170 [2];
  int local_160;
  float *local_158;
  int local_148;
  float *local_140;
  int local_130;
  undefined4 *local_128;
  undefined8 uStack_120;
  int local_118;
  float *local_110 [2];
  int local_100;
  float *local_f8;
  int local_e8;
  float *local_e0;
  int local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14816277c(local_b0);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a76d88(&local_c8,param_2);
  FUN_1448a432c(local_110,param_2);
  local_118 = 0;
  local_128 = (undefined4 *)0x0;
  uStack_120 = 0;
  FUN_144a98dce(&local_128,param_2);
  FUN_1448a432c(local_170,param_2);
  FUN_140126e42(&local_180,param_2);
  bVar18 = 1;
  if (*(longlong *)(local_a8 + 0x30) != 0) {
    plVar19 = (longlong *)FUN_144741050(local_a8 + 0x38);
    if (*plVar19 != 0) {
      bVar18 = FUN_144729dda(local_a8);
      bVar18 = bVar18 ^ 1;
    }
  }
  piVar21 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar21 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar21) {
    iVar23 = 0;
    do {
      lVar16 = local_a8;
      piVar21 = local_c8 + local_b8;
      iVar15 = *local_c8;
      pfVar1 = local_e0 + local_d0;
      fVar7 = *local_e0;
      pfVar2 = local_f8 + local_e8;
      fVar8 = *local_f8;
      pfVar3 = local_110[0] + local_100;
      fVar9 = *local_110[0];
      puVar4 = local_128 + local_118;
      uVar10 = *local_128;
      pfVar5 = local_140 + local_130;
      fVar11 = *local_140;
      pfVar6 = local_158 + local_148;
      fVar12 = *local_158;
      uVar22 = 0;
      pfVar17 = local_170[0] + local_160;
      local_158 = pfVar6;
      local_140 = pfVar5;
      local_128 = puVar4;
      local_110[0] = pfVar3;
      local_f8 = pfVar2;
      local_e0 = pfVar1;
      local_c8 = piVar21;
      if (iVar15 != 0 && bVar18 == 0) {
        fVar13 = *local_170[0];
        local_170[0] = local_170[0] + local_160;
        puVar20 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *puVar20 = 0;
        puVar20[1] = (double)fVar9;
        puVar20[2] = (double)fVar8;
        puVar20[3] = (double)fVar7;
        *(undefined4 *)(puVar20 + 4) = uVar10;
        puVar20[5] = (double)fVar13;
        puVar20[6] = (double)fVar12;
        puVar20[7] = (double)fVar11;
        uVar22 = 0;
        pfVar17 = local_170[0];
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          puVar14 = *(undefined8 **)(lVar16 + 0x10);
          *(undefined8 **)(lVar16 + 0x10) = puVar20;
          UNLOCK();
          LOCK();
          *puVar14 = puVar20;
          UNLOCK();
          uVar22 = 0xffffffff;
        }
      }
      local_170[0] = pfVar17;
      puVar4 = local_180 + local_178;
      *local_180 = uVar22;
      iVar23 = iVar23 + 1;
      piVar21 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar21 = (int *)(param_2 + 0x3c);
      }
      local_180 = puVar4;
    } while (iVar23 < *piVar21);
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14816277c FUN_14816277c body=148 status=ok
// SIG undefined FUN_14816277c(void)

void FUN_14816277c(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148162810 FUN_148162810 body=790 status=ok
// SIG undefined FUN_148162810(void)

void FUN_148162810(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  byte bVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int *piVar21;
  undefined4 uVar22;
  int iVar23;
  undefined1 auStack_1a8 [40];
  undefined4 *local_180;
  int local_178;
  float *local_170 [2];
  int local_160;
  float *local_158;
  int local_148;
  float *local_140;
  int local_130;
  undefined4 *local_128;
  undefined8 uStack_120;
  int local_118;
  float *local_110 [2];
  int local_100;
  float *local_f8;
  int local_e8;
  float *local_e0;
  int local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14816277c(local_b0);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a76d88(&local_c8,param_2);
  FUN_1448a432c(local_110,param_2);
  local_118 = 0;
  local_128 = (undefined4 *)0x0;
  uStack_120 = 0;
  FUN_144a98dce(&local_128,param_2);
  FUN_1448a432c(local_170,param_2);
  FUN_140126e42(&local_180,param_2);
  bVar18 = 1;
  if (*(longlong *)(local_a8 + 0x30) != 0) {
    plVar19 = (longlong *)FUN_144741050(local_a8 + 0x38);
    if (*plVar19 != 0) {
      bVar18 = FUN_144729dda(local_a8);
      bVar18 = bVar18 ^ 1;
    }
  }
  piVar21 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar21 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar21) {
    iVar23 = 0;
    do {
      lVar16 = local_a8;
      piVar21 = local_c8 + local_b8;
      iVar15 = *local_c8;
      pfVar1 = local_e0 + local_d0;
      fVar7 = *local_e0;
      pfVar2 = local_f8 + local_e8;
      fVar8 = *local_f8;
      pfVar3 = local_110[0] + local_100;
      fVar9 = *local_110[0];
      puVar4 = local_128 + local_118;
      uVar10 = *local_128;
      pfVar5 = local_140 + local_130;
      fVar11 = *local_140;
      pfVar6 = local_158 + local_148;
      fVar12 = *local_158;
      uVar22 = 0;
      pfVar17 = local_170[0] + local_160;
      local_158 = pfVar6;
      local_140 = pfVar5;
      local_128 = puVar4;
      local_110[0] = pfVar3;
      local_f8 = pfVar2;
      local_e0 = pfVar1;
      local_c8 = piVar21;
      if (iVar15 != 0 && bVar18 == 0) {
        fVar13 = *local_170[0];
        local_170[0] = local_170[0] + local_160;
        puVar20 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *puVar20 = 0;
        puVar20[1] = (double)fVar9;
        puVar20[2] = (double)fVar8;
        puVar20[3] = (double)fVar7;
        *(undefined4 *)(puVar20 + 4) = uVar10;
        puVar20[5] = (double)fVar13;
        puVar20[6] = (double)fVar12;
        puVar20[7] = (double)fVar11;
        uVar22 = 0;
        pfVar17 = local_170[0];
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          puVar14 = *(undefined8 **)(lVar16 + 0x10);
          *(undefined8 **)(lVar16 + 0x10) = puVar20;
          UNLOCK();
          LOCK();
          *puVar14 = puVar20;
          UNLOCK();
          uVar22 = 0xffffffff;
        }
      }
      local_170[0] = pfVar17;
      puVar4 = local_180 + local_178;
      *local_180 = uVar22;
      iVar23 = iVar23 + 1;
      piVar21 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar21 = (int *)(param_2 + 0x3c);
      }
      local_180 = puVar4;
    } while (iVar23 < *piVar21);
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162b28 FUN_148162b28 body=89 status=ok
// SIG undefined FUN_148162b28(void)

undefined8 FUN_148162b28(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    FUN_1447a122a(param_2 + 0x48,param_1 + 0x48);
    *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(param_1 + 0x58);
    uVar1 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_2 + 0x5c) = uVar1;
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 148162b88 FUN_148162b88 body=464 status=ok
// SIG undefined FUN_148162b88(void)

void FUN_148162b88(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_44;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  local_58 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_58 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x448))(param_1,local_38,local_40,puVar3);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162d60 FUN_148162d60 body=339 status=ok
// SIG undefined FUN_148162d60(void)

void FUN_148162d60(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x440))(param_1,local_28,local_30,local_34);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148162eb4 FUN_148162eb4 body=367 status=ok
// SIG undefined FUN_148162eb4(void)

void FUN_148162eb4(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar1 = &local_34;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x450))(param_1,local_30,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148163024 FUN_148163024 body=367 status=ok
// SIG undefined FUN_148163024(void)

void FUN_148163024(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar1 = &local_34;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x458))(param_1,local_30,puVar1,puVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481631a0 FUN_1481631a0 body=78 status=ok
// SIG undefined FUN_1481631a0(void)

void FUN_1481631a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0 && (*param_1 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1481631f2 FUN_1481631f2 body=320 status=ok
// SIG undefined FUN_1481631f2(void)

int FUN_1481631f2(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = 4;
  if ((((((((lVar1 != DAT_14cb3b4f8) && (lVar1 != DAT_14cb3b500)) && (lVar1 != DAT_14cb3b508)) &&
         (((lVar1 != DAT_14cb3b5e8 && (lVar1 != DAT_14cb3b578)) &&
          ((lVar1 != DAT_14cb3b580 &&
           ((iVar2 = 3, lVar1 != DAT_14cb3b510 && (lVar1 != DAT_14cb3b590)))))))) &&
        (lVar1 != DAT_14cb3b518)) &&
       (((((lVar1 != DAT_14cb3b520 && (lVar1 != DAT_14cb3b5f0)) && (lVar1 != DAT_14cb3b598)) &&
         ((lVar1 != DAT_14cb3b5a0 && (iVar2 = 2, lVar1 != DAT_14cb3b528)))) &&
        ((lVar1 != DAT_14cb3b5b0 && ((lVar1 != DAT_14cb3b530 && (lVar1 != DAT_14cb3b538)))))))) &&
      ((lVar1 != DAT_14cb3b5f8 &&
       (((lVar1 != DAT_14cb3b5b8 && (lVar1 != DAT_14cb3b5c0)) && (iVar2 = 1, lVar1 != DAT_14cb3b540)
        ))))) &&
     (((lVar1 != DAT_14cb3b548 && (lVar1 != DAT_14cb3b550)) &&
      ((lVar1 != DAT_14cb3b5d0 && (lVar1 != DAT_14cb3b5d8)))))) {
    iVar2 = (uint)(lVar1 == DAT_14cb3b600) * 2 + -1;
  }
  return iVar2;
}



// FUNCTION 148163596 FUN_148163596 body=225 status=ok
// SIG undefined FUN_148163596(void)

void FUN_148163596(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14ad81180;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14adcc850;
  local_40[3] = param_1;
  local_40[4] = param_3;
  *(undefined4 *)(local_40 + 5) = param_4;
  FUN_144a450dc(param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148163678 FUN_148163678 body=90 status=ok
// SIG undefined FUN_148163678(void)

undefined4 FUN_148163678(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_14819028e();
  uVar2 = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    if ((*(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60)) &&
       ((*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68) &&
        (*(char *)(param_2 + 0x80) == *(char *)(param_1 + 0x80))))) {
      uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x68) >> 8),
                       ((*(byte *)(param_1 + 0x81) ^ *(byte *)(param_2 + 0x81)) & 1) == 0);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1481636d2 FUN_1481636d2 body=450 status=ok
// SIG undefined FUN_1481636d2(void)

ulonglong * FUN_1481636d2(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  puVar9 = (ulonglong *)FUN_14001cc68(0x20,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  uVar7 = *(uint *)(param_2 + 0x30);
  uVar12 = (ulonglong)uVar7;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  iVar6 = 0;
  if (uVar12 != 0) {
    FUN_148171a8c(puVar9,uVar7);
    iVar6 = *(int *)((longlong)puVar9 + 0x1c);
  }
  puVar1 = puVar9 + 2;
  if (iVar6 < (int)uVar7) {
    FUN_14024fde8(puVar1,uVar7);
  }
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x28);
      lVar13 = uVar14 * 0x50;
      lVar10 = (longlong)*(int *)(lVar2 + 0x20 + lVar13);
      if (lVar10 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x18 + lVar13);
        lVar15 = 0;
        do {
          if (*(longlong *)(lVar3 + lVar15) == DAT_14cb3d8e0) {
            uVar8 = FUN_1481631f2(lVar2 + lVar13);
            uVar5 = *(undefined8 *)(lVar3 + 8 + lVar15);
            iVar6 = (int)puVar9[1];
            *(uint *)(puVar9 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)puVar9 + 0xc) < iVar6 + 1U) {
              FUN_14816c94e(puVar9,iVar6);
            }
            uVar4 = *puVar9;
            uVar11 = ((longlong)uVar4 >> 0x18) + (longlong)puVar9;
            if ((uVar4 & 1) == 0) {
              uVar11 = uVar4;
            }
            *(undefined8 *)(uVar11 + (longlong)iVar6 * 8) = uVar5;
            iVar6 = (int)puVar9[3];
            uVar7 = iVar6 + 1;
            *(uint *)(puVar9 + 3) = uVar7;
            goto LAB_1481637b0;
          }
          lVar15 = lVar15 + 0x10;
        } while (lVar10 * 0x10 != lVar15);
      }
      iVar6 = (int)puVar9[1];
      *(uint *)(puVar9 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)puVar9 + 0xc) < iVar6 + 1U) {
        FUN_14816c94e(puVar9,iVar6);
      }
      uVar4 = *puVar9;
      uVar11 = ((longlong)uVar4 >> 0x18) + (longlong)puVar9;
      if ((uVar4 & 1) == 0) {
        uVar11 = uVar4;
      }
      *(undefined8 *)(uVar11 + (longlong)iVar6 * 8) = 0;
      iVar6 = (int)puVar9[3];
      uVar7 = iVar6 + 1;
      *(uint *)(puVar9 + 3) = uVar7;
      uVar8 = 0xffffffff;
LAB_1481637b0:
      if (*(uint *)((longlong)puVar9 + 0x1c) < uVar7) {
        FUN_14042c7ac(puVar1,iVar6);
      }
      uVar4 = *puVar1;
      uVar11 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
      if ((uVar4 & 1) == 0) {
        uVar11 = uVar4;
      }
      *(undefined4 *)(uVar11 + (longlong)iVar6 * 4) = uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
  }
  if (*(int *)((longlong)puVar9 + 0xc) != (int)puVar9[1]) {
    FUN_148171a8c(puVar9);
  }
  if (*(int *)((longlong)puVar9 + 0x1c) != (int)puVar9[3]) {
    FUN_14024fde8(puVar1);
  }
  return puVar9;
}



// FUNCTION 148163896 FUN_148163896 body=21 status=ok
// SIG undefined FUN_148163896(void)

undefined * FUN_148163896(void)

{
  FUN_145d4928e();
  return &DAT_14cb3b428;
}



// FUNCTION 1481638ac FUN_1481638ac body=98 status=ok
// SIG undefined FUN_1481638ac(void)

undefined4 FUN_1481638ac(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_148190310();
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    FUN_1447a122a(param_2 + 0x70,param_1 + 0x70);
    *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0x80);
    *(byte *)(param_2 + 0x81) = *(byte *)(param_2 + 0x81) & 0xfe | *(byte *)(param_1 + 0x81) & 1;
  }
  return uVar1;
}



// FUNCTION 14816390e FUN_14816390e body=69 status=ok
// SIG undefined FUN_14816390e(void)

void FUN_14816390e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb3b648;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb3b640;
  return;
}



// FUNCTION 148163954 FUN_148163954 body=93 status=ok
// SIG undefined FUN_148163954(void)

undefined8
FUN_148163954(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb3b640) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb3b648) {
      return 0;
    }
    lVar1 = *(longlong *)(param_3 + 0x70);
    if (lVar1 != 0) {
      *param_5 = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1481639b2 FUN_1481639b2 body=1132 status=ok
// SIG undefined FUN_1481639b2(void)

longlong * FUN_1481639b2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_1 == 0) {
    local_58 = L"InvalidNameText";
    local_50 = 0xf;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"NiagaraTypeDefinition";
    local_50 = 0x15;
    FUN_1446e940c(&local_78,&local_58);
    FUN_140208bae(param_2,&local_78,&local_68,L"Invalid (null type)");
  }
  else {
    FUN_144a5dc74(param_2);
    local_58 = *(wchar_t **)(*param_1 + 0x18);
    FUN_1400021e4(&local_58,&local_68);
    FUN_140233b1a(&local_58,&local_68);
    FUN_140008f88(param_2,&local_58);
    if (local_58 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (*(byte *)((longlong)param_1 + 10) != 0) {
      if ((*(byte *)((longlong)param_1 + 10) & 1) == 0) {
        local_e0 = (longlong *)*param_2;
        if (local_e0 != (longlong *)0x0) {
          (**(code **)(*local_e0 + 8))();
        }
        local_d8 = (undefined4)param_2[1];
        local_58 = L"UnknownNameText";
        local_50 = 0xf;
        FUN_1446e940c(local_cc,&local_58);
        local_58 = L"NiagaraTypeDefinition";
        local_50 = 0x15;
        FUN_1446e940c(local_d0,&local_58);
        FUN_140208bae(local_c8,local_d0,local_cc,L"Unknown Flag Type {0}");
        FUN_14023409e(&local_f0,local_c8,1);
        local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
        FUN_14023423e(local_48,&local_e0);
        local_70 = &local_38;
        local_78 = &local_58;
        FUN_14010d304(&local_68);
        local_88 = local_f0;
        local_80 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_98,&local_88,&local_68);
        FUN_14007f2db(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        plVar3 = local_e0;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)local_e8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar3 = local_e0;
            if (*piVar2 == 0) {
              (**(code **)(*local_e8 + 0x10))(local_e8);
              plVar3 = local_e0;
            }
          }
        }
      }
      else {
        local_a8 = (longlong *)*param_2;
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 8))();
        }
        local_a0 = (undefined4)param_2[1];
        local_58 = L"FlagFormatNameText";
        local_50 = 0x12;
        FUN_1446e940c(local_cc,&local_58);
        local_58 = L"NiagaraTypeDefinition";
        local_50 = 0x15;
        FUN_1446e940c(local_d0,&local_58);
        FUN_140208bae(local_c8,local_d0,local_cc,L"Static {0}");
        FUN_14023409e(&local_b8,local_c8,1);
        local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
        FUN_14023423e(local_48,&local_a8);
        local_70 = &local_38;
        local_78 = &local_58;
        FUN_14010d304(&local_68);
        local_88 = local_b8;
        local_80 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_98,&local_88,&local_68);
        FUN_14007f2db(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        plVar3 = local_a8;
        if (local_b0 != (longlong *)0x0) {
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
            plVar3 = local_a8;
            if (*piVar2 == 0) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
              plVar3 = local_a8;
            }
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      FUN_140008f88(param_2,local_98);
      if (local_98[0] != (longlong *)0x0) {
        (**(code **)(*local_98[0] + 0x10))();
      }
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148163e20 FUN_148163e20 body=85 status=ok
// SIG undefined FUN_148163e20(void)

void FUN_148163e20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1412c8ca8(0,param_2,local_28,local_2c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148163e76 FUN_148163e76 body=674 status=ok
// SIG undefined FUN_148163e76(void)

undefined8
FUN_148163e76(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [28];
  undefined4 local_12c;
  undefined8 local_120;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((param_4 != 0) && (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc))) {
    lVar5 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar5 = *(longlong *)(param_1 + 200);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xd0) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (((plVar1 != (longlong *)0x0) && (lVar5 = plVar1[1], lVar5 != 0)) &&
             ((longlong)*(int *)(lVar5 + 0x80) != 0)) {
            lVar6 = 0;
            uVar4 = 0;
            goto LAB_148163f81;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
LAB_148163eb0:
  uVar4 = 0;
  goto LAB_148163eb2;
  while (lVar6 = lVar6 + 0xc, (longlong)*(int *)(lVar5 + 0x80) * 0xc != lVar6) {
LAB_148163f81:
    if (*(longlong *)(*(longlong *)(lVar5 + 0x78) + lVar6) == param_3) {
      iVar3 = (int)(lVar6 >> 2) * -0x55555555;
      if (iVar3 == -1) goto LAB_148163eb0;
      iVar2 = *(int *)(*(longlong *)(lVar5 + 0x88) + (longlong)iVar3 * 4);
      uVar4 = FUN_144741050(*(longlong *)(lVar5 + 0x78) + (longlong)iVar3 * 0xc + 8);
      iVar3 = FUN_144a81174(uVar4);
      iVar3 = iVar3 >> 2;
      local_94 = iVar2 + 1;
      if (iVar3 < 2) {
        local_94 = -1;
      }
      local_90 = iVar2 + 2;
      if (iVar3 < 3) {
        local_90 = -1;
      }
      local_8c = iVar2 + 3;
      if (iVar3 < 4) {
        local_8c = -1;
      }
      local_1a0 = &local_158;
      local_158 = 0x3ff0000000000000;
      local_150 = 0;
      local_1a8 = &local_168;
      local_168 = 0;
      local_160 = 0x3ff0000000000000;
      local_170 = (double)(param_5[3] - param_5[1]);
      local_178 = (double)(param_5[2] - *param_5);
      local_180 = (double)param_5[1];
      local_188 = (double)*param_5;
      local_198 = &DAT_149e1e2f8;
      local_98 = iVar2;
      FUN_147d8e19e(local_148,&local_188,DAT_14ca94e18);
      local_12c = 0;
      uVar4 = FUN_14001cc68(0x60,0x10);
      local_60 = *(undefined8 *)(param_1 + 0x28);
      local_78 = 0;
      local_68 = &PTR_LAB_14adcc9b0;
      local_88 = &LAB_143a3f670;
      local_58 = param_2;
      FUN_14816411a(uVar4,&local_98);
      local_120 = uVar4;
      FUN_140505094(param_4,local_148);
      uVar4 = 1;
      break;
    }
  }
LAB_148163eb2:
  if ((local_40 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14816411a FUN_14816411a body=120 status=ok
// SIG undefined FUN_14816411a(void)

undefined8 * FUN_14816411a(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14adcbb88;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  lVar1 = *param_3;
  param_1[4] = lVar1;
  param_1[6] = 0;
  if (lVar1 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)*plVar6)(uVar2,param_1 + 6);
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return param_1;
}



// FUNCTION 148164192 FUN_148164192 body=362 status=ok
// SIG undefined FUN_148164192(void)

void FUN_148164192(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  if (param_2 == 0) {
    *param_3 = 0xffffffff;
    *param_4 = 0xffffffff;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x760);
    plVar4 = *(longlong **)(param_2 + 0x768);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((lVar3 != 0) &&
       (param_2 = (ulonglong)*(uint *)(param_1 + 0x90),
       *(uint *)(param_1 + 0x90) != *(uint *)(param_1 + 0xbc))) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x100);
      uVar9 = (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17;
      param_2 = (ulonglong)uVar9;
      lVar11 = param_1 + 0xc0;
      if (*(longlong *)(param_1 + 200) != 0) {
        lVar11 = *(longlong *)(param_1 + 200);
      }
      iVar6 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & uVar9) * 4);
      if (iVar6 != -1) {
        param_2 = *(ulonglong *)(param_1 + 0x88);
        do {
          plVar2 = (longlong *)(param_2 + (longlong)iVar6 * 0x18);
          if (*plVar2 == lVar3) {
            if ((plVar2 != (longlong *)0x0) && (plVar2[1] != 0)) {
              iVar6 = *(int *)(param_1 + 0x48);
              uVar7 = *(undefined8 *)(plVar2[1] + 4);
              iVar12 = (int)uVar7;
              iVar8 = DAT_14ca84e40 / iVar12;
              iVar10 = (int)((ulonglong)uVar7 >> 0x20);
              param_2 = (longlong)DAT_14ca84e40 % (longlong)iVar10;
              uVar7 = DAT_14c967818;
              if (iVar6 <= (DAT_14ca84e40 / iVar10) * iVar8) {
                if (iVar6 < iVar8) {
                  iVar8 = iVar6;
                }
                iVar6 = iVar6 + iVar8 + -1;
                param_2 = (longlong)iVar6 % (longlong)iVar8;
                uVar7 = CONCAT44((iVar6 / iVar8) * iVar10,iVar8 * iVar12);
              }
              param_2 = param_2 & 0xffffffff;
              *param_3 = (int)uVar7;
              uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
              goto LAB_1481641d4;
            }
            break;
          }
          iVar6 = (int)plVar2[2];
        } while (iVar6 != -1);
      }
    }
    *param_3 = 0xffffffff;
    uVar5 = 0xffffffff;
LAB_1481641d4:
    *param_4 = uVar5;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar4)(plVar4,param_2);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481641fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1481642fc FUN_1481642fc body=276 status=ok
// SIG undefined FUN_1481642fc(void)

void FUN_1481642fc(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    *param_3 = 0xffffffff;
    *param_4 = 0xffffffff;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x760);
    plVar4 = *(longlong **)(param_2 + 0x768);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((lVar3 != 0) && (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc))) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x100);
      lVar7 = param_1 + 0xc0;
      if (*(longlong *)(param_1 + 200) != 0) {
        lVar7 = *(longlong *)(param_1 + 200);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U &
                               (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
      if (iVar6 != -1) {
        do {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x18);
          if (*plVar2 == lVar3) {
            if ((plVar2 != (longlong *)0x0) && (lVar3 = plVar2[1], lVar3 != 0)) {
              *param_3 = *(undefined4 *)(lVar3 + 4);
              uVar5 = *(undefined4 *)(lVar3 + 8);
              goto LAB_14816433c;
            }
            break;
          }
          iVar6 = (int)plVar2[2];
        } while (iVar6 != -1);
      }
    }
    *param_3 = 0xffffffff;
    uVar5 = 0xffffffff;
LAB_14816433c:
    *param_4 = uVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000148164363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148164410 FUN_148164410 body=204 status=ok
// SIG undefined FUN_148164410(void)

void FUN_148164410(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_68 [40];
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14129f488(local_20,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    dVar3 = *(double *)(local_18 + 0x28);
    dVar4 = *(double *)(local_18 + 0x20);
    iVar5 = 0;
    do {
      pfVar1 = local_40 + local_38;
      *local_40 = (float)dVar4;
      pfVar2 = local_30 + local_28;
      *local_30 = (float)dVar3;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_40 = pfVar1;
      local_30 = pfVar2;
    } while (iVar5 < *piVar6);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481644de FUN_1481644de body=204 status=ok
// SIG undefined FUN_1481644de(void)

void FUN_1481644de(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_68 [40];
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14129f488(local_20,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_30,param_1);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar6) {
    dVar3 = *(double *)(local_18 + 0x18);
    dVar4 = *(double *)(local_18 + 0x10);
    iVar5 = 0;
    do {
      pfVar1 = local_40 + local_38;
      *local_40 = (float)dVar4;
      pfVar2 = local_30 + local_28;
      *local_30 = (float)dVar3;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = (int *)(param_1 + 0x3c);
      }
      local_40 = pfVar1;
      local_30 = pfVar2;
    } while (iVar5 < *piVar6);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481645ac FUN_1481645ac body=219 status=ok
// SIG undefined FUN_1481645ac(void)

void FUN_1481645ac(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14129f488(local_28,param_1);
  FUN_144a76cd4(&local_38,param_1);
  FUN_144a76cd4(&local_48,param_1);
  lVar6 = *(longlong *)(local_20 + 0xa8);
  if (*(longlong *)(local_20 + 0xa8) == 0) {
    lVar6 = local_20;
  }
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    uVar3 = *(undefined4 *)(lVar6 + 4);
    uVar4 = *(undefined4 *)(lVar6 + 8);
    iVar7 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar3;
      puVar2 = local_48 + local_40;
      *local_48 = uVar4;
      iVar7 = iVar7 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_48 = puVar2;
      local_38 = puVar1;
    } while (iVar7 < *piVar5);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148164688 FUN_148164688 body=197 status=ok
// SIG undefined FUN_148164688(void)

void FUN_148164688(char *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14129f488(local_38,param_1);
  FUN_144a76cd4(&local_48,param_1);
  uVar2 = 0xffffffff;
  if (local_30 != 0) {
    uVar2 = FUN_14816474e(local_30,param_2,param_3);
  }
  piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar4 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_48 + local_40;
      *local_48 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar4 = (int *)(param_1 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14816474e FUN_14816474e body=604 status=ok
// SIG undefined FUN_14816474e(void)

undefined4 FUN_14816474e(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 8;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(lVar1 + -8 + lVar5) == *param_2) {
        switch(param_3) {
        case 1:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb420f0;
          if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb420f0);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb420f8)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb420f8._2_1_)) goto LAB_148164988;
          break;
        case 2:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb42110;
          if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42110);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb42118)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42118._2_1_)) goto LAB_148164988;
          break;
        case 3:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb42140;
          if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42140);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb42148)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42148._2_1_)) goto LAB_148164988;
          break;
        case 4:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar2 = DAT_14cb42160;
          if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42160);
          }
          if (((*plVar3 == lVar2) && ((short)plVar3[1] == (short)DAT_14cb42168)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42168._2_1_)) {
LAB_148164988:
            return *(undefined4 *)(*(longlong *)(param_1 + 0x88) + lVar4 * 4);
          }
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb42180;
          if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42180);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb42188)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42188._2_1_)) goto LAB_148164988;
        }
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar4 < *(int *)(param_1 + 0x80));
  }
  return 0xffffffff;
}



// FUNCTION 1481649aa FUN_1481649aa body=379 status=ok
// SIG undefined FUN_1481649aa(void)

void FUN_1481649aa(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = (**(code **)(*param_4 + 8))(param_4);
  if (*(char *)(lVar2 + 0x32) == '\0') {
    local_a0 = param_4;
    plVar3 = (longlong *)FUN_144b113f6(param_2 + 0x1d8);
    if ((plVar3 == (longlong *)0x0) || (lVar4 = *plVar3, lVar4 == 0)) {
      FUN_1447ec05f(&local_a0,param_4,L"NiagaraRenderTargetToCopyTo");
      lVar4 = FUN_14473c272(param_2,&local_a0,0);
      if (local_a0 != (longlong *)0x0) {
        (**(code **)(*local_a0 + 0x38))();
      }
    }
    iVar5 = *(int *)(param_1 + 4);
    if (0 < iVar5) {
      iVar6 = 0;
      do {
        local_8c = DAT_14c9a52a0;
        local_94 = DAT_14c9a5298;
        local_78 = 0x100000000;
        uStack_70 = 0;
        local_68 = 1;
        iVar1 = *(int *)(param_1 + 8);
        local_a0 = *(longlong **)(param_1 + 8);
        local_98 = 1;
        local_88 = (iVar6 % *(int *)(param_1 + 0x10)) * iVar1;
        local_84 = (iVar6 / *(int *)(param_1 + 0x10)) * *(int *)(param_1 + 0xc);
        local_80 = 0;
        local_7c = iVar6;
        if ((local_88 + iVar1 <= *(int *)(lVar2 + 0x24)) &&
           (local_84 + *(int *)(param_1 + 0xc) <= *(int *)(lVar2 + 0x28))) {
          FUN_1400e8d41(param_2,param_3,lVar4,&local_a0);
          iVar5 = *(int *)(param_1 + 4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148164b2a FUN_148164b2a body=103 status=ok
// SIG undefined FUN_148164b2a(void)

void FUN_148164b2a(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(*param_2 + 8);
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148164b92 FUN_148164b92 body=99 status=ok
// SIG undefined FUN_148164b92(void)

void FUN_148164b92(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148164bf6 FUN_148164bf6 body=287 status=ok
// SIG undefined FUN_148164bf6(void)

undefined8 FUN_148164bf6(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  cVar2 = FUN_148163678();
  uVar4 = 0;
  if ((param_2 != 0) && (cVar2 != '\0')) {
    iVar6 = *(int *)(param_2 + 0x130);
    if (iVar6 == *(int *)(param_1 + 0x130)) {
      if (1 < iVar6) {
        lVar7 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x128) + lVar7);
          uVar3 = (ulonglong)uVar8;
          uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x128) + lVar7);
          if (uVar8 != uVar9) break;
          if (uVar8 == 0) goto LAB_148164c94;
LAB_148164c5d:
          lVar7 = lVar7 + 2;
        }
        if ((uVar9 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          uVar11 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar11]) goto LAB_148164c5d;
        }
        if (uVar8 != uVar9) {
          return 0;
        }
      }
    }
    else if (*(int *)(param_1 + 0x130) + iVar6 != 1) {
      return 0;
    }
LAB_148164c94:
    iVar6 = *(int *)(param_2 + 0x140);
    iVar1 = *(int *)(param_1 + 0x140);
    if (iVar6 == iVar1) {
      if (iVar6 < 2) {
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      uVar3 = *(ulonglong *)(param_1 + 0x138);
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*(longlong *)(param_2 + 0x138) + lVar7);
        uVar5 = (uint)uVar8;
        uVar9 = *(ushort *)(uVar3 + lVar7);
        uVar10 = (uint)uVar9;
        if (uVar8 != uVar9) {
          if ((uVar9 | uVar8) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar8];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar9]) goto LAB_148164cd7;
          }
          iVar6 = uVar5 - uVar10;
          goto LAB_148164d11;
        }
        if (uVar8 == 0) break;
LAB_148164cd7:
        lVar7 = lVar7 + 2;
      }
      iVar6 = 0;
LAB_148164d11:
      bVar12 = iVar6 == 0;
    }
    else {
      uVar3 = (ulonglong)(uint)(iVar1 + iVar6);
      bVar12 = iVar1 + iVar6 == 1;
    }
    uVar4 = CONCAT71((int7)(uVar3 >> 8),bVar12);
  }
  return uVar4;
}



// FUNCTION 148164d16 FUN_148164d16 body=73 status=ok
// SIG undefined FUN_148164d16(void)

undefined4 FUN_148164d16(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1481638ac();
  if ((char)uVar1 != '\0') {
    FUN_144a787a6(param_2 + 0x128,param_1 + 0x128);
    FUN_144a787a6(param_2 + 0x138,param_1 + 0x138);
  }
  return uVar1;
}



// FUNCTION 148164d60 FUN_148164d60 body=373 status=ok
// SIG undefined FUN_148164d60(void)

void FUN_148164d60(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || ((longlong)*(int *)(param_2 + 0xc0) == 0)) {
LAB_148164e82:
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar11 = *(longlong *)(param_2 + 0xb8);
  lVar1 = lVar11 + (longlong)*(int *)(param_2 + 0xc0) * 0x48;
  bVar5 = DAT_14c950c29;
LAB_148164db7:
  lVar4 = *(longlong *)(lVar11 + 0x28);
  if (((bVar5 & 1) == 0) || (lVar4 == 0)) {
    local_48 = *(undefined4 *)(lVar11 + 0x30);
    uStack_44 = *(undefined4 *)(lVar11 + 0x34);
    uStack_40 = *(undefined4 *)(lVar11 + 0x38);
    uStack_3c = *(undefined4 *)(lVar11 + 0x3c);
    if (lVar4 != 0) goto LAB_148164dd7;
    goto LAB_148164e39;
  }
  FUN_14689c22e(lVar4);
  local_48 = *(undefined4 *)(lVar11 + 0x30);
  uStack_44 = *(undefined4 *)(lVar11 + 0x34);
  uStack_40 = *(undefined4 *)(lVar11 + 0x38);
  uStack_3c = *(undefined4 *)(lVar11 + 0x3c);
  bVar5 = DAT_14c950c29;
LAB_148164dd7:
  iVar3 = *(int *)(lVar4 + 0x68);
  if (iVar3 == *(int *)(param_1 + 0x130)) {
    if (1 < iVar3) {
      lVar8 = 0;
      do {
        uVar6 = *(ushort *)(*(longlong *)(lVar4 + 0x60) + lVar8);
        uVar7 = (ulonglong)uVar6;
        uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x128) + lVar8);
        if (uVar6 == uVar9) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar6)) goto LAB_148164e48;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_148164e48;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
  }
  else if (*(int *)(param_1 + 0x130) + iVar3 != 1) goto LAB_148164e39;
  goto LAB_148164e50;
LAB_148164e48:
  if (uVar6 == uVar9) {
LAB_148164e50:
    iVar3 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_148171eb0(param_3,iVar3);
      bVar5 = DAT_14c950c29;
    }
    plVar2 = (longlong *)(*param_3 + (longlong)iVar3 * 0x18);
    *plVar2 = lVar4;
    if ((bVar5 & 1) != 0) {
      FUN_14689c22e(lVar4);
    }
    *(undefined4 *)(plVar2 + 1) = local_48;
    *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_44;
    *(undefined4 *)(plVar2 + 2) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_3c;
    goto LAB_148164e82;
  }
LAB_148164e39:
  lVar11 = lVar11 + 0x48;
  if (lVar11 == lVar1) goto LAB_148164e82;
  goto LAB_148164db7;
}



// FUNCTION 148165020 FUN_148165020 body=569 status=ok
// SIG undefined FUN_148165020(void)

void FUN_148165020(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_68 = &local_50;
  if (puVar3 != (undefined4 *)0x0) {
    local_68 = puVar3;
  }
  puVar3 = &local_4c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  local_60 = &local_54;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_60 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x448))(param_1,local_40,local_48,puVar3);
  *param_3 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148165260 FUN_148165260 body=339 status=ok
// SIG undefined FUN_148165260(void)

void FUN_148165260(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x440))(param_1,local_28,local_30,local_34);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481653b4 FUN_1481653b4 body=471 status=ok
// SIG undefined FUN_1481653b4(void)

void FUN_1481653b4(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
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
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_40;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  local_58 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_58 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x450))(param_1,local_38,puVar2,puVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14816558c FUN_14816558c body=471 status=ok
// SIG undefined FUN_14816558c(void)

void FUN_14816558c(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
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
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = &local_40;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = &local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  local_58 = &local_44;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_58 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x458))(param_1,local_38,puVar2,puVar3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148165770 FUN_148165770 body=78 status=ok
// SIG undefined FUN_148165770(void)

void FUN_148165770(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0 && (*param_1 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1481657c2 FUN_1481657c2 body=389 status=ok
// SIG undefined FUN_1481657c2(void)

bool FUN_1481657c2(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *param_1;
  bVar2 = true;
  if (((((((((lVar1 != DAT_14cb3b810) && (lVar1 != DAT_14cb3b8d0)) && (lVar1 != DAT_14cb3b8d8)) &&
          (((lVar1 != DAT_14cb3b8e0 && (lVar1 != DAT_14cb3b850)) &&
           ((lVar1 != DAT_14cb3b870 && ((lVar1 != DAT_14cb3b890 && (lVar1 != DAT_14cb3b8b0))))))))
         && (lVar1 != DAT_14cb3b818)) &&
        (((((lVar1 != DAT_14cb3b8e8 && (lVar1 != DAT_14cb3b8f0)) && (lVar1 != DAT_14cb3b8f8)) &&
          ((lVar1 != DAT_14cb3b900 && (lVar1 != DAT_14cb3b858)))) && (lVar1 != DAT_14cb3b878)))) &&
       (((lVar1 != DAT_14cb3b898 && (lVar1 != DAT_14cb3b8b8)) &&
        (((lVar1 != DAT_14cb3b820 &&
          (((lVar1 != DAT_14cb3b908 && (lVar1 != DAT_14cb3b910)) && (lVar1 != DAT_14cb3b918)))) &&
         (((lVar1 != DAT_14cb3b920 && (lVar1 != DAT_14cb3b860)) && (lVar1 != DAT_14cb3b880))))))))
      && (((lVar1 != DAT_14cb3b8a0 && (lVar1 != DAT_14cb3b8c0)) &&
          ((lVar1 != DAT_14cb3b830 &&
           (((lVar1 != DAT_14cb3b928 && (lVar1 != DAT_14cb3b930)) && (lVar1 != DAT_14cb3b938))))))))
     && (((lVar1 != DAT_14cb3b868 && (lVar1 != DAT_14cb3b888)) && (lVar1 != DAT_14cb3b8a8)))) {
    bVar2 = lVar1 == DAT_14cb3b8c8;
  }
  return bVar2;
}



// FUNCTION 148165948 FUN_148165948 body=653 status=ok
// SIG undefined FUN_148165948(void)

longlong * FUN_148165948(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = DAT_14cb42160;
  lVar3 = DAT_14cb42140;
  lVar2 = DAT_14cb42110;
  lVar1 = DAT_14cb420f0;
  lVar5 = *param_2;
  if (((((lVar5 == DAT_14cb3b810) || (lVar5 == DAT_14cb3b8d0)) || (lVar5 == DAT_14cb3b8d8)) ||
      ((lVar5 == DAT_14cb3b8e0 || (lVar5 == DAT_14cb3b850)))) ||
     ((lVar5 == DAT_14cb3b870 || ((lVar5 == DAT_14cb3b890 || (lVar5 == DAT_14cb3b8b0)))))) {
    *param_1 = DAT_14cb42160;
    lVar5 = DAT_14cb42168;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb42168;
    }
  }
  else if (((((lVar5 == DAT_14cb3b818) || (lVar5 == DAT_14cb3b8e8)) || (lVar5 == DAT_14cb3b8f0)) ||
           (((lVar5 == DAT_14cb3b8f8 || (lVar5 == DAT_14cb3b900)) ||
            ((lVar5 == DAT_14cb3b858 || ((lVar5 == DAT_14cb3b878 || (lVar5 == DAT_14cb3b898))))))))
          || (lVar5 == DAT_14cb3b8b8)) {
    *param_1 = DAT_14cb42140;
    lVar5 = DAT_14cb42148;
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb42148;
    }
  }
  else if ((((lVar5 == DAT_14cb3b820) || (lVar5 == DAT_14cb3b908)) || (lVar5 == DAT_14cb3b910)) ||
          (((lVar5 == DAT_14cb3b918 || (lVar5 == DAT_14cb3b920)) ||
           (((lVar5 == DAT_14cb3b860 || ((lVar5 == DAT_14cb3b880 || (lVar5 == DAT_14cb3b8a0)))) ||
            (lVar5 == DAT_14cb3b8c0)))))) {
    *param_1 = DAT_14cb42110;
    lVar5 = DAT_14cb42118;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb42118;
    }
  }
  else {
    if (((((lVar5 != DAT_14cb3b830) && (lVar5 != DAT_14cb3b928)) && (lVar5 != DAT_14cb3b930)) &&
        ((lVar5 != DAT_14cb3b938 && (lVar5 != DAT_14cb3b868)))) &&
       ((lVar5 != DAT_14cb3b888 && ((lVar5 != DAT_14cb3b8a8 && (lVar5 != DAT_14cb3b8c8)))))) {
      *param_1 = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *(undefined1 *)((longlong)param_1 + 10) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
      return param_1;
    }
    *param_1 = DAT_14cb420f0;
    lVar5 = DAT_14cb420f8;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
      lVar5 = DAT_14cb420f8;
    }
  }
  param_1[1] = lVar5;
  return param_1;
}



// FUNCTION 148165bd6 FUN_148165bd6 body=476 status=ok
// SIG undefined FUN_148165bd6(void)

int FUN_148165bd6(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = 4;
  if ((((((((lVar1 != DAT_14cb3b810) && (lVar1 != DAT_14cb3b8d0)) && (lVar1 != DAT_14cb3b8d8)) &&
         ((lVar1 != DAT_14cb3b8e0 && (lVar1 != DAT_14cb3b850)))) &&
        ((lVar1 != DAT_14cb3b870 && ((lVar1 != DAT_14cb3b890 && (lVar1 != DAT_14cb3b8b0)))))) &&
       (lVar1 != DAT_14cb3b940)) &&
      (((((iVar2 = 3, lVar1 != DAT_14cb3b818 && (lVar1 != DAT_14cb3b8e8)) &&
         (lVar1 != DAT_14cb3b8f0)) &&
        (((lVar1 != DAT_14cb3b8f8 && (lVar1 != DAT_14cb3b900)) &&
         ((lVar1 != DAT_14cb3b858 && ((lVar1 != DAT_14cb3b878 && (lVar1 != DAT_14cb3b898)))))))) &&
       ((((lVar1 != DAT_14cb3b8b8 &&
          (((lVar1 != DAT_14cb3b948 && (iVar2 = 2, lVar1 != DAT_14cb3b820)) &&
           (lVar1 != DAT_14cb3b908)))) &&
         (((lVar1 != DAT_14cb3b910 && (lVar1 != DAT_14cb3b918)) &&
          (((lVar1 != DAT_14cb3b920 && ((lVar1 != DAT_14cb3b860 && (lVar1 != DAT_14cb3b880)))) &&
           (lVar1 != DAT_14cb3b8a0)))))) &&
        ((((lVar1 != DAT_14cb3b8c0 && (lVar1 != DAT_14cb3b950)) &&
          (iVar2 = 1, lVar1 != DAT_14cb3b830)) &&
         ((lVar1 != DAT_14cb3b928 && (lVar1 != DAT_14cb3b930)))))))))) &&
     ((((lVar1 != DAT_14cb3b938 && ((lVar1 != DAT_14cb3b868 && (lVar1 != DAT_14cb3b888)))) &&
       (lVar1 != DAT_14cb3b8a8)) && (lVar1 != DAT_14cb3b8c8)))) {
    iVar2 = (uint)(lVar1 == DAT_14cb3b958) * 2 + -1;
  }
  return iVar2;
}



// FUNCTION 148165db2 FUN_148165db2 body=513 status=ok
// SIG undefined FUN_148165db2(void)

void FUN_148165db2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_148190168();
  lVar2 = *param_2;
  if (lVar2 == DAT_14cb3d8d0) {
    FUN_148165fb4(param_1,param_4);
    return;
  }
  if (lVar2 == DAT_14cb3d8c0) {
    FUN_148166080(param_1,param_4);
    return;
  }
  if (lVar2 == DAT_14cb3b7c0) {
    FUN_14816614c(param_1,param_4);
    return;
  }
  if (lVar2 == DAT_14cb3d8d8) {
    FUN_148166218(param_1,param_4);
    return;
  }
  if (lVar2 == DAT_14cb3d8c8) {
    FUN_1481662e4(param_1,param_4);
    return;
  }
  if (lVar2 == DAT_14cb3b940) {
    if ((longlong)(int)param_2[6] != 0) {
      plVar1 = (longlong *)param_2[5];
      lVar2 = (longlong)(int)param_2[6] << 4;
      do {
        if (*plVar1 == DAT_14cb3d8e0) goto LAB_148165e9c;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_148165e9c:
    lVar2 = plVar1[1];
    uVar3 = 4;
  }
  else if (lVar2 == DAT_14cb3b948) {
    if ((longlong)(int)param_2[6] != 0) {
      plVar1 = (longlong *)param_2[5];
      lVar2 = (longlong)(int)param_2[6] << 4;
      do {
        if (*plVar1 == DAT_14cb3d8e0) goto LAB_148165ec3;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_148165ec3:
    lVar2 = plVar1[1];
    uVar3 = 3;
  }
  else if (lVar2 == DAT_14cb3b950) {
    if ((longlong)(int)param_2[6] != 0) {
      plVar1 = (longlong *)param_2[5];
      lVar2 = (longlong)(int)param_2[6] << 4;
      do {
        if (*plVar1 == DAT_14cb3d8e0) goto LAB_148165ee4;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_148165ee4:
    lVar2 = plVar1[1];
    uVar3 = 2;
  }
  else {
    if (lVar2 != DAT_14cb3b958) {
      return;
    }
    if ((longlong)(int)param_2[6] != 0) {
      plVar1 = (longlong *)param_2[5];
      lVar2 = (longlong)(int)param_2[6] << 4;
      do {
        if (*plVar1 == DAT_14cb3d8e0) goto LAB_148165f05;
        plVar1 = plVar1 + 2;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    plVar1 = (longlong *)0x0;
LAB_148165f05:
    lVar2 = plVar1[1];
    uVar3 = 1;
  }
  FUN_1481663b0(param_1,param_4,lVar2,uVar3);
  return;
}



// FUNCTION 148165fb4 FUN_148165fb4 body=202 status=ok
// SIG undefined FUN_148165fb4(void)

void FUN_148165fb4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcbba0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148166080 FUN_148166080 body=202 status=ok
// SIG undefined FUN_148166080(void)

void FUN_148166080(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcbc10;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14816614c FUN_14816614c body=202 status=ok
// SIG undefined FUN_14816614c(void)

void FUN_14816614c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcbc80;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148166218 FUN_148166218 body=202 status=ok
// SIG undefined FUN_148166218(void)

void FUN_148166218(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcbcf0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481662e4 FUN_1481662e4 body=202 status=ok
// SIG undefined FUN_1481662e4(void)

void FUN_1481662e4(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  *local_30 = &PTR_FUN_14adcbd60;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481663b0 FUN_1481663b0 body=225 status=ok
// SIG undefined FUN_1481663b0(void)

void FUN_1481663b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14ad81180;
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
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14adccac0;
  local_40[3] = param_1;
  local_40[4] = param_3;
  *(undefined4 *)(local_40 + 5) = param_4;
  FUN_144a450dc(param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148166492 FUN_148166492 body=260 status=ok
// SIG undefined FUN_148166492(void)

void FUN_148166492(char *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  int local_50;
  undefined4 *local_48;
  int local_40;
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148166598(local_28,param_1);
  FUN_144a76cd4(&local_38,param_1);
  FUN_144a76cd4(&local_48,param_1);
  FUN_144a76cd4(&local_58,param_1);
  lVar8 = *(longlong *)(local_20 + 200);
  if (*(longlong *)(local_20 + 200) == 0) {
    lVar8 = local_20;
  }
  piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar7 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar7) {
    uVar4 = *(undefined4 *)(lVar8 + 0xc);
    uVar5 = *(undefined4 *)(lVar8 + 4);
    uVar6 = *(undefined4 *)(lVar8 + 8);
    iVar9 = 0;
    do {
      puVar1 = local_38 + local_30;
      *local_38 = uVar5;
      puVar2 = local_48 + local_40;
      *local_48 = uVar6;
      puVar3 = local_58 + local_50;
      *local_58 = uVar4;
      iVar9 = iVar9 + 1;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar7 = (int *)(param_1 + 0x3c);
      }
      local_58 = puVar3;
      local_48 = puVar2;
      local_38 = puVar1;
    } while (iVar9 < *piVar7);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148166598 FUN_148166598 body=148 status=ok
// SIG undefined FUN_148166598(void)

void FUN_148166598(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14816662c FUN_14816662c body=104 status=ok
// SIG undefined FUN_14816662c(void)

undefined4 FUN_14816662c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_14819016a();
  uVar2 = 0;
  if ((param_2 != 0) && (cVar1 != '\0')) {
    if ((*(int *)(param_2 + 0x70) == *(int *)(param_1 + 0x70)) &&
       (((*(longlong *)(param_1 + 0x78) == *(longlong *)(param_2 + 0x78) &&
         (*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80))) &&
        (*(char *)(param_2 + 0x98) == *(char *)(param_1 + 0x98))))) {
      uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x80) >> 8),
                       ((*(byte *)(param_1 + 0x99) ^ *(byte *)(param_2 + 0x99)) & 1) == 0);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 148166694 FUN_148166694 body=114 status=ok
// SIG undefined FUN_148166694(void)

undefined4 FUN_148166694(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14819023e();
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x80);
    FUN_1447a122a(param_2 + 0x88,param_1 + 0x88);
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_1 + 0x98);
    *(byte *)(param_2 + 0x99) = *(byte *)(param_2 + 0x99) & 0xfe | *(byte *)(param_1 + 0x99) & 1;
  }
  return uVar1;
}



// FUNCTION 148166706 FUN_148166706 body=106 status=ok
// SIG undefined FUN_148166706(void)

void FUN_148166706(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)*param_2 + 1) != 0) {
    puVar2 = *(undefined2 **)*param_2;
  }
  FUN_1481720fa(param_2[3],puVar2);
  iVar3 = *(int *)(*param_2 + 0x30) + 3;
  iVar1 = *(int *)(*param_2 + 0x30) + 6;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = 1;
  if (1 < iVar1 >> 2) {
    iVar3 = iVar1 >> 2;
  }
  puVar2 = &DAT_149dfb77a;
  if (DAT_14cb3b978 != 0) {
    puVar2 = DAT_14cb3b970;
  }
  FUN_140ef3efc(param_2,puVar2,iVar3);
  return;
}



// FUNCTION 148166770 FUN_148166770 body=1853 status=ok
// SIG undefined FUN_148166770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148166770(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined ***local_b0;
  longlong local_a8;
  undefined **local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar23 = param_2[9];
  lVar6 = *(longlong *)(param_2[2] + 0x10);
  iVar18 = (int)((ulonglong)lVar6 >> 0x20);
  if (*(int *)(lVar23 + 0x18) != *(int *)(lVar23 + 0x44)) {
    lVar12 = lVar23 + 0x48;
    if (*(longlong *)(lVar23 + 0x50) != 0) {
      lVar12 = *(longlong *)(lVar23 + 0x50);
    }
    iVar10 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(lVar23 + 0x58) - 1U & (int)lVar6 + iVar18 * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)(lVar23 + 0x10) + (longlong)iVar10 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar23 + 0x10) + (longlong)iVar10 * 0x120) == lVar6)
        goto LAB_1481667fe;
        iVar10 = *(int *)(lVar12 + 0x118);
      } while (iVar10 != -1);
    }
  }
  lVar12 = 0;
LAB_1481667fe:
  lVar23 = lVar12 + 8;
  if (lVar12 == 0) {
    lVar23 = 0;
  }
  lVar13 = *(longlong *)(lVar23 + 0x108);
  lVar12 = lVar23;
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 0x18) != *(int *)(lVar13 + 0x44)) {
      lVar12 = lVar13 + 0x48;
      if (*(longlong *)(lVar13 + 0x50) != 0) {
        lVar12 = *(longlong *)(lVar13 + 0x50);
      }
      iVar18 = *(int *)(lVar12 + (ulonglong)
                                 (*(int *)(lVar13 + 0x58) - 1U & (int)lVar6 + iVar18 * 0x17) * 4);
      if (iVar18 != -1) {
        do {
          lVar19 = *(longlong *)(lVar13 + 0x10) + (longlong)iVar18 * 0x120;
          if (*(longlong *)(*(longlong *)(lVar13 + 0x10) + (longlong)iVar18 * 0x120) == lVar6)
          goto LAB_148166860;
          iVar18 = *(int *)(lVar19 + 0x118);
        } while (iVar18 != -1);
      }
    }
    lVar19 = 0;
LAB_148166860:
    lVar12 = lVar19 + 8;
    if (lVar19 == 0) {
      lVar12 = 0;
    }
  }
  lVar6 = *param_2;
  puVar7 = (ulonglong *)param_2[8];
  plVar2 = (longlong *)(lVar23 + 0x68);
  if (((*(int *)(lVar23 + 0x70) == 0) && (0 < (int)puVar7[1])) &&
     (FUN_144a8c360(plVar2,(int)puVar7[1] + 3U & 0xfffffffc,1), 0 < (int)puVar7[1])) {
    lVar13 = 0;
    do {
      uVar14 = *puVar7;
      uVar20 = ((longlong)uVar14 >> 0x18) + (longlong)puVar7;
      if ((uVar14 & 1) == 0) {
        uVar20 = uVar14;
      }
      uVar15 = 0xffffffff;
      if ((longlong)*(int *)(lVar12 + 0x80) != 0) {
        lVar22 = (longlong)*(int *)(lVar12 + 0x80) << 3;
        lVar19 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar12 + 0x78) + lVar19 * 8) ==
              *(longlong *)(uVar20 + lVar13 * 8)) {
            uVar16 = (uint)lVar19;
            if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)(lVar12 + 0xa0))) {
              uVar14 = puVar7[2];
              uVar20 = ((longlong)uVar14 >> 0x18) + (longlong)(puVar7 + 2);
              if ((uVar14 & 1) == 0) {
                uVar20 = uVar14;
              }
              if (*(int *)(uVar20 + lVar13 * 4) ==
                  *(int *)(*(longlong *)(lVar12 + 0x88) + (ulonglong)(uVar16 & 0x7fffffff) * 4)) {
                uVar15 = *(undefined4 *)
                          (*(longlong *)(lVar12 + 0x98) + (ulonglong)(uVar16 & 0x7fffffff) * 4);
              }
            }
            break;
          }
          lVar19 = lVar19 + 1;
          lVar22 = lVar22 + -8;
        } while (lVar22 != 0);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 4) = uVar15;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)puVar7[1]);
  }
  if (*(int *)(lVar12 + 0xe8) == 0) {
    local_a8 = lVar12 + 0xd8;
    local_98 = 0;
    local_a0 = &PTR_FUN_14a3cb610;
    local_88 = 0;
    uStack_90 = (ulonglong)(*(int *)(lVar12 + 0x24) * 2 + 1);
    FUN_14070246c(&local_98,0);
    iVar18 = *(int *)(lVar12 + 0x24);
    if (0 < iVar18) {
      lVar13 = 0xc;
      uVar14 = 0;
      do {
        iVar18 = *(int *)(lVar12 + 0x18);
        uVar16 = (int)uVar14 >> 0x1f;
        uVar20 = (ulonglong)uVar16 << 0x20 | uVar14 & 0xffffffff;
        uVar8 = (longlong)uVar20 / (longlong)iVar18;
        iVar10 = *(int *)(lVar12 + 0x14);
        iVar21 = (int)((longlong)((ulonglong)uVar16 << 0x20 | uVar14 & 0xffffffff) /
                      (longlong)(*(int *)(lVar12 + 0x1c) * iVar18));
        iVar5 = *(int *)(lVar12 + 0x10);
        iVar17 = (int)((longlong)
                       ((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff) %
                      (longlong)*(int *)(lVar12 + 0x1c));
        iVar18 = (int)((longlong)uVar20 % (longlong)iVar18);
        uVar20 = ((longlong)local_98 >> 0x18) + (longlong)&local_98;
        if ((local_98 & 1) == 0) {
          uVar20 = local_98;
        }
        *(float *)((uVar20 - 0xc) + lVar13) = (float)(*(int *)(lVar12 + 0xc) * iVar18);
        *(float *)((uVar20 - 8) + lVar13) = (float)(iVar5 * iVar17);
        *(float *)((uVar20 - 4) + lVar13) = (float)(iVar10 * iVar21);
        *(undefined4 *)(uVar20 + lVar13) = 0;
        iVar10 = *(int *)(lVar12 + 0x20);
        iVar5 = *(int *)(lVar12 + 0x1c);
        uVar20 = ((longlong)local_98 >> 0x18) + (longlong)&local_98;
        if ((local_98 & 1) == 0) {
          uVar20 = local_98;
        }
        lVar19 = ((longlong)*(int *)(lVar12 + 0x24) + uVar14) * 0x10;
        *(float *)(uVar20 + lVar19) = (float)iVar18 * (1.0 / (float)*(int *)(lVar12 + 0x18));
        *(float *)(uVar20 + 4 + lVar19) = (float)iVar17 * (1.0 / (float)iVar5);
        *(float *)(uVar20 + 8 + lVar19) = (float)iVar21 * (1.0 / (float)iVar10);
        *(undefined4 *)(uVar20 + 0xc + lVar19) = 0;
        uVar14 = uVar14 + 1;
        iVar18 = *(int *)(lVar12 + 0x24);
        lVar13 = lVar13 + 0x10;
      } while ((longlong)uVar14 < (longlong)iVar18);
    }
    local_b0 = &local_a0;
    uVar14 = (longlong)&local_98 + ((longlong)local_98 >> 0x18);
    if ((local_98 & 1) == 0) {
      uVar14 = local_98;
    }
    puVar1 = (undefined4 *)(uVar14 + (longlong)(iVar18 * 2) * 0x10);
    *puVar1 = 0x477fff00;
    puVar1[1] = 0x477fff00;
    puVar1[2] = 0x477fff00;
    puVar1[3] = 0x477fff00;
    local_c8 = (undefined4)uStack_90;
    local_b8 = 1;
    local_c0 = 1;
    FUN_140661c88(local_a8,*(undefined8 *)(lVar6 + 0x18),L"Grid3D::PerAttributeData",0x10);
    if (local_98 != 0 && (local_98 & 1) == 0) {
      FUN_1400020a8();
    }
  }
  fVar25 = 0.5 / (float)*(int *)(lVar12 + 0x14);
  fVar26 = 0.5 / (float)*(int *)(lVar12 + 0x10);
  fVar24 = 0.5 / (float)*(int *)(lVar12 + 0xc);
  uVar16 = (int)param_2[10] + 0xfU & 0xfffffff0;
  FUN_148172194();
  *(uint *)(param_2 + 10) = uVar16 + _DAT_14cb3c01c;
  lVar13 = param_2[7];
  puVar1 = (undefined4 *)(lVar13 + (ulonglong)uVar16);
  *puVar1 = *(undefined4 *)(lVar12 + 0x24);
  puVar1[1] = *(undefined4 *)(lVar12 + 0x28);
  iVar18 = *(int *)(lVar12 + 0x10);
  iVar10 = *(int *)(lVar12 + 0x14);
  puVar1[4] = 1.0 / (float)*(int *)(lVar12 + 0xc);
  puVar1[5] = 1.0 / (float)iVar18;
  puVar1[6] = 1.0 / (float)iVar10;
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(lVar12 + 0xc);
  puVar1[10] = *(undefined4 *)(lVar12 + 0x14);
  dVar3 = *(double *)(lVar12 + 0x40);
  dVar4 = *(double *)(lVar12 + 0x38);
  puVar1[0xc] = (float)*(double *)(lVar12 + 0x30);
  puVar1[0xd] = (float)dVar4;
  puVar1[0xe] = (float)dVar3;
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar12 + 0x18);
  puVar1[0x12] = *(undefined4 *)(lVar12 + 0x20);
  iVar18 = *(int *)(lVar12 + 0x1c);
  iVar10 = *(int *)(lVar12 + 0x20);
  puVar1[0x14] = 1.0 / (float)*(int *)(lVar12 + 0x18);
  puVar1[0x15] = 1.0 / (float)iVar18;
  puVar1[0x16] = 1.0 / (float)iVar10;
  puVar1[0x18] = fVar24;
  puVar1[0x19] = fVar26;
  puVar1[0x1a] = fVar25;
  fVar25 = DAT_14c846358 - fVar25;
  fVar26 = DAT_14c846350._4_4_ - fVar26;
  puVar1[0x1c] = (float)DAT_14c846350 - fVar24;
  puVar1[0x1d] = fVar26;
  puVar1[0x1e] = fVar25;
  dVar3 = *(double *)(lVar12 + 0x58);
  dVar4 = *(double *)(lVar12 + 0x50);
  lVar13 = (ulonglong)uVar16 + lVar13;
  puVar1[0x20] = (float)*(double *)(lVar12 + 0x48);
  puVar1[0x21] = (float)dVar4;
  puVar1[0x22] = (float)dVar3;
  cVar9 = FUN_144b34a28(param_2,puVar1 + 0x24);
  if (cVar9 != '\0') {
    if (*(longlong *)(lVar12 + 200) == 0) {
      uVar11 = FUN_1481c8764(param_2[1],lVar6,2);
    }
    else {
      uVar11 = FUN_140248794(*(longlong *)(lVar12 + 200),lVar6);
    }
    *(undefined8 *)(puVar1 + 0x24) = uVar11;
  }
  *(undefined8 *)(lVar13 + 0x98) = DAT_14c9c0de0;
  cVar9 = FUN_144b34a28(param_2,(undefined8 *)(lVar13 + 0xa0));
  if (cVar9 != '\0') {
    cVar9 = FUN_140248614(param_2);
    if ((cVar9 == '\0') || (*(longlong *)(lVar12 + 0xd0) == 0)) {
      uVar11 = FUN_1481c8846(param_2[1],lVar6,0xd,2);
    }
    else {
      uVar11 = FUN_14024867a(*(longlong *)(lVar12 + 0xd0),lVar6);
    }
    *(undefined8 *)(lVar13 + 0xa0) = uVar11;
  }
  *(undefined8 *)(lVar13 + 0xa8) = *(undefined8 *)(lVar12 + 0xe0);
  if (0 < *(int *)(lVar23 + 0x70)) {
    iVar18 = (int)puVar7[1] + 3;
    iVar10 = (int)puVar7[1] + 6;
    if (-1 < iVar18) {
      iVar10 = iVar18;
    }
    uVar14 = 1;
    if (1 < iVar10 >> 2) {
      uVar14 = (ulonglong)(uint)(iVar10 >> 2);
    }
    uVar16 = (int)param_2[10] + 0xfU & 0xfffffff0;
    *(uint *)(param_2 + 10) = (int)uVar14 * 0x10 + uVar16;
    memcpy((void *)(param_2[7] + (ulonglong)uVar16),(void *)*plVar2,uVar14 << 4);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148166eae FUN_148166eae body=450 status=ok
// SIG undefined FUN_148166eae(void)

ulonglong * FUN_148166eae(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  puVar9 = (ulonglong *)FUN_14001cc68(0x20,0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  uVar7 = *(uint *)(param_2 + 0x30);
  uVar12 = (ulonglong)uVar7;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  iVar6 = 0;
  if (uVar12 != 0) {
    FUN_148171a8c(puVar9,uVar7);
    iVar6 = *(int *)((longlong)puVar9 + 0x1c);
  }
  puVar1 = puVar9 + 2;
  if (iVar6 < (int)uVar7) {
    FUN_14024fde8(puVar1,uVar7);
  }
  if (uVar12 != 0) {
    uVar14 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 0x28);
      lVar13 = uVar14 * 0x50;
      lVar10 = (longlong)*(int *)(lVar2 + 0x20 + lVar13);
      if (lVar10 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x18 + lVar13);
        lVar15 = 0;
        do {
          if (*(longlong *)(lVar3 + lVar15) == DAT_14cb3d8e0) {
            uVar8 = FUN_148165bd6(lVar2 + lVar13);
            uVar5 = *(undefined8 *)(lVar3 + 8 + lVar15);
            iVar6 = (int)puVar9[1];
            *(uint *)(puVar9 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)puVar9 + 0xc) < iVar6 + 1U) {
              FUN_14816c94e(puVar9,iVar6);
            }
            uVar4 = *puVar9;
            uVar11 = ((longlong)uVar4 >> 0x18) + (longlong)puVar9;
            if ((uVar4 & 1) == 0) {
              uVar11 = uVar4;
            }
            *(undefined8 *)(uVar11 + (longlong)iVar6 * 8) = uVar5;
            iVar6 = (int)puVar9[3];
            uVar7 = iVar6 + 1;
            *(uint *)(puVar9 + 3) = uVar7;
            goto LAB_148166f8c;
          }
          lVar15 = lVar15 + 0x10;
        } while (lVar10 * 0x10 != lVar15);
      }
      iVar6 = (int)puVar9[1];
      *(uint *)(puVar9 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)puVar9 + 0xc) < iVar6 + 1U) {
        FUN_14816c94e(puVar9,iVar6);
      }
      uVar4 = *puVar9;
      uVar11 = ((longlong)uVar4 >> 0x18) + (longlong)puVar9;
      if ((uVar4 & 1) == 0) {
        uVar11 = uVar4;
      }
      *(undefined8 *)(uVar11 + (longlong)iVar6 * 8) = 0;
      iVar6 = (int)puVar9[3];
      uVar7 = iVar6 + 1;
      *(uint *)(puVar9 + 3) = uVar7;
      uVar8 = 0xffffffff;
LAB_148166f8c:
      if (*(uint *)((longlong)puVar9 + 0x1c) < uVar7) {
        FUN_14042c7ac(puVar1,iVar6);
      }
      uVar4 = *puVar1;
      uVar11 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
      if ((uVar4 & 1) == 0) {
        uVar11 = uVar4;
      }
      *(undefined4 *)(uVar11 + (longlong)iVar6 * 4) = uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
  }
  if (*(int *)((longlong)puVar9 + 0xc) != (int)puVar9[1]) {
    FUN_148171a8c(puVar9);
  }
  if (*(int *)((longlong)puVar9 + 0x1c) != (int)puVar9[3]) {
    FUN_14024fde8(puVar1);
  }
  return puVar9;
}



// FUNCTION 148167072 FUN_148167072 body=21 status=ok
// SIG undefined FUN_148167072(void)

undefined * FUN_148167072(void)

{
  FUN_14606e16e();
  return &DAT_14cb3b6c0;
}



// FUNCTION 148167088 FUN_148167088 body=200 status=ok
// SIG undefined FUN_148167088(void)

undefined1 * FUN_148167088(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = DAT_14c9a5298;
  *(undefined4 *)(param_1 + 0xc) = DAT_14c9a52a0;
  *(undefined8 *)(param_1 + 0x10) = DAT_14c9a5298;
  *(undefined4 *)(param_1 + 0x18) = DAT_14c9a52a0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x28) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar4 = FUN_144830b78(param_1 + 0x78,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  return param_1;
}



// FUNCTION 148167150 FUN_148167150 body=310 status=ok
// SIG undefined FUN_148167150(void)

void FUN_148167150(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  undefined8 local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_4 = 0;
  uVar2 = FUN_14018d992();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if (lVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0x70);
    local_4c = iVar5;
    if ((longlong)*(int *)(lVar3 + 0xc0) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0xb8);
      lVar3 = (longlong)*(int *)(lVar3 + 0xc0) * 0x48;
      do {
        lVar4 = FUN_14040f60c(lVar6);
        if ((lVar4 != 0) && (*(char *)(lVar6 + 0x20) == '\x01')) {
          if (*(char *)(lVar4 + 0x365) == '\x01') {
            bVar1 = *(byte *)(lVar4 + 0x364) & 1;
          }
          else {
            bVar1 = FUN_1405c05c4(lVar4);
            *(byte *)(lVar4 + 0x364) = bVar1;
            *(undefined1 *)(lVar4 + 0x365) = 1;
          }
          if ((bVar1 != 0) && (*(char *)(lVar4 + 0x3c) == '\x01')) {
            local_60 = param_5;
            local_68 = &local_4c;
            FUN_14816893e(*(undefined8 *)(lVar4 + 0x268),param_1,param_2,param_3);
          }
        }
        lVar6 = lVar6 + 0x48;
        lVar3 = lVar3 + -0x48;
      } while (lVar3 != 0);
      iVar5 = *(int *)(param_1 + 0x70);
    }
    *param_4 = local_4c - iVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148167288 FUN_148167288 body=407 status=ok
// SIG undefined FUN_148167288(void)

undefined8 * FUN_148167288(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = param_2;
  puVar10 = param_1;
  for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  cVar1 = *(char *)((longlong)param_2 + 0x59);
  *(char *)((longlong)param_1 + 0x59) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  }
  *(undefined2 *)((longlong)param_1 + 0x5a) = *(undefined2 *)((longlong)param_2 + 0x5a);
  uVar4 = *(undefined4 *)((longlong)param_2 + 100);
  uVar5 = *(undefined4 *)(param_2 + 0xd);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  param_1[0xe] = param_2[0xe];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  param_1[0x10] = 0;
  iVar2 = *(int *)(param_2 + 0x11);
  pvVar3 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0x10,iVar2,0);
    memcpy((void *)param_1[0x10],pvVar3,(longlong)iVar2);
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = 0;
  iVar2 = *(int *)(param_2 + 0x15);
  pvVar3 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_14181d5f4(param_1 + 0x14,iVar2,0);
    memcpy((void *)param_1[0x14],pvVar3,(longlong)iVar2 * 0xc);
  }
  param_1[0x16] = 0;
  iVar2 = *(int *)(param_2 + 0x17);
  pvVar3 = (void *)param_2[0x16];
  *(int *)(param_1 + 0x17) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 0x16,iVar2,0);
    memcpy((void *)param_1[0x16],pvVar3,(longlong)iVar2 << 2);
  }
  uVar7 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar7;
  return param_1;
}



// FUNCTION 148167420 FUN_148167420 body=75 status=ok
// SIG undefined FUN_148167420(void)

void FUN_148167420(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x59) == '\x01') {
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  return;
}



// FUNCTION 14816746c FUN_14816746c body=69 status=ok
// SIG undefined FUN_14816746c(void)

void FUN_14816746c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14024cd4c(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = DAT_14cb3b998;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = DAT_14cb3b990;
  return;
}



// FUNCTION 1481674b2 FUN_1481674b2 body=96 status=ok
// SIG undefined FUN_1481674b2(void)

undefined8
FUN_1481674b2(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) {
    if (param_3 == 0) {
      return 0;
    }
    if (*param_2 != DAT_14cb3b990) {
      return 0;
    }
    if ((int)param_2[1] != DAT_14cb3b998) {
      return 0;
    }
    lVar1 = *(longlong *)(param_3 + 0x98);
    if (lVar1 != 0) {
      *param_5 = lVar1;
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14816751a FUN_14816751a body=303 status=ok
// SIG undefined FUN_14816751a(void)

void FUN_14816751a(longlong param_1,longlong param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    *param_3 = -1;
    *param_4 = -1;
    *param_5 = -1;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x760);
    plVar4 = *(longlong **)(param_2 + 0x768);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((lVar3 != 0) && (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4))) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x100);
      lVar6 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xe0);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(param_1 + 0xe8) - 1U &
                               (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
      if (iVar5 != -1) {
        do {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x18);
          if (*plVar2 == lVar3) {
            if ((plVar2 != (longlong *)0x0) && (lVar3 = plVar2[1], lVar3 != 0)) {
              *param_3 = *(int *)(lVar3 + 0x10) * *(int *)(lVar3 + 4);
              *param_4 = *(int *)(lVar3 + 0x14) * *(int *)(lVar3 + 8);
              iVar5 = *(int *)(lVar3 + 0x18) * *(int *)(lVar3 + 0xc);
              goto LAB_14816755f;
            }
            break;
          }
          iVar5 = (int)plVar2[2];
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
    *param_3 = -1;
    *param_4 = -1;
LAB_14816755f:
    *param_5 = iVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000148167586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14816764a FUN_14816764a body=291 status=ok
// SIG undefined FUN_14816764a(void)

void FUN_14816764a(longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 == 0) {
    *param_3 = 0xffffffff;
    *param_4 = 0xffffffff;
    *param_5 = 0xffffffff;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x760);
    plVar4 = *(longlong **)(param_2 + 0x768);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((lVar3 != 0) && (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4))) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x100);
      lVar7 = param_1 + 0xd8;
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xe0);
      }
      iVar6 = *(int *)(lVar7 + (ulonglong)
                               (*(int *)(param_1 + 0xe8) - 1U &
                               (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
      if (iVar6 != -1) {
        do {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x18);
          if (*plVar2 == lVar3) {
            if ((plVar2 != (longlong *)0x0) && (lVar3 = plVar2[1], lVar3 != 0)) {
              *param_3 = *(undefined4 *)(lVar3 + 4);
              *param_4 = *(undefined4 *)(lVar3 + 8);
              uVar5 = *(undefined4 *)(lVar3 + 0xc);
              goto LAB_14816768f;
            }
            break;
          }
          iVar6 = (int)plVar2[2];
        } while (iVar6 != -1);
      }
    }
    uVar5 = 0xffffffff;
    *param_3 = 0xffffffff;
    *param_4 = 0xffffffff;
LAB_14816768f:
    *param_5 = uVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001481676b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14816776e FUN_14816776e body=272 status=ok
// SIG undefined FUN_14816776e(void)

void FUN_14816776e(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148166598(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      pfVar1 = local_30 + local_28;
      *local_30 = (float)*(double *)(local_18 + 0x40);
      pfVar2 = local_40 + local_38;
      *local_40 = (float)*(double *)(local_18 + 0x48);
      pfVar3 = local_50 + local_48;
      *local_50 = (float)*(double *)(local_18 + 0x50);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = pfVar3;
      local_40 = pfVar2;
      local_30 = pfVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148167880 FUN_148167880 body=695 status=ok
// SIG undefined FUN_148167880(void)

void FUN_148167880(longlong param_1,char *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  int *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148166598(local_50);
  iVar11 = 0;
  local_58 = 0;
  local_68 = (int *)0x0;
  uStack_60 = 0;
  FUN_144a98d08(&local_68,param_2);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  FUN_140126e42(&local_b8,param_2);
  piVar9 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar9 = (int *)(param_2 + 0x3c);
  }
  iVar13 = *piVar9;
  if (0 < iVar13) {
    do {
      piVar9 = local_68 + local_58;
      iVar12 = *local_68;
      piVar1 = local_88 + local_78;
      iVar3 = *local_88;
      piVar2 = local_a8 + local_98;
      if ((((iVar13 == 1) && (local_48 != 0)) && (-1 < *(int *)(param_1 + 0x3c))) &&
         (-1 < *(int *)(param_1 + 0x40))) {
        iVar13 = *local_a8;
        uVar4 = *(uint *)(param_1 + 0x44);
        piVar10 = local_b8 + local_b0;
        *local_b8 = (int)~uVar4 >> 0x1f;
        local_b8 = piVar10;
        if (-1 < (int)uVar4) {
          iVar5 = *(int *)(local_48 + 4);
          iVar6 = *(int *)(local_48 + 8);
          iVar7 = *(int *)(local_48 + 0xc);
          if (iVar12 < 2) {
            iVar12 = 1;
          }
          *(int *)(local_48 + 4) = iVar12;
          if (iVar3 < 2) {
            iVar3 = 1;
          }
          *(int *)(local_48 + 8) = iVar3;
          if (iVar13 < 2) {
            iVar13 = 1;
          }
          *(int *)(local_48 + 0xc) = iVar13;
          fVar8 = DAT_14c76286c;
          if (1e-08 < ABS(DAT_14c76286c + -1.0)) {
            iVar13 = (int)((float)*(int *)(local_48 + 4) * DAT_14c76286c);
            if (iVar13 < 2) {
              iVar13 = 1;
            }
            *(int *)(local_48 + 4) = iVar13;
            iVar13 = (int)((float)*(int *)(local_48 + 8) * fVar8);
            if (iVar13 < 2) {
              iVar13 = 1;
            }
            *(int *)(local_48 + 8) = iVar13;
            iVar13 = (int)((float)*(int *)(local_48 + 0xc) * fVar8);
            if (iVar13 < 2) {
              iVar13 = 1;
            }
            *(int *)(local_48 + 0xc) = iVar13;
          }
          bVar14 = true;
          if ((iVar5 == *(int *)(local_48 + 4)) && (iVar6 == *(int *)(local_48 + 8))) {
            bVar14 = iVar7 != *(int *)(local_48 + 0xc);
          }
          *(bool *)(local_48 + 0x5b) = bVar14;
        }
      }
      else {
        *local_b8 = 0;
        local_b8 = local_b8 + local_b0;
      }
      iVar11 = iVar11 + 1;
      piVar10 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar10 = (int *)(param_2 + 0x3c);
      }
      iVar13 = *piVar10;
      local_a8 = piVar2;
      local_88 = piVar1;
      local_68 = piVar9;
    } while (iVar11 < iVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148167b38 FUN_148167b38 body=469 status=ok
// SIG undefined FUN_148167b38(void)

void FUN_148167b38(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  float *local_c8;
  int local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  undefined8 uStack_90;
  int local_88;
  float *local_78;
  undefined8 uStack_70;
  int local_68;
  float *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148166598(local_40,param_1);
  iVar12 = 0;
  local_48 = 0;
  local_58 = (float *)0x0;
  uStack_50 = 0;
  FUN_144a98dce(&local_58,param_1);
  local_68 = 0;
  local_78 = (float *)0x0;
  uStack_70 = 0;
  FUN_144a98dce(&local_78,param_1);
  local_88 = 0;
  local_98 = (float *)0x0;
  uStack_90 = 0;
  FUN_144a98dce(&local_98,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  FUN_144a76c20(&local_c8,param_1);
  piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar11 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar11) {
    do {
      pfVar1 = local_58 + local_48;
      pfVar2 = local_78 + local_68;
      fVar7 = *local_78;
      pfVar3 = local_98 + local_88;
      iVar9 = *(int *)(local_38 + 8);
      iVar10 = *(int *)(local_38 + 0xc);
      fVar8 = *local_98;
      pfVar4 = local_a8 + local_a0;
      *local_a8 = (float)*(int *)(local_38 + 4) * *local_58 + -0.5;
      pfVar5 = local_b8 + local_b0;
      *local_b8 = (float)iVar9 * fVar7 + -0.5;
      pfVar6 = local_c8 + local_c0;
      *local_c8 = (float)iVar10 * fVar8 + -0.5;
      iVar12 = iVar12 + 1;
      piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar11 = (int *)(param_1 + 0x3c);
      }
      local_c8 = pfVar6;
      local_b8 = pfVar5;
      local_a8 = pfVar4;
      local_98 = pfVar3;
      local_78 = pfVar2;
      local_58 = pfVar1;
    } while (iVar12 < *piVar11);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148167d0e FUN_148167d0e body=272 status=ok
// SIG undefined FUN_148167d0e(void)

void FUN_148167d0e(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148166598(local_20,param_1);
  FUN_144a76c20(&local_30,param_1);
  FUN_144a76c20(&local_40,param_1);
  FUN_144a76c20(&local_50,param_1);
  piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar4 = 0;
    do {
      pfVar1 = local_30 + local_28;
      *local_30 = (float)*(double *)(local_18 + 0x28);
      pfVar2 = local_40 + local_38;
      *local_40 = (float)*(double *)(local_18 + 0x30);
      pfVar3 = local_50 + local_48;
      *local_50 = (float)*(double *)(local_18 + 0x38);
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar5 = (int *)(param_1 + 0x3c);
      }
      local_50 = pfVar3;
      local_40 = pfVar2;
      local_30 = pfVar1;
    } while (iVar4 < *piVar5);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148167e20 FUN_148167e20 body=197 status=ok
// SIG undefined FUN_148167e20(void)

void FUN_148167e20(char *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148166598(local_38,param_1);
  FUN_144a76cd4(&local_48,param_1);
  uVar2 = 0xffffffff;
  if (local_30 != 0) {
    uVar2 = FUN_148167ee6(local_30,param_2,param_3);
  }
  piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar4 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_48 + local_40;
      *local_48 = uVar2;
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar4 = (int *)(param_1 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148167ee6 FUN_148167ee6 body=607 status=ok
// SIG undefined FUN_148167ee6(void)

undefined4 FUN_148167ee6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar5 = 8;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(lVar1 + -8 + lVar5) == *param_2) {
        switch(param_3) {
        case 1:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb420f0;
          if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb420f0);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb420f8)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb420f8._2_1_)) goto LAB_148168123;
          break;
        case 2:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb42110;
          if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42110);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb42118)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42118._2_1_)) goto LAB_148168123;
          break;
        case 3:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb42140;
          if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42140);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb42148)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42148._2_1_)) goto LAB_148168123;
          break;
        case 4:
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar2 = DAT_14cb42160;
          if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42160);
          }
          if (((*plVar3 == lVar2) && ((short)plVar3[1] == (short)DAT_14cb42168)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42168._2_1_)) {
LAB_148168123:
            return *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + lVar4 * 4);
          }
          plVar3 = (longlong *)FUN_144741050(lVar1 + lVar5);
          lVar1 = DAT_14cb42180;
          if ((DAT_14cb42180 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e(DAT_14cb42180);
          }
          if (((*plVar3 == lVar1) && ((short)plVar3[1] == (short)DAT_14cb42188)) &&
             (*(char *)((longlong)plVar3 + 10) == DAT_14cb42188._2_1_)) goto LAB_148168123;
        }
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar4 < *(int *)(param_1 + 0xa8));
  }
  return 0xffffffff;
}



// FUNCTION 148168146 FUN_148168146 body=466 status=ok
// SIG undefined FUN_148168146(void)

void FUN_148168146(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_54;
  short local_4c;
  undefined4 local_4a;
  undefined1 local_46;
  undefined1 local_45;
  undefined2 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = param_1 + 0xa8;
  lVar8 = *(longlong *)(param_1 + 0xb8);
  lVar2 = lVar8;
  if (lVar8 == 0) {
    lVar2 = lVar5;
  }
  iVar1 = *(int *)(param_1 + 0xc0);
  lVar7 = (longlong)iVar1;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar6) != *(longlong *)(param_1 + 200)) || (param_3 == '\0')) {
        *(longlong *)(param_1 + 0xd0) = *(longlong *)(lVar2 + lVar6);
        break;
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 - lVar6 != 0);
  }
  if ((*(longlong *)(param_1 + 0xd0) == 0) && (*(char *)(param_1 + 0x61) == '\x01')) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 **)(param_1 + 0xd0) = puVar3;
    *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
      FUN_1402182d8(lVar5,iVar1);
      lVar8 = *(longlong *)(param_1 + 0xb8);
      puVar3 = *(undefined8 **)(param_1 + 0xd0);
    }
    if (lVar8 != 0) {
      lVar5 = lVar8;
    }
    *(undefined8 **)(lVar5 + lVar7 * 8) = puVar3;
    local_4c = (short)*(undefined4 *)(param_1 + 0x20) * (short)*(undefined4 *)(param_1 + 0x14);
    local_60 = DAT_14ca83a40;
    local_70 = DAT_14ca83a30;
    uStack_6c = DAT_14ca83a34;
    uStack_68 = DAT_14ca83a38;
    uStack_64 = DAT_14ca83a3c;
    local_54 = CONCAT44(*(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x10),
                        *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0xc));
    local_45 = *(undefined1 *)(param_1 + 0x60);
    local_78 = &DAT_00020008;
    local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_58 = 0;
    local_4a = 0x1010001;
    local_46 = 2;
    local_44 = 0xff00;
    FUN_140218252(*(undefined8 *)(param_1 + 0xd0),param_2,L"Grid3D::GridTexture");
    uVar4 = FUN_14024867a(*(undefined8 *)(param_1 + 0xd0),param_2);
    local_88 = 0;
    uStack_80 = 0;
    FUN_140c4fe69(param_2,uVar4,&local_88,2);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14816831a FUN_14816831a body=303 status=ok
// SIG undefined FUN_14816831a(void)

void FUN_14816831a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_2[2];
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x120;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x120) == lVar3) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            lVar3 = lVar5 + 0xb0;
            if (*(longlong *)(lVar5 + 0xc0) != 0) {
              lVar3 = *(longlong *)(lVar5 + 0xc0);
            }
            iVar4 = *(int *)(lVar5 + 200);
            if ((longlong)iVar4 != 0) {
              uVar1 = *param_2;
              lVar5 = 0;
              do {
                uVar2 = FUN_14024867a(*(undefined8 *)(lVar3 + lVar5),uVar1);
                local_58 = 0;
                uStack_50 = 0;
                FUN_140c4fe69(uVar1,uVar2,&local_58,2);
                lVar5 = lVar5 + 8;
              } while ((longlong)iVar4 * 8 != lVar5);
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x118);
      } while (iVar4 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14816844a FUN_14816844a body=324 status=ok
// SIG undefined FUN_14816844a(void)

void FUN_14816844a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144b349a2();
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      lVar7 = *(longlong *)(param_2[2] + 0x10);
      lVar6 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x50);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(param_1 + 0x58) - 1U &
                               (int)lVar7 + (int)((ulonglong)lVar7 >> 0x20) * 0x17) * 4);
      if (iVar5 != -1) {
        do {
          lVar6 = *(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x120;
          if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x120) == lVar7)
          goto LAB_1481684db;
          iVar5 = *(int *)(lVar6 + 0x118);
        } while (iVar5 != -1);
      }
    }
    lVar6 = 0;
LAB_1481684db:
    lVar7 = lVar6 + 8;
    if (lVar6 == 0) {
      lVar7 = 0;
    }
    uVar1 = *param_2;
    uVar3 = FUN_1402181e8(param_2);
    FUN_148168146(lVar7,uVar1,uVar3);
    if (((*(char *)(lVar7 + 8) == '\x01') && (*(longlong *)(lVar7 + 0xd0) != 0)) &&
       ((lVar6 = param_2[4], *(int *)(lVar6 + 0x10) != *(int *)(lVar7 + 0xc) ||
        ((*(int *)(lVar6 + 0x14) != *(int *)(lVar7 + 0x10) ||
         (*(int *)(lVar6 + 0x18) != *(int *)(lVar7 + 0x14))))))) {
      uVar4 = FUN_14024867a(*(longlong *)(lVar7 + 0xd0),uVar1);
      local_38 = 0;
      uStack_30 = 0;
      FUN_140c4fe69(uVar1,uVar4,&local_38,2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148168590 FUN_148168590 body=178 status=ok
// SIG undefined FUN_148168590(void)

void FUN_148168590(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = FUN_144b349a2();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
      lVar4 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x50);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x58) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x120;
          if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x120) == lVar2)
          goto LAB_1481685b2;
          iVar3 = *(int *)(lVar4 + 0x118);
        } while (iVar3 != -1);
      }
    }
    lVar4 = 0;
LAB_1481685b2:
    lVar2 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xd0);
    *(undefined8 *)(lVar2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148168642 FUN_148168642 body=482 status=ok
// SIG undefined FUN_148168642(void)

void FUN_148168642(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar3 = param_2[2];
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x120;
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x120) == lVar3)
        goto LAB_148168659;
        iVar6 = *(int *)(lVar5 + 0x118);
      } while (iVar6 != -1);
    }
  }
  lVar5 = 0;
LAB_148168659:
  lVar3 = lVar5 + 8;
  if (lVar5 == 0) {
    lVar3 = 0;
  }
  if (((*(longlong *)(lVar3 + 0xf0) != 0) &&
      (plVar1 = *(longlong **)(lVar3 + 200), plVar1 != (longlong *)0x0)) && (*plVar1 != 0)) {
    FUN_1481de44c(plVar1,*param_2,*(longlong *)(lVar3 + 0xf0),L"NiagaraRenderTargetToCopyTo");
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    lVar5 = lVar3 + 0xa8;
    if (*(longlong *)(lVar3 + 0xb8) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0xb8);
    }
    iVar6 = *(int *)(lVar3 + 0xc0);
    if ((longlong)iVar6 != 0) {
      lVar4 = 0;
      do {
        lVar2 = *(longlong *)(lVar5 + lVar4);
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(undefined8 *)(lVar2 + 0x18) = 0;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar6 * 8 != lVar4);
    }
    lVar3 = *(longlong *)(lVar3 + 0x108);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
        lVar5 = param_2[2];
        lVar4 = lVar3 + 0x48;
        if (*(longlong *)(lVar3 + 0x50) != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x50);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(lVar3 + 0x58) - 1U &
                                 (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
        if (iVar6 != -1) {
          do {
            lVar4 = *(longlong *)(lVar3 + 0x10) + (longlong)iVar6 * 0x120;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar6 * 0x120) == lVar5)
            goto LAB_1481686f9;
            iVar6 = *(int *)(lVar4 + 0x118);
          } while (iVar6 != -1);
        }
      }
      lVar4 = 0;
LAB_1481686f9:
      lVar3 = lVar4 + 0xb0;
      if (*(longlong *)(lVar4 + 0xc0) != 0) {
        lVar3 = *(longlong *)(lVar4 + 0xc0);
      }
      iVar6 = *(int *)(lVar4 + 200);
      if ((longlong)iVar6 != 0) {
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar5);
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar6 * 8 != lVar5);
      }
    }
  }
  return;
}



// FUNCTION 14816893e FUN_14816893e body=1302 status=ok
// SIG undefined FUN_14816893e(void)

void FUN_14816893e(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_178 [40];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  longlong *local_108 [2];
  longlong *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  int local_e0 [2];
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar8 = FUN_1407d7b34();
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x38) != 0)) {
    uVar12 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + uVar12) == param_2) {
        if ((int)(~uVar12 >> 3) != 0) {
          lVar8 = (lVar9 >> 0x20) * 0x38;
          lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2f0) + 0x30 + lVar8);
          if (lVar9 != 0) {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x28 + lVar8);
            lVar9 = lVar9 * 0x50 + lVar8;
            goto LAB_148168a0e;
          }
        }
        break;
      }
      lVar9 = lVar9 + 0x100000000;
      uVar12 = uVar12 + 8;
    } while ((longlong)*(int *)(lVar8 + 0x38) * 8 != uVar12);
  }
LAB_1481689ac:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148168a0e:
  if ((longlong)*(int *)(lVar8 + 0x20) != 0) {
    lVar13 = *(longlong *)(lVar8 + 0x18);
    lVar15 = 0;
    do {
      if (*(longlong *)(lVar13 + lVar15) == DAT_14cb3d8e0) {
        FUN_148165948(&local_a8,lVar8);
        local_e8 = *(longlong *)(lVar13 + 8 + lVar15);
        iVar6 = FUN_144830b78(local_e0,&local_a8);
        local_e0[0] = iVar6;
        cVar5 = FUN_1481657c2(lVar8);
        if (cVar5 != '\0') {
          lVar10 = *param_3;
          iVar3 = (int)param_3[1];
          lVar16 = (longlong)iVar3;
          if (lVar16 == 0) goto LAB_148168ae2;
          lVar14 = 0;
          goto LAB_148168aae;
        }
        break;
      }
      lVar15 = lVar15 + 0x10;
    } while ((longlong)*(int *)(lVar8 + 0x20) * 0x10 != lVar15);
  }
  goto LAB_148168a38;
  while (lVar14 = lVar14 + 0xc, lVar16 * 0xc != lVar14) {
LAB_148168aae:
    if ((*(longlong *)(lVar10 + lVar14) == local_e8) && (*(int *)(lVar10 + 8 + lVar14) == iVar6))
    goto LAB_148168a38;
  }
  lVar14 = 0;
  do {
    if (*(longlong *)(lVar10 + lVar14) == *(longlong *)(lVar13 + 8 + lVar15)) {
      iVar6 = (int)(lVar14 >> 2) * -0x55555555;
      if (iVar6 != -1) {
        if (param_6 != (longlong *)0x0) {
          FUN_145715fae(local_108,&local_e8);
          uVar11 = FUN_144741050(*param_3 + (longlong)iVar6 * 0xc + 8);
          FUN_1481639b2(uVar11,local_118);
          uVar11 = FUN_144741050(local_e0);
          FUN_1481639b2(uVar11,local_128);
          local_a8 = L"BadType";
          local_a0[0] = 7;
          FUN_1446e940c(local_14c,&local_a8);
          local_a8 = L"NiagaraDataInterfaceGrid3DCollection";
          local_a0[0] = 0x24;
          FUN_1446e940c(local_150,&local_a8);
          FUN_140208bae(local_148,local_150,local_14c,
                        L"Same name, different types! {0} vs {1}, Attribute {2}");
          FUN_14023409e(&local_138,local_148,1);
          local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
          FUN_14023423e(local_98,local_128);
          local_88 = 4;
          FUN_14023423e(local_78,local_118);
          local_68 = 4;
          FUN_14023423e(local_58,local_108);
          local_c0 = &local_48;
          local_c8 = &local_a8;
          FUN_14010d304(&local_b8);
          local_d8 = local_138;
          local_d0 = local_130;
          if (local_130 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_130 + 1) = (int)local_130[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(&local_f8,&local_d8);
          FUN_14007f2db(local_b8,local_b0);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          lVar13 = 0x50;
          do {
            plVar4 = *(longlong **)((longlong)local_a0 + lVar13 + -8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              *(undefined8 *)((longlong)local_a0 + lVar13 + -8) = 0;
              *(undefined4 *)((longlong)local_a0 + lVar13) = 0;
            }
            plVar4 = local_130;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != -0x10);
          if (local_130 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_130 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_118[0] != (longlong *)0x0) {
            (**(code **)(*local_118[0] + 0x10))();
          }
          if (local_108[0] != (longlong *)0x0) {
            (**(code **)(*local_108[0] + 0x10))();
          }
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          iVar6 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar6 + 1U) {
            FUN_14001d63e(param_6,iVar6);
          }
          lVar13 = *param_6;
          *(longlong **)(lVar13 + (longlong)iVar6 * 0x10) = local_f8;
          if (local_f8 != (longlong *)0x0) {
            (**(code **)(*local_f8 + 8))();
          }
          *(undefined4 *)(lVar13 + (longlong)iVar6 * 0x10 + 8) = local_f0;
          if (local_f8 != (longlong *)0x0) {
            (**(code **)(*local_f8 + 0x10))();
          }
        }
        goto LAB_148168a38;
      }
      break;
    }
    lVar14 = lVar14 + 0xc;
  } while (lVar16 * 0xc != lVar14);
LAB_148168ae2:
  *(uint *)(param_3 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
    FUN_14024cd4c(param_3,iVar3);
    lVar10 = *param_3;
  }
  *(int *)(lVar10 + 8 + lVar16 * 0xc) = local_e0[0];
  *(longlong *)(lVar10 + lVar16 * 0xc) = local_e8;
  uVar11 = FUN_144741050(local_e0);
  iVar7 = FUN_144a81174(uVar11);
  iVar6 = *param_5;
  iVar3 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
    FUN_1447808da(param_4,iVar3);
  }
  *(int *)(*param_4 + (longlong)iVar3 * 4) = iVar6;
  *param_5 = *param_5 + (iVar7 >> 2);
LAB_148168a38:
  lVar8 = lVar8 + 0x50;
  if (lVar8 == lVar9) goto LAB_1481689ac;
  goto LAB_148168a0e;
}



// FUNCTION 148168e7a FUN_148168e7a body=38 status=ok
// SIG undefined FUN_148168e7a(void)

undefined8 FUN_148168e7a(undefined8 param_1,int param_2)

{
  FUN_14815d6f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148168eb6 FUN_148168eb6 body=42 status=ok
// SIG undefined FUN_148168eb6(void)

undefined8 FUN_148168eb6(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurveBase.h"
                ,0x9b,L"Pure virtual not implemented (%s)",
                L"UNiagaraDataInterfaceCurveBase::GetCurveNumElems()");
  return 0;
}



// FUNCTION 148168ee0 FUN_148168ee0 body=41 status=ok
// SIG undefined FUN_148168ee0(void)

void FUN_148168ee0(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurveBase.h"
                ,0xa0,L"Pure virtual not implemented (%s)",
                L"UNiagaraDataInterfaceCurveBase::UpdateTimeRanges()");
  return;
}



// FUNCTION 148168f0a FUN_148168f0a body=54 status=ok
// SIG undefined FUN_148168f0a(void)

undefined8 * FUN_148168f0a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterfaceCurveBase.h"
                ,0xa1,L"Pure virtual not implemented (%s)",
                L"UNiagaraDataInterfaceCurveBase::BuildLUT()");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148168f7a FUN_148168f7a body=29 status=ok
// SIG undefined FUN_148168f7a(void)

undefined8 FUN_148168f7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148168fac FUN_148168fac body=93 status=ok
// SIG undefined FUN_148168fac(void)

void FUN_148168fac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816900a FUN_14816900a body=93 status=ok
// SIG undefined FUN_14816900a(void)

void FUN_14816900a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca670;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169068 FUN_148169068 body=126 status=ok
// SIG undefined FUN_148169068(void)

void FUN_148169068(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca670;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481690d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481690f0 FUN_1481690f0 body=20 status=ok
// SIG undefined FUN_1481690f0(void)

undefined1 FUN_1481690f0(longlong param_1)

{
  FUN_148158878(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148169104 FUN_148169104 body=29 status=ok
// SIG undefined FUN_148169104(void)

undefined8 FUN_148169104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148169136 FUN_148169136 body=93 status=ok
// SIG undefined FUN_148169136(void)

void FUN_148169136(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca6e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169194 FUN_148169194 body=93 status=ok
// SIG undefined FUN_148169194(void)

void FUN_148169194(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca6e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481691f2 FUN_1481691f2 body=126 status=ok
// SIG undefined FUN_1481691f2(void)

void FUN_1481691f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca6e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148169261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816927a FUN_14816927a body=20 status=ok
// SIG undefined FUN_14816927a(void)

undefined1 FUN_14816927a(longlong param_1)

{
  FUN_14816928e(param_1 + 0x18);
  return 1;
}



// FUNCTION 14816928e FUN_14816928e body=151 status=ok
// SIG undefined FUN_14816928e(void)

void FUN_14816928e(longlong *param_1,char *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  FUN_144a76cd4(&local_28);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar3 = 0;
    do {
      puVar1 = local_28 + local_20;
      *local_28 = *(undefined4 *)(*(longlong *)(lVar2 + 0x28) + 0x158);
      iVar3 = iVar3 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_28 = puVar1;
    } while (iVar3 < *piVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148169326 FUN_148169326 body=77 status=ok
// SIG undefined FUN_148169326(void)

void FUN_148169326(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[4] != 0) {
      plVar2 = puVar1 + 8;
      if ((longlong *)puVar1[6] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[6];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 148169374 FUN_148169374 body=63 status=ok
// SIG undefined FUN_148169374(void)

void FUN_148169374(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[4] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1481693b4 FUN_1481693b4 body=52 status=ok
// SIG undefined FUN_1481693b4(void)

void FUN_1481693b4(longlong *param_1)

{
  FUN_1481693e8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481693e8 FUN_1481693e8 body=313 status=ok
// SIG undefined FUN_1481693e8(void)

void FUN_1481693e8(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 148169522 FUN_148169522 body=52 status=ok
// SIG undefined FUN_148169522(void)

void FUN_148169522(longlong *param_1)

{
  FUN_148169556();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148169556 FUN_148169556 body=337 status=ok
// SIG undefined FUN_148169556(void)

void FUN_148169556(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1481696a8(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481696a8 FUN_1481696a8 body=47 status=ok
// SIG undefined FUN_1481696a8(void)

void FUN_1481696a8(longlong param_1,int param_2)

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



// FUNCTION 1481696d8 FUN_1481696d8 body=29 status=ok
// SIG undefined FUN_1481696d8(void)

undefined8 FUN_1481696d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816970a FUN_14816970a body=93 status=ok
// SIG undefined FUN_14816970a(void)

void FUN_14816970a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169768 FUN_148169768 body=93 status=ok
// SIG undefined FUN_148169768(void)

void FUN_148169768(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca750;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481697c6 FUN_1481697c6 body=126 status=ok
// SIG undefined FUN_1481697c6(void)

void FUN_1481697c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca750;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148169835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148169856 FUN_148169856 body=24 status=ok
// SIG undefined FUN_148169856(void)

undefined8 FUN_148169856(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x440))();
  return 1;
}



// FUNCTION 14816986e FUN_14816986e body=29 status=ok
// SIG undefined FUN_14816986e(void)

undefined8 FUN_14816986e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481698a0 FUN_1481698a0 body=93 status=ok
// SIG undefined FUN_1481698a0(void)

void FUN_1481698a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca7c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481698fe FUN_1481698fe body=93 status=ok
// SIG undefined FUN_1481698fe(void)

void FUN_1481698fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca7c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816995c FUN_14816995c body=126 status=ok
// SIG undefined FUN_14816995c(void)

void FUN_14816995c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca7c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481699cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481699ec FUN_1481699ec body=24 status=ok
// SIG undefined FUN_1481699ec(void)

undefined8 FUN_1481699ec(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x448))();
  return 1;
}



// FUNCTION 148169a04 FUN_148169a04 body=29 status=ok
// SIG undefined FUN_148169a04(void)

undefined8 FUN_148169a04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148169a36 FUN_148169a36 body=93 status=ok
// SIG undefined FUN_148169a36(void)

void FUN_148169a36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169a94 FUN_148169a94 body=93 status=ok
// SIG undefined FUN_148169a94(void)

void FUN_148169a94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca830;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169af2 FUN_148169af2 body=126 status=ok
// SIG undefined FUN_148169af2(void)

void FUN_148169af2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca830;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148169b61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148169b82 FUN_148169b82 body=24 status=ok
// SIG undefined FUN_148169b82(void)

undefined8 FUN_148169b82(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x450))();
  return 1;
}



// FUNCTION 148169b9a FUN_148169b9a body=29 status=ok
// SIG undefined FUN_148169b9a(void)

undefined8 FUN_148169b9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148169bcc FUN_148169bcc body=93 status=ok
// SIG undefined FUN_148169bcc(void)

void FUN_148169bcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca8a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169c2a FUN_148169c2a body=93 status=ok
// SIG undefined FUN_148169c2a(void)

void FUN_148169c2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca8a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169c88 FUN_148169c88 body=126 status=ok
// SIG undefined FUN_148169c88(void)

void FUN_148169c88(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca8a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148169cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148169d18 FUN_148169d18 body=24 status=ok
// SIG undefined FUN_148169d18(void)

undefined8 FUN_148169d18(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x458))();
  return 1;
}



// FUNCTION 148169d30 FUN_148169d30 body=29 status=ok
// SIG undefined FUN_148169d30(void)

undefined8 FUN_148169d30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148169d62 FUN_148169d62 body=93 status=ok
// SIG undefined FUN_148169d62(void)

void FUN_148169d62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169dc0 FUN_148169dc0 body=93 status=ok
// SIG undefined FUN_148169dc0(void)

void FUN_148169dc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169e1e FUN_148169e1e body=126 status=ok
// SIG undefined FUN_148169e1e(void)

void FUN_148169e1e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148169e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148169eae FUN_148169eae body=24 status=ok
// SIG undefined FUN_148169eae(void)

undefined8 FUN_148169eae(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x460))();
  return 1;
}



// FUNCTION 148169ec6 FUN_148169ec6 body=29 status=ok
// SIG undefined FUN_148169ec6(void)

undefined8 FUN_148169ec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148169ef8 FUN_148169ef8 body=93 status=ok
// SIG undefined FUN_148169ef8(void)

void FUN_148169ef8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169f56 FUN_148169f56 body=93 status=ok
// SIG undefined FUN_148169f56(void)

void FUN_148169f56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148169fb4 FUN_148169fb4 body=126 status=ok
// SIG undefined FUN_148169fb4(void)

void FUN_148169fb4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca980;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a023. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a044 FUN_14816a044 body=24 status=ok
// SIG undefined FUN_14816a044(void)

undefined8 FUN_14816a044(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x468))();
  return 1;
}



// FUNCTION 14816a05c FUN_14816a05c body=29 status=ok
// SIG undefined FUN_14816a05c(void)

undefined8 FUN_14816a05c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816a08e FUN_14816a08e body=93 status=ok
// SIG undefined FUN_14816a08e(void)

void FUN_14816a08e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca9f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a0ec FUN_14816a0ec body=93 status=ok
// SIG undefined FUN_14816a0ec(void)

void FUN_14816a0ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adca9f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a14a FUN_14816a14a body=126 status=ok
// SIG undefined FUN_14816a14a(void)

void FUN_14816a14a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adca9f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a1da FUN_14816a1da body=24 status=ok
// SIG undefined FUN_14816a1da(void)

undefined8 FUN_14816a1da(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x470))();
  return 1;
}



// FUNCTION 14816a1f2 FUN_14816a1f2 body=29 status=ok
// SIG undefined FUN_14816a1f2(void)

undefined8 FUN_14816a1f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816a224 FUN_14816a224 body=93 status=ok
// SIG undefined FUN_14816a224(void)

void FUN_14816a224(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaa60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a282 FUN_14816a282 body=93 status=ok
// SIG undefined FUN_14816a282(void)

void FUN_14816a282(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaa60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a2e0 FUN_14816a2e0 body=126 status=ok
// SIG undefined FUN_14816a2e0(void)

void FUN_14816a2e0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcaa60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a370 FUN_14816a370 body=24 status=ok
// SIG undefined FUN_14816a370(void)

undefined8 FUN_14816a370(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x478))();
  return 1;
}



// FUNCTION 14816a388 FUN_14816a388 body=29 status=ok
// SIG undefined FUN_14816a388(void)

undefined8 FUN_14816a388(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816a3ba FUN_14816a3ba body=93 status=ok
// SIG undefined FUN_14816a3ba(void)

void FUN_14816a3ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a418 FUN_14816a418 body=93 status=ok
// SIG undefined FUN_14816a418(void)

void FUN_14816a418(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a476 FUN_14816a476 body=126 status=ok
// SIG undefined FUN_14816a476(void)

void FUN_14816a476(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcaad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a4e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a506 FUN_14816a506 body=24 status=ok
// SIG undefined FUN_14816a506(void)

undefined8 FUN_14816a506(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x480))();
  return 1;
}



// FUNCTION 14816a51e FUN_14816a51e body=29 status=ok
// SIG undefined FUN_14816a51e(void)

undefined8 FUN_14816a51e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816a550 FUN_14816a550 body=93 status=ok
// SIG undefined FUN_14816a550(void)

void FUN_14816a550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcab40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a5ae FUN_14816a5ae body=93 status=ok
// SIG undefined FUN_14816a5ae(void)

void FUN_14816a5ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcab40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a60c FUN_14816a60c body=126 status=ok
// SIG undefined FUN_14816a60c(void)

void FUN_14816a60c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcab40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a69c FUN_14816a69c body=24 status=ok
// SIG undefined FUN_14816a69c(void)

undefined8 FUN_14816a69c(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x488))();
  return 1;
}



// FUNCTION 14816a6b4 FUN_14816a6b4 body=29 status=ok
// SIG undefined FUN_14816a6b4(void)

undefined8 FUN_14816a6b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816a6e6 FUN_14816a6e6 body=93 status=ok
// SIG undefined FUN_14816a6e6(void)

void FUN_14816a6e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcabb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a744 FUN_14816a744 body=93 status=ok
// SIG undefined FUN_14816a744(void)

void FUN_14816a744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcabb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a7a2 FUN_14816a7a2 body=126 status=ok
// SIG undefined FUN_14816a7a2(void)

void FUN_14816a7a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcabb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a832 FUN_14816a832 body=24 status=ok
// SIG undefined FUN_14816a832(void)

undefined8 FUN_14816a832(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x490))();
  return 1;
}



// FUNCTION 14816a84a FUN_14816a84a body=29 status=ok
// SIG undefined FUN_14816a84a(void)

undefined8 FUN_14816a84a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816a87c FUN_14816a87c body=93 status=ok
// SIG undefined FUN_14816a87c(void)

void FUN_14816a87c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcac20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a8da FUN_14816a8da body=93 status=ok
// SIG undefined FUN_14816a8da(void)

void FUN_14816a8da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcac20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816a938 FUN_14816a938 body=126 status=ok
// SIG undefined FUN_14816a938(void)

void FUN_14816a938(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcac20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816a9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816a9c8 FUN_14816a9c8 body=24 status=ok
// SIG undefined FUN_14816a9c8(void)

undefined8 FUN_14816a9c8(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x498))();
  return 1;
}



// FUNCTION 14816a9e0 FUN_14816a9e0 body=29 status=ok
// SIG undefined FUN_14816a9e0(void)

undefined8 FUN_14816a9e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816aa12 FUN_14816aa12 body=93 status=ok
// SIG undefined FUN_14816aa12(void)

void FUN_14816aa12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcac90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816aa70 FUN_14816aa70 body=93 status=ok
// SIG undefined FUN_14816aa70(void)

void FUN_14816aa70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcac90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816aace FUN_14816aace body=126 status=ok
// SIG undefined FUN_14816aace(void)

void FUN_14816aace(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcac90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816ab3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816ab5e FUN_14816ab5e body=24 status=ok
// SIG undefined FUN_14816ab5e(void)

undefined8 FUN_14816ab5e(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x4a0))();
  return 1;
}



// FUNCTION 14816ab76 FUN_14816ab76 body=561 status=ok
// SIG undefined FUN_14816ab76(void)

void FUN_14816ab76(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  void *_Dst;
  void *_Src;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = param_1[6];
  if (0 < (longlong)iVar10) {
    iVar4 = param_1[4];
    if (iVar4 - iVar10 == 0 || iVar4 < iVar10) {
      iVar10 = iVar10 - iVar4;
      param_1[6] = iVar10;
      param_1[4] = 0;
      if (param_1[5] < 0) {
        FUN_14482f6fa(param_1 + 2,0);
        iVar10 = param_1[6];
      }
    }
    else {
      memmove(*(void **)(param_1 + 2),
              (void *)((longlong)*(void **)(param_1 + 2) + (longlong)iVar10 * 4),
              (longlong)(iVar4 - iVar10) << 2);
      param_1[4] = param_1[4] - iVar10;
      FUN_1401fef06(param_1 + 2);
      param_1[6] = 0;
      iVar10 = 0;
    }
  }
  uVar7 = *(uint *)(param_2 + 1);
  iVar9 = param_1[4];
  iVar4 = iVar9 + uVar7;
  iVar5 = iVar4 - iVar10;
  if (iVar5 < 0) {
    param_1[6] = iVar10 - uVar7;
  }
  else {
    plVar1 = (longlong *)(param_1 + 2);
    if (*param_1 <= iVar5) {
      uVar8 = ~((iVar5 - *param_1) / param_1[1]) * param_1[1] + iVar5;
      if ((int)uVar7 < (int)uVar8) {
        uVar2 = (uVar7 - uVar8) + iVar9;
        if (0 < (int)uVar2) {
          memmove(*(void **)(param_1 + 2),
                  (void *)((longlong)*(void **)(param_1 + 2) + (ulonglong)uVar2 * 4),
                  (longlong)(int)-(uVar7 - uVar8) << 2);
          param_1[4] = param_1[4] - uVar2;
          FUN_1401fef06(plVar1);
          uVar7 = *(uint *)(param_2 + 1);
          iVar9 = param_1[4];
          iVar4 = iVar9 + uVar7;
        }
        _Src = (void *)*param_2;
        param_1[4] = iVar4;
        if ((uint)(param_1[5] - iVar9) < uVar7) {
          FUN_14475e4ac(plVar1,iVar9);
        }
        else if (uVar7 == 0) {
          return;
        }
        _Dst = (void *)((longlong)iVar9 * 4 + *plVar1);
        uVar6 = (ulonglong)(int)uVar7;
      }
      else {
        if ((int)uVar8 < 1) {
          param_1[6] = -uVar8;
          param_1[4] = 0;
          if (-1 < param_1[5]) {
            return;
          }
          FUN_14482f6fa(plVar1,0);
          return;
        }
        FUN_14005ea14(plVar1,uVar8);
        iVar10 = param_1[4];
        param_1[4] = iVar10 + uVar8;
        if ((uint)(param_1[5] - iVar10) < uVar8) {
          FUN_14475e4ac(plVar1);
        }
        uVar6 = (ulonglong)uVar8;
        _Src = (void *)(((longlong)(int)param_2[1] - (longlong)(int)uVar8) * 4 + *param_2);
        _Dst = (void *)*plVar1;
      }
      memcpy(_Dst,_Src,uVar6 << 2);
      return;
    }
    uVar8 = iVar5 - iVar9;
    lVar3 = *param_2;
    param_1[4] = iVar5;
    if ((uint)(param_1[5] - iVar9) < uVar8) {
      FUN_14475e4ac(plVar1,iVar9);
    }
    if (iVar5 != iVar9) {
      memcpy((void *)((longlong)iVar9 * 4 + *plVar1),
             (void *)((longlong)(int)(uVar7 - uVar8) * 4 + lVar3),(longlong)(int)uVar8 << 2);
    }
    param_1[6] = 0;
  }
  return;
}



// FUNCTION 14816ada8 FUN_14816ada8 body=29 status=ok
// SIG undefined FUN_14816ada8(void)

undefined8 FUN_14816ada8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816adda FUN_14816adda body=93 status=ok
// SIG undefined FUN_14816adda(void)

void FUN_14816adda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcad00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816ae38 FUN_14816ae38 body=93 status=ok
// SIG undefined FUN_14816ae38(void)

void FUN_14816ae38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcad00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816ae96 FUN_14816ae96 body=126 status=ok
// SIG undefined FUN_14816ae96(void)

void FUN_14816ae96(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcad00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816af05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816af1e FUN_14816af1e body=20 status=ok
// SIG undefined FUN_14816af1e(void)

undefined1 FUN_14816af1e(longlong param_1)

{
  FUN_14815e31c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14816af32 FUN_14816af32 body=29 status=ok
// SIG undefined FUN_14816af32(void)

undefined8 FUN_14816af32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816af64 FUN_14816af64 body=93 status=ok
// SIG undefined FUN_14816af64(void)

void FUN_14816af64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcad70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816afc2 FUN_14816afc2 body=93 status=ok
// SIG undefined FUN_14816afc2(void)

void FUN_14816afc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcad70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b020 FUN_14816b020 body=126 status=ok
// SIG undefined FUN_14816b020(void)

void FUN_14816b020(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcad70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816b08f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816b0a8 FUN_14816b0a8 body=20 status=ok
// SIG undefined FUN_14816b0a8(void)

undefined1 FUN_14816b0a8(longlong param_1)

{
  FUN_14815e440(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14816b0bc FUN_14816b0bc body=138 status=ok
// SIG undefined FUN_14816b0bc(void)

void FUN_14816b0bc(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14816b156 FUN_14816b156 body=93 status=ok
// SIG undefined FUN_14816b156(void)

void FUN_14816b156(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcae50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b1b4 FUN_14816b1b4 body=93 status=ok
// SIG undefined FUN_14816b1b4(void)

void FUN_14816b1b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcae50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b212 FUN_14816b212 body=126 status=ok
// SIG undefined FUN_14816b212(void)

void FUN_14816b212(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcae50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816b281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816b290 FUN_14816b290 body=19 status=ok
// SIG undefined FUN_14816b290(void)

undefined1 FUN_14816b290(undefined8 param_1,undefined8 param_2)

{
  FUN_140cd0fea(param_2);
  return 1;
}



// FUNCTION 14816b2a4 FUN_14816b2a4 body=29 status=ok
// SIG undefined FUN_14816b2a4(void)

undefined8 FUN_14816b2a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816b2d6 FUN_14816b2d6 body=93 status=ok
// SIG undefined FUN_14816b2d6(void)

void FUN_14816b2d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaec0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b334 FUN_14816b334 body=93 status=ok
// SIG undefined FUN_14816b334(void)

void FUN_14816b334(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaec0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b392 FUN_14816b392 body=126 status=ok
// SIG undefined FUN_14816b392(void)

void FUN_14816b392(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcaec0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816b401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816b418 FUN_14816b418 body=19 status=ok
// SIG undefined FUN_14816b418(void)

undefined1 FUN_14816b418(undefined8 param_1,undefined8 param_2)

{
  FUN_14815ece4(param_2);
  return 1;
}



// FUNCTION 14816b42c FUN_14816b42c body=29 status=ok
// SIG undefined FUN_14816b42c(void)

undefined8 FUN_14816b42c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816b45e FUN_14816b45e body=93 status=ok
// SIG undefined FUN_14816b45e(void)

void FUN_14816b45e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaf30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b4bc FUN_14816b4bc body=93 status=ok
// SIG undefined FUN_14816b4bc(void)

void FUN_14816b4bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcaf30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b51a FUN_14816b51a body=126 status=ok
// SIG undefined FUN_14816b51a(void)

void FUN_14816b51a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcaf30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816b589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816b5a0 FUN_14816b5a0 body=19 status=ok
// SIG undefined FUN_14816b5a0(void)

undefined1 FUN_14816b5a0(undefined8 param_1,undefined8 param_2)

{
  FUN_14815ea06(param_2);
  return 1;
}



// FUNCTION 14816b5c4 FUN_14816b5c4 body=93 status=ok
// SIG undefined FUN_14816b5c4(void)

void FUN_14816b5c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcafa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b622 FUN_14816b622 body=93 status=ok
// SIG undefined FUN_14816b622(void)

void FUN_14816b622(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcafa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b680 FUN_14816b680 body=126 status=ok
// SIG undefined FUN_14816b680(void)

void FUN_14816b680(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcafa0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816b6ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816b6fe FUN_14816b6fe body=19 status=ok
// SIG undefined FUN_14816b6fe(void)

undefined1 FUN_14816b6fe(undefined8 param_1,undefined8 param_2)

{
  FUN_14064bbe0(param_2);
  return 1;
}



// FUNCTION 14816b712 FUN_14816b712 body=31 status=ok
// SIG undefined FUN_14816b712(void)

undefined8 FUN_14816b712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14816b746 FUN_14816b746 body=93 status=ok
// SIG undefined FUN_14816b746(void)

void FUN_14816b746(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcb080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b7a4 FUN_14816b7a4 body=93 status=ok
// SIG undefined FUN_14816b7a4(void)

void FUN_14816b7a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcb080;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b802 FUN_14816b802 body=126 status=ok
// SIG undefined FUN_14816b802(void)

void FUN_14816b802(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adcb080;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014816b871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14816b880 FUN_14816b880 body=19 status=ok
// SIG undefined FUN_14816b880(void)

undefined1 FUN_14816b880(undefined8 param_1,undefined8 param_2)

{
  FUN_140f7285a(param_2);
  return 1;
}



// FUNCTION 14816b8a4 FUN_14816b8a4 body=93 status=ok
// SIG undefined FUN_14816b8a4(void)

void FUN_14816b8a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcb0f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14816b902 FUN_14816b902 body=93 status=ok
// SIG undefined FUN_14816b902(void)

void FUN_14816b902(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adcb0f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


